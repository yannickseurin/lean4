// Lean compiler output
// Module: Lean.Parser.Tactic
// Imports: public import Lean.Parser.Term public import Lean.Parser.Tactic.Doc public import Std.Tactic.Do.Syntax
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
lean_object* l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object*, lean_object*);
lean_object* l_Lean_Parser_symbol_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Tactic_tacticSeq;
extern lean_object* l_Lean_Parser_Term_syntheticHole;
lean_object* l_Lean_Parser_orelse(lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Term_hole;
lean_object* l_Lean_Parser_Term_matchAlts(lean_object*);
lean_object* l_Lean_Parser_nonReservedSymbol(lean_object*, uint8_t);
lean_object* l_Lean_Parser_andthen(lean_object*, lean_object*);
lean_object* l_Lean_Parser_leadingNode(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot(lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Parser_withAntiquot(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Parser_registerAlias(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Term_hole_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_tacticSeq_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Term_syntheticHole_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_orelse_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_orelse_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_registerAlias(lean_object*, lean_object*);
lean_object* l_Lean_Parser_Term_hole_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_tacticSeq_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Term_syntheticHole_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_registerAlias(lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Tactic_tacticSeqIndentGt;
lean_object* l_Lean_Parser_Term_matchAlts_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ppDedent_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Term_matchDiscr_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_sepBy1_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_tacticSeqIndentGt_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_tacticSeqIndentGt_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_symbol(lean_object*);
extern lean_object* l_Lean_Parser_Term_matchDiscr;
lean_object* l_Lean_Parser_sepBy1(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Parser_Tactic_tacticSeqBracketed_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_symbol_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Term_matchDiscr_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_sepBy1_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_errorAtSavedPos_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ident_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_withPosition_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Term_motive;
lean_object* l_Lean_Parser_optional(lean_object*);
extern lean_object* l_Lean_Parser_Term_generalizingParam;
extern lean_object* l_Lean_Parser_leadPrec;
extern lean_object* l_Lean_PrettyPrinter_formatterAttribute;
lean_object* l_Lean_Parser_mkAntiquot_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Term_motive_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_optional_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Term_generalizingParam_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_leadingNode_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Term_motive_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_errorAtSavedPos(lean_object*, uint8_t);
extern lean_object* l_Lean_Parser_ident;
lean_object* l_Lean_Parser_withPosition(lean_object*);
lean_object* l_Lean_Parser_Term_generalizingParam_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_withCache(lean_object*, lean_object*);
extern lean_object* l_Lean_PrettyPrinter_parenthesizerAttribute;
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Term_matchAlts_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_nonReservedSymbol_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_nonReservedSymbol_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ppDedent_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_optional_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_addBuiltinLeadingParser(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_errorAtSavedPos_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ident_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_withPosition_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDocString(lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Tactic_tacticSeqBracketed;
static const lean_string_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__0_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__0_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__0_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__1_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__0_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(13, 106, 54, 236, 164, 218, 24, 154)}};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__1_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__1_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__2_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__2_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__2_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__3_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__3_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__3_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__4_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__4_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__4_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__5_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__2_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__5_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__5_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__3_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__5_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__5_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__4_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__5_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__5_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__0_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__5_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__5_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__6_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__6_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2_;
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__7_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__5_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__7_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__7_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__8_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__8_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2_;
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__9_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__9_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__9_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__10_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__10_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__11_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "tacticSeqIndentGt"};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__11_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__11_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__12_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__11_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(13, 96, 154, 40, 0, 37, 199, 17)}};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__12_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__12_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__13_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__2_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__13_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__13_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__3_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__13_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__13_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__4_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__13_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__13_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__11_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(212, 234, 202, 179, 65, 11, 242, 216)}};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__13_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__13_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__14_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__14_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2_;
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__15_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__13_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__15_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__15_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__16_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Tactic_tacticSeqIndentGt_formatter___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__16_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__16_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__17_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__16_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__17_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__17_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__18_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Tactic_tacticSeqIndentGt_parenthesizer___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__18_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__18_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__19_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__18_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__19_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__19_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__20_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Tactic_tacticSeq_formatter___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__20_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__20_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__21_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__20_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__21_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__21_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__22_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Tactic_tacticSeq_parenthesizer___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__22_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__22_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__23_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__22_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__23_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__23_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2____boxed(lean_object*);
static const lean_string_object l_Lean_Parser_Tactic_unknown___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "unknown"};
static const lean_object* l_Lean_Parser_Tactic_unknown___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_unknown___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_unknown___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__2_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_unknown___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_unknown___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__3_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_unknown___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_unknown___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__4_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_unknown___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_unknown___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_unknown___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 186, 215, 255, 42, 124, 128, 137)}};
static const lean_object* l_Lean_Parser_Tactic_unknown___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_unknown___closed__1_value;
static lean_once_cell_t l_Lean_Parser_Tactic_unknown___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_unknown___closed__2;
static const lean_string_object l_Lean_Parser_Tactic_unknown___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "unknown tactic"};
static const lean_object* l_Lean_Parser_Tactic_unknown___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_unknown___closed__3_value;
static lean_once_cell_t l_Lean_Parser_Tactic_unknown___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_unknown___closed__4;
static lean_once_cell_t l_Lean_Parser_Tactic_unknown___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_unknown___closed__5;
static lean_once_cell_t l_Lean_Parser_Tactic_unknown___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_unknown___closed__6;
static lean_once_cell_t l_Lean_Parser_Tactic_unknown___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_unknown___closed__7;
static lean_once_cell_t l_Lean_Parser_Tactic_unknown___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_unknown___closed__8;
static lean_once_cell_t l_Lean_Parser_Tactic_unknown___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_unknown___closed__9;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_unknown;
static const lean_string_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "tactic"};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(99, 76, 33, 121, 85, 143, 17, 224)}};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(24) << 1) | 1)),((lean_object*)(((size_t)(25) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(25) << 1) | 1)),((lean_object*)(((size_t)(63) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_declRange__3___closed__0_value),((lean_object*)(((size_t)(25) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_declRange__3___closed__1_value),((lean_object*)(((size_t)(63) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(24) << 1) | 1)),((lean_object*)(((size_t)(29) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(24) << 1) | 1)),((lean_object*)(((size_t)(38) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_declRange__3___closed__3_value),((lean_object*)(((size_t)(29) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_declRange__3___closed__4_value),((lean_object*)(((size_t)(38) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_declRange__3___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Tactic_unknown_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_unknown___closed__0_value),((lean_object*)&l_Lean_Parser_Tactic_unknown___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Tactic_unknown_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_unknown_formatter___closed__0_value;
static const lean_closure_object l_Lean_Parser_Tactic_unknown_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_ident_formatter___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_Tactic_unknown_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_unknown_formatter___closed__1_value;
static const lean_closure_object l_Lean_Parser_Tactic_unknown_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_errorAtSavedPos_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_unknown___closed__3_value),((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Tactic_unknown_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_unknown_formatter___closed__2_value;
static const lean_closure_object l_Lean_Parser_Tactic_unknown_formatter___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_unknown_formatter___closed__1_value),((lean_object*)&l_Lean_Parser_Tactic_unknown_formatter___closed__2_value)} };
static const lean_object* l_Lean_Parser_Tactic_unknown_formatter___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_unknown_formatter___closed__3_value;
static const lean_closure_object l_Lean_Parser_Tactic_unknown_formatter___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_withPosition_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_unknown_formatter___closed__3_value)} };
static const lean_object* l_Lean_Parser_Tactic_unknown_formatter___closed__4 = (const lean_object*)&l_Lean_Parser_Tactic_unknown_formatter___closed__4_value;
static const lean_closure_object l_Lean_Parser_Tactic_unknown_formatter___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_leadingNode_formatter___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_unknown___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_unknown_formatter___closed__4_value)} };
static const lean_object* l_Lean_Parser_Tactic_unknown_formatter___closed__5 = (const lean_object*)&l_Lean_Parser_Tactic_unknown_formatter___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_unknown_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_unknown_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_formatter__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "formatter"};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_formatter__7___closed__0 = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_formatter__7___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_formatter__7___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__2_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_formatter__7___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_formatter__7___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__3_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_formatter__7___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_formatter__7___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__4_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_formatter__7___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_formatter__7___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_unknown___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 186, 215, 255, 42, 124, 128, 137)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_formatter__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_formatter__7___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_formatter__7___closed__0_value),LEAN_SCALAR_PTR_LITERAL(189, 70, 177, 213, 33, 170, 221, 209)}};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_formatter__7___closed__1 = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_formatter__7___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_formatter__7();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_formatter__7___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Tactic_unknown_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_unknown___closed__0_value),((lean_object*)&l_Lean_Parser_Tactic_unknown___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Tactic_unknown_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_unknown_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Parser_Tactic_unknown_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_ident_parenthesizer___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_Tactic_unknown_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_unknown_parenthesizer___closed__1_value;
static const lean_closure_object l_Lean_Parser_Tactic_unknown_parenthesizer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_errorAtSavedPos_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_unknown___closed__3_value),((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Tactic_unknown_parenthesizer___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_unknown_parenthesizer___closed__2_value;
static const lean_closure_object l_Lean_Parser_Tactic_unknown_parenthesizer___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_unknown_parenthesizer___closed__1_value),((lean_object*)&l_Lean_Parser_Tactic_unknown_parenthesizer___closed__2_value)} };
static const lean_object* l_Lean_Parser_Tactic_unknown_parenthesizer___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_unknown_parenthesizer___closed__3_value;
static const lean_closure_object l_Lean_Parser_Tactic_unknown_parenthesizer___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_withPosition_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_unknown_parenthesizer___closed__3_value)} };
static const lean_object* l_Lean_Parser_Tactic_unknown_parenthesizer___closed__4 = (const lean_object*)&l_Lean_Parser_Tactic_unknown_parenthesizer___closed__4_value;
static const lean_closure_object l_Lean_Parser_Tactic_unknown_parenthesizer___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_unknown___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_unknown_parenthesizer___closed__4_value)} };
static const lean_object* l_Lean_Parser_Tactic_unknown_parenthesizer___closed__5 = (const lean_object*)&l_Lean_Parser_Tactic_unknown_parenthesizer___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_unknown_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_unknown_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_parenthesizer__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "parenthesizer"};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_parenthesizer__11___closed__0 = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_parenthesizer__11___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_parenthesizer__11___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__2_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_parenthesizer__11___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_parenthesizer__11___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__3_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_parenthesizer__11___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_parenthesizer__11___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__4_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_parenthesizer__11___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_parenthesizer__11___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_unknown___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 186, 215, 255, 42, 124, 128, 137)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_parenthesizer__11___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_parenthesizer__11___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_parenthesizer__11___closed__0_value),LEAN_SCALAR_PTR_LITERAL(201, 132, 153, 21, 93, 168, 106, 226)}};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_parenthesizer__11___closed__1 = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_parenthesizer__11___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_parenthesizer__11();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_parenthesizer__11___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_nestedTactic;
static const lean_string_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_nestedTactic___regBuiltin_Lean_Parser_Tactic_nestedTactic__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "nestedTactic"};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_nestedTactic___regBuiltin_Lean_Parser_Tactic_nestedTactic__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_nestedTactic___regBuiltin_Lean_Parser_Tactic_nestedTactic__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_nestedTactic___regBuiltin_Lean_Parser_Tactic_nestedTactic__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__2_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_nestedTactic___regBuiltin_Lean_Parser_Tactic_nestedTactic__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_nestedTactic___regBuiltin_Lean_Parser_Tactic_nestedTactic__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__3_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_nestedTactic___regBuiltin_Lean_Parser_Tactic_nestedTactic__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_nestedTactic___regBuiltin_Lean_Parser_Tactic_nestedTactic__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__4_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_nestedTactic___regBuiltin_Lean_Parser_Tactic_nestedTactic__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_nestedTactic___regBuiltin_Lean_Parser_Tactic_nestedTactic__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_nestedTactic___regBuiltin_Lean_Parser_Tactic_nestedTactic__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(49, 38, 10, 255, 87, 102, 123, 100)}};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_nestedTactic___regBuiltin_Lean_Parser_Tactic_nestedTactic__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_nestedTactic___regBuiltin_Lean_Parser_Tactic_nestedTactic__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_nestedTactic___regBuiltin_Lean_Parser_Tactic_nestedTactic__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_nestedTactic___regBuiltin_Lean_Parser_Tactic_nestedTactic__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_nestedTactic___regBuiltin_Lean_Parser_Tactic_nestedTactic_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(27) << 1) | 1)),((lean_object*)(((size_t)(25) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_nestedTactic___regBuiltin_Lean_Parser_Tactic_nestedTactic_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_nestedTactic___regBuiltin_Lean_Parser_Tactic_nestedTactic_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_nestedTactic___regBuiltin_Lean_Parser_Tactic_nestedTactic_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(27) << 1) | 1)),((lean_object*)(((size_t)(63) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_nestedTactic___regBuiltin_Lean_Parser_Tactic_nestedTactic_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_nestedTactic___regBuiltin_Lean_Parser_Tactic_nestedTactic_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_nestedTactic___regBuiltin_Lean_Parser_Tactic_nestedTactic_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_nestedTactic___regBuiltin_Lean_Parser_Tactic_nestedTactic_declRange__3___closed__0_value),((lean_object*)(((size_t)(25) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_nestedTactic___regBuiltin_Lean_Parser_Tactic_nestedTactic_declRange__3___closed__1_value),((lean_object*)(((size_t)(63) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_nestedTactic___regBuiltin_Lean_Parser_Tactic_nestedTactic_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_nestedTactic___regBuiltin_Lean_Parser_Tactic_nestedTactic_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_nestedTactic___regBuiltin_Lean_Parser_Tactic_nestedTactic_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(27) << 1) | 1)),((lean_object*)(((size_t)(29) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_nestedTactic___regBuiltin_Lean_Parser_Tactic_nestedTactic_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_nestedTactic___regBuiltin_Lean_Parser_Tactic_nestedTactic_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_nestedTactic___regBuiltin_Lean_Parser_Tactic_nestedTactic_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(27) << 1) | 1)),((lean_object*)(((size_t)(41) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_nestedTactic___regBuiltin_Lean_Parser_Tactic_nestedTactic_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_nestedTactic___regBuiltin_Lean_Parser_Tactic_nestedTactic_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_nestedTactic___regBuiltin_Lean_Parser_Tactic_nestedTactic_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_nestedTactic___regBuiltin_Lean_Parser_Tactic_nestedTactic_declRange__3___closed__3_value),((lean_object*)(((size_t)(29) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_nestedTactic___regBuiltin_Lean_Parser_Tactic_nestedTactic_declRange__3___closed__4_value),((lean_object*)(((size_t)(41) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_nestedTactic___regBuiltin_Lean_Parser_Tactic_nestedTactic_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_nestedTactic___regBuiltin_Lean_Parser_Tactic_nestedTactic_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_nestedTactic___regBuiltin_Lean_Parser_Tactic_nestedTactic_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_nestedTactic___regBuiltin_Lean_Parser_Tactic_nestedTactic_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_nestedTactic___regBuiltin_Lean_Parser_Tactic_nestedTactic_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_nestedTactic___regBuiltin_Lean_Parser_Tactic_nestedTactic_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_nestedTactic___regBuiltin_Lean_Parser_Tactic_nestedTactic_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_nestedTactic___regBuiltin_Lean_Parser_Tactic_nestedTactic_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_nestedTactic___regBuiltin_Lean_Parser_Tactic_nestedTactic_declRange__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_nestedTactic_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_nestedTactic_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_nestedTactic_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_nestedTactic_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_Tactic_matchRhs___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_matchRhs___closed__0;
static lean_once_cell_t l_Lean_Parser_Tactic_matchRhs___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_matchRhs___closed__1;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_matchRhs;
static lean_once_cell_t l_Lean_Parser_Tactic_matchAlts___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_matchAlts___closed__0;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_matchAlts;
static const lean_string_object l_Lean_Parser_Tactic_match___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "match"};
static const lean_object* l_Lean_Parser_Tactic_match___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_match___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_match___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__2_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_match___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_match___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__3_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_match___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_match___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__4_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_match___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_match___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_match___closed__0_value),LEAN_SCALAR_PTR_LITERAL(232, 36, 240, 216, 203, 28, 130, 220)}};
static const lean_object* l_Lean_Parser_Tactic_match___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_match___closed__1_value;
static lean_once_cell_t l_Lean_Parser_Tactic_match___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_match___closed__2;
static const lean_string_object l_Lean_Parser_Tactic_match___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "match "};
static const lean_object* l_Lean_Parser_Tactic_match___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_match___closed__3_value;
static lean_once_cell_t l_Lean_Parser_Tactic_match___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_match___closed__4;
static lean_once_cell_t l_Lean_Parser_Tactic_match___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_match___closed__5;
static lean_once_cell_t l_Lean_Parser_Tactic_match___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_match___closed__6;
static const lean_string_object l_Lean_Parser_Tactic_match___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l_Lean_Parser_Tactic_match___closed__7 = (const lean_object*)&l_Lean_Parser_Tactic_match___closed__7_value;
static lean_once_cell_t l_Lean_Parser_Tactic_match___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_match___closed__8;
static lean_once_cell_t l_Lean_Parser_Tactic_match___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_match___closed__9;
static const lean_string_object l_Lean_Parser_Tactic_match___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = " with "};
static const lean_object* l_Lean_Parser_Tactic_match___closed__10 = (const lean_object*)&l_Lean_Parser_Tactic_match___closed__10_value;
static lean_once_cell_t l_Lean_Parser_Tactic_match___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_match___closed__11;
static lean_once_cell_t l_Lean_Parser_Tactic_match___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_match___closed__12;
static lean_once_cell_t l_Lean_Parser_Tactic_match___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_match___closed__13;
static lean_once_cell_t l_Lean_Parser_Tactic_match___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_match___closed__14;
static lean_once_cell_t l_Lean_Parser_Tactic_match___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_match___closed__15;
static lean_once_cell_t l_Lean_Parser_Tactic_match___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_match___closed__16;
static lean_once_cell_t l_Lean_Parser_Tactic_match___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_match___closed__17;
static lean_once_cell_t l_Lean_Parser_Tactic_match___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_match___closed__18;
static lean_once_cell_t l_Lean_Parser_Tactic_match___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_match___closed__19;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_match;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match__1___boxed(lean_object*);
static const lean_string_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_docString__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 399, .m_capacity = 399, .m_length = 398, .m_data = "`match` performs case analysis on one or more expressions.\nSee [Induction and Recursion][tpil4].\nThe syntax for the `match` tactic is the same as term-mode `match`, except that\nthe match arms are tactics instead of expressions.\n```\nexample (n : Nat) : n = n := by\n  match n with\n  | 0 => rfl\n  | i+1 => simp\n```\n\n[tpil4]: https://lean-lang.org/theorem_proving_in_lean4/induction_and_recursion.html\n"};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_docString__3___closed__0 = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_docString__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_docString__3();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_docString__3___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_declRange__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(45) << 1) | 1)),((lean_object*)(((size_t)(25) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_declRange__5___closed__0 = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_declRange__5___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_declRange__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(48) << 1) | 1)),((lean_object*)(((size_t)(32) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_declRange__5___closed__1 = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_declRange__5___closed__1_value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_declRange__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_declRange__5___closed__0_value),((lean_object*)(((size_t)(25) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_declRange__5___closed__1_value),((lean_object*)(((size_t)(32) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_declRange__5___closed__2 = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_declRange__5___closed__2_value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_declRange__5___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(45) << 1) | 1)),((lean_object*)(((size_t)(29) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_declRange__5___closed__3 = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_declRange__5___closed__3_value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_declRange__5___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(45) << 1) | 1)),((lean_object*)(((size_t)(36) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_declRange__5___closed__4 = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_declRange__5___closed__4_value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_declRange__5___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_declRange__5___closed__3_value),((lean_object*)(((size_t)(29) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_declRange__5___closed__4_value),((lean_object*)(((size_t)(36) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_declRange__5___closed__5 = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_declRange__5___closed__5_value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_declRange__5___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_declRange__5___closed__2_value),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_declRange__5___closed__5_value)}};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_declRange__5___closed__6 = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_declRange__5___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_declRange__5();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_declRange__5___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Tactic_matchRhs_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Term_hole_formatter___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_Tactic_matchRhs_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_matchRhs_formatter___closed__0_value;
static const lean_closure_object l_Lean_Parser_Tactic_matchRhs_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Term_syntheticHole_formatter___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_Tactic_matchRhs_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_matchRhs_formatter___closed__1_value;
static const lean_closure_object l_Lean_Parser_Tactic_matchRhs_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_orelse_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_matchRhs_formatter___closed__1_value),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__20_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value)} };
static const lean_object* l_Lean_Parser_Tactic_matchRhs_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_matchRhs_formatter___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_matchRhs_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_matchRhs_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_matchAlts_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_matchAlts_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_Tactic_match_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_match___closed__0_value),((lean_object*)&l_Lean_Parser_Tactic_match___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Tactic_match_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_match_formatter___closed__0_value;
static const lean_closure_object l_Lean_Parser_Tactic_match_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_match___closed__3_value)} };
static const lean_object* l_Lean_Parser_Tactic_match_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_match_formatter___closed__1_value;
static const lean_closure_object l_Lean_Parser_Tactic_match_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Term_generalizingParam_formatter___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_Tactic_match_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_match_formatter___closed__2_value;
static const lean_closure_object l_Lean_Parser_Tactic_match_formatter___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_optional_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_match_formatter___closed__2_value)} };
static const lean_object* l_Lean_Parser_Tactic_match_formatter___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_match_formatter___closed__3_value;
static const lean_closure_object l_Lean_Parser_Tactic_match_formatter___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Term_motive_formatter___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_Tactic_match_formatter___closed__4 = (const lean_object*)&l_Lean_Parser_Tactic_match_formatter___closed__4_value;
static const lean_closure_object l_Lean_Parser_Tactic_match_formatter___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_optional_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_match_formatter___closed__4_value)} };
static const lean_object* l_Lean_Parser_Tactic_match_formatter___closed__5 = (const lean_object*)&l_Lean_Parser_Tactic_match_formatter___closed__5_value;
static const lean_closure_object l_Lean_Parser_Tactic_match_formatter___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Term_matchDiscr_formatter___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_Tactic_match_formatter___closed__6 = (const lean_object*)&l_Lean_Parser_Tactic_match_formatter___closed__6_value;
static const lean_closure_object l_Lean_Parser_Tactic_match_formatter___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_match___closed__7_value)} };
static const lean_object* l_Lean_Parser_Tactic_match_formatter___closed__7 = (const lean_object*)&l_Lean_Parser_Tactic_match_formatter___closed__7_value;
static const lean_closure_object l_Lean_Parser_Tactic_match_formatter___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_sepBy1_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_match_formatter___closed__6_value),((lean_object*)&l_Lean_Parser_Tactic_match___closed__7_value),((lean_object*)&l_Lean_Parser_Tactic_match_formatter___closed__7_value),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Tactic_match_formatter___closed__8 = (const lean_object*)&l_Lean_Parser_Tactic_match_formatter___closed__8_value;
static const lean_closure_object l_Lean_Parser_Tactic_match_formatter___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_match___closed__10_value)} };
static const lean_object* l_Lean_Parser_Tactic_match_formatter___closed__9 = (const lean_object*)&l_Lean_Parser_Tactic_match_formatter___closed__9_value;
static lean_once_cell_t l_Lean_Parser_Tactic_match_formatter___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_match_formatter___closed__10;
static lean_once_cell_t l_Lean_Parser_Tactic_match_formatter___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_match_formatter___closed__11;
static lean_once_cell_t l_Lean_Parser_Tactic_match_formatter___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_match_formatter___closed__12;
static lean_once_cell_t l_Lean_Parser_Tactic_match_formatter___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_match_formatter___closed__13;
static lean_once_cell_t l_Lean_Parser_Tactic_match_formatter___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_match_formatter___closed__14;
static lean_once_cell_t l_Lean_Parser_Tactic_match_formatter___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_match_formatter___closed__15;
static lean_once_cell_t l_Lean_Parser_Tactic_match_formatter___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_match_formatter___closed__16;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_match_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_match_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_formatter__13___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__2_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_formatter__13___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_formatter__13___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__3_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_formatter__13___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_formatter__13___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__4_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_formatter__13___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_formatter__13___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_match___closed__0_value),LEAN_SCALAR_PTR_LITERAL(232, 36, 240, 216, 203, 28, 130, 220)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_formatter__13___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_formatter__13___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_formatter__7___closed__0_value),LEAN_SCALAR_PTR_LITERAL(121, 126, 137, 87, 84, 74, 117, 101)}};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_formatter__13___closed__0 = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_formatter__13___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_formatter__13();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_formatter__13___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Tactic_matchRhs_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Term_hole_parenthesizer___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_Tactic_matchRhs_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_matchRhs_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Parser_Tactic_matchRhs_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Term_syntheticHole_parenthesizer___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_Tactic_matchRhs_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_matchRhs_parenthesizer___closed__1_value;
static const lean_closure_object l_Lean_Parser_Tactic_matchRhs_parenthesizer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_matchRhs_parenthesizer___closed__1_value),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__22_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value)} };
static const lean_object* l_Lean_Parser_Tactic_matchRhs_parenthesizer___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_matchRhs_parenthesizer___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_matchRhs_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_matchRhs_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_matchAlts_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_matchAlts_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_Tactic_match_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_match___closed__0_value),((lean_object*)&l_Lean_Parser_Tactic_match___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Tactic_match_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_match_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Parser_Tactic_match_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_match___closed__3_value)} };
static const lean_object* l_Lean_Parser_Tactic_match_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_match_parenthesizer___closed__1_value;
static const lean_closure_object l_Lean_Parser_Tactic_match_parenthesizer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Term_generalizingParam_parenthesizer___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_Tactic_match_parenthesizer___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_match_parenthesizer___closed__2_value;
static const lean_closure_object l_Lean_Parser_Tactic_match_parenthesizer___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_optional_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_match_parenthesizer___closed__2_value)} };
static const lean_object* l_Lean_Parser_Tactic_match_parenthesizer___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_match_parenthesizer___closed__3_value;
static const lean_closure_object l_Lean_Parser_Tactic_match_parenthesizer___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Term_motive_parenthesizer___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_Tactic_match_parenthesizer___closed__4 = (const lean_object*)&l_Lean_Parser_Tactic_match_parenthesizer___closed__4_value;
static const lean_closure_object l_Lean_Parser_Tactic_match_parenthesizer___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_optional_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_match_parenthesizer___closed__4_value)} };
static const lean_object* l_Lean_Parser_Tactic_match_parenthesizer___closed__5 = (const lean_object*)&l_Lean_Parser_Tactic_match_parenthesizer___closed__5_value;
static const lean_closure_object l_Lean_Parser_Tactic_match_parenthesizer___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Term_matchDiscr_parenthesizer___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_Tactic_match_parenthesizer___closed__6 = (const lean_object*)&l_Lean_Parser_Tactic_match_parenthesizer___closed__6_value;
static const lean_closure_object l_Lean_Parser_Tactic_match_parenthesizer___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_match___closed__7_value)} };
static const lean_object* l_Lean_Parser_Tactic_match_parenthesizer___closed__7 = (const lean_object*)&l_Lean_Parser_Tactic_match_parenthesizer___closed__7_value;
static const lean_closure_object l_Lean_Parser_Tactic_match_parenthesizer___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_sepBy1_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_match_parenthesizer___closed__6_value),((lean_object*)&l_Lean_Parser_Tactic_match___closed__7_value),((lean_object*)&l_Lean_Parser_Tactic_match_parenthesizer___closed__7_value),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Tactic_match_parenthesizer___closed__8 = (const lean_object*)&l_Lean_Parser_Tactic_match_parenthesizer___closed__8_value;
static const lean_closure_object l_Lean_Parser_Tactic_match_parenthesizer___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_match___closed__10_value)} };
static const lean_object* l_Lean_Parser_Tactic_match_parenthesizer___closed__9 = (const lean_object*)&l_Lean_Parser_Tactic_match_parenthesizer___closed__9_value;
static lean_once_cell_t l_Lean_Parser_Tactic_match_parenthesizer___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_match_parenthesizer___closed__10;
static lean_once_cell_t l_Lean_Parser_Tactic_match_parenthesizer___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_match_parenthesizer___closed__11;
static lean_once_cell_t l_Lean_Parser_Tactic_match_parenthesizer___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_match_parenthesizer___closed__12;
static lean_once_cell_t l_Lean_Parser_Tactic_match_parenthesizer___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_match_parenthesizer___closed__13;
static lean_once_cell_t l_Lean_Parser_Tactic_match_parenthesizer___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_match_parenthesizer___closed__14;
static lean_once_cell_t l_Lean_Parser_Tactic_match_parenthesizer___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_match_parenthesizer___closed__15;
static lean_once_cell_t l_Lean_Parser_Tactic_match_parenthesizer___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_match_parenthesizer___closed__16;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_match_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_match_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_parenthesizer__21___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__2_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_parenthesizer__21___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_parenthesizer__21___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__3_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_parenthesizer__21___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_parenthesizer__21___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__4_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_parenthesizer__21___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_parenthesizer__21___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_match___closed__0_value),LEAN_SCALAR_PTR_LITERAL(232, 36, 240, 216, 203, 28, 130, 220)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_parenthesizer__21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_parenthesizer__21___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_parenthesizer__11___closed__0_value),LEAN_SCALAR_PTR_LITERAL(173, 207, 254, 115, 108, 126, 8, 190)}};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_parenthesizer__21___closed__0 = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_parenthesizer__21___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_parenthesizer__21();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_parenthesizer__21___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_Tactic_introMatch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "introMatch"};
static const lean_object* l_Lean_Parser_Tactic_introMatch___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_introMatch___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_introMatch___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__2_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_introMatch___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_introMatch___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__3_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_introMatch___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_introMatch___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__4_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_introMatch___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_introMatch___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_introMatch___closed__0_value),LEAN_SCALAR_PTR_LITERAL(88, 42, 46, 143, 104, 41, 172, 166)}};
static const lean_object* l_Lean_Parser_Tactic_introMatch___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_introMatch___closed__1_value;
static lean_once_cell_t l_Lean_Parser_Tactic_introMatch___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_introMatch___closed__2;
static const lean_string_object l_Lean_Parser_Tactic_introMatch___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "intro"};
static const lean_object* l_Lean_Parser_Tactic_introMatch___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_introMatch___closed__3_value;
static lean_once_cell_t l_Lean_Parser_Tactic_introMatch___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_introMatch___closed__4;
static lean_once_cell_t l_Lean_Parser_Tactic_introMatch___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_introMatch___closed__5;
static lean_once_cell_t l_Lean_Parser_Tactic_introMatch___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_introMatch___closed__6;
static lean_once_cell_t l_Lean_Parser_Tactic_introMatch___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_introMatch___closed__7;
static lean_once_cell_t l_Lean_Parser_Tactic_introMatch___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_introMatch___closed__8;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_introMatch;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(67) << 1) | 1)),((lean_object*)(((size_t)(25) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(68) << 1) | 1)),((lean_object*)(((size_t)(40) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_declRange__3___closed__0_value),((lean_object*)(((size_t)(25) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_declRange__3___closed__1_value),((lean_object*)(((size_t)(40) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(67) << 1) | 1)),((lean_object*)(((size_t)(29) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(67) << 1) | 1)),((lean_object*)(((size_t)(39) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_declRange__3___closed__3_value),((lean_object*)(((size_t)(29) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_declRange__3___closed__4_value),((lean_object*)(((size_t)(39) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_declRange__3___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Tactic_introMatch_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_introMatch___closed__0_value),((lean_object*)&l_Lean_Parser_Tactic_introMatch___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Tactic_introMatch_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_introMatch_formatter___closed__0_value;
static const lean_closure_object l_Lean_Parser_Tactic_introMatch_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_nonReservedSymbol_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_introMatch___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Tactic_introMatch_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_introMatch_formatter___closed__1_value;
static lean_once_cell_t l_Lean_Parser_Tactic_introMatch_formatter___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_introMatch_formatter___closed__2;
static lean_once_cell_t l_Lean_Parser_Tactic_introMatch_formatter___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_introMatch_formatter___closed__3;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_introMatch_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_introMatch_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_formatter__7___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__2_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_formatter__7___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_formatter__7___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__3_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_formatter__7___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_formatter__7___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__4_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_formatter__7___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_formatter__7___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_introMatch___closed__0_value),LEAN_SCALAR_PTR_LITERAL(88, 42, 46, 143, 104, 41, 172, 166)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_formatter__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_formatter__7___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_formatter__7___closed__0_value),LEAN_SCALAR_PTR_LITERAL(73, 8, 173, 207, 249, 126, 136, 142)}};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_formatter__7___closed__0 = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_formatter__7___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_formatter__7();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_formatter__7___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Tactic_introMatch_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_introMatch___closed__0_value),((lean_object*)&l_Lean_Parser_Tactic_introMatch___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Tactic_introMatch_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_introMatch_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Parser_Tactic_introMatch_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_nonReservedSymbol_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_introMatch___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Tactic_introMatch_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_introMatch_parenthesizer___closed__1_value;
static lean_once_cell_t l_Lean_Parser_Tactic_introMatch_parenthesizer___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_introMatch_parenthesizer___closed__2;
static lean_once_cell_t l_Lean_Parser_Tactic_introMatch_parenthesizer___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_introMatch_parenthesizer___closed__3;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_introMatch_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_introMatch_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_parenthesizer__11___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__2_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_parenthesizer__11___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_parenthesizer__11___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__3_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_parenthesizer__11___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_parenthesizer__11___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__4_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_parenthesizer__11___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_parenthesizer__11___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_introMatch___closed__0_value),LEAN_SCALAR_PTR_LITERAL(88, 42, 46, 143, 104, 41, 172, 166)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_parenthesizer__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_parenthesizer__11___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_parenthesizer__11___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 99, 187, 142, 166, 117, 137, 131)}};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_parenthesizer__11___closed__0 = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_parenthesizer__11___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_parenthesizer__11();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_parenthesizer__11___boxed(lean_object*);
static const lean_string_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__0_00___x40_Lean_Parser_Tactic_2276592124____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "matchRhsTacticSeq"};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__0_00___x40_Lean_Parser_Tactic_2276592124____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__0_00___x40_Lean_Parser_Tactic_2276592124____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__1_00___x40_Lean_Parser_Tactic_2276592124____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__0_00___x40_Lean_Parser_Tactic_2276592124____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(213, 18, 144, 204, 99, 109, 250, 84)}};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__1_00___x40_Lean_Parser_Tactic_2276592124____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__1_00___x40_Lean_Parser_Tactic_2276592124____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__2_00___x40_Lean_Parser_Tactic_2276592124____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "matchRhs"};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__2_00___x40_Lean_Parser_Tactic_2276592124____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__2_00___x40_Lean_Parser_Tactic_2276592124____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__3_00___x40_Lean_Parser_Tactic_2276592124____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__2_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__3_00___x40_Lean_Parser_Tactic_2276592124____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__3_00___x40_Lean_Parser_Tactic_2276592124____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__3_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__3_00___x40_Lean_Parser_Tactic_2276592124____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__3_00___x40_Lean_Parser_Tactic_2276592124____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__4_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__3_00___x40_Lean_Parser_Tactic_2276592124____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__3_00___x40_Lean_Parser_Tactic_2276592124____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__2_00___x40_Lean_Parser_Tactic_2276592124____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(42, 255, 189, 19, 172, 234, 14, 187)}};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__3_00___x40_Lean_Parser_Tactic_2276592124____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__3_00___x40_Lean_Parser_Tactic_2276592124____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__4_00___x40_Lean_Parser_Tactic_2276592124____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__4_00___x40_Lean_Parser_Tactic_2276592124____hygCtx___hyg_2_;
static const lean_ctor_object l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__5_00___x40_Lean_Parser_Tactic_2276592124____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__3_00___x40_Lean_Parser_Tactic_2276592124____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__5_00___x40_Lean_Parser_Tactic_2276592124____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__5_00___x40_Lean_Parser_Tactic_2276592124____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__6_00___x40_Lean_Parser_Tactic_2276592124____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__6_00___x40_Lean_Parser_Tactic_2276592124____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__7_00___x40_Lean_Parser_Tactic_2276592124____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__7_00___x40_Lean_Parser_Tactic_2276592124____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn_00___x40_Lean_Parser_Tactic_2276592124____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn_00___x40_Lean_Parser_Tactic_2276592124____hygCtx___hyg_2____boxed(lean_object*);
static lean_object* _init_l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__6_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_12_; lean_object* v___x_13_; 
v___x_12_ = l_Lean_Parser_Tactic_tacticSeq;
v___x_13_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_13_, 0, v___x_12_);
return v___x_13_;
}
}
static lean_object* _init_l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__8_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_16_; lean_object* v___x_17_; 
v___x_16_ = lean_box(0);
v___x_17_ = l_unsafeCast___redArg(v___x_16_);
return v___x_17_;
}
}
static lean_object* _init_l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__10_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2_(void){
_start:
{
uint8_t v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; 
v___x_20_ = 1;
v___x_21_ = ((lean_object*)(l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__9_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2_));
v___x_22_ = lean_obj_once(&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__8_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__8_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__8_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2_);
v___x_23_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_23_, 0, v___x_22_);
lean_ctor_set(v___x_23_, 1, v___x_21_);
lean_ctor_set_uint8(v___x_23_, sizeof(void*)*2, v___x_20_);
return v___x_23_;
}
}
static lean_object* _init_l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__14_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_32_; lean_object* v___x_33_; 
v___x_32_ = l_Lean_Parser_Tactic_tacticSeqIndentGt;
v___x_33_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_33_, 0, v___x_32_);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___y_55_; lean_object* v___x_65_; 
v___x_49_ = ((lean_object*)(l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__1_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2_));
v___x_50_ = ((lean_object*)(l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__5_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2_));
v___x_51_ = lean_obj_once(&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__6_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__6_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__6_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2_);
v___x_52_ = ((lean_object*)(l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__7_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2_));
v___x_53_ = lean_obj_once(&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__10_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__10_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__10_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2_);
v___x_65_ = l_Lean_Parser_registerAlias(v___x_49_, v___x_50_, v___x_51_, v___x_52_, v___x_53_);
if (lean_obj_tag(v___x_65_) == 0)
{
lean_object* v___x_66_; lean_object* v___x_67_; 
lean_dec_ref_known(v___x_65_, 1);
v___x_66_ = ((lean_object*)(l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__21_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2_));
v___x_67_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_49_, v___x_66_);
if (lean_obj_tag(v___x_67_) == 0)
{
lean_object* v___x_68_; lean_object* v___x_69_; 
lean_dec_ref_known(v___x_67_, 1);
v___x_68_ = ((lean_object*)(l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__23_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2_));
v___x_69_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_49_, v___x_68_);
v___y_55_ = v___x_69_;
goto v___jp_54_;
}
else
{
v___y_55_ = v___x_67_;
goto v___jp_54_;
}
}
else
{
v___y_55_ = v___x_65_;
goto v___jp_54_;
}
v___jp_54_:
{
if (lean_obj_tag(v___y_55_) == 0)
{
lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; 
lean_dec_ref_known(v___y_55_, 1);
v___x_56_ = ((lean_object*)(l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__12_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2_));
v___x_57_ = ((lean_object*)(l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__13_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2_));
v___x_58_ = lean_obj_once(&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__14_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__14_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__14_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2_);
v___x_59_ = ((lean_object*)(l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__15_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2_));
v___x_60_ = l_Lean_Parser_registerAlias(v___x_56_, v___x_57_, v___x_58_, v___x_59_, v___x_53_);
if (lean_obj_tag(v___x_60_) == 0)
{
lean_object* v___x_61_; lean_object* v___x_62_; 
lean_dec_ref_known(v___x_60_, 1);
v___x_61_ = ((lean_object*)(l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__17_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2_));
v___x_62_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_56_, v___x_61_);
if (lean_obj_tag(v___x_62_) == 0)
{
lean_object* v___x_63_; lean_object* v___x_64_; 
lean_dec_ref_known(v___x_62_, 1);
v___x_63_ = ((lean_object*)(l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__19_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2_));
v___x_64_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_56_, v___x_63_);
return v___x_64_;
}
else
{
return v___x_62_;
}
}
else
{
return v___x_60_;
}
}
else
{
return v___y_55_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2____boxed(lean_object* v_a_70_){
_start:
{
lean_object* v_res_71_; 
v_res_71_ = l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2_();
return v_res_71_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_unknown___closed__2(void){
_start:
{
uint8_t v___x_78_; uint8_t v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; 
v___x_78_ = 0;
v___x_79_ = 1;
v___x_80_ = ((lean_object*)(l_Lean_Parser_Tactic_unknown___closed__1));
v___x_81_ = ((lean_object*)(l_Lean_Parser_Tactic_unknown___closed__0));
v___x_82_ = l_Lean_Parser_mkAntiquot(v___x_81_, v___x_80_, v___x_79_, v___x_78_);
return v___x_82_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_unknown___closed__4(void){
_start:
{
uint8_t v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; 
v___x_84_ = 1;
v___x_85_ = ((lean_object*)(l_Lean_Parser_Tactic_unknown___closed__3));
v___x_86_ = l_Lean_Parser_errorAtSavedPos(v___x_85_, v___x_84_);
return v___x_86_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_unknown___closed__5(void){
_start:
{
lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; 
v___x_87_ = lean_obj_once(&l_Lean_Parser_Tactic_unknown___closed__4, &l_Lean_Parser_Tactic_unknown___closed__4_once, _init_l_Lean_Parser_Tactic_unknown___closed__4);
v___x_88_ = l_Lean_Parser_ident;
v___x_89_ = l_Lean_Parser_andthen(v___x_88_, v___x_87_);
return v___x_89_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_unknown___closed__6(void){
_start:
{
lean_object* v___x_90_; lean_object* v___x_91_; 
v___x_90_ = lean_obj_once(&l_Lean_Parser_Tactic_unknown___closed__5, &l_Lean_Parser_Tactic_unknown___closed__5_once, _init_l_Lean_Parser_Tactic_unknown___closed__5);
v___x_91_ = l_Lean_Parser_withPosition(v___x_90_);
return v___x_91_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_unknown___closed__7(void){
_start:
{
lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; 
v___x_92_ = lean_obj_once(&l_Lean_Parser_Tactic_unknown___closed__6, &l_Lean_Parser_Tactic_unknown___closed__6_once, _init_l_Lean_Parser_Tactic_unknown___closed__6);
v___x_93_ = lean_unsigned_to_nat(1024u);
v___x_94_ = ((lean_object*)(l_Lean_Parser_Tactic_unknown___closed__1));
v___x_95_ = l_Lean_Parser_leadingNode(v___x_94_, v___x_93_, v___x_92_);
return v___x_95_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_unknown___closed__8(void){
_start:
{
lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; 
v___x_96_ = lean_obj_once(&l_Lean_Parser_Tactic_unknown___closed__7, &l_Lean_Parser_Tactic_unknown___closed__7_once, _init_l_Lean_Parser_Tactic_unknown___closed__7);
v___x_97_ = lean_obj_once(&l_Lean_Parser_Tactic_unknown___closed__2, &l_Lean_Parser_Tactic_unknown___closed__2_once, _init_l_Lean_Parser_Tactic_unknown___closed__2);
v___x_98_ = l_Lean_Parser_withAntiquot(v___x_97_, v___x_96_);
return v___x_98_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_unknown___closed__9(void){
_start:
{
lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; 
v___x_99_ = lean_obj_once(&l_Lean_Parser_Tactic_unknown___closed__8, &l_Lean_Parser_Tactic_unknown___closed__8_once, _init_l_Lean_Parser_Tactic_unknown___closed__8);
v___x_100_ = ((lean_object*)(l_Lean_Parser_Tactic_unknown___closed__1));
v___x_101_ = l_Lean_Parser_withCache(v___x_100_, v___x_99_);
return v___x_101_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_unknown(void){
_start:
{
lean_object* v___x_102_; 
v___x_102_ = lean_obj_once(&l_Lean_Parser_Tactic_unknown___closed__9, &l_Lean_Parser_Tactic_unknown___closed__9_once, _init_l_Lean_Parser_Tactic_unknown___closed__9);
return v___x_102_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown__1(){
_start:
{
lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; 
v___x_107_ = ((lean_object*)(l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown__1___closed__1));
v___x_108_ = ((lean_object*)(l_Lean_Parser_Tactic_unknown___closed__1));
v___x_109_ = l_Lean_Parser_Tactic_unknown;
v___x_110_ = lean_unsigned_to_nat(1000u);
v___x_111_ = l_Lean_Parser_addBuiltinLeadingParser(v___x_107_, v___x_108_, v___x_109_, v___x_110_);
return v___x_111_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown__1___boxed(lean_object* v_a_112_){
_start:
{
lean_object* v_res_113_; 
v_res_113_ = l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown__1();
return v_res_113_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_declRange__3(){
_start:
{
lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; 
v___x_140_ = ((lean_object*)(l_Lean_Parser_Tactic_unknown___closed__1));
v___x_141_ = ((lean_object*)(l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_declRange__3___closed__6));
v___x_142_ = l_Lean_addBuiltinDeclarationRanges(v___x_140_, v___x_141_);
return v___x_142_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_declRange__3___boxed(lean_object* v_a_143_){
_start:
{
lean_object* v_res_144_; 
v_res_144_ = l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_declRange__3();
return v_res_144_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_unknown_formatter(lean_object* v_a_166_, lean_object* v_a_167_, lean_object* v_a_168_, lean_object* v_a_169_){
_start:
{
lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; 
v___x_171_ = ((lean_object*)(l_Lean_Parser_Tactic_unknown_formatter___closed__0));
v___x_172_ = ((lean_object*)(l_Lean_Parser_Tactic_unknown_formatter___closed__5));
v___x_173_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_171_, v___x_172_, v_a_166_, v_a_167_, v_a_168_, v_a_169_);
return v___x_173_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_unknown_formatter___boxed(lean_object* v_a_174_, lean_object* v_a_175_, lean_object* v_a_176_, lean_object* v_a_177_, lean_object* v_a_178_){
_start:
{
lean_object* v_res_179_; 
v_res_179_ = l_Lean_Parser_Tactic_unknown_formatter(v_a_174_, v_a_175_, v_a_176_, v_a_177_);
lean_dec(v_a_177_);
lean_dec_ref(v_a_176_);
lean_dec(v_a_175_);
lean_dec_ref(v_a_174_);
return v_res_179_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_formatter__7(){
_start:
{
lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; 
v___x_188_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_189_ = ((lean_object*)(l_Lean_Parser_Tactic_unknown___closed__1));
v___x_190_ = ((lean_object*)(l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_formatter__7___closed__1));
v___x_191_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_unknown_formatter___boxed), 5, 0);
v___x_192_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_188_, v___x_189_, v___x_190_, v___x_191_);
return v___x_192_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_formatter__7___boxed(lean_object* v_a_193_){
_start:
{
lean_object* v_res_194_; 
v_res_194_ = l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_formatter__7();
return v_res_194_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_unknown_parenthesizer(lean_object* v_a_216_, lean_object* v_a_217_, lean_object* v_a_218_, lean_object* v_a_219_){
_start:
{
lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; 
v___x_221_ = ((lean_object*)(l_Lean_Parser_Tactic_unknown_parenthesizer___closed__0));
v___x_222_ = ((lean_object*)(l_Lean_Parser_Tactic_unknown_parenthesizer___closed__5));
v___x_223_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_221_, v___x_222_, v_a_216_, v_a_217_, v_a_218_, v_a_219_);
return v___x_223_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_unknown_parenthesizer___boxed(lean_object* v_a_224_, lean_object* v_a_225_, lean_object* v_a_226_, lean_object* v_a_227_, lean_object* v_a_228_){
_start:
{
lean_object* v_res_229_; 
v_res_229_ = l_Lean_Parser_Tactic_unknown_parenthesizer(v_a_224_, v_a_225_, v_a_226_, v_a_227_);
lean_dec(v_a_227_);
lean_dec_ref(v_a_226_);
lean_dec(v_a_225_);
lean_dec_ref(v_a_224_);
return v_res_229_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_parenthesizer__11(){
_start:
{
lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; 
v___x_238_ = l_Lean_PrettyPrinter_parenthesizerAttribute;
v___x_239_ = ((lean_object*)(l_Lean_Parser_Tactic_unknown___closed__1));
v___x_240_ = ((lean_object*)(l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_parenthesizer__11___closed__1));
v___x_241_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_unknown_parenthesizer___boxed), 5, 0);
v___x_242_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_238_, v___x_239_, v___x_240_, v___x_241_);
return v___x_242_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_parenthesizer__11___boxed(lean_object* v_a_243_){
_start:
{
lean_object* v_res_244_; 
v_res_244_ = l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_parenthesizer__11();
return v_res_244_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_nestedTactic(void){
_start:
{
lean_object* v___x_245_; 
v___x_245_ = l_Lean_Parser_Tactic_tacticSeqBracketed;
return v___x_245_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_nestedTactic___regBuiltin_Lean_Parser_Tactic_nestedTactic__1(){
_start:
{
lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; 
v___x_253_ = ((lean_object*)(l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown__1___closed__1));
v___x_254_ = ((lean_object*)(l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_nestedTactic___regBuiltin_Lean_Parser_Tactic_nestedTactic__1___closed__1));
v___x_255_ = l_Lean_Parser_Tactic_tacticSeqBracketed;
v___x_256_ = lean_unsigned_to_nat(1000u);
v___x_257_ = l_Lean_Parser_addBuiltinLeadingParser(v___x_253_, v___x_254_, v___x_255_, v___x_256_);
return v___x_257_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_nestedTactic___regBuiltin_Lean_Parser_Tactic_nestedTactic__1___boxed(lean_object* v_a_258_){
_start:
{
lean_object* v_res_259_; 
v_res_259_ = l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_nestedTactic___regBuiltin_Lean_Parser_Tactic_nestedTactic__1();
return v_res_259_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_nestedTactic___regBuiltin_Lean_Parser_Tactic_nestedTactic_declRange__3(){
_start:
{
lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; 
v___x_286_ = ((lean_object*)(l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_nestedTactic___regBuiltin_Lean_Parser_Tactic_nestedTactic__1___closed__1));
v___x_287_ = ((lean_object*)(l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_nestedTactic___regBuiltin_Lean_Parser_Tactic_nestedTactic_declRange__3___closed__6));
v___x_288_ = l_Lean_addBuiltinDeclarationRanges(v___x_286_, v___x_287_);
return v___x_288_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_nestedTactic___regBuiltin_Lean_Parser_Tactic_nestedTactic_declRange__3___boxed(lean_object* v_a_289_){
_start:
{
lean_object* v_res_290_; 
v_res_290_ = l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_nestedTactic___regBuiltin_Lean_Parser_Tactic_nestedTactic_declRange__3();
return v_res_290_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_nestedTactic_formatter(lean_object* v_a_291_, lean_object* v_a_292_, lean_object* v_a_293_, lean_object* v_a_294_){
_start:
{
lean_object* v___x_296_; 
v___x_296_ = l_Lean_Parser_Tactic_tacticSeqBracketed_formatter(v_a_291_, v_a_292_, v_a_293_, v_a_294_);
return v___x_296_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_nestedTactic_formatter___boxed(lean_object* v_a_297_, lean_object* v_a_298_, lean_object* v_a_299_, lean_object* v_a_300_, lean_object* v_a_301_){
_start:
{
lean_object* v_res_302_; 
v_res_302_ = l_Lean_Parser_Tactic_nestedTactic_formatter(v_a_297_, v_a_298_, v_a_299_, v_a_300_);
lean_dec(v_a_300_);
lean_dec_ref(v_a_299_);
lean_dec(v_a_298_);
lean_dec_ref(v_a_297_);
return v_res_302_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_nestedTactic_parenthesizer(lean_object* v_a_303_, lean_object* v_a_304_, lean_object* v_a_305_, lean_object* v_a_306_){
_start:
{
lean_object* v___x_308_; 
v___x_308_ = l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer(v_a_303_, v_a_304_, v_a_305_, v_a_306_);
return v___x_308_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_nestedTactic_parenthesizer___boxed(lean_object* v_a_309_, lean_object* v_a_310_, lean_object* v_a_311_, lean_object* v_a_312_, lean_object* v_a_313_){
_start:
{
lean_object* v_res_314_; 
v_res_314_ = l_Lean_Parser_Tactic_nestedTactic_parenthesizer(v_a_309_, v_a_310_, v_a_311_, v_a_312_);
lean_dec(v_a_312_);
lean_dec_ref(v_a_311_);
lean_dec(v_a_310_);
lean_dec_ref(v_a_309_);
return v_res_314_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_matchRhs___closed__0(void){
_start:
{
lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; 
v___x_315_ = l_Lean_Parser_Tactic_tacticSeq;
v___x_316_ = l_Lean_Parser_Term_syntheticHole;
v___x_317_ = l_Lean_Parser_orelse(v___x_316_, v___x_315_);
return v___x_317_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_matchRhs___closed__1(void){
_start:
{
lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; 
v___x_318_ = lean_obj_once(&l_Lean_Parser_Tactic_matchRhs___closed__0, &l_Lean_Parser_Tactic_matchRhs___closed__0_once, _init_l_Lean_Parser_Tactic_matchRhs___closed__0);
v___x_319_ = l_Lean_Parser_Term_hole;
v___x_320_ = l_Lean_Parser_orelse(v___x_319_, v___x_318_);
return v___x_320_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_matchRhs(void){
_start:
{
lean_object* v___x_321_; 
v___x_321_ = lean_obj_once(&l_Lean_Parser_Tactic_matchRhs___closed__1, &l_Lean_Parser_Tactic_matchRhs___closed__1_once, _init_l_Lean_Parser_Tactic_matchRhs___closed__1);
return v___x_321_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_matchAlts___closed__0(void){
_start:
{
lean_object* v___x_322_; lean_object* v___x_323_; 
v___x_322_ = l_Lean_Parser_Tactic_matchRhs;
v___x_323_ = l_Lean_Parser_Term_matchAlts(v___x_322_);
return v___x_323_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_matchAlts(void){
_start:
{
lean_object* v___x_324_; 
v___x_324_ = lean_obj_once(&l_Lean_Parser_Tactic_matchAlts___closed__0, &l_Lean_Parser_Tactic_matchAlts___closed__0_once, _init_l_Lean_Parser_Tactic_matchAlts___closed__0);
return v___x_324_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match___closed__2(void){
_start:
{
uint8_t v___x_331_; uint8_t v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; 
v___x_331_ = 0;
v___x_332_ = 1;
v___x_333_ = ((lean_object*)(l_Lean_Parser_Tactic_match___closed__1));
v___x_334_ = ((lean_object*)(l_Lean_Parser_Tactic_match___closed__0));
v___x_335_ = l_Lean_Parser_mkAntiquot(v___x_334_, v___x_333_, v___x_332_, v___x_331_);
return v___x_335_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match___closed__4(void){
_start:
{
lean_object* v___x_337_; lean_object* v___x_338_; 
v___x_337_ = ((lean_object*)(l_Lean_Parser_Tactic_match___closed__3));
v___x_338_ = l_Lean_Parser_symbol(v___x_337_);
return v___x_338_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match___closed__5(void){
_start:
{
lean_object* v___x_339_; lean_object* v___x_340_; 
v___x_339_ = l_Lean_Parser_Term_generalizingParam;
v___x_340_ = l_Lean_Parser_optional(v___x_339_);
return v___x_340_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match___closed__6(void){
_start:
{
lean_object* v___x_341_; lean_object* v___x_342_; 
v___x_341_ = l_Lean_Parser_Term_motive;
v___x_342_ = l_Lean_Parser_optional(v___x_341_);
return v___x_342_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match___closed__8(void){
_start:
{
lean_object* v___x_344_; lean_object* v___x_345_; 
v___x_344_ = ((lean_object*)(l_Lean_Parser_Tactic_match___closed__7));
v___x_345_ = l_Lean_Parser_symbol(v___x_344_);
return v___x_345_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match___closed__9(void){
_start:
{
uint8_t v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; 
v___x_346_ = 0;
v___x_347_ = lean_obj_once(&l_Lean_Parser_Tactic_match___closed__8, &l_Lean_Parser_Tactic_match___closed__8_once, _init_l_Lean_Parser_Tactic_match___closed__8);
v___x_348_ = ((lean_object*)(l_Lean_Parser_Tactic_match___closed__7));
v___x_349_ = l_Lean_Parser_Term_matchDiscr;
v___x_350_ = l_Lean_Parser_sepBy1(v___x_349_, v___x_348_, v___x_347_, v___x_346_);
return v___x_350_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match___closed__11(void){
_start:
{
lean_object* v___x_352_; lean_object* v___x_353_; 
v___x_352_ = ((lean_object*)(l_Lean_Parser_Tactic_match___closed__10));
v___x_353_ = l_Lean_Parser_symbol(v___x_352_);
return v___x_353_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match___closed__12(void){
_start:
{
lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; 
v___x_354_ = l_Lean_Parser_Tactic_matchAlts;
v___x_355_ = lean_obj_once(&l_Lean_Parser_Tactic_match___closed__11, &l_Lean_Parser_Tactic_match___closed__11_once, _init_l_Lean_Parser_Tactic_match___closed__11);
v___x_356_ = l_Lean_Parser_andthen(v___x_355_, v___x_354_);
return v___x_356_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match___closed__13(void){
_start:
{
lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; 
v___x_357_ = lean_obj_once(&l_Lean_Parser_Tactic_match___closed__12, &l_Lean_Parser_Tactic_match___closed__12_once, _init_l_Lean_Parser_Tactic_match___closed__12);
v___x_358_ = lean_obj_once(&l_Lean_Parser_Tactic_match___closed__9, &l_Lean_Parser_Tactic_match___closed__9_once, _init_l_Lean_Parser_Tactic_match___closed__9);
v___x_359_ = l_Lean_Parser_andthen(v___x_358_, v___x_357_);
return v___x_359_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match___closed__14(void){
_start:
{
lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; 
v___x_360_ = lean_obj_once(&l_Lean_Parser_Tactic_match___closed__13, &l_Lean_Parser_Tactic_match___closed__13_once, _init_l_Lean_Parser_Tactic_match___closed__13);
v___x_361_ = lean_obj_once(&l_Lean_Parser_Tactic_match___closed__6, &l_Lean_Parser_Tactic_match___closed__6_once, _init_l_Lean_Parser_Tactic_match___closed__6);
v___x_362_ = l_Lean_Parser_andthen(v___x_361_, v___x_360_);
return v___x_362_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match___closed__15(void){
_start:
{
lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; 
v___x_363_ = lean_obj_once(&l_Lean_Parser_Tactic_match___closed__14, &l_Lean_Parser_Tactic_match___closed__14_once, _init_l_Lean_Parser_Tactic_match___closed__14);
v___x_364_ = lean_obj_once(&l_Lean_Parser_Tactic_match___closed__5, &l_Lean_Parser_Tactic_match___closed__5_once, _init_l_Lean_Parser_Tactic_match___closed__5);
v___x_365_ = l_Lean_Parser_andthen(v___x_364_, v___x_363_);
return v___x_365_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match___closed__16(void){
_start:
{
lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; 
v___x_366_ = lean_obj_once(&l_Lean_Parser_Tactic_match___closed__15, &l_Lean_Parser_Tactic_match___closed__15_once, _init_l_Lean_Parser_Tactic_match___closed__15);
v___x_367_ = lean_obj_once(&l_Lean_Parser_Tactic_match___closed__4, &l_Lean_Parser_Tactic_match___closed__4_once, _init_l_Lean_Parser_Tactic_match___closed__4);
v___x_368_ = l_Lean_Parser_andthen(v___x_367_, v___x_366_);
return v___x_368_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match___closed__17(void){
_start:
{
lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; 
v___x_369_ = lean_obj_once(&l_Lean_Parser_Tactic_match___closed__16, &l_Lean_Parser_Tactic_match___closed__16_once, _init_l_Lean_Parser_Tactic_match___closed__16);
v___x_370_ = l_Lean_Parser_leadPrec;
v___x_371_ = ((lean_object*)(l_Lean_Parser_Tactic_match___closed__1));
v___x_372_ = l_Lean_Parser_leadingNode(v___x_371_, v___x_370_, v___x_369_);
return v___x_372_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match___closed__18(void){
_start:
{
lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; 
v___x_373_ = lean_obj_once(&l_Lean_Parser_Tactic_match___closed__17, &l_Lean_Parser_Tactic_match___closed__17_once, _init_l_Lean_Parser_Tactic_match___closed__17);
v___x_374_ = lean_obj_once(&l_Lean_Parser_Tactic_match___closed__2, &l_Lean_Parser_Tactic_match___closed__2_once, _init_l_Lean_Parser_Tactic_match___closed__2);
v___x_375_ = l_Lean_Parser_withAntiquot(v___x_374_, v___x_373_);
return v___x_375_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match___closed__19(void){
_start:
{
lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; 
v___x_376_ = lean_obj_once(&l_Lean_Parser_Tactic_match___closed__18, &l_Lean_Parser_Tactic_match___closed__18_once, _init_l_Lean_Parser_Tactic_match___closed__18);
v___x_377_ = ((lean_object*)(l_Lean_Parser_Tactic_match___closed__1));
v___x_378_ = l_Lean_Parser_withCache(v___x_377_, v___x_376_);
return v___x_378_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match(void){
_start:
{
lean_object* v___x_379_; 
v___x_379_ = lean_obj_once(&l_Lean_Parser_Tactic_match___closed__19, &l_Lean_Parser_Tactic_match___closed__19_once, _init_l_Lean_Parser_Tactic_match___closed__19);
return v___x_379_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match__1(){
_start:
{
lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; 
v___x_381_ = ((lean_object*)(l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown__1___closed__1));
v___x_382_ = ((lean_object*)(l_Lean_Parser_Tactic_match___closed__1));
v___x_383_ = l_Lean_Parser_Tactic_match;
v___x_384_ = lean_unsigned_to_nat(1000u);
v___x_385_ = l_Lean_Parser_addBuiltinLeadingParser(v___x_381_, v___x_382_, v___x_383_, v___x_384_);
return v___x_385_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match__1___boxed(lean_object* v_a_386_){
_start:
{
lean_object* v_res_387_; 
v_res_387_ = l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match__1();
return v_res_387_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_docString__3(){
_start:
{
lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; 
v___x_390_ = ((lean_object*)(l_Lean_Parser_Tactic_match___closed__1));
v___x_391_ = ((lean_object*)(l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_docString__3___closed__0));
v___x_392_ = l_Lean_addBuiltinDocString(v___x_390_, v___x_391_);
return v___x_392_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_docString__3___boxed(lean_object* v_a_393_){
_start:
{
lean_object* v_res_394_; 
v_res_394_ = l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_docString__3();
return v_res_394_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_declRange__5(){
_start:
{
lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; 
v___x_421_ = ((lean_object*)(l_Lean_Parser_Tactic_match___closed__1));
v___x_422_ = ((lean_object*)(l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_declRange__5___closed__6));
v___x_423_ = l_Lean_addBuiltinDeclarationRanges(v___x_421_, v___x_422_);
return v___x_423_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_declRange__5___boxed(lean_object* v_a_424_){
_start:
{
lean_object* v_res_425_; 
v_res_425_ = l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_declRange__5();
return v_res_425_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_matchRhs_formatter(lean_object* v_a_431_, lean_object* v_a_432_, lean_object* v_a_433_, lean_object* v_a_434_){
_start:
{
lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; 
v___x_436_ = ((lean_object*)(l_Lean_Parser_Tactic_matchRhs_formatter___closed__0));
v___x_437_ = ((lean_object*)(l_Lean_Parser_Tactic_matchRhs_formatter___closed__2));
v___x_438_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_436_, v___x_437_, v_a_431_, v_a_432_, v_a_433_, v_a_434_);
return v___x_438_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_matchRhs_formatter___boxed(lean_object* v_a_439_, lean_object* v_a_440_, lean_object* v_a_441_, lean_object* v_a_442_, lean_object* v_a_443_){
_start:
{
lean_object* v_res_444_; 
v_res_444_ = l_Lean_Parser_Tactic_matchRhs_formatter(v_a_439_, v_a_440_, v_a_441_, v_a_442_);
lean_dec(v_a_442_);
lean_dec_ref(v_a_441_);
lean_dec(v_a_440_);
lean_dec_ref(v_a_439_);
return v_res_444_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_matchAlts_formatter(lean_object* v_a_445_, lean_object* v_a_446_, lean_object* v_a_447_, lean_object* v_a_448_){
_start:
{
lean_object* v___x_450_; lean_object* v___x_451_; 
v___x_450_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_matchRhs_formatter___boxed), 5, 0);
v___x_451_ = l_Lean_Parser_Term_matchAlts_formatter(v___x_450_, v_a_445_, v_a_446_, v_a_447_, v_a_448_);
return v___x_451_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_matchAlts_formatter___boxed(lean_object* v_a_452_, lean_object* v_a_453_, lean_object* v_a_454_, lean_object* v_a_455_, lean_object* v_a_456_){
_start:
{
lean_object* v_res_457_; 
v_res_457_ = l_Lean_Parser_Tactic_matchAlts_formatter(v_a_452_, v_a_453_, v_a_454_, v_a_455_);
lean_dec(v_a_455_);
lean_dec_ref(v_a_454_);
lean_dec(v_a_453_);
lean_dec_ref(v_a_452_);
return v_res_457_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match_formatter___closed__10(void){
_start:
{
lean_object* v___x_484_; lean_object* v___x_485_; 
v___x_484_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_matchAlts_formatter___boxed), 5, 0);
v___x_485_ = lean_alloc_closure((void*)(l_Lean_ppDedent_formatter___boxed), 6, 1);
lean_closure_set(v___x_485_, 0, v___x_484_);
return v___x_485_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match_formatter___closed__11(void){
_start:
{
lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; 
v___x_486_ = lean_obj_once(&l_Lean_Parser_Tactic_match_formatter___closed__10, &l_Lean_Parser_Tactic_match_formatter___closed__10_once, _init_l_Lean_Parser_Tactic_match_formatter___closed__10);
v___x_487_ = ((lean_object*)(l_Lean_Parser_Tactic_match_formatter___closed__9));
v___x_488_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_488_, 0, v___x_487_);
lean_closure_set(v___x_488_, 1, v___x_486_);
return v___x_488_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match_formatter___closed__12(void){
_start:
{
lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; 
v___x_489_ = lean_obj_once(&l_Lean_Parser_Tactic_match_formatter___closed__11, &l_Lean_Parser_Tactic_match_formatter___closed__11_once, _init_l_Lean_Parser_Tactic_match_formatter___closed__11);
v___x_490_ = ((lean_object*)(l_Lean_Parser_Tactic_match_formatter___closed__8));
v___x_491_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_491_, 0, v___x_490_);
lean_closure_set(v___x_491_, 1, v___x_489_);
return v___x_491_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match_formatter___closed__13(void){
_start:
{
lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; 
v___x_492_ = lean_obj_once(&l_Lean_Parser_Tactic_match_formatter___closed__12, &l_Lean_Parser_Tactic_match_formatter___closed__12_once, _init_l_Lean_Parser_Tactic_match_formatter___closed__12);
v___x_493_ = ((lean_object*)(l_Lean_Parser_Tactic_match_formatter___closed__5));
v___x_494_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_494_, 0, v___x_493_);
lean_closure_set(v___x_494_, 1, v___x_492_);
return v___x_494_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match_formatter___closed__14(void){
_start:
{
lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; 
v___x_495_ = lean_obj_once(&l_Lean_Parser_Tactic_match_formatter___closed__13, &l_Lean_Parser_Tactic_match_formatter___closed__13_once, _init_l_Lean_Parser_Tactic_match_formatter___closed__13);
v___x_496_ = ((lean_object*)(l_Lean_Parser_Tactic_match_formatter___closed__3));
v___x_497_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_497_, 0, v___x_496_);
lean_closure_set(v___x_497_, 1, v___x_495_);
return v___x_497_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match_formatter___closed__15(void){
_start:
{
lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; 
v___x_498_ = lean_obj_once(&l_Lean_Parser_Tactic_match_formatter___closed__14, &l_Lean_Parser_Tactic_match_formatter___closed__14_once, _init_l_Lean_Parser_Tactic_match_formatter___closed__14);
v___x_499_ = ((lean_object*)(l_Lean_Parser_Tactic_match_formatter___closed__1));
v___x_500_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_500_, 0, v___x_499_);
lean_closure_set(v___x_500_, 1, v___x_498_);
return v___x_500_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match_formatter___closed__16(void){
_start:
{
lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; 
v___x_501_ = lean_obj_once(&l_Lean_Parser_Tactic_match_formatter___closed__15, &l_Lean_Parser_Tactic_match_formatter___closed__15_once, _init_l_Lean_Parser_Tactic_match_formatter___closed__15);
v___x_502_ = l_Lean_Parser_leadPrec;
v___x_503_ = ((lean_object*)(l_Lean_Parser_Tactic_match___closed__1));
v___x_504_ = lean_alloc_closure((void*)(l_Lean_Parser_leadingNode_formatter___boxed), 8, 3);
lean_closure_set(v___x_504_, 0, v___x_503_);
lean_closure_set(v___x_504_, 1, v___x_502_);
lean_closure_set(v___x_504_, 2, v___x_501_);
return v___x_504_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_match_formatter(lean_object* v_a_505_, lean_object* v_a_506_, lean_object* v_a_507_, lean_object* v_a_508_){
_start:
{
lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; 
v___x_510_ = ((lean_object*)(l_Lean_Parser_Tactic_match_formatter___closed__0));
v___x_511_ = lean_obj_once(&l_Lean_Parser_Tactic_match_formatter___closed__16, &l_Lean_Parser_Tactic_match_formatter___closed__16_once, _init_l_Lean_Parser_Tactic_match_formatter___closed__16);
v___x_512_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_510_, v___x_511_, v_a_505_, v_a_506_, v_a_507_, v_a_508_);
return v___x_512_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_match_formatter___boxed(lean_object* v_a_513_, lean_object* v_a_514_, lean_object* v_a_515_, lean_object* v_a_516_, lean_object* v_a_517_){
_start:
{
lean_object* v_res_518_; 
v_res_518_ = l_Lean_Parser_Tactic_match_formatter(v_a_513_, v_a_514_, v_a_515_, v_a_516_);
lean_dec(v_a_516_);
lean_dec_ref(v_a_515_);
lean_dec(v_a_514_);
lean_dec_ref(v_a_513_);
return v_res_518_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_formatter__13(){
_start:
{
lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; 
v___x_526_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_527_ = ((lean_object*)(l_Lean_Parser_Tactic_match___closed__1));
v___x_528_ = ((lean_object*)(l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_formatter__13___closed__0));
v___x_529_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_match_formatter___boxed), 5, 0);
v___x_530_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_526_, v___x_527_, v___x_528_, v___x_529_);
return v___x_530_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_formatter__13___boxed(lean_object* v_a_531_){
_start:
{
lean_object* v_res_532_; 
v_res_532_ = l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_formatter__13();
return v_res_532_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_matchRhs_parenthesizer(lean_object* v_a_538_, lean_object* v_a_539_, lean_object* v_a_540_, lean_object* v_a_541_){
_start:
{
lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; 
v___x_543_ = ((lean_object*)(l_Lean_Parser_Tactic_matchRhs_parenthesizer___closed__0));
v___x_544_ = ((lean_object*)(l_Lean_Parser_Tactic_matchRhs_parenthesizer___closed__2));
v___x_545_ = l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(v___x_543_, v___x_544_, v_a_538_, v_a_539_, v_a_540_, v_a_541_);
return v___x_545_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_matchRhs_parenthesizer___boxed(lean_object* v_a_546_, lean_object* v_a_547_, lean_object* v_a_548_, lean_object* v_a_549_, lean_object* v_a_550_){
_start:
{
lean_object* v_res_551_; 
v_res_551_ = l_Lean_Parser_Tactic_matchRhs_parenthesizer(v_a_546_, v_a_547_, v_a_548_, v_a_549_);
lean_dec(v_a_549_);
lean_dec_ref(v_a_548_);
lean_dec(v_a_547_);
lean_dec_ref(v_a_546_);
return v_res_551_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_matchAlts_parenthesizer(lean_object* v_a_552_, lean_object* v_a_553_, lean_object* v_a_554_, lean_object* v_a_555_){
_start:
{
lean_object* v___x_557_; lean_object* v___x_558_; 
v___x_557_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_matchRhs_parenthesizer___boxed), 5, 0);
v___x_558_ = l_Lean_Parser_Term_matchAlts_parenthesizer(v___x_557_, v_a_552_, v_a_553_, v_a_554_, v_a_555_);
return v___x_558_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_matchAlts_parenthesizer___boxed(lean_object* v_a_559_, lean_object* v_a_560_, lean_object* v_a_561_, lean_object* v_a_562_, lean_object* v_a_563_){
_start:
{
lean_object* v_res_564_; 
v_res_564_ = l_Lean_Parser_Tactic_matchAlts_parenthesizer(v_a_559_, v_a_560_, v_a_561_, v_a_562_);
lean_dec(v_a_562_);
lean_dec_ref(v_a_561_);
lean_dec(v_a_560_);
lean_dec_ref(v_a_559_);
return v_res_564_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match_parenthesizer___closed__10(void){
_start:
{
lean_object* v___x_591_; lean_object* v___x_592_; 
v___x_591_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_matchAlts_parenthesizer___boxed), 5, 0);
v___x_592_ = lean_alloc_closure((void*)(l_Lean_Parser_ppDedent_parenthesizer___boxed), 6, 1);
lean_closure_set(v___x_592_, 0, v___x_591_);
return v___x_592_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match_parenthesizer___closed__11(void){
_start:
{
lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; 
v___x_593_ = lean_obj_once(&l_Lean_Parser_Tactic_match_parenthesizer___closed__10, &l_Lean_Parser_Tactic_match_parenthesizer___closed__10_once, _init_l_Lean_Parser_Tactic_match_parenthesizer___closed__10);
v___x_594_ = ((lean_object*)(l_Lean_Parser_Tactic_match_parenthesizer___closed__9));
v___x_595_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_595_, 0, v___x_594_);
lean_closure_set(v___x_595_, 1, v___x_593_);
return v___x_595_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match_parenthesizer___closed__12(void){
_start:
{
lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; 
v___x_596_ = lean_obj_once(&l_Lean_Parser_Tactic_match_parenthesizer___closed__11, &l_Lean_Parser_Tactic_match_parenthesizer___closed__11_once, _init_l_Lean_Parser_Tactic_match_parenthesizer___closed__11);
v___x_597_ = ((lean_object*)(l_Lean_Parser_Tactic_match_parenthesizer___closed__8));
v___x_598_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_598_, 0, v___x_597_);
lean_closure_set(v___x_598_, 1, v___x_596_);
return v___x_598_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match_parenthesizer___closed__13(void){
_start:
{
lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; 
v___x_599_ = lean_obj_once(&l_Lean_Parser_Tactic_match_parenthesizer___closed__12, &l_Lean_Parser_Tactic_match_parenthesizer___closed__12_once, _init_l_Lean_Parser_Tactic_match_parenthesizer___closed__12);
v___x_600_ = ((lean_object*)(l_Lean_Parser_Tactic_match_parenthesizer___closed__5));
v___x_601_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_601_, 0, v___x_600_);
lean_closure_set(v___x_601_, 1, v___x_599_);
return v___x_601_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match_parenthesizer___closed__14(void){
_start:
{
lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; 
v___x_602_ = lean_obj_once(&l_Lean_Parser_Tactic_match_parenthesizer___closed__13, &l_Lean_Parser_Tactic_match_parenthesizer___closed__13_once, _init_l_Lean_Parser_Tactic_match_parenthesizer___closed__13);
v___x_603_ = ((lean_object*)(l_Lean_Parser_Tactic_match_parenthesizer___closed__3));
v___x_604_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_604_, 0, v___x_603_);
lean_closure_set(v___x_604_, 1, v___x_602_);
return v___x_604_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match_parenthesizer___closed__15(void){
_start:
{
lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; 
v___x_605_ = lean_obj_once(&l_Lean_Parser_Tactic_match_parenthesizer___closed__14, &l_Lean_Parser_Tactic_match_parenthesizer___closed__14_once, _init_l_Lean_Parser_Tactic_match_parenthesizer___closed__14);
v___x_606_ = ((lean_object*)(l_Lean_Parser_Tactic_match_parenthesizer___closed__1));
v___x_607_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_607_, 0, v___x_606_);
lean_closure_set(v___x_607_, 1, v___x_605_);
return v___x_607_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match_parenthesizer___closed__16(void){
_start:
{
lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; 
v___x_608_ = lean_obj_once(&l_Lean_Parser_Tactic_match_parenthesizer___closed__15, &l_Lean_Parser_Tactic_match_parenthesizer___closed__15_once, _init_l_Lean_Parser_Tactic_match_parenthesizer___closed__15);
v___x_609_ = l_Lean_Parser_leadPrec;
v___x_610_ = ((lean_object*)(l_Lean_Parser_Tactic_match___closed__1));
v___x_611_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed), 8, 3);
lean_closure_set(v___x_611_, 0, v___x_610_);
lean_closure_set(v___x_611_, 1, v___x_609_);
lean_closure_set(v___x_611_, 2, v___x_608_);
return v___x_611_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_match_parenthesizer(lean_object* v_a_612_, lean_object* v_a_613_, lean_object* v_a_614_, lean_object* v_a_615_){
_start:
{
lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; 
v___x_617_ = ((lean_object*)(l_Lean_Parser_Tactic_match_parenthesizer___closed__0));
v___x_618_ = lean_obj_once(&l_Lean_Parser_Tactic_match_parenthesizer___closed__16, &l_Lean_Parser_Tactic_match_parenthesizer___closed__16_once, _init_l_Lean_Parser_Tactic_match_parenthesizer___closed__16);
v___x_619_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_617_, v___x_618_, v_a_612_, v_a_613_, v_a_614_, v_a_615_);
return v___x_619_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_match_parenthesizer___boxed(lean_object* v_a_620_, lean_object* v_a_621_, lean_object* v_a_622_, lean_object* v_a_623_, lean_object* v_a_624_){
_start:
{
lean_object* v_res_625_; 
v_res_625_ = l_Lean_Parser_Tactic_match_parenthesizer(v_a_620_, v_a_621_, v_a_622_, v_a_623_);
lean_dec(v_a_623_);
lean_dec_ref(v_a_622_);
lean_dec(v_a_621_);
lean_dec_ref(v_a_620_);
return v_res_625_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_parenthesizer__21(){
_start:
{
lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; 
v___x_633_ = l_Lean_PrettyPrinter_parenthesizerAttribute;
v___x_634_ = ((lean_object*)(l_Lean_Parser_Tactic_match___closed__1));
v___x_635_ = ((lean_object*)(l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_parenthesizer__21___closed__0));
v___x_636_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_match_parenthesizer___boxed), 5, 0);
v___x_637_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_633_, v___x_634_, v___x_635_, v___x_636_);
return v___x_637_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_parenthesizer__21___boxed(lean_object* v_a_638_){
_start:
{
lean_object* v_res_639_; 
v_res_639_ = l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_parenthesizer__21();
return v_res_639_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_introMatch___closed__2(void){
_start:
{
uint8_t v___x_646_; uint8_t v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; 
v___x_646_ = 0;
v___x_647_ = 1;
v___x_648_ = ((lean_object*)(l_Lean_Parser_Tactic_introMatch___closed__1));
v___x_649_ = ((lean_object*)(l_Lean_Parser_Tactic_introMatch___closed__0));
v___x_650_ = l_Lean_Parser_mkAntiquot(v___x_649_, v___x_648_, v___x_647_, v___x_646_);
return v___x_650_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_introMatch___closed__4(void){
_start:
{
uint8_t v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; 
v___x_652_ = 0;
v___x_653_ = ((lean_object*)(l_Lean_Parser_Tactic_introMatch___closed__3));
v___x_654_ = l_Lean_Parser_nonReservedSymbol(v___x_653_, v___x_652_);
return v___x_654_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_introMatch___closed__5(void){
_start:
{
lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; 
v___x_655_ = l_Lean_Parser_Tactic_matchAlts;
v___x_656_ = lean_obj_once(&l_Lean_Parser_Tactic_introMatch___closed__4, &l_Lean_Parser_Tactic_introMatch___closed__4_once, _init_l_Lean_Parser_Tactic_introMatch___closed__4);
v___x_657_ = l_Lean_Parser_andthen(v___x_656_, v___x_655_);
return v___x_657_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_introMatch___closed__6(void){
_start:
{
lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; 
v___x_658_ = lean_obj_once(&l_Lean_Parser_Tactic_introMatch___closed__5, &l_Lean_Parser_Tactic_introMatch___closed__5_once, _init_l_Lean_Parser_Tactic_introMatch___closed__5);
v___x_659_ = lean_unsigned_to_nat(1024u);
v___x_660_ = ((lean_object*)(l_Lean_Parser_Tactic_introMatch___closed__1));
v___x_661_ = l_Lean_Parser_leadingNode(v___x_660_, v___x_659_, v___x_658_);
return v___x_661_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_introMatch___closed__7(void){
_start:
{
lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; 
v___x_662_ = lean_obj_once(&l_Lean_Parser_Tactic_introMatch___closed__6, &l_Lean_Parser_Tactic_introMatch___closed__6_once, _init_l_Lean_Parser_Tactic_introMatch___closed__6);
v___x_663_ = lean_obj_once(&l_Lean_Parser_Tactic_introMatch___closed__2, &l_Lean_Parser_Tactic_introMatch___closed__2_once, _init_l_Lean_Parser_Tactic_introMatch___closed__2);
v___x_664_ = l_Lean_Parser_withAntiquot(v___x_663_, v___x_662_);
return v___x_664_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_introMatch___closed__8(void){
_start:
{
lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; 
v___x_665_ = lean_obj_once(&l_Lean_Parser_Tactic_introMatch___closed__7, &l_Lean_Parser_Tactic_introMatch___closed__7_once, _init_l_Lean_Parser_Tactic_introMatch___closed__7);
v___x_666_ = ((lean_object*)(l_Lean_Parser_Tactic_introMatch___closed__1));
v___x_667_ = l_Lean_Parser_withCache(v___x_666_, v___x_665_);
return v___x_667_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_introMatch(void){
_start:
{
lean_object* v___x_668_; 
v___x_668_ = lean_obj_once(&l_Lean_Parser_Tactic_introMatch___closed__8, &l_Lean_Parser_Tactic_introMatch___closed__8_once, _init_l_Lean_Parser_Tactic_introMatch___closed__8);
return v___x_668_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch__1(){
_start:
{
lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; 
v___x_670_ = ((lean_object*)(l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown__1___closed__1));
v___x_671_ = ((lean_object*)(l_Lean_Parser_Tactic_introMatch___closed__1));
v___x_672_ = l_Lean_Parser_Tactic_introMatch;
v___x_673_ = lean_unsigned_to_nat(1000u);
v___x_674_ = l_Lean_Parser_addBuiltinLeadingParser(v___x_670_, v___x_671_, v___x_672_, v___x_673_);
return v___x_674_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch__1___boxed(lean_object* v_a_675_){
_start:
{
lean_object* v_res_676_; 
v_res_676_ = l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch__1();
return v_res_676_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_declRange__3(){
_start:
{
lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; 
v___x_703_ = ((lean_object*)(l_Lean_Parser_Tactic_introMatch___closed__1));
v___x_704_ = ((lean_object*)(l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_declRange__3___closed__6));
v___x_705_ = l_Lean_addBuiltinDeclarationRanges(v___x_703_, v___x_704_);
return v___x_705_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_declRange__3___boxed(lean_object* v_a_706_){
_start:
{
lean_object* v_res_707_; 
v_res_707_ = l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_declRange__3();
return v_res_707_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_introMatch_formatter___closed__2(void){
_start:
{
lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; 
v___x_719_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_matchAlts_formatter___boxed), 5, 0);
v___x_720_ = ((lean_object*)(l_Lean_Parser_Tactic_introMatch_formatter___closed__1));
v___x_721_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_721_, 0, v___x_720_);
lean_closure_set(v___x_721_, 1, v___x_719_);
return v___x_721_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_introMatch_formatter___closed__3(void){
_start:
{
lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; 
v___x_722_ = lean_obj_once(&l_Lean_Parser_Tactic_introMatch_formatter___closed__2, &l_Lean_Parser_Tactic_introMatch_formatter___closed__2_once, _init_l_Lean_Parser_Tactic_introMatch_formatter___closed__2);
v___x_723_ = lean_unsigned_to_nat(1024u);
v___x_724_ = ((lean_object*)(l_Lean_Parser_Tactic_introMatch___closed__1));
v___x_725_ = lean_alloc_closure((void*)(l_Lean_Parser_leadingNode_formatter___boxed), 8, 3);
lean_closure_set(v___x_725_, 0, v___x_724_);
lean_closure_set(v___x_725_, 1, v___x_723_);
lean_closure_set(v___x_725_, 2, v___x_722_);
return v___x_725_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_introMatch_formatter(lean_object* v_a_726_, lean_object* v_a_727_, lean_object* v_a_728_, lean_object* v_a_729_){
_start:
{
lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; 
v___x_731_ = ((lean_object*)(l_Lean_Parser_Tactic_introMatch_formatter___closed__0));
v___x_732_ = lean_obj_once(&l_Lean_Parser_Tactic_introMatch_formatter___closed__3, &l_Lean_Parser_Tactic_introMatch_formatter___closed__3_once, _init_l_Lean_Parser_Tactic_introMatch_formatter___closed__3);
v___x_733_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_731_, v___x_732_, v_a_726_, v_a_727_, v_a_728_, v_a_729_);
return v___x_733_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_introMatch_formatter___boxed(lean_object* v_a_734_, lean_object* v_a_735_, lean_object* v_a_736_, lean_object* v_a_737_, lean_object* v_a_738_){
_start:
{
lean_object* v_res_739_; 
v_res_739_ = l_Lean_Parser_Tactic_introMatch_formatter(v_a_734_, v_a_735_, v_a_736_, v_a_737_);
lean_dec(v_a_737_);
lean_dec_ref(v_a_736_);
lean_dec(v_a_735_);
lean_dec_ref(v_a_734_);
return v_res_739_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_formatter__7(){
_start:
{
lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; 
v___x_747_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_748_ = ((lean_object*)(l_Lean_Parser_Tactic_introMatch___closed__1));
v___x_749_ = ((lean_object*)(l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_formatter__7___closed__0));
v___x_750_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_introMatch_formatter___boxed), 5, 0);
v___x_751_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_747_, v___x_748_, v___x_749_, v___x_750_);
return v___x_751_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_formatter__7___boxed(lean_object* v_a_752_){
_start:
{
lean_object* v_res_753_; 
v_res_753_ = l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_formatter__7();
return v_res_753_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_introMatch_parenthesizer___closed__2(void){
_start:
{
lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; 
v___x_765_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_matchAlts_parenthesizer___boxed), 5, 0);
v___x_766_ = ((lean_object*)(l_Lean_Parser_Tactic_introMatch_parenthesizer___closed__1));
v___x_767_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_767_, 0, v___x_766_);
lean_closure_set(v___x_767_, 1, v___x_765_);
return v___x_767_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_introMatch_parenthesizer___closed__3(void){
_start:
{
lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; 
v___x_768_ = lean_obj_once(&l_Lean_Parser_Tactic_introMatch_parenthesizer___closed__2, &l_Lean_Parser_Tactic_introMatch_parenthesizer___closed__2_once, _init_l_Lean_Parser_Tactic_introMatch_parenthesizer___closed__2);
v___x_769_ = lean_unsigned_to_nat(1024u);
v___x_770_ = ((lean_object*)(l_Lean_Parser_Tactic_introMatch___closed__1));
v___x_771_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed), 8, 3);
lean_closure_set(v___x_771_, 0, v___x_770_);
lean_closure_set(v___x_771_, 1, v___x_769_);
lean_closure_set(v___x_771_, 2, v___x_768_);
return v___x_771_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_introMatch_parenthesizer(lean_object* v_a_772_, lean_object* v_a_773_, lean_object* v_a_774_, lean_object* v_a_775_){
_start:
{
lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; 
v___x_777_ = ((lean_object*)(l_Lean_Parser_Tactic_introMatch_parenthesizer___closed__0));
v___x_778_ = lean_obj_once(&l_Lean_Parser_Tactic_introMatch_parenthesizer___closed__3, &l_Lean_Parser_Tactic_introMatch_parenthesizer___closed__3_once, _init_l_Lean_Parser_Tactic_introMatch_parenthesizer___closed__3);
v___x_779_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_777_, v___x_778_, v_a_772_, v_a_773_, v_a_774_, v_a_775_);
return v___x_779_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_introMatch_parenthesizer___boxed(lean_object* v_a_780_, lean_object* v_a_781_, lean_object* v_a_782_, lean_object* v_a_783_, lean_object* v_a_784_){
_start:
{
lean_object* v_res_785_; 
v_res_785_ = l_Lean_Parser_Tactic_introMatch_parenthesizer(v_a_780_, v_a_781_, v_a_782_, v_a_783_);
lean_dec(v_a_783_);
lean_dec_ref(v_a_782_);
lean_dec(v_a_781_);
lean_dec_ref(v_a_780_);
return v_res_785_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_parenthesizer__11(){
_start:
{
lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; 
v___x_793_ = l_Lean_PrettyPrinter_parenthesizerAttribute;
v___x_794_ = ((lean_object*)(l_Lean_Parser_Tactic_introMatch___closed__1));
v___x_795_ = ((lean_object*)(l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_parenthesizer__11___closed__0));
v___x_796_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_introMatch_parenthesizer___boxed), 5, 0);
v___x_797_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_793_, v___x_794_, v___x_795_, v___x_796_);
return v___x_797_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_parenthesizer__11___boxed(lean_object* v_a_798_){
_start:
{
lean_object* v_res_799_; 
v_res_799_ = l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_parenthesizer__11();
return v_res_799_;
}
}
static lean_object* _init_l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__4_00___x40_Lean_Parser_Tactic_2276592124____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_809_; lean_object* v___x_810_; 
v___x_809_ = l_Lean_Parser_Tactic_matchRhs;
v___x_810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_810_, 0, v___x_809_);
return v___x_810_;
}
}
static lean_object* _init_l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__6_00___x40_Lean_Parser_Tactic_2276592124____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_813_; lean_object* v___x_814_; 
v___x_813_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_matchRhs_formatter___boxed), 5, 0);
v___x_814_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_814_, 0, v___x_813_);
return v___x_814_;
}
}
static lean_object* _init_l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__7_00___x40_Lean_Parser_Tactic_2276592124____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_815_; lean_object* v___x_816_; 
v___x_815_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_matchRhs_parenthesizer___boxed), 5, 0);
v___x_816_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_816_, 0, v___x_815_);
return v___x_816_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn_00___x40_Lean_Parser_Tactic_2276592124____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; 
v___x_818_ = ((lean_object*)(l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__1_00___x40_Lean_Parser_Tactic_2276592124____hygCtx___hyg_2_));
v___x_819_ = ((lean_object*)(l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__3_00___x40_Lean_Parser_Tactic_2276592124____hygCtx___hyg_2_));
v___x_820_ = lean_obj_once(&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__4_00___x40_Lean_Parser_Tactic_2276592124____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__4_00___x40_Lean_Parser_Tactic_2276592124____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__4_00___x40_Lean_Parser_Tactic_2276592124____hygCtx___hyg_2_);
v___x_821_ = ((lean_object*)(l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__5_00___x40_Lean_Parser_Tactic_2276592124____hygCtx___hyg_2_));
v___x_822_ = lean_obj_once(&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__10_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__10_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__10_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2_);
v___x_823_ = l_Lean_Parser_registerAlias(v___x_818_, v___x_819_, v___x_820_, v___x_821_, v___x_822_);
if (lean_obj_tag(v___x_823_) == 0)
{
lean_object* v___x_824_; lean_object* v___x_825_; 
lean_dec_ref_known(v___x_823_, 1);
v___x_824_ = lean_obj_once(&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__6_00___x40_Lean_Parser_Tactic_2276592124____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__6_00___x40_Lean_Parser_Tactic_2276592124____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__6_00___x40_Lean_Parser_Tactic_2276592124____hygCtx___hyg_2_);
v___x_825_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_818_, v___x_824_);
if (lean_obj_tag(v___x_825_) == 0)
{
lean_object* v___x_826_; lean_object* v___x_827_; 
lean_dec_ref_known(v___x_825_, 1);
v___x_826_ = lean_obj_once(&l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__7_00___x40_Lean_Parser_Tactic_2276592124____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__7_00___x40_Lean_Parser_Tactic_2276592124____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn___closed__7_00___x40_Lean_Parser_Tactic_2276592124____hygCtx___hyg_2_);
v___x_827_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_818_, v___x_826_);
return v___x_827_;
}
else
{
return v___x_825_;
}
}
else
{
return v___x_823_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn_00___x40_Lean_Parser_Tactic_2276592124____hygCtx___hyg_2____boxed(lean_object* v_a_828_){
_start:
{
lean_object* v_res_829_; 
v_res_829_ = l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn_00___x40_Lean_Parser_Tactic_2276592124____hygCtx___hyg_2_();
return v_res_829_;
}
}
lean_object* runtime_initialize_Lean_Parser_Term(uint8_t builtin);
lean_object* runtime_initialize_Lean_Parser_Tactic_Doc(uint8_t builtin);
lean_object* runtime_initialize_Std_Tactic_Do_Syntax(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Parser_Tactic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Parser_Term(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser_Tactic_Doc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Tactic_Do_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn_00___x40_Lean_Parser_Tactic_255552617____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Tactic_unknown = _init_l_Lean_Parser_Tactic_unknown();
lean_mark_persistent(l_Lean_Parser_Tactic_unknown);
res = l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_formatter__7();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_unknown___regBuiltin_Lean_Parser_Tactic_unknown_parenthesizer__11();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Tactic_nestedTactic = _init_l_Lean_Parser_Tactic_nestedTactic();
lean_mark_persistent(l_Lean_Parser_Tactic_nestedTactic);
res = l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_nestedTactic___regBuiltin_Lean_Parser_Tactic_nestedTactic__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_nestedTactic___regBuiltin_Lean_Parser_Tactic_nestedTactic_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Tactic_matchRhs = _init_l_Lean_Parser_Tactic_matchRhs();
lean_mark_persistent(l_Lean_Parser_Tactic_matchRhs);
l_Lean_Parser_Tactic_matchAlts = _init_l_Lean_Parser_Tactic_matchAlts();
lean_mark_persistent(l_Lean_Parser_Tactic_matchAlts);
l_Lean_Parser_Tactic_match = _init_l_Lean_Parser_Tactic_match();
lean_mark_persistent(l_Lean_Parser_Tactic_match);
res = l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_docString__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_declRange__5();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_formatter__13();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_match___regBuiltin_Lean_Parser_Tactic_match_parenthesizer__21();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Tactic_introMatch = _init_l_Lean_Parser_Tactic_introMatch();
lean_mark_persistent(l_Lean_Parser_Tactic_introMatch);
res = l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_formatter__7();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_introMatch___regBuiltin_Lean_Parser_Tactic_introMatch_parenthesizer__11();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Tactic_0__Lean_Parser_Tactic_initFn_00___x40_Lean_Parser_Tactic_2276592124____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Parser_Tactic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Parser_Term(uint8_t builtin);
lean_object* initialize_Lean_Parser_Tactic_Doc(uint8_t builtin);
lean_object* initialize_Std_Tactic_Do_Syntax(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Parser_Tactic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Parser_Term(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Tactic_Doc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Tactic_Do_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser_Tactic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Parser_Tactic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Parser_Tactic(builtin);
}
#ifdef __cplusplus
}
#endif

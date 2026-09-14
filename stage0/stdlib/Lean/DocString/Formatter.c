// Lean compiler output
// Module: Lean.DocString.Formatter
// Imports: public import Lean.PrettyPrinter.Formatter import Lean.DocString.Parser
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
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_Syntax_Traverser_left(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_formatStx(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_decodeStrLit(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* l_String_Slice_subslice_x21(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getNat(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_TSyntax_getString(lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_pushLine___redArg(lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_visitAtom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Doc_Parser_metadataContents_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_visitArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_concat(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_atomString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "NON-ATOM "};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_atomString___closed__0 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_atomString___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_atomString(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomString_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomString_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomString_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomString_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomString_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomString_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomString_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomString_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomString(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomString___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomStrLit___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomStrLit___redArg___closed__0 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomStrLit___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomStrLit___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomStrLit___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomStrLit(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomStrLit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_identString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "NON-IDENT "};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_identString___closed__0 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_identString___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_identString(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushIdent___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushIdent___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushIdent(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushIdent___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_rep_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_rep_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_rep_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_rep_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_rep___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_rep___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_rep(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_rep___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_nl_spec__0(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_nl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_nl___closed__0 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_nl___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_nl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_nl___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_startBlock___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_startBlock___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_startBlock(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_startBlock___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_endBlock___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\n\n"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_endBlock___redArg___closed__0 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_endBlock___redArg___closed__0_value;
static lean_once_cell_t l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_endBlock___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_endBlock___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_endBlock___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_endBlock(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_endBlock___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__3___redArg___closed__0 = (const lean_object*)&l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__3___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__3___redArg();
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__3___redArg___boxed(lean_object*);
static lean_once_cell_t l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__3___closed__0;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__0 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__0_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__1 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__1_value;
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__1_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__2 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__2_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "arg_str"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__3 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Syntax"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Doc"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__0_value;
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__4_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__4_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__2_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__4_value_aux_2),((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__3_value),LEAN_SCALAR_PTR_LITERAL(28, 110, 66, 227, 168, 59, 232, 226)}};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__4 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__4_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "arg_num"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__5 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__5_value;
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__6_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__6_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__2_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__6_value_aux_2),((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__5_value),LEAN_SCALAR_PTR_LITERAL(14, 247, 226, 130, 46, 200, 13, 201)}};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__6 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__6_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "arg_ident"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__7 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__7_value;
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__8_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__8_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__2_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__8_value_aux_2),((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__7_value),LEAN_SCALAR_PTR_LITERAL(73, 49, 249, 222, 84, 35, 6, 34)}};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__8 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__8_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "named"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__9 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__9_value;
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__10_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__10_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__2_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__10_value_aux_2),((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__9_value),LEAN_SCALAR_PTR_LITERAL(240, 209, 4, 173, 176, 102, 100, 110)}};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__10 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__10_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "named_no_paren"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__11 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__11_value;
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__12_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__12_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__2_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__12_value_aux_2),((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__11_value),LEAN_SCALAR_PTR_LITERAL(52, 78, 240, 214, 103, 62, 217, 25)}};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__12 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__12_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "flag_on"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__13 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__13_value;
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__14_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__14_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__14_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__14_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__2_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__14_value_aux_2),((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__13_value),LEAN_SCALAR_PTR_LITERAL(156, 222, 140, 123, 199, 224, 2, 54)}};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__14 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__14_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "flag_off"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__15 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__15_value;
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__16_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__16_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__2_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__16_value_aux_2),((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__15_value),LEAN_SCALAR_PTR_LITERAL(29, 0, 37, 229, 12, 38, 20, 228)}};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__16 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__16_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "anon"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__17 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__17_value;
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__18_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__18_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__18_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__18_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__2_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__18_value_aux_2),((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__17_value),LEAN_SCALAR_PTR_LITERAL(151, 30, 185, 65, 40, 8, 94, 56)}};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__18 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__18_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "text"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__19 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__19_value;
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__20_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__20_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__20_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__20_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__2_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__20_value_aux_2),((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__19_value),LEAN_SCALAR_PTR_LITERAL(252, 149, 124, 218, 116, 154, 240, 105)}};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__20 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__20_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "emph"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__21 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__21_value;
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__22_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__22_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__22_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__22_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__2_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__22_value_aux_2),((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__21_value),LEAN_SCALAR_PTR_LITERAL(76, 183, 215, 94, 0, 242, 191, 239)}};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__22 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__22_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "bold"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__23 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__23_value;
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__24_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__24_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__24_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__24_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__24_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__2_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__24_value_aux_2),((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__23_value),LEAN_SCALAR_PTR_LITERAL(217, 240, 207, 144, 35, 3, 119, 11)}};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__24 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__24_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "link"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__25 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__25_value;
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__26_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__26_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__26_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__26_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__26_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__2_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__26_value_aux_2),((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__25_value),LEAN_SCALAR_PTR_LITERAL(129, 184, 35, 28, 112, 167, 76, 80)}};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__26 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__26_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "image"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__27 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__27_value;
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__28_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__28_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__28_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__28_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__28_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__2_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__28_value_aux_2),((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__27_value),LEAN_SCALAR_PTR_LITERAL(156, 113, 65, 80, 13, 110, 129, 61)}};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__28 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__28_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "role"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__29 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__29_value;
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__30_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__30_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__30_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__30_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__30_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__2_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__30_value_aux_2),((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__29_value),LEAN_SCALAR_PTR_LITERAL(88, 39, 13, 65, 153, 69, 141, 111)}};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__30 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__30_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "code"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__31 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__31_value;
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__32_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__32_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__32_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__32_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__32_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__2_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__32_value_aux_2),((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__31_value),LEAN_SCALAR_PTR_LITERAL(115, 95, 172, 118, 77, 213, 142, 126)}};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__32 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__32_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "footnote"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__33 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__33_value;
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__34_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__34_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__34_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__34_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__34_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__2_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__34_value_aux_2),((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__33_value),LEAN_SCALAR_PTR_LITERAL(207, 87, 199, 0, 139, 133, 244, 123)}};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__34 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__34_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "linebreak"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__35 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__35_value;
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__36_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__36_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__36_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__36_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__36_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__2_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__36_value_aux_2),((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__35_value),LEAN_SCALAR_PTR_LITERAL(204, 183, 85, 224, 226, 177, 67, 207)}};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__36 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__36_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "inline_math"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__37 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__37_value;
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__38_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__38_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__38_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__38_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__38_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__2_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__38_value_aux_2),((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__37_value),LEAN_SCALAR_PTR_LITERAL(39, 58, 152, 4, 55, 96, 114, 182)}};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__38 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__38_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "display_math"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__39 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__39_value;
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__40_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__40_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__40_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__40_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__40_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__2_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__40_value_aux_2),((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__39_value),LEAN_SCALAR_PTR_LITERAL(185, 134, 189, 58, 202, 192, 153, 244)}};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__40 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__40_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ref"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__41 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__41_value;
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__42_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__42_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__42_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__42_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__42_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__2_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__42_value_aux_2),((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__41_value),LEAN_SCALAR_PTR_LITERAL(157, 197, 143, 220, 44, 158, 31, 133)}};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__42 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__42_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "url"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__43 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__43_value;
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__44_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__44_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__44_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__44_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__44_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__2_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__44_value_aux_2),((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__43_value),LEAN_SCALAR_PTR_LITERAL(97, 109, 202, 165, 136, 148, 125, 206)}};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__44 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__44_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "header"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__45 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__45_value;
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__46_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__46_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__46_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__46_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__46_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__2_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__46_value_aux_2),((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__45_value),LEAN_SCALAR_PTR_LITERAL(138, 131, 27, 234, 140, 72, 2, 168)}};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__46 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__46_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "para"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__47 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__47_value;
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__48_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__48_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__48_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__48_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__48_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__2_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__48_value_aux_2),((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__47_value),LEAN_SCALAR_PTR_LITERAL(114, 72, 198, 245, 142, 145, 171, 144)}};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__48 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__48_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ul"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__49 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__49_value;
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__50_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__50_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__50_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__50_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__50_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__2_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__50_value_aux_2),((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__49_value),LEAN_SCALAR_PTR_LITERAL(248, 90, 162, 51, 92, 30, 144, 89)}};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__50 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__50_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ol"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__51 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__51_value;
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__52_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__52_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__52_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__52_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__52_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__2_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__52_value_aux_2),((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__51_value),LEAN_SCALAR_PTR_LITERAL(70, 73, 192, 118, 161, 88, 51, 173)}};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__52 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__52_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "blockquote"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__53 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__53_value;
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__54_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__54_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__54_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__54_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__54_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__2_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__54_value_aux_2),((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__53_value),LEAN_SCALAR_PTR_LITERAL(154, 37, 74, 205, 107, 38, 107, 223)}};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__54 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__54_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "codeblock"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__55 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__55_value;
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__56_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__56_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__56_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__56_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__56_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__2_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__56_value_aux_2),((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__55_value),LEAN_SCALAR_PTR_LITERAL(228, 242, 241, 127, 13, 6, 27, 177)}};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__56 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__56_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "directive"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__57 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__57_value;
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__58_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__58_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__58_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__58_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__58_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__2_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__58_value_aux_2),((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__57_value),LEAN_SCALAR_PTR_LITERAL(59, 236, 126, 236, 245, 181, 4, 182)}};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__58 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__58_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "command"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__59 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__59_value;
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__60_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__60_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__60_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__60_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__60_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__2_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__60_value_aux_2),((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__59_value),LEAN_SCALAR_PTR_LITERAL(163, 102, 246, 27, 44, 229, 232, 70)}};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__60 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__60_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "{"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__61 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__61_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "}"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__62 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__62_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__63 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__63_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "> "};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__64 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__64_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "li"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__4_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__4_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__2_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__4_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__3_value),LEAN_SCALAR_PTR_LITERAL(86, 229, 0, 156, 136, 247, 163, 99)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ". "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__5___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__5___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "* "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__5_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "#"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__65 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__65_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "}["};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__66 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__66_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "str"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__67 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__67_value;
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__67_value),LEAN_SCALAR_PTR_LITERAL(255, 188, 142, 1, 190, 33, 34, 128)}};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__68 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__68_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__69 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__69_value;
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__69_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__70 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__70_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__71_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__71 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__71_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__72_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__72 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__72_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__73 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__73_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__74_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "num"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__74 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__74_value;
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__75_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__74_value),LEAN_SCALAR_PTR_LITERAL(227, 68, 22, 222, 47, 51, 204, 84)}};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__75 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__75_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_formatMetadata___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_formatMetadata___lam__0___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_formatMetadata___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_formatMetadata___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_formatMetadata___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_formatMetadata___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_formatMetadata___closed__0 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_formatMetadata___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_formatMetadata(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_formatMetadata___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString(lean_object*);
static const lean_string_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Doc_Parser_document_formatter_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "metadata_block"};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Doc_Parser_document_formatter_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Doc_Parser_document_formatter_spec__0___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Doc_Parser_document_formatter_spec__0___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Doc_Parser_document_formatter_spec__0___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Doc_Parser_document_formatter_spec__0___redArg___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Doc_Parser_document_formatter_spec__0___redArg___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Doc_Parser_document_formatter_spec__0___redArg___closed__1_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__2_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Doc_Parser_document_formatter_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Doc_Parser_document_formatter_spec__0___redArg___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Doc_Parser_document_formatter_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(75, 201, 5, 85, 129, 97, 253, 216)}};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Doc_Parser_document_formatter_spec__0___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Doc_Parser_document_formatter_spec__0___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Doc_Parser_document_formatter_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Doc_Parser_document_formatter_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_document_formatter___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_document_formatter___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_document_formatter___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_document_formatter___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Doc_Parser_document_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Doc_Parser_document_formatter___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_Parser_document_formatter___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_document_formatter___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_document_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_document_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Doc_Parser_document_formatter_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Doc_Parser_document_formatter_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_atomString(lean_object* v_x_2_){
_start:
{
lean_object* v_stx_4_; 
switch(lean_obj_tag(v_x_2_))
{
case 1:
{
lean_object* v_args_13_; lean_object* v___x_14_; lean_object* v___x_15_; uint8_t v___x_16_; 
v_args_13_ = lean_ctor_get(v_x_2_, 2);
v___x_14_ = lean_array_get_size(v_args_13_);
v___x_15_ = lean_unsigned_to_nat(1u);
v___x_16_ = lean_nat_dec_eq(v___x_14_, v___x_15_);
if (v___x_16_ == 0)
{
v_stx_4_ = v_x_2_;
goto v___jp_3_;
}
else
{
lean_object* v___x_17_; lean_object* v___x_18_; 
lean_inc_ref(v_args_13_);
lean_dec_ref_known(v_x_2_, 3);
v___x_17_ = lean_unsigned_to_nat(0u);
v___x_18_ = lean_array_fget(v_args_13_, v___x_17_);
lean_dec_ref(v_args_13_);
v_x_2_ = v___x_18_;
goto _start;
}
}
case 2:
{
lean_object* v_val_20_; 
v_val_20_ = lean_ctor_get(v_x_2_, 1);
lean_inc_ref(v_val_20_);
lean_dec_ref_known(v_x_2_, 2);
return v_val_20_;
}
default: 
{
v_stx_4_ = v_x_2_;
goto v___jp_3_;
}
}
v___jp_3_:
{
lean_object* v___x_5_; lean_object* v___x_6_; uint8_t v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; 
v___x_5_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_atomString___closed__0));
v___x_6_ = lean_box(0);
v___x_7_ = 0;
v___x_8_ = l_Lean_Syntax_formatStx(v_stx_4_, v___x_6_, v___x_7_);
v___x_9_ = l_Std_Format_defWidth;
v___x_10_ = lean_unsigned_to_nat(0u);
v___x_11_ = l_Std_Format_pretty(v___x_8_, v___x_9_, v___x_10_, v___x_10_);
v___x_12_ = lean_string_append(v___x_5_, v___x_11_);
lean_dec_ref(v___x_11_);
return v___x_12_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomString_spec__0___redArg(lean_object* v___y_21_){
_start:
{
lean_object* v___x_23_; lean_object* v_stxTrav_24_; lean_object* v_cur_25_; lean_object* v___x_26_; 
v___x_23_ = lean_st_ref_get(v___y_21_);
v_stxTrav_24_ = lean_ctor_get(v___x_23_, 0);
lean_inc_ref(v_stxTrav_24_);
lean_dec(v___x_23_);
v_cur_25_ = lean_ctor_get(v_stxTrav_24_, 0);
lean_inc(v_cur_25_);
lean_dec_ref(v_stxTrav_24_);
v___x_26_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_26_, 0, v_cur_25_);
return v___x_26_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomString_spec__0___redArg___boxed(lean_object* v___y_27_, lean_object* v___y_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = l_Lean_Syntax_MonadTraverser_getCur___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomString_spec__0___redArg(v___y_27_);
lean_dec(v___y_27_);
return v_res_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomString_spec__0(lean_object* v___y_30_, lean_object* v___y_31_, lean_object* v___y_32_, lean_object* v___y_33_){
_start:
{
lean_object* v___x_35_; 
v___x_35_ = l_Lean_Syntax_MonadTraverser_getCur___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomString_spec__0___redArg(v___y_31_);
return v___x_35_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomString_spec__0___boxed(lean_object* v___y_36_, lean_object* v___y_37_, lean_object* v___y_38_, lean_object* v___y_39_, lean_object* v___y_40_){
_start:
{
lean_object* v_res_41_; 
v_res_41_ = l_Lean_Syntax_MonadTraverser_getCur___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomString_spec__0(v___y_36_, v___y_37_, v___y_38_, v___y_39_);
lean_dec(v___y_39_);
lean_dec_ref(v___y_38_);
lean_dec(v___y_37_);
lean_dec_ref(v___y_36_);
return v_res_41_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomString_spec__1___redArg(lean_object* v___y_42_){
_start:
{
lean_object* v___x_44_; lean_object* v_stxTrav_45_; lean_object* v_leadWord_46_; uint8_t v_leadWordIdent_47_; uint8_t v_isUngrouped_48_; uint8_t v_mustBeGrouped_49_; lean_object* v_stack_50_; lean_object* v___x_52_; uint8_t v_isShared_53_; uint8_t v_isSharedCheck_61_; 
v___x_44_ = lean_st_ref_take(v___y_42_);
v_stxTrav_45_ = lean_ctor_get(v___x_44_, 0);
v_leadWord_46_ = lean_ctor_get(v___x_44_, 1);
v_leadWordIdent_47_ = lean_ctor_get_uint8(v___x_44_, sizeof(void*)*3);
v_isUngrouped_48_ = lean_ctor_get_uint8(v___x_44_, sizeof(void*)*3 + 1);
v_mustBeGrouped_49_ = lean_ctor_get_uint8(v___x_44_, sizeof(void*)*3 + 2);
v_stack_50_ = lean_ctor_get(v___x_44_, 2);
v_isSharedCheck_61_ = !lean_is_exclusive(v___x_44_);
if (v_isSharedCheck_61_ == 0)
{
v___x_52_ = v___x_44_;
v_isShared_53_ = v_isSharedCheck_61_;
goto v_resetjp_51_;
}
else
{
lean_inc(v_stack_50_);
lean_inc(v_leadWord_46_);
lean_inc(v_stxTrav_45_);
lean_dec(v___x_44_);
v___x_52_ = lean_box(0);
v_isShared_53_ = v_isSharedCheck_61_;
goto v_resetjp_51_;
}
v_resetjp_51_:
{
lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_57_; 
v___x_54_ = lean_box(0);
v___x_55_ = l_Lean_Syntax_Traverser_left(v_stxTrav_45_);
if (v_isShared_53_ == 0)
{
lean_ctor_set(v___x_52_, 0, v___x_55_);
v___x_57_ = v___x_52_;
goto v_reusejp_56_;
}
else
{
lean_object* v_reuseFailAlloc_60_; 
v_reuseFailAlloc_60_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_reuseFailAlloc_60_, 0, v___x_55_);
lean_ctor_set(v_reuseFailAlloc_60_, 1, v_leadWord_46_);
lean_ctor_set(v_reuseFailAlloc_60_, 2, v_stack_50_);
lean_ctor_set_uint8(v_reuseFailAlloc_60_, sizeof(void*)*3, v_leadWordIdent_47_);
lean_ctor_set_uint8(v_reuseFailAlloc_60_, sizeof(void*)*3 + 1, v_isUngrouped_48_);
lean_ctor_set_uint8(v_reuseFailAlloc_60_, sizeof(void*)*3 + 2, v_mustBeGrouped_49_);
v___x_57_ = v_reuseFailAlloc_60_;
goto v_reusejp_56_;
}
v_reusejp_56_:
{
lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_58_ = lean_st_ref_put(v___y_42_, v___x_57_);
v___x_59_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_59_, 0, v___x_54_);
return v___x_59_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomString_spec__1___redArg___boxed(lean_object* v___y_62_, lean_object* v___y_63_){
_start:
{
lean_object* v_res_64_; 
v_res_64_ = l_Lean_Syntax_MonadTraverser_goLeft___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomString_spec__1___redArg(v___y_62_);
lean_dec(v___y_62_);
return v_res_64_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomString_spec__1(lean_object* v___y_65_, lean_object* v___y_66_, lean_object* v___y_67_, lean_object* v___y_68_){
_start:
{
lean_object* v___x_70_; 
v___x_70_ = l_Lean_Syntax_MonadTraverser_goLeft___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomString_spec__1___redArg(v___y_66_);
return v___x_70_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomString_spec__1___boxed(lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_, lean_object* v___y_74_, lean_object* v___y_75_){
_start:
{
lean_object* v_res_76_; 
v_res_76_ = l_Lean_Syntax_MonadTraverser_goLeft___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomString_spec__1(v___y_71_, v___y_72_, v___y_73_, v___y_74_);
lean_dec(v___y_74_);
lean_dec_ref(v___y_73_);
lean_dec(v___y_72_);
lean_dec_ref(v___y_71_);
return v_res_76_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomString(lean_object* v_a_77_, lean_object* v_a_78_, lean_object* v_a_79_, lean_object* v_a_80_){
_start:
{
lean_object* v___x_82_; lean_object* v_a_83_; lean_object* v___x_85_; uint8_t v_isShared_86_; uint8_t v_isSharedCheck_93_; 
v___x_82_ = l_Lean_Syntax_MonadTraverser_getCur___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomString_spec__0___redArg(v_a_78_);
v_a_83_ = lean_ctor_get(v___x_82_, 0);
v_isSharedCheck_93_ = !lean_is_exclusive(v___x_82_);
if (v_isSharedCheck_93_ == 0)
{
v___x_85_ = v___x_82_;
v_isShared_86_ = v_isSharedCheck_93_;
goto v_resetjp_84_;
}
else
{
lean_inc(v_a_83_);
lean_dec(v___x_82_);
v___x_85_ = lean_box(0);
v_isShared_86_ = v_isSharedCheck_93_;
goto v_resetjp_84_;
}
v_resetjp_84_:
{
lean_object* v___x_87_; lean_object* v___x_89_; 
v___x_87_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_atomString(v_a_83_);
if (v_isShared_86_ == 0)
{
lean_ctor_set_tag(v___x_85_, 3);
lean_ctor_set(v___x_85_, 0, v___x_87_);
v___x_89_ = v___x_85_;
goto v_reusejp_88_;
}
else
{
lean_object* v_reuseFailAlloc_92_; 
v_reuseFailAlloc_92_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_92_, 0, v___x_87_);
v___x_89_ = v_reuseFailAlloc_92_;
goto v_reusejp_88_;
}
v_reusejp_88_:
{
lean_object* v___x_90_; 
v___x_90_ = l_Lean_PrettyPrinter_Formatter_push___redArg(v___x_89_, v_a_78_);
if (lean_obj_tag(v___x_90_) == 0)
{
lean_object* v___x_91_; 
lean_dec_ref_known(v___x_90_, 1);
v___x_91_ = l_Lean_Syntax_MonadTraverser_goLeft___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomString_spec__1___redArg(v_a_78_);
return v___x_91_;
}
else
{
return v___x_90_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomString___boxed(lean_object* v_a_94_, lean_object* v_a_95_, lean_object* v_a_96_, lean_object* v_a_97_, lean_object* v_a_98_){
_start:
{
lean_object* v_res_99_; 
v_res_99_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomString(v_a_94_, v_a_95_, v_a_96_, v_a_97_);
lean_dec(v_a_97_);
lean_dec_ref(v_a_96_);
lean_dec(v_a_95_);
lean_dec_ref(v_a_94_);
return v_res_99_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomStrLit___redArg(lean_object* v_a_101_){
_start:
{
lean_object* v___x_103_; lean_object* v_a_104_; lean_object* v___x_106_; uint8_t v_isShared_107_; uint8_t v_isSharedCheck_119_; 
v___x_103_ = l_Lean_Syntax_MonadTraverser_getCur___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomString_spec__0___redArg(v_a_101_);
v_a_104_ = lean_ctor_get(v___x_103_, 0);
v_isSharedCheck_119_ = !lean_is_exclusive(v___x_103_);
if (v_isSharedCheck_119_ == 0)
{
v___x_106_ = v___x_103_;
v_isShared_107_ = v_isSharedCheck_119_;
goto v_resetjp_105_;
}
else
{
lean_inc(v_a_104_);
lean_dec(v___x_103_);
v___x_106_ = lean_box(0);
v_isShared_107_ = v_isSharedCheck_119_;
goto v_resetjp_105_;
}
v_resetjp_105_:
{
lean_object* v___y_109_; lean_object* v___x_115_; lean_object* v___x_116_; 
v___x_115_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_atomString(v_a_104_);
v___x_116_ = l_Lean_Syntax_decodeStrLit(v___x_115_);
if (lean_obj_tag(v___x_116_) == 0)
{
lean_object* v___x_117_; 
v___x_117_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomStrLit___redArg___closed__0));
v___y_109_ = v___x_117_;
goto v___jp_108_;
}
else
{
lean_object* v_val_118_; 
v_val_118_ = lean_ctor_get(v___x_116_, 0);
lean_inc(v_val_118_);
lean_dec_ref_known(v___x_116_, 1);
v___y_109_ = v_val_118_;
goto v___jp_108_;
}
v___jp_108_:
{
lean_object* v___x_111_; 
if (v_isShared_107_ == 0)
{
lean_ctor_set_tag(v___x_106_, 3);
lean_ctor_set(v___x_106_, 0, v___y_109_);
v___x_111_ = v___x_106_;
goto v_reusejp_110_;
}
else
{
lean_object* v_reuseFailAlloc_114_; 
v_reuseFailAlloc_114_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_114_, 0, v___y_109_);
v___x_111_ = v_reuseFailAlloc_114_;
goto v_reusejp_110_;
}
v_reusejp_110_:
{
lean_object* v___x_112_; 
v___x_112_ = l_Lean_PrettyPrinter_Formatter_push___redArg(v___x_111_, v_a_101_);
if (lean_obj_tag(v___x_112_) == 0)
{
lean_object* v___x_113_; 
lean_dec_ref_known(v___x_112_, 1);
v___x_113_ = l_Lean_Syntax_MonadTraverser_goLeft___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomString_spec__1___redArg(v_a_101_);
return v___x_113_;
}
else
{
return v___x_112_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomStrLit___redArg___boxed(lean_object* v_a_120_, lean_object* v_a_121_){
_start:
{
lean_object* v_res_122_; 
v_res_122_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomStrLit___redArg(v_a_120_);
lean_dec(v_a_120_);
return v_res_122_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomStrLit(lean_object* v_a_123_, lean_object* v_a_124_, lean_object* v_a_125_, lean_object* v_a_126_){
_start:
{
lean_object* v___x_128_; 
v___x_128_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomStrLit___redArg(v_a_124_);
return v___x_128_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomStrLit___boxed(lean_object* v_a_129_, lean_object* v_a_130_, lean_object* v_a_131_, lean_object* v_a_132_, lean_object* v_a_133_){
_start:
{
lean_object* v_res_134_; 
v_res_134_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomStrLit(v_a_129_, v_a_130_, v_a_131_, v_a_132_);
lean_dec(v_a_132_);
lean_dec_ref(v_a_131_);
lean_dec(v_a_130_);
lean_dec_ref(v_a_129_);
return v_res_134_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_identString(lean_object* v_x_136_){
_start:
{
lean_object* v_stx_138_; 
switch(lean_obj_tag(v_x_136_))
{
case 1:
{
lean_object* v_args_147_; lean_object* v___x_148_; lean_object* v___x_149_; uint8_t v___x_150_; 
v_args_147_ = lean_ctor_get(v_x_136_, 2);
v___x_148_ = lean_array_get_size(v_args_147_);
v___x_149_ = lean_unsigned_to_nat(1u);
v___x_150_ = lean_nat_dec_eq(v___x_148_, v___x_149_);
if (v___x_150_ == 0)
{
v_stx_138_ = v_x_136_;
goto v___jp_137_;
}
else
{
lean_object* v___x_151_; lean_object* v___x_152_; 
lean_inc_ref(v_args_147_);
lean_dec_ref_known(v_x_136_, 3);
v___x_151_ = lean_unsigned_to_nat(0u);
v___x_152_ = lean_array_fget(v_args_147_, v___x_151_);
lean_dec_ref(v_args_147_);
v_x_136_ = v___x_152_;
goto _start;
}
}
case 3:
{
lean_object* v_val_154_; uint8_t v___x_155_; lean_object* v___x_156_; 
v_val_154_ = lean_ctor_get(v_x_136_, 2);
lean_inc(v_val_154_);
lean_dec_ref_known(v_x_136_, 4);
v___x_155_ = 1;
v___x_156_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_val_154_, v___x_155_);
return v___x_156_;
}
default: 
{
v_stx_138_ = v_x_136_;
goto v___jp_137_;
}
}
v___jp_137_:
{
lean_object* v___x_139_; lean_object* v___x_140_; uint8_t v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; 
v___x_139_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_identString___closed__0));
v___x_140_ = lean_box(0);
v___x_141_ = 0;
v___x_142_ = l_Lean_Syntax_formatStx(v_stx_138_, v___x_140_, v___x_141_);
v___x_143_ = l_Std_Format_defWidth;
v___x_144_ = lean_unsigned_to_nat(0u);
v___x_145_ = l_Std_Format_pretty(v___x_142_, v___x_143_, v___x_144_, v___x_144_);
v___x_146_ = lean_string_append(v___x_139_, v___x_145_);
lean_dec_ref(v___x_145_);
return v___x_146_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushIdent___redArg(lean_object* v_a_157_){
_start:
{
lean_object* v___x_159_; lean_object* v_a_160_; lean_object* v___x_162_; uint8_t v_isShared_163_; uint8_t v_isSharedCheck_170_; 
v___x_159_ = l_Lean_Syntax_MonadTraverser_getCur___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomString_spec__0___redArg(v_a_157_);
v_a_160_ = lean_ctor_get(v___x_159_, 0);
v_isSharedCheck_170_ = !lean_is_exclusive(v___x_159_);
if (v_isSharedCheck_170_ == 0)
{
v___x_162_ = v___x_159_;
v_isShared_163_ = v_isSharedCheck_170_;
goto v_resetjp_161_;
}
else
{
lean_inc(v_a_160_);
lean_dec(v___x_159_);
v___x_162_ = lean_box(0);
v_isShared_163_ = v_isSharedCheck_170_;
goto v_resetjp_161_;
}
v_resetjp_161_:
{
lean_object* v___x_164_; lean_object* v___x_166_; 
v___x_164_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_identString(v_a_160_);
if (v_isShared_163_ == 0)
{
lean_ctor_set_tag(v___x_162_, 3);
lean_ctor_set(v___x_162_, 0, v___x_164_);
v___x_166_ = v___x_162_;
goto v_reusejp_165_;
}
else
{
lean_object* v_reuseFailAlloc_169_; 
v_reuseFailAlloc_169_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_169_, 0, v___x_164_);
v___x_166_ = v_reuseFailAlloc_169_;
goto v_reusejp_165_;
}
v_reusejp_165_:
{
lean_object* v___x_167_; 
v___x_167_ = l_Lean_PrettyPrinter_Formatter_push___redArg(v___x_166_, v_a_157_);
if (lean_obj_tag(v___x_167_) == 0)
{
lean_object* v___x_168_; 
lean_dec_ref_known(v___x_167_, 1);
v___x_168_ = l_Lean_Syntax_MonadTraverser_goLeft___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomString_spec__1___redArg(v_a_157_);
return v___x_168_;
}
else
{
return v___x_167_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushIdent___redArg___boxed(lean_object* v_a_171_, lean_object* v_a_172_){
_start:
{
lean_object* v_res_173_; 
v_res_173_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushIdent___redArg(v_a_171_);
lean_dec(v_a_171_);
return v_res_173_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushIdent(lean_object* v_a_174_, lean_object* v_a_175_, lean_object* v_a_176_, lean_object* v_a_177_){
_start:
{
lean_object* v___x_179_; 
v___x_179_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushIdent___redArg(v_a_175_);
return v___x_179_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushIdent___boxed(lean_object* v_a_180_, lean_object* v_a_181_, lean_object* v_a_182_, lean_object* v_a_183_, lean_object* v_a_184_){
_start:
{
lean_object* v_res_185_; 
v_res_185_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushIdent(v_a_180_, v_a_181_, v_a_182_, v_a_183_);
lean_dec(v_a_183_);
lean_dec_ref(v_a_182_);
lean_dec(v_a_181_);
lean_dec_ref(v_a_180_);
return v_res_185_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_rep_spec__0___redArg(lean_object* v_f_186_, lean_object* v_i_187_, lean_object* v___y_188_, lean_object* v___y_189_, lean_object* v___y_190_, lean_object* v___y_191_){
_start:
{
lean_object* v_zero_193_; uint8_t v_isZero_194_; 
v_zero_193_ = lean_unsigned_to_nat(0u);
v_isZero_194_ = lean_nat_dec_eq(v_i_187_, v_zero_193_);
if (v_isZero_194_ == 1)
{
lean_object* v___x_195_; lean_object* v___x_196_; 
lean_dec(v_i_187_);
lean_dec_ref(v_f_186_);
v___x_195_ = lean_box(0);
v___x_196_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_196_, 0, v___x_195_);
return v___x_196_;
}
else
{
lean_object* v_one_197_; lean_object* v_n_198_; lean_object* v___x_199_; 
v_one_197_ = lean_unsigned_to_nat(1u);
v_n_198_ = lean_nat_sub(v_i_187_, v_one_197_);
lean_dec(v_i_187_);
lean_inc_ref(v_f_186_);
lean_inc(v___y_191_);
lean_inc_ref(v___y_190_);
lean_inc(v___y_189_);
lean_inc_ref(v___y_188_);
v___x_199_ = lean_apply_5(v_f_186_, v___y_188_, v___y_189_, v___y_190_, v___y_191_, lean_box(0));
if (lean_obj_tag(v___x_199_) == 0)
{
lean_dec_ref_known(v___x_199_, 1);
v_i_187_ = v_n_198_;
goto _start;
}
else
{
lean_dec(v_n_198_);
lean_dec_ref(v_f_186_);
return v___x_199_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_rep_spec__0___redArg___boxed(lean_object* v_f_201_, lean_object* v_i_202_, lean_object* v___y_203_, lean_object* v___y_204_, lean_object* v___y_205_, lean_object* v___y_206_, lean_object* v___y_207_){
_start:
{
lean_object* v_res_208_; 
v_res_208_ = l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_rep_spec__0___redArg(v_f_201_, v_i_202_, v___y_203_, v___y_204_, v___y_205_, v___y_206_);
lean_dec(v___y_206_);
lean_dec_ref(v___y_205_);
lean_dec(v___y_204_);
lean_dec_ref(v___y_203_);
return v_res_208_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_rep_spec__0(lean_object* v_f_209_, lean_object* v_n_210_, lean_object* v_i_211_, lean_object* v_a_212_, lean_object* v___y_213_, lean_object* v___y_214_, lean_object* v___y_215_, lean_object* v___y_216_){
_start:
{
lean_object* v___x_218_; 
v___x_218_ = l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_rep_spec__0___redArg(v_f_209_, v_i_211_, v___y_213_, v___y_214_, v___y_215_, v___y_216_);
return v___x_218_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_rep_spec__0___boxed(lean_object* v_f_219_, lean_object* v_n_220_, lean_object* v_i_221_, lean_object* v_a_222_, lean_object* v___y_223_, lean_object* v___y_224_, lean_object* v___y_225_, lean_object* v___y_226_, lean_object* v___y_227_){
_start:
{
lean_object* v_res_228_; 
v_res_228_ = l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_rep_spec__0(v_f_219_, v_n_220_, v_i_221_, v_a_222_, v___y_223_, v___y_224_, v___y_225_, v___y_226_);
lean_dec(v___y_226_);
lean_dec_ref(v___y_225_);
lean_dec(v___y_224_);
lean_dec_ref(v___y_223_);
lean_dec(v_n_220_);
return v_res_228_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_rep___lam__0(lean_object* v_f_229_, lean_object* v___y_230_, lean_object* v___y_231_, lean_object* v___y_232_, lean_object* v___y_233_){
_start:
{
lean_object* v___x_235_; lean_object* v_a_236_; lean_object* v___x_237_; lean_object* v_count_238_; lean_object* v___x_239_; lean_object* v___x_240_; 
v___x_235_ = l_Lean_Syntax_MonadTraverser_getCur___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomString_spec__0___redArg(v___y_231_);
v_a_236_ = lean_ctor_get(v___x_235_, 0);
lean_inc(v_a_236_);
lean_dec_ref(v___x_235_);
v___x_237_ = l_Lean_Syntax_getArgs(v_a_236_);
lean_dec(v_a_236_);
v_count_238_ = lean_array_get_size(v___x_237_);
lean_dec_ref(v___x_237_);
v___x_239_ = lean_alloc_closure((void*)(l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_rep_spec__0___boxed), 9, 4);
lean_closure_set(v___x_239_, 0, v_f_229_);
lean_closure_set(v___x_239_, 1, v_count_238_);
lean_closure_set(v___x_239_, 2, v_count_238_);
lean_closure_set(v___x_239_, 3, lean_box(0));
v___x_240_ = l_Lean_PrettyPrinter_Formatter_visitArgs(v___x_239_, v___y_230_, v___y_231_, v___y_232_, v___y_233_);
return v___x_240_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_rep___lam__0___boxed(lean_object* v_f_241_, lean_object* v___y_242_, lean_object* v___y_243_, lean_object* v___y_244_, lean_object* v___y_245_, lean_object* v___y_246_){
_start:
{
lean_object* v_res_247_; 
v_res_247_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_rep___lam__0(v_f_241_, v___y_242_, v___y_243_, v___y_244_, v___y_245_);
lean_dec(v___y_245_);
lean_dec_ref(v___y_244_);
lean_dec(v___y_243_);
lean_dec_ref(v___y_242_);
return v_res_247_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_rep(lean_object* v_f_248_, lean_object* v_a_249_, lean_object* v_a_250_, lean_object* v_a_251_, lean_object* v_a_252_){
_start:
{
lean_object* v___f_254_; lean_object* v___x_255_; 
v___f_254_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_rep___lam__0___boxed), 6, 1);
lean_closure_set(v___f_254_, 0, v_f_248_);
v___x_255_ = l_Lean_PrettyPrinter_Formatter_concat(v___f_254_, v_a_249_, v_a_250_, v_a_251_, v_a_252_);
return v___x_255_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_rep___boxed(lean_object* v_f_256_, lean_object* v_a_257_, lean_object* v_a_258_, lean_object* v_a_259_, lean_object* v_a_260_, lean_object* v_a_261_){
_start:
{
lean_object* v_res_262_; 
v_res_262_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_rep(v_f_256_, v_a_257_, v_a_258_, v_a_259_, v_a_260_);
lean_dec(v_a_260_);
lean_dec_ref(v_a_259_);
lean_dec(v_a_258_);
lean_dec_ref(v_a_257_);
return v_res_262_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(lean_object* v_s_263_, lean_object* v_a_264_){
_start:
{
lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; 
v___x_265_ = lean_box(0);
v___x_266_ = lean_string_append(v_a_264_, v_s_263_);
v___x_267_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_267_, 0, v___x_265_);
lean_ctor_set(v___x_267_, 1, v___x_266_);
return v___x_267_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg___boxed(lean_object* v_s_268_, lean_object* v_a_269_){
_start:
{
lean_object* v_res_270_; 
v_res_270_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v_s_268_, v_a_269_);
lean_dec_ref(v_s_268_);
return v_res_270_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out(lean_object* v_s_271_, lean_object* v_a_272_, lean_object* v_a_273_){
_start:
{
lean_object* v___x_274_; 
v___x_274_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v_s_271_, v_a_273_);
return v___x_274_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___boxed(lean_object* v_s_275_, lean_object* v_a_276_, lean_object* v_a_277_){
_start:
{
lean_object* v_res_278_; 
v_res_278_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out(v_s_275_, v_a_276_, v_a_277_);
lean_dec(v_a_276_);
lean_dec_ref(v_s_275_);
return v_res_278_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_nl_spec__0(lean_object* v_x_279_, lean_object* v_x_280_){
_start:
{
lean_object* v_zero_281_; uint8_t v_isZero_282_; 
v_zero_281_ = lean_unsigned_to_nat(0u);
v_isZero_282_ = lean_nat_dec_eq(v_x_279_, v_zero_281_);
if (v_isZero_282_ == 1)
{
lean_dec(v_x_279_);
return v_x_280_;
}
else
{
uint32_t v___x_283_; lean_object* v_one_284_; lean_object* v_n_285_; lean_object* v___x_286_; 
v___x_283_ = 32;
v_one_284_ = lean_unsigned_to_nat(1u);
v_n_285_ = lean_nat_sub(v_x_279_, v_one_284_);
lean_dec(v_x_279_);
v___x_286_ = lean_string_push(v_x_280_, v___x_283_);
v_x_279_ = v_n_285_;
v_x_280_ = v___x_286_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_nl(lean_object* v_a_289_, lean_object* v_a_290_){
_start:
{
lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; 
v___x_291_ = lean_box(0);
v___x_292_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_nl___closed__0));
lean_inc(v_a_289_);
v___x_293_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_nl_spec__0(v_a_289_, v___x_292_);
v___x_294_ = lean_string_append(v_a_290_, v___x_293_);
lean_dec_ref(v___x_293_);
v___x_295_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_295_, 0, v___x_291_);
lean_ctor_set(v___x_295_, 1, v___x_294_);
return v___x_295_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_nl___boxed(lean_object* v_a_296_, lean_object* v_a_297_){
_start:
{
lean_object* v_res_298_; 
v_res_298_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_nl(v_a_296_, v_a_297_);
lean_dec(v_a_296_);
return v_res_298_;
}
}
static lean_object* _init_l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_startBlock___closed__0(void){
_start:
{
lean_object* v___x_299_; lean_object* v___x_300_; 
v___x_299_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_nl___closed__0));
v___x_300_ = lean_string_utf8_byte_size(v___x_299_);
return v___x_300_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_startBlock(lean_object* v_a_301_, lean_object* v_a_302_){
_start:
{
lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; uint8_t v___x_309_; 
v___x_306_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_nl___closed__0));
v___x_307_ = lean_string_utf8_byte_size(v_a_302_);
v___x_308_ = lean_obj_once(&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_startBlock___closed__0, &l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_startBlock___closed__0_once, _init_l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_startBlock___closed__0);
v___x_309_ = lean_nat_dec_le(v___x_308_, v___x_307_);
if (v___x_309_ == 0)
{
goto v___jp_303_;
}
else
{
lean_object* v___x_310_; lean_object* v___x_311_; uint8_t v___x_312_; 
v___x_310_ = lean_unsigned_to_nat(0u);
v___x_311_ = lean_nat_sub(v___x_307_, v___x_308_);
v___x_312_ = lean_string_memcmp(v_a_302_, v___x_306_, v___x_311_, v___x_310_, v___x_308_);
lean_dec(v___x_311_);
if (v___x_312_ == 0)
{
goto v___jp_303_;
}
else
{
lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; 
v___x_313_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomStrLit___redArg___closed__0));
lean_inc(v_a_301_);
v___x_314_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_nl_spec__0(v_a_301_, v___x_313_);
v___x_315_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_314_, v_a_302_);
lean_dec_ref(v___x_314_);
return v___x_315_;
}
}
v___jp_303_:
{
lean_object* v___x_304_; lean_object* v___x_305_; 
v___x_304_ = lean_box(0);
v___x_305_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_305_, 0, v___x_304_);
lean_ctor_set(v___x_305_, 1, v_a_302_);
return v___x_305_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_startBlock___boxed(lean_object* v_a_316_, lean_object* v_a_317_){
_start:
{
lean_object* v_res_318_; 
v_res_318_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_startBlock(v_a_316_, v_a_317_);
lean_dec(v_a_316_);
return v_res_318_;
}
}
static lean_object* _init_l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_endBlock___redArg___closed__1(void){
_start:
{
lean_object* v___x_320_; lean_object* v___x_321_; 
v___x_320_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_endBlock___redArg___closed__0));
v___x_321_ = lean_string_utf8_byte_size(v___x_320_);
return v___x_321_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_endBlock___redArg(lean_object* v_a_322_){
_start:
{
lean_object* v___x_323_; lean_object* v___x_335_; lean_object* v___x_336_; uint8_t v___x_337_; 
v___x_323_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_endBlock___redArg___closed__0));
v___x_335_ = lean_string_utf8_byte_size(v_a_322_);
v___x_336_ = lean_obj_once(&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_endBlock___redArg___closed__1, &l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_endBlock___redArg___closed__1_once, _init_l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_endBlock___redArg___closed__1);
v___x_337_ = lean_nat_dec_le(v___x_336_, v___x_335_);
if (v___x_337_ == 0)
{
goto v___jp_324_;
}
else
{
lean_object* v___x_338_; lean_object* v___x_339_; uint8_t v___x_340_; 
v___x_338_ = lean_unsigned_to_nat(0u);
v___x_339_ = lean_nat_sub(v___x_335_, v___x_336_);
v___x_340_ = lean_string_memcmp(v_a_322_, v___x_323_, v___x_339_, v___x_338_, v___x_336_);
lean_dec(v___x_339_);
if (v___x_340_ == 0)
{
goto v___jp_324_;
}
else
{
lean_object* v___x_341_; lean_object* v___x_342_; 
v___x_341_ = lean_box(0);
v___x_342_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_342_, 0, v___x_341_);
lean_ctor_set(v___x_342_, 1, v_a_322_);
return v___x_342_;
}
}
v___jp_324_:
{
lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; uint8_t v___x_328_; 
v___x_325_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_nl___closed__0));
v___x_326_ = lean_string_utf8_byte_size(v_a_322_);
v___x_327_ = lean_obj_once(&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_startBlock___closed__0, &l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_startBlock___closed__0_once, _init_l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_startBlock___closed__0);
v___x_328_ = lean_nat_dec_le(v___x_327_, v___x_326_);
if (v___x_328_ == 0)
{
lean_object* v___x_329_; 
v___x_329_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_323_, v_a_322_);
return v___x_329_;
}
else
{
lean_object* v___x_330_; lean_object* v___x_331_; uint8_t v___x_332_; 
v___x_330_ = lean_unsigned_to_nat(0u);
v___x_331_ = lean_nat_sub(v___x_326_, v___x_327_);
v___x_332_ = lean_string_memcmp(v_a_322_, v___x_325_, v___x_331_, v___x_330_, v___x_327_);
lean_dec(v___x_331_);
if (v___x_332_ == 0)
{
lean_object* v___x_333_; 
v___x_333_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_323_, v_a_322_);
return v___x_333_;
}
else
{
lean_object* v___x_334_; 
v___x_334_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_325_, v_a_322_);
return v___x_334_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_endBlock(lean_object* v_a_343_, lean_object* v_a_344_){
_start:
{
lean_object* v___x_345_; 
v___x_345_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_endBlock___redArg(v_a_344_);
return v___x_345_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_endBlock___boxed(lean_object* v_a_346_, lean_object* v_a_347_){
_start:
{
lean_object* v_res_348_; 
v_res_348_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_endBlock(v_a_346_, v_a_347_);
lean_dec(v_a_346_);
return v_res_348_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__3___redArg(){
_start:
{
lean_object* v___x_352_; 
v___x_352_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__3___redArg___closed__0));
return v___x_352_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__3___redArg___boxed(lean_object* v___dummy_353_){
_start:
{
lean_object* v_res_354_; 
v_res_354_ = l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__3___redArg();
return v_res_354_;
}
}
static lean_object* _init_l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__3___closed__0(void){
_start:
{
lean_object* v___x_355_; 
v___x_355_ = l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__3___redArg();
return v___x_355_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__3(lean_object* v_s_356_){
_start:
{
lean_object* v___x_357_; 
v___x_357_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__3___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__3___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__3___closed__0);
return v___x_357_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__3___boxed(lean_object* v_s_358_){
_start:
{
lean_object* v_res_359_; 
v_res_359_ = l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__3(v_s_358_);
lean_dec_ref(v_s_358_);
return v_res_359_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__7(lean_object* v_x_360_, lean_object* v_x_361_){
_start:
{
lean_object* v_zero_362_; uint8_t v_isZero_363_; 
v_zero_362_ = lean_unsigned_to_nat(0u);
v_isZero_363_ = lean_nat_dec_eq(v_x_360_, v_zero_362_);
if (v_isZero_363_ == 1)
{
lean_dec(v_x_360_);
return v_x_361_;
}
else
{
uint32_t v___x_364_; lean_object* v_one_365_; lean_object* v_n_366_; lean_object* v___x_367_; 
v___x_364_ = 35;
v_one_365_ = lean_unsigned_to_nat(1u);
v_n_366_ = lean_nat_sub(v_x_360_, v_one_365_);
lean_dec(v_x_360_);
v___x_367_ = lean_string_push(v_x_361_, v___x_364_);
v_x_360_ = v_n_366_;
v_x_361_ = v___x_367_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__4___redArg(lean_object* v_a_369_, lean_object* v___y_370_, lean_object* v___x_371_, lean_object* v___x_372_, lean_object* v_a_373_, lean_object* v_b_374_){
_start:
{
lean_object* v_it_376_; lean_object* v_startInclusive_377_; lean_object* v_endExclusive_378_; 
if (lean_obj_tag(v_a_373_) == 0)
{
lean_object* v_currPos_385_; lean_object* v_searcher_386_; lean_object* v___x_388_; uint8_t v_isShared_389_; uint8_t v_isSharedCheck_409_; 
v_currPos_385_ = lean_ctor_get(v_a_373_, 0);
v_searcher_386_ = lean_ctor_get(v_a_373_, 1);
v_isSharedCheck_409_ = !lean_is_exclusive(v_a_373_);
if (v_isSharedCheck_409_ == 0)
{
v___x_388_ = v_a_373_;
v_isShared_389_ = v_isSharedCheck_409_;
goto v_resetjp_387_;
}
else
{
lean_inc(v_searcher_386_);
lean_inc(v_currPos_385_);
lean_dec(v_a_373_);
v___x_388_ = lean_box(0);
v_isShared_389_ = v_isSharedCheck_409_;
goto v_resetjp_387_;
}
v_resetjp_387_:
{
uint8_t v_decide_390_; 
v_decide_390_ = lean_nat_dec_eq(v_searcher_386_, v___x_372_);
if (v_decide_390_ == 0)
{
uint32_t v___x_391_; uint32_t v___x_392_; uint8_t v___x_393_; 
v___x_391_ = 10;
v___x_392_ = lean_string_utf8_get_fast(v___y_370_, v_searcher_386_);
v___x_393_ = lean_uint32_dec_eq(v___x_392_, v___x_391_);
if (v___x_393_ == 0)
{
lean_object* v___x_394_; lean_object* v___x_396_; 
v___x_394_ = lean_string_utf8_next_fast(v___y_370_, v_searcher_386_);
lean_dec(v_searcher_386_);
if (v_isShared_389_ == 0)
{
lean_ctor_set(v___x_388_, 1, v___x_394_);
v___x_396_ = v___x_388_;
goto v_reusejp_395_;
}
else
{
lean_object* v_reuseFailAlloc_398_; 
v_reuseFailAlloc_398_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_398_, 0, v_currPos_385_);
lean_ctor_set(v_reuseFailAlloc_398_, 1, v___x_394_);
v___x_396_ = v_reuseFailAlloc_398_;
goto v_reusejp_395_;
}
v_reusejp_395_:
{
v_a_373_ = v___x_396_;
goto _start;
}
}
else
{
lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v_slice_402_; lean_object* v_nextIt_404_; 
v___x_399_ = lean_string_utf8_next_fast(v___y_370_, v_searcher_386_);
v___x_400_ = lean_nat_sub(v___x_399_, v_searcher_386_);
v___x_401_ = lean_nat_add(v_searcher_386_, v___x_400_);
lean_dec(v___x_400_);
v_slice_402_ = l_String_Slice_subslice_x21(v___x_371_, v_currPos_385_, v_searcher_386_);
lean_inc(v___x_401_);
if (v_isShared_389_ == 0)
{
lean_ctor_set(v___x_388_, 1, v___x_401_);
lean_ctor_set(v___x_388_, 0, v___x_401_);
v_nextIt_404_ = v___x_388_;
goto v_reusejp_403_;
}
else
{
lean_object* v_reuseFailAlloc_407_; 
v_reuseFailAlloc_407_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_407_, 0, v___x_401_);
lean_ctor_set(v_reuseFailAlloc_407_, 1, v___x_401_);
v_nextIt_404_ = v_reuseFailAlloc_407_;
goto v_reusejp_403_;
}
v_reusejp_403_:
{
lean_object* v_startInclusive_405_; lean_object* v_endExclusive_406_; 
v_startInclusive_405_ = lean_ctor_get(v_slice_402_, 0);
lean_inc(v_startInclusive_405_);
v_endExclusive_406_ = lean_ctor_get(v_slice_402_, 1);
lean_inc(v_endExclusive_406_);
lean_dec_ref(v_slice_402_);
v_it_376_ = v_nextIt_404_;
v_startInclusive_377_ = v_startInclusive_405_;
v_endExclusive_378_ = v_endExclusive_406_;
goto v___jp_375_;
}
}
}
else
{
lean_object* v___x_408_; 
lean_del_object(v___x_388_);
lean_dec(v_searcher_386_);
v___x_408_ = lean_box(1);
lean_inc(v___x_372_);
v_it_376_ = v___x_408_;
v_startInclusive_377_ = v_currPos_385_;
v_endExclusive_378_ = v___x_372_;
goto v___jp_375_;
}
}
}
else
{
lean_dec(v___x_372_);
return v_b_374_;
}
v___jp_375_:
{
lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; 
v___x_379_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomStrLit___redArg___closed__0));
lean_inc(v_a_369_);
v___x_380_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_nl_spec__0(v_a_369_, v___x_379_);
v___x_381_ = lean_string_utf8_extract_fast(v___y_370_, v_startInclusive_377_, v_endExclusive_378_);
lean_dec(v_endExclusive_378_);
lean_dec(v_startInclusive_377_);
v___x_382_ = lean_string_append(v___x_380_, v___x_381_);
lean_dec_ref(v___x_381_);
v___x_383_ = lean_array_push(v_b_374_, v___x_382_);
v_a_373_ = v_it_376_;
v_b_374_ = v___x_383_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__4___redArg___boxed(lean_object* v_a_410_, lean_object* v___y_411_, lean_object* v___x_412_, lean_object* v___x_413_, lean_object* v_a_414_, lean_object* v_b_415_){
_start:
{
lean_object* v_res_416_; 
v_res_416_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__4___redArg(v_a_410_, v___y_411_, v___x_412_, v___x_413_, v_a_414_, v_b_415_);
lean_dec_ref(v___x_412_);
lean_dec_ref(v___y_411_);
lean_dec(v_a_410_);
return v_res_416_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__0(lean_object* v_as_600_, size_t v_sz_601_, size_t v_i_602_, lean_object* v_b_603_, lean_object* v___y_604_, lean_object* v___y_605_){
_start:
{
uint8_t v___x_606_; 
v___x_606_ = lean_usize_dec_lt(v_i_602_, v_sz_601_);
if (v___x_606_ == 0)
{
lean_object* v___x_607_; 
v___x_607_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_607_, 0, v_b_603_);
lean_ctor_set(v___x_607_, 1, v___y_605_);
return v___x_607_;
}
else
{
lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v_snd_610_; lean_object* v_a_611_; lean_object* v___x_612_; lean_object* v_snd_613_; lean_object* v___x_614_; size_t v___x_615_; size_t v___x_616_; 
v___x_608_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__0___closed__0));
v___x_609_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_608_, v___y_605_);
v_snd_610_ = lean_ctor_get(v___x_609_, 1);
lean_inc(v_snd_610_);
lean_dec_ref(v___x_609_);
v_a_611_ = lean_array_uget_borrowed(v_as_600_, v_i_602_);
lean_inc(v_a_611_);
v___x_612_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27(v_a_611_, v___y_604_, v_snd_610_);
v_snd_613_ = lean_ctor_get(v___x_612_, 1);
lean_inc(v_snd_613_);
lean_dec_ref(v___x_612_);
v___x_614_ = lean_box(0);
v___x_615_ = ((size_t)1ULL);
v___x_616_ = lean_usize_add(v_i_602_, v___x_615_);
v_i_602_ = v___x_616_;
v_b_603_ = v___x_614_;
v___y_605_ = v_snd_613_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__1(lean_object* v_as_619_, size_t v_sz_620_, size_t v_i_621_, lean_object* v_b_622_, lean_object* v___y_623_, lean_object* v___y_624_){
_start:
{
uint8_t v___x_625_; 
v___x_625_ = lean_usize_dec_lt(v_i_621_, v_sz_620_);
if (v___x_625_ == 0)
{
lean_object* v___x_626_; 
v___x_626_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_626_, 0, v_b_622_);
lean_ctor_set(v___x_626_, 1, v___y_624_);
return v___x_626_;
}
else
{
lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v_snd_629_; lean_object* v_a_630_; lean_object* v___x_631_; lean_object* v_snd_632_; lean_object* v___x_633_; size_t v___x_634_; size_t v___x_635_; 
v___x_627_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__0___closed__0));
v___x_628_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_627_, v___y_624_);
v_snd_629_ = lean_ctor_get(v___x_628_, 1);
lean_inc(v_snd_629_);
lean_dec_ref(v___x_628_);
v_a_630_ = lean_array_uget_borrowed(v_as_619_, v_i_621_);
lean_inc(v_a_630_);
v___x_631_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27(v_a_630_, v___y_623_, v_snd_629_);
v_snd_632_ = lean_ctor_get(v___x_631_, 1);
lean_inc(v_snd_632_);
lean_dec_ref(v___x_631_);
v___x_633_ = lean_box(0);
v___x_634_ = ((size_t)1ULL);
v___x_635_ = lean_usize_add(v_i_621_, v___x_634_);
v_i_621_ = v___x_635_;
v_b_622_ = v___x_633_;
v___y_624_ = v_snd_632_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__5(lean_object* v_as_647_, size_t v_sz_648_, size_t v_i_649_, lean_object* v_b_650_, lean_object* v___y_651_, lean_object* v___y_652_){
_start:
{
lean_object* v_a_654_; lean_object* v_snd_655_; uint8_t v___x_659_; 
v___x_659_ = lean_usize_dec_lt(v_i_649_, v_sz_648_);
if (v___x_659_ == 0)
{
lean_object* v___x_660_; 
v___x_660_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_660_, 0, v_b_650_);
lean_ctor_set(v___x_660_, 1, v___y_652_);
return v___x_660_;
}
else
{
lean_object* v_a_661_; lean_object* v___x_662_; uint8_t v___x_663_; 
v_a_661_ = lean_array_uget_borrowed(v_as_647_, v_i_649_);
v___x_662_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__4));
lean_inc(v_a_661_);
v___x_663_ = l_Lean_Syntax_isOfKind(v_a_661_, v___x_662_);
if (v___x_663_ == 0)
{
v_a_654_ = v_b_650_;
v_snd_655_ = v___y_652_;
goto v___jp_653_;
}
else
{
lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v_snd_668_; lean_object* v___x_669_; lean_object* v_snd_671_; lean_object* v___y_676_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; uint8_t v___x_684_; 
lean_inc(v_b_650_);
v___x_664_ = l_Nat_reprFast(v_b_650_);
v___x_665_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__5___closed__0));
v___x_666_ = lean_string_append(v___x_664_, v___x_665_);
v___x_667_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_666_, v___y_652_);
lean_dec_ref(v___x_666_);
v_snd_668_ = lean_ctor_get(v___x_667_, 1);
lean_inc(v_snd_668_);
lean_dec_ref(v___x_667_);
v___x_669_ = lean_unsigned_to_nat(1u);
v___x_678_ = lean_unsigned_to_nat(0u);
v___x_679_ = l_Lean_Syntax_getArg(v_a_661_, v___x_669_);
v___x_680_ = l_Lean_Syntax_getArgs(v___x_679_);
lean_dec(v___x_679_);
v___x_681_ = l_unsafeCast___redArg(v___x_680_);
lean_dec_ref(v___x_680_);
v___x_682_ = l_unsafeCast___redArg(v___x_681_);
lean_dec(v___x_681_);
v___x_683_ = lean_array_get_size(v___x_682_);
v___x_684_ = lean_nat_dec_lt(v___x_678_, v___x_683_);
if (v___x_684_ == 0)
{
lean_dec(v___x_682_);
v_snd_671_ = v_snd_668_;
goto v___jp_670_;
}
else
{
lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; uint8_t v___x_688_; 
v___x_685_ = lean_unsigned_to_nat(2u);
v___x_686_ = lean_nat_add(v___y_651_, v___x_685_);
v___x_687_ = lean_box(0);
v___x_688_ = lean_nat_dec_le(v___x_683_, v___x_683_);
if (v___x_688_ == 0)
{
if (v___x_684_ == 0)
{
lean_dec(v___x_686_);
lean_dec(v___x_682_);
v_snd_671_ = v_snd_668_;
goto v___jp_670_;
}
else
{
size_t v___x_689_; size_t v___x_690_; lean_object* v___x_691_; 
v___x_689_ = ((size_t)0ULL);
v___x_690_ = lean_usize_of_nat(v___x_683_);
v___x_691_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__2(v___x_682_, v___x_689_, v___x_690_, v___x_687_, v___x_686_, v_snd_668_);
lean_dec(v___x_686_);
lean_dec(v___x_682_);
v___y_676_ = v___x_691_;
goto v___jp_675_;
}
}
else
{
size_t v___x_692_; size_t v___x_693_; lean_object* v___x_694_; 
v___x_692_ = ((size_t)0ULL);
v___x_693_ = lean_usize_of_nat(v___x_683_);
v___x_694_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__2(v___x_682_, v___x_692_, v___x_693_, v___x_687_, v___x_686_, v_snd_668_);
lean_dec(v___x_686_);
lean_dec(v___x_682_);
v___y_676_ = v___x_694_;
goto v___jp_675_;
}
}
v___jp_670_:
{
lean_object* v___x_672_; lean_object* v_snd_673_; lean_object* v___x_674_; 
v___x_672_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_endBlock___redArg(v_snd_671_);
v_snd_673_ = lean_ctor_get(v___x_672_, 1);
lean_inc(v_snd_673_);
lean_dec_ref(v___x_672_);
v___x_674_ = lean_nat_add(v_b_650_, v___x_669_);
lean_dec(v_b_650_);
v_a_654_ = v___x_674_;
v_snd_655_ = v_snd_673_;
goto v___jp_653_;
}
v___jp_675_:
{
lean_object* v_snd_677_; 
v_snd_677_ = lean_ctor_get(v___y_676_, 1);
lean_inc(v_snd_677_);
lean_dec_ref(v___y_676_);
v_snd_671_ = v_snd_677_;
goto v___jp_670_;
}
}
}
v___jp_653_:
{
size_t v___x_656_; size_t v___x_657_; 
v___x_656_ = ((size_t)1ULL);
v___x_657_ = lean_usize_add(v_i_649_, v___x_656_);
v_i_649_ = v___x_657_;
v_b_650_ = v_a_654_;
v___y_652_ = v_snd_655_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6(lean_object* v_as_696_, size_t v_i_697_, size_t v_stop_698_, lean_object* v_b_699_, lean_object* v___y_700_, lean_object* v___y_701_){
_start:
{
lean_object* v_fst_703_; lean_object* v_snd_704_; lean_object* v___y_709_; lean_object* v___y_713_; uint8_t v___x_716_; 
v___x_716_ = lean_usize_dec_eq(v_i_697_, v_stop_698_);
if (v___x_716_ == 0)
{
lean_object* v___x_717_; lean_object* v___x_718_; uint8_t v___x_719_; 
v___x_717_ = lean_array_uget_borrowed(v_as_696_, v_i_697_);
v___x_718_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__4));
lean_inc(v___x_717_);
v___x_719_ = l_Lean_Syntax_isOfKind(v___x_717_, v___x_718_);
if (v___x_719_ == 0)
{
lean_object* v___x_720_; 
v___x_720_ = lean_box(0);
v_fst_703_ = v___x_720_;
v_snd_704_ = v___y_701_;
goto v___jp_702_;
}
else
{
lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v_snd_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; uint8_t v___x_731_; 
v___x_721_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___closed__5));
v___x_722_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_721_, v___y_701_);
v_snd_723_ = lean_ctor_get(v___x_722_, 1);
lean_inc(v_snd_723_);
lean_dec_ref(v___x_722_);
v___x_724_ = lean_unsigned_to_nat(1u);
v___x_725_ = lean_unsigned_to_nat(0u);
v___x_726_ = l_Lean_Syntax_getArg(v___x_717_, v___x_724_);
v___x_727_ = l_Lean_Syntax_getArgs(v___x_726_);
lean_dec(v___x_726_);
v___x_728_ = l_unsafeCast___redArg(v___x_727_);
lean_dec_ref(v___x_727_);
v___x_729_ = l_unsafeCast___redArg(v___x_728_);
lean_dec(v___x_728_);
v___x_730_ = lean_array_get_size(v___x_729_);
v___x_731_ = lean_nat_dec_lt(v___x_725_, v___x_730_);
if (v___x_731_ == 0)
{
lean_object* v___x_732_; 
lean_dec(v___x_729_);
v___x_732_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_endBlock___redArg(v_snd_723_);
v___y_709_ = v___x_732_;
goto v___jp_708_;
}
else
{
lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; uint8_t v___x_736_; 
v___x_733_ = lean_unsigned_to_nat(2u);
v___x_734_ = lean_nat_add(v___y_700_, v___x_733_);
v___x_735_ = lean_box(0);
v___x_736_ = lean_nat_dec_le(v___x_730_, v___x_730_);
if (v___x_736_ == 0)
{
if (v___x_731_ == 0)
{
lean_object* v___x_737_; 
lean_dec(v___x_734_);
lean_dec(v___x_729_);
v___x_737_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_endBlock___redArg(v_snd_723_);
v___y_709_ = v___x_737_;
goto v___jp_708_;
}
else
{
size_t v___x_738_; size_t v___x_739_; lean_object* v___x_740_; 
v___x_738_ = ((size_t)0ULL);
v___x_739_ = lean_usize_of_nat(v___x_730_);
v___x_740_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__2(v___x_729_, v___x_738_, v___x_739_, v___x_735_, v___x_734_, v_snd_723_);
lean_dec(v___x_734_);
lean_dec(v___x_729_);
v___y_713_ = v___x_740_;
goto v___jp_712_;
}
}
else
{
size_t v___x_741_; size_t v___x_742_; lean_object* v___x_743_; 
v___x_741_ = ((size_t)0ULL);
v___x_742_ = lean_usize_of_nat(v___x_730_);
v___x_743_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__2(v___x_729_, v___x_741_, v___x_742_, v___x_735_, v___x_734_, v_snd_723_);
lean_dec(v___x_734_);
lean_dec(v___x_729_);
v___y_713_ = v___x_743_;
goto v___jp_712_;
}
}
}
}
else
{
lean_object* v___x_744_; 
v___x_744_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_744_, 0, v_b_699_);
lean_ctor_set(v___x_744_, 1, v___y_701_);
return v___x_744_;
}
v___jp_702_:
{
size_t v___x_705_; size_t v___x_706_; 
v___x_705_ = ((size_t)1ULL);
v___x_706_ = lean_usize_add(v_i_697_, v___x_705_);
v_i_697_ = v___x_706_;
v_b_699_ = v_fst_703_;
v___y_701_ = v_snd_704_;
goto _start;
}
v___jp_708_:
{
lean_object* v_fst_710_; lean_object* v_snd_711_; 
v_fst_710_ = lean_ctor_get(v___y_709_, 0);
lean_inc(v_fst_710_);
v_snd_711_ = lean_ctor_get(v___y_709_, 1);
lean_inc(v_snd_711_);
lean_dec_ref(v___y_709_);
v_fst_703_ = v_fst_710_;
v_snd_704_ = v_snd_711_;
goto v___jp_702_;
}
v___jp_712_:
{
lean_object* v_snd_714_; lean_object* v___x_715_; 
v_snd_714_ = lean_ctor_get(v___y_713_, 1);
lean_inc(v_snd_714_);
lean_dec_ref(v___y_713_);
v___x_715_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_endBlock___redArg(v_snd_714_);
v___y_709_ = v___x_715_;
goto v___jp_708_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27(lean_object* v_stx_759_, lean_object* v_a_760_, lean_object* v_a_761_){
_start:
{
lean_object* v___y_763_; lean_object* v___y_767_; lean_object* v___y_771_; lean_object* v___y_775_; lean_object* v_snd_779_; lean_object* v___y_783_; lean_object* v___x_785_; lean_object* v___x_786_; uint8_t v___x_787_; 
lean_inc(v_stx_759_);
v___x_785_ = l_Lean_Syntax_getKind(v_stx_759_);
v___x_786_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__2));
v___x_787_ = lean_name_eq(v___x_785_, v___x_786_);
lean_dec(v___x_785_);
if (v___x_787_ == 0)
{
lean_object* v___x_788_; uint8_t v___x_789_; 
v___x_788_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__4));
lean_inc(v_stx_759_);
v___x_789_ = l_Lean_Syntax_isOfKind(v_stx_759_, v___x_788_);
if (v___x_789_ == 0)
{
lean_object* v___x_790_; uint8_t v___x_791_; 
v___x_790_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__6));
lean_inc(v_stx_759_);
v___x_791_ = l_Lean_Syntax_isOfKind(v_stx_759_, v___x_790_);
if (v___x_791_ == 0)
{
lean_object* v___x_792_; uint8_t v___x_793_; 
v___x_792_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__8));
lean_inc(v_stx_759_);
v___x_793_ = l_Lean_Syntax_isOfKind(v_stx_759_, v___x_792_);
if (v___x_793_ == 0)
{
lean_object* v___x_794_; uint8_t v___x_795_; 
v___x_794_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__10));
lean_inc(v_stx_759_);
v___x_795_ = l_Lean_Syntax_isOfKind(v_stx_759_, v___x_794_);
if (v___x_795_ == 0)
{
lean_object* v___x_796_; uint8_t v___x_797_; 
v___x_796_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__12));
lean_inc(v_stx_759_);
v___x_797_ = l_Lean_Syntax_isOfKind(v_stx_759_, v___x_796_);
if (v___x_797_ == 0)
{
lean_object* v___x_798_; uint8_t v___x_799_; 
v___x_798_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__14));
lean_inc(v_stx_759_);
v___x_799_ = l_Lean_Syntax_isOfKind(v_stx_759_, v___x_798_);
if (v___x_799_ == 0)
{
lean_object* v___x_800_; uint8_t v___x_801_; 
v___x_800_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__16));
lean_inc(v_stx_759_);
v___x_801_ = l_Lean_Syntax_isOfKind(v_stx_759_, v___x_800_);
if (v___x_801_ == 0)
{
lean_object* v___x_802_; uint8_t v___x_803_; 
v___x_802_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__18));
lean_inc(v_stx_759_);
v___x_803_ = l_Lean_Syntax_isOfKind(v_stx_759_, v___x_802_);
if (v___x_803_ == 0)
{
lean_object* v___x_804_; uint8_t v___x_805_; 
v___x_804_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__20));
lean_inc(v_stx_759_);
v___x_805_ = l_Lean_Syntax_isOfKind(v_stx_759_, v___x_804_);
if (v___x_805_ == 0)
{
lean_object* v___x_806_; uint8_t v___x_807_; 
v___x_806_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__22));
lean_inc(v_stx_759_);
v___x_807_ = l_Lean_Syntax_isOfKind(v_stx_759_, v___x_806_);
if (v___x_807_ == 0)
{
lean_object* v___x_808_; uint8_t v___x_809_; 
v___x_808_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__24));
lean_inc(v_stx_759_);
v___x_809_ = l_Lean_Syntax_isOfKind(v_stx_759_, v___x_808_);
if (v___x_809_ == 0)
{
lean_object* v___x_810_; uint8_t v___x_811_; 
v___x_810_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__26));
lean_inc(v_stx_759_);
v___x_811_ = l_Lean_Syntax_isOfKind(v_stx_759_, v___x_810_);
if (v___x_811_ == 0)
{
lean_object* v___x_812_; uint8_t v___x_813_; 
v___x_812_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__28));
lean_inc(v_stx_759_);
v___x_813_ = l_Lean_Syntax_isOfKind(v_stx_759_, v___x_812_);
if (v___x_813_ == 0)
{
lean_object* v___x_814_; uint8_t v___x_815_; 
v___x_814_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__30));
lean_inc(v_stx_759_);
v___x_815_ = l_Lean_Syntax_isOfKind(v_stx_759_, v___x_814_);
if (v___x_815_ == 0)
{
lean_object* v___x_816_; uint8_t v___x_817_; 
v___x_816_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__32));
lean_inc(v_stx_759_);
v___x_817_ = l_Lean_Syntax_isOfKind(v_stx_759_, v___x_816_);
if (v___x_817_ == 0)
{
lean_object* v___x_818_; uint8_t v___x_819_; 
v___x_818_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__34));
lean_inc(v_stx_759_);
v___x_819_ = l_Lean_Syntax_isOfKind(v_stx_759_, v___x_818_);
if (v___x_819_ == 0)
{
lean_object* v___x_820_; uint8_t v___x_821_; 
v___x_820_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__36));
lean_inc(v_stx_759_);
v___x_821_ = l_Lean_Syntax_isOfKind(v_stx_759_, v___x_820_);
if (v___x_821_ == 0)
{
lean_object* v___x_822_; uint8_t v___x_823_; 
v___x_822_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__38));
lean_inc(v_stx_759_);
v___x_823_ = l_Lean_Syntax_isOfKind(v_stx_759_, v___x_822_);
if (v___x_823_ == 0)
{
lean_object* v___x_824_; uint8_t v___x_825_; 
v___x_824_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__40));
lean_inc(v_stx_759_);
v___x_825_ = l_Lean_Syntax_isOfKind(v_stx_759_, v___x_824_);
if (v___x_825_ == 0)
{
lean_object* v___x_826_; uint8_t v___x_827_; 
v___x_826_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__42));
lean_inc(v_stx_759_);
v___x_827_ = l_Lean_Syntax_isOfKind(v_stx_759_, v___x_826_);
if (v___x_827_ == 0)
{
lean_object* v___x_828_; uint8_t v___x_829_; 
v___x_828_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__44));
lean_inc(v_stx_759_);
v___x_829_ = l_Lean_Syntax_isOfKind(v_stx_759_, v___x_828_);
if (v___x_829_ == 0)
{
lean_object* v___x_830_; uint8_t v___x_831_; 
v___x_830_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__46));
lean_inc(v_stx_759_);
v___x_831_ = l_Lean_Syntax_isOfKind(v_stx_759_, v___x_830_);
if (v___x_831_ == 0)
{
lean_object* v___x_832_; uint8_t v___x_833_; 
v___x_832_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__48));
lean_inc(v_stx_759_);
v___x_833_ = l_Lean_Syntax_isOfKind(v_stx_759_, v___x_832_);
if (v___x_833_ == 0)
{
lean_object* v___x_834_; uint8_t v___x_835_; 
v___x_834_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__50));
lean_inc(v_stx_759_);
v___x_835_ = l_Lean_Syntax_isOfKind(v_stx_759_, v___x_834_);
if (v___x_835_ == 0)
{
lean_object* v___x_836_; uint8_t v___x_837_; 
v___x_836_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__52));
lean_inc(v_stx_759_);
v___x_837_ = l_Lean_Syntax_isOfKind(v_stx_759_, v___x_836_);
if (v___x_837_ == 0)
{
lean_object* v___x_838_; uint8_t v___x_839_; 
v___x_838_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__54));
lean_inc(v_stx_759_);
v___x_839_ = l_Lean_Syntax_isOfKind(v_stx_759_, v___x_838_);
if (v___x_839_ == 0)
{
lean_object* v___x_840_; uint8_t v___x_841_; 
v___x_840_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__56));
lean_inc(v_stx_759_);
v___x_841_ = l_Lean_Syntax_isOfKind(v_stx_759_, v___x_840_);
if (v___x_841_ == 0)
{
lean_object* v___x_842_; uint8_t v___x_843_; 
v___x_842_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__58));
lean_inc(v_stx_759_);
v___x_843_ = l_Lean_Syntax_isOfKind(v_stx_759_, v___x_842_);
if (v___x_843_ == 0)
{
lean_object* v___x_844_; uint8_t v___x_845_; 
v___x_844_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__60));
lean_inc(v_stx_759_);
v___x_845_ = l_Lean_Syntax_isOfKind(v_stx_759_, v___x_844_);
if (v___x_845_ == 0)
{
lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; 
v___x_846_ = lean_box(0);
v___x_847_ = l_Lean_Syntax_formatStx(v_stx_759_, v___x_846_, v___x_845_);
v___x_848_ = l_Std_Format_defWidth;
v___x_849_ = lean_unsigned_to_nat(0u);
v___x_850_ = l_Std_Format_pretty(v___x_847_, v___x_848_, v___x_849_, v___x_849_);
v___x_851_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_850_, v_a_761_);
lean_dec_ref(v___x_850_);
return v___x_851_;
}
else
{
lean_object* v___x_852_; lean_object* v_snd_853_; lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v_snd_856_; lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v_snd_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v_args_865_; lean_object* v___x_866_; size_t v_sz_867_; size_t v___x_868_; lean_object* v___x_869_; lean_object* v_snd_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v_snd_873_; lean_object* v___x_874_; 
v___x_852_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_startBlock(v_a_760_, v_a_761_);
v_snd_853_ = lean_ctor_get(v___x_852_, 1);
lean_inc(v_snd_853_);
lean_dec_ref(v___x_852_);
v___x_854_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__61));
v___x_855_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_854_, v_snd_853_);
v_snd_856_ = lean_ctor_get(v___x_855_, 1);
lean_inc(v_snd_856_);
lean_dec_ref(v___x_855_);
v___x_857_ = lean_unsigned_to_nat(1u);
v___x_858_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_857_);
v___x_859_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_identString(v___x_858_);
v___x_860_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_859_, v_snd_856_);
lean_dec_ref(v___x_859_);
v_snd_861_ = lean_ctor_get(v___x_860_, 1);
lean_inc(v_snd_861_);
lean_dec_ref(v___x_860_);
v___x_862_ = lean_unsigned_to_nat(2u);
v___x_863_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_862_);
lean_dec(v_stx_759_);
v___x_864_ = l_Lean_Syntax_getArgs(v___x_863_);
lean_dec(v___x_863_);
v_args_865_ = l_unsafeCast___redArg(v___x_864_);
lean_dec_ref(v___x_864_);
v___x_866_ = lean_box(0);
v_sz_867_ = lean_array_size(v_args_865_);
v___x_868_ = ((size_t)0ULL);
v___x_869_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__0(v_args_865_, v_sz_867_, v___x_868_, v___x_866_, v_a_760_, v_snd_861_);
lean_dec(v_args_865_);
v_snd_870_ = lean_ctor_get(v___x_869_, 1);
lean_inc(v_snd_870_);
lean_dec_ref(v___x_869_);
v___x_871_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__62));
v___x_872_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_871_, v_snd_870_);
v_snd_873_ = lean_ctor_get(v___x_872_, 1);
lean_inc(v_snd_873_);
lean_dec_ref(v___x_872_);
v___x_874_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_endBlock___redArg(v_snd_873_);
return v___x_874_;
}
}
else
{
lean_object* v___x_875_; lean_object* v_snd_876_; lean_object* v___x_877_; lean_object* v_tk1_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v_snd_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v_snd_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v_snd_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v_args_893_; lean_object* v___x_894_; size_t v_sz_895_; size_t v___x_896_; lean_object* v___x_897_; lean_object* v_snd_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v_snd_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v_tk2_905_; lean_object* v_snd_907_; lean_object* v___y_917_; lean_object* v___x_919_; lean_object* v_blks_920_; lean_object* v___x_921_; lean_object* v___x_922_; uint8_t v___x_923_; 
v___x_875_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_startBlock(v_a_760_, v_a_761_);
v_snd_876_ = lean_ctor_get(v___x_875_, 1);
lean_inc(v_snd_876_);
lean_dec_ref(v___x_875_);
v___x_877_ = lean_unsigned_to_nat(0u);
v_tk1_878_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_877_);
v___x_879_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_atomString(v_tk1_878_);
v___x_880_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_879_, v_snd_876_);
lean_dec_ref(v___x_879_);
v_snd_881_ = lean_ctor_get(v___x_880_, 1);
lean_inc(v_snd_881_);
lean_dec_ref(v___x_880_);
v___x_882_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__0___closed__0));
v___x_883_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_882_, v_snd_881_);
v_snd_884_ = lean_ctor_get(v___x_883_, 1);
lean_inc(v_snd_884_);
lean_dec_ref(v___x_883_);
v___x_885_ = lean_unsigned_to_nat(1u);
v___x_886_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_885_);
v___x_887_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_identString(v___x_886_);
v___x_888_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_887_, v_snd_884_);
lean_dec_ref(v___x_887_);
v_snd_889_ = lean_ctor_get(v___x_888_, 1);
lean_inc(v_snd_889_);
lean_dec_ref(v___x_888_);
v___x_890_ = lean_unsigned_to_nat(2u);
v___x_891_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_890_);
v___x_892_ = l_Lean_Syntax_getArgs(v___x_891_);
lean_dec(v___x_891_);
v_args_893_ = l_unsafeCast___redArg(v___x_892_);
lean_dec_ref(v___x_892_);
v___x_894_ = lean_box(0);
v_sz_895_ = lean_array_size(v_args_893_);
v___x_896_ = ((size_t)0ULL);
v___x_897_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__1(v_args_893_, v_sz_895_, v___x_896_, v___x_894_, v_a_760_, v_snd_889_);
lean_dec(v_args_893_);
v_snd_898_ = lean_ctor_get(v___x_897_, 1);
lean_inc(v_snd_898_);
lean_dec_ref(v___x_897_);
v___x_899_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_nl___closed__0));
v___x_900_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_899_, v_snd_898_);
v_snd_901_ = lean_ctor_get(v___x_900_, 1);
lean_inc(v_snd_901_);
lean_dec_ref(v___x_900_);
v___x_902_ = lean_unsigned_to_nat(4u);
v___x_903_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_902_);
v___x_904_ = lean_unsigned_to_nat(5u);
v_tk2_905_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_904_);
lean_dec(v_stx_759_);
v___x_919_ = l_Lean_Syntax_getArgs(v___x_903_);
lean_dec(v___x_903_);
v_blks_920_ = l_unsafeCast___redArg(v___x_919_);
lean_dec_ref(v___x_919_);
v___x_921_ = l_unsafeCast___redArg(v_blks_920_);
lean_dec(v_blks_920_);
v___x_922_ = lean_array_get_size(v___x_921_);
v___x_923_ = lean_nat_dec_lt(v___x_877_, v___x_922_);
if (v___x_923_ == 0)
{
lean_dec(v___x_921_);
v_snd_907_ = v_snd_901_;
goto v___jp_906_;
}
else
{
uint8_t v___x_924_; 
v___x_924_ = lean_nat_dec_le(v___x_922_, v___x_922_);
if (v___x_924_ == 0)
{
if (v___x_923_ == 0)
{
lean_dec(v___x_921_);
v_snd_907_ = v_snd_901_;
goto v___jp_906_;
}
else
{
size_t v___x_925_; lean_object* v___x_926_; 
v___x_925_ = lean_usize_of_nat(v___x_922_);
v___x_926_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__2(v___x_921_, v___x_896_, v___x_925_, v___x_894_, v_a_760_, v_snd_901_);
lean_dec(v___x_921_);
v___y_917_ = v___x_926_;
goto v___jp_916_;
}
}
else
{
size_t v___x_927_; lean_object* v___x_928_; 
v___x_927_ = lean_usize_of_nat(v___x_922_);
v___x_928_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__2(v___x_921_, v___x_896_, v___x_927_, v___x_894_, v_a_760_, v_snd_901_);
lean_dec(v___x_921_);
v___y_917_ = v___x_928_;
goto v___jp_916_;
}
}
v___jp_906_:
{
lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v_snd_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v_snd_914_; lean_object* v___x_915_; 
v___x_908_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomStrLit___redArg___closed__0));
lean_inc(v_a_760_);
v___x_909_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_nl_spec__0(v_a_760_, v___x_908_);
v___x_910_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_909_, v_snd_907_);
lean_dec_ref(v___x_909_);
v_snd_911_ = lean_ctor_get(v___x_910_, 1);
lean_inc(v_snd_911_);
lean_dec_ref(v___x_910_);
v___x_912_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_atomString(v_tk2_905_);
v___x_913_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_912_, v_snd_911_);
lean_dec_ref(v___x_912_);
v_snd_914_ = lean_ctor_get(v___x_913_, 1);
lean_inc(v_snd_914_);
lean_dec_ref(v___x_913_);
v___x_915_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_endBlock___redArg(v_snd_914_);
return v___x_915_;
}
v___jp_916_:
{
lean_object* v_snd_918_; 
v_snd_918_ = lean_ctor_get(v___y_917_, 1);
lean_inc(v_snd_918_);
lean_dec_ref(v___y_917_);
v_snd_907_ = v_snd_918_;
goto v___jp_906_;
}
}
}
else
{
lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; uint8_t v___x_932_; 
v___x_929_ = lean_unsigned_to_nat(1u);
v___x_930_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_929_);
v___x_931_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_930_);
v___x_932_ = l_Lean_Syntax_matchesNull(v___x_930_, v___x_931_);
if (v___x_932_ == 0)
{
lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; 
lean_dec(v___x_930_);
v___x_933_ = lean_box(0);
v___x_934_ = l_Lean_Syntax_formatStx(v_stx_759_, v___x_933_, v___x_932_);
v___x_935_ = l_Std_Format_defWidth;
v___x_936_ = lean_unsigned_to_nat(0u);
v___x_937_ = l_Std_Format_pretty(v___x_934_, v___x_935_, v___x_936_, v___x_936_);
v___x_938_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_937_, v_a_761_);
lean_dec_ref(v___x_937_);
return v___x_938_;
}
else
{
lean_object* v___x_939_; lean_object* v_snd_940_; lean_object* v___x_941_; lean_object* v_tk1_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v_snd_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v_snd_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v_args_952_; lean_object* v___x_953_; size_t v_sz_954_; size_t v___x_955_; lean_object* v___x_956_; lean_object* v_snd_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v_snd_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v_tk2_964_; lean_object* v___y_966_; lean_object* v___x_984_; lean_object* v___x_985_; 
v___x_939_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_startBlock(v_a_760_, v_a_761_);
v_snd_940_ = lean_ctor_get(v___x_939_, 1);
lean_inc(v_snd_940_);
lean_dec_ref(v___x_939_);
v___x_941_ = lean_unsigned_to_nat(0u);
v_tk1_942_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_941_);
v___x_943_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_atomString(v_tk1_942_);
v___x_944_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_943_, v_snd_940_);
lean_dec_ref(v___x_943_);
v_snd_945_ = lean_ctor_get(v___x_944_, 1);
lean_inc(v_snd_945_);
lean_dec_ref(v___x_944_);
v___x_946_ = l_Lean_Syntax_getArg(v___x_930_, v___x_941_);
v___x_947_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_identString(v___x_946_);
v___x_948_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_947_, v_snd_945_);
lean_dec_ref(v___x_947_);
v_snd_949_ = lean_ctor_get(v___x_948_, 1);
lean_inc(v_snd_949_);
lean_dec_ref(v___x_948_);
v___x_950_ = l_Lean_Syntax_getArg(v___x_930_, v___x_929_);
lean_dec(v___x_930_);
v___x_951_ = l_Lean_Syntax_getArgs(v___x_950_);
lean_dec(v___x_950_);
v_args_952_ = l_unsafeCast___redArg(v___x_951_);
lean_dec_ref(v___x_951_);
v___x_953_ = lean_box(0);
v_sz_954_ = lean_array_size(v_args_952_);
v___x_955_ = ((size_t)0ULL);
v___x_956_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__0(v_args_952_, v_sz_954_, v___x_955_, v___x_953_, v_a_760_, v_snd_949_);
lean_dec(v_args_952_);
v_snd_957_ = lean_ctor_get(v___x_956_, 1);
lean_inc(v_snd_957_);
lean_dec_ref(v___x_956_);
v___x_958_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_nl___closed__0));
v___x_959_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_958_, v_snd_957_);
v_snd_960_ = lean_ctor_get(v___x_959_, 1);
lean_inc(v_snd_960_);
lean_dec_ref(v___x_959_);
v___x_961_ = lean_unsigned_to_nat(3u);
v___x_962_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_961_);
v___x_963_ = lean_unsigned_to_nat(4u);
v_tk2_964_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_963_);
lean_dec(v_stx_759_);
v___x_984_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_atomString(v___x_962_);
v___x_985_ = l_Lean_Syntax_decodeStrLit(v___x_984_);
if (lean_obj_tag(v___x_985_) == 0)
{
lean_object* v___x_986_; 
v___x_986_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomStrLit___redArg___closed__0));
v___y_966_ = v___x_986_;
goto v___jp_965_;
}
else
{
lean_object* v_val_987_; 
v_val_987_ = lean_ctor_get(v___x_985_, 0);
lean_inc(v_val_987_);
lean_dec_ref_known(v___x_985_, 1);
v___y_966_ = v_val_987_;
goto v___jp_965_;
}
v___jp_965_:
{
lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v_snd_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v_snd_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v_snd_982_; lean_object* v___x_983_; 
v___x_967_ = lean_string_utf8_byte_size(v___y_966_);
lean_inc_ref(v___y_966_);
v___x_968_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_968_, 0, v___y_966_);
lean_ctor_set(v___x_968_, 1, v___x_941_);
lean_ctor_set(v___x_968_, 2, v___x_967_);
v___x_969_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__3___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__3___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__3___closed__0);
v___x_970_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__63));
v___x_971_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__4___redArg(v_a_760_, v___y_966_, v___x_968_, v___x_967_, v___x_969_, v___x_970_);
lean_dec_ref_known(v___x_968_, 3);
lean_dec_ref(v___y_966_);
v___x_972_ = lean_array_to_list(v___x_971_);
v___x_973_ = l_String_intercalate(v___x_958_, v___x_972_);
v___x_974_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_973_, v_snd_960_);
lean_dec_ref(v___x_973_);
v_snd_975_ = lean_ctor_get(v___x_974_, 1);
lean_inc(v_snd_975_);
lean_dec_ref(v___x_974_);
v___x_976_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomStrLit___redArg___closed__0));
lean_inc(v_a_760_);
v___x_977_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_nl_spec__0(v_a_760_, v___x_976_);
v___x_978_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_977_, v_snd_975_);
lean_dec_ref(v___x_977_);
v_snd_979_ = lean_ctor_get(v___x_978_, 1);
lean_inc(v_snd_979_);
lean_dec_ref(v___x_978_);
v___x_980_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_atomString(v_tk2_964_);
v___x_981_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_980_, v_snd_979_);
lean_dec_ref(v___x_980_);
v_snd_982_ = lean_ctor_get(v___x_981_, 1);
lean_inc(v_snd_982_);
lean_dec_ref(v___x_981_);
v___x_983_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_endBlock___redArg(v_snd_982_);
return v___x_983_;
}
}
}
}
else
{
lean_object* v___x_988_; lean_object* v_snd_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v_snd_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v_blks_997_; lean_object* v___x_998_; lean_object* v___x_999_; uint8_t v___x_1000_; 
v___x_988_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_startBlock(v_a_760_, v_a_761_);
v_snd_989_ = lean_ctor_get(v___x_988_, 1);
lean_inc(v_snd_989_);
lean_dec_ref(v___x_988_);
v___x_990_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__64));
v___x_991_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_990_, v_snd_989_);
v_snd_992_ = lean_ctor_get(v___x_991_, 1);
lean_inc(v_snd_992_);
lean_dec_ref(v___x_991_);
v___x_993_ = lean_unsigned_to_nat(0u);
v___x_994_ = lean_unsigned_to_nat(1u);
v___x_995_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_994_);
lean_dec(v_stx_759_);
v___x_996_ = l_Lean_Syntax_getArgs(v___x_995_);
lean_dec(v___x_995_);
v_blks_997_ = l_unsafeCast___redArg(v___x_996_);
lean_dec_ref(v___x_996_);
v___x_998_ = l_unsafeCast___redArg(v_blks_997_);
lean_dec(v_blks_997_);
v___x_999_ = lean_array_get_size(v___x_998_);
v___x_1000_ = lean_nat_dec_lt(v___x_993_, v___x_999_);
if (v___x_1000_ == 0)
{
lean_object* v___x_1001_; 
lean_dec(v___x_998_);
v___x_1001_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_endBlock___redArg(v_snd_992_);
return v___x_1001_;
}
else
{
lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; uint8_t v___x_1005_; 
v___x_1002_ = lean_unsigned_to_nat(2u);
v___x_1003_ = lean_nat_add(v_a_760_, v___x_1002_);
v___x_1004_ = lean_box(0);
v___x_1005_ = lean_nat_dec_le(v___x_999_, v___x_999_);
if (v___x_1005_ == 0)
{
if (v___x_1000_ == 0)
{
lean_object* v___x_1006_; 
lean_dec(v___x_1003_);
lean_dec(v___x_998_);
v___x_1006_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_endBlock___redArg(v_snd_992_);
return v___x_1006_;
}
else
{
size_t v___x_1007_; size_t v___x_1008_; lean_object* v___x_1009_; 
v___x_1007_ = ((size_t)0ULL);
v___x_1008_ = lean_usize_of_nat(v___x_999_);
v___x_1009_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__2(v___x_998_, v___x_1007_, v___x_1008_, v___x_1004_, v___x_1003_, v_snd_992_);
lean_dec(v___x_1003_);
lean_dec(v___x_998_);
v___y_763_ = v___x_1009_;
goto v___jp_762_;
}
}
else
{
size_t v___x_1010_; size_t v___x_1011_; lean_object* v___x_1012_; 
v___x_1010_ = ((size_t)0ULL);
v___x_1011_ = lean_usize_of_nat(v___x_999_);
v___x_1012_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__2(v___x_998_, v___x_1010_, v___x_1011_, v___x_1004_, v___x_1003_, v_snd_992_);
lean_dec(v___x_1003_);
lean_dec(v___x_998_);
v___y_763_ = v___x_1012_;
goto v___jp_762_;
}
}
}
}
else
{
lean_object* v___x_1013_; lean_object* v_snd_1014_; lean_object* v___x_1015_; lean_object* v_n_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v_items_1020_; lean_object* v___x_1021_; size_t v_sz_1022_; size_t v___x_1023_; lean_object* v___x_1024_; lean_object* v_snd_1025_; lean_object* v___x_1026_; 
v___x_1013_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_startBlock(v_a_760_, v_a_761_);
v_snd_1014_ = lean_ctor_get(v___x_1013_, 1);
lean_inc(v_snd_1014_);
lean_dec_ref(v___x_1013_);
v___x_1015_ = lean_unsigned_to_nat(1u);
v_n_1016_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_1015_);
v___x_1017_ = lean_unsigned_to_nat(4u);
v___x_1018_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_1017_);
lean_dec(v_stx_759_);
v___x_1019_ = l_Lean_Syntax_getArgs(v___x_1018_);
lean_dec(v___x_1018_);
v_items_1020_ = l_unsafeCast___redArg(v___x_1019_);
lean_dec_ref(v___x_1019_);
v___x_1021_ = l_Lean_TSyntax_getNat(v_n_1016_);
lean_dec(v_n_1016_);
v_sz_1022_ = lean_array_size(v_items_1020_);
v___x_1023_ = ((size_t)0ULL);
v___x_1024_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__5(v_items_1020_, v_sz_1022_, v___x_1023_, v___x_1021_, v_a_760_, v_snd_1014_);
lean_dec(v_items_1020_);
v_snd_1025_ = lean_ctor_get(v___x_1024_, 1);
lean_inc(v_snd_1025_);
lean_dec_ref(v___x_1024_);
v___x_1026_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_endBlock___redArg(v_snd_1025_);
return v___x_1026_;
}
}
else
{
lean_object* v___x_1027_; lean_object* v_snd_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v_items_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; uint8_t v___x_1036_; 
v___x_1027_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_startBlock(v_a_760_, v_a_761_);
v_snd_1028_ = lean_ctor_get(v___x_1027_, 1);
lean_inc(v_snd_1028_);
lean_dec_ref(v___x_1027_);
v___x_1029_ = lean_unsigned_to_nat(0u);
v___x_1030_ = lean_unsigned_to_nat(1u);
v___x_1031_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_1030_);
lean_dec(v_stx_759_);
v___x_1032_ = l_Lean_Syntax_getArgs(v___x_1031_);
lean_dec(v___x_1031_);
v_items_1033_ = l_unsafeCast___redArg(v___x_1032_);
lean_dec_ref(v___x_1032_);
v___x_1034_ = l_unsafeCast___redArg(v_items_1033_);
lean_dec(v_items_1033_);
v___x_1035_ = lean_array_get_size(v___x_1034_);
v___x_1036_ = lean_nat_dec_lt(v___x_1029_, v___x_1035_);
if (v___x_1036_ == 0)
{
lean_object* v___x_1037_; 
lean_dec(v___x_1034_);
v___x_1037_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_endBlock___redArg(v_snd_1028_);
return v___x_1037_;
}
else
{
lean_object* v___x_1038_; uint8_t v___x_1039_; 
v___x_1038_ = lean_box(0);
v___x_1039_ = lean_nat_dec_le(v___x_1035_, v___x_1035_);
if (v___x_1039_ == 0)
{
if (v___x_1036_ == 0)
{
lean_object* v___x_1040_; 
lean_dec(v___x_1034_);
v___x_1040_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_endBlock___redArg(v_snd_1028_);
return v___x_1040_;
}
else
{
size_t v___x_1041_; size_t v___x_1042_; lean_object* v___x_1043_; 
v___x_1041_ = ((size_t)0ULL);
v___x_1042_ = lean_usize_of_nat(v___x_1035_);
v___x_1043_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6(v___x_1034_, v___x_1041_, v___x_1042_, v___x_1038_, v_a_760_, v_snd_1028_);
lean_dec(v___x_1034_);
v___y_767_ = v___x_1043_;
goto v___jp_766_;
}
}
else
{
size_t v___x_1044_; size_t v___x_1045_; lean_object* v___x_1046_; 
v___x_1044_ = ((size_t)0ULL);
v___x_1045_ = lean_usize_of_nat(v___x_1035_);
v___x_1046_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6(v___x_1034_, v___x_1044_, v___x_1045_, v___x_1038_, v_a_760_, v_snd_1028_);
lean_dec(v___x_1034_);
v___y_767_ = v___x_1046_;
goto v___jp_766_;
}
}
}
}
else
{
lean_object* v___x_1047_; lean_object* v_snd_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v_inl_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; uint8_t v___x_1056_; 
v___x_1047_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_startBlock(v_a_760_, v_a_761_);
v_snd_1048_ = lean_ctor_get(v___x_1047_, 1);
lean_inc(v_snd_1048_);
lean_dec_ref(v___x_1047_);
v___x_1049_ = lean_unsigned_to_nat(0u);
v___x_1050_ = lean_unsigned_to_nat(1u);
v___x_1051_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_1050_);
lean_dec(v_stx_759_);
v___x_1052_ = l_Lean_Syntax_getArgs(v___x_1051_);
lean_dec(v___x_1051_);
v_inl_1053_ = l_unsafeCast___redArg(v___x_1052_);
lean_dec_ref(v___x_1052_);
v___x_1054_ = l_unsafeCast___redArg(v_inl_1053_);
lean_dec(v_inl_1053_);
v___x_1055_ = lean_array_get_size(v___x_1054_);
v___x_1056_ = lean_nat_dec_lt(v___x_1049_, v___x_1055_);
if (v___x_1056_ == 0)
{
lean_object* v___x_1057_; 
lean_dec(v___x_1054_);
v___x_1057_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_endBlock___redArg(v_snd_1048_);
return v___x_1057_;
}
else
{
lean_object* v___x_1058_; uint8_t v___x_1059_; 
v___x_1058_ = lean_box(0);
v___x_1059_ = lean_nat_dec_le(v___x_1055_, v___x_1055_);
if (v___x_1059_ == 0)
{
if (v___x_1056_ == 0)
{
lean_object* v___x_1060_; 
lean_dec(v___x_1054_);
v___x_1060_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_endBlock___redArg(v_snd_1048_);
return v___x_1060_;
}
else
{
size_t v___x_1061_; size_t v___x_1062_; lean_object* v___x_1063_; 
v___x_1061_ = ((size_t)0ULL);
v___x_1062_ = lean_usize_of_nat(v___x_1055_);
v___x_1063_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__2(v___x_1054_, v___x_1061_, v___x_1062_, v___x_1058_, v_a_760_, v_snd_1048_);
lean_dec(v___x_1054_);
v___y_771_ = v___x_1063_;
goto v___jp_770_;
}
}
else
{
size_t v___x_1064_; size_t v___x_1065_; lean_object* v___x_1066_; 
v___x_1064_ = ((size_t)0ULL);
v___x_1065_ = lean_usize_of_nat(v___x_1055_);
v___x_1066_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__2(v___x_1054_, v___x_1064_, v___x_1065_, v___x_1058_, v_a_760_, v_snd_1048_);
lean_dec(v___x_1054_);
v___y_771_ = v___x_1066_;
goto v___jp_770_;
}
}
}
}
else
{
lean_object* v___x_1067_; lean_object* v_n_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v_snd_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v_inl_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; uint8_t v___x_1083_; 
v___x_1067_ = lean_unsigned_to_nat(1u);
v_n_1068_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_1067_);
v___x_1069_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__65));
v___x_1070_ = l_Lean_TSyntax_getNat(v_n_1068_);
lean_dec(v_n_1068_);
v___x_1071_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__7(v___x_1070_, v___x_1069_);
v___x_1072_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__0___closed__0));
v___x_1073_ = lean_string_append(v___x_1071_, v___x_1072_);
v___x_1074_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_1073_, v_a_761_);
lean_dec_ref(v___x_1073_);
v_snd_1075_ = lean_ctor_get(v___x_1074_, 1);
lean_inc(v_snd_1075_);
lean_dec_ref(v___x_1074_);
v___x_1076_ = lean_unsigned_to_nat(0u);
v___x_1077_ = lean_unsigned_to_nat(4u);
v___x_1078_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_1077_);
lean_dec(v_stx_759_);
v___x_1079_ = l_Lean_Syntax_getArgs(v___x_1078_);
lean_dec(v___x_1078_);
v_inl_1080_ = l_unsafeCast___redArg(v___x_1079_);
lean_dec_ref(v___x_1079_);
v___x_1081_ = l_unsafeCast___redArg(v_inl_1080_);
lean_dec(v_inl_1080_);
v___x_1082_ = lean_array_get_size(v___x_1081_);
v___x_1083_ = lean_nat_dec_lt(v___x_1076_, v___x_1082_);
if (v___x_1083_ == 0)
{
lean_object* v___x_1084_; 
lean_dec(v___x_1081_);
v___x_1084_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_endBlock___redArg(v_snd_1075_);
return v___x_1084_;
}
else
{
lean_object* v___x_1085_; uint8_t v___x_1086_; 
v___x_1085_ = lean_box(0);
v___x_1086_ = lean_nat_dec_le(v___x_1082_, v___x_1082_);
if (v___x_1086_ == 0)
{
if (v___x_1083_ == 0)
{
lean_object* v___x_1087_; 
lean_dec(v___x_1081_);
v___x_1087_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_endBlock___redArg(v_snd_1075_);
return v___x_1087_;
}
else
{
size_t v___x_1088_; size_t v___x_1089_; lean_object* v___x_1090_; 
v___x_1088_ = ((size_t)0ULL);
v___x_1089_ = lean_usize_of_nat(v___x_1082_);
v___x_1090_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__2(v___x_1081_, v___x_1088_, v___x_1089_, v___x_1085_, v_a_760_, v_snd_1075_);
lean_dec(v___x_1081_);
v___y_775_ = v___x_1090_;
goto v___jp_774_;
}
}
else
{
size_t v___x_1091_; size_t v___x_1092_; lean_object* v___x_1093_; 
v___x_1091_ = ((size_t)0ULL);
v___x_1092_ = lean_usize_of_nat(v___x_1082_);
v___x_1093_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__2(v___x_1081_, v___x_1091_, v___x_1092_, v___x_1085_, v_a_760_, v_snd_1075_);
lean_dec(v___x_1081_);
v___y_775_ = v___x_1093_;
goto v___jp_774_;
}
}
}
}
else
{
lean_object* v___x_1094_; lean_object* v_tk1_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v_snd_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v_tk2_1102_; lean_object* v___y_1104_; lean_object* v___x_1109_; lean_object* v___x_1110_; 
v___x_1094_ = lean_unsigned_to_nat(0u);
v_tk1_1095_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_1094_);
v___x_1096_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_atomString(v_tk1_1095_);
v___x_1097_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_1096_, v_a_761_);
lean_dec_ref(v___x_1096_);
v_snd_1098_ = lean_ctor_get(v___x_1097_, 1);
lean_inc(v_snd_1098_);
lean_dec_ref(v___x_1097_);
v___x_1099_ = lean_unsigned_to_nat(1u);
v___x_1100_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_1099_);
v___x_1101_ = lean_unsigned_to_nat(2u);
v_tk2_1102_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_1101_);
lean_dec(v_stx_759_);
v___x_1109_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_atomString(v___x_1100_);
v___x_1110_ = l_Lean_Syntax_decodeStrLit(v___x_1109_);
if (lean_obj_tag(v___x_1110_) == 0)
{
lean_object* v___x_1111_; 
v___x_1111_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomStrLit___redArg___closed__0));
v___y_1104_ = v___x_1111_;
goto v___jp_1103_;
}
else
{
lean_object* v_val_1112_; 
v_val_1112_ = lean_ctor_get(v___x_1110_, 0);
lean_inc(v_val_1112_);
lean_dec_ref_known(v___x_1110_, 1);
v___y_1104_ = v_val_1112_;
goto v___jp_1103_;
}
v___jp_1103_:
{
lean_object* v___x_1105_; lean_object* v_snd_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; 
v___x_1105_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___y_1104_, v_snd_1098_);
lean_dec_ref(v___y_1104_);
v_snd_1106_ = lean_ctor_get(v___x_1105_, 1);
lean_inc(v_snd_1106_);
lean_dec_ref(v___x_1105_);
v___x_1107_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_atomString(v_tk2_1102_);
v___x_1108_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_1107_, v_snd_1106_);
lean_dec_ref(v___x_1107_);
return v___x_1108_;
}
}
}
else
{
lean_object* v___x_1113_; lean_object* v_tk1_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v_snd_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v_tk2_1121_; lean_object* v___y_1123_; lean_object* v___x_1128_; lean_object* v___x_1129_; 
v___x_1113_ = lean_unsigned_to_nat(0u);
v_tk1_1114_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_1113_);
v___x_1115_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_atomString(v_tk1_1114_);
v___x_1116_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_1115_, v_a_761_);
lean_dec_ref(v___x_1115_);
v_snd_1117_ = lean_ctor_get(v___x_1116_, 1);
lean_inc(v_snd_1117_);
lean_dec_ref(v___x_1116_);
v___x_1118_ = lean_unsigned_to_nat(1u);
v___x_1119_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_1118_);
v___x_1120_ = lean_unsigned_to_nat(2u);
v_tk2_1121_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_1120_);
lean_dec(v_stx_759_);
v___x_1128_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_atomString(v___x_1119_);
v___x_1129_ = l_Lean_Syntax_decodeStrLit(v___x_1128_);
if (lean_obj_tag(v___x_1129_) == 0)
{
lean_object* v___x_1130_; 
v___x_1130_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomStrLit___redArg___closed__0));
v___y_1123_ = v___x_1130_;
goto v___jp_1122_;
}
else
{
lean_object* v_val_1131_; 
v_val_1131_ = lean_ctor_get(v___x_1129_, 0);
lean_inc(v_val_1131_);
lean_dec_ref_known(v___x_1129_, 1);
v___y_1123_ = v_val_1131_;
goto v___jp_1122_;
}
v___jp_1122_:
{
lean_object* v___x_1124_; lean_object* v_snd_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; 
v___x_1124_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___y_1123_, v_snd_1117_);
lean_dec_ref(v___y_1123_);
v_snd_1125_ = lean_ctor_get(v___x_1124_, 1);
lean_inc(v_snd_1125_);
lean_dec_ref(v___x_1124_);
v___x_1126_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_atomString(v_tk2_1121_);
v___x_1127_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_1126_, v_snd_1125_);
lean_dec_ref(v___x_1126_);
return v___x_1127_;
}
}
}
else
{
lean_object* v___x_1132_; lean_object* v___x_1133_; uint8_t v___x_1134_; 
v___x_1132_ = lean_unsigned_to_nat(1u);
v___x_1133_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_1132_);
lean_inc(v___x_1133_);
v___x_1134_ = l_Lean_Syntax_isOfKind(v___x_1133_, v___x_816_);
if (v___x_1134_ == 0)
{
lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; 
lean_dec(v___x_1133_);
v___x_1135_ = lean_box(0);
v___x_1136_ = l_Lean_Syntax_formatStx(v_stx_759_, v___x_1135_, v___x_1134_);
v___x_1137_ = l_Std_Format_defWidth;
v___x_1138_ = lean_unsigned_to_nat(0u);
v___x_1139_ = l_Std_Format_pretty(v___x_1136_, v___x_1137_, v___x_1138_, v___x_1138_);
v___x_1140_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_1139_, v_a_761_);
lean_dec_ref(v___x_1139_);
return v___x_1140_;
}
else
{
lean_object* v___x_1141_; lean_object* v_tk1_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v_snd_1145_; lean_object* v_tk2_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v_snd_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v_tk3_1152_; lean_object* v___y_1154_; lean_object* v___x_1159_; lean_object* v___x_1160_; 
v___x_1141_ = lean_unsigned_to_nat(0u);
v_tk1_1142_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_1141_);
lean_dec(v_stx_759_);
v___x_1143_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_atomString(v_tk1_1142_);
v___x_1144_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_1143_, v_a_761_);
lean_dec_ref(v___x_1143_);
v_snd_1145_ = lean_ctor_get(v___x_1144_, 1);
lean_inc(v_snd_1145_);
lean_dec_ref(v___x_1144_);
v_tk2_1146_ = l_Lean_Syntax_getArg(v___x_1133_, v___x_1141_);
v___x_1147_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_atomString(v_tk2_1146_);
v___x_1148_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_1147_, v_snd_1145_);
lean_dec_ref(v___x_1147_);
v_snd_1149_ = lean_ctor_get(v___x_1148_, 1);
lean_inc(v_snd_1149_);
lean_dec_ref(v___x_1148_);
v___x_1150_ = l_Lean_Syntax_getArg(v___x_1133_, v___x_1132_);
v___x_1151_ = lean_unsigned_to_nat(2u);
v_tk3_1152_ = l_Lean_Syntax_getArg(v___x_1133_, v___x_1151_);
lean_dec(v___x_1133_);
v___x_1159_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_atomString(v___x_1150_);
v___x_1160_ = l_Lean_Syntax_decodeStrLit(v___x_1159_);
if (lean_obj_tag(v___x_1160_) == 0)
{
lean_object* v___x_1161_; 
v___x_1161_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomStrLit___redArg___closed__0));
v___y_1154_ = v___x_1161_;
goto v___jp_1153_;
}
else
{
lean_object* v_val_1162_; 
v_val_1162_ = lean_ctor_get(v___x_1160_, 0);
lean_inc(v_val_1162_);
lean_dec_ref_known(v___x_1160_, 1);
v___y_1154_ = v_val_1162_;
goto v___jp_1153_;
}
v___jp_1153_:
{
lean_object* v___x_1155_; lean_object* v_snd_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; 
v___x_1155_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___y_1154_, v_snd_1149_);
lean_dec_ref(v___y_1154_);
v_snd_1156_ = lean_ctor_get(v___x_1155_, 1);
lean_inc(v_snd_1156_);
lean_dec_ref(v___x_1155_);
v___x_1157_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_atomString(v_tk3_1152_);
v___x_1158_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_1157_, v_snd_1156_);
lean_dec_ref(v___x_1157_);
return v___x_1158_;
}
}
}
}
else
{
lean_object* v___x_1163_; lean_object* v___x_1164_; uint8_t v___x_1165_; 
v___x_1163_ = lean_unsigned_to_nat(1u);
v___x_1164_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_1163_);
lean_inc(v___x_1164_);
v___x_1165_ = l_Lean_Syntax_isOfKind(v___x_1164_, v___x_816_);
if (v___x_1165_ == 0)
{
lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; 
lean_dec(v___x_1164_);
v___x_1166_ = lean_box(0);
v___x_1167_ = l_Lean_Syntax_formatStx(v_stx_759_, v___x_1166_, v___x_1165_);
v___x_1168_ = l_Std_Format_defWidth;
v___x_1169_ = lean_unsigned_to_nat(0u);
v___x_1170_ = l_Std_Format_pretty(v___x_1167_, v___x_1168_, v___x_1169_, v___x_1169_);
v___x_1171_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_1170_, v_a_761_);
lean_dec_ref(v___x_1170_);
return v___x_1171_;
}
else
{
lean_object* v___x_1172_; lean_object* v_tk1_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v_snd_1176_; lean_object* v_tk2_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v_snd_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v_tk3_1183_; lean_object* v___y_1185_; lean_object* v___x_1190_; lean_object* v___x_1191_; 
v___x_1172_ = lean_unsigned_to_nat(0u);
v_tk1_1173_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_1172_);
lean_dec(v_stx_759_);
v___x_1174_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_atomString(v_tk1_1173_);
v___x_1175_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_1174_, v_a_761_);
lean_dec_ref(v___x_1174_);
v_snd_1176_ = lean_ctor_get(v___x_1175_, 1);
lean_inc(v_snd_1176_);
lean_dec_ref(v___x_1175_);
v_tk2_1177_ = l_Lean_Syntax_getArg(v___x_1164_, v___x_1172_);
v___x_1178_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_atomString(v_tk2_1177_);
v___x_1179_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_1178_, v_snd_1176_);
lean_dec_ref(v___x_1178_);
v_snd_1180_ = lean_ctor_get(v___x_1179_, 1);
lean_inc(v_snd_1180_);
lean_dec_ref(v___x_1179_);
v___x_1181_ = l_Lean_Syntax_getArg(v___x_1164_, v___x_1163_);
v___x_1182_ = lean_unsigned_to_nat(2u);
v_tk3_1183_ = l_Lean_Syntax_getArg(v___x_1164_, v___x_1182_);
lean_dec(v___x_1164_);
v___x_1190_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_atomString(v___x_1181_);
v___x_1191_ = l_Lean_Syntax_decodeStrLit(v___x_1190_);
if (lean_obj_tag(v___x_1191_) == 0)
{
lean_object* v___x_1192_; 
v___x_1192_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomStrLit___redArg___closed__0));
v___y_1185_ = v___x_1192_;
goto v___jp_1184_;
}
else
{
lean_object* v_val_1193_; 
v_val_1193_ = lean_ctor_get(v___x_1191_, 0);
lean_inc(v_val_1193_);
lean_dec_ref_known(v___x_1191_, 1);
v___y_1185_ = v_val_1193_;
goto v___jp_1184_;
}
v___jp_1184_:
{
lean_object* v___x_1186_; lean_object* v_snd_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; 
v___x_1186_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___y_1185_, v_snd_1180_);
lean_dec_ref(v___y_1185_);
v_snd_1187_ = lean_ctor_get(v___x_1186_, 1);
lean_inc(v_snd_1187_);
lean_dec_ref(v___x_1186_);
v___x_1188_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_atomString(v_tk3_1183_);
v___x_1189_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_1188_, v_snd_1187_);
lean_dec_ref(v___x_1188_);
return v___x_1189_;
}
}
}
}
else
{
lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; 
v___x_1194_ = lean_unsigned_to_nat(1u);
v___x_1195_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_1194_);
lean_dec(v_stx_759_);
v___x_1196_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_atomString(v___x_1195_);
v___x_1197_ = l_Lean_Syntax_decodeStrLit(v___x_1196_);
if (lean_obj_tag(v___x_1197_) == 0)
{
lean_object* v___x_1198_; lean_object* v___x_1199_; 
v___x_1198_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomStrLit___redArg___closed__0));
v___x_1199_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_1198_, v_a_761_);
return v___x_1199_;
}
else
{
lean_object* v_val_1200_; lean_object* v___x_1201_; 
v_val_1200_ = lean_ctor_get(v___x_1197_, 0);
lean_inc(v_val_1200_);
lean_dec_ref_known(v___x_1197_, 1);
v___x_1201_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v_val_1200_, v_a_761_);
lean_dec(v_val_1200_);
return v___x_1201_;
}
}
}
else
{
lean_object* v___x_1202_; lean_object* v_tk1_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v_snd_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v_tk2_1210_; lean_object* v___y_1212_; lean_object* v___x_1217_; lean_object* v___x_1218_; 
v___x_1202_ = lean_unsigned_to_nat(0u);
v_tk1_1203_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_1202_);
v___x_1204_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_atomString(v_tk1_1203_);
v___x_1205_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_1204_, v_a_761_);
lean_dec_ref(v___x_1204_);
v_snd_1206_ = lean_ctor_get(v___x_1205_, 1);
lean_inc(v_snd_1206_);
lean_dec_ref(v___x_1205_);
v___x_1207_ = lean_unsigned_to_nat(1u);
v___x_1208_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_1207_);
v___x_1209_ = lean_unsigned_to_nat(2u);
v_tk2_1210_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_1209_);
lean_dec(v_stx_759_);
v___x_1217_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_atomString(v___x_1208_);
v___x_1218_ = l_Lean_Syntax_decodeStrLit(v___x_1217_);
if (lean_obj_tag(v___x_1218_) == 0)
{
lean_object* v___x_1219_; 
v___x_1219_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomStrLit___redArg___closed__0));
v___y_1212_ = v___x_1219_;
goto v___jp_1211_;
}
else
{
lean_object* v_val_1220_; 
v_val_1220_ = lean_ctor_get(v___x_1218_, 0);
lean_inc(v_val_1220_);
lean_dec_ref_known(v___x_1218_, 1);
v___y_1212_ = v_val_1220_;
goto v___jp_1211_;
}
v___jp_1211_:
{
lean_object* v___x_1213_; lean_object* v_snd_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; 
v___x_1213_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___y_1212_, v_snd_1206_);
lean_dec_ref(v___y_1212_);
v_snd_1214_ = lean_ctor_get(v___x_1213_, 1);
lean_inc(v_snd_1214_);
lean_dec_ref(v___x_1213_);
v___x_1215_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_atomString(v_tk2_1210_);
v___x_1216_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_1215_, v_snd_1214_);
lean_dec_ref(v___x_1215_);
return v___x_1216_;
}
}
}
else
{
lean_object* v___x_1221_; lean_object* v_tk1_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v_snd_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v_tk2_1229_; lean_object* v___y_1231_; lean_object* v___x_1236_; lean_object* v___x_1237_; 
v___x_1221_ = lean_unsigned_to_nat(0u);
v_tk1_1222_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_1221_);
v___x_1223_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_atomString(v_tk1_1222_);
v___x_1224_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_1223_, v_a_761_);
lean_dec_ref(v___x_1223_);
v_snd_1225_ = lean_ctor_get(v___x_1224_, 1);
lean_inc(v_snd_1225_);
lean_dec_ref(v___x_1224_);
v___x_1226_ = lean_unsigned_to_nat(1u);
v___x_1227_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_1226_);
v___x_1228_ = lean_unsigned_to_nat(2u);
v_tk2_1229_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_1228_);
lean_dec(v_stx_759_);
v___x_1236_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_atomString(v___x_1227_);
v___x_1237_ = l_Lean_Syntax_decodeStrLit(v___x_1236_);
if (lean_obj_tag(v___x_1237_) == 0)
{
lean_object* v___x_1238_; 
v___x_1238_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomStrLit___redArg___closed__0));
v___y_1231_ = v___x_1238_;
goto v___jp_1230_;
}
else
{
lean_object* v_val_1239_; 
v_val_1239_ = lean_ctor_get(v___x_1237_, 0);
lean_inc(v_val_1239_);
lean_dec_ref_known(v___x_1237_, 1);
v___y_1231_ = v_val_1239_;
goto v___jp_1230_;
}
v___jp_1230_:
{
lean_object* v___x_1232_; lean_object* v_snd_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; 
v___x_1232_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___y_1231_, v_snd_1225_);
lean_dec_ref(v___y_1231_);
v_snd_1233_ = lean_ctor_get(v___x_1232_, 1);
lean_inc(v_snd_1233_);
lean_dec_ref(v___x_1232_);
v___x_1234_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_atomString(v_tk2_1229_);
v___x_1235_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_1234_, v_snd_1233_);
lean_dec_ref(v___x_1234_);
return v___x_1235_;
}
}
}
else
{
lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v_snd_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v_snd_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v_args_1251_; lean_object* v___x_1252_; size_t v_sz_1253_; size_t v___x_1254_; lean_object* v___x_1255_; lean_object* v_snd_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v_snd_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v_inls_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; uint8_t v___x_1267_; 
v___x_1240_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__61));
v___x_1241_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_1240_, v_a_761_);
v_snd_1242_ = lean_ctor_get(v___x_1241_, 1);
lean_inc(v_snd_1242_);
lean_dec_ref(v___x_1241_);
v___x_1243_ = lean_unsigned_to_nat(1u);
v___x_1244_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_1243_);
v___x_1245_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_identString(v___x_1244_);
v___x_1246_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_1245_, v_snd_1242_);
lean_dec_ref(v___x_1245_);
v_snd_1247_ = lean_ctor_get(v___x_1246_, 1);
lean_inc(v_snd_1247_);
lean_dec_ref(v___x_1246_);
v___x_1248_ = lean_unsigned_to_nat(2u);
v___x_1249_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_1248_);
v___x_1250_ = l_Lean_Syntax_getArgs(v___x_1249_);
lean_dec(v___x_1249_);
v_args_1251_ = l_unsafeCast___redArg(v___x_1250_);
lean_dec_ref(v___x_1250_);
v___x_1252_ = lean_box(0);
v_sz_1253_ = lean_array_size(v_args_1251_);
v___x_1254_ = ((size_t)0ULL);
v___x_1255_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__0(v_args_1251_, v_sz_1253_, v___x_1254_, v___x_1252_, v_a_760_, v_snd_1247_);
lean_dec(v_args_1251_);
v_snd_1256_ = lean_ctor_get(v___x_1255_, 1);
lean_inc(v_snd_1256_);
lean_dec_ref(v___x_1255_);
v___x_1257_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__66));
v___x_1258_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_1257_, v_snd_1256_);
v_snd_1259_ = lean_ctor_get(v___x_1258_, 1);
lean_inc(v_snd_1259_);
lean_dec_ref(v___x_1258_);
v___x_1260_ = lean_unsigned_to_nat(0u);
v___x_1261_ = lean_unsigned_to_nat(5u);
v___x_1262_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_1261_);
lean_dec(v_stx_759_);
v___x_1263_ = l_Lean_Syntax_getArgs(v___x_1262_);
lean_dec(v___x_1262_);
v_inls_1264_ = l_unsafeCast___redArg(v___x_1263_);
lean_dec_ref(v___x_1263_);
v___x_1265_ = l_unsafeCast___redArg(v_inls_1264_);
lean_dec(v_inls_1264_);
v___x_1266_ = lean_array_get_size(v___x_1265_);
v___x_1267_ = lean_nat_dec_lt(v___x_1260_, v___x_1266_);
if (v___x_1267_ == 0)
{
lean_dec(v___x_1265_);
v_snd_779_ = v_snd_1259_;
goto v___jp_778_;
}
else
{
uint8_t v___x_1268_; 
v___x_1268_ = lean_nat_dec_le(v___x_1266_, v___x_1266_);
if (v___x_1268_ == 0)
{
if (v___x_1267_ == 0)
{
lean_dec(v___x_1265_);
v_snd_779_ = v_snd_1259_;
goto v___jp_778_;
}
else
{
size_t v___x_1269_; lean_object* v___x_1270_; 
v___x_1269_ = lean_usize_of_nat(v___x_1266_);
v___x_1270_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__2(v___x_1265_, v___x_1254_, v___x_1269_, v___x_1252_, v_a_760_, v_snd_1259_);
lean_dec(v___x_1265_);
v___y_783_ = v___x_1270_;
goto v___jp_782_;
}
}
else
{
size_t v___x_1271_; lean_object* v___x_1272_; 
v___x_1271_ = lean_usize_of_nat(v___x_1266_);
v___x_1272_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__2(v___x_1265_, v___x_1254_, v___x_1271_, v___x_1252_, v_a_760_, v_snd_1259_);
lean_dec(v___x_1265_);
v___y_783_ = v___x_1272_;
goto v___jp_782_;
}
}
}
}
else
{
lean_object* v___x_1273_; lean_object* v_tk1_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v_snd_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v_tk2_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___y_1285_; lean_object* v___x_1292_; lean_object* v___x_1293_; 
v___x_1273_ = lean_unsigned_to_nat(0u);
v_tk1_1274_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_1273_);
v___x_1275_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_atomString(v_tk1_1274_);
v___x_1276_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_1275_, v_a_761_);
lean_dec_ref(v___x_1275_);
v_snd_1277_ = lean_ctor_get(v___x_1276_, 1);
lean_inc(v_snd_1277_);
lean_dec_ref(v___x_1276_);
v___x_1278_ = lean_unsigned_to_nat(1u);
v___x_1279_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_1278_);
v___x_1280_ = lean_unsigned_to_nat(2u);
v_tk2_1281_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_1280_);
v___x_1282_ = lean_unsigned_to_nat(3u);
v___x_1283_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_1282_);
lean_dec(v_stx_759_);
v___x_1292_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_atomString(v___x_1279_);
v___x_1293_ = l_Lean_Syntax_decodeStrLit(v___x_1292_);
if (lean_obj_tag(v___x_1293_) == 0)
{
lean_object* v___x_1294_; 
v___x_1294_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomStrLit___redArg___closed__0));
v___y_1285_ = v___x_1294_;
goto v___jp_1284_;
}
else
{
lean_object* v_val_1295_; 
v_val_1295_ = lean_ctor_get(v___x_1293_, 0);
lean_inc(v_val_1295_);
lean_dec_ref_known(v___x_1293_, 1);
v___y_1285_ = v_val_1295_;
goto v___jp_1284_;
}
v___jp_1284_:
{
lean_object* v___x_1286_; lean_object* v_snd_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v_snd_1290_; 
v___x_1286_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___y_1285_, v_snd_1277_);
lean_dec_ref(v___y_1285_);
v_snd_1287_ = lean_ctor_get(v___x_1286_, 1);
lean_inc(v_snd_1287_);
lean_dec_ref(v___x_1286_);
v___x_1288_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_atomString(v_tk2_1281_);
v___x_1289_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_1288_, v_snd_1287_);
lean_dec_ref(v___x_1288_);
v_snd_1290_ = lean_ctor_get(v___x_1289_, 1);
lean_inc(v_snd_1290_);
lean_dec_ref(v___x_1289_);
v_stx_759_ = v___x_1283_;
v_a_761_ = v_snd_1290_;
goto _start;
}
}
}
else
{
lean_object* v___x_1296_; lean_object* v_tk1_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v_snd_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v_tk2_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v_snd_1308_; lean_object* v___y_1314_; lean_object* v___x_1316_; lean_object* v_inl_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; uint8_t v___x_1320_; 
v___x_1296_ = lean_unsigned_to_nat(0u);
v_tk1_1297_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_1296_);
v___x_1298_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_atomString(v_tk1_1297_);
v___x_1299_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_1298_, v_a_761_);
lean_dec_ref(v___x_1298_);
v_snd_1300_ = lean_ctor_get(v___x_1299_, 1);
lean_inc(v_snd_1300_);
lean_dec_ref(v___x_1299_);
v___x_1301_ = lean_unsigned_to_nat(1u);
v___x_1302_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_1301_);
v___x_1303_ = lean_unsigned_to_nat(2u);
v_tk2_1304_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_1303_);
v___x_1305_ = lean_unsigned_to_nat(3u);
v___x_1306_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_1305_);
lean_dec(v_stx_759_);
v___x_1316_ = l_Lean_Syntax_getArgs(v___x_1302_);
lean_dec(v___x_1302_);
v_inl_1317_ = l_unsafeCast___redArg(v___x_1316_);
lean_dec_ref(v___x_1316_);
v___x_1318_ = l_unsafeCast___redArg(v_inl_1317_);
lean_dec(v_inl_1317_);
v___x_1319_ = lean_array_get_size(v___x_1318_);
v___x_1320_ = lean_nat_dec_lt(v___x_1296_, v___x_1319_);
if (v___x_1320_ == 0)
{
lean_dec(v___x_1318_);
v_snd_1308_ = v_snd_1300_;
goto v___jp_1307_;
}
else
{
lean_object* v___x_1321_; uint8_t v___x_1322_; 
v___x_1321_ = lean_box(0);
v___x_1322_ = lean_nat_dec_le(v___x_1319_, v___x_1319_);
if (v___x_1322_ == 0)
{
if (v___x_1320_ == 0)
{
lean_dec(v___x_1318_);
v_snd_1308_ = v_snd_1300_;
goto v___jp_1307_;
}
else
{
size_t v___x_1323_; size_t v___x_1324_; lean_object* v___x_1325_; 
v___x_1323_ = ((size_t)0ULL);
v___x_1324_ = lean_usize_of_nat(v___x_1319_);
v___x_1325_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__2(v___x_1318_, v___x_1323_, v___x_1324_, v___x_1321_, v_a_760_, v_snd_1300_);
lean_dec(v___x_1318_);
v___y_1314_ = v___x_1325_;
goto v___jp_1313_;
}
}
else
{
size_t v___x_1326_; size_t v___x_1327_; lean_object* v___x_1328_; 
v___x_1326_ = ((size_t)0ULL);
v___x_1327_ = lean_usize_of_nat(v___x_1319_);
v___x_1328_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__2(v___x_1318_, v___x_1326_, v___x_1327_, v___x_1321_, v_a_760_, v_snd_1300_);
lean_dec(v___x_1318_);
v___y_1314_ = v___x_1328_;
goto v___jp_1313_;
}
}
v___jp_1307_:
{
lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v_snd_1311_; 
v___x_1309_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_atomString(v_tk2_1304_);
v___x_1310_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_1309_, v_snd_1308_);
lean_dec_ref(v___x_1309_);
v_snd_1311_ = lean_ctor_get(v___x_1310_, 1);
lean_inc(v_snd_1311_);
lean_dec_ref(v___x_1310_);
v_stx_759_ = v___x_1306_;
v_a_761_ = v_snd_1311_;
goto _start;
}
v___jp_1313_:
{
lean_object* v_snd_1315_; 
v_snd_1315_ = lean_ctor_get(v___y_1314_, 1);
lean_inc(v_snd_1315_);
lean_dec_ref(v___y_1314_);
v_snd_1308_ = v_snd_1315_;
goto v___jp_1307_;
}
}
}
else
{
lean_object* v___x_1329_; lean_object* v_tk1_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v_snd_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v_tk2_1337_; lean_object* v_snd_1339_; lean_object* v___y_1343_; lean_object* v___x_1345_; lean_object* v_inl_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; uint8_t v___x_1349_; 
v___x_1329_ = lean_unsigned_to_nat(0u);
v_tk1_1330_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_1329_);
v___x_1331_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_atomString(v_tk1_1330_);
v___x_1332_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_1331_, v_a_761_);
lean_dec_ref(v___x_1331_);
v_snd_1333_ = lean_ctor_get(v___x_1332_, 1);
lean_inc(v_snd_1333_);
lean_dec_ref(v___x_1332_);
v___x_1334_ = lean_unsigned_to_nat(1u);
v___x_1335_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_1334_);
v___x_1336_ = lean_unsigned_to_nat(2u);
v_tk2_1337_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_1336_);
lean_dec(v_stx_759_);
v___x_1345_ = l_Lean_Syntax_getArgs(v___x_1335_);
lean_dec(v___x_1335_);
v_inl_1346_ = l_unsafeCast___redArg(v___x_1345_);
lean_dec_ref(v___x_1345_);
v___x_1347_ = l_unsafeCast___redArg(v_inl_1346_);
lean_dec(v_inl_1346_);
v___x_1348_ = lean_array_get_size(v___x_1347_);
v___x_1349_ = lean_nat_dec_lt(v___x_1329_, v___x_1348_);
if (v___x_1349_ == 0)
{
lean_dec(v___x_1347_);
v_snd_1339_ = v_snd_1333_;
goto v___jp_1338_;
}
else
{
lean_object* v___x_1350_; uint8_t v___x_1351_; 
v___x_1350_ = lean_box(0);
v___x_1351_ = lean_nat_dec_le(v___x_1348_, v___x_1348_);
if (v___x_1351_ == 0)
{
if (v___x_1349_ == 0)
{
lean_dec(v___x_1347_);
v_snd_1339_ = v_snd_1333_;
goto v___jp_1338_;
}
else
{
size_t v___x_1352_; size_t v___x_1353_; lean_object* v___x_1354_; 
v___x_1352_ = ((size_t)0ULL);
v___x_1353_ = lean_usize_of_nat(v___x_1348_);
v___x_1354_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__2(v___x_1347_, v___x_1352_, v___x_1353_, v___x_1350_, v_a_760_, v_snd_1333_);
lean_dec(v___x_1347_);
v___y_1343_ = v___x_1354_;
goto v___jp_1342_;
}
}
else
{
size_t v___x_1355_; size_t v___x_1356_; lean_object* v___x_1357_; 
v___x_1355_ = ((size_t)0ULL);
v___x_1356_ = lean_usize_of_nat(v___x_1348_);
v___x_1357_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__2(v___x_1347_, v___x_1355_, v___x_1356_, v___x_1350_, v_a_760_, v_snd_1333_);
lean_dec(v___x_1347_);
v___y_1343_ = v___x_1357_;
goto v___jp_1342_;
}
}
v___jp_1338_:
{
lean_object* v___x_1340_; lean_object* v___x_1341_; 
v___x_1340_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_atomString(v_tk2_1337_);
v___x_1341_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_1340_, v_snd_1339_);
lean_dec_ref(v___x_1340_);
return v___x_1341_;
}
v___jp_1342_:
{
lean_object* v_snd_1344_; 
v_snd_1344_ = lean_ctor_get(v___y_1343_, 1);
lean_inc(v_snd_1344_);
lean_dec_ref(v___y_1343_);
v_snd_1339_ = v_snd_1344_;
goto v___jp_1338_;
}
}
}
else
{
lean_object* v___x_1358_; lean_object* v_tk1_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v_snd_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; lean_object* v_tk2_1366_; lean_object* v_snd_1368_; lean_object* v___y_1372_; lean_object* v___x_1374_; lean_object* v_inl_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; uint8_t v___x_1378_; 
v___x_1358_ = lean_unsigned_to_nat(0u);
v_tk1_1359_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_1358_);
v___x_1360_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_atomString(v_tk1_1359_);
v___x_1361_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_1360_, v_a_761_);
lean_dec_ref(v___x_1360_);
v_snd_1362_ = lean_ctor_get(v___x_1361_, 1);
lean_inc(v_snd_1362_);
lean_dec_ref(v___x_1361_);
v___x_1363_ = lean_unsigned_to_nat(1u);
v___x_1364_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_1363_);
v___x_1365_ = lean_unsigned_to_nat(2u);
v_tk2_1366_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_1365_);
lean_dec(v_stx_759_);
v___x_1374_ = l_Lean_Syntax_getArgs(v___x_1364_);
lean_dec(v___x_1364_);
v_inl_1375_ = l_unsafeCast___redArg(v___x_1374_);
lean_dec_ref(v___x_1374_);
v___x_1376_ = l_unsafeCast___redArg(v_inl_1375_);
lean_dec(v_inl_1375_);
v___x_1377_ = lean_array_get_size(v___x_1376_);
v___x_1378_ = lean_nat_dec_lt(v___x_1358_, v___x_1377_);
if (v___x_1378_ == 0)
{
lean_dec(v___x_1376_);
v_snd_1368_ = v_snd_1362_;
goto v___jp_1367_;
}
else
{
lean_object* v___x_1379_; uint8_t v___x_1380_; 
v___x_1379_ = lean_box(0);
v___x_1380_ = lean_nat_dec_le(v___x_1377_, v___x_1377_);
if (v___x_1380_ == 0)
{
if (v___x_1378_ == 0)
{
lean_dec(v___x_1376_);
v_snd_1368_ = v_snd_1362_;
goto v___jp_1367_;
}
else
{
size_t v___x_1381_; size_t v___x_1382_; lean_object* v___x_1383_; 
v___x_1381_ = ((size_t)0ULL);
v___x_1382_ = lean_usize_of_nat(v___x_1377_);
v___x_1383_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__2(v___x_1376_, v___x_1381_, v___x_1382_, v___x_1379_, v_a_760_, v_snd_1362_);
lean_dec(v___x_1376_);
v___y_1372_ = v___x_1383_;
goto v___jp_1371_;
}
}
else
{
size_t v___x_1384_; size_t v___x_1385_; lean_object* v___x_1386_; 
v___x_1384_ = ((size_t)0ULL);
v___x_1385_ = lean_usize_of_nat(v___x_1377_);
v___x_1386_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__2(v___x_1376_, v___x_1384_, v___x_1385_, v___x_1379_, v_a_760_, v_snd_1362_);
lean_dec(v___x_1376_);
v___y_1372_ = v___x_1386_;
goto v___jp_1371_;
}
}
v___jp_1367_:
{
lean_object* v___x_1369_; lean_object* v___x_1370_; 
v___x_1369_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_atomString(v_tk2_1366_);
v___x_1370_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_1369_, v_snd_1368_);
lean_dec_ref(v___x_1369_);
return v___x_1370_;
}
v___jp_1371_:
{
lean_object* v_snd_1373_; 
v_snd_1373_ = lean_ctor_get(v___y_1372_, 1);
lean_inc(v_snd_1373_);
lean_dec_ref(v___y_1372_);
v_snd_1368_ = v_snd_1373_;
goto v___jp_1367_;
}
}
}
else
{
lean_object* v___x_1387_; lean_object* v_s_1388_; 
v___x_1387_ = lean_unsigned_to_nat(0u);
v_s_1388_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_1387_);
if (v___x_803_ == 0)
{
lean_object* v___x_1392_; uint8_t v___x_1393_; 
v___x_1392_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__68));
lean_inc(v_s_1388_);
v___x_1393_ = l_Lean_Syntax_isOfKind(v_s_1388_, v___x_1392_);
if (v___x_1393_ == 0)
{
lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; 
lean_dec(v_s_1388_);
v___x_1394_ = lean_box(0);
v___x_1395_ = l_Lean_Syntax_formatStx(v_stx_759_, v___x_1394_, v___x_803_);
v___x_1396_ = l_Std_Format_defWidth;
v___x_1397_ = l_Std_Format_pretty(v___x_1395_, v___x_1396_, v___x_1387_, v___x_1387_);
v___x_1398_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_1397_, v_a_761_);
lean_dec_ref(v___x_1397_);
return v___x_1398_;
}
else
{
lean_dec(v_stx_759_);
goto v___jp_1389_;
}
}
else
{
lean_dec(v_stx_759_);
goto v___jp_1389_;
}
v___jp_1389_:
{
lean_object* v___x_1390_; lean_object* v___x_1391_; 
v___x_1390_ = l_Lean_TSyntax_getString(v_s_1388_);
lean_dec(v_s_1388_);
v___x_1391_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_1390_, v_a_761_);
lean_dec_ref(v___x_1390_);
return v___x_1391_;
}
}
}
else
{
lean_object* v___x_1399_; lean_object* v___x_1400_; 
v___x_1399_ = lean_unsigned_to_nat(0u);
v___x_1400_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_1399_);
lean_dec(v_stx_759_);
v_stx_759_ = v___x_1400_;
goto _start;
}
}
else
{
lean_object* v___x_1402_; lean_object* v_tk_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; 
v___x_1402_ = lean_unsigned_to_nat(0u);
v_tk_1403_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_1402_);
v___x_1404_ = lean_unsigned_to_nat(1u);
v___x_1405_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_1404_);
if (v___x_799_ == 0)
{
lean_object* v___x_1412_; uint8_t v___x_1413_; 
v___x_1412_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__70));
lean_inc(v___x_1405_);
v___x_1413_ = l_Lean_Syntax_isOfKind(v___x_1405_, v___x_1412_);
if (v___x_1413_ == 0)
{
lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; 
lean_dec(v___x_1405_);
lean_dec(v_tk_1403_);
v___x_1414_ = lean_box(0);
v___x_1415_ = l_Lean_Syntax_formatStx(v_stx_759_, v___x_1414_, v___x_799_);
v___x_1416_ = l_Std_Format_defWidth;
v___x_1417_ = l_Std_Format_pretty(v___x_1415_, v___x_1416_, v___x_1402_, v___x_1402_);
v___x_1418_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_1417_, v_a_761_);
lean_dec_ref(v___x_1417_);
return v___x_1418_;
}
else
{
lean_dec(v_stx_759_);
goto v___jp_1406_;
}
}
else
{
lean_dec(v_stx_759_);
goto v___jp_1406_;
}
v___jp_1406_:
{
lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v_snd_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; 
v___x_1407_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_atomString(v_tk_1403_);
v___x_1408_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_1407_, v_a_761_);
lean_dec_ref(v___x_1407_);
v_snd_1409_ = lean_ctor_get(v___x_1408_, 1);
lean_inc(v_snd_1409_);
lean_dec_ref(v___x_1408_);
v___x_1410_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_identString(v___x_1405_);
v___x_1411_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_1410_, v_snd_1409_);
lean_dec_ref(v___x_1410_);
return v___x_1411_;
}
}
}
else
{
lean_object* v___x_1419_; lean_object* v_tk_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; 
v___x_1419_ = lean_unsigned_to_nat(0u);
v_tk_1420_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_1419_);
v___x_1421_ = lean_unsigned_to_nat(1u);
v___x_1422_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_1421_);
if (v___x_797_ == 0)
{
lean_object* v___x_1429_; uint8_t v___x_1430_; 
v___x_1429_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__70));
lean_inc(v___x_1422_);
v___x_1430_ = l_Lean_Syntax_isOfKind(v___x_1422_, v___x_1429_);
if (v___x_1430_ == 0)
{
lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; 
lean_dec(v___x_1422_);
lean_dec(v_tk_1420_);
v___x_1431_ = lean_box(0);
v___x_1432_ = l_Lean_Syntax_formatStx(v_stx_759_, v___x_1431_, v___x_797_);
v___x_1433_ = l_Std_Format_defWidth;
v___x_1434_ = l_Std_Format_pretty(v___x_1432_, v___x_1433_, v___x_1419_, v___x_1419_);
v___x_1435_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_1434_, v_a_761_);
lean_dec_ref(v___x_1434_);
return v___x_1435_;
}
else
{
lean_dec(v_stx_759_);
goto v___jp_1423_;
}
}
else
{
lean_dec(v_stx_759_);
goto v___jp_1423_;
}
v___jp_1423_:
{
lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v_snd_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; 
v___x_1424_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_atomString(v_tk_1420_);
v___x_1425_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_1424_, v_a_761_);
lean_dec_ref(v___x_1424_);
v_snd_1426_ = lean_ctor_get(v___x_1425_, 1);
lean_inc(v_snd_1426_);
lean_dec_ref(v___x_1425_);
v___x_1427_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_identString(v___x_1422_);
v___x_1428_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_1427_, v_snd_1426_);
lean_dec_ref(v___x_1427_);
return v___x_1428_;
}
}
}
else
{
lean_object* v___x_1436_; lean_object* v___x_1437_; 
v___x_1436_ = lean_unsigned_to_nat(0u);
v___x_1437_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_1436_);
if (v___x_795_ == 0)
{
lean_object* v___x_1454_; uint8_t v___x_1455_; 
v___x_1454_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__70));
lean_inc(v___x_1437_);
v___x_1455_ = l_Lean_Syntax_isOfKind(v___x_1437_, v___x_1454_);
if (v___x_1455_ == 0)
{
lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; 
lean_dec(v___x_1437_);
v___x_1456_ = lean_box(0);
v___x_1457_ = l_Lean_Syntax_formatStx(v_stx_759_, v___x_1456_, v___x_795_);
v___x_1458_ = l_Std_Format_defWidth;
v___x_1459_ = l_Std_Format_pretty(v___x_1457_, v___x_1458_, v___x_1436_, v___x_1436_);
v___x_1460_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_1459_, v_a_761_);
lean_dec_ref(v___x_1459_);
return v___x_1460_;
}
else
{
goto v___jp_1438_;
}
}
else
{
goto v___jp_1438_;
}
v___jp_1438_:
{
lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v_snd_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v_snd_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v_snd_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v_snd_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; 
v___x_1439_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__71));
v___x_1440_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_1439_, v_a_761_);
v_snd_1441_ = lean_ctor_get(v___x_1440_, 1);
lean_inc(v_snd_1441_);
lean_dec_ref(v___x_1440_);
v___x_1442_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_identString(v___x_1437_);
v___x_1443_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_1442_, v_snd_1441_);
lean_dec_ref(v___x_1442_);
v_snd_1444_ = lean_ctor_get(v___x_1443_, 1);
lean_inc(v_snd_1444_);
lean_dec_ref(v___x_1443_);
v___x_1445_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__72));
v___x_1446_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_1445_, v_snd_1444_);
v_snd_1447_ = lean_ctor_get(v___x_1446_, 1);
lean_inc(v_snd_1447_);
lean_dec_ref(v___x_1446_);
v___x_1448_ = lean_unsigned_to_nat(2u);
v___x_1449_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_1448_);
lean_dec(v_stx_759_);
v___x_1450_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27(v___x_1449_, v_a_760_, v_snd_1447_);
v_snd_1451_ = lean_ctor_get(v___x_1450_, 1);
lean_inc(v_snd_1451_);
lean_dec_ref(v___x_1450_);
v___x_1452_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__73));
v___x_1453_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_1452_, v_snd_1451_);
return v___x_1453_;
}
}
}
else
{
lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v_snd_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v_snd_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; lean_object* v_snd_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v_snd_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; 
v___x_1461_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__71));
v___x_1462_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_1461_, v_a_761_);
v_snd_1463_ = lean_ctor_get(v___x_1462_, 1);
lean_inc(v_snd_1463_);
lean_dec_ref(v___x_1462_);
v___x_1464_ = lean_unsigned_to_nat(1u);
v___x_1465_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_1464_);
v___x_1466_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_identString(v___x_1465_);
v___x_1467_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_1466_, v_snd_1463_);
lean_dec_ref(v___x_1466_);
v_snd_1468_ = lean_ctor_get(v___x_1467_, 1);
lean_inc(v_snd_1468_);
lean_dec_ref(v___x_1467_);
v___x_1469_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__72));
v___x_1470_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_1469_, v_snd_1468_);
v_snd_1471_ = lean_ctor_get(v___x_1470_, 1);
lean_inc(v_snd_1471_);
lean_dec_ref(v___x_1470_);
v___x_1472_ = lean_unsigned_to_nat(3u);
v___x_1473_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_1472_);
lean_dec(v_stx_759_);
v___x_1474_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27(v___x_1473_, v_a_760_, v_snd_1471_);
v_snd_1475_ = lean_ctor_get(v___x_1474_, 1);
lean_inc(v_snd_1475_);
lean_dec_ref(v___x_1474_);
v___x_1476_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__73));
v___x_1477_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_1476_, v_snd_1475_);
return v___x_1477_;
}
}
else
{
lean_object* v___x_1478_; lean_object* v___x_1479_; 
v___x_1478_ = lean_unsigned_to_nat(0u);
v___x_1479_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_1478_);
if (v___x_791_ == 0)
{
lean_object* v___x_1483_; uint8_t v___x_1484_; 
v___x_1483_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__70));
lean_inc(v___x_1479_);
v___x_1484_ = l_Lean_Syntax_isOfKind(v___x_1479_, v___x_1483_);
if (v___x_1484_ == 0)
{
lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; 
lean_dec(v___x_1479_);
v___x_1485_ = lean_box(0);
v___x_1486_ = l_Lean_Syntax_formatStx(v_stx_759_, v___x_1485_, v___x_791_);
v___x_1487_ = l_Std_Format_defWidth;
v___x_1488_ = l_Std_Format_pretty(v___x_1486_, v___x_1487_, v___x_1478_, v___x_1478_);
v___x_1489_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_1488_, v_a_761_);
lean_dec_ref(v___x_1488_);
return v___x_1489_;
}
else
{
lean_dec(v_stx_759_);
goto v___jp_1480_;
}
}
else
{
lean_dec(v_stx_759_);
goto v___jp_1480_;
}
v___jp_1480_:
{
lean_object* v___x_1481_; lean_object* v___x_1482_; 
v___x_1481_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_identString(v___x_1479_);
v___x_1482_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_1481_, v_a_761_);
lean_dec_ref(v___x_1481_);
return v___x_1482_;
}
}
}
else
{
lean_object* v___x_1490_; lean_object* v___x_1491_; 
v___x_1490_ = lean_unsigned_to_nat(0u);
v___x_1491_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_1490_);
if (v___x_789_ == 0)
{
lean_object* v___x_1495_; uint8_t v___x_1496_; 
v___x_1495_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__75));
lean_inc(v___x_1491_);
v___x_1496_ = l_Lean_Syntax_isOfKind(v___x_1491_, v___x_1495_);
if (v___x_1496_ == 0)
{
lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; 
lean_dec(v___x_1491_);
v___x_1497_ = lean_box(0);
v___x_1498_ = l_Lean_Syntax_formatStx(v_stx_759_, v___x_1497_, v___x_789_);
v___x_1499_ = l_Std_Format_defWidth;
v___x_1500_ = l_Std_Format_pretty(v___x_1498_, v___x_1499_, v___x_1490_, v___x_1490_);
v___x_1501_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_1500_, v_a_761_);
lean_dec_ref(v___x_1500_);
return v___x_1501_;
}
else
{
lean_dec(v_stx_759_);
goto v___jp_1492_;
}
}
else
{
lean_dec(v_stx_759_);
goto v___jp_1492_;
}
v___jp_1492_:
{
lean_object* v___x_1493_; lean_object* v___x_1494_; 
v___x_1493_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_atomString(v___x_1491_);
v___x_1494_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_1493_, v_a_761_);
lean_dec_ref(v___x_1493_);
return v___x_1494_;
}
}
}
else
{
lean_object* v___x_1502_; lean_object* v___x_1503_; 
v___x_1502_ = lean_unsigned_to_nat(0u);
v___x_1503_ = l_Lean_Syntax_getArg(v_stx_759_, v___x_1502_);
if (v___x_787_ == 0)
{
lean_object* v___x_1507_; uint8_t v___x_1508_; 
v___x_1507_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__68));
lean_inc(v___x_1503_);
v___x_1508_ = l_Lean_Syntax_isOfKind(v___x_1503_, v___x_1507_);
if (v___x_1508_ == 0)
{
lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; 
lean_dec(v___x_1503_);
v___x_1509_ = lean_box(0);
v___x_1510_ = l_Lean_Syntax_formatStx(v_stx_759_, v___x_1509_, v___x_787_);
v___x_1511_ = l_Std_Format_defWidth;
v___x_1512_ = l_Std_Format_pretty(v___x_1510_, v___x_1511_, v___x_1502_, v___x_1502_);
v___x_1513_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_1512_, v_a_761_);
lean_dec_ref(v___x_1512_);
return v___x_1513_;
}
else
{
lean_dec(v_stx_759_);
goto v___jp_1504_;
}
}
else
{
lean_dec(v_stx_759_);
goto v___jp_1504_;
}
v___jp_1504_:
{
lean_object* v___x_1505_; lean_object* v___x_1506_; 
v___x_1505_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_atomString(v___x_1503_);
v___x_1506_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_1505_, v_a_761_);
lean_dec_ref(v___x_1505_);
return v___x_1506_;
}
}
}
else
{
lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; uint8_t v___x_1518_; 
v___x_1514_ = l_Lean_Syntax_getArgs(v_stx_759_);
lean_dec(v_stx_759_);
v___x_1515_ = lean_unsigned_to_nat(0u);
v___x_1516_ = lean_array_get_size(v___x_1514_);
v___x_1517_ = lean_box(0);
v___x_1518_ = lean_nat_dec_lt(v___x_1515_, v___x_1516_);
if (v___x_1518_ == 0)
{
lean_object* v___x_1519_; 
lean_dec_ref(v___x_1514_);
v___x_1519_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1519_, 0, v___x_1517_);
lean_ctor_set(v___x_1519_, 1, v_a_761_);
return v___x_1519_;
}
else
{
uint8_t v___x_1520_; 
v___x_1520_ = lean_nat_dec_le(v___x_1516_, v___x_1516_);
if (v___x_1520_ == 0)
{
if (v___x_1518_ == 0)
{
lean_object* v___x_1521_; 
lean_dec_ref(v___x_1514_);
v___x_1521_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1521_, 0, v___x_1517_);
lean_ctor_set(v___x_1521_, 1, v_a_761_);
return v___x_1521_;
}
else
{
size_t v___x_1522_; size_t v___x_1523_; lean_object* v___x_1524_; 
v___x_1522_ = ((size_t)0ULL);
v___x_1523_ = lean_usize_of_nat(v___x_1516_);
v___x_1524_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__2(v___x_1514_, v___x_1522_, v___x_1523_, v___x_1517_, v_a_760_, v_a_761_);
lean_dec_ref(v___x_1514_);
return v___x_1524_;
}
}
else
{
size_t v___x_1525_; size_t v___x_1526_; lean_object* v___x_1527_; 
v___x_1525_ = ((size_t)0ULL);
v___x_1526_ = lean_usize_of_nat(v___x_1516_);
v___x_1527_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__2(v___x_1514_, v___x_1525_, v___x_1526_, v___x_1517_, v_a_760_, v_a_761_);
lean_dec_ref(v___x_1514_);
return v___x_1527_;
}
}
}
v___jp_762_:
{
lean_object* v_snd_764_; lean_object* v___x_765_; 
v_snd_764_ = lean_ctor_get(v___y_763_, 1);
lean_inc(v_snd_764_);
lean_dec_ref(v___y_763_);
v___x_765_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_endBlock___redArg(v_snd_764_);
return v___x_765_;
}
v___jp_766_:
{
lean_object* v_snd_768_; lean_object* v___x_769_; 
v_snd_768_ = lean_ctor_get(v___y_767_, 1);
lean_inc(v_snd_768_);
lean_dec_ref(v___y_767_);
v___x_769_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_endBlock___redArg(v_snd_768_);
return v___x_769_;
}
v___jp_770_:
{
lean_object* v_snd_772_; lean_object* v___x_773_; 
v_snd_772_ = lean_ctor_get(v___y_771_, 1);
lean_inc(v_snd_772_);
lean_dec_ref(v___y_771_);
v___x_773_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_endBlock___redArg(v_snd_772_);
return v___x_773_;
}
v___jp_774_:
{
lean_object* v_snd_776_; lean_object* v___x_777_; 
v_snd_776_ = lean_ctor_get(v___y_775_, 1);
lean_inc(v_snd_776_);
lean_dec_ref(v___y_775_);
v___x_777_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_endBlock___redArg(v_snd_776_);
return v___x_777_;
}
v___jp_778_:
{
lean_object* v___x_780_; lean_object* v___x_781_; 
v___x_780_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__0));
v___x_781_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_out___redArg(v___x_780_, v_snd_779_);
return v___x_781_;
}
v___jp_782_:
{
lean_object* v_snd_784_; 
v_snd_784_ = lean_ctor_get(v___y_783_, 1);
lean_inc(v_snd_784_);
lean_dec_ref(v___y_783_);
v_snd_779_ = v_snd_784_;
goto v___jp_778_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__2(lean_object* v_as_1528_, size_t v_i_1529_, size_t v_stop_1530_, lean_object* v_b_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_){
_start:
{
uint8_t v___x_1534_; 
v___x_1534_ = lean_usize_dec_eq(v_i_1529_, v_stop_1530_);
if (v___x_1534_ == 0)
{
lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v_fst_1537_; lean_object* v_snd_1538_; size_t v___x_1539_; size_t v___x_1540_; 
v___x_1535_ = lean_array_uget_borrowed(v_as_1528_, v_i_1529_);
lean_inc(v___x_1535_);
v___x_1536_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27(v___x_1535_, v___y_1532_, v___y_1533_);
v_fst_1537_ = lean_ctor_get(v___x_1536_, 0);
lean_inc(v_fst_1537_);
v_snd_1538_ = lean_ctor_get(v___x_1536_, 1);
lean_inc(v_snd_1538_);
lean_dec_ref(v___x_1536_);
v___x_1539_ = ((size_t)1ULL);
v___x_1540_ = lean_usize_add(v_i_1529_, v___x_1539_);
v_i_1529_ = v___x_1540_;
v_b_1531_ = v_fst_1537_;
v___y_1533_ = v_snd_1538_;
goto _start;
}
else
{
lean_object* v___x_1542_; 
v___x_1542_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1542_, 0, v_b_1531_);
lean_ctor_set(v___x_1542_, 1, v___y_1533_);
return v___x_1542_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__2___boxed(lean_object* v_as_1543_, lean_object* v_i_1544_, lean_object* v_stop_1545_, lean_object* v_b_1546_, lean_object* v___y_1547_, lean_object* v___y_1548_){
_start:
{
size_t v_i_boxed_1549_; size_t v_stop_boxed_1550_; lean_object* v_res_1551_; 
v_i_boxed_1549_ = lean_unbox_usize(v_i_1544_);
lean_dec(v_i_1544_);
v_stop_boxed_1550_ = lean_unbox_usize(v_stop_1545_);
lean_dec(v_stop_1545_);
v_res_1551_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__2(v_as_1543_, v_i_boxed_1549_, v_stop_boxed_1550_, v_b_1546_, v___y_1547_, v___y_1548_);
lean_dec(v___y_1547_);
lean_dec_ref(v_as_1543_);
return v_res_1551_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__0___boxed(lean_object* v_as_1552_, lean_object* v_sz_1553_, lean_object* v_i_1554_, lean_object* v_b_1555_, lean_object* v___y_1556_, lean_object* v___y_1557_){
_start:
{
size_t v_sz_boxed_1558_; size_t v_i_boxed_1559_; lean_object* v_res_1560_; 
v_sz_boxed_1558_ = lean_unbox_usize(v_sz_1553_);
lean_dec(v_sz_1553_);
v_i_boxed_1559_ = lean_unbox_usize(v_i_1554_);
lean_dec(v_i_1554_);
v_res_1560_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__0(v_as_1552_, v_sz_boxed_1558_, v_i_boxed_1559_, v_b_1555_, v___y_1556_, v___y_1557_);
lean_dec(v___y_1556_);
lean_dec_ref(v_as_1552_);
return v_res_1560_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__1___boxed(lean_object* v_as_1561_, lean_object* v_sz_1562_, lean_object* v_i_1563_, lean_object* v_b_1564_, lean_object* v___y_1565_, lean_object* v___y_1566_){
_start:
{
size_t v_sz_boxed_1567_; size_t v_i_boxed_1568_; lean_object* v_res_1569_; 
v_sz_boxed_1567_ = lean_unbox_usize(v_sz_1562_);
lean_dec(v_sz_1562_);
v_i_boxed_1568_ = lean_unbox_usize(v_i_1563_);
lean_dec(v_i_1563_);
v_res_1569_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__1(v_as_1561_, v_sz_boxed_1567_, v_i_boxed_1568_, v_b_1564_, v___y_1565_, v___y_1566_);
lean_dec(v___y_1565_);
lean_dec_ref(v_as_1561_);
return v_res_1569_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___boxed(lean_object* v_as_1570_, lean_object* v_i_1571_, lean_object* v_stop_1572_, lean_object* v_b_1573_, lean_object* v___y_1574_, lean_object* v___y_1575_){
_start:
{
size_t v_i_boxed_1576_; size_t v_stop_boxed_1577_; lean_object* v_res_1578_; 
v_i_boxed_1576_ = lean_unbox_usize(v_i_1571_);
lean_dec(v_i_1571_);
v_stop_boxed_1577_ = lean_unbox_usize(v_stop_1572_);
lean_dec(v_stop_1572_);
v_res_1578_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6(v_as_1570_, v_i_boxed_1576_, v_stop_boxed_1577_, v_b_1573_, v___y_1574_, v___y_1575_);
lean_dec(v___y_1574_);
lean_dec_ref(v_as_1570_);
return v_res_1578_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__5___boxed(lean_object* v_as_1579_, lean_object* v_sz_1580_, lean_object* v_i_1581_, lean_object* v_b_1582_, lean_object* v___y_1583_, lean_object* v___y_1584_){
_start:
{
size_t v_sz_boxed_1585_; size_t v_i_boxed_1586_; lean_object* v_res_1587_; 
v_sz_boxed_1585_ = lean_unbox_usize(v_sz_1580_);
lean_dec(v_sz_1580_);
v_i_boxed_1586_ = lean_unbox_usize(v_i_1581_);
lean_dec(v_i_1581_);
v_res_1587_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__5(v_as_1579_, v_sz_boxed_1585_, v_i_boxed_1586_, v_b_1582_, v___y_1583_, v___y_1584_);
lean_dec(v___y_1583_);
lean_dec_ref(v_as_1579_);
return v_res_1587_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___boxed(lean_object* v_stx_1588_, lean_object* v_a_1589_, lean_object* v_a_1590_){
_start:
{
lean_object* v_res_1591_; 
v_res_1591_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27(v_stx_1588_, v_a_1589_, v_a_1590_);
lean_dec(v_a_1589_);
return v_res_1591_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__4(lean_object* v_a_1592_, lean_object* v___y_1593_, lean_object* v___x_1594_, lean_object* v___x_1595_, lean_object* v_inst_1596_, lean_object* v_R_1597_, lean_object* v_a_1598_, lean_object* v_b_1599_){
_start:
{
lean_object* v___x_1600_; 
v___x_1600_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__4___redArg(v_a_1592_, v___y_1593_, v___x_1594_, v___x_1595_, v_a_1598_, v_b_1599_);
return v___x_1600_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__4___boxed(lean_object* v_a_1601_, lean_object* v___y_1602_, lean_object* v___x_1603_, lean_object* v___x_1604_, lean_object* v_inst_1605_, lean_object* v_R_1606_, lean_object* v_a_1607_, lean_object* v_b_1608_){
_start:
{
lean_object* v_res_1609_; 
v_res_1609_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__4(v_a_1601_, v___y_1602_, v___x_1603_, v___x_1604_, v_inst_1605_, v_R_1606_, v_a_1607_, v_b_1608_);
lean_dec_ref(v___x_1603_);
lean_dec_ref(v___y_1602_);
lean_dec(v_a_1601_);
return v_res_1609_;
}
}
static lean_object* _init_l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_formatMetadata___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1610_; lean_object* v___x_1611_; 
v___x_1610_ = lean_box(0);
v___x_1611_ = l_unsafeCast___redArg(v___x_1610_);
return v___x_1611_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_formatMetadata___lam__0(lean_object* v___y_1612_, lean_object* v___y_1613_, lean_object* v___y_1614_, lean_object* v___y_1615_){
_start:
{
lean_object* v___x_1617_; 
v___x_1617_ = l_Lean_PrettyPrinter_Formatter_pushLine___redArg(v___y_1613_);
if (lean_obj_tag(v___x_1617_) == 0)
{
lean_object* v___x_1618_; lean_object* v___x_1619_; 
lean_dec_ref_known(v___x_1617_, 1);
v___x_1618_ = lean_obj_once(&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_formatMetadata___lam__0___closed__0, &l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_formatMetadata___lam__0___closed__0_once, _init_l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_formatMetadata___lam__0___closed__0);
v___x_1619_ = l_Lean_PrettyPrinter_Formatter_visitAtom(v___x_1618_, v___y_1612_, v___y_1613_, v___y_1614_, v___y_1615_);
if (lean_obj_tag(v___x_1619_) == 0)
{
lean_object* v___x_1620_; 
lean_dec_ref_known(v___x_1619_, 1);
v___x_1620_ = l_Lean_PrettyPrinter_Formatter_pushLine___redArg(v___y_1613_);
if (lean_obj_tag(v___x_1620_) == 0)
{
lean_object* v___x_1621_; 
lean_dec_ref_known(v___x_1620_, 1);
v___x_1621_ = l_Lean_Doc_Parser_metadataContents_formatter(v___y_1612_, v___y_1613_, v___y_1614_, v___y_1615_);
if (lean_obj_tag(v___x_1621_) == 0)
{
lean_object* v___x_1622_; 
lean_dec_ref_known(v___x_1621_, 1);
v___x_1622_ = l_Lean_PrettyPrinter_Formatter_pushLine___redArg(v___y_1613_);
if (lean_obj_tag(v___x_1622_) == 0)
{
lean_object* v___x_1623_; 
lean_dec_ref_known(v___x_1622_, 1);
v___x_1623_ = l_Lean_PrettyPrinter_Formatter_visitAtom(v___x_1618_, v___y_1612_, v___y_1613_, v___y_1614_, v___y_1615_);
return v___x_1623_;
}
else
{
return v___x_1622_;
}
}
else
{
return v___x_1621_;
}
}
else
{
return v___x_1620_;
}
}
else
{
return v___x_1619_;
}
}
else
{
return v___x_1617_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_formatMetadata___lam__0___boxed(lean_object* v___y_1624_, lean_object* v___y_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_){
_start:
{
lean_object* v_res_1629_; 
v_res_1629_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_formatMetadata___lam__0(v___y_1624_, v___y_1625_, v___y_1626_, v___y_1627_);
lean_dec(v___y_1627_);
lean_dec_ref(v___y_1626_);
lean_dec(v___y_1625_);
lean_dec_ref(v___y_1624_);
return v_res_1629_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_formatMetadata(lean_object* v_a_1631_, lean_object* v_a_1632_, lean_object* v_a_1633_, lean_object* v_a_1634_){
_start:
{
lean_object* v___f_1636_; lean_object* v___x_1637_; 
v___f_1636_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_formatMetadata___closed__0));
v___x_1637_ = l_Lean_PrettyPrinter_Formatter_visitArgs(v___f_1636_, v_a_1631_, v_a_1632_, v_a_1633_, v_a_1634_);
return v___x_1637_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_formatMetadata___boxed(lean_object* v_a_1638_, lean_object* v_a_1639_, lean_object* v_a_1640_, lean_object* v_a_1641_, lean_object* v_a_1642_){
_start:
{
lean_object* v_res_1643_; 
v_res_1643_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_formatMetadata(v_a_1638_, v_a_1639_, v_a_1640_, v_a_1641_);
lean_dec(v_a_1641_);
lean_dec_ref(v_a_1640_);
lean_dec(v_a_1639_);
lean_dec_ref(v_a_1638_);
return v_res_1643_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString(lean_object* v_stx_1644_){
_start:
{
lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; lean_object* v_snd_1648_; 
v___x_1645_ = lean_unsigned_to_nat(0u);
v___x_1646_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomStrLit___redArg___closed__0));
v___x_1647_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27(v_stx_1644_, v___x_1645_, v___x_1646_);
v_snd_1648_ = lean_ctor_get(v___x_1647_, 1);
lean_inc(v_snd_1648_);
lean_dec_ref(v___x_1647_);
return v_snd_1648_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Doc_Parser_document_formatter_spec__0___redArg(lean_object* v_range_1655_, lean_object* v_b_1656_, lean_object* v_i_1657_, lean_object* v___y_1658_, lean_object* v___y_1659_, lean_object* v___y_1660_, lean_object* v___y_1661_){
_start:
{
lean_object* v_stop_1663_; lean_object* v_step_1664_; uint8_t v___x_1665_; 
v_stop_1663_ = lean_ctor_get(v_range_1655_, 1);
v_step_1664_ = lean_ctor_get(v_range_1655_, 2);
v___x_1665_ = lean_nat_dec_lt(v_i_1657_, v_stop_1663_);
if (v___x_1665_ == 0)
{
lean_object* v___x_1666_; 
lean_dec(v_i_1657_);
v___x_1666_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1666_, 0, v_b_1656_);
return v___x_1666_;
}
else
{
lean_object* v___x_1667_; lean_object* v___x_1671_; lean_object* v_a_1672_; lean_object* v___x_1674_; uint8_t v_isShared_1675_; uint8_t v_isSharedCheck_1686_; 
v___x_1667_ = lean_box(0);
v___x_1671_ = l_Lean_Syntax_MonadTraverser_getCur___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomString_spec__0___redArg(v___y_1659_);
v_a_1672_ = lean_ctor_get(v___x_1671_, 0);
v_isSharedCheck_1686_ = !lean_is_exclusive(v___x_1671_);
if (v_isSharedCheck_1686_ == 0)
{
v___x_1674_ = v___x_1671_;
v_isShared_1675_ = v_isSharedCheck_1686_;
goto v_resetjp_1673_;
}
else
{
lean_inc(v_a_1672_);
lean_dec(v___x_1671_);
v___x_1674_ = lean_box(0);
v_isShared_1675_ = v_isSharedCheck_1686_;
goto v_resetjp_1673_;
}
v___jp_1668_:
{
lean_object* v___x_1669_; 
v___x_1669_ = lean_nat_add(v_i_1657_, v_step_1664_);
lean_dec(v_i_1657_);
v_b_1656_ = v___x_1667_;
v_i_1657_ = v___x_1669_;
goto _start;
}
v_resetjp_1673_:
{
lean_object* v___x_1676_; lean_object* v___x_1677_; uint8_t v___x_1678_; 
lean_inc(v_a_1672_);
v___x_1676_ = l_Lean_Syntax_getKind(v_a_1672_);
v___x_1677_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Doc_Parser_document_formatter_spec__0___redArg___closed__1));
v___x_1678_ = lean_name_eq(v___x_1676_, v___x_1677_);
lean_dec(v___x_1676_);
if (v___x_1678_ == 0)
{
lean_object* v___x_1679_; lean_object* v___x_1681_; 
v___x_1679_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString(v_a_1672_);
if (v_isShared_1675_ == 0)
{
lean_ctor_set_tag(v___x_1674_, 3);
lean_ctor_set(v___x_1674_, 0, v___x_1679_);
v___x_1681_ = v___x_1674_;
goto v_reusejp_1680_;
}
else
{
lean_object* v_reuseFailAlloc_1684_; 
v_reuseFailAlloc_1684_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1684_, 0, v___x_1679_);
v___x_1681_ = v_reuseFailAlloc_1684_;
goto v_reusejp_1680_;
}
v_reusejp_1680_:
{
lean_object* v___x_1682_; 
v___x_1682_ = l_Lean_PrettyPrinter_Formatter_push___redArg(v___x_1681_, v___y_1659_);
if (lean_obj_tag(v___x_1682_) == 0)
{
lean_object* v___x_1683_; 
lean_dec_ref_known(v___x_1682_, 1);
v___x_1683_ = l_Lean_Syntax_MonadTraverser_goLeft___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomString_spec__1___redArg(v___y_1659_);
lean_dec_ref(v___x_1683_);
goto v___jp_1668_;
}
else
{
lean_dec(v_i_1657_);
return v___x_1682_;
}
}
}
else
{
lean_object* v___x_1685_; 
lean_del_object(v___x_1674_);
lean_dec(v_a_1672_);
v___x_1685_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_formatMetadata(v___y_1658_, v___y_1659_, v___y_1660_, v___y_1661_);
if (lean_obj_tag(v___x_1685_) == 0)
{
lean_dec_ref_known(v___x_1685_, 1);
goto v___jp_1668_;
}
else
{
lean_dec(v_i_1657_);
return v___x_1685_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Doc_Parser_document_formatter_spec__0___redArg___boxed(lean_object* v_range_1687_, lean_object* v_b_1688_, lean_object* v_i_1689_, lean_object* v___y_1690_, lean_object* v___y_1691_, lean_object* v___y_1692_, lean_object* v___y_1693_, lean_object* v___y_1694_){
_start:
{
lean_object* v_res_1695_; 
v_res_1695_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Doc_Parser_document_formatter_spec__0___redArg(v_range_1687_, v_b_1688_, v_i_1689_, v___y_1690_, v___y_1691_, v___y_1692_, v___y_1693_);
lean_dec(v___y_1693_);
lean_dec_ref(v___y_1692_);
lean_dec(v___y_1691_);
lean_dec_ref(v___y_1690_);
lean_dec_ref(v_range_1687_);
return v_res_1695_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_document_formatter___lam__0(lean_object* v___x_1696_, lean_object* v___x_1697_, lean_object* v___x_1698_, lean_object* v___y_1699_, lean_object* v___y_1700_, lean_object* v___y_1701_, lean_object* v___y_1702_){
_start:
{
lean_object* v___x_1704_; 
v___x_1704_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Doc_Parser_document_formatter_spec__0___redArg(v___x_1696_, v___x_1697_, v___x_1698_, v___y_1699_, v___y_1700_, v___y_1701_, v___y_1702_);
if (lean_obj_tag(v___x_1704_) == 0)
{
lean_object* v___x_1706_; uint8_t v_isShared_1707_; uint8_t v_isSharedCheck_1711_; 
v_isSharedCheck_1711_ = !lean_is_exclusive(v___x_1704_);
if (v_isSharedCheck_1711_ == 0)
{
lean_object* v_unused_1712_; 
v_unused_1712_ = lean_ctor_get(v___x_1704_, 0);
lean_dec(v_unused_1712_);
v___x_1706_ = v___x_1704_;
v_isShared_1707_ = v_isSharedCheck_1711_;
goto v_resetjp_1705_;
}
else
{
lean_dec(v___x_1704_);
v___x_1706_ = lean_box(0);
v_isShared_1707_ = v_isSharedCheck_1711_;
goto v_resetjp_1705_;
}
v_resetjp_1705_:
{
lean_object* v___x_1709_; 
if (v_isShared_1707_ == 0)
{
lean_ctor_set(v___x_1706_, 0, v___x_1697_);
v___x_1709_ = v___x_1706_;
goto v_reusejp_1708_;
}
else
{
lean_object* v_reuseFailAlloc_1710_; 
v_reuseFailAlloc_1710_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1710_, 0, v___x_1697_);
v___x_1709_ = v_reuseFailAlloc_1710_;
goto v_reusejp_1708_;
}
v_reusejp_1708_:
{
return v___x_1709_;
}
}
}
else
{
return v___x_1704_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_document_formatter___lam__0___boxed(lean_object* v___x_1713_, lean_object* v___x_1714_, lean_object* v___x_1715_, lean_object* v___y_1716_, lean_object* v___y_1717_, lean_object* v___y_1718_, lean_object* v___y_1719_, lean_object* v___y_1720_){
_start:
{
lean_object* v_res_1721_; 
v_res_1721_ = l_Lean_Doc_Parser_document_formatter___lam__0(v___x_1713_, v___x_1714_, v___x_1715_, v___y_1716_, v___y_1717_, v___y_1718_, v___y_1719_);
lean_dec(v___y_1719_);
lean_dec_ref(v___y_1718_);
lean_dec(v___y_1717_);
lean_dec_ref(v___y_1716_);
lean_dec_ref(v___x_1713_);
return v_res_1721_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_document_formatter___lam__1(lean_object* v___y_1722_, lean_object* v___y_1723_, lean_object* v___y_1724_, lean_object* v___y_1725_){
_start:
{
lean_object* v___x_1727_; lean_object* v_a_1728_; lean_object* v___x_1729_; lean_object* v_i_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___f_1735_; lean_object* v___x_1736_; 
v___x_1727_ = l_Lean_Syntax_MonadTraverser_getCur___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_pushAtomString_spec__0___redArg(v___y_1723_);
v_a_1728_ = lean_ctor_get(v___x_1727_, 0);
lean_inc(v_a_1728_);
lean_dec_ref(v___x_1727_);
v___x_1729_ = l_Lean_Syntax_getArgs(v_a_1728_);
lean_dec(v_a_1728_);
v_i_1730_ = lean_array_get_size(v___x_1729_);
lean_dec_ref(v___x_1729_);
v___x_1731_ = lean_unsigned_to_nat(0u);
v___x_1732_ = lean_unsigned_to_nat(1u);
v___x_1733_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1733_, 0, v___x_1731_);
lean_ctor_set(v___x_1733_, 1, v_i_1730_);
lean_ctor_set(v___x_1733_, 2, v___x_1732_);
v___x_1734_ = lean_box(0);
v___f_1735_ = lean_alloc_closure((void*)(l_Lean_Doc_Parser_document_formatter___lam__0___boxed), 8, 3);
lean_closure_set(v___f_1735_, 0, v___x_1733_);
lean_closure_set(v___f_1735_, 1, v___x_1734_);
lean_closure_set(v___f_1735_, 2, v___x_1731_);
v___x_1736_ = l_Lean_PrettyPrinter_Formatter_visitArgs(v___f_1735_, v___y_1722_, v___y_1723_, v___y_1724_, v___y_1725_);
return v___x_1736_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_document_formatter___lam__1___boxed(lean_object* v___y_1737_, lean_object* v___y_1738_, lean_object* v___y_1739_, lean_object* v___y_1740_, lean_object* v___y_1741_){
_start:
{
lean_object* v_res_1742_; 
v_res_1742_ = l_Lean_Doc_Parser_document_formatter___lam__1(v___y_1737_, v___y_1738_, v___y_1739_, v___y_1740_);
lean_dec(v___y_1740_);
lean_dec_ref(v___y_1739_);
lean_dec(v___y_1738_);
lean_dec_ref(v___y_1737_);
return v_res_1742_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_document_formatter(lean_object* v_a_1744_, lean_object* v_a_1745_, lean_object* v_a_1746_, lean_object* v_a_1747_){
_start:
{
lean_object* v___f_1749_; lean_object* v___x_1750_; 
v___f_1749_ = ((lean_object*)(l_Lean_Doc_Parser_document_formatter___closed__0));
v___x_1750_ = l_Lean_PrettyPrinter_Formatter_concat(v___f_1749_, v_a_1744_, v_a_1745_, v_a_1746_, v_a_1747_);
return v___x_1750_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_document_formatter___boxed(lean_object* v_a_1751_, lean_object* v_a_1752_, lean_object* v_a_1753_, lean_object* v_a_1754_, lean_object* v_a_1755_){
_start:
{
lean_object* v_res_1756_; 
v_res_1756_ = l_Lean_Doc_Parser_document_formatter(v_a_1751_, v_a_1752_, v_a_1753_, v_a_1754_);
lean_dec(v_a_1754_);
lean_dec_ref(v_a_1753_);
lean_dec(v_a_1752_);
lean_dec_ref(v_a_1751_);
return v_res_1756_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Doc_Parser_document_formatter_spec__0(lean_object* v_range_1757_, lean_object* v_b_1758_, lean_object* v_i_1759_, lean_object* v_hs_1760_, lean_object* v_hl_1761_, lean_object* v___y_1762_, lean_object* v___y_1763_, lean_object* v___y_1764_, lean_object* v___y_1765_){
_start:
{
lean_object* v___x_1767_; 
v___x_1767_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Doc_Parser_document_formatter_spec__0___redArg(v_range_1757_, v_b_1758_, v_i_1759_, v___y_1762_, v___y_1763_, v___y_1764_, v___y_1765_);
return v___x_1767_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Doc_Parser_document_formatter_spec__0___boxed(lean_object* v_range_1768_, lean_object* v_b_1769_, lean_object* v_i_1770_, lean_object* v_hs_1771_, lean_object* v_hl_1772_, lean_object* v___y_1773_, lean_object* v___y_1774_, lean_object* v___y_1775_, lean_object* v___y_1776_, lean_object* v___y_1777_){
_start:
{
lean_object* v_res_1778_; 
v_res_1778_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Doc_Parser_document_formatter_spec__0(v_range_1768_, v_b_1769_, v_i_1770_, v_hs_1771_, v_hl_1772_, v___y_1773_, v___y_1774_, v___y_1775_, v___y_1776_);
lean_dec(v___y_1776_);
lean_dec_ref(v___y_1775_);
lean_dec(v___y_1774_);
lean_dec_ref(v___y_1773_);
lean_dec_ref(v_range_1768_);
return v_res_1778_;
}
}
lean_object* runtime_initialize_Lean_PrettyPrinter_Formatter(uint8_t builtin);
lean_object* runtime_initialize_Lean_DocString_Parser(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_DocString_Formatter(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_PrettyPrinter_Formatter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DocString_Parser(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_DocString_Formatter(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_PrettyPrinter_Formatter(uint8_t builtin);
lean_object* initialize_Lean_DocString_Parser(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_DocString_Formatter(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_PrettyPrinter_Formatter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_DocString_Parser(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DocString_Formatter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_DocString_Formatter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_DocString_Formatter(builtin);
}
#ifdef __cplusplus
}
#endif

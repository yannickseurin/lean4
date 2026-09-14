// Lean compiler output
// Module: Lean.Elab.DocString.Builtin.Parsing
// Imports: public import Lean.Parser.Extension public import Init.While import Init.Data.Array.Attach import Init.Data.Array.Mem
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
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_utf8_next(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_string_utf8_prev(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l___private_Init_While_0__repeatM_erased___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Lean_Parser_mkInputContext___redArg(lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Parser_getTokenTable(lean_object*);
lean_object* l_Lean_Parser_mkParserState(lean_object*);
lean_object* l_Lean_Parser_ParserFn_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_SyntaxStack_back(lean_object*);
lean_object* l_Lean_Parser_ParserState_allErrors(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_Parser_ParserState_toErrorMsg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_logError___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Parser_InputContext_atEnd(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_mkError(lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getString(lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_throwError___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_throwErrorAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Parser_ParserState_setPos(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Init.Data.Option.BasicAux"};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__0_value;
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Option.get!"};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__1 = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__1_value;
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "value is none"};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__2 = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg___lam__0___closed__0;
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "end of input"};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit___redArg___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit___redArg___lam__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit___redArg___lam__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit___redArg___lam__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_posIndex_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_posIndex_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_posIndex(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_posIndex___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_posIndex_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_posIndex_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_nextn_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_nextn_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_nextn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_nextn___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_nextn_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_nextn_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_reposition(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_reposition___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionInfo(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionSyntax(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionSyntax_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionSyntax_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionSyntax___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionSyntax_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionSyntax_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Array_map__unattach_match__1_splitter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Array_map__unattach_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Doc_parseQuotedStrLit___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__2___closed__0 = (const lean_object*)&l_Lean_Doc_parseQuotedStrLit___redArg___lam__2___closed__0_value;
static const lean_closure_object l_Lean_Doc_parseQuotedStrLit___redArg___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__2___closed__1 = (const lean_object*)&l_Lean_Doc_parseQuotedStrLit___redArg___lam__2___closed__1_value;
static const lean_closure_object l_Lean_Doc_parseQuotedStrLit___redArg___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__2___closed__2 = (const lean_object*)&l_Lean_Doc_parseQuotedStrLit___redArg___lam__2___closed__2_value;
static const lean_closure_object l_Lean_Doc_parseQuotedStrLit___redArg___lam__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__2___closed__3 = (const lean_object*)&l_Lean_Doc_parseQuotedStrLit___redArg___lam__2___closed__3_value;
static const lean_closure_object l_Lean_Doc_parseQuotedStrLit___redArg___lam__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__2___closed__4 = (const lean_object*)&l_Lean_Doc_parseQuotedStrLit___redArg___lam__2___closed__4_value;
static const lean_closure_object l_Lean_Doc_parseQuotedStrLit___redArg___lam__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__2___closed__5 = (const lean_object*)&l_Lean_Doc_parseQuotedStrLit___redArg___lam__2___closed__5_value;
static const lean_closure_object l_Lean_Doc_parseQuotedStrLit___redArg___lam__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__2___closed__6 = (const lean_object*)&l_Lean_Doc_parseQuotedStrLit___redArg___lam__2___closed__6_value;
static const lean_ctor_object l_Lean_Doc_parseQuotedStrLit___redArg___lam__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_parseQuotedStrLit___redArg___lam__2___closed__0_value),((lean_object*)&l_Lean_Doc_parseQuotedStrLit___redArg___lam__2___closed__1_value)}};
static const lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__2___closed__7 = (const lean_object*)&l_Lean_Doc_parseQuotedStrLit___redArg___lam__2___closed__7_value;
static const lean_ctor_object l_Lean_Doc_parseQuotedStrLit___redArg___lam__2___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_parseQuotedStrLit___redArg___lam__2___closed__7_value),((lean_object*)&l_Lean_Doc_parseQuotedStrLit___redArg___lam__2___closed__2_value),((lean_object*)&l_Lean_Doc_parseQuotedStrLit___redArg___lam__2___closed__3_value),((lean_object*)&l_Lean_Doc_parseQuotedStrLit___redArg___lam__2___closed__4_value),((lean_object*)&l_Lean_Doc_parseQuotedStrLit___redArg___lam__2___closed__5_value)}};
static const lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__2___closed__8 = (const lean_object*)&l_Lean_Doc_parseQuotedStrLit___redArg___lam__2___closed__8_value;
static const lean_ctor_object l_Lean_Doc_parseQuotedStrLit___redArg___lam__2___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_parseQuotedStrLit___redArg___lam__2___closed__8_value),((lean_object*)&l_Lean_Doc_parseQuotedStrLit___redArg___lam__2___closed__6_value)}};
static const lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__2___closed__9 = (const lean_object*)&l_Lean_Doc_parseQuotedStrLit___redArg___lam__2___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__4(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__5(lean_object*, lean_object*);
static const lean_string_object l_Lean_Doc_parseQuotedStrLit___redArg___lam__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Not a quoted string literal"};
static const lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__7___closed__0 = (const lean_object*)&l_Lean_Doc_parseQuotedStrLit___redArg___lam__7___closed__0_value;
static lean_once_cell_t l_Lean_Doc_parseQuotedStrLit___redArg___lam__7___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__7___closed__1;
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__10(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__11(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__1(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__5(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__7(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__8(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__9(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__3(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_4_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__2));
v___x_5_ = lean_unsigned_to_nat(14u);
v___x_6_ = lean_unsigned_to_nat(22u);
v___x_7_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__1));
v___x_8_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__0));
v___x_9_ = l_mkPanicMessageWithDecl(v___x_8_, v___x_7_, v___x_6_, v___x_5_, v___x_4_);
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg(lean_object* v_inst_10_, lean_object* v_s_11_){
_start:
{
lean_object* v___y_13_; lean_object* v___y_14_; lean_object* v___x_26_; uint8_t v___x_27_; lean_object* v___y_29_; lean_object* v___x_34_; 
v___x_26_ = lean_unsigned_to_nat(0u);
v___x_27_ = 1;
v___x_34_ = l_Lean_Syntax_getPos_x3f(v_s_11_, v___x_27_);
if (lean_obj_tag(v___x_34_) == 0)
{
lean_object* v___x_35_; lean_object* v___x_36_; 
v___x_35_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__3, &l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__3_once, _init_l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__3);
v___x_36_ = l_panic___redArg(v___x_26_, v___x_35_);
v___y_29_ = v___x_36_;
goto v___jp_28_;
}
else
{
lean_object* v_val_37_; 
v_val_37_ = lean_ctor_get(v___x_34_, 0);
lean_inc(v_val_37_);
lean_dec_ref_known(v___x_34_, 1);
v___y_29_ = v_val_37_;
goto v___jp_28_;
}
v___jp_12_:
{
lean_object* v_toApplicative_15_; lean_object* v___x_17_; uint8_t v_isShared_18_; uint8_t v_isSharedCheck_24_; 
v_toApplicative_15_ = lean_ctor_get(v_inst_10_, 0);
v_isSharedCheck_24_ = !lean_is_exclusive(v_inst_10_);
if (v_isSharedCheck_24_ == 0)
{
lean_object* v_unused_25_; 
v_unused_25_ = lean_ctor_get(v_inst_10_, 1);
lean_dec(v_unused_25_);
v___x_17_ = v_inst_10_;
v_isShared_18_ = v_isSharedCheck_24_;
goto v_resetjp_16_;
}
else
{
lean_inc(v_toApplicative_15_);
lean_dec(v_inst_10_);
v___x_17_ = lean_box(0);
v_isShared_18_ = v_isSharedCheck_24_;
goto v_resetjp_16_;
}
v_resetjp_16_:
{
lean_object* v_toPure_19_; lean_object* v___x_21_; 
v_toPure_19_ = lean_ctor_get(v_toApplicative_15_, 1);
lean_inc(v_toPure_19_);
lean_dec_ref(v_toApplicative_15_);
if (v_isShared_18_ == 0)
{
lean_ctor_set(v___x_17_, 1, v___y_14_);
lean_ctor_set(v___x_17_, 0, v___y_13_);
v___x_21_ = v___x_17_;
goto v_reusejp_20_;
}
else
{
lean_object* v_reuseFailAlloc_23_; 
v_reuseFailAlloc_23_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_23_, 0, v___y_13_);
lean_ctor_set(v_reuseFailAlloc_23_, 1, v___y_14_);
v___x_21_ = v_reuseFailAlloc_23_;
goto v_reusejp_20_;
}
v_reusejp_20_:
{
lean_object* v___x_22_; 
v___x_22_ = lean_apply_2(v_toPure_19_, lean_box(0), v___x_21_);
return v___x_22_;
}
}
}
v___jp_28_:
{
lean_object* v___x_30_; 
v___x_30_ = l_Lean_Syntax_getTailPos_x3f(v_s_11_, v___x_27_);
if (lean_obj_tag(v___x_30_) == 0)
{
lean_object* v___x_31_; lean_object* v___x_32_; 
v___x_31_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__3, &l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__3_once, _init_l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__3);
v___x_32_ = l_panic___redArg(v___x_26_, v___x_31_);
v___y_13_ = v___y_29_;
v___y_14_ = v___x_32_;
goto v___jp_12_;
}
else
{
lean_object* v_val_33_; 
v_val_33_ = lean_ctor_get(v___x_30_, 0);
lean_inc(v_val_33_);
lean_dec_ref_known(v___x_30_, 1);
v___y_13_ = v___y_29_;
v___y_14_ = v_val_33_;
goto v___jp_12_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___boxed(lean_object* v_inst_38_, lean_object* v_s_39_){
_start:
{
lean_object* v_res_40_; 
v_res_40_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg(v_inst_38_, v_s_39_);
lean_dec(v_s_39_);
return v_res_40_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange(lean_object* v_m_41_, lean_object* v_inst_42_, lean_object* v_inst_43_, lean_object* v_s_44_){
_start:
{
lean_object* v___x_45_; 
v___x_45_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg(v_inst_42_, v_s_44_);
return v___x_45_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___boxed(lean_object* v_m_46_, lean_object* v_inst_47_, lean_object* v_inst_48_, lean_object* v_s_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange(v_m_46_, v_inst_47_, v_inst_48_, v_s_49_);
lean_dec(v_s_49_);
lean_dec(v_inst_48_);
return v_res_50_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_51_ = lean_box(0);
v___x_52_ = l_unsafeCast___redArg(v___x_51_);
return v___x_52_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg___lam__0(lean_object* v_env_54_, lean_object* v_contents_55_, lean_object* v_p_56_, lean_object* v_ictx_57_, lean_object* v_inst_58_, lean_object* v_inst_59_, lean_object* v_toPure_60_, lean_object* v_____do__lift_61_){
_start:
{
lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v_s_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; uint8_t v___x_71_; 
v___x_62_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg___lam__0___closed__0, &l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg___lam__0___closed__0_once, _init_l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg___lam__0___closed__0);
v___x_63_ = lean_box(0);
lean_inc_ref(v_env_54_);
v___x_64_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_64_, 0, v_env_54_);
lean_ctor_set(v___x_64_, 1, v_____do__lift_61_);
lean_ctor_set(v___x_64_, 2, v___x_62_);
lean_ctor_set(v___x_64_, 3, v___x_63_);
v___x_65_ = l_Lean_Parser_getTokenTable(v_env_54_);
v___x_66_ = l_Lean_Parser_mkParserState(v_contents_55_);
lean_inc_ref(v_ictx_57_);
v_s_67_ = l_Lean_Parser_ParserFn_run(v_p_56_, v_ictx_57_, v___x_64_, v___x_65_, v___x_66_);
lean_inc_ref(v_s_67_);
v___x_68_ = l_Lean_Parser_ParserState_allErrors(v_s_67_);
v___x_69_ = lean_array_get_size(v___x_68_);
lean_dec_ref(v___x_68_);
v___x_70_ = lean_unsigned_to_nat(0u);
v___x_71_ = lean_nat_dec_eq(v___x_69_, v___x_70_);
if (v___x_71_ == 0)
{
lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; 
lean_dec(v_toPure_60_);
v___x_72_ = l_Lean_Parser_ParserState_toErrorMsg(v_ictx_57_, v_s_67_);
v___x_73_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_73_, 0, v___x_72_);
v___x_74_ = l_Lean_MessageData_ofFormat(v___x_73_);
v___x_75_ = l_Lean_throwError___redArg(v_inst_58_, v_inst_59_, v___x_74_);
return v___x_75_;
}
else
{
lean_object* v_stxStack_76_; lean_object* v_pos_77_; uint8_t v___x_78_; 
v_stxStack_76_ = lean_ctor_get(v_s_67_, 0);
lean_inc_ref(v_stxStack_76_);
v_pos_77_ = lean_ctor_get(v_s_67_, 2);
lean_inc(v_pos_77_);
v___x_78_ = l_Lean_Parser_InputContext_atEnd(v_ictx_57_, v_pos_77_);
lean_dec(v_pos_77_);
if (v___x_78_ == 0)
{
lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; 
lean_dec_ref(v_stxStack_76_);
lean_dec(v_toPure_60_);
v___x_79_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg___lam__0___closed__1));
v___x_80_ = l_Lean_Parser_ParserState_mkError(v_s_67_, v___x_79_);
v___x_81_ = l_Lean_Parser_ParserState_toErrorMsg(v_ictx_57_, v___x_80_);
v___x_82_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_82_, 0, v___x_81_);
v___x_83_ = l_Lean_MessageData_ofFormat(v___x_82_);
v___x_84_ = l_Lean_throwError___redArg(v_inst_58_, v_inst_59_, v___x_83_);
return v___x_84_;
}
else
{
lean_object* v___x_85_; lean_object* v___x_86_; 
lean_dec_ref(v_s_67_);
lean_dec_ref(v_inst_59_);
lean_dec_ref(v_inst_58_);
lean_dec_ref(v_ictx_57_);
v___x_85_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_76_);
lean_dec_ref(v_stxStack_76_);
v___x_86_ = lean_apply_2(v_toPure_60_, lean_box(0), v___x_85_);
return v___x_86_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg___lam__0___boxed(lean_object* v_env_87_, lean_object* v_contents_88_, lean_object* v_p_89_, lean_object* v_ictx_90_, lean_object* v_inst_91_, lean_object* v_inst_92_, lean_object* v_toPure_93_, lean_object* v_____do__lift_94_){
_start:
{
lean_object* v_res_95_; 
v_res_95_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg___lam__0(v_env_87_, v_contents_88_, v_p_89_, v_ictx_90_, v_inst_91_, v_inst_92_, v_toPure_93_, v_____do__lift_94_);
lean_dec_ref(v_contents_88_);
return v_res_95_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg___lam__1(lean_object* v_contents_96_, lean_object* v_env_97_, lean_object* v_p_98_, lean_object* v_inst_99_, lean_object* v_inst_100_, lean_object* v_toPure_101_, lean_object* v_toBind_102_, lean_object* v_inst_103_, lean_object* v_____do__lift_104_){
_start:
{
uint8_t v___x_105_; lean_object* v___x_106_; lean_object* v_ictx_107_; lean_object* v___f_108_; lean_object* v___x_109_; 
v___x_105_ = 1;
v___x_106_ = lean_string_utf8_byte_size(v_contents_96_);
lean_inc_ref(v_contents_96_);
v_ictx_107_ = l_Lean_Parser_mkInputContext___redArg(v_contents_96_, v_____do__lift_104_, v___x_105_, v___x_106_);
v___f_108_ = lean_alloc_closure((void*)(l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg___lam__0___boxed), 8, 7);
lean_closure_set(v___f_108_, 0, v_env_97_);
lean_closure_set(v___f_108_, 1, v_contents_96_);
lean_closure_set(v___f_108_, 2, v_p_98_);
lean_closure_set(v___f_108_, 3, v_ictx_107_);
lean_closure_set(v___f_108_, 4, v_inst_99_);
lean_closure_set(v___f_108_, 5, v_inst_100_);
lean_closure_set(v___f_108_, 6, v_toPure_101_);
v___x_109_ = lean_apply_4(v_toBind_102_, lean_box(0), lean_box(0), v_inst_103_, v___f_108_);
return v___x_109_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg___lam__2(lean_object* v_inst_110_, lean_object* v_contents_111_, lean_object* v_p_112_, lean_object* v_inst_113_, lean_object* v_inst_114_, lean_object* v_toPure_115_, lean_object* v_toBind_116_, lean_object* v_inst_117_, lean_object* v_env_118_){
_start:
{
lean_object* v_getFileName_119_; lean_object* v___f_120_; lean_object* v___x_121_; 
v_getFileName_119_ = lean_ctor_get(v_inst_110_, 2);
lean_inc(v_getFileName_119_);
lean_dec_ref(v_inst_110_);
lean_inc(v_toBind_116_);
v___f_120_ = lean_alloc_closure((void*)(l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg___lam__1), 9, 8);
lean_closure_set(v___f_120_, 0, v_contents_111_);
lean_closure_set(v___f_120_, 1, v_env_118_);
lean_closure_set(v___f_120_, 2, v_p_112_);
lean_closure_set(v___f_120_, 3, v_inst_113_);
lean_closure_set(v___f_120_, 4, v_inst_114_);
lean_closure_set(v___f_120_, 5, v_toPure_115_);
lean_closure_set(v___f_120_, 6, v_toBind_116_);
lean_closure_set(v___f_120_, 7, v_inst_117_);
v___x_121_ = lean_apply_4(v_toBind_116_, lean_box(0), lean_box(0), v_getFileName_119_, v___f_120_);
return v___x_121_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg(lean_object* v_inst_122_, lean_object* v_inst_123_, lean_object* v_inst_124_, lean_object* v_inst_125_, lean_object* v_inst_126_, lean_object* v_p_127_, lean_object* v_contents_128_){
_start:
{
lean_object* v_toApplicative_129_; lean_object* v_toBind_130_; lean_object* v_getEnv_131_; lean_object* v_toPure_132_; lean_object* v___f_133_; lean_object* v___x_134_; 
v_toApplicative_129_ = lean_ctor_get(v_inst_122_, 0);
v_toBind_130_ = lean_ctor_get(v_inst_122_, 1);
lean_inc_n(v_toBind_130_, 2);
v_getEnv_131_ = lean_ctor_get(v_inst_123_, 0);
lean_inc(v_getEnv_131_);
lean_dec_ref(v_inst_123_);
v_toPure_132_ = lean_ctor_get(v_toApplicative_129_, 1);
lean_inc(v_toPure_132_);
v___f_133_ = lean_alloc_closure((void*)(l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg___lam__2), 9, 8);
lean_closure_set(v___f_133_, 0, v_inst_125_);
lean_closure_set(v___f_133_, 1, v_contents_128_);
lean_closure_set(v___f_133_, 2, v_p_127_);
lean_closure_set(v___f_133_, 3, v_inst_122_);
lean_closure_set(v___f_133_, 4, v_inst_124_);
lean_closure_set(v___f_133_, 5, v_toPure_132_);
lean_closure_set(v___f_133_, 6, v_toBind_130_);
lean_closure_set(v___f_133_, 7, v_inst_126_);
v___x_134_ = lean_apply_4(v_toBind_130_, lean_box(0), lean_box(0), v_getEnv_131_, v___f_133_);
return v___x_134_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents(lean_object* v_m_135_, lean_object* v_inst_136_, lean_object* v_inst_137_, lean_object* v_inst_138_, lean_object* v_inst_139_, lean_object* v_inst_140_, lean_object* v_p_141_, lean_object* v_contents_142_){
_start:
{
lean_object* v___x_143_; 
v___x_143_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg(v_inst_136_, v_inst_137_, v_inst_138_, v_inst_139_, v_inst_140_, v_p_141_, v_contents_142_);
return v___x_143_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit___redArg___lam__0(lean_object* v_env_144_, lean_object* v_p_145_, lean_object* v_ictx_146_, lean_object* v_s_147_, lean_object* v_inst_148_, lean_object* v_inst_149_, lean_object* v_toPure_150_, lean_object* v_____do__lift_151_){
_start:
{
lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v_s_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; uint8_t v___x_160_; 
v___x_152_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg___lam__0___closed__0, &l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg___lam__0___closed__0_once, _init_l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg___lam__0___closed__0);
v___x_153_ = lean_box(0);
lean_inc_ref(v_env_144_);
v___x_154_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_154_, 0, v_env_144_);
lean_ctor_set(v___x_154_, 1, v_____do__lift_151_);
lean_ctor_set(v___x_154_, 2, v___x_152_);
lean_ctor_set(v___x_154_, 3, v___x_153_);
v___x_155_ = l_Lean_Parser_getTokenTable(v_env_144_);
lean_inc_ref(v_ictx_146_);
v_s_156_ = l_Lean_Parser_ParserFn_run(v_p_145_, v_ictx_146_, v___x_154_, v___x_155_, v_s_147_);
lean_inc_ref(v_s_156_);
v___x_157_ = l_Lean_Parser_ParserState_allErrors(v_s_156_);
v___x_158_ = lean_array_get_size(v___x_157_);
lean_dec_ref(v___x_157_);
v___x_159_ = lean_unsigned_to_nat(0u);
v___x_160_ = lean_nat_dec_eq(v___x_158_, v___x_159_);
if (v___x_160_ == 0)
{
lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; 
lean_dec(v_toPure_150_);
v___x_161_ = l_Lean_Parser_ParserState_toErrorMsg(v_ictx_146_, v_s_156_);
v___x_162_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_162_, 0, v___x_161_);
v___x_163_ = l_Lean_MessageData_ofFormat(v___x_162_);
v___x_164_ = l_Lean_throwError___redArg(v_inst_148_, v_inst_149_, v___x_163_);
return v___x_164_;
}
else
{
lean_object* v_stxStack_165_; lean_object* v_pos_166_; uint8_t v___x_167_; 
v_stxStack_165_ = lean_ctor_get(v_s_156_, 0);
lean_inc_ref(v_stxStack_165_);
v_pos_166_ = lean_ctor_get(v_s_156_, 2);
lean_inc(v_pos_166_);
v___x_167_ = l_Lean_Parser_InputContext_atEnd(v_ictx_146_, v_pos_166_);
lean_dec(v_pos_166_);
if (v___x_167_ == 0)
{
lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; 
lean_dec_ref(v_stxStack_165_);
lean_dec(v_toPure_150_);
v___x_168_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg___lam__0___closed__1));
v___x_169_ = l_Lean_Parser_ParserState_mkError(v_s_156_, v___x_168_);
v___x_170_ = l_Lean_Parser_ParserState_toErrorMsg(v_ictx_146_, v___x_169_);
v___x_171_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_171_, 0, v___x_170_);
v___x_172_ = l_Lean_MessageData_ofFormat(v___x_171_);
v___x_173_ = l_Lean_throwError___redArg(v_inst_148_, v_inst_149_, v___x_172_);
return v___x_173_;
}
else
{
lean_object* v___x_174_; lean_object* v___x_175_; 
lean_dec_ref(v_s_156_);
lean_dec_ref(v_inst_149_);
lean_dec_ref(v_inst_148_);
lean_dec_ref(v_ictx_146_);
v___x_174_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_165_);
lean_dec_ref(v_stxStack_165_);
v___x_175_ = lean_apply_2(v_toPure_150_, lean_box(0), v___x_174_);
return v___x_175_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit___redArg___lam__1(lean_object* v_source_176_, uint8_t v___x_177_, lean_object* v___y_178_, lean_object* v_start_179_, lean_object* v_env_180_, lean_object* v_p_181_, lean_object* v_inst_182_, lean_object* v_inst_183_, lean_object* v_toPure_184_, lean_object* v_toBind_185_, lean_object* v_inst_186_, lean_object* v_____do__lift_187_){
_start:
{
lean_object* v_ictx_188_; lean_object* v___x_189_; lean_object* v_s_190_; lean_object* v___f_191_; lean_object* v___x_192_; 
lean_inc_ref(v_source_176_);
v_ictx_188_ = l_Lean_Parser_mkInputContext___redArg(v_source_176_, v_____do__lift_187_, v___x_177_, v___y_178_);
v___x_189_ = l_Lean_Parser_mkParserState(v_source_176_);
lean_dec_ref(v_source_176_);
v_s_190_ = l_Lean_Parser_ParserState_setPos(v___x_189_, v_start_179_);
v___f_191_ = lean_alloc_closure((void*)(l_Lean_Doc_parseStrLit___redArg___lam__0), 8, 7);
lean_closure_set(v___f_191_, 0, v_env_180_);
lean_closure_set(v___f_191_, 1, v_p_181_);
lean_closure_set(v___f_191_, 2, v_ictx_188_);
lean_closure_set(v___f_191_, 3, v_s_190_);
lean_closure_set(v___f_191_, 4, v_inst_182_);
lean_closure_set(v___f_191_, 5, v_inst_183_);
lean_closure_set(v___f_191_, 6, v_toPure_184_);
v___x_192_ = lean_apply_4(v_toBind_185_, lean_box(0), lean_box(0), v_inst_186_, v___f_191_);
return v___x_192_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit___redArg___lam__1___boxed(lean_object* v_source_193_, lean_object* v___x_194_, lean_object* v___y_195_, lean_object* v_start_196_, lean_object* v_env_197_, lean_object* v_p_198_, lean_object* v_inst_199_, lean_object* v_inst_200_, lean_object* v_toPure_201_, lean_object* v_toBind_202_, lean_object* v_inst_203_, lean_object* v_____do__lift_204_){
_start:
{
uint8_t v___x_363__boxed_205_; lean_object* v_res_206_; 
v___x_363__boxed_205_ = lean_unbox(v___x_194_);
v_res_206_ = l_Lean_Doc_parseStrLit___redArg___lam__1(v_source_193_, v___x_363__boxed_205_, v___y_195_, v_start_196_, v_env_197_, v_p_198_, v_inst_199_, v_inst_200_, v_toPure_201_, v_toBind_202_, v_inst_203_, v_____do__lift_204_);
return v_res_206_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit___redArg___lam__2(lean_object* v_text_207_, lean_object* v_inst_208_, uint8_t v___x_209_, lean_object* v_env_210_, lean_object* v_p_211_, lean_object* v_inst_212_, lean_object* v_inst_213_, lean_object* v_toPure_214_, lean_object* v_toBind_215_, lean_object* v_inst_216_, lean_object* v_____x_217_){
_start:
{
lean_object* v_start_218_; lean_object* v_stop_219_; lean_object* v_source_220_; lean_object* v___y_222_; lean_object* v___x_227_; uint8_t v___x_228_; 
v_start_218_ = lean_ctor_get(v_____x_217_, 0);
lean_inc(v_start_218_);
v_stop_219_ = lean_ctor_get(v_____x_217_, 1);
lean_inc(v_stop_219_);
lean_dec_ref(v_____x_217_);
v_source_220_ = lean_ctor_get(v_text_207_, 0);
lean_inc_ref(v_source_220_);
lean_dec_ref(v_text_207_);
v___x_227_ = lean_string_utf8_byte_size(v_source_220_);
v___x_228_ = lean_nat_dec_le(v_stop_219_, v___x_227_);
if (v___x_228_ == 0)
{
lean_dec(v_stop_219_);
v___y_222_ = v___x_227_;
goto v___jp_221_;
}
else
{
v___y_222_ = v_stop_219_;
goto v___jp_221_;
}
v___jp_221_:
{
lean_object* v_getFileName_223_; lean_object* v___x_224_; lean_object* v___f_225_; lean_object* v___x_226_; 
v_getFileName_223_ = lean_ctor_get(v_inst_208_, 2);
lean_inc(v_getFileName_223_);
lean_dec_ref(v_inst_208_);
v___x_224_ = lean_box(v___x_209_);
lean_inc(v_toBind_215_);
v___f_225_ = lean_alloc_closure((void*)(l_Lean_Doc_parseStrLit___redArg___lam__1___boxed), 12, 11);
lean_closure_set(v___f_225_, 0, v_source_220_);
lean_closure_set(v___f_225_, 1, v___x_224_);
lean_closure_set(v___f_225_, 2, v___y_222_);
lean_closure_set(v___f_225_, 3, v_start_218_);
lean_closure_set(v___f_225_, 4, v_env_210_);
lean_closure_set(v___f_225_, 5, v_p_211_);
lean_closure_set(v___f_225_, 6, v_inst_212_);
lean_closure_set(v___f_225_, 7, v_inst_213_);
lean_closure_set(v___f_225_, 8, v_toPure_214_);
lean_closure_set(v___f_225_, 9, v_toBind_215_);
lean_closure_set(v___f_225_, 10, v_inst_216_);
v___x_226_ = lean_apply_4(v_toBind_215_, lean_box(0), lean_box(0), v_getFileName_223_, v___f_225_);
return v___x_226_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit___redArg___lam__2___boxed(lean_object* v_text_229_, lean_object* v_inst_230_, lean_object* v___x_231_, lean_object* v_env_232_, lean_object* v_p_233_, lean_object* v_inst_234_, lean_object* v_inst_235_, lean_object* v_toPure_236_, lean_object* v_toBind_237_, lean_object* v_inst_238_, lean_object* v_____x_239_){
_start:
{
uint8_t v___x_391__boxed_240_; lean_object* v_res_241_; 
v___x_391__boxed_240_ = lean_unbox(v___x_231_);
v_res_241_ = l_Lean_Doc_parseStrLit___redArg___lam__2(v_text_229_, v_inst_230_, v___x_391__boxed_240_, v_env_232_, v_p_233_, v_inst_234_, v_inst_235_, v_toPure_236_, v_toBind_237_, v_inst_238_, v_____x_239_);
return v_res_241_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit___redArg___lam__3(lean_object* v_text_242_, lean_object* v_inst_243_, uint8_t v___x_244_, lean_object* v_p_245_, lean_object* v_inst_246_, lean_object* v_inst_247_, lean_object* v_toPure_248_, lean_object* v_toBind_249_, lean_object* v_inst_250_, lean_object* v_s_251_, lean_object* v_env_252_){
_start:
{
lean_object* v___x_253_; lean_object* v___f_254_; lean_object* v___x_255_; lean_object* v___x_256_; 
v___x_253_ = lean_box(v___x_244_);
lean_inc(v_toBind_249_);
lean_inc_ref(v_inst_246_);
v___f_254_ = lean_alloc_closure((void*)(l_Lean_Doc_parseStrLit___redArg___lam__2___boxed), 11, 10);
lean_closure_set(v___f_254_, 0, v_text_242_);
lean_closure_set(v___f_254_, 1, v_inst_243_);
lean_closure_set(v___f_254_, 2, v___x_253_);
lean_closure_set(v___f_254_, 3, v_env_252_);
lean_closure_set(v___f_254_, 4, v_p_245_);
lean_closure_set(v___f_254_, 5, v_inst_246_);
lean_closure_set(v___f_254_, 6, v_inst_247_);
lean_closure_set(v___f_254_, 7, v_toPure_248_);
lean_closure_set(v___f_254_, 8, v_toBind_249_);
lean_closure_set(v___f_254_, 9, v_inst_250_);
v___x_255_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg(v_inst_246_, v_s_251_);
v___x_256_ = lean_apply_4(v_toBind_249_, lean_box(0), lean_box(0), v___x_255_, v___f_254_);
return v___x_256_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit___redArg___lam__3___boxed(lean_object* v_text_257_, lean_object* v_inst_258_, lean_object* v___x_259_, lean_object* v_p_260_, lean_object* v_inst_261_, lean_object* v_inst_262_, lean_object* v_toPure_263_, lean_object* v_toBind_264_, lean_object* v_inst_265_, lean_object* v_s_266_, lean_object* v_env_267_){
_start:
{
uint8_t v___x_427__boxed_268_; lean_object* v_res_269_; 
v___x_427__boxed_268_ = lean_unbox(v___x_259_);
v_res_269_ = l_Lean_Doc_parseStrLit___redArg___lam__3(v_text_257_, v_inst_258_, v___x_427__boxed_268_, v_p_260_, v_inst_261_, v_inst_262_, v_toPure_263_, v_toBind_264_, v_inst_265_, v_s_266_, v_env_267_);
lean_dec(v_s_266_);
return v_res_269_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit___redArg___lam__4(lean_object* v_inst_270_, lean_object* v_inst_271_, uint8_t v___x_272_, lean_object* v_p_273_, lean_object* v_inst_274_, lean_object* v_inst_275_, lean_object* v_toPure_276_, lean_object* v_toBind_277_, lean_object* v_inst_278_, lean_object* v_s_279_, lean_object* v_text_280_){
_start:
{
lean_object* v_getEnv_281_; lean_object* v___x_282_; lean_object* v___f_283_; lean_object* v___x_284_; 
v_getEnv_281_ = lean_ctor_get(v_inst_270_, 0);
lean_inc(v_getEnv_281_);
lean_dec_ref(v_inst_270_);
v___x_282_ = lean_box(v___x_272_);
lean_inc(v_toBind_277_);
v___f_283_ = lean_alloc_closure((void*)(l_Lean_Doc_parseStrLit___redArg___lam__3___boxed), 11, 10);
lean_closure_set(v___f_283_, 0, v_text_280_);
lean_closure_set(v___f_283_, 1, v_inst_271_);
lean_closure_set(v___f_283_, 2, v___x_282_);
lean_closure_set(v___f_283_, 3, v_p_273_);
lean_closure_set(v___f_283_, 4, v_inst_274_);
lean_closure_set(v___f_283_, 5, v_inst_275_);
lean_closure_set(v___f_283_, 6, v_toPure_276_);
lean_closure_set(v___f_283_, 7, v_toBind_277_);
lean_closure_set(v___f_283_, 8, v_inst_278_);
lean_closure_set(v___f_283_, 9, v_s_279_);
v___x_284_ = lean_apply_4(v_toBind_277_, lean_box(0), lean_box(0), v_getEnv_281_, v___f_283_);
return v___x_284_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit___redArg___lam__4___boxed(lean_object* v_inst_285_, lean_object* v_inst_286_, lean_object* v___x_287_, lean_object* v_p_288_, lean_object* v_inst_289_, lean_object* v_inst_290_, lean_object* v_toPure_291_, lean_object* v_toBind_292_, lean_object* v_inst_293_, lean_object* v_s_294_, lean_object* v_text_295_){
_start:
{
uint8_t v___x_451__boxed_296_; lean_object* v_res_297_; 
v___x_451__boxed_296_ = lean_unbox(v___x_287_);
v_res_297_ = l_Lean_Doc_parseStrLit___redArg___lam__4(v_inst_285_, v_inst_286_, v___x_451__boxed_296_, v_p_288_, v_inst_289_, v_inst_290_, v_toPure_291_, v_toBind_292_, v_inst_293_, v_s_294_, v_text_295_);
return v_res_297_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit___redArg(lean_object* v_inst_298_, lean_object* v_inst_299_, lean_object* v_inst_300_, lean_object* v_inst_301_, lean_object* v_inst_302_, lean_object* v_inst_303_, lean_object* v_p_304_, lean_object* v_s_305_){
_start:
{
uint8_t v___x_306_; uint8_t v___y_308_; lean_object* v___x_317_; 
v___x_306_ = 1;
v___x_317_ = l_Lean_Syntax_getPos_x3f(v_s_305_, v___x_306_);
if (lean_obj_tag(v___x_317_) == 0)
{
v___y_308_ = v___x_306_;
goto v___jp_307_;
}
else
{
uint8_t v___x_318_; 
lean_dec_ref_known(v___x_317_, 1);
v___x_318_ = 0;
v___y_308_ = v___x_318_;
goto v___jp_307_;
}
v___jp_307_:
{
if (v___y_308_ == 0)
{
lean_object* v_toApplicative_309_; lean_object* v_toBind_310_; lean_object* v_toPure_311_; lean_object* v___x_312_; lean_object* v___f_313_; lean_object* v___x_314_; 
v_toApplicative_309_ = lean_ctor_get(v_inst_298_, 0);
v_toBind_310_ = lean_ctor_get(v_inst_298_, 1);
lean_inc_n(v_toBind_310_, 2);
v_toPure_311_ = lean_ctor_get(v_toApplicative_309_, 1);
lean_inc(v_toPure_311_);
v___x_312_ = lean_box(v___x_306_);
v___f_313_ = lean_alloc_closure((void*)(l_Lean_Doc_parseStrLit___redArg___lam__4___boxed), 11, 10);
lean_closure_set(v___f_313_, 0, v_inst_300_);
lean_closure_set(v___f_313_, 1, v_inst_302_);
lean_closure_set(v___f_313_, 2, v___x_312_);
lean_closure_set(v___f_313_, 3, v_p_304_);
lean_closure_set(v___f_313_, 4, v_inst_298_);
lean_closure_set(v___f_313_, 5, v_inst_301_);
lean_closure_set(v___f_313_, 6, v_toPure_311_);
lean_closure_set(v___f_313_, 7, v_toBind_310_);
lean_closure_set(v___f_313_, 8, v_inst_303_);
lean_closure_set(v___f_313_, 9, v_s_305_);
v___x_314_ = lean_apply_4(v_toBind_310_, lean_box(0), lean_box(0), v_inst_299_, v___f_313_);
return v___x_314_;
}
else
{
lean_object* v___x_315_; lean_object* v___x_316_; 
lean_dec(v_inst_299_);
v___x_315_ = l_Lean_TSyntax_getString(v_s_305_);
lean_dec(v_s_305_);
v___x_316_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg(v_inst_298_, v_inst_300_, v_inst_301_, v_inst_302_, v_inst_303_, v_p_304_, v___x_315_);
return v___x_316_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit(lean_object* v_m_319_, lean_object* v_inst_320_, lean_object* v_inst_321_, lean_object* v_inst_322_, lean_object* v_inst_323_, lean_object* v_inst_324_, lean_object* v_inst_325_, lean_object* v_p_326_, lean_object* v_s_327_){
_start:
{
lean_object* v___x_328_; 
v___x_328_ = l_Lean_Doc_parseStrLit___redArg(v_inst_320_, v_inst_321_, v_inst_322_, v_inst_323_, v_inst_324_, v_inst_325_, v_p_326_, v_s_327_);
return v___x_328_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_posIndex_spec__0___redArg(lean_object* v_str_329_, lean_object* v_a_330_){
_start:
{
lean_object* v_fst_331_; lean_object* v_snd_332_; lean_object* v___x_334_; uint8_t v_isShared_335_; uint8_t v_isSharedCheck_347_; 
v_fst_331_ = lean_ctor_get(v_a_330_, 0);
v_snd_332_ = lean_ctor_get(v_a_330_, 1);
v_isSharedCheck_347_ = !lean_is_exclusive(v_a_330_);
if (v_isSharedCheck_347_ == 0)
{
v___x_334_ = v_a_330_;
v_isShared_335_ = v_isSharedCheck_347_;
goto v_resetjp_333_;
}
else
{
lean_inc(v_snd_332_);
lean_inc(v_fst_331_);
lean_dec(v_a_330_);
v___x_334_ = lean_box(0);
v_isShared_335_ = v_isSharedCheck_347_;
goto v_resetjp_333_;
}
v_resetjp_333_:
{
lean_object* v___x_336_; uint8_t v___x_337_; 
v___x_336_ = lean_unsigned_to_nat(1u);
v___x_337_ = lean_nat_dec_le(v___x_336_, v_fst_331_);
if (v___x_337_ == 0)
{
lean_object* v___x_339_; 
if (v_isShared_335_ == 0)
{
v___x_339_ = v___x_334_;
goto v_reusejp_338_;
}
else
{
lean_object* v_reuseFailAlloc_340_; 
v_reuseFailAlloc_340_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_340_, 0, v_fst_331_);
lean_ctor_set(v_reuseFailAlloc_340_, 1, v_snd_332_);
v___x_339_ = v_reuseFailAlloc_340_;
goto v_reusejp_338_;
}
v_reusejp_338_:
{
return v___x_339_;
}
}
else
{
lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_344_; 
v___x_341_ = lean_string_utf8_prev(v_str_329_, v_fst_331_);
lean_dec(v_fst_331_);
v___x_342_ = lean_nat_add(v_snd_332_, v___x_336_);
lean_dec(v_snd_332_);
if (v_isShared_335_ == 0)
{
lean_ctor_set(v___x_334_, 1, v___x_342_);
lean_ctor_set(v___x_334_, 0, v___x_341_);
v___x_344_ = v___x_334_;
goto v_reusejp_343_;
}
else
{
lean_object* v_reuseFailAlloc_346_; 
v_reuseFailAlloc_346_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_346_, 0, v___x_341_);
lean_ctor_set(v_reuseFailAlloc_346_, 1, v___x_342_);
v___x_344_ = v_reuseFailAlloc_346_;
goto v_reusejp_343_;
}
v_reusejp_343_:
{
v_a_330_ = v___x_344_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_posIndex_spec__0___redArg___boxed(lean_object* v_str_348_, lean_object* v_a_349_){
_start:
{
lean_object* v_res_350_; 
v_res_350_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_posIndex_spec__0___redArg(v_str_348_, v_a_349_);
lean_dec_ref(v_str_348_);
return v_res_350_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_posIndex(lean_object* v_str_351_, lean_object* v_p_352_){
_start:
{
lean_object* v_n_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v_snd_356_; 
v_n_353_ = lean_unsigned_to_nat(0u);
v___x_354_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_354_, 0, v_p_352_);
lean_ctor_set(v___x_354_, 1, v_n_353_);
v___x_355_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_posIndex_spec__0___redArg(v_str_351_, v___x_354_);
v_snd_356_ = lean_ctor_get(v___x_355_, 1);
lean_inc(v_snd_356_);
lean_dec_ref(v___x_355_);
return v_snd_356_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_posIndex___boxed(lean_object* v_str_357_, lean_object* v_p_358_){
_start:
{
lean_object* v_res_359_; 
v_res_359_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_posIndex(v_str_357_, v_p_358_);
lean_dec_ref(v_str_357_);
return v_res_359_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_posIndex_spec__0(lean_object* v_str_360_, lean_object* v_inst_361_, lean_object* v_a_362_){
_start:
{
lean_object* v___x_363_; 
v___x_363_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_posIndex_spec__0___redArg(v_str_360_, v_a_362_);
return v___x_363_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_posIndex_spec__0___boxed(lean_object* v_str_364_, lean_object* v_inst_365_, lean_object* v_a_366_){
_start:
{
lean_object* v_res_367_; 
v_res_367_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_posIndex_spec__0(v_str_364_, v_inst_365_, v_a_366_);
lean_dec_ref(v_str_364_);
return v_res_367_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_nextn_spec__0___redArg(lean_object* v_str_368_, lean_object* v_p_369_, lean_object* v_j_370_, lean_object* v_a_371_){
_start:
{
lean_object* v_zero_372_; uint8_t v_isZero_373_; 
v_zero_372_ = lean_unsigned_to_nat(0u);
v_isZero_373_ = lean_nat_dec_eq(v_j_370_, v_zero_372_);
if (v_isZero_373_ == 1)
{
lean_dec(v_j_370_);
return v_a_371_;
}
else
{
lean_object* v_one_374_; lean_object* v_n_375_; lean_object* v___x_376_; 
lean_dec(v_a_371_);
v_one_374_ = lean_unsigned_to_nat(1u);
v_n_375_ = lean_nat_sub(v_j_370_, v_one_374_);
lean_dec(v_j_370_);
v___x_376_ = lean_string_utf8_next(v_str_368_, v_p_369_);
v_j_370_ = v_n_375_;
v_a_371_ = v___x_376_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_nextn_spec__0___redArg___boxed(lean_object* v_str_378_, lean_object* v_p_379_, lean_object* v_j_380_, lean_object* v_a_381_){
_start:
{
lean_object* v_res_382_; 
v_res_382_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_nextn_spec__0___redArg(v_str_378_, v_p_379_, v_j_380_, v_a_381_);
lean_dec(v_p_379_);
lean_dec_ref(v_str_378_);
return v_res_382_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_nextn(lean_object* v_str_383_, lean_object* v_n_384_, lean_object* v_p_385_){
_start:
{
lean_object* v___x_386_; 
lean_inc(v_p_385_);
v___x_386_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_nextn_spec__0___redArg(v_str_383_, v_p_385_, v_n_384_, v_p_385_);
lean_dec(v_p_385_);
return v___x_386_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_nextn___boxed(lean_object* v_str_387_, lean_object* v_n_388_, lean_object* v_p_389_){
_start:
{
lean_object* v_res_390_; 
v_res_390_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_nextn(v_str_387_, v_n_388_, v_p_389_);
lean_dec_ref(v_str_387_);
return v_res_390_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_nextn_spec__0(lean_object* v_str_391_, lean_object* v_p_392_, lean_object* v_n_393_, lean_object* v_j_394_, lean_object* v_a_395_, lean_object* v_a_396_){
_start:
{
lean_object* v___x_397_; 
v___x_397_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_nextn_spec__0___redArg(v_str_391_, v_p_392_, v_j_394_, v_a_396_);
return v___x_397_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_nextn_spec__0___boxed(lean_object* v_str_398_, lean_object* v_p_399_, lean_object* v_n_400_, lean_object* v_j_401_, lean_object* v_a_402_, lean_object* v_a_403_){
_start:
{
lean_object* v_res_404_; 
v_res_404_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_nextn_spec__0(v_str_398_, v_p_399_, v_n_400_, v_j_401_, v_a_402_, v_a_403_);
lean_dec(v_n_400_);
lean_dec(v_p_399_);
lean_dec_ref(v_str_398_);
return v_res_404_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_reposition(lean_object* v_text_405_, lean_object* v_posOfStr_406_, lean_object* v_str_407_, lean_object* v_posInStr_408_){
_start:
{
lean_object* v_source_409_; lean_object* v___x_410_; lean_object* v___x_411_; 
v_source_409_ = lean_ctor_get(v_text_405_, 0);
v___x_410_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_posIndex(v_str_407_, v_posInStr_408_);
lean_inc(v_posOfStr_406_);
v___x_411_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_nextn_spec__0___redArg(v_source_409_, v_posOfStr_406_, v___x_410_, v_posOfStr_406_);
lean_dec(v_posOfStr_406_);
return v___x_411_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_reposition___boxed(lean_object* v_text_412_, lean_object* v_posOfStr_413_, lean_object* v_str_414_, lean_object* v_posInStr_415_){
_start:
{
lean_object* v_res_416_; 
v_res_416_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_reposition(v_text_412_, v_posOfStr_413_, v_str_414_, v_posInStr_415_);
lean_dec_ref(v_str_414_);
lean_dec_ref(v_text_412_);
return v_res_416_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionInfo(lean_object* v_text_417_, lean_object* v_posOfStr_418_, lean_object* v_str_419_, lean_object* v_a_420_){
_start:
{
switch(lean_obj_tag(v_a_420_))
{
case 0:
{
lean_object* v_pos_421_; lean_object* v_endPos_422_; lean_object* v___x_423_; lean_object* v___x_424_; uint8_t v___x_425_; lean_object* v___x_426_; 
v_pos_421_ = lean_ctor_get(v_a_420_, 1);
lean_inc(v_pos_421_);
v_endPos_422_ = lean_ctor_get(v_a_420_, 3);
lean_inc(v_endPos_422_);
lean_dec_ref_known(v_a_420_, 4);
lean_inc(v_posOfStr_418_);
v___x_423_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_reposition(v_text_417_, v_posOfStr_418_, v_str_419_, v_pos_421_);
v___x_424_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_reposition(v_text_417_, v_posOfStr_418_, v_str_419_, v_endPos_422_);
v___x_425_ = 1;
v___x_426_ = lean_alloc_ctor(1, 2, 1);
lean_ctor_set(v___x_426_, 0, v___x_423_);
lean_ctor_set(v___x_426_, 1, v___x_424_);
lean_ctor_set_uint8(v___x_426_, sizeof(void*)*2, v___x_425_);
return v___x_426_;
}
case 1:
{
lean_object* v_pos_427_; lean_object* v_endPos_428_; uint8_t v_canonical_429_; lean_object* v___x_431_; uint8_t v_isShared_432_; uint8_t v_isSharedCheck_438_; 
v_pos_427_ = lean_ctor_get(v_a_420_, 0);
v_endPos_428_ = lean_ctor_get(v_a_420_, 1);
v_canonical_429_ = lean_ctor_get_uint8(v_a_420_, sizeof(void*)*2);
v_isSharedCheck_438_ = !lean_is_exclusive(v_a_420_);
if (v_isSharedCheck_438_ == 0)
{
v___x_431_ = v_a_420_;
v_isShared_432_ = v_isSharedCheck_438_;
goto v_resetjp_430_;
}
else
{
lean_inc(v_endPos_428_);
lean_inc(v_pos_427_);
lean_dec(v_a_420_);
v___x_431_ = lean_box(0);
v_isShared_432_ = v_isSharedCheck_438_;
goto v_resetjp_430_;
}
v_resetjp_430_:
{
lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_436_; 
lean_inc(v_posOfStr_418_);
v___x_433_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_reposition(v_text_417_, v_posOfStr_418_, v_str_419_, v_pos_427_);
v___x_434_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_reposition(v_text_417_, v_posOfStr_418_, v_str_419_, v_endPos_428_);
if (v_isShared_432_ == 0)
{
lean_ctor_set(v___x_431_, 1, v___x_434_);
lean_ctor_set(v___x_431_, 0, v___x_433_);
v___x_436_ = v___x_431_;
goto v_reusejp_435_;
}
else
{
lean_object* v_reuseFailAlloc_437_; 
v_reuseFailAlloc_437_ = lean_alloc_ctor(1, 2, 1);
lean_ctor_set(v_reuseFailAlloc_437_, 0, v___x_433_);
lean_ctor_set(v_reuseFailAlloc_437_, 1, v___x_434_);
lean_ctor_set_uint8(v_reuseFailAlloc_437_, sizeof(void*)*2, v_canonical_429_);
v___x_436_ = v_reuseFailAlloc_437_;
goto v_reusejp_435_;
}
v_reusejp_435_:
{
return v___x_436_;
}
}
}
default: 
{
lean_dec(v_posOfStr_418_);
return v_a_420_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionInfo___boxed(lean_object* v_text_439_, lean_object* v_posOfStr_440_, lean_object* v_str_441_, lean_object* v_a_442_){
_start:
{
lean_object* v_res_443_; 
v_res_443_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionInfo(v_text_439_, v_posOfStr_440_, v_str_441_, v_a_442_);
lean_dec_ref(v_str_441_);
lean_dec_ref(v_text_439_);
return v_res_443_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionSyntax(lean_object* v_text_444_, lean_object* v_posOfStr_445_, lean_object* v_str_446_, lean_object* v_a_447_){
_start:
{
switch(lean_obj_tag(v_a_447_))
{
case 0:
{
lean_dec(v_posOfStr_445_);
return v_a_447_;
}
case 1:
{
lean_object* v_info_448_; lean_object* v_kind_449_; lean_object* v_args_450_; lean_object* v___x_452_; uint8_t v_isShared_453_; uint8_t v_isSharedCheck_463_; 
v_info_448_ = lean_ctor_get(v_a_447_, 0);
v_kind_449_ = lean_ctor_get(v_a_447_, 1);
v_args_450_ = lean_ctor_get(v_a_447_, 2);
v_isSharedCheck_463_ = !lean_is_exclusive(v_a_447_);
if (v_isSharedCheck_463_ == 0)
{
v___x_452_ = v_a_447_;
v_isShared_453_ = v_isSharedCheck_463_;
goto v_resetjp_451_;
}
else
{
lean_inc(v_args_450_);
lean_inc(v_kind_449_);
lean_inc(v_info_448_);
lean_dec(v_a_447_);
v___x_452_ = lean_box(0);
v_isShared_453_ = v_isSharedCheck_463_;
goto v_resetjp_451_;
}
v_resetjp_451_:
{
lean_object* v___x_454_; size_t v_sz_455_; size_t v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_461_; 
lean_inc(v_posOfStr_445_);
v___x_454_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionInfo(v_text_444_, v_posOfStr_445_, v_str_446_, v_info_448_);
v_sz_455_ = lean_array_size(v_args_450_);
v___x_456_ = ((size_t)0ULL);
v___x_457_ = l_unsafeCast___redArg(v_args_450_);
lean_dec_ref(v_args_450_);
v___x_458_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionSyntax_spec__0(v_text_444_, v_posOfStr_445_, v_str_446_, v_sz_455_, v___x_456_, v___x_457_);
v___x_459_ = l_unsafeCast___redArg(v___x_458_);
lean_dec_ref(v___x_458_);
if (v_isShared_453_ == 0)
{
lean_ctor_set(v___x_452_, 2, v___x_459_);
lean_ctor_set(v___x_452_, 0, v___x_454_);
v___x_461_ = v___x_452_;
goto v_reusejp_460_;
}
else
{
lean_object* v_reuseFailAlloc_462_; 
v_reuseFailAlloc_462_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_462_, 0, v___x_454_);
lean_ctor_set(v_reuseFailAlloc_462_, 1, v_kind_449_);
lean_ctor_set(v_reuseFailAlloc_462_, 2, v___x_459_);
v___x_461_ = v_reuseFailAlloc_462_;
goto v_reusejp_460_;
}
v_reusejp_460_:
{
return v___x_461_;
}
}
}
case 2:
{
lean_object* v_info_464_; lean_object* v_val_465_; lean_object* v___x_467_; uint8_t v_isShared_468_; uint8_t v_isSharedCheck_473_; 
v_info_464_ = lean_ctor_get(v_a_447_, 0);
v_val_465_ = lean_ctor_get(v_a_447_, 1);
v_isSharedCheck_473_ = !lean_is_exclusive(v_a_447_);
if (v_isSharedCheck_473_ == 0)
{
v___x_467_ = v_a_447_;
v_isShared_468_ = v_isSharedCheck_473_;
goto v_resetjp_466_;
}
else
{
lean_inc(v_val_465_);
lean_inc(v_info_464_);
lean_dec(v_a_447_);
v___x_467_ = lean_box(0);
v_isShared_468_ = v_isSharedCheck_473_;
goto v_resetjp_466_;
}
v_resetjp_466_:
{
lean_object* v___x_469_; lean_object* v___x_471_; 
v___x_469_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionInfo(v_text_444_, v_posOfStr_445_, v_str_446_, v_info_464_);
if (v_isShared_468_ == 0)
{
lean_ctor_set(v___x_467_, 0, v___x_469_);
v___x_471_ = v___x_467_;
goto v_reusejp_470_;
}
else
{
lean_object* v_reuseFailAlloc_472_; 
v_reuseFailAlloc_472_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_472_, 0, v___x_469_);
lean_ctor_set(v_reuseFailAlloc_472_, 1, v_val_465_);
v___x_471_ = v_reuseFailAlloc_472_;
goto v_reusejp_470_;
}
v_reusejp_470_:
{
return v___x_471_;
}
}
}
default: 
{
lean_object* v_info_474_; lean_object* v_rawVal_475_; lean_object* v_val_476_; lean_object* v_preresolved_477_; lean_object* v___x_479_; uint8_t v_isShared_480_; uint8_t v_isSharedCheck_485_; 
v_info_474_ = lean_ctor_get(v_a_447_, 0);
v_rawVal_475_ = lean_ctor_get(v_a_447_, 1);
v_val_476_ = lean_ctor_get(v_a_447_, 2);
v_preresolved_477_ = lean_ctor_get(v_a_447_, 3);
v_isSharedCheck_485_ = !lean_is_exclusive(v_a_447_);
if (v_isSharedCheck_485_ == 0)
{
v___x_479_ = v_a_447_;
v_isShared_480_ = v_isSharedCheck_485_;
goto v_resetjp_478_;
}
else
{
lean_inc(v_preresolved_477_);
lean_inc(v_val_476_);
lean_inc(v_rawVal_475_);
lean_inc(v_info_474_);
lean_dec(v_a_447_);
v___x_479_ = lean_box(0);
v_isShared_480_ = v_isSharedCheck_485_;
goto v_resetjp_478_;
}
v_resetjp_478_:
{
lean_object* v___x_481_; lean_object* v___x_483_; 
v___x_481_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionInfo(v_text_444_, v_posOfStr_445_, v_str_446_, v_info_474_);
if (v_isShared_480_ == 0)
{
lean_ctor_set(v___x_479_, 0, v___x_481_);
v___x_483_ = v___x_479_;
goto v_reusejp_482_;
}
else
{
lean_object* v_reuseFailAlloc_484_; 
v_reuseFailAlloc_484_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v_reuseFailAlloc_484_, 0, v___x_481_);
lean_ctor_set(v_reuseFailAlloc_484_, 1, v_rawVal_475_);
lean_ctor_set(v_reuseFailAlloc_484_, 2, v_val_476_);
lean_ctor_set(v_reuseFailAlloc_484_, 3, v_preresolved_477_);
v___x_483_ = v_reuseFailAlloc_484_;
goto v_reusejp_482_;
}
v_reusejp_482_:
{
return v___x_483_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionSyntax_spec__0(lean_object* v_text_486_, lean_object* v_posOfStr_487_, lean_object* v_str_488_, size_t v_sz_489_, size_t v_i_490_, lean_object* v_bs_491_){
_start:
{
uint8_t v___x_492_; 
v___x_492_ = lean_usize_dec_lt(v_i_490_, v_sz_489_);
if (v___x_492_ == 0)
{
lean_object* v___x_493_; 
lean_dec(v_posOfStr_487_);
v___x_493_ = l_unsafeCast___redArg(v_bs_491_);
lean_dec_ref(v_bs_491_);
return v___x_493_;
}
else
{
lean_object* v_v_494_; lean_object* v___x_495_; lean_object* v_bs_x27_496_; lean_object* v___x_497_; lean_object* v___x_498_; size_t v___x_499_; size_t v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; 
v_v_494_ = lean_array_uget(v_bs_491_, v_i_490_);
v___x_495_ = lean_unsigned_to_nat(0u);
v_bs_x27_496_ = lean_array_uset(v_bs_491_, v_i_490_, v___x_495_);
v___x_497_ = l_unsafeCast___redArg(v_v_494_);
lean_dec(v_v_494_);
lean_inc(v_posOfStr_487_);
v___x_498_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionSyntax(v_text_486_, v_posOfStr_487_, v_str_488_, v___x_497_);
v___x_499_ = ((size_t)1ULL);
v___x_500_ = lean_usize_add(v_i_490_, v___x_499_);
v___x_501_ = l_unsafeCast___redArg(v___x_498_);
lean_dec(v___x_498_);
v___x_502_ = lean_array_uset(v_bs_x27_496_, v_i_490_, v___x_501_);
v_i_490_ = v___x_500_;
v_bs_491_ = v___x_502_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionSyntax_spec__0___boxed(lean_object* v_text_504_, lean_object* v_posOfStr_505_, lean_object* v_str_506_, lean_object* v_sz_507_, lean_object* v_i_508_, lean_object* v_bs_509_){
_start:
{
size_t v_sz_boxed_510_; size_t v_i_boxed_511_; lean_object* v_res_512_; 
v_sz_boxed_510_ = lean_unbox_usize(v_sz_507_);
lean_dec(v_sz_507_);
v_i_boxed_511_ = lean_unbox_usize(v_i_508_);
lean_dec(v_i_508_);
v_res_512_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionSyntax_spec__0(v_text_504_, v_posOfStr_505_, v_str_506_, v_sz_boxed_510_, v_i_boxed_511_, v_bs_509_);
lean_dec_ref(v_str_506_);
lean_dec_ref(v_text_504_);
return v_res_512_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionSyntax___boxed(lean_object* v_text_513_, lean_object* v_posOfStr_514_, lean_object* v_str_515_, lean_object* v_a_516_){
_start:
{
lean_object* v_res_517_; 
v_res_517_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionSyntax(v_text_513_, v_posOfStr_514_, v_str_515_, v_a_516_);
lean_dec_ref(v_str_515_);
lean_dec_ref(v_text_513_);
return v_res_517_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionSyntax_match__1_splitter___redArg(lean_object* v_x_518_, lean_object* v_h__1_519_, lean_object* v_h__2_520_, lean_object* v_h__3_521_, lean_object* v_h__4_522_){
_start:
{
switch(lean_obj_tag(v_x_518_))
{
case 0:
{
lean_object* v___x_523_; lean_object* v___x_524_; 
lean_dec(v_h__3_521_);
lean_dec(v_h__2_520_);
lean_dec(v_h__1_519_);
v___x_523_ = lean_box(0);
v___x_524_ = lean_apply_1(v_h__4_522_, v___x_523_);
return v___x_524_;
}
case 1:
{
lean_object* v_info_525_; lean_object* v_kind_526_; lean_object* v_args_527_; lean_object* v___x_528_; 
lean_dec(v_h__4_522_);
lean_dec(v_h__3_521_);
lean_dec(v_h__2_520_);
v_info_525_ = lean_ctor_get(v_x_518_, 0);
lean_inc(v_info_525_);
v_kind_526_ = lean_ctor_get(v_x_518_, 1);
lean_inc(v_kind_526_);
v_args_527_ = lean_ctor_get(v_x_518_, 2);
lean_inc_ref(v_args_527_);
lean_dec_ref_known(v_x_518_, 3);
v___x_528_ = lean_apply_3(v_h__1_519_, v_info_525_, v_kind_526_, v_args_527_);
return v___x_528_;
}
case 2:
{
lean_object* v_info_529_; lean_object* v_val_530_; lean_object* v___x_531_; 
lean_dec(v_h__4_522_);
lean_dec(v_h__2_520_);
lean_dec(v_h__1_519_);
v_info_529_ = lean_ctor_get(v_x_518_, 0);
lean_inc(v_info_529_);
v_val_530_ = lean_ctor_get(v_x_518_, 1);
lean_inc_ref(v_val_530_);
lean_dec_ref_known(v_x_518_, 2);
v___x_531_ = lean_apply_2(v_h__3_521_, v_info_529_, v_val_530_);
return v___x_531_;
}
default: 
{
lean_object* v_info_532_; lean_object* v_rawVal_533_; lean_object* v_val_534_; lean_object* v_preresolved_535_; lean_object* v___x_536_; 
lean_dec(v_h__4_522_);
lean_dec(v_h__3_521_);
lean_dec(v_h__1_519_);
v_info_532_ = lean_ctor_get(v_x_518_, 0);
lean_inc(v_info_532_);
v_rawVal_533_ = lean_ctor_get(v_x_518_, 1);
lean_inc_ref(v_rawVal_533_);
v_val_534_ = lean_ctor_get(v_x_518_, 2);
lean_inc(v_val_534_);
v_preresolved_535_ = lean_ctor_get(v_x_518_, 3);
lean_inc(v_preresolved_535_);
lean_dec_ref_known(v_x_518_, 4);
v___x_536_ = lean_apply_4(v_h__2_520_, v_info_532_, v_rawVal_533_, v_val_534_, v_preresolved_535_);
return v___x_536_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionSyntax_match__1_splitter(lean_object* v_motive_537_, lean_object* v_x_538_, lean_object* v_h__1_539_, lean_object* v_h__2_540_, lean_object* v_h__3_541_, lean_object* v_h__4_542_){
_start:
{
switch(lean_obj_tag(v_x_538_))
{
case 0:
{
lean_object* v___x_543_; lean_object* v___x_544_; 
lean_dec(v_h__3_541_);
lean_dec(v_h__2_540_);
lean_dec(v_h__1_539_);
v___x_543_ = lean_box(0);
v___x_544_ = lean_apply_1(v_h__4_542_, v___x_543_);
return v___x_544_;
}
case 1:
{
lean_object* v_info_545_; lean_object* v_kind_546_; lean_object* v_args_547_; lean_object* v___x_548_; 
lean_dec(v_h__4_542_);
lean_dec(v_h__3_541_);
lean_dec(v_h__2_540_);
v_info_545_ = lean_ctor_get(v_x_538_, 0);
lean_inc(v_info_545_);
v_kind_546_ = lean_ctor_get(v_x_538_, 1);
lean_inc(v_kind_546_);
v_args_547_ = lean_ctor_get(v_x_538_, 2);
lean_inc_ref(v_args_547_);
lean_dec_ref_known(v_x_538_, 3);
v___x_548_ = lean_apply_3(v_h__1_539_, v_info_545_, v_kind_546_, v_args_547_);
return v___x_548_;
}
case 2:
{
lean_object* v_info_549_; lean_object* v_val_550_; lean_object* v___x_551_; 
lean_dec(v_h__4_542_);
lean_dec(v_h__2_540_);
lean_dec(v_h__1_539_);
v_info_549_ = lean_ctor_get(v_x_538_, 0);
lean_inc(v_info_549_);
v_val_550_ = lean_ctor_get(v_x_538_, 1);
lean_inc_ref(v_val_550_);
lean_dec_ref_known(v_x_538_, 2);
v___x_551_ = lean_apply_2(v_h__3_541_, v_info_549_, v_val_550_);
return v___x_551_;
}
default: 
{
lean_object* v_info_552_; lean_object* v_rawVal_553_; lean_object* v_val_554_; lean_object* v_preresolved_555_; lean_object* v___x_556_; 
lean_dec(v_h__4_542_);
lean_dec(v_h__3_541_);
lean_dec(v_h__1_539_);
v_info_552_ = lean_ctor_get(v_x_538_, 0);
lean_inc(v_info_552_);
v_rawVal_553_ = lean_ctor_get(v_x_538_, 1);
lean_inc_ref(v_rawVal_553_);
v_val_554_ = lean_ctor_get(v_x_538_, 2);
lean_inc(v_val_554_);
v_preresolved_555_ = lean_ctor_get(v_x_538_, 3);
lean_inc(v_preresolved_555_);
lean_dec_ref_known(v_x_538_, 4);
v___x_556_ = lean_apply_4(v_h__2_540_, v_info_552_, v_rawVal_553_, v_val_554_, v_preresolved_555_);
return v___x_556_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Array_map__unattach_match__1_splitter___redArg(lean_object* v_x_557_, lean_object* v_h__1_558_){
_start:
{
lean_object* v___x_559_; 
v___x_559_ = lean_apply_2(v_h__1_558_, v_x_557_, lean_box(0));
return v___x_559_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Array_map__unattach_match__1_splitter(lean_object* v_00_u03b1_560_, lean_object* v_P_561_, lean_object* v_motive_562_, lean_object* v_x_563_, lean_object* v_h__1_564_){
_start:
{
lean_object* v___x_565_; 
v___x_565_ = lean_apply_2(v_h__1_564_, v_x_563_, lean_box(0));
return v___x_565_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__0(lean_object* v_toPure_566_, lean_object* v_____do__lift_567_){
_start:
{
if (lean_obj_tag(v_____do__lift_567_) == 0)
{
lean_object* v_a_568_; lean_object* v___x_570_; uint8_t v_isShared_571_; uint8_t v_isSharedCheck_576_; 
v_a_568_ = lean_ctor_get(v_____do__lift_567_, 0);
v_isSharedCheck_576_ = !lean_is_exclusive(v_____do__lift_567_);
if (v_isSharedCheck_576_ == 0)
{
v___x_570_ = v_____do__lift_567_;
v_isShared_571_ = v_isSharedCheck_576_;
goto v_resetjp_569_;
}
else
{
lean_inc(v_a_568_);
lean_dec(v_____do__lift_567_);
v___x_570_ = lean_box(0);
v_isShared_571_ = v_isSharedCheck_576_;
goto v_resetjp_569_;
}
v_resetjp_569_:
{
lean_object* v___x_573_; 
if (v_isShared_571_ == 0)
{
lean_ctor_set_tag(v___x_570_, 1);
v___x_573_ = v___x_570_;
goto v_reusejp_572_;
}
else
{
lean_object* v_reuseFailAlloc_575_; 
v_reuseFailAlloc_575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_575_, 0, v_a_568_);
v___x_573_ = v_reuseFailAlloc_575_;
goto v_reusejp_572_;
}
v_reusejp_572_:
{
lean_object* v___x_574_; 
v___x_574_ = lean_apply_2(v_toPure_566_, lean_box(0), v___x_573_);
return v___x_574_;
}
}
}
else
{
lean_object* v_a_577_; lean_object* v___x_579_; uint8_t v_isShared_580_; uint8_t v_isSharedCheck_585_; 
v_a_577_ = lean_ctor_get(v_____do__lift_567_, 0);
v_isSharedCheck_585_ = !lean_is_exclusive(v_____do__lift_567_);
if (v_isSharedCheck_585_ == 0)
{
v___x_579_ = v_____do__lift_567_;
v_isShared_580_ = v_isSharedCheck_585_;
goto v_resetjp_578_;
}
else
{
lean_inc(v_a_577_);
lean_dec(v_____do__lift_567_);
v___x_579_ = lean_box(0);
v_isShared_580_ = v_isSharedCheck_585_;
goto v_resetjp_578_;
}
v_resetjp_578_:
{
lean_object* v___x_582_; 
if (v_isShared_580_ == 0)
{
lean_ctor_set_tag(v___x_579_, 0);
v___x_582_ = v___x_579_;
goto v_reusejp_581_;
}
else
{
lean_object* v_reuseFailAlloc_584_; 
v_reuseFailAlloc_584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_584_, 0, v_a_577_);
v___x_582_ = v_reuseFailAlloc_584_;
goto v_reusejp_581_;
}
v_reusejp_581_:
{
lean_object* v___x_583_; 
v___x_583_ = lean_apply_2(v_toPure_566_, lean_box(0), v___x_582_);
return v___x_583_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__1(lean_object* v_text_586_, lean_object* v_pos_587_, lean_object* v_str_588_, lean_object* v_x_589_){
_start:
{
lean_object* v_fst_590_; lean_object* v_snd_591_; lean_object* v___x_593_; uint8_t v_isShared_594_; uint8_t v_isSharedCheck_599_; 
v_fst_590_ = lean_ctor_get(v_x_589_, 0);
v_snd_591_ = lean_ctor_get(v_x_589_, 1);
v_isSharedCheck_599_ = !lean_is_exclusive(v_x_589_);
if (v_isSharedCheck_599_ == 0)
{
v___x_593_ = v_x_589_;
v_isShared_594_ = v_isSharedCheck_599_;
goto v_resetjp_592_;
}
else
{
lean_inc(v_snd_591_);
lean_inc(v_fst_590_);
lean_dec(v_x_589_);
v___x_593_ = lean_box(0);
v_isShared_594_ = v_isSharedCheck_599_;
goto v_resetjp_592_;
}
v_resetjp_592_:
{
lean_object* v___x_595_; lean_object* v___x_597_; 
v___x_595_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_reposition(v_text_586_, v_pos_587_, v_str_588_, v_fst_590_);
if (v_isShared_594_ == 0)
{
lean_ctor_set(v___x_593_, 0, v___x_595_);
v___x_597_ = v___x_593_;
goto v_reusejp_596_;
}
else
{
lean_object* v_reuseFailAlloc_598_; 
v_reuseFailAlloc_598_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_598_, 0, v___x_595_);
lean_ctor_set(v_reuseFailAlloc_598_, 1, v_snd_591_);
v___x_597_ = v_reuseFailAlloc_598_;
goto v_reusejp_596_;
}
v_reusejp_596_:
{
return v___x_597_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__1___boxed(lean_object* v_text_600_, lean_object* v_pos_601_, lean_object* v_str_602_, lean_object* v_x_603_){
_start:
{
lean_object* v_res_604_; 
v_res_604_ = l_Lean_Doc_parseQuotedStrLit___redArg___lam__1(v_text_600_, v_pos_601_, v_str_602_, v_x_603_);
lean_dec_ref(v_str_602_);
lean_dec_ref(v_text_600_);
return v_res_604_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__2(lean_object* v_env_624_, lean_object* v_p_625_, lean_object* v_ictx_626_, lean_object* v_s_627_, lean_object* v_text_628_, lean_object* v_pos_629_, lean_object* v_str_630_, lean_object* v___f_631_, lean_object* v_inst_632_, lean_object* v_inst_633_, lean_object* v_toPure_634_, lean_object* v_____do__lift_635_){
_start:
{
lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v_s_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; uint8_t v___x_644_; 
v___x_636_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg___lam__0___closed__0, &l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg___lam__0___closed__0_once, _init_l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg___lam__0___closed__0);
v___x_637_ = lean_box(0);
lean_inc_ref(v_env_624_);
v___x_638_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_638_, 0, v_env_624_);
lean_ctor_set(v___x_638_, 1, v_____do__lift_635_);
lean_ctor_set(v___x_638_, 2, v___x_636_);
lean_ctor_set(v___x_638_, 3, v___x_637_);
v___x_639_ = l_Lean_Parser_getTokenTable(v_env_624_);
lean_inc_ref(v_ictx_626_);
v_s_640_ = l_Lean_Parser_ParserFn_run(v_p_625_, v_ictx_626_, v___x_638_, v___x_639_, v_s_627_);
lean_inc_ref(v_s_640_);
v___x_641_ = l_Lean_Parser_ParserState_allErrors(v_s_640_);
v___x_642_ = lean_array_get_size(v___x_641_);
lean_dec_ref(v___x_641_);
v___x_643_ = lean_unsigned_to_nat(0u);
v___x_644_ = lean_nat_dec_eq(v___x_642_, v___x_643_);
if (v___x_644_ == 0)
{
lean_object* v_stxStack_645_; lean_object* v_lhsPrec_646_; lean_object* v_pos_647_; lean_object* v_cache_648_; lean_object* v_errorMsg_649_; lean_object* v_recoveredErrors_650_; lean_object* v___x_652_; uint8_t v_isShared_653_; uint8_t v_isSharedCheck_689_; 
lean_dec(v_toPure_634_);
v_stxStack_645_ = lean_ctor_get(v_s_640_, 0);
v_lhsPrec_646_ = lean_ctor_get(v_s_640_, 1);
v_pos_647_ = lean_ctor_get(v_s_640_, 2);
v_cache_648_ = lean_ctor_get(v_s_640_, 3);
v_errorMsg_649_ = lean_ctor_get(v_s_640_, 4);
v_recoveredErrors_650_ = lean_ctor_get(v_s_640_, 5);
v_isSharedCheck_689_ = !lean_is_exclusive(v_s_640_);
if (v_isSharedCheck_689_ == 0)
{
v___x_652_ = v_s_640_;
v_isShared_653_ = v_isSharedCheck_689_;
goto v_resetjp_651_;
}
else
{
lean_inc(v_recoveredErrors_650_);
lean_inc(v_errorMsg_649_);
lean_inc(v_cache_648_);
lean_inc(v_pos_647_);
lean_inc(v_lhsPrec_646_);
lean_inc(v_stxStack_645_);
lean_dec(v_s_640_);
v___x_652_ = lean_box(0);
v_isShared_653_ = v_isSharedCheck_689_;
goto v_resetjp_651_;
}
v_resetjp_651_:
{
lean_object* v___x_654_; lean_object* v___y_656_; 
lean_inc(v_pos_629_);
v___x_654_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_reposition(v_text_628_, v_pos_629_, v_str_630_, v_pos_647_);
if (lean_obj_tag(v_errorMsg_649_) == 0)
{
lean_dec(v_pos_629_);
v___y_656_ = v_errorMsg_649_;
goto v___jp_655_;
}
else
{
lean_object* v_val_670_; lean_object* v___x_672_; uint8_t v_isShared_673_; uint8_t v_isSharedCheck_688_; 
v_val_670_ = lean_ctor_get(v_errorMsg_649_, 0);
v_isSharedCheck_688_ = !lean_is_exclusive(v_errorMsg_649_);
if (v_isSharedCheck_688_ == 0)
{
v___x_672_ = v_errorMsg_649_;
v_isShared_673_ = v_isSharedCheck_688_;
goto v_resetjp_671_;
}
else
{
lean_inc(v_val_670_);
lean_dec(v_errorMsg_649_);
v___x_672_ = lean_box(0);
v_isShared_673_ = v_isSharedCheck_688_;
goto v_resetjp_671_;
}
v_resetjp_671_:
{
lean_object* v_unexpectedTk_674_; lean_object* v_unexpected_675_; lean_object* v_expected_676_; lean_object* v___x_678_; uint8_t v_isShared_679_; uint8_t v_isSharedCheck_687_; 
v_unexpectedTk_674_ = lean_ctor_get(v_val_670_, 0);
v_unexpected_675_ = lean_ctor_get(v_val_670_, 1);
v_expected_676_ = lean_ctor_get(v_val_670_, 2);
v_isSharedCheck_687_ = !lean_is_exclusive(v_val_670_);
if (v_isSharedCheck_687_ == 0)
{
v___x_678_ = v_val_670_;
v_isShared_679_ = v_isSharedCheck_687_;
goto v_resetjp_677_;
}
else
{
lean_inc(v_expected_676_);
lean_inc(v_unexpected_675_);
lean_inc(v_unexpectedTk_674_);
lean_dec(v_val_670_);
v___x_678_ = lean_box(0);
v_isShared_679_ = v_isSharedCheck_687_;
goto v_resetjp_677_;
}
v_resetjp_677_:
{
lean_object* v___x_680_; lean_object* v___x_682_; 
v___x_680_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionSyntax(v_text_628_, v_pos_629_, v_str_630_, v_unexpectedTk_674_);
if (v_isShared_679_ == 0)
{
lean_ctor_set(v___x_678_, 0, v___x_680_);
v___x_682_ = v___x_678_;
goto v_reusejp_681_;
}
else
{
lean_object* v_reuseFailAlloc_686_; 
v_reuseFailAlloc_686_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_686_, 0, v___x_680_);
lean_ctor_set(v_reuseFailAlloc_686_, 1, v_unexpected_675_);
lean_ctor_set(v_reuseFailAlloc_686_, 2, v_expected_676_);
v___x_682_ = v_reuseFailAlloc_686_;
goto v_reusejp_681_;
}
v_reusejp_681_:
{
lean_object* v___x_684_; 
if (v_isShared_673_ == 0)
{
lean_ctor_set(v___x_672_, 0, v___x_682_);
v___x_684_ = v___x_672_;
goto v_reusejp_683_;
}
else
{
lean_object* v_reuseFailAlloc_685_; 
v_reuseFailAlloc_685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_685_, 0, v___x_682_);
v___x_684_ = v_reuseFailAlloc_685_;
goto v_reusejp_683_;
}
v_reusejp_683_:
{
v___y_656_ = v___x_684_;
goto v___jp_655_;
}
}
}
}
}
v___jp_655_:
{
lean_object* v___x_657_; size_t v_sz_658_; size_t v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v_s_664_; 
v___x_657_ = ((lean_object*)(l_Lean_Doc_parseQuotedStrLit___redArg___lam__2___closed__9));
v_sz_658_ = lean_array_size(v_recoveredErrors_650_);
v___x_659_ = ((size_t)0ULL);
v___x_660_ = l_unsafeCast___redArg(v_recoveredErrors_650_);
lean_dec_ref(v_recoveredErrors_650_);
v___x_661_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_657_, v___f_631_, v_sz_658_, v___x_659_, v___x_660_);
v___x_662_ = l_unsafeCast___redArg(v___x_661_);
lean_dec(v___x_661_);
if (v_isShared_653_ == 0)
{
lean_ctor_set(v___x_652_, 5, v___x_662_);
lean_ctor_set(v___x_652_, 4, v___y_656_);
lean_ctor_set(v___x_652_, 2, v___x_654_);
v_s_664_ = v___x_652_;
goto v_reusejp_663_;
}
else
{
lean_object* v_reuseFailAlloc_669_; 
v_reuseFailAlloc_669_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_669_, 0, v_stxStack_645_);
lean_ctor_set(v_reuseFailAlloc_669_, 1, v_lhsPrec_646_);
lean_ctor_set(v_reuseFailAlloc_669_, 2, v___x_654_);
lean_ctor_set(v_reuseFailAlloc_669_, 3, v_cache_648_);
lean_ctor_set(v_reuseFailAlloc_669_, 4, v___y_656_);
lean_ctor_set(v_reuseFailAlloc_669_, 5, v___x_662_);
v_s_664_ = v_reuseFailAlloc_669_;
goto v_reusejp_663_;
}
v_reusejp_663_:
{
lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; 
v___x_665_ = l_Lean_Parser_ParserState_toErrorMsg(v_ictx_626_, v_s_664_);
v___x_666_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_666_, 0, v___x_665_);
v___x_667_ = l_Lean_MessageData_ofFormat(v___x_666_);
v___x_668_ = l_Lean_throwError___redArg(v_inst_632_, v_inst_633_, v___x_667_);
return v___x_668_;
}
}
}
}
else
{
lean_object* v_stxStack_690_; lean_object* v_pos_691_; uint8_t v___x_692_; 
lean_dec_ref(v___f_631_);
v_stxStack_690_ = lean_ctor_get(v_s_640_, 0);
lean_inc_ref(v_stxStack_690_);
v_pos_691_ = lean_ctor_get(v_s_640_, 2);
lean_inc(v_pos_691_);
v___x_692_ = l_Lean_Parser_InputContext_atEnd(v_ictx_626_, v_pos_691_);
lean_dec(v_pos_691_);
if (v___x_692_ == 0)
{
lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; 
lean_dec_ref(v_stxStack_690_);
lean_dec(v_toPure_634_);
lean_dec(v_pos_629_);
v___x_693_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg___lam__0___closed__1));
v___x_694_ = l_Lean_Parser_ParserState_mkError(v_s_640_, v___x_693_);
v___x_695_ = l_Lean_Parser_ParserState_toErrorMsg(v_ictx_626_, v___x_694_);
v___x_696_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_696_, 0, v___x_695_);
v___x_697_ = l_Lean_MessageData_ofFormat(v___x_696_);
v___x_698_ = l_Lean_throwError___redArg(v_inst_632_, v_inst_633_, v___x_697_);
return v___x_698_;
}
else
{
lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; 
lean_dec_ref(v_s_640_);
lean_dec_ref(v_inst_633_);
lean_dec_ref(v_inst_632_);
lean_dec_ref(v_ictx_626_);
v___x_699_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_690_);
lean_dec_ref(v_stxStack_690_);
v___x_700_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionSyntax(v_text_628_, v_pos_629_, v_str_630_, v___x_699_);
v___x_701_ = lean_apply_2(v_toPure_634_, lean_box(0), v___x_700_);
return v___x_701_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__2___boxed(lean_object* v_env_702_, lean_object* v_p_703_, lean_object* v_ictx_704_, lean_object* v_s_705_, lean_object* v_text_706_, lean_object* v_pos_707_, lean_object* v_str_708_, lean_object* v___f_709_, lean_object* v_inst_710_, lean_object* v_inst_711_, lean_object* v_toPure_712_, lean_object* v_____do__lift_713_){
_start:
{
lean_object* v_res_714_; 
v_res_714_ = l_Lean_Doc_parseQuotedStrLit___redArg___lam__2(v_env_702_, v_p_703_, v_ictx_704_, v_s_705_, v_text_706_, v_pos_707_, v_str_708_, v___f_709_, v_inst_710_, v_inst_711_, v_toPure_712_, v_____do__lift_713_);
lean_dec_ref(v_str_708_);
lean_dec_ref(v_text_706_);
return v_res_714_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__3(lean_object* v_str_715_, uint8_t v___x_716_, lean_object* v_env_717_, lean_object* v_p_718_, lean_object* v_text_719_, lean_object* v_pos_720_, lean_object* v___f_721_, lean_object* v_inst_722_, lean_object* v_inst_723_, lean_object* v_toPure_724_, lean_object* v_toBind_725_, lean_object* v_inst_726_, lean_object* v_____do__lift_727_){
_start:
{
lean_object* v___x_728_; lean_object* v_ictx_729_; lean_object* v_s_730_; lean_object* v___f_731_; lean_object* v___x_732_; 
v___x_728_ = lean_string_utf8_byte_size(v_str_715_);
lean_inc_ref(v_str_715_);
v_ictx_729_ = l_Lean_Parser_mkInputContext___redArg(v_str_715_, v_____do__lift_727_, v___x_716_, v___x_728_);
v_s_730_ = l_Lean_Parser_mkParserState(v_str_715_);
v___f_731_ = lean_alloc_closure((void*)(l_Lean_Doc_parseQuotedStrLit___redArg___lam__2___boxed), 12, 11);
lean_closure_set(v___f_731_, 0, v_env_717_);
lean_closure_set(v___f_731_, 1, v_p_718_);
lean_closure_set(v___f_731_, 2, v_ictx_729_);
lean_closure_set(v___f_731_, 3, v_s_730_);
lean_closure_set(v___f_731_, 4, v_text_719_);
lean_closure_set(v___f_731_, 5, v_pos_720_);
lean_closure_set(v___f_731_, 6, v_str_715_);
lean_closure_set(v___f_731_, 7, v___f_721_);
lean_closure_set(v___f_731_, 8, v_inst_722_);
lean_closure_set(v___f_731_, 9, v_inst_723_);
lean_closure_set(v___f_731_, 10, v_toPure_724_);
v___x_732_ = lean_apply_4(v_toBind_725_, lean_box(0), lean_box(0), v_inst_726_, v___f_731_);
return v___x_732_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__3___boxed(lean_object* v_str_733_, lean_object* v___x_734_, lean_object* v_env_735_, lean_object* v_p_736_, lean_object* v_text_737_, lean_object* v_pos_738_, lean_object* v___f_739_, lean_object* v_inst_740_, lean_object* v_inst_741_, lean_object* v_toPure_742_, lean_object* v_toBind_743_, lean_object* v_inst_744_, lean_object* v_____do__lift_745_){
_start:
{
uint8_t v___x_1071__boxed_746_; lean_object* v_res_747_; 
v___x_1071__boxed_746_ = lean_unbox(v___x_734_);
v_res_747_ = l_Lean_Doc_parseQuotedStrLit___redArg___lam__3(v_str_733_, v___x_1071__boxed_746_, v_env_735_, v_p_736_, v_text_737_, v_pos_738_, v___f_739_, v_inst_740_, v_inst_741_, v_toPure_742_, v_toBind_743_, v_inst_744_, v_____do__lift_745_);
return v_res_747_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__4(lean_object* v_inst_748_, lean_object* v_strLit_749_, lean_object* v_text_750_, uint8_t v___x_751_, lean_object* v_env_752_, lean_object* v_p_753_, lean_object* v_inst_754_, lean_object* v_inst_755_, lean_object* v_toPure_756_, lean_object* v_toBind_757_, lean_object* v_inst_758_, lean_object* v_pos_759_){
_start:
{
lean_object* v_getFileName_760_; lean_object* v_str_761_; lean_object* v___f_762_; lean_object* v___x_763_; lean_object* v___f_764_; lean_object* v___x_765_; 
v_getFileName_760_ = lean_ctor_get(v_inst_748_, 2);
lean_inc(v_getFileName_760_);
lean_dec_ref(v_inst_748_);
v_str_761_ = l_Lean_TSyntax_getString(v_strLit_749_);
lean_inc_ref(v_str_761_);
lean_inc(v_pos_759_);
lean_inc_ref(v_text_750_);
v___f_762_ = lean_alloc_closure((void*)(l_Lean_Doc_parseQuotedStrLit___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_762_, 0, v_text_750_);
lean_closure_set(v___f_762_, 1, v_pos_759_);
lean_closure_set(v___f_762_, 2, v_str_761_);
v___x_763_ = lean_box(v___x_751_);
lean_inc(v_toBind_757_);
v___f_764_ = lean_alloc_closure((void*)(l_Lean_Doc_parseQuotedStrLit___redArg___lam__3___boxed), 13, 12);
lean_closure_set(v___f_764_, 0, v_str_761_);
lean_closure_set(v___f_764_, 1, v___x_763_);
lean_closure_set(v___f_764_, 2, v_env_752_);
lean_closure_set(v___f_764_, 3, v_p_753_);
lean_closure_set(v___f_764_, 4, v_text_750_);
lean_closure_set(v___f_764_, 5, v_pos_759_);
lean_closure_set(v___f_764_, 6, v___f_762_);
lean_closure_set(v___f_764_, 7, v_inst_754_);
lean_closure_set(v___f_764_, 8, v_inst_755_);
lean_closure_set(v___f_764_, 9, v_toPure_756_);
lean_closure_set(v___f_764_, 10, v_toBind_757_);
lean_closure_set(v___f_764_, 11, v_inst_758_);
v___x_765_ = lean_apply_4(v_toBind_757_, lean_box(0), lean_box(0), v_getFileName_760_, v___f_764_);
return v___x_765_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__4___boxed(lean_object* v_inst_766_, lean_object* v_strLit_767_, lean_object* v_text_768_, lean_object* v___x_769_, lean_object* v_env_770_, lean_object* v_p_771_, lean_object* v_inst_772_, lean_object* v_inst_773_, lean_object* v_toPure_774_, lean_object* v_toBind_775_, lean_object* v_inst_776_, lean_object* v_pos_777_){
_start:
{
uint8_t v___x_1096__boxed_778_; lean_object* v_res_779_; 
v___x_1096__boxed_778_ = lean_unbox(v___x_769_);
v_res_779_ = l_Lean_Doc_parseQuotedStrLit___redArg___lam__4(v_inst_766_, v_strLit_767_, v_text_768_, v___x_1096__boxed_778_, v_env_770_, v_p_771_, v_inst_772_, v_inst_773_, v_toPure_774_, v_toBind_775_, v_inst_776_, v_pos_777_);
lean_dec(v_strLit_767_);
return v_res_779_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__5(lean_object* v___f_780_, lean_object* v_pos_781_){
_start:
{
lean_object* v___x_782_; 
v___x_782_ = lean_apply_1(v___f_780_, v_pos_781_);
return v___x_782_;
}
}
static lean_object* _init_l_Lean_Doc_parseQuotedStrLit___redArg___lam__7___closed__1(void){
_start:
{
lean_object* v___x_784_; lean_object* v___x_785_; 
v___x_784_ = ((lean_object*)(l_Lean_Doc_parseQuotedStrLit___redArg___lam__7___closed__0));
v___x_785_ = l_Lean_stringToMessageData(v___x_784_);
return v___x_785_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__7(lean_object* v_text_786_, lean_object* v_inst_787_, lean_object* v_inst_788_, lean_object* v_strLit_789_, lean_object* v_toBind_790_, lean_object* v___f_791_, lean_object* v_toPure_792_, lean_object* v___f_793_, lean_object* v_____r_794_, lean_object* v_pos_795_){
_start:
{
lean_object* v_source_796_; uint32_t v___x_797_; uint32_t v___x_798_; uint8_t v___x_799_; 
v_source_796_ = lean_ctor_get(v_text_786_, 0);
v___x_797_ = lean_string_utf8_get(v_source_796_, v_pos_795_);
v___x_798_ = 34;
v___x_799_ = lean_uint32_dec_eq(v___x_797_, v___x_798_);
if (v___x_799_ == 0)
{
lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; 
lean_dec(v___f_793_);
lean_dec(v_toPure_792_);
v___x_800_ = lean_obj_once(&l_Lean_Doc_parseQuotedStrLit___redArg___lam__7___closed__1, &l_Lean_Doc_parseQuotedStrLit___redArg___lam__7___closed__1_once, _init_l_Lean_Doc_parseQuotedStrLit___redArg___lam__7___closed__1);
v___x_801_ = l_Lean_throwErrorAt___redArg(v_inst_787_, v_inst_788_, v_strLit_789_, v___x_800_);
v___x_802_ = lean_apply_4(v_toBind_790_, lean_box(0), lean_box(0), v___x_801_, v___f_791_);
return v___x_802_;
}
else
{
lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; 
lean_dec(v___f_791_);
lean_dec(v_strLit_789_);
lean_dec_ref(v_inst_788_);
lean_dec_ref(v_inst_787_);
v___x_803_ = lean_string_utf8_next(v_source_796_, v_pos_795_);
v___x_804_ = lean_apply_2(v_toPure_792_, lean_box(0), v___x_803_);
v___x_805_ = lean_apply_4(v_toBind_790_, lean_box(0), lean_box(0), v___x_804_, v___f_793_);
return v___x_805_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__7___boxed(lean_object* v_text_806_, lean_object* v_inst_807_, lean_object* v_inst_808_, lean_object* v_strLit_809_, lean_object* v_toBind_810_, lean_object* v___f_811_, lean_object* v_toPure_812_, lean_object* v___f_813_, lean_object* v_____r_814_, lean_object* v_pos_815_){
_start:
{
lean_object* v_res_816_; 
v_res_816_ = l_Lean_Doc_parseQuotedStrLit___redArg___lam__7(v_text_806_, v_inst_807_, v_inst_808_, v_strLit_809_, v_toBind_810_, v___f_811_, v_toPure_812_, v___f_813_, v_____r_814_, v_pos_815_);
lean_dec(v_pos_815_);
lean_dec_ref(v_text_806_);
return v_res_816_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__6(lean_object* v___f_817_, lean_object* v_____s_818_){
_start:
{
lean_object* v___x_819_; lean_object* v___x_820_; 
v___x_819_ = lean_box(0);
v___x_820_ = lean_apply_2(v___f_817_, v___x_819_, v_____s_818_);
return v___x_820_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__8(lean_object* v_source_821_, lean_object* v_toPure_822_, lean_object* v_toBind_823_, lean_object* v___f_824_, lean_object* v_b_825_){
_start:
{
uint32_t v___x_826_; uint32_t v___x_827_; uint8_t v___x_828_; 
v___x_826_ = lean_string_utf8_get(v_source_821_, v_b_825_);
v___x_827_ = 35;
v___x_828_ = lean_uint32_dec_eq(v___x_826_, v___x_827_);
if (v___x_828_ == 0)
{
lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; 
v___x_829_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_829_, 0, v_b_825_);
v___x_830_ = lean_apply_2(v_toPure_822_, lean_box(0), v___x_829_);
v___x_831_ = lean_apply_4(v_toBind_823_, lean_box(0), lean_box(0), v___x_830_, v___f_824_);
return v___x_831_;
}
else
{
lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; 
v___x_832_ = lean_string_utf8_next(v_source_821_, v_b_825_);
lean_dec(v_b_825_);
v___x_833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_833_, 0, v___x_832_);
v___x_834_ = lean_apply_2(v_toPure_822_, lean_box(0), v___x_833_);
v___x_835_ = lean_apply_4(v_toBind_823_, lean_box(0), lean_box(0), v___x_834_, v___f_824_);
return v___x_835_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__8___boxed(lean_object* v_source_836_, lean_object* v_toPure_837_, lean_object* v_toBind_838_, lean_object* v___f_839_, lean_object* v_b_840_){
_start:
{
lean_object* v_res_841_; 
v_res_841_ = l_Lean_Doc_parseQuotedStrLit___redArg___lam__8(v_source_836_, v_toPure_837_, v_toBind_838_, v___f_839_, v_b_840_);
lean_dec_ref(v_source_836_);
return v_res_841_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__9(lean_object* v_text_842_, lean_object* v___f_843_, lean_object* v_toPure_844_, lean_object* v_toBind_845_, lean_object* v___f_846_, lean_object* v_inst_847_, lean_object* v___f_848_, lean_object* v_____x_849_){
_start:
{
lean_object* v_start_850_; lean_object* v_source_851_; uint32_t v___x_852_; uint32_t v___x_853_; uint8_t v___x_854_; 
v_start_850_ = lean_ctor_get(v_____x_849_, 0);
lean_inc(v_start_850_);
lean_dec_ref(v_____x_849_);
v_source_851_ = lean_ctor_get(v_text_842_, 0);
lean_inc_ref(v_source_851_);
lean_dec_ref(v_text_842_);
v___x_852_ = lean_string_utf8_get(v_source_851_, v_start_850_);
v___x_853_ = 114;
v___x_854_ = lean_uint32_dec_eq(v___x_852_, v___x_853_);
if (v___x_854_ == 0)
{
lean_object* v___x_855_; lean_object* v___x_856_; 
lean_dec_ref(v_source_851_);
lean_dec(v___f_848_);
lean_dec_ref(v_inst_847_);
lean_dec(v___f_846_);
lean_dec(v_toBind_845_);
lean_dec(v_toPure_844_);
v___x_855_ = lean_box(0);
v___x_856_ = lean_apply_2(v___f_843_, v___x_855_, v_start_850_);
return v___x_856_;
}
else
{
lean_object* v___f_857_; lean_object* v_pos_858_; lean_object* v___x_859_; lean_object* v___x_860_; 
lean_dec(v___f_843_);
lean_inc(v_toBind_845_);
lean_inc_ref(v_source_851_);
v___f_857_ = lean_alloc_closure((void*)(l_Lean_Doc_parseQuotedStrLit___redArg___lam__8___boxed), 5, 4);
lean_closure_set(v___f_857_, 0, v_source_851_);
lean_closure_set(v___f_857_, 1, v_toPure_844_);
lean_closure_set(v___f_857_, 2, v_toBind_845_);
lean_closure_set(v___f_857_, 3, v___f_846_);
v_pos_858_ = lean_string_utf8_next(v_source_851_, v_start_850_);
lean_dec(v_start_850_);
lean_dec_ref(v_source_851_);
v___x_859_ = l___private_Init_While_0__repeatM_erased___redArg(v_inst_847_, v___f_857_, v_pos_858_);
v___x_860_ = lean_apply_4(v_toBind_845_, lean_box(0), lean_box(0), v___x_859_, v___f_848_);
return v___x_860_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__10(lean_object* v_inst_861_, lean_object* v_strLit_862_, lean_object* v_text_863_, uint8_t v___x_864_, lean_object* v_p_865_, lean_object* v_inst_866_, lean_object* v_inst_867_, lean_object* v_toPure_868_, lean_object* v_toBind_869_, lean_object* v_inst_870_, lean_object* v___f_871_, lean_object* v_env_872_){
_start:
{
lean_object* v___x_873_; lean_object* v___f_874_; lean_object* v___f_875_; lean_object* v___f_876_; lean_object* v___f_877_; lean_object* v___f_878_; lean_object* v___x_879_; lean_object* v___x_880_; 
v___x_873_ = lean_box(v___x_864_);
lean_inc_n(v_toBind_869_, 3);
lean_inc_n(v_toPure_868_, 2);
lean_inc_ref(v_inst_867_);
lean_inc_ref_n(v_inst_866_, 3);
lean_inc_ref_n(v_text_863_, 2);
lean_inc_n(v_strLit_862_, 2);
v___f_874_ = lean_alloc_closure((void*)(l_Lean_Doc_parseQuotedStrLit___redArg___lam__4___boxed), 12, 11);
lean_closure_set(v___f_874_, 0, v_inst_861_);
lean_closure_set(v___f_874_, 1, v_strLit_862_);
lean_closure_set(v___f_874_, 2, v_text_863_);
lean_closure_set(v___f_874_, 3, v___x_873_);
lean_closure_set(v___f_874_, 4, v_env_872_);
lean_closure_set(v___f_874_, 5, v_p_865_);
lean_closure_set(v___f_874_, 6, v_inst_866_);
lean_closure_set(v___f_874_, 7, v_inst_867_);
lean_closure_set(v___f_874_, 8, v_toPure_868_);
lean_closure_set(v___f_874_, 9, v_toBind_869_);
lean_closure_set(v___f_874_, 10, v_inst_870_);
v___f_875_ = lean_alloc_closure((void*)(l_Lean_Doc_parseQuotedStrLit___redArg___lam__5), 2, 1);
lean_closure_set(v___f_875_, 0, v___f_874_);
lean_inc_ref(v___f_875_);
v___f_876_ = lean_alloc_closure((void*)(l_Lean_Doc_parseQuotedStrLit___redArg___lam__7___boxed), 10, 8);
lean_closure_set(v___f_876_, 0, v_text_863_);
lean_closure_set(v___f_876_, 1, v_inst_866_);
lean_closure_set(v___f_876_, 2, v_inst_867_);
lean_closure_set(v___f_876_, 3, v_strLit_862_);
lean_closure_set(v___f_876_, 4, v_toBind_869_);
lean_closure_set(v___f_876_, 5, v___f_875_);
lean_closure_set(v___f_876_, 6, v_toPure_868_);
lean_closure_set(v___f_876_, 7, v___f_875_);
lean_inc_ref(v___f_876_);
v___f_877_ = lean_alloc_closure((void*)(l_Lean_Doc_parseQuotedStrLit___redArg___lam__6), 2, 1);
lean_closure_set(v___f_877_, 0, v___f_876_);
v___f_878_ = lean_alloc_closure((void*)(l_Lean_Doc_parseQuotedStrLit___redArg___lam__9), 8, 7);
lean_closure_set(v___f_878_, 0, v_text_863_);
lean_closure_set(v___f_878_, 1, v___f_876_);
lean_closure_set(v___f_878_, 2, v_toPure_868_);
lean_closure_set(v___f_878_, 3, v_toBind_869_);
lean_closure_set(v___f_878_, 4, v___f_871_);
lean_closure_set(v___f_878_, 5, v_inst_866_);
lean_closure_set(v___f_878_, 6, v___f_877_);
v___x_879_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg(v_inst_866_, v_strLit_862_);
lean_dec(v_strLit_862_);
v___x_880_ = lean_apply_4(v_toBind_869_, lean_box(0), lean_box(0), v___x_879_, v___f_878_);
return v___x_880_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__10___boxed(lean_object* v_inst_881_, lean_object* v_strLit_882_, lean_object* v_text_883_, lean_object* v___x_884_, lean_object* v_p_885_, lean_object* v_inst_886_, lean_object* v_inst_887_, lean_object* v_toPure_888_, lean_object* v_toBind_889_, lean_object* v_inst_890_, lean_object* v___f_891_, lean_object* v_env_892_){
_start:
{
uint8_t v___x_1224__boxed_893_; lean_object* v_res_894_; 
v___x_1224__boxed_893_ = lean_unbox(v___x_884_);
v_res_894_ = l_Lean_Doc_parseQuotedStrLit___redArg___lam__10(v_inst_881_, v_strLit_882_, v_text_883_, v___x_1224__boxed_893_, v_p_885_, v_inst_886_, v_inst_887_, v_toPure_888_, v_toBind_889_, v_inst_890_, v___f_891_, v_env_892_);
return v_res_894_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__11(lean_object* v_inst_895_, lean_object* v_inst_896_, lean_object* v_strLit_897_, uint8_t v___x_898_, lean_object* v_p_899_, lean_object* v_inst_900_, lean_object* v_inst_901_, lean_object* v_toPure_902_, lean_object* v_toBind_903_, lean_object* v_inst_904_, lean_object* v___f_905_, lean_object* v_text_906_){
_start:
{
lean_object* v_getEnv_907_; lean_object* v___x_908_; lean_object* v___f_909_; lean_object* v___x_910_; 
v_getEnv_907_ = lean_ctor_get(v_inst_895_, 0);
lean_inc(v_getEnv_907_);
lean_dec_ref(v_inst_895_);
v___x_908_ = lean_box(v___x_898_);
lean_inc(v_toBind_903_);
v___f_909_ = lean_alloc_closure((void*)(l_Lean_Doc_parseQuotedStrLit___redArg___lam__10___boxed), 12, 11);
lean_closure_set(v___f_909_, 0, v_inst_896_);
lean_closure_set(v___f_909_, 1, v_strLit_897_);
lean_closure_set(v___f_909_, 2, v_text_906_);
lean_closure_set(v___f_909_, 3, v___x_908_);
lean_closure_set(v___f_909_, 4, v_p_899_);
lean_closure_set(v___f_909_, 5, v_inst_900_);
lean_closure_set(v___f_909_, 6, v_inst_901_);
lean_closure_set(v___f_909_, 7, v_toPure_902_);
lean_closure_set(v___f_909_, 8, v_toBind_903_);
lean_closure_set(v___f_909_, 9, v_inst_904_);
lean_closure_set(v___f_909_, 10, v___f_905_);
v___x_910_ = lean_apply_4(v_toBind_903_, lean_box(0), lean_box(0), v_getEnv_907_, v___f_909_);
return v___x_910_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__11___boxed(lean_object* v_inst_911_, lean_object* v_inst_912_, lean_object* v_strLit_913_, lean_object* v___x_914_, lean_object* v_p_915_, lean_object* v_inst_916_, lean_object* v_inst_917_, lean_object* v_toPure_918_, lean_object* v_toBind_919_, lean_object* v_inst_920_, lean_object* v___f_921_, lean_object* v_text_922_){
_start:
{
uint8_t v___x_1259__boxed_923_; lean_object* v_res_924_; 
v___x_1259__boxed_923_ = lean_unbox(v___x_914_);
v_res_924_ = l_Lean_Doc_parseQuotedStrLit___redArg___lam__11(v_inst_911_, v_inst_912_, v_strLit_913_, v___x_1259__boxed_923_, v_p_915_, v_inst_916_, v_inst_917_, v_toPure_918_, v_toBind_919_, v_inst_920_, v___f_921_, v_text_922_);
return v_res_924_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg(lean_object* v_inst_925_, lean_object* v_inst_926_, lean_object* v_inst_927_, lean_object* v_inst_928_, lean_object* v_inst_929_, lean_object* v_inst_930_, lean_object* v_p_931_, lean_object* v_strLit_932_){
_start:
{
uint8_t v___x_933_; uint8_t v___y_935_; lean_object* v___x_945_; 
v___x_933_ = 1;
v___x_945_ = l_Lean_Syntax_getPos_x3f(v_strLit_932_, v___x_933_);
if (lean_obj_tag(v___x_945_) == 0)
{
v___y_935_ = v___x_933_;
goto v___jp_934_;
}
else
{
uint8_t v___x_946_; 
lean_dec_ref_known(v___x_945_, 1);
v___x_946_ = 0;
v___y_935_ = v___x_946_;
goto v___jp_934_;
}
v___jp_934_:
{
if (v___y_935_ == 0)
{
lean_object* v_toApplicative_936_; lean_object* v_toBind_937_; lean_object* v_toPure_938_; lean_object* v___f_939_; lean_object* v___x_940_; lean_object* v___f_941_; lean_object* v___x_942_; 
v_toApplicative_936_ = lean_ctor_get(v_inst_925_, 0);
v_toBind_937_ = lean_ctor_get(v_inst_925_, 1);
lean_inc_n(v_toBind_937_, 2);
v_toPure_938_ = lean_ctor_get(v_toApplicative_936_, 1);
lean_inc_n(v_toPure_938_, 2);
v___f_939_ = lean_alloc_closure((void*)(l_Lean_Doc_parseQuotedStrLit___redArg___lam__0), 2, 1);
lean_closure_set(v___f_939_, 0, v_toPure_938_);
v___x_940_ = lean_box(v___x_933_);
v___f_941_ = lean_alloc_closure((void*)(l_Lean_Doc_parseQuotedStrLit___redArg___lam__11___boxed), 12, 11);
lean_closure_set(v___f_941_, 0, v_inst_927_);
lean_closure_set(v___f_941_, 1, v_inst_929_);
lean_closure_set(v___f_941_, 2, v_strLit_932_);
lean_closure_set(v___f_941_, 3, v___x_940_);
lean_closure_set(v___f_941_, 4, v_p_931_);
lean_closure_set(v___f_941_, 5, v_inst_925_);
lean_closure_set(v___f_941_, 6, v_inst_928_);
lean_closure_set(v___f_941_, 7, v_toPure_938_);
lean_closure_set(v___f_941_, 8, v_toBind_937_);
lean_closure_set(v___f_941_, 9, v_inst_930_);
lean_closure_set(v___f_941_, 10, v___f_939_);
v___x_942_ = lean_apply_4(v_toBind_937_, lean_box(0), lean_box(0), v_inst_926_, v___f_941_);
return v___x_942_;
}
else
{
lean_object* v___x_943_; lean_object* v___x_944_; 
lean_dec(v_inst_926_);
v___x_943_ = l_Lean_TSyntax_getString(v_strLit_932_);
lean_dec(v_strLit_932_);
v___x_944_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg(v_inst_925_, v_inst_927_, v_inst_928_, v_inst_929_, v_inst_930_, v_p_931_, v___x_943_);
return v___x_944_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit(lean_object* v_m_947_, lean_object* v_inst_948_, lean_object* v_inst_949_, lean_object* v_inst_950_, lean_object* v_inst_951_, lean_object* v_inst_952_, lean_object* v_inst_953_, lean_object* v_p_954_, lean_object* v_strLit_955_){
_start:
{
lean_object* v___x_956_; 
v___x_956_ = l_Lean_Doc_parseQuotedStrLit___redArg(v_inst_948_, v_inst_949_, v_inst_950_, v_inst_951_, v_inst_952_, v_inst_953_, v_p_954_, v_strLit_955_);
return v___x_956_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__0(lean_object* v_s_957_, lean_object* v_toPure_958_, uint8_t v_err_959_){
_start:
{
lean_object* v_stxStack_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; 
v_stxStack_960_ = lean_ctor_get(v_s_957_, 0);
v___x_961_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_960_);
v___x_962_ = lean_box(v_err_959_);
v___x_963_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_963_, 0, v___x_961_);
lean_ctor_set(v___x_963_, 1, v___x_962_);
v___x_964_ = lean_apply_2(v_toPure_958_, lean_box(0), v___x_963_);
return v___x_964_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__0___boxed(lean_object* v_s_965_, lean_object* v_toPure_966_, lean_object* v_err_967_){
_start:
{
uint8_t v_err_boxed_968_; lean_object* v_res_969_; 
v_err_boxed_968_ = lean_unbox(v_err_967_);
v_res_969_ = l_Lean_Doc_parseStrLit_x27___redArg___lam__0(v_s_965_, v_toPure_966_, v_err_boxed_968_);
lean_dec_ref(v_s_965_);
return v_res_969_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__1(lean_object* v___f_970_, uint8_t v_err_971_){
_start:
{
lean_object* v___x_972_; lean_object* v___x_973_; 
v___x_972_ = lean_box(v_err_971_);
v___x_973_ = lean_apply_1(v___f_970_, v___x_972_);
return v___x_973_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__1___boxed(lean_object* v___f_974_, lean_object* v_err_975_){
_start:
{
uint8_t v_err_boxed_976_; lean_object* v_res_977_; 
v_err_boxed_976_ = lean_unbox(v_err_975_);
v_res_977_ = l_Lean_Doc_parseStrLit_x27___redArg___lam__1(v___f_974_, v_err_boxed_976_);
return v_res_977_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__2(lean_object* v_toPure_978_, uint8_t v___x_979_, lean_object* v_toBind_980_, lean_object* v___f_981_, lean_object* v_____r_982_){
_start:
{
lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; 
v___x_983_ = lean_box(v___x_979_);
v___x_984_ = lean_apply_2(v_toPure_978_, lean_box(0), v___x_983_);
v___x_985_ = lean_apply_4(v_toBind_980_, lean_box(0), lean_box(0), v___x_984_, v___f_981_);
return v___x_985_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__2___boxed(lean_object* v_toPure_986_, lean_object* v___x_987_, lean_object* v_toBind_988_, lean_object* v___f_989_, lean_object* v_____r_990_){
_start:
{
uint8_t v___x_798__boxed_991_; lean_object* v_res_992_; 
v___x_798__boxed_991_ = lean_unbox(v___x_987_);
v_res_992_ = l_Lean_Doc_parseStrLit_x27___redArg___lam__2(v_toPure_986_, v___x_798__boxed_991_, v_toBind_988_, v___f_989_, v_____r_990_);
return v_res_992_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__6(lean_object* v_env_993_, lean_object* v_p_994_, lean_object* v_ictx_995_, lean_object* v_s_996_, lean_object* v_toPure_997_, uint8_t v___x_998_, lean_object* v_toBind_999_, lean_object* v_inst_1000_, lean_object* v_inst_1001_, lean_object* v_inst_1002_, lean_object* v_inst_1003_, uint8_t v___y_1004_, lean_object* v_____do__lift_1005_){
_start:
{
lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v_s_1010_; lean_object* v___f_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; uint8_t v___x_1015_; 
v___x_1006_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg___lam__0___closed__0, &l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg___lam__0___closed__0_once, _init_l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg___lam__0___closed__0);
v___x_1007_ = lean_box(0);
lean_inc_ref(v_env_993_);
v___x_1008_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1008_, 0, v_env_993_);
lean_ctor_set(v___x_1008_, 1, v_____do__lift_1005_);
lean_ctor_set(v___x_1008_, 2, v___x_1006_);
lean_ctor_set(v___x_1008_, 3, v___x_1007_);
v___x_1009_ = l_Lean_Parser_getTokenTable(v_env_993_);
lean_inc_ref(v_ictx_995_);
v_s_1010_ = l_Lean_Parser_ParserFn_run(v_p_994_, v_ictx_995_, v___x_1008_, v___x_1009_, v_s_996_);
lean_inc(v_toPure_997_);
lean_inc_ref_n(v_s_1010_, 2);
v___f_1011_ = lean_alloc_closure((void*)(l_Lean_Doc_parseStrLit_x27___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1011_, 0, v_s_1010_);
lean_closure_set(v___f_1011_, 1, v_toPure_997_);
v___x_1012_ = l_Lean_Parser_ParserState_allErrors(v_s_1010_);
v___x_1013_ = lean_array_get_size(v___x_1012_);
lean_dec_ref(v___x_1012_);
v___x_1014_ = lean_unsigned_to_nat(0u);
v___x_1015_ = lean_nat_dec_eq(v___x_1013_, v___x_1014_);
if (v___x_1015_ == 0)
{
lean_object* v___f_1016_; lean_object* v___x_1017_; lean_object* v___f_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; 
v___f_1016_ = lean_alloc_closure((void*)(l_Lean_Doc_parseStrLit_x27___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_1016_, 0, v___f_1011_);
v___x_1017_ = lean_box(v___x_998_);
lean_inc(v_toBind_999_);
v___f_1018_ = lean_alloc_closure((void*)(l_Lean_Doc_parseStrLit_x27___redArg___lam__2___boxed), 5, 4);
lean_closure_set(v___f_1018_, 0, v_toPure_997_);
lean_closure_set(v___f_1018_, 1, v___x_1017_);
lean_closure_set(v___f_1018_, 2, v_toBind_999_);
lean_closure_set(v___f_1018_, 3, v___f_1016_);
v___x_1019_ = l_Lean_Parser_ParserState_toErrorMsg(v_ictx_995_, v_s_1010_);
v___x_1020_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1020_, 0, v___x_1019_);
v___x_1021_ = l_Lean_MessageData_ofFormat(v___x_1020_);
v___x_1022_ = l_Lean_logError___redArg(v_inst_1000_, v_inst_1001_, v_inst_1002_, v_inst_1003_, v___x_1021_);
v___x_1023_ = lean_apply_4(v_toBind_999_, lean_box(0), lean_box(0), v___x_1022_, v___f_1018_);
return v___x_1023_;
}
else
{
lean_object* v_pos_1024_; uint8_t v___x_1025_; 
v_pos_1024_ = lean_ctor_get(v_s_1010_, 2);
lean_inc(v_pos_1024_);
v___x_1025_ = l_Lean_Parser_InputContext_atEnd(v_ictx_995_, v_pos_1024_);
lean_dec(v_pos_1024_);
if (v___x_1025_ == 0)
{
lean_object* v___f_1026_; lean_object* v___x_1027_; lean_object* v___f_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; 
v___f_1026_ = lean_alloc_closure((void*)(l_Lean_Doc_parseStrLit_x27___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_1026_, 0, v___f_1011_);
v___x_1027_ = lean_box(v___x_998_);
lean_inc(v_toBind_999_);
v___f_1028_ = lean_alloc_closure((void*)(l_Lean_Doc_parseStrLit_x27___redArg___lam__2___boxed), 5, 4);
lean_closure_set(v___f_1028_, 0, v_toPure_997_);
lean_closure_set(v___f_1028_, 1, v___x_1027_);
lean_closure_set(v___f_1028_, 2, v_toBind_999_);
lean_closure_set(v___f_1028_, 3, v___f_1026_);
v___x_1029_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg___lam__0___closed__1));
v___x_1030_ = l_Lean_Parser_ParserState_mkError(v_s_1010_, v___x_1029_);
v___x_1031_ = l_Lean_Parser_ParserState_toErrorMsg(v_ictx_995_, v___x_1030_);
v___x_1032_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1032_, 0, v___x_1031_);
v___x_1033_ = l_Lean_MessageData_ofFormat(v___x_1032_);
v___x_1034_ = l_Lean_logError___redArg(v_inst_1000_, v_inst_1001_, v_inst_1002_, v_inst_1003_, v___x_1033_);
v___x_1035_ = lean_apply_4(v_toBind_999_, lean_box(0), lean_box(0), v___x_1034_, v___f_1028_);
return v___x_1035_;
}
else
{
lean_object* v___f_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; 
lean_dec_ref(v_s_1010_);
lean_dec(v_inst_1003_);
lean_dec(v_inst_1002_);
lean_dec_ref(v_inst_1001_);
lean_dec_ref(v_inst_1000_);
lean_dec_ref(v_ictx_995_);
v___f_1036_ = lean_alloc_closure((void*)(l_Lean_Doc_parseStrLit_x27___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_1036_, 0, v___f_1011_);
v___x_1037_ = lean_box(v___y_1004_);
v___x_1038_ = lean_apply_2(v_toPure_997_, lean_box(0), v___x_1037_);
v___x_1039_ = lean_apply_4(v_toBind_999_, lean_box(0), lean_box(0), v___x_1038_, v___f_1036_);
return v___x_1039_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__6___boxed(lean_object* v_env_1040_, lean_object* v_p_1041_, lean_object* v_ictx_1042_, lean_object* v_s_1043_, lean_object* v_toPure_1044_, lean_object* v___x_1045_, lean_object* v_toBind_1046_, lean_object* v_inst_1047_, lean_object* v_inst_1048_, lean_object* v_inst_1049_, lean_object* v_inst_1050_, lean_object* v___y_1051_, lean_object* v_____do__lift_1052_){
_start:
{
uint8_t v___x_816__boxed_1053_; uint8_t v___y_821__boxed_1054_; lean_object* v_res_1055_; 
v___x_816__boxed_1053_ = lean_unbox(v___x_1045_);
v___y_821__boxed_1054_ = lean_unbox(v___y_1051_);
v_res_1055_ = l_Lean_Doc_parseStrLit_x27___redArg___lam__6(v_env_1040_, v_p_1041_, v_ictx_1042_, v_s_1043_, v_toPure_1044_, v___x_816__boxed_1053_, v_toBind_1046_, v_inst_1047_, v_inst_1048_, v_inst_1049_, v_inst_1050_, v___y_821__boxed_1054_, v_____do__lift_1052_);
return v_res_1055_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__3(lean_object* v_source_1056_, uint8_t v___x_1057_, lean_object* v___y_1058_, lean_object* v_env_1059_, lean_object* v_p_1060_, lean_object* v_toPure_1061_, lean_object* v_toBind_1062_, lean_object* v_inst_1063_, lean_object* v_inst_1064_, lean_object* v_inst_1065_, lean_object* v_inst_1066_, uint8_t v___y_1067_, lean_object* v___x_1068_, lean_object* v___x_1069_, lean_object* v_____do__lift_1070_){
_start:
{
lean_object* v_ictx_1071_; lean_object* v___x_1072_; lean_object* v___y_1074_; 
lean_inc_ref(v_source_1056_);
v_ictx_1071_ = l_Lean_Parser_mkInputContext___redArg(v_source_1056_, v_____do__lift_1070_, v___x_1057_, v___y_1058_);
v___x_1072_ = l_Lean_Parser_mkParserState(v_source_1056_);
lean_dec_ref(v_source_1056_);
if (lean_obj_tag(v___x_1068_) == 0)
{
lean_object* v___x_1080_; lean_object* v___x_1081_; 
v___x_1080_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__3, &l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__3_once, _init_l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__3);
v___x_1081_ = l_panic___redArg(v___x_1069_, v___x_1080_);
v___y_1074_ = v___x_1081_;
goto v___jp_1073_;
}
else
{
lean_object* v_val_1082_; 
v_val_1082_ = lean_ctor_get(v___x_1068_, 0);
lean_inc(v_val_1082_);
lean_dec_ref_known(v___x_1068_, 1);
v___y_1074_ = v_val_1082_;
goto v___jp_1073_;
}
v___jp_1073_:
{
lean_object* v_s_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___f_1078_; lean_object* v___x_1079_; 
v_s_1075_ = l_Lean_Parser_ParserState_setPos(v___x_1072_, v___y_1074_);
v___x_1076_ = lean_box(v___x_1057_);
v___x_1077_ = lean_box(v___y_1067_);
lean_inc(v_inst_1066_);
lean_inc(v_toBind_1062_);
v___f_1078_ = lean_alloc_closure((void*)(l_Lean_Doc_parseStrLit_x27___redArg___lam__6___boxed), 13, 12);
lean_closure_set(v___f_1078_, 0, v_env_1059_);
lean_closure_set(v___f_1078_, 1, v_p_1060_);
lean_closure_set(v___f_1078_, 2, v_ictx_1071_);
lean_closure_set(v___f_1078_, 3, v_s_1075_);
lean_closure_set(v___f_1078_, 4, v_toPure_1061_);
lean_closure_set(v___f_1078_, 5, v___x_1076_);
lean_closure_set(v___f_1078_, 6, v_toBind_1062_);
lean_closure_set(v___f_1078_, 7, v_inst_1063_);
lean_closure_set(v___f_1078_, 8, v_inst_1064_);
lean_closure_set(v___f_1078_, 9, v_inst_1065_);
lean_closure_set(v___f_1078_, 10, v_inst_1066_);
lean_closure_set(v___f_1078_, 11, v___x_1077_);
v___x_1079_ = lean_apply_4(v_toBind_1062_, lean_box(0), lean_box(0), v_inst_1066_, v___f_1078_);
return v___x_1079_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__3___boxed(lean_object* v_source_1083_, lean_object* v___x_1084_, lean_object* v___y_1085_, lean_object* v_env_1086_, lean_object* v_p_1087_, lean_object* v_toPure_1088_, lean_object* v_toBind_1089_, lean_object* v_inst_1090_, lean_object* v_inst_1091_, lean_object* v_inst_1092_, lean_object* v_inst_1093_, lean_object* v___y_1094_, lean_object* v___x_1095_, lean_object* v___x_1096_, lean_object* v_____do__lift_1097_){
_start:
{
uint8_t v___x_911__boxed_1098_; uint8_t v___y_917__boxed_1099_; lean_object* v_res_1100_; 
v___x_911__boxed_1098_ = lean_unbox(v___x_1084_);
v___y_917__boxed_1099_ = lean_unbox(v___y_1094_);
v_res_1100_ = l_Lean_Doc_parseStrLit_x27___redArg___lam__3(v_source_1083_, v___x_911__boxed_1098_, v___y_1085_, v_env_1086_, v_p_1087_, v_toPure_1088_, v_toBind_1089_, v_inst_1090_, v_inst_1091_, v_inst_1092_, v_inst_1093_, v___y_917__boxed_1099_, v___x_1095_, v___x_1096_, v_____do__lift_1097_);
lean_dec(v___x_1096_);
return v_res_1100_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__4(lean_object* v_text_1101_, lean_object* v_inst_1102_, uint8_t v___x_1103_, lean_object* v_p_1104_, lean_object* v_toPure_1105_, lean_object* v_toBind_1106_, lean_object* v_inst_1107_, lean_object* v_inst_1108_, lean_object* v_inst_1109_, uint8_t v___y_1110_, lean_object* v___x_1111_, lean_object* v___x_1112_, lean_object* v_s_1113_, lean_object* v_env_1114_){
_start:
{
lean_object* v___y_1116_; lean_object* v___y_1117_; lean_object* v___y_1124_; lean_object* v___x_1128_; 
v___x_1128_ = l_Lean_Syntax_getTailPos_x3f(v_s_1113_, v___x_1103_);
if (lean_obj_tag(v___x_1128_) == 0)
{
lean_object* v___x_1129_; lean_object* v___x_1130_; 
v___x_1129_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__3, &l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__3_once, _init_l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__3);
v___x_1130_ = l_panic___redArg(v___x_1112_, v___x_1129_);
v___y_1124_ = v___x_1130_;
goto v___jp_1123_;
}
else
{
lean_object* v_val_1131_; 
v_val_1131_ = lean_ctor_get(v___x_1128_, 0);
lean_inc(v_val_1131_);
lean_dec_ref_known(v___x_1128_, 1);
v___y_1124_ = v_val_1131_;
goto v___jp_1123_;
}
v___jp_1115_:
{
lean_object* v_getFileName_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___f_1121_; lean_object* v___x_1122_; 
v_getFileName_1118_ = lean_ctor_get(v_inst_1102_, 2);
lean_inc(v_getFileName_1118_);
v___x_1119_ = lean_box(v___x_1103_);
v___x_1120_ = lean_box(v___y_1110_);
lean_inc(v_toBind_1106_);
v___f_1121_ = lean_alloc_closure((void*)(l_Lean_Doc_parseStrLit_x27___redArg___lam__3___boxed), 15, 14);
lean_closure_set(v___f_1121_, 0, v___y_1116_);
lean_closure_set(v___f_1121_, 1, v___x_1119_);
lean_closure_set(v___f_1121_, 2, v___y_1117_);
lean_closure_set(v___f_1121_, 3, v_env_1114_);
lean_closure_set(v___f_1121_, 4, v_p_1104_);
lean_closure_set(v___f_1121_, 5, v_toPure_1105_);
lean_closure_set(v___f_1121_, 6, v_toBind_1106_);
lean_closure_set(v___f_1121_, 7, v_inst_1107_);
lean_closure_set(v___f_1121_, 8, v_inst_1102_);
lean_closure_set(v___f_1121_, 9, v_inst_1108_);
lean_closure_set(v___f_1121_, 10, v_inst_1109_);
lean_closure_set(v___f_1121_, 11, v___x_1120_);
lean_closure_set(v___f_1121_, 12, v___x_1111_);
lean_closure_set(v___f_1121_, 13, v___x_1112_);
v___x_1122_ = lean_apply_4(v_toBind_1106_, lean_box(0), lean_box(0), v_getFileName_1118_, v___f_1121_);
return v___x_1122_;
}
v___jp_1123_:
{
lean_object* v_source_1125_; lean_object* v___x_1126_; uint8_t v___x_1127_; 
v_source_1125_ = lean_ctor_get(v_text_1101_, 0);
lean_inc_ref(v_source_1125_);
lean_dec_ref(v_text_1101_);
v___x_1126_ = lean_string_utf8_byte_size(v_source_1125_);
v___x_1127_ = lean_nat_dec_le(v___y_1124_, v___x_1126_);
if (v___x_1127_ == 0)
{
lean_dec(v___y_1124_);
v___y_1116_ = v_source_1125_;
v___y_1117_ = v___x_1126_;
goto v___jp_1115_;
}
else
{
v___y_1116_ = v_source_1125_;
v___y_1117_ = v___y_1124_;
goto v___jp_1115_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__4___boxed(lean_object* v_text_1132_, lean_object* v_inst_1133_, lean_object* v___x_1134_, lean_object* v_p_1135_, lean_object* v_toPure_1136_, lean_object* v_toBind_1137_, lean_object* v_inst_1138_, lean_object* v_inst_1139_, lean_object* v_inst_1140_, lean_object* v___y_1141_, lean_object* v___x_1142_, lean_object* v___x_1143_, lean_object* v_s_1144_, lean_object* v_env_1145_){
_start:
{
uint8_t v___x_977__boxed_1146_; uint8_t v___y_981__boxed_1147_; lean_object* v_res_1148_; 
v___x_977__boxed_1146_ = lean_unbox(v___x_1134_);
v___y_981__boxed_1147_ = lean_unbox(v___y_1141_);
v_res_1148_ = l_Lean_Doc_parseStrLit_x27___redArg___lam__4(v_text_1132_, v_inst_1133_, v___x_977__boxed_1146_, v_p_1135_, v_toPure_1136_, v_toBind_1137_, v_inst_1138_, v_inst_1139_, v_inst_1140_, v___y_981__boxed_1147_, v___x_1142_, v___x_1143_, v_s_1144_, v_env_1145_);
lean_dec(v_s_1144_);
return v_res_1148_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__5(lean_object* v_inst_1149_, lean_object* v_inst_1150_, uint8_t v___x_1151_, lean_object* v_p_1152_, lean_object* v_toPure_1153_, lean_object* v_toBind_1154_, lean_object* v_inst_1155_, lean_object* v_inst_1156_, lean_object* v_inst_1157_, uint8_t v___y_1158_, lean_object* v___x_1159_, lean_object* v___x_1160_, lean_object* v_s_1161_, lean_object* v_text_1162_){
_start:
{
lean_object* v_getEnv_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___f_1166_; lean_object* v___x_1167_; 
v_getEnv_1163_ = lean_ctor_get(v_inst_1149_, 0);
lean_inc(v_getEnv_1163_);
lean_dec_ref(v_inst_1149_);
v___x_1164_ = lean_box(v___x_1151_);
v___x_1165_ = lean_box(v___y_1158_);
lean_inc(v_toBind_1154_);
v___f_1166_ = lean_alloc_closure((void*)(l_Lean_Doc_parseStrLit_x27___redArg___lam__4___boxed), 14, 13);
lean_closure_set(v___f_1166_, 0, v_text_1162_);
lean_closure_set(v___f_1166_, 1, v_inst_1150_);
lean_closure_set(v___f_1166_, 2, v___x_1164_);
lean_closure_set(v___f_1166_, 3, v_p_1152_);
lean_closure_set(v___f_1166_, 4, v_toPure_1153_);
lean_closure_set(v___f_1166_, 5, v_toBind_1154_);
lean_closure_set(v___f_1166_, 6, v_inst_1155_);
lean_closure_set(v___f_1166_, 7, v_inst_1156_);
lean_closure_set(v___f_1166_, 8, v_inst_1157_);
lean_closure_set(v___f_1166_, 9, v___x_1165_);
lean_closure_set(v___f_1166_, 10, v___x_1159_);
lean_closure_set(v___f_1166_, 11, v___x_1160_);
lean_closure_set(v___f_1166_, 12, v_s_1161_);
v___x_1167_ = lean_apply_4(v_toBind_1154_, lean_box(0), lean_box(0), v_getEnv_1163_, v___f_1166_);
return v___x_1167_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__5___boxed(lean_object* v_inst_1168_, lean_object* v_inst_1169_, lean_object* v___x_1170_, lean_object* v_p_1171_, lean_object* v_toPure_1172_, lean_object* v_toBind_1173_, lean_object* v_inst_1174_, lean_object* v_inst_1175_, lean_object* v_inst_1176_, lean_object* v___y_1177_, lean_object* v___x_1178_, lean_object* v___x_1179_, lean_object* v_s_1180_, lean_object* v_text_1181_){
_start:
{
uint8_t v___x_1037__boxed_1182_; uint8_t v___y_1041__boxed_1183_; lean_object* v_res_1184_; 
v___x_1037__boxed_1182_ = lean_unbox(v___x_1170_);
v___y_1041__boxed_1183_ = lean_unbox(v___y_1177_);
v_res_1184_ = l_Lean_Doc_parseStrLit_x27___redArg___lam__5(v_inst_1168_, v_inst_1169_, v___x_1037__boxed_1182_, v_p_1171_, v_toPure_1172_, v_toBind_1173_, v_inst_1174_, v_inst_1175_, v_inst_1176_, v___y_1041__boxed_1183_, v___x_1178_, v___x_1179_, v_s_1180_, v_text_1181_);
return v_res_1184_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__7(lean_object* v_st_1185_, lean_object* v_toPure_1186_, uint8_t v_err_1187_){
_start:
{
lean_object* v_stxStack_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; 
v_stxStack_1188_ = lean_ctor_get(v_st_1185_, 0);
v___x_1189_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_1188_);
v___x_1190_ = lean_box(v_err_1187_);
v___x_1191_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1191_, 0, v___x_1189_);
lean_ctor_set(v___x_1191_, 1, v___x_1190_);
v___x_1192_ = lean_apply_2(v_toPure_1186_, lean_box(0), v___x_1191_);
return v___x_1192_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__7___boxed(lean_object* v_st_1193_, lean_object* v_toPure_1194_, lean_object* v_err_1195_){
_start:
{
uint8_t v_err_boxed_1196_; lean_object* v_res_1197_; 
v_err_boxed_1196_ = lean_unbox(v_err_1195_);
v_res_1197_ = l_Lean_Doc_parseStrLit_x27___redArg___lam__7(v_st_1193_, v_toPure_1194_, v_err_boxed_1196_);
lean_dec_ref(v_st_1193_);
return v_res_1197_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__13(lean_object* v_env_1198_, lean_object* v_contents_1199_, lean_object* v_p_1200_, lean_object* v_ictx_1201_, lean_object* v_toPure_1202_, uint8_t v___x_1203_, lean_object* v_toBind_1204_, lean_object* v_inst_1205_, lean_object* v_inst_1206_, lean_object* v_inst_1207_, lean_object* v_inst_1208_, lean_object* v_____do__lift_1209_){
_start:
{
lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v_st_1215_; lean_object* v___f_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; uint8_t v___x_1220_; 
v___x_1210_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg___lam__0___closed__0, &l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg___lam__0___closed__0_once, _init_l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg___lam__0___closed__0);
v___x_1211_ = lean_box(0);
lean_inc_ref(v_env_1198_);
v___x_1212_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1212_, 0, v_env_1198_);
lean_ctor_set(v___x_1212_, 1, v_____do__lift_1209_);
lean_ctor_set(v___x_1212_, 2, v___x_1210_);
lean_ctor_set(v___x_1212_, 3, v___x_1211_);
v___x_1213_ = l_Lean_Parser_getTokenTable(v_env_1198_);
v___x_1214_ = l_Lean_Parser_mkParserState(v_contents_1199_);
lean_inc_ref(v_ictx_1201_);
v_st_1215_ = l_Lean_Parser_ParserFn_run(v_p_1200_, v_ictx_1201_, v___x_1212_, v___x_1213_, v___x_1214_);
lean_inc(v_toPure_1202_);
lean_inc_ref_n(v_st_1215_, 2);
v___f_1216_ = lean_alloc_closure((void*)(l_Lean_Doc_parseStrLit_x27___redArg___lam__7___boxed), 3, 2);
lean_closure_set(v___f_1216_, 0, v_st_1215_);
lean_closure_set(v___f_1216_, 1, v_toPure_1202_);
v___x_1217_ = l_Lean_Parser_ParserState_allErrors(v_st_1215_);
v___x_1218_ = lean_array_get_size(v___x_1217_);
lean_dec_ref(v___x_1217_);
v___x_1219_ = lean_unsigned_to_nat(0u);
v___x_1220_ = lean_nat_dec_eq(v___x_1218_, v___x_1219_);
if (v___x_1220_ == 0)
{
lean_object* v___f_1221_; lean_object* v___x_1222_; lean_object* v___f_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; 
v___f_1221_ = lean_alloc_closure((void*)(l_Lean_Doc_parseStrLit_x27___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_1221_, 0, v___f_1216_);
v___x_1222_ = lean_box(v___x_1203_);
lean_inc(v_toBind_1204_);
v___f_1223_ = lean_alloc_closure((void*)(l_Lean_Doc_parseStrLit_x27___redArg___lam__2___boxed), 5, 4);
lean_closure_set(v___f_1223_, 0, v_toPure_1202_);
lean_closure_set(v___f_1223_, 1, v___x_1222_);
lean_closure_set(v___f_1223_, 2, v_toBind_1204_);
lean_closure_set(v___f_1223_, 3, v___f_1221_);
v___x_1224_ = l_Lean_Parser_ParserState_toErrorMsg(v_ictx_1201_, v_st_1215_);
v___x_1225_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1225_, 0, v___x_1224_);
v___x_1226_ = l_Lean_MessageData_ofFormat(v___x_1225_);
v___x_1227_ = l_Lean_logError___redArg(v_inst_1205_, v_inst_1206_, v_inst_1207_, v_inst_1208_, v___x_1226_);
v___x_1228_ = lean_apply_4(v_toBind_1204_, lean_box(0), lean_box(0), v___x_1227_, v___f_1223_);
return v___x_1228_;
}
else
{
lean_object* v_pos_1229_; uint8_t v___x_1230_; 
v_pos_1229_ = lean_ctor_get(v_st_1215_, 2);
lean_inc(v_pos_1229_);
v___x_1230_ = l_Lean_Parser_InputContext_atEnd(v_ictx_1201_, v_pos_1229_);
lean_dec(v_pos_1229_);
if (v___x_1230_ == 0)
{
lean_object* v___f_1231_; lean_object* v___x_1232_; lean_object* v___f_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; 
v___f_1231_ = lean_alloc_closure((void*)(l_Lean_Doc_parseStrLit_x27___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_1231_, 0, v___f_1216_);
v___x_1232_ = lean_box(v___x_1203_);
lean_inc(v_toBind_1204_);
v___f_1233_ = lean_alloc_closure((void*)(l_Lean_Doc_parseStrLit_x27___redArg___lam__2___boxed), 5, 4);
lean_closure_set(v___f_1233_, 0, v_toPure_1202_);
lean_closure_set(v___f_1233_, 1, v___x_1232_);
lean_closure_set(v___f_1233_, 2, v_toBind_1204_);
lean_closure_set(v___f_1233_, 3, v___f_1231_);
v___x_1234_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg___lam__0___closed__1));
v___x_1235_ = l_Lean_Parser_ParserState_mkError(v_st_1215_, v___x_1234_);
v___x_1236_ = l_Lean_Parser_ParserState_toErrorMsg(v_ictx_1201_, v___x_1235_);
v___x_1237_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1237_, 0, v___x_1236_);
v___x_1238_ = l_Lean_MessageData_ofFormat(v___x_1237_);
v___x_1239_ = l_Lean_logError___redArg(v_inst_1205_, v_inst_1206_, v_inst_1207_, v_inst_1208_, v___x_1238_);
v___x_1240_ = lean_apply_4(v_toBind_1204_, lean_box(0), lean_box(0), v___x_1239_, v___f_1233_);
return v___x_1240_;
}
else
{
lean_object* v___f_1241_; uint8_t v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; 
lean_dec_ref(v_st_1215_);
lean_dec(v_inst_1208_);
lean_dec(v_inst_1207_);
lean_dec_ref(v_inst_1206_);
lean_dec_ref(v_inst_1205_);
lean_dec_ref(v_ictx_1201_);
v___f_1241_ = lean_alloc_closure((void*)(l_Lean_Doc_parseStrLit_x27___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_1241_, 0, v___f_1216_);
v___x_1242_ = 0;
v___x_1243_ = lean_box(v___x_1242_);
v___x_1244_ = lean_apply_2(v_toPure_1202_, lean_box(0), v___x_1243_);
v___x_1245_ = lean_apply_4(v_toBind_1204_, lean_box(0), lean_box(0), v___x_1244_, v___f_1241_);
return v___x_1245_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__13___boxed(lean_object* v_env_1246_, lean_object* v_contents_1247_, lean_object* v_p_1248_, lean_object* v_ictx_1249_, lean_object* v_toPure_1250_, lean_object* v___x_1251_, lean_object* v_toBind_1252_, lean_object* v_inst_1253_, lean_object* v_inst_1254_, lean_object* v_inst_1255_, lean_object* v_inst_1256_, lean_object* v_____do__lift_1257_){
_start:
{
uint8_t v___x_1081__boxed_1258_; lean_object* v_res_1259_; 
v___x_1081__boxed_1258_ = lean_unbox(v___x_1251_);
v_res_1259_ = l_Lean_Doc_parseStrLit_x27___redArg___lam__13(v_env_1246_, v_contents_1247_, v_p_1248_, v_ictx_1249_, v_toPure_1250_, v___x_1081__boxed_1258_, v_toBind_1252_, v_inst_1253_, v_inst_1254_, v_inst_1255_, v_inst_1256_, v_____do__lift_1257_);
lean_dec_ref(v_contents_1247_);
return v_res_1259_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__8(lean_object* v_contents_1260_, uint8_t v___x_1261_, lean_object* v_env_1262_, lean_object* v_p_1263_, lean_object* v_toPure_1264_, lean_object* v_toBind_1265_, lean_object* v_inst_1266_, lean_object* v_inst_1267_, lean_object* v_inst_1268_, lean_object* v_inst_1269_, lean_object* v_____do__lift_1270_){
_start:
{
lean_object* v___x_1271_; lean_object* v_ictx_1272_; lean_object* v___x_1273_; lean_object* v___f_1274_; lean_object* v___x_1275_; 
v___x_1271_ = lean_string_utf8_byte_size(v_contents_1260_);
lean_inc_ref(v_contents_1260_);
v_ictx_1272_ = l_Lean_Parser_mkInputContext___redArg(v_contents_1260_, v_____do__lift_1270_, v___x_1261_, v___x_1271_);
v___x_1273_ = lean_box(v___x_1261_);
lean_inc(v_inst_1269_);
lean_inc(v_toBind_1265_);
v___f_1274_ = lean_alloc_closure((void*)(l_Lean_Doc_parseStrLit_x27___redArg___lam__13___boxed), 12, 11);
lean_closure_set(v___f_1274_, 0, v_env_1262_);
lean_closure_set(v___f_1274_, 1, v_contents_1260_);
lean_closure_set(v___f_1274_, 2, v_p_1263_);
lean_closure_set(v___f_1274_, 3, v_ictx_1272_);
lean_closure_set(v___f_1274_, 4, v_toPure_1264_);
lean_closure_set(v___f_1274_, 5, v___x_1273_);
lean_closure_set(v___f_1274_, 6, v_toBind_1265_);
lean_closure_set(v___f_1274_, 7, v_inst_1266_);
lean_closure_set(v___f_1274_, 8, v_inst_1267_);
lean_closure_set(v___f_1274_, 9, v_inst_1268_);
lean_closure_set(v___f_1274_, 10, v_inst_1269_);
v___x_1275_ = lean_apply_4(v_toBind_1265_, lean_box(0), lean_box(0), v_inst_1269_, v___f_1274_);
return v___x_1275_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__8___boxed(lean_object* v_contents_1276_, lean_object* v___x_1277_, lean_object* v_env_1278_, lean_object* v_p_1279_, lean_object* v_toPure_1280_, lean_object* v_toBind_1281_, lean_object* v_inst_1282_, lean_object* v_inst_1283_, lean_object* v_inst_1284_, lean_object* v_inst_1285_, lean_object* v_____do__lift_1286_){
_start:
{
uint8_t v___x_1168__boxed_1287_; lean_object* v_res_1288_; 
v___x_1168__boxed_1287_ = lean_unbox(v___x_1277_);
v_res_1288_ = l_Lean_Doc_parseStrLit_x27___redArg___lam__8(v_contents_1276_, v___x_1168__boxed_1287_, v_env_1278_, v_p_1279_, v_toPure_1280_, v_toBind_1281_, v_inst_1282_, v_inst_1283_, v_inst_1284_, v_inst_1285_, v_____do__lift_1286_);
return v_res_1288_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__9(lean_object* v_inst_1289_, lean_object* v_contents_1290_, uint8_t v___x_1291_, lean_object* v_p_1292_, lean_object* v_toPure_1293_, lean_object* v_toBind_1294_, lean_object* v_inst_1295_, lean_object* v_inst_1296_, lean_object* v_inst_1297_, lean_object* v_env_1298_){
_start:
{
lean_object* v_getFileName_1299_; lean_object* v___x_1300_; lean_object* v___f_1301_; lean_object* v___x_1302_; 
v_getFileName_1299_ = lean_ctor_get(v_inst_1289_, 2);
lean_inc(v_getFileName_1299_);
v___x_1300_ = lean_box(v___x_1291_);
lean_inc(v_toBind_1294_);
v___f_1301_ = lean_alloc_closure((void*)(l_Lean_Doc_parseStrLit_x27___redArg___lam__8___boxed), 11, 10);
lean_closure_set(v___f_1301_, 0, v_contents_1290_);
lean_closure_set(v___f_1301_, 1, v___x_1300_);
lean_closure_set(v___f_1301_, 2, v_env_1298_);
lean_closure_set(v___f_1301_, 3, v_p_1292_);
lean_closure_set(v___f_1301_, 4, v_toPure_1293_);
lean_closure_set(v___f_1301_, 5, v_toBind_1294_);
lean_closure_set(v___f_1301_, 6, v_inst_1295_);
lean_closure_set(v___f_1301_, 7, v_inst_1289_);
lean_closure_set(v___f_1301_, 8, v_inst_1296_);
lean_closure_set(v___f_1301_, 9, v_inst_1297_);
v___x_1302_ = lean_apply_4(v_toBind_1294_, lean_box(0), lean_box(0), v_getFileName_1299_, v___f_1301_);
return v___x_1302_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__9___boxed(lean_object* v_inst_1303_, lean_object* v_contents_1304_, lean_object* v___x_1305_, lean_object* v_p_1306_, lean_object* v_toPure_1307_, lean_object* v_toBind_1308_, lean_object* v_inst_1309_, lean_object* v_inst_1310_, lean_object* v_inst_1311_, lean_object* v_env_1312_){
_start:
{
uint8_t v___x_1195__boxed_1313_; lean_object* v_res_1314_; 
v___x_1195__boxed_1313_ = lean_unbox(v___x_1305_);
v_res_1314_ = l_Lean_Doc_parseStrLit_x27___redArg___lam__9(v_inst_1303_, v_contents_1304_, v___x_1195__boxed_1313_, v_p_1306_, v_toPure_1307_, v_toBind_1308_, v_inst_1309_, v_inst_1310_, v_inst_1311_, v_env_1312_);
return v_res_1314_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg(lean_object* v_inst_1315_, lean_object* v_inst_1316_, lean_object* v_inst_1317_, lean_object* v_inst_1318_, lean_object* v_inst_1319_, lean_object* v_inst_1320_, lean_object* v_p_1321_, lean_object* v_s_1322_){
_start:
{
lean_object* v___x_1323_; uint8_t v___x_1324_; lean_object* v___x_1325_; uint8_t v___y_1327_; 
v___x_1323_ = lean_unsigned_to_nat(0u);
v___x_1324_ = 1;
v___x_1325_ = l_Lean_Syntax_getPos_x3f(v_s_1322_, v___x_1324_);
if (lean_obj_tag(v___x_1325_) == 0)
{
v___y_1327_ = v___x_1324_;
goto v___jp_1326_;
}
else
{
uint8_t v___x_1343_; 
v___x_1343_ = 0;
v___y_1327_ = v___x_1343_;
goto v___jp_1326_;
}
v___jp_1326_:
{
if (v___y_1327_ == 0)
{
lean_object* v_toApplicative_1328_; lean_object* v_toBind_1329_; lean_object* v_toPure_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___f_1333_; lean_object* v___x_1334_; 
v_toApplicative_1328_ = lean_ctor_get(v_inst_1315_, 0);
v_toBind_1329_ = lean_ctor_get(v_inst_1315_, 1);
lean_inc_n(v_toBind_1329_, 2);
v_toPure_1330_ = lean_ctor_get(v_toApplicative_1328_, 1);
lean_inc(v_toPure_1330_);
v___x_1331_ = lean_box(v___x_1324_);
v___x_1332_ = lean_box(v___y_1327_);
v___f_1333_ = lean_alloc_closure((void*)(l_Lean_Doc_parseStrLit_x27___redArg___lam__5___boxed), 14, 13);
lean_closure_set(v___f_1333_, 0, v_inst_1317_);
lean_closure_set(v___f_1333_, 1, v_inst_1319_);
lean_closure_set(v___f_1333_, 2, v___x_1331_);
lean_closure_set(v___f_1333_, 3, v_p_1321_);
lean_closure_set(v___f_1333_, 4, v_toPure_1330_);
lean_closure_set(v___f_1333_, 5, v_toBind_1329_);
lean_closure_set(v___f_1333_, 6, v_inst_1315_);
lean_closure_set(v___f_1333_, 7, v_inst_1318_);
lean_closure_set(v___f_1333_, 8, v_inst_1320_);
lean_closure_set(v___f_1333_, 9, v___x_1332_);
lean_closure_set(v___f_1333_, 10, v___x_1325_);
lean_closure_set(v___f_1333_, 11, v___x_1323_);
lean_closure_set(v___f_1333_, 12, v_s_1322_);
v___x_1334_ = lean_apply_4(v_toBind_1329_, lean_box(0), lean_box(0), v_inst_1316_, v___f_1333_);
return v___x_1334_;
}
else
{
lean_object* v_toApplicative_1335_; lean_object* v_toBind_1336_; lean_object* v_toPure_1337_; lean_object* v_getEnv_1338_; lean_object* v_contents_1339_; lean_object* v___x_1340_; lean_object* v___f_1341_; lean_object* v___x_1342_; 
v_toApplicative_1335_ = lean_ctor_get(v_inst_1315_, 0);
lean_dec(v___x_1325_);
lean_dec(v_inst_1316_);
v_toBind_1336_ = lean_ctor_get(v_inst_1315_, 1);
lean_inc_n(v_toBind_1336_, 2);
v_toPure_1337_ = lean_ctor_get(v_toApplicative_1335_, 1);
lean_inc(v_toPure_1337_);
v_getEnv_1338_ = lean_ctor_get(v_inst_1317_, 0);
lean_inc(v_getEnv_1338_);
lean_dec_ref(v_inst_1317_);
v_contents_1339_ = l_Lean_TSyntax_getString(v_s_1322_);
lean_dec(v_s_1322_);
v___x_1340_ = lean_box(v___x_1324_);
v___f_1341_ = lean_alloc_closure((void*)(l_Lean_Doc_parseStrLit_x27___redArg___lam__9___boxed), 10, 9);
lean_closure_set(v___f_1341_, 0, v_inst_1319_);
lean_closure_set(v___f_1341_, 1, v_contents_1339_);
lean_closure_set(v___f_1341_, 2, v___x_1340_);
lean_closure_set(v___f_1341_, 3, v_p_1321_);
lean_closure_set(v___f_1341_, 4, v_toPure_1337_);
lean_closure_set(v___f_1341_, 5, v_toBind_1336_);
lean_closure_set(v___f_1341_, 6, v_inst_1315_);
lean_closure_set(v___f_1341_, 7, v_inst_1318_);
lean_closure_set(v___f_1341_, 8, v_inst_1320_);
v___x_1342_ = lean_apply_4(v_toBind_1336_, lean_box(0), lean_box(0), v_getEnv_1338_, v___f_1341_);
return v___x_1342_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27(lean_object* v_m_1344_, lean_object* v_inst_1345_, lean_object* v_inst_1346_, lean_object* v_inst_1347_, lean_object* v_inst_1348_, lean_object* v_inst_1349_, lean_object* v_inst_1350_, lean_object* v_p_1351_, lean_object* v_s_1352_){
_start:
{
lean_object* v___x_1353_; 
v___x_1353_ = l_Lean_Doc_parseStrLit_x27___redArg(v_inst_1345_, v_inst_1346_, v_inst_1347_, v_inst_1348_, v_inst_1349_, v_inst_1350_, v_p_1351_, v_s_1352_);
return v___x_1353_;
}
}
lean_object* runtime_initialize_Lean_Parser_Extension(uint8_t builtin);
lean_object* runtime_initialize_Init_While(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_Attach(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_Mem(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_DocString_Builtin_Parsing(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Parser_Extension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_Attach(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_Mem(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_DocString_Builtin_Parsing(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Parser_Extension(uint8_t builtin);
lean_object* initialize_Init_While(uint8_t builtin);
lean_object* initialize_Init_Data_Array_Attach(uint8_t builtin);
lean_object* initialize_Init_Data_Array_Mem(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_DocString_Builtin_Parsing(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Parser_Extension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_Attach(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_Mem(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_DocString_Builtin_Parsing(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_DocString_Builtin_Parsing(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_DocString_Builtin_Parsing(builtin);
}
#ifdef __cplusplus
}
#endif

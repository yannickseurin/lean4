// Lean compiler output
// Module: Lean.Parser.Module
// Imports: public import Lean.Parser.Module.Syntax meta import Lean.Parser.Module.Syntax import Init.While meta import Lean.Parser.Extra
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
lean_object* l_Lean_Parser_tokenFn(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Parser_InputContext_atEnd(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Parser_categoryParser(lean_object*, lean_object*);
lean_object* l_Lean_Parser_withPosition(lean_object*);
lean_object* l_Lean_Parser_whitespace(lean_object*, lean_object*);
lean_object* l_Lean_Parser_andthenFn(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_getTokenTable(lean_object*);
extern lean_object* l_Lean_Parser_SyntaxStack_empty;
lean_object* l_Lean_Parser_initCacheForInput(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Parser_ParserFn_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Parser_Error_toString(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
lean_object* l_Lean_Parser_SyntaxStack_toSubarray(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Subarray_get___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailInfo(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isMissing(lean_object*);
lean_object* l_Lean_Syntax_getRange_x3f(lean_object*, uint8_t);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Parser_SyntaxStack_back(lean_object*);
uint8_t l_Lean_Parser_SyntaxStack_isEmpty(lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
lean_object* l_Char_utf8Size(uint32_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isAntiquot(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getHeadInfo_x3f(lean_object*);
lean_object* l_Lean_Syntax_setHeadInfo(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedPersistentArrayNode_default___redArg();
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* l_IO_FS_readFile(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Lean_Parser_mkInputContext___redArg(lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_mkEmptyEnvironment(uint32_t);
extern lean_object* l_Lean_Parser_Module_header;
lean_object* l_Lean_Parser_addParserTokens(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Data_Trie_empty___redArg();
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Parser_mkParserState(lean_object*);
uint8_t l_Lean_Parser_instBEqError_beq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Lean_Parser_ParserState_allErrors(lean_object*);
lean_object* l_Lean_Message_toString(lean_object*, uint8_t);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_get_stdout();
lean_object* lean_mk_io_user_error(lean_object*);
uint8_t l_Lean_MessageLog_hasUnreported(lean_object*);
lean_object* l_Lean_mkListNode(lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Parser_Module_updateTokens_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Parser_Module_updateTokens_spec__0___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Parser_Module_updateTokens_spec__0(lean_object*);
static const lean_string_object l_Lean_Parser_Module_updateTokens___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Lean.Parser.Module"};
static const lean_object* l_Lean_Parser_Module_updateTokens___closed__0 = (const lean_object*)&l_Lean_Parser_Module_updateTokens___closed__0_value;
static const lean_string_object l_Lean_Parser_Module_updateTokens___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lean.Parser.Module.updateTokens"};
static const lean_object* l_Lean_Parser_Module_updateTokens___closed__1 = (const lean_object*)&l_Lean_Parser_Module_updateTokens___closed__1_value;
static const lean_string_object l_Lean_Parser_Module_updateTokens___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_Parser_Module_updateTokens___closed__2 = (const lean_object*)&l_Lean_Parser_Module_updateTokens___closed__2_value;
static lean_once_cell_t l_Lean_Parser_Module_updateTokens___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Module_updateTokens___closed__3;
LEAN_EXPORT lean_object* l_Lean_Parser_Module_updateTokens(lean_object*);
static const lean_ctor_object l_Lean_Parser_instInhabitedModuleParserState_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 1, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Parser_instInhabitedModuleParserState_default___closed__0 = (const lean_object*)&l_Lean_Parser_instInhabitedModuleParserState_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instInhabitedModuleParserState_default = (const lean_object*)&l_Lean_Parser_instInhabitedModuleParserState_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instInhabitedModuleParserState = (const lean_object*)&l_Lean_Parser_instInhabitedModuleParserState_default___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Subarray_0__Subarray_findSomeRevM_x3f_find___at___00__private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage_lastTrailing_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Subarray_0__Subarray_findSomeRevM_x3f_find___at___00__private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage_lastTrailing_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage_lastTrailing(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Subarray_0__Subarray_findSomeRevM_x3f_find___at___00__private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage_lastTrailing_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Subarray_0__Subarray_findSomeRevM_x3f_find___at___00__private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage_lastTrailing_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage___closed__0 = (const lean_object*)&l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage___closed__0_value;
static const lean_string_object l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "unexpected identifier"};
static const lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage___closed__1 = (const lean_object*)&l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "unexpected token '"};
static const lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage___closed__2 = (const lean_object*)&l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage___closed__2_value;
static const lean_string_object l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage___closed__3 = (const lean_object*)&l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage___closed__3_value;
static const lean_string_object l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "unexpected token"};
static const lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage___closed__4 = (const lean_object*)&l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_setStartOfFileLeading(lean_object*);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lean_Parser_parseHeader_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lean_Parser_parseHeader_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___lam__0(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Module"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "import"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__4_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__4_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(239, 68, 245, 129, 233, 83, 45, 77)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__4_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__3_value),LEAN_SCALAR_PTR_LITERAL(177, 219, 158, 40, 50, 143, 61, 44)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "cannot use `import all` without `module`"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__5_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__5_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__6_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__7;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "cannot use `meta import` without `module`"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__8_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__8_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__9_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__10;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "cannot use `all` with `public import`; consider using separate `public import "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__11 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__11_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "` and `import all "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__12 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__12_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 107, .m_capacity = 107, .m_length = 106, .m_data = "` directives in order to import public data into the public scope and private data into the private scope."};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__13 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__13_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "cannot use `public import` without `module`"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__14 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__14_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__14_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__15 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__15_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__16;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "all"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__17 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__17_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__18_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__18_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__18_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__18_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(239, 68, 245, 129, 233, 83, 45, 77)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__18_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__17_value),LEAN_SCALAR_PTR_LITERAL(107, 73, 92, 3, 207, 252, 164, 131)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__18 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__18_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__19 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__19_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__20_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__20_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__20_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__20_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(239, 68, 245, 129, 233, 83, 45, 77)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__20_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__19_value),LEAN_SCALAR_PTR_LITERAL(89, 228, 64, 55, 26, 167, 248, 235)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__20 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__20_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__21 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__21_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__22_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__22_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__22_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__22_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(239, 68, 245, 129, 233, 83, 45, 77)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__22_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__21_value),LEAN_SCALAR_PTR_LITERAL(198, 166, 14, 39, 152, 190, 236, 172)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__22 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__22_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_parseHeader___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_whitespace, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_parseHeader___closed__0 = (const lean_object*)&l_Lean_Parser_parseHeader___closed__0_value;
static lean_once_cell_t l_Lean_Parser_parseHeader___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_parseHeader___closed__1;
static const lean_string_object l_Lean_Parser_parseHeader___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "prelude"};
static const lean_object* l_Lean_Parser_parseHeader___closed__2 = (const lean_object*)&l_Lean_Parser_parseHeader___closed__2_value;
static lean_once_cell_t l_Lean_Parser_parseHeader___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_parseHeader___closed__3;
static lean_once_cell_t l_Lean_Parser_parseHeader___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_parseHeader___closed__4;
static lean_once_cell_t l_Lean_Parser_parseHeader___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_parseHeader___closed__5;
static const lean_string_object l_Lean_Parser_parseHeader___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "header"};
static const lean_object* l_Lean_Parser_parseHeader___closed__6 = (const lean_object*)&l_Lean_Parser_parseHeader___closed__6_value;
static const lean_ctor_object l_Lean_Parser_parseHeader___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_parseHeader___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_parseHeader___closed__7_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_parseHeader___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_parseHeader___closed__7_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(239, 68, 245, 129, 233, 83, 45, 77)}};
static const lean_ctor_object l_Lean_Parser_parseHeader___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_parseHeader___closed__7_value_aux_2),((lean_object*)&l_Lean_Parser_parseHeader___closed__6_value),LEAN_SCALAR_PTR_LITERAL(40, 173, 92, 3, 94, 219, 131, 202)}};
static const lean_object* l_Lean_Parser_parseHeader___closed__7 = (const lean_object*)&l_Lean_Parser_parseHeader___closed__7_value;
static const lean_string_object l_Lean_Parser_parseHeader___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "moduleTk"};
static const lean_object* l_Lean_Parser_parseHeader___closed__8 = (const lean_object*)&l_Lean_Parser_parseHeader___closed__8_value;
static const lean_ctor_object l_Lean_Parser_parseHeader___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_parseHeader___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_parseHeader___closed__9_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_parseHeader___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_parseHeader___closed__9_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(239, 68, 245, 129, 233, 83, 45, 77)}};
static const lean_ctor_object l_Lean_Parser_parseHeader___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_parseHeader___closed__9_value_aux_2),((lean_object*)&l_Lean_Parser_parseHeader___closed__8_value),LEAN_SCALAR_PTR_LITERAL(198, 239, 28, 252, 21, 233, 71, 221)}};
static const lean_object* l_Lean_Parser_parseHeader___closed__9 = (const lean_object*)&l_Lean_Parser_parseHeader___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Parser_parseHeader(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_parseHeader___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI___closed__0 = (const lean_object*)&l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI___closed__0_value;
static const lean_string_object l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "eoi"};
static const lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI___closed__1 = (const lean_object*)&l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI___closed__1_value;
static const lean_ctor_object l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI___closed__2_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI___closed__2_value_aux_1),((lean_object*)&l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI___closed__2_value_aux_2),((lean_object*)&l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI___closed__1_value),LEAN_SCALAR_PTR_LITERAL(26, 206, 8, 118, 9, 188, 233, 7)}};
static const lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI___closed__2 = (const lean_object*)&l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_isTerminalCommand___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "exit"};
static const lean_object* l_Lean_Parser_isTerminalCommand___closed__0 = (const lean_object*)&l_Lean_Parser_isTerminalCommand___closed__0_value;
static const lean_ctor_object l_Lean_Parser_isTerminalCommand___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_isTerminalCommand___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_isTerminalCommand___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_isTerminalCommand___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_isTerminalCommand___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Parser_isTerminalCommand___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_isTerminalCommand___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_isTerminalCommand___closed__0_value),LEAN_SCALAR_PTR_LITERAL(215, 245, 50, 125, 205, 155, 109, 0)}};
static const lean_object* l_Lean_Parser_isTerminalCommand___closed__1 = (const lean_object*)&l_Lean_Parser_isTerminalCommand___closed__1_value;
static const lean_ctor_object l_Lean_Parser_isTerminalCommand___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_isTerminalCommand___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_isTerminalCommand___closed__2_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_isTerminalCommand___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_isTerminalCommand___closed__2_value_aux_1),((lean_object*)&l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Parser_isTerminalCommand___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_isTerminalCommand___closed__2_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__3_value),LEAN_SCALAR_PTR_LITERAL(36, 144, 26, 198, 154, 96, 74, 167)}};
static const lean_object* l_Lean_Parser_isTerminalCommand___closed__2 = (const lean_object*)&l_Lean_Parser_isTerminalCommand___closed__2_value;
LEAN_EXPORT uint8_t l_Lean_Parser_isTerminalCommand(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_isTerminalCommand___boxed(lean_object*);
static const lean_array_object l___private_Lean_Parser_Module_0__Lean_Parser_consumeInput___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_consumeInput___closed__0 = (const lean_object*)&l___private_Lean_Parser_Module_0__Lean_Parser_consumeInput___closed__0_value;
static const lean_closure_object l___private_Lean_Parser_Module_0__Lean_Parser_consumeInput___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_tokenFn, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_consumeInput___closed__1 = (const lean_object*)&l___private_Lean_Parser_Module_0__Lean_Parser_consumeInput___closed__1_value;
static lean_once_cell_t l___private_Lean_Parser_Module_0__Lean_Parser_consumeInput___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_consumeInput___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_consumeInput(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_topLevelCommandParserFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "command"};
static const lean_object* l_Lean_Parser_topLevelCommandParserFn___closed__0 = (const lean_object*)&l_Lean_Parser_topLevelCommandParserFn___closed__0_value;
static const lean_ctor_object l_Lean_Parser_topLevelCommandParserFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_topLevelCommandParserFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(29, 69, 134, 125, 237, 175, 69, 70)}};
static const lean_object* l_Lean_Parser_topLevelCommandParserFn___closed__1 = (const lean_object*)&l_Lean_Parser_topLevelCommandParserFn___closed__1_value;
static lean_once_cell_t l_Lean_Parser_topLevelCommandParserFn___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_topLevelCommandParserFn___closed__2;
static lean_once_cell_t l_Lean_Parser_topLevelCommandParserFn___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_topLevelCommandParserFn___closed__3;
LEAN_EXPORT lean_object* l_Lean_Parser_topLevelCommandParserFn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseCommand_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseCommand_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Parser_parseCommand_spec__1___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Parser_parseCommand_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00Lean_Parser_parseCommand_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Parser_parseCommand_spec__1___redArg___closed__0;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Parser_parseCommand_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_parseCommand(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Parser_parseCommand_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3_spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "failed to parse file"};
static const lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse___closed__0 = (const lean_object*)&l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse___closed__0_value;
static lean_once_cell_t l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_testParseModuleAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_testParseModuleAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Parser_testParseModule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Parser_testParseModule___closed__0 = (const lean_object*)&l_Lean_Parser_testParseModule___closed__0_value;
static const lean_string_object l_Lean_Parser_testParseModule___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "module"};
static const lean_object* l_Lean_Parser_testParseModule___closed__1 = (const lean_object*)&l_Lean_Parser_testParseModule___closed__1_value;
static const lean_ctor_object l_Lean_Parser_testParseModule___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_testParseModule___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_testParseModule___closed__2_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_testParseModule___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_testParseModule___closed__2_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(239, 68, 245, 129, 233, 83, 45, 77)}};
static const lean_ctor_object l_Lean_Parser_testParseModule___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_testParseModule___closed__2_value_aux_2),((lean_object*)&l_Lean_Parser_testParseModule___closed__1_value),LEAN_SCALAR_PTR_LITERAL(59, 203, 142, 146, 93, 76, 229, 9)}};
static const lean_object* l_Lean_Parser_testParseModule___closed__2 = (const lean_object*)&l_Lean_Parser_testParseModule___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Parser_testParseModule(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_testParseModule___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_testParseFile(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_testParseFile___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_panic___at___00Lean_Parser_Module_updateTokens_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = l_Lean_Data_Trie_empty___redArg();
return v___x_1_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Parser_Module_updateTokens_spec__0(lean_object* v_msg_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = lean_obj_once(&l_panic___at___00Lean_Parser_Module_updateTokens_spec__0___closed__0, &l_panic___at___00Lean_Parser_Module_updateTokens_spec__0___closed__0_once, _init_l_panic___at___00Lean_Parser_Module_updateTokens_spec__0___closed__0);
v___x_4_ = lean_panic_fn_borrowed(v___x_3_, v_msg_2_);
return v___x_4_;
}
}
static lean_object* _init_l_Lean_Parser_Module_updateTokens___closed__3(void){
_start:
{
lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; 
v___x_8_ = ((lean_object*)(l_Lean_Parser_Module_updateTokens___closed__2));
v___x_9_ = lean_unsigned_to_nat(26u);
v___x_10_ = lean_unsigned_to_nat(24u);
v___x_11_ = ((lean_object*)(l_Lean_Parser_Module_updateTokens___closed__1));
v___x_12_ = ((lean_object*)(l_Lean_Parser_Module_updateTokens___closed__0));
v___x_13_ = l_mkPanicMessageWithDecl(v___x_12_, v___x_11_, v___x_10_, v___x_9_, v___x_8_);
return v___x_13_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Module_updateTokens(lean_object* v_tokens_14_){
_start:
{
lean_object* v___x_15_; lean_object* v_info_16_; lean_object* v___x_17_; 
v___x_15_ = l_Lean_Parser_Module_header;
v_info_16_ = lean_ctor_get(v___x_15_, 0);
lean_inc_ref(v_info_16_);
v___x_17_ = l_Lean_Parser_addParserTokens(v_tokens_14_, v_info_16_);
if (lean_obj_tag(v___x_17_) == 0)
{
lean_object* v___x_18_; lean_object* v___x_19_; 
lean_dec_ref_known(v___x_17_, 1);
v___x_18_ = lean_obj_once(&l_Lean_Parser_Module_updateTokens___closed__3, &l_Lean_Parser_Module_updateTokens___closed__3_once, _init_l_Lean_Parser_Module_updateTokens___closed__3);
v___x_19_ = l_panic___at___00Lean_Parser_Module_updateTokens_spec__0(v___x_18_);
return v___x_19_;
}
else
{
lean_object* v_a_20_; 
v_a_20_ = lean_ctor_get(v___x_17_, 0);
lean_inc(v_a_20_);
lean_dec_ref_known(v___x_17_, 1);
return v_a_20_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Subarray_0__Subarray_findSomeRevM_x3f_find___at___00__private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage_lastTrailing_spec__0___redArg(lean_object* v_as_27_, lean_object* v_i_28_){
_start:
{
lean_object* v_zero_29_; uint8_t v_isZero_30_; 
v_zero_29_ = lean_unsigned_to_nat(0u);
v_isZero_30_ = lean_nat_dec_eq(v_i_28_, v_zero_29_);
if (v_isZero_30_ == 1)
{
lean_object* v___x_31_; 
lean_dec(v_i_28_);
v___x_31_ = lean_box(0);
return v___x_31_;
}
else
{
lean_object* v_one_32_; lean_object* v_n_33_; lean_object* v___x_34_; lean_object* v___x_35_; 
v_one_32_ = lean_unsigned_to_nat(1u);
v_n_33_ = lean_nat_sub(v_i_28_, v_one_32_);
lean_dec(v_i_28_);
v___x_34_ = l_Subarray_get___redArg(v_as_27_, v_n_33_);
v___x_35_ = l_Lean_Syntax_getTailInfo(v___x_34_);
lean_dec(v___x_34_);
if (lean_obj_tag(v___x_35_) == 0)
{
lean_object* v_trailing_36_; lean_object* v___x_37_; 
lean_dec(v_n_33_);
v_trailing_36_ = lean_ctor_get(v___x_35_, 2);
lean_inc_ref(v_trailing_36_);
lean_dec_ref_known(v___x_35_, 4);
v___x_37_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_37_, 0, v_trailing_36_);
return v___x_37_;
}
else
{
lean_dec(v___x_35_);
v_i_28_ = v_n_33_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Subarray_0__Subarray_findSomeRevM_x3f_find___at___00__private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage_lastTrailing_spec__0___redArg___boxed(lean_object* v_as_39_, lean_object* v_i_40_){
_start:
{
lean_object* v_res_41_; 
v_res_41_ = l___private_Init_Data_Array_Subarray_0__Subarray_findSomeRevM_x3f_find___at___00__private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage_lastTrailing_spec__0___redArg(v_as_39_, v_i_40_);
lean_dec_ref(v_as_39_);
return v_res_41_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage_lastTrailing(lean_object* v_s_42_){
_start:
{
lean_object* v___x_43_; lean_object* v_start_44_; lean_object* v_stop_45_; lean_object* v___x_46_; lean_object* v___x_47_; 
v___x_43_ = l_Lean_Parser_SyntaxStack_toSubarray(v_s_42_);
v_start_44_ = lean_ctor_get(v___x_43_, 1);
lean_inc(v_start_44_);
v_stop_45_ = lean_ctor_get(v___x_43_, 2);
lean_inc(v_stop_45_);
v___x_46_ = lean_nat_sub(v_stop_45_, v_start_44_);
lean_dec(v_start_44_);
lean_dec(v_stop_45_);
v___x_47_ = l___private_Init_Data_Array_Subarray_0__Subarray_findSomeRevM_x3f_find___at___00__private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage_lastTrailing_spec__0___redArg(v___x_43_, v___x_46_);
lean_dec_ref(v___x_43_);
return v___x_47_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Subarray_0__Subarray_findSomeRevM_x3f_find___at___00__private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage_lastTrailing_spec__0(lean_object* v_as_48_, lean_object* v_i_49_, lean_object* v_a_50_){
_start:
{
lean_object* v___x_51_; 
v___x_51_ = l___private_Init_Data_Array_Subarray_0__Subarray_findSomeRevM_x3f_find___at___00__private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage_lastTrailing_spec__0___redArg(v_as_48_, v_i_49_);
return v___x_51_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Subarray_0__Subarray_findSomeRevM_x3f_find___at___00__private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage_lastTrailing_spec__0___boxed(lean_object* v_as_52_, lean_object* v_i_53_, lean_object* v_a_54_){
_start:
{
lean_object* v_res_55_; 
v_res_55_ = l___private_Init_Data_Array_Subarray_0__Subarray_findSomeRevM_x3f_find___at___00__private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage_lastTrailing_spec__0(v_as_52_, v_i_53_, v_a_54_);
lean_dec_ref(v_as_52_);
return v_res_55_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage(lean_object* v_c_61_, lean_object* v_pos_62_, lean_object* v_stk_63_, lean_object* v_e_64_){
_start:
{
lean_object* v___y_66_; lean_object* v___y_67_; lean_object* v___y_68_; lean_object* v___y_69_; lean_object* v_pos_79_; lean_object* v_endPos_x3f_80_; lean_object* v_e_81_; lean_object* v_unexpectedTk_95_; lean_object* v_expected_96_; lean_object* v___y_98_; lean_object* v___y_99_; lean_object* v___y_100_; lean_object* v_pos_108_; lean_object* v_endPos_x3f_109_; lean_object* v_endPos_x3f_117_; uint8_t v___x_118_; 
v_unexpectedTk_95_ = lean_ctor_get(v_e_64_, 0);
v_expected_96_ = lean_ctor_get(v_e_64_, 2);
v_endPos_x3f_117_ = lean_box(0);
v___x_118_ = l_Lean_Syntax_isMissing(v_unexpectedTk_95_);
if (v___x_118_ == 0)
{
lean_object* v___x_119_; 
lean_inc(v_expected_96_);
lean_inc(v_unexpectedTk_95_);
lean_dec_ref(v_e_64_);
v___x_119_ = l_Lean_Syntax_getRange_x3f(v_unexpectedTk_95_, v___x_118_);
if (lean_obj_tag(v___x_119_) == 1)
{
lean_object* v_val_120_; lean_object* v___x_122_; uint8_t v_isShared_123_; uint8_t v_isSharedCheck_129_; 
lean_dec(v_pos_62_);
v_val_120_ = lean_ctor_get(v___x_119_, 0);
v_isSharedCheck_129_ = !lean_is_exclusive(v___x_119_);
if (v_isSharedCheck_129_ == 0)
{
v___x_122_ = v___x_119_;
v_isShared_123_ = v_isSharedCheck_129_;
goto v_resetjp_121_;
}
else
{
lean_inc(v_val_120_);
lean_dec(v___x_119_);
v___x_122_ = lean_box(0);
v_isShared_123_ = v_isSharedCheck_129_;
goto v_resetjp_121_;
}
v_resetjp_121_:
{
lean_object* v_start_124_; lean_object* v_stop_125_; lean_object* v_endPos_x3f_127_; 
v_start_124_ = lean_ctor_get(v_val_120_, 0);
lean_inc(v_start_124_);
v_stop_125_ = lean_ctor_get(v_val_120_, 1);
lean_inc(v_stop_125_);
lean_dec(v_val_120_);
if (v_isShared_123_ == 0)
{
lean_ctor_set(v___x_122_, 0, v_stop_125_);
v_endPos_x3f_127_ = v___x_122_;
goto v_reusejp_126_;
}
else
{
lean_object* v_reuseFailAlloc_128_; 
v_reuseFailAlloc_128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_128_, 0, v_stop_125_);
v_endPos_x3f_127_ = v_reuseFailAlloc_128_;
goto v_reusejp_126_;
}
v_reusejp_126_:
{
v_pos_108_ = v_start_124_;
v_endPos_x3f_109_ = v_endPos_x3f_127_;
goto v___jp_107_;
}
}
}
else
{
lean_dec(v___x_119_);
v_pos_108_ = v_pos_62_;
v_endPos_x3f_109_ = v_endPos_x3f_117_;
goto v___jp_107_;
}
}
else
{
lean_dec_ref(v_stk_63_);
v_pos_79_ = v_pos_62_;
v_endPos_x3f_80_ = v_endPos_x3f_117_;
v_e_81_ = v_e_64_;
goto v___jp_78_;
}
v___jp_65_:
{
uint8_t v___x_70_; uint8_t v___x_71_; uint8_t v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; 
v___x_70_ = 1;
v___x_71_ = 2;
v___x_72_ = 0;
v___x_73_ = ((lean_object*)(l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage___closed__0));
v___x_74_ = l_Lean_Parser_Error_toString(v___y_67_);
v___x_75_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_75_, 0, v___x_74_);
v___x_76_ = l_Lean_MessageData_ofFormat(v___x_75_);
v___x_77_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_77_, 0, v___y_68_);
lean_ctor_set(v___x_77_, 1, v___y_66_);
lean_ctor_set(v___x_77_, 2, v___y_69_);
lean_ctor_set(v___x_77_, 3, v___x_73_);
lean_ctor_set(v___x_77_, 4, v___x_76_);
lean_ctor_set_uint8(v___x_77_, sizeof(void*)*5, v___x_70_);
lean_ctor_set_uint8(v___x_77_, sizeof(void*)*5 + 1, v___x_71_);
lean_ctor_set_uint8(v___x_77_, sizeof(void*)*5 + 2, v___x_72_);
return v___x_77_;
}
v___jp_78_:
{
lean_object* v_fileName_82_; lean_object* v_fileMap_83_; lean_object* v___x_84_; 
v_fileName_82_ = lean_ctor_get(v_c_61_, 1);
lean_inc_ref(v_fileName_82_);
v_fileMap_83_ = lean_ctor_get(v_c_61_, 2);
lean_inc_ref_n(v_fileMap_83_, 2);
lean_dec_ref(v_c_61_);
v___x_84_ = l_Lean_FileMap_toPosition(v_fileMap_83_, v_pos_79_);
lean_dec(v_pos_79_);
if (lean_obj_tag(v_endPos_x3f_80_) == 0)
{
lean_object* v___x_85_; 
lean_dec_ref(v_fileMap_83_);
v___x_85_ = lean_box(0);
v___y_66_ = v___x_84_;
v___y_67_ = v_e_81_;
v___y_68_ = v_fileName_82_;
v___y_69_ = v___x_85_;
goto v___jp_65_;
}
else
{
lean_object* v_val_86_; lean_object* v___x_88_; uint8_t v_isShared_89_; uint8_t v_isSharedCheck_94_; 
v_val_86_ = lean_ctor_get(v_endPos_x3f_80_, 0);
v_isSharedCheck_94_ = !lean_is_exclusive(v_endPos_x3f_80_);
if (v_isSharedCheck_94_ == 0)
{
v___x_88_ = v_endPos_x3f_80_;
v_isShared_89_ = v_isSharedCheck_94_;
goto v_resetjp_87_;
}
else
{
lean_inc(v_val_86_);
lean_dec(v_endPos_x3f_80_);
v___x_88_ = lean_box(0);
v_isShared_89_ = v_isSharedCheck_94_;
goto v_resetjp_87_;
}
v_resetjp_87_:
{
lean_object* v___x_90_; lean_object* v___x_92_; 
v___x_90_ = l_Lean_FileMap_toPosition(v_fileMap_83_, v_val_86_);
lean_dec(v_val_86_);
if (v_isShared_89_ == 0)
{
lean_ctor_set(v___x_88_, 0, v___x_90_);
v___x_92_ = v___x_88_;
goto v_reusejp_91_;
}
else
{
lean_object* v_reuseFailAlloc_93_; 
v_reuseFailAlloc_93_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_93_, 0, v___x_90_);
v___x_92_ = v_reuseFailAlloc_93_;
goto v_reusejp_91_;
}
v_reusejp_91_:
{
v___y_66_ = v___x_84_;
v___y_67_ = v_e_81_;
v___y_68_ = v_fileName_82_;
v___y_69_ = v___x_92_;
goto v___jp_65_;
}
}
}
}
v___jp_97_:
{
lean_object* v_e_101_; lean_object* v___x_102_; 
v_e_101_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_e_101_, 0, v_unexpectedTk_95_);
lean_ctor_set(v_e_101_, 1, v___y_100_);
lean_ctor_set(v_e_101_, 2, v_expected_96_);
v___x_102_ = l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage_lastTrailing(v_stk_63_);
if (lean_obj_tag(v___x_102_) == 1)
{
lean_object* v_val_103_; lean_object* v_startPos_104_; lean_object* v_stopPos_105_; uint8_t v_decide_106_; 
v_val_103_ = lean_ctor_get(v___x_102_, 0);
lean_inc(v_val_103_);
lean_dec_ref_known(v___x_102_, 1);
v_startPos_104_ = lean_ctor_get(v_val_103_, 1);
lean_inc(v_startPos_104_);
v_stopPos_105_ = lean_ctor_get(v_val_103_, 2);
lean_inc(v_stopPos_105_);
lean_dec(v_val_103_);
v_decide_106_ = lean_nat_dec_eq(v_stopPos_105_, v___y_99_);
lean_dec(v_stopPos_105_);
if (v_decide_106_ == 0)
{
lean_dec(v_startPos_104_);
v_pos_79_ = v___y_99_;
v_endPos_x3f_80_ = v___y_98_;
v_e_81_ = v_e_101_;
goto v___jp_78_;
}
else
{
lean_dec(v___y_99_);
v_pos_79_ = v_startPos_104_;
v_endPos_x3f_80_ = v___y_98_;
v_e_81_ = v_e_101_;
goto v___jp_78_;
}
}
else
{
lean_dec(v___x_102_);
v_pos_79_ = v___y_99_;
v_endPos_x3f_80_ = v___y_98_;
v_e_81_ = v_e_101_;
goto v___jp_78_;
}
}
v___jp_107_:
{
switch(lean_obj_tag(v_unexpectedTk_95_))
{
case 3:
{
lean_object* v___x_110_; 
v___x_110_ = ((lean_object*)(l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage___closed__1));
v___y_98_ = v_endPos_x3f_109_;
v___y_99_ = v_pos_108_;
v___y_100_ = v___x_110_;
goto v___jp_97_;
}
case 2:
{
lean_object* v_val_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; 
v_val_111_ = lean_ctor_get(v_unexpectedTk_95_, 1);
v___x_112_ = ((lean_object*)(l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage___closed__2));
v___x_113_ = lean_string_append(v___x_112_, v_val_111_);
v___x_114_ = ((lean_object*)(l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage___closed__3));
v___x_115_ = lean_string_append(v___x_113_, v___x_114_);
v___y_98_ = v_endPos_x3f_109_;
v___y_99_ = v_pos_108_;
v___y_100_ = v___x_115_;
goto v___jp_97_;
}
default: 
{
lean_object* v___x_116_; 
v___x_116_ = ((lean_object*)(l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage___closed__4));
v___y_98_ = v_endPos_x3f_109_;
v___y_99_ = v_pos_108_;
v___y_100_ = v___x_116_;
goto v___jp_97_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_setStartOfFileLeading(lean_object* v_stx_130_){
_start:
{
lean_object* v___x_135_; 
v___x_135_ = l_Lean_Syntax_getHeadInfo_x3f(v_stx_130_);
if (lean_obj_tag(v___x_135_) == 1)
{
lean_object* v_val_136_; 
v_val_136_ = lean_ctor_get(v___x_135_, 0);
lean_inc(v_val_136_);
lean_dec_ref_known(v___x_135_, 1);
if (lean_obj_tag(v_val_136_) == 0)
{
lean_object* v_leading_137_; lean_object* v_pos_138_; lean_object* v_trailing_139_; lean_object* v_endPos_140_; lean_object* v___x_142_; uint8_t v_isShared_143_; uint8_t v_isSharedCheck_162_; 
v_leading_137_ = lean_ctor_get(v_val_136_, 0);
v_pos_138_ = lean_ctor_get(v_val_136_, 1);
v_trailing_139_ = lean_ctor_get(v_val_136_, 2);
v_endPos_140_ = lean_ctor_get(v_val_136_, 3);
v_isSharedCheck_162_ = !lean_is_exclusive(v_val_136_);
if (v_isSharedCheck_162_ == 0)
{
v___x_142_ = v_val_136_;
v_isShared_143_ = v_isSharedCheck_162_;
goto v_resetjp_141_;
}
else
{
lean_inc(v_endPos_140_);
lean_inc(v_trailing_139_);
lean_inc(v_pos_138_);
lean_inc(v_leading_137_);
lean_dec(v_val_136_);
v___x_142_ = lean_box(0);
v_isShared_143_ = v_isSharedCheck_162_;
goto v_resetjp_141_;
}
v_resetjp_141_:
{
lean_object* v_str_144_; lean_object* v_stopPos_145_; lean_object* v___x_147_; uint8_t v_isShared_148_; uint8_t v_isSharedCheck_160_; 
v_str_144_ = lean_ctor_get(v_leading_137_, 0);
v_stopPos_145_ = lean_ctor_get(v_leading_137_, 2);
v_isSharedCheck_160_ = !lean_is_exclusive(v_leading_137_);
if (v_isSharedCheck_160_ == 0)
{
lean_object* v_unused_161_; 
v_unused_161_ = lean_ctor_get(v_leading_137_, 1);
lean_dec(v_unused_161_);
v___x_147_ = v_leading_137_;
v_isShared_148_ = v_isSharedCheck_160_;
goto v_resetjp_146_;
}
else
{
lean_inc(v_stopPos_145_);
lean_inc(v_str_144_);
lean_dec(v_leading_137_);
v___x_147_ = lean_box(0);
v_isShared_148_ = v_isSharedCheck_160_;
goto v_resetjp_146_;
}
v_resetjp_146_:
{
lean_object* v___x_149_; lean_object* v___x_151_; 
v___x_149_ = lean_unsigned_to_nat(0u);
if (v_isShared_148_ == 0)
{
lean_ctor_set(v___x_147_, 1, v___x_149_);
v___x_151_ = v___x_147_;
goto v_reusejp_150_;
}
else
{
lean_object* v_reuseFailAlloc_159_; 
v_reuseFailAlloc_159_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_159_, 0, v_str_144_);
lean_ctor_set(v_reuseFailAlloc_159_, 1, v___x_149_);
lean_ctor_set(v_reuseFailAlloc_159_, 2, v_stopPos_145_);
v___x_151_ = v_reuseFailAlloc_159_;
goto v_reusejp_150_;
}
v_reusejp_150_:
{
lean_object* v___x_153_; 
if (v_isShared_143_ == 0)
{
lean_ctor_set(v___x_142_, 0, v___x_151_);
v___x_153_ = v___x_142_;
goto v_reusejp_152_;
}
else
{
lean_object* v_reuseFailAlloc_158_; 
v_reuseFailAlloc_158_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_158_, 0, v___x_151_);
lean_ctor_set(v_reuseFailAlloc_158_, 1, v_pos_138_);
lean_ctor_set(v_reuseFailAlloc_158_, 2, v_trailing_139_);
lean_ctor_set(v_reuseFailAlloc_158_, 3, v_endPos_140_);
v___x_153_ = v_reuseFailAlloc_158_;
goto v_reusejp_152_;
}
v_reusejp_152_:
{
lean_object* v___x_154_; uint8_t v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; 
v___x_154_ = l_Lean_Syntax_setHeadInfo(v_stx_130_, v___x_153_);
v___x_155_ = 1;
v___x_156_ = lean_box(v___x_155_);
v___x_157_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_157_, 0, v___x_154_);
lean_ctor_set(v___x_157_, 1, v___x_156_);
return v___x_157_;
}
}
}
}
}
else
{
lean_dec(v_val_136_);
goto v___jp_131_;
}
}
else
{
lean_dec(v___x_135_);
goto v___jp_131_;
}
v___jp_131_:
{
uint8_t v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; 
v___x_132_ = 0;
v___x_133_ = lean_box(v___x_132_);
v___x_134_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_134_, 0, v_stx_130_);
lean_ctor_set(v___x_134_, 1, v___x_133_);
return v___x_134_;
}
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lean_Parser_parseHeader_spec__0(lean_object* v_x_163_, lean_object* v_x_164_){
_start:
{
if (lean_obj_tag(v_x_163_) == 0)
{
if (lean_obj_tag(v_x_164_) == 0)
{
uint8_t v___x_165_; 
v___x_165_ = 1;
return v___x_165_;
}
else
{
uint8_t v___x_166_; 
v___x_166_ = 0;
return v___x_166_;
}
}
else
{
if (lean_obj_tag(v_x_164_) == 0)
{
uint8_t v___x_167_; 
v___x_167_ = 0;
return v___x_167_;
}
else
{
lean_object* v_val_168_; lean_object* v_val_169_; uint8_t v___x_170_; 
v_val_168_ = lean_ctor_get(v_x_163_, 0);
v_val_169_ = lean_ctor_get(v_x_164_, 0);
v___x_170_ = l_Lean_Parser_instBEqError_beq(v_val_168_, v_val_169_);
return v___x_170_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lean_Parser_parseHeader_spec__0___boxed(lean_object* v_x_171_, lean_object* v_x_172_){
_start:
{
uint8_t v_res_173_; lean_object* v_r_174_; 
v_res_173_ = l_Option_instBEq_beq___at___00Lean_Parser_parseHeader_spec__0(v_x_171_, v_x_172_);
lean_dec(v_x_172_);
lean_dec(v_x_171_);
v_r_174_ = lean_box(v_res_173_);
return v_r_174_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__1(lean_object* v_inputCtx_175_, lean_object* v_as_176_, size_t v_sz_177_, size_t v_i_178_, lean_object* v_b_179_){
_start:
{
uint8_t v___x_181_; 
v___x_181_ = lean_usize_dec_lt(v_i_178_, v_sz_177_);
if (v___x_181_ == 0)
{
lean_object* v___x_182_; 
lean_dec_ref(v_inputCtx_175_);
v___x_182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_182_, 0, v_b_179_);
return v___x_182_;
}
else
{
lean_object* v_a_183_; lean_object* v_snd_184_; lean_object* v_fst_185_; lean_object* v_fst_186_; lean_object* v_snd_187_; lean_object* v___x_188_; lean_object* v___x_189_; size_t v___x_190_; size_t v___x_191_; 
v_a_183_ = lean_array_uget_borrowed(v_as_176_, v_i_178_);
v_snd_184_ = lean_ctor_get(v_a_183_, 1);
v_fst_185_ = lean_ctor_get(v_a_183_, 0);
v_fst_186_ = lean_ctor_get(v_snd_184_, 0);
v_snd_187_ = lean_ctor_get(v_snd_184_, 1);
lean_inc(v_snd_187_);
lean_inc(v_fst_186_);
lean_inc(v_fst_185_);
lean_inc_ref(v_inputCtx_175_);
v___x_188_ = l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage(v_inputCtx_175_, v_fst_185_, v_fst_186_, v_snd_187_);
v___x_189_ = l_Lean_MessageLog_add(v___x_188_, v_b_179_);
v___x_190_ = ((size_t)1ULL);
v___x_191_ = lean_usize_add(v_i_178_, v___x_190_);
v_i_178_ = v___x_191_;
v_b_179_ = v___x_189_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__1___boxed(lean_object* v_inputCtx_193_, lean_object* v_as_194_, lean_object* v_sz_195_, lean_object* v_i_196_, lean_object* v_b_197_, lean_object* v___y_198_){
_start:
{
size_t v_sz_boxed_199_; size_t v_i_boxed_200_; lean_object* v_res_201_; 
v_sz_boxed_199_ = lean_unbox_usize(v_sz_195_);
lean_dec(v_sz_195_);
v_i_boxed_200_ = lean_unbox_usize(v_i_196_);
lean_dec(v_i_196_);
v_res_201_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__1(v_inputCtx_193_, v_as_194_, v_sz_boxed_199_, v_i_boxed_200_, v_b_197_);
lean_dec_ref(v_as_194_);
return v_res_201_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___lam__0(uint8_t v___x_202_, lean_object* v_inputCtx_203_, lean_object* v_ref_204_, lean_object* v_msg_205_){
_start:
{
uint8_t v___x_206_; lean_object* v___y_208_; lean_object* v___y_209_; lean_object* v___y_210_; lean_object* v___y_211_; lean_object* v___y_218_; lean_object* v___x_224_; 
v___x_206_ = 0;
v___x_224_ = l_Lean_Syntax_getPos_x3f(v_ref_204_, v___x_206_);
if (lean_obj_tag(v___x_224_) == 0)
{
lean_object* v___x_225_; 
v___x_225_ = lean_unsigned_to_nat(0u);
v___y_218_ = v___x_225_;
goto v___jp_217_;
}
else
{
lean_object* v_val_226_; 
v_val_226_ = lean_ctor_get(v___x_224_, 0);
lean_inc(v_val_226_);
lean_dec_ref_known(v___x_224_, 1);
v___y_218_ = v_val_226_;
goto v___jp_217_;
}
v___jp_207_:
{
lean_object* v___x_212_; lean_object* v___x_213_; uint8_t v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; 
v___x_212_ = l_Lean_FileMap_toPosition(v___y_209_, v___y_211_);
lean_dec(v___y_211_);
v___x_213_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_213_, 0, v___x_212_);
v___x_214_ = 2;
v___x_215_ = ((lean_object*)(l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage___closed__0));
v___x_216_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_216_, 0, v___y_208_);
lean_ctor_set(v___x_216_, 1, v___y_210_);
lean_ctor_set(v___x_216_, 2, v___x_213_);
lean_ctor_set(v___x_216_, 3, v___x_215_);
lean_ctor_set(v___x_216_, 4, v_msg_205_);
lean_ctor_set_uint8(v___x_216_, sizeof(void*)*5, v___x_202_);
lean_ctor_set_uint8(v___x_216_, sizeof(void*)*5 + 1, v___x_214_);
lean_ctor_set_uint8(v___x_216_, sizeof(void*)*5 + 2, v___x_206_);
return v___x_216_;
}
v___jp_217_:
{
lean_object* v_fileName_219_; lean_object* v_fileMap_220_; lean_object* v___x_221_; lean_object* v___x_222_; 
v_fileName_219_ = lean_ctor_get(v_inputCtx_203_, 1);
lean_inc_ref(v_fileName_219_);
v_fileMap_220_ = lean_ctor_get(v_inputCtx_203_, 2);
lean_inc_ref_n(v_fileMap_220_, 2);
lean_dec_ref(v_inputCtx_203_);
v___x_221_ = l_Lean_FileMap_toPosition(v_fileMap_220_, v___y_218_);
v___x_222_ = l_Lean_Syntax_getTailPos_x3f(v_ref_204_, v___x_206_);
if (lean_obj_tag(v___x_222_) == 0)
{
v___y_208_ = v_fileName_219_;
v___y_209_ = v_fileMap_220_;
v___y_210_ = v___x_221_;
v___y_211_ = v___y_218_;
goto v___jp_207_;
}
else
{
lean_object* v_val_223_; 
lean_dec(v___y_218_);
v_val_223_ = lean_ctor_get(v___x_222_, 0);
lean_inc(v_val_223_);
lean_dec_ref_known(v___x_222_, 1);
v___y_208_ = v_fileName_219_;
v___y_209_ = v_fileMap_220_;
v___y_210_ = v___x_221_;
v___y_211_ = v_val_223_;
goto v___jp_207_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___lam__0___boxed(lean_object* v___x_227_, lean_object* v_inputCtx_228_, lean_object* v_ref_229_, lean_object* v_msg_230_){
_start:
{
uint8_t v___x_3066__boxed_231_; lean_object* v_res_232_; 
v___x_3066__boxed_231_ = lean_unbox(v___x_227_);
v_res_232_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___lam__0(v___x_3066__boxed_231_, v_inputCtx_228_, v_ref_229_, v_msg_230_);
lean_dec(v_ref_229_);
return v_res_232_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__7(void){
_start:
{
lean_object* v___x_245_; lean_object* v___x_246_; 
v___x_245_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__6));
v___x_246_ = l_Lean_MessageData_ofFormat(v___x_245_);
return v___x_246_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__10(void){
_start:
{
lean_object* v___x_250_; lean_object* v___x_251_; 
v___x_250_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__9));
v___x_251_ = l_Lean_MessageData_ofFormat(v___x_250_);
return v___x_251_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__16(void){
_start:
{
lean_object* v___x_258_; lean_object* v___x_259_; 
v___x_258_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__15));
v___x_259_ = l_Lean_MessageData_ofFormat(v___x_258_);
return v___x_259_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2(lean_object* v_inputCtx_278_, lean_object* v_moduleTk_x3f_279_, lean_object* v_as_280_, size_t v_sz_281_, size_t v_i_282_, lean_object* v_b_283_){
_start:
{
lean_object* v_a_286_; uint8_t v___x_290_; 
v___x_290_ = lean_usize_dec_lt(v_i_282_, v_sz_281_);
if (v___x_290_ == 0)
{
lean_object* v___x_291_; 
lean_dec_ref(v_inputCtx_278_);
v___x_291_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_291_, 0, v_b_283_);
return v___x_291_;
}
else
{
lean_object* v___x_292_; lean_object* v_a_293_; uint8_t v___x_294_; 
v___x_292_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__4));
v_a_293_ = lean_array_uget_borrowed(v_as_280_, v_i_282_);
lean_inc(v_a_293_);
v___x_294_ = l_Lean_Syntax_isOfKind(v_a_293_, v___x_292_);
if (v___x_294_ == 0)
{
v_a_286_ = v_b_283_;
goto v___jp_285_;
}
else
{
lean_object* v___y_296_; lean_object* v_messages_297_; lean_object* v___y_303_; lean_object* v___y_304_; lean_object* v_messages_305_; lean_object* v___y_311_; lean_object* v___y_312_; uint8_t v___y_313_; lean_object* v___y_314_; lean_object* v___x_335_; lean_object* v___y_337_; lean_object* v___y_338_; lean_object* v_allTk_x3f_339_; lean_object* v___x_350_; lean_object* v___y_352_; lean_object* v_metaTk_x3f_353_; lean_object* v_pubTk_x3f_365_; lean_object* v___x_375_; uint8_t v___x_376_; 
v___x_335_ = lean_unsigned_to_nat(0u);
v___x_350_ = lean_unsigned_to_nat(1u);
v___x_375_ = l_Lean_Syntax_getArg(v_a_293_, v___x_335_);
v___x_376_ = l_Lean_Syntax_isNone(v___x_375_);
if (v___x_376_ == 0)
{
uint8_t v___x_377_; 
lean_inc(v___x_375_);
v___x_377_ = l_Lean_Syntax_matchesNull(v___x_375_, v___x_350_);
if (v___x_377_ == 0)
{
lean_dec(v___x_375_);
v_a_286_ = v_b_283_;
goto v___jp_285_;
}
else
{
lean_object* v___x_378_; lean_object* v___x_379_; uint8_t v___x_380_; 
v___x_378_ = l_Lean_Syntax_getArg(v___x_375_, v___x_335_);
lean_dec(v___x_375_);
v___x_379_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__22));
lean_inc(v___x_378_);
v___x_380_ = l_Lean_Syntax_isOfKind(v___x_378_, v___x_379_);
if (v___x_380_ == 0)
{
lean_dec(v___x_378_);
v_a_286_ = v_b_283_;
goto v___jp_285_;
}
else
{
lean_object* v___x_381_; lean_object* v___x_382_; 
v___x_381_ = l_Lean_Syntax_getArg(v___x_378_, v___x_335_);
lean_dec(v___x_378_);
v___x_382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_382_, 0, v___x_381_);
v_pubTk_x3f_365_ = v___x_382_;
goto v___jp_364_;
}
}
}
else
{
lean_object* v___x_383_; 
lean_dec(v___x_375_);
v___x_383_ = lean_box(0);
v_pubTk_x3f_365_ = v___x_383_;
goto v___jp_364_;
}
v___jp_295_:
{
if (lean_obj_tag(v___y_296_) == 1)
{
lean_object* v_val_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; 
v_val_298_ = lean_ctor_get(v___y_296_, 0);
lean_inc(v_val_298_);
lean_dec_ref_known(v___y_296_, 1);
v___x_299_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__7);
lean_inc_ref(v_inputCtx_278_);
v___x_300_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___lam__0(v___x_294_, v_inputCtx_278_, v_val_298_, v___x_299_);
lean_dec(v_val_298_);
v___x_301_ = l_Lean_MessageLog_add(v___x_300_, v_messages_297_);
v_a_286_ = v___x_301_;
goto v___jp_285_;
}
else
{
lean_dec(v___y_296_);
v_a_286_ = v_messages_297_;
goto v___jp_285_;
}
}
v___jp_302_:
{
if (lean_obj_tag(v___y_304_) == 1)
{
lean_object* v_val_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; 
v_val_306_ = lean_ctor_get(v___y_304_, 0);
lean_inc(v_val_306_);
lean_dec_ref_known(v___y_304_, 1);
v___x_307_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__10, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__10_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__10);
lean_inc_ref(v_inputCtx_278_);
v___x_308_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___lam__0(v___x_294_, v_inputCtx_278_, v_val_306_, v___x_307_);
lean_dec(v_val_306_);
v___x_309_ = l_Lean_MessageLog_add(v___x_308_, v_messages_305_);
v___y_296_ = v___y_303_;
v_messages_297_ = v___x_309_;
goto v___jp_295_;
}
else
{
lean_dec(v___y_304_);
v___y_296_ = v___y_303_;
v_messages_297_ = v_messages_305_;
goto v___jp_295_;
}
}
v___jp_310_:
{
if (lean_obj_tag(v___y_311_) == 1)
{
if (lean_obj_tag(v___y_314_) == 0)
{
lean_dec_ref_known(v___y_311_, 1);
lean_dec(v___y_312_);
v_a_286_ = v_b_283_;
goto v___jp_285_;
}
else
{
lean_object* v___x_316_; uint8_t v_isShared_317_; uint8_t v_isSharedCheck_333_; 
v_isSharedCheck_333_ = !lean_is_exclusive(v___y_314_);
if (v_isSharedCheck_333_ == 0)
{
lean_object* v_unused_334_; 
v_unused_334_ = lean_ctor_get(v___y_314_, 0);
lean_dec(v_unused_334_);
v___x_316_ = v___y_314_;
v_isShared_317_ = v_isSharedCheck_333_;
goto v_resetjp_315_;
}
else
{
lean_dec(v___y_314_);
v___x_316_ = lean_box(0);
v_isShared_317_ = v_isSharedCheck_333_;
goto v_resetjp_315_;
}
v_resetjp_315_:
{
if (v___y_313_ == 0)
{
lean_del_object(v___x_316_);
lean_dec_ref_known(v___y_311_, 1);
lean_dec(v___y_312_);
v_a_286_ = v_b_283_;
goto v___jp_285_;
}
else
{
lean_object* v_val_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_328_; 
v_val_318_ = lean_ctor_get(v___y_311_, 0);
lean_inc(v_val_318_);
lean_dec_ref_known(v___y_311_, 1);
v___x_319_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__11));
v___x_320_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___y_312_, v___y_313_);
v___x_321_ = lean_string_append(v___x_319_, v___x_320_);
v___x_322_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__12));
v___x_323_ = lean_string_append(v___x_321_, v___x_322_);
v___x_324_ = lean_string_append(v___x_323_, v___x_320_);
lean_dec_ref(v___x_320_);
v___x_325_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__13));
v___x_326_ = lean_string_append(v___x_324_, v___x_325_);
if (v_isShared_317_ == 0)
{
lean_ctor_set_tag(v___x_316_, 3);
lean_ctor_set(v___x_316_, 0, v___x_326_);
v___x_328_ = v___x_316_;
goto v_reusejp_327_;
}
else
{
lean_object* v_reuseFailAlloc_332_; 
v_reuseFailAlloc_332_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_332_, 0, v___x_326_);
v___x_328_ = v_reuseFailAlloc_332_;
goto v_reusejp_327_;
}
v_reusejp_327_:
{
lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; 
v___x_329_ = l_Lean_MessageData_ofFormat(v___x_328_);
lean_inc_ref(v_inputCtx_278_);
v___x_330_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___lam__0(v___x_294_, v_inputCtx_278_, v_val_318_, v___x_329_);
lean_dec(v_val_318_);
v___x_331_ = l_Lean_MessageLog_add(v___x_330_, v_b_283_);
v_a_286_ = v___x_331_;
goto v___jp_285_;
}
}
}
}
}
else
{
lean_dec(v___y_314_);
lean_dec(v___y_312_);
lean_dec(v___y_311_);
v_a_286_ = v_b_283_;
goto v___jp_285_;
}
}
v___jp_336_:
{
lean_object* v___x_340_; lean_object* v___x_341_; uint8_t v___x_342_; 
v___x_340_ = lean_unsigned_to_nat(5u);
v___x_341_ = l_Lean_Syntax_getArg(v_a_293_, v___x_340_);
v___x_342_ = l_Lean_Syntax_matchesNull(v___x_341_, v___x_335_);
if (v___x_342_ == 0)
{
lean_dec(v_allTk_x3f_339_);
lean_dec(v___y_338_);
lean_dec(v___y_337_);
v_a_286_ = v_b_283_;
goto v___jp_285_;
}
else
{
lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; 
v___x_343_ = lean_unsigned_to_nat(4u);
v___x_344_ = l_Lean_Syntax_getArg(v_a_293_, v___x_343_);
v___x_345_ = l_Lean_TSyntax_getId(v___x_344_);
lean_dec(v___x_344_);
if (lean_obj_tag(v_moduleTk_x3f_279_) == 0)
{
if (v___x_342_ == 0)
{
lean_dec(v___y_337_);
v___y_311_ = v_allTk_x3f_339_;
v___y_312_ = v___x_345_;
v___y_313_ = v___x_342_;
v___y_314_ = v___y_338_;
goto v___jp_310_;
}
else
{
lean_dec(v___x_345_);
if (lean_obj_tag(v___y_338_) == 1)
{
lean_object* v_val_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; 
v_val_346_ = lean_ctor_get(v___y_338_, 0);
lean_inc(v_val_346_);
lean_dec_ref_known(v___y_338_, 1);
v___x_347_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__16, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__16_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__16);
lean_inc_ref(v_inputCtx_278_);
v___x_348_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___lam__0(v___x_294_, v_inputCtx_278_, v_val_346_, v___x_347_);
lean_dec(v_val_346_);
v___x_349_ = l_Lean_MessageLog_add(v___x_348_, v_b_283_);
v___y_303_ = v_allTk_x3f_339_;
v___y_304_ = v___y_337_;
v_messages_305_ = v___x_349_;
goto v___jp_302_;
}
else
{
lean_dec(v___y_338_);
v___y_303_ = v_allTk_x3f_339_;
v___y_304_ = v___y_337_;
v_messages_305_ = v_b_283_;
goto v___jp_302_;
}
}
}
else
{
lean_dec(v___y_337_);
v___y_311_ = v_allTk_x3f_339_;
v___y_312_ = v___x_345_;
v___y_313_ = v___x_342_;
v___y_314_ = v___y_338_;
goto v___jp_310_;
}
}
}
v___jp_351_:
{
lean_object* v___x_354_; lean_object* v___x_355_; uint8_t v___x_356_; 
v___x_354_ = lean_unsigned_to_nat(3u);
v___x_355_ = l_Lean_Syntax_getArg(v_a_293_, v___x_354_);
v___x_356_ = l_Lean_Syntax_isNone(v___x_355_);
if (v___x_356_ == 0)
{
uint8_t v___x_357_; 
lean_inc(v___x_355_);
v___x_357_ = l_Lean_Syntax_matchesNull(v___x_355_, v___x_350_);
if (v___x_357_ == 0)
{
lean_dec(v___x_355_);
lean_dec(v_metaTk_x3f_353_);
lean_dec(v___y_352_);
v_a_286_ = v_b_283_;
goto v___jp_285_;
}
else
{
lean_object* v___x_358_; lean_object* v___x_359_; uint8_t v___x_360_; 
v___x_358_ = l_Lean_Syntax_getArg(v___x_355_, v___x_335_);
lean_dec(v___x_355_);
v___x_359_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__18));
lean_inc(v___x_358_);
v___x_360_ = l_Lean_Syntax_isOfKind(v___x_358_, v___x_359_);
if (v___x_360_ == 0)
{
lean_dec(v___x_358_);
lean_dec(v_metaTk_x3f_353_);
lean_dec(v___y_352_);
v_a_286_ = v_b_283_;
goto v___jp_285_;
}
else
{
lean_object* v___x_361_; lean_object* v___x_362_; 
v___x_361_ = l_Lean_Syntax_getArg(v___x_358_, v___x_335_);
lean_dec(v___x_358_);
v___x_362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_362_, 0, v___x_361_);
v___y_337_ = v_metaTk_x3f_353_;
v___y_338_ = v___y_352_;
v_allTk_x3f_339_ = v___x_362_;
goto v___jp_336_;
}
}
}
else
{
lean_object* v___x_363_; 
lean_dec(v___x_355_);
v___x_363_ = lean_box(0);
v___y_337_ = v_metaTk_x3f_353_;
v___y_338_ = v___y_352_;
v_allTk_x3f_339_ = v___x_363_;
goto v___jp_336_;
}
}
v___jp_364_:
{
lean_object* v___x_366_; uint8_t v___x_367_; 
v___x_366_ = l_Lean_Syntax_getArg(v_a_293_, v___x_350_);
v___x_367_ = l_Lean_Syntax_isNone(v___x_366_);
if (v___x_367_ == 0)
{
uint8_t v___x_368_; 
lean_inc(v___x_366_);
v___x_368_ = l_Lean_Syntax_matchesNull(v___x_366_, v___x_350_);
if (v___x_368_ == 0)
{
lean_dec(v___x_366_);
lean_dec(v_pubTk_x3f_365_);
v_a_286_ = v_b_283_;
goto v___jp_285_;
}
else
{
lean_object* v___x_369_; lean_object* v___x_370_; uint8_t v___x_371_; 
v___x_369_ = l_Lean_Syntax_getArg(v___x_366_, v___x_335_);
lean_dec(v___x_366_);
v___x_370_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__20));
lean_inc(v___x_369_);
v___x_371_ = l_Lean_Syntax_isOfKind(v___x_369_, v___x_370_);
if (v___x_371_ == 0)
{
lean_dec(v___x_369_);
lean_dec(v_pubTk_x3f_365_);
v_a_286_ = v_b_283_;
goto v___jp_285_;
}
else
{
lean_object* v___x_372_; lean_object* v___x_373_; 
v___x_372_ = l_Lean_Syntax_getArg(v___x_369_, v___x_335_);
lean_dec(v___x_369_);
v___x_373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_373_, 0, v___x_372_);
v___y_352_ = v_pubTk_x3f_365_;
v_metaTk_x3f_353_ = v___x_373_;
goto v___jp_351_;
}
}
}
else
{
lean_object* v___x_374_; 
lean_dec(v___x_366_);
v___x_374_ = lean_box(0);
v___y_352_ = v_pubTk_x3f_365_;
v_metaTk_x3f_353_ = v___x_374_;
goto v___jp_351_;
}
}
}
}
v___jp_285_:
{
size_t v___x_287_; size_t v___x_288_; 
v___x_287_ = ((size_t)1ULL);
v___x_288_ = lean_usize_add(v_i_282_, v___x_287_);
v_i_282_ = v___x_288_;
v_b_283_ = v_a_286_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___boxed(lean_object* v_inputCtx_384_, lean_object* v_moduleTk_x3f_385_, lean_object* v_as_386_, lean_object* v_sz_387_, lean_object* v_i_388_, lean_object* v_b_389_, lean_object* v___y_390_){
_start:
{
size_t v_sz_boxed_391_; size_t v_i_boxed_392_; lean_object* v_res_393_; 
v_sz_boxed_391_ = lean_unbox_usize(v_sz_387_);
lean_dec(v_sz_387_);
v_i_boxed_392_ = lean_unbox_usize(v_i_388_);
lean_dec(v_i_388_);
v_res_393_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2(v_inputCtx_384_, v_moduleTk_x3f_385_, v_as_386_, v_sz_boxed_391_, v_i_boxed_392_, v_b_389_);
lean_dec_ref(v_as_386_);
lean_dec(v_moduleTk_x3f_385_);
return v_res_393_;
}
}
static lean_object* _init_l_Lean_Parser_parseHeader___closed__1(void){
_start:
{
lean_object* v___x_395_; lean_object* v___x_396_; 
v___x_395_ = lean_box(0);
v___x_396_ = l_unsafeCast___redArg(v___x_395_);
return v___x_396_;
}
}
static lean_object* _init_l_Lean_Parser_parseHeader___closed__3(void){
_start:
{
lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; 
v___x_398_ = lean_unsigned_to_nat(32u);
v___x_399_ = lean_mk_empty_array_with_capacity(v___x_398_);
v___x_400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_400_, 0, v___x_399_);
return v___x_400_;
}
}
static lean_object* _init_l_Lean_Parser_parseHeader___closed__4(void){
_start:
{
size_t v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; 
v___x_401_ = ((size_t)5ULL);
v___x_402_ = lean_unsigned_to_nat(0u);
v___x_403_ = lean_unsigned_to_nat(32u);
v___x_404_ = lean_mk_empty_array_with_capacity(v___x_403_);
v___x_405_ = lean_obj_once(&l_Lean_Parser_parseHeader___closed__3, &l_Lean_Parser_parseHeader___closed__3_once, _init_l_Lean_Parser_parseHeader___closed__3);
v___x_406_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_406_, 0, v___x_405_);
lean_ctor_set(v___x_406_, 1, v___x_404_);
lean_ctor_set(v___x_406_, 2, v___x_402_);
lean_ctor_set(v___x_406_, 3, v___x_402_);
lean_ctor_set_usize(v___x_406_, 4, v___x_401_);
return v___x_406_;
}
}
static lean_object* _init_l_Lean_Parser_parseHeader___closed__5(void){
_start:
{
lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; 
v___x_407_ = l_Lean_NameSet_empty;
v___x_408_ = lean_obj_once(&l_Lean_Parser_parseHeader___closed__4, &l_Lean_Parser_parseHeader___closed__4_once, _init_l_Lean_Parser_parseHeader___closed__4);
v___x_409_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_409_, 0, v___x_408_);
lean_ctor_set(v___x_409_, 1, v___x_408_);
lean_ctor_set(v___x_409_, 2, v___x_407_);
return v___x_409_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_parseHeader(lean_object* v_inputCtx_422_){
_start:
{
lean_object* v___x_424_; uint32_t v___x_425_; lean_object* v___x_426_; 
v___x_424_ = lean_unsigned_to_nat(0u);
v___x_425_ = 0;
v___x_426_ = l_Lean_mkEmptyEnvironment(v___x_425_);
if (lean_obj_tag(v___x_426_) == 0)
{
lean_object* v_a_427_; lean_object* v___x_429_; uint8_t v_isShared_430_; uint8_t v_isSharedCheck_547_; 
v_a_427_ = lean_ctor_get(v___x_426_, 0);
v_isSharedCheck_547_ = !lean_is_exclusive(v___x_426_);
if (v_isSharedCheck_547_ == 0)
{
v___x_429_ = v___x_426_;
v_isShared_430_ = v_isSharedCheck_547_;
goto v_resetjp_428_;
}
else
{
lean_inc(v_a_427_);
lean_dec(v___x_426_);
v___x_429_ = lean_box(0);
v_isShared_430_ = v_isSharedCheck_547_;
goto v_resetjp_428_;
}
v_resetjp_428_:
{
lean_object* v___x_431_; lean_object* v_fn_432_; lean_object* v_inputString_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v_stxStack_444_; lean_object* v_pos_445_; lean_object* v_errorMsg_446_; lean_object* v___y_448_; lean_object* v___y_449_; uint8_t v___y_450_; uint8_t v___y_451_; lean_object* v___y_459_; lean_object* v___y_460_; uint8_t v___y_461_; uint8_t v___y_462_; lean_object* v___y_466_; lean_object* v_messages_467_; lean_object* v___y_478_; lean_object* v___y_479_; size_t v___y_480_; lean_object* v___y_481_; lean_object* v___y_498_; lean_object* v___y_499_; lean_object* v___y_500_; lean_object* v___y_501_; lean_object* v___y_502_; size_t v___y_503_; lean_object* v_moduleTk_x3f_504_; lean_object* v___y_514_; uint8_t v___x_544_; 
v___x_431_ = l_Lean_Parser_Module_header;
v_fn_432_ = lean_ctor_get(v___x_431_, 1);
v_inputString_433_ = lean_ctor_get(v_inputCtx_422_, 0);
lean_inc(v_a_427_);
v___x_434_ = l_Lean_Parser_getTokenTable(v_a_427_);
v___x_435_ = ((lean_object*)(l_Lean_Parser_parseHeader___closed__0));
lean_inc_ref(v_fn_432_);
v___x_436_ = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(v___x_436_, 0, v___x_435_);
lean_closure_set(v___x_436_, 1, v_fn_432_);
v___x_437_ = l_Lean_Parser_Module_updateTokens(v___x_434_);
v___x_438_ = l_Lean_Options_empty;
v___x_439_ = lean_obj_once(&l_Lean_Parser_parseHeader___closed__1, &l_Lean_Parser_parseHeader___closed__1_once, _init_l_Lean_Parser_parseHeader___closed__1);
v___x_440_ = lean_box(0);
v___x_441_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_441_, 0, v_a_427_);
lean_ctor_set(v___x_441_, 1, v___x_438_);
lean_ctor_set(v___x_441_, 2, v___x_439_);
lean_ctor_set(v___x_441_, 3, v___x_440_);
v___x_442_ = l_Lean_Parser_mkParserState(v_inputString_433_);
lean_inc_ref(v_inputCtx_422_);
v___x_443_ = l_Lean_Parser_ParserFn_run(v___x_436_, v_inputCtx_422_, v___x_441_, v___x_437_, v___x_442_);
v_stxStack_444_ = lean_ctor_get(v___x_443_, 0);
lean_inc_ref(v_stxStack_444_);
v_pos_445_ = lean_ctor_get(v___x_443_, 2);
lean_inc(v_pos_445_);
v_errorMsg_446_ = lean_ctor_get(v___x_443_, 4);
lean_inc(v_errorMsg_446_);
v___x_544_ = l_Lean_Parser_SyntaxStack_isEmpty(v_stxStack_444_);
if (v___x_544_ == 0)
{
lean_object* v___x_545_; 
v___x_545_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_444_);
lean_dec_ref(v_stxStack_444_);
v___y_514_ = v___x_545_;
goto v___jp_513_;
}
else
{
lean_object* v___x_546_; 
lean_dec_ref(v_stxStack_444_);
v___x_546_ = lean_box(0);
v___y_514_ = v___x_546_;
goto v___jp_513_;
}
v___jp_447_:
{
lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_456_; 
v___x_452_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_452_, 0, v_pos_445_);
lean_ctor_set_uint8(v___x_452_, sizeof(void*)*1, v___y_450_);
lean_ctor_set_uint8(v___x_452_, sizeof(void*)*1 + 1, v___y_451_);
v___x_453_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_453_, 0, v___x_452_);
lean_ctor_set(v___x_453_, 1, v___y_449_);
v___x_454_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_454_, 0, v___y_448_);
lean_ctor_set(v___x_454_, 1, v___x_453_);
if (v_isShared_430_ == 0)
{
lean_ctor_set(v___x_429_, 0, v___x_454_);
v___x_456_ = v___x_429_;
goto v_reusejp_455_;
}
else
{
lean_object* v_reuseFailAlloc_457_; 
v_reuseFailAlloc_457_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_457_, 0, v___x_454_);
v___x_456_ = v_reuseFailAlloc_457_;
goto v_reusejp_455_;
}
v_reusejp_455_:
{
return v___x_456_;
}
}
v___jp_458_:
{
if (v___y_461_ == 0)
{
uint8_t v___x_463_; 
v___x_463_ = 1;
v___y_448_ = v___y_459_;
v___y_449_ = v___y_460_;
v___y_450_ = v___y_462_;
v___y_451_ = v___x_463_;
goto v___jp_447_;
}
else
{
uint8_t v___x_464_; 
v___x_464_ = 0;
v___y_448_ = v___y_459_;
v___y_449_ = v___y_460_;
v___y_450_ = v___y_462_;
v___y_451_ = v___x_464_;
goto v___jp_447_;
}
}
v___jp_465_:
{
lean_object* v___x_468_; lean_object* v_fst_469_; lean_object* v_snd_470_; lean_object* v___x_471_; uint8_t v___x_472_; 
v___x_468_ = l___private_Lean_Parser_Module_0__Lean_Parser_setStartOfFileLeading(v___y_466_);
v_fst_469_ = lean_ctor_get(v___x_468_, 0);
lean_inc(v_fst_469_);
v_snd_470_ = lean_ctor_get(v___x_468_, 1);
lean_inc(v_snd_470_);
lean_dec_ref(v___x_468_);
v___x_471_ = lean_box(0);
v___x_472_ = l_Option_instBEq_beq___at___00Lean_Parser_parseHeader_spec__0(v_errorMsg_446_, v___x_471_);
lean_dec(v_errorMsg_446_);
if (v___x_472_ == 0)
{
uint8_t v___x_473_; uint8_t v___x_474_; 
v___x_473_ = 1;
v___x_474_ = lean_unbox(v_snd_470_);
lean_dec(v_snd_470_);
v___y_459_ = v_fst_469_;
v___y_460_ = v_messages_467_;
v___y_461_ = v___x_474_;
v___y_462_ = v___x_473_;
goto v___jp_458_;
}
else
{
uint8_t v___x_475_; uint8_t v___x_476_; 
v___x_475_ = 0;
v___x_476_ = lean_unbox(v_snd_470_);
lean_dec(v_snd_470_);
v___y_459_ = v_fst_469_;
v___y_460_ = v_messages_467_;
v___y_461_ = v___x_476_;
v___y_462_ = v___x_475_;
goto v___jp_458_;
}
}
v___jp_477_:
{
lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; size_t v_sz_486_; lean_object* v___x_487_; 
v___x_482_ = lean_unsigned_to_nat(2u);
v___x_483_ = l_Lean_Syntax_getArg(v___y_479_, v___x_482_);
v___x_484_ = l_Lean_Syntax_getArgs(v___x_483_);
lean_dec(v___x_483_);
v___x_485_ = l_unsafeCast___redArg(v___x_484_);
lean_dec_ref(v___x_484_);
v_sz_486_ = lean_array_size(v___x_485_);
v___x_487_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2(v_inputCtx_422_, v___y_481_, v___x_485_, v_sz_486_, v___y_480_, v___y_478_);
lean_dec(v___x_485_);
lean_dec(v___y_481_);
if (lean_obj_tag(v___x_487_) == 0)
{
lean_object* v_a_488_; 
v_a_488_ = lean_ctor_get(v___x_487_, 0);
lean_inc(v_a_488_);
lean_dec_ref_known(v___x_487_, 1);
v___y_466_ = v___y_479_;
v_messages_467_ = v_a_488_;
goto v___jp_465_;
}
else
{
lean_object* v_a_489_; lean_object* v___x_491_; uint8_t v_isShared_492_; uint8_t v_isSharedCheck_496_; 
lean_dec(v___y_479_);
lean_dec(v_errorMsg_446_);
lean_dec(v_pos_445_);
lean_del_object(v___x_429_);
v_a_489_ = lean_ctor_get(v___x_487_, 0);
v_isSharedCheck_496_ = !lean_is_exclusive(v___x_487_);
if (v_isSharedCheck_496_ == 0)
{
v___x_491_ = v___x_487_;
v_isShared_492_ = v_isSharedCheck_496_;
goto v_resetjp_490_;
}
else
{
lean_inc(v_a_489_);
lean_dec(v___x_487_);
v___x_491_ = lean_box(0);
v_isShared_492_ = v_isSharedCheck_496_;
goto v_resetjp_490_;
}
v_resetjp_490_:
{
lean_object* v___x_494_; 
if (v_isShared_492_ == 0)
{
v___x_494_ = v___x_491_;
goto v_reusejp_493_;
}
else
{
lean_object* v_reuseFailAlloc_495_; 
v_reuseFailAlloc_495_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_495_, 0, v_a_489_);
v___x_494_ = v_reuseFailAlloc_495_;
goto v_reusejp_493_;
}
v_reusejp_493_:
{
return v___x_494_;
}
}
}
}
v___jp_497_:
{
lean_object* v___x_505_; lean_object* v___x_506_; uint8_t v___x_507_; 
v___x_505_ = lean_unsigned_to_nat(1u);
v___x_506_ = l_Lean_Syntax_getArg(v___y_498_, v___x_505_);
v___x_507_ = l_Lean_Syntax_isNone(v___x_506_);
if (v___x_507_ == 0)
{
uint8_t v___x_508_; 
lean_inc(v___x_506_);
v___x_508_ = l_Lean_Syntax_matchesNull(v___x_506_, v___x_505_);
if (v___x_508_ == 0)
{
lean_dec(v___x_506_);
lean_dec(v_moduleTk_x3f_504_);
lean_dec_ref(v_inputCtx_422_);
v___y_466_ = v___y_498_;
v_messages_467_ = v___y_499_;
goto v___jp_465_;
}
else
{
lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; uint8_t v___x_512_; 
v___x_509_ = l_Lean_Syntax_getArg(v___x_506_, v___x_424_);
lean_dec(v___x_506_);
v___x_510_ = ((lean_object*)(l_Lean_Parser_parseHeader___closed__2));
lean_inc_ref(v___y_502_);
lean_inc_ref(v___y_500_);
lean_inc_ref(v___y_501_);
v___x_511_ = l_Lean_Name_mkStr4(v___y_501_, v___y_500_, v___y_502_, v___x_510_);
v___x_512_ = l_Lean_Syntax_isOfKind(v___x_509_, v___x_511_);
lean_dec(v___x_511_);
if (v___x_512_ == 0)
{
lean_dec(v_moduleTk_x3f_504_);
lean_dec_ref(v_inputCtx_422_);
v___y_466_ = v___y_498_;
v_messages_467_ = v___y_499_;
goto v___jp_465_;
}
else
{
v___y_478_ = v___y_499_;
v___y_479_ = v___y_498_;
v___y_480_ = v___y_503_;
v___y_481_ = v_moduleTk_x3f_504_;
goto v___jp_477_;
}
}
}
else
{
lean_dec(v___x_506_);
v___y_478_ = v___y_499_;
v___y_479_ = v___y_498_;
v___y_480_ = v___y_503_;
v___y_481_ = v_moduleTk_x3f_504_;
goto v___jp_477_;
}
}
v___jp_513_:
{
lean_object* v___x_515_; lean_object* v___x_516_; size_t v_sz_517_; size_t v___x_518_; lean_object* v___x_519_; 
v___x_515_ = lean_obj_once(&l_Lean_Parser_parseHeader___closed__5, &l_Lean_Parser_parseHeader___closed__5_once, _init_l_Lean_Parser_parseHeader___closed__5);
v___x_516_ = l_Lean_Parser_ParserState_allErrors(v___x_443_);
v_sz_517_ = lean_array_size(v___x_516_);
v___x_518_ = ((size_t)0ULL);
lean_inc_ref(v_inputCtx_422_);
v___x_519_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__1(v_inputCtx_422_, v___x_516_, v_sz_517_, v___x_518_, v___x_515_);
lean_dec_ref(v___x_516_);
if (lean_obj_tag(v___x_519_) == 0)
{
lean_object* v_a_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; uint8_t v___x_525_; 
v_a_520_ = lean_ctor_get(v___x_519_, 0);
lean_inc(v_a_520_);
lean_dec_ref_known(v___x_519_, 1);
v___x_521_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__0));
v___x_522_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__1));
v___x_523_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__2));
v___x_524_ = ((lean_object*)(l_Lean_Parser_parseHeader___closed__7));
lean_inc(v___y_514_);
v___x_525_ = l_Lean_Syntax_isOfKind(v___y_514_, v___x_524_);
if (v___x_525_ == 0)
{
lean_dec_ref(v_inputCtx_422_);
v___y_466_ = v___y_514_;
v_messages_467_ = v_a_520_;
goto v___jp_465_;
}
else
{
lean_object* v___x_526_; uint8_t v___x_527_; 
v___x_526_ = l_Lean_Syntax_getArg(v___y_514_, v___x_424_);
v___x_527_ = l_Lean_Syntax_isNone(v___x_526_);
if (v___x_527_ == 0)
{
lean_object* v___x_528_; uint8_t v___x_529_; 
v___x_528_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_526_);
v___x_529_ = l_Lean_Syntax_matchesNull(v___x_526_, v___x_528_);
if (v___x_529_ == 0)
{
lean_dec(v___x_526_);
lean_dec_ref(v_inputCtx_422_);
v___y_466_ = v___y_514_;
v_messages_467_ = v_a_520_;
goto v___jp_465_;
}
else
{
lean_object* v___x_530_; lean_object* v___x_531_; uint8_t v___x_532_; 
v___x_530_ = l_Lean_Syntax_getArg(v___x_526_, v___x_424_);
lean_dec(v___x_526_);
v___x_531_ = ((lean_object*)(l_Lean_Parser_parseHeader___closed__9));
lean_inc(v___x_530_);
v___x_532_ = l_Lean_Syntax_isOfKind(v___x_530_, v___x_531_);
if (v___x_532_ == 0)
{
lean_dec(v___x_530_);
lean_dec_ref(v_inputCtx_422_);
v___y_466_ = v___y_514_;
v_messages_467_ = v_a_520_;
goto v___jp_465_;
}
else
{
lean_object* v___x_533_; lean_object* v___x_534_; 
v___x_533_ = l_Lean_Syntax_getArg(v___x_530_, v___x_424_);
lean_dec(v___x_530_);
v___x_534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_534_, 0, v___x_533_);
v___y_498_ = v___y_514_;
v___y_499_ = v_a_520_;
v___y_500_ = v___x_522_;
v___y_501_ = v___x_521_;
v___y_502_ = v___x_523_;
v___y_503_ = v___x_518_;
v_moduleTk_x3f_504_ = v___x_534_;
goto v___jp_497_;
}
}
}
else
{
lean_object* v___x_535_; 
lean_dec(v___x_526_);
v___x_535_ = lean_box(0);
v___y_498_ = v___y_514_;
v___y_499_ = v_a_520_;
v___y_500_ = v___x_522_;
v___y_501_ = v___x_521_;
v___y_502_ = v___x_523_;
v___y_503_ = v___x_518_;
v_moduleTk_x3f_504_ = v___x_535_;
goto v___jp_497_;
}
}
}
else
{
lean_object* v_a_536_; lean_object* v___x_538_; uint8_t v_isShared_539_; uint8_t v_isSharedCheck_543_; 
lean_dec(v___y_514_);
lean_dec(v_errorMsg_446_);
lean_dec(v_pos_445_);
lean_del_object(v___x_429_);
lean_dec_ref(v_inputCtx_422_);
v_a_536_ = lean_ctor_get(v___x_519_, 0);
v_isSharedCheck_543_ = !lean_is_exclusive(v___x_519_);
if (v_isSharedCheck_543_ == 0)
{
v___x_538_ = v___x_519_;
v_isShared_539_ = v_isSharedCheck_543_;
goto v_resetjp_537_;
}
else
{
lean_inc(v_a_536_);
lean_dec(v___x_519_);
v___x_538_ = lean_box(0);
v_isShared_539_ = v_isSharedCheck_543_;
goto v_resetjp_537_;
}
v_resetjp_537_:
{
lean_object* v___x_541_; 
if (v_isShared_539_ == 0)
{
v___x_541_ = v___x_538_;
goto v_reusejp_540_;
}
else
{
lean_object* v_reuseFailAlloc_542_; 
v_reuseFailAlloc_542_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_542_, 0, v_a_536_);
v___x_541_ = v_reuseFailAlloc_542_;
goto v_reusejp_540_;
}
v_reusejp_540_:
{
return v___x_541_;
}
}
}
}
}
}
else
{
lean_object* v_a_548_; lean_object* v___x_550_; uint8_t v_isShared_551_; uint8_t v_isSharedCheck_555_; 
lean_dec_ref(v_inputCtx_422_);
v_a_548_ = lean_ctor_get(v___x_426_, 0);
v_isSharedCheck_555_ = !lean_is_exclusive(v___x_426_);
if (v_isSharedCheck_555_ == 0)
{
v___x_550_ = v___x_426_;
v_isShared_551_ = v_isSharedCheck_555_;
goto v_resetjp_549_;
}
else
{
lean_inc(v_a_548_);
lean_dec(v___x_426_);
v___x_550_ = lean_box(0);
v_isShared_551_ = v_isSharedCheck_555_;
goto v_resetjp_549_;
}
v_resetjp_549_:
{
lean_object* v___x_553_; 
if (v_isShared_551_ == 0)
{
v___x_553_ = v___x_550_;
goto v_reusejp_552_;
}
else
{
lean_object* v_reuseFailAlloc_554_; 
v_reuseFailAlloc_554_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_554_, 0, v_a_548_);
v___x_553_ = v_reuseFailAlloc_554_;
goto v_reusejp_552_;
}
v_reusejp_552_:
{
return v___x_553_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_parseHeader___boxed(lean_object* v_inputCtx_556_, lean_object* v_a_557_){
_start:
{
lean_object* v_res_558_; 
v_res_558_ = l_Lean_Parser_parseHeader(v_inputCtx_556_);
return v_res_558_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI(lean_object* v_inputCtx_566_, lean_object* v_pos_567_){
_start:
{
lean_object* v___y_569_; lean_object* v_inputString_579_; lean_object* v_endPos_580_; uint8_t v___x_581_; 
v_inputString_579_ = lean_ctor_get(v_inputCtx_566_, 0);
v_endPos_580_ = lean_ctor_get(v_inputCtx_566_, 3);
v___x_581_ = lean_nat_dec_le(v_pos_567_, v_endPos_580_);
if (v___x_581_ == 0)
{
lean_object* v___x_582_; 
lean_inc(v_endPos_580_);
lean_inc(v_pos_567_);
lean_inc_ref(v_inputString_579_);
v___x_582_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_582_, 0, v_inputString_579_);
lean_ctor_set(v___x_582_, 1, v_pos_567_);
lean_ctor_set(v___x_582_, 2, v_endPos_580_);
v___y_569_ = v___x_582_;
goto v___jp_568_;
}
else
{
lean_object* v___x_583_; 
lean_inc_n(v_pos_567_, 2);
lean_inc_ref(v_inputString_579_);
v___x_583_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_583_, 0, v_inputString_579_);
lean_ctor_set(v___x_583_, 1, v_pos_567_);
lean_ctor_set(v___x_583_, 2, v_pos_567_);
v___y_569_ = v___x_583_;
goto v___jp_568_;
}
v___jp_568_:
{
lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v_atom_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; 
lean_inc(v_pos_567_);
lean_inc_ref(v___y_569_);
v___x_570_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_570_, 0, v___y_569_);
lean_ctor_set(v___x_570_, 1, v_pos_567_);
lean_ctor_set(v___x_570_, 2, v___y_569_);
lean_ctor_set(v___x_570_, 3, v_pos_567_);
v___x_571_ = ((lean_object*)(l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage___closed__0));
v_atom_572_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_atom_572_, 0, v___x_570_);
lean_ctor_set(v_atom_572_, 1, v___x_571_);
v___x_573_ = ((lean_object*)(l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI___closed__2));
v___x_574_ = lean_unsigned_to_nat(1u);
v___x_575_ = lean_mk_empty_array_with_capacity(v___x_574_);
v___x_576_ = lean_array_push(v___x_575_, v_atom_572_);
v___x_577_ = lean_box(2);
v___x_578_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_578_, 0, v___x_577_);
lean_ctor_set(v___x_578_, 1, v___x_573_);
lean_ctor_set(v___x_578_, 2, v___x_576_);
return v___x_578_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI___boxed(lean_object* v_inputCtx_584_, lean_object* v_pos_585_){
_start:
{
lean_object* v_res_586_; 
v_res_586_ = l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI(v_inputCtx_584_, v_pos_585_);
lean_dec_ref(v_inputCtx_584_);
return v_res_586_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_isTerminalCommand(lean_object* v_s_598_){
_start:
{
uint8_t v___y_600_; lean_object* v___x_603_; uint8_t v___x_604_; 
v___x_603_ = ((lean_object*)(l_Lean_Parser_isTerminalCommand___closed__1));
lean_inc(v_s_598_);
v___x_604_ = l_Lean_Syntax_isOfKind(v_s_598_, v___x_603_);
if (v___x_604_ == 0)
{
lean_object* v___x_605_; uint8_t v___x_606_; 
v___x_605_ = ((lean_object*)(l_Lean_Parser_isTerminalCommand___closed__2));
lean_inc(v_s_598_);
v___x_606_ = l_Lean_Syntax_isOfKind(v_s_598_, v___x_605_);
v___y_600_ = v___x_606_;
goto v___jp_599_;
}
else
{
v___y_600_ = v___x_604_;
goto v___jp_599_;
}
v___jp_599_:
{
if (v___y_600_ == 0)
{
lean_object* v___x_601_; uint8_t v___x_602_; 
v___x_601_ = ((lean_object*)(l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI___closed__2));
v___x_602_ = l_Lean_Syntax_isOfKind(v_s_598_, v___x_601_);
return v___x_602_;
}
else
{
lean_dec(v_s_598_);
return v___y_600_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_isTerminalCommand___boxed(lean_object* v_s_607_){
_start:
{
uint8_t v_res_608_; lean_object* v_r_609_; 
v_res_608_ = l_Lean_Parser_isTerminalCommand(v_s_607_);
v_r_609_ = lean_box(v_res_608_);
return v_r_609_;
}
}
static lean_object* _init_l___private_Lean_Parser_Module_0__Lean_Parser_consumeInput___closed__2(void){
_start:
{
uint32_t v___x_614_; lean_object* v___x_615_; 
v___x_614_ = 32;
v___x_615_ = l_Char_utf8Size(v___x_614_);
return v___x_615_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_consumeInput(lean_object* v_inputCtx_616_, lean_object* v_pmctx_617_, lean_object* v_pos_618_){
_start:
{
lean_object* v_inputString_619_; lean_object* v_env_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v_s_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v_s_629_; lean_object* v_errorMsg_630_; 
v_inputString_619_ = lean_ctor_get(v_inputCtx_616_, 0);
v_env_620_ = lean_ctor_get(v_pmctx_617_, 0);
v___x_621_ = lean_unsigned_to_nat(0u);
v___x_622_ = ((lean_object*)(l___private_Lean_Parser_Module_0__Lean_Parser_consumeInput___closed__0));
v___x_623_ = l_Lean_Parser_SyntaxStack_empty;
v___x_624_ = l_Lean_Parser_initCacheForInput(v_inputString_619_);
v___x_625_ = lean_box(0);
lean_inc(v_pos_618_);
v_s_626_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_s_626_, 0, v___x_623_);
lean_ctor_set(v_s_626_, 1, v___x_621_);
lean_ctor_set(v_s_626_, 2, v_pos_618_);
lean_ctor_set(v_s_626_, 3, v___x_624_);
lean_ctor_set(v_s_626_, 4, v___x_625_);
lean_ctor_set(v_s_626_, 5, v___x_622_);
v___x_627_ = ((lean_object*)(l___private_Lean_Parser_Module_0__Lean_Parser_consumeInput___closed__1));
lean_inc_ref(v_env_620_);
v___x_628_ = l_Lean_Parser_getTokenTable(v_env_620_);
v_s_629_ = l_Lean_Parser_ParserFn_run(v___x_627_, v_inputCtx_616_, v_pmctx_617_, v___x_628_, v_s_626_);
v_errorMsg_630_ = lean_ctor_get(v_s_629_, 4);
lean_inc(v_errorMsg_630_);
if (lean_obj_tag(v_errorMsg_630_) == 0)
{
lean_object* v_pos_631_; 
lean_dec(v_pos_618_);
v_pos_631_ = lean_ctor_get(v_s_629_, 2);
lean_inc(v_pos_631_);
lean_dec_ref(v_s_629_);
return v_pos_631_;
}
else
{
lean_object* v___x_632_; lean_object* v___x_633_; 
lean_dec_ref_known(v_errorMsg_630_, 1);
lean_dec_ref(v_s_629_);
v___x_632_ = lean_obj_once(&l___private_Lean_Parser_Module_0__Lean_Parser_consumeInput___closed__2, &l___private_Lean_Parser_Module_0__Lean_Parser_consumeInput___closed__2_once, _init_l___private_Lean_Parser_Module_0__Lean_Parser_consumeInput___closed__2);
v___x_633_ = lean_nat_add(v_pos_618_, v___x_632_);
lean_dec(v_pos_618_);
return v___x_633_;
}
}
}
static lean_object* _init_l_Lean_Parser_topLevelCommandParserFn___closed__2(void){
_start:
{
lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; 
v___x_637_ = lean_unsigned_to_nat(0u);
v___x_638_ = ((lean_object*)(l_Lean_Parser_topLevelCommandParserFn___closed__1));
v___x_639_ = l_Lean_Parser_categoryParser(v___x_638_, v___x_637_);
return v___x_639_;
}
}
static lean_object* _init_l_Lean_Parser_topLevelCommandParserFn___closed__3(void){
_start:
{
lean_object* v___x_640_; lean_object* v___x_641_; 
v___x_640_ = lean_obj_once(&l_Lean_Parser_topLevelCommandParserFn___closed__2, &l_Lean_Parser_topLevelCommandParserFn___closed__2_once, _init_l_Lean_Parser_topLevelCommandParserFn___closed__2);
v___x_641_ = l_Lean_Parser_withPosition(v___x_640_);
return v___x_641_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_topLevelCommandParserFn(lean_object* v_a_642_, lean_object* v_a_643_){
_start:
{
lean_object* v___x_644_; lean_object* v_fn_645_; lean_object* v___x_646_; 
v___x_644_ = lean_obj_once(&l_Lean_Parser_topLevelCommandParserFn___closed__3, &l_Lean_Parser_topLevelCommandParserFn___closed__3_once, _init_l_Lean_Parser_topLevelCommandParserFn___closed__3);
v_fn_645_ = lean_ctor_get(v___x_644_, 1);
lean_inc_ref(v_fn_645_);
v___x_646_ = lean_apply_2(v_fn_645_, v_a_642_, v_a_643_);
return v___x_646_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseCommand_spec__0(lean_object* v_inputCtx_647_, lean_object* v_as_648_, size_t v_sz_649_, size_t v_i_650_, lean_object* v_b_651_){
_start:
{
uint8_t v___x_652_; 
v___x_652_ = lean_usize_dec_lt(v_i_650_, v_sz_649_);
if (v___x_652_ == 0)
{
lean_dec_ref(v_inputCtx_647_);
return v_b_651_;
}
else
{
lean_object* v_a_653_; lean_object* v_snd_654_; lean_object* v_fst_655_; lean_object* v_fst_656_; lean_object* v_snd_657_; lean_object* v___x_658_; lean_object* v___x_659_; size_t v___x_660_; size_t v___x_661_; 
v_a_653_ = lean_array_uget_borrowed(v_as_648_, v_i_650_);
v_snd_654_ = lean_ctor_get(v_a_653_, 1);
v_fst_655_ = lean_ctor_get(v_a_653_, 0);
v_fst_656_ = lean_ctor_get(v_snd_654_, 0);
v_snd_657_ = lean_ctor_get(v_snd_654_, 1);
lean_inc(v_snd_657_);
lean_inc(v_fst_656_);
lean_inc(v_fst_655_);
lean_inc_ref(v_inputCtx_647_);
v___x_658_ = l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage(v_inputCtx_647_, v_fst_655_, v_fst_656_, v_snd_657_);
v___x_659_ = l_Lean_MessageLog_add(v___x_658_, v_b_651_);
v___x_660_ = ((size_t)1ULL);
v___x_661_ = lean_usize_add(v_i_650_, v___x_660_);
v_i_650_ = v___x_661_;
v_b_651_ = v___x_659_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseCommand_spec__0___boxed(lean_object* v_inputCtx_663_, lean_object* v_as_664_, lean_object* v_sz_665_, lean_object* v_i_666_, lean_object* v_b_667_){
_start:
{
size_t v_sz_boxed_668_; size_t v_i_boxed_669_; lean_object* v_res_670_; 
v_sz_boxed_668_ = lean_unbox_usize(v_sz_665_);
lean_dec(v_sz_665_);
v_i_boxed_669_ = lean_unbox_usize(v_i_666_);
lean_dec(v_i_666_);
v_res_670_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseCommand_spec__0(v_inputCtx_663_, v_as_664_, v_sz_boxed_668_, v_i_boxed_669_, v_b_667_);
lean_dec_ref(v_as_664_);
return v_res_670_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Parser_parseCommand_spec__1___redArg___lam__0(lean_object* v_stxStack_671_, uint8_t v___x_672_, lean_object* v_snd_673_, lean_object* v_inputCtx_674_, lean_object* v_pos_675_, lean_object* v_val_676_, lean_object* v___x_677_, lean_object* v_fst_678_, uint8_t v___x_679_, uint8_t v___y_680_, lean_object* v_____r_681_, lean_object* v_pos_682_){
_start:
{
uint8_t v___y_684_; lean_object* v_messages_685_; uint8_t v___y_698_; uint8_t v___y_699_; uint8_t v___y_703_; uint8_t v___x_705_; 
v___x_705_ = l_Lean_Parser_SyntaxStack_isEmpty(v_stxStack_671_);
if (v___x_705_ == 0)
{
lean_object* v___x_706_; lean_object* v___x_707_; 
v___x_706_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_671_);
v___x_707_ = l_Lean_Syntax_getPos_x3f(v___x_706_, v___y_680_);
lean_dec(v___x_706_);
if (lean_obj_tag(v___x_707_) == 0)
{
v___y_703_ = v___x_672_;
goto v___jp_702_;
}
else
{
lean_dec_ref_known(v___x_707_, 1);
v___y_703_ = v___y_680_;
goto v___jp_702_;
}
}
else
{
v___y_703_ = v___x_672_;
goto v___jp_702_;
}
v___jp_683_:
{
if (v___y_684_ == 0)
{
lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; 
lean_dec(v_snd_673_);
v___x_686_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_671_);
lean_dec_ref(v_stxStack_671_);
v___x_687_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_687_, 0, v_messages_685_);
lean_ctor_set(v___x_687_, 1, v___x_686_);
v___x_688_ = lean_box(v___x_672_);
v___x_689_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_689_, 0, v___x_688_);
lean_ctor_set(v___x_689_, 1, v___x_687_);
v___x_690_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_690_, 0, v_pos_682_);
lean_ctor_set(v___x_690_, 1, v___x_689_);
v___x_691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_691_, 0, v___x_690_);
return v___x_691_;
}
else
{
lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; 
lean_dec_ref(v_stxStack_671_);
v___x_692_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_692_, 0, v_messages_685_);
lean_ctor_set(v___x_692_, 1, v_snd_673_);
v___x_693_ = lean_box(v___x_672_);
v___x_694_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_694_, 0, v___x_693_);
lean_ctor_set(v___x_694_, 1, v___x_692_);
v___x_695_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_695_, 0, v_pos_682_);
lean_ctor_set(v___x_695_, 1, v___x_694_);
v___x_696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_696_, 0, v___x_695_);
return v___x_696_;
}
}
v___jp_697_:
{
if (v___y_699_ == 0)
{
lean_object* v___x_700_; lean_object* v___x_701_; 
lean_inc_ref(v_stxStack_671_);
v___x_700_ = l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage(v_inputCtx_674_, v_pos_675_, v_stxStack_671_, v_val_676_);
v___x_701_ = l_Lean_MessageLog_add(v___x_700_, v___x_677_);
v___y_684_ = v___y_698_;
v_messages_685_ = v___x_701_;
goto v___jp_683_;
}
else
{
lean_dec_ref(v_val_676_);
lean_dec(v_pos_675_);
lean_dec_ref(v_inputCtx_674_);
v___y_684_ = v___y_698_;
v_messages_685_ = v___x_677_;
goto v___jp_683_;
}
}
v___jp_702_:
{
uint8_t v___x_704_; 
v___x_704_ = lean_unbox(v_fst_678_);
if (v___x_704_ == 0)
{
v___y_698_ = v___y_703_;
v___y_699_ = v___x_679_;
goto v___jp_697_;
}
else
{
v___y_698_ = v___y_703_;
v___y_699_ = v___y_703_;
goto v___jp_697_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Parser_parseCommand_spec__1___redArg___lam__0___boxed(lean_object* v_stxStack_708_, lean_object* v___x_709_, lean_object* v_snd_710_, lean_object* v_inputCtx_711_, lean_object* v_pos_712_, lean_object* v_val_713_, lean_object* v___x_714_, lean_object* v_fst_715_, lean_object* v___x_716_, lean_object* v___y_717_, lean_object* v_____r_718_, lean_object* v_pos_719_){
_start:
{
uint8_t v___x_1762__boxed_720_; uint8_t v___x_1765__boxed_721_; uint8_t v___y_1766__boxed_722_; lean_object* v_res_723_; 
v___x_1762__boxed_720_ = lean_unbox(v___x_709_);
v___x_1765__boxed_721_ = lean_unbox(v___x_716_);
v___y_1766__boxed_722_ = lean_unbox(v___y_717_);
v_res_723_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Parser_parseCommand_spec__1___redArg___lam__0(v_stxStack_708_, v___x_1762__boxed_720_, v_snd_710_, v_inputCtx_711_, v_pos_712_, v_val_713_, v___x_714_, v_fst_715_, v___x_1765__boxed_721_, v___y_1766__boxed_722_, v_____r_718_, v_pos_719_);
lean_dec(v_fst_715_);
return v_res_723_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00Lean_Parser_parseCommand_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; 
v___x_724_ = lean_alloc_closure((void*)(l_Lean_Parser_topLevelCommandParserFn), 2, 0);
v___x_725_ = ((lean_object*)(l_Lean_Parser_parseHeader___closed__0));
v___x_726_ = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(v___x_726_, 0, v___x_725_);
lean_closure_set(v___x_726_, 1, v___x_724_);
return v___x_726_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Parser_parseCommand_spec__1___redArg(lean_object* v_inputCtx_727_, lean_object* v_pmctx_728_, lean_object* v_a_729_){
_start:
{
lean_object* v___y_731_; lean_object* v_snd_735_; lean_object* v_snd_736_; lean_object* v_fst_737_; lean_object* v___x_739_; uint8_t v_isShared_740_; uint8_t v_isSharedCheck_820_; 
v_snd_735_ = lean_ctor_get(v_a_729_, 1);
lean_inc(v_snd_735_);
v_snd_736_ = lean_ctor_get(v_snd_735_, 1);
lean_inc(v_snd_736_);
v_fst_737_ = lean_ctor_get(v_a_729_, 0);
v_isSharedCheck_820_ = !lean_is_exclusive(v_a_729_);
if (v_isSharedCheck_820_ == 0)
{
lean_object* v_unused_821_; 
v_unused_821_ = lean_ctor_get(v_a_729_, 1);
lean_dec(v_unused_821_);
v___x_739_ = v_a_729_;
v_isShared_740_ = v_isSharedCheck_820_;
goto v_resetjp_738_;
}
else
{
lean_inc(v_fst_737_);
lean_dec(v_a_729_);
v___x_739_ = lean_box(0);
v_isShared_740_ = v_isSharedCheck_820_;
goto v_resetjp_738_;
}
v___jp_730_:
{
if (lean_obj_tag(v___y_731_) == 0)
{
lean_object* v_a_732_; 
lean_dec_ref(v_pmctx_728_);
lean_dec_ref(v_inputCtx_727_);
v_a_732_ = lean_ctor_get(v___y_731_, 0);
lean_inc(v_a_732_);
lean_dec_ref_known(v___y_731_, 1);
return v_a_732_;
}
else
{
lean_object* v_a_733_; 
v_a_733_ = lean_ctor_get(v___y_731_, 0);
lean_inc(v_a_733_);
lean_dec_ref_known(v___y_731_, 1);
v_a_729_ = v_a_733_;
goto _start;
}
}
v_resetjp_738_:
{
lean_object* v_fst_741_; lean_object* v___x_743_; uint8_t v_isShared_744_; uint8_t v_isSharedCheck_818_; 
v_fst_741_ = lean_ctor_get(v_snd_735_, 0);
v_isSharedCheck_818_ = !lean_is_exclusive(v_snd_735_);
if (v_isSharedCheck_818_ == 0)
{
lean_object* v_unused_819_; 
v_unused_819_ = lean_ctor_get(v_snd_735_, 1);
lean_dec(v_unused_819_);
v___x_743_ = v_snd_735_;
v_isShared_744_ = v_isSharedCheck_818_;
goto v_resetjp_742_;
}
else
{
lean_inc(v_fst_741_);
lean_dec(v_snd_735_);
v___x_743_ = lean_box(0);
v_isShared_744_ = v_isSharedCheck_818_;
goto v_resetjp_742_;
}
v_resetjp_742_:
{
lean_object* v_fst_745_; lean_object* v_snd_746_; lean_object* v___x_748_; uint8_t v_isShared_749_; uint8_t v_isSharedCheck_817_; 
v_fst_745_ = lean_ctor_get(v_snd_736_, 0);
v_snd_746_ = lean_ctor_get(v_snd_736_, 1);
v_isSharedCheck_817_ = !lean_is_exclusive(v_snd_736_);
if (v_isSharedCheck_817_ == 0)
{
v___x_748_ = v_snd_736_;
v_isShared_749_ = v_isSharedCheck_817_;
goto v_resetjp_747_;
}
else
{
lean_inc(v_snd_746_);
lean_inc(v_fst_745_);
lean_dec(v_snd_736_);
v___x_748_ = lean_box(0);
v_isShared_749_ = v_isSharedCheck_817_;
goto v_resetjp_747_;
}
v_resetjp_747_:
{
uint8_t v___x_750_; 
v___x_750_ = l_Lean_Parser_InputContext_atEnd(v_inputCtx_727_, v_fst_737_);
if (v___x_750_ == 0)
{
lean_object* v_env_751_; lean_object* v_inputString_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v_stxStack_762_; lean_object* v_pos_763_; lean_object* v_errorMsg_764_; lean_object* v_recoveredErrors_765_; uint8_t v___x_766_; size_t v_sz_767_; size_t v___x_768_; lean_object* v___x_769_; uint8_t v___y_771_; uint8_t v___y_804_; uint8_t v___x_805_; 
v_env_751_ = lean_ctor_get(v_pmctx_728_, 0);
v_inputString_752_ = lean_ctor_get(v_inputCtx_727_, 0);
v___x_753_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00Lean_Parser_parseCommand_spec__1___redArg___closed__0, &l___private_Init_While_0__repeatM_erased___at___00Lean_Parser_parseCommand_spec__1___redArg___closed__0_once, _init_l___private_Init_While_0__repeatM_erased___at___00Lean_Parser_parseCommand_spec__1___redArg___closed__0);
lean_inc_ref(v_env_751_);
v___x_754_ = l_Lean_Parser_getTokenTable(v_env_751_);
v___x_755_ = l_Lean_Parser_SyntaxStack_empty;
v___x_756_ = lean_unsigned_to_nat(0u);
v___x_757_ = l_Lean_Parser_initCacheForInput(v_inputString_752_);
v___x_758_ = lean_box(0);
v___x_759_ = ((lean_object*)(l___private_Lean_Parser_Module_0__Lean_Parser_consumeInput___closed__0));
lean_inc(v_fst_737_);
v___x_760_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_760_, 0, v___x_755_);
lean_ctor_set(v___x_760_, 1, v___x_756_);
lean_ctor_set(v___x_760_, 2, v_fst_737_);
lean_ctor_set(v___x_760_, 3, v___x_757_);
lean_ctor_set(v___x_760_, 4, v___x_758_);
lean_ctor_set(v___x_760_, 5, v___x_759_);
lean_inc_ref(v_pmctx_728_);
lean_inc_ref_n(v_inputCtx_727_, 2);
v___x_761_ = l_Lean_Parser_ParserFn_run(v___x_753_, v_inputCtx_727_, v_pmctx_728_, v___x_754_, v___x_760_);
v_stxStack_762_ = lean_ctor_get(v___x_761_, 0);
lean_inc_ref(v_stxStack_762_);
v_pos_763_ = lean_ctor_get(v___x_761_, 2);
lean_inc(v_pos_763_);
v_errorMsg_764_ = lean_ctor_get(v___x_761_, 4);
lean_inc(v_errorMsg_764_);
v_recoveredErrors_765_ = lean_ctor_get(v___x_761_, 5);
lean_inc_ref(v_recoveredErrors_765_);
lean_dec_ref(v___x_761_);
v___x_766_ = 1;
v_sz_767_ = lean_array_size(v_recoveredErrors_765_);
v___x_768_ = ((size_t)0ULL);
v___x_769_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseCommand_spec__0(v_inputCtx_727_, v_recoveredErrors_765_, v_sz_767_, v___x_768_, v_fst_745_);
lean_dec_ref(v_recoveredErrors_765_);
v___x_805_ = lean_unbox(v_fst_741_);
if (v___x_805_ == 0)
{
v___y_804_ = v___x_750_;
goto v___jp_803_;
}
else
{
uint8_t v___x_806_; 
v___x_806_ = l_Lean_Parser_SyntaxStack_isEmpty(v_stxStack_762_);
if (v___x_806_ == 0)
{
goto v___jp_800_;
}
else
{
v___y_804_ = v___x_750_;
goto v___jp_803_;
}
}
v___jp_770_:
{
if (v___y_771_ == 0)
{
if (lean_obj_tag(v_errorMsg_764_) == 0)
{
lean_object* v___x_772_; lean_object* v___x_774_; 
lean_dec(v_snd_746_);
lean_dec(v_fst_741_);
lean_dec(v_fst_737_);
lean_dec_ref(v_pmctx_728_);
lean_dec_ref(v_inputCtx_727_);
v___x_772_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_762_);
lean_dec_ref(v_stxStack_762_);
if (v_isShared_749_ == 0)
{
lean_ctor_set(v___x_748_, 1, v___x_772_);
lean_ctor_set(v___x_748_, 0, v___x_769_);
v___x_774_ = v___x_748_;
goto v_reusejp_773_;
}
else
{
lean_object* v_reuseFailAlloc_782_; 
v_reuseFailAlloc_782_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_782_, 0, v___x_769_);
lean_ctor_set(v_reuseFailAlloc_782_, 1, v___x_772_);
v___x_774_ = v_reuseFailAlloc_782_;
goto v_reusejp_773_;
}
v_reusejp_773_:
{
lean_object* v___x_775_; lean_object* v___x_777_; 
v___x_775_ = lean_box(v___y_771_);
if (v_isShared_744_ == 0)
{
lean_ctor_set(v___x_743_, 1, v___x_774_);
lean_ctor_set(v___x_743_, 0, v___x_775_);
v___x_777_ = v___x_743_;
goto v_reusejp_776_;
}
else
{
lean_object* v_reuseFailAlloc_781_; 
v_reuseFailAlloc_781_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_781_, 0, v___x_775_);
lean_ctor_set(v_reuseFailAlloc_781_, 1, v___x_774_);
v___x_777_ = v_reuseFailAlloc_781_;
goto v_reusejp_776_;
}
v_reusejp_776_:
{
lean_object* v___x_779_; 
if (v_isShared_740_ == 0)
{
lean_ctor_set(v___x_739_, 1, v___x_777_);
lean_ctor_set(v___x_739_, 0, v_pos_763_);
v___x_779_ = v___x_739_;
goto v_reusejp_778_;
}
else
{
lean_object* v_reuseFailAlloc_780_; 
v_reuseFailAlloc_780_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_780_, 0, v_pos_763_);
lean_ctor_set(v_reuseFailAlloc_780_, 1, v___x_777_);
v___x_779_ = v_reuseFailAlloc_780_;
goto v_reusejp_778_;
}
v_reusejp_778_:
{
return v___x_779_;
}
}
}
}
else
{
lean_object* v_val_783_; uint8_t v_decide_784_; 
lean_del_object(v___x_748_);
lean_del_object(v___x_743_);
lean_del_object(v___x_739_);
v_val_783_ = lean_ctor_get(v_errorMsg_764_, 0);
lean_inc(v_val_783_);
lean_dec_ref_known(v_errorMsg_764_, 1);
v_decide_784_ = lean_nat_dec_eq(v_pos_763_, v_fst_737_);
lean_dec(v_fst_737_);
if (v_decide_784_ == 0)
{
lean_object* v___x_785_; lean_object* v___x_786_; 
v___x_785_ = lean_box(0);
lean_inc(v_pos_763_);
lean_inc_ref(v_inputCtx_727_);
v___x_786_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Parser_parseCommand_spec__1___redArg___lam__0(v_stxStack_762_, v___x_766_, v_snd_746_, v_inputCtx_727_, v_pos_763_, v_val_783_, v___x_769_, v_fst_741_, v___x_750_, v___y_771_, v___x_785_, v_pos_763_);
lean_dec(v_fst_741_);
v___y_731_ = v___x_786_;
goto v___jp_730_;
}
else
{
lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; 
lean_inc(v_pos_763_);
lean_inc_ref(v_pmctx_728_);
lean_inc_ref_n(v_inputCtx_727_, 2);
v___x_787_ = l___private_Lean_Parser_Module_0__Lean_Parser_consumeInput(v_inputCtx_727_, v_pmctx_728_, v_pos_763_);
v___x_788_ = lean_box(0);
v___x_789_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Parser_parseCommand_spec__1___redArg___lam__0(v_stxStack_762_, v___x_766_, v_snd_746_, v_inputCtx_727_, v_pos_763_, v_val_783_, v___x_769_, v_fst_741_, v___x_750_, v___y_771_, v___x_788_, v___x_787_);
lean_dec(v_fst_741_);
v___y_731_ = v___x_789_;
goto v___jp_730_;
}
}
}
else
{
lean_object* v___x_791_; 
lean_dec(v_errorMsg_764_);
lean_dec_ref(v_stxStack_762_);
lean_dec(v_fst_737_);
if (v_isShared_749_ == 0)
{
lean_ctor_set(v___x_748_, 0, v___x_769_);
v___x_791_ = v___x_748_;
goto v_reusejp_790_;
}
else
{
lean_object* v_reuseFailAlloc_799_; 
v_reuseFailAlloc_799_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_799_, 0, v___x_769_);
lean_ctor_set(v_reuseFailAlloc_799_, 1, v_snd_746_);
v___x_791_ = v_reuseFailAlloc_799_;
goto v_reusejp_790_;
}
v_reusejp_790_:
{
lean_object* v___x_793_; 
if (v_isShared_744_ == 0)
{
lean_ctor_set(v___x_743_, 1, v___x_791_);
v___x_793_ = v___x_743_;
goto v_reusejp_792_;
}
else
{
lean_object* v_reuseFailAlloc_798_; 
v_reuseFailAlloc_798_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_798_, 0, v_fst_741_);
lean_ctor_set(v_reuseFailAlloc_798_, 1, v___x_791_);
v___x_793_ = v_reuseFailAlloc_798_;
goto v_reusejp_792_;
}
v_reusejp_792_:
{
lean_object* v___x_795_; 
if (v_isShared_740_ == 0)
{
lean_ctor_set(v___x_739_, 1, v___x_793_);
lean_ctor_set(v___x_739_, 0, v_pos_763_);
v___x_795_ = v___x_739_;
goto v_reusejp_794_;
}
else
{
lean_object* v_reuseFailAlloc_797_; 
v_reuseFailAlloc_797_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_797_, 0, v_pos_763_);
lean_ctor_set(v_reuseFailAlloc_797_, 1, v___x_793_);
v___x_795_ = v_reuseFailAlloc_797_;
goto v_reusejp_794_;
}
v_reusejp_794_:
{
v_a_729_ = v___x_795_;
goto _start;
}
}
}
}
}
v___jp_800_:
{
lean_object* v___x_801_; uint8_t v___x_802_; 
v___x_801_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_762_);
v___x_802_ = l_Lean_Syntax_isAntiquot(v___x_801_);
lean_dec(v___x_801_);
v___y_771_ = v___x_802_;
goto v___jp_770_;
}
v___jp_803_:
{
if (v___y_804_ == 0)
{
v___y_771_ = v___x_750_;
goto v___jp_770_;
}
else
{
goto v___jp_800_;
}
}
}
else
{
lean_object* v___x_807_; lean_object* v___x_809_; 
lean_dec(v_snd_746_);
lean_dec_ref(v_pmctx_728_);
lean_inc(v_fst_737_);
v___x_807_ = l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI(v_inputCtx_727_, v_fst_737_);
lean_dec_ref(v_inputCtx_727_);
if (v_isShared_749_ == 0)
{
lean_ctor_set(v___x_748_, 1, v___x_807_);
v___x_809_ = v___x_748_;
goto v_reusejp_808_;
}
else
{
lean_object* v_reuseFailAlloc_816_; 
v_reuseFailAlloc_816_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_816_, 0, v_fst_745_);
lean_ctor_set(v_reuseFailAlloc_816_, 1, v___x_807_);
v___x_809_ = v_reuseFailAlloc_816_;
goto v_reusejp_808_;
}
v_reusejp_808_:
{
lean_object* v___x_811_; 
if (v_isShared_744_ == 0)
{
lean_ctor_set(v___x_743_, 1, v___x_809_);
v___x_811_ = v___x_743_;
goto v_reusejp_810_;
}
else
{
lean_object* v_reuseFailAlloc_815_; 
v_reuseFailAlloc_815_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_815_, 0, v_fst_741_);
lean_ctor_set(v_reuseFailAlloc_815_, 1, v___x_809_);
v___x_811_ = v_reuseFailAlloc_815_;
goto v_reusejp_810_;
}
v_reusejp_810_:
{
lean_object* v___x_813_; 
if (v_isShared_740_ == 0)
{
lean_ctor_set(v___x_739_, 1, v___x_811_);
v___x_813_ = v___x_739_;
goto v_reusejp_812_;
}
else
{
lean_object* v_reuseFailAlloc_814_; 
v_reuseFailAlloc_814_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_814_, 0, v_fst_737_);
lean_ctor_set(v_reuseFailAlloc_814_, 1, v___x_811_);
v___x_813_ = v_reuseFailAlloc_814_;
goto v_reusejp_812_;
}
v_reusejp_812_:
{
return v___x_813_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_parseCommand(lean_object* v_inputCtx_822_, lean_object* v_pmctx_823_, lean_object* v_mps_824_, lean_object* v_messages_825_){
_start:
{
lean_object* v_pos_826_; uint8_t v_recovering_827_; uint8_t v_hasLeading_828_; lean_object* v___x_830_; uint8_t v_isShared_831_; uint8_t v_isSharedCheck_868_; 
v_pos_826_ = lean_ctor_get(v_mps_824_, 0);
v_recovering_827_ = lean_ctor_get_uint8(v_mps_824_, sizeof(void*)*1);
v_hasLeading_828_ = lean_ctor_get_uint8(v_mps_824_, sizeof(void*)*1 + 1);
v_isSharedCheck_868_ = !lean_is_exclusive(v_mps_824_);
if (v_isSharedCheck_868_ == 0)
{
v___x_830_ = v_mps_824_;
v_isShared_831_ = v_isSharedCheck_868_;
goto v_resetjp_829_;
}
else
{
lean_inc(v_pos_826_);
lean_dec(v_mps_824_);
v___x_830_ = lean_box(0);
v_isShared_831_ = v_isSharedCheck_868_;
goto v_resetjp_829_;
}
v_resetjp_829_:
{
lean_object* v_stx_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v_snd_838_; lean_object* v_snd_839_; lean_object* v_fst_840_; lean_object* v_fst_841_; lean_object* v___x_843_; uint8_t v_isShared_844_; uint8_t v_isSharedCheck_866_; 
v_stx_832_ = lean_box(0);
v___x_833_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_833_, 0, v_messages_825_);
lean_ctor_set(v___x_833_, 1, v_stx_832_);
v___x_834_ = lean_box(v_recovering_827_);
v___x_835_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_835_, 0, v___x_834_);
lean_ctor_set(v___x_835_, 1, v___x_833_);
v___x_836_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_836_, 0, v_pos_826_);
lean_ctor_set(v___x_836_, 1, v___x_835_);
v___x_837_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Parser_parseCommand_spec__1___redArg(v_inputCtx_822_, v_pmctx_823_, v___x_836_);
v_snd_838_ = lean_ctor_get(v___x_837_, 1);
lean_inc(v_snd_838_);
v_snd_839_ = lean_ctor_get(v_snd_838_, 1);
lean_inc(v_snd_839_);
v_fst_840_ = lean_ctor_get(v___x_837_, 0);
lean_inc(v_fst_840_);
lean_dec_ref(v___x_837_);
v_fst_841_ = lean_ctor_get(v_snd_838_, 0);
v_isSharedCheck_866_ = !lean_is_exclusive(v_snd_838_);
if (v_isSharedCheck_866_ == 0)
{
lean_object* v_unused_867_; 
v_unused_867_ = lean_ctor_get(v_snd_838_, 1);
lean_dec(v_unused_867_);
v___x_843_ = v_snd_838_;
v_isShared_844_ = v_isSharedCheck_866_;
goto v_resetjp_842_;
}
else
{
lean_inc(v_fst_841_);
lean_dec(v_snd_838_);
v___x_843_ = lean_box(0);
v_isShared_844_ = v_isSharedCheck_866_;
goto v_resetjp_842_;
}
v_resetjp_842_:
{
lean_object* v_fst_845_; lean_object* v_snd_846_; lean_object* v___x_848_; uint8_t v_isShared_849_; uint8_t v_isSharedCheck_865_; 
v_fst_845_ = lean_ctor_get(v_snd_839_, 0);
v_snd_846_ = lean_ctor_get(v_snd_839_, 1);
v_isSharedCheck_865_ = !lean_is_exclusive(v_snd_839_);
if (v_isSharedCheck_865_ == 0)
{
v___x_848_ = v_snd_839_;
v_isShared_849_ = v_isSharedCheck_865_;
goto v_resetjp_847_;
}
else
{
lean_inc(v_snd_846_);
lean_inc(v_fst_845_);
lean_dec(v_snd_839_);
v___x_848_ = lean_box(0);
v_isShared_849_ = v_isSharedCheck_865_;
goto v_resetjp_847_;
}
v_resetjp_847_:
{
lean_object* v_stx_851_; 
if (v_hasLeading_828_ == 0)
{
v_stx_851_ = v_snd_846_;
goto v___jp_850_;
}
else
{
lean_object* v___x_863_; lean_object* v_fst_864_; 
v___x_863_ = l___private_Lean_Parser_Module_0__Lean_Parser_setStartOfFileLeading(v_snd_846_);
v_fst_864_ = lean_ctor_get(v___x_863_, 0);
lean_inc(v_fst_864_);
lean_dec_ref(v___x_863_);
v_stx_851_ = v_fst_864_;
goto v___jp_850_;
}
v___jp_850_:
{
uint8_t v___x_852_; lean_object* v___x_854_; 
v___x_852_ = 0;
if (v_isShared_831_ == 0)
{
lean_ctor_set(v___x_830_, 0, v_fst_840_);
v___x_854_ = v___x_830_;
goto v_reusejp_853_;
}
else
{
lean_object* v_reuseFailAlloc_862_; 
v_reuseFailAlloc_862_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_reuseFailAlloc_862_, 0, v_fst_840_);
v___x_854_ = v_reuseFailAlloc_862_;
goto v_reusejp_853_;
}
v_reusejp_853_:
{
uint8_t v___x_855_; lean_object* v___x_857_; 
v___x_855_ = lean_unbox(v_fst_841_);
lean_dec(v_fst_841_);
lean_ctor_set_uint8(v___x_854_, sizeof(void*)*1, v___x_855_);
lean_ctor_set_uint8(v___x_854_, sizeof(void*)*1 + 1, v___x_852_);
if (v_isShared_849_ == 0)
{
lean_ctor_set(v___x_848_, 1, v_fst_845_);
lean_ctor_set(v___x_848_, 0, v___x_854_);
v___x_857_ = v___x_848_;
goto v_reusejp_856_;
}
else
{
lean_object* v_reuseFailAlloc_861_; 
v_reuseFailAlloc_861_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_861_, 0, v___x_854_);
lean_ctor_set(v_reuseFailAlloc_861_, 1, v_fst_845_);
v___x_857_ = v_reuseFailAlloc_861_;
goto v_reusejp_856_;
}
v_reusejp_856_:
{
lean_object* v___x_859_; 
if (v_isShared_844_ == 0)
{
lean_ctor_set(v___x_843_, 1, v___x_857_);
lean_ctor_set(v___x_843_, 0, v_stx_851_);
v___x_859_ = v___x_843_;
goto v_reusejp_858_;
}
else
{
lean_object* v_reuseFailAlloc_860_; 
v_reuseFailAlloc_860_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_860_, 0, v_stx_851_);
lean_ctor_set(v_reuseFailAlloc_860_, 1, v___x_857_);
v___x_859_ = v_reuseFailAlloc_860_;
goto v_reusejp_858_;
}
v_reusejp_858_:
{
return v___x_859_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Parser_parseCommand_spec__1(lean_object* v_inputCtx_869_, lean_object* v_pmctx_870_, lean_object* v_inst_871_, lean_object* v_a_872_){
_start:
{
lean_object* v___x_873_; 
v___x_873_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Parser_parseCommand_spec__1___redArg(v_inputCtx_869_, v_pmctx_870_, v_a_872_);
return v___x_873_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__0_spec__0(lean_object* v_s_874_){
_start:
{
lean_object* v___x_876_; lean_object* v_putStr_877_; lean_object* v___x_878_; 
v___x_876_ = lean_get_stdout();
v_putStr_877_ = lean_ctor_get(v___x_876_, 4);
lean_inc_ref(v_putStr_877_);
lean_dec_ref(v___x_876_);
v___x_878_ = lean_apply_2(v_putStr_877_, v_s_874_, lean_box(0));
return v___x_878_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__0_spec__0___boxed(lean_object* v_s_879_, lean_object* v_a_880_){
_start:
{
lean_object* v_res_881_; 
v_res_881_ = l_IO_print___at___00IO_println___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__0_spec__0(v_s_879_);
return v_res_881_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__0(lean_object* v_s_882_){
_start:
{
uint32_t v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; 
v___x_884_ = 10;
v___x_885_ = lean_string_push(v_s_882_, v___x_884_);
v___x_886_ = l_IO_print___at___00IO_println___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__0_spec__0(v___x_885_);
return v___x_886_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__0___boxed(lean_object* v_s_887_, lean_object* v_a_888_){
_start:
{
lean_object* v_res_889_; 
v_res_889_ = l_IO_println___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__0(v_s_887_);
return v_res_889_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse___lam__0(uint8_t v___y_890_, lean_object* v_msg_891_){
_start:
{
lean_object* v___x_893_; lean_object* v___x_894_; 
v___x_893_ = l_Lean_Message_toString(v_msg_891_, v___y_890_);
v___x_894_ = l_IO_println___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__0(v___x_893_);
return v___x_894_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse___lam__0___boxed(lean_object* v___y_895_, lean_object* v_msg_896_, lean_object* v___y_897_){
_start:
{
uint8_t v___y_1212__boxed_898_; lean_object* v_res_899_; 
v___y_1212__boxed_898_ = lean_unbox(v___y_895_);
v_res_899_ = l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse___lam__0(v___y_1212__boxed_898_, v_msg_896_);
return v_res_899_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__4(lean_object* v_f_900_, lean_object* v_as_901_, size_t v_i_902_, size_t v_stop_903_, lean_object* v_b_904_){
_start:
{
uint8_t v___x_906_; 
v___x_906_ = lean_usize_dec_eq(v_i_902_, v_stop_903_);
if (v___x_906_ == 0)
{
lean_object* v___x_907_; lean_object* v___x_908_; 
v___x_907_ = lean_array_uget_borrowed(v_as_901_, v_i_902_);
lean_inc_ref(v_f_900_);
lean_inc(v___x_907_);
v___x_908_ = lean_apply_2(v_f_900_, v___x_907_, lean_box(0));
if (lean_obj_tag(v___x_908_) == 0)
{
lean_object* v_a_909_; size_t v___x_910_; size_t v___x_911_; 
v_a_909_ = lean_ctor_get(v___x_908_, 0);
lean_inc(v_a_909_);
lean_dec_ref_known(v___x_908_, 1);
v___x_910_ = ((size_t)1ULL);
v___x_911_ = lean_usize_add(v_i_902_, v___x_910_);
v_i_902_ = v___x_911_;
v_b_904_ = v_a_909_;
goto _start;
}
else
{
lean_dec_ref(v_f_900_);
return v___x_908_;
}
}
else
{
lean_object* v___x_913_; 
lean_dec_ref(v_f_900_);
v___x_913_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_913_, 0, v_b_904_);
return v___x_913_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__4___boxed(lean_object* v_f_914_, lean_object* v_as_915_, lean_object* v_i_916_, lean_object* v_stop_917_, lean_object* v_b_918_, lean_object* v___y_919_){
_start:
{
size_t v_i_boxed_920_; size_t v_stop_boxed_921_; lean_object* v_res_922_; 
v_i_boxed_920_ = lean_unbox_usize(v_i_916_);
lean_dec(v_i_916_);
v_stop_boxed_921_ = lean_unbox_usize(v_stop_917_);
lean_dec(v_stop_917_);
v_res_922_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__4(v_f_914_, v_as_915_, v_i_boxed_920_, v_stop_boxed_921_, v_b_918_);
lean_dec_ref(v_as_915_);
return v_res_922_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3_spec__4(lean_object* v_f_923_, lean_object* v_x_924_){
_start:
{
if (lean_obj_tag(v_x_924_) == 0)
{
lean_object* v_cs_926_; lean_object* v___x_928_; uint8_t v_isShared_929_; uint8_t v_isSharedCheck_940_; 
v_cs_926_ = lean_ctor_get(v_x_924_, 0);
v_isSharedCheck_940_ = !lean_is_exclusive(v_x_924_);
if (v_isSharedCheck_940_ == 0)
{
v___x_928_ = v_x_924_;
v_isShared_929_ = v_isSharedCheck_940_;
goto v_resetjp_927_;
}
else
{
lean_inc(v_cs_926_);
lean_dec(v_x_924_);
v___x_928_ = lean_box(0);
v_isShared_929_ = v_isSharedCheck_940_;
goto v_resetjp_927_;
}
v_resetjp_927_:
{
lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; uint8_t v___x_933_; 
v___x_930_ = lean_unsigned_to_nat(0u);
v___x_931_ = lean_array_get_size(v_cs_926_);
v___x_932_ = lean_box(0);
v___x_933_ = lean_nat_dec_lt(v___x_930_, v___x_931_);
if (v___x_933_ == 0)
{
lean_object* v___x_935_; 
lean_dec_ref(v_cs_926_);
lean_dec_ref(v_f_923_);
if (v_isShared_929_ == 0)
{
lean_ctor_set(v___x_928_, 0, v___x_932_);
v___x_935_ = v___x_928_;
goto v_reusejp_934_;
}
else
{
lean_object* v_reuseFailAlloc_936_; 
v_reuseFailAlloc_936_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_936_, 0, v___x_932_);
v___x_935_ = v_reuseFailAlloc_936_;
goto v_reusejp_934_;
}
v_reusejp_934_:
{
return v___x_935_;
}
}
else
{
size_t v___x_937_; size_t v___x_938_; lean_object* v___x_939_; 
lean_del_object(v___x_928_);
v___x_937_ = ((size_t)0ULL);
v___x_938_ = lean_usize_of_nat(v___x_931_);
v___x_939_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3_spec__5(v_f_923_, v_cs_926_, v___x_937_, v___x_938_, v___x_932_);
lean_dec_ref(v_cs_926_);
return v___x_939_;
}
}
}
else
{
lean_object* v_vs_941_; lean_object* v___x_943_; uint8_t v_isShared_944_; uint8_t v_isSharedCheck_955_; 
v_vs_941_ = lean_ctor_get(v_x_924_, 0);
v_isSharedCheck_955_ = !lean_is_exclusive(v_x_924_);
if (v_isSharedCheck_955_ == 0)
{
v___x_943_ = v_x_924_;
v_isShared_944_ = v_isSharedCheck_955_;
goto v_resetjp_942_;
}
else
{
lean_inc(v_vs_941_);
lean_dec(v_x_924_);
v___x_943_ = lean_box(0);
v_isShared_944_ = v_isSharedCheck_955_;
goto v_resetjp_942_;
}
v_resetjp_942_:
{
lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; uint8_t v___x_948_; 
v___x_945_ = lean_unsigned_to_nat(0u);
v___x_946_ = lean_array_get_size(v_vs_941_);
v___x_947_ = lean_box(0);
v___x_948_ = lean_nat_dec_lt(v___x_945_, v___x_946_);
if (v___x_948_ == 0)
{
lean_object* v___x_950_; 
lean_dec_ref(v_vs_941_);
lean_dec_ref(v_f_923_);
if (v_isShared_944_ == 0)
{
lean_ctor_set_tag(v___x_943_, 0);
lean_ctor_set(v___x_943_, 0, v___x_947_);
v___x_950_ = v___x_943_;
goto v_reusejp_949_;
}
else
{
lean_object* v_reuseFailAlloc_951_; 
v_reuseFailAlloc_951_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_951_, 0, v___x_947_);
v___x_950_ = v_reuseFailAlloc_951_;
goto v_reusejp_949_;
}
v_reusejp_949_:
{
return v___x_950_;
}
}
else
{
size_t v___x_952_; size_t v___x_953_; lean_object* v___x_954_; 
lean_del_object(v___x_943_);
v___x_952_ = ((size_t)0ULL);
v___x_953_ = lean_usize_of_nat(v___x_946_);
v___x_954_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__4(v_f_923_, v_vs_941_, v___x_952_, v___x_953_, v___x_947_);
lean_dec_ref(v_vs_941_);
return v___x_954_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3_spec__5(lean_object* v_f_956_, lean_object* v_as_957_, size_t v_i_958_, size_t v_stop_959_, lean_object* v_b_960_){
_start:
{
uint8_t v___x_962_; 
v___x_962_ = lean_usize_dec_eq(v_i_958_, v_stop_959_);
if (v___x_962_ == 0)
{
lean_object* v___x_963_; lean_object* v___x_964_; 
v___x_963_ = lean_array_uget_borrowed(v_as_957_, v_i_958_);
lean_inc(v___x_963_);
lean_inc_ref(v_f_956_);
v___x_964_ = l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3_spec__4(v_f_956_, v___x_963_);
if (lean_obj_tag(v___x_964_) == 0)
{
lean_object* v_a_965_; size_t v___x_966_; size_t v___x_967_; 
v_a_965_ = lean_ctor_get(v___x_964_, 0);
lean_inc(v_a_965_);
lean_dec_ref_known(v___x_964_, 1);
v___x_966_ = ((size_t)1ULL);
v___x_967_ = lean_usize_add(v_i_958_, v___x_966_);
v_i_958_ = v___x_967_;
v_b_960_ = v_a_965_;
goto _start;
}
else
{
lean_dec_ref(v_f_956_);
return v___x_964_;
}
}
else
{
lean_object* v___x_969_; 
lean_dec_ref(v_f_956_);
v___x_969_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_969_, 0, v_b_960_);
return v___x_969_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3_spec__5___boxed(lean_object* v_f_970_, lean_object* v_as_971_, lean_object* v_i_972_, lean_object* v_stop_973_, lean_object* v_b_974_, lean_object* v___y_975_){
_start:
{
size_t v_i_boxed_976_; size_t v_stop_boxed_977_; lean_object* v_res_978_; 
v_i_boxed_976_ = lean_unbox_usize(v_i_972_);
lean_dec(v_i_972_);
v_stop_boxed_977_ = lean_unbox_usize(v_stop_973_);
lean_dec(v_stop_973_);
v_res_978_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3_spec__5(v_f_970_, v_as_971_, v_i_boxed_976_, v_stop_boxed_977_, v_b_974_);
lean_dec_ref(v_as_971_);
return v_res_978_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3_spec__4___boxed(lean_object* v_f_979_, lean_object* v_x_980_, lean_object* v___y_981_){
_start:
{
lean_object* v_res_982_; 
v_res_982_ = l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3_spec__4(v_f_979_, v_x_980_);
return v_res_982_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__5(lean_object* v_f_983_, lean_object* v_t_984_){
_start:
{
lean_object* v_root_986_; lean_object* v_tail_987_; lean_object* v___x_988_; 
v_root_986_ = lean_ctor_get(v_t_984_, 0);
lean_inc_ref(v_root_986_);
v_tail_987_ = lean_ctor_get(v_t_984_, 1);
lean_inc_ref(v_tail_987_);
lean_dec_ref(v_t_984_);
lean_inc_ref(v_f_983_);
v___x_988_ = l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3_spec__4(v_f_983_, v_root_986_);
if (lean_obj_tag(v___x_988_) == 0)
{
lean_object* v___x_990_; uint8_t v_isShared_991_; uint8_t v_isSharedCheck_1002_; 
v_isSharedCheck_1002_ = !lean_is_exclusive(v___x_988_);
if (v_isSharedCheck_1002_ == 0)
{
lean_object* v_unused_1003_; 
v_unused_1003_ = lean_ctor_get(v___x_988_, 0);
lean_dec(v_unused_1003_);
v___x_990_ = v___x_988_;
v_isShared_991_ = v_isSharedCheck_1002_;
goto v_resetjp_989_;
}
else
{
lean_dec(v___x_988_);
v___x_990_ = lean_box(0);
v_isShared_991_ = v_isSharedCheck_1002_;
goto v_resetjp_989_;
}
v_resetjp_989_:
{
lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; uint8_t v___x_995_; 
v___x_992_ = lean_unsigned_to_nat(0u);
v___x_993_ = lean_array_get_size(v_tail_987_);
v___x_994_ = lean_box(0);
v___x_995_ = lean_nat_dec_lt(v___x_992_, v___x_993_);
if (v___x_995_ == 0)
{
lean_object* v___x_997_; 
lean_dec_ref(v_tail_987_);
lean_dec_ref(v_f_983_);
if (v_isShared_991_ == 0)
{
lean_ctor_set(v___x_990_, 0, v___x_994_);
v___x_997_ = v___x_990_;
goto v_reusejp_996_;
}
else
{
lean_object* v_reuseFailAlloc_998_; 
v_reuseFailAlloc_998_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_998_, 0, v___x_994_);
v___x_997_ = v_reuseFailAlloc_998_;
goto v_reusejp_996_;
}
v_reusejp_996_:
{
return v___x_997_;
}
}
else
{
size_t v___x_999_; size_t v___x_1000_; lean_object* v___x_1001_; 
lean_del_object(v___x_990_);
v___x_999_ = ((size_t)0ULL);
v___x_1000_ = lean_usize_of_nat(v___x_993_);
v___x_1001_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__4(v_f_983_, v_tail_987_, v___x_999_, v___x_1000_, v___x_994_);
lean_dec_ref(v_tail_987_);
return v___x_1001_;
}
}
}
else
{
lean_dec_ref(v_tail_987_);
lean_dec_ref(v_f_983_);
return v___x_988_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__5___boxed(lean_object* v_f_1004_, lean_object* v_t_1005_, lean_object* v___y_1006_){
_start:
{
lean_object* v_res_1007_; 
v_res_1007_ = l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__5(v_f_1004_, v_t_1005_);
return v_res_1007_;
}
}
static lean_object* _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3___closed__0(void){
_start:
{
lean_object* v___x_1008_; 
v___x_1008_ = l_Lean_instInhabitedPersistentArrayNode_default___redArg();
return v___x_1008_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3(lean_object* v_f_1009_, lean_object* v_x_1010_, size_t v_x_1011_, size_t v_x_1012_){
_start:
{
if (lean_obj_tag(v_x_1010_) == 0)
{
lean_object* v_cs_1014_; lean_object* v___x_1015_; size_t v___x_1016_; lean_object* v_j_1017_; lean_object* v___x_1018_; size_t v___x_1019_; size_t v___x_1020_; size_t v___x_1021_; size_t v___x_1022_; size_t v___x_1023_; size_t v___x_1024_; lean_object* v___x_1025_; 
v_cs_1014_ = lean_ctor_get(v_x_1010_, 0);
lean_inc_ref(v_cs_1014_);
lean_dec_ref_known(v_x_1010_, 1);
v___x_1015_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3___closed__0);
v___x_1016_ = lean_usize_shift_right(v_x_1011_, v_x_1012_);
v_j_1017_ = lean_usize_to_nat(v___x_1016_);
v___x_1018_ = lean_array_get_borrowed(v___x_1015_, v_cs_1014_, v_j_1017_);
v___x_1019_ = ((size_t)1ULL);
v___x_1020_ = lean_usize_shift_left(v___x_1019_, v_x_1012_);
v___x_1021_ = lean_usize_sub(v___x_1020_, v___x_1019_);
v___x_1022_ = lean_usize_land(v_x_1011_, v___x_1021_);
v___x_1023_ = ((size_t)5ULL);
v___x_1024_ = lean_usize_sub(v_x_1012_, v___x_1023_);
lean_inc(v___x_1018_);
lean_inc_ref(v_f_1009_);
v___x_1025_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3(v_f_1009_, v___x_1018_, v___x_1022_, v___x_1024_);
if (lean_obj_tag(v___x_1025_) == 0)
{
lean_object* v___x_1027_; uint8_t v_isShared_1028_; uint8_t v_isSharedCheck_1040_; 
v_isSharedCheck_1040_ = !lean_is_exclusive(v___x_1025_);
if (v_isSharedCheck_1040_ == 0)
{
lean_object* v_unused_1041_; 
v_unused_1041_ = lean_ctor_get(v___x_1025_, 0);
lean_dec(v_unused_1041_);
v___x_1027_ = v___x_1025_;
v_isShared_1028_ = v_isSharedCheck_1040_;
goto v_resetjp_1026_;
}
else
{
lean_dec(v___x_1025_);
v___x_1027_ = lean_box(0);
v_isShared_1028_ = v_isSharedCheck_1040_;
goto v_resetjp_1026_;
}
v_resetjp_1026_:
{
lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; uint8_t v___x_1033_; 
v___x_1029_ = lean_unsigned_to_nat(1u);
v___x_1030_ = lean_nat_add(v_j_1017_, v___x_1029_);
lean_dec(v_j_1017_);
v___x_1031_ = lean_array_get_size(v_cs_1014_);
v___x_1032_ = lean_box(0);
v___x_1033_ = lean_nat_dec_lt(v___x_1030_, v___x_1031_);
if (v___x_1033_ == 0)
{
lean_object* v___x_1035_; 
lean_dec(v___x_1030_);
lean_dec_ref(v_cs_1014_);
lean_dec_ref(v_f_1009_);
if (v_isShared_1028_ == 0)
{
lean_ctor_set(v___x_1027_, 0, v___x_1032_);
v___x_1035_ = v___x_1027_;
goto v_reusejp_1034_;
}
else
{
lean_object* v_reuseFailAlloc_1036_; 
v_reuseFailAlloc_1036_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1036_, 0, v___x_1032_);
v___x_1035_ = v_reuseFailAlloc_1036_;
goto v_reusejp_1034_;
}
v_reusejp_1034_:
{
return v___x_1035_;
}
}
else
{
size_t v___x_1037_; size_t v___x_1038_; lean_object* v___x_1039_; 
lean_del_object(v___x_1027_);
v___x_1037_ = lean_usize_of_nat(v___x_1030_);
lean_dec(v___x_1030_);
v___x_1038_ = lean_usize_of_nat(v___x_1031_);
v___x_1039_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3_spec__5(v_f_1009_, v_cs_1014_, v___x_1037_, v___x_1038_, v___x_1032_);
lean_dec_ref(v_cs_1014_);
return v___x_1039_;
}
}
}
else
{
lean_dec(v_j_1017_);
lean_dec_ref(v_cs_1014_);
lean_dec_ref(v_f_1009_);
return v___x_1025_;
}
}
else
{
lean_object* v_vs_1042_; lean_object* v___x_1044_; uint8_t v_isShared_1045_; uint8_t v_isSharedCheck_1056_; 
v_vs_1042_ = lean_ctor_get(v_x_1010_, 0);
v_isSharedCheck_1056_ = !lean_is_exclusive(v_x_1010_);
if (v_isSharedCheck_1056_ == 0)
{
v___x_1044_ = v_x_1010_;
v_isShared_1045_ = v_isSharedCheck_1056_;
goto v_resetjp_1043_;
}
else
{
lean_inc(v_vs_1042_);
lean_dec(v_x_1010_);
v___x_1044_ = lean_box(0);
v_isShared_1045_ = v_isSharedCheck_1056_;
goto v_resetjp_1043_;
}
v_resetjp_1043_:
{
lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; uint8_t v___x_1049_; 
v___x_1046_ = lean_usize_to_nat(v_x_1011_);
v___x_1047_ = lean_array_get_size(v_vs_1042_);
v___x_1048_ = lean_box(0);
v___x_1049_ = lean_nat_dec_lt(v___x_1046_, v___x_1047_);
if (v___x_1049_ == 0)
{
lean_object* v___x_1051_; 
lean_dec(v___x_1046_);
lean_dec_ref(v_vs_1042_);
lean_dec_ref(v_f_1009_);
if (v_isShared_1045_ == 0)
{
lean_ctor_set_tag(v___x_1044_, 0);
lean_ctor_set(v___x_1044_, 0, v___x_1048_);
v___x_1051_ = v___x_1044_;
goto v_reusejp_1050_;
}
else
{
lean_object* v_reuseFailAlloc_1052_; 
v_reuseFailAlloc_1052_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1052_, 0, v___x_1048_);
v___x_1051_ = v_reuseFailAlloc_1052_;
goto v_reusejp_1050_;
}
v_reusejp_1050_:
{
return v___x_1051_;
}
}
else
{
size_t v___x_1053_; size_t v___x_1054_; lean_object* v___x_1055_; 
lean_del_object(v___x_1044_);
v___x_1053_ = lean_usize_of_nat(v___x_1046_);
lean_dec(v___x_1046_);
v___x_1054_ = lean_usize_of_nat(v___x_1047_);
v___x_1055_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__4(v_f_1009_, v_vs_1042_, v___x_1053_, v___x_1054_, v___x_1048_);
lean_dec_ref(v_vs_1042_);
return v___x_1055_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3___boxed(lean_object* v_f_1057_, lean_object* v_x_1058_, lean_object* v_x_1059_, lean_object* v_x_1060_, lean_object* v___y_1061_){
_start:
{
size_t v_x_1368__boxed_1062_; size_t v_x_1369__boxed_1063_; lean_object* v_res_1064_; 
v_x_1368__boxed_1062_ = lean_unbox_usize(v_x_1059_);
lean_dec(v_x_1059_);
v_x_1369__boxed_1063_ = lean_unbox_usize(v_x_1060_);
lean_dec(v_x_1060_);
v_res_1064_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3(v_f_1057_, v_x_1058_, v_x_1368__boxed_1062_, v_x_1369__boxed_1063_);
return v_res_1064_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2(lean_object* v_f_1065_, lean_object* v_t_1066_, lean_object* v_start_1067_){
_start:
{
lean_object* v___x_1069_; uint8_t v___x_1070_; 
v___x_1069_ = lean_unsigned_to_nat(0u);
v___x_1070_ = lean_nat_dec_eq(v_start_1067_, v___x_1069_);
if (v___x_1070_ == 0)
{
lean_object* v_root_1071_; lean_object* v_tail_1072_; size_t v_shift_1073_; lean_object* v_tailOff_1074_; uint8_t v___x_1075_; 
v_root_1071_ = lean_ctor_get(v_t_1066_, 0);
lean_inc_ref(v_root_1071_);
v_tail_1072_ = lean_ctor_get(v_t_1066_, 1);
lean_inc_ref(v_tail_1072_);
v_shift_1073_ = lean_ctor_get_usize(v_t_1066_, 4);
v_tailOff_1074_ = lean_ctor_get(v_t_1066_, 3);
lean_inc(v_tailOff_1074_);
lean_dec_ref(v_t_1066_);
v___x_1075_ = lean_nat_dec_le(v_tailOff_1074_, v_start_1067_);
if (v___x_1075_ == 0)
{
size_t v___x_1076_; lean_object* v___x_1077_; 
lean_dec(v_tailOff_1074_);
v___x_1076_ = lean_usize_of_nat(v_start_1067_);
lean_inc_ref(v_f_1065_);
v___x_1077_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3(v_f_1065_, v_root_1071_, v___x_1076_, v_shift_1073_);
if (lean_obj_tag(v___x_1077_) == 0)
{
lean_object* v___x_1079_; uint8_t v_isShared_1080_; uint8_t v_isSharedCheck_1090_; 
v_isSharedCheck_1090_ = !lean_is_exclusive(v___x_1077_);
if (v_isSharedCheck_1090_ == 0)
{
lean_object* v_unused_1091_; 
v_unused_1091_ = lean_ctor_get(v___x_1077_, 0);
lean_dec(v_unused_1091_);
v___x_1079_ = v___x_1077_;
v_isShared_1080_ = v_isSharedCheck_1090_;
goto v_resetjp_1078_;
}
else
{
lean_dec(v___x_1077_);
v___x_1079_ = lean_box(0);
v_isShared_1080_ = v_isSharedCheck_1090_;
goto v_resetjp_1078_;
}
v_resetjp_1078_:
{
lean_object* v___x_1081_; lean_object* v___x_1082_; uint8_t v___x_1083_; 
v___x_1081_ = lean_array_get_size(v_tail_1072_);
v___x_1082_ = lean_box(0);
v___x_1083_ = lean_nat_dec_lt(v___x_1069_, v___x_1081_);
if (v___x_1083_ == 0)
{
lean_object* v___x_1085_; 
lean_dec_ref(v_tail_1072_);
lean_dec_ref(v_f_1065_);
if (v_isShared_1080_ == 0)
{
lean_ctor_set(v___x_1079_, 0, v___x_1082_);
v___x_1085_ = v___x_1079_;
goto v_reusejp_1084_;
}
else
{
lean_object* v_reuseFailAlloc_1086_; 
v_reuseFailAlloc_1086_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1086_, 0, v___x_1082_);
v___x_1085_ = v_reuseFailAlloc_1086_;
goto v_reusejp_1084_;
}
v_reusejp_1084_:
{
return v___x_1085_;
}
}
else
{
size_t v___x_1087_; size_t v___x_1088_; lean_object* v___x_1089_; 
lean_del_object(v___x_1079_);
v___x_1087_ = ((size_t)0ULL);
v___x_1088_ = lean_usize_of_nat(v___x_1081_);
v___x_1089_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__4(v_f_1065_, v_tail_1072_, v___x_1087_, v___x_1088_, v___x_1082_);
lean_dec_ref(v_tail_1072_);
return v___x_1089_;
}
}
}
else
{
lean_dec_ref(v_tail_1072_);
lean_dec_ref(v_f_1065_);
return v___x_1077_;
}
}
else
{
lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; uint8_t v___x_1095_; 
lean_dec_ref(v_root_1071_);
v___x_1092_ = lean_nat_sub(v_start_1067_, v_tailOff_1074_);
lean_dec(v_tailOff_1074_);
v___x_1093_ = lean_array_get_size(v_tail_1072_);
v___x_1094_ = lean_box(0);
v___x_1095_ = lean_nat_dec_lt(v___x_1092_, v___x_1093_);
if (v___x_1095_ == 0)
{
lean_object* v___x_1096_; 
lean_dec(v___x_1092_);
lean_dec_ref(v_tail_1072_);
lean_dec_ref(v_f_1065_);
v___x_1096_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1096_, 0, v___x_1094_);
return v___x_1096_;
}
else
{
size_t v___x_1097_; size_t v___x_1098_; lean_object* v___x_1099_; 
v___x_1097_ = lean_usize_of_nat(v___x_1092_);
lean_dec(v___x_1092_);
v___x_1098_ = lean_usize_of_nat(v___x_1093_);
v___x_1099_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__4(v_f_1065_, v_tail_1072_, v___x_1097_, v___x_1098_, v___x_1094_);
lean_dec_ref(v_tail_1072_);
return v___x_1099_;
}
}
}
else
{
lean_object* v___x_1100_; 
v___x_1100_ = l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__5(v_f_1065_, v_t_1066_);
return v___x_1100_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2___boxed(lean_object* v_f_1101_, lean_object* v_t_1102_, lean_object* v_start_1103_, lean_object* v___y_1104_){
_start:
{
lean_object* v_res_1105_; 
v_res_1105_ = l_Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2(v_f_1101_, v_t_1102_, v_start_1103_);
lean_dec(v_start_1103_);
return v_res_1105_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1(lean_object* v_log_1106_, lean_object* v_f_1107_){
_start:
{
lean_object* v_unreported_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; 
v_unreported_1109_ = lean_ctor_get(v_log_1106_, 1);
lean_inc_ref(v_unreported_1109_);
lean_dec_ref(v_log_1106_);
v___x_1110_ = lean_unsigned_to_nat(0u);
v___x_1111_ = l_Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2(v_f_1107_, v_unreported_1109_, v___x_1110_);
return v___x_1111_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1___boxed(lean_object* v_log_1112_, lean_object* v_f_1113_, lean_object* v___y_1114_){
_start:
{
lean_object* v_res_1115_; 
v_res_1115_ = l_Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1(v_log_1112_, v_f_1113_);
return v_res_1115_;
}
}
static lean_object* _init_l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse___closed__1(void){
_start:
{
lean_object* v___x_1117_; lean_object* v___x_1118_; 
v___x_1117_ = ((lean_object*)(l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse___closed__0));
v___x_1118_ = lean_mk_io_user_error(v___x_1117_);
return v___x_1118_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse(lean_object* v_env_1119_, lean_object* v_inputCtx_1120_, lean_object* v_state_1121_, lean_object* v_msgs_1122_, lean_object* v_stxs_1123_){
_start:
{
lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v_snd_1130_; lean_object* v_fst_1131_; lean_object* v_fst_1132_; lean_object* v_snd_1133_; uint8_t v___y_1135_; uint8_t v___x_1156_; 
v___x_1125_ = l_Lean_Options_empty;
v___x_1126_ = lean_obj_once(&l_Lean_Parser_parseHeader___closed__1, &l_Lean_Parser_parseHeader___closed__1_once, _init_l_Lean_Parser_parseHeader___closed__1);
v___x_1127_ = lean_box(0);
lean_inc_ref(v_env_1119_);
v___x_1128_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1128_, 0, v_env_1119_);
lean_ctor_set(v___x_1128_, 1, v___x_1125_);
lean_ctor_set(v___x_1128_, 2, v___x_1126_);
lean_ctor_set(v___x_1128_, 3, v___x_1127_);
lean_inc_ref(v_inputCtx_1120_);
v___x_1129_ = l_Lean_Parser_parseCommand(v_inputCtx_1120_, v___x_1128_, v_state_1121_, v_msgs_1122_);
v_snd_1130_ = lean_ctor_get(v___x_1129_, 1);
lean_inc(v_snd_1130_);
v_fst_1131_ = lean_ctor_get(v___x_1129_, 0);
lean_inc_n(v_fst_1131_, 2);
lean_dec_ref(v___x_1129_);
v_fst_1132_ = lean_ctor_get(v_snd_1130_, 0);
lean_inc(v_fst_1132_);
v_snd_1133_ = lean_ctor_get(v_snd_1130_, 1);
lean_inc(v_snd_1133_);
lean_dec(v_snd_1130_);
v___x_1156_ = l_Lean_Parser_isTerminalCommand(v_fst_1131_);
if (v___x_1156_ == 0)
{
lean_object* v___x_1157_; 
v___x_1157_ = lean_array_push(v_stxs_1123_, v_fst_1131_);
v_state_1121_ = v_fst_1132_;
v_msgs_1122_ = v_snd_1133_;
v_stxs_1123_ = v___x_1157_;
goto _start;
}
else
{
uint8_t v___x_1159_; 
lean_dec(v_fst_1132_);
lean_dec_ref(v_inputCtx_1120_);
lean_dec_ref(v_env_1119_);
v___x_1159_ = l_Lean_MessageLog_hasUnreported(v_snd_1133_);
if (v___x_1159_ == 0)
{
if (v___x_1156_ == 0)
{
lean_dec(v_fst_1131_);
lean_dec_ref(v_stxs_1123_);
v___y_1135_ = v___x_1156_;
goto v___jp_1134_;
}
else
{
lean_object* v___x_1160_; lean_object* v___x_1161_; 
lean_dec(v_snd_1133_);
v___x_1160_ = lean_array_push(v_stxs_1123_, v_fst_1131_);
v___x_1161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1161_, 0, v___x_1160_);
return v___x_1161_;
}
}
else
{
uint8_t v___x_1162_; 
lean_dec(v_fst_1131_);
lean_dec_ref(v_stxs_1123_);
v___x_1162_ = 0;
v___y_1135_ = v___x_1162_;
goto v___jp_1134_;
}
}
v___jp_1134_:
{
lean_object* v___x_1136_; lean_object* v___f_1137_; lean_object* v___x_1138_; 
v___x_1136_ = lean_box(v___y_1135_);
v___f_1137_ = lean_alloc_closure((void*)(l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1137_, 0, v___x_1136_);
v___x_1138_ = l_Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1(v_snd_1133_, v___f_1137_);
if (lean_obj_tag(v___x_1138_) == 0)
{
lean_object* v___x_1140_; uint8_t v_isShared_1141_; uint8_t v_isSharedCheck_1146_; 
v_isSharedCheck_1146_ = !lean_is_exclusive(v___x_1138_);
if (v_isSharedCheck_1146_ == 0)
{
lean_object* v_unused_1147_; 
v_unused_1147_ = lean_ctor_get(v___x_1138_, 0);
lean_dec(v_unused_1147_);
v___x_1140_ = v___x_1138_;
v_isShared_1141_ = v_isSharedCheck_1146_;
goto v_resetjp_1139_;
}
else
{
lean_dec(v___x_1138_);
v___x_1140_ = lean_box(0);
v_isShared_1141_ = v_isSharedCheck_1146_;
goto v_resetjp_1139_;
}
v_resetjp_1139_:
{
lean_object* v___x_1142_; lean_object* v___x_1144_; 
v___x_1142_ = lean_obj_once(&l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse___closed__1, &l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse___closed__1_once, _init_l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse___closed__1);
if (v_isShared_1141_ == 0)
{
lean_ctor_set_tag(v___x_1140_, 1);
lean_ctor_set(v___x_1140_, 0, v___x_1142_);
v___x_1144_ = v___x_1140_;
goto v_reusejp_1143_;
}
else
{
lean_object* v_reuseFailAlloc_1145_; 
v_reuseFailAlloc_1145_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1145_, 0, v___x_1142_);
v___x_1144_ = v_reuseFailAlloc_1145_;
goto v_reusejp_1143_;
}
v_reusejp_1143_:
{
return v___x_1144_;
}
}
}
else
{
lean_object* v_a_1148_; lean_object* v___x_1150_; uint8_t v_isShared_1151_; uint8_t v_isSharedCheck_1155_; 
v_a_1148_ = lean_ctor_get(v___x_1138_, 0);
v_isSharedCheck_1155_ = !lean_is_exclusive(v___x_1138_);
if (v_isSharedCheck_1155_ == 0)
{
v___x_1150_ = v___x_1138_;
v_isShared_1151_ = v_isSharedCheck_1155_;
goto v_resetjp_1149_;
}
else
{
lean_inc(v_a_1148_);
lean_dec(v___x_1138_);
v___x_1150_ = lean_box(0);
v_isShared_1151_ = v_isSharedCheck_1155_;
goto v_resetjp_1149_;
}
v_resetjp_1149_:
{
lean_object* v___x_1153_; 
if (v_isShared_1151_ == 0)
{
v___x_1153_ = v___x_1150_;
goto v_reusejp_1152_;
}
else
{
lean_object* v_reuseFailAlloc_1154_; 
v_reuseFailAlloc_1154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1154_, 0, v_a_1148_);
v___x_1153_ = v_reuseFailAlloc_1154_;
goto v_reusejp_1152_;
}
v_reusejp_1152_:
{
return v___x_1153_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse___boxed(lean_object* v_env_1163_, lean_object* v_inputCtx_1164_, lean_object* v_state_1165_, lean_object* v_msgs_1166_, lean_object* v_stxs_1167_, lean_object* v_a_1168_){
_start:
{
lean_object* v_res_1169_; 
v_res_1169_ = l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse(v_env_1163_, v_inputCtx_1164_, v_state_1165_, v_msgs_1166_, v_stxs_1167_);
return v_res_1169_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_testParseModuleAux(lean_object* v_env_1170_, lean_object* v_inputCtx_1171_, lean_object* v_s_1172_, lean_object* v_msgs_1173_, lean_object* v_stxs_1174_){
_start:
{
lean_object* v___x_1176_; 
v___x_1176_ = l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse(v_env_1170_, v_inputCtx_1171_, v_s_1172_, v_msgs_1173_, v_stxs_1174_);
return v___x_1176_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_testParseModuleAux___boxed(lean_object* v_env_1177_, lean_object* v_inputCtx_1178_, lean_object* v_s_1179_, lean_object* v_msgs_1180_, lean_object* v_stxs_1181_, lean_object* v_a_1182_){
_start:
{
lean_object* v_res_1183_; 
v_res_1183_ = l_Lean_Parser_testParseModuleAux(v_env_1177_, v_inputCtx_1178_, v_s_1179_, v_msgs_1180_, v_stxs_1181_);
return v_res_1183_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_testParseModule(lean_object* v_env_1192_, lean_object* v_fname_1193_, lean_object* v_contents_1194_){
_start:
{
uint8_t v___x_1196_; lean_object* v___x_1197_; lean_object* v_inputCtx_1198_; lean_object* v___x_1199_; 
v___x_1196_ = 1;
v___x_1197_ = lean_string_utf8_byte_size(v_contents_1194_);
v_inputCtx_1198_ = l_Lean_Parser_mkInputContext___redArg(v_contents_1194_, v_fname_1193_, v___x_1196_, v___x_1197_);
lean_inc_ref(v_inputCtx_1198_);
v___x_1199_ = l_Lean_Parser_parseHeader(v_inputCtx_1198_);
if (lean_obj_tag(v___x_1199_) == 0)
{
lean_object* v_a_1200_; lean_object* v_snd_1201_; lean_object* v_fst_1202_; lean_object* v_fst_1203_; lean_object* v_snd_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; 
v_a_1200_ = lean_ctor_get(v___x_1199_, 0);
lean_inc(v_a_1200_);
lean_dec_ref_known(v___x_1199_, 1);
v_snd_1201_ = lean_ctor_get(v_a_1200_, 1);
lean_inc(v_snd_1201_);
v_fst_1202_ = lean_ctor_get(v_a_1200_, 0);
lean_inc(v_fst_1202_);
lean_dec(v_a_1200_);
v_fst_1203_ = lean_ctor_get(v_snd_1201_, 0);
lean_inc(v_fst_1203_);
v_snd_1204_ = lean_ctor_get(v_snd_1201_, 1);
lean_inc(v_snd_1204_);
lean_dec(v_snd_1201_);
v___x_1205_ = ((lean_object*)(l_Lean_Parser_testParseModule___closed__0));
v___x_1206_ = l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse(v_env_1192_, v_inputCtx_1198_, v_fst_1203_, v_snd_1204_, v___x_1205_);
if (lean_obj_tag(v___x_1206_) == 0)
{
lean_object* v_a_1207_; lean_object* v___x_1209_; uint8_t v_isShared_1210_; uint8_t v_isSharedCheck_1222_; 
v_a_1207_ = lean_ctor_get(v___x_1206_, 0);
v_isSharedCheck_1222_ = !lean_is_exclusive(v___x_1206_);
if (v_isSharedCheck_1222_ == 0)
{
v___x_1209_ = v___x_1206_;
v_isShared_1210_ = v_isSharedCheck_1222_;
goto v_resetjp_1208_;
}
else
{
lean_inc(v_a_1207_);
lean_dec(v___x_1206_);
v___x_1209_ = lean_box(0);
v_isShared_1210_ = v_isSharedCheck_1222_;
goto v_resetjp_1208_;
}
v_resetjp_1208_:
{
lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1220_; 
v___x_1211_ = ((lean_object*)(l_Lean_Parser_testParseModule___closed__2));
v___x_1212_ = l_Lean_mkListNode(v_a_1207_);
v___x_1213_ = lean_unsigned_to_nat(2u);
v___x_1214_ = lean_mk_empty_array_with_capacity(v___x_1213_);
v___x_1215_ = lean_array_push(v___x_1214_, v_fst_1202_);
v___x_1216_ = lean_array_push(v___x_1215_, v___x_1212_);
v___x_1217_ = lean_box(2);
v___x_1218_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1218_, 0, v___x_1217_);
lean_ctor_set(v___x_1218_, 1, v___x_1211_);
lean_ctor_set(v___x_1218_, 2, v___x_1216_);
if (v_isShared_1210_ == 0)
{
lean_ctor_set(v___x_1209_, 0, v___x_1218_);
v___x_1220_ = v___x_1209_;
goto v_reusejp_1219_;
}
else
{
lean_object* v_reuseFailAlloc_1221_; 
v_reuseFailAlloc_1221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1221_, 0, v___x_1218_);
v___x_1220_ = v_reuseFailAlloc_1221_;
goto v_reusejp_1219_;
}
v_reusejp_1219_:
{
return v___x_1220_;
}
}
}
else
{
lean_object* v_a_1223_; lean_object* v___x_1225_; uint8_t v_isShared_1226_; uint8_t v_isSharedCheck_1230_; 
lean_dec(v_fst_1202_);
v_a_1223_ = lean_ctor_get(v___x_1206_, 0);
v_isSharedCheck_1230_ = !lean_is_exclusive(v___x_1206_);
if (v_isSharedCheck_1230_ == 0)
{
v___x_1225_ = v___x_1206_;
v_isShared_1226_ = v_isSharedCheck_1230_;
goto v_resetjp_1224_;
}
else
{
lean_inc(v_a_1223_);
lean_dec(v___x_1206_);
v___x_1225_ = lean_box(0);
v_isShared_1226_ = v_isSharedCheck_1230_;
goto v_resetjp_1224_;
}
v_resetjp_1224_:
{
lean_object* v___x_1228_; 
if (v_isShared_1226_ == 0)
{
v___x_1228_ = v___x_1225_;
goto v_reusejp_1227_;
}
else
{
lean_object* v_reuseFailAlloc_1229_; 
v_reuseFailAlloc_1229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1229_, 0, v_a_1223_);
v___x_1228_ = v_reuseFailAlloc_1229_;
goto v_reusejp_1227_;
}
v_reusejp_1227_:
{
return v___x_1228_;
}
}
}
}
else
{
lean_object* v_a_1231_; lean_object* v___x_1233_; uint8_t v_isShared_1234_; uint8_t v_isSharedCheck_1238_; 
lean_dec_ref(v_inputCtx_1198_);
lean_dec_ref(v_env_1192_);
v_a_1231_ = lean_ctor_get(v___x_1199_, 0);
v_isSharedCheck_1238_ = !lean_is_exclusive(v___x_1199_);
if (v_isSharedCheck_1238_ == 0)
{
v___x_1233_ = v___x_1199_;
v_isShared_1234_ = v_isSharedCheck_1238_;
goto v_resetjp_1232_;
}
else
{
lean_inc(v_a_1231_);
lean_dec(v___x_1199_);
v___x_1233_ = lean_box(0);
v_isShared_1234_ = v_isSharedCheck_1238_;
goto v_resetjp_1232_;
}
v_resetjp_1232_:
{
lean_object* v___x_1236_; 
if (v_isShared_1234_ == 0)
{
v___x_1236_ = v___x_1233_;
goto v_reusejp_1235_;
}
else
{
lean_object* v_reuseFailAlloc_1237_; 
v_reuseFailAlloc_1237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1237_, 0, v_a_1231_);
v___x_1236_ = v_reuseFailAlloc_1237_;
goto v_reusejp_1235_;
}
v_reusejp_1235_:
{
return v___x_1236_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_testParseModule___boxed(lean_object* v_env_1239_, lean_object* v_fname_1240_, lean_object* v_contents_1241_, lean_object* v_a_1242_){
_start:
{
lean_object* v_res_1243_; 
v_res_1243_ = l_Lean_Parser_testParseModule(v_env_1239_, v_fname_1240_, v_contents_1241_);
return v_res_1243_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_testParseFile(lean_object* v_env_1244_, lean_object* v_fname_1245_){
_start:
{
lean_object* v___x_1247_; 
v___x_1247_ = l_IO_FS_readFile(v_fname_1245_);
if (lean_obj_tag(v___x_1247_) == 0)
{
lean_object* v_a_1248_; lean_object* v___x_1249_; 
v_a_1248_ = lean_ctor_get(v___x_1247_, 0);
lean_inc(v_a_1248_);
lean_dec_ref_known(v___x_1247_, 1);
v___x_1249_ = l_Lean_Parser_testParseModule(v_env_1244_, v_fname_1245_, v_a_1248_);
return v___x_1249_;
}
else
{
lean_object* v_a_1250_; lean_object* v___x_1252_; uint8_t v_isShared_1253_; uint8_t v_isSharedCheck_1257_; 
lean_dec_ref(v_fname_1245_);
lean_dec_ref(v_env_1244_);
v_a_1250_ = lean_ctor_get(v___x_1247_, 0);
v_isSharedCheck_1257_ = !lean_is_exclusive(v___x_1247_);
if (v_isSharedCheck_1257_ == 0)
{
v___x_1252_ = v___x_1247_;
v_isShared_1253_ = v_isSharedCheck_1257_;
goto v_resetjp_1251_;
}
else
{
lean_inc(v_a_1250_);
lean_dec(v___x_1247_);
v___x_1252_ = lean_box(0);
v_isShared_1253_ = v_isSharedCheck_1257_;
goto v_resetjp_1251_;
}
v_resetjp_1251_:
{
lean_object* v___x_1255_; 
if (v_isShared_1253_ == 0)
{
v___x_1255_ = v___x_1252_;
goto v_reusejp_1254_;
}
else
{
lean_object* v_reuseFailAlloc_1256_; 
v_reuseFailAlloc_1256_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1256_, 0, v_a_1250_);
v___x_1255_ = v_reuseFailAlloc_1256_;
goto v_reusejp_1254_;
}
v_reusejp_1254_:
{
return v___x_1255_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_testParseFile___boxed(lean_object* v_env_1258_, lean_object* v_fname_1259_, lean_object* v_a_1260_){
_start:
{
lean_object* v_res_1261_; 
v_res_1261_ = l_Lean_Parser_testParseFile(v_env_1258_, v_fname_1259_);
return v_res_1261_;
}
}
lean_object* runtime_initialize_Lean_Parser_Module_Syntax(uint8_t builtin);
lean_object* runtime_initialize_Init_While(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Parser_Module(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Parser_Module_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lean_Parser_Module_Syntax(uint8_t builtin);
lean_object* runtime_initialize_Lean_Parser_Extra(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Parser_Module(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lean_Parser_Module_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser_Extra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Parser_Module_Syntax(uint8_t builtin);
lean_object* initialize_Lean_Parser_Module_Syntax(uint8_t builtin);
lean_object* initialize_Init_While(uint8_t builtin);
lean_object* initialize_Lean_Parser_Extra(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Parser_Module(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Parser_Module_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Module_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Extra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser_Module(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Parser_Module(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Parser_Module(builtin);
}
#ifdef __cplusplus
}
#endif

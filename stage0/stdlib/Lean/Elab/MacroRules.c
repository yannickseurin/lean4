// Lean compiler output
// Module: Lean.Elab.MacroRules
// Imports: public import Lean.Elab.Syntax public import Lean.Elab.AuxDef
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
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Elab_Command_getRef___redArg(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
extern lean_object* l_Lean_Elab_Command_instInhabitedScope_default;
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getQuotContent(lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
uint8_t l_Lean_Elab_Command_checkRuleKind(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Syntax_setArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Elab_Command_getCurrMacroScope___redArg(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
uint8_t l_Lean_Syntax_isQuot(lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkIdentFrom(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Array_mkArray1___redArg(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Parser_Command_visibility_ofAttrKind(lean_object*);
lean_object* l_Lean_mkIdent(lean_object*);
lean_object* l_Lean_Syntax_TSepArray_ofElems___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_TSepArray_getElems___redArg(lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lean_Elab_Command_resolveSyntaxKind(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandNoKindMacroRulesAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* l_Lean_Elab_Command_adaptExpander(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Command_commandElabAttribute;
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabMacroRulesAux_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabMacroRulesAux_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabMacroRulesAux_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabMacroRulesAux_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabMacroRulesAux_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabMacroRulesAux_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabMacroRulesAux_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabMacroRulesAux_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabMacroRulesAux_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabMacroRulesAux_spec__3___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__3___redArg___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__3___redArg___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__3___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__3___redArg___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__3___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__3___redArg___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__3___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__3___redArg___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__3___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__3___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__4_spec__8___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__4_spec__8___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__4_spec__8___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__4_spec__8___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__4_spec__8___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__4_spec__8___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__4_spec__8___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__4_spec__8___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__4_spec__8___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__4_spec__8___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__4_spec__8___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__4_spec__8(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__4_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__4_spec__7___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__4___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__4___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__4___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__4___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__4___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__4___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__4___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__4___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabMacroRulesAux_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabMacroRulesAux_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabMacroRulesAux_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabMacroRulesAux_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabMacroRulesAux_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 60, .m_data = "invalid macro_rules alternative, expected syntax node kind `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__3;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__6_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "matchAlt"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__7_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__8_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__8_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__8_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__7_value),LEAN_SCALAR_PTR_LITERAL(178, 0, 203, 112, 215, 49, 100, 229)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__8_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "|"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__9_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__10_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__10_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__11 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__11_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__12;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "=>"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__13 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__13_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "choice"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__14 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__14_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__14_value),LEAN_SCALAR_PTR_LITERAL(59, 66, 148, 42, 181, 100, 85, 166)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__15 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__15_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 63, .m_capacity = 63, .m_length = 62, .m_data = "invalid macro_rules alternative, unexpected syntax node kind `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__16 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__16_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__17;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Command_elabMacroRulesAux___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "attributes"};
static const lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__0 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__0_value;
static const lean_string_object l_Lean_Elab_Command_elabMacroRulesAux___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "@["};
static const lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__1 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__1_value;
static const lean_string_object l_Lean_Elab_Command_elabMacroRulesAux___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__2 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__2_value;
static const lean_string_object l_Lean_Elab_Command_elabMacroRulesAux___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "macroRules"};
static const lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__3 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__3_value;
static lean_once_cell_t l_Lean_Elab_Command_elabMacroRulesAux___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__4;
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRulesAux___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__3_value),LEAN_SCALAR_PTR_LITERAL(6, 217, 176, 227, 245, 86, 100, 50)}};
static const lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__5 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__5_value;
static const lean_string_object l_Lean_Elab_Command_elabMacroRulesAux___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__6 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__6_value;
static const lean_string_object l_Lean_Elab_Command_elabMacroRulesAux___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Macro"};
static const lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__7 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__7_value;
static lean_once_cell_t l_Lean_Elab_Command_elabMacroRulesAux___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__8;
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRulesAux___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__7_value),LEAN_SCALAR_PTR_LITERAL(153, 13, 84, 30, 172, 208, 133, 203)}};
static const lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__9 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__9_value;
static const lean_string_object l_Lean_Elab_Command_elabMacroRulesAux___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__10 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__10_value;
static const lean_string_object l_Lean_Elab_Command_elabMacroRulesAux___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "fun"};
static const lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__11 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__11_value;
static const lean_string_object l_Lean_Elab_Command_elabMacroRulesAux___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "matchAlts"};
static const lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__12 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__12_value;
static const lean_string_object l_Lean_Elab_Command_elabMacroRulesAux___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hole"};
static const lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__13 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__13_value;
static const lean_string_object l_Lean_Elab_Command_elabMacroRulesAux___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__14 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__14_value;
static const lean_string_object l_Lean_Elab_Command_elabMacroRulesAux___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "noErrorIfUnused"};
static const lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__15 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__15_value;
static const lean_string_object l_Lean_Elab_Command_elabMacroRulesAux___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "no_error_if_unused%"};
static const lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__16 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__16_value;
static const lean_string_object l_Lean_Elab_Command_elabMacroRulesAux___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__17 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__17_value;
static const lean_string_object l_Lean_Elab_Command_elabMacroRulesAux___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "throw"};
static const lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__18 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__18_value;
static lean_once_cell_t l_Lean_Elab_Command_elabMacroRulesAux___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__19;
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRulesAux___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__18_value),LEAN_SCALAR_PTR_LITERAL(60, 81, 80, 209, 187, 239, 255, 113)}};
static const lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__20 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__20_value;
static const lean_string_object l_Lean_Elab_Command_elabMacroRulesAux___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "MonadExcept"};
static const lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__21 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__21_value;
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRulesAux___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__21_value),LEAN_SCALAR_PTR_LITERAL(162, 154, 253, 120, 110, 153, 103, 113)}};
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRulesAux___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__22_value_aux_0),((lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__18_value),LEAN_SCALAR_PTR_LITERAL(121, 11, 61, 69, 62, 207, 229, 53)}};
static const lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__22 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__22_value;
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRulesAux___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__22_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__23 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__23_value;
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRulesAux___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__23_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__24 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__24_value;
static const lean_string_object l_Lean_Elab_Command_elabMacroRulesAux___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "Lean.Macro.Exception.unsupportedSyntax"};
static const lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__25 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__25_value;
static lean_once_cell_t l_Lean_Elab_Command_elabMacroRulesAux___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__26;
static const lean_string_object l_Lean_Elab_Command_elabMacroRulesAux___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Exception"};
static const lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__27 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__27_value;
static const lean_string_object l_Lean_Elab_Command_elabMacroRulesAux___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "unsupportedSyntax"};
static const lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__28 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__28_value;
static const lean_string_object l_Lean_Elab_Command_elabMacroRulesAux___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__29 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__29_value;
static const lean_string_object l_Lean_Elab_Command_elabMacroRulesAux___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__30 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__30_value;
static const lean_string_object l_Lean_Elab_Command_elabMacroRulesAux___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "aux_def"};
static const lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__31 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__31_value;
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRulesAux___closed__32_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRulesAux___closed__32_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__32_value_aux_0),((lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__29_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRulesAux___closed__32_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__32_value_aux_1),((lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__30_value),LEAN_SCALAR_PTR_LITERAL(177, 181, 244, 12, 1, 14, 170, 235)}};
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRulesAux___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__32_value_aux_2),((lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__31_value),LEAN_SCALAR_PTR_LITERAL(83, 33, 36, 212, 17, 187, 86, 94)}};
static const lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__32 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__32_value;
static const lean_array_object l_Lean_Elab_Command_elabMacroRulesAux___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__33 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__33_value;
static const lean_string_object l_Lean_Elab_Command_elabMacroRulesAux___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "attrInstance"};
static const lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__34 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__34_value;
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRulesAux___closed__35_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRulesAux___closed__35_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__35_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRulesAux___closed__35_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__35_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRulesAux___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__35_value_aux_2),((lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__34_value),LEAN_SCALAR_PTR_LITERAL(241, 75, 242, 110, 47, 5, 20, 104)}};
static const lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__35 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__35_value;
static const lean_string_object l_Lean_Elab_Command_elabMacroRulesAux___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Attr"};
static const lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__36 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__36_value;
static const lean_string_object l_Lean_Elab_Command_elabMacroRulesAux___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "macro"};
static const lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__37 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__37_value;
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRulesAux___closed__38_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRulesAux___closed__38_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__38_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRulesAux___closed__38_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__38_value_aux_1),((lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__36_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRulesAux___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__38_value_aux_2),((lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__37_value),LEAN_SCALAR_PTR_LITERAL(17, 202, 70, 6, 8, 133, 137, 74)}};
static const lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__38 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__38_value;
static const lean_string_object l_Lean_Elab_Command_elabMacroRulesAux___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__39 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__39_value;
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRulesAux___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_Elab_Command_elabMacroRulesAux___boxed__const__1 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___boxed__const__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabMacroRulesAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabMacroRulesAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__0___redArg___lam__0(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabMacroRules___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabMacroRules___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Command_elabMacroRules___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Lean_Elab_Command_elabMacroRules___lam__5___closed__0 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__5___closed__0_value;
static const lean_string_object l_Lean_Elab_Command_elabMacroRules___lam__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "kind"};
static const lean_object* l_Lean_Elab_Command_elabMacroRules___lam__5___closed__1 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__5___closed__1_value;
static const lean_string_object l_Lean_Elab_Command_elabMacroRules___lam__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lean_Elab_Command_elabMacroRules___lam__5___closed__2 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__5___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabMacroRules___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabMacroRules___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "macro_rules"};
static const lean_object* l_Lean_Elab_Command_elabMacroRules___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__30_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(125, 80, 75, 5, 165, 87, 197, 1)}};
static const lean_object* l_Lean_Elab_Command_elabMacroRules___lam__1___closed__1 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__2_value_aux_0),((lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__7_value),LEAN_SCALAR_PTR_LITERAL(168, 205, 218, 0, 241, 122, 66, 251)}};
static const lean_object* l_Lean_Elab_Command_elabMacroRules___lam__1___closed__2 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Command_elabMacroRules___lam__1___closed__3 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__2_value)}};
static const lean_object* l_Lean_Elab_Command_elabMacroRules___lam__1___closed__4 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Command_elabMacroRules___lam__1___closed__5 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__5_value;
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__3_value),((lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__5_value)}};
static const lean_object* l_Lean_Elab_Command_elabMacroRules___lam__1___closed__6 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__6_value;
static const lean_string_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "basicFun"};
static const lean_object* l_Lean_Elab_Command_elabMacroRules___lam__1___closed__7 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__7_value;
static const lean_string_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "attrKind"};
static const lean_object* l_Lean_Elab_Command_elabMacroRules___lam__1___closed__8 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__9_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__9_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__9_value_aux_2),((lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(32, 164, 20, 104, 12, 221, 204, 110)}};
static const lean_object* l_Lean_Elab_Command_elabMacroRules___lam__1___closed__9 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__9_value;
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__10_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__10_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__10_value_aux_2),((lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__12_value),LEAN_SCALAR_PTR_LITERAL(193, 186, 26, 109, 82, 172, 197, 183)}};
static const lean_object* l_Lean_Elab_Command_elabMacroRules___lam__1___closed__10 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__10_value;
static const lean_string_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "local"};
static const lean_object* l_Lean_Elab_Command_elabMacroRules___lam__1___closed__11 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__11_value;
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__12_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__12_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__12_value_aux_2),((lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__11_value),LEAN_SCALAR_PTR_LITERAL(136, 104, 45, 91, 146, 14, 86, 4)}};
static const lean_object* l_Lean_Elab_Command_elabMacroRules___lam__1___closed__12 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__12_value;
static const lean_string_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Lean_Elab_Command_elabMacroRules___lam__1___closed__13 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__13_value;
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__13_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_Lean_Elab_Command_elabMacroRules___lam__1___closed__14 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__14_value;
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__15_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__15_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__15_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__15_value_aux_2),((lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__0_value),LEAN_SCALAR_PTR_LITERAL(66, 184, 196, 169, 25, 125, 40, 35)}};
static const lean_object* l_Lean_Elab_Command_elabMacroRules___lam__1___closed__15 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__15_value;
static const lean_string_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "docComment"};
static const lean_object* l_Lean_Elab_Command_elabMacroRules___lam__1___closed__16 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__16_value;
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__17_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__17_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__17_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__17_value_aux_1),((lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__30_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__17_value_aux_2),((lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__16_value),LEAN_SCALAR_PTR_LITERAL(44, 76, 179, 33, 27, 4, 201, 125)}};
static const lean_object* l_Lean_Elab_Command_elabMacroRules___lam__1___closed__17 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__17_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabMacroRules___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabMacroRules___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Command_elabMacroRules___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Command_elabMacroRules___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Command_elabMacroRules___closed__0 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRules___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabMacroRules(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabMacroRules___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "elabMacroRules"};
static const lean_object* l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__29_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__30_value),LEAN_SCALAR_PTR_LITERAL(177, 181, 244, 12, 1, 14, 170, 235)}};
static const lean_ctor_object l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(122, 95, 207, 180, 64, 53, 80, 160)}};
static const lean_object* l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)(((size_t)(38) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(68) << 1) | 1)),((lean_object*)(((size_t)(32) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3___closed__0_value),((lean_object*)(((size_t)(38) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3___closed__1_value),((lean_object*)(((size_t)(32) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)(((size_t)(42) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)(((size_t)(56) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3___closed__3_value),((lean_object*)(((size_t)(42) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3___closed__4_value),((lean_object*)(((size_t)(56) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3___boxed(lean_object*);
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabMacroRulesAux_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_1_ = lean_box(0);
v___x_2_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_3_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3_, 0, v___x_2_);
lean_ctor_set(v___x_3_, 1, v___x_1_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabMacroRulesAux_spec__0___redArg(){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabMacroRulesAux_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabMacroRulesAux_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabMacroRulesAux_spec__0___redArg___closed__0);
v___x_6_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabMacroRulesAux_spec__0___redArg___boxed(lean_object* v___y_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabMacroRulesAux_spec__0___redArg();
return v_res_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabMacroRulesAux_spec__0(lean_object* v_00_u03b1_9_, lean_object* v___y_10_, lean_object* v___y_11_){
_start:
{
lean_object* v___x_13_; 
v___x_13_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabMacroRulesAux_spec__0___redArg();
return v___x_13_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabMacroRulesAux_spec__0___boxed(lean_object* v_00_u03b1_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabMacroRulesAux_spec__0(v_00_u03b1_14_, v___y_15_, v___y_16_);
lean_dec(v___y_16_);
lean_dec_ref(v___y_15_);
return v_res_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabMacroRulesAux_spec__3___redArg(lean_object* v___y_19_){
_start:
{
lean_object* v___x_21_; lean_object* v_env_22_; lean_object* v___x_23_; lean_object* v_mainModule_24_; lean_object* v___x_25_; 
v___x_21_ = lean_st_ref_get(v___y_19_);
v_env_22_ = lean_ctor_get(v___x_21_, 0);
lean_inc_ref(v_env_22_);
lean_dec(v___x_21_);
v___x_23_ = l_Lean_Environment_header(v_env_22_);
lean_dec_ref(v_env_22_);
v_mainModule_24_ = lean_ctor_get(v___x_23_, 0);
lean_inc(v_mainModule_24_);
lean_dec_ref(v___x_23_);
v___x_25_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_25_, 0, v_mainModule_24_);
return v___x_25_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabMacroRulesAux_spec__3___redArg___boxed(lean_object* v___y_26_, lean_object* v___y_27_){
_start:
{
lean_object* v_res_28_; 
v_res_28_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabMacroRulesAux_spec__3___redArg(v___y_26_);
lean_dec(v___y_26_);
return v_res_28_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabMacroRulesAux_spec__3(lean_object* v___y_29_, lean_object* v___y_30_){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabMacroRulesAux_spec__3___redArg(v___y_30_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabMacroRulesAux_spec__3___boxed(lean_object* v___y_33_, lean_object* v___y_34_, lean_object* v___y_35_){
_start:
{
lean_object* v_res_36_; 
v_res_36_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabMacroRulesAux_spec__3(v___y_33_, v___y_34_);
lean_dec(v___y_34_);
lean_dec_ref(v___y_33_);
return v_res_36_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_37_; 
v___x_37_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_37_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__3___redArg___closed__1(void){
_start:
{
lean_object* v___x_38_; lean_object* v___x_39_; 
v___x_38_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__3___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__3___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__3___redArg___closed__0);
v___x_39_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_39_, 0, v___x_38_);
return v___x_39_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__3___redArg___closed__2(void){
_start:
{
lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; 
v___x_40_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__3___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__3___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__3___redArg___closed__1);
v___x_41_ = lean_unsigned_to_nat(0u);
v___x_42_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_42_, 0, v___x_41_);
lean_ctor_set(v___x_42_, 1, v___x_41_);
lean_ctor_set(v___x_42_, 2, v___x_41_);
lean_ctor_set(v___x_42_, 3, v___x_41_);
lean_ctor_set(v___x_42_, 4, v___x_40_);
lean_ctor_set(v___x_42_, 5, v___x_40_);
lean_ctor_set(v___x_42_, 6, v___x_40_);
lean_ctor_set(v___x_42_, 7, v___x_40_);
lean_ctor_set(v___x_42_, 8, v___x_40_);
lean_ctor_set(v___x_42_, 9, v___x_40_);
lean_ctor_set(v___x_42_, 10, v___x_40_);
return v___x_42_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__3___redArg___closed__3(void){
_start:
{
lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; 
v___x_43_ = lean_unsigned_to_nat(32u);
v___x_44_ = lean_mk_empty_array_with_capacity(v___x_43_);
v___x_45_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_45_, 0, v___x_44_);
return v___x_45_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__3___redArg___closed__4(void){
_start:
{
size_t v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; 
v___x_46_ = ((size_t)5ULL);
v___x_47_ = lean_unsigned_to_nat(0u);
v___x_48_ = lean_unsigned_to_nat(32u);
v___x_49_ = lean_mk_empty_array_with_capacity(v___x_48_);
v___x_50_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__3___redArg___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__3___redArg___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__3___redArg___closed__3);
v___x_51_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_51_, 0, v___x_50_);
lean_ctor_set(v___x_51_, 1, v___x_49_);
lean_ctor_set(v___x_51_, 2, v___x_47_);
lean_ctor_set(v___x_51_, 3, v___x_47_);
lean_ctor_set_usize(v___x_51_, 4, v___x_46_);
return v___x_51_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__3___redArg___closed__5(void){
_start:
{
lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_52_ = lean_box(1);
v___x_53_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__3___redArg___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__3___redArg___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__3___redArg___closed__4);
v___x_54_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__3___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__3___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__3___redArg___closed__1);
v___x_55_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_55_, 0, v___x_54_);
lean_ctor_set(v___x_55_, 1, v___x_53_);
lean_ctor_set(v___x_55_, 2, v___x_52_);
return v___x_55_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__3___redArg(lean_object* v_msgData_56_, lean_object* v___y_57_){
_start:
{
lean_object* v___x_59_; lean_object* v_env_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v_scopes_63_; lean_object* v___x_64_; lean_object* v_opts_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; 
v___x_59_ = lean_st_ref_get(v___y_57_);
v_env_60_ = lean_ctor_get(v___x_59_, 0);
lean_inc_ref(v_env_60_);
lean_dec(v___x_59_);
v___x_61_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_62_ = lean_st_ref_get(v___y_57_);
v_scopes_63_ = lean_ctor_get(v___x_62_, 2);
lean_inc(v_scopes_63_);
lean_dec(v___x_62_);
v___x_64_ = l_List_head_x21___redArg(v___x_61_, v_scopes_63_);
lean_dec(v_scopes_63_);
v_opts_65_ = lean_ctor_get(v___x_64_, 1);
lean_inc_ref(v_opts_65_);
lean_dec(v___x_64_);
v___x_66_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__3___redArg___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__3___redArg___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__3___redArg___closed__2);
v___x_67_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__3___redArg___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__3___redArg___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__3___redArg___closed__5);
v___x_68_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_68_, 0, v_env_60_);
lean_ctor_set(v___x_68_, 1, v___x_66_);
lean_ctor_set(v___x_68_, 2, v___x_67_);
lean_ctor_set(v___x_68_, 3, v_opts_65_);
v___x_69_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_69_, 0, v___x_68_);
lean_ctor_set(v___x_69_, 1, v_msgData_56_);
v___x_70_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_70_, 0, v___x_69_);
return v___x_70_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__3___redArg___boxed(lean_object* v_msgData_71_, lean_object* v___y_72_, lean_object* v___y_73_){
_start:
{
lean_object* v_res_74_; 
v_res_74_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__3___redArg(v_msgData_71_, v___y_72_);
lean_dec(v___y_72_);
return v_res_74_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__4_spec__8___closed__0(void){
_start:
{
lean_object* v___x_75_; lean_object* v___x_76_; 
v___x_75_ = lean_box(1);
v___x_76_ = l_Lean_MessageData_ofFormat(v___x_75_);
return v___x_76_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__4_spec__8___closed__3(void){
_start:
{
lean_object* v___x_80_; lean_object* v___x_81_; 
v___x_80_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__4_spec__8___closed__2));
v___x_81_ = l_Lean_MessageData_ofFormat(v___x_80_);
return v___x_81_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__4_spec__8(lean_object* v_x_82_, lean_object* v_x_83_){
_start:
{
if (lean_obj_tag(v_x_83_) == 0)
{
return v_x_82_;
}
else
{
lean_object* v_head_84_; lean_object* v_tail_85_; lean_object* v___x_87_; uint8_t v_isShared_88_; uint8_t v_isSharedCheck_107_; 
v_head_84_ = lean_ctor_get(v_x_83_, 0);
v_tail_85_ = lean_ctor_get(v_x_83_, 1);
v_isSharedCheck_107_ = !lean_is_exclusive(v_x_83_);
if (v_isSharedCheck_107_ == 0)
{
v___x_87_ = v_x_83_;
v_isShared_88_ = v_isSharedCheck_107_;
goto v_resetjp_86_;
}
else
{
lean_inc(v_tail_85_);
lean_inc(v_head_84_);
lean_dec(v_x_83_);
v___x_87_ = lean_box(0);
v_isShared_88_ = v_isSharedCheck_107_;
goto v_resetjp_86_;
}
v_resetjp_86_:
{
lean_object* v_before_89_; lean_object* v___x_91_; uint8_t v_isShared_92_; uint8_t v_isSharedCheck_105_; 
v_before_89_ = lean_ctor_get(v_head_84_, 0);
v_isSharedCheck_105_ = !lean_is_exclusive(v_head_84_);
if (v_isSharedCheck_105_ == 0)
{
lean_object* v_unused_106_; 
v_unused_106_ = lean_ctor_get(v_head_84_, 1);
lean_dec(v_unused_106_);
v___x_91_ = v_head_84_;
v_isShared_92_ = v_isSharedCheck_105_;
goto v_resetjp_90_;
}
else
{
lean_inc(v_before_89_);
lean_dec(v_head_84_);
v___x_91_ = lean_box(0);
v_isShared_92_ = v_isSharedCheck_105_;
goto v_resetjp_90_;
}
v_resetjp_90_:
{
lean_object* v___x_93_; lean_object* v___x_95_; 
v___x_93_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__4_spec__8___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__4_spec__8___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__4_spec__8___closed__0);
if (v_isShared_92_ == 0)
{
lean_ctor_set_tag(v___x_91_, 7);
lean_ctor_set(v___x_91_, 1, v___x_93_);
lean_ctor_set(v___x_91_, 0, v_x_82_);
v___x_95_ = v___x_91_;
goto v_reusejp_94_;
}
else
{
lean_object* v_reuseFailAlloc_104_; 
v_reuseFailAlloc_104_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_104_, 0, v_x_82_);
lean_ctor_set(v_reuseFailAlloc_104_, 1, v___x_93_);
v___x_95_ = v_reuseFailAlloc_104_;
goto v_reusejp_94_;
}
v_reusejp_94_:
{
lean_object* v___x_96_; lean_object* v___x_98_; 
v___x_96_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__4_spec__8___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__4_spec__8___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__4_spec__8___closed__3);
if (v_isShared_88_ == 0)
{
lean_ctor_set_tag(v___x_87_, 7);
lean_ctor_set(v___x_87_, 1, v___x_96_);
lean_ctor_set(v___x_87_, 0, v___x_95_);
v___x_98_ = v___x_87_;
goto v_reusejp_97_;
}
else
{
lean_object* v_reuseFailAlloc_103_; 
v_reuseFailAlloc_103_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_103_, 0, v___x_95_);
lean_ctor_set(v_reuseFailAlloc_103_, 1, v___x_96_);
v___x_98_ = v_reuseFailAlloc_103_;
goto v_reusejp_97_;
}
v_reusejp_97_:
{
lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; 
v___x_99_ = l_Lean_MessageData_ofSyntax(v_before_89_);
v___x_100_ = l_Lean_indentD(v___x_99_);
v___x_101_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_101_, 0, v___x_98_);
lean_ctor_set(v___x_101_, 1, v___x_100_);
v_x_82_ = v___x_101_;
v_x_83_ = v_tail_85_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__4_spec__7(lean_object* v_opts_108_, lean_object* v_opt_109_){
_start:
{
lean_object* v_name_110_; lean_object* v_defValue_111_; lean_object* v_map_112_; lean_object* v___x_113_; 
v_name_110_ = lean_ctor_get(v_opt_109_, 0);
v_defValue_111_ = lean_ctor_get(v_opt_109_, 1);
v_map_112_ = lean_ctor_get(v_opts_108_, 0);
v___x_113_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_112_, v_name_110_);
if (lean_obj_tag(v___x_113_) == 0)
{
uint8_t v___x_114_; 
v___x_114_ = lean_unbox(v_defValue_111_);
return v___x_114_;
}
else
{
lean_object* v_val_115_; 
v_val_115_ = lean_ctor_get(v___x_113_, 0);
lean_inc(v_val_115_);
lean_dec_ref_known(v___x_113_, 1);
if (lean_obj_tag(v_val_115_) == 1)
{
uint8_t v_v_116_; 
v_v_116_ = lean_ctor_get_uint8(v_val_115_, 0);
lean_dec_ref_known(v_val_115_, 0);
return v_v_116_;
}
else
{
uint8_t v___x_117_; 
lean_dec(v_val_115_);
v___x_117_ = lean_unbox(v_defValue_111_);
return v___x_117_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__4_spec__7___boxed(lean_object* v_opts_118_, lean_object* v_opt_119_){
_start:
{
uint8_t v_res_120_; lean_object* v_r_121_; 
v_res_120_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__4_spec__7(v_opts_118_, v_opt_119_);
lean_dec_ref(v_opt_119_);
lean_dec_ref(v_opts_118_);
v_r_121_ = lean_box(v_res_120_);
return v_r_121_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__4___redArg___closed__2(void){
_start:
{
lean_object* v___x_125_; lean_object* v___x_126_; 
v___x_125_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__4___redArg___closed__1));
v___x_126_ = l_Lean_MessageData_ofFormat(v___x_125_);
return v___x_126_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__4___redArg(lean_object* v_msgData_127_, lean_object* v_macroStack_128_, lean_object* v___y_129_){
_start:
{
lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v_scopes_133_; lean_object* v___x_134_; lean_object* v_opts_135_; lean_object* v___x_136_; uint8_t v___x_137_; 
v___x_131_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_132_ = lean_st_ref_get(v___y_129_);
v_scopes_133_ = lean_ctor_get(v___x_132_, 2);
lean_inc(v_scopes_133_);
lean_dec(v___x_132_);
v___x_134_ = l_List_head_x21___redArg(v___x_131_, v_scopes_133_);
lean_dec(v_scopes_133_);
v_opts_135_ = lean_ctor_get(v___x_134_, 1);
lean_inc_ref(v_opts_135_);
lean_dec(v___x_134_);
v___x_136_ = l_Lean_Elab_pp_macroStack;
v___x_137_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__4_spec__7(v_opts_135_, v___x_136_);
lean_dec_ref(v_opts_135_);
if (v___x_137_ == 0)
{
lean_object* v___x_138_; 
lean_dec(v_macroStack_128_);
v___x_138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_138_, 0, v_msgData_127_);
return v___x_138_;
}
else
{
if (lean_obj_tag(v_macroStack_128_) == 0)
{
lean_object* v___x_139_; 
v___x_139_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_139_, 0, v_msgData_127_);
return v___x_139_;
}
else
{
lean_object* v_head_140_; lean_object* v_after_141_; lean_object* v___x_143_; uint8_t v_isShared_144_; uint8_t v_isSharedCheck_156_; 
v_head_140_ = lean_ctor_get(v_macroStack_128_, 0);
lean_inc(v_head_140_);
v_after_141_ = lean_ctor_get(v_head_140_, 1);
v_isSharedCheck_156_ = !lean_is_exclusive(v_head_140_);
if (v_isSharedCheck_156_ == 0)
{
lean_object* v_unused_157_; 
v_unused_157_ = lean_ctor_get(v_head_140_, 0);
lean_dec(v_unused_157_);
v___x_143_ = v_head_140_;
v_isShared_144_ = v_isSharedCheck_156_;
goto v_resetjp_142_;
}
else
{
lean_inc(v_after_141_);
lean_dec(v_head_140_);
v___x_143_ = lean_box(0);
v_isShared_144_ = v_isSharedCheck_156_;
goto v_resetjp_142_;
}
v_resetjp_142_:
{
lean_object* v___x_145_; lean_object* v___x_147_; 
v___x_145_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__4_spec__8___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__4_spec__8___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__4_spec__8___closed__0);
if (v_isShared_144_ == 0)
{
lean_ctor_set_tag(v___x_143_, 7);
lean_ctor_set(v___x_143_, 1, v___x_145_);
lean_ctor_set(v___x_143_, 0, v_msgData_127_);
v___x_147_ = v___x_143_;
goto v_reusejp_146_;
}
else
{
lean_object* v_reuseFailAlloc_155_; 
v_reuseFailAlloc_155_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_155_, 0, v_msgData_127_);
lean_ctor_set(v_reuseFailAlloc_155_, 1, v___x_145_);
v___x_147_ = v_reuseFailAlloc_155_;
goto v_reusejp_146_;
}
v_reusejp_146_:
{
lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v_msgData_152_; lean_object* v___x_153_; lean_object* v___x_154_; 
v___x_148_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__4___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__4___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__4___redArg___closed__2);
v___x_149_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_149_, 0, v___x_147_);
lean_ctor_set(v___x_149_, 1, v___x_148_);
v___x_150_ = l_Lean_MessageData_ofSyntax(v_after_141_);
v___x_151_ = l_Lean_indentD(v___x_150_);
v_msgData_152_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_152_, 0, v___x_149_);
lean_ctor_set(v_msgData_152_, 1, v___x_151_);
v___x_153_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__4_spec__8(v_msgData_152_, v_macroStack_128_);
v___x_154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_154_, 0, v___x_153_);
return v___x_154_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__4___redArg___boxed(lean_object* v_msgData_158_, lean_object* v_macroStack_159_, lean_object* v___y_160_, lean_object* v___y_161_){
_start:
{
lean_object* v_res_162_; 
v_res_162_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__4___redArg(v_msgData_158_, v_macroStack_159_, v___y_160_);
lean_dec(v___y_160_);
return v_res_162_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1___redArg(lean_object* v_msg_163_, lean_object* v___y_164_, lean_object* v___y_165_){
_start:
{
lean_object* v___x_167_; 
v___x_167_ = l_Lean_Elab_Command_getRef___redArg(v___y_164_);
if (lean_obj_tag(v___x_167_) == 0)
{
lean_object* v_a_168_; lean_object* v_macroStack_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v_a_172_; lean_object* v___x_173_; lean_object* v_a_174_; lean_object* v___x_176_; uint8_t v_isShared_177_; uint8_t v_isSharedCheck_182_; 
v_a_168_ = lean_ctor_get(v___x_167_, 0);
lean_inc(v_a_168_);
lean_dec_ref_known(v___x_167_, 1);
v_macroStack_169_ = lean_ctor_get(v___y_164_, 4);
v___x_170_ = l_Lean_Elab_getBetterRef(v_a_168_, v_macroStack_169_);
lean_dec(v_a_168_);
v___x_171_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__3___redArg(v_msg_163_, v___y_165_);
v_a_172_ = lean_ctor_get(v___x_171_, 0);
lean_inc(v_a_172_);
lean_dec_ref(v___x_171_);
lean_inc(v_macroStack_169_);
v___x_173_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__4___redArg(v_a_172_, v_macroStack_169_, v___y_165_);
v_a_174_ = lean_ctor_get(v___x_173_, 0);
v_isSharedCheck_182_ = !lean_is_exclusive(v___x_173_);
if (v_isSharedCheck_182_ == 0)
{
v___x_176_ = v___x_173_;
v_isShared_177_ = v_isSharedCheck_182_;
goto v_resetjp_175_;
}
else
{
lean_inc(v_a_174_);
lean_dec(v___x_173_);
v___x_176_ = lean_box(0);
v_isShared_177_ = v_isSharedCheck_182_;
goto v_resetjp_175_;
}
v_resetjp_175_:
{
lean_object* v___x_178_; lean_object* v___x_180_; 
v___x_178_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_178_, 0, v___x_170_);
lean_ctor_set(v___x_178_, 1, v_a_174_);
if (v_isShared_177_ == 0)
{
lean_ctor_set_tag(v___x_176_, 1);
lean_ctor_set(v___x_176_, 0, v___x_178_);
v___x_180_ = v___x_176_;
goto v_reusejp_179_;
}
else
{
lean_object* v_reuseFailAlloc_181_; 
v_reuseFailAlloc_181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_181_, 0, v___x_178_);
v___x_180_ = v_reuseFailAlloc_181_;
goto v_reusejp_179_;
}
v_reusejp_179_:
{
return v___x_180_;
}
}
}
else
{
lean_object* v_a_183_; lean_object* v___x_185_; uint8_t v_isShared_186_; uint8_t v_isSharedCheck_190_; 
lean_dec_ref(v_msg_163_);
v_a_183_ = lean_ctor_get(v___x_167_, 0);
v_isSharedCheck_190_ = !lean_is_exclusive(v___x_167_);
if (v_isSharedCheck_190_ == 0)
{
v___x_185_ = v___x_167_;
v_isShared_186_ = v_isSharedCheck_190_;
goto v_resetjp_184_;
}
else
{
lean_inc(v_a_183_);
lean_dec(v___x_167_);
v___x_185_ = lean_box(0);
v_isShared_186_ = v_isSharedCheck_190_;
goto v_resetjp_184_;
}
v_resetjp_184_:
{
lean_object* v___x_188_; 
if (v_isShared_186_ == 0)
{
v___x_188_ = v___x_185_;
goto v_reusejp_187_;
}
else
{
lean_object* v_reuseFailAlloc_189_; 
v_reuseFailAlloc_189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_189_, 0, v_a_183_);
v___x_188_ = v_reuseFailAlloc_189_;
goto v_reusejp_187_;
}
v_reusejp_187_:
{
return v___x_188_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1___redArg___boxed(lean_object* v_msg_191_, lean_object* v___y_192_, lean_object* v___y_193_, lean_object* v___y_194_){
_start:
{
lean_object* v_res_195_; 
v_res_195_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1___redArg(v_msg_191_, v___y_192_, v___y_193_);
lean_dec(v___y_193_);
lean_dec_ref(v___y_192_);
return v_res_195_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1___redArg(lean_object* v_ref_196_, lean_object* v_msg_197_, lean_object* v___y_198_, lean_object* v___y_199_){
_start:
{
lean_object* v___x_201_; 
v___x_201_ = l_Lean_Elab_Command_getRef___redArg(v___y_198_);
if (lean_obj_tag(v___x_201_) == 0)
{
lean_object* v_a_202_; lean_object* v_fileName_203_; lean_object* v_fileMap_204_; lean_object* v_currRecDepth_205_; lean_object* v_cmdPos_206_; lean_object* v_macroStack_207_; lean_object* v_quotContext_x3f_208_; lean_object* v_currMacroScope_209_; lean_object* v_snap_x3f_210_; lean_object* v_cancelTk_x3f_211_; uint8_t v_suppressElabErrors_212_; lean_object* v_ref_213_; lean_object* v___x_214_; lean_object* v___x_215_; 
v_a_202_ = lean_ctor_get(v___x_201_, 0);
lean_inc(v_a_202_);
lean_dec_ref_known(v___x_201_, 1);
v_fileName_203_ = lean_ctor_get(v___y_198_, 0);
v_fileMap_204_ = lean_ctor_get(v___y_198_, 1);
v_currRecDepth_205_ = lean_ctor_get(v___y_198_, 2);
v_cmdPos_206_ = lean_ctor_get(v___y_198_, 3);
v_macroStack_207_ = lean_ctor_get(v___y_198_, 4);
v_quotContext_x3f_208_ = lean_ctor_get(v___y_198_, 5);
v_currMacroScope_209_ = lean_ctor_get(v___y_198_, 6);
v_snap_x3f_210_ = lean_ctor_get(v___y_198_, 8);
v_cancelTk_x3f_211_ = lean_ctor_get(v___y_198_, 9);
v_suppressElabErrors_212_ = lean_ctor_get_uint8(v___y_198_, sizeof(void*)*10);
v_ref_213_ = l_Lean_replaceRef(v_ref_196_, v_a_202_);
lean_dec(v_a_202_);
lean_inc(v_cancelTk_x3f_211_);
lean_inc(v_snap_x3f_210_);
lean_inc(v_currMacroScope_209_);
lean_inc(v_quotContext_x3f_208_);
lean_inc(v_macroStack_207_);
lean_inc(v_cmdPos_206_);
lean_inc(v_currRecDepth_205_);
lean_inc_ref(v_fileMap_204_);
lean_inc_ref(v_fileName_203_);
v___x_214_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v___x_214_, 0, v_fileName_203_);
lean_ctor_set(v___x_214_, 1, v_fileMap_204_);
lean_ctor_set(v___x_214_, 2, v_currRecDepth_205_);
lean_ctor_set(v___x_214_, 3, v_cmdPos_206_);
lean_ctor_set(v___x_214_, 4, v_macroStack_207_);
lean_ctor_set(v___x_214_, 5, v_quotContext_x3f_208_);
lean_ctor_set(v___x_214_, 6, v_currMacroScope_209_);
lean_ctor_set(v___x_214_, 7, v_ref_213_);
lean_ctor_set(v___x_214_, 8, v_snap_x3f_210_);
lean_ctor_set(v___x_214_, 9, v_cancelTk_x3f_211_);
lean_ctor_set_uint8(v___x_214_, sizeof(void*)*10, v_suppressElabErrors_212_);
v___x_215_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1___redArg(v_msg_197_, v___x_214_, v___y_199_);
lean_dec_ref_known(v___x_214_, 10);
return v___x_215_;
}
else
{
lean_object* v_a_216_; lean_object* v___x_218_; uint8_t v_isShared_219_; uint8_t v_isSharedCheck_223_; 
lean_dec_ref(v_msg_197_);
v_a_216_ = lean_ctor_get(v___x_201_, 0);
v_isSharedCheck_223_ = !lean_is_exclusive(v___x_201_);
if (v_isSharedCheck_223_ == 0)
{
v___x_218_ = v___x_201_;
v_isShared_219_ = v_isSharedCheck_223_;
goto v_resetjp_217_;
}
else
{
lean_inc(v_a_216_);
lean_dec(v___x_201_);
v___x_218_ = lean_box(0);
v_isShared_219_ = v_isSharedCheck_223_;
goto v_resetjp_217_;
}
v_resetjp_217_:
{
lean_object* v___x_221_; 
if (v_isShared_219_ == 0)
{
v___x_221_ = v___x_218_;
goto v_reusejp_220_;
}
else
{
lean_object* v_reuseFailAlloc_222_; 
v_reuseFailAlloc_222_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_222_, 0, v_a_216_);
v___x_221_ = v_reuseFailAlloc_222_;
goto v_reusejp_220_;
}
v_reusejp_220_:
{
return v___x_221_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1___redArg___boxed(lean_object* v_ref_224_, lean_object* v_msg_225_, lean_object* v___y_226_, lean_object* v___y_227_, lean_object* v___y_228_){
_start:
{
lean_object* v_res_229_; 
v_res_229_ = l_Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1___redArg(v_ref_224_, v_msg_225_, v___y_226_, v___y_227_);
lean_dec(v___y_227_);
lean_dec_ref(v___y_226_);
lean_dec(v_ref_224_);
return v_res_229_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabMacroRulesAux_spec__2(lean_object* v_k_233_, lean_object* v_as_234_, size_t v_sz_235_, size_t v_i_236_, lean_object* v_b_237_){
_start:
{
uint8_t v___x_238_; 
v___x_238_ = lean_usize_dec_lt(v_i_236_, v_sz_235_);
if (v___x_238_ == 0)
{
lean_dec(v_k_233_);
lean_inc_ref(v_b_237_);
return v_b_237_;
}
else
{
lean_object* v___x_239_; lean_object* v_a_240_; lean_object* v___x_241_; uint8_t v___x_242_; 
v___x_239_ = lean_box(0);
v_a_240_ = lean_array_uget_borrowed(v_as_234_, v_i_236_);
lean_inc(v_a_240_);
v___x_241_ = l_Lean_Syntax_getKind(v_a_240_);
lean_inc(v_k_233_);
v___x_242_ = l_Lean_Elab_Command_checkRuleKind(v___x_241_, v_k_233_);
lean_dec(v___x_241_);
if (v___x_242_ == 0)
{
lean_object* v___x_243_; size_t v___x_244_; size_t v___x_245_; 
v___x_243_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabMacroRulesAux_spec__2___closed__0));
v___x_244_ = ((size_t)1ULL);
v___x_245_ = lean_usize_add(v_i_236_, v___x_244_);
v_i_236_ = v___x_245_;
v_b_237_ = v___x_243_;
goto _start;
}
else
{
lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; 
lean_dec(v_k_233_);
lean_inc(v_a_240_);
v___x_247_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_247_, 0, v_a_240_);
v___x_248_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_248_, 0, v___x_247_);
v___x_249_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_249_, 0, v___x_248_);
lean_ctor_set(v___x_249_, 1, v___x_239_);
return v___x_249_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabMacroRulesAux_spec__2___boxed(lean_object* v_k_250_, lean_object* v_as_251_, lean_object* v_sz_252_, lean_object* v_i_253_, lean_object* v_b_254_){
_start:
{
size_t v_sz_boxed_255_; size_t v_i_boxed_256_; lean_object* v_res_257_; 
v_sz_boxed_255_ = lean_unbox_usize(v_sz_252_);
lean_dec(v_sz_252_);
v_i_boxed_256_ = lean_unbox_usize(v_i_253_);
lean_dec(v_i_253_);
v_res_257_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabMacroRulesAux_spec__2(v_k_250_, v_as_251_, v_sz_boxed_255_, v_i_boxed_256_, v_b_254_);
lean_dec_ref(v_b_254_);
lean_dec_ref(v_as_251_);
return v_res_257_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__1(void){
_start:
{
lean_object* v___x_259_; lean_object* v___x_260_; 
v___x_259_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__0));
v___x_260_ = l_Lean_stringToMessageData(v___x_259_);
return v___x_260_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__3(void){
_start:
{
lean_object* v___x_262_; lean_object* v___x_263_; 
v___x_262_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__2));
v___x_263_ = l_Lean_stringToMessageData(v___x_262_);
return v___x_263_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__12(void){
_start:
{
lean_object* v___x_277_; 
v___x_277_ = l_Array_mkArray0___redArg();
return v___x_277_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__17(void){
_start:
{
lean_object* v___x_283_; lean_object* v___x_284_; 
v___x_283_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__16));
v___x_284_ = l_Lean_stringToMessageData(v___x_283_);
return v___x_284_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4(lean_object* v_k_285_, size_t v_sz_286_, size_t v_i_287_, lean_object* v_bs_288_, lean_object* v___y_289_, lean_object* v___y_290_){
_start:
{
uint8_t v___x_292_; 
v___x_292_ = lean_usize_dec_lt(v_i_287_, v_sz_286_);
if (v___x_292_ == 0)
{
lean_object* v___x_293_; lean_object* v___x_294_; 
lean_dec(v_k_285_);
v___x_293_ = l_unsafeCast___redArg(v_bs_288_);
lean_dec_ref(v_bs_288_);
v___x_294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_294_, 0, v___x_293_);
return v___x_294_;
}
else
{
lean_object* v_v_295_; lean_object* v___x_296_; lean_object* v_bs_x27_297_; lean_object* v_a_299_; lean_object* v___y_306_; lean_object* v___x_316_; lean_object* v___y_318_; lean_object* v___y_319_; lean_object* v___x_326_; uint8_t v___x_327_; 
v_v_295_ = lean_array_uget(v_bs_288_, v_i_287_);
v___x_296_ = lean_unsigned_to_nat(0u);
v_bs_x27_297_ = lean_array_uset(v_bs_288_, v_i_287_, v___x_296_);
v___x_316_ = l_unsafeCast___redArg(v_v_295_);
lean_dec(v_v_295_);
v___x_326_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__8));
lean_inc(v___x_316_);
v___x_327_ = l_Lean_Syntax_isOfKind(v___x_316_, v___x_326_);
if (v___x_327_ == 0)
{
lean_object* v___x_328_; 
lean_dec(v___x_316_);
v___x_328_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabMacroRulesAux_spec__0___redArg();
v___y_306_ = v___x_328_;
goto v___jp_305_;
}
else
{
lean_object* v___x_329_; lean_object* v___x_330_; uint8_t v___x_331_; 
v___x_329_ = lean_unsigned_to_nat(1u);
v___x_330_ = l_Lean_Syntax_getArg(v___x_316_, v___x_329_);
lean_inc(v___x_330_);
v___x_331_ = l_Lean_Syntax_matchesNull(v___x_330_, v___x_329_);
if (v___x_331_ == 0)
{
lean_object* v___x_332_; 
lean_dec(v___x_330_);
lean_dec(v___x_316_);
v___x_332_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabMacroRulesAux_spec__0___redArg();
v___y_306_ = v___x_332_;
goto v___jp_305_;
}
else
{
lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___y_338_; lean_object* v___y_339_; lean_object* v___x_350_; lean_object* v_pat_351_; lean_object* v___y_353_; lean_object* v___y_354_; uint8_t v___x_406_; 
v___x_333_ = lean_box(0);
v___x_334_ = l_Lean_Syntax_getArg(v___x_330_, v___x_296_);
lean_dec(v___x_330_);
v___x_335_ = lean_unsigned_to_nat(3u);
v___x_336_ = l_Lean_Syntax_getArg(v___x_316_, v___x_335_);
v___x_350_ = l_Lean_Syntax_getArgs(v___x_334_);
lean_dec(v___x_334_);
v_pat_351_ = lean_array_get(v___x_333_, v___x_350_, v___x_296_);
v___x_406_ = l_Lean_Syntax_isQuot(v_pat_351_);
if (v___x_406_ == 0)
{
if (v___x_331_ == 0)
{
v___y_353_ = v___y_289_;
v___y_354_ = v___y_290_;
goto v___jp_352_;
}
else
{
lean_object* v___x_407_; 
v___x_407_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabMacroRulesAux_spec__0___redArg();
if (lean_obj_tag(v___x_407_) == 0)
{
lean_dec_ref_known(v___x_407_, 1);
v___y_353_ = v___y_289_;
v___y_354_ = v___y_290_;
goto v___jp_352_;
}
else
{
lean_object* v_a_408_; lean_object* v___x_410_; uint8_t v_isShared_411_; uint8_t v_isSharedCheck_415_; 
lean_dec(v_pat_351_);
lean_dec_ref(v___x_350_);
lean_dec(v___x_336_);
lean_dec(v___x_316_);
lean_dec_ref(v_bs_x27_297_);
lean_dec(v_k_285_);
v_a_408_ = lean_ctor_get(v___x_407_, 0);
v_isSharedCheck_415_ = !lean_is_exclusive(v___x_407_);
if (v_isSharedCheck_415_ == 0)
{
v___x_410_ = v___x_407_;
v_isShared_411_ = v_isSharedCheck_415_;
goto v_resetjp_409_;
}
else
{
lean_inc(v_a_408_);
lean_dec(v___x_407_);
v___x_410_ = lean_box(0);
v_isShared_411_ = v_isSharedCheck_415_;
goto v_resetjp_409_;
}
v_resetjp_409_:
{
lean_object* v___x_413_; 
if (v_isShared_411_ == 0)
{
v___x_413_ = v___x_410_;
goto v_reusejp_412_;
}
else
{
lean_object* v_reuseFailAlloc_414_; 
v_reuseFailAlloc_414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_414_, 0, v_a_408_);
v___x_413_ = v_reuseFailAlloc_414_;
goto v_reusejp_412_;
}
v_reusejp_412_:
{
return v___x_413_;
}
}
}
}
}
else
{
v___y_353_ = v___y_289_;
v___y_354_ = v___y_290_;
goto v___jp_352_;
}
v___jp_337_:
{
lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; 
v___x_340_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__9));
lean_inc_n(v___y_338_, 4);
v___x_341_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_341_, 0, v___y_338_);
lean_ctor_set(v___x_341_, 1, v___x_340_);
v___x_342_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__11));
v___x_343_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__12, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__12_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__12);
v___x_344_ = l_Array_append___redArg(v___x_343_, v___y_339_);
lean_dec_ref(v___y_339_);
v___x_345_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_345_, 0, v___y_338_);
lean_ctor_set(v___x_345_, 1, v___x_342_);
lean_ctor_set(v___x_345_, 2, v___x_344_);
v___x_346_ = l_Lean_Syntax_node1(v___y_338_, v___x_342_, v___x_345_);
v___x_347_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__13));
v___x_348_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_348_, 0, v___y_338_);
lean_ctor_set(v___x_348_, 1, v___x_347_);
v___x_349_ = l_Lean_Syntax_node4(v___y_338_, v___x_326_, v___x_341_, v___x_346_, v___x_348_, v___x_336_);
v_a_299_ = v___x_349_;
goto v___jp_298_;
}
v___jp_352_:
{
lean_object* v_quoted_355_; lean_object* v_k_x27_356_; uint8_t v___x_357_; 
lean_inc(v_pat_351_);
v_quoted_355_ = l_Lean_Syntax_getQuotContent(v_pat_351_);
lean_inc(v_quoted_355_);
v_k_x27_356_ = l_Lean_Syntax_getKind(v_quoted_355_);
lean_inc(v_k_285_);
v___x_357_ = l_Lean_Elab_Command_checkRuleKind(v_k_x27_356_, v_k_285_);
if (v___x_357_ == 0)
{
lean_object* v___x_358_; uint8_t v___x_359_; 
v___x_358_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__15));
v___x_359_ = lean_name_eq(v_k_x27_356_, v___x_358_);
if (v___x_359_ == 0)
{
lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; 
lean_dec(v_quoted_355_);
lean_dec(v_pat_351_);
lean_dec_ref(v___x_350_);
lean_dec(v___x_336_);
v___x_360_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__17, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__17_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__17);
v___x_361_ = l_Lean_MessageData_ofName(v_k_x27_356_);
v___x_362_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_362_, 0, v___x_360_);
lean_ctor_set(v___x_362_, 1, v___x_361_);
v___x_363_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__3, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__3);
v___x_364_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_364_, 0, v___x_362_);
lean_ctor_set(v___x_364_, 1, v___x_363_);
v___x_365_ = l_Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1___redArg(v___x_316_, v___x_364_, v___y_353_, v___y_354_);
lean_dec(v___x_316_);
v___y_306_ = v___x_365_;
goto v___jp_305_;
}
else
{
lean_object* v___x_366_; lean_object* v___x_367_; size_t v_sz_368_; size_t v___x_369_; lean_object* v___x_370_; lean_object* v_fst_371_; 
lean_dec(v_k_x27_356_);
v___x_366_ = l_Lean_Syntax_getArgs(v_quoted_355_);
lean_dec(v_quoted_355_);
v___x_367_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabMacroRulesAux_spec__2___closed__0));
v_sz_368_ = lean_array_size(v___x_366_);
v___x_369_ = ((size_t)0ULL);
lean_inc(v_k_285_);
v___x_370_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabMacroRulesAux_spec__2(v_k_285_, v___x_366_, v_sz_368_, v___x_369_, v___x_367_);
lean_dec_ref(v___x_366_);
v_fst_371_ = lean_ctor_get(v___x_370_, 0);
lean_inc(v_fst_371_);
lean_dec_ref(v___x_370_);
if (lean_obj_tag(v_fst_371_) == 0)
{
lean_dec(v_pat_351_);
lean_dec_ref(v___x_350_);
lean_dec(v___x_336_);
v___y_318_ = v___y_354_;
v___y_319_ = v___y_353_;
goto v___jp_317_;
}
else
{
lean_object* v_val_372_; 
v_val_372_ = lean_ctor_get(v_fst_371_, 0);
lean_inc(v_val_372_);
lean_dec_ref_known(v_fst_371_, 1);
if (lean_obj_tag(v_val_372_) == 0)
{
lean_dec(v_pat_351_);
lean_dec_ref(v___x_350_);
lean_dec(v___x_336_);
v___y_318_ = v___y_354_;
v___y_319_ = v___y_353_;
goto v___jp_317_;
}
else
{
lean_object* v_val_373_; lean_object* v_pat_374_; lean_object* v_pats_375_; lean_object* v___x_376_; 
lean_dec(v___x_316_);
v_val_373_ = lean_ctor_get(v_val_372_, 0);
lean_inc(v_val_373_);
lean_dec_ref_known(v_val_372_, 1);
v_pat_374_ = l_Lean_Syntax_setArg(v_pat_351_, v___x_329_, v_val_373_);
v_pats_375_ = lean_array_set(v___x_350_, v___x_296_, v_pat_374_);
v___x_376_ = l_Lean_Elab_Command_getRef___redArg(v___y_353_);
if (lean_obj_tag(v___x_376_) == 0)
{
lean_object* v_a_377_; lean_object* v___x_378_; lean_object* v___x_379_; 
v_a_377_ = lean_ctor_get(v___x_376_, 0);
lean_inc(v_a_377_);
lean_dec_ref_known(v___x_376_, 1);
v___x_378_ = l_Lean_SourceInfo_fromRef(v_a_377_, v___x_357_);
lean_dec(v_a_377_);
v___x_379_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_353_);
if (lean_obj_tag(v___x_379_) == 0)
{
lean_object* v_quotContext_x3f_380_; 
lean_dec_ref_known(v___x_379_, 1);
v_quotContext_x3f_380_ = lean_ctor_get(v___y_353_, 5);
if (lean_obj_tag(v_quotContext_x3f_380_) == 0)
{
lean_object* v___x_381_; 
v___x_381_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabMacroRulesAux_spec__3___redArg(v___y_354_);
if (lean_obj_tag(v___x_381_) == 0)
{
lean_dec_ref_known(v___x_381_, 1);
v___y_338_ = v___x_378_;
v___y_339_ = v_pats_375_;
goto v___jp_337_;
}
else
{
lean_object* v_a_382_; lean_object* v___x_384_; uint8_t v_isShared_385_; uint8_t v_isSharedCheck_389_; 
lean_dec(v___x_378_);
lean_dec_ref(v_pats_375_);
lean_dec(v___x_336_);
lean_dec_ref(v_bs_x27_297_);
lean_dec(v_k_285_);
v_a_382_ = lean_ctor_get(v___x_381_, 0);
v_isSharedCheck_389_ = !lean_is_exclusive(v___x_381_);
if (v_isSharedCheck_389_ == 0)
{
v___x_384_ = v___x_381_;
v_isShared_385_ = v_isSharedCheck_389_;
goto v_resetjp_383_;
}
else
{
lean_inc(v_a_382_);
lean_dec(v___x_381_);
v___x_384_ = lean_box(0);
v_isShared_385_ = v_isSharedCheck_389_;
goto v_resetjp_383_;
}
v_resetjp_383_:
{
lean_object* v___x_387_; 
if (v_isShared_385_ == 0)
{
v___x_387_ = v___x_384_;
goto v_reusejp_386_;
}
else
{
lean_object* v_reuseFailAlloc_388_; 
v_reuseFailAlloc_388_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_388_, 0, v_a_382_);
v___x_387_ = v_reuseFailAlloc_388_;
goto v_reusejp_386_;
}
v_reusejp_386_:
{
return v___x_387_;
}
}
}
}
else
{
v___y_338_ = v___x_378_;
v___y_339_ = v_pats_375_;
goto v___jp_337_;
}
}
else
{
lean_object* v_a_390_; lean_object* v___x_392_; uint8_t v_isShared_393_; uint8_t v_isSharedCheck_397_; 
lean_dec(v___x_378_);
lean_dec_ref(v_pats_375_);
lean_dec(v___x_336_);
lean_dec_ref(v_bs_x27_297_);
lean_dec(v_k_285_);
v_a_390_ = lean_ctor_get(v___x_379_, 0);
v_isSharedCheck_397_ = !lean_is_exclusive(v___x_379_);
if (v_isSharedCheck_397_ == 0)
{
v___x_392_ = v___x_379_;
v_isShared_393_ = v_isSharedCheck_397_;
goto v_resetjp_391_;
}
else
{
lean_inc(v_a_390_);
lean_dec(v___x_379_);
v___x_392_ = lean_box(0);
v_isShared_393_ = v_isSharedCheck_397_;
goto v_resetjp_391_;
}
v_resetjp_391_:
{
lean_object* v___x_395_; 
if (v_isShared_393_ == 0)
{
v___x_395_ = v___x_392_;
goto v_reusejp_394_;
}
else
{
lean_object* v_reuseFailAlloc_396_; 
v_reuseFailAlloc_396_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_396_, 0, v_a_390_);
v___x_395_ = v_reuseFailAlloc_396_;
goto v_reusejp_394_;
}
v_reusejp_394_:
{
return v___x_395_;
}
}
}
}
else
{
lean_object* v_a_398_; lean_object* v___x_400_; uint8_t v_isShared_401_; uint8_t v_isSharedCheck_405_; 
lean_dec_ref(v_pats_375_);
lean_dec(v___x_336_);
lean_dec_ref(v_bs_x27_297_);
lean_dec(v_k_285_);
v_a_398_ = lean_ctor_get(v___x_376_, 0);
v_isSharedCheck_405_ = !lean_is_exclusive(v___x_376_);
if (v_isSharedCheck_405_ == 0)
{
v___x_400_ = v___x_376_;
v_isShared_401_ = v_isSharedCheck_405_;
goto v_resetjp_399_;
}
else
{
lean_inc(v_a_398_);
lean_dec(v___x_376_);
v___x_400_ = lean_box(0);
v_isShared_401_ = v_isSharedCheck_405_;
goto v_resetjp_399_;
}
v_resetjp_399_:
{
lean_object* v___x_403_; 
if (v_isShared_401_ == 0)
{
v___x_403_ = v___x_400_;
goto v_reusejp_402_;
}
else
{
lean_object* v_reuseFailAlloc_404_; 
v_reuseFailAlloc_404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_404_, 0, v_a_398_);
v___x_403_ = v_reuseFailAlloc_404_;
goto v_reusejp_402_;
}
v_reusejp_402_:
{
return v___x_403_;
}
}
}
}
}
}
}
else
{
lean_dec(v_k_x27_356_);
lean_dec(v_quoted_355_);
lean_dec(v_pat_351_);
lean_dec_ref(v___x_350_);
lean_dec(v___x_336_);
v_a_299_ = v___x_316_;
goto v___jp_298_;
}
}
}
}
v___jp_298_:
{
size_t v___x_300_; size_t v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; 
v___x_300_ = ((size_t)1ULL);
v___x_301_ = lean_usize_add(v_i_287_, v___x_300_);
v___x_302_ = l_unsafeCast___redArg(v_a_299_);
lean_dec(v_a_299_);
v___x_303_ = lean_array_uset(v_bs_x27_297_, v_i_287_, v___x_302_);
v_i_287_ = v___x_301_;
v_bs_288_ = v___x_303_;
goto _start;
}
v___jp_305_:
{
if (lean_obj_tag(v___y_306_) == 0)
{
lean_object* v_a_307_; 
v_a_307_ = lean_ctor_get(v___y_306_, 0);
lean_inc(v_a_307_);
lean_dec_ref_known(v___y_306_, 1);
v_a_299_ = v_a_307_;
goto v___jp_298_;
}
else
{
lean_object* v_a_308_; lean_object* v___x_310_; uint8_t v_isShared_311_; uint8_t v_isSharedCheck_315_; 
lean_dec_ref(v_bs_x27_297_);
lean_dec(v_k_285_);
v_a_308_ = lean_ctor_get(v___y_306_, 0);
v_isSharedCheck_315_ = !lean_is_exclusive(v___y_306_);
if (v_isSharedCheck_315_ == 0)
{
v___x_310_ = v___y_306_;
v_isShared_311_ = v_isSharedCheck_315_;
goto v_resetjp_309_;
}
else
{
lean_inc(v_a_308_);
lean_dec(v___y_306_);
v___x_310_ = lean_box(0);
v_isShared_311_ = v_isSharedCheck_315_;
goto v_resetjp_309_;
}
v_resetjp_309_:
{
lean_object* v___x_313_; 
if (v_isShared_311_ == 0)
{
v___x_313_ = v___x_310_;
goto v_reusejp_312_;
}
else
{
lean_object* v_reuseFailAlloc_314_; 
v_reuseFailAlloc_314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_314_, 0, v_a_308_);
v___x_313_ = v_reuseFailAlloc_314_;
goto v_reusejp_312_;
}
v_reusejp_312_:
{
return v___x_313_;
}
}
}
}
v___jp_317_:
{
lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; 
v___x_320_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__1);
lean_inc(v_k_285_);
v___x_321_ = l_Lean_MessageData_ofName(v_k_285_);
v___x_322_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_322_, 0, v___x_320_);
lean_ctor_set(v___x_322_, 1, v___x_321_);
v___x_323_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__3, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__3);
v___x_324_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_324_, 0, v___x_322_);
lean_ctor_set(v___x_324_, 1, v___x_323_);
v___x_325_ = l_Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1___redArg(v___x_316_, v___x_324_, v___y_319_, v___y_318_);
lean_dec(v___x_316_);
v___y_306_ = v___x_325_;
goto v___jp_305_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___boxed(lean_object* v_k_416_, lean_object* v_sz_417_, lean_object* v_i_418_, lean_object* v_bs_419_, lean_object* v___y_420_, lean_object* v___y_421_, lean_object* v___y_422_){
_start:
{
size_t v_sz_boxed_423_; size_t v_i_boxed_424_; lean_object* v_res_425_; 
v_sz_boxed_423_ = lean_unbox_usize(v_sz_417_);
lean_dec(v_sz_417_);
v_i_boxed_424_ = lean_unbox_usize(v_i_418_);
lean_dec(v_i_418_);
v_res_425_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4(v_k_416_, v_sz_boxed_423_, v_i_boxed_424_, v_bs_419_, v___y_420_, v___y_421_);
lean_dec(v___y_421_);
lean_dec_ref(v___y_420_);
return v_res_425_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabMacroRulesAux___closed__4(void){
_start:
{
lean_object* v___x_430_; lean_object* v___x_431_; 
v___x_430_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__3));
v___x_431_ = l_String_toRawSubstring_x27(v___x_430_);
return v___x_431_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabMacroRulesAux___closed__8(void){
_start:
{
lean_object* v___x_436_; lean_object* v___x_437_; 
v___x_436_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__7));
v___x_437_ = l_String_toRawSubstring_x27(v___x_436_);
return v___x_437_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabMacroRulesAux___closed__19(void){
_start:
{
lean_object* v___x_449_; lean_object* v___x_450_; 
v___x_449_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__18));
v___x_450_ = l_String_toRawSubstring_x27(v___x_449_);
return v___x_450_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabMacroRulesAux___closed__26(void){
_start:
{
lean_object* v___x_464_; lean_object* v___x_465_; 
v___x_464_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__25));
v___x_465_ = l_String_toRawSubstring_x27(v___x_464_);
return v___x_465_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabMacroRulesAux(lean_object* v_doc_x3f_494_, lean_object* v_attrs_x3f_495_, lean_object* v_attrKind_496_, lean_object* v_tk_497_, lean_object* v_k_498_, lean_object* v_alts_499_, lean_object* v_a_500_, lean_object* v_a_501_){
_start:
{
size_t v_sz_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_6862__overap_508_; lean_object* v___x_509_; 
v_sz_503_ = lean_array_size(v_alts_499_);
v___x_504_ = l_unsafeCast___redArg(v_alts_499_);
v___x_505_ = lean_box_usize(v_sz_503_);
v___x_506_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___boxed__const__1));
lean_inc(v_k_498_);
v___x_507_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___boxed), 7, 4);
lean_closure_set(v___x_507_, 0, v_k_498_);
lean_closure_set(v___x_507_, 1, v___x_505_);
lean_closure_set(v___x_507_, 2, v___x_506_);
lean_closure_set(v___x_507_, 3, v___x_504_);
v___x_6862__overap_508_ = l_unsafeCast___redArg(v___x_507_);
lean_dec_ref(v___x_507_);
lean_inc(v_a_501_);
lean_inc_ref(v_a_500_);
v___x_509_ = lean_apply_3(v___x_6862__overap_508_, v_a_500_, v_a_501_, lean_box(0));
if (lean_obj_tag(v___x_509_) == 0)
{
lean_object* v_a_510_; lean_object* v___x_512_; uint8_t v_isShared_513_; uint8_t v_isSharedCheck_695_; 
v_a_510_ = lean_ctor_get(v___x_509_, 0);
v_isSharedCheck_695_ = !lean_is_exclusive(v___x_509_);
if (v_isSharedCheck_695_ == 0)
{
v___x_512_ = v___x_509_;
v_isShared_513_ = v_isSharedCheck_695_;
goto v_resetjp_511_;
}
else
{
lean_inc(v_a_510_);
lean_dec(v___x_509_);
v___x_512_ = lean_box(0);
v_isShared_513_ = v_isSharedCheck_695_;
goto v_resetjp_511_;
}
v_resetjp_511_:
{
lean_object* v___y_515_; lean_object* v___y_516_; lean_object* v___y_517_; lean_object* v___y_518_; lean_object* v___y_519_; lean_object* v___y_520_; lean_object* v___y_521_; lean_object* v___y_522_; lean_object* v___y_523_; lean_object* v___y_524_; lean_object* v___y_525_; lean_object* v___y_628_; lean_object* v___y_629_; lean_object* v___y_630_; lean_object* v___y_631_; lean_object* v_a_632_; lean_object* v___x_641_; 
v___x_641_ = l_Lean_Elab_Command_getRef___redArg(v_a_500_);
if (lean_obj_tag(v___x_641_) == 0)
{
lean_object* v_a_642_; uint8_t v___x_643_; lean_object* v___y_645_; lean_object* v___x_665_; lean_object* v___x_684_; 
v_a_642_ = lean_ctor_get(v___x_641_, 0);
lean_inc(v_a_642_);
lean_dec_ref_known(v___x_641_, 1);
v___x_643_ = 0;
v___x_665_ = l_Lean_SourceInfo_fromRef(v_a_642_, v___x_643_);
lean_dec(v_a_642_);
v___x_684_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v_a_500_);
if (lean_obj_tag(v___x_684_) == 0)
{
lean_object* v_quotContext_x3f_685_; 
lean_dec_ref_known(v___x_684_, 1);
v_quotContext_x3f_685_ = lean_ctor_get(v_a_500_, 5);
if (lean_obj_tag(v_quotContext_x3f_685_) == 0)
{
lean_object* v___x_686_; 
v___x_686_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabMacroRulesAux_spec__3___redArg(v_a_501_);
lean_dec_ref(v___x_686_);
goto v___jp_666_;
}
else
{
goto v___jp_666_;
}
}
else
{
lean_object* v_a_687_; lean_object* v___x_689_; uint8_t v_isShared_690_; uint8_t v_isSharedCheck_694_; 
lean_dec(v___x_665_);
lean_del_object(v___x_512_);
lean_dec(v_a_510_);
lean_dec(v_k_498_);
lean_dec(v_attrKind_496_);
lean_dec(v_doc_x3f_494_);
v_a_687_ = lean_ctor_get(v___x_684_, 0);
v_isSharedCheck_694_ = !lean_is_exclusive(v___x_684_);
if (v_isSharedCheck_694_ == 0)
{
v___x_689_ = v___x_684_;
v_isShared_690_ = v_isSharedCheck_694_;
goto v_resetjp_688_;
}
else
{
lean_inc(v_a_687_);
lean_dec(v___x_684_);
v___x_689_ = lean_box(0);
v_isShared_690_ = v_isSharedCheck_694_;
goto v_resetjp_688_;
}
v_resetjp_688_:
{
lean_object* v___x_692_; 
if (v_isShared_690_ == 0)
{
v___x_692_ = v___x_689_;
goto v_reusejp_691_;
}
else
{
lean_object* v_reuseFailAlloc_693_; 
v_reuseFailAlloc_693_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_693_, 0, v_a_687_);
v___x_692_ = v_reuseFailAlloc_693_;
goto v_reusejp_691_;
}
v_reusejp_691_:
{
return v___x_692_;
}
}
}
v___jp_644_:
{
lean_object* v___x_646_; lean_object* v___x_647_; 
v___x_646_ = l_Lean_Parser_Command_visibility_ofAttrKind(v_attrKind_496_);
v___x_647_ = l_Lean_Elab_Command_getRef___redArg(v_a_500_);
if (lean_obj_tag(v___x_647_) == 0)
{
lean_object* v_a_648_; lean_object* v___x_649_; lean_object* v___x_650_; 
v_a_648_ = lean_ctor_get(v___x_647_, 0);
lean_inc(v_a_648_);
lean_dec_ref_known(v___x_647_, 1);
v___x_649_ = l_Lean_SourceInfo_fromRef(v_a_648_, v___x_643_);
lean_dec(v_a_648_);
v___x_650_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v_a_500_);
if (lean_obj_tag(v___x_650_) == 0)
{
lean_object* v_quotContext_x3f_651_; 
v_quotContext_x3f_651_ = lean_ctor_get(v_a_500_, 5);
if (lean_obj_tag(v_quotContext_x3f_651_) == 0)
{
lean_object* v_a_652_; lean_object* v___x_653_; lean_object* v_a_654_; 
v_a_652_ = lean_ctor_get(v___x_650_, 0);
lean_inc(v_a_652_);
lean_dec_ref_known(v___x_650_, 1);
v___x_653_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabMacroRulesAux_spec__3___redArg(v_a_501_);
v_a_654_ = lean_ctor_get(v___x_653_, 0);
lean_inc(v_a_654_);
lean_dec_ref(v___x_653_);
v___y_628_ = v___y_645_;
v___y_629_ = v___x_649_;
v___y_630_ = v_a_652_;
v___y_631_ = v___x_646_;
v_a_632_ = v_a_654_;
goto v___jp_627_;
}
else
{
lean_object* v_a_655_; lean_object* v_val_656_; 
v_a_655_ = lean_ctor_get(v___x_650_, 0);
lean_inc(v_a_655_);
lean_dec_ref_known(v___x_650_, 1);
v_val_656_ = lean_ctor_get(v_quotContext_x3f_651_, 0);
lean_inc(v_val_656_);
v___y_628_ = v___y_645_;
v___y_629_ = v___x_649_;
v___y_630_ = v_a_655_;
v___y_631_ = v___x_646_;
v_a_632_ = v_val_656_;
goto v___jp_627_;
}
}
else
{
lean_object* v_a_657_; lean_object* v___x_659_; uint8_t v_isShared_660_; uint8_t v_isSharedCheck_664_; 
lean_dec(v___x_649_);
lean_dec(v___x_646_);
lean_dec_ref(v___y_645_);
lean_del_object(v___x_512_);
lean_dec(v_a_510_);
lean_dec(v_k_498_);
lean_dec(v_doc_x3f_494_);
v_a_657_ = lean_ctor_get(v___x_650_, 0);
v_isSharedCheck_664_ = !lean_is_exclusive(v___x_650_);
if (v_isSharedCheck_664_ == 0)
{
v___x_659_ = v___x_650_;
v_isShared_660_ = v_isSharedCheck_664_;
goto v_resetjp_658_;
}
else
{
lean_inc(v_a_657_);
lean_dec(v___x_650_);
v___x_659_ = lean_box(0);
v_isShared_660_ = v_isSharedCheck_664_;
goto v_resetjp_658_;
}
v_resetjp_658_:
{
lean_object* v___x_662_; 
if (v_isShared_660_ == 0)
{
v___x_662_ = v___x_659_;
goto v_reusejp_661_;
}
else
{
lean_object* v_reuseFailAlloc_663_; 
v_reuseFailAlloc_663_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_663_, 0, v_a_657_);
v___x_662_ = v_reuseFailAlloc_663_;
goto v_reusejp_661_;
}
v_reusejp_661_:
{
return v___x_662_;
}
}
}
}
else
{
lean_dec(v___x_646_);
lean_dec_ref(v___y_645_);
lean_del_object(v___x_512_);
lean_dec(v_a_510_);
lean_dec(v_k_498_);
lean_dec(v_doc_x3f_494_);
return v___x_647_;
}
}
v___jp_666_:
{
lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; 
v___x_667_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__35));
v___x_668_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__37));
v___x_669_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__38));
lean_inc_n(v___x_665_, 2);
v___x_670_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_670_, 0, v___x_665_);
lean_ctor_set(v___x_670_, 1, v___x_668_);
lean_inc(v_k_498_);
v___x_671_ = l_Lean_mkIdent(v_k_498_);
v___x_672_ = l_Lean_Syntax_node2(v___x_665_, v___x_669_, v___x_670_, v___x_671_);
lean_inc(v_attrKind_496_);
v___x_673_ = l_Lean_Syntax_node2(v___x_665_, v___x_667_, v_attrKind_496_, v___x_672_);
if (lean_obj_tag(v_attrs_x3f_495_) == 0)
{
lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; 
v___x_674_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__39));
v___x_675_ = lean_unsigned_to_nat(1u);
v___x_676_ = lean_mk_empty_array_with_capacity(v___x_675_);
v___x_677_ = lean_array_push(v___x_676_, v___x_673_);
v___x_678_ = l_Lean_Syntax_TSepArray_ofElems___redArg(v___x_674_, v___x_677_);
lean_dec_ref(v___x_677_);
v___y_645_ = v___x_678_;
goto v___jp_644_;
}
else
{
lean_object* v_val_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; 
v_val_679_ = lean_ctor_get(v_attrs_x3f_495_, 0);
v___x_680_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__39));
v___x_681_ = l_Lean_Syntax_TSepArray_getElems___redArg(v_val_679_);
v___x_682_ = lean_array_push(v___x_681_, v___x_673_);
v___x_683_ = l_Lean_Syntax_TSepArray_ofElems___redArg(v___x_680_, v___x_682_);
lean_dec_ref(v___x_682_);
v___y_645_ = v___x_683_;
goto v___jp_644_;
}
}
}
else
{
lean_del_object(v___x_512_);
lean_dec(v_a_510_);
lean_dec(v_k_498_);
lean_dec(v_attrKind_496_);
lean_dec(v_doc_x3f_494_);
return v___x_641_;
}
v___jp_514_:
{
lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; uint8_t v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_625_; 
lean_inc_ref_n(v___y_523_, 3);
v___x_526_ = l_Array_append___redArg(v___y_523_, v___y_525_);
lean_dec_ref(v___y_525_);
lean_inc_n(v___y_522_, 8);
lean_inc_n(v___y_518_, 29);
v___x_527_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_527_, 0, v___y_518_);
lean_ctor_set(v___x_527_, 1, v___y_522_);
lean_ctor_set(v___x_527_, 2, v___x_526_);
v___x_528_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__5));
v___x_529_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__6));
v___x_530_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__0));
lean_inc_ref_n(v___y_515_, 9);
v___x_531_ = l_Lean_Name_mkStr4(v___y_515_, v___x_528_, v___x_529_, v___x_530_);
v___x_532_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__1));
v___x_533_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_533_, 0, v___y_518_);
lean_ctor_set(v___x_533_, 1, v___x_532_);
v___x_534_ = l_Array_append___redArg(v___y_523_, v___y_516_);
lean_dec_ref(v___y_516_);
v___x_535_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_535_, 0, v___y_518_);
lean_ctor_set(v___x_535_, 1, v___y_522_);
lean_ctor_set(v___x_535_, 2, v___x_534_);
v___x_536_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__2));
v___x_537_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_537_, 0, v___y_518_);
lean_ctor_set(v___x_537_, 1, v___x_536_);
v___x_538_ = l_Lean_Syntax_node3(v___y_518_, v___x_531_, v___x_533_, v___x_535_, v___x_537_);
v___x_539_ = l_Lean_Syntax_node1(v___y_518_, v___y_522_, v___x_538_);
lean_inc_ref(v___y_524_);
v___x_540_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_540_, 0, v___y_518_);
lean_ctor_set(v___x_540_, 1, v___y_524_);
v___x_541_ = lean_obj_once(&l_Lean_Elab_Command_elabMacroRulesAux___closed__4, &l_Lean_Elab_Command_elabMacroRulesAux___closed__4_once, _init_l_Lean_Elab_Command_elabMacroRulesAux___closed__4);
v___x_542_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__5));
lean_inc_n(v___y_521_, 3);
lean_inc_n(v___y_517_, 3);
v___x_543_ = l_Lean_addMacroScope(v___y_517_, v___x_542_, v___y_521_);
v___x_544_ = lean_box(0);
v___x_545_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_545_, 0, v___y_518_);
lean_ctor_set(v___x_545_, 1, v___x_541_);
lean_ctor_set(v___x_545_, 2, v___x_543_);
lean_ctor_set(v___x_545_, 3, v___x_544_);
v___x_546_ = 1;
v___x_547_ = l_Lean_mkIdentFrom(v_tk_497_, v_k_498_, v___x_546_);
v___x_548_ = l_Lean_Syntax_node2(v___y_518_, v___y_522_, v___x_545_, v___x_547_);
v___x_549_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__6));
v___x_550_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_550_, 0, v___y_518_);
lean_ctor_set(v___x_550_, 1, v___x_549_);
v___x_551_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__7));
v___x_552_ = lean_obj_once(&l_Lean_Elab_Command_elabMacroRulesAux___closed__8, &l_Lean_Elab_Command_elabMacroRulesAux___closed__8_once, _init_l_Lean_Elab_Command_elabMacroRulesAux___closed__8);
v___x_553_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__9));
v___x_554_ = l_Lean_addMacroScope(v___y_517_, v___x_553_, v___y_521_);
v___x_555_ = l_Lean_Name_mkStr2(v___y_515_, v___x_551_);
lean_inc(v___x_555_);
v___x_556_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_556_, 0, v___x_555_);
lean_ctor_set(v___x_556_, 1, v___x_544_);
v___x_557_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_557_, 0, v___x_555_);
v___x_558_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_558_, 0, v___x_557_);
lean_ctor_set(v___x_558_, 1, v___x_544_);
v___x_559_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_559_, 0, v___x_556_);
lean_ctor_set(v___x_559_, 1, v___x_558_);
v___x_560_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_560_, 0, v___y_518_);
lean_ctor_set(v___x_560_, 1, v___x_552_);
lean_ctor_set(v___x_560_, 2, v___x_554_);
lean_ctor_set(v___x_560_, 3, v___x_559_);
v___x_561_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__10));
v___x_562_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_562_, 0, v___y_518_);
lean_ctor_set(v___x_562_, 1, v___x_561_);
v___x_563_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__11));
v___x_564_ = l_Lean_Name_mkStr4(v___y_515_, v___x_528_, v___x_529_, v___x_563_);
v___x_565_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_565_, 0, v___y_518_);
lean_ctor_set(v___x_565_, 1, v___x_563_);
v___x_566_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__12));
v___x_567_ = l_Lean_Name_mkStr4(v___y_515_, v___x_528_, v___x_529_, v___x_566_);
v___x_568_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__7));
v___x_569_ = l_Lean_Name_mkStr4(v___y_515_, v___x_528_, v___x_529_, v___x_568_);
v___x_570_ = l_unsafeCast___redArg(v_a_510_);
lean_dec(v_a_510_);
v___x_571_ = l_Array_append___redArg(v___y_523_, v___x_570_);
lean_dec(v___x_570_);
v___x_572_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__9));
v___x_573_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_573_, 0, v___y_518_);
lean_ctor_set(v___x_573_, 1, v___x_572_);
v___x_574_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__13));
v___x_575_ = l_Lean_Name_mkStr4(v___y_515_, v___x_528_, v___x_529_, v___x_574_);
v___x_576_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__14));
v___x_577_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_577_, 0, v___y_518_);
lean_ctor_set(v___x_577_, 1, v___x_576_);
v___x_578_ = l_Lean_Syntax_node1(v___y_518_, v___x_575_, v___x_577_);
v___x_579_ = l_Lean_Syntax_node1(v___y_518_, v___y_522_, v___x_578_);
v___x_580_ = l_Lean_Syntax_node1(v___y_518_, v___y_522_, v___x_579_);
v___x_581_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__13));
v___x_582_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_582_, 0, v___y_518_);
lean_ctor_set(v___x_582_, 1, v___x_581_);
v___x_583_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__15));
v___x_584_ = l_Lean_Name_mkStr4(v___y_515_, v___x_528_, v___x_529_, v___x_583_);
v___x_585_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__16));
v___x_586_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_586_, 0, v___y_518_);
lean_ctor_set(v___x_586_, 1, v___x_585_);
v___x_587_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__17));
v___x_588_ = l_Lean_Name_mkStr4(v___y_515_, v___x_528_, v___x_529_, v___x_587_);
v___x_589_ = lean_obj_once(&l_Lean_Elab_Command_elabMacroRulesAux___closed__19, &l_Lean_Elab_Command_elabMacroRulesAux___closed__19_once, _init_l_Lean_Elab_Command_elabMacroRulesAux___closed__19);
v___x_590_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__20));
v___x_591_ = l_Lean_addMacroScope(v___y_517_, v___x_590_, v___y_521_);
v___x_592_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__24));
v___x_593_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_593_, 0, v___y_518_);
lean_ctor_set(v___x_593_, 1, v___x_589_);
lean_ctor_set(v___x_593_, 2, v___x_591_);
lean_ctor_set(v___x_593_, 3, v___x_592_);
v___x_594_ = lean_obj_once(&l_Lean_Elab_Command_elabMacroRulesAux___closed__26, &l_Lean_Elab_Command_elabMacroRulesAux___closed__26_once, _init_l_Lean_Elab_Command_elabMacroRulesAux___closed__26);
v___x_595_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__27));
v___x_596_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__28));
v___x_597_ = l_Lean_Name_mkStr4(v___y_515_, v___x_551_, v___x_595_, v___x_596_);
lean_inc_n(v___x_597_, 2);
v___x_598_ = l_Lean_addMacroScope(v___y_517_, v___x_597_, v___y_521_);
v___x_599_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_599_, 0, v___x_597_);
lean_ctor_set(v___x_599_, 1, v___x_544_);
v___x_600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_600_, 0, v___x_597_);
v___x_601_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_601_, 0, v___x_600_);
lean_ctor_set(v___x_601_, 1, v___x_544_);
v___x_602_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_602_, 0, v___x_599_);
lean_ctor_set(v___x_602_, 1, v___x_601_);
v___x_603_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_603_, 0, v___y_518_);
lean_ctor_set(v___x_603_, 1, v___x_594_);
lean_ctor_set(v___x_603_, 2, v___x_598_);
lean_ctor_set(v___x_603_, 3, v___x_602_);
v___x_604_ = l_Lean_Syntax_node1(v___y_518_, v___y_522_, v___x_603_);
v___x_605_ = l_Lean_Syntax_node2(v___y_518_, v___x_588_, v___x_593_, v___x_604_);
v___x_606_ = l_Lean_Syntax_node2(v___y_518_, v___x_584_, v___x_586_, v___x_605_);
v___x_607_ = l_Lean_Syntax_node4(v___y_518_, v___x_569_, v___x_573_, v___x_580_, v___x_582_, v___x_606_);
v___x_608_ = lean_array_push(v___x_571_, v___x_607_);
v___x_609_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_609_, 0, v___y_518_);
lean_ctor_set(v___x_609_, 1, v___y_522_);
lean_ctor_set(v___x_609_, 2, v___x_608_);
v___x_610_ = l_Lean_Syntax_node1(v___y_518_, v___x_567_, v___x_609_);
v___x_611_ = l_Lean_Syntax_node2(v___y_518_, v___x_564_, v___x_565_, v___x_610_);
v___x_612_ = lean_unsigned_to_nat(9u);
v___x_613_ = lean_mk_empty_array_with_capacity(v___x_612_);
v___x_614_ = lean_array_push(v___x_613_, v___x_527_);
v___x_615_ = lean_array_push(v___x_614_, v___x_539_);
v___x_616_ = lean_array_push(v___x_615_, v___y_520_);
v___x_617_ = lean_array_push(v___x_616_, v___x_540_);
v___x_618_ = lean_array_push(v___x_617_, v___x_548_);
v___x_619_ = lean_array_push(v___x_618_, v___x_550_);
v___x_620_ = lean_array_push(v___x_619_, v___x_560_);
v___x_621_ = lean_array_push(v___x_620_, v___x_562_);
v___x_622_ = lean_array_push(v___x_621_, v___x_611_);
lean_inc(v___y_519_);
v___x_623_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_623_, 0, v___y_518_);
lean_ctor_set(v___x_623_, 1, v___y_519_);
lean_ctor_set(v___x_623_, 2, v___x_622_);
if (v_isShared_513_ == 0)
{
lean_ctor_set(v___x_512_, 0, v___x_623_);
v___x_625_ = v___x_512_;
goto v_reusejp_624_;
}
else
{
lean_object* v_reuseFailAlloc_626_; 
v_reuseFailAlloc_626_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_626_, 0, v___x_623_);
v___x_625_ = v_reuseFailAlloc_626_;
goto v_reusejp_624_;
}
v_reusejp_624_:
{
return v___x_625_;
}
}
v___jp_627_:
{
lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; 
v___x_633_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__4));
v___x_634_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__31));
v___x_635_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__32));
v___x_636_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__11));
v___x_637_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__12, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__12_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__12);
if (lean_obj_tag(v_doc_x3f_494_) == 1)
{
lean_object* v_val_638_; lean_object* v___x_639_; 
v_val_638_ = lean_ctor_get(v_doc_x3f_494_, 0);
lean_inc(v_val_638_);
lean_dec_ref_known(v_doc_x3f_494_, 1);
v___x_639_ = l_Array_mkArray1___redArg(v_val_638_);
v___y_515_ = v___x_633_;
v___y_516_ = v___y_628_;
v___y_517_ = v_a_632_;
v___y_518_ = v___y_629_;
v___y_519_ = v___x_635_;
v___y_520_ = v___y_631_;
v___y_521_ = v___y_630_;
v___y_522_ = v___x_636_;
v___y_523_ = v___x_637_;
v___y_524_ = v___x_634_;
v___y_525_ = v___x_639_;
goto v___jp_514_;
}
else
{
lean_object* v___x_640_; 
lean_dec(v_doc_x3f_494_);
v___x_640_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__33));
v___y_515_ = v___x_633_;
v___y_516_ = v___y_628_;
v___y_517_ = v_a_632_;
v___y_518_ = v___y_629_;
v___y_519_ = v___x_635_;
v___y_520_ = v___y_631_;
v___y_521_ = v___y_630_;
v___y_522_ = v___x_636_;
v___y_523_ = v___x_637_;
v___y_524_ = v___x_634_;
v___y_525_ = v___x_640_;
goto v___jp_514_;
}
}
}
}
else
{
lean_object* v_a_696_; lean_object* v___x_698_; uint8_t v_isShared_699_; uint8_t v_isSharedCheck_703_; 
lean_dec(v_k_498_);
lean_dec(v_attrKind_496_);
lean_dec(v_doc_x3f_494_);
v_a_696_ = lean_ctor_get(v___x_509_, 0);
v_isSharedCheck_703_ = !lean_is_exclusive(v___x_509_);
if (v_isSharedCheck_703_ == 0)
{
v___x_698_ = v___x_509_;
v_isShared_699_ = v_isSharedCheck_703_;
goto v_resetjp_697_;
}
else
{
lean_inc(v_a_696_);
lean_dec(v___x_509_);
v___x_698_ = lean_box(0);
v_isShared_699_ = v_isSharedCheck_703_;
goto v_resetjp_697_;
}
v_resetjp_697_:
{
lean_object* v___x_701_; 
if (v_isShared_699_ == 0)
{
v___x_701_ = v___x_698_;
goto v_reusejp_700_;
}
else
{
lean_object* v_reuseFailAlloc_702_; 
v_reuseFailAlloc_702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_702_, 0, v_a_696_);
v___x_701_ = v_reuseFailAlloc_702_;
goto v_reusejp_700_;
}
v_reusejp_700_:
{
return v___x_701_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabMacroRulesAux___boxed(lean_object* v_doc_x3f_704_, lean_object* v_attrs_x3f_705_, lean_object* v_attrKind_706_, lean_object* v_tk_707_, lean_object* v_k_708_, lean_object* v_alts_709_, lean_object* v_a_710_, lean_object* v_a_711_, lean_object* v_a_712_){
_start:
{
lean_object* v_res_713_; 
v_res_713_ = l_Lean_Elab_Command_elabMacroRulesAux(v_doc_x3f_704_, v_attrs_x3f_705_, v_attrKind_706_, v_tk_707_, v_k_708_, v_alts_709_, v_a_710_, v_a_711_);
lean_dec(v_a_711_);
lean_dec_ref(v_a_710_);
lean_dec_ref(v_alts_709_);
lean_dec(v_tk_707_);
lean_dec(v_attrs_x3f_705_);
return v_res_713_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1(lean_object* v_00_u03b1_714_, lean_object* v_ref_715_, lean_object* v_msg_716_, lean_object* v___y_717_, lean_object* v___y_718_){
_start:
{
lean_object* v___x_720_; 
v___x_720_ = l_Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1___redArg(v_ref_715_, v_msg_716_, v___y_717_, v___y_718_);
return v___x_720_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1___boxed(lean_object* v_00_u03b1_721_, lean_object* v_ref_722_, lean_object* v_msg_723_, lean_object* v___y_724_, lean_object* v___y_725_, lean_object* v___y_726_){
_start:
{
lean_object* v_res_727_; 
v_res_727_ = l_Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1(v_00_u03b1_721_, v_ref_722_, v_msg_723_, v___y_724_, v___y_725_);
lean_dec(v___y_725_);
lean_dec_ref(v___y_724_);
lean_dec(v_ref_722_);
return v_res_727_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__3(lean_object* v_msgData_728_, lean_object* v___y_729_, lean_object* v___y_730_){
_start:
{
lean_object* v___x_732_; 
v___x_732_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__3___redArg(v_msgData_728_, v___y_730_);
return v___x_732_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__3___boxed(lean_object* v_msgData_733_, lean_object* v___y_734_, lean_object* v___y_735_, lean_object* v___y_736_){
_start:
{
lean_object* v_res_737_; 
v_res_737_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__3(v_msgData_733_, v___y_734_, v___y_735_);
lean_dec(v___y_735_);
lean_dec_ref(v___y_734_);
return v_res_737_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1(lean_object* v_00_u03b1_738_, lean_object* v_msg_739_, lean_object* v___y_740_, lean_object* v___y_741_){
_start:
{
lean_object* v___x_743_; 
v___x_743_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1___redArg(v_msg_739_, v___y_740_, v___y_741_);
return v___x_743_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1___boxed(lean_object* v_00_u03b1_744_, lean_object* v_msg_745_, lean_object* v___y_746_, lean_object* v___y_747_, lean_object* v___y_748_){
_start:
{
lean_object* v_res_749_; 
v_res_749_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1(v_00_u03b1_744_, v_msg_745_, v___y_746_, v___y_747_);
lean_dec(v___y_747_);
lean_dec_ref(v___y_746_);
return v_res_749_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__4(lean_object* v_msgData_750_, lean_object* v_macroStack_751_, lean_object* v___y_752_, lean_object* v___y_753_){
_start:
{
lean_object* v___x_755_; 
v___x_755_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__4___redArg(v_msgData_750_, v_macroStack_751_, v___y_753_);
return v___x_755_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__4___boxed(lean_object* v_msgData_756_, lean_object* v_macroStack_757_, lean_object* v___y_758_, lean_object* v___y_759_, lean_object* v___y_760_){
_start:
{
lean_object* v_res_761_; 
v_res_761_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Command_elabMacroRulesAux_spec__1_spec__1_spec__4(v_msgData_756_, v_macroStack_757_, v___y_758_, v___y_759_);
lean_dec(v___y_759_);
lean_dec_ref(v___y_758_);
return v_res_761_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__0___redArg___lam__0(lean_object* v___y_762_, uint8_t v_isExporting_763_, lean_object* v_a_x3f_764_){
_start:
{
lean_object* v___x_766_; lean_object* v_env_767_; lean_object* v_messages_768_; lean_object* v_scopes_769_; lean_object* v_usedQuotCtxts_770_; lean_object* v_nextMacroScope_771_; lean_object* v_maxRecDepth_772_; lean_object* v_ngen_773_; lean_object* v_auxDeclNGen_774_; lean_object* v_infoState_775_; lean_object* v_traceState_776_; lean_object* v_snapshotTasks_777_; lean_object* v_prevLinterStates_778_; lean_object* v_codeQualityEntryTasks_779_; lean_object* v___x_781_; uint8_t v_isShared_782_; uint8_t v_isSharedCheck_790_; 
v___x_766_ = lean_st_ref_take(v___y_762_);
v_env_767_ = lean_ctor_get(v___x_766_, 0);
v_messages_768_ = lean_ctor_get(v___x_766_, 1);
v_scopes_769_ = lean_ctor_get(v___x_766_, 2);
v_usedQuotCtxts_770_ = lean_ctor_get(v___x_766_, 3);
v_nextMacroScope_771_ = lean_ctor_get(v___x_766_, 4);
v_maxRecDepth_772_ = lean_ctor_get(v___x_766_, 5);
v_ngen_773_ = lean_ctor_get(v___x_766_, 6);
v_auxDeclNGen_774_ = lean_ctor_get(v___x_766_, 7);
v_infoState_775_ = lean_ctor_get(v___x_766_, 8);
v_traceState_776_ = lean_ctor_get(v___x_766_, 9);
v_snapshotTasks_777_ = lean_ctor_get(v___x_766_, 10);
v_prevLinterStates_778_ = lean_ctor_get(v___x_766_, 11);
v_codeQualityEntryTasks_779_ = lean_ctor_get(v___x_766_, 12);
v_isSharedCheck_790_ = !lean_is_exclusive(v___x_766_);
if (v_isSharedCheck_790_ == 0)
{
v___x_781_ = v___x_766_;
v_isShared_782_ = v_isSharedCheck_790_;
goto v_resetjp_780_;
}
else
{
lean_inc(v_codeQualityEntryTasks_779_);
lean_inc(v_prevLinterStates_778_);
lean_inc(v_snapshotTasks_777_);
lean_inc(v_traceState_776_);
lean_inc(v_infoState_775_);
lean_inc(v_auxDeclNGen_774_);
lean_inc(v_ngen_773_);
lean_inc(v_maxRecDepth_772_);
lean_inc(v_nextMacroScope_771_);
lean_inc(v_usedQuotCtxts_770_);
lean_inc(v_scopes_769_);
lean_inc(v_messages_768_);
lean_inc(v_env_767_);
lean_dec(v___x_766_);
v___x_781_ = lean_box(0);
v_isShared_782_ = v_isSharedCheck_790_;
goto v_resetjp_780_;
}
v_resetjp_780_:
{
lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_786_; 
v___x_783_ = lean_box(0);
v___x_784_ = l_Lean_Environment_setExporting(v_env_767_, v_isExporting_763_);
if (v_isShared_782_ == 0)
{
lean_ctor_set(v___x_781_, 0, v___x_784_);
v___x_786_ = v___x_781_;
goto v_reusejp_785_;
}
else
{
lean_object* v_reuseFailAlloc_789_; 
v_reuseFailAlloc_789_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_789_, 0, v___x_784_);
lean_ctor_set(v_reuseFailAlloc_789_, 1, v_messages_768_);
lean_ctor_set(v_reuseFailAlloc_789_, 2, v_scopes_769_);
lean_ctor_set(v_reuseFailAlloc_789_, 3, v_usedQuotCtxts_770_);
lean_ctor_set(v_reuseFailAlloc_789_, 4, v_nextMacroScope_771_);
lean_ctor_set(v_reuseFailAlloc_789_, 5, v_maxRecDepth_772_);
lean_ctor_set(v_reuseFailAlloc_789_, 6, v_ngen_773_);
lean_ctor_set(v_reuseFailAlloc_789_, 7, v_auxDeclNGen_774_);
lean_ctor_set(v_reuseFailAlloc_789_, 8, v_infoState_775_);
lean_ctor_set(v_reuseFailAlloc_789_, 9, v_traceState_776_);
lean_ctor_set(v_reuseFailAlloc_789_, 10, v_snapshotTasks_777_);
lean_ctor_set(v_reuseFailAlloc_789_, 11, v_prevLinterStates_778_);
lean_ctor_set(v_reuseFailAlloc_789_, 12, v_codeQualityEntryTasks_779_);
v___x_786_ = v_reuseFailAlloc_789_;
goto v_reusejp_785_;
}
v_reusejp_785_:
{
lean_object* v___x_787_; lean_object* v___x_788_; 
v___x_787_ = lean_st_ref_put(v___y_762_, v___x_786_);
v___x_788_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_788_, 0, v___x_783_);
return v___x_788_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__0___redArg___lam__0___boxed(lean_object* v___y_791_, lean_object* v_isExporting_792_, lean_object* v_a_x3f_793_, lean_object* v___y_794_){
_start:
{
uint8_t v_isExporting_boxed_795_; lean_object* v_res_796_; 
v_isExporting_boxed_795_ = lean_unbox(v_isExporting_792_);
v_res_796_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__0___redArg___lam__0(v___y_791_, v_isExporting_boxed_795_, v_a_x3f_793_);
lean_dec(v_a_x3f_793_);
lean_dec(v___y_791_);
return v_res_796_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__0___redArg(lean_object* v_x_797_, uint8_t v_isExporting_798_, lean_object* v___y_799_, lean_object* v___y_800_){
_start:
{
lean_object* v___x_802_; lean_object* v_env_803_; lean_object* v___x_804_; uint8_t v_isModule_805_; 
v___x_802_ = lean_st_ref_get(v___y_800_);
v_env_803_ = lean_ctor_get(v___x_802_, 0);
lean_inc_ref(v_env_803_);
lean_dec(v___x_802_);
v___x_804_ = l_Lean_Environment_header(v_env_803_);
v_isModule_805_ = lean_ctor_get_uint8(v___x_804_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_804_);
if (v_isModule_805_ == 0)
{
lean_object* v___x_806_; 
lean_dec_ref(v_env_803_);
lean_inc(v___y_800_);
lean_inc_ref(v___y_799_);
v___x_806_ = lean_apply_3(v_x_797_, v___y_799_, v___y_800_, lean_box(0));
return v___x_806_;
}
else
{
uint8_t v_isExporting_807_; 
v_isExporting_807_ = lean_ctor_get_uint8(v_env_803_, sizeof(void*)*8);
lean_dec_ref(v_env_803_);
if (v_isExporting_798_ == 0)
{
if (v_isExporting_807_ == 0)
{
lean_object* v___x_861_; 
lean_inc(v___y_800_);
lean_inc_ref(v___y_799_);
v___x_861_ = lean_apply_3(v_x_797_, v___y_799_, v___y_800_, lean_box(0));
return v___x_861_;
}
else
{
goto v___jp_808_;
}
}
else
{
if (v_isExporting_807_ == 0)
{
goto v___jp_808_;
}
else
{
lean_object* v___x_862_; 
lean_inc(v___y_800_);
lean_inc_ref(v___y_799_);
v___x_862_ = lean_apply_3(v_x_797_, v___y_799_, v___y_800_, lean_box(0));
return v___x_862_;
}
}
v___jp_808_:
{
lean_object* v___x_809_; lean_object* v_env_810_; lean_object* v_messages_811_; lean_object* v_scopes_812_; lean_object* v_usedQuotCtxts_813_; lean_object* v_nextMacroScope_814_; lean_object* v_maxRecDepth_815_; lean_object* v_ngen_816_; lean_object* v_auxDeclNGen_817_; lean_object* v_infoState_818_; lean_object* v_traceState_819_; lean_object* v_snapshotTasks_820_; lean_object* v_prevLinterStates_821_; lean_object* v_codeQualityEntryTasks_822_; lean_object* v___x_824_; uint8_t v_isShared_825_; uint8_t v_isSharedCheck_860_; 
v___x_809_ = lean_st_ref_take(v___y_800_);
v_env_810_ = lean_ctor_get(v___x_809_, 0);
v_messages_811_ = lean_ctor_get(v___x_809_, 1);
v_scopes_812_ = lean_ctor_get(v___x_809_, 2);
v_usedQuotCtxts_813_ = lean_ctor_get(v___x_809_, 3);
v_nextMacroScope_814_ = lean_ctor_get(v___x_809_, 4);
v_maxRecDepth_815_ = lean_ctor_get(v___x_809_, 5);
v_ngen_816_ = lean_ctor_get(v___x_809_, 6);
v_auxDeclNGen_817_ = lean_ctor_get(v___x_809_, 7);
v_infoState_818_ = lean_ctor_get(v___x_809_, 8);
v_traceState_819_ = lean_ctor_get(v___x_809_, 9);
v_snapshotTasks_820_ = lean_ctor_get(v___x_809_, 10);
v_prevLinterStates_821_ = lean_ctor_get(v___x_809_, 11);
v_codeQualityEntryTasks_822_ = lean_ctor_get(v___x_809_, 12);
v_isSharedCheck_860_ = !lean_is_exclusive(v___x_809_);
if (v_isSharedCheck_860_ == 0)
{
v___x_824_ = v___x_809_;
v_isShared_825_ = v_isSharedCheck_860_;
goto v_resetjp_823_;
}
else
{
lean_inc(v_codeQualityEntryTasks_822_);
lean_inc(v_prevLinterStates_821_);
lean_inc(v_snapshotTasks_820_);
lean_inc(v_traceState_819_);
lean_inc(v_infoState_818_);
lean_inc(v_auxDeclNGen_817_);
lean_inc(v_ngen_816_);
lean_inc(v_maxRecDepth_815_);
lean_inc(v_nextMacroScope_814_);
lean_inc(v_usedQuotCtxts_813_);
lean_inc(v_scopes_812_);
lean_inc(v_messages_811_);
lean_inc(v_env_810_);
lean_dec(v___x_809_);
v___x_824_ = lean_box(0);
v_isShared_825_ = v_isSharedCheck_860_;
goto v_resetjp_823_;
}
v_resetjp_823_:
{
lean_object* v___x_826_; lean_object* v___x_828_; 
v___x_826_ = l_Lean_Environment_setExporting(v_env_810_, v_isExporting_798_);
if (v_isShared_825_ == 0)
{
lean_ctor_set(v___x_824_, 0, v___x_826_);
v___x_828_ = v___x_824_;
goto v_reusejp_827_;
}
else
{
lean_object* v_reuseFailAlloc_859_; 
v_reuseFailAlloc_859_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_859_, 0, v___x_826_);
lean_ctor_set(v_reuseFailAlloc_859_, 1, v_messages_811_);
lean_ctor_set(v_reuseFailAlloc_859_, 2, v_scopes_812_);
lean_ctor_set(v_reuseFailAlloc_859_, 3, v_usedQuotCtxts_813_);
lean_ctor_set(v_reuseFailAlloc_859_, 4, v_nextMacroScope_814_);
lean_ctor_set(v_reuseFailAlloc_859_, 5, v_maxRecDepth_815_);
lean_ctor_set(v_reuseFailAlloc_859_, 6, v_ngen_816_);
lean_ctor_set(v_reuseFailAlloc_859_, 7, v_auxDeclNGen_817_);
lean_ctor_set(v_reuseFailAlloc_859_, 8, v_infoState_818_);
lean_ctor_set(v_reuseFailAlloc_859_, 9, v_traceState_819_);
lean_ctor_set(v_reuseFailAlloc_859_, 10, v_snapshotTasks_820_);
lean_ctor_set(v_reuseFailAlloc_859_, 11, v_prevLinterStates_821_);
lean_ctor_set(v_reuseFailAlloc_859_, 12, v_codeQualityEntryTasks_822_);
v___x_828_ = v_reuseFailAlloc_859_;
goto v_reusejp_827_;
}
v_reusejp_827_:
{
lean_object* v___x_829_; lean_object* v_r_830_; 
v___x_829_ = lean_st_ref_put(v___y_800_, v___x_828_);
lean_inc(v___y_800_);
lean_inc_ref(v___y_799_);
v_r_830_ = lean_apply_3(v_x_797_, v___y_799_, v___y_800_, lean_box(0));
if (lean_obj_tag(v_r_830_) == 0)
{
lean_object* v_a_831_; lean_object* v___x_833_; uint8_t v_isShared_834_; uint8_t v_isSharedCheck_847_; 
v_a_831_ = lean_ctor_get(v_r_830_, 0);
v_isSharedCheck_847_ = !lean_is_exclusive(v_r_830_);
if (v_isSharedCheck_847_ == 0)
{
v___x_833_ = v_r_830_;
v_isShared_834_ = v_isSharedCheck_847_;
goto v_resetjp_832_;
}
else
{
lean_inc(v_a_831_);
lean_dec(v_r_830_);
v___x_833_ = lean_box(0);
v_isShared_834_ = v_isSharedCheck_847_;
goto v_resetjp_832_;
}
v_resetjp_832_:
{
lean_object* v___x_836_; 
lean_inc(v_a_831_);
if (v_isShared_834_ == 0)
{
lean_ctor_set_tag(v___x_833_, 1);
v___x_836_ = v___x_833_;
goto v_reusejp_835_;
}
else
{
lean_object* v_reuseFailAlloc_846_; 
v_reuseFailAlloc_846_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_846_, 0, v_a_831_);
v___x_836_ = v_reuseFailAlloc_846_;
goto v_reusejp_835_;
}
v_reusejp_835_:
{
lean_object* v___x_837_; lean_object* v___x_839_; uint8_t v_isShared_840_; uint8_t v_isSharedCheck_844_; 
v___x_837_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__0___redArg___lam__0(v___y_800_, v_isExporting_807_, v___x_836_);
lean_dec_ref(v___x_836_);
v_isSharedCheck_844_ = !lean_is_exclusive(v___x_837_);
if (v_isSharedCheck_844_ == 0)
{
lean_object* v_unused_845_; 
v_unused_845_ = lean_ctor_get(v___x_837_, 0);
lean_dec(v_unused_845_);
v___x_839_ = v___x_837_;
v_isShared_840_ = v_isSharedCheck_844_;
goto v_resetjp_838_;
}
else
{
lean_dec(v___x_837_);
v___x_839_ = lean_box(0);
v_isShared_840_ = v_isSharedCheck_844_;
goto v_resetjp_838_;
}
v_resetjp_838_:
{
lean_object* v___x_842_; 
if (v_isShared_840_ == 0)
{
lean_ctor_set(v___x_839_, 0, v_a_831_);
v___x_842_ = v___x_839_;
goto v_reusejp_841_;
}
else
{
lean_object* v_reuseFailAlloc_843_; 
v_reuseFailAlloc_843_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_843_, 0, v_a_831_);
v___x_842_ = v_reuseFailAlloc_843_;
goto v_reusejp_841_;
}
v_reusejp_841_:
{
return v___x_842_;
}
}
}
}
}
else
{
lean_object* v_a_848_; lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_852_; uint8_t v_isShared_853_; uint8_t v_isSharedCheck_857_; 
v_a_848_ = lean_ctor_get(v_r_830_, 0);
lean_inc(v_a_848_);
lean_dec_ref_known(v_r_830_, 1);
v___x_849_ = lean_box(0);
v___x_850_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__0___redArg___lam__0(v___y_800_, v_isExporting_807_, v___x_849_);
v_isSharedCheck_857_ = !lean_is_exclusive(v___x_850_);
if (v_isSharedCheck_857_ == 0)
{
lean_object* v_unused_858_; 
v_unused_858_ = lean_ctor_get(v___x_850_, 0);
lean_dec(v_unused_858_);
v___x_852_ = v___x_850_;
v_isShared_853_ = v_isSharedCheck_857_;
goto v_resetjp_851_;
}
else
{
lean_dec(v___x_850_);
v___x_852_ = lean_box(0);
v_isShared_853_ = v_isSharedCheck_857_;
goto v_resetjp_851_;
}
v_resetjp_851_:
{
lean_object* v___x_855_; 
if (v_isShared_853_ == 0)
{
lean_ctor_set_tag(v___x_852_, 1);
lean_ctor_set(v___x_852_, 0, v_a_848_);
v___x_855_ = v___x_852_;
goto v_reusejp_854_;
}
else
{
lean_object* v_reuseFailAlloc_856_; 
v_reuseFailAlloc_856_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_856_, 0, v_a_848_);
v___x_855_ = v_reuseFailAlloc_856_;
goto v_reusejp_854_;
}
v_reusejp_854_:
{
return v___x_855_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__0___redArg___boxed(lean_object* v_x_863_, lean_object* v_isExporting_864_, lean_object* v___y_865_, lean_object* v___y_866_, lean_object* v___y_867_){
_start:
{
uint8_t v_isExporting_boxed_868_; lean_object* v_res_869_; 
v_isExporting_boxed_868_ = lean_unbox(v_isExporting_864_);
v_res_869_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__0___redArg(v_x_863_, v_isExporting_boxed_868_, v___y_865_, v___y_866_);
lean_dec(v___y_866_);
lean_dec_ref(v___y_865_);
return v_res_869_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__0(lean_object* v_00_u03b1_870_, lean_object* v_x_871_, uint8_t v_isExporting_872_, lean_object* v___y_873_, lean_object* v___y_874_){
_start:
{
lean_object* v___x_876_; 
v___x_876_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__0___redArg(v_x_871_, v_isExporting_872_, v___y_873_, v___y_874_);
return v___x_876_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__0___boxed(lean_object* v_00_u03b1_877_, lean_object* v_x_878_, lean_object* v_isExporting_879_, lean_object* v___y_880_, lean_object* v___y_881_, lean_object* v___y_882_){
_start:
{
uint8_t v_isExporting_boxed_883_; lean_object* v_res_884_; 
v_isExporting_boxed_883_ = lean_unbox(v_isExporting_879_);
v_res_884_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__0(v_00_u03b1_877_, v_x_878_, v_isExporting_boxed_883_, v___y_880_, v___y_881_);
lean_dec(v___y_881_);
lean_dec_ref(v___y_880_);
return v_res_884_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabMacroRules___lam__0(lean_object* v___x_885_, lean_object* v___x_886_, lean_object* v_doc_x3f_887_, lean_object* v_attrs_x3f_888_, lean_object* v_attrKind_889_, lean_object* v_tk_890_, lean_object* v_alts_891_, lean_object* v___y_892_, lean_object* v___y_893_){
_start:
{
lean_object* v___x_895_; 
v___x_895_ = l_Lean_Elab_Command_getRef___redArg(v___y_892_);
if (lean_obj_tag(v___x_895_) == 0)
{
lean_object* v_a_896_; lean_object* v_fileName_897_; lean_object* v_fileMap_898_; lean_object* v_currRecDepth_899_; lean_object* v_cmdPos_900_; lean_object* v_macroStack_901_; lean_object* v_quotContext_x3f_902_; lean_object* v_currMacroScope_903_; lean_object* v_snap_x3f_904_; lean_object* v_cancelTk_x3f_905_; uint8_t v_suppressElabErrors_906_; lean_object* v___x_908_; uint8_t v_isShared_909_; uint8_t v_isSharedCheck_925_; 
v_a_896_ = lean_ctor_get(v___x_895_, 0);
lean_inc(v_a_896_);
lean_dec_ref_known(v___x_895_, 1);
v_fileName_897_ = lean_ctor_get(v___y_892_, 0);
v_fileMap_898_ = lean_ctor_get(v___y_892_, 1);
v_currRecDepth_899_ = lean_ctor_get(v___y_892_, 2);
v_cmdPos_900_ = lean_ctor_get(v___y_892_, 3);
v_macroStack_901_ = lean_ctor_get(v___y_892_, 4);
v_quotContext_x3f_902_ = lean_ctor_get(v___y_892_, 5);
v_currMacroScope_903_ = lean_ctor_get(v___y_892_, 6);
v_snap_x3f_904_ = lean_ctor_get(v___y_892_, 8);
v_cancelTk_x3f_905_ = lean_ctor_get(v___y_892_, 9);
v_suppressElabErrors_906_ = lean_ctor_get_uint8(v___y_892_, sizeof(void*)*10);
v_isSharedCheck_925_ = !lean_is_exclusive(v___y_892_);
if (v_isSharedCheck_925_ == 0)
{
lean_object* v_unused_926_; 
v_unused_926_ = lean_ctor_get(v___y_892_, 7);
lean_dec(v_unused_926_);
v___x_908_ = v___y_892_;
v_isShared_909_ = v_isSharedCheck_925_;
goto v_resetjp_907_;
}
else
{
lean_inc(v_cancelTk_x3f_905_);
lean_inc(v_snap_x3f_904_);
lean_inc(v_currMacroScope_903_);
lean_inc(v_quotContext_x3f_902_);
lean_inc(v_macroStack_901_);
lean_inc(v_cmdPos_900_);
lean_inc(v_currRecDepth_899_);
lean_inc(v_fileMap_898_);
lean_inc(v_fileName_897_);
lean_dec(v___y_892_);
v___x_908_ = lean_box(0);
v_isShared_909_ = v_isSharedCheck_925_;
goto v_resetjp_907_;
}
v_resetjp_907_:
{
lean_object* v_ref_910_; lean_object* v___x_912_; 
v_ref_910_ = l_Lean_replaceRef(v___x_885_, v_a_896_);
lean_dec(v_a_896_);
if (v_isShared_909_ == 0)
{
lean_ctor_set(v___x_908_, 7, v_ref_910_);
v___x_912_ = v___x_908_;
goto v_reusejp_911_;
}
else
{
lean_object* v_reuseFailAlloc_924_; 
v_reuseFailAlloc_924_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v_reuseFailAlloc_924_, 0, v_fileName_897_);
lean_ctor_set(v_reuseFailAlloc_924_, 1, v_fileMap_898_);
lean_ctor_set(v_reuseFailAlloc_924_, 2, v_currRecDepth_899_);
lean_ctor_set(v_reuseFailAlloc_924_, 3, v_cmdPos_900_);
lean_ctor_set(v_reuseFailAlloc_924_, 4, v_macroStack_901_);
lean_ctor_set(v_reuseFailAlloc_924_, 5, v_quotContext_x3f_902_);
lean_ctor_set(v_reuseFailAlloc_924_, 6, v_currMacroScope_903_);
lean_ctor_set(v_reuseFailAlloc_924_, 7, v_ref_910_);
lean_ctor_set(v_reuseFailAlloc_924_, 8, v_snap_x3f_904_);
lean_ctor_set(v_reuseFailAlloc_924_, 9, v_cancelTk_x3f_905_);
lean_ctor_set_uint8(v_reuseFailAlloc_924_, sizeof(void*)*10, v_suppressElabErrors_906_);
v___x_912_ = v_reuseFailAlloc_924_;
goto v_reusejp_911_;
}
v_reusejp_911_:
{
lean_object* v___x_913_; 
v___x_913_ = l_Lean_Elab_Command_resolveSyntaxKind(v___x_886_, v___x_912_, v___y_893_);
if (lean_obj_tag(v___x_913_) == 0)
{
lean_object* v_a_914_; lean_object* v___x_915_; 
v_a_914_ = lean_ctor_get(v___x_913_, 0);
lean_inc(v_a_914_);
lean_dec_ref_known(v___x_913_, 1);
v___x_915_ = l_Lean_Elab_Command_elabMacroRulesAux(v_doc_x3f_887_, v_attrs_x3f_888_, v_attrKind_889_, v_tk_890_, v_a_914_, v_alts_891_, v___x_912_, v___y_893_);
lean_dec_ref(v___x_912_);
return v___x_915_;
}
else
{
lean_object* v_a_916_; lean_object* v___x_918_; uint8_t v_isShared_919_; uint8_t v_isSharedCheck_923_; 
lean_dec_ref(v___x_912_);
lean_dec(v_attrKind_889_);
lean_dec(v_doc_x3f_887_);
v_a_916_ = lean_ctor_get(v___x_913_, 0);
v_isSharedCheck_923_ = !lean_is_exclusive(v___x_913_);
if (v_isSharedCheck_923_ == 0)
{
v___x_918_ = v___x_913_;
v_isShared_919_ = v_isSharedCheck_923_;
goto v_resetjp_917_;
}
else
{
lean_inc(v_a_916_);
lean_dec(v___x_913_);
v___x_918_ = lean_box(0);
v_isShared_919_ = v_isSharedCheck_923_;
goto v_resetjp_917_;
}
v_resetjp_917_:
{
lean_object* v___x_921_; 
if (v_isShared_919_ == 0)
{
v___x_921_ = v___x_918_;
goto v_reusejp_920_;
}
else
{
lean_object* v_reuseFailAlloc_922_; 
v_reuseFailAlloc_922_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_922_, 0, v_a_916_);
v___x_921_ = v_reuseFailAlloc_922_;
goto v_reusejp_920_;
}
v_reusejp_920_:
{
return v___x_921_;
}
}
}
}
}
}
else
{
lean_dec_ref(v___y_892_);
lean_dec(v_attrKind_889_);
lean_dec(v_doc_x3f_887_);
lean_dec(v___x_886_);
return v___x_895_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabMacroRules___lam__0___boxed(lean_object* v___x_927_, lean_object* v___x_928_, lean_object* v_doc_x3f_929_, lean_object* v_attrs_x3f_930_, lean_object* v_attrKind_931_, lean_object* v_tk_932_, lean_object* v_alts_933_, lean_object* v___y_934_, lean_object* v___y_935_, lean_object* v___y_936_){
_start:
{
lean_object* v_res_937_; 
v_res_937_ = l_Lean_Elab_Command_elabMacroRules___lam__0(v___x_927_, v___x_928_, v_doc_x3f_929_, v_attrs_x3f_930_, v_attrKind_931_, v_tk_932_, v_alts_933_, v___y_934_, v___y_935_);
lean_dec(v___y_935_);
lean_dec(v_alts_933_);
lean_dec(v_tk_932_);
lean_dec(v_attrs_x3f_930_);
lean_dec(v___x_927_);
return v_res_937_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabMacroRules___lam__5(lean_object* v___x_941_, lean_object* v___x_942_, lean_object* v_attrKind_943_, lean_object* v___x_944_, lean_object* v___x_945_, lean_object* v_attrs_x3f_946_, lean_object* v___x_947_, lean_object* v___x_948_, lean_object* v___x_949_, lean_object* v_doc_x3f_950_, lean_object* v_kind_x3f_951_, lean_object* v_alts_952_, lean_object* v___y_953_, lean_object* v___y_954_){
_start:
{
lean_object* v___x_956_; 
v___x_956_ = l_Lean_Elab_Command_getRef___redArg(v___y_953_);
if (lean_obj_tag(v___x_956_) == 0)
{
lean_object* v_a_957_; lean_object* v___x_959_; uint8_t v_isShared_960_; uint8_t v_isSharedCheck_1035_; 
v_a_957_ = lean_ctor_get(v___x_956_, 0);
v_isSharedCheck_1035_ = !lean_is_exclusive(v___x_956_);
if (v_isSharedCheck_1035_ == 0)
{
v___x_959_ = v___x_956_;
v_isShared_960_ = v_isSharedCheck_1035_;
goto v_resetjp_958_;
}
else
{
lean_inc(v_a_957_);
lean_dec(v___x_956_);
v___x_959_ = lean_box(0);
v_isShared_960_ = v_isSharedCheck_1035_;
goto v_resetjp_958_;
}
v_resetjp_958_:
{
uint8_t v___x_961_; lean_object* v___x_962_; lean_object* v___y_964_; lean_object* v___y_965_; lean_object* v___y_966_; lean_object* v___y_967_; lean_object* v___y_968_; lean_object* v___y_969_; lean_object* v___y_981_; lean_object* v___y_982_; lean_object* v___y_983_; lean_object* v___y_984_; lean_object* v___y_1001_; lean_object* v___y_1002_; lean_object* v___y_1003_; lean_object* v___x_1024_; 
v___x_961_ = 0;
v___x_962_ = l_Lean_SourceInfo_fromRef(v_a_957_, v___x_961_);
lean_dec(v_a_957_);
v___x_1024_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_953_);
if (lean_obj_tag(v___x_1024_) == 0)
{
lean_object* v_quotContext_x3f_1025_; 
lean_dec_ref_known(v___x_1024_, 1);
v_quotContext_x3f_1025_ = lean_ctor_get(v___y_953_, 5);
if (lean_obj_tag(v_quotContext_x3f_1025_) == 0)
{
lean_object* v___x_1026_; 
v___x_1026_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabMacroRulesAux_spec__3___redArg(v___y_954_);
lean_dec_ref(v___x_1026_);
goto v___jp_1018_;
}
else
{
goto v___jp_1018_;
}
}
else
{
lean_object* v_a_1027_; lean_object* v___x_1029_; uint8_t v_isShared_1030_; uint8_t v_isSharedCheck_1034_; 
lean_dec(v___x_962_);
lean_del_object(v___x_959_);
lean_dec(v_kind_x3f_951_);
lean_dec(v_doc_x3f_950_);
lean_dec_ref(v___x_949_);
lean_dec_ref(v___x_948_);
lean_dec_ref(v___x_947_);
lean_dec_ref(v___x_944_);
lean_dec(v_attrKind_943_);
lean_dec(v___x_942_);
lean_dec(v___x_941_);
v_a_1027_ = lean_ctor_get(v___x_1024_, 0);
v_isSharedCheck_1034_ = !lean_is_exclusive(v___x_1024_);
if (v_isSharedCheck_1034_ == 0)
{
v___x_1029_ = v___x_1024_;
v_isShared_1030_ = v_isSharedCheck_1034_;
goto v_resetjp_1028_;
}
else
{
lean_inc(v_a_1027_);
lean_dec(v___x_1024_);
v___x_1029_ = lean_box(0);
v_isShared_1030_ = v_isSharedCheck_1034_;
goto v_resetjp_1028_;
}
v_resetjp_1028_:
{
lean_object* v___x_1032_; 
if (v_isShared_1030_ == 0)
{
v___x_1032_ = v___x_1029_;
goto v_reusejp_1031_;
}
else
{
lean_object* v_reuseFailAlloc_1033_; 
v_reuseFailAlloc_1033_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1033_, 0, v_a_1027_);
v___x_1032_ = v_reuseFailAlloc_1033_;
goto v_reusejp_1031_;
}
v_reusejp_1031_:
{
return v___x_1032_;
}
}
}
v___jp_963_:
{
lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_978_; 
lean_inc_ref_n(v___y_967_, 2);
v___x_970_ = l_Array_append___redArg(v___y_967_, v___y_969_);
lean_dec_ref(v___y_969_);
lean_inc_n(v___y_964_, 2);
lean_inc_n(v___x_962_, 3);
v___x_971_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_971_, 0, v___x_962_);
lean_ctor_set(v___x_971_, 1, v___y_964_);
lean_ctor_set(v___x_971_, 2, v___x_970_);
v___x_972_ = l_unsafeCast___redArg(v_alts_952_);
v___x_973_ = l_Array_append___redArg(v___y_967_, v___x_972_);
lean_dec(v___x_972_);
v___x_974_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_974_, 0, v___x_962_);
lean_ctor_set(v___x_974_, 1, v___y_964_);
lean_ctor_set(v___x_974_, 2, v___x_973_);
v___x_975_ = l_Lean_Syntax_node1(v___x_962_, v___x_941_, v___x_974_);
v___x_976_ = l_Lean_Syntax_node6(v___x_962_, v___x_942_, v___y_968_, v___y_966_, v_attrKind_943_, v___y_965_, v___x_971_, v___x_975_);
if (v_isShared_960_ == 0)
{
lean_ctor_set(v___x_959_, 0, v___x_976_);
v___x_978_ = v___x_959_;
goto v_reusejp_977_;
}
else
{
lean_object* v_reuseFailAlloc_979_; 
v_reuseFailAlloc_979_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_979_, 0, v___x_976_);
v___x_978_ = v_reuseFailAlloc_979_;
goto v_reusejp_977_;
}
v_reusejp_977_:
{
return v___x_978_;
}
}
v___jp_980_:
{
lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; 
lean_inc_ref(v___y_982_);
v___x_985_ = l_Array_append___redArg(v___y_982_, v___y_984_);
lean_dec_ref(v___y_984_);
lean_inc(v___y_981_);
lean_inc_n(v___x_962_, 2);
v___x_986_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_986_, 0, v___x_962_);
lean_ctor_set(v___x_986_, 1, v___y_981_);
lean_ctor_set(v___x_986_, 2, v___x_985_);
v___x_987_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_987_, 0, v___x_962_);
lean_ctor_set(v___x_987_, 1, v___x_944_);
if (lean_obj_tag(v_kind_x3f_951_) == 0)
{
lean_object* v___x_988_; 
v___x_988_ = lean_mk_empty_array_with_capacity(v___x_945_);
v___y_964_ = v___y_981_;
v___y_965_ = v___x_987_;
v___y_966_ = v___x_986_;
v___y_967_ = v___y_982_;
v___y_968_ = v___y_983_;
v___y_969_ = v___x_988_;
goto v___jp_963_;
}
else
{
lean_object* v_val_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; 
v_val_989_ = lean_ctor_get(v_kind_x3f_951_, 0);
lean_inc(v_val_989_);
lean_dec_ref_known(v_kind_x3f_951_, 1);
v___x_990_ = l_Lean_mkIdent(v_val_989_);
v___x_991_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRules___lam__5___closed__0));
lean_inc_n(v___x_962_, 4);
v___x_992_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_992_, 0, v___x_962_);
lean_ctor_set(v___x_992_, 1, v___x_991_);
v___x_993_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRules___lam__5___closed__1));
v___x_994_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_994_, 0, v___x_962_);
lean_ctor_set(v___x_994_, 1, v___x_993_);
v___x_995_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__10));
v___x_996_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_996_, 0, v___x_962_);
lean_ctor_set(v___x_996_, 1, v___x_995_);
v___x_997_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRules___lam__5___closed__2));
v___x_998_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_998_, 0, v___x_962_);
lean_ctor_set(v___x_998_, 1, v___x_997_);
v___x_999_ = l_Array_mkArray5___redArg(v___x_992_, v___x_994_, v___x_996_, v___x_990_, v___x_998_);
v___y_964_ = v___y_981_;
v___y_965_ = v___x_987_;
v___y_966_ = v___x_986_;
v___y_967_ = v___y_982_;
v___y_968_ = v___y_983_;
v___y_969_ = v___x_999_;
goto v___jp_963_;
}
}
v___jp_1000_:
{
lean_object* v___x_1004_; lean_object* v___x_1005_; 
lean_inc_ref(v___y_1002_);
v___x_1004_ = l_Array_append___redArg(v___y_1002_, v___y_1003_);
lean_dec_ref(v___y_1003_);
lean_inc(v___y_1001_);
lean_inc(v___x_962_);
v___x_1005_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1005_, 0, v___x_962_);
lean_ctor_set(v___x_1005_, 1, v___y_1001_);
lean_ctor_set(v___x_1005_, 2, v___x_1004_);
if (lean_obj_tag(v_attrs_x3f_946_) == 1)
{
lean_object* v_val_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; 
v_val_1006_ = lean_ctor_get(v_attrs_x3f_946_, 0);
v___x_1007_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__0));
v___x_1008_ = l_Lean_Name_mkStr4(v___x_947_, v___x_948_, v___x_949_, v___x_1007_);
v___x_1009_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__1));
lean_inc_n(v___x_962_, 4);
v___x_1010_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1010_, 0, v___x_962_);
lean_ctor_set(v___x_1010_, 1, v___x_1009_);
lean_inc_ref(v___y_1002_);
v___x_1011_ = l_Array_append___redArg(v___y_1002_, v_val_1006_);
lean_inc(v___y_1001_);
v___x_1012_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1012_, 0, v___x_962_);
lean_ctor_set(v___x_1012_, 1, v___y_1001_);
lean_ctor_set(v___x_1012_, 2, v___x_1011_);
v___x_1013_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__2));
v___x_1014_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1014_, 0, v___x_962_);
lean_ctor_set(v___x_1014_, 1, v___x_1013_);
v___x_1015_ = l_Lean_Syntax_node3(v___x_962_, v___x_1008_, v___x_1010_, v___x_1012_, v___x_1014_);
v___x_1016_ = l_Array_mkArray1___redArg(v___x_1015_);
v___y_981_ = v___y_1001_;
v___y_982_ = v___y_1002_;
v___y_983_ = v___x_1005_;
v___y_984_ = v___x_1016_;
goto v___jp_980_;
}
else
{
lean_object* v___x_1017_; 
lean_dec_ref(v___x_949_);
lean_dec_ref(v___x_948_);
lean_dec_ref(v___x_947_);
v___x_1017_ = lean_mk_empty_array_with_capacity(v___x_945_);
v___y_981_ = v___y_1001_;
v___y_982_ = v___y_1002_;
v___y_983_ = v___x_1005_;
v___y_984_ = v___x_1017_;
goto v___jp_980_;
}
}
v___jp_1018_:
{
lean_object* v___x_1019_; lean_object* v___x_1020_; 
v___x_1019_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__11));
v___x_1020_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__12, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__12_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__12);
if (lean_obj_tag(v_doc_x3f_950_) == 1)
{
lean_object* v_val_1021_; lean_object* v___x_1022_; 
v_val_1021_ = lean_ctor_get(v_doc_x3f_950_, 0);
lean_inc(v_val_1021_);
lean_dec_ref_known(v_doc_x3f_950_, 1);
v___x_1022_ = l_Array_mkArray1___redArg(v_val_1021_);
v___y_1001_ = v___x_1019_;
v___y_1002_ = v___x_1020_;
v___y_1003_ = v___x_1022_;
goto v___jp_1000_;
}
else
{
lean_object* v___x_1023_; 
lean_dec(v_doc_x3f_950_);
v___x_1023_ = lean_mk_empty_array_with_capacity(v___x_945_);
v___y_1001_ = v___x_1019_;
v___y_1002_ = v___x_1020_;
v___y_1003_ = v___x_1023_;
goto v___jp_1000_;
}
}
}
}
else
{
lean_object* v_a_1036_; lean_object* v___x_1038_; uint8_t v_isShared_1039_; uint8_t v_isSharedCheck_1043_; 
lean_dec(v_kind_x3f_951_);
lean_dec(v_doc_x3f_950_);
lean_dec_ref(v___x_949_);
lean_dec_ref(v___x_948_);
lean_dec_ref(v___x_947_);
lean_dec_ref(v___x_944_);
lean_dec(v_attrKind_943_);
lean_dec(v___x_942_);
lean_dec(v___x_941_);
v_a_1036_ = lean_ctor_get(v___x_956_, 0);
v_isSharedCheck_1043_ = !lean_is_exclusive(v___x_956_);
if (v_isSharedCheck_1043_ == 0)
{
v___x_1038_ = v___x_956_;
v_isShared_1039_ = v_isSharedCheck_1043_;
goto v_resetjp_1037_;
}
else
{
lean_inc(v_a_1036_);
lean_dec(v___x_956_);
v___x_1038_ = lean_box(0);
v_isShared_1039_ = v_isSharedCheck_1043_;
goto v_resetjp_1037_;
}
v_resetjp_1037_:
{
lean_object* v___x_1041_; 
if (v_isShared_1039_ == 0)
{
v___x_1041_ = v___x_1038_;
goto v_reusejp_1040_;
}
else
{
lean_object* v_reuseFailAlloc_1042_; 
v_reuseFailAlloc_1042_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1042_, 0, v_a_1036_);
v___x_1041_ = v_reuseFailAlloc_1042_;
goto v_reusejp_1040_;
}
v_reusejp_1040_:
{
return v___x_1041_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabMacroRules___lam__5___boxed(lean_object* v___x_1044_, lean_object* v___x_1045_, lean_object* v_attrKind_1046_, lean_object* v___x_1047_, lean_object* v___x_1048_, lean_object* v_attrs_x3f_1049_, lean_object* v___x_1050_, lean_object* v___x_1051_, lean_object* v___x_1052_, lean_object* v_doc_x3f_1053_, lean_object* v_kind_x3f_1054_, lean_object* v_alts_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_){
_start:
{
lean_object* v_res_1059_; 
v_res_1059_ = l_Lean_Elab_Command_elabMacroRules___lam__5(v___x_1044_, v___x_1045_, v_attrKind_1046_, v___x_1047_, v___x_1048_, v_attrs_x3f_1049_, v___x_1050_, v___x_1051_, v___x_1052_, v_doc_x3f_1053_, v_kind_x3f_1054_, v_alts_1055_, v___y_1056_, v___y_1057_);
lean_dec(v___y_1057_);
lean_dec_ref(v___y_1056_);
lean_dec_ref(v_alts_1055_);
lean_dec(v_attrs_x3f_1049_);
lean_dec(v___x_1048_);
return v_res_1059_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabMacroRules___lam__1(lean_object* v_stx_1112_, lean_object* v___y_1113_, lean_object* v___y_1114_){
_start:
{
lean_object* v___y_1117_; uint8_t v___y_1118_; lean_object* v___y_1119_; lean_object* v___y_1120_; uint8_t v___y_1121_; uint8_t v___y_1122_; uint8_t v___y_1126_; lean_object* v___y_1127_; uint8_t v___y_1128_; lean_object* v___y_1129_; lean_object* v___y_1130_; uint8_t v___y_1131_; lean_object* v___y_1135_; uint8_t v___y_1136_; lean_object* v___y_1137_; uint8_t v___y_1138_; lean_object* v___y_1139_; uint8_t v___y_1140_; uint8_t v___y_1144_; lean_object* v___y_1145_; uint8_t v___y_1146_; lean_object* v___y_1147_; lean_object* v___y_1148_; uint8_t v___y_1149_; lean_object* v___y_1153_; lean_object* v___y_1154_; uint8_t v___y_1155_; uint8_t v___y_1156_; lean_object* v___y_1157_; uint8_t v___y_1158_; lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; uint8_t v___x_1165_; lean_object* v___y_1167_; lean_object* v___y_1168_; lean_object* v___y_1169_; lean_object* v___y_1170_; lean_object* v___y_1171_; lean_object* v___y_1172_; lean_object* v___y_1173_; lean_object* v___y_1174_; lean_object* v___y_1175_; lean_object* v___y_1176_; lean_object* v___y_1177_; lean_object* v___y_1178_; lean_object* v___y_1179_; lean_object* v___y_1180_; lean_object* v___y_1181_; 
v___x_1161_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__4));
v___x_1162_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__5));
v___x_1163_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRules___lam__1___closed__0));
v___x_1164_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRules___lam__1___closed__1));
lean_inc(v_stx_1112_);
v___x_1165_ = l_Lean_Syntax_isOfKind(v_stx_1112_, v___x_1164_);
if (v___x_1165_ == 0)
{
lean_object* v___x_1231_; 
lean_dec(v_stx_1112_);
v___x_1231_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabMacroRulesAux_spec__0___redArg();
return v___x_1231_;
}
else
{
lean_object* v___x_1232_; lean_object* v___y_1234_; lean_object* v___y_1235_; lean_object* v___y_1236_; lean_object* v___y_1237_; lean_object* v___y_1238_; lean_object* v___y_1239_; lean_object* v___y_1240_; lean_object* v___y_1241_; lean_object* v___y_1242_; lean_object* v___y_1243_; lean_object* v___y_1244_; lean_object* v_a_1245_; lean_object* v___y_1253_; uint8_t v___y_1254_; lean_object* v___y_1255_; lean_object* v___y_1256_; lean_object* v___y_1257_; lean_object* v___y_1258_; lean_object* v___y_1259_; lean_object* v___y_1260_; lean_object* v___y_1261_; lean_object* v___y_1262_; lean_object* v___y_1263_; lean_object* v___y_1264_; lean_object* v___y_1265_; lean_object* v___y_1285_; lean_object* v___y_1286_; lean_object* v___y_1287_; uint8_t v___y_1288_; lean_object* v___y_1289_; lean_object* v___y_1290_; lean_object* v___y_1291_; lean_object* v___y_1292_; lean_object* v___y_1293_; lean_object* v___y_1294_; lean_object* v___y_1295_; lean_object* v___y_1296_; lean_object* v___y_1297_; lean_object* v___y_1298_; lean_object* v___y_1299_; lean_object* v___y_1317_; lean_object* v___y_1318_; lean_object* v___y_1319_; uint8_t v___y_1320_; lean_object* v___y_1321_; lean_object* v___y_1322_; lean_object* v___y_1323_; lean_object* v___y_1324_; lean_object* v___y_1325_; lean_object* v___y_1326_; lean_object* v___y_1327_; lean_object* v___y_1328_; lean_object* v___y_1329_; lean_object* v___y_1330_; lean_object* v___y_1366_; lean_object* v___y_1367_; lean_object* v___y_1368_; lean_object* v___y_1369_; lean_object* v_attrs_x3f_1370_; lean_object* v_doc_x3f_1541_; lean_object* v___y_1542_; lean_object* v___y_1543_; lean_object* v___x_1557_; uint8_t v___x_1558_; 
v___x_1232_ = lean_unsigned_to_nat(0u);
v___x_1557_ = l_Lean_Syntax_getArg(v_stx_1112_, v___x_1232_);
v___x_1558_ = l_Lean_Syntax_isNone(v___x_1557_);
if (v___x_1558_ == 0)
{
lean_object* v___x_1559_; uint8_t v___x_1560_; 
v___x_1559_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_1557_);
v___x_1560_ = l_Lean_Syntax_matchesNull(v___x_1557_, v___x_1559_);
if (v___x_1560_ == 0)
{
lean_object* v___x_1561_; 
lean_dec(v___x_1557_);
lean_dec(v_stx_1112_);
v___x_1561_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabMacroRulesAux_spec__0___redArg();
return v___x_1561_;
}
else
{
lean_object* v_doc_x3f_1562_; 
v_doc_x3f_1562_ = l_Lean_Syntax_getArg(v___x_1557_, v___x_1232_);
lean_dec(v___x_1557_);
if (v___x_1558_ == 0)
{
lean_object* v___x_1565_; uint8_t v___x_1566_; 
v___x_1565_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRules___lam__1___closed__17));
lean_inc(v_doc_x3f_1562_);
v___x_1566_ = l_Lean_Syntax_isOfKind(v_doc_x3f_1562_, v___x_1565_);
if (v___x_1566_ == 0)
{
lean_object* v___x_1567_; 
lean_dec(v_doc_x3f_1562_);
lean_dec(v_stx_1112_);
v___x_1567_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabMacroRulesAux_spec__0___redArg();
return v___x_1567_;
}
else
{
goto v___jp_1563_;
}
}
else
{
goto v___jp_1563_;
}
v___jp_1563_:
{
lean_object* v___x_1564_; 
v___x_1564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1564_, 0, v_doc_x3f_1562_);
v_doc_x3f_1541_ = v___x_1564_;
v___y_1542_ = v___y_1113_;
v___y_1543_ = v___y_1114_;
goto v___jp_1540_;
}
}
}
else
{
lean_object* v___x_1568_; 
lean_dec(v___x_1557_);
v___x_1568_ = lean_box(0);
v_doc_x3f_1541_ = v___x_1568_;
v___y_1542_ = v___y_1113_;
v___y_1543_ = v___y_1114_;
goto v___jp_1540_;
}
v___jp_1233_:
{
lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; 
v___x_1246_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__31));
v___x_1247_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__32));
v___x_1248_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__12, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__12_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__12);
if (lean_obj_tag(v___y_1243_) == 1)
{
lean_object* v_val_1249_; lean_object* v___x_1250_; 
v_val_1249_ = lean_ctor_get(v___y_1243_, 0);
lean_inc(v_val_1249_);
lean_dec_ref_known(v___y_1243_, 1);
v___x_1250_ = l_Array_mkArray1___redArg(v_val_1249_);
v___y_1167_ = v___y_1236_;
v___y_1168_ = v___y_1237_;
v___y_1169_ = v___y_1239_;
v___y_1170_ = v_a_1245_;
v___y_1171_ = v___x_1247_;
v___y_1172_ = v___y_1244_;
v___y_1173_ = v___y_1234_;
v___y_1174_ = v___y_1235_;
v___y_1175_ = v___x_1248_;
v___y_1176_ = v___y_1238_;
v___y_1177_ = v___y_1241_;
v___y_1178_ = v___y_1240_;
v___y_1179_ = v___y_1242_;
v___y_1180_ = v___x_1246_;
v___y_1181_ = v___x_1250_;
goto v___jp_1166_;
}
else
{
lean_object* v___x_1251_; 
lean_dec(v___y_1243_);
v___x_1251_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__33));
v___y_1167_ = v___y_1236_;
v___y_1168_ = v___y_1237_;
v___y_1169_ = v___y_1239_;
v___y_1170_ = v_a_1245_;
v___y_1171_ = v___x_1247_;
v___y_1172_ = v___y_1244_;
v___y_1173_ = v___y_1234_;
v___y_1174_ = v___y_1235_;
v___y_1175_ = v___x_1248_;
v___y_1176_ = v___y_1238_;
v___y_1177_ = v___y_1241_;
v___y_1178_ = v___y_1240_;
v___y_1179_ = v___y_1242_;
v___y_1180_ = v___x_1246_;
v___y_1181_ = v___x_1251_;
goto v___jp_1166_;
}
}
v___jp_1252_:
{
lean_object* v___x_1266_; lean_object* v___x_1267_; 
v___x_1266_ = l_Lean_Parser_Command_visibility_ofAttrKind(v___y_1255_);
v___x_1267_ = l_Lean_Elab_Command_getRef___redArg(v___y_1264_);
if (lean_obj_tag(v___x_1267_) == 0)
{
lean_object* v_a_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; 
v_a_1268_ = lean_ctor_get(v___x_1267_, 0);
lean_inc(v_a_1268_);
lean_dec_ref_known(v___x_1267_, 1);
v___x_1269_ = l_Lean_SourceInfo_fromRef(v_a_1268_, v___y_1254_);
lean_dec(v_a_1268_);
v___x_1270_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_1264_);
lean_dec_ref(v___y_1264_);
if (lean_obj_tag(v___x_1270_) == 0)
{
if (lean_obj_tag(v___y_1258_) == 0)
{
lean_object* v_a_1271_; lean_object* v___x_1272_; lean_object* v_a_1273_; 
v_a_1271_ = lean_ctor_get(v___x_1270_, 0);
lean_inc(v_a_1271_);
lean_dec_ref_known(v___x_1270_, 1);
v___x_1272_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabMacroRulesAux_spec__3___redArg(v___y_1259_);
v_a_1273_ = lean_ctor_get(v___x_1272_, 0);
lean_inc(v_a_1273_);
lean_dec_ref(v___x_1272_);
v___y_1234_ = v___y_1260_;
v___y_1235_ = v___x_1269_;
v___y_1236_ = v___y_1265_;
v___y_1237_ = v_a_1271_;
v___y_1238_ = v___y_1261_;
v___y_1239_ = v___y_1253_;
v___y_1240_ = v___x_1266_;
v___y_1241_ = v___y_1262_;
v___y_1242_ = v___y_1263_;
v___y_1243_ = v___y_1256_;
v___y_1244_ = v___y_1257_;
v_a_1245_ = v_a_1273_;
goto v___jp_1233_;
}
else
{
lean_object* v_a_1274_; lean_object* v_val_1275_; 
v_a_1274_ = lean_ctor_get(v___x_1270_, 0);
lean_inc(v_a_1274_);
lean_dec_ref_known(v___x_1270_, 1);
v_val_1275_ = lean_ctor_get(v___y_1258_, 0);
lean_inc(v_val_1275_);
v___y_1234_ = v___y_1260_;
v___y_1235_ = v___x_1269_;
v___y_1236_ = v___y_1265_;
v___y_1237_ = v_a_1274_;
v___y_1238_ = v___y_1261_;
v___y_1239_ = v___y_1253_;
v___y_1240_ = v___x_1266_;
v___y_1241_ = v___y_1262_;
v___y_1242_ = v___y_1263_;
v___y_1243_ = v___y_1256_;
v___y_1244_ = v___y_1257_;
v_a_1245_ = v_val_1275_;
goto v___jp_1233_;
}
}
else
{
lean_object* v_a_1276_; lean_object* v___x_1278_; uint8_t v_isShared_1279_; uint8_t v_isSharedCheck_1283_; 
lean_dec(v___x_1269_);
lean_dec(v___x_1266_);
lean_dec_ref(v___y_1265_);
lean_dec(v___y_1263_);
lean_dec(v___y_1262_);
lean_dec_ref(v___y_1261_);
lean_dec(v___y_1260_);
lean_dec(v___y_1256_);
lean_dec(v___y_1253_);
v_a_1276_ = lean_ctor_get(v___x_1270_, 0);
v_isSharedCheck_1283_ = !lean_is_exclusive(v___x_1270_);
if (v_isSharedCheck_1283_ == 0)
{
v___x_1278_ = v___x_1270_;
v_isShared_1279_ = v_isSharedCheck_1283_;
goto v_resetjp_1277_;
}
else
{
lean_inc(v_a_1276_);
lean_dec(v___x_1270_);
v___x_1278_ = lean_box(0);
v_isShared_1279_ = v_isSharedCheck_1283_;
goto v_resetjp_1277_;
}
v_resetjp_1277_:
{
lean_object* v___x_1281_; 
if (v_isShared_1279_ == 0)
{
v___x_1281_ = v___x_1278_;
goto v_reusejp_1280_;
}
else
{
lean_object* v_reuseFailAlloc_1282_; 
v_reuseFailAlloc_1282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1282_, 0, v_a_1276_);
v___x_1281_ = v_reuseFailAlloc_1282_;
goto v_reusejp_1280_;
}
v_reusejp_1280_:
{
return v___x_1281_;
}
}
}
}
else
{
lean_dec(v___x_1266_);
lean_dec_ref(v___y_1265_);
lean_dec_ref(v___y_1264_);
lean_dec(v___y_1263_);
lean_dec(v___y_1262_);
lean_dec_ref(v___y_1261_);
lean_dec(v___y_1260_);
lean_dec(v___y_1256_);
lean_dec(v___y_1253_);
return v___x_1267_;
}
}
v___jp_1284_:
{
lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; 
v___x_1300_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__34));
lean_inc_ref(v___y_1296_);
v___x_1301_ = l_Lean_Name_mkStr4(v___x_1161_, v___x_1162_, v___y_1296_, v___x_1300_);
v___x_1302_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__37));
v___x_1303_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__38));
lean_inc_n(v___y_1287_, 2);
v___x_1304_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1304_, 0, v___y_1287_);
lean_ctor_set(v___x_1304_, 1, v___x_1302_);
lean_inc(v___y_1286_);
v___x_1305_ = l_Lean_Syntax_node2(v___y_1287_, v___x_1303_, v___x_1304_, v___y_1286_);
lean_inc(v___y_1290_);
v___x_1306_ = l_Lean_Syntax_node2(v___y_1287_, v___x_1301_, v___y_1290_, v___x_1305_);
if (lean_obj_tag(v___y_1285_) == 0)
{
lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; 
v___x_1307_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__39));
v___x_1308_ = lean_mk_empty_array_with_capacity(v___y_1289_);
v___x_1309_ = lean_array_push(v___x_1308_, v___x_1306_);
v___x_1310_ = l_Lean_Syntax_TSepArray_ofElems___redArg(v___x_1307_, v___x_1309_);
lean_dec_ref(v___x_1309_);
v___y_1253_ = v___y_1286_;
v___y_1254_ = v___y_1288_;
v___y_1255_ = v___y_1290_;
v___y_1256_ = v___y_1291_;
v___y_1257_ = v___y_1292_;
v___y_1258_ = v___y_1293_;
v___y_1259_ = v___y_1294_;
v___y_1260_ = v___y_1295_;
v___y_1261_ = v___y_1296_;
v___y_1262_ = v___y_1297_;
v___y_1263_ = v___y_1298_;
v___y_1264_ = v___y_1299_;
v___y_1265_ = v___x_1310_;
goto v___jp_1252_;
}
else
{
lean_object* v_val_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; 
v_val_1311_ = lean_ctor_get(v___y_1285_, 0);
lean_inc(v_val_1311_);
lean_dec_ref_known(v___y_1285_, 1);
v___x_1312_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__39));
v___x_1313_ = l_Lean_Syntax_TSepArray_getElems___redArg(v_val_1311_);
lean_dec(v_val_1311_);
v___x_1314_ = lean_array_push(v___x_1313_, v___x_1306_);
v___x_1315_ = l_Lean_Syntax_TSepArray_ofElems___redArg(v___x_1312_, v___x_1314_);
lean_dec_ref(v___x_1314_);
v___y_1253_ = v___y_1286_;
v___y_1254_ = v___y_1288_;
v___y_1255_ = v___y_1290_;
v___y_1256_ = v___y_1291_;
v___y_1257_ = v___y_1292_;
v___y_1258_ = v___y_1293_;
v___y_1259_ = v___y_1294_;
v___y_1260_ = v___y_1295_;
v___y_1261_ = v___y_1296_;
v___y_1262_ = v___y_1297_;
v___y_1263_ = v___y_1298_;
v___y_1264_ = v___y_1299_;
v___y_1265_ = v___x_1315_;
goto v___jp_1252_;
}
}
v___jp_1316_:
{
lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; 
v___x_1331_ = l_Lean_Syntax_getArg(v___y_1318_, v___y_1329_);
lean_dec(v___y_1318_);
v___x_1332_ = lean_mk_empty_array_with_capacity(v___y_1325_);
lean_inc(v___y_1330_);
v___x_1333_ = lean_array_push(v___x_1332_, v___y_1330_);
lean_inc(v___x_1331_);
v___x_1334_ = lean_array_push(v___x_1333_, v___x_1331_);
v___x_1335_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__11));
v___x_1336_ = lean_box(2);
v___x_1337_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1337_, 0, v___x_1336_);
lean_ctor_set(v___x_1337_, 1, v___x_1335_);
lean_ctor_set(v___x_1337_, 2, v___x_1334_);
v___x_1338_ = l_Lean_Elab_Command_getRef___redArg(v___y_1326_);
if (lean_obj_tag(v___x_1338_) == 0)
{
lean_object* v_a_1339_; lean_object* v_fileName_1340_; lean_object* v_fileMap_1341_; lean_object* v_currRecDepth_1342_; lean_object* v_cmdPos_1343_; lean_object* v_macroStack_1344_; lean_object* v_quotContext_x3f_1345_; lean_object* v_currMacroScope_1346_; lean_object* v_snap_x3f_1347_; lean_object* v_cancelTk_x3f_1348_; uint8_t v_suppressElabErrors_1349_; lean_object* v_ref_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; 
v_a_1339_ = lean_ctor_get(v___x_1338_, 0);
lean_inc(v_a_1339_);
lean_dec_ref_known(v___x_1338_, 1);
v_fileName_1340_ = lean_ctor_get(v___y_1326_, 0);
v_fileMap_1341_ = lean_ctor_get(v___y_1326_, 1);
v_currRecDepth_1342_ = lean_ctor_get(v___y_1326_, 2);
v_cmdPos_1343_ = lean_ctor_get(v___y_1326_, 3);
v_macroStack_1344_ = lean_ctor_get(v___y_1326_, 4);
v_quotContext_x3f_1345_ = lean_ctor_get(v___y_1326_, 5);
v_currMacroScope_1346_ = lean_ctor_get(v___y_1326_, 6);
v_snap_x3f_1347_ = lean_ctor_get(v___y_1326_, 8);
v_cancelTk_x3f_1348_ = lean_ctor_get(v___y_1326_, 9);
v_suppressElabErrors_1349_ = lean_ctor_get_uint8(v___y_1326_, sizeof(void*)*10);
v_ref_1350_ = l_Lean_replaceRef(v___x_1337_, v_a_1339_);
lean_dec(v_a_1339_);
lean_dec_ref_known(v___x_1337_, 3);
lean_inc(v_cancelTk_x3f_1348_);
lean_inc(v_snap_x3f_1347_);
lean_inc(v_currMacroScope_1346_);
lean_inc(v_quotContext_x3f_1345_);
lean_inc(v_macroStack_1344_);
lean_inc(v_cmdPos_1343_);
lean_inc(v_currRecDepth_1342_);
lean_inc_ref(v_fileMap_1341_);
lean_inc_ref(v_fileName_1340_);
v___x_1351_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v___x_1351_, 0, v_fileName_1340_);
lean_ctor_set(v___x_1351_, 1, v_fileMap_1341_);
lean_ctor_set(v___x_1351_, 2, v_currRecDepth_1342_);
lean_ctor_set(v___x_1351_, 3, v_cmdPos_1343_);
lean_ctor_set(v___x_1351_, 4, v_macroStack_1344_);
lean_ctor_set(v___x_1351_, 5, v_quotContext_x3f_1345_);
lean_ctor_set(v___x_1351_, 6, v_currMacroScope_1346_);
lean_ctor_set(v___x_1351_, 7, v_ref_1350_);
lean_ctor_set(v___x_1351_, 8, v_snap_x3f_1347_);
lean_ctor_set(v___x_1351_, 9, v_cancelTk_x3f_1348_);
lean_ctor_set_uint8(v___x_1351_, sizeof(void*)*10, v_suppressElabErrors_1349_);
v___x_1352_ = l_Lean_Elab_Command_getRef___redArg(v___x_1351_);
if (lean_obj_tag(v___x_1352_) == 0)
{
lean_object* v_a_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; 
v_a_1353_ = lean_ctor_get(v___x_1352_, 0);
lean_inc(v_a_1353_);
lean_dec_ref_known(v___x_1352_, 1);
v___x_1354_ = l_Lean_SourceInfo_fromRef(v_a_1353_, v___y_1320_);
lean_dec(v_a_1353_);
v___x_1355_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___x_1351_);
if (lean_obj_tag(v___x_1355_) == 0)
{
lean_dec_ref_known(v___x_1355_, 1);
if (lean_obj_tag(v_quotContext_x3f_1345_) == 0)
{
lean_object* v___x_1356_; 
v___x_1356_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabMacroRulesAux_spec__3___redArg(v___y_1324_);
lean_dec_ref(v___x_1356_);
v___y_1285_ = v___y_1317_;
v___y_1286_ = v___y_1319_;
v___y_1287_ = v___x_1354_;
v___y_1288_ = v___y_1320_;
v___y_1289_ = v___y_1321_;
v___y_1290_ = v___y_1322_;
v___y_1291_ = v___y_1323_;
v___y_1292_ = v___x_1335_;
v___y_1293_ = v_quotContext_x3f_1345_;
v___y_1294_ = v___y_1324_;
v___y_1295_ = v___x_1331_;
v___y_1296_ = v___y_1327_;
v___y_1297_ = v___y_1328_;
v___y_1298_ = v___y_1330_;
v___y_1299_ = v___x_1351_;
goto v___jp_1284_;
}
else
{
v___y_1285_ = v___y_1317_;
v___y_1286_ = v___y_1319_;
v___y_1287_ = v___x_1354_;
v___y_1288_ = v___y_1320_;
v___y_1289_ = v___y_1321_;
v___y_1290_ = v___y_1322_;
v___y_1291_ = v___y_1323_;
v___y_1292_ = v___x_1335_;
v___y_1293_ = v_quotContext_x3f_1345_;
v___y_1294_ = v___y_1324_;
v___y_1295_ = v___x_1331_;
v___y_1296_ = v___y_1327_;
v___y_1297_ = v___y_1328_;
v___y_1298_ = v___y_1330_;
v___y_1299_ = v___x_1351_;
goto v___jp_1284_;
}
}
else
{
lean_object* v_a_1357_; lean_object* v___x_1359_; uint8_t v_isShared_1360_; uint8_t v_isSharedCheck_1364_; 
lean_dec(v___x_1354_);
lean_dec_ref_known(v___x_1351_, 10);
lean_dec(v___x_1331_);
lean_dec(v___y_1330_);
lean_dec(v___y_1328_);
lean_dec_ref(v___y_1327_);
lean_dec(v___y_1323_);
lean_dec(v___y_1322_);
lean_dec(v___y_1319_);
lean_dec(v___y_1317_);
v_a_1357_ = lean_ctor_get(v___x_1355_, 0);
v_isSharedCheck_1364_ = !lean_is_exclusive(v___x_1355_);
if (v_isSharedCheck_1364_ == 0)
{
v___x_1359_ = v___x_1355_;
v_isShared_1360_ = v_isSharedCheck_1364_;
goto v_resetjp_1358_;
}
else
{
lean_inc(v_a_1357_);
lean_dec(v___x_1355_);
v___x_1359_ = lean_box(0);
v_isShared_1360_ = v_isSharedCheck_1364_;
goto v_resetjp_1358_;
}
v_resetjp_1358_:
{
lean_object* v___x_1362_; 
if (v_isShared_1360_ == 0)
{
v___x_1362_ = v___x_1359_;
goto v_reusejp_1361_;
}
else
{
lean_object* v_reuseFailAlloc_1363_; 
v_reuseFailAlloc_1363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1363_, 0, v_a_1357_);
v___x_1362_ = v_reuseFailAlloc_1363_;
goto v_reusejp_1361_;
}
v_reusejp_1361_:
{
return v___x_1362_;
}
}
}
}
else
{
lean_dec_ref_known(v___x_1351_, 10);
lean_dec(v___x_1331_);
lean_dec(v___y_1330_);
lean_dec(v___y_1328_);
lean_dec_ref(v___y_1327_);
lean_dec(v___y_1323_);
lean_dec(v___y_1322_);
lean_dec(v___y_1319_);
lean_dec(v___y_1317_);
return v___x_1352_;
}
}
else
{
lean_dec_ref_known(v___x_1337_, 3);
lean_dec(v___x_1331_);
lean_dec(v___y_1330_);
lean_dec(v___y_1328_);
lean_dec_ref(v___y_1327_);
lean_dec(v___y_1323_);
lean_dec(v___y_1322_);
lean_dec(v___y_1319_);
lean_dec(v___y_1317_);
return v___x_1338_;
}
}
v___jp_1365_:
{
lean_object* v___x_1371_; lean_object* v_attrKind_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; uint8_t v___x_1375_; 
v___x_1371_ = lean_unsigned_to_nat(2u);
v_attrKind_1372_ = l_Lean_Syntax_getArg(v_stx_1112_, v___x_1371_);
v___x_1373_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__6));
v___x_1374_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRules___lam__1___closed__9));
lean_inc(v_attrKind_1372_);
v___x_1375_ = l_Lean_Syntax_isOfKind(v_attrKind_1372_, v___x_1374_);
if (v___x_1375_ == 0)
{
lean_object* v___x_1376_; 
lean_dec(v_attrKind_1372_);
lean_dec(v_attrs_x3f_1370_);
lean_dec(v___y_1368_);
lean_dec(v_stx_1112_);
v___x_1376_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabMacroRulesAux_spec__0___redArg();
return v___x_1376_;
}
else
{
lean_object* v___x_1377_; lean_object* v_tk_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; uint8_t v___x_1381_; 
v___x_1377_ = lean_unsigned_to_nat(3u);
v_tk_1378_ = l_Lean_Syntax_getArg(v_stx_1112_, v___x_1377_);
v___x_1379_ = lean_unsigned_to_nat(4u);
v___x_1380_ = l_Lean_Syntax_getArg(v_stx_1112_, v___x_1379_);
lean_inc(v___x_1380_);
v___x_1381_ = l_Lean_Syntax_matchesNull(v___x_1380_, v___x_1232_);
if (v___x_1381_ == 0)
{
lean_object* v___x_1382_; uint8_t v___x_1383_; 
v___x_1382_ = lean_unsigned_to_nat(5u);
lean_inc(v___x_1380_);
v___x_1383_ = l_Lean_Syntax_matchesNull(v___x_1380_, v___x_1382_);
if (v___x_1383_ == 0)
{
lean_object* v___x_1384_; 
lean_dec(v___x_1380_);
lean_dec(v_tk_1378_);
lean_dec(v_attrKind_1372_);
lean_dec(v_attrs_x3f_1370_);
lean_dec(v___y_1368_);
lean_dec(v_stx_1112_);
v___x_1384_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabMacroRulesAux_spec__0___redArg();
return v___x_1384_;
}
else
{
lean_object* v___x_1385_; lean_object* v___x_1386_; uint8_t v___x_1387_; 
v___x_1385_ = l_Lean_Syntax_getArg(v_stx_1112_, v___x_1382_);
lean_dec(v_stx_1112_);
v___x_1386_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRules___lam__1___closed__10));
lean_inc(v___x_1385_);
v___x_1387_ = l_Lean_Syntax_isOfKind(v___x_1385_, v___x_1386_);
if (v___x_1387_ == 0)
{
lean_object* v___x_1388_; 
lean_dec(v___x_1385_);
lean_dec(v___x_1380_);
lean_dec(v_tk_1378_);
lean_dec(v_attrKind_1372_);
lean_dec(v_attrs_x3f_1370_);
lean_dec(v___y_1368_);
v___x_1388_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabMacroRulesAux_spec__0___redArg();
return v___x_1388_;
}
else
{
lean_object* v_kind_1389_; lean_object* v___x_1390_; uint8_t v___x_1391_; 
v_kind_1389_ = l_Lean_Syntax_getArg(v___x_1380_, v___x_1377_);
lean_dec(v___x_1380_);
v___x_1390_ = l_Lean_Syntax_getArg(v___x_1385_, v___x_1232_);
lean_dec(v___x_1385_);
lean_inc(v___x_1390_);
v___x_1391_ = l_Lean_Syntax_matchesNull(v___x_1390_, v___y_1369_);
if (v___x_1391_ == 0)
{
lean_object* v___x_1392_; lean_object* v_alts_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___f_1403_; 
v___x_1392_ = l_Lean_Syntax_getArgs(v___x_1390_);
lean_dec(v___x_1390_);
v_alts_1393_ = l_unsafeCast___redArg(v___x_1392_);
lean_dec_ref(v___x_1392_);
v___x_1394_ = l_unsafeCast___redArg(v_alts_1393_);
v___x_1395_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__11));
v___x_1396_ = lean_box(2);
v___x_1397_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1397_, 0, v___x_1396_);
lean_ctor_set(v___x_1397_, 1, v___x_1395_);
lean_ctor_set(v___x_1397_, 2, v___x_1394_);
v___x_1398_ = lean_mk_empty_array_with_capacity(v___x_1371_);
lean_inc(v_tk_1378_);
v___x_1399_ = lean_array_push(v___x_1398_, v_tk_1378_);
v___x_1400_ = lean_array_push(v___x_1399_, v___x_1397_);
v___x_1401_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1401_, 0, v___x_1396_);
lean_ctor_set(v___x_1401_, 1, v___x_1395_);
lean_ctor_set(v___x_1401_, 2, v___x_1400_);
v___x_1402_ = l_Lean_TSyntax_getId(v_kind_1389_);
lean_dec(v_kind_1389_);
lean_inc(v_attrKind_1372_);
v___f_1403_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabMacroRules___lam__0___boxed), 10, 7);
lean_closure_set(v___f_1403_, 0, v___x_1401_);
lean_closure_set(v___f_1403_, 1, v___x_1402_);
lean_closure_set(v___f_1403_, 2, v___y_1368_);
lean_closure_set(v___f_1403_, 3, v_attrs_x3f_1370_);
lean_closure_set(v___f_1403_, 4, v_attrKind_1372_);
lean_closure_set(v___f_1403_, 5, v_tk_1378_);
lean_closure_set(v___f_1403_, 6, v_alts_1393_);
if (v___x_1375_ == 0)
{
lean_dec(v_attrKind_1372_);
v___y_1135_ = v___f_1403_;
v___y_1136_ = v___x_1387_;
v___y_1137_ = v___y_1367_;
v___y_1138_ = v___x_1391_;
v___y_1139_ = v___y_1366_;
v___y_1140_ = v___x_1375_;
goto v___jp_1134_;
}
else
{
lean_object* v___x_1404_; uint8_t v___x_1405_; 
v___x_1404_ = l_Lean_Syntax_getArg(v_attrKind_1372_, v___x_1232_);
lean_dec(v_attrKind_1372_);
lean_inc(v___x_1404_);
v___x_1405_ = l_Lean_Syntax_matchesNull(v___x_1404_, v___y_1369_);
if (v___x_1405_ == 0)
{
lean_dec(v___x_1404_);
v___y_1135_ = v___f_1403_;
v___y_1136_ = v___x_1387_;
v___y_1137_ = v___y_1367_;
v___y_1138_ = v___x_1391_;
v___y_1139_ = v___y_1366_;
v___y_1140_ = v___x_1405_;
goto v___jp_1134_;
}
else
{
lean_object* v___x_1406_; lean_object* v___x_1407_; uint8_t v___x_1408_; 
v___x_1406_ = l_Lean_Syntax_getArg(v___x_1404_, v___x_1232_);
lean_dec(v___x_1404_);
v___x_1407_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRules___lam__1___closed__12));
v___x_1408_ = l_Lean_Syntax_isOfKind(v___x_1406_, v___x_1407_);
if (v___x_1408_ == 0)
{
v___y_1135_ = v___f_1403_;
v___y_1136_ = v___x_1387_;
v___y_1137_ = v___y_1367_;
v___y_1138_ = v___x_1391_;
v___y_1139_ = v___y_1366_;
v___y_1140_ = v___x_1408_;
goto v___jp_1134_;
}
else
{
lean_object* v___x_1409_; 
v___x_1409_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__0___redArg(v___f_1403_, v___x_1391_, v___y_1367_, v___y_1366_);
return v___x_1409_;
}
}
}
}
else
{
lean_object* v___x_1410_; lean_object* v___x_1411_; uint8_t v___x_1412_; 
v___x_1410_ = l_Lean_Syntax_getArg(v___x_1390_, v___x_1232_);
v___x_1411_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__8));
lean_inc(v___x_1410_);
v___x_1412_ = l_Lean_Syntax_isOfKind(v___x_1410_, v___x_1411_);
if (v___x_1412_ == 0)
{
lean_object* v___x_1413_; lean_object* v_alts_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___f_1424_; 
lean_dec(v___x_1410_);
v___x_1413_ = l_Lean_Syntax_getArgs(v___x_1390_);
lean_dec(v___x_1390_);
v_alts_1414_ = l_unsafeCast___redArg(v___x_1413_);
lean_dec_ref(v___x_1413_);
v___x_1415_ = l_unsafeCast___redArg(v_alts_1414_);
v___x_1416_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__11));
v___x_1417_ = lean_box(2);
v___x_1418_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1418_, 0, v___x_1417_);
lean_ctor_set(v___x_1418_, 1, v___x_1416_);
lean_ctor_set(v___x_1418_, 2, v___x_1415_);
v___x_1419_ = lean_mk_empty_array_with_capacity(v___x_1371_);
lean_inc(v_tk_1378_);
v___x_1420_ = lean_array_push(v___x_1419_, v_tk_1378_);
v___x_1421_ = lean_array_push(v___x_1420_, v___x_1418_);
v___x_1422_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1422_, 0, v___x_1417_);
lean_ctor_set(v___x_1422_, 1, v___x_1416_);
lean_ctor_set(v___x_1422_, 2, v___x_1421_);
v___x_1423_ = l_Lean_TSyntax_getId(v_kind_1389_);
lean_dec(v_kind_1389_);
lean_inc(v_attrKind_1372_);
v___f_1424_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabMacroRules___lam__0___boxed), 10, 7);
lean_closure_set(v___f_1424_, 0, v___x_1422_);
lean_closure_set(v___f_1424_, 1, v___x_1423_);
lean_closure_set(v___f_1424_, 2, v___y_1368_);
lean_closure_set(v___f_1424_, 3, v_attrs_x3f_1370_);
lean_closure_set(v___f_1424_, 4, v_attrKind_1372_);
lean_closure_set(v___f_1424_, 5, v_tk_1378_);
lean_closure_set(v___f_1424_, 6, v_alts_1414_);
if (v___x_1375_ == 0)
{
lean_dec(v_attrKind_1372_);
v___y_1144_ = v___x_1412_;
v___y_1145_ = v___y_1367_;
v___y_1146_ = v___x_1391_;
v___y_1147_ = v___f_1424_;
v___y_1148_ = v___y_1366_;
v___y_1149_ = v___x_1375_;
goto v___jp_1143_;
}
else
{
lean_object* v___x_1425_; uint8_t v___x_1426_; 
v___x_1425_ = l_Lean_Syntax_getArg(v_attrKind_1372_, v___x_1232_);
lean_dec(v_attrKind_1372_);
lean_inc(v___x_1425_);
v___x_1426_ = l_Lean_Syntax_matchesNull(v___x_1425_, v___y_1369_);
if (v___x_1426_ == 0)
{
lean_dec(v___x_1425_);
v___y_1144_ = v___x_1412_;
v___y_1145_ = v___y_1367_;
v___y_1146_ = v___x_1391_;
v___y_1147_ = v___f_1424_;
v___y_1148_ = v___y_1366_;
v___y_1149_ = v___x_1426_;
goto v___jp_1143_;
}
else
{
lean_object* v___x_1427_; lean_object* v___x_1428_; uint8_t v___x_1429_; 
v___x_1427_ = l_Lean_Syntax_getArg(v___x_1425_, v___x_1232_);
lean_dec(v___x_1425_);
v___x_1428_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRules___lam__1___closed__12));
v___x_1429_ = l_Lean_Syntax_isOfKind(v___x_1427_, v___x_1428_);
if (v___x_1429_ == 0)
{
v___y_1144_ = v___x_1412_;
v___y_1145_ = v___y_1367_;
v___y_1146_ = v___x_1391_;
v___y_1147_ = v___f_1424_;
v___y_1148_ = v___y_1366_;
v___y_1149_ = v___x_1429_;
goto v___jp_1143_;
}
else
{
lean_object* v___x_1430_; 
v___x_1430_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__0___redArg(v___f_1424_, v___x_1412_, v___y_1367_, v___y_1366_);
return v___x_1430_;
}
}
}
}
else
{
lean_object* v___x_1431_; uint8_t v___x_1432_; 
v___x_1431_ = l_Lean_Syntax_getArg(v___x_1410_, v___y_1369_);
lean_inc(v___x_1431_);
v___x_1432_ = l_Lean_Syntax_matchesNull(v___x_1431_, v___y_1369_);
if (v___x_1432_ == 0)
{
lean_object* v___x_1433_; lean_object* v_alts_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___f_1444_; 
lean_dec(v___x_1431_);
lean_dec(v___x_1410_);
v___x_1433_ = l_Lean_Syntax_getArgs(v___x_1390_);
lean_dec(v___x_1390_);
v_alts_1434_ = l_unsafeCast___redArg(v___x_1433_);
lean_dec_ref(v___x_1433_);
v___x_1435_ = l_unsafeCast___redArg(v_alts_1434_);
v___x_1436_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__11));
v___x_1437_ = lean_box(2);
v___x_1438_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1438_, 0, v___x_1437_);
lean_ctor_set(v___x_1438_, 1, v___x_1436_);
lean_ctor_set(v___x_1438_, 2, v___x_1435_);
v___x_1439_ = lean_mk_empty_array_with_capacity(v___x_1371_);
lean_inc(v_tk_1378_);
v___x_1440_ = lean_array_push(v___x_1439_, v_tk_1378_);
v___x_1441_ = lean_array_push(v___x_1440_, v___x_1438_);
v___x_1442_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1442_, 0, v___x_1437_);
lean_ctor_set(v___x_1442_, 1, v___x_1436_);
lean_ctor_set(v___x_1442_, 2, v___x_1441_);
v___x_1443_ = l_Lean_TSyntax_getId(v_kind_1389_);
lean_dec(v_kind_1389_);
lean_inc(v_attrKind_1372_);
v___f_1444_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabMacroRules___lam__0___boxed), 10, 7);
lean_closure_set(v___f_1444_, 0, v___x_1442_);
lean_closure_set(v___f_1444_, 1, v___x_1443_);
lean_closure_set(v___f_1444_, 2, v___y_1368_);
lean_closure_set(v___f_1444_, 3, v_attrs_x3f_1370_);
lean_closure_set(v___f_1444_, 4, v_attrKind_1372_);
lean_closure_set(v___f_1444_, 5, v_tk_1378_);
lean_closure_set(v___f_1444_, 6, v_alts_1434_);
if (v___x_1375_ == 0)
{
lean_dec(v_attrKind_1372_);
v___y_1126_ = v___x_1412_;
v___y_1127_ = v___y_1367_;
v___y_1128_ = v___x_1432_;
v___y_1129_ = v___f_1444_;
v___y_1130_ = v___y_1366_;
v___y_1131_ = v___x_1375_;
goto v___jp_1125_;
}
else
{
lean_object* v___x_1445_; uint8_t v___x_1446_; 
v___x_1445_ = l_Lean_Syntax_getArg(v_attrKind_1372_, v___x_1232_);
lean_dec(v_attrKind_1372_);
lean_inc(v___x_1445_);
v___x_1446_ = l_Lean_Syntax_matchesNull(v___x_1445_, v___y_1369_);
if (v___x_1446_ == 0)
{
lean_dec(v___x_1445_);
v___y_1126_ = v___x_1412_;
v___y_1127_ = v___y_1367_;
v___y_1128_ = v___x_1432_;
v___y_1129_ = v___f_1444_;
v___y_1130_ = v___y_1366_;
v___y_1131_ = v___x_1446_;
goto v___jp_1125_;
}
else
{
lean_object* v___x_1447_; lean_object* v___x_1448_; uint8_t v___x_1449_; 
v___x_1447_ = l_Lean_Syntax_getArg(v___x_1445_, v___x_1232_);
lean_dec(v___x_1445_);
v___x_1448_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRules___lam__1___closed__12));
v___x_1449_ = l_Lean_Syntax_isOfKind(v___x_1447_, v___x_1448_);
if (v___x_1449_ == 0)
{
v___y_1126_ = v___x_1412_;
v___y_1127_ = v___y_1367_;
v___y_1128_ = v___x_1432_;
v___y_1129_ = v___f_1444_;
v___y_1130_ = v___y_1366_;
v___y_1131_ = v___x_1449_;
goto v___jp_1125_;
}
else
{
lean_object* v___x_1450_; 
v___x_1450_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__0___redArg(v___f_1444_, v___x_1432_, v___y_1367_, v___y_1366_);
return v___x_1450_;
}
}
}
}
else
{
lean_object* v___x_1451_; uint8_t v___x_1452_; 
v___x_1451_ = l_Lean_Syntax_getArg(v___x_1431_, v___x_1232_);
lean_dec(v___x_1431_);
lean_inc(v___x_1451_);
v___x_1452_ = l_Lean_Syntax_matchesNull(v___x_1451_, v___y_1369_);
if (v___x_1452_ == 0)
{
lean_object* v___x_1453_; lean_object* v_alts_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___f_1464_; 
lean_dec(v___x_1451_);
lean_dec(v___x_1410_);
v___x_1453_ = l_Lean_Syntax_getArgs(v___x_1390_);
lean_dec(v___x_1390_);
v_alts_1454_ = l_unsafeCast___redArg(v___x_1453_);
lean_dec_ref(v___x_1453_);
v___x_1455_ = l_unsafeCast___redArg(v_alts_1454_);
v___x_1456_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__11));
v___x_1457_ = lean_box(2);
v___x_1458_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1458_, 0, v___x_1457_);
lean_ctor_set(v___x_1458_, 1, v___x_1456_);
lean_ctor_set(v___x_1458_, 2, v___x_1455_);
v___x_1459_ = lean_mk_empty_array_with_capacity(v___x_1371_);
lean_inc(v_tk_1378_);
v___x_1460_ = lean_array_push(v___x_1459_, v_tk_1378_);
v___x_1461_ = lean_array_push(v___x_1460_, v___x_1458_);
v___x_1462_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1462_, 0, v___x_1457_);
lean_ctor_set(v___x_1462_, 1, v___x_1456_);
lean_ctor_set(v___x_1462_, 2, v___x_1461_);
v___x_1463_ = l_Lean_TSyntax_getId(v_kind_1389_);
lean_dec(v_kind_1389_);
lean_inc(v_attrKind_1372_);
v___f_1464_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabMacroRules___lam__0___boxed), 10, 7);
lean_closure_set(v___f_1464_, 0, v___x_1462_);
lean_closure_set(v___f_1464_, 1, v___x_1463_);
lean_closure_set(v___f_1464_, 2, v___y_1368_);
lean_closure_set(v___f_1464_, 3, v_attrs_x3f_1370_);
lean_closure_set(v___f_1464_, 4, v_attrKind_1372_);
lean_closure_set(v___f_1464_, 5, v_tk_1378_);
lean_closure_set(v___f_1464_, 6, v_alts_1454_);
if (v___x_1375_ == 0)
{
lean_dec(v_attrKind_1372_);
v___y_1153_ = v___f_1464_;
v___y_1154_ = v___y_1367_;
v___y_1155_ = v___x_1432_;
v___y_1156_ = v___x_1452_;
v___y_1157_ = v___y_1366_;
v___y_1158_ = v___x_1375_;
goto v___jp_1152_;
}
else
{
lean_object* v___x_1465_; uint8_t v___x_1466_; 
v___x_1465_ = l_Lean_Syntax_getArg(v_attrKind_1372_, v___x_1232_);
lean_dec(v_attrKind_1372_);
lean_inc(v___x_1465_);
v___x_1466_ = l_Lean_Syntax_matchesNull(v___x_1465_, v___y_1369_);
if (v___x_1466_ == 0)
{
lean_dec(v___x_1465_);
v___y_1153_ = v___f_1464_;
v___y_1154_ = v___y_1367_;
v___y_1155_ = v___x_1432_;
v___y_1156_ = v___x_1452_;
v___y_1157_ = v___y_1366_;
v___y_1158_ = v___x_1466_;
goto v___jp_1152_;
}
else
{
lean_object* v___x_1467_; lean_object* v___x_1468_; uint8_t v___x_1469_; 
v___x_1467_ = l_Lean_Syntax_getArg(v___x_1465_, v___x_1232_);
lean_dec(v___x_1465_);
v___x_1468_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRules___lam__1___closed__12));
v___x_1469_ = l_Lean_Syntax_isOfKind(v___x_1467_, v___x_1468_);
if (v___x_1469_ == 0)
{
v___y_1153_ = v___f_1464_;
v___y_1154_ = v___y_1367_;
v___y_1155_ = v___x_1432_;
v___y_1156_ = v___x_1452_;
v___y_1157_ = v___y_1366_;
v___y_1158_ = v___x_1469_;
goto v___jp_1152_;
}
else
{
lean_object* v___x_1470_; 
v___x_1470_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__0___redArg(v___f_1464_, v___x_1452_, v___y_1367_, v___y_1366_);
return v___x_1470_;
}
}
}
}
else
{
lean_object* v___x_1471_; 
v___x_1471_ = l_Lean_Syntax_getArg(v___x_1451_, v___x_1232_);
lean_dec(v___x_1451_);
if (v___x_1381_ == 0)
{
lean_object* v___x_1472_; uint8_t v___x_1473_; 
v___x_1472_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRules___lam__1___closed__14));
lean_inc(v___x_1471_);
v___x_1473_ = l_Lean_Syntax_isOfKind(v___x_1471_, v___x_1472_);
if (v___x_1473_ == 0)
{
lean_object* v___x_1474_; lean_object* v_alts_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___f_1485_; 
lean_dec(v___x_1471_);
lean_dec(v___x_1410_);
v___x_1474_ = l_Lean_Syntax_getArgs(v___x_1390_);
lean_dec(v___x_1390_);
v_alts_1475_ = l_unsafeCast___redArg(v___x_1474_);
lean_dec_ref(v___x_1474_);
v___x_1476_ = l_unsafeCast___redArg(v_alts_1475_);
v___x_1477_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__11));
v___x_1478_ = lean_box(2);
v___x_1479_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1479_, 0, v___x_1478_);
lean_ctor_set(v___x_1479_, 1, v___x_1477_);
lean_ctor_set(v___x_1479_, 2, v___x_1476_);
v___x_1480_ = lean_mk_empty_array_with_capacity(v___x_1371_);
lean_inc(v_tk_1378_);
v___x_1481_ = lean_array_push(v___x_1480_, v_tk_1378_);
v___x_1482_ = lean_array_push(v___x_1481_, v___x_1479_);
v___x_1483_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1483_, 0, v___x_1478_);
lean_ctor_set(v___x_1483_, 1, v___x_1477_);
lean_ctor_set(v___x_1483_, 2, v___x_1482_);
v___x_1484_ = l_Lean_TSyntax_getId(v_kind_1389_);
lean_dec(v_kind_1389_);
lean_inc(v_attrKind_1372_);
v___f_1485_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabMacroRules___lam__0___boxed), 10, 7);
lean_closure_set(v___f_1485_, 0, v___x_1483_);
lean_closure_set(v___f_1485_, 1, v___x_1484_);
lean_closure_set(v___f_1485_, 2, v___y_1368_);
lean_closure_set(v___f_1485_, 3, v_attrs_x3f_1370_);
lean_closure_set(v___f_1485_, 4, v_attrKind_1372_);
lean_closure_set(v___f_1485_, 5, v_tk_1378_);
lean_closure_set(v___f_1485_, 6, v_alts_1475_);
if (v___x_1375_ == 0)
{
lean_dec(v_attrKind_1372_);
v___y_1117_ = v___y_1367_;
v___y_1118_ = v___x_1381_;
v___y_1119_ = v___f_1485_;
v___y_1120_ = v___y_1366_;
v___y_1121_ = v___x_1452_;
v___y_1122_ = v___x_1375_;
goto v___jp_1116_;
}
else
{
lean_object* v___x_1486_; uint8_t v___x_1487_; 
v___x_1486_ = l_Lean_Syntax_getArg(v_attrKind_1372_, v___x_1232_);
lean_dec(v_attrKind_1372_);
lean_inc(v___x_1486_);
v___x_1487_ = l_Lean_Syntax_matchesNull(v___x_1486_, v___y_1369_);
if (v___x_1487_ == 0)
{
lean_dec(v___x_1486_);
v___y_1117_ = v___y_1367_;
v___y_1118_ = v___x_1381_;
v___y_1119_ = v___f_1485_;
v___y_1120_ = v___y_1366_;
v___y_1121_ = v___x_1452_;
v___y_1122_ = v___x_1487_;
goto v___jp_1116_;
}
else
{
lean_object* v___x_1488_; lean_object* v___x_1489_; uint8_t v___x_1490_; 
v___x_1488_ = l_Lean_Syntax_getArg(v___x_1486_, v___x_1232_);
lean_dec(v___x_1486_);
v___x_1489_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRules___lam__1___closed__12));
v___x_1490_ = l_Lean_Syntax_isOfKind(v___x_1488_, v___x_1489_);
if (v___x_1490_ == 0)
{
v___y_1117_ = v___y_1367_;
v___y_1118_ = v___x_1381_;
v___y_1119_ = v___f_1485_;
v___y_1120_ = v___y_1366_;
v___y_1121_ = v___x_1452_;
v___y_1122_ = v___x_1490_;
goto v___jp_1116_;
}
else
{
lean_object* v___x_1491_; 
v___x_1491_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__0___redArg(v___f_1485_, v___x_1381_, v___y_1367_, v___y_1366_);
return v___x_1491_;
}
}
}
}
else
{
lean_dec(v___x_1390_);
v___y_1317_ = v_attrs_x3f_1370_;
v___y_1318_ = v___x_1410_;
v___y_1319_ = v_kind_1389_;
v___y_1320_ = v___x_1381_;
v___y_1321_ = v___y_1369_;
v___y_1322_ = v_attrKind_1372_;
v___y_1323_ = v___y_1368_;
v___y_1324_ = v___y_1366_;
v___y_1325_ = v___x_1371_;
v___y_1326_ = v___y_1367_;
v___y_1327_ = v___x_1373_;
v___y_1328_ = v___x_1471_;
v___y_1329_ = v___x_1377_;
v___y_1330_ = v_tk_1378_;
goto v___jp_1316_;
}
}
else
{
lean_dec(v___x_1390_);
v___y_1317_ = v_attrs_x3f_1370_;
v___y_1318_ = v___x_1410_;
v___y_1319_ = v_kind_1389_;
v___y_1320_ = v___x_1381_;
v___y_1321_ = v___y_1369_;
v___y_1322_ = v_attrKind_1372_;
v___y_1323_ = v___y_1368_;
v___y_1324_ = v___y_1366_;
v___y_1325_ = v___x_1371_;
v___y_1326_ = v___y_1367_;
v___y_1327_ = v___x_1373_;
v___y_1328_ = v___x_1471_;
v___y_1329_ = v___x_1377_;
v___y_1330_ = v_tk_1378_;
goto v___jp_1316_;
}
}
}
}
}
}
}
}
else
{
lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; uint8_t v___x_1495_; 
lean_dec(v___x_1380_);
v___x_1492_ = lean_unsigned_to_nat(5u);
v___x_1493_ = l_Lean_Syntax_getArg(v_stx_1112_, v___x_1492_);
lean_dec(v_stx_1112_);
v___x_1494_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRules___lam__1___closed__10));
lean_inc(v___x_1493_);
v___x_1495_ = l_Lean_Syntax_isOfKind(v___x_1493_, v___x_1494_);
if (v___x_1495_ == 0)
{
lean_object* v___x_1496_; 
lean_dec(v___x_1493_);
lean_dec(v_tk_1378_);
lean_dec(v_attrKind_1372_);
lean_dec(v_attrs_x3f_1370_);
lean_dec(v___y_1368_);
v___x_1496_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabMacroRulesAux_spec__0___redArg();
return v___x_1496_;
}
else
{
lean_object* v___f_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v_alts_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; 
v___f_1497_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabMacroRules___lam__5___boxed), 15, 10);
lean_closure_set(v___f_1497_, 0, v___x_1494_);
lean_closure_set(v___f_1497_, 1, v___x_1164_);
lean_closure_set(v___f_1497_, 2, v_attrKind_1372_);
lean_closure_set(v___f_1497_, 3, v___x_1163_);
lean_closure_set(v___f_1497_, 4, v___x_1232_);
lean_closure_set(v___f_1497_, 5, v_attrs_x3f_1370_);
lean_closure_set(v___f_1497_, 6, v___x_1161_);
lean_closure_set(v___f_1497_, 7, v___x_1162_);
lean_closure_set(v___f_1497_, 8, v___x_1373_);
lean_closure_set(v___f_1497_, 9, v___y_1368_);
v___x_1498_ = l_Lean_Syntax_getArg(v___x_1493_, v___x_1232_);
lean_dec(v___x_1493_);
v___x_1499_ = l_Lean_Syntax_getArgs(v___x_1498_);
lean_dec(v___x_1498_);
v_alts_1500_ = l_unsafeCast___redArg(v___x_1499_);
lean_dec_ref(v___x_1499_);
v___x_1501_ = l_unsafeCast___redArg(v_alts_1500_);
v___x_1502_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__11));
v___x_1503_ = lean_box(2);
v___x_1504_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1504_, 0, v___x_1503_);
lean_ctor_set(v___x_1504_, 1, v___x_1502_);
lean_ctor_set(v___x_1504_, 2, v___x_1501_);
v___x_1505_ = lean_mk_empty_array_with_capacity(v___x_1371_);
v___x_1506_ = lean_array_push(v___x_1505_, v_tk_1378_);
v___x_1507_ = lean_array_push(v___x_1506_, v___x_1504_);
v___x_1508_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1508_, 0, v___x_1503_);
lean_ctor_set(v___x_1508_, 1, v___x_1502_);
lean_ctor_set(v___x_1508_, 2, v___x_1507_);
v___x_1509_ = l_Lean_Elab_Command_getRef___redArg(v___y_1367_);
if (lean_obj_tag(v___x_1509_) == 0)
{
lean_object* v_a_1510_; lean_object* v_fileName_1511_; lean_object* v_fileMap_1512_; lean_object* v_currRecDepth_1513_; lean_object* v_cmdPos_1514_; lean_object* v_macroStack_1515_; lean_object* v_quotContext_x3f_1516_; lean_object* v_currMacroScope_1517_; lean_object* v_snap_x3f_1518_; lean_object* v_cancelTk_x3f_1519_; uint8_t v_suppressElabErrors_1520_; lean_object* v_ref_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; 
v_a_1510_ = lean_ctor_get(v___x_1509_, 0);
lean_inc(v_a_1510_);
lean_dec_ref_known(v___x_1509_, 1);
v_fileName_1511_ = lean_ctor_get(v___y_1367_, 0);
v_fileMap_1512_ = lean_ctor_get(v___y_1367_, 1);
v_currRecDepth_1513_ = lean_ctor_get(v___y_1367_, 2);
v_cmdPos_1514_ = lean_ctor_get(v___y_1367_, 3);
v_macroStack_1515_ = lean_ctor_get(v___y_1367_, 4);
v_quotContext_x3f_1516_ = lean_ctor_get(v___y_1367_, 5);
v_currMacroScope_1517_ = lean_ctor_get(v___y_1367_, 6);
v_snap_x3f_1518_ = lean_ctor_get(v___y_1367_, 8);
v_cancelTk_x3f_1519_ = lean_ctor_get(v___y_1367_, 9);
v_suppressElabErrors_1520_ = lean_ctor_get_uint8(v___y_1367_, sizeof(void*)*10);
v_ref_1521_ = l_Lean_replaceRef(v___x_1508_, v_a_1510_);
lean_dec(v_a_1510_);
lean_dec_ref_known(v___x_1508_, 3);
lean_inc(v_cancelTk_x3f_1519_);
lean_inc(v_snap_x3f_1518_);
lean_inc(v_currMacroScope_1517_);
lean_inc(v_quotContext_x3f_1516_);
lean_inc(v_macroStack_1515_);
lean_inc(v_cmdPos_1514_);
lean_inc(v_currRecDepth_1513_);
lean_inc_ref(v_fileMap_1512_);
lean_inc_ref(v_fileName_1511_);
v___x_1522_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v___x_1522_, 0, v_fileName_1511_);
lean_ctor_set(v___x_1522_, 1, v_fileMap_1512_);
lean_ctor_set(v___x_1522_, 2, v_currRecDepth_1513_);
lean_ctor_set(v___x_1522_, 3, v_cmdPos_1514_);
lean_ctor_set(v___x_1522_, 4, v_macroStack_1515_);
lean_ctor_set(v___x_1522_, 5, v_quotContext_x3f_1516_);
lean_ctor_set(v___x_1522_, 6, v_currMacroScope_1517_);
lean_ctor_set(v___x_1522_, 7, v_ref_1521_);
lean_ctor_set(v___x_1522_, 8, v_snap_x3f_1518_);
lean_ctor_set(v___x_1522_, 9, v_cancelTk_x3f_1519_);
lean_ctor_set_uint8(v___x_1522_, sizeof(void*)*10, v_suppressElabErrors_1520_);
v___x_1523_ = l_Lean_Elab_Command_expandNoKindMacroRulesAux(v_alts_1500_, v___x_1163_, v___f_1497_, v___x_1522_, v___y_1366_);
lean_dec_ref_known(v___x_1522_, 10);
lean_dec(v_alts_1500_);
if (lean_obj_tag(v___x_1523_) == 0)
{
lean_object* v_a_1524_; lean_object* v___x_1526_; uint8_t v_isShared_1527_; uint8_t v_isSharedCheck_1531_; 
v_a_1524_ = lean_ctor_get(v___x_1523_, 0);
v_isSharedCheck_1531_ = !lean_is_exclusive(v___x_1523_);
if (v_isSharedCheck_1531_ == 0)
{
v___x_1526_ = v___x_1523_;
v_isShared_1527_ = v_isSharedCheck_1531_;
goto v_resetjp_1525_;
}
else
{
lean_inc(v_a_1524_);
lean_dec(v___x_1523_);
v___x_1526_ = lean_box(0);
v_isShared_1527_ = v_isSharedCheck_1531_;
goto v_resetjp_1525_;
}
v_resetjp_1525_:
{
lean_object* v___x_1529_; 
if (v_isShared_1527_ == 0)
{
v___x_1529_ = v___x_1526_;
goto v_reusejp_1528_;
}
else
{
lean_object* v_reuseFailAlloc_1530_; 
v_reuseFailAlloc_1530_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1530_, 0, v_a_1524_);
v___x_1529_ = v_reuseFailAlloc_1530_;
goto v_reusejp_1528_;
}
v_reusejp_1528_:
{
return v___x_1529_;
}
}
}
else
{
lean_object* v_a_1532_; lean_object* v___x_1534_; uint8_t v_isShared_1535_; uint8_t v_isSharedCheck_1539_; 
v_a_1532_ = lean_ctor_get(v___x_1523_, 0);
v_isSharedCheck_1539_ = !lean_is_exclusive(v___x_1523_);
if (v_isSharedCheck_1539_ == 0)
{
v___x_1534_ = v___x_1523_;
v_isShared_1535_ = v_isSharedCheck_1539_;
goto v_resetjp_1533_;
}
else
{
lean_inc(v_a_1532_);
lean_dec(v___x_1523_);
v___x_1534_ = lean_box(0);
v_isShared_1535_ = v_isSharedCheck_1539_;
goto v_resetjp_1533_;
}
v_resetjp_1533_:
{
lean_object* v___x_1537_; 
if (v_isShared_1535_ == 0)
{
v___x_1537_ = v___x_1534_;
goto v_reusejp_1536_;
}
else
{
lean_object* v_reuseFailAlloc_1538_; 
v_reuseFailAlloc_1538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1538_, 0, v_a_1532_);
v___x_1537_ = v_reuseFailAlloc_1538_;
goto v_reusejp_1536_;
}
v_reusejp_1536_:
{
return v___x_1537_;
}
}
}
}
else
{
lean_dec_ref_known(v___x_1508_, 3);
lean_dec(v_alts_1500_);
lean_dec_ref(v___f_1497_);
return v___x_1509_;
}
}
}
}
}
v___jp_1540_:
{
lean_object* v___x_1544_; lean_object* v___x_1545_; uint8_t v___x_1546_; 
v___x_1544_ = lean_unsigned_to_nat(1u);
v___x_1545_ = l_Lean_Syntax_getArg(v_stx_1112_, v___x_1544_);
v___x_1546_ = l_Lean_Syntax_isNone(v___x_1545_);
if (v___x_1546_ == 0)
{
uint8_t v___x_1547_; 
lean_inc(v___x_1545_);
v___x_1547_ = l_Lean_Syntax_matchesNull(v___x_1545_, v___x_1544_);
if (v___x_1547_ == 0)
{
lean_object* v___x_1548_; 
lean_dec(v___x_1545_);
lean_dec(v_doc_x3f_1541_);
lean_dec(v_stx_1112_);
v___x_1548_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabMacroRulesAux_spec__0___redArg();
return v___x_1548_;
}
else
{
lean_object* v___x_1549_; lean_object* v___x_1550_; uint8_t v___x_1551_; 
v___x_1549_ = l_Lean_Syntax_getArg(v___x_1545_, v___x_1232_);
lean_dec(v___x_1545_);
v___x_1550_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRules___lam__1___closed__15));
lean_inc(v___x_1549_);
v___x_1551_ = l_Lean_Syntax_isOfKind(v___x_1549_, v___x_1550_);
if (v___x_1551_ == 0)
{
lean_object* v___x_1552_; 
lean_dec(v___x_1549_);
lean_dec(v_doc_x3f_1541_);
lean_dec(v_stx_1112_);
v___x_1552_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabMacroRulesAux_spec__0___redArg();
return v___x_1552_;
}
else
{
lean_object* v___x_1553_; lean_object* v_attrs_x3f_1554_; lean_object* v___x_1555_; 
v___x_1553_ = l_Lean_Syntax_getArg(v___x_1549_, v___x_1544_);
lean_dec(v___x_1549_);
v_attrs_x3f_1554_ = l_Lean_Syntax_getArgs(v___x_1553_);
lean_dec(v___x_1553_);
v___x_1555_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1555_, 0, v_attrs_x3f_1554_);
v___y_1366_ = v___y_1543_;
v___y_1367_ = v___y_1542_;
v___y_1368_ = v_doc_x3f_1541_;
v___y_1369_ = v___x_1544_;
v_attrs_x3f_1370_ = v___x_1555_;
goto v___jp_1365_;
}
}
}
else
{
lean_object* v___x_1556_; 
lean_dec(v___x_1545_);
v___x_1556_ = lean_box(0);
v___y_1366_ = v___y_1543_;
v___y_1367_ = v___y_1542_;
v___y_1368_ = v_doc_x3f_1541_;
v___y_1369_ = v___x_1544_;
v_attrs_x3f_1370_ = v___x_1556_;
goto v___jp_1365_;
}
}
}
v___jp_1116_:
{
if (v___y_1122_ == 0)
{
lean_object* v___x_1123_; 
v___x_1123_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__0___redArg(v___y_1119_, v___y_1121_, v___y_1117_, v___y_1120_);
return v___x_1123_;
}
else
{
lean_object* v___x_1124_; 
v___x_1124_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__0___redArg(v___y_1119_, v___y_1118_, v___y_1117_, v___y_1120_);
return v___x_1124_;
}
}
v___jp_1125_:
{
if (v___y_1131_ == 0)
{
lean_object* v___x_1132_; 
v___x_1132_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__0___redArg(v___y_1129_, v___y_1126_, v___y_1127_, v___y_1130_);
return v___x_1132_;
}
else
{
lean_object* v___x_1133_; 
v___x_1133_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__0___redArg(v___y_1129_, v___y_1128_, v___y_1127_, v___y_1130_);
return v___x_1133_;
}
}
v___jp_1134_:
{
if (v___y_1140_ == 0)
{
lean_object* v___x_1141_; 
v___x_1141_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__0___redArg(v___y_1135_, v___y_1136_, v___y_1137_, v___y_1139_);
return v___x_1141_;
}
else
{
lean_object* v___x_1142_; 
v___x_1142_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__0___redArg(v___y_1135_, v___y_1138_, v___y_1137_, v___y_1139_);
return v___x_1142_;
}
}
v___jp_1143_:
{
if (v___y_1149_ == 0)
{
lean_object* v___x_1150_; 
v___x_1150_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__0___redArg(v___y_1147_, v___y_1146_, v___y_1145_, v___y_1148_);
return v___x_1150_;
}
else
{
lean_object* v___x_1151_; 
v___x_1151_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__0___redArg(v___y_1147_, v___y_1144_, v___y_1145_, v___y_1148_);
return v___x_1151_;
}
}
v___jp_1152_:
{
if (v___y_1158_ == 0)
{
lean_object* v___x_1159_; 
v___x_1159_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__0___redArg(v___y_1153_, v___y_1155_, v___y_1154_, v___y_1157_);
return v___x_1159_;
}
else
{
lean_object* v___x_1160_; 
v___x_1160_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__0___redArg(v___y_1153_, v___y_1156_, v___y_1154_, v___y_1157_);
return v___x_1160_;
}
}
v___jp_1166_:
{
lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; 
lean_inc_ref_n(v___y_1175_, 3);
v___x_1182_ = l_Array_append___redArg(v___y_1175_, v___y_1181_);
lean_dec_ref(v___y_1181_);
lean_inc_n(v___y_1172_, 6);
lean_inc_n(v___y_1174_, 17);
v___x_1183_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1183_, 0, v___y_1174_);
lean_ctor_set(v___x_1183_, 1, v___y_1172_);
lean_ctor_set(v___x_1183_, 2, v___x_1182_);
v___x_1184_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__0));
lean_inc_ref_n(v___y_1176_, 2);
v___x_1185_ = l_Lean_Name_mkStr4(v___x_1161_, v___x_1162_, v___y_1176_, v___x_1184_);
v___x_1186_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__1));
v___x_1187_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1187_, 0, v___y_1174_);
lean_ctor_set(v___x_1187_, 1, v___x_1186_);
v___x_1188_ = l_Array_append___redArg(v___y_1175_, v___y_1167_);
lean_dec_ref(v___y_1167_);
v___x_1189_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1189_, 0, v___y_1174_);
lean_ctor_set(v___x_1189_, 1, v___y_1172_);
lean_ctor_set(v___x_1189_, 2, v___x_1188_);
v___x_1190_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__2));
v___x_1191_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1191_, 0, v___y_1174_);
lean_ctor_set(v___x_1191_, 1, v___x_1190_);
v___x_1192_ = l_Lean_Syntax_node3(v___y_1174_, v___x_1185_, v___x_1187_, v___x_1189_, v___x_1191_);
v___x_1193_ = l_Lean_Syntax_node1(v___y_1174_, v___y_1172_, v___x_1192_);
lean_inc_ref(v___y_1180_);
v___x_1194_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1194_, 0, v___y_1174_);
lean_ctor_set(v___x_1194_, 1, v___y_1180_);
v___x_1195_ = l_Lean_TSyntax_getId(v___y_1169_);
v___x_1196_ = l_Lean_mkIdentFrom(v___y_1179_, v___x_1195_, v___x_1165_);
lean_dec(v___y_1179_);
v___x_1197_ = l_Lean_Syntax_node2(v___y_1174_, v___y_1172_, v___x_1196_, v___y_1169_);
v___x_1198_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__6));
v___x_1199_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1199_, 0, v___y_1174_);
lean_ctor_set(v___x_1199_, 1, v___x_1198_);
v___x_1200_ = lean_obj_once(&l_Lean_Elab_Command_elabMacroRulesAux___closed__8, &l_Lean_Elab_Command_elabMacroRulesAux___closed__8_once, _init_l_Lean_Elab_Command_elabMacroRulesAux___closed__8);
v___x_1201_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__9));
v___x_1202_ = l_Lean_addMacroScope(v___y_1170_, v___x_1201_, v___y_1168_);
v___x_1203_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRules___lam__1___closed__6));
v___x_1204_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1204_, 0, v___y_1174_);
lean_ctor_set(v___x_1204_, 1, v___x_1200_);
lean_ctor_set(v___x_1204_, 2, v___x_1202_);
lean_ctor_set(v___x_1204_, 3, v___x_1203_);
v___x_1205_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__10));
v___x_1206_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1206_, 0, v___y_1174_);
lean_ctor_set(v___x_1206_, 1, v___x_1205_);
v___x_1207_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__11));
v___x_1208_ = l_Lean_Name_mkStr4(v___x_1161_, v___x_1162_, v___y_1176_, v___x_1207_);
v___x_1209_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1209_, 0, v___y_1174_);
lean_ctor_set(v___x_1209_, 1, v___x_1207_);
v___x_1210_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRules___lam__1___closed__7));
v___x_1211_ = l_Lean_Name_mkStr4(v___x_1161_, v___x_1162_, v___y_1176_, v___x_1210_);
v___x_1212_ = l_Lean_Syntax_node1(v___y_1174_, v___y_1172_, v___y_1177_);
v___x_1213_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1213_, 0, v___y_1174_);
lean_ctor_set(v___x_1213_, 1, v___y_1172_);
lean_ctor_set(v___x_1213_, 2, v___y_1175_);
v___x_1214_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabMacroRulesAux_spec__4___closed__13));
v___x_1215_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1215_, 0, v___y_1174_);
lean_ctor_set(v___x_1215_, 1, v___x_1214_);
v___x_1216_ = l_Lean_Syntax_node4(v___y_1174_, v___x_1211_, v___x_1212_, v___x_1213_, v___x_1215_, v___y_1173_);
v___x_1217_ = l_Lean_Syntax_node2(v___y_1174_, v___x_1208_, v___x_1209_, v___x_1216_);
v___x_1218_ = lean_unsigned_to_nat(9u);
v___x_1219_ = lean_mk_empty_array_with_capacity(v___x_1218_);
v___x_1220_ = lean_array_push(v___x_1219_, v___x_1183_);
v___x_1221_ = lean_array_push(v___x_1220_, v___x_1193_);
v___x_1222_ = lean_array_push(v___x_1221_, v___y_1178_);
v___x_1223_ = lean_array_push(v___x_1222_, v___x_1194_);
v___x_1224_ = lean_array_push(v___x_1223_, v___x_1197_);
v___x_1225_ = lean_array_push(v___x_1224_, v___x_1199_);
v___x_1226_ = lean_array_push(v___x_1225_, v___x_1204_);
v___x_1227_ = lean_array_push(v___x_1226_, v___x_1206_);
v___x_1228_ = lean_array_push(v___x_1227_, v___x_1217_);
lean_inc(v___y_1171_);
v___x_1229_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1229_, 0, v___y_1174_);
lean_ctor_set(v___x_1229_, 1, v___y_1171_);
lean_ctor_set(v___x_1229_, 2, v___x_1228_);
v___x_1230_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1230_, 0, v___x_1229_);
return v___x_1230_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabMacroRules___lam__1___boxed(lean_object* v_stx_1569_, lean_object* v___y_1570_, lean_object* v___y_1571_, lean_object* v___y_1572_){
_start:
{
lean_object* v_res_1573_; 
v_res_1573_ = l_Lean_Elab_Command_elabMacroRules___lam__1(v_stx_1569_, v___y_1570_, v___y_1571_);
lean_dec(v___y_1571_);
lean_dec_ref(v___y_1570_);
return v_res_1573_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabMacroRules(lean_object* v_a_1575_, lean_object* v_a_1576_, lean_object* v_a_1577_){
_start:
{
lean_object* v___f_1579_; lean_object* v___x_1580_; 
v___f_1579_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRules___closed__0));
v___x_1580_ = l_Lean_Elab_Command_adaptExpander(v___f_1579_, v_a_1575_, v_a_1576_, v_a_1577_);
return v___x_1580_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabMacroRules___boxed(lean_object* v_a_1581_, lean_object* v_a_1582_, lean_object* v_a_1583_, lean_object* v_a_1584_){
_start:
{
lean_object* v_res_1585_; 
v_res_1585_ = l_Lean_Elab_Command_elabMacroRules(v_a_1581_, v_a_1582_, v_a_1583_);
lean_dec(v_a_1583_);
lean_dec_ref(v_a_1582_);
return v_res_1585_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules__1(){
_start:
{
lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; 
v___x_1593_ = l_Lean_Elab_Command_commandElabAttribute;
v___x_1594_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRules___lam__1___closed__1));
v___x_1595_ = ((lean_object*)(l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules__1___closed__1));
v___x_1596_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabMacroRules___boxed), 4, 0);
v___x_1597_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1593_, v___x_1594_, v___x_1595_, v___x_1596_);
return v___x_1597_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules__1___boxed(lean_object* v_a_1598_){
_start:
{
lean_object* v_res_1599_; 
v_res_1599_ = l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules__1();
return v_res_1599_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3(){
_start:
{
lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; 
v___x_1626_ = ((lean_object*)(l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules__1___closed__1));
v___x_1627_ = ((lean_object*)(l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3___closed__6));
v___x_1628_ = l_Lean_addBuiltinDeclarationRanges(v___x_1626_, v___x_1627_);
return v___x_1628_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3___boxed(lean_object* v_a_1629_){
_start:
{
lean_object* v_res_1630_; 
v_res_1630_ = l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3();
return v_res_1630_;
}
}
lean_object* runtime_initialize_Lean_Elab_Syntax(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_AuxDef(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_MacroRules(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_AuxDef(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_MacroRules(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Syntax(uint8_t builtin);
lean_object* initialize_Lean_Elab_AuxDef(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_MacroRules(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_AuxDef(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_MacroRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_MacroRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_MacroRules(builtin);
}
#ifdef __cplusplus
}
#endif

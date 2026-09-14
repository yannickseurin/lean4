// Lean compiler output
// Module: Lean.Elab.Tactic.Doc
// Imports: import Lean.DocString public import Lean.Elab.Command public import Lean.Parser.Tactic.Doc
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
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Elab_Command_getRef___redArg(lean_object*);
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
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
extern lean_object* l_Lean_Parser_Tactic_Doc_tacticDocExtExt;
lean_object* l_Lean_TSyntax_getDocString(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
uint8_t l_Lean_Parser_Tactic_Doc_isTactic(lean_object*, lean_object*);
lean_object* l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_liftTermElabM___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_Doc_alternativeOfTactic(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
uint8_t l_Lean_Name_quickLt(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_array_size(lean_object*);
extern lean_object* l_Lean_NameSet_empty;
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_to_list(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
uint8_t lean_string_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedPersistentEnvExtensionState___redArg(lean_object*);
extern lean_object* l_Lean_Parser_Tactic_Doc_knownTacticTagExt;
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_withExprHover(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Tactic_Doc_tacticNameExt;
lean_object* l_Lean_PersistentEnvExtension_getModuleEntries___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Environment_constants(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
lean_object* l_Lean_ConstantInfo_levelParams(lean_object*);
lean_object* l_Lean_Level_param___override(lean_object*);
extern lean_object* l_Lean_Elab_Command_commandElabAttribute;
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_balance___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_maxView___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_minView___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Name_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_getScope___redArg(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
extern lean_object* l_Lean_Parser_Tactic_Doc_tacticTagExt;
extern lean_object* l_Lean_Parser_ParserExtension_instInhabitedState_default;
extern lean_object* l_Lean_Parser_parserExtension;
lean_object* l_Lean_ScopedEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_nestD(lean_object*);
extern lean_object* l_Lean_MessageData_nil;
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* l_String_Slice_subslice_x21(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_joinSep(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_findDocString_x3f(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_Doc_getTacticExtensions(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Name_hash___override___boxed(lean_object*);
lean_object* l_Lean_PersistentHashMap_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl___boxed(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_Doc_customTacticName___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SMap_find_x3f_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapTR_loop___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDocString(lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lean_TSyntax_getString(lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "tactic_extension"};
static const lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__3_value),LEAN_SCALAR_PTR_LITERAL(226, 244, 145, 122, 23, 135, 199, 68)}};
static const lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__4_value;
static const lean_string_object l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Malformed tactic extension command"};
static const lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__5_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__6;
static lean_once_cell_t l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__7;
static const lean_string_object l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__8_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__9;
static const lean_string_object l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "` is not a tactic"};
static const lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__10 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__10_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__11;
static const lean_string_object l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "` is an alternative form of `"};
static const lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__12 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__12_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__13;
static const lean_string_object l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__14 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__14_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__14_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__15 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__15_value;
static const lean_string_object l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "docComment"};
static const lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__16 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__16_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__17_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__17_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__17_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__17_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__17_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__16_value),LEAN_SCALAR_PTR_LITERAL(44, 76, 179, 33, 27, 4, 201, 125)}};
static const lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__17 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__17_value;
static const lean_string_object l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Missing documentation comment"};
static const lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__18 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__18_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__19;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Doc"};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "elabTacticExtension"};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__4_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(197, 62, 21, 167, 211, 43, 164, 218)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__4_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(128, 44, 144, 107, 80, 40, 109, 178)}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(17) << 1) | 1)),((lean_object*)(((size_t)(43) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(30) << 1) | 1)),((lean_object*)(((size_t)(56) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__0_value),((lean_object*)(((size_t)(43) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__1_value),((lean_object*)(((size_t)(56) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(17) << 1) | 1)),((lean_object*)(((size_t)(47) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(17) << 1) | 1)),((lean_object*)(((size_t)(66) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__3_value),((lean_object*)(((size_t)(47) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__4_value),((lean_object*)(((size_t)(66) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___boxed(lean_object*);
static const lean_string_object l_Lean_getDocStringText___at___00Lean_Elab_Tactic_Doc_elabRegisterTacticTag_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "unexpected doc string"};
static const lean_object* l_Lean_getDocStringText___at___00Lean_Elab_Tactic_Doc_elabRegisterTacticTag_spec__0___closed__0 = (const lean_object*)&l_Lean_getDocStringText___at___00Lean_Elab_Tactic_Doc_elabRegisterTacticTag_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_getDocStringText___at___00Lean_Elab_Tactic_Doc_elabRegisterTacticTag_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getDocStringText___at___00Lean_Elab_Tactic_Doc_elabRegisterTacticTag_spec__0___closed__1;
static const lean_string_object l_Lean_getDocStringText___at___00Lean_Elab_Tactic_Doc_elabRegisterTacticTag_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "versoCommentBody"};
static const lean_object* l_Lean_getDocStringText___at___00Lean_Elab_Tactic_Doc_elabRegisterTacticTag_spec__0___closed__2 = (const lean_object*)&l_Lean_getDocStringText___at___00Lean_Elab_Tactic_Doc_elabRegisterTacticTag_spec__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_getDocStringText___at___00Lean_Elab_Tactic_Doc_elabRegisterTacticTag_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDocStringText___at___00Lean_Elab_Tactic_Doc_elabRegisterTacticTag_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Malformed 'register_tactic_tag' command"};
static const lean_object* l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__1;
static const lean_string_object l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "str"};
static const lean_object* l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__2_value),LEAN_SCALAR_PTR_LITERAL(255, 188, 142, 1, 190, 33, 34, 128)}};
static const lean_object* l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "register_tactic_tag"};
static const lean_object* l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__5_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__5_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__4_value),LEAN_SCALAR_PTR_LITERAL(207, 55, 57, 11, 65, 76, 175, 2)}};
static const lean_object* l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "elabRegisterTacticTag"};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(197, 62, 21, 167, 211, 43, 164, 218)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(216, 30, 89, 153, 147, 186, 30, 23)}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(32) << 1) | 1)),((lean_object*)(((size_t)(46) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(36) << 1) | 1)),((lean_object*)(((size_t)(61) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__0_value),((lean_object*)(((size_t)(46) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__1_value),((lean_object*)(((size_t)(61) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(32) << 1) | 1)),((lean_object*)(((size_t)(50) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(32) << 1) | 1)),((lean_object*)(((size_t)(71) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__3_value),((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__4_value),((lean_object*)(((size_t)(71) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__1___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__8___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg___closed__0;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "$"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__4___closed__0 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__4___closed__0_value;
static const lean_ctor_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(158, 68, 185, 128, 48, 210, 24, 186)}};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__4___closed__1 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__4___closed__1_value;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__0_value;
static const lean_closure_object l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__1_value;
static const lean_closure_object l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__2_value;
static const lean_closure_object l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__3_value;
static const lean_closure_object l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__4_value;
static const lean_closure_object l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__5_value;
static const lean_closure_object l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__0_value),((lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__1_value)}};
static const lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__7_value),((lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__2_value),((lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__3_value),((lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__4_value),((lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__5_value)}};
static const lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__8_value),((lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__6_value)}};
static const lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__9 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "tactic"};
static const lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__2___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__2___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(99, 76, 33, 121, 85, 143, 17, 224)}};
static const lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__2___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__0_value;
static const lean_closure_object l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__0_value)} };
static const lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__2;
static const lean_closure_object l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__3_value;
static const lean_closure_object l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_hash___override___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__1;
static const lean_closure_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Level_param___override, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__4___redArg___closed__0 = (const lean_object*)&l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__4___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__4___redArg();
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__4___redArg___boxed(lean_object*);
static lean_once_cell_t l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__4___closed__0;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__4(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__4___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9___redArg___lam__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9_spec__17___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__8_spec__15(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__12(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9_spec__11___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9_spec__11___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9___redArg___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__10___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__10___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f_x27___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__11_spec__14_spec__22___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f_x27___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__11_spec__14_spec__22___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f_x27___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__11_spec__14___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f_x27___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__11_spec__14___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6_spec__15___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f_x27___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__11___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f_x27___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__11___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__0 = (const lean_object*)&l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__0_value;
static const lean_string_object l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 2, .m_data = "• "};
static const lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__1 = (const lean_object*)&l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__1_value;
static lean_once_cell_t l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__2;
static const lean_string_object l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 4, .m_data = " — \""};
static const lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__3 = (const lean_object*)&l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__3_value;
static lean_once_cell_t l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__4;
static const lean_string_object l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\""};
static const lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__5 = (const lean_object*)&l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__5_value;
static lean_once_cell_t l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__6;
static const lean_string_object l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__7 = (const lean_object*)&l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__7_value;
static const lean_ctor_object l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__7_value)}};
static const lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__8 = (const lean_object*)&l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__8_value;
static lean_once_cell_t l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__9;
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__26_spec__32___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__26_spec__32___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__26_spec__32___lam__0___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__26_spec__32___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__26_spec__32___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__26_spec__32(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__26_spec__32___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__26(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__26___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__23___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__23___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__22___redArg___lam__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__22___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__22_spec__27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__22_spec__27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__22___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__22___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21_spec__25(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21_spec__25___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__19___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__19___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__20(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__1___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__5(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Doc_elabPrintTacTags___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Available tags: "};
static const lean_object* l_Lean_Elab_Tactic_Doc_elabPrintTacTags___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_elabPrintTacTags___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Doc_elabPrintTacTags___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Doc_elabPrintTacTags___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabPrintTacTags___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabPrintTacTags___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabPrintTacTags(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabPrintTacTags___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__10___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f_x27___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f_x27___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__11___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9_spec__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__19(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__22(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__23(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f_x27___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__11_spec__14(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f_x27___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__11_spec__14___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__22_spec__27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__22_spec__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f_x27___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__11_spec__14_spec__22(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f_x27___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__11_spec__14_spec__22___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "printTacTags"};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(144, 6, 105, 20, 120, 144, 238, 207)}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "elabPrintTacTags"};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__3_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(197, 62, 21, 167, 211, 43, 164, 218)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__3_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(202, 38, 126, 200, 28, 172, 117, 128)}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___boxed(lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_docString__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "Displays all available tactic tags, with documentation.\n"};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_docString__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_docString__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_docString__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_docString__3___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(98) << 1) | 1)),((lean_object*)(((size_t)(37) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(130) << 1) | 1)),((lean_object*)(((size_t)(17) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__0_value),((lean_object*)(((size_t)(37) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__1_value),((lean_object*)(((size_t)(17) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(98) << 1) | 1)),((lean_object*)(((size_t)(41) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(98) << 1) | 1)),((lean_object*)(((size_t)(57) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__3_value),((lean_object*)(((size_t)(41) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__4_value),((lean_object*)(((size_t)(57) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__2_value),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_allTacticDocs___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_allTacticDocs___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__5___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__2___redArg___boxed(lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Tactic_Doc_allTacticDocs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_Doc_allTacticDocs___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_allTacticDocs___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_allTacticDocs(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_allTacticDocs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___lam__0(lean_object* v___x_1_, lean_object* v___x_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_, lean_object* v___y_8_){
_start:
{
lean_object* v___x_10_; 
v___x_10_ = l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(v___x_1_, v___x_2_, v___y_7_, v___y_8_);
return v___x_10_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___lam__0___boxed(lean_object* v___x_11_, lean_object* v___x_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_, lean_object* v___y_18_, lean_object* v___y_19_){
_start:
{
lean_object* v_res_20_; 
v_res_20_ = l_Lean_Elab_Tactic_Doc_elabTacticExtension___lam__0(v___x_11_, v___x_12_, v___y_13_, v___y_14_, v___y_15_, v___y_16_, v___y_17_, v___y_18_);
lean_dec(v___y_18_);
lean_dec_ref(v___y_17_);
lean_dec(v___y_16_);
lean_dec_ref(v___y_15_);
lean_dec(v___y_14_);
lean_dec_ref(v___y_13_);
return v_res_20_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_21_; 
v___x_21_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_21_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_22_; lean_object* v___x_23_; 
v___x_22_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__0);
v___x_23_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_23_, 0, v___x_22_);
return v___x_23_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; 
v___x_24_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__1);
v___x_25_ = lean_unsigned_to_nat(0u);
v___x_26_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_26_, 0, v___x_25_);
lean_ctor_set(v___x_26_, 1, v___x_25_);
lean_ctor_set(v___x_26_, 2, v___x_25_);
lean_ctor_set(v___x_26_, 3, v___x_25_);
lean_ctor_set(v___x_26_, 4, v___x_24_);
lean_ctor_set(v___x_26_, 5, v___x_24_);
lean_ctor_set(v___x_26_, 6, v___x_24_);
lean_ctor_set(v___x_26_, 7, v___x_24_);
lean_ctor_set(v___x_26_, 8, v___x_24_);
lean_ctor_set(v___x_26_, 9, v___x_24_);
lean_ctor_set(v___x_26_, 10, v___x_24_);
return v___x_26_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_27_ = lean_unsigned_to_nat(32u);
v___x_28_ = lean_mk_empty_array_with_capacity(v___x_27_);
v___x_29_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_29_, 0, v___x_28_);
return v___x_29_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__4(void){
_start:
{
size_t v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; 
v___x_30_ = ((size_t)5ULL);
v___x_31_ = lean_unsigned_to_nat(0u);
v___x_32_ = lean_unsigned_to_nat(32u);
v___x_33_ = lean_mk_empty_array_with_capacity(v___x_32_);
v___x_34_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__3);
v___x_35_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_35_, 0, v___x_34_);
lean_ctor_set(v___x_35_, 1, v___x_33_);
lean_ctor_set(v___x_35_, 2, v___x_31_);
lean_ctor_set(v___x_35_, 3, v___x_31_);
lean_ctor_set_usize(v___x_35_, 4, v___x_30_);
return v___x_35_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__5(void){
_start:
{
lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; 
v___x_36_ = lean_box(1);
v___x_37_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__4);
v___x_38_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__1);
v___x_39_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_39_, 0, v___x_38_);
lean_ctor_set(v___x_39_, 1, v___x_37_);
lean_ctor_set(v___x_39_, 2, v___x_36_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg(lean_object* v_msgData_40_, lean_object* v___y_41_){
_start:
{
lean_object* v___x_43_; lean_object* v_env_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v_scopes_47_; lean_object* v___x_48_; lean_object* v_opts_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; 
v___x_43_ = lean_st_ref_get(v___y_41_);
v_env_44_ = lean_ctor_get(v___x_43_, 0);
lean_inc_ref(v_env_44_);
lean_dec(v___x_43_);
v___x_45_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_46_ = lean_st_ref_get(v___y_41_);
v_scopes_47_ = lean_ctor_get(v___x_46_, 2);
lean_inc(v_scopes_47_);
lean_dec(v___x_46_);
v___x_48_ = l_List_head_x21___redArg(v___x_45_, v_scopes_47_);
lean_dec(v_scopes_47_);
v_opts_49_ = lean_ctor_get(v___x_48_, 1);
lean_inc_ref(v_opts_49_);
lean_dec(v___x_48_);
v___x_50_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__2);
v___x_51_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__5);
v___x_52_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_52_, 0, v_env_44_);
lean_ctor_set(v___x_52_, 1, v___x_50_);
lean_ctor_set(v___x_52_, 2, v___x_51_);
lean_ctor_set(v___x_52_, 3, v_opts_49_);
v___x_53_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_53_, 0, v___x_52_);
lean_ctor_set(v___x_53_, 1, v_msgData_40_);
v___x_54_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_54_, 0, v___x_53_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___boxed(lean_object* v_msgData_55_, lean_object* v___y_56_, lean_object* v___y_57_){
_start:
{
lean_object* v_res_58_; 
v_res_58_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg(v_msgData_55_, v___y_56_);
lean_dec(v___y_56_);
return v_res_58_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__0(void){
_start:
{
lean_object* v___x_59_; lean_object* v___x_60_; 
v___x_59_ = lean_box(1);
v___x_60_ = l_Lean_MessageData_ofFormat(v___x_59_);
return v___x_60_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__3(void){
_start:
{
lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_64_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__2));
v___x_65_ = l_Lean_MessageData_ofFormat(v___x_64_);
return v___x_65_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3(lean_object* v_x_66_, lean_object* v_x_67_){
_start:
{
if (lean_obj_tag(v_x_67_) == 0)
{
return v_x_66_;
}
else
{
lean_object* v_head_68_; lean_object* v_tail_69_; lean_object* v___x_71_; uint8_t v_isShared_72_; uint8_t v_isSharedCheck_91_; 
v_head_68_ = lean_ctor_get(v_x_67_, 0);
v_tail_69_ = lean_ctor_get(v_x_67_, 1);
v_isSharedCheck_91_ = !lean_is_exclusive(v_x_67_);
if (v_isSharedCheck_91_ == 0)
{
v___x_71_ = v_x_67_;
v_isShared_72_ = v_isSharedCheck_91_;
goto v_resetjp_70_;
}
else
{
lean_inc(v_tail_69_);
lean_inc(v_head_68_);
lean_dec(v_x_67_);
v___x_71_ = lean_box(0);
v_isShared_72_ = v_isSharedCheck_91_;
goto v_resetjp_70_;
}
v_resetjp_70_:
{
lean_object* v_before_73_; lean_object* v___x_75_; uint8_t v_isShared_76_; uint8_t v_isSharedCheck_89_; 
v_before_73_ = lean_ctor_get(v_head_68_, 0);
v_isSharedCheck_89_ = !lean_is_exclusive(v_head_68_);
if (v_isSharedCheck_89_ == 0)
{
lean_object* v_unused_90_; 
v_unused_90_ = lean_ctor_get(v_head_68_, 1);
lean_dec(v_unused_90_);
v___x_75_ = v_head_68_;
v_isShared_76_ = v_isSharedCheck_89_;
goto v_resetjp_74_;
}
else
{
lean_inc(v_before_73_);
lean_dec(v_head_68_);
v___x_75_ = lean_box(0);
v_isShared_76_ = v_isSharedCheck_89_;
goto v_resetjp_74_;
}
v_resetjp_74_:
{
lean_object* v___x_77_; lean_object* v___x_79_; 
v___x_77_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__0);
if (v_isShared_76_ == 0)
{
lean_ctor_set_tag(v___x_75_, 7);
lean_ctor_set(v___x_75_, 1, v___x_77_);
lean_ctor_set(v___x_75_, 0, v_x_66_);
v___x_79_ = v___x_75_;
goto v_reusejp_78_;
}
else
{
lean_object* v_reuseFailAlloc_88_; 
v_reuseFailAlloc_88_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_88_, 0, v_x_66_);
lean_ctor_set(v_reuseFailAlloc_88_, 1, v___x_77_);
v___x_79_ = v_reuseFailAlloc_88_;
goto v_reusejp_78_;
}
v_reusejp_78_:
{
lean_object* v___x_80_; lean_object* v___x_82_; 
v___x_80_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__3);
if (v_isShared_72_ == 0)
{
lean_ctor_set_tag(v___x_71_, 7);
lean_ctor_set(v___x_71_, 1, v___x_80_);
lean_ctor_set(v___x_71_, 0, v___x_79_);
v___x_82_ = v___x_71_;
goto v_reusejp_81_;
}
else
{
lean_object* v_reuseFailAlloc_87_; 
v_reuseFailAlloc_87_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_87_, 0, v___x_79_);
lean_ctor_set(v_reuseFailAlloc_87_, 1, v___x_80_);
v___x_82_ = v_reuseFailAlloc_87_;
goto v_reusejp_81_;
}
v_reusejp_81_:
{
lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; 
v___x_83_ = l_Lean_MessageData_ofSyntax(v_before_73_);
v___x_84_ = l_Lean_indentD(v___x_83_);
v___x_85_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_85_, 0, v___x_82_);
lean_ctor_set(v___x_85_, 1, v___x_84_);
v_x_66_ = v___x_85_;
v_x_67_ = v_tail_69_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__2(lean_object* v_opts_92_, lean_object* v_opt_93_){
_start:
{
lean_object* v_name_94_; lean_object* v_defValue_95_; lean_object* v_map_96_; lean_object* v___x_97_; 
v_name_94_ = lean_ctor_get(v_opt_93_, 0);
v_defValue_95_ = lean_ctor_get(v_opt_93_, 1);
v_map_96_ = lean_ctor_get(v_opts_92_, 0);
v___x_97_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_96_, v_name_94_);
if (lean_obj_tag(v___x_97_) == 0)
{
uint8_t v___x_98_; 
v___x_98_ = lean_unbox(v_defValue_95_);
return v___x_98_;
}
else
{
lean_object* v_val_99_; 
v_val_99_ = lean_ctor_get(v___x_97_, 0);
lean_inc(v_val_99_);
lean_dec_ref_known(v___x_97_, 1);
if (lean_obj_tag(v_val_99_) == 1)
{
uint8_t v_v_100_; 
v_v_100_ = lean_ctor_get_uint8(v_val_99_, 0);
lean_dec_ref_known(v_val_99_, 0);
return v_v_100_;
}
else
{
uint8_t v___x_101_; 
lean_dec(v_val_99_);
v___x_101_ = lean_unbox(v_defValue_95_);
return v___x_101_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__2___boxed(lean_object* v_opts_102_, lean_object* v_opt_103_){
_start:
{
uint8_t v_res_104_; lean_object* v_r_105_; 
v_res_104_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__2(v_opts_102_, v_opt_103_);
lean_dec_ref(v_opt_103_);
lean_dec_ref(v_opts_102_);
v_r_105_ = lean_box(v_res_104_);
return v_r_105_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_109_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1___redArg___closed__1));
v___x_110_ = l_Lean_MessageData_ofFormat(v___x_109_);
return v___x_110_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1___redArg(lean_object* v_msgData_111_, lean_object* v_macroStack_112_, lean_object* v___y_113_){
_start:
{
lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v_scopes_117_; lean_object* v___x_118_; lean_object* v_opts_119_; lean_object* v___x_120_; uint8_t v___x_121_; 
v___x_115_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_116_ = lean_st_ref_get(v___y_113_);
v_scopes_117_ = lean_ctor_get(v___x_116_, 2);
lean_inc(v_scopes_117_);
lean_dec(v___x_116_);
v___x_118_ = l_List_head_x21___redArg(v___x_115_, v_scopes_117_);
lean_dec(v_scopes_117_);
v_opts_119_ = lean_ctor_get(v___x_118_, 1);
lean_inc_ref(v_opts_119_);
lean_dec(v___x_118_);
v___x_120_ = l_Lean_Elab_pp_macroStack;
v___x_121_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__2(v_opts_119_, v___x_120_);
lean_dec_ref(v_opts_119_);
if (v___x_121_ == 0)
{
lean_object* v___x_122_; 
lean_dec(v_macroStack_112_);
v___x_122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_122_, 0, v_msgData_111_);
return v___x_122_;
}
else
{
if (lean_obj_tag(v_macroStack_112_) == 0)
{
lean_object* v___x_123_; 
v___x_123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_123_, 0, v_msgData_111_);
return v___x_123_;
}
else
{
lean_object* v_head_124_; lean_object* v_after_125_; lean_object* v___x_127_; uint8_t v_isShared_128_; uint8_t v_isSharedCheck_140_; 
v_head_124_ = lean_ctor_get(v_macroStack_112_, 0);
lean_inc(v_head_124_);
v_after_125_ = lean_ctor_get(v_head_124_, 1);
v_isSharedCheck_140_ = !lean_is_exclusive(v_head_124_);
if (v_isSharedCheck_140_ == 0)
{
lean_object* v_unused_141_; 
v_unused_141_ = lean_ctor_get(v_head_124_, 0);
lean_dec(v_unused_141_);
v___x_127_ = v_head_124_;
v_isShared_128_ = v_isSharedCheck_140_;
goto v_resetjp_126_;
}
else
{
lean_inc(v_after_125_);
lean_dec(v_head_124_);
v___x_127_ = lean_box(0);
v_isShared_128_ = v_isSharedCheck_140_;
goto v_resetjp_126_;
}
v_resetjp_126_:
{
lean_object* v___x_129_; lean_object* v___x_131_; 
v___x_129_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__0);
if (v_isShared_128_ == 0)
{
lean_ctor_set_tag(v___x_127_, 7);
lean_ctor_set(v___x_127_, 1, v___x_129_);
lean_ctor_set(v___x_127_, 0, v_msgData_111_);
v___x_131_ = v___x_127_;
goto v_reusejp_130_;
}
else
{
lean_object* v_reuseFailAlloc_139_; 
v_reuseFailAlloc_139_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_139_, 0, v_msgData_111_);
lean_ctor_set(v_reuseFailAlloc_139_, 1, v___x_129_);
v___x_131_ = v_reuseFailAlloc_139_;
goto v_reusejp_130_;
}
v_reusejp_130_:
{
lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v_msgData_136_; lean_object* v___x_137_; lean_object* v___x_138_; 
v___x_132_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1___redArg___closed__2);
v___x_133_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_133_, 0, v___x_131_);
lean_ctor_set(v___x_133_, 1, v___x_132_);
v___x_134_ = l_Lean_MessageData_ofSyntax(v_after_125_);
v___x_135_ = l_Lean_indentD(v___x_134_);
v_msgData_136_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_136_, 0, v___x_133_);
lean_ctor_set(v_msgData_136_, 1, v___x_135_);
v___x_137_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3(v_msgData_136_, v_macroStack_112_);
v___x_138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_138_, 0, v___x_137_);
return v___x_138_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1___redArg___boxed(lean_object* v_msgData_142_, lean_object* v_macroStack_143_, lean_object* v___y_144_, lean_object* v___y_145_){
_start:
{
lean_object* v_res_146_; 
v_res_146_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1___redArg(v_msgData_142_, v_macroStack_143_, v___y_144_);
lean_dec(v___y_144_);
return v_res_146_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0___redArg(lean_object* v_msg_147_, lean_object* v___y_148_, lean_object* v___y_149_){
_start:
{
lean_object* v___x_151_; 
v___x_151_ = l_Lean_Elab_Command_getRef___redArg(v___y_148_);
if (lean_obj_tag(v___x_151_) == 0)
{
lean_object* v_a_152_; lean_object* v_macroStack_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v_a_156_; lean_object* v___x_157_; lean_object* v_a_158_; lean_object* v___x_160_; uint8_t v_isShared_161_; uint8_t v_isSharedCheck_166_; 
v_a_152_ = lean_ctor_get(v___x_151_, 0);
lean_inc(v_a_152_);
lean_dec_ref_known(v___x_151_, 1);
v_macroStack_153_ = lean_ctor_get(v___y_148_, 4);
v___x_154_ = l_Lean_Elab_getBetterRef(v_a_152_, v_macroStack_153_);
lean_dec(v_a_152_);
v___x_155_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg(v_msg_147_, v___y_149_);
v_a_156_ = lean_ctor_get(v___x_155_, 0);
lean_inc(v_a_156_);
lean_dec_ref(v___x_155_);
lean_inc(v_macroStack_153_);
v___x_157_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1___redArg(v_a_156_, v_macroStack_153_, v___y_149_);
v_a_158_ = lean_ctor_get(v___x_157_, 0);
v_isSharedCheck_166_ = !lean_is_exclusive(v___x_157_);
if (v_isSharedCheck_166_ == 0)
{
v___x_160_ = v___x_157_;
v_isShared_161_ = v_isSharedCheck_166_;
goto v_resetjp_159_;
}
else
{
lean_inc(v_a_158_);
lean_dec(v___x_157_);
v___x_160_ = lean_box(0);
v_isShared_161_ = v_isSharedCheck_166_;
goto v_resetjp_159_;
}
v_resetjp_159_:
{
lean_object* v___x_162_; lean_object* v___x_164_; 
v___x_162_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_162_, 0, v___x_154_);
lean_ctor_set(v___x_162_, 1, v_a_158_);
if (v_isShared_161_ == 0)
{
lean_ctor_set_tag(v___x_160_, 1);
lean_ctor_set(v___x_160_, 0, v___x_162_);
v___x_164_ = v___x_160_;
goto v_reusejp_163_;
}
else
{
lean_object* v_reuseFailAlloc_165_; 
v_reuseFailAlloc_165_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_165_, 0, v___x_162_);
v___x_164_ = v_reuseFailAlloc_165_;
goto v_reusejp_163_;
}
v_reusejp_163_:
{
return v___x_164_;
}
}
}
else
{
lean_object* v_a_167_; lean_object* v___x_169_; uint8_t v_isShared_170_; uint8_t v_isSharedCheck_174_; 
lean_dec_ref(v_msg_147_);
v_a_167_ = lean_ctor_get(v___x_151_, 0);
v_isSharedCheck_174_ = !lean_is_exclusive(v___x_151_);
if (v_isSharedCheck_174_ == 0)
{
v___x_169_ = v___x_151_;
v_isShared_170_ = v_isSharedCheck_174_;
goto v_resetjp_168_;
}
else
{
lean_inc(v_a_167_);
lean_dec(v___x_151_);
v___x_169_ = lean_box(0);
v_isShared_170_ = v_isSharedCheck_174_;
goto v_resetjp_168_;
}
v_resetjp_168_:
{
lean_object* v___x_172_; 
if (v_isShared_170_ == 0)
{
v___x_172_ = v___x_169_;
goto v_reusejp_171_;
}
else
{
lean_object* v_reuseFailAlloc_173_; 
v_reuseFailAlloc_173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_173_, 0, v_a_167_);
v___x_172_ = v_reuseFailAlloc_173_;
goto v_reusejp_171_;
}
v_reusejp_171_:
{
return v___x_172_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0___redArg___boxed(lean_object* v_msg_175_, lean_object* v___y_176_, lean_object* v___y_177_, lean_object* v___y_178_){
_start:
{
lean_object* v_res_179_; 
v_res_179_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0___redArg(v_msg_175_, v___y_176_, v___y_177_);
lean_dec(v___y_177_);
lean_dec_ref(v___y_176_);
return v_res_179_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__1___redArg(lean_object* v_ref_180_, lean_object* v_msg_181_, lean_object* v___y_182_, lean_object* v___y_183_){
_start:
{
lean_object* v___x_185_; 
v___x_185_ = l_Lean_Elab_Command_getRef___redArg(v___y_182_);
if (lean_obj_tag(v___x_185_) == 0)
{
lean_object* v_a_186_; lean_object* v_fileName_187_; lean_object* v_fileMap_188_; lean_object* v_currRecDepth_189_; lean_object* v_cmdPos_190_; lean_object* v_macroStack_191_; lean_object* v_quotContext_x3f_192_; lean_object* v_currMacroScope_193_; lean_object* v_snap_x3f_194_; lean_object* v_cancelTk_x3f_195_; uint8_t v_suppressElabErrors_196_; lean_object* v_ref_197_; lean_object* v___x_198_; lean_object* v___x_199_; 
v_a_186_ = lean_ctor_get(v___x_185_, 0);
lean_inc(v_a_186_);
lean_dec_ref_known(v___x_185_, 1);
v_fileName_187_ = lean_ctor_get(v___y_182_, 0);
v_fileMap_188_ = lean_ctor_get(v___y_182_, 1);
v_currRecDepth_189_ = lean_ctor_get(v___y_182_, 2);
v_cmdPos_190_ = lean_ctor_get(v___y_182_, 3);
v_macroStack_191_ = lean_ctor_get(v___y_182_, 4);
v_quotContext_x3f_192_ = lean_ctor_get(v___y_182_, 5);
v_currMacroScope_193_ = lean_ctor_get(v___y_182_, 6);
v_snap_x3f_194_ = lean_ctor_get(v___y_182_, 8);
v_cancelTk_x3f_195_ = lean_ctor_get(v___y_182_, 9);
v_suppressElabErrors_196_ = lean_ctor_get_uint8(v___y_182_, sizeof(void*)*10);
v_ref_197_ = l_Lean_replaceRef(v_ref_180_, v_a_186_);
lean_dec(v_a_186_);
lean_inc(v_cancelTk_x3f_195_);
lean_inc(v_snap_x3f_194_);
lean_inc(v_currMacroScope_193_);
lean_inc(v_quotContext_x3f_192_);
lean_inc(v_macroStack_191_);
lean_inc(v_cmdPos_190_);
lean_inc(v_currRecDepth_189_);
lean_inc_ref(v_fileMap_188_);
lean_inc_ref(v_fileName_187_);
v___x_198_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v___x_198_, 0, v_fileName_187_);
lean_ctor_set(v___x_198_, 1, v_fileMap_188_);
lean_ctor_set(v___x_198_, 2, v_currRecDepth_189_);
lean_ctor_set(v___x_198_, 3, v_cmdPos_190_);
lean_ctor_set(v___x_198_, 4, v_macroStack_191_);
lean_ctor_set(v___x_198_, 5, v_quotContext_x3f_192_);
lean_ctor_set(v___x_198_, 6, v_currMacroScope_193_);
lean_ctor_set(v___x_198_, 7, v_ref_197_);
lean_ctor_set(v___x_198_, 8, v_snap_x3f_194_);
lean_ctor_set(v___x_198_, 9, v_cancelTk_x3f_195_);
lean_ctor_set_uint8(v___x_198_, sizeof(void*)*10, v_suppressElabErrors_196_);
v___x_199_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0___redArg(v_msg_181_, v___x_198_, v___y_183_);
lean_dec_ref_known(v___x_198_, 10);
return v___x_199_;
}
else
{
lean_object* v_a_200_; lean_object* v___x_202_; uint8_t v_isShared_203_; uint8_t v_isSharedCheck_207_; 
lean_dec_ref(v_msg_181_);
v_a_200_ = lean_ctor_get(v___x_185_, 0);
v_isSharedCheck_207_ = !lean_is_exclusive(v___x_185_);
if (v_isSharedCheck_207_ == 0)
{
v___x_202_ = v___x_185_;
v_isShared_203_ = v_isSharedCheck_207_;
goto v_resetjp_201_;
}
else
{
lean_inc(v_a_200_);
lean_dec(v___x_185_);
v___x_202_ = lean_box(0);
v_isShared_203_ = v_isSharedCheck_207_;
goto v_resetjp_201_;
}
v_resetjp_201_:
{
lean_object* v___x_205_; 
if (v_isShared_203_ == 0)
{
v___x_205_ = v___x_202_;
goto v_reusejp_204_;
}
else
{
lean_object* v_reuseFailAlloc_206_; 
v_reuseFailAlloc_206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_206_, 0, v_a_200_);
v___x_205_ = v_reuseFailAlloc_206_;
goto v_reusejp_204_;
}
v_reusejp_204_:
{
return v___x_205_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__1___redArg___boxed(lean_object* v_ref_208_, lean_object* v_msg_209_, lean_object* v___y_210_, lean_object* v___y_211_, lean_object* v___y_212_){
_start:
{
lean_object* v_res_213_; 
v_res_213_ = l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__1___redArg(v_ref_208_, v_msg_209_, v___y_210_, v___y_211_);
lean_dec(v___y_211_);
lean_dec_ref(v___y_210_);
lean_dec(v_ref_208_);
return v_res_213_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__6(void){
_start:
{
lean_object* v___x_224_; lean_object* v___x_225_; 
v___x_224_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__5));
v___x_225_ = l_Lean_stringToMessageData(v___x_224_);
return v___x_225_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__7(void){
_start:
{
lean_object* v___x_226_; lean_object* v___x_227_; 
v___x_226_ = lean_box(0);
v___x_227_ = l_unsafeCast___redArg(v___x_226_);
return v___x_227_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__9(void){
_start:
{
lean_object* v___x_229_; lean_object* v___x_230_; 
v___x_229_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__8));
v___x_230_ = l_Lean_stringToMessageData(v___x_229_);
return v___x_230_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__11(void){
_start:
{
lean_object* v___x_232_; lean_object* v___x_233_; 
v___x_232_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__10));
v___x_233_ = l_Lean_stringToMessageData(v___x_232_);
return v___x_233_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__13(void){
_start:
{
lean_object* v___x_235_; lean_object* v___x_236_; 
v___x_235_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__12));
v___x_236_ = l_Lean_stringToMessageData(v___x_235_);
return v___x_236_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__19(void){
_start:
{
lean_object* v___x_247_; lean_object* v___x_248_; 
v___x_247_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__18));
v___x_248_ = l_Lean_stringToMessageData(v___x_247_);
return v___x_248_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension(lean_object* v_x_249_, lean_object* v_a_250_, lean_object* v_a_251_){
_start:
{
lean_object* v___x_253_; uint8_t v___x_254_; 
v___x_253_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__4));
lean_inc(v_x_249_);
v___x_254_ = l_Lean_Syntax_isOfKind(v_x_249_, v___x_253_);
if (v___x_254_ == 0)
{
lean_object* v___x_255_; lean_object* v___x_256_; 
lean_dec(v_x_249_);
v___x_255_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__6, &l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__6_once, _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__6);
v___x_256_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0___redArg(v___x_255_, v_a_250_, v_a_251_);
return v___x_256_;
}
else
{
lean_object* v___x_257_; lean_object* v___x_258_; uint8_t v___x_259_; 
v___x_257_ = lean_unsigned_to_nat(0u);
v___x_258_ = l_Lean_Syntax_getArg(v_x_249_, v___x_257_);
lean_inc(v___x_258_);
v___x_259_ = l_Lean_Syntax_matchesNull(v___x_258_, v___x_257_);
if (v___x_259_ == 0)
{
lean_object* v___x_260_; uint8_t v___x_261_; 
v___x_260_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_258_);
v___x_261_ = l_Lean_Syntax_matchesNull(v___x_258_, v___x_260_);
if (v___x_261_ == 0)
{
lean_object* v___x_262_; lean_object* v___x_263_; 
lean_dec(v___x_258_);
lean_dec(v_x_249_);
v___x_262_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__6, &l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__6_once, _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__6);
v___x_263_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0___redArg(v___x_262_, v_a_250_, v_a_251_);
return v___x_263_;
}
else
{
lean_object* v_docs_264_; lean_object* v___y_266_; lean_object* v___y_267_; lean_object* v___y_300_; lean_object* v___y_301_; lean_object* v___y_302_; lean_object* v___y_303_; uint8_t v___y_304_; lean_object* v___y_312_; lean_object* v___y_313_; lean_object* v___y_314_; lean_object* v___y_315_; lean_object* v___y_320_; 
v_docs_264_ = l_Lean_Syntax_getArg(v___x_258_, v___x_257_);
lean_dec(v___x_258_);
if (v___x_259_ == 0)
{
lean_object* v___x_353_; uint8_t v___x_354_; 
v___x_353_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__17));
lean_inc(v_docs_264_);
v___x_354_ = l_Lean_Syntax_isOfKind(v_docs_264_, v___x_353_);
if (v___x_354_ == 0)
{
lean_object* v___x_355_; lean_object* v___x_356_; 
lean_dec(v_docs_264_);
lean_dec(v_x_249_);
v___x_355_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__6, &l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__6_once, _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__6);
v___x_356_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0___redArg(v___x_355_, v_a_250_, v_a_251_);
return v___x_356_;
}
else
{
goto v___jp_346_;
}
}
else
{
goto v___jp_346_;
}
v___jp_265_:
{
lean_object* v___x_268_; lean_object* v_env_269_; lean_object* v_messages_270_; lean_object* v_scopes_271_; lean_object* v_usedQuotCtxts_272_; lean_object* v_nextMacroScope_273_; lean_object* v_maxRecDepth_274_; lean_object* v_ngen_275_; lean_object* v_auxDeclNGen_276_; lean_object* v_infoState_277_; lean_object* v_traceState_278_; lean_object* v_snapshotTasks_279_; lean_object* v_prevLinterStates_280_; lean_object* v_codeQualityEntryTasks_281_; lean_object* v___x_283_; uint8_t v_isShared_284_; uint8_t v_isSharedCheck_298_; 
v___x_268_ = lean_st_ref_take(v___y_267_);
v_env_269_ = lean_ctor_get(v___x_268_, 0);
v_messages_270_ = lean_ctor_get(v___x_268_, 1);
v_scopes_271_ = lean_ctor_get(v___x_268_, 2);
v_usedQuotCtxts_272_ = lean_ctor_get(v___x_268_, 3);
v_nextMacroScope_273_ = lean_ctor_get(v___x_268_, 4);
v_maxRecDepth_274_ = lean_ctor_get(v___x_268_, 5);
v_ngen_275_ = lean_ctor_get(v___x_268_, 6);
v_auxDeclNGen_276_ = lean_ctor_get(v___x_268_, 7);
v_infoState_277_ = lean_ctor_get(v___x_268_, 8);
v_traceState_278_ = lean_ctor_get(v___x_268_, 9);
v_snapshotTasks_279_ = lean_ctor_get(v___x_268_, 10);
v_prevLinterStates_280_ = lean_ctor_get(v___x_268_, 11);
v_codeQualityEntryTasks_281_ = lean_ctor_get(v___x_268_, 12);
v_isSharedCheck_298_ = !lean_is_exclusive(v___x_268_);
if (v_isSharedCheck_298_ == 0)
{
v___x_283_ = v___x_268_;
v_isShared_284_ = v_isSharedCheck_298_;
goto v_resetjp_282_;
}
else
{
lean_inc(v_codeQualityEntryTasks_281_);
lean_inc(v_prevLinterStates_280_);
lean_inc(v_snapshotTasks_279_);
lean_inc(v_traceState_278_);
lean_inc(v_infoState_277_);
lean_inc(v_auxDeclNGen_276_);
lean_inc(v_ngen_275_);
lean_inc(v_maxRecDepth_274_);
lean_inc(v_nextMacroScope_273_);
lean_inc(v_usedQuotCtxts_272_);
lean_inc(v_scopes_271_);
lean_inc(v_messages_270_);
lean_inc(v_env_269_);
lean_dec(v___x_268_);
v___x_283_ = lean_box(0);
v_isShared_284_ = v_isSharedCheck_298_;
goto v_resetjp_282_;
}
v_resetjp_282_:
{
lean_object* v___x_285_; lean_object* v_toEnvExtension_286_; lean_object* v_asyncMode_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_293_; 
v___x_285_ = l_Lean_Parser_Tactic_Doc_tacticDocExtExt;
v_toEnvExtension_286_ = lean_ctor_get(v___x_285_, 0);
v_asyncMode_287_ = lean_ctor_get(v_toEnvExtension_286_, 2);
v___x_288_ = l_Lean_TSyntax_getDocString(v_docs_264_);
lean_dec(v_docs_264_);
v___x_289_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_289_, 0, v___y_266_);
lean_ctor_set(v___x_289_, 1, v___x_288_);
v___x_290_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__7, &l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__7_once, _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__7);
v___x_291_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_285_, v_env_269_, v___x_289_, v_asyncMode_287_, v___x_290_);
if (v_isShared_284_ == 0)
{
lean_ctor_set(v___x_283_, 0, v___x_291_);
v___x_293_ = v___x_283_;
goto v_reusejp_292_;
}
else
{
lean_object* v_reuseFailAlloc_297_; 
v_reuseFailAlloc_297_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_297_, 0, v___x_291_);
lean_ctor_set(v_reuseFailAlloc_297_, 1, v_messages_270_);
lean_ctor_set(v_reuseFailAlloc_297_, 2, v_scopes_271_);
lean_ctor_set(v_reuseFailAlloc_297_, 3, v_usedQuotCtxts_272_);
lean_ctor_set(v_reuseFailAlloc_297_, 4, v_nextMacroScope_273_);
lean_ctor_set(v_reuseFailAlloc_297_, 5, v_maxRecDepth_274_);
lean_ctor_set(v_reuseFailAlloc_297_, 6, v_ngen_275_);
lean_ctor_set(v_reuseFailAlloc_297_, 7, v_auxDeclNGen_276_);
lean_ctor_set(v_reuseFailAlloc_297_, 8, v_infoState_277_);
lean_ctor_set(v_reuseFailAlloc_297_, 9, v_traceState_278_);
lean_ctor_set(v_reuseFailAlloc_297_, 10, v_snapshotTasks_279_);
lean_ctor_set(v_reuseFailAlloc_297_, 11, v_prevLinterStates_280_);
lean_ctor_set(v_reuseFailAlloc_297_, 12, v_codeQualityEntryTasks_281_);
v___x_293_ = v_reuseFailAlloc_297_;
goto v_reusejp_292_;
}
v_reusejp_292_:
{
lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; 
v___x_294_ = lean_st_ref_put(v___y_267_, v___x_293_);
v___x_295_ = lean_box(0);
v___x_296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_296_, 0, v___x_295_);
return v___x_296_;
}
}
}
v___jp_299_:
{
if (v___y_304_ == 0)
{
lean_dec(v___y_303_);
v___y_266_ = v___y_301_;
v___y_267_ = v___y_300_;
goto v___jp_265_;
}
else
{
lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; 
lean_dec(v_docs_264_);
v___x_305_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__9, &l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__9_once, _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__9);
v___x_306_ = l_Lean_MessageData_ofConstName(v___y_301_, v___x_259_);
v___x_307_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_307_, 0, v___x_305_);
lean_ctor_set(v___x_307_, 1, v___x_306_);
v___x_308_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__11, &l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__11_once, _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__11);
v___x_309_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_309_, 0, v___x_307_);
lean_ctor_set(v___x_309_, 1, v___x_308_);
v___x_310_ = l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__1___redArg(v___y_303_, v___x_309_, v___y_302_, v___y_300_);
lean_dec(v___y_303_);
return v___x_310_;
}
}
v___jp_311_:
{
lean_object* v___x_316_; lean_object* v_env_317_; uint8_t v___x_318_; 
v___x_316_ = lean_st_ref_get(v___y_315_);
v_env_317_ = lean_ctor_get(v___x_316_, 0);
lean_inc_ref(v_env_317_);
lean_dec(v___x_316_);
v___x_318_ = l_Lean_Parser_Tactic_Doc_isTactic(v_env_317_, v___y_312_);
if (v___x_318_ == 0)
{
v___y_300_ = v___y_315_;
v___y_301_ = v___y_312_;
v___y_302_ = v___y_314_;
v___y_303_ = v___y_313_;
v___y_304_ = v___x_261_;
goto v___jp_299_;
}
else
{
v___y_300_ = v___y_315_;
v___y_301_ = v___y_312_;
v___y_302_ = v___y_314_;
v___y_303_ = v___y_313_;
v___y_304_ = v___x_259_;
goto v___jp_299_;
}
}
v___jp_319_:
{
lean_object* v___x_321_; lean_object* v___f_322_; lean_object* v___x_323_; 
v___x_321_ = lean_box(0);
lean_inc(v___y_320_);
v___f_322_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Doc_elabTacticExtension___lam__0___boxed), 9, 2);
lean_closure_set(v___f_322_, 0, v___y_320_);
lean_closure_set(v___f_322_, 1, v___x_321_);
v___x_323_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___f_322_, v_a_250_, v_a_251_);
if (lean_obj_tag(v___x_323_) == 0)
{
lean_object* v_a_324_; lean_object* v___x_325_; lean_object* v_env_326_; lean_object* v___x_327_; 
v_a_324_ = lean_ctor_get(v___x_323_, 0);
lean_inc_n(v_a_324_, 2);
lean_dec_ref_known(v___x_323_, 1);
v___x_325_ = lean_st_ref_get(v_a_251_);
v_env_326_ = lean_ctor_get(v___x_325_, 0);
lean_inc_ref(v_env_326_);
lean_dec(v___x_325_);
v___x_327_ = l_Lean_Parser_Tactic_Doc_alternativeOfTactic(v_env_326_, v_a_324_);
if (lean_obj_tag(v___x_327_) == 1)
{
lean_object* v_val_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; 
lean_dec(v_docs_264_);
v_val_328_ = lean_ctor_get(v___x_327_, 0);
lean_inc(v_val_328_);
lean_dec_ref_known(v___x_327_, 1);
v___x_329_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__9, &l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__9_once, _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__9);
v___x_330_ = l_Lean_MessageData_ofConstName(v_a_324_, v___x_259_);
v___x_331_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_331_, 0, v___x_329_);
lean_ctor_set(v___x_331_, 1, v___x_330_);
v___x_332_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__13, &l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__13_once, _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__13);
v___x_333_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_333_, 0, v___x_331_);
lean_ctor_set(v___x_333_, 1, v___x_332_);
v___x_334_ = l_Lean_MessageData_ofConstName(v_val_328_, v___x_259_);
v___x_335_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_335_, 0, v___x_333_);
lean_ctor_set(v___x_335_, 1, v___x_334_);
v___x_336_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_336_, 0, v___x_335_);
lean_ctor_set(v___x_336_, 1, v___x_329_);
v___x_337_ = l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__1___redArg(v___y_320_, v___x_336_, v_a_250_, v_a_251_);
lean_dec(v___y_320_);
return v___x_337_;
}
else
{
lean_dec(v___x_327_);
v___y_312_ = v_a_324_;
v___y_313_ = v___y_320_;
v___y_314_ = v_a_250_;
v___y_315_ = v_a_251_;
goto v___jp_311_;
}
}
else
{
lean_object* v_a_338_; lean_object* v___x_340_; uint8_t v_isShared_341_; uint8_t v_isSharedCheck_345_; 
lean_dec(v___y_320_);
lean_dec(v_docs_264_);
v_a_338_ = lean_ctor_get(v___x_323_, 0);
v_isSharedCheck_345_ = !lean_is_exclusive(v___x_323_);
if (v_isSharedCheck_345_ == 0)
{
v___x_340_ = v___x_323_;
v_isShared_341_ = v_isSharedCheck_345_;
goto v_resetjp_339_;
}
else
{
lean_inc(v_a_338_);
lean_dec(v___x_323_);
v___x_340_ = lean_box(0);
v_isShared_341_ = v_isSharedCheck_345_;
goto v_resetjp_339_;
}
v_resetjp_339_:
{
lean_object* v___x_343_; 
if (v_isShared_341_ == 0)
{
v___x_343_ = v___x_340_;
goto v_reusejp_342_;
}
else
{
lean_object* v_reuseFailAlloc_344_; 
v_reuseFailAlloc_344_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_344_, 0, v_a_338_);
v___x_343_ = v_reuseFailAlloc_344_;
goto v_reusejp_342_;
}
v_reusejp_342_:
{
return v___x_343_;
}
}
}
}
v___jp_346_:
{
lean_object* v___x_347_; lean_object* v___x_348_; 
v___x_347_ = lean_unsigned_to_nat(2u);
v___x_348_ = l_Lean_Syntax_getArg(v_x_249_, v___x_347_);
lean_dec(v_x_249_);
if (v___x_259_ == 0)
{
lean_object* v___x_349_; uint8_t v___x_350_; 
v___x_349_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__15));
lean_inc(v___x_348_);
v___x_350_ = l_Lean_Syntax_isOfKind(v___x_348_, v___x_349_);
if (v___x_350_ == 0)
{
lean_object* v___x_351_; lean_object* v___x_352_; 
lean_dec(v___x_348_);
lean_dec(v_docs_264_);
v___x_351_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__6, &l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__6_once, _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__6);
v___x_352_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0___redArg(v___x_351_, v_a_250_, v_a_251_);
return v___x_352_;
}
else
{
v___y_320_ = v___x_348_;
goto v___jp_319_;
}
}
else
{
v___y_320_ = v___x_348_;
goto v___jp_319_;
}
}
}
}
else
{
lean_object* v___x_357_; lean_object* v_cmd_358_; lean_object* v___x_359_; lean_object* v___x_360_; 
lean_dec(v___x_258_);
v___x_357_ = lean_unsigned_to_nat(1u);
v_cmd_358_ = l_Lean_Syntax_getArg(v_x_249_, v___x_357_);
lean_dec(v_x_249_);
v___x_359_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__19, &l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__19_once, _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__19);
v___x_360_ = l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__1___redArg(v_cmd_358_, v___x_359_, v_a_250_, v_a_251_);
lean_dec(v_cmd_358_);
return v___x_360_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___boxed(lean_object* v_x_361_, lean_object* v_a_362_, lean_object* v_a_363_, lean_object* v_a_364_){
_start:
{
lean_object* v_res_365_; 
v_res_365_ = l_Lean_Elab_Tactic_Doc_elabTacticExtension(v_x_361_, v_a_362_, v_a_363_);
lean_dec(v_a_363_);
lean_dec_ref(v_a_362_);
return v_res_365_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0(lean_object* v_msgData_366_, lean_object* v___y_367_, lean_object* v___y_368_){
_start:
{
lean_object* v___x_370_; 
v___x_370_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg(v_msgData_366_, v___y_368_);
return v___x_370_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___boxed(lean_object* v_msgData_371_, lean_object* v___y_372_, lean_object* v___y_373_, lean_object* v___y_374_){
_start:
{
lean_object* v_res_375_; 
v_res_375_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0(v_msgData_371_, v___y_372_, v___y_373_);
lean_dec(v___y_373_);
lean_dec_ref(v___y_372_);
return v_res_375_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0(lean_object* v_00_u03b1_376_, lean_object* v_msg_377_, lean_object* v___y_378_, lean_object* v___y_379_){
_start:
{
lean_object* v___x_381_; 
v___x_381_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0___redArg(v_msg_377_, v___y_378_, v___y_379_);
return v___x_381_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0___boxed(lean_object* v_00_u03b1_382_, lean_object* v_msg_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_){
_start:
{
lean_object* v_res_387_; 
v_res_387_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0(v_00_u03b1_382_, v_msg_383_, v___y_384_, v___y_385_);
lean_dec(v___y_385_);
lean_dec_ref(v___y_384_);
return v_res_387_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__1(lean_object* v_00_u03b1_388_, lean_object* v_ref_389_, lean_object* v_msg_390_, lean_object* v___y_391_, lean_object* v___y_392_){
_start:
{
lean_object* v___x_394_; 
v___x_394_ = l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__1___redArg(v_ref_389_, v_msg_390_, v___y_391_, v___y_392_);
return v___x_394_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__1___boxed(lean_object* v_00_u03b1_395_, lean_object* v_ref_396_, lean_object* v_msg_397_, lean_object* v___y_398_, lean_object* v___y_399_, lean_object* v___y_400_){
_start:
{
lean_object* v_res_401_; 
v_res_401_ = l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__1(v_00_u03b1_395_, v_ref_396_, v_msg_397_, v___y_398_, v___y_399_);
lean_dec(v___y_399_);
lean_dec_ref(v___y_398_);
lean_dec(v_ref_396_);
return v_res_401_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1(lean_object* v_msgData_402_, lean_object* v_macroStack_403_, lean_object* v___y_404_, lean_object* v___y_405_){
_start:
{
lean_object* v___x_407_; 
v___x_407_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1___redArg(v_msgData_402_, v_macroStack_403_, v___y_405_);
return v___x_407_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1___boxed(lean_object* v_msgData_408_, lean_object* v_macroStack_409_, lean_object* v___y_410_, lean_object* v___y_411_, lean_object* v___y_412_){
_start:
{
lean_object* v_res_413_; 
v_res_413_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1(v_msgData_408_, v_macroStack_409_, v___y_410_, v___y_411_);
lean_dec(v___y_411_);
lean_dec_ref(v___y_410_);
return v_res_413_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1(){
_start:
{
lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; 
v___x_425_ = l_Lean_Elab_Command_commandElabAttribute;
v___x_426_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__4));
v___x_427_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__4));
v___x_428_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Doc_elabTacticExtension___boxed), 4, 0);
v___x_429_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_425_, v___x_426_, v___x_427_, v___x_428_);
return v___x_429_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___boxed(lean_object* v_a_430_){
_start:
{
lean_object* v_res_431_; 
v_res_431_ = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1();
return v_res_431_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3(){
_start:
{
lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; 
v___x_458_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__4));
v___x_459_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__6));
v___x_460_ = l_Lean_addBuiltinDeclarationRanges(v___x_458_, v___x_459_);
return v___x_460_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___boxed(lean_object* v_a_461_){
_start:
{
lean_object* v_res_462_; 
v_res_462_ = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3();
return v_res_462_;
}
}
static lean_object* _init_l_Lean_getDocStringText___at___00Lean_Elab_Tactic_Doc_elabRegisterTacticTag_spec__0___closed__1(void){
_start:
{
lean_object* v___x_464_; lean_object* v___x_465_; 
v___x_464_ = ((lean_object*)(l_Lean_getDocStringText___at___00Lean_Elab_Tactic_Doc_elabRegisterTacticTag_spec__0___closed__0));
v___x_465_ = l_Lean_stringToMessageData(v___x_464_);
return v___x_465_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDocStringText___at___00Lean_Elab_Tactic_Doc_elabRegisterTacticTag_spec__0(lean_object* v_stx_467_, lean_object* v___y_468_, lean_object* v___y_469_){
_start:
{
lean_object* v_val_478_; lean_object* v___x_485_; lean_object* v___x_486_; 
v___x_485_ = lean_unsigned_to_nat(1u);
v___x_486_ = l_Lean_Syntax_getArg(v_stx_467_, v___x_485_);
switch(lean_obj_tag(v___x_486_))
{
case 2:
{
lean_object* v_val_487_; 
lean_dec(v_stx_467_);
v_val_487_ = lean_ctor_get(v___x_486_, 1);
lean_inc_ref(v_val_487_);
lean_dec_ref_known(v___x_486_, 2);
v_val_478_ = v_val_487_;
goto v___jp_477_;
}
case 1:
{
lean_object* v_kind_488_; 
v_kind_488_ = lean_ctor_get(v___x_486_, 1);
lean_inc(v_kind_488_);
if (lean_obj_tag(v_kind_488_) == 1)
{
lean_object* v_pre_489_; 
v_pre_489_ = lean_ctor_get(v_kind_488_, 0);
lean_inc(v_pre_489_);
if (lean_obj_tag(v_pre_489_) == 1)
{
lean_object* v_pre_490_; 
v_pre_490_ = lean_ctor_get(v_pre_489_, 0);
lean_inc(v_pre_490_);
if (lean_obj_tag(v_pre_490_) == 1)
{
lean_object* v_pre_491_; 
v_pre_491_ = lean_ctor_get(v_pre_490_, 0);
lean_inc(v_pre_491_);
if (lean_obj_tag(v_pre_491_) == 1)
{
lean_object* v_pre_492_; 
v_pre_492_ = lean_ctor_get(v_pre_491_, 0);
if (lean_obj_tag(v_pre_492_) == 0)
{
lean_object* v_str_493_; lean_object* v_str_494_; lean_object* v_str_495_; lean_object* v_str_496_; lean_object* v___x_497_; uint8_t v___x_498_; 
v_str_493_ = lean_ctor_get(v_kind_488_, 1);
lean_inc_ref(v_str_493_);
lean_dec_ref_known(v_kind_488_, 2);
v_str_494_ = lean_ctor_get(v_pre_489_, 1);
lean_inc_ref(v_str_494_);
lean_dec_ref_known(v_pre_489_, 2);
v_str_495_ = lean_ctor_get(v_pre_490_, 1);
lean_inc_ref(v_str_495_);
lean_dec_ref_known(v_pre_490_, 2);
v_str_496_ = lean_ctor_get(v_pre_491_, 1);
lean_inc_ref(v_str_496_);
lean_dec_ref_known(v_pre_491_, 2);
v___x_497_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__0));
v___x_498_ = lean_string_dec_eq(v_str_496_, v___x_497_);
lean_dec_ref(v_str_496_);
if (v___x_498_ == 0)
{
lean_dec_ref(v_str_495_);
lean_dec_ref(v_str_494_);
lean_dec_ref(v_str_493_);
lean_dec_ref_known(v___x_486_, 3);
goto v___jp_471_;
}
else
{
lean_object* v___x_499_; uint8_t v___x_500_; 
v___x_499_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__1));
v___x_500_ = lean_string_dec_eq(v_str_495_, v___x_499_);
lean_dec_ref(v_str_495_);
if (v___x_500_ == 0)
{
lean_dec_ref(v_str_494_);
lean_dec_ref(v_str_493_);
lean_dec_ref_known(v___x_486_, 3);
goto v___jp_471_;
}
else
{
lean_object* v___x_501_; uint8_t v___x_502_; 
v___x_501_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__2));
v___x_502_ = lean_string_dec_eq(v_str_494_, v___x_501_);
lean_dec_ref(v_str_494_);
if (v___x_502_ == 0)
{
lean_dec_ref(v_str_493_);
lean_dec_ref_known(v___x_486_, 3);
goto v___jp_471_;
}
else
{
lean_object* v___x_503_; uint8_t v___x_504_; 
v___x_503_ = ((lean_object*)(l_Lean_getDocStringText___at___00Lean_Elab_Tactic_Doc_elabRegisterTacticTag_spec__0___closed__2));
v___x_504_ = lean_string_dec_eq(v_str_493_, v___x_503_);
lean_dec_ref(v_str_493_);
if (v___x_504_ == 0)
{
lean_dec_ref_known(v___x_486_, 3);
goto v___jp_471_;
}
else
{
lean_object* v___x_505_; lean_object* v___x_506_; 
v___x_505_ = lean_unsigned_to_nat(0u);
v___x_506_ = l_Lean_Syntax_getArg(v___x_486_, v___x_505_);
lean_dec_ref_known(v___x_486_, 3);
if (lean_obj_tag(v___x_506_) == 2)
{
lean_object* v_val_507_; 
lean_dec(v_stx_467_);
v_val_507_ = lean_ctor_get(v___x_506_, 1);
lean_inc_ref(v_val_507_);
lean_dec_ref_known(v___x_506_, 2);
v_val_478_ = v_val_507_;
goto v___jp_477_;
}
else
{
lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; 
lean_dec(v___x_506_);
v___x_508_ = lean_obj_once(&l_Lean_getDocStringText___at___00Lean_Elab_Tactic_Doc_elabRegisterTacticTag_spec__0___closed__1, &l_Lean_getDocStringText___at___00Lean_Elab_Tactic_Doc_elabRegisterTacticTag_spec__0___closed__1_once, _init_l_Lean_getDocStringText___at___00Lean_Elab_Tactic_Doc_elabRegisterTacticTag_spec__0___closed__1);
lean_inc(v_stx_467_);
v___x_509_ = l_Lean_MessageData_ofSyntax(v_stx_467_);
v___x_510_ = l_Lean_indentD(v___x_509_);
v___x_511_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_511_, 0, v___x_508_);
lean_ctor_set(v___x_511_, 1, v___x_510_);
v___x_512_ = l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__1___redArg(v_stx_467_, v___x_511_, v___y_468_, v___y_469_);
lean_dec(v_stx_467_);
return v___x_512_;
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_pre_491_, 2);
lean_dec_ref_known(v_pre_490_, 2);
lean_dec_ref_known(v_pre_489_, 2);
lean_dec_ref_known(v_kind_488_, 2);
lean_dec_ref_known(v___x_486_, 3);
goto v___jp_471_;
}
}
else
{
lean_dec(v_pre_491_);
lean_dec_ref_known(v_pre_490_, 2);
lean_dec_ref_known(v_pre_489_, 2);
lean_dec_ref_known(v_kind_488_, 2);
lean_dec_ref_known(v___x_486_, 3);
goto v___jp_471_;
}
}
else
{
lean_dec_ref_known(v_pre_489_, 2);
lean_dec(v_pre_490_);
lean_dec_ref_known(v_kind_488_, 2);
lean_dec_ref_known(v___x_486_, 3);
goto v___jp_471_;
}
}
else
{
lean_dec_ref_known(v_kind_488_, 2);
lean_dec(v_pre_489_);
lean_dec_ref_known(v___x_486_, 3);
goto v___jp_471_;
}
}
else
{
lean_dec(v_kind_488_);
lean_dec_ref_known(v___x_486_, 3);
goto v___jp_471_;
}
}
default: 
{
lean_dec(v___x_486_);
goto v___jp_471_;
}
}
v___jp_471_:
{
lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; 
v___x_472_ = lean_obj_once(&l_Lean_getDocStringText___at___00Lean_Elab_Tactic_Doc_elabRegisterTacticTag_spec__0___closed__1, &l_Lean_getDocStringText___at___00Lean_Elab_Tactic_Doc_elabRegisterTacticTag_spec__0___closed__1_once, _init_l_Lean_getDocStringText___at___00Lean_Elab_Tactic_Doc_elabRegisterTacticTag_spec__0___closed__1);
lean_inc(v_stx_467_);
v___x_473_ = l_Lean_MessageData_ofSyntax(v_stx_467_);
v___x_474_ = l_Lean_indentD(v___x_473_);
v___x_475_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_475_, 0, v___x_472_);
lean_ctor_set(v___x_475_, 1, v___x_474_);
v___x_476_ = l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__1___redArg(v_stx_467_, v___x_475_, v___y_468_, v___y_469_);
lean_dec(v_stx_467_);
return v___x_476_;
}
v___jp_477_:
{
lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; 
v___x_479_ = lean_unsigned_to_nat(0u);
v___x_480_ = lean_string_utf8_byte_size(v_val_478_);
v___x_481_ = lean_unsigned_to_nat(2u);
v___x_482_ = lean_nat_sub(v___x_480_, v___x_481_);
v___x_483_ = lean_string_utf8_extract(v_val_478_, v___x_479_, v___x_482_);
lean_dec(v___x_482_);
lean_dec_ref(v_val_478_);
v___x_484_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_484_, 0, v___x_483_);
return v___x_484_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getDocStringText___at___00Lean_Elab_Tactic_Doc_elabRegisterTacticTag_spec__0___boxed(lean_object* v_stx_513_, lean_object* v___y_514_, lean_object* v___y_515_, lean_object* v___y_516_){
_start:
{
lean_object* v_res_517_; 
v_res_517_ = l_Lean_getDocStringText___at___00Lean_Elab_Tactic_Doc_elabRegisterTacticTag_spec__0(v_stx_513_, v___y_514_, v___y_515_);
lean_dec(v___y_515_);
lean_dec_ref(v___y_514_);
return v_res_517_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__1(void){
_start:
{
lean_object* v___x_519_; lean_object* v___x_520_; 
v___x_519_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__0));
v___x_520_ = l_Lean_stringToMessageData(v___x_519_);
return v___x_520_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag(lean_object* v_x_530_, lean_object* v_a_531_, lean_object* v_a_532_){
_start:
{
lean_object* v___y_535_; lean_object* v___y_536_; lean_object* v___y_537_; lean_object* v_a_538_; lean_object* v_doc_573_; lean_object* v___y_574_; lean_object* v___y_575_; lean_object* v___x_607_; uint8_t v___x_608_; 
v___x_607_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__5));
lean_inc(v_x_530_);
v___x_608_ = l_Lean_Syntax_isOfKind(v_x_530_, v___x_607_);
if (v___x_608_ == 0)
{
lean_object* v___x_609_; lean_object* v___x_610_; 
lean_dec(v_x_530_);
v___x_609_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__1, &l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__1_once, _init_l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__1);
v___x_610_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0___redArg(v___x_609_, v_a_531_, v_a_532_);
return v___x_610_;
}
else
{
lean_object* v___x_611_; lean_object* v___x_612_; uint8_t v___x_613_; 
v___x_611_ = lean_unsigned_to_nat(0u);
v___x_612_ = l_Lean_Syntax_getArg(v_x_530_, v___x_611_);
v___x_613_ = l_Lean_Syntax_isNone(v___x_612_);
if (v___x_613_ == 0)
{
lean_object* v___x_614_; uint8_t v___x_615_; 
v___x_614_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_612_);
v___x_615_ = l_Lean_Syntax_matchesNull(v___x_612_, v___x_614_);
if (v___x_615_ == 0)
{
lean_object* v___x_616_; lean_object* v___x_617_; 
lean_dec(v___x_612_);
lean_dec(v_x_530_);
v___x_616_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__1, &l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__1_once, _init_l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__1);
v___x_617_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0___redArg(v___x_616_, v_a_531_, v_a_532_);
return v___x_617_;
}
else
{
lean_object* v_doc_618_; 
v_doc_618_ = l_Lean_Syntax_getArg(v___x_612_, v___x_611_);
lean_dec(v___x_612_);
if (v___x_613_ == 0)
{
lean_object* v___x_621_; uint8_t v___x_622_; 
v___x_621_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__17));
lean_inc(v_doc_618_);
v___x_622_ = l_Lean_Syntax_isOfKind(v_doc_618_, v___x_621_);
if (v___x_622_ == 0)
{
lean_object* v___x_623_; lean_object* v___x_624_; 
lean_dec(v_doc_618_);
lean_dec(v_x_530_);
v___x_623_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__1, &l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__1_once, _init_l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__1);
v___x_624_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0___redArg(v___x_623_, v_a_531_, v_a_532_);
return v___x_624_;
}
else
{
goto v___jp_619_;
}
}
else
{
goto v___jp_619_;
}
v___jp_619_:
{
lean_object* v___x_620_; 
v___x_620_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_620_, 0, v_doc_618_);
v_doc_573_ = v___x_620_;
v___y_574_ = v_a_531_;
v___y_575_ = v_a_532_;
goto v___jp_572_;
}
}
}
else
{
lean_object* v___x_625_; 
lean_dec(v___x_612_);
v___x_625_ = lean_box(0);
v_doc_573_ = v___x_625_;
v___y_574_ = v_a_531_;
v___y_575_ = v_a_532_;
goto v___jp_572_;
}
}
v___jp_534_:
{
lean_object* v___x_539_; lean_object* v_env_540_; lean_object* v_messages_541_; lean_object* v_scopes_542_; lean_object* v_usedQuotCtxts_543_; lean_object* v_nextMacroScope_544_; lean_object* v_maxRecDepth_545_; lean_object* v_ngen_546_; lean_object* v_auxDeclNGen_547_; lean_object* v_infoState_548_; lean_object* v_traceState_549_; lean_object* v_snapshotTasks_550_; lean_object* v_prevLinterStates_551_; lean_object* v_codeQualityEntryTasks_552_; lean_object* v___x_554_; uint8_t v_isShared_555_; uint8_t v_isSharedCheck_571_; 
v___x_539_ = lean_st_ref_take(v___y_536_);
v_env_540_ = lean_ctor_get(v___x_539_, 0);
v_messages_541_ = lean_ctor_get(v___x_539_, 1);
v_scopes_542_ = lean_ctor_get(v___x_539_, 2);
v_usedQuotCtxts_543_ = lean_ctor_get(v___x_539_, 3);
v_nextMacroScope_544_ = lean_ctor_get(v___x_539_, 4);
v_maxRecDepth_545_ = lean_ctor_get(v___x_539_, 5);
v_ngen_546_ = lean_ctor_get(v___x_539_, 6);
v_auxDeclNGen_547_ = lean_ctor_get(v___x_539_, 7);
v_infoState_548_ = lean_ctor_get(v___x_539_, 8);
v_traceState_549_ = lean_ctor_get(v___x_539_, 9);
v_snapshotTasks_550_ = lean_ctor_get(v___x_539_, 10);
v_prevLinterStates_551_ = lean_ctor_get(v___x_539_, 11);
v_codeQualityEntryTasks_552_ = lean_ctor_get(v___x_539_, 12);
v_isSharedCheck_571_ = !lean_is_exclusive(v___x_539_);
if (v_isSharedCheck_571_ == 0)
{
v___x_554_ = v___x_539_;
v_isShared_555_ = v_isSharedCheck_571_;
goto v_resetjp_553_;
}
else
{
lean_inc(v_codeQualityEntryTasks_552_);
lean_inc(v_prevLinterStates_551_);
lean_inc(v_snapshotTasks_550_);
lean_inc(v_traceState_549_);
lean_inc(v_infoState_548_);
lean_inc(v_auxDeclNGen_547_);
lean_inc(v_ngen_546_);
lean_inc(v_maxRecDepth_545_);
lean_inc(v_nextMacroScope_544_);
lean_inc(v_usedQuotCtxts_543_);
lean_inc(v_scopes_542_);
lean_inc(v_messages_541_);
lean_inc(v_env_540_);
lean_dec(v___x_539_);
v___x_554_ = lean_box(0);
v_isShared_555_ = v_isSharedCheck_571_;
goto v_resetjp_553_;
}
v_resetjp_553_:
{
lean_object* v___x_556_; lean_object* v_toEnvExtension_557_; lean_object* v_asyncMode_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_567_; 
v___x_556_ = l_Lean_Parser_Tactic_Doc_knownTacticTagExt;
v_toEnvExtension_557_ = lean_ctor_get(v___x_556_, 0);
v_asyncMode_558_ = lean_ctor_get(v_toEnvExtension_557_, 2);
v___x_559_ = lean_box(0);
v___x_560_ = l_Lean_TSyntax_getId(v___y_537_);
lean_dec(v___y_537_);
v___x_561_ = l_Lean_TSyntax_getString(v___y_535_);
lean_dec(v___y_535_);
v___x_562_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_562_, 0, v___x_561_);
lean_ctor_set(v___x_562_, 1, v_a_538_);
v___x_563_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_563_, 0, v___x_560_);
lean_ctor_set(v___x_563_, 1, v___x_562_);
v___x_564_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__7, &l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__7_once, _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__7);
v___x_565_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_556_, v_env_540_, v___x_563_, v_asyncMode_558_, v___x_564_);
if (v_isShared_555_ == 0)
{
lean_ctor_set(v___x_554_, 0, v___x_565_);
v___x_567_ = v___x_554_;
goto v_reusejp_566_;
}
else
{
lean_object* v_reuseFailAlloc_570_; 
v_reuseFailAlloc_570_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_570_, 0, v___x_565_);
lean_ctor_set(v_reuseFailAlloc_570_, 1, v_messages_541_);
lean_ctor_set(v_reuseFailAlloc_570_, 2, v_scopes_542_);
lean_ctor_set(v_reuseFailAlloc_570_, 3, v_usedQuotCtxts_543_);
lean_ctor_set(v_reuseFailAlloc_570_, 4, v_nextMacroScope_544_);
lean_ctor_set(v_reuseFailAlloc_570_, 5, v_maxRecDepth_545_);
lean_ctor_set(v_reuseFailAlloc_570_, 6, v_ngen_546_);
lean_ctor_set(v_reuseFailAlloc_570_, 7, v_auxDeclNGen_547_);
lean_ctor_set(v_reuseFailAlloc_570_, 8, v_infoState_548_);
lean_ctor_set(v_reuseFailAlloc_570_, 9, v_traceState_549_);
lean_ctor_set(v_reuseFailAlloc_570_, 10, v_snapshotTasks_550_);
lean_ctor_set(v_reuseFailAlloc_570_, 11, v_prevLinterStates_551_);
lean_ctor_set(v_reuseFailAlloc_570_, 12, v_codeQualityEntryTasks_552_);
v___x_567_ = v_reuseFailAlloc_570_;
goto v_reusejp_566_;
}
v_reusejp_566_:
{
lean_object* v___x_568_; lean_object* v___x_569_; 
v___x_568_ = lean_st_ref_put(v___y_536_, v___x_567_);
v___x_569_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_569_, 0, v___x_559_);
return v___x_569_;
}
}
}
v___jp_572_:
{
lean_object* v___x_576_; lean_object* v_tag_577_; lean_object* v___x_578_; uint8_t v___x_579_; 
v___x_576_ = lean_unsigned_to_nat(2u);
v_tag_577_ = l_Lean_Syntax_getArg(v_x_530_, v___x_576_);
v___x_578_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__15));
lean_inc(v_tag_577_);
v___x_579_ = l_Lean_Syntax_isOfKind(v_tag_577_, v___x_578_);
if (v___x_579_ == 0)
{
lean_object* v___x_580_; lean_object* v___x_581_; 
lean_dec(v_tag_577_);
lean_dec(v_doc_573_);
lean_dec(v_x_530_);
v___x_580_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__1, &l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__1_once, _init_l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__1);
v___x_581_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0___redArg(v___x_580_, v___y_574_, v___y_575_);
return v___x_581_;
}
else
{
lean_object* v___x_582_; lean_object* v_user_583_; lean_object* v___x_584_; uint8_t v___x_585_; 
v___x_582_ = lean_unsigned_to_nat(3u);
v_user_583_ = l_Lean_Syntax_getArg(v_x_530_, v___x_582_);
lean_dec(v_x_530_);
v___x_584_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__3));
lean_inc(v_user_583_);
v___x_585_ = l_Lean_Syntax_isOfKind(v_user_583_, v___x_584_);
if (v___x_585_ == 0)
{
lean_object* v___x_586_; lean_object* v___x_587_; 
lean_dec(v_user_583_);
lean_dec(v_tag_577_);
lean_dec(v_doc_573_);
v___x_586_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__1, &l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__1_once, _init_l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__1);
v___x_587_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0___redArg(v___x_586_, v___y_574_, v___y_575_);
return v___x_587_;
}
else
{
if (lean_obj_tag(v_doc_573_) == 0)
{
lean_object* v___x_588_; 
v___x_588_ = lean_box(0);
v___y_535_ = v_user_583_;
v___y_536_ = v___y_575_;
v___y_537_ = v_tag_577_;
v_a_538_ = v___x_588_;
goto v___jp_534_;
}
else
{
lean_object* v_val_589_; lean_object* v___x_591_; uint8_t v_isShared_592_; uint8_t v_isSharedCheck_606_; 
v_val_589_ = lean_ctor_get(v_doc_573_, 0);
v_isSharedCheck_606_ = !lean_is_exclusive(v_doc_573_);
if (v_isSharedCheck_606_ == 0)
{
v___x_591_ = v_doc_573_;
v_isShared_592_ = v_isSharedCheck_606_;
goto v_resetjp_590_;
}
else
{
lean_inc(v_val_589_);
lean_dec(v_doc_573_);
v___x_591_ = lean_box(0);
v_isShared_592_ = v_isSharedCheck_606_;
goto v_resetjp_590_;
}
v_resetjp_590_:
{
lean_object* v___x_593_; 
v___x_593_ = l_Lean_getDocStringText___at___00Lean_Elab_Tactic_Doc_elabRegisterTacticTag_spec__0(v_val_589_, v___y_574_, v___y_575_);
if (lean_obj_tag(v___x_593_) == 0)
{
lean_object* v_a_594_; lean_object* v___x_596_; 
v_a_594_ = lean_ctor_get(v___x_593_, 0);
lean_inc(v_a_594_);
lean_dec_ref_known(v___x_593_, 1);
if (v_isShared_592_ == 0)
{
lean_ctor_set(v___x_591_, 0, v_a_594_);
v___x_596_ = v___x_591_;
goto v_reusejp_595_;
}
else
{
lean_object* v_reuseFailAlloc_597_; 
v_reuseFailAlloc_597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_597_, 0, v_a_594_);
v___x_596_ = v_reuseFailAlloc_597_;
goto v_reusejp_595_;
}
v_reusejp_595_:
{
v___y_535_ = v_user_583_;
v___y_536_ = v___y_575_;
v___y_537_ = v_tag_577_;
v_a_538_ = v___x_596_;
goto v___jp_534_;
}
}
else
{
lean_object* v_a_598_; lean_object* v___x_600_; uint8_t v_isShared_601_; uint8_t v_isSharedCheck_605_; 
lean_del_object(v___x_591_);
lean_dec(v_user_583_);
lean_dec(v_tag_577_);
v_a_598_ = lean_ctor_get(v___x_593_, 0);
v_isSharedCheck_605_ = !lean_is_exclusive(v___x_593_);
if (v_isSharedCheck_605_ == 0)
{
v___x_600_ = v___x_593_;
v_isShared_601_ = v_isSharedCheck_605_;
goto v_resetjp_599_;
}
else
{
lean_inc(v_a_598_);
lean_dec(v___x_593_);
v___x_600_ = lean_box(0);
v_isShared_601_ = v_isSharedCheck_605_;
goto v_resetjp_599_;
}
v_resetjp_599_:
{
lean_object* v___x_603_; 
if (v_isShared_601_ == 0)
{
v___x_603_ = v___x_600_;
goto v_reusejp_602_;
}
else
{
lean_object* v_reuseFailAlloc_604_; 
v_reuseFailAlloc_604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_604_, 0, v_a_598_);
v___x_603_ = v_reuseFailAlloc_604_;
goto v_reusejp_602_;
}
v_reusejp_602_:
{
return v___x_603_;
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___boxed(lean_object* v_x_626_, lean_object* v_a_627_, lean_object* v_a_628_, lean_object* v_a_629_){
_start:
{
lean_object* v_res_630_; 
v_res_630_ = l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag(v_x_626_, v_a_627_, v_a_628_);
lean_dec(v_a_628_);
lean_dec_ref(v_a_627_);
return v_res_630_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1(){
_start:
{
lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; 
v___x_639_ = l_Lean_Elab_Command_commandElabAttribute;
v___x_640_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__5));
v___x_641_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1___closed__1));
v___x_642_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___boxed), 4, 0);
v___x_643_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_639_, v___x_640_, v___x_641_, v___x_642_);
return v___x_643_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1___boxed(lean_object* v_a_644_){
_start:
{
lean_object* v_res_645_; 
v_res_645_ = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1();
return v_res_645_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3(){
_start:
{
lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; 
v___x_672_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1___closed__1));
v___x_673_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__6));
v___x_674_ = l_Lean_addBuiltinDeclarationRanges(v___x_672_, v___x_673_);
return v___x_674_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___boxed(lean_object* v_a_675_){
_start:
{
lean_object* v_res_676_; 
v_res_676_ = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3();
return v_res_676_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__1___redArg___lam__0(lean_object* v___x_677_, lean_object* v_x_678_){
_start:
{
if (lean_obj_tag(v_x_678_) == 0)
{
lean_object* v___x_679_; 
v___x_679_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_679_, 0, v___x_677_);
return v___x_679_;
}
else
{
lean_dec_ref(v___x_677_);
lean_inc_ref(v_x_678_);
return v_x_678_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__1___redArg___lam__0___boxed(lean_object* v___x_680_, lean_object* v_x_681_){
_start:
{
lean_object* v_res_682_; 
v_res_682_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__1___redArg___lam__0(v___x_680_, v_x_681_);
lean_dec(v_x_681_);
return v_res_682_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__1___redArg(lean_object* v___x_683_, lean_object* v_k_684_, lean_object* v_t_685_){
_start:
{
if (lean_obj_tag(v_t_685_) == 0)
{
lean_object* v_size_686_; lean_object* v_k_687_; lean_object* v_v_688_; lean_object* v_l_689_; lean_object* v_r_690_; lean_object* v___x_692_; uint8_t v_isShared_693_; uint8_t v_isSharedCheck_1016_; 
v_size_686_ = lean_ctor_get(v_t_685_, 0);
v_k_687_ = lean_ctor_get(v_t_685_, 1);
v_v_688_ = lean_ctor_get(v_t_685_, 2);
v_l_689_ = lean_ctor_get(v_t_685_, 3);
v_r_690_ = lean_ctor_get(v_t_685_, 4);
v_isSharedCheck_1016_ = !lean_is_exclusive(v_t_685_);
if (v_isSharedCheck_1016_ == 0)
{
v___x_692_ = v_t_685_;
v_isShared_693_ = v_isSharedCheck_1016_;
goto v_resetjp_691_;
}
else
{
lean_inc(v_r_690_);
lean_inc(v_l_689_);
lean_inc(v_v_688_);
lean_inc(v_k_687_);
lean_inc(v_size_686_);
lean_dec(v_t_685_);
v___x_692_ = lean_box(0);
v_isShared_693_ = v_isSharedCheck_1016_;
goto v_resetjp_691_;
}
v_resetjp_691_:
{
uint8_t v___x_694_; 
v___x_694_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_684_, v_k_687_);
switch(v___x_694_)
{
case 0:
{
lean_object* v_impl_695_; lean_object* v___x_696_; 
lean_del_object(v___x_692_);
lean_dec(v_size_686_);
v_impl_695_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__1___redArg(v___x_683_, v_k_684_, v_l_689_);
v___x_696_ = l_Std_DTreeMap_Internal_Impl_balance___redArg(v_k_687_, v_v_688_, v_impl_695_, v_r_690_);
return v___x_696_;
}
case 1:
{
lean_object* v___x_697_; lean_object* v___x_698_; 
lean_dec(v_k_687_);
v___x_697_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_697_, 0, v_v_688_);
v___x_698_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__1___redArg___lam__0(v___x_683_, v___x_697_);
lean_dec_ref_known(v___x_697_, 1);
if (lean_obj_tag(v___x_698_) == 0)
{
lean_del_object(v___x_692_);
lean_dec(v_size_686_);
lean_dec(v_k_684_);
if (lean_obj_tag(v_l_689_) == 0)
{
if (lean_obj_tag(v_r_690_) == 0)
{
lean_object* v_size_699_; lean_object* v_k_700_; lean_object* v_v_701_; lean_object* v_l_702_; lean_object* v_r_703_; lean_object* v_size_704_; lean_object* v_k_705_; lean_object* v_v_706_; lean_object* v_l_707_; lean_object* v_r_708_; lean_object* v___x_709_; uint8_t v___x_710_; 
v_size_699_ = lean_ctor_get(v_l_689_, 0);
v_k_700_ = lean_ctor_get(v_l_689_, 1);
v_v_701_ = lean_ctor_get(v_l_689_, 2);
v_l_702_ = lean_ctor_get(v_l_689_, 3);
v_r_703_ = lean_ctor_get(v_l_689_, 4);
lean_inc(v_r_703_);
v_size_704_ = lean_ctor_get(v_r_690_, 0);
v_k_705_ = lean_ctor_get(v_r_690_, 1);
v_v_706_ = lean_ctor_get(v_r_690_, 2);
v_l_707_ = lean_ctor_get(v_r_690_, 3);
lean_inc(v_l_707_);
v_r_708_ = lean_ctor_get(v_r_690_, 4);
v___x_709_ = lean_unsigned_to_nat(1u);
v___x_710_ = lean_nat_dec_lt(v_size_699_, v_size_704_);
if (v___x_710_ == 0)
{
lean_object* v___x_712_; uint8_t v_isShared_713_; uint8_t v_isSharedCheck_846_; 
lean_inc(v_l_702_);
lean_inc(v_v_701_);
lean_inc(v_k_700_);
v_isSharedCheck_846_ = !lean_is_exclusive(v_l_689_);
if (v_isSharedCheck_846_ == 0)
{
lean_object* v_unused_847_; lean_object* v_unused_848_; lean_object* v_unused_849_; lean_object* v_unused_850_; lean_object* v_unused_851_; 
v_unused_847_ = lean_ctor_get(v_l_689_, 4);
lean_dec(v_unused_847_);
v_unused_848_ = lean_ctor_get(v_l_689_, 3);
lean_dec(v_unused_848_);
v_unused_849_ = lean_ctor_get(v_l_689_, 2);
lean_dec(v_unused_849_);
v_unused_850_ = lean_ctor_get(v_l_689_, 1);
lean_dec(v_unused_850_);
v_unused_851_ = lean_ctor_get(v_l_689_, 0);
lean_dec(v_unused_851_);
v___x_712_ = v_l_689_;
v_isShared_713_ = v_isSharedCheck_846_;
goto v_resetjp_711_;
}
else
{
lean_dec(v_l_689_);
v___x_712_ = lean_box(0);
v_isShared_713_ = v_isSharedCheck_846_;
goto v_resetjp_711_;
}
v_resetjp_711_:
{
lean_object* v___x_714_; lean_object* v_tree_715_; 
v___x_714_ = l_Std_DTreeMap_Internal_Impl_maxView___redArg(v_k_700_, v_v_701_, v_l_702_, v_r_703_);
v_tree_715_ = lean_ctor_get(v___x_714_, 2);
lean_inc(v_tree_715_);
if (lean_obj_tag(v_tree_715_) == 0)
{
lean_object* v_k_716_; lean_object* v_v_717_; lean_object* v_size_718_; lean_object* v___x_719_; lean_object* v___x_720_; uint8_t v___x_721_; 
v_k_716_ = lean_ctor_get(v___x_714_, 0);
lean_inc(v_k_716_);
v_v_717_ = lean_ctor_get(v___x_714_, 1);
lean_inc(v_v_717_);
lean_dec_ref(v___x_714_);
v_size_718_ = lean_ctor_get(v_tree_715_, 0);
v___x_719_ = lean_unsigned_to_nat(3u);
v___x_720_ = lean_nat_mul(v___x_719_, v_size_718_);
v___x_721_ = lean_nat_dec_lt(v___x_720_, v_size_704_);
lean_dec(v___x_720_);
if (v___x_721_ == 0)
{
lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_725_; 
lean_dec(v_l_707_);
v___x_722_ = lean_nat_add(v___x_709_, v_size_718_);
v___x_723_ = lean_nat_add(v___x_722_, v_size_704_);
lean_dec(v___x_722_);
if (v_isShared_713_ == 0)
{
lean_ctor_set(v___x_712_, 4, v_r_690_);
lean_ctor_set(v___x_712_, 3, v_tree_715_);
lean_ctor_set(v___x_712_, 2, v_v_717_);
lean_ctor_set(v___x_712_, 1, v_k_716_);
lean_ctor_set(v___x_712_, 0, v___x_723_);
v___x_725_ = v___x_712_;
goto v_reusejp_724_;
}
else
{
lean_object* v_reuseFailAlloc_726_; 
v_reuseFailAlloc_726_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_726_, 0, v___x_723_);
lean_ctor_set(v_reuseFailAlloc_726_, 1, v_k_716_);
lean_ctor_set(v_reuseFailAlloc_726_, 2, v_v_717_);
lean_ctor_set(v_reuseFailAlloc_726_, 3, v_tree_715_);
lean_ctor_set(v_reuseFailAlloc_726_, 4, v_r_690_);
v___x_725_ = v_reuseFailAlloc_726_;
goto v_reusejp_724_;
}
v_reusejp_724_:
{
return v___x_725_;
}
}
else
{
lean_object* v___x_728_; uint8_t v_isShared_729_; uint8_t v_isSharedCheck_781_; 
lean_inc(v_r_708_);
lean_inc(v_v_706_);
lean_inc(v_k_705_);
lean_inc(v_size_704_);
v_isSharedCheck_781_ = !lean_is_exclusive(v_r_690_);
if (v_isSharedCheck_781_ == 0)
{
lean_object* v_unused_782_; lean_object* v_unused_783_; lean_object* v_unused_784_; lean_object* v_unused_785_; lean_object* v_unused_786_; 
v_unused_782_ = lean_ctor_get(v_r_690_, 4);
lean_dec(v_unused_782_);
v_unused_783_ = lean_ctor_get(v_r_690_, 3);
lean_dec(v_unused_783_);
v_unused_784_ = lean_ctor_get(v_r_690_, 2);
lean_dec(v_unused_784_);
v_unused_785_ = lean_ctor_get(v_r_690_, 1);
lean_dec(v_unused_785_);
v_unused_786_ = lean_ctor_get(v_r_690_, 0);
lean_dec(v_unused_786_);
v___x_728_ = v_r_690_;
v_isShared_729_ = v_isSharedCheck_781_;
goto v_resetjp_727_;
}
else
{
lean_dec(v_r_690_);
v___x_728_ = lean_box(0);
v_isShared_729_ = v_isSharedCheck_781_;
goto v_resetjp_727_;
}
v_resetjp_727_:
{
lean_object* v_size_730_; lean_object* v_k_731_; lean_object* v_v_732_; lean_object* v_l_733_; lean_object* v_r_734_; lean_object* v_size_735_; lean_object* v___x_736_; lean_object* v___x_737_; uint8_t v___x_738_; 
v_size_730_ = lean_ctor_get(v_l_707_, 0);
v_k_731_ = lean_ctor_get(v_l_707_, 1);
v_v_732_ = lean_ctor_get(v_l_707_, 2);
v_l_733_ = lean_ctor_get(v_l_707_, 3);
v_r_734_ = lean_ctor_get(v_l_707_, 4);
v_size_735_ = lean_ctor_get(v_r_708_, 0);
v___x_736_ = lean_unsigned_to_nat(2u);
v___x_737_ = lean_nat_mul(v___x_736_, v_size_735_);
v___x_738_ = lean_nat_dec_lt(v_size_730_, v___x_737_);
lean_dec(v___x_737_);
if (v___x_738_ == 0)
{
lean_object* v___x_740_; uint8_t v_isShared_741_; uint8_t v_isSharedCheck_766_; 
lean_inc(v_r_734_);
lean_inc(v_l_733_);
lean_inc(v_v_732_);
lean_inc(v_k_731_);
v_isSharedCheck_766_ = !lean_is_exclusive(v_l_707_);
if (v_isSharedCheck_766_ == 0)
{
lean_object* v_unused_767_; lean_object* v_unused_768_; lean_object* v_unused_769_; lean_object* v_unused_770_; lean_object* v_unused_771_; 
v_unused_767_ = lean_ctor_get(v_l_707_, 4);
lean_dec(v_unused_767_);
v_unused_768_ = lean_ctor_get(v_l_707_, 3);
lean_dec(v_unused_768_);
v_unused_769_ = lean_ctor_get(v_l_707_, 2);
lean_dec(v_unused_769_);
v_unused_770_ = lean_ctor_get(v_l_707_, 1);
lean_dec(v_unused_770_);
v_unused_771_ = lean_ctor_get(v_l_707_, 0);
lean_dec(v_unused_771_);
v___x_740_ = v_l_707_;
v_isShared_741_ = v_isSharedCheck_766_;
goto v_resetjp_739_;
}
else
{
lean_dec(v_l_707_);
v___x_740_ = lean_box(0);
v_isShared_741_ = v_isSharedCheck_766_;
goto v_resetjp_739_;
}
v_resetjp_739_:
{
lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___y_745_; lean_object* v___y_746_; lean_object* v___y_747_; lean_object* v___y_756_; 
v___x_742_ = lean_nat_add(v___x_709_, v_size_718_);
v___x_743_ = lean_nat_add(v___x_742_, v_size_704_);
lean_dec(v_size_704_);
if (lean_obj_tag(v_l_733_) == 0)
{
lean_object* v_size_764_; 
v_size_764_ = lean_ctor_get(v_l_733_, 0);
lean_inc(v_size_764_);
v___y_756_ = v_size_764_;
goto v___jp_755_;
}
else
{
lean_object* v___x_765_; 
v___x_765_ = lean_unsigned_to_nat(0u);
v___y_756_ = v___x_765_;
goto v___jp_755_;
}
v___jp_744_:
{
lean_object* v___x_748_; lean_object* v___x_750_; 
v___x_748_ = lean_nat_add(v___y_745_, v___y_747_);
lean_dec(v___y_747_);
lean_dec(v___y_745_);
if (v_isShared_741_ == 0)
{
lean_ctor_set(v___x_740_, 4, v_r_708_);
lean_ctor_set(v___x_740_, 3, v_r_734_);
lean_ctor_set(v___x_740_, 2, v_v_706_);
lean_ctor_set(v___x_740_, 1, v_k_705_);
lean_ctor_set(v___x_740_, 0, v___x_748_);
v___x_750_ = v___x_740_;
goto v_reusejp_749_;
}
else
{
lean_object* v_reuseFailAlloc_754_; 
v_reuseFailAlloc_754_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_754_, 0, v___x_748_);
lean_ctor_set(v_reuseFailAlloc_754_, 1, v_k_705_);
lean_ctor_set(v_reuseFailAlloc_754_, 2, v_v_706_);
lean_ctor_set(v_reuseFailAlloc_754_, 3, v_r_734_);
lean_ctor_set(v_reuseFailAlloc_754_, 4, v_r_708_);
v___x_750_ = v_reuseFailAlloc_754_;
goto v_reusejp_749_;
}
v_reusejp_749_:
{
lean_object* v___x_752_; 
if (v_isShared_729_ == 0)
{
lean_ctor_set(v___x_728_, 4, v___x_750_);
lean_ctor_set(v___x_728_, 3, v___y_746_);
lean_ctor_set(v___x_728_, 2, v_v_732_);
lean_ctor_set(v___x_728_, 1, v_k_731_);
lean_ctor_set(v___x_728_, 0, v___x_743_);
v___x_752_ = v___x_728_;
goto v_reusejp_751_;
}
else
{
lean_object* v_reuseFailAlloc_753_; 
v_reuseFailAlloc_753_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_753_, 0, v___x_743_);
lean_ctor_set(v_reuseFailAlloc_753_, 1, v_k_731_);
lean_ctor_set(v_reuseFailAlloc_753_, 2, v_v_732_);
lean_ctor_set(v_reuseFailAlloc_753_, 3, v___y_746_);
lean_ctor_set(v_reuseFailAlloc_753_, 4, v___x_750_);
v___x_752_ = v_reuseFailAlloc_753_;
goto v_reusejp_751_;
}
v_reusejp_751_:
{
return v___x_752_;
}
}
}
v___jp_755_:
{
lean_object* v___x_757_; lean_object* v___x_759_; 
v___x_757_ = lean_nat_add(v___x_742_, v___y_756_);
lean_dec(v___y_756_);
lean_dec(v___x_742_);
if (v_isShared_713_ == 0)
{
lean_ctor_set(v___x_712_, 4, v_l_733_);
lean_ctor_set(v___x_712_, 3, v_tree_715_);
lean_ctor_set(v___x_712_, 2, v_v_717_);
lean_ctor_set(v___x_712_, 1, v_k_716_);
lean_ctor_set(v___x_712_, 0, v___x_757_);
v___x_759_ = v___x_712_;
goto v_reusejp_758_;
}
else
{
lean_object* v_reuseFailAlloc_763_; 
v_reuseFailAlloc_763_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_763_, 0, v___x_757_);
lean_ctor_set(v_reuseFailAlloc_763_, 1, v_k_716_);
lean_ctor_set(v_reuseFailAlloc_763_, 2, v_v_717_);
lean_ctor_set(v_reuseFailAlloc_763_, 3, v_tree_715_);
lean_ctor_set(v_reuseFailAlloc_763_, 4, v_l_733_);
v___x_759_ = v_reuseFailAlloc_763_;
goto v_reusejp_758_;
}
v_reusejp_758_:
{
lean_object* v___x_760_; 
v___x_760_ = lean_nat_add(v___x_709_, v_size_735_);
if (lean_obj_tag(v_r_734_) == 0)
{
lean_object* v_size_761_; 
v_size_761_ = lean_ctor_get(v_r_734_, 0);
lean_inc(v_size_761_);
v___y_745_ = v___x_760_;
v___y_746_ = v___x_759_;
v___y_747_ = v_size_761_;
goto v___jp_744_;
}
else
{
lean_object* v___x_762_; 
v___x_762_ = lean_unsigned_to_nat(0u);
v___y_745_ = v___x_760_;
v___y_746_ = v___x_759_;
v___y_747_ = v___x_762_;
goto v___jp_744_;
}
}
}
}
}
else
{
lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_776_; 
v___x_772_ = lean_nat_add(v___x_709_, v_size_718_);
v___x_773_ = lean_nat_add(v___x_772_, v_size_704_);
lean_dec(v_size_704_);
v___x_774_ = lean_nat_add(v___x_772_, v_size_730_);
lean_dec(v___x_772_);
if (v_isShared_729_ == 0)
{
lean_ctor_set(v___x_728_, 4, v_l_707_);
lean_ctor_set(v___x_728_, 3, v_tree_715_);
lean_ctor_set(v___x_728_, 2, v_v_717_);
lean_ctor_set(v___x_728_, 1, v_k_716_);
lean_ctor_set(v___x_728_, 0, v___x_774_);
v___x_776_ = v___x_728_;
goto v_reusejp_775_;
}
else
{
lean_object* v_reuseFailAlloc_780_; 
v_reuseFailAlloc_780_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_780_, 0, v___x_774_);
lean_ctor_set(v_reuseFailAlloc_780_, 1, v_k_716_);
lean_ctor_set(v_reuseFailAlloc_780_, 2, v_v_717_);
lean_ctor_set(v_reuseFailAlloc_780_, 3, v_tree_715_);
lean_ctor_set(v_reuseFailAlloc_780_, 4, v_l_707_);
v___x_776_ = v_reuseFailAlloc_780_;
goto v_reusejp_775_;
}
v_reusejp_775_:
{
lean_object* v___x_778_; 
if (v_isShared_713_ == 0)
{
lean_ctor_set(v___x_712_, 4, v_r_708_);
lean_ctor_set(v___x_712_, 3, v___x_776_);
lean_ctor_set(v___x_712_, 2, v_v_706_);
lean_ctor_set(v___x_712_, 1, v_k_705_);
lean_ctor_set(v___x_712_, 0, v___x_773_);
v___x_778_ = v___x_712_;
goto v_reusejp_777_;
}
else
{
lean_object* v_reuseFailAlloc_779_; 
v_reuseFailAlloc_779_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_779_, 0, v___x_773_);
lean_ctor_set(v_reuseFailAlloc_779_, 1, v_k_705_);
lean_ctor_set(v_reuseFailAlloc_779_, 2, v_v_706_);
lean_ctor_set(v_reuseFailAlloc_779_, 3, v___x_776_);
lean_ctor_set(v_reuseFailAlloc_779_, 4, v_r_708_);
v___x_778_ = v_reuseFailAlloc_779_;
goto v_reusejp_777_;
}
v_reusejp_777_:
{
return v___x_778_;
}
}
}
}
}
}
else
{
lean_object* v___x_788_; uint8_t v_isShared_789_; uint8_t v_isSharedCheck_840_; 
lean_inc(v_r_708_);
lean_inc(v_v_706_);
lean_inc(v_k_705_);
lean_inc(v_size_704_);
v_isSharedCheck_840_ = !lean_is_exclusive(v_r_690_);
if (v_isSharedCheck_840_ == 0)
{
lean_object* v_unused_841_; lean_object* v_unused_842_; lean_object* v_unused_843_; lean_object* v_unused_844_; lean_object* v_unused_845_; 
v_unused_841_ = lean_ctor_get(v_r_690_, 4);
lean_dec(v_unused_841_);
v_unused_842_ = lean_ctor_get(v_r_690_, 3);
lean_dec(v_unused_842_);
v_unused_843_ = lean_ctor_get(v_r_690_, 2);
lean_dec(v_unused_843_);
v_unused_844_ = lean_ctor_get(v_r_690_, 1);
lean_dec(v_unused_844_);
v_unused_845_ = lean_ctor_get(v_r_690_, 0);
lean_dec(v_unused_845_);
v___x_788_ = v_r_690_;
v_isShared_789_ = v_isSharedCheck_840_;
goto v_resetjp_787_;
}
else
{
lean_dec(v_r_690_);
v___x_788_ = lean_box(0);
v_isShared_789_ = v_isSharedCheck_840_;
goto v_resetjp_787_;
}
v_resetjp_787_:
{
if (lean_obj_tag(v_l_707_) == 0)
{
if (lean_obj_tag(v_r_708_) == 0)
{
lean_object* v_k_790_; lean_object* v_v_791_; lean_object* v_size_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_796_; 
v_k_790_ = lean_ctor_get(v___x_714_, 0);
lean_inc(v_k_790_);
v_v_791_ = lean_ctor_get(v___x_714_, 1);
lean_inc(v_v_791_);
lean_dec_ref(v___x_714_);
v_size_792_ = lean_ctor_get(v_l_707_, 0);
v___x_793_ = lean_nat_add(v___x_709_, v_size_704_);
lean_dec(v_size_704_);
v___x_794_ = lean_nat_add(v___x_709_, v_size_792_);
if (v_isShared_789_ == 0)
{
lean_ctor_set(v___x_788_, 4, v_l_707_);
lean_ctor_set(v___x_788_, 3, v_tree_715_);
lean_ctor_set(v___x_788_, 2, v_v_791_);
lean_ctor_set(v___x_788_, 1, v_k_790_);
lean_ctor_set(v___x_788_, 0, v___x_794_);
v___x_796_ = v___x_788_;
goto v_reusejp_795_;
}
else
{
lean_object* v_reuseFailAlloc_800_; 
v_reuseFailAlloc_800_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_800_, 0, v___x_794_);
lean_ctor_set(v_reuseFailAlloc_800_, 1, v_k_790_);
lean_ctor_set(v_reuseFailAlloc_800_, 2, v_v_791_);
lean_ctor_set(v_reuseFailAlloc_800_, 3, v_tree_715_);
lean_ctor_set(v_reuseFailAlloc_800_, 4, v_l_707_);
v___x_796_ = v_reuseFailAlloc_800_;
goto v_reusejp_795_;
}
v_reusejp_795_:
{
lean_object* v___x_798_; 
if (v_isShared_713_ == 0)
{
lean_ctor_set(v___x_712_, 4, v_r_708_);
lean_ctor_set(v___x_712_, 3, v___x_796_);
lean_ctor_set(v___x_712_, 2, v_v_706_);
lean_ctor_set(v___x_712_, 1, v_k_705_);
lean_ctor_set(v___x_712_, 0, v___x_793_);
v___x_798_ = v___x_712_;
goto v_reusejp_797_;
}
else
{
lean_object* v_reuseFailAlloc_799_; 
v_reuseFailAlloc_799_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_799_, 0, v___x_793_);
lean_ctor_set(v_reuseFailAlloc_799_, 1, v_k_705_);
lean_ctor_set(v_reuseFailAlloc_799_, 2, v_v_706_);
lean_ctor_set(v_reuseFailAlloc_799_, 3, v___x_796_);
lean_ctor_set(v_reuseFailAlloc_799_, 4, v_r_708_);
v___x_798_ = v_reuseFailAlloc_799_;
goto v_reusejp_797_;
}
v_reusejp_797_:
{
return v___x_798_;
}
}
}
else
{
lean_object* v_k_801_; lean_object* v_v_802_; lean_object* v_k_803_; lean_object* v_v_804_; lean_object* v___x_806_; uint8_t v_isShared_807_; uint8_t v_isSharedCheck_818_; 
lean_dec(v_size_704_);
v_k_801_ = lean_ctor_get(v___x_714_, 0);
lean_inc(v_k_801_);
v_v_802_ = lean_ctor_get(v___x_714_, 1);
lean_inc(v_v_802_);
lean_dec_ref(v___x_714_);
v_k_803_ = lean_ctor_get(v_l_707_, 1);
v_v_804_ = lean_ctor_get(v_l_707_, 2);
v_isSharedCheck_818_ = !lean_is_exclusive(v_l_707_);
if (v_isSharedCheck_818_ == 0)
{
lean_object* v_unused_819_; lean_object* v_unused_820_; lean_object* v_unused_821_; 
v_unused_819_ = lean_ctor_get(v_l_707_, 4);
lean_dec(v_unused_819_);
v_unused_820_ = lean_ctor_get(v_l_707_, 3);
lean_dec(v_unused_820_);
v_unused_821_ = lean_ctor_get(v_l_707_, 0);
lean_dec(v_unused_821_);
v___x_806_ = v_l_707_;
v_isShared_807_ = v_isSharedCheck_818_;
goto v_resetjp_805_;
}
else
{
lean_inc(v_v_804_);
lean_inc(v_k_803_);
lean_dec(v_l_707_);
v___x_806_ = lean_box(0);
v_isShared_807_ = v_isSharedCheck_818_;
goto v_resetjp_805_;
}
v_resetjp_805_:
{
lean_object* v___x_808_; lean_object* v___x_810_; 
v___x_808_ = lean_unsigned_to_nat(3u);
if (v_isShared_807_ == 0)
{
lean_ctor_set(v___x_806_, 4, v_r_708_);
lean_ctor_set(v___x_806_, 3, v_r_708_);
lean_ctor_set(v___x_806_, 2, v_v_802_);
lean_ctor_set(v___x_806_, 1, v_k_801_);
lean_ctor_set(v___x_806_, 0, v___x_709_);
v___x_810_ = v___x_806_;
goto v_reusejp_809_;
}
else
{
lean_object* v_reuseFailAlloc_817_; 
v_reuseFailAlloc_817_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_817_, 0, v___x_709_);
lean_ctor_set(v_reuseFailAlloc_817_, 1, v_k_801_);
lean_ctor_set(v_reuseFailAlloc_817_, 2, v_v_802_);
lean_ctor_set(v_reuseFailAlloc_817_, 3, v_r_708_);
lean_ctor_set(v_reuseFailAlloc_817_, 4, v_r_708_);
v___x_810_ = v_reuseFailAlloc_817_;
goto v_reusejp_809_;
}
v_reusejp_809_:
{
lean_object* v___x_812_; 
if (v_isShared_789_ == 0)
{
lean_ctor_set(v___x_788_, 3, v_r_708_);
lean_ctor_set(v___x_788_, 0, v___x_709_);
v___x_812_ = v___x_788_;
goto v_reusejp_811_;
}
else
{
lean_object* v_reuseFailAlloc_816_; 
v_reuseFailAlloc_816_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_816_, 0, v___x_709_);
lean_ctor_set(v_reuseFailAlloc_816_, 1, v_k_705_);
lean_ctor_set(v_reuseFailAlloc_816_, 2, v_v_706_);
lean_ctor_set(v_reuseFailAlloc_816_, 3, v_r_708_);
lean_ctor_set(v_reuseFailAlloc_816_, 4, v_r_708_);
v___x_812_ = v_reuseFailAlloc_816_;
goto v_reusejp_811_;
}
v_reusejp_811_:
{
lean_object* v___x_814_; 
if (v_isShared_713_ == 0)
{
lean_ctor_set(v___x_712_, 4, v___x_812_);
lean_ctor_set(v___x_712_, 3, v___x_810_);
lean_ctor_set(v___x_712_, 2, v_v_804_);
lean_ctor_set(v___x_712_, 1, v_k_803_);
lean_ctor_set(v___x_712_, 0, v___x_808_);
v___x_814_ = v___x_712_;
goto v_reusejp_813_;
}
else
{
lean_object* v_reuseFailAlloc_815_; 
v_reuseFailAlloc_815_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_815_, 0, v___x_808_);
lean_ctor_set(v_reuseFailAlloc_815_, 1, v_k_803_);
lean_ctor_set(v_reuseFailAlloc_815_, 2, v_v_804_);
lean_ctor_set(v_reuseFailAlloc_815_, 3, v___x_810_);
lean_ctor_set(v_reuseFailAlloc_815_, 4, v___x_812_);
v___x_814_ = v_reuseFailAlloc_815_;
goto v_reusejp_813_;
}
v_reusejp_813_:
{
return v___x_814_;
}
}
}
}
}
}
else
{
if (lean_obj_tag(v_r_708_) == 0)
{
lean_object* v_k_822_; lean_object* v_v_823_; lean_object* v___x_824_; lean_object* v___x_826_; 
lean_dec(v_size_704_);
v_k_822_ = lean_ctor_get(v___x_714_, 0);
lean_inc(v_k_822_);
v_v_823_ = lean_ctor_get(v___x_714_, 1);
lean_inc(v_v_823_);
lean_dec_ref(v___x_714_);
v___x_824_ = lean_unsigned_to_nat(3u);
if (v_isShared_789_ == 0)
{
lean_ctor_set(v___x_788_, 4, v_l_707_);
lean_ctor_set(v___x_788_, 2, v_v_823_);
lean_ctor_set(v___x_788_, 1, v_k_822_);
lean_ctor_set(v___x_788_, 0, v___x_709_);
v___x_826_ = v___x_788_;
goto v_reusejp_825_;
}
else
{
lean_object* v_reuseFailAlloc_830_; 
v_reuseFailAlloc_830_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_830_, 0, v___x_709_);
lean_ctor_set(v_reuseFailAlloc_830_, 1, v_k_822_);
lean_ctor_set(v_reuseFailAlloc_830_, 2, v_v_823_);
lean_ctor_set(v_reuseFailAlloc_830_, 3, v_l_707_);
lean_ctor_set(v_reuseFailAlloc_830_, 4, v_l_707_);
v___x_826_ = v_reuseFailAlloc_830_;
goto v_reusejp_825_;
}
v_reusejp_825_:
{
lean_object* v___x_828_; 
if (v_isShared_713_ == 0)
{
lean_ctor_set(v___x_712_, 4, v_r_708_);
lean_ctor_set(v___x_712_, 3, v___x_826_);
lean_ctor_set(v___x_712_, 2, v_v_706_);
lean_ctor_set(v___x_712_, 1, v_k_705_);
lean_ctor_set(v___x_712_, 0, v___x_824_);
v___x_828_ = v___x_712_;
goto v_reusejp_827_;
}
else
{
lean_object* v_reuseFailAlloc_829_; 
v_reuseFailAlloc_829_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_829_, 0, v___x_824_);
lean_ctor_set(v_reuseFailAlloc_829_, 1, v_k_705_);
lean_ctor_set(v_reuseFailAlloc_829_, 2, v_v_706_);
lean_ctor_set(v_reuseFailAlloc_829_, 3, v___x_826_);
lean_ctor_set(v_reuseFailAlloc_829_, 4, v_r_708_);
v___x_828_ = v_reuseFailAlloc_829_;
goto v_reusejp_827_;
}
v_reusejp_827_:
{
return v___x_828_;
}
}
}
else
{
lean_object* v_k_831_; lean_object* v_v_832_; lean_object* v___x_834_; 
v_k_831_ = lean_ctor_get(v___x_714_, 0);
lean_inc(v_k_831_);
v_v_832_ = lean_ctor_get(v___x_714_, 1);
lean_inc(v_v_832_);
lean_dec_ref(v___x_714_);
if (v_isShared_789_ == 0)
{
lean_ctor_set(v___x_788_, 3, v_r_708_);
v___x_834_ = v___x_788_;
goto v_reusejp_833_;
}
else
{
lean_object* v_reuseFailAlloc_839_; 
v_reuseFailAlloc_839_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_839_, 0, v_size_704_);
lean_ctor_set(v_reuseFailAlloc_839_, 1, v_k_705_);
lean_ctor_set(v_reuseFailAlloc_839_, 2, v_v_706_);
lean_ctor_set(v_reuseFailAlloc_839_, 3, v_r_708_);
lean_ctor_set(v_reuseFailAlloc_839_, 4, v_r_708_);
v___x_834_ = v_reuseFailAlloc_839_;
goto v_reusejp_833_;
}
v_reusejp_833_:
{
lean_object* v___x_835_; lean_object* v___x_837_; 
v___x_835_ = lean_unsigned_to_nat(2u);
if (v_isShared_713_ == 0)
{
lean_ctor_set(v___x_712_, 4, v___x_834_);
lean_ctor_set(v___x_712_, 3, v_r_708_);
lean_ctor_set(v___x_712_, 2, v_v_832_);
lean_ctor_set(v___x_712_, 1, v_k_831_);
lean_ctor_set(v___x_712_, 0, v___x_835_);
v___x_837_ = v___x_712_;
goto v_reusejp_836_;
}
else
{
lean_object* v_reuseFailAlloc_838_; 
v_reuseFailAlloc_838_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_838_, 0, v___x_835_);
lean_ctor_set(v_reuseFailAlloc_838_, 1, v_k_831_);
lean_ctor_set(v_reuseFailAlloc_838_, 2, v_v_832_);
lean_ctor_set(v_reuseFailAlloc_838_, 3, v_r_708_);
lean_ctor_set(v_reuseFailAlloc_838_, 4, v___x_834_);
v___x_837_ = v_reuseFailAlloc_838_;
goto v_reusejp_836_;
}
v_reusejp_836_:
{
return v___x_837_;
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
lean_object* v___x_853_; uint8_t v_isShared_854_; uint8_t v_isSharedCheck_1004_; 
lean_inc(v_r_708_);
lean_inc(v_v_706_);
lean_inc(v_k_705_);
v_isSharedCheck_1004_ = !lean_is_exclusive(v_r_690_);
if (v_isSharedCheck_1004_ == 0)
{
lean_object* v_unused_1005_; lean_object* v_unused_1006_; lean_object* v_unused_1007_; lean_object* v_unused_1008_; lean_object* v_unused_1009_; 
v_unused_1005_ = lean_ctor_get(v_r_690_, 4);
lean_dec(v_unused_1005_);
v_unused_1006_ = lean_ctor_get(v_r_690_, 3);
lean_dec(v_unused_1006_);
v_unused_1007_ = lean_ctor_get(v_r_690_, 2);
lean_dec(v_unused_1007_);
v_unused_1008_ = lean_ctor_get(v_r_690_, 1);
lean_dec(v_unused_1008_);
v_unused_1009_ = lean_ctor_get(v_r_690_, 0);
lean_dec(v_unused_1009_);
v___x_853_ = v_r_690_;
v_isShared_854_ = v_isSharedCheck_1004_;
goto v_resetjp_852_;
}
else
{
lean_dec(v_r_690_);
v___x_853_ = lean_box(0);
v_isShared_854_ = v_isSharedCheck_1004_;
goto v_resetjp_852_;
}
v_resetjp_852_:
{
lean_object* v___x_855_; lean_object* v_tree_856_; 
v___x_855_ = l_Std_DTreeMap_Internal_Impl_minView___redArg(v_k_705_, v_v_706_, v_l_707_, v_r_708_);
v_tree_856_ = lean_ctor_get(v___x_855_, 2);
lean_inc(v_tree_856_);
if (lean_obj_tag(v_tree_856_) == 0)
{
lean_object* v_k_857_; lean_object* v_v_858_; lean_object* v_size_859_; lean_object* v___x_860_; lean_object* v___x_861_; uint8_t v___x_862_; 
v_k_857_ = lean_ctor_get(v___x_855_, 0);
lean_inc(v_k_857_);
v_v_858_ = lean_ctor_get(v___x_855_, 1);
lean_inc(v_v_858_);
lean_dec_ref(v___x_855_);
v_size_859_ = lean_ctor_get(v_tree_856_, 0);
v___x_860_ = lean_unsigned_to_nat(3u);
v___x_861_ = lean_nat_mul(v___x_860_, v_size_859_);
v___x_862_ = lean_nat_dec_lt(v___x_861_, v_size_699_);
lean_dec(v___x_861_);
if (v___x_862_ == 0)
{
lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_866_; 
lean_dec(v_r_703_);
v___x_863_ = lean_nat_add(v___x_709_, v_size_699_);
v___x_864_ = lean_nat_add(v___x_863_, v_size_859_);
lean_dec(v___x_863_);
if (v_isShared_854_ == 0)
{
lean_ctor_set(v___x_853_, 4, v_tree_856_);
lean_ctor_set(v___x_853_, 3, v_l_689_);
lean_ctor_set(v___x_853_, 2, v_v_858_);
lean_ctor_set(v___x_853_, 1, v_k_857_);
lean_ctor_set(v___x_853_, 0, v___x_864_);
v___x_866_ = v___x_853_;
goto v_reusejp_865_;
}
else
{
lean_object* v_reuseFailAlloc_867_; 
v_reuseFailAlloc_867_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_867_, 0, v___x_864_);
lean_ctor_set(v_reuseFailAlloc_867_, 1, v_k_857_);
lean_ctor_set(v_reuseFailAlloc_867_, 2, v_v_858_);
lean_ctor_set(v_reuseFailAlloc_867_, 3, v_l_689_);
lean_ctor_set(v_reuseFailAlloc_867_, 4, v_tree_856_);
v___x_866_ = v_reuseFailAlloc_867_;
goto v_reusejp_865_;
}
v_reusejp_865_:
{
return v___x_866_;
}
}
else
{
lean_object* v___x_869_; uint8_t v_isShared_870_; uint8_t v_isSharedCheck_933_; 
lean_inc(v_l_702_);
lean_inc(v_v_701_);
lean_inc(v_k_700_);
lean_inc(v_size_699_);
v_isSharedCheck_933_ = !lean_is_exclusive(v_l_689_);
if (v_isSharedCheck_933_ == 0)
{
lean_object* v_unused_934_; lean_object* v_unused_935_; lean_object* v_unused_936_; lean_object* v_unused_937_; lean_object* v_unused_938_; 
v_unused_934_ = lean_ctor_get(v_l_689_, 4);
lean_dec(v_unused_934_);
v_unused_935_ = lean_ctor_get(v_l_689_, 3);
lean_dec(v_unused_935_);
v_unused_936_ = lean_ctor_get(v_l_689_, 2);
lean_dec(v_unused_936_);
v_unused_937_ = lean_ctor_get(v_l_689_, 1);
lean_dec(v_unused_937_);
v_unused_938_ = lean_ctor_get(v_l_689_, 0);
lean_dec(v_unused_938_);
v___x_869_ = v_l_689_;
v_isShared_870_ = v_isSharedCheck_933_;
goto v_resetjp_868_;
}
else
{
lean_dec(v_l_689_);
v___x_869_ = lean_box(0);
v_isShared_870_ = v_isSharedCheck_933_;
goto v_resetjp_868_;
}
v_resetjp_868_:
{
lean_object* v_size_871_; lean_object* v_size_872_; lean_object* v_k_873_; lean_object* v_v_874_; lean_object* v_l_875_; lean_object* v_r_876_; lean_object* v___x_877_; lean_object* v___x_878_; uint8_t v___x_879_; 
v_size_871_ = lean_ctor_get(v_l_702_, 0);
v_size_872_ = lean_ctor_get(v_r_703_, 0);
v_k_873_ = lean_ctor_get(v_r_703_, 1);
v_v_874_ = lean_ctor_get(v_r_703_, 2);
v_l_875_ = lean_ctor_get(v_r_703_, 3);
v_r_876_ = lean_ctor_get(v_r_703_, 4);
v___x_877_ = lean_unsigned_to_nat(2u);
v___x_878_ = lean_nat_mul(v___x_877_, v_size_871_);
v___x_879_ = lean_nat_dec_lt(v_size_872_, v___x_878_);
lean_dec(v___x_878_);
if (v___x_879_ == 0)
{
lean_object* v___x_881_; uint8_t v_isShared_882_; uint8_t v_isSharedCheck_917_; 
lean_inc(v_r_876_);
lean_inc(v_l_875_);
lean_inc(v_v_874_);
lean_inc(v_k_873_);
lean_del_object(v___x_869_);
v_isSharedCheck_917_ = !lean_is_exclusive(v_r_703_);
if (v_isSharedCheck_917_ == 0)
{
lean_object* v_unused_918_; lean_object* v_unused_919_; lean_object* v_unused_920_; lean_object* v_unused_921_; lean_object* v_unused_922_; 
v_unused_918_ = lean_ctor_get(v_r_703_, 4);
lean_dec(v_unused_918_);
v_unused_919_ = lean_ctor_get(v_r_703_, 3);
lean_dec(v_unused_919_);
v_unused_920_ = lean_ctor_get(v_r_703_, 2);
lean_dec(v_unused_920_);
v_unused_921_ = lean_ctor_get(v_r_703_, 1);
lean_dec(v_unused_921_);
v_unused_922_ = lean_ctor_get(v_r_703_, 0);
lean_dec(v_unused_922_);
v___x_881_ = v_r_703_;
v_isShared_882_ = v_isSharedCheck_917_;
goto v_resetjp_880_;
}
else
{
lean_dec(v_r_703_);
v___x_881_ = lean_box(0);
v_isShared_882_ = v_isSharedCheck_917_;
goto v_resetjp_880_;
}
v_resetjp_880_:
{
lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___y_886_; lean_object* v___y_887_; lean_object* v___y_888_; lean_object* v___x_905_; lean_object* v___y_907_; 
v___x_883_ = lean_nat_add(v___x_709_, v_size_699_);
lean_dec(v_size_699_);
v___x_884_ = lean_nat_add(v___x_883_, v_size_859_);
lean_dec(v___x_883_);
v___x_905_ = lean_nat_add(v___x_709_, v_size_871_);
if (lean_obj_tag(v_l_875_) == 0)
{
lean_object* v_size_915_; 
v_size_915_ = lean_ctor_get(v_l_875_, 0);
lean_inc(v_size_915_);
v___y_907_ = v_size_915_;
goto v___jp_906_;
}
else
{
lean_object* v___x_916_; 
v___x_916_ = lean_unsigned_to_nat(0u);
v___y_907_ = v___x_916_;
goto v___jp_906_;
}
v___jp_885_:
{
lean_object* v___x_889_; lean_object* v___x_891_; 
v___x_889_ = lean_nat_add(v___y_887_, v___y_888_);
lean_dec(v___y_888_);
lean_dec(v___y_887_);
lean_inc_ref(v_tree_856_);
if (v_isShared_882_ == 0)
{
lean_ctor_set(v___x_881_, 4, v_tree_856_);
lean_ctor_set(v___x_881_, 3, v_r_876_);
lean_ctor_set(v___x_881_, 2, v_v_858_);
lean_ctor_set(v___x_881_, 1, v_k_857_);
lean_ctor_set(v___x_881_, 0, v___x_889_);
v___x_891_ = v___x_881_;
goto v_reusejp_890_;
}
else
{
lean_object* v_reuseFailAlloc_904_; 
v_reuseFailAlloc_904_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_904_, 0, v___x_889_);
lean_ctor_set(v_reuseFailAlloc_904_, 1, v_k_857_);
lean_ctor_set(v_reuseFailAlloc_904_, 2, v_v_858_);
lean_ctor_set(v_reuseFailAlloc_904_, 3, v_r_876_);
lean_ctor_set(v_reuseFailAlloc_904_, 4, v_tree_856_);
v___x_891_ = v_reuseFailAlloc_904_;
goto v_reusejp_890_;
}
v_reusejp_890_:
{
lean_object* v___x_893_; uint8_t v_isShared_894_; uint8_t v_isSharedCheck_898_; 
v_isSharedCheck_898_ = !lean_is_exclusive(v_tree_856_);
if (v_isSharedCheck_898_ == 0)
{
lean_object* v_unused_899_; lean_object* v_unused_900_; lean_object* v_unused_901_; lean_object* v_unused_902_; lean_object* v_unused_903_; 
v_unused_899_ = lean_ctor_get(v_tree_856_, 4);
lean_dec(v_unused_899_);
v_unused_900_ = lean_ctor_get(v_tree_856_, 3);
lean_dec(v_unused_900_);
v_unused_901_ = lean_ctor_get(v_tree_856_, 2);
lean_dec(v_unused_901_);
v_unused_902_ = lean_ctor_get(v_tree_856_, 1);
lean_dec(v_unused_902_);
v_unused_903_ = lean_ctor_get(v_tree_856_, 0);
lean_dec(v_unused_903_);
v___x_893_ = v_tree_856_;
v_isShared_894_ = v_isSharedCheck_898_;
goto v_resetjp_892_;
}
else
{
lean_dec(v_tree_856_);
v___x_893_ = lean_box(0);
v_isShared_894_ = v_isSharedCheck_898_;
goto v_resetjp_892_;
}
v_resetjp_892_:
{
lean_object* v___x_896_; 
if (v_isShared_894_ == 0)
{
lean_ctor_set(v___x_893_, 4, v___x_891_);
lean_ctor_set(v___x_893_, 3, v___y_886_);
lean_ctor_set(v___x_893_, 2, v_v_874_);
lean_ctor_set(v___x_893_, 1, v_k_873_);
lean_ctor_set(v___x_893_, 0, v___x_884_);
v___x_896_ = v___x_893_;
goto v_reusejp_895_;
}
else
{
lean_object* v_reuseFailAlloc_897_; 
v_reuseFailAlloc_897_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_897_, 0, v___x_884_);
lean_ctor_set(v_reuseFailAlloc_897_, 1, v_k_873_);
lean_ctor_set(v_reuseFailAlloc_897_, 2, v_v_874_);
lean_ctor_set(v_reuseFailAlloc_897_, 3, v___y_886_);
lean_ctor_set(v_reuseFailAlloc_897_, 4, v___x_891_);
v___x_896_ = v_reuseFailAlloc_897_;
goto v_reusejp_895_;
}
v_reusejp_895_:
{
return v___x_896_;
}
}
}
}
v___jp_906_:
{
lean_object* v___x_908_; lean_object* v___x_910_; 
v___x_908_ = lean_nat_add(v___x_905_, v___y_907_);
lean_dec(v___y_907_);
lean_dec(v___x_905_);
if (v_isShared_854_ == 0)
{
lean_ctor_set(v___x_853_, 4, v_l_875_);
lean_ctor_set(v___x_853_, 3, v_l_702_);
lean_ctor_set(v___x_853_, 2, v_v_701_);
lean_ctor_set(v___x_853_, 1, v_k_700_);
lean_ctor_set(v___x_853_, 0, v___x_908_);
v___x_910_ = v___x_853_;
goto v_reusejp_909_;
}
else
{
lean_object* v_reuseFailAlloc_914_; 
v_reuseFailAlloc_914_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_914_, 0, v___x_908_);
lean_ctor_set(v_reuseFailAlloc_914_, 1, v_k_700_);
lean_ctor_set(v_reuseFailAlloc_914_, 2, v_v_701_);
lean_ctor_set(v_reuseFailAlloc_914_, 3, v_l_702_);
lean_ctor_set(v_reuseFailAlloc_914_, 4, v_l_875_);
v___x_910_ = v_reuseFailAlloc_914_;
goto v_reusejp_909_;
}
v_reusejp_909_:
{
lean_object* v___x_911_; 
v___x_911_ = lean_nat_add(v___x_709_, v_size_859_);
if (lean_obj_tag(v_r_876_) == 0)
{
lean_object* v_size_912_; 
v_size_912_ = lean_ctor_get(v_r_876_, 0);
lean_inc(v_size_912_);
v___y_886_ = v___x_910_;
v___y_887_ = v___x_911_;
v___y_888_ = v_size_912_;
goto v___jp_885_;
}
else
{
lean_object* v___x_913_; 
v___x_913_ = lean_unsigned_to_nat(0u);
v___y_886_ = v___x_910_;
v___y_887_ = v___x_911_;
v___y_888_ = v___x_913_;
goto v___jp_885_;
}
}
}
}
}
else
{
lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_928_; 
v___x_923_ = lean_nat_add(v___x_709_, v_size_699_);
lean_dec(v_size_699_);
v___x_924_ = lean_nat_add(v___x_923_, v_size_859_);
lean_dec(v___x_923_);
v___x_925_ = lean_nat_add(v___x_709_, v_size_859_);
v___x_926_ = lean_nat_add(v___x_925_, v_size_872_);
lean_dec(v___x_925_);
if (v_isShared_854_ == 0)
{
lean_ctor_set(v___x_853_, 4, v_tree_856_);
lean_ctor_set(v___x_853_, 3, v_r_703_);
lean_ctor_set(v___x_853_, 2, v_v_858_);
lean_ctor_set(v___x_853_, 1, v_k_857_);
lean_ctor_set(v___x_853_, 0, v___x_926_);
v___x_928_ = v___x_853_;
goto v_reusejp_927_;
}
else
{
lean_object* v_reuseFailAlloc_932_; 
v_reuseFailAlloc_932_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_932_, 0, v___x_926_);
lean_ctor_set(v_reuseFailAlloc_932_, 1, v_k_857_);
lean_ctor_set(v_reuseFailAlloc_932_, 2, v_v_858_);
lean_ctor_set(v_reuseFailAlloc_932_, 3, v_r_703_);
lean_ctor_set(v_reuseFailAlloc_932_, 4, v_tree_856_);
v___x_928_ = v_reuseFailAlloc_932_;
goto v_reusejp_927_;
}
v_reusejp_927_:
{
lean_object* v___x_930_; 
if (v_isShared_870_ == 0)
{
lean_ctor_set(v___x_869_, 4, v___x_928_);
lean_ctor_set(v___x_869_, 0, v___x_924_);
v___x_930_ = v___x_869_;
goto v_reusejp_929_;
}
else
{
lean_object* v_reuseFailAlloc_931_; 
v_reuseFailAlloc_931_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_931_, 0, v___x_924_);
lean_ctor_set(v_reuseFailAlloc_931_, 1, v_k_700_);
lean_ctor_set(v_reuseFailAlloc_931_, 2, v_v_701_);
lean_ctor_set(v_reuseFailAlloc_931_, 3, v_l_702_);
lean_ctor_set(v_reuseFailAlloc_931_, 4, v___x_928_);
v___x_930_ = v_reuseFailAlloc_931_;
goto v_reusejp_929_;
}
v_reusejp_929_:
{
return v___x_930_;
}
}
}
}
}
}
else
{
if (lean_obj_tag(v_l_702_) == 0)
{
lean_object* v___x_940_; uint8_t v_isShared_941_; uint8_t v_isSharedCheck_962_; 
lean_inc_ref(v_l_702_);
lean_inc(v_v_701_);
lean_inc(v_k_700_);
lean_inc(v_size_699_);
v_isSharedCheck_962_ = !lean_is_exclusive(v_l_689_);
if (v_isSharedCheck_962_ == 0)
{
lean_object* v_unused_963_; lean_object* v_unused_964_; lean_object* v_unused_965_; lean_object* v_unused_966_; lean_object* v_unused_967_; 
v_unused_963_ = lean_ctor_get(v_l_689_, 4);
lean_dec(v_unused_963_);
v_unused_964_ = lean_ctor_get(v_l_689_, 3);
lean_dec(v_unused_964_);
v_unused_965_ = lean_ctor_get(v_l_689_, 2);
lean_dec(v_unused_965_);
v_unused_966_ = lean_ctor_get(v_l_689_, 1);
lean_dec(v_unused_966_);
v_unused_967_ = lean_ctor_get(v_l_689_, 0);
lean_dec(v_unused_967_);
v___x_940_ = v_l_689_;
v_isShared_941_ = v_isSharedCheck_962_;
goto v_resetjp_939_;
}
else
{
lean_dec(v_l_689_);
v___x_940_ = lean_box(0);
v_isShared_941_ = v_isSharedCheck_962_;
goto v_resetjp_939_;
}
v_resetjp_939_:
{
if (lean_obj_tag(v_r_703_) == 0)
{
lean_object* v_k_942_; lean_object* v_v_943_; lean_object* v_size_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_948_; 
v_k_942_ = lean_ctor_get(v___x_855_, 0);
lean_inc(v_k_942_);
v_v_943_ = lean_ctor_get(v___x_855_, 1);
lean_inc(v_v_943_);
lean_dec_ref(v___x_855_);
v_size_944_ = lean_ctor_get(v_r_703_, 0);
v___x_945_ = lean_nat_add(v___x_709_, v_size_699_);
lean_dec(v_size_699_);
v___x_946_ = lean_nat_add(v___x_709_, v_size_944_);
if (v_isShared_854_ == 0)
{
lean_ctor_set(v___x_853_, 4, v_tree_856_);
lean_ctor_set(v___x_853_, 3, v_r_703_);
lean_ctor_set(v___x_853_, 2, v_v_943_);
lean_ctor_set(v___x_853_, 1, v_k_942_);
lean_ctor_set(v___x_853_, 0, v___x_946_);
v___x_948_ = v___x_853_;
goto v_reusejp_947_;
}
else
{
lean_object* v_reuseFailAlloc_952_; 
v_reuseFailAlloc_952_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_952_, 0, v___x_946_);
lean_ctor_set(v_reuseFailAlloc_952_, 1, v_k_942_);
lean_ctor_set(v_reuseFailAlloc_952_, 2, v_v_943_);
lean_ctor_set(v_reuseFailAlloc_952_, 3, v_r_703_);
lean_ctor_set(v_reuseFailAlloc_952_, 4, v_tree_856_);
v___x_948_ = v_reuseFailAlloc_952_;
goto v_reusejp_947_;
}
v_reusejp_947_:
{
lean_object* v___x_950_; 
if (v_isShared_941_ == 0)
{
lean_ctor_set(v___x_940_, 4, v___x_948_);
lean_ctor_set(v___x_940_, 0, v___x_945_);
v___x_950_ = v___x_940_;
goto v_reusejp_949_;
}
else
{
lean_object* v_reuseFailAlloc_951_; 
v_reuseFailAlloc_951_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_951_, 0, v___x_945_);
lean_ctor_set(v_reuseFailAlloc_951_, 1, v_k_700_);
lean_ctor_set(v_reuseFailAlloc_951_, 2, v_v_701_);
lean_ctor_set(v_reuseFailAlloc_951_, 3, v_l_702_);
lean_ctor_set(v_reuseFailAlloc_951_, 4, v___x_948_);
v___x_950_ = v_reuseFailAlloc_951_;
goto v_reusejp_949_;
}
v_reusejp_949_:
{
return v___x_950_;
}
}
}
else
{
lean_object* v_k_953_; lean_object* v_v_954_; lean_object* v___x_955_; lean_object* v___x_957_; 
lean_dec(v_size_699_);
v_k_953_ = lean_ctor_get(v___x_855_, 0);
lean_inc(v_k_953_);
v_v_954_ = lean_ctor_get(v___x_855_, 1);
lean_inc(v_v_954_);
lean_dec_ref(v___x_855_);
v___x_955_ = lean_unsigned_to_nat(3u);
if (v_isShared_854_ == 0)
{
lean_ctor_set(v___x_853_, 4, v_r_703_);
lean_ctor_set(v___x_853_, 3, v_r_703_);
lean_ctor_set(v___x_853_, 2, v_v_954_);
lean_ctor_set(v___x_853_, 1, v_k_953_);
lean_ctor_set(v___x_853_, 0, v___x_709_);
v___x_957_ = v___x_853_;
goto v_reusejp_956_;
}
else
{
lean_object* v_reuseFailAlloc_961_; 
v_reuseFailAlloc_961_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_961_, 0, v___x_709_);
lean_ctor_set(v_reuseFailAlloc_961_, 1, v_k_953_);
lean_ctor_set(v_reuseFailAlloc_961_, 2, v_v_954_);
lean_ctor_set(v_reuseFailAlloc_961_, 3, v_r_703_);
lean_ctor_set(v_reuseFailAlloc_961_, 4, v_r_703_);
v___x_957_ = v_reuseFailAlloc_961_;
goto v_reusejp_956_;
}
v_reusejp_956_:
{
lean_object* v___x_959_; 
if (v_isShared_941_ == 0)
{
lean_ctor_set(v___x_940_, 4, v___x_957_);
lean_ctor_set(v___x_940_, 0, v___x_955_);
v___x_959_ = v___x_940_;
goto v_reusejp_958_;
}
else
{
lean_object* v_reuseFailAlloc_960_; 
v_reuseFailAlloc_960_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_960_, 0, v___x_955_);
lean_ctor_set(v_reuseFailAlloc_960_, 1, v_k_700_);
lean_ctor_set(v_reuseFailAlloc_960_, 2, v_v_701_);
lean_ctor_set(v_reuseFailAlloc_960_, 3, v_l_702_);
lean_ctor_set(v_reuseFailAlloc_960_, 4, v___x_957_);
v___x_959_ = v_reuseFailAlloc_960_;
goto v_reusejp_958_;
}
v_reusejp_958_:
{
return v___x_959_;
}
}
}
}
}
else
{
if (lean_obj_tag(v_r_703_) == 0)
{
lean_object* v___x_969_; uint8_t v_isShared_970_; uint8_t v_isSharedCheck_992_; 
lean_inc(v_l_702_);
lean_inc(v_v_701_);
lean_inc(v_k_700_);
v_isSharedCheck_992_ = !lean_is_exclusive(v_l_689_);
if (v_isSharedCheck_992_ == 0)
{
lean_object* v_unused_993_; lean_object* v_unused_994_; lean_object* v_unused_995_; lean_object* v_unused_996_; lean_object* v_unused_997_; 
v_unused_993_ = lean_ctor_get(v_l_689_, 4);
lean_dec(v_unused_993_);
v_unused_994_ = lean_ctor_get(v_l_689_, 3);
lean_dec(v_unused_994_);
v_unused_995_ = lean_ctor_get(v_l_689_, 2);
lean_dec(v_unused_995_);
v_unused_996_ = lean_ctor_get(v_l_689_, 1);
lean_dec(v_unused_996_);
v_unused_997_ = lean_ctor_get(v_l_689_, 0);
lean_dec(v_unused_997_);
v___x_969_ = v_l_689_;
v_isShared_970_ = v_isSharedCheck_992_;
goto v_resetjp_968_;
}
else
{
lean_dec(v_l_689_);
v___x_969_ = lean_box(0);
v_isShared_970_ = v_isSharedCheck_992_;
goto v_resetjp_968_;
}
v_resetjp_968_:
{
lean_object* v_k_971_; lean_object* v_v_972_; lean_object* v_k_973_; lean_object* v_v_974_; lean_object* v___x_976_; uint8_t v_isShared_977_; uint8_t v_isSharedCheck_988_; 
v_k_971_ = lean_ctor_get(v___x_855_, 0);
lean_inc(v_k_971_);
v_v_972_ = lean_ctor_get(v___x_855_, 1);
lean_inc(v_v_972_);
lean_dec_ref(v___x_855_);
v_k_973_ = lean_ctor_get(v_r_703_, 1);
v_v_974_ = lean_ctor_get(v_r_703_, 2);
v_isSharedCheck_988_ = !lean_is_exclusive(v_r_703_);
if (v_isSharedCheck_988_ == 0)
{
lean_object* v_unused_989_; lean_object* v_unused_990_; lean_object* v_unused_991_; 
v_unused_989_ = lean_ctor_get(v_r_703_, 4);
lean_dec(v_unused_989_);
v_unused_990_ = lean_ctor_get(v_r_703_, 3);
lean_dec(v_unused_990_);
v_unused_991_ = lean_ctor_get(v_r_703_, 0);
lean_dec(v_unused_991_);
v___x_976_ = v_r_703_;
v_isShared_977_ = v_isSharedCheck_988_;
goto v_resetjp_975_;
}
else
{
lean_inc(v_v_974_);
lean_inc(v_k_973_);
lean_dec(v_r_703_);
v___x_976_ = lean_box(0);
v_isShared_977_ = v_isSharedCheck_988_;
goto v_resetjp_975_;
}
v_resetjp_975_:
{
lean_object* v___x_978_; lean_object* v___x_980_; 
v___x_978_ = lean_unsigned_to_nat(3u);
if (v_isShared_977_ == 0)
{
lean_ctor_set(v___x_976_, 4, v_l_702_);
lean_ctor_set(v___x_976_, 3, v_l_702_);
lean_ctor_set(v___x_976_, 2, v_v_701_);
lean_ctor_set(v___x_976_, 1, v_k_700_);
lean_ctor_set(v___x_976_, 0, v___x_709_);
v___x_980_ = v___x_976_;
goto v_reusejp_979_;
}
else
{
lean_object* v_reuseFailAlloc_987_; 
v_reuseFailAlloc_987_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_987_, 0, v___x_709_);
lean_ctor_set(v_reuseFailAlloc_987_, 1, v_k_700_);
lean_ctor_set(v_reuseFailAlloc_987_, 2, v_v_701_);
lean_ctor_set(v_reuseFailAlloc_987_, 3, v_l_702_);
lean_ctor_set(v_reuseFailAlloc_987_, 4, v_l_702_);
v___x_980_ = v_reuseFailAlloc_987_;
goto v_reusejp_979_;
}
v_reusejp_979_:
{
lean_object* v___x_982_; 
if (v_isShared_854_ == 0)
{
lean_ctor_set(v___x_853_, 4, v_l_702_);
lean_ctor_set(v___x_853_, 3, v_l_702_);
lean_ctor_set(v___x_853_, 2, v_v_972_);
lean_ctor_set(v___x_853_, 1, v_k_971_);
lean_ctor_set(v___x_853_, 0, v___x_709_);
v___x_982_ = v___x_853_;
goto v_reusejp_981_;
}
else
{
lean_object* v_reuseFailAlloc_986_; 
v_reuseFailAlloc_986_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_986_, 0, v___x_709_);
lean_ctor_set(v_reuseFailAlloc_986_, 1, v_k_971_);
lean_ctor_set(v_reuseFailAlloc_986_, 2, v_v_972_);
lean_ctor_set(v_reuseFailAlloc_986_, 3, v_l_702_);
lean_ctor_set(v_reuseFailAlloc_986_, 4, v_l_702_);
v___x_982_ = v_reuseFailAlloc_986_;
goto v_reusejp_981_;
}
v_reusejp_981_:
{
lean_object* v___x_984_; 
if (v_isShared_970_ == 0)
{
lean_ctor_set(v___x_969_, 4, v___x_982_);
lean_ctor_set(v___x_969_, 3, v___x_980_);
lean_ctor_set(v___x_969_, 2, v_v_974_);
lean_ctor_set(v___x_969_, 1, v_k_973_);
lean_ctor_set(v___x_969_, 0, v___x_978_);
v___x_984_ = v___x_969_;
goto v_reusejp_983_;
}
else
{
lean_object* v_reuseFailAlloc_985_; 
v_reuseFailAlloc_985_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_985_, 0, v___x_978_);
lean_ctor_set(v_reuseFailAlloc_985_, 1, v_k_973_);
lean_ctor_set(v_reuseFailAlloc_985_, 2, v_v_974_);
lean_ctor_set(v_reuseFailAlloc_985_, 3, v___x_980_);
lean_ctor_set(v_reuseFailAlloc_985_, 4, v___x_982_);
v___x_984_ = v_reuseFailAlloc_985_;
goto v_reusejp_983_;
}
v_reusejp_983_:
{
return v___x_984_;
}
}
}
}
}
}
else
{
lean_object* v_k_998_; lean_object* v_v_999_; lean_object* v___x_1000_; lean_object* v___x_1002_; 
v_k_998_ = lean_ctor_get(v___x_855_, 0);
lean_inc(v_k_998_);
v_v_999_ = lean_ctor_get(v___x_855_, 1);
lean_inc(v_v_999_);
lean_dec_ref(v___x_855_);
v___x_1000_ = lean_unsigned_to_nat(2u);
if (v_isShared_854_ == 0)
{
lean_ctor_set(v___x_853_, 4, v_r_703_);
lean_ctor_set(v___x_853_, 3, v_l_689_);
lean_ctor_set(v___x_853_, 2, v_v_999_);
lean_ctor_set(v___x_853_, 1, v_k_998_);
lean_ctor_set(v___x_853_, 0, v___x_1000_);
v___x_1002_ = v___x_853_;
goto v_reusejp_1001_;
}
else
{
lean_object* v_reuseFailAlloc_1003_; 
v_reuseFailAlloc_1003_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1003_, 0, v___x_1000_);
lean_ctor_set(v_reuseFailAlloc_1003_, 1, v_k_998_);
lean_ctor_set(v_reuseFailAlloc_1003_, 2, v_v_999_);
lean_ctor_set(v_reuseFailAlloc_1003_, 3, v_l_689_);
lean_ctor_set(v_reuseFailAlloc_1003_, 4, v_r_703_);
v___x_1002_ = v_reuseFailAlloc_1003_;
goto v_reusejp_1001_;
}
v_reusejp_1001_:
{
return v___x_1002_;
}
}
}
}
}
}
}
else
{
return v_l_689_;
}
}
else
{
return v_r_690_;
}
}
else
{
lean_object* v_val_1010_; lean_object* v___x_1012_; 
v_val_1010_ = lean_ctor_get(v___x_698_, 0);
lean_inc(v_val_1010_);
lean_dec_ref_known(v___x_698_, 1);
if (v_isShared_693_ == 0)
{
lean_ctor_set(v___x_692_, 2, v_val_1010_);
lean_ctor_set(v___x_692_, 1, v_k_684_);
v___x_1012_ = v___x_692_;
goto v_reusejp_1011_;
}
else
{
lean_object* v_reuseFailAlloc_1013_; 
v_reuseFailAlloc_1013_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1013_, 0, v_size_686_);
lean_ctor_set(v_reuseFailAlloc_1013_, 1, v_k_684_);
lean_ctor_set(v_reuseFailAlloc_1013_, 2, v_val_1010_);
lean_ctor_set(v_reuseFailAlloc_1013_, 3, v_l_689_);
lean_ctor_set(v_reuseFailAlloc_1013_, 4, v_r_690_);
v___x_1012_ = v_reuseFailAlloc_1013_;
goto v_reusejp_1011_;
}
v_reusejp_1011_:
{
return v___x_1012_;
}
}
}
default: 
{
lean_object* v_impl_1014_; lean_object* v___x_1015_; 
lean_del_object(v___x_692_);
lean_dec(v_size_686_);
v_impl_1014_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__1___redArg(v___x_683_, v_k_684_, v_r_690_);
v___x_1015_ = l_Std_DTreeMap_Internal_Impl_balance___redArg(v_k_687_, v_v_688_, v_l_689_, v_impl_1014_);
return v___x_1015_;
}
}
}
}
else
{
lean_object* v___x_1017_; lean_object* v___x_1018_; 
v___x_1017_ = lean_box(0);
v___x_1018_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__1___redArg___lam__0(v___x_683_, v___x_1017_);
if (lean_obj_tag(v___x_1018_) == 0)
{
lean_dec(v_k_684_);
return v_t_685_;
}
else
{
lean_object* v_val_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; 
v_val_1019_ = lean_ctor_get(v___x_1018_, 0);
lean_inc(v_val_1019_);
lean_dec_ref_known(v___x_1018_, 1);
v___x_1020_ = lean_unsigned_to_nat(1u);
v___x_1021_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1021_, 0, v___x_1020_);
lean_ctor_set(v___x_1021_, 1, v_k_684_);
lean_ctor_set(v___x_1021_, 2, v_val_1019_);
lean_ctor_set(v___x_1021_, 3, v_t_685_);
lean_ctor_set(v___x_1021_, 4, v_t_685_);
return v___x_1021_;
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_1022_, lean_object* v_i_1023_, lean_object* v_k_1024_){
_start:
{
lean_object* v___x_1025_; uint8_t v___x_1026_; 
v___x_1025_ = lean_array_get_size(v_keys_1022_);
v___x_1026_ = lean_nat_dec_lt(v_i_1023_, v___x_1025_);
if (v___x_1026_ == 0)
{
lean_dec(v_i_1023_);
return v___x_1026_;
}
else
{
lean_object* v_k_x27_1027_; uint8_t v___x_1028_; 
v_k_x27_1027_ = lean_array_fget_borrowed(v_keys_1022_, v_i_1023_);
v___x_1028_ = lean_name_eq(v_k_1024_, v_k_x27_1027_);
if (v___x_1028_ == 0)
{
lean_object* v___x_1029_; lean_object* v___x_1030_; 
v___x_1029_ = lean_unsigned_to_nat(1u);
v___x_1030_ = lean_nat_add(v_i_1023_, v___x_1029_);
lean_dec(v_i_1023_);
v_i_1023_ = v___x_1030_;
goto _start;
}
else
{
lean_dec(v_i_1023_);
return v___x_1026_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_1032_, lean_object* v_i_1033_, lean_object* v_k_1034_){
_start:
{
uint8_t v_res_1035_; lean_object* v_r_1036_; 
v_res_1035_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0_spec__1___redArg(v_keys_1032_, v_i_1033_, v_k_1034_);
lean_dec(v_k_1034_);
lean_dec_ref(v_keys_1032_);
v_r_1036_ = lean_box(v_res_1035_);
return v_r_1036_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0___redArg(lean_object* v_x_1037_, size_t v_x_1038_, lean_object* v_x_1039_){
_start:
{
if (lean_obj_tag(v_x_1037_) == 0)
{
lean_object* v_es_1040_; lean_object* v___x_1041_; size_t v___x_1042_; size_t v___x_1043_; lean_object* v_j_1044_; lean_object* v___x_1045_; 
v_es_1040_ = lean_ctor_get(v_x_1037_, 0);
v___x_1041_ = lean_box(2);
v___x_1042_ = ((size_t)31ULL);
v___x_1043_ = lean_usize_land(v_x_1038_, v___x_1042_);
v_j_1044_ = lean_usize_to_nat(v___x_1043_);
v___x_1045_ = lean_array_get_borrowed(v___x_1041_, v_es_1040_, v_j_1044_);
lean_dec(v_j_1044_);
switch(lean_obj_tag(v___x_1045_))
{
case 0:
{
lean_object* v_key_1046_; uint8_t v___x_1047_; 
v_key_1046_ = lean_ctor_get(v___x_1045_, 0);
v___x_1047_ = lean_name_eq(v_x_1039_, v_key_1046_);
return v___x_1047_;
}
case 1:
{
lean_object* v_node_1048_; size_t v___x_1049_; size_t v___x_1050_; 
v_node_1048_ = lean_ctor_get(v___x_1045_, 0);
v___x_1049_ = ((size_t)5ULL);
v___x_1050_ = lean_usize_shift_right(v_x_1038_, v___x_1049_);
v_x_1037_ = v_node_1048_;
v_x_1038_ = v___x_1050_;
goto _start;
}
default: 
{
uint8_t v___x_1052_; 
v___x_1052_ = 0;
return v___x_1052_;
}
}
}
else
{
lean_object* v_ks_1053_; lean_object* v___x_1054_; uint8_t v___x_1055_; 
v_ks_1053_ = lean_ctor_get(v_x_1037_, 0);
v___x_1054_ = lean_unsigned_to_nat(0u);
v___x_1055_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0_spec__1___redArg(v_ks_1053_, v___x_1054_, v_x_1039_);
return v___x_1055_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0___redArg___boxed(lean_object* v_x_1056_, lean_object* v_x_1057_, lean_object* v_x_1058_){
_start:
{
size_t v_x_3828__boxed_1059_; uint8_t v_res_1060_; lean_object* v_r_1061_; 
v_x_3828__boxed_1059_ = lean_unbox_usize(v_x_1057_);
lean_dec(v_x_1057_);
v_res_1060_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0___redArg(v_x_1056_, v_x_3828__boxed_1059_, v_x_1058_);
lean_dec(v_x_1058_);
lean_dec_ref(v_x_1056_);
v_r_1061_ = lean_box(v_res_1060_);
return v_r_1061_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0___redArg(lean_object* v_x_1062_, lean_object* v_x_1063_){
_start:
{
uint64_t v___y_1065_; lean_object* v___x_1068_; 
v___x_1068_ = l_unsafeCast___redArg(v_x_1063_);
if (lean_obj_tag(v___x_1068_) == 0)
{
uint64_t v___x_1069_; 
v___x_1069_ = 1723ULL;
v___y_1065_ = v___x_1069_;
goto v___jp_1064_;
}
else
{
uint64_t v_hash_1070_; 
v_hash_1070_ = lean_ctor_get_uint64(v___x_1068_, sizeof(void*)*2);
lean_dec(v___x_1068_);
v___y_1065_ = v_hash_1070_;
goto v___jp_1064_;
}
v___jp_1064_:
{
size_t v___x_1066_; uint8_t v___x_1067_; 
v___x_1066_ = lean_uint64_to_usize(v___y_1065_);
v___x_1067_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0___redArg(v_x_1062_, v___x_1066_, v_x_1063_);
return v___x_1067_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0___redArg___boxed(lean_object* v_x_1071_, lean_object* v_x_1072_){
_start:
{
uint8_t v_res_1073_; lean_object* v_r_1074_; 
v_res_1073_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0___redArg(v_x_1071_, v_x_1072_);
lean_dec(v_x_1072_);
lean_dec_ref(v_x_1071_);
v_r_1074_ = lean_box(v_res_1073_);
return v_r_1074_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg___lam__0(lean_object* v_tactics_1075_, lean_object* v_a_1076_, uint8_t v___x_1077_, lean_object* v_x_1078_, lean_object* v_____s_1079_){
_start:
{
lean_object* v_fst_1080_; lean_object* v_kinds_1081_; uint8_t v___x_1082_; 
v_fst_1080_ = lean_ctor_get(v_x_1078_, 0);
lean_inc(v_fst_1080_);
lean_dec_ref(v_x_1078_);
v_kinds_1081_ = lean_ctor_get(v_tactics_1075_, 1);
v___x_1082_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0___redArg(v_kinds_1081_, v_fst_1080_);
if (v___x_1082_ == 0)
{
lean_object* v___x_1083_; 
lean_dec(v_fst_1080_);
lean_dec(v_a_1076_);
v___x_1083_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1083_, 0, v_____s_1079_);
return v___x_1083_;
}
else
{
lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; 
v___x_1084_ = l_Lean_Name_toString(v_a_1076_, v___x_1077_);
v___x_1085_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__1___redArg(v___x_1084_, v_fst_1080_, v_____s_1079_);
v___x_1086_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1086_, 0, v___x_1085_);
return v___x_1086_;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg___lam__0___boxed(lean_object* v_tactics_1087_, lean_object* v_a_1088_, lean_object* v___x_1089_, lean_object* v_x_1090_, lean_object* v_____s_1091_){
_start:
{
uint8_t v___x_3886__boxed_1092_; lean_object* v_res_1093_; 
v___x_3886__boxed_1092_ = lean_unbox(v___x_1089_);
v_res_1093_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg___lam__0(v_tactics_1087_, v_a_1088_, v___x_3886__boxed_1092_, v_x_1090_, v_____s_1091_);
lean_dec_ref(v_tactics_1087_);
return v_res_1093_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__9___redArg(lean_object* v_f_1094_, lean_object* v_keys_1095_, lean_object* v_vals_1096_, lean_object* v_i_1097_, lean_object* v_acc_1098_){
_start:
{
lean_object* v___x_1099_; uint8_t v___x_1100_; 
v___x_1099_ = lean_array_get_size(v_keys_1095_);
v___x_1100_ = lean_nat_dec_lt(v_i_1097_, v___x_1099_);
if (v___x_1100_ == 0)
{
lean_object* v___x_1101_; 
lean_dec(v_i_1097_);
lean_dec_ref(v_f_1094_);
v___x_1101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1101_, 0, v_acc_1098_);
return v___x_1101_;
}
else
{
lean_object* v_k_1102_; lean_object* v_v_1103_; lean_object* v___x_1104_; 
v_k_1102_ = lean_array_fget_borrowed(v_keys_1095_, v_i_1097_);
v_v_1103_ = lean_array_fget_borrowed(v_vals_1096_, v_i_1097_);
lean_inc_ref(v_f_1094_);
lean_inc(v_v_1103_);
lean_inc(v_k_1102_);
v___x_1104_ = lean_apply_3(v_f_1094_, v_acc_1098_, v_k_1102_, v_v_1103_);
if (lean_obj_tag(v___x_1104_) == 0)
{
lean_dec(v_i_1097_);
lean_dec_ref(v_f_1094_);
return v___x_1104_;
}
else
{
lean_object* v_a_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; 
v_a_1105_ = lean_ctor_get(v___x_1104_, 0);
lean_inc(v_a_1105_);
lean_dec_ref_known(v___x_1104_, 1);
v___x_1106_ = lean_unsigned_to_nat(1u);
v___x_1107_ = lean_nat_add(v_i_1097_, v___x_1106_);
lean_dec(v_i_1097_);
v_i_1097_ = v___x_1107_;
v_acc_1098_ = v_a_1105_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__9___redArg___boxed(lean_object* v_f_1109_, lean_object* v_keys_1110_, lean_object* v_vals_1111_, lean_object* v_i_1112_, lean_object* v_acc_1113_){
_start:
{
lean_object* v_res_1114_; 
v_res_1114_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__9___redArg(v_f_1109_, v_keys_1110_, v_vals_1111_, v_i_1112_, v_acc_1113_);
lean_dec_ref(v_vals_1111_);
lean_dec_ref(v_keys_1110_);
return v_res_1114_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__8___redArg(lean_object* v_f_1115_, lean_object* v_as_1116_, size_t v_i_1117_, size_t v_stop_1118_, lean_object* v_b_1119_){
_start:
{
lean_object* v_a_1121_; lean_object* v___y_1126_; uint8_t v___x_1128_; 
v___x_1128_ = lean_usize_dec_eq(v_i_1117_, v_stop_1118_);
if (v___x_1128_ == 0)
{
lean_object* v___x_1129_; 
v___x_1129_ = lean_array_uget_borrowed(v_as_1116_, v_i_1117_);
switch(lean_obj_tag(v___x_1129_))
{
case 0:
{
lean_object* v_key_1130_; lean_object* v_val_1131_; lean_object* v___x_1132_; 
v_key_1130_ = lean_ctor_get(v___x_1129_, 0);
v_val_1131_ = lean_ctor_get(v___x_1129_, 1);
lean_inc_ref(v_f_1115_);
lean_inc(v_val_1131_);
lean_inc(v_key_1130_);
v___x_1132_ = lean_apply_3(v_f_1115_, v_b_1119_, v_key_1130_, v_val_1131_);
v___y_1126_ = v___x_1132_;
goto v___jp_1125_;
}
case 1:
{
lean_object* v_node_1133_; lean_object* v___x_1134_; 
v_node_1133_ = lean_ctor_get(v___x_1129_, 0);
lean_inc(v_node_1133_);
lean_inc_ref(v_f_1115_);
v___x_1134_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5___redArg(v_f_1115_, v_node_1133_, v_b_1119_);
v___y_1126_ = v___x_1134_;
goto v___jp_1125_;
}
default: 
{
v_a_1121_ = v_b_1119_;
goto v___jp_1120_;
}
}
}
else
{
lean_object* v___x_1135_; 
lean_dec_ref(v_f_1115_);
v___x_1135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1135_, 0, v_b_1119_);
return v___x_1135_;
}
v___jp_1120_:
{
size_t v___x_1122_; size_t v___x_1123_; 
v___x_1122_ = ((size_t)1ULL);
v___x_1123_ = lean_usize_add(v_i_1117_, v___x_1122_);
v_i_1117_ = v___x_1123_;
v_b_1119_ = v_a_1121_;
goto _start;
}
v___jp_1125_:
{
if (lean_obj_tag(v___y_1126_) == 0)
{
lean_dec_ref(v_f_1115_);
return v___y_1126_;
}
else
{
lean_object* v_a_1127_; 
v_a_1127_ = lean_ctor_get(v___y_1126_, 0);
lean_inc(v_a_1127_);
lean_dec_ref_known(v___y_1126_, 1);
v_a_1121_ = v_a_1127_;
goto v___jp_1120_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5___redArg(lean_object* v_f_1136_, lean_object* v_x_1137_, lean_object* v_x_1138_){
_start:
{
if (lean_obj_tag(v_x_1137_) == 0)
{
lean_object* v_es_1139_; lean_object* v___x_1141_; uint8_t v_isShared_1142_; uint8_t v_isSharedCheck_1152_; 
v_es_1139_ = lean_ctor_get(v_x_1137_, 0);
v_isSharedCheck_1152_ = !lean_is_exclusive(v_x_1137_);
if (v_isSharedCheck_1152_ == 0)
{
v___x_1141_ = v_x_1137_;
v_isShared_1142_ = v_isSharedCheck_1152_;
goto v_resetjp_1140_;
}
else
{
lean_inc(v_es_1139_);
lean_dec(v_x_1137_);
v___x_1141_ = lean_box(0);
v_isShared_1142_ = v_isSharedCheck_1152_;
goto v_resetjp_1140_;
}
v_resetjp_1140_:
{
lean_object* v___x_1143_; lean_object* v___x_1144_; uint8_t v___x_1145_; 
v___x_1143_ = lean_unsigned_to_nat(0u);
v___x_1144_ = lean_array_get_size(v_es_1139_);
v___x_1145_ = lean_nat_dec_lt(v___x_1143_, v___x_1144_);
if (v___x_1145_ == 0)
{
lean_object* v___x_1147_; 
lean_dec_ref(v_es_1139_);
lean_dec_ref(v_f_1136_);
if (v_isShared_1142_ == 0)
{
lean_ctor_set_tag(v___x_1141_, 1);
lean_ctor_set(v___x_1141_, 0, v_x_1138_);
v___x_1147_ = v___x_1141_;
goto v_reusejp_1146_;
}
else
{
lean_object* v_reuseFailAlloc_1148_; 
v_reuseFailAlloc_1148_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1148_, 0, v_x_1138_);
v___x_1147_ = v_reuseFailAlloc_1148_;
goto v_reusejp_1146_;
}
v_reusejp_1146_:
{
return v___x_1147_;
}
}
else
{
size_t v___x_1149_; size_t v___x_1150_; lean_object* v___x_1151_; 
lean_del_object(v___x_1141_);
v___x_1149_ = ((size_t)0ULL);
v___x_1150_ = lean_usize_of_nat(v___x_1144_);
v___x_1151_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__8___redArg(v_f_1136_, v_es_1139_, v___x_1149_, v___x_1150_, v_x_1138_);
lean_dec_ref(v_es_1139_);
return v___x_1151_;
}
}
}
else
{
lean_object* v_ks_1153_; lean_object* v_vs_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; 
v_ks_1153_ = lean_ctor_get(v_x_1137_, 0);
lean_inc_ref(v_ks_1153_);
v_vs_1154_ = lean_ctor_get(v_x_1137_, 1);
lean_inc_ref(v_vs_1154_);
lean_dec_ref_known(v_x_1137_, 2);
v___x_1155_ = lean_unsigned_to_nat(0u);
v___x_1156_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__9___redArg(v_f_1136_, v_ks_1153_, v_vs_1154_, v___x_1155_, v_x_1138_);
lean_dec_ref(v_vs_1154_);
lean_dec_ref(v_ks_1153_);
return v___x_1156_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__8___redArg___boxed(lean_object* v_f_1157_, lean_object* v_as_1158_, lean_object* v_i_1159_, lean_object* v_stop_1160_, lean_object* v_b_1161_){
_start:
{
size_t v_i_boxed_1162_; size_t v_stop_boxed_1163_; lean_object* v_res_1164_; 
v_i_boxed_1162_ = lean_unbox_usize(v_i_1159_);
lean_dec(v_i_1159_);
v_stop_boxed_1163_ = lean_unbox_usize(v_stop_1160_);
lean_dec(v_stop_1160_);
v_res_1164_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__8___redArg(v_f_1157_, v_as_1158_, v_i_boxed_1162_, v_stop_boxed_1163_, v_b_1161_);
lean_dec_ref(v_as_1158_);
return v_res_1164_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2___redArg___lam__0(lean_object* v_f_1165_, lean_object* v_s_1166_, lean_object* v_a_1167_, lean_object* v_b_1168_){
_start:
{
lean_object* v___x_1169_; lean_object* v___x_1170_; 
v___x_1169_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1169_, 0, v_a_1167_);
lean_ctor_set(v___x_1169_, 1, v_b_1168_);
v___x_1170_ = lean_apply_2(v_f_1165_, v___x_1169_, v_s_1166_);
if (lean_obj_tag(v___x_1170_) == 0)
{
lean_object* v_a_1171_; lean_object* v___x_1173_; uint8_t v_isShared_1174_; uint8_t v_isSharedCheck_1178_; 
v_a_1171_ = lean_ctor_get(v___x_1170_, 0);
v_isSharedCheck_1178_ = !lean_is_exclusive(v___x_1170_);
if (v_isSharedCheck_1178_ == 0)
{
v___x_1173_ = v___x_1170_;
v_isShared_1174_ = v_isSharedCheck_1178_;
goto v_resetjp_1172_;
}
else
{
lean_inc(v_a_1171_);
lean_dec(v___x_1170_);
v___x_1173_ = lean_box(0);
v_isShared_1174_ = v_isSharedCheck_1178_;
goto v_resetjp_1172_;
}
v_resetjp_1172_:
{
lean_object* v___x_1176_; 
if (v_isShared_1174_ == 0)
{
v___x_1176_ = v___x_1173_;
goto v_reusejp_1175_;
}
else
{
lean_object* v_reuseFailAlloc_1177_; 
v_reuseFailAlloc_1177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1177_, 0, v_a_1171_);
v___x_1176_ = v_reuseFailAlloc_1177_;
goto v_reusejp_1175_;
}
v_reusejp_1175_:
{
return v___x_1176_;
}
}
}
else
{
lean_object* v_a_1179_; lean_object* v___x_1181_; uint8_t v_isShared_1182_; uint8_t v_isSharedCheck_1186_; 
v_a_1179_ = lean_ctor_get(v___x_1170_, 0);
v_isSharedCheck_1186_ = !lean_is_exclusive(v___x_1170_);
if (v_isSharedCheck_1186_ == 0)
{
v___x_1181_ = v___x_1170_;
v_isShared_1182_ = v_isSharedCheck_1186_;
goto v_resetjp_1180_;
}
else
{
lean_inc(v_a_1179_);
lean_dec(v___x_1170_);
v___x_1181_ = lean_box(0);
v_isShared_1182_ = v_isSharedCheck_1186_;
goto v_resetjp_1180_;
}
v_resetjp_1180_:
{
lean_object* v___x_1184_; 
if (v_isShared_1182_ == 0)
{
v___x_1184_ = v___x_1181_;
goto v_reusejp_1183_;
}
else
{
lean_object* v_reuseFailAlloc_1185_; 
v_reuseFailAlloc_1185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1185_, 0, v_a_1179_);
v___x_1184_ = v_reuseFailAlloc_1185_;
goto v_reusejp_1183_;
}
v_reusejp_1183_:
{
return v___x_1184_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2___redArg(lean_object* v_map_1187_, lean_object* v_init_1188_, lean_object* v_f_1189_){
_start:
{
lean_object* v___f_1190_; lean_object* v___x_1191_; lean_object* v_a_1192_; 
v___f_1190_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2___redArg___lam__0), 4, 1);
lean_closure_set(v___f_1190_, 0, v_f_1189_);
lean_inc_ref(v_map_1187_);
v___x_1191_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5___redArg(v___f_1190_, v_map_1187_, v_init_1188_);
v_a_1192_ = lean_ctor_get(v___x_1191_, 0);
lean_inc(v_a_1192_);
lean_dec_ref(v___x_1191_);
return v_a_1192_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2___redArg___boxed(lean_object* v_map_1193_, lean_object* v_init_1194_, lean_object* v_f_1195_){
_start:
{
lean_object* v_res_1196_; 
v_res_1196_ = l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2___redArg(v_map_1193_, v_init_1194_, v_f_1195_);
lean_dec_ref(v_map_1193_);
return v_res_1196_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_1197_; lean_object* v___x_1198_; 
v___x_1197_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__0);
v___x_1198_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1198_, 0, v___x_1197_);
return v___x_1198_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg(lean_object* v_tactics_1199_, lean_object* v_a_1200_, uint8_t v___x_1201_, lean_object* v_as_x27_1202_, lean_object* v_b_1203_){
_start:
{
if (lean_obj_tag(v_as_x27_1202_) == 0)
{
lean_dec(v_a_1200_);
lean_dec_ref(v_tactics_1199_);
return v_b_1203_;
}
else
{
lean_object* v_head_1204_; lean_object* v_fst_1205_; lean_object* v_info_1206_; lean_object* v_tail_1207_; lean_object* v_collectKinds_1208_; lean_object* v___x_1209_; lean_object* v___f_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; 
v_head_1204_ = lean_ctor_get(v_as_x27_1202_, 0);
v_fst_1205_ = lean_ctor_get(v_head_1204_, 0);
v_info_1206_ = lean_ctor_get(v_fst_1205_, 0);
v_tail_1207_ = lean_ctor_get(v_as_x27_1202_, 1);
v_collectKinds_1208_ = lean_ctor_get(v_info_1206_, 1);
v___x_1209_ = lean_box(v___x_1201_);
lean_inc(v_a_1200_);
lean_inc_ref(v_tactics_1199_);
v___f_1210_ = lean_alloc_closure((void*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_1210_, 0, v_tactics_1199_);
lean_closure_set(v___f_1210_, 1, v_a_1200_);
lean_closure_set(v___f_1210_, 2, v___x_1209_);
v___x_1211_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg___closed__0, &l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg___closed__0_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg___closed__0);
lean_inc_ref(v_collectKinds_1208_);
v___x_1212_ = lean_apply_1(v_collectKinds_1208_, v___x_1211_);
v___x_1213_ = l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2___redArg(v___x_1212_, v_b_1203_, v___f_1210_);
lean_dec_ref(v___x_1212_);
v_as_x27_1202_ = v_tail_1207_;
v_b_1203_ = v___x_1213_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg___boxed(lean_object* v_tactics_1215_, lean_object* v_a_1216_, lean_object* v___x_1217_, lean_object* v_as_x27_1218_, lean_object* v_b_1219_){
_start:
{
uint8_t v___x_4045__boxed_1220_; lean_object* v_res_1221_; 
v___x_4045__boxed_1220_ = lean_unbox(v___x_1217_);
v_res_1221_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg(v_tactics_1215_, v_a_1216_, v___x_4045__boxed_1220_, v_as_x27_1218_, v_b_1219_);
lean_dec(v_as_x27_1218_);
return v_res_1221_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__4(lean_object* v_tactics_1225_, lean_object* v_init_1226_, lean_object* v_x_1227_){
_start:
{
if (lean_obj_tag(v_x_1227_) == 0)
{
lean_object* v_k_1228_; lean_object* v_v_1229_; lean_object* v_l_1230_; lean_object* v_r_1231_; lean_object* v___x_1232_; lean_object* v_a_1233_; lean_object* v___x_1234_; uint8_t v___x_1235_; 
v_k_1228_ = lean_ctor_get(v_x_1227_, 1);
lean_inc(v_k_1228_);
v_v_1229_ = lean_ctor_get(v_x_1227_, 2);
lean_inc(v_v_1229_);
v_l_1230_ = lean_ctor_get(v_x_1227_, 3);
lean_inc(v_l_1230_);
v_r_1231_ = lean_ctor_get(v_x_1227_, 4);
lean_inc(v_r_1231_);
lean_dec_ref_known(v_x_1227_, 5);
lean_inc_ref(v_tactics_1225_);
v___x_1232_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__4(v_tactics_1225_, v_init_1226_, v_l_1230_);
v_a_1233_ = lean_ctor_get(v___x_1232_, 0);
lean_inc(v_a_1233_);
v___x_1234_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__4___closed__1));
v___x_1235_ = lean_name_eq(v_k_1228_, v___x_1234_);
if (v___x_1235_ == 0)
{
lean_object* v___x_1236_; 
lean_dec_ref(v___x_1232_);
lean_inc_ref(v_tactics_1225_);
v___x_1236_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg(v_tactics_1225_, v_k_1228_, v___x_1235_, v_v_1229_, v_a_1233_);
lean_dec(v_v_1229_);
v_init_1226_ = v___x_1236_;
v_x_1227_ = v_r_1231_;
goto _start;
}
else
{
lean_object* v_a_1238_; 
lean_dec(v_a_1233_);
lean_dec(v_v_1229_);
lean_dec(v_k_1228_);
v_a_1238_ = lean_ctor_get(v___x_1232_, 0);
lean_inc(v_a_1238_);
lean_dec_ref(v___x_1232_);
v_init_1226_ = v_a_1238_;
v_x_1227_ = v_r_1231_;
goto _start;
}
}
else
{
lean_object* v___x_1240_; 
lean_dec_ref(v_tactics_1225_);
v___x_1240_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1240_, 0, v_init_1226_);
return v___x_1240_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens(lean_object* v_tactics_1241_, lean_object* v_table_1242_, lean_object* v_firsts_1243_){
_start:
{
lean_object* v___x_1244_; lean_object* v_a_1245_; 
v___x_1244_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__4(v_tactics_1241_, v_firsts_1243_, v_table_1242_);
v_a_1245_ = lean_ctor_get(v___x_1244_, 0);
lean_inc(v_a_1245_);
lean_dec_ref(v___x_1244_);
return v_a_1245_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0(lean_object* v_00_u03b2_1246_, lean_object* v_x_1247_, lean_object* v_x_1248_){
_start:
{
uint8_t v___x_1249_; 
v___x_1249_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0___redArg(v_x_1247_, v_x_1248_);
return v___x_1249_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0___boxed(lean_object* v_00_u03b2_1250_, lean_object* v_x_1251_, lean_object* v_x_1252_){
_start:
{
uint8_t v_res_1253_; lean_object* v_r_1254_; 
v_res_1253_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0(v_00_u03b2_1250_, v_x_1251_, v_x_1252_);
lean_dec(v_x_1252_);
lean_dec_ref(v_x_1251_);
v_r_1254_ = lean_box(v_res_1253_);
return v_r_1254_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__1(lean_object* v___x_1255_, lean_object* v_k_1256_, lean_object* v_t_1257_, lean_object* v_hl_1258_){
_start:
{
lean_object* v___x_1259_; 
v___x_1259_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__1___redArg(v___x_1255_, v_k_1256_, v_t_1257_);
return v___x_1259_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2(lean_object* v_00_u03c3_1260_, lean_object* v_00_u03b2_1261_, lean_object* v_map_1262_, lean_object* v_init_1263_, lean_object* v_f_1264_){
_start:
{
lean_object* v___x_1265_; 
v___x_1265_ = l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2___redArg(v_map_1262_, v_init_1263_, v_f_1264_);
return v___x_1265_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2___boxed(lean_object* v_00_u03c3_1266_, lean_object* v_00_u03b2_1267_, lean_object* v_map_1268_, lean_object* v_init_1269_, lean_object* v_f_1270_){
_start:
{
lean_object* v_res_1271_; 
v_res_1271_ = l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2(v_00_u03c3_1266_, v_00_u03b2_1267_, v_map_1268_, v_init_1269_, v_f_1270_);
lean_dec_ref(v_map_1268_);
return v_res_1271_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3(lean_object* v_tactics_1272_, lean_object* v_a_1273_, uint8_t v___x_1274_, lean_object* v_as_1275_, lean_object* v_as_x27_1276_, lean_object* v_b_1277_, lean_object* v_a_1278_){
_start:
{
lean_object* v___x_1279_; 
v___x_1279_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg(v_tactics_1272_, v_a_1273_, v___x_1274_, v_as_x27_1276_, v_b_1277_);
return v___x_1279_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___boxed(lean_object* v_tactics_1280_, lean_object* v_a_1281_, lean_object* v___x_1282_, lean_object* v_as_1283_, lean_object* v_as_x27_1284_, lean_object* v_b_1285_, lean_object* v_a_1286_){
_start:
{
uint8_t v___x_4127__boxed_1287_; lean_object* v_res_1288_; 
v___x_4127__boxed_1287_ = lean_unbox(v___x_1282_);
v_res_1288_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3(v_tactics_1280_, v_a_1281_, v___x_4127__boxed_1287_, v_as_1283_, v_as_x27_1284_, v_b_1285_, v_a_1286_);
lean_dec(v_as_x27_1284_);
lean_dec(v_as_1283_);
return v_res_1288_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0(lean_object* v_00_u03b2_1289_, lean_object* v_x_1290_, size_t v_x_1291_, lean_object* v_x_1292_){
_start:
{
uint8_t v___x_1293_; 
v___x_1293_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0___redArg(v_x_1290_, v_x_1291_, v_x_1292_);
return v___x_1293_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1294_, lean_object* v_x_1295_, lean_object* v_x_1296_, lean_object* v_x_1297_){
_start:
{
size_t v_x_4136__boxed_1298_; uint8_t v_res_1299_; lean_object* v_r_1300_; 
v_x_4136__boxed_1298_ = lean_unbox_usize(v_x_1296_);
lean_dec(v_x_1296_);
v_res_1299_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0(v_00_u03b2_1294_, v_x_1295_, v_x_4136__boxed_1298_, v_x_1297_);
lean_dec(v_x_1297_);
lean_dec_ref(v_x_1295_);
v_r_1300_ = lean_box(v_res_1299_);
return v_r_1300_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3___redArg(lean_object* v_map_1301_, lean_object* v_f_1302_, lean_object* v_init_1303_){
_start:
{
lean_object* v___x_1304_; 
v___x_1304_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5___redArg(v_f_1302_, v_map_1301_, v_init_1303_);
return v___x_1304_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3(lean_object* v_00_u03c3_1305_, lean_object* v_00_u03c3_1306_, lean_object* v_00_u03b2_1307_, lean_object* v_map_1308_, lean_object* v_f_1309_, lean_object* v_init_1310_){
_start:
{
lean_object* v___x_1311_; 
v___x_1311_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5___redArg(v_f_1309_, v_map_1308_, v_init_1310_);
return v___x_1311_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1312_, lean_object* v_keys_1313_, lean_object* v_vals_1314_, lean_object* v_heq_1315_, lean_object* v_i_1316_, lean_object* v_k_1317_){
_start:
{
uint8_t v___x_1318_; 
v___x_1318_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0_spec__1___redArg(v_keys_1313_, v_i_1316_, v_k_1317_);
return v___x_1318_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_1319_, lean_object* v_keys_1320_, lean_object* v_vals_1321_, lean_object* v_heq_1322_, lean_object* v_i_1323_, lean_object* v_k_1324_){
_start:
{
uint8_t v_res_1325_; lean_object* v_r_1326_; 
v_res_1325_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0_spec__1(v_00_u03b2_1319_, v_keys_1320_, v_vals_1321_, v_heq_1322_, v_i_1323_, v_k_1324_);
lean_dec(v_k_1324_);
lean_dec_ref(v_vals_1321_);
lean_dec_ref(v_keys_1320_);
v_r_1326_ = lean_box(v_res_1325_);
return v_r_1326_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5(lean_object* v_00_u03c3_1327_, lean_object* v_00_u03c3_1328_, lean_object* v_00_u03b1_1329_, lean_object* v_00_u03b2_1330_, lean_object* v_f_1331_, lean_object* v_x_1332_, lean_object* v_x_1333_){
_start:
{
lean_object* v___x_1334_; 
v___x_1334_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5___redArg(v_f_1331_, v_x_1332_, v_x_1333_);
return v___x_1334_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__8(lean_object* v_00_u03b1_1335_, lean_object* v_00_u03b2_1336_, lean_object* v_00_u03c3_1337_, lean_object* v_00_u03c3_1338_, lean_object* v_f_1339_, lean_object* v_as_1340_, size_t v_i_1341_, size_t v_stop_1342_, lean_object* v_b_1343_){
_start:
{
lean_object* v___x_1344_; 
v___x_1344_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__8___redArg(v_f_1339_, v_as_1340_, v_i_1341_, v_stop_1342_, v_b_1343_);
return v___x_1344_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__8___boxed(lean_object* v_00_u03b1_1345_, lean_object* v_00_u03b2_1346_, lean_object* v_00_u03c3_1347_, lean_object* v_00_u03c3_1348_, lean_object* v_f_1349_, lean_object* v_as_1350_, lean_object* v_i_1351_, lean_object* v_stop_1352_, lean_object* v_b_1353_){
_start:
{
size_t v_i_boxed_1354_; size_t v_stop_boxed_1355_; lean_object* v_res_1356_; 
v_i_boxed_1354_ = lean_unbox_usize(v_i_1351_);
lean_dec(v_i_1351_);
v_stop_boxed_1355_ = lean_unbox_usize(v_stop_1352_);
lean_dec(v_stop_1352_);
v_res_1356_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__8(v_00_u03b1_1345_, v_00_u03b2_1346_, v_00_u03c3_1347_, v_00_u03c3_1348_, v_f_1349_, v_as_1350_, v_i_boxed_1354_, v_stop_boxed_1355_, v_b_1353_);
lean_dec_ref(v_as_1350_);
return v_res_1356_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__9(lean_object* v_00_u03c3_1357_, lean_object* v_00_u03c3_1358_, lean_object* v_00_u03b1_1359_, lean_object* v_00_u03b2_1360_, lean_object* v_f_1361_, lean_object* v_keys_1362_, lean_object* v_vals_1363_, lean_object* v_heq_1364_, lean_object* v_i_1365_, lean_object* v_acc_1366_){
_start:
{
lean_object* v___x_1367_; 
v___x_1367_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__9___redArg(v_f_1361_, v_keys_1362_, v_vals_1363_, v_i_1365_, v_acc_1366_);
return v___x_1367_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__9___boxed(lean_object* v_00_u03c3_1368_, lean_object* v_00_u03c3_1369_, lean_object* v_00_u03b1_1370_, lean_object* v_00_u03b2_1371_, lean_object* v_f_1372_, lean_object* v_keys_1373_, lean_object* v_vals_1374_, lean_object* v_heq_1375_, lean_object* v_i_1376_, lean_object* v_acc_1377_){
_start:
{
lean_object* v_res_1378_; 
v_res_1378_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__9(v_00_u03c3_1368_, v_00_u03c3_1369_, v_00_u03b1_1370_, v_00_u03b2_1371_, v_f_1372_, v_keys_1373_, v_vals_1374_, v_heq_1375_, v_i_1376_, v_acc_1377_);
lean_dec_ref(v_vals_1374_);
lean_dec_ref(v_keys_1373_);
return v_res_1378_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__0(lean_object* v_x1_1379_, lean_object* v_x2_1380_){
_start:
{
lean_object* v_fst_1381_; lean_object* v_snd_1382_; lean_object* v___x_1383_; 
v_fst_1381_ = lean_ctor_get(v_x2_1380_, 0);
lean_inc(v_fst_1381_);
v_snd_1382_ = lean_ctor_get(v_x2_1380_, 1);
lean_inc(v_snd_1382_);
lean_dec_ref(v_x2_1380_);
v___x_1383_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_1381_, v_snd_1382_, v_x1_1379_);
return v___x_1383_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1(lean_object* v___f_1403_, lean_object* v_x1_1404_, lean_object* v_x2_1405_){
_start:
{
lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; uint8_t v___x_1409_; 
v___x_1406_ = lean_unsigned_to_nat(0u);
v___x_1407_ = lean_array_get_size(v_x2_1405_);
v___x_1408_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__9));
v___x_1409_ = lean_nat_dec_lt(v___x_1406_, v___x_1407_);
if (v___x_1409_ == 0)
{
lean_dec_ref(v_x2_1405_);
lean_dec_ref(v___f_1403_);
return v_x1_1404_;
}
else
{
uint8_t v___x_1410_; 
v___x_1410_ = lean_nat_dec_le(v___x_1407_, v___x_1407_);
if (v___x_1410_ == 0)
{
if (v___x_1409_ == 0)
{
lean_dec_ref(v_x2_1405_);
lean_dec_ref(v___f_1403_);
return v_x1_1404_;
}
else
{
size_t v___x_1411_; size_t v___x_1412_; lean_object* v___x_1413_; 
v___x_1411_ = ((size_t)0ULL);
v___x_1412_ = lean_usize_of_nat(v___x_1407_);
v___x_1413_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1408_, v___f_1403_, v_x2_1405_, v___x_1411_, v___x_1412_, v_x1_1404_);
return v___x_1413_;
}
}
else
{
size_t v___x_1414_; size_t v___x_1415_; lean_object* v___x_1416_; 
v___x_1414_ = ((size_t)0ULL);
v___x_1415_ = lean_usize_of_nat(v___x_1407_);
v___x_1416_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1408_, v___f_1403_, v_x2_1405_, v___x_1414_, v___x_1415_, v_x1_1404_);
return v___x_1416_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__2(lean_object* v___x_1420_, lean_object* v___x_1421_, lean_object* v___x_1422_, lean_object* v___x_1423_, lean_object* v___x_1424_, lean_object* v_toPure_1425_, lean_object* v___f_1426_, lean_object* v_env_1427_){
_start:
{
lean_object* v___x_1428_; lean_object* v_ext_1429_; lean_object* v_toEnvExtension_1430_; lean_object* v_asyncMode_1431_; lean_object* v___x_1432_; lean_object* v_categories_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; 
v___x_1428_ = l_Lean_Parser_parserExtension;
v_ext_1429_ = lean_ctor_get(v___x_1428_, 1);
v_toEnvExtension_1430_ = lean_ctor_get(v_ext_1429_, 0);
v_asyncMode_1431_ = lean_ctor_get(v_toEnvExtension_1430_, 2);
lean_inc_ref(v_env_1427_);
v___x_1432_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_1420_, v___x_1428_, v_env_1427_, v_asyncMode_1431_);
v_categories_1433_ = lean_ctor_get(v___x_1432_, 2);
lean_inc_ref(v_categories_1433_);
lean_dec(v___x_1432_);
v___x_1434_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__2___closed__1));
v___x_1435_ = l_Lean_PersistentHashMap_find_x3f___redArg(v___x_1421_, v___x_1422_, v_categories_1433_, v___x_1434_);
lean_dec_ref(v_categories_1433_);
if (lean_obj_tag(v___x_1435_) == 1)
{
lean_object* v_val_1436_; lean_object* v___y_1438_; lean_object* v___x_1445_; lean_object* v_toEnvExtension_1446_; lean_object* v_exportEntriesFn_1447_; lean_object* v_asyncMode_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v_importedEntries_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v_exported_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; uint8_t v___x_1460_; 
v_val_1436_ = lean_ctor_get(v___x_1435_, 0);
lean_inc(v_val_1436_);
lean_dec_ref_known(v___x_1435_, 1);
v___x_1445_ = l_Lean_Parser_Tactic_Doc_tacticNameExt;
v_toEnvExtension_1446_ = lean_ctor_get(v___x_1445_, 0);
v_exportEntriesFn_1447_ = lean_ctor_get(v___x_1445_, 4);
v_asyncMode_1448_ = lean_ctor_get(v_toEnvExtension_1446_, 2);
v___x_1449_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__7, &l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__7_once, _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__7);
lean_inc_ref_n(v_env_1427_, 2);
v___x_1450_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_1423_, v_toEnvExtension_1446_, v_env_1427_, v_asyncMode_1448_, v___x_1449_);
v_importedEntries_1451_ = lean_ctor_get(v___x_1450_, 0);
lean_inc_ref(v_importedEntries_1451_);
lean_dec(v___x_1450_);
v___x_1452_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_1424_, v___x_1445_, v_env_1427_, v_asyncMode_1448_, v___x_1449_);
lean_inc_ref(v_exportEntriesFn_1447_);
v___x_1453_ = lean_apply_2(v_exportEntriesFn_1447_, v_env_1427_, v___x_1452_);
v_exported_1454_ = lean_ctor_get(v___x_1453_, 0);
lean_inc(v_exported_1454_);
lean_dec_ref(v___x_1453_);
v___x_1455_ = lean_box(1);
v___x_1456_ = lean_array_push(v_importedEntries_1451_, v_exported_1454_);
v___x_1457_ = lean_unsigned_to_nat(0u);
v___x_1458_ = lean_array_get_size(v___x_1456_);
v___x_1459_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__9));
v___x_1460_ = lean_nat_dec_lt(v___x_1457_, v___x_1458_);
if (v___x_1460_ == 0)
{
lean_dec_ref(v___x_1456_);
lean_dec_ref(v___f_1426_);
v___y_1438_ = v___x_1455_;
goto v___jp_1437_;
}
else
{
uint8_t v___x_1461_; 
v___x_1461_ = lean_nat_dec_le(v___x_1458_, v___x_1458_);
if (v___x_1461_ == 0)
{
if (v___x_1460_ == 0)
{
lean_dec_ref(v___x_1456_);
lean_dec_ref(v___f_1426_);
v___y_1438_ = v___x_1455_;
goto v___jp_1437_;
}
else
{
size_t v___x_1462_; size_t v___x_1463_; lean_object* v___x_1464_; 
v___x_1462_ = ((size_t)0ULL);
v___x_1463_ = lean_usize_of_nat(v___x_1458_);
v___x_1464_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1459_, v___f_1426_, v___x_1456_, v___x_1462_, v___x_1463_, v___x_1455_);
v___y_1438_ = v___x_1464_;
goto v___jp_1437_;
}
}
else
{
size_t v___x_1465_; size_t v___x_1466_; lean_object* v___x_1467_; 
v___x_1465_ = ((size_t)0ULL);
v___x_1466_ = lean_usize_of_nat(v___x_1458_);
v___x_1467_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1459_, v___f_1426_, v___x_1456_, v___x_1465_, v___x_1466_, v___x_1455_);
v___y_1438_ = v___x_1467_;
goto v___jp_1437_;
}
}
v___jp_1437_:
{
lean_object* v_tables_1439_; lean_object* v_leadingTable_1440_; lean_object* v_trailingTable_1441_; lean_object* v_firstTokens_1442_; lean_object* v_firstTokens_1443_; lean_object* v___x_1444_; 
v_tables_1439_ = lean_ctor_get(v_val_1436_, 2);
v_leadingTable_1440_ = lean_ctor_get(v_tables_1439_, 0);
v_trailingTable_1441_ = lean_ctor_get(v_tables_1439_, 2);
lean_inc(v_trailingTable_1441_);
lean_inc(v_leadingTable_1440_);
lean_inc(v_val_1436_);
v_firstTokens_1442_ = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens(v_val_1436_, v_leadingTable_1440_, v___y_1438_);
v_firstTokens_1443_ = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens(v_val_1436_, v_trailingTable_1441_, v_firstTokens_1442_);
v___x_1444_ = lean_apply_2(v_toPure_1425_, lean_box(0), v_firstTokens_1443_);
return v___x_1444_;
}
}
else
{
lean_object* v___x_1468_; lean_object* v___x_1469_; 
lean_dec(v___x_1435_);
lean_dec_ref(v_env_1427_);
lean_dec_ref(v___f_1426_);
lean_dec(v___x_1424_);
v___x_1468_ = lean_box(1);
v___x_1469_ = lean_apply_2(v_toPure_1425_, lean_box(0), v___x_1468_);
return v___x_1469_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__2___boxed(lean_object* v___x_1470_, lean_object* v___x_1471_, lean_object* v___x_1472_, lean_object* v___x_1473_, lean_object* v___x_1474_, lean_object* v_toPure_1475_, lean_object* v___f_1476_, lean_object* v_env_1477_){
_start:
{
lean_object* v_res_1478_; 
v_res_1478_ = l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__2(v___x_1470_, v___x_1471_, v___x_1472_, v___x_1473_, v___x_1474_, v_toPure_1475_, v___f_1476_, v_env_1477_);
lean_dec_ref(v___x_1473_);
lean_dec_ref(v___x_1470_);
return v_res_1478_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__2(void){
_start:
{
lean_object* v___x_1482_; lean_object* v___x_1483_; 
v___x_1482_ = lean_box(1);
v___x_1483_ = l_Lean_instInhabitedPersistentEnvExtensionState___redArg(v___x_1482_);
return v___x_1483_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg(lean_object* v_inst_1486_, lean_object* v_inst_1487_){
_start:
{
lean_object* v_toApplicative_1488_; lean_object* v_toBind_1489_; lean_object* v_getEnv_1490_; lean_object* v_toPure_1491_; lean_object* v___f_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___f_1498_; lean_object* v___x_1499_; 
v_toApplicative_1488_ = lean_ctor_get(v_inst_1486_, 0);
lean_inc_ref(v_toApplicative_1488_);
v_toBind_1489_ = lean_ctor_get(v_inst_1486_, 1);
lean_inc(v_toBind_1489_);
lean_dec_ref(v_inst_1486_);
v_getEnv_1490_ = lean_ctor_get(v_inst_1487_, 0);
lean_inc(v_getEnv_1490_);
lean_dec_ref(v_inst_1487_);
v_toPure_1491_ = lean_ctor_get(v_toApplicative_1488_, 1);
lean_inc(v_toPure_1491_);
lean_dec_ref(v_toApplicative_1488_);
v___f_1492_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__1));
v___x_1493_ = lean_box(1);
v___x_1494_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__2, &l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__2_once, _init_l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__2);
v___x_1495_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__3));
v___x_1496_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__4));
v___x_1497_ = l_Lean_Parser_ParserExtension_instInhabitedState_default;
v___f_1498_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__2___boxed), 8, 7);
lean_closure_set(v___f_1498_, 0, v___x_1497_);
lean_closure_set(v___f_1498_, 1, v___x_1495_);
lean_closure_set(v___f_1498_, 2, v___x_1496_);
lean_closure_set(v___f_1498_, 3, v___x_1494_);
lean_closure_set(v___f_1498_, 4, v___x_1493_);
lean_closure_set(v___f_1498_, 5, v_toPure_1491_);
lean_closure_set(v___f_1498_, 6, v___f_1492_);
v___x_1499_ = lean_apply_4(v_toBind_1489_, lean_box(0), lean_box(0), v_getEnv_1490_, v___f_1498_);
return v___x_1499_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens(lean_object* v_m_1500_, lean_object* v_inst_1501_, lean_object* v_inst_1502_){
_start:
{
lean_object* v___x_1503_; 
v___x_1503_ = l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg(v_inst_1501_, v_inst_1502_);
return v___x_1503_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1504_; lean_object* v___x_1505_; 
v___x_1504_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__0);
v___x_1505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1505_, 0, v___x_1504_);
return v___x_1505_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; 
v___x_1506_ = lean_box(1);
v___x_1507_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__4);
v___x_1508_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__0, &l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__0_once, _init_l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__0);
v___x_1509_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1509_, 0, v___x_1508_);
lean_ctor_set(v___x_1509_, 1, v___x_1507_);
lean_ctor_set(v___x_1509_, 2, v___x_1506_);
return v___x_1509_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0(lean_object* v_n_1511_, lean_object* v___y_1512_, lean_object* v_toPure_1513_, lean_object* v_firsts_1514_, lean_object* v_____do__lift_1515_){
_start:
{
lean_object* v___y_1517_; lean_object* v_val_1528_; 
if (lean_obj_tag(v_____do__lift_1515_) == 0)
{
lean_object* v___x_1530_; lean_object* v___x_1531_; 
v___x_1530_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__2));
lean_inc(v_n_1511_);
v___x_1531_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___redArg(v___x_1530_, v_firsts_1514_, v_n_1511_);
if (lean_obj_tag(v___x_1531_) == 0)
{
uint8_t v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; 
v___x_1532_ = 1;
lean_inc(v_n_1511_);
v___x_1533_ = l_Lean_Name_toString(v_n_1511_, v___x_1532_);
v___x_1534_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1534_, 0, v___x_1533_);
v___y_1517_ = v___x_1534_;
goto v___jp_1516_;
}
else
{
lean_object* v_val_1535_; 
v_val_1535_ = lean_ctor_get(v___x_1531_, 0);
lean_inc(v_val_1535_);
lean_dec_ref_known(v___x_1531_, 1);
v_val_1528_ = v_val_1535_;
goto v___jp_1527_;
}
}
else
{
lean_object* v_val_1536_; 
lean_dec(v_firsts_1514_);
v_val_1536_ = lean_ctor_get(v_____do__lift_1515_, 0);
lean_inc(v_val_1536_);
lean_dec_ref_known(v_____do__lift_1515_, 1);
v_val_1528_ = v_val_1536_;
goto v___jp_1527_;
}
v___jp_1516_:
{
lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; uint8_t v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; 
v___x_1518_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__9, &l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__9_once, _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__9);
v___x_1519_ = l_Lean_Expr_const___override(v_n_1511_, v___y_1512_);
v___x_1520_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__1, &l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__1_once, _init_l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__1);
v___x_1521_ = lean_box(0);
v___x_1522_ = 0;
v___x_1523_ = l_Lean_MessageData_withExprHover(v___y_1517_, v___x_1519_, v___x_1520_, v___x_1521_, v___x_1521_, v___x_1521_, v___x_1522_);
v___x_1524_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1524_, 0, v___x_1518_);
lean_ctor_set(v___x_1524_, 1, v___x_1523_);
v___x_1525_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1525_, 0, v___x_1524_);
lean_ctor_set(v___x_1525_, 1, v___x_1518_);
v___x_1526_ = lean_apply_2(v_toPure_1513_, lean_box(0), v___x_1525_);
return v___x_1526_;
}
v___jp_1527_:
{
lean_object* v___x_1529_; 
v___x_1529_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1529_, 0, v_val_1528_);
v___y_1517_ = v___x_1529_;
goto v___jp_1516_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__1(lean_object* v_n_1537_, lean_object* v_toPure_1538_, lean_object* v_firsts_1539_, lean_object* v_inst_1540_, lean_object* v_inst_1541_, lean_object* v_toBind_1542_, lean_object* v___x_1543_, lean_object* v___x_1544_, lean_object* v___f_1545_, lean_object* v_env_1546_){
_start:
{
lean_object* v___y_1548_; lean_object* v___x_1552_; lean_object* v___x_1553_; 
v___x_1552_ = l_Lean_Environment_constants(v_env_1546_);
lean_inc(v_n_1537_);
v___x_1553_ = l_Lean_SMap_find_x3f_x27___redArg(v___x_1543_, v___x_1544_, v___x_1552_, v_n_1537_);
lean_dec_ref(v___x_1552_);
if (lean_obj_tag(v___x_1553_) == 0)
{
lean_object* v___x_1554_; 
lean_dec_ref(v___f_1545_);
v___x_1554_ = lean_box(0);
v___y_1548_ = v___x_1554_;
goto v___jp_1547_;
}
else
{
lean_object* v_val_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; 
v_val_1555_ = lean_ctor_get(v___x_1553_, 0);
lean_inc(v_val_1555_);
lean_dec_ref_known(v___x_1553_, 1);
v___x_1556_ = l_Lean_ConstantInfo_levelParams(v_val_1555_);
lean_dec(v_val_1555_);
v___x_1557_ = lean_box(0);
v___x_1558_ = l_List_mapTR_loop___redArg(v___f_1545_, v___x_1556_, v___x_1557_);
v___y_1548_ = v___x_1558_;
goto v___jp_1547_;
}
v___jp_1547_:
{
lean_object* v___f_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; 
lean_inc(v_n_1537_);
v___f_1549_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0), 5, 4);
lean_closure_set(v___f_1549_, 0, v_n_1537_);
lean_closure_set(v___f_1549_, 1, v___y_1548_);
lean_closure_set(v___f_1549_, 2, v_toPure_1538_);
lean_closure_set(v___f_1549_, 3, v_firsts_1539_);
v___x_1550_ = l_Lean_Parser_Tactic_Doc_customTacticName___redArg(v_inst_1540_, v_inst_1541_, v_n_1537_);
v___x_1551_ = lean_apply_4(v_toBind_1542_, lean_box(0), lean_box(0), v___x_1550_, v___f_1549_);
return v___x_1551_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg(lean_object* v_inst_1560_, lean_object* v_inst_1561_, lean_object* v_firsts_1562_, lean_object* v_n_1563_){
_start:
{
lean_object* v_toApplicative_1564_; lean_object* v_toBind_1565_; lean_object* v_getEnv_1566_; lean_object* v_toPure_1567_; lean_object* v___f_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___f_1571_; lean_object* v___x_1572_; 
v_toApplicative_1564_ = lean_ctor_get(v_inst_1560_, 0);
v_toBind_1565_ = lean_ctor_get(v_inst_1560_, 1);
lean_inc_n(v_toBind_1565_, 2);
v_getEnv_1566_ = lean_ctor_get(v_inst_1561_, 0);
lean_inc(v_getEnv_1566_);
v_toPure_1567_ = lean_ctor_get(v_toApplicative_1564_, 1);
lean_inc(v_toPure_1567_);
v___f_1568_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___closed__0));
v___x_1569_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__3));
v___x_1570_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__4));
v___f_1571_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__1), 10, 9);
lean_closure_set(v___f_1571_, 0, v_n_1563_);
lean_closure_set(v___f_1571_, 1, v_toPure_1567_);
lean_closure_set(v___f_1571_, 2, v_firsts_1562_);
lean_closure_set(v___f_1571_, 3, v_inst_1560_);
lean_closure_set(v___f_1571_, 4, v_inst_1561_);
lean_closure_set(v___f_1571_, 5, v_toBind_1565_);
lean_closure_set(v___f_1571_, 6, v___x_1569_);
lean_closure_set(v___f_1571_, 7, v___x_1570_);
lean_closure_set(v___f_1571_, 8, v___f_1568_);
v___x_1572_ = lean_apply_4(v_toBind_1565_, lean_box(0), lean_box(0), v_getEnv_1566_, v___f_1571_);
return v___x_1572_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName(lean_object* v_m_1573_, lean_object* v_inst_1574_, lean_object* v_inst_1575_, lean_object* v_firsts_1576_, lean_object* v_n_1577_){
_start:
{
lean_object* v___x_1578_; 
v___x_1578_ = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg(v_inst_1574_, v_inst_1575_, v_firsts_1576_, v_n_1577_);
return v___x_1578_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__4___redArg(){
_start:
{
lean_object* v___x_1582_; 
v___x_1582_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__4___redArg___closed__0));
return v___x_1582_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__4___redArg___boxed(lean_object* v___dummy_1583_){
_start:
{
lean_object* v_res_1584_; 
v_res_1584_ = l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__4___redArg();
return v_res_1584_;
}
}
static lean_object* _init_l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__4___closed__0(void){
_start:
{
lean_object* v___x_1585_; 
v___x_1585_ = l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__4___redArg();
return v___x_1585_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__4(lean_object* v_s_1586_){
_start:
{
lean_object* v___x_1587_; 
v___x_1587_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__4___closed__0, &l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__4___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__4___closed__0);
return v___x_1587_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__4___boxed(lean_object* v_s_1588_){
_start:
{
lean_object* v_res_1589_; 
v_res_1589_ = l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__4(v_s_1588_);
lean_dec_ref(v_s_1588_);
return v_res_1589_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9___redArg___lam__0(uint8_t v___x_1590_, lean_object* v_x1_1591_, lean_object* v_x2_1592_){
_start:
{
lean_object* v___x_1593_; lean_object* v___x_1594_; uint8_t v___x_1595_; 
v___x_1593_ = l_Lean_Name_toString(v_x1_1591_, v___x_1590_);
v___x_1594_ = l_Lean_Name_toString(v_x2_1592_, v___x_1590_);
v___x_1595_ = lean_string_dec_lt(v___x_1593_, v___x_1594_);
lean_dec_ref(v___x_1594_);
lean_dec_ref(v___x_1593_);
return v___x_1595_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9___redArg___lam__0___boxed(lean_object* v___x_1596_, lean_object* v_x1_1597_, lean_object* v_x2_1598_){
_start:
{
uint8_t v___x_16945__boxed_1599_; uint8_t v_res_1600_; lean_object* v_r_1601_; 
v___x_16945__boxed_1599_ = lean_unbox(v___x_1596_);
v_res_1600_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9___redArg___lam__0(v___x_16945__boxed_1599_, v_x1_1597_, v_x2_1598_);
v_r_1601_ = lean_box(v_res_1600_);
return v_r_1601_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9_spec__17___redArg(lean_object* v_hi_1602_, lean_object* v_pivot_1603_, lean_object* v_as_1604_, lean_object* v_i_1605_, lean_object* v_k_1606_){
_start:
{
uint8_t v___x_1607_; 
v___x_1607_ = lean_nat_dec_lt(v_k_1606_, v_hi_1602_);
if (v___x_1607_ == 0)
{
lean_object* v___x_1608_; lean_object* v___x_1609_; 
lean_dec(v_k_1606_);
lean_dec(v_pivot_1603_);
v___x_1608_ = lean_array_fswap(v_as_1604_, v_i_1605_, v_hi_1602_);
v___x_1609_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1609_, 0, v_i_1605_);
lean_ctor_set(v___x_1609_, 1, v___x_1608_);
return v___x_1609_;
}
else
{
lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; uint8_t v___x_1613_; 
v___x_1610_ = lean_array_fget_borrowed(v_as_1604_, v_k_1606_);
lean_inc(v___x_1610_);
v___x_1611_ = l_Lean_Name_toString(v___x_1610_, v___x_1607_);
lean_inc(v_pivot_1603_);
v___x_1612_ = l_Lean_Name_toString(v_pivot_1603_, v___x_1607_);
v___x_1613_ = lean_string_dec_lt(v___x_1611_, v___x_1612_);
lean_dec_ref(v___x_1612_);
lean_dec_ref(v___x_1611_);
if (v___x_1613_ == 0)
{
lean_object* v___x_1614_; lean_object* v___x_1615_; 
v___x_1614_ = lean_unsigned_to_nat(1u);
v___x_1615_ = lean_nat_add(v_k_1606_, v___x_1614_);
lean_dec(v_k_1606_);
v_k_1606_ = v___x_1615_;
goto _start;
}
else
{
lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; 
v___x_1617_ = lean_array_fswap(v_as_1604_, v_i_1605_, v_k_1606_);
v___x_1618_ = lean_unsigned_to_nat(1u);
v___x_1619_ = lean_nat_add(v_i_1605_, v___x_1618_);
lean_dec(v_i_1605_);
v___x_1620_ = lean_nat_add(v_k_1606_, v___x_1618_);
lean_dec(v_k_1606_);
v_as_1604_ = v___x_1617_;
v_i_1605_ = v___x_1619_;
v_k_1606_ = v___x_1620_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9_spec__17___redArg___boxed(lean_object* v_hi_1622_, lean_object* v_pivot_1623_, lean_object* v_as_1624_, lean_object* v_i_1625_, lean_object* v_k_1626_){
_start:
{
lean_object* v_res_1627_; 
v_res_1627_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9_spec__17___redArg(v_hi_1622_, v_pivot_1623_, v_as_1624_, v_i_1625_, v_k_1626_);
lean_dec(v_hi_1622_);
return v_res_1627_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9___redArg(lean_object* v_n_1628_, lean_object* v_as_1629_, lean_object* v_lo_1630_, lean_object* v_hi_1631_){
_start:
{
lean_object* v___y_1633_; uint8_t v___x_1643_; 
v___x_1643_ = lean_nat_dec_lt(v_lo_1630_, v_hi_1631_);
if (v___x_1643_ == 0)
{
lean_dec(v_lo_1630_);
return v_as_1629_;
}
else
{
lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v_mid_1646_; lean_object* v___y_1648_; lean_object* v___y_1654_; lean_object* v___x_1659_; lean_object* v___x_1660_; uint8_t v___x_1661_; 
v___x_1644_ = lean_nat_add(v_lo_1630_, v_hi_1631_);
v___x_1645_ = lean_unsigned_to_nat(1u);
v_mid_1646_ = lean_nat_shiftr(v___x_1644_, v___x_1645_);
lean_dec(v___x_1644_);
v___x_1659_ = lean_array_fget_borrowed(v_as_1629_, v_mid_1646_);
v___x_1660_ = lean_array_fget_borrowed(v_as_1629_, v_lo_1630_);
lean_inc(v___x_1660_);
lean_inc(v___x_1659_);
v___x_1661_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9___redArg___lam__0(v___x_1643_, v___x_1659_, v___x_1660_);
if (v___x_1661_ == 0)
{
v___y_1654_ = v_as_1629_;
goto v___jp_1653_;
}
else
{
lean_object* v___x_1662_; 
v___x_1662_ = lean_array_fswap(v_as_1629_, v_lo_1630_, v_mid_1646_);
v___y_1654_ = v___x_1662_;
goto v___jp_1653_;
}
v___jp_1647_:
{
lean_object* v___x_1649_; lean_object* v___x_1650_; uint8_t v___x_1651_; 
v___x_1649_ = lean_array_fget_borrowed(v___y_1648_, v_mid_1646_);
v___x_1650_ = lean_array_fget_borrowed(v___y_1648_, v_hi_1631_);
lean_inc(v___x_1650_);
lean_inc(v___x_1649_);
v___x_1651_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9___redArg___lam__0(v___x_1643_, v___x_1649_, v___x_1650_);
if (v___x_1651_ == 0)
{
lean_dec(v_mid_1646_);
v___y_1633_ = v___y_1648_;
goto v___jp_1632_;
}
else
{
lean_object* v___x_1652_; 
v___x_1652_ = lean_array_fswap(v___y_1648_, v_mid_1646_, v_hi_1631_);
lean_dec(v_mid_1646_);
v___y_1633_ = v___x_1652_;
goto v___jp_1632_;
}
}
v___jp_1653_:
{
lean_object* v___x_1655_; lean_object* v___x_1656_; uint8_t v___x_1657_; 
v___x_1655_ = lean_array_fget_borrowed(v___y_1654_, v_hi_1631_);
v___x_1656_ = lean_array_fget_borrowed(v___y_1654_, v_lo_1630_);
lean_inc(v___x_1656_);
lean_inc(v___x_1655_);
v___x_1657_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9___redArg___lam__0(v___x_1643_, v___x_1655_, v___x_1656_);
if (v___x_1657_ == 0)
{
v___y_1648_ = v___y_1654_;
goto v___jp_1647_;
}
else
{
lean_object* v___x_1658_; 
v___x_1658_ = lean_array_fswap(v___y_1654_, v_lo_1630_, v_hi_1631_);
v___y_1648_ = v___x_1658_;
goto v___jp_1647_;
}
}
}
v___jp_1632_:
{
lean_object* v_pivot_1634_; lean_object* v___x_1635_; lean_object* v_fst_1636_; lean_object* v_snd_1637_; uint8_t v___x_1638_; 
v_pivot_1634_ = lean_array_fget(v___y_1633_, v_hi_1631_);
lean_inc_n(v_lo_1630_, 2);
v___x_1635_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9_spec__17___redArg(v_hi_1631_, v_pivot_1634_, v___y_1633_, v_lo_1630_, v_lo_1630_);
v_fst_1636_ = lean_ctor_get(v___x_1635_, 0);
lean_inc(v_fst_1636_);
v_snd_1637_ = lean_ctor_get(v___x_1635_, 1);
lean_inc(v_snd_1637_);
lean_dec_ref(v___x_1635_);
v___x_1638_ = lean_nat_dec_le(v_hi_1631_, v_fst_1636_);
if (v___x_1638_ == 0)
{
lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; 
v___x_1639_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9___redArg(v_n_1628_, v_snd_1637_, v_lo_1630_, v_fst_1636_);
v___x_1640_ = lean_unsigned_to_nat(1u);
v___x_1641_ = lean_nat_add(v_fst_1636_, v___x_1640_);
lean_dec(v_fst_1636_);
v_as_1629_ = v___x_1639_;
v_lo_1630_ = v___x_1641_;
goto _start;
}
else
{
lean_dec(v_fst_1636_);
lean_dec(v_lo_1630_);
return v_snd_1637_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9___redArg___boxed(lean_object* v_n_1663_, lean_object* v_as_1664_, lean_object* v_lo_1665_, lean_object* v_hi_1666_){
_start:
{
lean_object* v_res_1667_; 
v_res_1667_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9___redArg(v_n_1663_, v_as_1664_, v_lo_1665_, v_hi_1666_);
lean_dec(v_hi_1666_);
lean_dec(v_n_1663_);
return v_res_1667_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__8_spec__15(lean_object* v_init_1668_, lean_object* v_x_1669_){
_start:
{
if (lean_obj_tag(v_x_1669_) == 0)
{
lean_object* v_k_1670_; lean_object* v_l_1671_; lean_object* v_r_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; 
v_k_1670_ = lean_ctor_get(v_x_1669_, 1);
lean_inc(v_k_1670_);
v_l_1671_ = lean_ctor_get(v_x_1669_, 3);
lean_inc(v_l_1671_);
v_r_1672_ = lean_ctor_get(v_x_1669_, 4);
lean_inc(v_r_1672_);
lean_dec_ref_known(v_x_1669_, 5);
v___x_1673_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__8_spec__15(v_init_1668_, v_l_1671_);
v___x_1674_ = lean_array_push(v___x_1673_, v_k_1670_);
v_init_1668_ = v___x_1674_;
v_x_1669_ = v_r_1672_;
goto _start;
}
else
{
return v_init_1668_;
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__12(lean_object* v_a_1676_, lean_object* v_a_1677_){
_start:
{
if (lean_obj_tag(v_a_1676_) == 0)
{
lean_object* v___x_1678_; 
v___x_1678_ = l_List_reverse___redArg(v_a_1677_);
return v___x_1678_;
}
else
{
lean_object* v_head_1679_; lean_object* v_tail_1680_; lean_object* v___x_1682_; uint8_t v_isShared_1683_; uint8_t v_isSharedCheck_1689_; 
v_head_1679_ = lean_ctor_get(v_a_1676_, 0);
v_tail_1680_ = lean_ctor_get(v_a_1676_, 1);
v_isSharedCheck_1689_ = !lean_is_exclusive(v_a_1676_);
if (v_isSharedCheck_1689_ == 0)
{
v___x_1682_ = v_a_1676_;
v_isShared_1683_ = v_isSharedCheck_1689_;
goto v_resetjp_1681_;
}
else
{
lean_inc(v_tail_1680_);
lean_inc(v_head_1679_);
lean_dec(v_a_1676_);
v___x_1682_ = lean_box(0);
v_isShared_1683_ = v_isSharedCheck_1689_;
goto v_resetjp_1681_;
}
v_resetjp_1681_:
{
lean_object* v___x_1684_; lean_object* v___x_1686_; 
v___x_1684_ = l_Lean_Level_param___override(v_head_1679_);
if (v_isShared_1683_ == 0)
{
lean_ctor_set(v___x_1682_, 1, v_a_1677_);
lean_ctor_set(v___x_1682_, 0, v___x_1684_);
v___x_1686_ = v___x_1682_;
goto v_reusejp_1685_;
}
else
{
lean_object* v_reuseFailAlloc_1688_; 
v_reuseFailAlloc_1688_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1688_, 0, v___x_1684_);
lean_ctor_set(v_reuseFailAlloc_1688_, 1, v_a_1677_);
v___x_1686_ = v_reuseFailAlloc_1688_;
goto v_reusejp_1685_;
}
v_reusejp_1685_:
{
v_a_1676_ = v_tail_1680_;
v_a_1677_ = v___x_1686_;
goto _start;
}
}
}
}
}
LEAN_EXPORT uint8_t l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9_spec__11___redArg___lam__0(lean_object* v_x1_1690_, lean_object* v_x2_1691_){
_start:
{
lean_object* v_fst_1692_; lean_object* v_fst_1693_; uint8_t v___x_1694_; 
v_fst_1692_ = lean_ctor_get(v_x1_1690_, 0);
v_fst_1693_ = lean_ctor_get(v_x2_1691_, 0);
v___x_1694_ = l_Lean_Name_quickLt(v_fst_1692_, v_fst_1693_);
return v___x_1694_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9_spec__11___redArg___lam__0___boxed(lean_object* v_x1_1695_, lean_object* v_x2_1696_){
_start:
{
uint8_t v_res_1697_; lean_object* v_r_1698_; 
v_res_1697_ = l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9_spec__11___redArg___lam__0(v_x1_1695_, v_x2_1696_);
lean_dec_ref(v_x2_1696_);
lean_dec_ref(v_x1_1695_);
v_r_1698_ = lean_box(v_res_1697_);
return v_r_1698_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9_spec__11___redArg(lean_object* v_as_1699_, lean_object* v_k_1700_, lean_object* v_x_1701_, lean_object* v_x_1702_){
_start:
{
lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v_m_1705_; lean_object* v_a_1706_; uint8_t v___x_1707_; 
v___x_1703_ = lean_nat_add(v_x_1701_, v_x_1702_);
v___x_1704_ = lean_unsigned_to_nat(1u);
v_m_1705_ = lean_nat_shiftr(v___x_1703_, v___x_1704_);
lean_dec(v___x_1703_);
v_a_1706_ = lean_array_fget_borrowed(v_as_1699_, v_m_1705_);
v___x_1707_ = l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9_spec__11___redArg___lam__0(v_a_1706_, v_k_1700_);
if (v___x_1707_ == 0)
{
uint8_t v___x_1708_; 
lean_dec(v_x_1702_);
v___x_1708_ = l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9_spec__11___redArg___lam__0(v_k_1700_, v_a_1706_);
if (v___x_1708_ == 0)
{
lean_object* v___x_1709_; 
lean_dec(v_m_1705_);
lean_dec(v_x_1701_);
lean_inc(v_a_1706_);
v___x_1709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1709_, 0, v_a_1706_);
return v___x_1709_;
}
else
{
lean_object* v___x_1710_; uint8_t v___x_1711_; lean_object* v___x_1712_; uint8_t v___y_1714_; 
v___x_1710_ = lean_unsigned_to_nat(0u);
v___x_1711_ = lean_nat_dec_eq(v_m_1705_, v___x_1710_);
v___x_1712_ = lean_nat_sub(v_m_1705_, v___x_1704_);
lean_dec(v_m_1705_);
if (v___x_1711_ == 0)
{
uint8_t v___x_1717_; 
v___x_1717_ = lean_nat_dec_lt(v___x_1712_, v_x_1701_);
v___y_1714_ = v___x_1717_;
goto v___jp_1713_;
}
else
{
v___y_1714_ = v___x_1711_;
goto v___jp_1713_;
}
v___jp_1713_:
{
if (v___y_1714_ == 0)
{
v_x_1702_ = v___x_1712_;
goto _start;
}
else
{
lean_object* v___x_1716_; 
lean_dec(v___x_1712_);
lean_dec(v_x_1701_);
v___x_1716_ = lean_box(0);
return v___x_1716_;
}
}
}
}
else
{
lean_object* v___x_1718_; uint8_t v___x_1719_; 
lean_dec(v_x_1701_);
v___x_1718_ = lean_nat_add(v_m_1705_, v___x_1704_);
lean_dec(v_m_1705_);
v___x_1719_ = lean_nat_dec_le(v___x_1718_, v_x_1702_);
if (v___x_1719_ == 0)
{
lean_object* v___x_1720_; 
lean_dec(v___x_1718_);
lean_dec(v_x_1702_);
v___x_1720_ = lean_box(0);
return v___x_1720_;
}
else
{
v_x_1701_ = v___x_1718_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9_spec__11___redArg___boxed(lean_object* v_as_1722_, lean_object* v_k_1723_, lean_object* v_x_1724_, lean_object* v_x_1725_){
_start:
{
lean_object* v_res_1726_; 
v_res_1726_ = l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9_spec__11___redArg(v_as_1722_, v_k_1723_, v_x_1724_, v_x_1725_);
lean_dec_ref(v_k_1723_);
lean_dec_ref(v_as_1722_);
return v_res_1726_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9___redArg(lean_object* v_tac_1728_, lean_object* v___y_1729_){
_start:
{
lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v_env_1736_; lean_object* v___x_1737_; 
v___x_1731_ = lean_box(1);
v___x_1732_ = lean_st_ref_get(v___y_1729_);
v_env_1736_ = lean_ctor_get(v___x_1732_, 0);
lean_inc_ref(v_env_1736_);
lean_dec(v___x_1732_);
v___x_1737_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1736_, v_tac_1728_);
if (lean_obj_tag(v___x_1737_) == 0)
{
lean_object* v___x_1738_; lean_object* v_toEnvExtension_1739_; lean_object* v_asyncMode_1740_; lean_object* v___x_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; 
v___x_1738_ = l_Lean_Parser_Tactic_Doc_tacticNameExt;
v_toEnvExtension_1739_ = lean_ctor_get(v___x_1738_, 0);
v_asyncMode_1740_ = lean_ctor_get(v_toEnvExtension_1739_, 2);
v___x_1741_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__7, &l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__7_once, _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__7);
v___x_1742_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_1731_, v___x_1738_, v_env_1736_, v_asyncMode_1740_, v___x_1741_);
v___x_1743_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_1742_, v_tac_1728_);
lean_dec(v_tac_1728_);
lean_dec(v___x_1742_);
v___x_1744_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1744_, 0, v___x_1743_);
return v___x_1744_;
}
else
{
lean_object* v_val_1745_; lean_object* v___x_1747_; uint8_t v_isShared_1748_; uint8_t v_isSharedCheck_1773_; 
v_val_1745_ = lean_ctor_get(v___x_1737_, 0);
v_isSharedCheck_1773_ = !lean_is_exclusive(v___x_1737_);
if (v_isSharedCheck_1773_ == 0)
{
v___x_1747_ = v___x_1737_;
v_isShared_1748_ = v_isSharedCheck_1773_;
goto v_resetjp_1746_;
}
else
{
lean_inc(v_val_1745_);
lean_dec(v___x_1737_);
v___x_1747_ = lean_box(0);
v_isShared_1748_ = v_isSharedCheck_1773_;
goto v_resetjp_1746_;
}
v_resetjp_1746_:
{
lean_object* v___x_1749_; uint8_t v___x_1750_; lean_object* v___x_1751_; lean_object* v___x_1752_; lean_object* v___x_1753_; uint8_t v___x_1754_; 
v___x_1749_ = l_Lean_Parser_Tactic_Doc_tacticNameExt;
v___x_1750_ = 0;
v___x_1751_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_1731_, v___x_1749_, v_env_1736_, v_val_1745_, v___x_1750_);
lean_dec(v_val_1745_);
lean_dec_ref(v_env_1736_);
v___x_1752_ = lean_unsigned_to_nat(0u);
v___x_1753_ = lean_array_get_size(v___x_1751_);
v___x_1754_ = lean_nat_dec_lt(v___x_1752_, v___x_1753_);
if (v___x_1754_ == 0)
{
lean_dec_ref(v___x_1751_);
lean_del_object(v___x_1747_);
lean_dec(v_tac_1728_);
goto v___jp_1733_;
}
else
{
lean_object* v___x_1755_; lean_object* v___x_1756_; uint8_t v___x_1757_; 
v___x_1755_ = lean_unsigned_to_nat(1u);
v___x_1756_ = lean_nat_sub(v___x_1753_, v___x_1755_);
v___x_1757_ = lean_nat_dec_le(v___x_1752_, v___x_1756_);
if (v___x_1757_ == 0)
{
lean_dec(v___x_1756_);
lean_dec_ref(v___x_1751_);
lean_del_object(v___x_1747_);
lean_dec(v_tac_1728_);
goto v___jp_1733_;
}
else
{
lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; 
v___x_1758_ = ((lean_object*)(l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9___redArg___closed__0));
v___x_1759_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1759_, 0, v_tac_1728_);
lean_ctor_set(v___x_1759_, 1, v___x_1758_);
v___x_1760_ = l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9_spec__11___redArg(v___x_1751_, v___x_1759_, v___x_1752_, v___x_1756_);
lean_dec_ref_known(v___x_1759_, 2);
lean_dec_ref(v___x_1751_);
if (lean_obj_tag(v___x_1760_) == 0)
{
lean_del_object(v___x_1747_);
goto v___jp_1733_;
}
else
{
lean_object* v_val_1761_; lean_object* v___x_1763_; uint8_t v_isShared_1764_; uint8_t v_isSharedCheck_1772_; 
v_val_1761_ = lean_ctor_get(v___x_1760_, 0);
v_isSharedCheck_1772_ = !lean_is_exclusive(v___x_1760_);
if (v_isSharedCheck_1772_ == 0)
{
v___x_1763_ = v___x_1760_;
v_isShared_1764_ = v_isSharedCheck_1772_;
goto v_resetjp_1762_;
}
else
{
lean_inc(v_val_1761_);
lean_dec(v___x_1760_);
v___x_1763_ = lean_box(0);
v_isShared_1764_ = v_isSharedCheck_1772_;
goto v_resetjp_1762_;
}
v_resetjp_1762_:
{
lean_object* v_snd_1765_; lean_object* v___x_1767_; 
v_snd_1765_ = lean_ctor_get(v_val_1761_, 1);
lean_inc(v_snd_1765_);
lean_dec(v_val_1761_);
if (v_isShared_1764_ == 0)
{
lean_ctor_set(v___x_1763_, 0, v_snd_1765_);
v___x_1767_ = v___x_1763_;
goto v_reusejp_1766_;
}
else
{
lean_object* v_reuseFailAlloc_1771_; 
v_reuseFailAlloc_1771_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1771_, 0, v_snd_1765_);
v___x_1767_ = v_reuseFailAlloc_1771_;
goto v_reusejp_1766_;
}
v_reusejp_1766_:
{
lean_object* v___x_1769_; 
if (v_isShared_1748_ == 0)
{
lean_ctor_set_tag(v___x_1747_, 0);
lean_ctor_set(v___x_1747_, 0, v___x_1767_);
v___x_1769_ = v___x_1747_;
goto v_reusejp_1768_;
}
else
{
lean_object* v_reuseFailAlloc_1770_; 
v_reuseFailAlloc_1770_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1770_, 0, v___x_1767_);
v___x_1769_ = v_reuseFailAlloc_1770_;
goto v_reusejp_1768_;
}
v_reusejp_1768_:
{
return v___x_1769_;
}
}
}
}
}
}
}
}
v___jp_1733_:
{
lean_object* v___x_1734_; lean_object* v___x_1735_; 
v___x_1734_ = lean_box(0);
v___x_1735_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1735_, 0, v___x_1734_);
return v___x_1735_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9___redArg___boxed(lean_object* v_tac_1774_, lean_object* v___y_1775_, lean_object* v___y_1776_){
_start:
{
lean_object* v_res_1777_; 
v_res_1777_ = l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9___redArg(v_tac_1774_, v___y_1775_);
lean_dec(v___y_1775_);
return v_res_1777_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__10___redArg(lean_object* v_t_1778_, lean_object* v_k_1779_){
_start:
{
if (lean_obj_tag(v_t_1778_) == 0)
{
lean_object* v_k_1780_; lean_object* v_v_1781_; lean_object* v_l_1782_; lean_object* v_r_1783_; uint8_t v___x_1784_; 
v_k_1780_ = lean_ctor_get(v_t_1778_, 1);
v_v_1781_ = lean_ctor_get(v_t_1778_, 2);
v_l_1782_ = lean_ctor_get(v_t_1778_, 3);
v_r_1783_ = lean_ctor_get(v_t_1778_, 4);
v___x_1784_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_1779_, v_k_1780_);
switch(v___x_1784_)
{
case 0:
{
v_t_1778_ = v_l_1782_;
goto _start;
}
case 1:
{
lean_object* v___x_1786_; 
lean_inc(v_v_1781_);
v___x_1786_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1786_, 0, v_v_1781_);
return v___x_1786_;
}
default: 
{
v_t_1778_ = v_r_1783_;
goto _start;
}
}
}
else
{
lean_object* v___x_1788_; 
v___x_1788_ = lean_box(0);
return v___x_1788_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__10___redArg___boxed(lean_object* v_t_1789_, lean_object* v_k_1790_){
_start:
{
lean_object* v_res_1791_; 
v_res_1791_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__10___redArg(v_t_1789_, v_k_1790_);
lean_dec(v_k_1790_);
lean_dec(v_t_1789_);
return v_res_1791_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f_x27___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__11_spec__14_spec__22___redArg(lean_object* v_a_1792_, lean_object* v_x_1793_){
_start:
{
if (lean_obj_tag(v_x_1793_) == 0)
{
lean_object* v___x_1794_; 
v___x_1794_ = lean_box(0);
return v___x_1794_;
}
else
{
lean_object* v_key_1795_; lean_object* v_value_1796_; lean_object* v_tail_1797_; uint8_t v___x_1798_; 
v_key_1795_ = lean_ctor_get(v_x_1793_, 0);
v_value_1796_ = lean_ctor_get(v_x_1793_, 1);
v_tail_1797_ = lean_ctor_get(v_x_1793_, 2);
v___x_1798_ = lean_name_eq(v_key_1795_, v_a_1792_);
if (v___x_1798_ == 0)
{
v_x_1793_ = v_tail_1797_;
goto _start;
}
else
{
lean_object* v___x_1800_; 
lean_inc(v_value_1796_);
v___x_1800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1800_, 0, v_value_1796_);
return v___x_1800_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f_x27___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__11_spec__14_spec__22___redArg___boxed(lean_object* v_a_1801_, lean_object* v_x_1802_){
_start:
{
lean_object* v_res_1803_; 
v_res_1803_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f_x27___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__11_spec__14_spec__22___redArg(v_a_1801_, v_x_1802_);
lean_dec(v_x_1802_);
lean_dec(v_a_1801_);
return v_res_1803_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f_x27___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__11_spec__14___redArg(lean_object* v_m_1804_, lean_object* v_a_1805_){
_start:
{
lean_object* v_buckets_1806_; lean_object* v___x_1807_; uint64_t v___y_1809_; lean_object* v___x_1823_; 
v_buckets_1806_ = lean_ctor_get(v_m_1804_, 1);
v___x_1807_ = lean_array_get_size(v_buckets_1806_);
v___x_1823_ = l_unsafeCast___redArg(v_a_1805_);
if (lean_obj_tag(v___x_1823_) == 0)
{
uint64_t v___x_1824_; 
v___x_1824_ = 1723ULL;
v___y_1809_ = v___x_1824_;
goto v___jp_1808_;
}
else
{
uint64_t v_hash_1825_; 
v_hash_1825_ = lean_ctor_get_uint64(v___x_1823_, sizeof(void*)*2);
lean_dec(v___x_1823_);
v___y_1809_ = v_hash_1825_;
goto v___jp_1808_;
}
v___jp_1808_:
{
uint64_t v___x_1810_; uint64_t v___x_1811_; uint64_t v_fold_1812_; uint64_t v___x_1813_; uint64_t v___x_1814_; uint64_t v___x_1815_; size_t v___x_1816_; size_t v___x_1817_; size_t v___x_1818_; size_t v___x_1819_; size_t v___x_1820_; lean_object* v___x_1821_; lean_object* v___x_1822_; 
v___x_1810_ = 32ULL;
v___x_1811_ = lean_uint64_shift_right(v___y_1809_, v___x_1810_);
v_fold_1812_ = lean_uint64_xor(v___y_1809_, v___x_1811_);
v___x_1813_ = 16ULL;
v___x_1814_ = lean_uint64_shift_right(v_fold_1812_, v___x_1813_);
v___x_1815_ = lean_uint64_xor(v_fold_1812_, v___x_1814_);
v___x_1816_ = lean_uint64_to_usize(v___x_1815_);
v___x_1817_ = lean_usize_of_nat(v___x_1807_);
v___x_1818_ = ((size_t)1ULL);
v___x_1819_ = lean_usize_sub(v___x_1817_, v___x_1818_);
v___x_1820_ = lean_usize_land(v___x_1816_, v___x_1819_);
v___x_1821_ = lean_array_uget_borrowed(v_buckets_1806_, v___x_1820_);
v___x_1822_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f_x27___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__11_spec__14_spec__22___redArg(v_a_1805_, v___x_1821_);
return v___x_1822_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f_x27___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__11_spec__14___redArg___boxed(lean_object* v_m_1826_, lean_object* v_a_1827_){
_start:
{
lean_object* v_res_1828_; 
v_res_1828_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f_x27___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__11_spec__14___redArg(v_m_1826_, v_a_1827_);
lean_dec(v_a_1827_);
lean_dec_ref(v_m_1826_);
return v_res_1828_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6_spec__15___redArg(lean_object* v_keys_1829_, lean_object* v_vals_1830_, lean_object* v_i_1831_, lean_object* v_k_1832_){
_start:
{
lean_object* v___x_1833_; uint8_t v___x_1834_; 
v___x_1833_ = lean_array_get_size(v_keys_1829_);
v___x_1834_ = lean_nat_dec_lt(v_i_1831_, v___x_1833_);
if (v___x_1834_ == 0)
{
lean_object* v___x_1835_; 
lean_dec(v_i_1831_);
v___x_1835_ = lean_box(0);
return v___x_1835_;
}
else
{
lean_object* v_k_x27_1836_; uint8_t v___x_1837_; 
v_k_x27_1836_ = lean_array_fget_borrowed(v_keys_1829_, v_i_1831_);
v___x_1837_ = lean_name_eq(v_k_1832_, v_k_x27_1836_);
if (v___x_1837_ == 0)
{
lean_object* v___x_1838_; lean_object* v___x_1839_; 
v___x_1838_ = lean_unsigned_to_nat(1u);
v___x_1839_ = lean_nat_add(v_i_1831_, v___x_1838_);
lean_dec(v_i_1831_);
v_i_1831_ = v___x_1839_;
goto _start;
}
else
{
lean_object* v___x_1841_; lean_object* v___x_1842_; 
v___x_1841_ = lean_array_fget_borrowed(v_vals_1830_, v_i_1831_);
lean_dec(v_i_1831_);
lean_inc(v___x_1841_);
v___x_1842_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1842_, 0, v___x_1841_);
return v___x_1842_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6_spec__15___redArg___boxed(lean_object* v_keys_1843_, lean_object* v_vals_1844_, lean_object* v_i_1845_, lean_object* v_k_1846_){
_start:
{
lean_object* v_res_1847_; 
v_res_1847_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6_spec__15___redArg(v_keys_1843_, v_vals_1844_, v_i_1845_, v_k_1846_);
lean_dec(v_k_1846_);
lean_dec_ref(v_vals_1844_);
lean_dec_ref(v_keys_1843_);
return v_res_1847_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6___redArg(lean_object* v_x_1848_, size_t v_x_1849_, lean_object* v_x_1850_){
_start:
{
if (lean_obj_tag(v_x_1848_) == 0)
{
lean_object* v_es_1851_; lean_object* v___x_1852_; size_t v___x_1853_; size_t v___x_1854_; lean_object* v_j_1855_; lean_object* v___x_1856_; 
v_es_1851_ = lean_ctor_get(v_x_1848_, 0);
v___x_1852_ = lean_box(2);
v___x_1853_ = ((size_t)31ULL);
v___x_1854_ = lean_usize_land(v_x_1849_, v___x_1853_);
v_j_1855_ = lean_usize_to_nat(v___x_1854_);
v___x_1856_ = lean_array_get_borrowed(v___x_1852_, v_es_1851_, v_j_1855_);
lean_dec(v_j_1855_);
switch(lean_obj_tag(v___x_1856_))
{
case 0:
{
lean_object* v_key_1857_; lean_object* v_val_1858_; uint8_t v___x_1859_; 
v_key_1857_ = lean_ctor_get(v___x_1856_, 0);
v_val_1858_ = lean_ctor_get(v___x_1856_, 1);
v___x_1859_ = lean_name_eq(v_x_1850_, v_key_1857_);
if (v___x_1859_ == 0)
{
lean_object* v___x_1860_; 
v___x_1860_ = lean_box(0);
return v___x_1860_;
}
else
{
lean_object* v___x_1861_; 
lean_inc(v_val_1858_);
v___x_1861_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1861_, 0, v_val_1858_);
return v___x_1861_;
}
}
case 1:
{
lean_object* v_node_1862_; size_t v___x_1863_; size_t v___x_1864_; 
v_node_1862_ = lean_ctor_get(v___x_1856_, 0);
v___x_1863_ = ((size_t)5ULL);
v___x_1864_ = lean_usize_shift_right(v_x_1849_, v___x_1863_);
v_x_1848_ = v_node_1862_;
v_x_1849_ = v___x_1864_;
goto _start;
}
default: 
{
lean_object* v___x_1866_; 
v___x_1866_ = lean_box(0);
return v___x_1866_;
}
}
}
else
{
lean_object* v_ks_1867_; lean_object* v_vs_1868_; lean_object* v___x_1869_; lean_object* v___x_1870_; 
v_ks_1867_ = lean_ctor_get(v_x_1848_, 0);
v_vs_1868_ = lean_ctor_get(v_x_1848_, 1);
v___x_1869_ = lean_unsigned_to_nat(0u);
v___x_1870_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6_spec__15___redArg(v_ks_1867_, v_vs_1868_, v___x_1869_, v_x_1850_);
return v___x_1870_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6___redArg___boxed(lean_object* v_x_1871_, lean_object* v_x_1872_, lean_object* v_x_1873_){
_start:
{
size_t v_x_17324__boxed_1874_; lean_object* v_res_1875_; 
v_x_17324__boxed_1874_ = lean_unbox_usize(v_x_1872_);
lean_dec(v_x_1872_);
v_res_1875_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6___redArg(v_x_1871_, v_x_17324__boxed_1874_, v_x_1873_);
lean_dec(v_x_1873_);
lean_dec_ref(v_x_1871_);
return v_res_1875_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4___redArg(lean_object* v_x_1876_, lean_object* v_x_1877_){
_start:
{
uint64_t v___y_1879_; lean_object* v___x_1882_; 
v___x_1882_ = l_unsafeCast___redArg(v_x_1877_);
if (lean_obj_tag(v___x_1882_) == 0)
{
uint64_t v___x_1883_; 
v___x_1883_ = 1723ULL;
v___y_1879_ = v___x_1883_;
goto v___jp_1878_;
}
else
{
uint64_t v_hash_1884_; 
v_hash_1884_ = lean_ctor_get_uint64(v___x_1882_, sizeof(void*)*2);
lean_dec(v___x_1882_);
v___y_1879_ = v_hash_1884_;
goto v___jp_1878_;
}
v___jp_1878_:
{
size_t v___x_1880_; lean_object* v___x_1881_; 
v___x_1880_ = lean_uint64_to_usize(v___y_1879_);
v___x_1881_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6___redArg(v_x_1876_, v___x_1880_, v_x_1877_);
return v___x_1881_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4___redArg___boxed(lean_object* v_x_1885_, lean_object* v_x_1886_){
_start:
{
lean_object* v_res_1887_; 
v_res_1887_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4___redArg(v_x_1885_, v_x_1886_);
lean_dec(v_x_1886_);
lean_dec_ref(v_x_1885_);
return v_res_1887_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f_x27___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__11___redArg(lean_object* v_x_1888_, lean_object* v_x_1889_){
_start:
{
uint8_t v_stage_u2081_1890_; 
v_stage_u2081_1890_ = lean_ctor_get_uint8(v_x_1888_, sizeof(void*)*2);
if (v_stage_u2081_1890_ == 0)
{
lean_object* v_map_u2081_1891_; lean_object* v_map_u2082_1892_; lean_object* v___x_1893_; 
v_map_u2081_1891_ = lean_ctor_get(v_x_1888_, 0);
v_map_u2082_1892_ = lean_ctor_get(v_x_1888_, 1);
v___x_1893_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f_x27___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__11_spec__14___redArg(v_map_u2081_1891_, v_x_1889_);
if (lean_obj_tag(v___x_1893_) == 0)
{
lean_object* v___x_1894_; 
v___x_1894_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4___redArg(v_map_u2082_1892_, v_x_1889_);
return v___x_1894_;
}
else
{
return v___x_1893_;
}
}
else
{
lean_object* v_map_u2081_1895_; lean_object* v___x_1896_; 
v_map_u2081_1895_ = lean_ctor_get(v_x_1888_, 0);
v___x_1896_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f_x27___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__11_spec__14___redArg(v_map_u2081_1895_, v_x_1889_);
return v___x_1896_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f_x27___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__11___redArg___boxed(lean_object* v_x_1897_, lean_object* v_x_1898_){
_start:
{
lean_object* v_res_1899_; 
v_res_1899_ = l_Lean_SMap_find_x3f_x27___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__11___redArg(v_x_1897_, v_x_1898_);
lean_dec(v_x_1898_);
lean_dec_ref(v_x_1897_);
return v_res_1899_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6(lean_object* v_firsts_1900_, lean_object* v_n_1901_, lean_object* v___y_1902_, lean_object* v___y_1903_){
_start:
{
lean_object* v___y_1906_; lean_object* v___y_1907_; lean_object* v___y_1920_; lean_object* v_val_1921_; lean_object* v___x_1923_; lean_object* v___y_1925_; lean_object* v_env_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; 
v___x_1923_ = lean_st_ref_get(v___y_1903_);
v_env_1940_ = lean_ctor_get(v___x_1923_, 0);
lean_inc_ref(v_env_1940_);
lean_dec(v___x_1923_);
v___x_1941_ = l_Lean_Environment_constants(v_env_1940_);
v___x_1942_ = l_Lean_SMap_find_x3f_x27___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__11___redArg(v___x_1941_, v_n_1901_);
lean_dec_ref(v___x_1941_);
if (lean_obj_tag(v___x_1942_) == 0)
{
lean_object* v___x_1943_; 
v___x_1943_ = lean_box(0);
v___y_1925_ = v___x_1943_;
goto v___jp_1924_;
}
else
{
lean_object* v_val_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; 
v_val_1944_ = lean_ctor_get(v___x_1942_, 0);
lean_inc(v_val_1944_);
lean_dec_ref_known(v___x_1942_, 1);
v___x_1945_ = l_Lean_ConstantInfo_levelParams(v_val_1944_);
lean_dec(v_val_1944_);
v___x_1946_ = lean_box(0);
v___x_1947_ = l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__12(v___x_1945_, v___x_1946_);
v___y_1925_ = v___x_1947_;
goto v___jp_1924_;
}
v___jp_1905_:
{
lean_object* v___x_1908_; lean_object* v___x_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; uint8_t v___x_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; lean_object* v___x_1917_; lean_object* v___x_1918_; 
v___x_1908_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__9, &l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__9_once, _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__9);
v___x_1909_ = l_Lean_Expr_const___override(v_n_1901_, v___y_1906_);
v___x_1910_ = lean_unsigned_to_nat(32u);
v___x_1911_ = lean_mk_empty_array_with_capacity(v___x_1910_);
lean_dec_ref(v___x_1911_);
v___x_1912_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__1, &l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__1_once, _init_l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__1);
v___x_1913_ = lean_box(0);
v___x_1914_ = 0;
v___x_1915_ = l_Lean_MessageData_withExprHover(v___y_1907_, v___x_1909_, v___x_1912_, v___x_1913_, v___x_1913_, v___x_1913_, v___x_1914_);
v___x_1916_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1916_, 0, v___x_1908_);
lean_ctor_set(v___x_1916_, 1, v___x_1915_);
v___x_1917_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1917_, 0, v___x_1916_);
lean_ctor_set(v___x_1917_, 1, v___x_1908_);
v___x_1918_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1918_, 0, v___x_1917_);
return v___x_1918_;
}
v___jp_1919_:
{
lean_object* v___x_1922_; 
v___x_1922_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1922_, 0, v_val_1921_);
v___y_1906_ = v___y_1920_;
v___y_1907_ = v___x_1922_;
goto v___jp_1905_;
}
v___jp_1924_:
{
lean_object* v___x_1926_; lean_object* v_a_1927_; lean_object* v___x_1929_; uint8_t v_isShared_1930_; uint8_t v_isSharedCheck_1939_; 
lean_inc(v_n_1901_);
v___x_1926_ = l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9___redArg(v_n_1901_, v___y_1903_);
v_a_1927_ = lean_ctor_get(v___x_1926_, 0);
v_isSharedCheck_1939_ = !lean_is_exclusive(v___x_1926_);
if (v_isSharedCheck_1939_ == 0)
{
v___x_1929_ = v___x_1926_;
v_isShared_1930_ = v_isSharedCheck_1939_;
goto v_resetjp_1928_;
}
else
{
lean_inc(v_a_1927_);
lean_dec(v___x_1926_);
v___x_1929_ = lean_box(0);
v_isShared_1930_ = v_isSharedCheck_1939_;
goto v_resetjp_1928_;
}
v_resetjp_1928_:
{
if (lean_obj_tag(v_a_1927_) == 0)
{
lean_object* v___x_1931_; 
v___x_1931_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__10___redArg(v_firsts_1900_, v_n_1901_);
if (lean_obj_tag(v___x_1931_) == 0)
{
uint8_t v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1935_; 
v___x_1932_ = 1;
lean_inc(v_n_1901_);
v___x_1933_ = l_Lean_Name_toString(v_n_1901_, v___x_1932_);
if (v_isShared_1930_ == 0)
{
lean_ctor_set_tag(v___x_1929_, 3);
lean_ctor_set(v___x_1929_, 0, v___x_1933_);
v___x_1935_ = v___x_1929_;
goto v_reusejp_1934_;
}
else
{
lean_object* v_reuseFailAlloc_1936_; 
v_reuseFailAlloc_1936_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1936_, 0, v___x_1933_);
v___x_1935_ = v_reuseFailAlloc_1936_;
goto v_reusejp_1934_;
}
v_reusejp_1934_:
{
v___y_1906_ = v___y_1925_;
v___y_1907_ = v___x_1935_;
goto v___jp_1905_;
}
}
else
{
lean_object* v_val_1937_; 
lean_del_object(v___x_1929_);
v_val_1937_ = lean_ctor_get(v___x_1931_, 0);
lean_inc(v_val_1937_);
lean_dec_ref_known(v___x_1931_, 1);
v___y_1920_ = v___y_1925_;
v_val_1921_ = v_val_1937_;
goto v___jp_1919_;
}
}
else
{
lean_object* v_val_1938_; 
lean_del_object(v___x_1929_);
v_val_1938_ = lean_ctor_get(v_a_1927_, 0);
lean_inc(v_val_1938_);
lean_dec_ref_known(v_a_1927_, 1);
v___y_1920_ = v___y_1925_;
v_val_1921_ = v_val_1938_;
goto v___jp_1919_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6___boxed(lean_object* v_firsts_1948_, lean_object* v_n_1949_, lean_object* v___y_1950_, lean_object* v___y_1951_, lean_object* v___y_1952_){
_start:
{
lean_object* v_res_1953_; 
v_res_1953_ = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6(v_firsts_1948_, v_n_1949_, v___y_1950_, v___y_1951_);
lean_dec(v___y_1951_);
lean_dec_ref(v___y_1950_);
lean_dec(v_firsts_1948_);
return v_res_1953_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__7(lean_object* v_a_1954_, lean_object* v_x_1955_, lean_object* v_x_1956_, lean_object* v___y_1957_, lean_object* v___y_1958_){
_start:
{
if (lean_obj_tag(v_x_1955_) == 0)
{
lean_object* v___x_1960_; lean_object* v___x_1961_; 
v___x_1960_ = l_List_reverse___redArg(v_x_1956_);
v___x_1961_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1961_, 0, v___x_1960_);
return v___x_1961_;
}
else
{
lean_object* v_head_1962_; lean_object* v_tail_1963_; lean_object* v___x_1965_; uint8_t v_isShared_1966_; uint8_t v_isSharedCheck_1981_; 
v_head_1962_ = lean_ctor_get(v_x_1955_, 0);
v_tail_1963_ = lean_ctor_get(v_x_1955_, 1);
v_isSharedCheck_1981_ = !lean_is_exclusive(v_x_1955_);
if (v_isSharedCheck_1981_ == 0)
{
v___x_1965_ = v_x_1955_;
v_isShared_1966_ = v_isSharedCheck_1981_;
goto v_resetjp_1964_;
}
else
{
lean_inc(v_tail_1963_);
lean_inc(v_head_1962_);
lean_dec(v_x_1955_);
v___x_1965_ = lean_box(0);
v_isShared_1966_ = v_isSharedCheck_1981_;
goto v_resetjp_1964_;
}
v_resetjp_1964_:
{
lean_object* v___x_1967_; 
v___x_1967_ = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6(v_a_1954_, v_head_1962_, v___y_1957_, v___y_1958_);
if (lean_obj_tag(v___x_1967_) == 0)
{
lean_object* v_a_1968_; lean_object* v___x_1970_; 
v_a_1968_ = lean_ctor_get(v___x_1967_, 0);
lean_inc(v_a_1968_);
lean_dec_ref_known(v___x_1967_, 1);
if (v_isShared_1966_ == 0)
{
lean_ctor_set(v___x_1965_, 1, v_x_1956_);
lean_ctor_set(v___x_1965_, 0, v_a_1968_);
v___x_1970_ = v___x_1965_;
goto v_reusejp_1969_;
}
else
{
lean_object* v_reuseFailAlloc_1972_; 
v_reuseFailAlloc_1972_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1972_, 0, v_a_1968_);
lean_ctor_set(v_reuseFailAlloc_1972_, 1, v_x_1956_);
v___x_1970_ = v_reuseFailAlloc_1972_;
goto v_reusejp_1969_;
}
v_reusejp_1969_:
{
v_x_1955_ = v_tail_1963_;
v_x_1956_ = v___x_1970_;
goto _start;
}
}
else
{
lean_object* v_a_1973_; lean_object* v___x_1975_; uint8_t v_isShared_1976_; uint8_t v_isSharedCheck_1980_; 
lean_del_object(v___x_1965_);
lean_dec(v_tail_1963_);
lean_dec(v_x_1956_);
v_a_1973_ = lean_ctor_get(v___x_1967_, 0);
v_isSharedCheck_1980_ = !lean_is_exclusive(v___x_1967_);
if (v_isSharedCheck_1980_ == 0)
{
v___x_1975_ = v___x_1967_;
v_isShared_1976_ = v_isSharedCheck_1980_;
goto v_resetjp_1974_;
}
else
{
lean_inc(v_a_1973_);
lean_dec(v___x_1967_);
v___x_1975_ = lean_box(0);
v_isShared_1976_ = v_isSharedCheck_1980_;
goto v_resetjp_1974_;
}
v_resetjp_1974_:
{
lean_object* v___x_1978_; 
if (v_isShared_1976_ == 0)
{
v___x_1978_ = v___x_1975_;
goto v_reusejp_1977_;
}
else
{
lean_object* v_reuseFailAlloc_1979_; 
v_reuseFailAlloc_1979_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1979_, 0, v_a_1973_);
v___x_1978_ = v_reuseFailAlloc_1979_;
goto v_reusejp_1977_;
}
v_reusejp_1977_:
{
return v___x_1978_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__7___boxed(lean_object* v_a_1982_, lean_object* v_x_1983_, lean_object* v_x_1984_, lean_object* v___y_1985_, lean_object* v___y_1986_, lean_object* v___y_1987_){
_start:
{
lean_object* v_res_1988_; 
v_res_1988_ = l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__7(v_a_1982_, v_x_1983_, v_x_1984_, v___y_1985_, v___y_1986_);
lean_dec(v___y_1986_);
lean_dec_ref(v___y_1985_);
lean_dec(v_a_1982_);
return v_res_1988_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__5___redArg(lean_object* v_val_1989_, lean_object* v___x_1990_, lean_object* v___x_1991_, lean_object* v_a_1992_, lean_object* v_b_1993_){
_start:
{
lean_object* v_it_1995_; lean_object* v_startInclusive_1996_; lean_object* v_endExclusive_1997_; 
if (lean_obj_tag(v_a_1992_) == 0)
{
lean_object* v_currPos_2002_; lean_object* v_searcher_2003_; lean_object* v___x_2005_; uint8_t v_isShared_2006_; uint8_t v_isSharedCheck_2026_; 
v_currPos_2002_ = lean_ctor_get(v_a_1992_, 0);
v_searcher_2003_ = lean_ctor_get(v_a_1992_, 1);
v_isSharedCheck_2026_ = !lean_is_exclusive(v_a_1992_);
if (v_isSharedCheck_2026_ == 0)
{
v___x_2005_ = v_a_1992_;
v_isShared_2006_ = v_isSharedCheck_2026_;
goto v_resetjp_2004_;
}
else
{
lean_inc(v_searcher_2003_);
lean_inc(v_currPos_2002_);
lean_dec(v_a_1992_);
v___x_2005_ = lean_box(0);
v_isShared_2006_ = v_isSharedCheck_2026_;
goto v_resetjp_2004_;
}
v_resetjp_2004_:
{
uint8_t v_decide_2007_; 
v_decide_2007_ = lean_nat_dec_eq(v_searcher_2003_, v___x_1991_);
if (v_decide_2007_ == 0)
{
uint32_t v___x_2008_; uint32_t v___x_2009_; uint8_t v___x_2010_; 
v___x_2008_ = 10;
v___x_2009_ = lean_string_utf8_get_fast(v_val_1989_, v_searcher_2003_);
v___x_2010_ = lean_uint32_dec_eq(v___x_2009_, v___x_2008_);
if (v___x_2010_ == 0)
{
lean_object* v___x_2011_; lean_object* v___x_2013_; 
v___x_2011_ = lean_string_utf8_next_fast(v_val_1989_, v_searcher_2003_);
lean_dec(v_searcher_2003_);
if (v_isShared_2006_ == 0)
{
lean_ctor_set(v___x_2005_, 1, v___x_2011_);
v___x_2013_ = v___x_2005_;
goto v_reusejp_2012_;
}
else
{
lean_object* v_reuseFailAlloc_2015_; 
v_reuseFailAlloc_2015_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2015_, 0, v_currPos_2002_);
lean_ctor_set(v_reuseFailAlloc_2015_, 1, v___x_2011_);
v___x_2013_ = v_reuseFailAlloc_2015_;
goto v_reusejp_2012_;
}
v_reusejp_2012_:
{
v_a_1992_ = v___x_2013_;
goto _start;
}
}
else
{
lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; lean_object* v_slice_2019_; lean_object* v_nextIt_2021_; 
v___x_2016_ = lean_string_utf8_next_fast(v_val_1989_, v_searcher_2003_);
v___x_2017_ = lean_nat_sub(v___x_2016_, v_searcher_2003_);
v___x_2018_ = lean_nat_add(v_searcher_2003_, v___x_2017_);
lean_dec(v___x_2017_);
v_slice_2019_ = l_String_Slice_subslice_x21(v___x_1990_, v_currPos_2002_, v_searcher_2003_);
lean_inc(v___x_2018_);
if (v_isShared_2006_ == 0)
{
lean_ctor_set(v___x_2005_, 1, v___x_2018_);
lean_ctor_set(v___x_2005_, 0, v___x_2018_);
v_nextIt_2021_ = v___x_2005_;
goto v_reusejp_2020_;
}
else
{
lean_object* v_reuseFailAlloc_2024_; 
v_reuseFailAlloc_2024_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2024_, 0, v___x_2018_);
lean_ctor_set(v_reuseFailAlloc_2024_, 1, v___x_2018_);
v_nextIt_2021_ = v_reuseFailAlloc_2024_;
goto v_reusejp_2020_;
}
v_reusejp_2020_:
{
lean_object* v_startInclusive_2022_; lean_object* v_endExclusive_2023_; 
v_startInclusive_2022_ = lean_ctor_get(v_slice_2019_, 0);
lean_inc(v_startInclusive_2022_);
v_endExclusive_2023_ = lean_ctor_get(v_slice_2019_, 1);
lean_inc(v_endExclusive_2023_);
lean_dec_ref(v_slice_2019_);
v_it_1995_ = v_nextIt_2021_;
v_startInclusive_1996_ = v_startInclusive_2022_;
v_endExclusive_1997_ = v_endExclusive_2023_;
goto v___jp_1994_;
}
}
}
else
{
lean_object* v___x_2025_; 
lean_del_object(v___x_2005_);
lean_dec(v_searcher_2003_);
v___x_2025_ = lean_box(1);
lean_inc(v___x_1991_);
v_it_1995_ = v___x_2025_;
v_startInclusive_1996_ = v_currPos_2002_;
v_endExclusive_1997_ = v___x_1991_;
goto v___jp_1994_;
}
}
}
else
{
lean_dec(v___x_1991_);
return v_b_1993_;
}
v___jp_1994_:
{
lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; 
v___x_1998_ = lean_string_utf8_extract_fast(v_val_1989_, v_startInclusive_1996_, v_endExclusive_1997_);
lean_dec(v_endExclusive_1997_);
lean_dec(v_startInclusive_1996_);
v___x_1999_ = l_Lean_stringToMessageData(v___x_1998_);
v___x_2000_ = lean_array_push(v_b_1993_, v___x_1999_);
v_a_1992_ = v_it_1995_;
v_b_1993_ = v___x_2000_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__5___redArg___boxed(lean_object* v_val_2027_, lean_object* v___x_2028_, lean_object* v___x_2029_, lean_object* v_a_2030_, lean_object* v_b_2031_){
_start:
{
lean_object* v_res_2032_; 
v_res_2032_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__5___redArg(v_val_2027_, v___x_2028_, v___x_2029_, v_a_2030_, v_b_2031_);
lean_dec_ref(v___x_2028_);
lean_dec_ref(v_val_2027_);
return v_res_2032_;
}
}
static lean_object* _init_l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__2(void){
_start:
{
lean_object* v___x_2036_; lean_object* v___x_2037_; 
v___x_2036_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__1));
v___x_2037_ = l_Lean_stringToMessageData(v___x_2036_);
return v___x_2037_;
}
}
static lean_object* _init_l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__4(void){
_start:
{
lean_object* v___x_2039_; lean_object* v___x_2040_; 
v___x_2039_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__3));
v___x_2040_ = l_Lean_stringToMessageData(v___x_2039_);
return v___x_2040_;
}
}
static lean_object* _init_l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__6(void){
_start:
{
lean_object* v___x_2042_; lean_object* v___x_2043_; 
v___x_2042_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__5));
v___x_2043_ = l_Lean_stringToMessageData(v___x_2042_);
return v___x_2043_;
}
}
static lean_object* _init_l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__9(void){
_start:
{
lean_object* v___x_2047_; lean_object* v___x_2048_; 
v___x_2047_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__8));
v___x_2048_ = l_Lean_MessageData_ofFormat(v___x_2047_);
return v___x_2048_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11(lean_object* v_a_2049_, lean_object* v_a_2050_, lean_object* v_x_2051_, lean_object* v_x_2052_, lean_object* v___y_2053_, lean_object* v___y_2054_){
_start:
{
if (lean_obj_tag(v_x_2051_) == 0)
{
lean_object* v___x_2056_; lean_object* v___x_2057_; 
v___x_2056_ = l_List_reverse___redArg(v_x_2052_);
v___x_2057_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2057_, 0, v___x_2056_);
return v___x_2057_;
}
else
{
lean_object* v_head_2058_; lean_object* v_tail_2059_; lean_object* v___x_2061_; uint8_t v_isShared_2062_; uint8_t v_isSharedCheck_2156_; 
v_head_2058_ = lean_ctor_get(v_x_2051_, 0);
v_tail_2059_ = lean_ctor_get(v_x_2051_, 1);
v_isSharedCheck_2156_ = !lean_is_exclusive(v_x_2051_);
if (v_isSharedCheck_2156_ == 0)
{
v___x_2061_ = v_x_2051_;
v_isShared_2062_ = v_isSharedCheck_2156_;
goto v_resetjp_2060_;
}
else
{
lean_inc(v_tail_2059_);
lean_inc(v_head_2058_);
lean_dec(v_x_2051_);
v___x_2061_ = lean_box(0);
v_isShared_2062_ = v_isSharedCheck_2156_;
goto v_resetjp_2060_;
}
v_resetjp_2060_:
{
lean_object* v___y_2064_; lean_object* v___y_2065_; lean_object* v___y_2066_; lean_object* v___y_2067_; lean_object* v_snd_2076_; lean_object* v_fst_2077_; lean_object* v___x_2079_; uint8_t v_isShared_2080_; uint8_t v_isSharedCheck_2155_; 
v_snd_2076_ = lean_ctor_get(v_head_2058_, 1);
v_fst_2077_ = lean_ctor_get(v_head_2058_, 0);
v_isSharedCheck_2155_ = !lean_is_exclusive(v_head_2058_);
if (v_isSharedCheck_2155_ == 0)
{
v___x_2079_ = v_head_2058_;
v_isShared_2080_ = v_isSharedCheck_2155_;
goto v_resetjp_2078_;
}
else
{
lean_inc(v_snd_2076_);
lean_inc(v_fst_2077_);
lean_dec(v_head_2058_);
v___x_2079_ = lean_box(0);
v_isShared_2080_ = v_isSharedCheck_2155_;
goto v_resetjp_2078_;
}
v___jp_2063_:
{
lean_object* v___x_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2073_; 
v___x_2068_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2068_, 0, v___y_2066_);
lean_ctor_set(v___x_2068_, 1, v___y_2067_);
v___x_2069_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2069_, 0, v___x_2068_);
lean_ctor_set(v___x_2069_, 1, v___y_2064_);
v___x_2070_ = l_Lean_MessageData_nestD(v___x_2069_);
lean_inc_ref(v___y_2065_);
v___x_2071_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2071_, 0, v___y_2065_);
lean_ctor_set(v___x_2071_, 1, v___x_2070_);
if (v_isShared_2062_ == 0)
{
lean_ctor_set(v___x_2061_, 1, v_x_2052_);
lean_ctor_set(v___x_2061_, 0, v___x_2071_);
v___x_2073_ = v___x_2061_;
goto v_reusejp_2072_;
}
else
{
lean_object* v_reuseFailAlloc_2075_; 
v_reuseFailAlloc_2075_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2075_, 0, v___x_2071_);
lean_ctor_set(v_reuseFailAlloc_2075_, 1, v_x_2052_);
v___x_2073_ = v_reuseFailAlloc_2075_;
goto v_reusejp_2072_;
}
v_reusejp_2072_:
{
v_x_2051_ = v_tail_2059_;
v_x_2052_ = v___x_2073_;
goto _start;
}
}
v_resetjp_2078_:
{
lean_object* v_fst_2081_; lean_object* v_snd_2082_; lean_object* v___x_2084_; uint8_t v_isShared_2085_; uint8_t v_isSharedCheck_2154_; 
v_fst_2081_ = lean_ctor_get(v_snd_2076_, 0);
v_snd_2082_ = lean_ctor_get(v_snd_2076_, 1);
v_isSharedCheck_2154_ = !lean_is_exclusive(v_snd_2076_);
if (v_isSharedCheck_2154_ == 0)
{
v___x_2084_ = v_snd_2076_;
v_isShared_2085_ = v_isSharedCheck_2154_;
goto v_resetjp_2083_;
}
else
{
lean_inc(v_snd_2082_);
lean_inc(v_fst_2081_);
lean_dec(v_snd_2076_);
v___x_2084_ = lean_box(0);
v_isShared_2085_ = v_isSharedCheck_2154_;
goto v_resetjp_2083_;
}
v_resetjp_2083_:
{
lean_object* v___y_2087_; lean_object* v___y_2088_; lean_object* v___y_2089_; lean_object* v___y_2090_; lean_object* v_a_2109_; lean_object* v___y_2125_; lean_object* v___x_2134_; 
v___x_2134_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_a_2050_, v_fst_2077_);
if (lean_obj_tag(v___x_2134_) == 0)
{
lean_object* v___x_2135_; 
v___x_2135_ = l_Lean_MessageData_nil;
v_a_2109_ = v___x_2135_;
goto v___jp_2108_;
}
else
{
lean_object* v_val_2136_; 
v_val_2136_ = lean_ctor_get(v___x_2134_, 0);
lean_inc(v_val_2136_);
lean_dec_ref_known(v___x_2134_, 1);
if (lean_obj_tag(v_val_2136_) == 0)
{
lean_object* v_size_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___y_2142_; lean_object* v___y_2143_; lean_object* v___x_2145_; uint8_t v___x_2146_; 
v_size_2137_ = lean_ctor_get(v_val_2136_, 0);
v___x_2138_ = lean_mk_empty_array_with_capacity(v_size_2137_);
v___x_2139_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__8_spec__15(v___x_2138_, v_val_2136_);
v___x_2140_ = lean_array_get_size(v___x_2139_);
v___x_2145_ = lean_unsigned_to_nat(0u);
v___x_2146_ = lean_nat_dec_eq(v___x_2140_, v___x_2145_);
if (v___x_2146_ == 0)
{
lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v___y_2150_; uint8_t v___x_2152_; 
v___x_2147_ = lean_unsigned_to_nat(1u);
v___x_2148_ = lean_nat_sub(v___x_2140_, v___x_2147_);
v___x_2152_ = lean_nat_dec_le(v___x_2145_, v___x_2148_);
if (v___x_2152_ == 0)
{
lean_inc(v___x_2148_);
v___y_2150_ = v___x_2148_;
goto v___jp_2149_;
}
else
{
v___y_2150_ = v___x_2145_;
goto v___jp_2149_;
}
v___jp_2149_:
{
uint8_t v___x_2151_; 
v___x_2151_ = lean_nat_dec_le(v___y_2150_, v___x_2148_);
if (v___x_2151_ == 0)
{
lean_dec(v___x_2148_);
lean_inc(v___y_2150_);
v___y_2142_ = v___y_2150_;
v___y_2143_ = v___y_2150_;
goto v___jp_2141_;
}
else
{
v___y_2142_ = v___y_2150_;
v___y_2143_ = v___x_2148_;
goto v___jp_2141_;
}
}
}
else
{
v___y_2125_ = v___x_2139_;
goto v___jp_2124_;
}
v___jp_2141_:
{
lean_object* v___x_2144_; 
v___x_2144_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9___redArg(v___x_2140_, v___x_2139_, v___y_2142_, v___y_2143_);
lean_dec(v___y_2143_);
v___y_2125_ = v___x_2144_;
goto v___jp_2124_;
}
}
else
{
lean_object* v___x_2153_; 
v___x_2153_ = l_Lean_MessageData_nil;
v_a_2109_ = v___x_2153_;
goto v___jp_2108_;
}
}
v___jp_2086_:
{
lean_object* v___x_2092_; 
if (v_isShared_2085_ == 0)
{
lean_ctor_set_tag(v___x_2084_, 7);
lean_ctor_set(v___x_2084_, 1, v___y_2090_);
lean_ctor_set(v___x_2084_, 0, v___y_2089_);
v___x_2092_ = v___x_2084_;
goto v_reusejp_2091_;
}
else
{
lean_object* v_reuseFailAlloc_2107_; 
v_reuseFailAlloc_2107_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2107_, 0, v___y_2089_);
lean_ctor_set(v_reuseFailAlloc_2107_, 1, v___y_2090_);
v___x_2092_ = v_reuseFailAlloc_2107_;
goto v_reusejp_2091_;
}
v_reusejp_2091_:
{
if (lean_obj_tag(v_snd_2082_) == 0)
{
lean_object* v___x_2093_; 
lean_del_object(v___x_2079_);
v___x_2093_ = l_Lean_MessageData_nil;
v___y_2064_ = v___y_2087_;
v___y_2065_ = v___y_2088_;
v___y_2066_ = v___x_2092_;
v___y_2067_ = v___x_2093_;
goto v___jp_2063_;
}
else
{
lean_object* v_val_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2105_; 
v_val_2094_ = lean_ctor_get(v_snd_2082_, 0);
lean_inc_n(v_val_2094_, 2);
lean_dec_ref_known(v_snd_2082_, 1);
v___x_2095_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__0);
v___x_2096_ = lean_unsigned_to_nat(0u);
v___x_2097_ = lean_string_utf8_byte_size(v_val_2094_);
v___x_2098_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2098_, 0, v_val_2094_);
lean_ctor_set(v___x_2098_, 1, v___x_2096_);
lean_ctor_set(v___x_2098_, 2, v___x_2097_);
v___x_2099_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__4___closed__0, &l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__4___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__4___closed__0);
v___x_2100_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__0));
v___x_2101_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__5___redArg(v_val_2094_, v___x_2098_, v___x_2097_, v___x_2099_, v___x_2100_);
lean_dec_ref_known(v___x_2098_, 3);
lean_dec(v_val_2094_);
v___x_2102_ = lean_array_to_list(v___x_2101_);
v___x_2103_ = l_Lean_MessageData_joinSep(v___x_2102_, v___x_2095_);
if (v_isShared_2080_ == 0)
{
lean_ctor_set_tag(v___x_2079_, 7);
lean_ctor_set(v___x_2079_, 1, v___x_2103_);
lean_ctor_set(v___x_2079_, 0, v___x_2095_);
v___x_2105_ = v___x_2079_;
goto v_reusejp_2104_;
}
else
{
lean_object* v_reuseFailAlloc_2106_; 
v_reuseFailAlloc_2106_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2106_, 0, v___x_2095_);
lean_ctor_set(v_reuseFailAlloc_2106_, 1, v___x_2103_);
v___x_2105_ = v_reuseFailAlloc_2106_;
goto v_reusejp_2104_;
}
v_reusejp_2104_:
{
v___y_2064_ = v___y_2087_;
v___y_2065_ = v___y_2088_;
v___y_2066_ = v___x_2092_;
v___y_2067_ = v___x_2105_;
goto v___jp_2063_;
}
}
}
}
v___jp_2108_:
{
lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; uint8_t v___x_2115_; lean_object* v___x_2116_; uint8_t v___x_2117_; 
v___x_2110_ = lean_obj_once(&l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__2, &l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__2_once, _init_l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__2);
v___x_2111_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__9, &l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__9_once, _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__9);
lean_inc(v_fst_2077_);
v___x_2112_ = l_Lean_MessageData_ofName(v_fst_2077_);
v___x_2113_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2113_, 0, v___x_2111_);
lean_ctor_set(v___x_2113_, 1, v___x_2112_);
v___x_2114_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2114_, 0, v___x_2113_);
lean_ctor_set(v___x_2114_, 1, v___x_2111_);
v___x_2115_ = 1;
v___x_2116_ = l_Lean_Name_toString(v_fst_2077_, v___x_2115_);
v___x_2117_ = lean_string_dec_eq(v___x_2116_, v_fst_2081_);
lean_dec_ref(v___x_2116_);
if (v___x_2117_ == 0)
{
lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; 
v___x_2118_ = lean_obj_once(&l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__4, &l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__4_once, _init_l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__4);
v___x_2119_ = l_Lean_stringToMessageData(v_fst_2081_);
v___x_2120_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2120_, 0, v___x_2118_);
lean_ctor_set(v___x_2120_, 1, v___x_2119_);
v___x_2121_ = lean_obj_once(&l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__6, &l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__6_once, _init_l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__6);
v___x_2122_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2122_, 0, v___x_2120_);
lean_ctor_set(v___x_2122_, 1, v___x_2121_);
v___y_2087_ = v_a_2109_;
v___y_2088_ = v___x_2110_;
v___y_2089_ = v___x_2114_;
v___y_2090_ = v___x_2122_;
goto v___jp_2086_;
}
else
{
lean_object* v___x_2123_; 
lean_dec(v_fst_2081_);
v___x_2123_ = l_Lean_MessageData_nil;
v___y_2087_ = v_a_2109_;
v___y_2088_ = v___x_2110_;
v___y_2089_ = v___x_2114_;
v___y_2090_ = v___x_2123_;
goto v___jp_2086_;
}
}
v___jp_2124_:
{
lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; 
v___x_2126_ = lean_array_to_list(v___y_2125_);
v___x_2127_ = lean_box(0);
v___x_2128_ = l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__7(v_a_2049_, v___x_2126_, v___x_2127_, v___y_2053_, v___y_2054_);
if (lean_obj_tag(v___x_2128_) == 0)
{
lean_object* v_a_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; 
v_a_2129_ = lean_ctor_get(v___x_2128_, 0);
lean_inc(v_a_2129_);
lean_dec_ref_known(v___x_2128_, 1);
v___x_2130_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__0);
v___x_2131_ = lean_obj_once(&l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__9, &l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__9_once, _init_l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__9);
v___x_2132_ = l_Lean_MessageData_joinSep(v_a_2129_, v___x_2131_);
v___x_2133_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2133_, 0, v___x_2130_);
lean_ctor_set(v___x_2133_, 1, v___x_2132_);
v_a_2109_ = v___x_2133_;
goto v___jp_2108_;
}
else
{
lean_del_object(v___x_2084_);
lean_dec(v_snd_2082_);
lean_dec(v_fst_2081_);
lean_del_object(v___x_2079_);
lean_dec(v_fst_2077_);
lean_del_object(v___x_2061_);
lean_dec(v_tail_2059_);
lean_dec(v_x_2052_);
return v___x_2128_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___boxed(lean_object* v_a_2157_, lean_object* v_a_2158_, lean_object* v_x_2159_, lean_object* v_x_2160_, lean_object* v___y_2161_, lean_object* v___y_2162_, lean_object* v___y_2163_){
_start:
{
lean_object* v_res_2164_; 
v_res_2164_ = l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11(v_a_2157_, v_a_2158_, v_x_2159_, v_x_2160_, v___y_2161_, v___y_2162_);
lean_dec(v___y_2162_);
lean_dec_ref(v___y_2161_);
lean_dec(v_a_2158_);
lean_dec(v_a_2157_);
return v_res_2164_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__26_spec__32___lam__0(uint8_t v_suppressElabErrors_2166_, uint8_t v___y_2167_, lean_object* v_x_2168_){
_start:
{
if (lean_obj_tag(v_x_2168_) == 1)
{
lean_object* v_pre_2169_; 
v_pre_2169_ = lean_ctor_get(v_x_2168_, 0);
if (lean_obj_tag(v_pre_2169_) == 0)
{
lean_object* v_str_2170_; lean_object* v___x_2171_; uint8_t v___x_2172_; 
v_str_2170_ = lean_ctor_get(v_x_2168_, 1);
v___x_2171_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__26_spec__32___lam__0___closed__0));
v___x_2172_ = lean_string_dec_eq(v_str_2170_, v___x_2171_);
if (v___x_2172_ == 0)
{
return v___x_2172_;
}
else
{
return v_suppressElabErrors_2166_;
}
}
else
{
return v___y_2167_;
}
}
else
{
return v___y_2167_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__26_spec__32___lam__0___boxed(lean_object* v_suppressElabErrors_2173_, lean_object* v___y_2174_, lean_object* v_x_2175_){
_start:
{
uint8_t v_suppressElabErrors_boxed_2176_; uint8_t v___y_17942__boxed_2177_; uint8_t v_res_2178_; lean_object* v_r_2179_; 
v_suppressElabErrors_boxed_2176_ = lean_unbox(v_suppressElabErrors_2173_);
v___y_17942__boxed_2177_ = lean_unbox(v___y_2174_);
v_res_2178_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__26_spec__32___lam__0(v_suppressElabErrors_boxed_2176_, v___y_17942__boxed_2177_, v_x_2175_);
lean_dec(v_x_2175_);
v_r_2179_ = lean_box(v_res_2178_);
return v_r_2179_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__26_spec__32(lean_object* v_ref_2180_, lean_object* v_msgData_2181_, uint8_t v_severity_2182_, uint8_t v_isSilent_2183_, lean_object* v___y_2184_, lean_object* v___y_2185_){
_start:
{
lean_object* v___y_2188_; lean_object* v___y_2189_; uint8_t v___y_2190_; lean_object* v___y_2191_; lean_object* v___y_2192_; uint8_t v___y_2193_; lean_object* v___y_2194_; lean_object* v___y_2195_; uint8_t v___y_2253_; uint8_t v___y_2254_; lean_object* v___y_2255_; uint8_t v___y_2256_; lean_object* v___y_2257_; uint8_t v___y_2281_; uint8_t v___y_2282_; lean_object* v___y_2283_; uint8_t v___y_2284_; lean_object* v___y_2285_; uint8_t v___y_2289_; uint8_t v___y_2290_; uint8_t v___y_2291_; uint8_t v___x_2306_; uint8_t v___y_2308_; uint8_t v___y_2309_; uint8_t v___y_2310_; uint8_t v___y_2312_; uint8_t v___x_2324_; 
v___x_2306_ = 2;
v___x_2324_ = l_Lean_instBEqMessageSeverity_beq(v_severity_2182_, v___x_2306_);
if (v___x_2324_ == 0)
{
v___y_2312_ = v___x_2324_;
goto v___jp_2311_;
}
else
{
uint8_t v___x_2325_; 
lean_inc_ref(v_msgData_2181_);
v___x_2325_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_2181_);
v___y_2312_ = v___x_2325_;
goto v___jp_2311_;
}
v___jp_2187_:
{
lean_object* v___x_2196_; 
v___x_2196_ = l_Lean_Elab_Command_getScope___redArg(v___y_2195_);
if (lean_obj_tag(v___x_2196_) == 0)
{
lean_object* v_a_2197_; lean_object* v_currNamespace_2198_; lean_object* v___x_2199_; 
v_a_2197_ = lean_ctor_get(v___x_2196_, 0);
lean_inc(v_a_2197_);
lean_dec_ref_known(v___x_2196_, 1);
v_currNamespace_2198_ = lean_ctor_get(v_a_2197_, 2);
lean_inc(v_currNamespace_2198_);
lean_dec(v_a_2197_);
v___x_2199_ = l_Lean_Elab_Command_getScope___redArg(v___y_2195_);
if (lean_obj_tag(v___x_2199_) == 0)
{
lean_object* v_a_2200_; lean_object* v___x_2202_; uint8_t v_isShared_2203_; uint8_t v_isSharedCheck_2235_; 
v_a_2200_ = lean_ctor_get(v___x_2199_, 0);
v_isSharedCheck_2235_ = !lean_is_exclusive(v___x_2199_);
if (v_isSharedCheck_2235_ == 0)
{
v___x_2202_ = v___x_2199_;
v_isShared_2203_ = v_isSharedCheck_2235_;
goto v_resetjp_2201_;
}
else
{
lean_inc(v_a_2200_);
lean_dec(v___x_2199_);
v___x_2202_ = lean_box(0);
v_isShared_2203_ = v_isSharedCheck_2235_;
goto v_resetjp_2201_;
}
v_resetjp_2201_:
{
lean_object* v_openDecls_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v_env_2209_; lean_object* v_messages_2210_; lean_object* v_scopes_2211_; lean_object* v_usedQuotCtxts_2212_; lean_object* v_nextMacroScope_2213_; lean_object* v_maxRecDepth_2214_; lean_object* v_ngen_2215_; lean_object* v_auxDeclNGen_2216_; lean_object* v_infoState_2217_; lean_object* v_traceState_2218_; lean_object* v_snapshotTasks_2219_; lean_object* v_prevLinterStates_2220_; lean_object* v_codeQualityEntryTasks_2221_; lean_object* v___x_2223_; uint8_t v_isShared_2224_; uint8_t v_isSharedCheck_2234_; 
v_openDecls_2204_ = lean_ctor_get(v_a_2200_, 3);
lean_inc(v_openDecls_2204_);
lean_dec(v_a_2200_);
v___x_2205_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2205_, 0, v_currNamespace_2198_);
lean_ctor_set(v___x_2205_, 1, v_openDecls_2204_);
v___x_2206_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2206_, 0, v___x_2205_);
lean_ctor_set(v___x_2206_, 1, v___y_2189_);
lean_inc_ref(v___y_2192_);
lean_inc_ref(v___y_2188_);
v___x_2207_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_2207_, 0, v___y_2188_);
lean_ctor_set(v___x_2207_, 1, v___y_2194_);
lean_ctor_set(v___x_2207_, 2, v___y_2191_);
lean_ctor_set(v___x_2207_, 3, v___y_2192_);
lean_ctor_set(v___x_2207_, 4, v___x_2206_);
lean_ctor_set_uint8(v___x_2207_, sizeof(void*)*5, v___y_2190_);
lean_ctor_set_uint8(v___x_2207_, sizeof(void*)*5 + 1, v___y_2193_);
lean_ctor_set_uint8(v___x_2207_, sizeof(void*)*5 + 2, v_isSilent_2183_);
v___x_2208_ = lean_st_ref_take(v___y_2195_);
v_env_2209_ = lean_ctor_get(v___x_2208_, 0);
v_messages_2210_ = lean_ctor_get(v___x_2208_, 1);
v_scopes_2211_ = lean_ctor_get(v___x_2208_, 2);
v_usedQuotCtxts_2212_ = lean_ctor_get(v___x_2208_, 3);
v_nextMacroScope_2213_ = lean_ctor_get(v___x_2208_, 4);
v_maxRecDepth_2214_ = lean_ctor_get(v___x_2208_, 5);
v_ngen_2215_ = lean_ctor_get(v___x_2208_, 6);
v_auxDeclNGen_2216_ = lean_ctor_get(v___x_2208_, 7);
v_infoState_2217_ = lean_ctor_get(v___x_2208_, 8);
v_traceState_2218_ = lean_ctor_get(v___x_2208_, 9);
v_snapshotTasks_2219_ = lean_ctor_get(v___x_2208_, 10);
v_prevLinterStates_2220_ = lean_ctor_get(v___x_2208_, 11);
v_codeQualityEntryTasks_2221_ = lean_ctor_get(v___x_2208_, 12);
v_isSharedCheck_2234_ = !lean_is_exclusive(v___x_2208_);
if (v_isSharedCheck_2234_ == 0)
{
v___x_2223_ = v___x_2208_;
v_isShared_2224_ = v_isSharedCheck_2234_;
goto v_resetjp_2222_;
}
else
{
lean_inc(v_codeQualityEntryTasks_2221_);
lean_inc(v_prevLinterStates_2220_);
lean_inc(v_snapshotTasks_2219_);
lean_inc(v_traceState_2218_);
lean_inc(v_infoState_2217_);
lean_inc(v_auxDeclNGen_2216_);
lean_inc(v_ngen_2215_);
lean_inc(v_maxRecDepth_2214_);
lean_inc(v_nextMacroScope_2213_);
lean_inc(v_usedQuotCtxts_2212_);
lean_inc(v_scopes_2211_);
lean_inc(v_messages_2210_);
lean_inc(v_env_2209_);
lean_dec(v___x_2208_);
v___x_2223_ = lean_box(0);
v_isShared_2224_ = v_isSharedCheck_2234_;
goto v_resetjp_2222_;
}
v_resetjp_2222_:
{
lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2228_; 
v___x_2225_ = lean_box(0);
v___x_2226_ = l_Lean_MessageLog_add(v___x_2207_, v_messages_2210_);
if (v_isShared_2224_ == 0)
{
lean_ctor_set(v___x_2223_, 1, v___x_2226_);
v___x_2228_ = v___x_2223_;
goto v_reusejp_2227_;
}
else
{
lean_object* v_reuseFailAlloc_2233_; 
v_reuseFailAlloc_2233_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_2233_, 0, v_env_2209_);
lean_ctor_set(v_reuseFailAlloc_2233_, 1, v___x_2226_);
lean_ctor_set(v_reuseFailAlloc_2233_, 2, v_scopes_2211_);
lean_ctor_set(v_reuseFailAlloc_2233_, 3, v_usedQuotCtxts_2212_);
lean_ctor_set(v_reuseFailAlloc_2233_, 4, v_nextMacroScope_2213_);
lean_ctor_set(v_reuseFailAlloc_2233_, 5, v_maxRecDepth_2214_);
lean_ctor_set(v_reuseFailAlloc_2233_, 6, v_ngen_2215_);
lean_ctor_set(v_reuseFailAlloc_2233_, 7, v_auxDeclNGen_2216_);
lean_ctor_set(v_reuseFailAlloc_2233_, 8, v_infoState_2217_);
lean_ctor_set(v_reuseFailAlloc_2233_, 9, v_traceState_2218_);
lean_ctor_set(v_reuseFailAlloc_2233_, 10, v_snapshotTasks_2219_);
lean_ctor_set(v_reuseFailAlloc_2233_, 11, v_prevLinterStates_2220_);
lean_ctor_set(v_reuseFailAlloc_2233_, 12, v_codeQualityEntryTasks_2221_);
v___x_2228_ = v_reuseFailAlloc_2233_;
goto v_reusejp_2227_;
}
v_reusejp_2227_:
{
lean_object* v___x_2229_; lean_object* v___x_2231_; 
v___x_2229_ = lean_st_ref_put(v___y_2195_, v___x_2228_);
if (v_isShared_2203_ == 0)
{
lean_ctor_set(v___x_2202_, 0, v___x_2225_);
v___x_2231_ = v___x_2202_;
goto v_reusejp_2230_;
}
else
{
lean_object* v_reuseFailAlloc_2232_; 
v_reuseFailAlloc_2232_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2232_, 0, v___x_2225_);
v___x_2231_ = v_reuseFailAlloc_2232_;
goto v_reusejp_2230_;
}
v_reusejp_2230_:
{
return v___x_2231_;
}
}
}
}
}
else
{
lean_object* v_a_2236_; lean_object* v___x_2238_; uint8_t v_isShared_2239_; uint8_t v_isSharedCheck_2243_; 
lean_dec(v_currNamespace_2198_);
lean_dec_ref(v___y_2194_);
lean_dec(v___y_2191_);
lean_dec_ref(v___y_2189_);
v_a_2236_ = lean_ctor_get(v___x_2199_, 0);
v_isSharedCheck_2243_ = !lean_is_exclusive(v___x_2199_);
if (v_isSharedCheck_2243_ == 0)
{
v___x_2238_ = v___x_2199_;
v_isShared_2239_ = v_isSharedCheck_2243_;
goto v_resetjp_2237_;
}
else
{
lean_inc(v_a_2236_);
lean_dec(v___x_2199_);
v___x_2238_ = lean_box(0);
v_isShared_2239_ = v_isSharedCheck_2243_;
goto v_resetjp_2237_;
}
v_resetjp_2237_:
{
lean_object* v___x_2241_; 
if (v_isShared_2239_ == 0)
{
v___x_2241_ = v___x_2238_;
goto v_reusejp_2240_;
}
else
{
lean_object* v_reuseFailAlloc_2242_; 
v_reuseFailAlloc_2242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2242_, 0, v_a_2236_);
v___x_2241_ = v_reuseFailAlloc_2242_;
goto v_reusejp_2240_;
}
v_reusejp_2240_:
{
return v___x_2241_;
}
}
}
}
else
{
lean_object* v_a_2244_; lean_object* v___x_2246_; uint8_t v_isShared_2247_; uint8_t v_isSharedCheck_2251_; 
lean_dec_ref(v___y_2194_);
lean_dec(v___y_2191_);
lean_dec_ref(v___y_2189_);
v_a_2244_ = lean_ctor_get(v___x_2196_, 0);
v_isSharedCheck_2251_ = !lean_is_exclusive(v___x_2196_);
if (v_isSharedCheck_2251_ == 0)
{
v___x_2246_ = v___x_2196_;
v_isShared_2247_ = v_isSharedCheck_2251_;
goto v_resetjp_2245_;
}
else
{
lean_inc(v_a_2244_);
lean_dec(v___x_2196_);
v___x_2246_ = lean_box(0);
v_isShared_2247_ = v_isSharedCheck_2251_;
goto v_resetjp_2245_;
}
v_resetjp_2245_:
{
lean_object* v___x_2249_; 
if (v_isShared_2247_ == 0)
{
v___x_2249_ = v___x_2246_;
goto v_reusejp_2248_;
}
else
{
lean_object* v_reuseFailAlloc_2250_; 
v_reuseFailAlloc_2250_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2250_, 0, v_a_2244_);
v___x_2249_ = v_reuseFailAlloc_2250_;
goto v_reusejp_2248_;
}
v_reusejp_2248_:
{
return v___x_2249_;
}
}
}
}
v___jp_2252_:
{
lean_object* v_fileName_2258_; lean_object* v_fileMap_2259_; uint8_t v_suppressElabErrors_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___f_2263_; lean_object* v___x_2264_; lean_object* v___x_2265_; lean_object* v_a_2266_; lean_object* v___x_2268_; uint8_t v_isShared_2269_; uint8_t v_isSharedCheck_2279_; 
v_fileName_2258_ = lean_ctor_get(v___y_2184_, 0);
v_fileMap_2259_ = lean_ctor_get(v___y_2184_, 1);
v_suppressElabErrors_2260_ = lean_ctor_get_uint8(v___y_2184_, sizeof(void*)*10);
v___x_2261_ = lean_box(v_suppressElabErrors_2260_);
v___x_2262_ = lean_box(v___y_2253_);
v___f_2263_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__26_spec__32___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2263_, 0, v___x_2261_);
lean_closure_set(v___f_2263_, 1, v___x_2262_);
v___x_2264_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_2181_);
v___x_2265_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg(v___x_2264_, v___y_2185_);
v_a_2266_ = lean_ctor_get(v___x_2265_, 0);
v_isSharedCheck_2279_ = !lean_is_exclusive(v___x_2265_);
if (v_isSharedCheck_2279_ == 0)
{
v___x_2268_ = v___x_2265_;
v_isShared_2269_ = v_isSharedCheck_2279_;
goto v_resetjp_2267_;
}
else
{
lean_inc(v_a_2266_);
lean_dec(v___x_2265_);
v___x_2268_ = lean_box(0);
v_isShared_2269_ = v_isSharedCheck_2279_;
goto v_resetjp_2267_;
}
v_resetjp_2267_:
{
lean_object* v___x_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; 
lean_inc_ref_n(v_fileMap_2259_, 2);
v___x_2270_ = l_Lean_FileMap_toPosition(v_fileMap_2259_, v___y_2255_);
lean_dec(v___y_2255_);
v___x_2271_ = l_Lean_FileMap_toPosition(v_fileMap_2259_, v___y_2257_);
lean_dec(v___y_2257_);
v___x_2272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2272_, 0, v___x_2271_);
v___x_2273_ = ((lean_object*)(l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9___redArg___closed__0));
if (v_suppressElabErrors_2260_ == 0)
{
lean_del_object(v___x_2268_);
lean_dec_ref(v___f_2263_);
v___y_2188_ = v_fileName_2258_;
v___y_2189_ = v_a_2266_;
v___y_2190_ = v___y_2254_;
v___y_2191_ = v___x_2272_;
v___y_2192_ = v___x_2273_;
v___y_2193_ = v___y_2256_;
v___y_2194_ = v___x_2270_;
v___y_2195_ = v___y_2185_;
goto v___jp_2187_;
}
else
{
uint8_t v___x_2274_; 
lean_inc(v_a_2266_);
v___x_2274_ = l_Lean_MessageData_hasTag(v___f_2263_, v_a_2266_);
if (v___x_2274_ == 0)
{
lean_object* v___x_2275_; lean_object* v___x_2277_; 
lean_dec_ref_known(v___x_2272_, 1);
lean_dec_ref(v___x_2270_);
lean_dec(v_a_2266_);
v___x_2275_ = lean_box(0);
if (v_isShared_2269_ == 0)
{
lean_ctor_set(v___x_2268_, 0, v___x_2275_);
v___x_2277_ = v___x_2268_;
goto v_reusejp_2276_;
}
else
{
lean_object* v_reuseFailAlloc_2278_; 
v_reuseFailAlloc_2278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2278_, 0, v___x_2275_);
v___x_2277_ = v_reuseFailAlloc_2278_;
goto v_reusejp_2276_;
}
v_reusejp_2276_:
{
return v___x_2277_;
}
}
else
{
lean_del_object(v___x_2268_);
v___y_2188_ = v_fileName_2258_;
v___y_2189_ = v_a_2266_;
v___y_2190_ = v___y_2254_;
v___y_2191_ = v___x_2272_;
v___y_2192_ = v___x_2273_;
v___y_2193_ = v___y_2256_;
v___y_2194_ = v___x_2270_;
v___y_2195_ = v___y_2185_;
goto v___jp_2187_;
}
}
}
}
v___jp_2280_:
{
lean_object* v___x_2286_; 
v___x_2286_ = l_Lean_Syntax_getTailPos_x3f(v___y_2283_, v___y_2282_);
lean_dec(v___y_2283_);
if (lean_obj_tag(v___x_2286_) == 0)
{
lean_inc(v___y_2285_);
v___y_2253_ = v___y_2281_;
v___y_2254_ = v___y_2282_;
v___y_2255_ = v___y_2285_;
v___y_2256_ = v___y_2284_;
v___y_2257_ = v___y_2285_;
goto v___jp_2252_;
}
else
{
lean_object* v_val_2287_; 
v_val_2287_ = lean_ctor_get(v___x_2286_, 0);
lean_inc(v_val_2287_);
lean_dec_ref_known(v___x_2286_, 1);
v___y_2253_ = v___y_2281_;
v___y_2254_ = v___y_2282_;
v___y_2255_ = v___y_2285_;
v___y_2256_ = v___y_2284_;
v___y_2257_ = v_val_2287_;
goto v___jp_2252_;
}
}
v___jp_2288_:
{
lean_object* v___x_2292_; 
v___x_2292_ = l_Lean_Elab_Command_getRef___redArg(v___y_2184_);
if (lean_obj_tag(v___x_2292_) == 0)
{
lean_object* v_a_2293_; lean_object* v_ref_2294_; lean_object* v___x_2295_; 
v_a_2293_ = lean_ctor_get(v___x_2292_, 0);
lean_inc(v_a_2293_);
lean_dec_ref_known(v___x_2292_, 1);
v_ref_2294_ = l_Lean_replaceRef(v_ref_2180_, v_a_2293_);
lean_dec(v_a_2293_);
v___x_2295_ = l_Lean_Syntax_getPos_x3f(v_ref_2294_, v___y_2290_);
if (lean_obj_tag(v___x_2295_) == 0)
{
lean_object* v___x_2296_; 
v___x_2296_ = lean_unsigned_to_nat(0u);
v___y_2281_ = v___y_2289_;
v___y_2282_ = v___y_2290_;
v___y_2283_ = v_ref_2294_;
v___y_2284_ = v___y_2291_;
v___y_2285_ = v___x_2296_;
goto v___jp_2280_;
}
else
{
lean_object* v_val_2297_; 
v_val_2297_ = lean_ctor_get(v___x_2295_, 0);
lean_inc(v_val_2297_);
lean_dec_ref_known(v___x_2295_, 1);
v___y_2281_ = v___y_2289_;
v___y_2282_ = v___y_2290_;
v___y_2283_ = v_ref_2294_;
v___y_2284_ = v___y_2291_;
v___y_2285_ = v_val_2297_;
goto v___jp_2280_;
}
}
else
{
lean_object* v_a_2298_; lean_object* v___x_2300_; uint8_t v_isShared_2301_; uint8_t v_isSharedCheck_2305_; 
lean_dec_ref(v_msgData_2181_);
v_a_2298_ = lean_ctor_get(v___x_2292_, 0);
v_isSharedCheck_2305_ = !lean_is_exclusive(v___x_2292_);
if (v_isSharedCheck_2305_ == 0)
{
v___x_2300_ = v___x_2292_;
v_isShared_2301_ = v_isSharedCheck_2305_;
goto v_resetjp_2299_;
}
else
{
lean_inc(v_a_2298_);
lean_dec(v___x_2292_);
v___x_2300_ = lean_box(0);
v_isShared_2301_ = v_isSharedCheck_2305_;
goto v_resetjp_2299_;
}
v_resetjp_2299_:
{
lean_object* v___x_2303_; 
if (v_isShared_2301_ == 0)
{
v___x_2303_ = v___x_2300_;
goto v_reusejp_2302_;
}
else
{
lean_object* v_reuseFailAlloc_2304_; 
v_reuseFailAlloc_2304_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2304_, 0, v_a_2298_);
v___x_2303_ = v_reuseFailAlloc_2304_;
goto v_reusejp_2302_;
}
v_reusejp_2302_:
{
return v___x_2303_;
}
}
}
}
v___jp_2307_:
{
if (v___y_2310_ == 0)
{
v___y_2289_ = v___y_2308_;
v___y_2290_ = v___y_2309_;
v___y_2291_ = v_severity_2182_;
goto v___jp_2288_;
}
else
{
v___y_2289_ = v___y_2308_;
v___y_2290_ = v___y_2309_;
v___y_2291_ = v___x_2306_;
goto v___jp_2288_;
}
}
v___jp_2311_:
{
if (v___y_2312_ == 0)
{
lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v_scopes_2315_; lean_object* v___x_2316_; lean_object* v_opts_2317_; uint8_t v___x_2318_; uint8_t v___x_2319_; 
v___x_2313_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_2314_ = lean_st_ref_get(v___y_2185_);
v_scopes_2315_ = lean_ctor_get(v___x_2314_, 2);
lean_inc(v_scopes_2315_);
lean_dec(v___x_2314_);
v___x_2316_ = l_List_head_x21___redArg(v___x_2313_, v_scopes_2315_);
lean_dec(v_scopes_2315_);
v_opts_2317_ = lean_ctor_get(v___x_2316_, 1);
lean_inc_ref(v_opts_2317_);
lean_dec(v___x_2316_);
v___x_2318_ = 1;
v___x_2319_ = l_Lean_instBEqMessageSeverity_beq(v_severity_2182_, v___x_2318_);
if (v___x_2319_ == 0)
{
lean_dec_ref(v_opts_2317_);
v___y_2308_ = v___y_2312_;
v___y_2309_ = v___y_2312_;
v___y_2310_ = v___x_2319_;
goto v___jp_2307_;
}
else
{
lean_object* v___x_2320_; uint8_t v___x_2321_; 
v___x_2320_ = l_Lean_warningAsError;
v___x_2321_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__2(v_opts_2317_, v___x_2320_);
lean_dec_ref(v_opts_2317_);
v___y_2308_ = v___y_2312_;
v___y_2309_ = v___y_2312_;
v___y_2310_ = v___x_2321_;
goto v___jp_2307_;
}
}
else
{
lean_object* v___x_2322_; lean_object* v___x_2323_; 
lean_dec_ref(v_msgData_2181_);
v___x_2322_ = lean_box(0);
v___x_2323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2323_, 0, v___x_2322_);
return v___x_2323_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__26_spec__32___boxed(lean_object* v_ref_2326_, lean_object* v_msgData_2327_, lean_object* v_severity_2328_, lean_object* v_isSilent_2329_, lean_object* v___y_2330_, lean_object* v___y_2331_, lean_object* v___y_2332_){
_start:
{
uint8_t v_severity_boxed_2333_; uint8_t v_isSilent_boxed_2334_; lean_object* v_res_2335_; 
v_severity_boxed_2333_ = lean_unbox(v_severity_2328_);
v_isSilent_boxed_2334_ = lean_unbox(v_isSilent_2329_);
v_res_2335_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__26_spec__32(v_ref_2326_, v_msgData_2327_, v_severity_boxed_2333_, v_isSilent_boxed_2334_, v___y_2330_, v___y_2331_);
lean_dec(v___y_2331_);
lean_dec_ref(v___y_2330_);
lean_dec(v_ref_2326_);
return v_res_2335_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__26(lean_object* v_msgData_2336_, uint8_t v_severity_2337_, uint8_t v_isSilent_2338_, lean_object* v___y_2339_, lean_object* v___y_2340_){
_start:
{
lean_object* v___x_2342_; 
v___x_2342_ = l_Lean_Elab_Command_getRef___redArg(v___y_2339_);
if (lean_obj_tag(v___x_2342_) == 0)
{
lean_object* v_a_2343_; lean_object* v___x_2344_; 
v_a_2343_ = lean_ctor_get(v___x_2342_, 0);
lean_inc(v_a_2343_);
lean_dec_ref_known(v___x_2342_, 1);
v___x_2344_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__26_spec__32(v_a_2343_, v_msgData_2336_, v_severity_2337_, v_isSilent_2338_, v___y_2339_, v___y_2340_);
lean_dec(v_a_2343_);
return v___x_2344_;
}
else
{
lean_object* v_a_2345_; lean_object* v___x_2347_; uint8_t v_isShared_2348_; uint8_t v_isSharedCheck_2352_; 
lean_dec_ref(v_msgData_2336_);
v_a_2345_ = lean_ctor_get(v___x_2342_, 0);
v_isSharedCheck_2352_ = !lean_is_exclusive(v___x_2342_);
if (v_isSharedCheck_2352_ == 0)
{
v___x_2347_ = v___x_2342_;
v_isShared_2348_ = v_isSharedCheck_2352_;
goto v_resetjp_2346_;
}
else
{
lean_inc(v_a_2345_);
lean_dec(v___x_2342_);
v___x_2347_ = lean_box(0);
v_isShared_2348_ = v_isSharedCheck_2352_;
goto v_resetjp_2346_;
}
v_resetjp_2346_:
{
lean_object* v___x_2350_; 
if (v_isShared_2348_ == 0)
{
v___x_2350_ = v___x_2347_;
goto v_reusejp_2349_;
}
else
{
lean_object* v_reuseFailAlloc_2351_; 
v_reuseFailAlloc_2351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2351_, 0, v_a_2345_);
v___x_2350_ = v_reuseFailAlloc_2351_;
goto v_reusejp_2349_;
}
v_reusejp_2349_:
{
return v___x_2350_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__26___boxed(lean_object* v_msgData_2353_, lean_object* v_severity_2354_, lean_object* v_isSilent_2355_, lean_object* v___y_2356_, lean_object* v___y_2357_, lean_object* v___y_2358_){
_start:
{
uint8_t v_severity_boxed_2359_; uint8_t v_isSilent_boxed_2360_; lean_object* v_res_2361_; 
v_severity_boxed_2359_ = lean_unbox(v_severity_2354_);
v_isSilent_boxed_2360_ = lean_unbox(v_isSilent_2355_);
v_res_2361_ = l_Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__26(v_msgData_2353_, v_severity_boxed_2359_, v_isSilent_boxed_2360_, v___y_2356_, v___y_2357_);
lean_dec(v___y_2357_);
lean_dec_ref(v___y_2356_);
return v_res_2361_;
}
}
LEAN_EXPORT lean_object* l_Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12(lean_object* v_msgData_2362_, lean_object* v___y_2363_, lean_object* v___y_2364_){
_start:
{
uint8_t v___x_2366_; uint8_t v___x_2367_; lean_object* v___x_2368_; 
v___x_2366_ = 0;
v___x_2367_ = 0;
v___x_2368_ = l_Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__26(v_msgData_2362_, v___x_2366_, v___x_2367_, v___y_2363_, v___y_2364_);
return v___x_2368_;
}
}
LEAN_EXPORT lean_object* l_Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12___boxed(lean_object* v_msgData_2369_, lean_object* v___y_2370_, lean_object* v___y_2371_, lean_object* v___y_2372_){
_start:
{
lean_object* v_res_2373_; 
v_res_2373_ = l_Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12(v_msgData_2369_, v___y_2370_, v___y_2371_);
lean_dec(v___y_2371_);
lean_dec_ref(v___y_2370_);
return v_res_2373_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__23___redArg(lean_object* v_init_2374_, lean_object* v_x_2375_){
_start:
{
if (lean_obj_tag(v_x_2375_) == 0)
{
lean_object* v_k_2377_; lean_object* v_v_2378_; lean_object* v_l_2379_; lean_object* v_r_2380_; lean_object* v___x_2381_; lean_object* v_a_2382_; lean_object* v_a_2383_; lean_object* v___x_2384_; 
v_k_2377_ = lean_ctor_get(v_x_2375_, 1);
lean_inc(v_k_2377_);
v_v_2378_ = lean_ctor_get(v_x_2375_, 2);
lean_inc(v_v_2378_);
v_l_2379_ = lean_ctor_get(v_x_2375_, 3);
lean_inc(v_l_2379_);
v_r_2380_ = lean_ctor_get(v_x_2375_, 4);
lean_inc(v_r_2380_);
lean_dec_ref_known(v_x_2375_, 5);
v___x_2381_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__23___redArg(v_init_2374_, v_l_2379_);
v_a_2382_ = lean_ctor_get(v___x_2381_, 0);
lean_inc(v_a_2382_);
lean_dec_ref(v___x_2381_);
v_a_2383_ = lean_ctor_get(v_a_2382_, 0);
lean_inc(v_a_2383_);
lean_dec(v_a_2382_);
v___x_2384_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_2377_, v_v_2378_, v_a_2383_);
v_init_2374_ = v___x_2384_;
v_x_2375_ = v_r_2380_;
goto _start;
}
else
{
lean_object* v___x_2386_; lean_object* v___x_2387_; 
v___x_2386_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2386_, 0, v_init_2374_);
v___x_2387_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2387_, 0, v___x_2386_);
return v___x_2387_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__23___redArg___boxed(lean_object* v_init_2388_, lean_object* v_x_2389_, lean_object* v___y_2390_){
_start:
{
lean_object* v_res_2391_; 
v_res_2391_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__23___redArg(v_init_2388_, v_x_2389_);
return v_res_2391_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__22___redArg___lam__0(uint8_t v___x_2392_, lean_object* v_x1_2393_, lean_object* v_x2_2394_){
_start:
{
lean_object* v_fst_2395_; lean_object* v_fst_2396_; lean_object* v___x_2397_; lean_object* v___x_2398_; uint8_t v___x_2399_; 
v_fst_2395_ = lean_ctor_get(v_x1_2393_, 0);
lean_inc(v_fst_2395_);
lean_dec_ref(v_x1_2393_);
v_fst_2396_ = lean_ctor_get(v_x2_2394_, 0);
lean_inc(v_fst_2396_);
lean_dec_ref(v_x2_2394_);
v___x_2397_ = l_Lean_Name_toString(v_fst_2395_, v___x_2392_);
v___x_2398_ = l_Lean_Name_toString(v_fst_2396_, v___x_2392_);
v___x_2399_ = lean_string_dec_lt(v___x_2397_, v___x_2398_);
lean_dec_ref(v___x_2398_);
lean_dec_ref(v___x_2397_);
return v___x_2399_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__22___redArg___lam__0___boxed(lean_object* v___x_2400_, lean_object* v_x1_2401_, lean_object* v_x2_2402_){
_start:
{
uint8_t v___x_18285__boxed_2403_; uint8_t v_res_2404_; lean_object* v_r_2405_; 
v___x_18285__boxed_2403_ = lean_unbox(v___x_2400_);
v_res_2404_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__22___redArg___lam__0(v___x_18285__boxed_2403_, v_x1_2401_, v_x2_2402_);
v_r_2405_ = lean_box(v_res_2404_);
return v_r_2405_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__22_spec__27___redArg(lean_object* v_hi_2406_, lean_object* v_pivot_2407_, lean_object* v_as_2408_, lean_object* v_i_2409_, lean_object* v_k_2410_){
_start:
{
uint8_t v___x_2411_; 
v___x_2411_ = lean_nat_dec_lt(v_k_2410_, v_hi_2406_);
if (v___x_2411_ == 0)
{
lean_object* v___x_2412_; lean_object* v___x_2413_; 
lean_dec(v_k_2410_);
lean_dec_ref(v_pivot_2407_);
v___x_2412_ = lean_array_fswap(v_as_2408_, v_i_2409_, v_hi_2406_);
v___x_2413_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2413_, 0, v_i_2409_);
lean_ctor_set(v___x_2413_, 1, v___x_2412_);
return v___x_2413_;
}
else
{
lean_object* v___x_2414_; lean_object* v_fst_2415_; lean_object* v_fst_2416_; lean_object* v___x_2417_; lean_object* v___x_2418_; uint8_t v___x_2419_; 
v___x_2414_ = lean_array_fget_borrowed(v_as_2408_, v_k_2410_);
v_fst_2415_ = lean_ctor_get(v___x_2414_, 0);
v_fst_2416_ = lean_ctor_get(v_pivot_2407_, 0);
lean_inc(v_fst_2415_);
v___x_2417_ = l_Lean_Name_toString(v_fst_2415_, v___x_2411_);
lean_inc(v_fst_2416_);
v___x_2418_ = l_Lean_Name_toString(v_fst_2416_, v___x_2411_);
v___x_2419_ = lean_string_dec_lt(v___x_2417_, v___x_2418_);
lean_dec_ref(v___x_2418_);
lean_dec_ref(v___x_2417_);
if (v___x_2419_ == 0)
{
lean_object* v___x_2420_; lean_object* v___x_2421_; 
v___x_2420_ = lean_unsigned_to_nat(1u);
v___x_2421_ = lean_nat_add(v_k_2410_, v___x_2420_);
lean_dec(v_k_2410_);
v_k_2410_ = v___x_2421_;
goto _start;
}
else
{
lean_object* v___x_2423_; lean_object* v___x_2424_; lean_object* v___x_2425_; lean_object* v___x_2426_; 
v___x_2423_ = lean_array_fswap(v_as_2408_, v_i_2409_, v_k_2410_);
v___x_2424_ = lean_unsigned_to_nat(1u);
v___x_2425_ = lean_nat_add(v_i_2409_, v___x_2424_);
lean_dec(v_i_2409_);
v___x_2426_ = lean_nat_add(v_k_2410_, v___x_2424_);
lean_dec(v_k_2410_);
v_as_2408_ = v___x_2423_;
v_i_2409_ = v___x_2425_;
v_k_2410_ = v___x_2426_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__22_spec__27___redArg___boxed(lean_object* v_hi_2428_, lean_object* v_pivot_2429_, lean_object* v_as_2430_, lean_object* v_i_2431_, lean_object* v_k_2432_){
_start:
{
lean_object* v_res_2433_; 
v_res_2433_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__22_spec__27___redArg(v_hi_2428_, v_pivot_2429_, v_as_2430_, v_i_2431_, v_k_2432_);
lean_dec(v_hi_2428_);
return v_res_2433_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__22___redArg(lean_object* v_n_2434_, lean_object* v_as_2435_, lean_object* v_lo_2436_, lean_object* v_hi_2437_){
_start:
{
lean_object* v___y_2439_; uint8_t v___x_2449_; 
v___x_2449_ = lean_nat_dec_lt(v_lo_2436_, v_hi_2437_);
if (v___x_2449_ == 0)
{
lean_dec(v_lo_2436_);
return v_as_2435_;
}
else
{
lean_object* v___x_2450_; lean_object* v___x_2451_; lean_object* v_mid_2452_; lean_object* v___y_2454_; lean_object* v___y_2460_; lean_object* v___x_2465_; lean_object* v___x_2466_; uint8_t v___x_2467_; 
v___x_2450_ = lean_nat_add(v_lo_2436_, v_hi_2437_);
v___x_2451_ = lean_unsigned_to_nat(1u);
v_mid_2452_ = lean_nat_shiftr(v___x_2450_, v___x_2451_);
lean_dec(v___x_2450_);
v___x_2465_ = lean_array_fget_borrowed(v_as_2435_, v_mid_2452_);
v___x_2466_ = lean_array_fget_borrowed(v_as_2435_, v_lo_2436_);
lean_inc(v___x_2466_);
lean_inc(v___x_2465_);
v___x_2467_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__22___redArg___lam__0(v___x_2449_, v___x_2465_, v___x_2466_);
if (v___x_2467_ == 0)
{
v___y_2460_ = v_as_2435_;
goto v___jp_2459_;
}
else
{
lean_object* v___x_2468_; 
v___x_2468_ = lean_array_fswap(v_as_2435_, v_lo_2436_, v_mid_2452_);
v___y_2460_ = v___x_2468_;
goto v___jp_2459_;
}
v___jp_2453_:
{
lean_object* v___x_2455_; lean_object* v___x_2456_; uint8_t v___x_2457_; 
v___x_2455_ = lean_array_fget_borrowed(v___y_2454_, v_mid_2452_);
v___x_2456_ = lean_array_fget_borrowed(v___y_2454_, v_hi_2437_);
lean_inc(v___x_2456_);
lean_inc(v___x_2455_);
v___x_2457_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__22___redArg___lam__0(v___x_2449_, v___x_2455_, v___x_2456_);
if (v___x_2457_ == 0)
{
lean_dec(v_mid_2452_);
v___y_2439_ = v___y_2454_;
goto v___jp_2438_;
}
else
{
lean_object* v___x_2458_; 
v___x_2458_ = lean_array_fswap(v___y_2454_, v_mid_2452_, v_hi_2437_);
lean_dec(v_mid_2452_);
v___y_2439_ = v___x_2458_;
goto v___jp_2438_;
}
}
v___jp_2459_:
{
lean_object* v___x_2461_; lean_object* v___x_2462_; uint8_t v___x_2463_; 
v___x_2461_ = lean_array_fget_borrowed(v___y_2460_, v_hi_2437_);
v___x_2462_ = lean_array_fget_borrowed(v___y_2460_, v_lo_2436_);
lean_inc(v___x_2462_);
lean_inc(v___x_2461_);
v___x_2463_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__22___redArg___lam__0(v___x_2449_, v___x_2461_, v___x_2462_);
if (v___x_2463_ == 0)
{
v___y_2454_ = v___y_2460_;
goto v___jp_2453_;
}
else
{
lean_object* v___x_2464_; 
v___x_2464_ = lean_array_fswap(v___y_2460_, v_lo_2436_, v_hi_2437_);
v___y_2454_ = v___x_2464_;
goto v___jp_2453_;
}
}
}
v___jp_2438_:
{
lean_object* v_pivot_2440_; lean_object* v___x_2441_; lean_object* v_fst_2442_; lean_object* v_snd_2443_; uint8_t v___x_2444_; 
v_pivot_2440_ = lean_array_fget(v___y_2439_, v_hi_2437_);
lean_inc_n(v_lo_2436_, 2);
v___x_2441_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__22_spec__27___redArg(v_hi_2437_, v_pivot_2440_, v___y_2439_, v_lo_2436_, v_lo_2436_);
v_fst_2442_ = lean_ctor_get(v___x_2441_, 0);
lean_inc(v_fst_2442_);
v_snd_2443_ = lean_ctor_get(v___x_2441_, 1);
lean_inc(v_snd_2443_);
lean_dec_ref(v___x_2441_);
v___x_2444_ = lean_nat_dec_le(v_hi_2437_, v_fst_2442_);
if (v___x_2444_ == 0)
{
lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; 
v___x_2445_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__22___redArg(v_n_2434_, v_snd_2443_, v_lo_2436_, v_fst_2442_);
v___x_2446_ = lean_unsigned_to_nat(1u);
v___x_2447_ = lean_nat_add(v_fst_2442_, v___x_2446_);
lean_dec(v_fst_2442_);
v_as_2435_ = v___x_2445_;
v_lo_2436_ = v___x_2447_;
goto _start;
}
else
{
lean_dec(v_fst_2442_);
lean_dec(v_lo_2436_);
return v_snd_2443_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__22___redArg___boxed(lean_object* v_n_2469_, lean_object* v_as_2470_, lean_object* v_lo_2471_, lean_object* v_hi_2472_){
_start:
{
lean_object* v_res_2473_; 
v_res_2473_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__22___redArg(v_n_2469_, v_as_2470_, v_lo_2471_, v_hi_2472_);
lean_dec(v_hi_2472_);
lean_dec(v_n_2469_);
return v_res_2473_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21_spec__25(lean_object* v_init_2474_, lean_object* v_x_2475_){
_start:
{
if (lean_obj_tag(v_x_2475_) == 0)
{
lean_object* v_k_2476_; lean_object* v_v_2477_; lean_object* v_l_2478_; lean_object* v_r_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; 
v_k_2476_ = lean_ctor_get(v_x_2475_, 1);
v_v_2477_ = lean_ctor_get(v_x_2475_, 2);
v_l_2478_ = lean_ctor_get(v_x_2475_, 3);
v_r_2479_ = lean_ctor_get(v_x_2475_, 4);
v___x_2480_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21_spec__25(v_init_2474_, v_l_2478_);
lean_inc(v_v_2477_);
lean_inc(v_k_2476_);
v___x_2481_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2481_, 0, v_k_2476_);
lean_ctor_set(v___x_2481_, 1, v_v_2477_);
v___x_2482_ = lean_array_push(v___x_2480_, v___x_2481_);
v_init_2474_ = v___x_2482_;
v_x_2475_ = v_r_2479_;
goto _start;
}
else
{
return v_init_2474_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21_spec__25___boxed(lean_object* v_init_2484_, lean_object* v_x_2485_){
_start:
{
lean_object* v_res_2486_; 
v_res_2486_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21_spec__25(v_init_2484_, v_x_2485_);
lean_dec(v_x_2485_);
return v_res_2486_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__19___redArg(lean_object* v_as_2487_, size_t v_sz_2488_, size_t v_i_2489_, lean_object* v_b_2490_){
_start:
{
uint8_t v___x_2492_; 
v___x_2492_ = lean_usize_dec_lt(v_i_2489_, v_sz_2488_);
if (v___x_2492_ == 0)
{
lean_object* v___x_2493_; 
v___x_2493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2493_, 0, v_b_2490_);
return v___x_2493_;
}
else
{
lean_object* v_a_2494_; lean_object* v_fst_2495_; lean_object* v_snd_2496_; lean_object* v_found_2497_; size_t v___x_2498_; size_t v___x_2499_; 
v_a_2494_ = lean_array_uget_borrowed(v_as_2487_, v_i_2489_);
v_fst_2495_ = lean_ctor_get(v_a_2494_, 0);
v_snd_2496_ = lean_ctor_get(v_a_2494_, 1);
lean_inc(v_snd_2496_);
lean_inc(v_fst_2495_);
v_found_2497_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_2495_, v_snd_2496_, v_b_2490_);
v___x_2498_ = ((size_t)1ULL);
v___x_2499_ = lean_usize_add(v_i_2489_, v___x_2498_);
v_i_2489_ = v___x_2499_;
v_b_2490_ = v_found_2497_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__19___redArg___boxed(lean_object* v_as_2501_, lean_object* v_sz_2502_, lean_object* v_i_2503_, lean_object* v_b_2504_, lean_object* v___y_2505_){
_start:
{
size_t v_sz_boxed_2506_; size_t v_i_boxed_2507_; lean_object* v_res_2508_; 
v_sz_boxed_2506_ = lean_unbox_usize(v_sz_2502_);
lean_dec(v_sz_2502_);
v_i_boxed_2507_ = lean_unbox_usize(v_i_2503_);
lean_dec(v_i_2503_);
v_res_2508_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__19___redArg(v_as_2501_, v_sz_boxed_2506_, v_i_boxed_2507_, v_b_2504_);
lean_dec_ref(v_as_2501_);
return v_res_2508_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__20(lean_object* v_as_2509_, size_t v_sz_2510_, size_t v_i_2511_, lean_object* v_b_2512_, lean_object* v___y_2513_, lean_object* v___y_2514_){
_start:
{
uint8_t v___x_2516_; 
v___x_2516_ = lean_usize_dec_lt(v_i_2511_, v_sz_2510_);
if (v___x_2516_ == 0)
{
lean_object* v___x_2517_; 
v___x_2517_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2517_, 0, v_b_2512_);
return v___x_2517_;
}
else
{
lean_object* v_a_2518_; size_t v_sz_2519_; size_t v___x_2520_; lean_object* v___x_2521_; 
v_a_2518_ = lean_array_uget_borrowed(v_as_2509_, v_i_2511_);
v_sz_2519_ = lean_array_size(v_a_2518_);
v___x_2520_ = ((size_t)0ULL);
v___x_2521_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__19___redArg(v_a_2518_, v_sz_2519_, v___x_2520_, v_b_2512_);
if (lean_obj_tag(v___x_2521_) == 0)
{
lean_object* v_a_2522_; size_t v___x_2523_; size_t v___x_2524_; 
v_a_2522_ = lean_ctor_get(v___x_2521_, 0);
lean_inc(v_a_2522_);
lean_dec_ref_known(v___x_2521_, 1);
v___x_2523_ = ((size_t)1ULL);
v___x_2524_ = lean_usize_add(v_i_2511_, v___x_2523_);
v_i_2511_ = v___x_2524_;
v_b_2512_ = v_a_2522_;
goto _start;
}
else
{
return v___x_2521_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__20___boxed(lean_object* v_as_2526_, lean_object* v_sz_2527_, lean_object* v_i_2528_, lean_object* v_b_2529_, lean_object* v___y_2530_, lean_object* v___y_2531_, lean_object* v___y_2532_){
_start:
{
size_t v_sz_boxed_2533_; size_t v_i_boxed_2534_; lean_object* v_res_2535_; 
v_sz_boxed_2533_ = lean_unbox_usize(v_sz_2527_);
lean_dec(v_sz_2527_);
v_i_boxed_2534_ = lean_unbox_usize(v_i_2528_);
lean_dec(v_i_2528_);
v_res_2535_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__20(v_as_2526_, v_sz_boxed_2533_, v_i_boxed_2534_, v_b_2529_, v___y_2530_, v___y_2531_);
lean_dec(v___y_2531_);
lean_dec_ref(v___y_2530_);
lean_dec_ref(v_as_2526_);
return v_res_2535_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10(lean_object* v___y_2538_, lean_object* v___y_2539_){
_start:
{
lean_object* v___y_2542_; lean_object* v___y_2546_; lean_object* v___y_2547_; lean_object* v___y_2548_; lean_object* v___y_2549_; lean_object* v___y_2552_; lean_object* v___y_2553_; lean_object* v___y_2554_; lean_object* v___y_2555_; lean_object* v___x_2557_; lean_object* v___x_2558_; lean_object* v___x_2559_; lean_object* v_env_2560_; lean_object* v___x_2561_; lean_object* v_toEnvExtension_2562_; lean_object* v_asyncMode_2563_; lean_object* v___x_2564_; lean_object* v_a_2566_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v_a_2591_; lean_object* v_a_2592_; 
v___x_2557_ = lean_box(1);
v___x_2558_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__2, &l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__2_once, _init_l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__2);
v___x_2559_ = lean_st_ref_get(v___y_2539_);
v_env_2560_ = lean_ctor_get(v___x_2559_, 0);
lean_inc_ref_n(v_env_2560_, 2);
lean_dec(v___x_2559_);
v___x_2561_ = l_Lean_Parser_Tactic_Doc_knownTacticTagExt;
v_toEnvExtension_2562_ = lean_ctor_get(v___x_2561_, 0);
v_asyncMode_2563_ = lean_ctor_get(v_toEnvExtension_2562_, 2);
v___x_2564_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__7, &l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__7_once, _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__7);
v___x_2589_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_2557_, v___x_2561_, v_env_2560_, v_asyncMode_2563_, v___x_2564_);
v___x_2590_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__23___redArg(v___x_2557_, v___x_2589_);
v_a_2591_ = lean_ctor_get(v___x_2590_, 0);
lean_inc(v_a_2591_);
lean_dec_ref(v___x_2590_);
v_a_2592_ = lean_ctor_get(v_a_2591_, 0);
lean_inc(v_a_2592_);
lean_dec(v_a_2591_);
v_a_2566_ = v_a_2592_;
goto v___jp_2565_;
v___jp_2541_:
{
lean_object* v___x_2543_; lean_object* v___x_2544_; 
v___x_2543_ = lean_array_to_list(v___y_2542_);
v___x_2544_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2544_, 0, v___x_2543_);
return v___x_2544_;
}
v___jp_2545_:
{
lean_object* v___x_2550_; 
v___x_2550_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__22___redArg(v___y_2547_, v___y_2548_, v___y_2546_, v___y_2549_);
lean_dec(v___y_2549_);
lean_dec(v___y_2547_);
v___y_2542_ = v___x_2550_;
goto v___jp_2541_;
}
v___jp_2551_:
{
uint8_t v___x_2556_; 
v___x_2556_ = lean_nat_dec_le(v___y_2555_, v___y_2552_);
if (v___x_2556_ == 0)
{
lean_dec(v___y_2552_);
lean_inc(v___y_2555_);
v___y_2546_ = v___y_2555_;
v___y_2547_ = v___y_2553_;
v___y_2548_ = v___y_2554_;
v___y_2549_ = v___y_2555_;
goto v___jp_2545_;
}
else
{
v___y_2546_ = v___y_2555_;
v___y_2547_ = v___y_2553_;
v___y_2548_ = v___y_2554_;
v___y_2549_ = v___y_2552_;
goto v___jp_2545_;
}
}
v___jp_2565_:
{
lean_object* v___x_2567_; lean_object* v_importedEntries_2568_; size_t v_sz_2569_; size_t v___x_2570_; lean_object* v___x_2571_; 
v___x_2567_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_2558_, v_toEnvExtension_2562_, v_env_2560_, v_asyncMode_2563_, v___x_2564_);
v_importedEntries_2568_ = lean_ctor_get(v___x_2567_, 0);
lean_inc_ref(v_importedEntries_2568_);
lean_dec(v___x_2567_);
v_sz_2569_ = lean_array_size(v_importedEntries_2568_);
v___x_2570_ = ((size_t)0ULL);
v___x_2571_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__20(v_importedEntries_2568_, v_sz_2569_, v___x_2570_, v_a_2566_, v___y_2538_, v___y_2539_);
lean_dec_ref(v_importedEntries_2568_);
if (lean_obj_tag(v___x_2571_) == 0)
{
lean_object* v_a_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v_arr_2575_; lean_object* v___x_2576_; uint8_t v___x_2577_; 
v_a_2572_ = lean_ctor_get(v___x_2571_, 0);
lean_inc(v_a_2572_);
lean_dec_ref_known(v___x_2571_, 1);
v___x_2573_ = lean_unsigned_to_nat(0u);
v___x_2574_ = ((lean_object*)(l_Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10___closed__0));
v_arr_2575_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21_spec__25(v___x_2574_, v_a_2572_);
lean_dec(v_a_2572_);
v___x_2576_ = lean_array_get_size(v_arr_2575_);
v___x_2577_ = lean_nat_dec_eq(v___x_2576_, v___x_2573_);
if (v___x_2577_ == 0)
{
lean_object* v___x_2578_; lean_object* v___x_2579_; uint8_t v___x_2580_; 
v___x_2578_ = lean_unsigned_to_nat(1u);
v___x_2579_ = lean_nat_sub(v___x_2576_, v___x_2578_);
v___x_2580_ = lean_nat_dec_le(v___x_2573_, v___x_2579_);
if (v___x_2580_ == 0)
{
lean_inc(v___x_2579_);
v___y_2552_ = v___x_2579_;
v___y_2553_ = v___x_2576_;
v___y_2554_ = v_arr_2575_;
v___y_2555_ = v___x_2579_;
goto v___jp_2551_;
}
else
{
v___y_2552_ = v___x_2579_;
v___y_2553_ = v___x_2576_;
v___y_2554_ = v_arr_2575_;
v___y_2555_ = v___x_2573_;
goto v___jp_2551_;
}
}
else
{
v___y_2542_ = v_arr_2575_;
goto v___jp_2541_;
}
}
else
{
lean_object* v_a_2581_; lean_object* v___x_2583_; uint8_t v_isShared_2584_; uint8_t v_isSharedCheck_2588_; 
v_a_2581_ = lean_ctor_get(v___x_2571_, 0);
v_isSharedCheck_2588_ = !lean_is_exclusive(v___x_2571_);
if (v_isSharedCheck_2588_ == 0)
{
v___x_2583_ = v___x_2571_;
v_isShared_2584_ = v_isSharedCheck_2588_;
goto v_resetjp_2582_;
}
else
{
lean_inc(v_a_2581_);
lean_dec(v___x_2571_);
v___x_2583_ = lean_box(0);
v_isShared_2584_ = v_isSharedCheck_2588_;
goto v_resetjp_2582_;
}
v_resetjp_2582_:
{
lean_object* v___x_2586_; 
if (v_isShared_2584_ == 0)
{
v___x_2586_ = v___x_2583_;
goto v_reusejp_2585_;
}
else
{
lean_object* v_reuseFailAlloc_2587_; 
v_reuseFailAlloc_2587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2587_, 0, v_a_2581_);
v___x_2586_ = v_reuseFailAlloc_2587_;
goto v_reusejp_2585_;
}
v_reusejp_2585_:
{
return v___x_2586_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10___boxed(lean_object* v___y_2593_, lean_object* v___y_2594_, lean_object* v___y_2595_){
_start:
{
lean_object* v_res_2596_; 
v_res_2596_ = l_Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10(v___y_2593_, v___y_2594_);
lean_dec(v___y_2594_);
lean_dec_ref(v___y_2593_);
return v_res_2596_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__0___redArg(lean_object* v_t_2597_, lean_object* v_k_2598_, lean_object* v_fallback_2599_){
_start:
{
if (lean_obj_tag(v_t_2597_) == 0)
{
lean_object* v_k_2600_; lean_object* v_v_2601_; lean_object* v_l_2602_; lean_object* v_r_2603_; uint8_t v___x_2604_; 
v_k_2600_ = lean_ctor_get(v_t_2597_, 1);
v_v_2601_ = lean_ctor_get(v_t_2597_, 2);
v_l_2602_ = lean_ctor_get(v_t_2597_, 3);
v_r_2603_ = lean_ctor_get(v_t_2597_, 4);
v___x_2604_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_2598_, v_k_2600_);
switch(v___x_2604_)
{
case 0:
{
v_t_2597_ = v_l_2602_;
goto _start;
}
case 1:
{
lean_inc(v_v_2601_);
return v_v_2601_;
}
default: 
{
v_t_2597_ = v_r_2603_;
goto _start;
}
}
}
else
{
lean_inc(v_fallback_2599_);
return v_fallback_2599_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__0___redArg___boxed(lean_object* v_t_2607_, lean_object* v_k_2608_, lean_object* v_fallback_2609_){
_start:
{
lean_object* v_res_2610_; 
v_res_2610_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__0___redArg(v_t_2607_, v_k_2608_, v_fallback_2609_);
lean_dec(v_fallback_2609_);
lean_dec(v_k_2608_);
lean_dec(v_t_2607_);
return v_res_2610_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__1___redArg(lean_object* v_as_2611_, size_t v_sz_2612_, size_t v_i_2613_, lean_object* v_b_2614_){
_start:
{
uint8_t v___x_2616_; 
v___x_2616_ = lean_usize_dec_lt(v_i_2613_, v_sz_2612_);
if (v___x_2616_ == 0)
{
lean_object* v___x_2617_; 
v___x_2617_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2617_, 0, v_b_2614_);
return v___x_2617_;
}
else
{
lean_object* v_a_2618_; lean_object* v_fst_2619_; lean_object* v_snd_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; size_t v___x_2625_; size_t v___x_2626_; 
v_a_2618_ = lean_array_uget_borrowed(v_as_2611_, v_i_2613_);
v_fst_2619_ = lean_ctor_get(v_a_2618_, 0);
v_snd_2620_ = lean_ctor_get(v_a_2618_, 1);
v___x_2621_ = l_Lean_NameSet_empty;
v___x_2622_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__0___redArg(v_b_2614_, v_snd_2620_, v___x_2621_);
lean_inc(v_fst_2619_);
v___x_2623_ = l_Lean_NameSet_insert(v___x_2622_, v_fst_2619_);
lean_inc(v_snd_2620_);
v___x_2624_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_snd_2620_, v___x_2623_, v_b_2614_);
v___x_2625_ = ((size_t)1ULL);
v___x_2626_ = lean_usize_add(v_i_2613_, v___x_2625_);
v_i_2613_ = v___x_2626_;
v_b_2614_ = v___x_2624_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__1___redArg___boxed(lean_object* v_as_2628_, lean_object* v_sz_2629_, lean_object* v_i_2630_, lean_object* v_b_2631_, lean_object* v___y_2632_){
_start:
{
size_t v_sz_boxed_2633_; size_t v_i_boxed_2634_; lean_object* v_res_2635_; 
v_sz_boxed_2633_ = lean_unbox_usize(v_sz_2629_);
lean_dec(v_sz_2629_);
v_i_boxed_2634_ = lean_unbox_usize(v_i_2630_);
lean_dec(v_i_2630_);
v_res_2635_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__1___redArg(v_as_2628_, v_sz_boxed_2633_, v_i_boxed_2634_, v_b_2631_);
lean_dec_ref(v_as_2628_);
return v_res_2635_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__2(lean_object* v_as_2636_, size_t v_sz_2637_, size_t v_i_2638_, lean_object* v_b_2639_, lean_object* v___y_2640_, lean_object* v___y_2641_){
_start:
{
uint8_t v___x_2643_; 
v___x_2643_ = lean_usize_dec_lt(v_i_2638_, v_sz_2637_);
if (v___x_2643_ == 0)
{
lean_object* v___x_2644_; 
v___x_2644_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2644_, 0, v_b_2639_);
return v___x_2644_;
}
else
{
lean_object* v_a_2645_; size_t v_sz_2646_; size_t v___x_2647_; lean_object* v___x_2648_; 
v_a_2645_ = lean_array_uget_borrowed(v_as_2636_, v_i_2638_);
v_sz_2646_ = lean_array_size(v_a_2645_);
v___x_2647_ = ((size_t)0ULL);
v___x_2648_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__1___redArg(v_a_2645_, v_sz_2646_, v___x_2647_, v_b_2639_);
if (lean_obj_tag(v___x_2648_) == 0)
{
lean_object* v_a_2649_; size_t v___x_2650_; size_t v___x_2651_; 
v_a_2649_ = lean_ctor_get(v___x_2648_, 0);
lean_inc(v_a_2649_);
lean_dec_ref_known(v___x_2648_, 1);
v___x_2650_ = ((size_t)1ULL);
v___x_2651_ = lean_usize_add(v_i_2638_, v___x_2650_);
v_i_2638_ = v___x_2651_;
v_b_2639_ = v_a_2649_;
goto _start;
}
else
{
return v___x_2648_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__2___boxed(lean_object* v_as_2653_, lean_object* v_sz_2654_, lean_object* v_i_2655_, lean_object* v_b_2656_, lean_object* v___y_2657_, lean_object* v___y_2658_, lean_object* v___y_2659_){
_start:
{
size_t v_sz_boxed_2660_; size_t v_i_boxed_2661_; lean_object* v_res_2662_; 
v_sz_boxed_2660_ = lean_unbox_usize(v_sz_2654_);
lean_dec(v_sz_2654_);
v_i_boxed_2661_ = lean_unbox_usize(v_i_2655_);
lean_dec(v_i_2655_);
v_res_2662_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__2(v_as_2653_, v_sz_boxed_2660_, v_i_boxed_2661_, v_b_2656_, v___y_2657_, v___y_2658_);
lean_dec(v___y_2658_);
lean_dec_ref(v___y_2657_);
lean_dec_ref(v_as_2653_);
return v_res_2662_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__3(lean_object* v_as_2663_, size_t v_i_2664_, size_t v_stop_2665_, lean_object* v_b_2666_){
_start:
{
uint8_t v___x_2667_; 
v___x_2667_ = lean_usize_dec_eq(v_i_2664_, v_stop_2665_);
if (v___x_2667_ == 0)
{
lean_object* v___x_2668_; lean_object* v_fst_2669_; lean_object* v_snd_2670_; lean_object* v___x_2671_; size_t v___x_2672_; size_t v___x_2673_; 
v___x_2668_ = lean_array_uget_borrowed(v_as_2663_, v_i_2664_);
v_fst_2669_ = lean_ctor_get(v___x_2668_, 0);
v_snd_2670_ = lean_ctor_get(v___x_2668_, 1);
lean_inc(v_snd_2670_);
lean_inc(v_fst_2669_);
v___x_2671_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_2669_, v_snd_2670_, v_b_2666_);
v___x_2672_ = ((size_t)1ULL);
v___x_2673_ = lean_usize_add(v_i_2664_, v___x_2672_);
v_i_2664_ = v___x_2673_;
v_b_2666_ = v___x_2671_;
goto _start;
}
else
{
return v_b_2666_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__3___boxed(lean_object* v_as_2675_, lean_object* v_i_2676_, lean_object* v_stop_2677_, lean_object* v_b_2678_){
_start:
{
size_t v_i_boxed_2679_; size_t v_stop_boxed_2680_; lean_object* v_res_2681_; 
v_i_boxed_2679_ = lean_unbox_usize(v_i_2676_);
lean_dec(v_i_2676_);
v_stop_boxed_2680_ = lean_unbox_usize(v_stop_2677_);
lean_dec(v_stop_2677_);
v_res_2681_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__3(v_as_2675_, v_i_boxed_2679_, v_stop_boxed_2680_, v_b_2678_);
lean_dec_ref(v_as_2675_);
return v_res_2681_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__5(lean_object* v_as_2682_, size_t v_i_2683_, size_t v_stop_2684_, lean_object* v_b_2685_){
_start:
{
lean_object* v___y_2687_; uint8_t v___x_2691_; 
v___x_2691_ = lean_usize_dec_eq(v_i_2683_, v_stop_2684_);
if (v___x_2691_ == 0)
{
lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; uint8_t v___x_2695_; 
v___x_2692_ = lean_array_uget_borrowed(v_as_2682_, v_i_2683_);
v___x_2693_ = lean_unsigned_to_nat(0u);
v___x_2694_ = lean_array_get_size(v___x_2692_);
v___x_2695_ = lean_nat_dec_lt(v___x_2693_, v___x_2694_);
if (v___x_2695_ == 0)
{
v___y_2687_ = v_b_2685_;
goto v___jp_2686_;
}
else
{
size_t v___x_2696_; size_t v___x_2697_; lean_object* v___x_2698_; 
v___x_2696_ = ((size_t)0ULL);
v___x_2697_ = lean_usize_of_nat(v___x_2694_);
v___x_2698_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__3(v___x_2692_, v___x_2696_, v___x_2697_, v_b_2685_);
v___y_2687_ = v___x_2698_;
goto v___jp_2686_;
}
}
else
{
return v_b_2685_;
}
v___jp_2686_:
{
size_t v___x_2688_; size_t v___x_2689_; 
v___x_2688_ = ((size_t)1ULL);
v___x_2689_ = lean_usize_add(v_i_2683_, v___x_2688_);
v_i_2683_ = v___x_2689_;
v_b_2685_ = v___y_2687_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__5___boxed(lean_object* v_as_2699_, lean_object* v_i_2700_, lean_object* v_stop_2701_, lean_object* v_b_2702_){
_start:
{
size_t v_i_boxed_2703_; size_t v_stop_boxed_2704_; lean_object* v_res_2705_; 
v_i_boxed_2703_ = lean_unbox_usize(v_i_2700_);
lean_dec(v_i_2700_);
v_stop_boxed_2704_ = lean_unbox_usize(v_stop_2701_);
lean_dec(v_stop_2701_);
v_res_2705_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__5(v_as_2699_, v_i_boxed_2703_, v_stop_boxed_2704_, v_b_2702_);
lean_dec_ref(v_as_2699_);
return v_res_2705_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3___redArg(lean_object* v___y_2706_){
_start:
{
lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v_env_2712_; lean_object* v___x_2713_; lean_object* v_ext_2714_; lean_object* v_toEnvExtension_2715_; lean_object* v_asyncMode_2716_; lean_object* v___x_2717_; lean_object* v_categories_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; 
v___x_2708_ = lean_box(1);
v___x_2709_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__2, &l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__2_once, _init_l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__2);
v___x_2710_ = l_Lean_Parser_ParserExtension_instInhabitedState_default;
v___x_2711_ = lean_st_ref_get(v___y_2706_);
v_env_2712_ = lean_ctor_get(v___x_2711_, 0);
lean_inc_ref_n(v_env_2712_, 2);
lean_dec(v___x_2711_);
v___x_2713_ = l_Lean_Parser_parserExtension;
v_ext_2714_ = lean_ctor_get(v___x_2713_, 1);
v_toEnvExtension_2715_ = lean_ctor_get(v_ext_2714_, 0);
v_asyncMode_2716_ = lean_ctor_get(v_toEnvExtension_2715_, 2);
v___x_2717_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_2710_, v___x_2713_, v_env_2712_, v_asyncMode_2716_);
v_categories_2718_ = lean_ctor_get(v___x_2717_, 2);
lean_inc_ref(v_categories_2718_);
lean_dec(v___x_2717_);
v___x_2719_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__2___closed__1));
v___x_2720_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4___redArg(v_categories_2718_, v___x_2719_);
lean_dec_ref(v_categories_2718_);
if (lean_obj_tag(v___x_2720_) == 1)
{
lean_object* v_val_2721_; lean_object* v___x_2723_; uint8_t v_isShared_2724_; uint8_t v_isSharedCheck_2752_; 
v_val_2721_ = lean_ctor_get(v___x_2720_, 0);
v_isSharedCheck_2752_ = !lean_is_exclusive(v___x_2720_);
if (v_isSharedCheck_2752_ == 0)
{
v___x_2723_ = v___x_2720_;
v_isShared_2724_ = v_isSharedCheck_2752_;
goto v_resetjp_2722_;
}
else
{
lean_inc(v_val_2721_);
lean_dec(v___x_2720_);
v___x_2723_ = lean_box(0);
v_isShared_2724_ = v_isSharedCheck_2752_;
goto v_resetjp_2722_;
}
v_resetjp_2722_:
{
lean_object* v___y_2726_; lean_object* v___x_2735_; lean_object* v_toEnvExtension_2736_; lean_object* v_exportEntriesFn_2737_; lean_object* v_asyncMode_2738_; lean_object* v___x_2739_; lean_object* v___x_2740_; lean_object* v_importedEntries_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; lean_object* v_exported_2744_; lean_object* v___x_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; uint8_t v___x_2748_; 
v___x_2735_ = l_Lean_Parser_Tactic_Doc_tacticNameExt;
v_toEnvExtension_2736_ = lean_ctor_get(v___x_2735_, 0);
v_exportEntriesFn_2737_ = lean_ctor_get(v___x_2735_, 4);
v_asyncMode_2738_ = lean_ctor_get(v_toEnvExtension_2736_, 2);
v___x_2739_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__7, &l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__7_once, _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__7);
lean_inc_ref_n(v_env_2712_, 2);
v___x_2740_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_2709_, v_toEnvExtension_2736_, v_env_2712_, v_asyncMode_2738_, v___x_2739_);
v_importedEntries_2741_ = lean_ctor_get(v___x_2740_, 0);
lean_inc_ref(v_importedEntries_2741_);
lean_dec(v___x_2740_);
v___x_2742_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_2708_, v___x_2735_, v_env_2712_, v_asyncMode_2738_, v___x_2739_);
lean_inc_ref(v_exportEntriesFn_2737_);
v___x_2743_ = lean_apply_2(v_exportEntriesFn_2737_, v_env_2712_, v___x_2742_);
v_exported_2744_ = lean_ctor_get(v___x_2743_, 0);
lean_inc(v_exported_2744_);
lean_dec_ref(v___x_2743_);
v___x_2745_ = lean_array_push(v_importedEntries_2741_, v_exported_2744_);
v___x_2746_ = lean_unsigned_to_nat(0u);
v___x_2747_ = lean_array_get_size(v___x_2745_);
v___x_2748_ = lean_nat_dec_lt(v___x_2746_, v___x_2747_);
if (v___x_2748_ == 0)
{
lean_dec_ref(v___x_2745_);
v___y_2726_ = v___x_2708_;
goto v___jp_2725_;
}
else
{
size_t v___x_2749_; size_t v___x_2750_; lean_object* v___x_2751_; 
v___x_2749_ = ((size_t)0ULL);
v___x_2750_ = lean_usize_of_nat(v___x_2747_);
v___x_2751_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__5(v___x_2745_, v___x_2749_, v___x_2750_, v___x_2708_);
lean_dec_ref(v___x_2745_);
v___y_2726_ = v___x_2751_;
goto v___jp_2725_;
}
v___jp_2725_:
{
lean_object* v_tables_2727_; lean_object* v_leadingTable_2728_; lean_object* v_trailingTable_2729_; lean_object* v_firstTokens_2730_; lean_object* v_firstTokens_2731_; lean_object* v___x_2733_; 
v_tables_2727_ = lean_ctor_get(v_val_2721_, 2);
v_leadingTable_2728_ = lean_ctor_get(v_tables_2727_, 0);
v_trailingTable_2729_ = lean_ctor_get(v_tables_2727_, 2);
lean_inc(v_trailingTable_2729_);
lean_inc(v_leadingTable_2728_);
lean_inc(v_val_2721_);
v_firstTokens_2730_ = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens(v_val_2721_, v_leadingTable_2728_, v___y_2726_);
v_firstTokens_2731_ = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens(v_val_2721_, v_trailingTable_2729_, v_firstTokens_2730_);
if (v_isShared_2724_ == 0)
{
lean_ctor_set_tag(v___x_2723_, 0);
lean_ctor_set(v___x_2723_, 0, v_firstTokens_2731_);
v___x_2733_ = v___x_2723_;
goto v_reusejp_2732_;
}
else
{
lean_object* v_reuseFailAlloc_2734_; 
v_reuseFailAlloc_2734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2734_, 0, v_firstTokens_2731_);
v___x_2733_ = v_reuseFailAlloc_2734_;
goto v_reusejp_2732_;
}
v_reusejp_2732_:
{
return v___x_2733_;
}
}
}
}
else
{
lean_object* v___x_2753_; 
lean_dec(v___x_2720_);
lean_dec_ref(v_env_2712_);
v___x_2753_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2753_, 0, v___x_2708_);
return v___x_2753_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3___redArg___boxed(lean_object* v___y_2754_, lean_object* v___y_2755_){
_start:
{
lean_object* v_res_2756_; 
v_res_2756_ = l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3___redArg(v___y_2754_);
lean_dec(v___y_2754_);
return v_res_2756_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Doc_elabPrintTacTags___redArg___closed__1(void){
_start:
{
lean_object* v___x_2758_; lean_object* v___x_2759_; 
v___x_2758_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_elabPrintTacTags___redArg___closed__0));
v___x_2759_ = l_Lean_stringToMessageData(v___x_2758_);
return v___x_2759_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabPrintTacTags___redArg(lean_object* v_a_2760_, lean_object* v_a_2761_){
_start:
{
lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; lean_object* v_env_2766_; lean_object* v___x_2767_; lean_object* v_env_2768_; lean_object* v___x_2769_; lean_object* v_env_2770_; lean_object* v___x_2771_; lean_object* v_toEnvExtension_2772_; lean_object* v_exportEntriesFn_2773_; lean_object* v_asyncMode_2774_; lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v_importedEntries_2777_; lean_object* v___x_2779_; uint8_t v_isShared_2780_; uint8_t v_isSharedCheck_2829_; 
v___x_2763_ = lean_box(1);
v___x_2764_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__2, &l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__2_once, _init_l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__2);
v___x_2765_ = lean_st_ref_get(v_a_2761_);
v_env_2766_ = lean_ctor_get(v___x_2765_, 0);
lean_inc_ref(v_env_2766_);
lean_dec(v___x_2765_);
v___x_2767_ = lean_st_ref_get(v_a_2761_);
v_env_2768_ = lean_ctor_get(v___x_2767_, 0);
lean_inc_ref(v_env_2768_);
lean_dec(v___x_2767_);
v___x_2769_ = lean_st_ref_get(v_a_2761_);
v_env_2770_ = lean_ctor_get(v___x_2769_, 0);
lean_inc_ref(v_env_2770_);
lean_dec(v___x_2769_);
v___x_2771_ = l_Lean_Parser_Tactic_Doc_tacticTagExt;
v_toEnvExtension_2772_ = lean_ctor_get(v___x_2771_, 0);
v_exportEntriesFn_2773_ = lean_ctor_get(v___x_2771_, 4);
v_asyncMode_2774_ = lean_ctor_get(v_toEnvExtension_2772_, 2);
v___x_2775_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__7, &l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__7_once, _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__7);
v___x_2776_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_2764_, v_toEnvExtension_2772_, v_env_2766_, v_asyncMode_2774_, v___x_2775_);
v_importedEntries_2777_ = lean_ctor_get(v___x_2776_, 0);
v_isSharedCheck_2829_ = !lean_is_exclusive(v___x_2776_);
if (v_isSharedCheck_2829_ == 0)
{
lean_object* v_unused_2830_; 
v_unused_2830_ = lean_ctor_get(v___x_2776_, 1);
lean_dec(v_unused_2830_);
v___x_2779_ = v___x_2776_;
v_isShared_2780_ = v_isSharedCheck_2829_;
goto v_resetjp_2778_;
}
else
{
lean_inc(v_importedEntries_2777_);
lean_dec(v___x_2776_);
v___x_2779_ = lean_box(0);
v_isShared_2780_ = v_isSharedCheck_2829_;
goto v_resetjp_2778_;
}
v_resetjp_2778_:
{
lean_object* v___x_2781_; lean_object* v___x_2782_; lean_object* v_exported_2783_; lean_object* v___x_2784_; size_t v_sz_2785_; size_t v___x_2786_; lean_object* v___x_2787_; 
v___x_2781_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_2763_, v___x_2771_, v_env_2770_, v_asyncMode_2774_, v___x_2775_);
lean_inc_ref(v_exportEntriesFn_2773_);
v___x_2782_ = lean_apply_2(v_exportEntriesFn_2773_, v_env_2768_, v___x_2781_);
v_exported_2783_ = lean_ctor_get(v___x_2782_, 0);
lean_inc(v_exported_2783_);
lean_dec_ref(v___x_2782_);
v___x_2784_ = lean_array_push(v_importedEntries_2777_, v_exported_2783_);
v_sz_2785_ = lean_array_size(v___x_2784_);
v___x_2786_ = ((size_t)0ULL);
v___x_2787_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__2(v___x_2784_, v_sz_2785_, v___x_2786_, v___x_2763_, v_a_2760_, v_a_2761_);
lean_dec_ref(v___x_2784_);
if (lean_obj_tag(v___x_2787_) == 0)
{
lean_object* v_a_2788_; lean_object* v___x_2789_; lean_object* v_a_2790_; lean_object* v___x_2791_; 
v_a_2788_ = lean_ctor_get(v___x_2787_, 0);
lean_inc(v_a_2788_);
lean_dec_ref_known(v___x_2787_, 1);
v___x_2789_ = l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3___redArg(v_a_2761_);
v_a_2790_ = lean_ctor_get(v___x_2789_, 0);
lean_inc(v_a_2790_);
lean_dec_ref(v___x_2789_);
v___x_2791_ = l_Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10(v_a_2760_, v_a_2761_);
if (lean_obj_tag(v___x_2791_) == 0)
{
lean_object* v_a_2792_; lean_object* v___x_2793_; lean_object* v___x_2794_; 
v_a_2792_ = lean_ctor_get(v___x_2791_, 0);
lean_inc(v_a_2792_);
lean_dec_ref_known(v___x_2791_, 1);
v___x_2793_ = lean_box(0);
v___x_2794_ = l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11(v_a_2790_, v_a_2788_, v_a_2792_, v___x_2793_, v_a_2760_, v_a_2761_);
lean_dec(v_a_2788_);
lean_dec(v_a_2790_);
if (lean_obj_tag(v___x_2794_) == 0)
{
lean_object* v_a_2795_; lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v___x_2800_; 
v_a_2795_ = lean_ctor_get(v___x_2794_, 0);
lean_inc(v_a_2795_);
lean_dec_ref_known(v___x_2794_, 1);
v___x_2796_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabPrintTacTags___redArg___closed__1, &l_Lean_Elab_Tactic_Doc_elabPrintTacTags___redArg___closed__1_once, _init_l_Lean_Elab_Tactic_Doc_elabPrintTacTags___redArg___closed__1);
v___x_2797_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__0);
v___x_2798_ = l_Lean_MessageData_joinSep(v_a_2795_, v___x_2797_);
if (v_isShared_2780_ == 0)
{
lean_ctor_set_tag(v___x_2779_, 7);
lean_ctor_set(v___x_2779_, 1, v___x_2798_);
lean_ctor_set(v___x_2779_, 0, v___x_2797_);
v___x_2800_ = v___x_2779_;
goto v_reusejp_2799_;
}
else
{
lean_object* v_reuseFailAlloc_2804_; 
v_reuseFailAlloc_2804_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2804_, 0, v___x_2797_);
lean_ctor_set(v_reuseFailAlloc_2804_, 1, v___x_2798_);
v___x_2800_ = v_reuseFailAlloc_2804_;
goto v_reusejp_2799_;
}
v_reusejp_2799_:
{
lean_object* v___x_2801_; lean_object* v___x_2802_; lean_object* v___x_2803_; 
v___x_2801_ = l_Lean_MessageData_nestD(v___x_2800_);
v___x_2802_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2802_, 0, v___x_2796_);
lean_ctor_set(v___x_2802_, 1, v___x_2801_);
v___x_2803_ = l_Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12(v___x_2802_, v_a_2760_, v_a_2761_);
return v___x_2803_;
}
}
else
{
lean_object* v_a_2805_; lean_object* v___x_2807_; uint8_t v_isShared_2808_; uint8_t v_isSharedCheck_2812_; 
lean_del_object(v___x_2779_);
v_a_2805_ = lean_ctor_get(v___x_2794_, 0);
v_isSharedCheck_2812_ = !lean_is_exclusive(v___x_2794_);
if (v_isSharedCheck_2812_ == 0)
{
v___x_2807_ = v___x_2794_;
v_isShared_2808_ = v_isSharedCheck_2812_;
goto v_resetjp_2806_;
}
else
{
lean_inc(v_a_2805_);
lean_dec(v___x_2794_);
v___x_2807_ = lean_box(0);
v_isShared_2808_ = v_isSharedCheck_2812_;
goto v_resetjp_2806_;
}
v_resetjp_2806_:
{
lean_object* v___x_2810_; 
if (v_isShared_2808_ == 0)
{
v___x_2810_ = v___x_2807_;
goto v_reusejp_2809_;
}
else
{
lean_object* v_reuseFailAlloc_2811_; 
v_reuseFailAlloc_2811_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2811_, 0, v_a_2805_);
v___x_2810_ = v_reuseFailAlloc_2811_;
goto v_reusejp_2809_;
}
v_reusejp_2809_:
{
return v___x_2810_;
}
}
}
}
else
{
lean_object* v_a_2813_; lean_object* v___x_2815_; uint8_t v_isShared_2816_; uint8_t v_isSharedCheck_2820_; 
lean_dec(v_a_2790_);
lean_dec(v_a_2788_);
lean_del_object(v___x_2779_);
v_a_2813_ = lean_ctor_get(v___x_2791_, 0);
v_isSharedCheck_2820_ = !lean_is_exclusive(v___x_2791_);
if (v_isSharedCheck_2820_ == 0)
{
v___x_2815_ = v___x_2791_;
v_isShared_2816_ = v_isSharedCheck_2820_;
goto v_resetjp_2814_;
}
else
{
lean_inc(v_a_2813_);
lean_dec(v___x_2791_);
v___x_2815_ = lean_box(0);
v_isShared_2816_ = v_isSharedCheck_2820_;
goto v_resetjp_2814_;
}
v_resetjp_2814_:
{
lean_object* v___x_2818_; 
if (v_isShared_2816_ == 0)
{
v___x_2818_ = v___x_2815_;
goto v_reusejp_2817_;
}
else
{
lean_object* v_reuseFailAlloc_2819_; 
v_reuseFailAlloc_2819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2819_, 0, v_a_2813_);
v___x_2818_ = v_reuseFailAlloc_2819_;
goto v_reusejp_2817_;
}
v_reusejp_2817_:
{
return v___x_2818_;
}
}
}
}
else
{
lean_object* v_a_2821_; lean_object* v___x_2823_; uint8_t v_isShared_2824_; uint8_t v_isSharedCheck_2828_; 
lean_del_object(v___x_2779_);
v_a_2821_ = lean_ctor_get(v___x_2787_, 0);
v_isSharedCheck_2828_ = !lean_is_exclusive(v___x_2787_);
if (v_isSharedCheck_2828_ == 0)
{
v___x_2823_ = v___x_2787_;
v_isShared_2824_ = v_isSharedCheck_2828_;
goto v_resetjp_2822_;
}
else
{
lean_inc(v_a_2821_);
lean_dec(v___x_2787_);
v___x_2823_ = lean_box(0);
v_isShared_2824_ = v_isSharedCheck_2828_;
goto v_resetjp_2822_;
}
v_resetjp_2822_:
{
lean_object* v___x_2826_; 
if (v_isShared_2824_ == 0)
{
v___x_2826_ = v___x_2823_;
goto v_reusejp_2825_;
}
else
{
lean_object* v_reuseFailAlloc_2827_; 
v_reuseFailAlloc_2827_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2827_, 0, v_a_2821_);
v___x_2826_ = v_reuseFailAlloc_2827_;
goto v_reusejp_2825_;
}
v_reusejp_2825_:
{
return v___x_2826_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabPrintTacTags___redArg___boxed(lean_object* v_a_2831_, lean_object* v_a_2832_, lean_object* v_a_2833_){
_start:
{
lean_object* v_res_2834_; 
v_res_2834_ = l_Lean_Elab_Tactic_Doc_elabPrintTacTags___redArg(v_a_2831_, v_a_2832_);
lean_dec(v_a_2832_);
lean_dec_ref(v_a_2831_);
return v_res_2834_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabPrintTacTags(lean_object* v___stx_2835_, lean_object* v_a_2836_, lean_object* v_a_2837_){
_start:
{
lean_object* v___x_2839_; 
v___x_2839_ = l_Lean_Elab_Tactic_Doc_elabPrintTacTags___redArg(v_a_2836_, v_a_2837_);
return v___x_2839_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabPrintTacTags___boxed(lean_object* v___stx_2840_, lean_object* v_a_2841_, lean_object* v_a_2842_, lean_object* v_a_2843_){
_start:
{
lean_object* v_res_2844_; 
v_res_2844_ = l_Lean_Elab_Tactic_Doc_elabPrintTacTags(v___stx_2840_, v_a_2841_, v_a_2842_);
lean_dec(v_a_2842_);
lean_dec_ref(v_a_2841_);
lean_dec(v___stx_2840_);
return v_res_2844_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__0(lean_object* v_00_u03b4_2845_, lean_object* v_t_2846_, lean_object* v_k_2847_, lean_object* v_fallback_2848_){
_start:
{
lean_object* v___x_2849_; 
v___x_2849_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__0___redArg(v_t_2846_, v_k_2847_, v_fallback_2848_);
return v___x_2849_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__0___boxed(lean_object* v_00_u03b4_2850_, lean_object* v_t_2851_, lean_object* v_k_2852_, lean_object* v_fallback_2853_){
_start:
{
lean_object* v_res_2854_; 
v_res_2854_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__0(v_00_u03b4_2850_, v_t_2851_, v_k_2852_, v_fallback_2853_);
lean_dec(v_fallback_2853_);
lean_dec(v_k_2852_);
lean_dec(v_t_2851_);
return v_res_2854_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__1(lean_object* v_as_2855_, size_t v_sz_2856_, size_t v_i_2857_, lean_object* v_b_2858_, lean_object* v___y_2859_, lean_object* v___y_2860_){
_start:
{
lean_object* v___x_2862_; 
v___x_2862_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__1___redArg(v_as_2855_, v_sz_2856_, v_i_2857_, v_b_2858_);
return v___x_2862_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__1___boxed(lean_object* v_as_2863_, lean_object* v_sz_2864_, lean_object* v_i_2865_, lean_object* v_b_2866_, lean_object* v___y_2867_, lean_object* v___y_2868_, lean_object* v___y_2869_){
_start:
{
size_t v_sz_boxed_2870_; size_t v_i_boxed_2871_; lean_object* v_res_2872_; 
v_sz_boxed_2870_ = lean_unbox_usize(v_sz_2864_);
lean_dec(v_sz_2864_);
v_i_boxed_2871_ = lean_unbox_usize(v_i_2865_);
lean_dec(v_i_2865_);
v_res_2872_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__1(v_as_2863_, v_sz_boxed_2870_, v_i_boxed_2871_, v_b_2866_, v___y_2867_, v___y_2868_);
lean_dec(v___y_2868_);
lean_dec_ref(v___y_2867_);
lean_dec_ref(v_as_2863_);
return v_res_2872_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3(lean_object* v___y_2873_, lean_object* v___y_2874_){
_start:
{
lean_object* v___x_2876_; 
v___x_2876_ = l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3___redArg(v___y_2874_);
return v___x_2876_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3___boxed(lean_object* v___y_2877_, lean_object* v___y_2878_, lean_object* v___y_2879_){
_start:
{
lean_object* v_res_2880_; 
v_res_2880_ = l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3(v___y_2877_, v___y_2878_);
lean_dec(v___y_2878_);
lean_dec_ref(v___y_2877_);
return v_res_2880_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__5(lean_object* v_val_2881_, lean_object* v___x_2882_, lean_object* v___x_2883_, lean_object* v_inst_2884_, lean_object* v_R_2885_, lean_object* v_a_2886_, lean_object* v_b_2887_){
_start:
{
lean_object* v___x_2888_; 
v___x_2888_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__5___redArg(v_val_2881_, v___x_2882_, v___x_2883_, v_a_2886_, v_b_2887_);
return v___x_2888_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__5___boxed(lean_object* v_val_2889_, lean_object* v___x_2890_, lean_object* v___x_2891_, lean_object* v_inst_2892_, lean_object* v_R_2893_, lean_object* v_a_2894_, lean_object* v_b_2895_){
_start:
{
lean_object* v_res_2896_; 
v_res_2896_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__5(v_val_2889_, v___x_2890_, v___x_2891_, v_inst_2892_, v_R_2893_, v_a_2894_, v_b_2895_);
lean_dec_ref(v___x_2890_);
lean_dec_ref(v_val_2889_);
return v_res_2896_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__8(lean_object* v_init_2897_, lean_object* v_t_2898_){
_start:
{
lean_object* v___x_2899_; 
v___x_2899_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__8_spec__15(v_init_2897_, v_t_2898_);
return v___x_2899_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9(lean_object* v_n_2900_, lean_object* v_as_2901_, lean_object* v_lo_2902_, lean_object* v_hi_2903_, lean_object* v_w_2904_, lean_object* v_hlo_2905_, lean_object* v_hhi_2906_){
_start:
{
lean_object* v___x_2907_; 
v___x_2907_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9___redArg(v_n_2900_, v_as_2901_, v_lo_2902_, v_hi_2903_);
return v___x_2907_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9___boxed(lean_object* v_n_2908_, lean_object* v_as_2909_, lean_object* v_lo_2910_, lean_object* v_hi_2911_, lean_object* v_w_2912_, lean_object* v_hlo_2913_, lean_object* v_hhi_2914_){
_start:
{
lean_object* v_res_2915_; 
v_res_2915_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9(v_n_2908_, v_as_2909_, v_lo_2910_, v_hi_2911_, v_w_2912_, v_hlo_2913_, v_hhi_2914_);
lean_dec(v_hi_2911_);
lean_dec(v_n_2908_);
return v_res_2915_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4(lean_object* v_00_u03b2_2916_, lean_object* v_x_2917_, lean_object* v_x_2918_){
_start:
{
lean_object* v___x_2919_; 
v___x_2919_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4___redArg(v_x_2917_, v_x_2918_);
return v___x_2919_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4___boxed(lean_object* v_00_u03b2_2920_, lean_object* v_x_2921_, lean_object* v_x_2922_){
_start:
{
lean_object* v_res_2923_; 
v_res_2923_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4(v_00_u03b2_2920_, v_x_2921_, v_x_2922_);
lean_dec(v_x_2922_);
lean_dec_ref(v_x_2921_);
return v_res_2923_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9(lean_object* v_tac_2924_, lean_object* v___y_2925_, lean_object* v___y_2926_){
_start:
{
lean_object* v___x_2928_; 
v___x_2928_ = l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9___redArg(v_tac_2924_, v___y_2926_);
return v___x_2928_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9___boxed(lean_object* v_tac_2929_, lean_object* v___y_2930_, lean_object* v___y_2931_, lean_object* v___y_2932_){
_start:
{
lean_object* v_res_2933_; 
v_res_2933_ = l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9(v_tac_2929_, v___y_2930_, v___y_2931_);
lean_dec(v___y_2931_);
lean_dec_ref(v___y_2930_);
return v_res_2933_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__10(lean_object* v_00_u03b4_2934_, lean_object* v_t_2935_, lean_object* v_k_2936_){
_start:
{
lean_object* v___x_2937_; 
v___x_2937_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__10___redArg(v_t_2935_, v_k_2936_);
return v___x_2937_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__10___boxed(lean_object* v_00_u03b4_2938_, lean_object* v_t_2939_, lean_object* v_k_2940_){
_start:
{
lean_object* v_res_2941_; 
v_res_2941_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__10(v_00_u03b4_2938_, v_t_2939_, v_k_2940_);
lean_dec(v_k_2940_);
lean_dec(v_t_2939_);
return v_res_2941_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f_x27___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__11(lean_object* v_00_u03b2_2942_, lean_object* v_x_2943_, lean_object* v_x_2944_){
_start:
{
lean_object* v___x_2945_; 
v___x_2945_ = l_Lean_SMap_find_x3f_x27___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__11___redArg(v_x_2943_, v_x_2944_);
return v___x_2945_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f_x27___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__11___boxed(lean_object* v_00_u03b2_2946_, lean_object* v_x_2947_, lean_object* v_x_2948_){
_start:
{
lean_object* v_res_2949_; 
v_res_2949_ = l_Lean_SMap_find_x3f_x27___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__11(v_00_u03b2_2946_, v_x_2947_, v_x_2948_);
lean_dec(v_x_2948_);
lean_dec_ref(v_x_2947_);
return v_res_2949_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9_spec__17(lean_object* v_n_2950_, lean_object* v_lo_2951_, lean_object* v_hi_2952_, lean_object* v_hhi_2953_, lean_object* v_pivot_2954_, lean_object* v_as_2955_, lean_object* v_i_2956_, lean_object* v_k_2957_, lean_object* v_ilo_2958_, lean_object* v_ik_2959_, lean_object* v_w_2960_){
_start:
{
lean_object* v___x_2961_; 
v___x_2961_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9_spec__17___redArg(v_hi_2952_, v_pivot_2954_, v_as_2955_, v_i_2956_, v_k_2957_);
return v___x_2961_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9_spec__17___boxed(lean_object* v_n_2962_, lean_object* v_lo_2963_, lean_object* v_hi_2964_, lean_object* v_hhi_2965_, lean_object* v_pivot_2966_, lean_object* v_as_2967_, lean_object* v_i_2968_, lean_object* v_k_2969_, lean_object* v_ilo_2970_, lean_object* v_ik_2971_, lean_object* v_w_2972_){
_start:
{
lean_object* v_res_2973_; 
v_res_2973_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9_spec__17(v_n_2962_, v_lo_2963_, v_hi_2964_, v_hhi_2965_, v_pivot_2966_, v_as_2967_, v_i_2968_, v_k_2969_, v_ilo_2970_, v_ik_2971_, v_w_2972_);
lean_dec(v_hi_2964_);
lean_dec(v_lo_2963_);
lean_dec(v_n_2962_);
return v_res_2973_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__19(lean_object* v_as_2974_, size_t v_sz_2975_, size_t v_i_2976_, lean_object* v_b_2977_, lean_object* v___y_2978_, lean_object* v___y_2979_){
_start:
{
lean_object* v___x_2981_; 
v___x_2981_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__19___redArg(v_as_2974_, v_sz_2975_, v_i_2976_, v_b_2977_);
return v___x_2981_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__19___boxed(lean_object* v_as_2982_, lean_object* v_sz_2983_, lean_object* v_i_2984_, lean_object* v_b_2985_, lean_object* v___y_2986_, lean_object* v___y_2987_, lean_object* v___y_2988_){
_start:
{
size_t v_sz_boxed_2989_; size_t v_i_boxed_2990_; lean_object* v_res_2991_; 
v_sz_boxed_2989_ = lean_unbox_usize(v_sz_2983_);
lean_dec(v_sz_2983_);
v_i_boxed_2990_ = lean_unbox_usize(v_i_2984_);
lean_dec(v_i_2984_);
v_res_2991_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__19(v_as_2982_, v_sz_boxed_2989_, v_i_boxed_2990_, v_b_2985_, v___y_2986_, v___y_2987_);
lean_dec(v___y_2987_);
lean_dec_ref(v___y_2986_);
lean_dec_ref(v_as_2982_);
return v_res_2991_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21(lean_object* v_init_2992_, lean_object* v_t_2993_){
_start:
{
lean_object* v___x_2994_; 
v___x_2994_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21_spec__25(v_init_2992_, v_t_2993_);
return v___x_2994_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21___boxed(lean_object* v_init_2995_, lean_object* v_t_2996_){
_start:
{
lean_object* v_res_2997_; 
v_res_2997_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21(v_init_2995_, v_t_2996_);
lean_dec(v_t_2996_);
return v_res_2997_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__22(lean_object* v_n_2998_, lean_object* v_as_2999_, lean_object* v_lo_3000_, lean_object* v_hi_3001_, lean_object* v_w_3002_, lean_object* v_hlo_3003_, lean_object* v_hhi_3004_){
_start:
{
lean_object* v___x_3005_; 
v___x_3005_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__22___redArg(v_n_2998_, v_as_2999_, v_lo_3000_, v_hi_3001_);
return v___x_3005_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__22___boxed(lean_object* v_n_3006_, lean_object* v_as_3007_, lean_object* v_lo_3008_, lean_object* v_hi_3009_, lean_object* v_w_3010_, lean_object* v_hlo_3011_, lean_object* v_hhi_3012_){
_start:
{
lean_object* v_res_3013_; 
v_res_3013_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__22(v_n_3006_, v_as_3007_, v_lo_3008_, v_hi_3009_, v_w_3010_, v_hlo_3011_, v_hhi_3012_);
lean_dec(v_hi_3009_);
lean_dec(v_n_3006_);
return v_res_3013_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__23(lean_object* v_init_3014_, lean_object* v_x_3015_, lean_object* v___y_3016_, lean_object* v___y_3017_){
_start:
{
lean_object* v___x_3019_; 
v___x_3019_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__23___redArg(v_init_3014_, v_x_3015_);
return v___x_3019_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__23___boxed(lean_object* v_init_3020_, lean_object* v_x_3021_, lean_object* v___y_3022_, lean_object* v___y_3023_, lean_object* v___y_3024_){
_start:
{
lean_object* v_res_3025_; 
v_res_3025_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__23(v_init_3020_, v_x_3021_, v___y_3022_, v___y_3023_);
lean_dec(v___y_3023_);
lean_dec_ref(v___y_3022_);
return v_res_3025_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6(lean_object* v_00_u03b2_3026_, lean_object* v_x_3027_, size_t v_x_3028_, lean_object* v_x_3029_){
_start:
{
lean_object* v___x_3030_; 
v___x_3030_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6___redArg(v_x_3027_, v_x_3028_, v_x_3029_);
return v___x_3030_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6___boxed(lean_object* v_00_u03b2_3031_, lean_object* v_x_3032_, lean_object* v_x_3033_, lean_object* v_x_3034_){
_start:
{
size_t v_x_18994__boxed_3035_; lean_object* v_res_3036_; 
v_x_18994__boxed_3035_ = lean_unbox_usize(v_x_3033_);
lean_dec(v_x_3033_);
v_res_3036_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6(v_00_u03b2_3031_, v_x_3032_, v_x_18994__boxed_3035_, v_x_3034_);
lean_dec(v_x_3034_);
lean_dec_ref(v_x_3032_);
return v_res_3036_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9_spec__11(lean_object* v_as_3037_, lean_object* v_k_3038_, lean_object* v_x_3039_, lean_object* v_x_3040_, lean_object* v_x_3041_){
_start:
{
lean_object* v___x_3042_; 
v___x_3042_ = l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9_spec__11___redArg(v_as_3037_, v_k_3038_, v_x_3039_, v_x_3040_);
return v___x_3042_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9_spec__11___boxed(lean_object* v_as_3043_, lean_object* v_k_3044_, lean_object* v_x_3045_, lean_object* v_x_3046_, lean_object* v_x_3047_){
_start:
{
lean_object* v_res_3048_; 
v_res_3048_ = l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9_spec__11(v_as_3043_, v_k_3044_, v_x_3045_, v_x_3046_, v_x_3047_);
lean_dec_ref(v_k_3044_);
lean_dec_ref(v_as_3043_);
return v_res_3048_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f_x27___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__11_spec__14(lean_object* v_00_u03b2_3049_, lean_object* v_m_3050_, lean_object* v_a_3051_){
_start:
{
lean_object* v___x_3052_; 
v___x_3052_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f_x27___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__11_spec__14___redArg(v_m_3050_, v_a_3051_);
return v___x_3052_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f_x27___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__11_spec__14___boxed(lean_object* v_00_u03b2_3053_, lean_object* v_m_3054_, lean_object* v_a_3055_){
_start:
{
lean_object* v_res_3056_; 
v_res_3056_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f_x27___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__11_spec__14(v_00_u03b2_3053_, v_m_3054_, v_a_3055_);
lean_dec(v_a_3055_);
lean_dec_ref(v_m_3054_);
return v_res_3056_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__22_spec__27(lean_object* v_n_3057_, lean_object* v_lo_3058_, lean_object* v_hi_3059_, lean_object* v_hhi_3060_, lean_object* v_pivot_3061_, lean_object* v_as_3062_, lean_object* v_i_3063_, lean_object* v_k_3064_, lean_object* v_ilo_3065_, lean_object* v_ik_3066_, lean_object* v_w_3067_){
_start:
{
lean_object* v___x_3068_; 
v___x_3068_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__22_spec__27___redArg(v_hi_3059_, v_pivot_3061_, v_as_3062_, v_i_3063_, v_k_3064_);
return v___x_3068_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__22_spec__27___boxed(lean_object* v_n_3069_, lean_object* v_lo_3070_, lean_object* v_hi_3071_, lean_object* v_hhi_3072_, lean_object* v_pivot_3073_, lean_object* v_as_3074_, lean_object* v_i_3075_, lean_object* v_k_3076_, lean_object* v_ilo_3077_, lean_object* v_ik_3078_, lean_object* v_w_3079_){
_start:
{
lean_object* v_res_3080_; 
v_res_3080_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__22_spec__27(v_n_3069_, v_lo_3070_, v_hi_3071_, v_hhi_3072_, v_pivot_3073_, v_as_3074_, v_i_3075_, v_k_3076_, v_ilo_3077_, v_ik_3078_, v_w_3079_);
lean_dec(v_hi_3071_);
lean_dec(v_lo_3070_);
lean_dec(v_n_3069_);
return v_res_3080_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6_spec__15(lean_object* v_00_u03b2_3081_, lean_object* v_keys_3082_, lean_object* v_vals_3083_, lean_object* v_heq_3084_, lean_object* v_i_3085_, lean_object* v_k_3086_){
_start:
{
lean_object* v___x_3087_; 
v___x_3087_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6_spec__15___redArg(v_keys_3082_, v_vals_3083_, v_i_3085_, v_k_3086_);
return v___x_3087_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6_spec__15___boxed(lean_object* v_00_u03b2_3088_, lean_object* v_keys_3089_, lean_object* v_vals_3090_, lean_object* v_heq_3091_, lean_object* v_i_3092_, lean_object* v_k_3093_){
_start:
{
lean_object* v_res_3094_; 
v_res_3094_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6_spec__15(v_00_u03b2_3088_, v_keys_3089_, v_vals_3090_, v_heq_3091_, v_i_3092_, v_k_3093_);
lean_dec(v_k_3093_);
lean_dec_ref(v_vals_3090_);
lean_dec_ref(v_keys_3089_);
return v_res_3094_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f_x27___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__11_spec__14_spec__22(lean_object* v_00_u03b2_3095_, lean_object* v_a_3096_, lean_object* v_x_3097_){
_start:
{
lean_object* v___x_3098_; 
v___x_3098_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f_x27___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__11_spec__14_spec__22___redArg(v_a_3096_, v_x_3097_);
return v___x_3098_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f_x27___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__11_spec__14_spec__22___boxed(lean_object* v_00_u03b2_3099_, lean_object* v_a_3100_, lean_object* v_x_3101_){
_start:
{
lean_object* v_res_3102_; 
v_res_3102_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f_x27___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__11_spec__14_spec__22(v_00_u03b2_3099_, v_a_3100_, v_x_3101_);
lean_dec(v_x_3101_);
lean_dec(v_a_3100_);
return v_res_3102_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1(){
_start:
{
lean_object* v___x_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; lean_object* v___x_3121_; 
v___x_3117_ = l_Lean_Elab_Command_commandElabAttribute;
v___x_3118_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__1));
v___x_3119_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__3));
v___x_3120_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Doc_elabPrintTacTags___boxed), 4, 0);
v___x_3121_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_3117_, v___x_3118_, v___x_3119_, v___x_3120_);
return v___x_3121_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___boxed(lean_object* v_a_3122_){
_start:
{
lean_object* v_res_3123_; 
v_res_3123_ = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1();
return v_res_3123_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_docString__3(){
_start:
{
lean_object* v___x_3126_; lean_object* v___x_3127_; lean_object* v___x_3128_; 
v___x_3126_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__3));
v___x_3127_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_docString__3___closed__0));
v___x_3128_ = l_Lean_addBuiltinDocString(v___x_3126_, v___x_3127_);
return v___x_3128_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_docString__3___boxed(lean_object* v_a_3129_){
_start:
{
lean_object* v_res_3130_; 
v_res_3130_ = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_docString__3();
return v_res_3130_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5(){
_start:
{
lean_object* v___x_3157_; lean_object* v___x_3158_; lean_object* v___x_3159_; 
v___x_3157_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__3));
v___x_3158_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__6));
v___x_3159_ = l_Lean_addBuiltinDeclarationRanges(v___x_3157_, v___x_3158_);
return v___x_3159_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___boxed(lean_object* v_a_3160_){
_start:
{
lean_object* v_res_3161_; 
v_res_3161_ = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5();
return v_res_3161_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_allTacticDocs___lam__0(lean_object* v_env_3162_, lean_object* v___x_3163_, lean_object* v_a_3164_, lean_object* v_a_3165_, uint8_t v_includeUnnamed_3166_, lean_object* v_x_3167_, lean_object* v_____s_3168_, lean_object* v___y_3169_, lean_object* v___y_3170_, lean_object* v___y_3171_, lean_object* v___y_3172_){
_start:
{
lean_object* v_fst_3174_; lean_object* v___x_3176_; uint8_t v_isShared_3177_; uint8_t v_isSharedCheck_3229_; 
v_fst_3174_ = lean_ctor_get(v_x_3167_, 0);
v_isSharedCheck_3229_ = !lean_is_exclusive(v_x_3167_);
if (v_isSharedCheck_3229_ == 0)
{
lean_object* v_unused_3230_; 
v_unused_3230_ = lean_ctor_get(v_x_3167_, 1);
lean_dec(v_unused_3230_);
v___x_3176_ = v_x_3167_;
v_isShared_3177_ = v_isSharedCheck_3229_;
goto v_resetjp_3175_;
}
else
{
lean_inc(v_fst_3174_);
lean_dec(v_x_3167_);
v___x_3176_ = lean_box(0);
v_isShared_3177_ = v_isSharedCheck_3229_;
goto v_resetjp_3175_;
}
v_resetjp_3175_:
{
lean_object* v_userName_3179_; lean_object* v___y_3180_; lean_object* v___x_3214_; 
lean_inc(v_fst_3174_);
lean_inc_ref(v_env_3162_);
v___x_3214_ = l_Lean_Parser_Tactic_Doc_alternativeOfTactic(v_env_3162_, v_fst_3174_);
if (lean_obj_tag(v___x_3214_) == 1)
{
lean_object* v___x_3216_; uint8_t v_isShared_3217_; uint8_t v_isSharedCheck_3222_; 
lean_del_object(v___x_3176_);
lean_dec(v_fst_3174_);
lean_dec(v___x_3163_);
lean_dec_ref(v_env_3162_);
v_isSharedCheck_3222_ = !lean_is_exclusive(v___x_3214_);
if (v_isSharedCheck_3222_ == 0)
{
lean_object* v_unused_3223_; 
v_unused_3223_ = lean_ctor_get(v___x_3214_, 0);
lean_dec(v_unused_3223_);
v___x_3216_ = v___x_3214_;
v_isShared_3217_ = v_isSharedCheck_3222_;
goto v_resetjp_3215_;
}
else
{
lean_dec(v___x_3214_);
v___x_3216_ = lean_box(0);
v_isShared_3217_ = v_isSharedCheck_3222_;
goto v_resetjp_3215_;
}
v_resetjp_3215_:
{
lean_object* v___x_3219_; 
if (v_isShared_3217_ == 0)
{
lean_ctor_set(v___x_3216_, 0, v_____s_3168_);
v___x_3219_ = v___x_3216_;
goto v_reusejp_3218_;
}
else
{
lean_object* v_reuseFailAlloc_3221_; 
v_reuseFailAlloc_3221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3221_, 0, v_____s_3168_);
v___x_3219_ = v_reuseFailAlloc_3221_;
goto v_reusejp_3218_;
}
v_reusejp_3218_:
{
lean_object* v___x_3220_; 
v___x_3220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3220_, 0, v___x_3219_);
return v___x_3220_;
}
}
}
else
{
lean_object* v___x_3224_; 
lean_dec(v___x_3214_);
v___x_3224_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__10___redArg(v_a_3165_, v_fst_3174_);
if (lean_obj_tag(v___x_3224_) == 1)
{
lean_object* v_val_3225_; 
v_val_3225_ = lean_ctor_get(v___x_3224_, 0);
lean_inc(v_val_3225_);
lean_dec_ref_known(v___x_3224_, 1);
v_userName_3179_ = v_val_3225_;
v___y_3180_ = v___y_3171_;
goto v___jp_3178_;
}
else
{
lean_dec(v___x_3224_);
if (v_includeUnnamed_3166_ == 0)
{
lean_object* v___x_3226_; lean_object* v___x_3227_; 
lean_del_object(v___x_3176_);
lean_dec(v_fst_3174_);
lean_dec(v___x_3163_);
lean_dec_ref(v_env_3162_);
v___x_3226_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3226_, 0, v_____s_3168_);
v___x_3227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3227_, 0, v___x_3226_);
return v___x_3227_;
}
else
{
lean_object* v___x_3228_; 
lean_inc(v_fst_3174_);
v___x_3228_ = l_Lean_Name_toString(v_fst_3174_, v_includeUnnamed_3166_);
v_userName_3179_ = v___x_3228_;
v___y_3180_ = v___y_3171_;
goto v___jp_3178_;
}
}
}
v___jp_3178_:
{
lean_object* v_ref_3181_; uint8_t v___x_3182_; lean_object* v___x_3183_; lean_object* v___x_3184_; lean_object* v___x_3185_; 
v_ref_3181_ = lean_ctor_get(v___y_3180_, 2);
v___x_3182_ = 1;
v___x_3183_ = l_Lean_Options_empty;
v___x_3184_ = lean_box(0);
lean_inc(v_fst_3174_);
lean_inc_ref(v_env_3162_);
v___x_3185_ = l_Lean_findDocString_x3f(v_env_3162_, v_fst_3174_, v___x_3182_, v___x_3183_, v___x_3163_, v___x_3184_);
if (lean_obj_tag(v___x_3185_) == 0)
{
lean_object* v_a_3186_; lean_object* v___x_3188_; uint8_t v_isShared_3189_; uint8_t v_isSharedCheck_3199_; 
lean_del_object(v___x_3176_);
v_a_3186_ = lean_ctor_get(v___x_3185_, 0);
v_isSharedCheck_3199_ = !lean_is_exclusive(v___x_3185_);
if (v_isSharedCheck_3199_ == 0)
{
v___x_3188_ = v___x_3185_;
v_isShared_3189_ = v_isSharedCheck_3199_;
goto v_resetjp_3187_;
}
else
{
lean_inc(v_a_3186_);
lean_dec(v___x_3185_);
v___x_3188_ = lean_box(0);
v_isShared_3189_ = v_isSharedCheck_3199_;
goto v_resetjp_3187_;
}
v_resetjp_3187_:
{
lean_object* v___x_3190_; lean_object* v___x_3191_; lean_object* v___x_3192_; lean_object* v___x_3193_; lean_object* v___x_3194_; lean_object* v___x_3195_; lean_object* v___x_3197_; 
v___x_3190_ = l_Lean_NameSet_empty;
v___x_3191_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__0___redArg(v_a_3164_, v_fst_3174_, v___x_3190_);
lean_inc(v_fst_3174_);
v___x_3192_ = l_Lean_Parser_Tactic_Doc_getTacticExtensions(v_env_3162_, v_fst_3174_);
v___x_3193_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3193_, 0, v_fst_3174_);
lean_ctor_set(v___x_3193_, 1, v_userName_3179_);
lean_ctor_set(v___x_3193_, 2, v___x_3191_);
lean_ctor_set(v___x_3193_, 3, v_a_3186_);
lean_ctor_set(v___x_3193_, 4, v___x_3192_);
v___x_3194_ = lean_array_push(v_____s_3168_, v___x_3193_);
v___x_3195_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3195_, 0, v___x_3194_);
if (v_isShared_3189_ == 0)
{
lean_ctor_set(v___x_3188_, 0, v___x_3195_);
v___x_3197_ = v___x_3188_;
goto v_reusejp_3196_;
}
else
{
lean_object* v_reuseFailAlloc_3198_; 
v_reuseFailAlloc_3198_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3198_, 0, v___x_3195_);
v___x_3197_ = v_reuseFailAlloc_3198_;
goto v_reusejp_3196_;
}
v_reusejp_3196_:
{
return v___x_3197_;
}
}
}
else
{
lean_object* v_a_3200_; lean_object* v___x_3202_; uint8_t v_isShared_3203_; uint8_t v_isSharedCheck_3213_; 
lean_dec_ref(v_userName_3179_);
lean_dec(v_fst_3174_);
lean_dec_ref(v_____s_3168_);
lean_dec_ref(v_env_3162_);
v_a_3200_ = lean_ctor_get(v___x_3185_, 0);
v_isSharedCheck_3213_ = !lean_is_exclusive(v___x_3185_);
if (v_isSharedCheck_3213_ == 0)
{
v___x_3202_ = v___x_3185_;
v_isShared_3203_ = v_isSharedCheck_3213_;
goto v_resetjp_3201_;
}
else
{
lean_inc(v_a_3200_);
lean_dec(v___x_3185_);
v___x_3202_ = lean_box(0);
v_isShared_3203_ = v_isSharedCheck_3213_;
goto v_resetjp_3201_;
}
v_resetjp_3201_:
{
lean_object* v___x_3204_; lean_object* v___x_3205_; lean_object* v___x_3206_; lean_object* v___x_3208_; 
v___x_3204_ = lean_io_error_to_string(v_a_3200_);
v___x_3205_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3205_, 0, v___x_3204_);
v___x_3206_ = l_Lean_MessageData_ofFormat(v___x_3205_);
lean_inc(v_ref_3181_);
if (v_isShared_3177_ == 0)
{
lean_ctor_set(v___x_3176_, 1, v___x_3206_);
lean_ctor_set(v___x_3176_, 0, v_ref_3181_);
v___x_3208_ = v___x_3176_;
goto v_reusejp_3207_;
}
else
{
lean_object* v_reuseFailAlloc_3212_; 
v_reuseFailAlloc_3212_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3212_, 0, v_ref_3181_);
lean_ctor_set(v_reuseFailAlloc_3212_, 1, v___x_3206_);
v___x_3208_ = v_reuseFailAlloc_3212_;
goto v_reusejp_3207_;
}
v_reusejp_3207_:
{
lean_object* v___x_3210_; 
if (v_isShared_3203_ == 0)
{
lean_ctor_set(v___x_3202_, 0, v___x_3208_);
v___x_3210_ = v___x_3202_;
goto v_reusejp_3209_;
}
else
{
lean_object* v_reuseFailAlloc_3211_; 
v_reuseFailAlloc_3211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3211_, 0, v___x_3208_);
v___x_3210_ = v_reuseFailAlloc_3211_;
goto v_reusejp_3209_;
}
v_reusejp_3209_:
{
return v___x_3210_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_allTacticDocs___lam__0___boxed(lean_object* v_env_3231_, lean_object* v___x_3232_, lean_object* v_a_3233_, lean_object* v_a_3234_, lean_object* v_includeUnnamed_3235_, lean_object* v_x_3236_, lean_object* v_____s_3237_, lean_object* v___y_3238_, lean_object* v___y_3239_, lean_object* v___y_3240_, lean_object* v___y_3241_, lean_object* v___y_3242_){
_start:
{
uint8_t v_includeUnnamed_boxed_3243_; lean_object* v_res_3244_; 
v_includeUnnamed_boxed_3243_ = lean_unbox(v_includeUnnamed_3235_);
v_res_3244_ = l_Lean_Elab_Tactic_Doc_allTacticDocs___lam__0(v_env_3231_, v___x_3232_, v_a_3233_, v_a_3234_, v_includeUnnamed_boxed_3243_, v_x_3236_, v_____s_3237_, v___y_3238_, v___y_3239_, v___y_3240_, v___y_3241_);
lean_dec(v___y_3241_);
lean_dec_ref(v___y_3240_);
lean_dec(v___y_3239_);
lean_dec_ref(v___y_3238_);
lean_dec(v_a_3234_);
lean_dec(v_a_3233_);
return v_res_3244_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__0___redArg(lean_object* v_as_3245_, size_t v_sz_3246_, size_t v_i_3247_, lean_object* v_b_3248_){
_start:
{
uint8_t v___x_3250_; 
v___x_3250_ = lean_usize_dec_lt(v_i_3247_, v_sz_3246_);
if (v___x_3250_ == 0)
{
lean_object* v___x_3251_; 
v___x_3251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3251_, 0, v_b_3248_);
return v___x_3251_;
}
else
{
lean_object* v_a_3252_; lean_object* v_fst_3253_; lean_object* v_snd_3254_; lean_object* v___x_3255_; lean_object* v___x_3256_; lean_object* v___x_3257_; lean_object* v___x_3258_; size_t v___x_3259_; size_t v___x_3260_; 
v_a_3252_ = lean_array_uget_borrowed(v_as_3245_, v_i_3247_);
v_fst_3253_ = lean_ctor_get(v_a_3252_, 0);
v_snd_3254_ = lean_ctor_get(v_a_3252_, 1);
v___x_3255_ = l_Lean_NameSet_empty;
v___x_3256_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__0___redArg(v_b_3248_, v_fst_3253_, v___x_3255_);
lean_inc(v_snd_3254_);
v___x_3257_ = l_Lean_NameSet_insert(v___x_3256_, v_snd_3254_);
lean_inc(v_fst_3253_);
v___x_3258_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_3253_, v___x_3257_, v_b_3248_);
v___x_3259_ = ((size_t)1ULL);
v___x_3260_ = lean_usize_add(v_i_3247_, v___x_3259_);
v_i_3247_ = v___x_3260_;
v_b_3248_ = v___x_3258_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__0___redArg___boxed(lean_object* v_as_3262_, lean_object* v_sz_3263_, lean_object* v_i_3264_, lean_object* v_b_3265_, lean_object* v___y_3266_){
_start:
{
size_t v_sz_boxed_3267_; size_t v_i_boxed_3268_; lean_object* v_res_3269_; 
v_sz_boxed_3267_ = lean_unbox_usize(v_sz_3263_);
lean_dec(v_sz_3263_);
v_i_boxed_3268_ = lean_unbox_usize(v_i_3264_);
lean_dec(v_i_3264_);
v_res_3269_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__0___redArg(v_as_3262_, v_sz_boxed_3267_, v_i_boxed_3268_, v_b_3265_);
lean_dec_ref(v_as_3262_);
return v_res_3269_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__1(lean_object* v_as_3270_, size_t v_sz_3271_, size_t v_i_3272_, lean_object* v_b_3273_, lean_object* v___y_3274_, lean_object* v___y_3275_, lean_object* v___y_3276_, lean_object* v___y_3277_){
_start:
{
uint8_t v___x_3279_; 
v___x_3279_ = lean_usize_dec_lt(v_i_3272_, v_sz_3271_);
if (v___x_3279_ == 0)
{
lean_object* v___x_3280_; 
v___x_3280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3280_, 0, v_b_3273_);
return v___x_3280_;
}
else
{
lean_object* v_a_3281_; size_t v_sz_3282_; size_t v___x_3283_; lean_object* v___x_3284_; 
v_a_3281_ = lean_array_uget_borrowed(v_as_3270_, v_i_3272_);
v_sz_3282_ = lean_array_size(v_a_3281_);
v___x_3283_ = ((size_t)0ULL);
v___x_3284_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__0___redArg(v_a_3281_, v_sz_3282_, v___x_3283_, v_b_3273_);
if (lean_obj_tag(v___x_3284_) == 0)
{
lean_object* v_a_3285_; size_t v___x_3286_; size_t v___x_3287_; 
v_a_3285_ = lean_ctor_get(v___x_3284_, 0);
lean_inc(v_a_3285_);
lean_dec_ref_known(v___x_3284_, 1);
v___x_3286_ = ((size_t)1ULL);
v___x_3287_ = lean_usize_add(v_i_3272_, v___x_3286_);
v_i_3272_ = v___x_3287_;
v_b_3273_ = v_a_3285_;
goto _start;
}
else
{
return v___x_3284_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__1___boxed(lean_object* v_as_3289_, lean_object* v_sz_3290_, lean_object* v_i_3291_, lean_object* v_b_3292_, lean_object* v___y_3293_, lean_object* v___y_3294_, lean_object* v___y_3295_, lean_object* v___y_3296_, lean_object* v___y_3297_){
_start:
{
size_t v_sz_boxed_3298_; size_t v_i_boxed_3299_; lean_object* v_res_3300_; 
v_sz_boxed_3298_ = lean_unbox_usize(v_sz_3290_);
lean_dec(v_sz_3290_);
v_i_boxed_3299_ = lean_unbox_usize(v_i_3291_);
lean_dec(v_i_3291_);
v_res_3300_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__1(v_as_3289_, v_sz_boxed_3298_, v_i_boxed_3299_, v_b_3292_, v___y_3293_, v___y_3294_, v___y_3295_, v___y_3296_);
lean_dec(v___y_3296_);
lean_dec_ref(v___y_3295_);
lean_dec(v___y_3294_);
lean_dec_ref(v___y_3293_);
lean_dec_ref(v_as_3289_);
return v_res_3300_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__6___redArg(lean_object* v_f_3301_, lean_object* v_keys_3302_, lean_object* v_vals_3303_, lean_object* v_i_3304_, lean_object* v_acc_3305_, lean_object* v___y_3306_, lean_object* v___y_3307_, lean_object* v___y_3308_, lean_object* v___y_3309_){
_start:
{
lean_object* v___x_3311_; uint8_t v___x_3312_; 
v___x_3311_ = lean_array_get_size(v_keys_3302_);
v___x_3312_ = lean_nat_dec_lt(v_i_3304_, v___x_3311_);
if (v___x_3312_ == 0)
{
lean_object* v___x_3313_; lean_object* v___x_3314_; 
lean_dec(v_i_3304_);
lean_dec_ref(v_f_3301_);
v___x_3313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3313_, 0, v_acc_3305_);
v___x_3314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3314_, 0, v___x_3313_);
return v___x_3314_;
}
else
{
lean_object* v_k_3315_; lean_object* v_v_3316_; lean_object* v___x_3317_; 
v_k_3315_ = lean_array_fget_borrowed(v_keys_3302_, v_i_3304_);
v_v_3316_ = lean_array_fget_borrowed(v_vals_3303_, v_i_3304_);
lean_inc_ref(v_f_3301_);
lean_inc(v___y_3309_);
lean_inc_ref(v___y_3308_);
lean_inc(v___y_3307_);
lean_inc_ref(v___y_3306_);
lean_inc(v_v_3316_);
lean_inc(v_k_3315_);
v___x_3317_ = lean_apply_8(v_f_3301_, v_acc_3305_, v_k_3315_, v_v_3316_, v___y_3306_, v___y_3307_, v___y_3308_, v___y_3309_, lean_box(0));
if (lean_obj_tag(v___x_3317_) == 0)
{
lean_object* v_a_3318_; 
v_a_3318_ = lean_ctor_get(v___x_3317_, 0);
lean_inc(v_a_3318_);
if (lean_obj_tag(v_a_3318_) == 0)
{
lean_dec_ref_known(v_a_3318_, 1);
lean_dec(v_i_3304_);
lean_dec_ref(v_f_3301_);
return v___x_3317_;
}
else
{
lean_object* v_a_3319_; lean_object* v___x_3320_; lean_object* v___x_3321_; 
lean_dec_ref_known(v___x_3317_, 1);
v_a_3319_ = lean_ctor_get(v_a_3318_, 0);
lean_inc(v_a_3319_);
lean_dec_ref_known(v_a_3318_, 1);
v___x_3320_ = lean_unsigned_to_nat(1u);
v___x_3321_ = lean_nat_add(v_i_3304_, v___x_3320_);
lean_dec(v_i_3304_);
v_i_3304_ = v___x_3321_;
v_acc_3305_ = v_a_3319_;
goto _start;
}
}
else
{
lean_dec(v_i_3304_);
lean_dec_ref(v_f_3301_);
return v___x_3317_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__6___redArg___boxed(lean_object* v_f_3323_, lean_object* v_keys_3324_, lean_object* v_vals_3325_, lean_object* v_i_3326_, lean_object* v_acc_3327_, lean_object* v___y_3328_, lean_object* v___y_3329_, lean_object* v___y_3330_, lean_object* v___y_3331_, lean_object* v___y_3332_){
_start:
{
lean_object* v_res_3333_; 
v_res_3333_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__6___redArg(v_f_3323_, v_keys_3324_, v_vals_3325_, v_i_3326_, v_acc_3327_, v___y_3328_, v___y_3329_, v___y_3330_, v___y_3331_);
lean_dec(v___y_3331_);
lean_dec_ref(v___y_3330_);
lean_dec(v___y_3329_);
lean_dec_ref(v___y_3328_);
lean_dec_ref(v_vals_3325_);
lean_dec_ref(v_keys_3324_);
return v_res_3333_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__5___redArg(lean_object* v_f_3334_, lean_object* v_as_3335_, size_t v_i_3336_, size_t v_stop_3337_, lean_object* v_b_3338_, lean_object* v___y_3339_, lean_object* v___y_3340_, lean_object* v___y_3341_, lean_object* v___y_3342_){
_start:
{
lean_object* v_a_3345_; lean_object* v___y_3350_; uint8_t v___x_3353_; 
v___x_3353_ = lean_usize_dec_eq(v_i_3336_, v_stop_3337_);
if (v___x_3353_ == 0)
{
lean_object* v___x_3354_; 
v___x_3354_ = lean_array_uget_borrowed(v_as_3335_, v_i_3336_);
switch(lean_obj_tag(v___x_3354_))
{
case 0:
{
lean_object* v_key_3355_; lean_object* v_val_3356_; lean_object* v___x_3357_; 
v_key_3355_ = lean_ctor_get(v___x_3354_, 0);
v_val_3356_ = lean_ctor_get(v___x_3354_, 1);
lean_inc_ref(v_f_3334_);
lean_inc(v___y_3342_);
lean_inc_ref(v___y_3341_);
lean_inc(v___y_3340_);
lean_inc_ref(v___y_3339_);
lean_inc(v_val_3356_);
lean_inc(v_key_3355_);
v___x_3357_ = lean_apply_8(v_f_3334_, v_b_3338_, v_key_3355_, v_val_3356_, v___y_3339_, v___y_3340_, v___y_3341_, v___y_3342_, lean_box(0));
v___y_3350_ = v___x_3357_;
goto v___jp_3349_;
}
case 1:
{
lean_object* v_node_3358_; lean_object* v___x_3359_; 
v_node_3358_ = lean_ctor_get(v___x_3354_, 0);
lean_inc(v_node_3358_);
lean_inc_ref(v_f_3334_);
v___x_3359_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4___redArg(v_f_3334_, v_node_3358_, v_b_3338_, v___y_3339_, v___y_3340_, v___y_3341_, v___y_3342_);
v___y_3350_ = v___x_3359_;
goto v___jp_3349_;
}
default: 
{
v_a_3345_ = v_b_3338_;
goto v___jp_3344_;
}
}
}
else
{
lean_object* v___x_3360_; lean_object* v___x_3361_; 
lean_dec_ref(v_f_3334_);
v___x_3360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3360_, 0, v_b_3338_);
v___x_3361_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3361_, 0, v___x_3360_);
return v___x_3361_;
}
v___jp_3344_:
{
size_t v___x_3346_; size_t v___x_3347_; 
v___x_3346_ = ((size_t)1ULL);
v___x_3347_ = lean_usize_add(v_i_3336_, v___x_3346_);
v_i_3336_ = v___x_3347_;
v_b_3338_ = v_a_3345_;
goto _start;
}
v___jp_3349_:
{
if (lean_obj_tag(v___y_3350_) == 0)
{
lean_object* v_a_3351_; 
v_a_3351_ = lean_ctor_get(v___y_3350_, 0);
if (lean_obj_tag(v_a_3351_) == 0)
{
lean_dec_ref(v_f_3334_);
return v___y_3350_;
}
else
{
lean_object* v_a_3352_; 
lean_inc_ref(v_a_3351_);
lean_dec_ref_known(v___y_3350_, 1);
v_a_3352_ = lean_ctor_get(v_a_3351_, 0);
lean_inc(v_a_3352_);
lean_dec_ref_known(v_a_3351_, 1);
v_a_3345_ = v_a_3352_;
goto v___jp_3344_;
}
}
else
{
lean_dec_ref(v_f_3334_);
return v___y_3350_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4___redArg(lean_object* v_f_3362_, lean_object* v_x_3363_, lean_object* v_x_3364_, lean_object* v___y_3365_, lean_object* v___y_3366_, lean_object* v___y_3367_, lean_object* v___y_3368_){
_start:
{
if (lean_obj_tag(v_x_3363_) == 0)
{
lean_object* v_es_3370_; lean_object* v___x_3372_; uint8_t v_isShared_3373_; uint8_t v_isSharedCheck_3384_; 
v_es_3370_ = lean_ctor_get(v_x_3363_, 0);
v_isSharedCheck_3384_ = !lean_is_exclusive(v_x_3363_);
if (v_isSharedCheck_3384_ == 0)
{
v___x_3372_ = v_x_3363_;
v_isShared_3373_ = v_isSharedCheck_3384_;
goto v_resetjp_3371_;
}
else
{
lean_inc(v_es_3370_);
lean_dec(v_x_3363_);
v___x_3372_ = lean_box(0);
v_isShared_3373_ = v_isSharedCheck_3384_;
goto v_resetjp_3371_;
}
v_resetjp_3371_:
{
lean_object* v___x_3374_; lean_object* v___x_3375_; uint8_t v___x_3376_; 
v___x_3374_ = lean_unsigned_to_nat(0u);
v___x_3375_ = lean_array_get_size(v_es_3370_);
v___x_3376_ = lean_nat_dec_lt(v___x_3374_, v___x_3375_);
if (v___x_3376_ == 0)
{
lean_object* v___x_3378_; 
lean_dec_ref(v_es_3370_);
lean_dec_ref(v_f_3362_);
if (v_isShared_3373_ == 0)
{
lean_ctor_set_tag(v___x_3372_, 1);
lean_ctor_set(v___x_3372_, 0, v_x_3364_);
v___x_3378_ = v___x_3372_;
goto v_reusejp_3377_;
}
else
{
lean_object* v_reuseFailAlloc_3380_; 
v_reuseFailAlloc_3380_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3380_, 0, v_x_3364_);
v___x_3378_ = v_reuseFailAlloc_3380_;
goto v_reusejp_3377_;
}
v_reusejp_3377_:
{
lean_object* v___x_3379_; 
v___x_3379_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3379_, 0, v___x_3378_);
return v___x_3379_;
}
}
else
{
size_t v___x_3381_; size_t v___x_3382_; lean_object* v___x_3383_; 
lean_del_object(v___x_3372_);
v___x_3381_ = ((size_t)0ULL);
v___x_3382_ = lean_usize_of_nat(v___x_3375_);
v___x_3383_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__5___redArg(v_f_3362_, v_es_3370_, v___x_3381_, v___x_3382_, v_x_3364_, v___y_3365_, v___y_3366_, v___y_3367_, v___y_3368_);
lean_dec_ref(v_es_3370_);
return v___x_3383_;
}
}
}
else
{
lean_object* v_ks_3385_; lean_object* v_vs_3386_; lean_object* v___x_3387_; lean_object* v___x_3388_; 
v_ks_3385_ = lean_ctor_get(v_x_3363_, 0);
lean_inc_ref(v_ks_3385_);
v_vs_3386_ = lean_ctor_get(v_x_3363_, 1);
lean_inc_ref(v_vs_3386_);
lean_dec_ref_known(v_x_3363_, 2);
v___x_3387_ = lean_unsigned_to_nat(0u);
v___x_3388_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__6___redArg(v_f_3362_, v_ks_3385_, v_vs_3386_, v___x_3387_, v_x_3364_, v___y_3365_, v___y_3366_, v___y_3367_, v___y_3368_);
lean_dec_ref(v_vs_3386_);
lean_dec_ref(v_ks_3385_);
return v___x_3388_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4___redArg___boxed(lean_object* v_f_3389_, lean_object* v_x_3390_, lean_object* v_x_3391_, lean_object* v___y_3392_, lean_object* v___y_3393_, lean_object* v___y_3394_, lean_object* v___y_3395_, lean_object* v___y_3396_){
_start:
{
lean_object* v_res_3397_; 
v_res_3397_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4___redArg(v_f_3389_, v_x_3390_, v_x_3391_, v___y_3392_, v___y_3393_, v___y_3394_, v___y_3395_);
lean_dec(v___y_3395_);
lean_dec_ref(v___y_3394_);
lean_dec(v___y_3393_);
lean_dec_ref(v___y_3392_);
return v_res_3397_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__5___redArg___boxed(lean_object* v_f_3398_, lean_object* v_as_3399_, lean_object* v_i_3400_, lean_object* v_stop_3401_, lean_object* v_b_3402_, lean_object* v___y_3403_, lean_object* v___y_3404_, lean_object* v___y_3405_, lean_object* v___y_3406_, lean_object* v___y_3407_){
_start:
{
size_t v_i_boxed_3408_; size_t v_stop_boxed_3409_; lean_object* v_res_3410_; 
v_i_boxed_3408_ = lean_unbox_usize(v_i_3400_);
lean_dec(v_i_3400_);
v_stop_boxed_3409_ = lean_unbox_usize(v_stop_3401_);
lean_dec(v_stop_3401_);
v_res_3410_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__5___redArg(v_f_3398_, v_as_3399_, v_i_boxed_3408_, v_stop_boxed_3409_, v_b_3402_, v___y_3403_, v___y_3404_, v___y_3405_, v___y_3406_);
lean_dec(v___y_3406_);
lean_dec_ref(v___y_3405_);
lean_dec(v___y_3404_);
lean_dec_ref(v___y_3403_);
lean_dec_ref(v_as_3399_);
return v_res_3410_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3___redArg___lam__0(lean_object* v_f_3411_, lean_object* v_s_3412_, lean_object* v_a_3413_, lean_object* v_b_3414_, lean_object* v___y_3415_, lean_object* v___y_3416_, lean_object* v___y_3417_, lean_object* v___y_3418_){
_start:
{
lean_object* v___x_3420_; lean_object* v___x_3421_; 
v___x_3420_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3420_, 0, v_a_3413_);
lean_ctor_set(v___x_3420_, 1, v_b_3414_);
lean_inc(v___y_3418_);
lean_inc_ref(v___y_3417_);
lean_inc(v___y_3416_);
lean_inc_ref(v___y_3415_);
v___x_3421_ = lean_apply_7(v_f_3411_, v___x_3420_, v_s_3412_, v___y_3415_, v___y_3416_, v___y_3417_, v___y_3418_, lean_box(0));
if (lean_obj_tag(v___x_3421_) == 0)
{
lean_object* v_a_3422_; lean_object* v___x_3424_; uint8_t v_isShared_3425_; uint8_t v_isSharedCheck_3448_; 
v_a_3422_ = lean_ctor_get(v___x_3421_, 0);
v_isSharedCheck_3448_ = !lean_is_exclusive(v___x_3421_);
if (v_isSharedCheck_3448_ == 0)
{
v___x_3424_ = v___x_3421_;
v_isShared_3425_ = v_isSharedCheck_3448_;
goto v_resetjp_3423_;
}
else
{
lean_inc(v_a_3422_);
lean_dec(v___x_3421_);
v___x_3424_ = lean_box(0);
v_isShared_3425_ = v_isSharedCheck_3448_;
goto v_resetjp_3423_;
}
v_resetjp_3423_:
{
if (lean_obj_tag(v_a_3422_) == 0)
{
lean_object* v_a_3426_; lean_object* v___x_3428_; uint8_t v_isShared_3429_; uint8_t v_isSharedCheck_3436_; 
v_a_3426_ = lean_ctor_get(v_a_3422_, 0);
v_isSharedCheck_3436_ = !lean_is_exclusive(v_a_3422_);
if (v_isSharedCheck_3436_ == 0)
{
v___x_3428_ = v_a_3422_;
v_isShared_3429_ = v_isSharedCheck_3436_;
goto v_resetjp_3427_;
}
else
{
lean_inc(v_a_3426_);
lean_dec(v_a_3422_);
v___x_3428_ = lean_box(0);
v_isShared_3429_ = v_isSharedCheck_3436_;
goto v_resetjp_3427_;
}
v_resetjp_3427_:
{
lean_object* v___x_3431_; 
if (v_isShared_3429_ == 0)
{
v___x_3431_ = v___x_3428_;
goto v_reusejp_3430_;
}
else
{
lean_object* v_reuseFailAlloc_3435_; 
v_reuseFailAlloc_3435_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3435_, 0, v_a_3426_);
v___x_3431_ = v_reuseFailAlloc_3435_;
goto v_reusejp_3430_;
}
v_reusejp_3430_:
{
lean_object* v___x_3433_; 
if (v_isShared_3425_ == 0)
{
lean_ctor_set(v___x_3424_, 0, v___x_3431_);
v___x_3433_ = v___x_3424_;
goto v_reusejp_3432_;
}
else
{
lean_object* v_reuseFailAlloc_3434_; 
v_reuseFailAlloc_3434_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3434_, 0, v___x_3431_);
v___x_3433_ = v_reuseFailAlloc_3434_;
goto v_reusejp_3432_;
}
v_reusejp_3432_:
{
return v___x_3433_;
}
}
}
}
else
{
lean_object* v_a_3437_; lean_object* v___x_3439_; uint8_t v_isShared_3440_; uint8_t v_isSharedCheck_3447_; 
v_a_3437_ = lean_ctor_get(v_a_3422_, 0);
v_isSharedCheck_3447_ = !lean_is_exclusive(v_a_3422_);
if (v_isSharedCheck_3447_ == 0)
{
v___x_3439_ = v_a_3422_;
v_isShared_3440_ = v_isSharedCheck_3447_;
goto v_resetjp_3438_;
}
else
{
lean_inc(v_a_3437_);
lean_dec(v_a_3422_);
v___x_3439_ = lean_box(0);
v_isShared_3440_ = v_isSharedCheck_3447_;
goto v_resetjp_3438_;
}
v_resetjp_3438_:
{
lean_object* v___x_3442_; 
if (v_isShared_3440_ == 0)
{
v___x_3442_ = v___x_3439_;
goto v_reusejp_3441_;
}
else
{
lean_object* v_reuseFailAlloc_3446_; 
v_reuseFailAlloc_3446_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3446_, 0, v_a_3437_);
v___x_3442_ = v_reuseFailAlloc_3446_;
goto v_reusejp_3441_;
}
v_reusejp_3441_:
{
lean_object* v___x_3444_; 
if (v_isShared_3425_ == 0)
{
lean_ctor_set(v___x_3424_, 0, v___x_3442_);
v___x_3444_ = v___x_3424_;
goto v_reusejp_3443_;
}
else
{
lean_object* v_reuseFailAlloc_3445_; 
v_reuseFailAlloc_3445_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3445_, 0, v___x_3442_);
v___x_3444_ = v_reuseFailAlloc_3445_;
goto v_reusejp_3443_;
}
v_reusejp_3443_:
{
return v___x_3444_;
}
}
}
}
}
}
else
{
lean_object* v_a_3449_; lean_object* v___x_3451_; uint8_t v_isShared_3452_; uint8_t v_isSharedCheck_3456_; 
v_a_3449_ = lean_ctor_get(v___x_3421_, 0);
v_isSharedCheck_3456_ = !lean_is_exclusive(v___x_3421_);
if (v_isSharedCheck_3456_ == 0)
{
v___x_3451_ = v___x_3421_;
v_isShared_3452_ = v_isSharedCheck_3456_;
goto v_resetjp_3450_;
}
else
{
lean_inc(v_a_3449_);
lean_dec(v___x_3421_);
v___x_3451_ = lean_box(0);
v_isShared_3452_ = v_isSharedCheck_3456_;
goto v_resetjp_3450_;
}
v_resetjp_3450_:
{
lean_object* v___x_3454_; 
if (v_isShared_3452_ == 0)
{
v___x_3454_ = v___x_3451_;
goto v_reusejp_3453_;
}
else
{
lean_object* v_reuseFailAlloc_3455_; 
v_reuseFailAlloc_3455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3455_, 0, v_a_3449_);
v___x_3454_ = v_reuseFailAlloc_3455_;
goto v_reusejp_3453_;
}
v_reusejp_3453_:
{
return v___x_3454_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3___redArg___lam__0___boxed(lean_object* v_f_3457_, lean_object* v_s_3458_, lean_object* v_a_3459_, lean_object* v_b_3460_, lean_object* v___y_3461_, lean_object* v___y_3462_, lean_object* v___y_3463_, lean_object* v___y_3464_, lean_object* v___y_3465_){
_start:
{
lean_object* v_res_3466_; 
v_res_3466_ = l_Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3___redArg___lam__0(v_f_3457_, v_s_3458_, v_a_3459_, v_b_3460_, v___y_3461_, v___y_3462_, v___y_3463_, v___y_3464_);
lean_dec(v___y_3464_);
lean_dec_ref(v___y_3463_);
lean_dec(v___y_3462_);
lean_dec_ref(v___y_3461_);
return v_res_3466_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3___redArg(lean_object* v_map_3467_, lean_object* v_init_3468_, lean_object* v_f_3469_, lean_object* v___y_3470_, lean_object* v___y_3471_, lean_object* v___y_3472_, lean_object* v___y_3473_){
_start:
{
lean_object* v___f_3475_; lean_object* v___x_3476_; 
v___f_3475_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3___redArg___lam__0___boxed), 9, 1);
lean_closure_set(v___f_3475_, 0, v_f_3469_);
lean_inc_ref(v_map_3467_);
v___x_3476_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4___redArg(v___f_3475_, v_map_3467_, v_init_3468_, v___y_3470_, v___y_3471_, v___y_3472_, v___y_3473_);
if (lean_obj_tag(v___x_3476_) == 0)
{
lean_object* v_a_3477_; lean_object* v___x_3479_; uint8_t v_isShared_3480_; uint8_t v_isSharedCheck_3485_; 
v_a_3477_ = lean_ctor_get(v___x_3476_, 0);
v_isSharedCheck_3485_ = !lean_is_exclusive(v___x_3476_);
if (v_isSharedCheck_3485_ == 0)
{
v___x_3479_ = v___x_3476_;
v_isShared_3480_ = v_isSharedCheck_3485_;
goto v_resetjp_3478_;
}
else
{
lean_inc(v_a_3477_);
lean_dec(v___x_3476_);
v___x_3479_ = lean_box(0);
v_isShared_3480_ = v_isSharedCheck_3485_;
goto v_resetjp_3478_;
}
v_resetjp_3478_:
{
lean_object* v_a_3481_; lean_object* v___x_3483_; 
v_a_3481_ = lean_ctor_get(v_a_3477_, 0);
lean_inc(v_a_3481_);
lean_dec(v_a_3477_);
if (v_isShared_3480_ == 0)
{
lean_ctor_set(v___x_3479_, 0, v_a_3481_);
v___x_3483_ = v___x_3479_;
goto v_reusejp_3482_;
}
else
{
lean_object* v_reuseFailAlloc_3484_; 
v_reuseFailAlloc_3484_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3484_, 0, v_a_3481_);
v___x_3483_ = v_reuseFailAlloc_3484_;
goto v_reusejp_3482_;
}
v_reusejp_3482_:
{
return v___x_3483_;
}
}
}
else
{
lean_object* v_a_3486_; lean_object* v___x_3488_; uint8_t v_isShared_3489_; uint8_t v_isSharedCheck_3493_; 
v_a_3486_ = lean_ctor_get(v___x_3476_, 0);
v_isSharedCheck_3493_ = !lean_is_exclusive(v___x_3476_);
if (v_isSharedCheck_3493_ == 0)
{
v___x_3488_ = v___x_3476_;
v_isShared_3489_ = v_isSharedCheck_3493_;
goto v_resetjp_3487_;
}
else
{
lean_inc(v_a_3486_);
lean_dec(v___x_3476_);
v___x_3488_ = lean_box(0);
v_isShared_3489_ = v_isSharedCheck_3493_;
goto v_resetjp_3487_;
}
v_resetjp_3487_:
{
lean_object* v___x_3491_; 
if (v_isShared_3489_ == 0)
{
v___x_3491_ = v___x_3488_;
goto v_reusejp_3490_;
}
else
{
lean_object* v_reuseFailAlloc_3492_; 
v_reuseFailAlloc_3492_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3492_, 0, v_a_3486_);
v___x_3491_ = v_reuseFailAlloc_3492_;
goto v_reusejp_3490_;
}
v_reusejp_3490_:
{
return v___x_3491_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3___redArg___boxed(lean_object* v_map_3494_, lean_object* v_init_3495_, lean_object* v_f_3496_, lean_object* v___y_3497_, lean_object* v___y_3498_, lean_object* v___y_3499_, lean_object* v___y_3500_, lean_object* v___y_3501_){
_start:
{
lean_object* v_res_3502_; 
v_res_3502_ = l_Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3___redArg(v_map_3494_, v_init_3495_, v_f_3496_, v___y_3497_, v___y_3498_, v___y_3499_, v___y_3500_);
lean_dec(v___y_3500_);
lean_dec_ref(v___y_3499_);
lean_dec(v___y_3498_);
lean_dec_ref(v___y_3497_);
lean_dec_ref(v_map_3494_);
return v_res_3502_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__2___redArg(lean_object* v___y_3503_){
_start:
{
lean_object* v___x_3505_; lean_object* v___x_3506_; lean_object* v___x_3507_; lean_object* v___x_3508_; lean_object* v_env_3509_; lean_object* v___x_3510_; lean_object* v_ext_3511_; lean_object* v_toEnvExtension_3512_; lean_object* v_asyncMode_3513_; lean_object* v___x_3514_; lean_object* v_categories_3515_; lean_object* v___x_3516_; lean_object* v___x_3517_; 
v___x_3505_ = lean_box(1);
v___x_3506_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__2, &l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__2_once, _init_l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__2);
v___x_3507_ = l_Lean_Parser_ParserExtension_instInhabitedState_default;
v___x_3508_ = lean_st_ref_get(v___y_3503_);
v_env_3509_ = lean_ctor_get(v___x_3508_, 0);
lean_inc_ref_n(v_env_3509_, 2);
lean_dec(v___x_3508_);
v___x_3510_ = l_Lean_Parser_parserExtension;
v_ext_3511_ = lean_ctor_get(v___x_3510_, 1);
v_toEnvExtension_3512_ = lean_ctor_get(v_ext_3511_, 0);
v_asyncMode_3513_ = lean_ctor_get(v_toEnvExtension_3512_, 2);
v___x_3514_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_3507_, v___x_3510_, v_env_3509_, v_asyncMode_3513_);
v_categories_3515_ = lean_ctor_get(v___x_3514_, 2);
lean_inc_ref(v_categories_3515_);
lean_dec(v___x_3514_);
v___x_3516_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__2___closed__1));
v___x_3517_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4___redArg(v_categories_3515_, v___x_3516_);
lean_dec_ref(v_categories_3515_);
if (lean_obj_tag(v___x_3517_) == 1)
{
lean_object* v_val_3518_; lean_object* v___x_3520_; uint8_t v_isShared_3521_; uint8_t v_isSharedCheck_3549_; 
v_val_3518_ = lean_ctor_get(v___x_3517_, 0);
v_isSharedCheck_3549_ = !lean_is_exclusive(v___x_3517_);
if (v_isSharedCheck_3549_ == 0)
{
v___x_3520_ = v___x_3517_;
v_isShared_3521_ = v_isSharedCheck_3549_;
goto v_resetjp_3519_;
}
else
{
lean_inc(v_val_3518_);
lean_dec(v___x_3517_);
v___x_3520_ = lean_box(0);
v_isShared_3521_ = v_isSharedCheck_3549_;
goto v_resetjp_3519_;
}
v_resetjp_3519_:
{
lean_object* v___y_3523_; lean_object* v___x_3532_; lean_object* v_toEnvExtension_3533_; lean_object* v_exportEntriesFn_3534_; lean_object* v_asyncMode_3535_; lean_object* v___x_3536_; lean_object* v___x_3537_; lean_object* v_importedEntries_3538_; lean_object* v___x_3539_; lean_object* v___x_3540_; lean_object* v_exported_3541_; lean_object* v___x_3542_; lean_object* v___x_3543_; lean_object* v___x_3544_; uint8_t v___x_3545_; 
v___x_3532_ = l_Lean_Parser_Tactic_Doc_tacticNameExt;
v_toEnvExtension_3533_ = lean_ctor_get(v___x_3532_, 0);
v_exportEntriesFn_3534_ = lean_ctor_get(v___x_3532_, 4);
v_asyncMode_3535_ = lean_ctor_get(v_toEnvExtension_3533_, 2);
v___x_3536_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__7, &l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__7_once, _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__7);
lean_inc_ref_n(v_env_3509_, 2);
v___x_3537_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_3506_, v_toEnvExtension_3533_, v_env_3509_, v_asyncMode_3535_, v___x_3536_);
v_importedEntries_3538_ = lean_ctor_get(v___x_3537_, 0);
lean_inc_ref(v_importedEntries_3538_);
lean_dec(v___x_3537_);
v___x_3539_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_3505_, v___x_3532_, v_env_3509_, v_asyncMode_3535_, v___x_3536_);
lean_inc_ref(v_exportEntriesFn_3534_);
v___x_3540_ = lean_apply_2(v_exportEntriesFn_3534_, v_env_3509_, v___x_3539_);
v_exported_3541_ = lean_ctor_get(v___x_3540_, 0);
lean_inc(v_exported_3541_);
lean_dec_ref(v___x_3540_);
v___x_3542_ = lean_array_push(v_importedEntries_3538_, v_exported_3541_);
v___x_3543_ = lean_unsigned_to_nat(0u);
v___x_3544_ = lean_array_get_size(v___x_3542_);
v___x_3545_ = lean_nat_dec_lt(v___x_3543_, v___x_3544_);
if (v___x_3545_ == 0)
{
lean_dec_ref(v___x_3542_);
v___y_3523_ = v___x_3505_;
goto v___jp_3522_;
}
else
{
size_t v___x_3546_; size_t v___x_3547_; lean_object* v___x_3548_; 
v___x_3546_ = ((size_t)0ULL);
v___x_3547_ = lean_usize_of_nat(v___x_3544_);
v___x_3548_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__5(v___x_3542_, v___x_3546_, v___x_3547_, v___x_3505_);
lean_dec_ref(v___x_3542_);
v___y_3523_ = v___x_3548_;
goto v___jp_3522_;
}
v___jp_3522_:
{
lean_object* v_tables_3524_; lean_object* v_leadingTable_3525_; lean_object* v_trailingTable_3526_; lean_object* v_firstTokens_3527_; lean_object* v_firstTokens_3528_; lean_object* v___x_3530_; 
v_tables_3524_ = lean_ctor_get(v_val_3518_, 2);
v_leadingTable_3525_ = lean_ctor_get(v_tables_3524_, 0);
v_trailingTable_3526_ = lean_ctor_get(v_tables_3524_, 2);
lean_inc(v_trailingTable_3526_);
lean_inc(v_leadingTable_3525_);
lean_inc(v_val_3518_);
v_firstTokens_3527_ = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens(v_val_3518_, v_leadingTable_3525_, v___y_3523_);
v_firstTokens_3528_ = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens(v_val_3518_, v_trailingTable_3526_, v_firstTokens_3527_);
if (v_isShared_3521_ == 0)
{
lean_ctor_set_tag(v___x_3520_, 0);
lean_ctor_set(v___x_3520_, 0, v_firstTokens_3528_);
v___x_3530_ = v___x_3520_;
goto v_reusejp_3529_;
}
else
{
lean_object* v_reuseFailAlloc_3531_; 
v_reuseFailAlloc_3531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3531_, 0, v_firstTokens_3528_);
v___x_3530_ = v_reuseFailAlloc_3531_;
goto v_reusejp_3529_;
}
v_reusejp_3529_:
{
return v___x_3530_;
}
}
}
}
else
{
lean_object* v___x_3550_; 
lean_dec(v___x_3517_);
lean_dec_ref(v_env_3509_);
v___x_3550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3550_, 0, v___x_3505_);
return v___x_3550_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__2___redArg___boxed(lean_object* v___y_3551_, lean_object* v___y_3552_){
_start:
{
lean_object* v_res_3553_; 
v_res_3553_ = l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__2___redArg(v___y_3551_);
lean_dec(v___y_3551_);
return v_res_3553_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_allTacticDocs(uint8_t v_includeUnnamed_3556_, lean_object* v_a_3557_, lean_object* v_a_3558_, lean_object* v_a_3559_, lean_object* v_a_3560_){
_start:
{
lean_object* v___x_3562_; lean_object* v___x_3563_; lean_object* v___x_3564_; lean_object* v___x_3565_; lean_object* v_env_3566_; lean_object* v___x_3567_; lean_object* v_toEnvExtension_3568_; lean_object* v_exportEntriesFn_3569_; lean_object* v_asyncMode_3570_; lean_object* v___x_3571_; lean_object* v___x_3572_; lean_object* v_importedEntries_3573_; lean_object* v___x_3574_; lean_object* v___x_3575_; lean_object* v_exported_3576_; lean_object* v___x_3577_; size_t v_sz_3578_; size_t v___x_3579_; lean_object* v___x_3580_; 
v___x_3562_ = lean_box(1);
v___x_3563_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__2, &l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__2_once, _init_l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__2);
v___x_3564_ = l_Lean_Parser_ParserExtension_instInhabitedState_default;
v___x_3565_ = lean_st_ref_get(v_a_3560_);
v_env_3566_ = lean_ctor_get(v___x_3565_, 0);
lean_inc_ref_n(v_env_3566_, 4);
lean_dec(v___x_3565_);
v___x_3567_ = l_Lean_Parser_Tactic_Doc_tacticTagExt;
v_toEnvExtension_3568_ = lean_ctor_get(v___x_3567_, 0);
v_exportEntriesFn_3569_ = lean_ctor_get(v___x_3567_, 4);
v_asyncMode_3570_ = lean_ctor_get(v_toEnvExtension_3568_, 2);
v___x_3571_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__7, &l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__7_once, _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__7);
v___x_3572_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_3563_, v_toEnvExtension_3568_, v_env_3566_, v_asyncMode_3570_, v___x_3571_);
v_importedEntries_3573_ = lean_ctor_get(v___x_3572_, 0);
lean_inc_ref(v_importedEntries_3573_);
lean_dec(v___x_3572_);
v___x_3574_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_3562_, v___x_3567_, v_env_3566_, v_asyncMode_3570_, v___x_3571_);
lean_inc_ref(v_exportEntriesFn_3569_);
v___x_3575_ = lean_apply_2(v_exportEntriesFn_3569_, v_env_3566_, v___x_3574_);
v_exported_3576_ = lean_ctor_get(v___x_3575_, 0);
lean_inc(v_exported_3576_);
lean_dec_ref(v___x_3575_);
v___x_3577_ = lean_array_push(v_importedEntries_3573_, v_exported_3576_);
v_sz_3578_ = lean_array_size(v___x_3577_);
v___x_3579_ = ((size_t)0ULL);
v___x_3580_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__1(v___x_3577_, v_sz_3578_, v___x_3579_, v___x_3562_, v_a_3557_, v_a_3558_, v_a_3559_, v_a_3560_);
lean_dec_ref(v___x_3577_);
if (lean_obj_tag(v___x_3580_) == 0)
{
lean_object* v_a_3581_; lean_object* v___x_3583_; uint8_t v_isShared_3584_; uint8_t v_isSharedCheck_3604_; 
v_a_3581_ = lean_ctor_get(v___x_3580_, 0);
v_isSharedCheck_3604_ = !lean_is_exclusive(v___x_3580_);
if (v_isSharedCheck_3604_ == 0)
{
v___x_3583_ = v___x_3580_;
v_isShared_3584_ = v_isSharedCheck_3604_;
goto v_resetjp_3582_;
}
else
{
lean_inc(v_a_3581_);
lean_dec(v___x_3580_);
v___x_3583_ = lean_box(0);
v_isShared_3584_ = v_isSharedCheck_3604_;
goto v_resetjp_3582_;
}
v_resetjp_3582_:
{
lean_object* v___x_3585_; lean_object* v_ext_3586_; lean_object* v_toEnvExtension_3587_; lean_object* v_asyncMode_3588_; lean_object* v___x_3589_; lean_object* v_categories_3590_; lean_object* v___x_3591_; lean_object* v___x_3592_; lean_object* v___x_3593_; 
v___x_3585_ = l_Lean_Parser_parserExtension;
v_ext_3586_ = lean_ctor_get(v___x_3585_, 1);
v_toEnvExtension_3587_ = lean_ctor_get(v_ext_3586_, 0);
v_asyncMode_3588_ = lean_ctor_get(v_toEnvExtension_3587_, 2);
lean_inc_ref(v_env_3566_);
v___x_3589_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_3564_, v___x_3585_, v_env_3566_, v_asyncMode_3588_);
v_categories_3590_ = lean_ctor_get(v___x_3589_, 2);
lean_inc_ref(v_categories_3590_);
lean_dec(v___x_3589_);
v___x_3591_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_allTacticDocs___closed__0));
v___x_3592_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__2___closed__1));
v___x_3593_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4___redArg(v_categories_3590_, v___x_3592_);
lean_dec_ref(v_categories_3590_);
if (lean_obj_tag(v___x_3593_) == 1)
{
lean_object* v_val_3594_; lean_object* v___x_3595_; lean_object* v_a_3596_; lean_object* v_kinds_3597_; lean_object* v___x_3598_; lean_object* v___f_3599_; lean_object* v___x_3600_; 
lean_del_object(v___x_3583_);
v_val_3594_ = lean_ctor_get(v___x_3593_, 0);
lean_inc(v_val_3594_);
lean_dec_ref_known(v___x_3593_, 1);
v___x_3595_ = l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__2___redArg(v_a_3560_);
v_a_3596_ = lean_ctor_get(v___x_3595_, 0);
lean_inc(v_a_3596_);
lean_dec_ref(v___x_3595_);
v_kinds_3597_ = lean_ctor_get(v_val_3594_, 1);
lean_inc_ref(v_kinds_3597_);
lean_dec(v_val_3594_);
v___x_3598_ = lean_box(v_includeUnnamed_3556_);
v___f_3599_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Doc_allTacticDocs___lam__0___boxed), 12, 5);
lean_closure_set(v___f_3599_, 0, v_env_3566_);
lean_closure_set(v___f_3599_, 1, v___x_3571_);
lean_closure_set(v___f_3599_, 2, v_a_3581_);
lean_closure_set(v___f_3599_, 3, v_a_3596_);
lean_closure_set(v___f_3599_, 4, v___x_3598_);
v___x_3600_ = l_Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3___redArg(v_kinds_3597_, v___x_3591_, v___f_3599_, v_a_3557_, v_a_3558_, v_a_3559_, v_a_3560_);
lean_dec_ref(v_kinds_3597_);
return v___x_3600_;
}
else
{
lean_object* v___x_3602_; 
lean_dec(v___x_3593_);
lean_dec(v_a_3581_);
lean_dec_ref(v_env_3566_);
if (v_isShared_3584_ == 0)
{
lean_ctor_set(v___x_3583_, 0, v___x_3591_);
v___x_3602_ = v___x_3583_;
goto v_reusejp_3601_;
}
else
{
lean_object* v_reuseFailAlloc_3603_; 
v_reuseFailAlloc_3603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3603_, 0, v___x_3591_);
v___x_3602_ = v_reuseFailAlloc_3603_;
goto v_reusejp_3601_;
}
v_reusejp_3601_:
{
return v___x_3602_;
}
}
}
}
else
{
lean_object* v_a_3605_; lean_object* v___x_3607_; uint8_t v_isShared_3608_; uint8_t v_isSharedCheck_3612_; 
lean_dec_ref(v_env_3566_);
v_a_3605_ = lean_ctor_get(v___x_3580_, 0);
v_isSharedCheck_3612_ = !lean_is_exclusive(v___x_3580_);
if (v_isSharedCheck_3612_ == 0)
{
v___x_3607_ = v___x_3580_;
v_isShared_3608_ = v_isSharedCheck_3612_;
goto v_resetjp_3606_;
}
else
{
lean_inc(v_a_3605_);
lean_dec(v___x_3580_);
v___x_3607_ = lean_box(0);
v_isShared_3608_ = v_isSharedCheck_3612_;
goto v_resetjp_3606_;
}
v_resetjp_3606_:
{
lean_object* v___x_3610_; 
if (v_isShared_3608_ == 0)
{
v___x_3610_ = v___x_3607_;
goto v_reusejp_3609_;
}
else
{
lean_object* v_reuseFailAlloc_3611_; 
v_reuseFailAlloc_3611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3611_, 0, v_a_3605_);
v___x_3610_ = v_reuseFailAlloc_3611_;
goto v_reusejp_3609_;
}
v_reusejp_3609_:
{
return v___x_3610_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_allTacticDocs___boxed(lean_object* v_includeUnnamed_3613_, lean_object* v_a_3614_, lean_object* v_a_3615_, lean_object* v_a_3616_, lean_object* v_a_3617_, lean_object* v_a_3618_){
_start:
{
uint8_t v_includeUnnamed_boxed_3619_; lean_object* v_res_3620_; 
v_includeUnnamed_boxed_3619_ = lean_unbox(v_includeUnnamed_3613_);
v_res_3620_ = l_Lean_Elab_Tactic_Doc_allTacticDocs(v_includeUnnamed_boxed_3619_, v_a_3614_, v_a_3615_, v_a_3616_, v_a_3617_);
lean_dec(v_a_3617_);
lean_dec_ref(v_a_3616_);
lean_dec(v_a_3615_);
lean_dec_ref(v_a_3614_);
return v_res_3620_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__0(lean_object* v_as_3621_, size_t v_sz_3622_, size_t v_i_3623_, lean_object* v_b_3624_, lean_object* v___y_3625_, lean_object* v___y_3626_, lean_object* v___y_3627_, lean_object* v___y_3628_){
_start:
{
lean_object* v___x_3630_; 
v___x_3630_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__0___redArg(v_as_3621_, v_sz_3622_, v_i_3623_, v_b_3624_);
return v___x_3630_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__0___boxed(lean_object* v_as_3631_, lean_object* v_sz_3632_, lean_object* v_i_3633_, lean_object* v_b_3634_, lean_object* v___y_3635_, lean_object* v___y_3636_, lean_object* v___y_3637_, lean_object* v___y_3638_, lean_object* v___y_3639_){
_start:
{
size_t v_sz_boxed_3640_; size_t v_i_boxed_3641_; lean_object* v_res_3642_; 
v_sz_boxed_3640_ = lean_unbox_usize(v_sz_3632_);
lean_dec(v_sz_3632_);
v_i_boxed_3641_ = lean_unbox_usize(v_i_3633_);
lean_dec(v_i_3633_);
v_res_3642_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__0(v_as_3631_, v_sz_boxed_3640_, v_i_boxed_3641_, v_b_3634_, v___y_3635_, v___y_3636_, v___y_3637_, v___y_3638_);
lean_dec(v___y_3638_);
lean_dec_ref(v___y_3637_);
lean_dec(v___y_3636_);
lean_dec_ref(v___y_3635_);
lean_dec_ref(v_as_3631_);
return v_res_3642_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__2(lean_object* v___y_3643_, lean_object* v___y_3644_, lean_object* v___y_3645_, lean_object* v___y_3646_){
_start:
{
lean_object* v___x_3648_; 
v___x_3648_ = l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__2___redArg(v___y_3646_);
return v___x_3648_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__2___boxed(lean_object* v___y_3649_, lean_object* v___y_3650_, lean_object* v___y_3651_, lean_object* v___y_3652_, lean_object* v___y_3653_){
_start:
{
lean_object* v_res_3654_; 
v_res_3654_ = l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__2(v___y_3649_, v___y_3650_, v___y_3651_, v___y_3652_);
lean_dec(v___y_3652_);
lean_dec_ref(v___y_3651_);
lean_dec(v___y_3650_);
lean_dec_ref(v___y_3649_);
return v_res_3654_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3(lean_object* v_00_u03c3_3655_, lean_object* v_00_u03b2_3656_, lean_object* v_map_3657_, lean_object* v_init_3658_, lean_object* v_f_3659_, lean_object* v___y_3660_, lean_object* v___y_3661_, lean_object* v___y_3662_, lean_object* v___y_3663_){
_start:
{
lean_object* v___x_3665_; 
v___x_3665_ = l_Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3___redArg(v_map_3657_, v_init_3658_, v_f_3659_, v___y_3660_, v___y_3661_, v___y_3662_, v___y_3663_);
return v___x_3665_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3___boxed(lean_object* v_00_u03c3_3666_, lean_object* v_00_u03b2_3667_, lean_object* v_map_3668_, lean_object* v_init_3669_, lean_object* v_f_3670_, lean_object* v___y_3671_, lean_object* v___y_3672_, lean_object* v___y_3673_, lean_object* v___y_3674_, lean_object* v___y_3675_){
_start:
{
lean_object* v_res_3676_; 
v_res_3676_ = l_Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3(v_00_u03c3_3666_, v_00_u03b2_3667_, v_map_3668_, v_init_3669_, v_f_3670_, v___y_3671_, v___y_3672_, v___y_3673_, v___y_3674_);
lean_dec(v___y_3674_);
lean_dec_ref(v___y_3673_);
lean_dec(v___y_3672_);
lean_dec_ref(v___y_3671_);
lean_dec_ref(v_map_3668_);
return v_res_3676_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3___redArg(lean_object* v_map_3677_, lean_object* v_f_3678_, lean_object* v_init_3679_, lean_object* v___y_3680_, lean_object* v___y_3681_, lean_object* v___y_3682_, lean_object* v___y_3683_){
_start:
{
lean_object* v___x_3685_; 
v___x_3685_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4___redArg(v_f_3678_, v_map_3677_, v_init_3679_, v___y_3680_, v___y_3681_, v___y_3682_, v___y_3683_);
return v___x_3685_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3___redArg___boxed(lean_object* v_map_3686_, lean_object* v_f_3687_, lean_object* v_init_3688_, lean_object* v___y_3689_, lean_object* v___y_3690_, lean_object* v___y_3691_, lean_object* v___y_3692_, lean_object* v___y_3693_){
_start:
{
lean_object* v_res_3694_; 
v_res_3694_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3___redArg(v_map_3686_, v_f_3687_, v_init_3688_, v___y_3689_, v___y_3690_, v___y_3691_, v___y_3692_);
lean_dec(v___y_3692_);
lean_dec_ref(v___y_3691_);
lean_dec(v___y_3690_);
lean_dec_ref(v___y_3689_);
return v_res_3694_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3(lean_object* v_00_u03c3_3695_, lean_object* v_00_u03c3_3696_, lean_object* v_00_u03b2_3697_, lean_object* v_map_3698_, lean_object* v_f_3699_, lean_object* v_init_3700_, lean_object* v___y_3701_, lean_object* v___y_3702_, lean_object* v___y_3703_, lean_object* v___y_3704_){
_start:
{
lean_object* v___x_3706_; 
v___x_3706_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4___redArg(v_f_3699_, v_map_3698_, v_init_3700_, v___y_3701_, v___y_3702_, v___y_3703_, v___y_3704_);
return v___x_3706_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3___boxed(lean_object* v_00_u03c3_3707_, lean_object* v_00_u03c3_3708_, lean_object* v_00_u03b2_3709_, lean_object* v_map_3710_, lean_object* v_f_3711_, lean_object* v_init_3712_, lean_object* v___y_3713_, lean_object* v___y_3714_, lean_object* v___y_3715_, lean_object* v___y_3716_, lean_object* v___y_3717_){
_start:
{
lean_object* v_res_3718_; 
v_res_3718_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3(v_00_u03c3_3707_, v_00_u03c3_3708_, v_00_u03b2_3709_, v_map_3710_, v_f_3711_, v_init_3712_, v___y_3713_, v___y_3714_, v___y_3715_, v___y_3716_);
lean_dec(v___y_3716_);
lean_dec_ref(v___y_3715_);
lean_dec(v___y_3714_);
lean_dec_ref(v___y_3713_);
return v_res_3718_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4(lean_object* v_00_u03c3_3719_, lean_object* v_00_u03c3_3720_, lean_object* v_00_u03b1_3721_, lean_object* v_00_u03b2_3722_, lean_object* v_f_3723_, lean_object* v_x_3724_, lean_object* v_x_3725_, lean_object* v___y_3726_, lean_object* v___y_3727_, lean_object* v___y_3728_, lean_object* v___y_3729_){
_start:
{
lean_object* v___x_3731_; 
v___x_3731_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4___redArg(v_f_3723_, v_x_3724_, v_x_3725_, v___y_3726_, v___y_3727_, v___y_3728_, v___y_3729_);
return v___x_3731_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4___boxed(lean_object* v_00_u03c3_3732_, lean_object* v_00_u03c3_3733_, lean_object* v_00_u03b1_3734_, lean_object* v_00_u03b2_3735_, lean_object* v_f_3736_, lean_object* v_x_3737_, lean_object* v_x_3738_, lean_object* v___y_3739_, lean_object* v___y_3740_, lean_object* v___y_3741_, lean_object* v___y_3742_, lean_object* v___y_3743_){
_start:
{
lean_object* v_res_3744_; 
v_res_3744_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4(v_00_u03c3_3732_, v_00_u03c3_3733_, v_00_u03b1_3734_, v_00_u03b2_3735_, v_f_3736_, v_x_3737_, v_x_3738_, v___y_3739_, v___y_3740_, v___y_3741_, v___y_3742_);
lean_dec(v___y_3742_);
lean_dec_ref(v___y_3741_);
lean_dec(v___y_3740_);
lean_dec_ref(v___y_3739_);
return v_res_3744_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__5(lean_object* v_00_u03b1_3745_, lean_object* v_00_u03b2_3746_, lean_object* v_00_u03c3_3747_, lean_object* v_00_u03c3_3748_, lean_object* v_f_3749_, lean_object* v_as_3750_, size_t v_i_3751_, size_t v_stop_3752_, lean_object* v_b_3753_, lean_object* v___y_3754_, lean_object* v___y_3755_, lean_object* v___y_3756_, lean_object* v___y_3757_){
_start:
{
lean_object* v___x_3759_; 
v___x_3759_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__5___redArg(v_f_3749_, v_as_3750_, v_i_3751_, v_stop_3752_, v_b_3753_, v___y_3754_, v___y_3755_, v___y_3756_, v___y_3757_);
return v___x_3759_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__5___boxed(lean_object* v_00_u03b1_3760_, lean_object* v_00_u03b2_3761_, lean_object* v_00_u03c3_3762_, lean_object* v_00_u03c3_3763_, lean_object* v_f_3764_, lean_object* v_as_3765_, lean_object* v_i_3766_, lean_object* v_stop_3767_, lean_object* v_b_3768_, lean_object* v___y_3769_, lean_object* v___y_3770_, lean_object* v___y_3771_, lean_object* v___y_3772_, lean_object* v___y_3773_){
_start:
{
size_t v_i_boxed_3774_; size_t v_stop_boxed_3775_; lean_object* v_res_3776_; 
v_i_boxed_3774_ = lean_unbox_usize(v_i_3766_);
lean_dec(v_i_3766_);
v_stop_boxed_3775_ = lean_unbox_usize(v_stop_3767_);
lean_dec(v_stop_3767_);
v_res_3776_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__5(v_00_u03b1_3760_, v_00_u03b2_3761_, v_00_u03c3_3762_, v_00_u03c3_3763_, v_f_3764_, v_as_3765_, v_i_boxed_3774_, v_stop_boxed_3775_, v_b_3768_, v___y_3769_, v___y_3770_, v___y_3771_, v___y_3772_);
lean_dec(v___y_3772_);
lean_dec_ref(v___y_3771_);
lean_dec(v___y_3770_);
lean_dec_ref(v___y_3769_);
lean_dec_ref(v_as_3765_);
return v_res_3776_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__6(lean_object* v_00_u03c3_3777_, lean_object* v_00_u03c3_3778_, lean_object* v_00_u03b1_3779_, lean_object* v_00_u03b2_3780_, lean_object* v_f_3781_, lean_object* v_keys_3782_, lean_object* v_vals_3783_, lean_object* v_heq_3784_, lean_object* v_i_3785_, lean_object* v_acc_3786_, lean_object* v___y_3787_, lean_object* v___y_3788_, lean_object* v___y_3789_, lean_object* v___y_3790_){
_start:
{
lean_object* v___x_3792_; 
v___x_3792_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__6___redArg(v_f_3781_, v_keys_3782_, v_vals_3783_, v_i_3785_, v_acc_3786_, v___y_3787_, v___y_3788_, v___y_3789_, v___y_3790_);
return v___x_3792_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__6___boxed(lean_object* v_00_u03c3_3793_, lean_object* v_00_u03c3_3794_, lean_object* v_00_u03b1_3795_, lean_object* v_00_u03b2_3796_, lean_object* v_f_3797_, lean_object* v_keys_3798_, lean_object* v_vals_3799_, lean_object* v_heq_3800_, lean_object* v_i_3801_, lean_object* v_acc_3802_, lean_object* v___y_3803_, lean_object* v___y_3804_, lean_object* v___y_3805_, lean_object* v___y_3806_, lean_object* v___y_3807_){
_start:
{
lean_object* v_res_3808_; 
v_res_3808_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__6(v_00_u03c3_3793_, v_00_u03c3_3794_, v_00_u03b1_3795_, v_00_u03b2_3796_, v_f_3797_, v_keys_3798_, v_vals_3799_, v_heq_3800_, v_i_3801_, v_acc_3802_, v___y_3803_, v___y_3804_, v___y_3805_, v___y_3806_);
lean_dec(v___y_3806_);
lean_dec_ref(v___y_3805_);
lean_dec(v___y_3804_);
lean_dec_ref(v___y_3803_);
lean_dec_ref(v_vals_3799_);
lean_dec_ref(v_keys_3798_);
return v_res_3808_;
}
}
lean_object* runtime_initialize_Lean_DocString(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Command(uint8_t builtin);
lean_object* runtime_initialize_Lean_Parser_Tactic_Doc(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Doc(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_DocString(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser_Tactic_Doc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_docString__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Doc(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_DocString(uint8_t builtin);
lean_object* initialize_Lean_Elab_Command(uint8_t builtin);
lean_object* initialize_Lean_Parser_Tactic_Doc(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Doc(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_DocString(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Tactic_Doc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Doc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Doc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Doc(builtin);
}
#ifdef __cplusplus
}
#endif

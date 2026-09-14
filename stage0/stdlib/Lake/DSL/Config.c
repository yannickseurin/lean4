// Lean compiler output
// Module: Lake.DSL.Config
// Imports: public import Lean.Elab.Term import Lake.DSL.Extensions import Lake.DSL.Syntax import Lake.Util.Name
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
lean_object* l_Lean_Elab_Term_withPushMacroExpansionStack___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedName;
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lake_DSL_packageDeclName;
lean_object* l_Lean_mkIdent(lean_object*);
extern lean_object* l_Lean_Elab_Term_termElabAttribute;
lean_object* l_Lean_Elab_Term_tryPostponeIfNoneOrMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTerm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
extern lean_object* l_Lake_optsExt;
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_mkStrLit(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkCIdentFrom(lean_object*, lean_object*, uint8_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_mkApp(lean_object*, lean_object*);
lean_object* l___private_Init_Meta_Defs_0__Lean_getEscapedNameParts_x3f(lean_object*, lean_object*);
lean_object* l_Lean_quoteNameMk(lean_object*);
lean_object* lean_string_intercalate(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_mkNameLit(lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lake_dirExt;
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_Syntax_mkNumLit(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_mkCApp(lean_object*, lean_object*);
extern lean_object* l_Lake_nameExt;
lean_object* l_Lake_Name_quoteFrom(lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_stringToMessageData(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__3_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__3_spec__5___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__3_spec__6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__3_spec__6___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__3_spec__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__3_spec__6___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__3_spec__6___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__3_spec__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__3_spec__6___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__3_spec__6___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__3_spec__6___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__3_spec__6___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__3_spec__6___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__3_spec__6(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__3___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__3___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__3___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__3___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__3___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__3___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__3___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0_spec__1_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0_spec__1_spec__4___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0_spec__1_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0_spec__1_spec__4___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0_spec__1_spec__4___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__0 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__0_value;
static const lean_string_object l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Name"};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__1 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__1_value;
static const lean_string_object l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "num"};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__2 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__2_value;
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__3_value_aux_0),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__1_value),LEAN_SCALAR_PTR_LITERAL(251, 222, 196, 1, 17, 104, 171, 184)}};
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__3_value_aux_1),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__2_value),LEAN_SCALAR_PTR_LITERAL(35, 98, 18, 79, 25, 208, 83, 100)}};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__3 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__3_value;
static lean_once_cell_t l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__4;
static lean_once_cell_t l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__5;
static const lean_string_object l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "origName"};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__6 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__6_value;
static lean_once_cell_t l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__7;
static lean_once_cell_t l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__8;
static const lean_string_object l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 59, .m_data = "`__name__` can only be used after the `package` declaration"};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__9 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__9_value;
static lean_once_cell_t l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__10;
LEAN_EXPORT lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lake"};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__0 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__0_value;
static const lean_string_object l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "DSL"};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__1 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__1_value;
static const lean_string_object l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "nameConst"};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__2 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__2_value;
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__3_value_aux_0),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(176, 13, 75, 143, 104, 166, 231, 81)}};
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__3_value_aux_1),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(97, 173, 245, 76, 54, 29, 98, 170)}};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__3 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__3_value;
static const lean_string_object l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__4 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__4_value;
static lean_once_cell_t l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__5;
static lean_once_cell_t l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__6;
static lean_once_cell_t l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__7;
static const lean_string_object l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Config"};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__8 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__8_value;
static lean_once_cell_t l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__9;
static lean_once_cell_t l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__10;
static lean_once_cell_t l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__11;
static lean_once_cell_t l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__12;
static const lean_string_object l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "elabNameConst"};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__13 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__13_value;
static lean_once_cell_t l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__14;
LEAN_EXPORT lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1();
LEAN_EXPORT lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___boxed(lean_object*);
static const lean_string_object l_Lake_DSL_dummyDir___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lake_DSL_dummyDir___closed__0 = (const lean_object*)&l_Lake_DSL_dummyDir___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_DSL_dummyDir = (const lean_object*)&l_Lake_DSL_dummyDir___closed__0_value;
static const lean_string_object l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "System"};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___closed__0 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___closed__0_value;
static const lean_string_object l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "FilePath"};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___closed__1 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___closed__1_value;
static const lean_string_object l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___closed__2 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___closed__2_value;
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___closed__0_value),LEAN_SCALAR_PTR_LITERAL(244, 7, 92, 194, 164, 177, 167, 52)}};
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___closed__3_value_aux_0),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___closed__1_value),LEAN_SCALAR_PTR_LITERAL(249, 26, 71, 103, 26, 96, 3, 234)}};
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___closed__3_value_aux_1),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___closed__2_value),LEAN_SCALAR_PTR_LITERAL(245, 100, 64, 177, 244, 49, 208, 176)}};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___closed__3 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___closed__3_value;
static const lean_string_object l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "id"};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___closed__4 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___closed__4_value;
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___closed__4_value),LEAN_SCALAR_PTR_LITERAL(223, 78, 141, 85, 50, 255, 216, 83)}};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___closed__5 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___closed__5_value;
static const lean_string_object l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "dummyDir"};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___closed__6 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___closed__6_value;
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___closed__7_value_aux_0),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(176, 13, 75, 143, 104, 166, 231, 81)}};
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___closed__7_value_aux_1),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___closed__6_value),LEAN_SCALAR_PTR_LITERAL(168, 30, 196, 202, 165, 130, 85, 171)}};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___closed__7 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___closed__7_value;
LEAN_EXPORT lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "dirConst"};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst__1___closed__0 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst__1___closed__0_value;
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst__1___closed__1_value_aux_0),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(176, 13, 75, 143, 104, 166, 231, 81)}};
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst__1___closed__1_value_aux_1),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 238, 150, 168, 55, 12, 135, 204)}};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst__1___closed__1 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst__1___closed__1_value;
static const lean_string_object l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "elabDirConst"};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst__1___closed__2 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst__1___closed__2_value;
static lean_once_cell_t l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst__1___closed__3;
LEAN_EXPORT lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst__1();
LEAN_EXPORT lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_DSL_dummyGetConfig_x3f___redArg();
LEAN_EXPORT lean_object* l_Lake_DSL_dummyGetConfig_x3f___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_DSL_dummyGetConfig_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lake_DSL_dummyGetConfig_x3f___boxed(lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "getConfig"};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__0 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__0_value;
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__1_value_aux_0),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(176, 13, 75, 143, 104, 166, 231, 81)}};
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__1_value_aux_1),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__0_value),LEAN_SCALAR_PTR_LITERAL(81, 0, 210, 145, 234, 91, 2, 92)}};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__1 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__1_value;
static const lean_string_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__2 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__2_value;
static const lean_string_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__3 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__3_value;
static const lean_string_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__4 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__4_value;
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__5_value_aux_0),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__5_value_aux_1),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__3_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__5_value_aux_2),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__4_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__5 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__5_value;
static const lean_string_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "some"};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__6 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__6_value;
static lean_once_cell_t l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__7;
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__6_value),LEAN_SCALAR_PTR_LITERAL(37, 202, 7, 33, 103, 74, 114, 212)}};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__8 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__8_value;
static const lean_string_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Option"};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__9 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__9_value;
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__9_value),LEAN_SCALAR_PTR_LITERAL(95, 234, 177, 188, 3, 226, 91, 252)}};
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__10_value_aux_0),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__6_value),LEAN_SCALAR_PTR_LITERAL(89, 148, 40, 55, 221, 242, 231, 67)}};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__10 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__10_value;
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__10_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__11 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__11_value;
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__11_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__12 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__12_value;
static const lean_string_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__13 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__13_value;
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__13_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__14 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__14_value;
static const lean_string_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "typeAscription"};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__15 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__15_value;
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__16_value_aux_0),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__16_value_aux_1),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__3_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__16_value_aux_2),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__15_value),LEAN_SCALAR_PTR_LITERAL(247, 209, 88, 141, 5, 195, 49, 74)}};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__16 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__16_value;
static const lean_string_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__17 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__17_value;
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__18_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__18_value_aux_0),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__18_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__18_value_aux_1),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__3_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__18_value_aux_2),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__17_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__18 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__18_value;
static const lean_string_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__19 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__19_value;
static const lean_string_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__20 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__20_value;
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__20_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__21 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__21_value;
static lean_once_cell_t l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__22;
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__23_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__23_value_aux_0),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(176, 13, 75, 143, 104, 166, 231, 81)}};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__23 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__23_value;
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__23_value)}};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__24 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__24_value;
static const lean_string_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__25 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__25_value;
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__26_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__26_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__26_value_aux_0),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__25_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__26_value_aux_1),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__3_value),LEAN_SCALAR_PTR_LITERAL(252, 225, 247, 249, 114, 131, 135, 109)}};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__26 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__26_value;
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__26_value)}};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__27 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__27_value;
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__28_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__28_value_aux_0),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__25_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__28 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__28_value;
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__28_value)}};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__29 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__29_value;
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__30 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__30_value;
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__30_value)}};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__31 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__31_value;
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__31_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__32 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__32_value;
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__29_value),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__32_value)}};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__33 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__33_value;
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__27_value),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__33_value)}};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__34 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__34_value;
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__24_value),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__34_value)}};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__35 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__35_value;
static const lean_string_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__36 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__36_value;
static lean_once_cell_t l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__37;
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__36_value),LEAN_SCALAR_PTR_LITERAL(73, 239, 30, 105, 8, 60, 178, 241)}};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__38 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__38_value;
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__39_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__9_value),LEAN_SCALAR_PTR_LITERAL(95, 234, 177, 188, 3, 226, 91, 252)}};
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__39_value_aux_0),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__36_value),LEAN_SCALAR_PTR_LITERAL(149, 114, 34, 228, 75, 195, 143, 131)}};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__39 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__39_value;
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__39_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__40 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__40_value;
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__40_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__41 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__41_value;
static const lean_string_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__42 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__42_value;
static lean_once_cell_t l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__43_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__43;
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__9_value),LEAN_SCALAR_PTR_LITERAL(95, 234, 177, 188, 3, 226, 91, 252)}};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__44 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__44_value;
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__44_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__45 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__45_value;
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__44_value)}};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__46 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__46_value;
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__47_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__47_value_aux_0),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__9_value),LEAN_SCALAR_PTR_LITERAL(54, 183, 132, 140, 253, 175, 101, 43)}};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__47 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__47_value;
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__47_value)}};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__48 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__48_value;
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__48_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__49 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__49_value;
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__46_value),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__49_value)}};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__50 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__50_value;
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__45_value),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__50_value)}};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__51 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__51_value;
static const lean_string_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "String"};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__52 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__52_value;
static lean_once_cell_t l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__53_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__53;
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__52_value),LEAN_SCALAR_PTR_LITERAL(6, 130, 56, 8, 41, 104, 134, 43)}};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__54 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__54_value;
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__54_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__55 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__55_value;
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__54_value)}};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__56 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__56_value;
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__57_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__57_value_aux_0),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__52_value),LEAN_SCALAR_PTR_LITERAL(143, 111, 143, 134, 134, 69, 118, 12)}};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__57 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__57_value;
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__57_value)}};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__58 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__58_value;
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__58_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__59 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__59_value;
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__56_value),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__59_value)}};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__60 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__60_value;
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__55_value),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__60_value)}};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__61 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__61_value;
static const lean_string_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__62 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__62_value;
static const lean_string_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "dummyGetConfig\?"};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__63 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__63_value;
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__64_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__64_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__64_value_aux_0),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(176, 13, 75, 143, 104, 166, 231, 81)}};
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__64_value_aux_1),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__63_value),LEAN_SCALAR_PTR_LITERAL(43, 158, 45, 71, 114, 122, 16, 88)}};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__64 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__64_value;
static const lean_string_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "quotedName"};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__65 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__65_value;
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__66_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__66_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__66_value_aux_0),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__66_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__66_value_aux_1),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__3_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__66_value_aux_2),((lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__65_value),LEAN_SCALAR_PTR_LITERAL(217, 120, 158, 75, 195, 162, 2, 130)}};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__66 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__66_value;
static const lean_string_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__67 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__67_value;
static const lean_string_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__68 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__68_value;
LEAN_EXPORT lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "elabGetConfig"};
static const lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig__1___closed__0 = (const lean_object*)&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig__1___closed__0_value;
static lean_once_cell_t l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig__1();
LEAN_EXPORT lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig__1___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__3_spec__5(lean_object* v_opts_1_, lean_object* v_opt_2_){
_start:
{
lean_object* v_name_3_; lean_object* v_defValue_4_; lean_object* v_map_5_; lean_object* v___x_6_; 
v_name_3_ = lean_ctor_get(v_opt_2_, 0);
v_defValue_4_ = lean_ctor_get(v_opt_2_, 1);
v_map_5_ = lean_ctor_get(v_opts_1_, 0);
v___x_6_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_5_, v_name_3_);
if (lean_obj_tag(v___x_6_) == 0)
{
uint8_t v___x_7_; 
v___x_7_ = lean_unbox(v_defValue_4_);
return v___x_7_;
}
else
{
lean_object* v_val_8_; 
v_val_8_ = lean_ctor_get(v___x_6_, 0);
lean_inc(v_val_8_);
lean_dec_ref_known(v___x_6_, 1);
if (lean_obj_tag(v_val_8_) == 1)
{
uint8_t v_v_9_; 
v_v_9_ = lean_ctor_get_uint8(v_val_8_, 0);
lean_dec_ref_known(v_val_8_, 0);
return v_v_9_;
}
else
{
uint8_t v___x_10_; 
lean_dec(v_val_8_);
v___x_10_ = lean_unbox(v_defValue_4_);
return v___x_10_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__3_spec__5___boxed(lean_object* v_opts_11_, lean_object* v_opt_12_){
_start:
{
uint8_t v_res_13_; lean_object* v_r_14_; 
v_res_13_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__3_spec__5(v_opts_11_, v_opt_12_);
lean_dec_ref(v_opt_12_);
lean_dec_ref(v_opts_11_);
v_r_14_ = lean_box(v_res_13_);
return v_r_14_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__3_spec__6___closed__0(void){
_start:
{
lean_object* v___x_15_; lean_object* v___x_16_; 
v___x_15_ = lean_box(1);
v___x_16_ = l_Lean_MessageData_ofFormat(v___x_15_);
return v___x_16_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__3_spec__6___closed__3(void){
_start:
{
lean_object* v___x_20_; lean_object* v___x_21_; 
v___x_20_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__3_spec__6___closed__2));
v___x_21_ = l_Lean_MessageData_ofFormat(v___x_20_);
return v___x_21_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__3_spec__6(lean_object* v_x_22_, lean_object* v_x_23_){
_start:
{
if (lean_obj_tag(v_x_23_) == 0)
{
return v_x_22_;
}
else
{
lean_object* v_head_24_; lean_object* v_tail_25_; lean_object* v___x_27_; uint8_t v_isShared_28_; uint8_t v_isSharedCheck_47_; 
v_head_24_ = lean_ctor_get(v_x_23_, 0);
v_tail_25_ = lean_ctor_get(v_x_23_, 1);
v_isSharedCheck_47_ = !lean_is_exclusive(v_x_23_);
if (v_isSharedCheck_47_ == 0)
{
v___x_27_ = v_x_23_;
v_isShared_28_ = v_isSharedCheck_47_;
goto v_resetjp_26_;
}
else
{
lean_inc(v_tail_25_);
lean_inc(v_head_24_);
lean_dec(v_x_23_);
v___x_27_ = lean_box(0);
v_isShared_28_ = v_isSharedCheck_47_;
goto v_resetjp_26_;
}
v_resetjp_26_:
{
lean_object* v_before_29_; lean_object* v___x_31_; uint8_t v_isShared_32_; uint8_t v_isSharedCheck_45_; 
v_before_29_ = lean_ctor_get(v_head_24_, 0);
v_isSharedCheck_45_ = !lean_is_exclusive(v_head_24_);
if (v_isSharedCheck_45_ == 0)
{
lean_object* v_unused_46_; 
v_unused_46_ = lean_ctor_get(v_head_24_, 1);
lean_dec(v_unused_46_);
v___x_31_ = v_head_24_;
v_isShared_32_ = v_isSharedCheck_45_;
goto v_resetjp_30_;
}
else
{
lean_inc(v_before_29_);
lean_dec(v_head_24_);
v___x_31_ = lean_box(0);
v_isShared_32_ = v_isSharedCheck_45_;
goto v_resetjp_30_;
}
v_resetjp_30_:
{
lean_object* v___x_33_; lean_object* v___x_35_; 
v___x_33_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__3_spec__6___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__3_spec__6___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__3_spec__6___closed__0);
if (v_isShared_32_ == 0)
{
lean_ctor_set_tag(v___x_31_, 7);
lean_ctor_set(v___x_31_, 1, v___x_33_);
lean_ctor_set(v___x_31_, 0, v_x_22_);
v___x_35_ = v___x_31_;
goto v_reusejp_34_;
}
else
{
lean_object* v_reuseFailAlloc_44_; 
v_reuseFailAlloc_44_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_44_, 0, v_x_22_);
lean_ctor_set(v_reuseFailAlloc_44_, 1, v___x_33_);
v___x_35_ = v_reuseFailAlloc_44_;
goto v_reusejp_34_;
}
v_reusejp_34_:
{
lean_object* v___x_36_; lean_object* v___x_38_; 
v___x_36_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__3_spec__6___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__3_spec__6___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__3_spec__6___closed__3);
if (v_isShared_28_ == 0)
{
lean_ctor_set_tag(v___x_27_, 7);
lean_ctor_set(v___x_27_, 1, v___x_36_);
lean_ctor_set(v___x_27_, 0, v___x_35_);
v___x_38_ = v___x_27_;
goto v_reusejp_37_;
}
else
{
lean_object* v_reuseFailAlloc_43_; 
v_reuseFailAlloc_43_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_43_, 0, v___x_35_);
lean_ctor_set(v_reuseFailAlloc_43_, 1, v___x_36_);
v___x_38_ = v_reuseFailAlloc_43_;
goto v_reusejp_37_;
}
v_reusejp_37_:
{
lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_39_ = l_Lean_MessageData_ofSyntax(v_before_29_);
v___x_40_ = l_Lean_indentD(v___x_39_);
v___x_41_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_41_, 0, v___x_38_);
lean_ctor_set(v___x_41_, 1, v___x_40_);
v_x_22_ = v___x_41_;
v_x_23_ = v_tail_25_;
goto _start;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__3___redArg___closed__2(void){
_start:
{
lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_51_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__3___redArg___closed__1));
v___x_52_ = l_Lean_MessageData_ofFormat(v___x_51_);
return v___x_52_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__3___redArg(lean_object* v_msgData_53_, lean_object* v_macroStack_54_, lean_object* v___y_55_){
_start:
{
lean_object* v_toCold_57_; lean_object* v_options_58_; lean_object* v___x_59_; uint8_t v___x_60_; 
v_toCold_57_ = lean_ctor_get(v___y_55_, 0);
v_options_58_ = lean_ctor_get(v_toCold_57_, 2);
v___x_59_ = l_Lean_Elab_pp_macroStack;
v___x_60_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__3_spec__5(v_options_58_, v___x_59_);
if (v___x_60_ == 0)
{
lean_object* v___x_61_; 
lean_dec(v_macroStack_54_);
v___x_61_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_61_, 0, v_msgData_53_);
return v___x_61_;
}
else
{
if (lean_obj_tag(v_macroStack_54_) == 0)
{
lean_object* v___x_62_; 
v___x_62_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_62_, 0, v_msgData_53_);
return v___x_62_;
}
else
{
lean_object* v_head_63_; lean_object* v_after_64_; lean_object* v___x_66_; uint8_t v_isShared_67_; uint8_t v_isSharedCheck_79_; 
v_head_63_ = lean_ctor_get(v_macroStack_54_, 0);
lean_inc(v_head_63_);
v_after_64_ = lean_ctor_get(v_head_63_, 1);
v_isSharedCheck_79_ = !lean_is_exclusive(v_head_63_);
if (v_isSharedCheck_79_ == 0)
{
lean_object* v_unused_80_; 
v_unused_80_ = lean_ctor_get(v_head_63_, 0);
lean_dec(v_unused_80_);
v___x_66_ = v_head_63_;
v_isShared_67_ = v_isSharedCheck_79_;
goto v_resetjp_65_;
}
else
{
lean_inc(v_after_64_);
lean_dec(v_head_63_);
v___x_66_ = lean_box(0);
v_isShared_67_ = v_isSharedCheck_79_;
goto v_resetjp_65_;
}
v_resetjp_65_:
{
lean_object* v___x_68_; lean_object* v___x_70_; 
v___x_68_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__3_spec__6___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__3_spec__6___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__3_spec__6___closed__0);
if (v_isShared_67_ == 0)
{
lean_ctor_set_tag(v___x_66_, 7);
lean_ctor_set(v___x_66_, 1, v___x_68_);
lean_ctor_set(v___x_66_, 0, v_msgData_53_);
v___x_70_ = v___x_66_;
goto v_reusejp_69_;
}
else
{
lean_object* v_reuseFailAlloc_78_; 
v_reuseFailAlloc_78_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_78_, 0, v_msgData_53_);
lean_ctor_set(v_reuseFailAlloc_78_, 1, v___x_68_);
v___x_70_ = v_reuseFailAlloc_78_;
goto v_reusejp_69_;
}
v_reusejp_69_:
{
lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v_msgData_75_; lean_object* v___x_76_; lean_object* v___x_77_; 
v___x_71_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__3___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__3___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__3___redArg___closed__2);
v___x_72_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_72_, 0, v___x_70_);
lean_ctor_set(v___x_72_, 1, v___x_71_);
v___x_73_ = l_Lean_MessageData_ofSyntax(v_after_64_);
v___x_74_ = l_Lean_indentD(v___x_73_);
v_msgData_75_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_75_, 0, v___x_72_);
lean_ctor_set(v_msgData_75_, 1, v___x_74_);
v___x_76_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__3_spec__6(v_msgData_75_, v_macroStack_54_);
v___x_77_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_77_, 0, v___x_76_);
return v___x_77_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__3___redArg___boxed(lean_object* v_msgData_81_, lean_object* v_macroStack_82_, lean_object* v___y_83_, lean_object* v___y_84_){
_start:
{
lean_object* v_res_85_; 
v_res_85_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__3___redArg(v_msgData_81_, v_macroStack_82_, v___y_83_);
lean_dec_ref(v___y_83_);
return v_res_85_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__2(lean_object* v_msgData_86_, lean_object* v___y_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_){
_start:
{
lean_object* v___x_92_; lean_object* v_env_93_; lean_object* v___x_94_; lean_object* v_toCold_95_; lean_object* v_mctx_96_; lean_object* v_lctx_97_; lean_object* v_options_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; 
v___x_92_ = lean_st_ref_get(v___y_90_);
v_env_93_ = lean_ctor_get(v___x_92_, 0);
lean_inc_ref(v_env_93_);
lean_dec(v___x_92_);
v___x_94_ = lean_st_ref_get(v___y_88_);
v_toCold_95_ = lean_ctor_get(v___y_89_, 0);
v_mctx_96_ = lean_ctor_get(v___x_94_, 0);
lean_inc_ref(v_mctx_96_);
lean_dec(v___x_94_);
v_lctx_97_ = lean_ctor_get(v___y_87_, 2);
v_options_98_ = lean_ctor_get(v_toCold_95_, 2);
lean_inc_ref(v_options_98_);
lean_inc_ref(v_lctx_97_);
v___x_99_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_99_, 0, v_env_93_);
lean_ctor_set(v___x_99_, 1, v_mctx_96_);
lean_ctor_set(v___x_99_, 2, v_lctx_97_);
lean_ctor_set(v___x_99_, 3, v_options_98_);
v___x_100_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_100_, 0, v___x_99_);
lean_ctor_set(v___x_100_, 1, v_msgData_86_);
v___x_101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_101_, 0, v___x_100_);
return v___x_101_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__2___boxed(lean_object* v_msgData_102_, lean_object* v___y_103_, lean_object* v___y_104_, lean_object* v___y_105_, lean_object* v___y_106_, lean_object* v___y_107_){
_start:
{
lean_object* v_res_108_; 
v_res_108_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__2(v_msgData_102_, v___y_103_, v___y_104_, v___y_105_, v___y_106_);
lean_dec(v___y_106_);
lean_dec_ref(v___y_105_);
lean_dec(v___y_104_);
lean_dec_ref(v___y_103_);
return v_res_108_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1___redArg(lean_object* v_msg_109_, lean_object* v___y_110_, lean_object* v___y_111_, lean_object* v___y_112_, lean_object* v___y_113_, lean_object* v___y_114_, lean_object* v___y_115_){
_start:
{
lean_object* v_ref_117_; lean_object* v_macroStack_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v_a_121_; lean_object* v___x_122_; lean_object* v_a_123_; lean_object* v___x_125_; uint8_t v_isShared_126_; uint8_t v_isSharedCheck_131_; 
v_ref_117_ = lean_ctor_get(v___y_114_, 2);
v_macroStack_118_ = lean_ctor_get(v___y_110_, 1);
v___x_119_ = l_Lean_Elab_getBetterRef(v_ref_117_, v_macroStack_118_);
v___x_120_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__2(v_msg_109_, v___y_112_, v___y_113_, v___y_114_, v___y_115_);
v_a_121_ = lean_ctor_get(v___x_120_, 0);
lean_inc(v_a_121_);
lean_dec_ref(v___x_120_);
lean_inc(v_macroStack_118_);
v___x_122_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__3___redArg(v_a_121_, v_macroStack_118_, v___y_114_);
v_a_123_ = lean_ctor_get(v___x_122_, 0);
v_isSharedCheck_131_ = !lean_is_exclusive(v___x_122_);
if (v_isSharedCheck_131_ == 0)
{
v___x_125_ = v___x_122_;
v_isShared_126_ = v_isSharedCheck_131_;
goto v_resetjp_124_;
}
else
{
lean_inc(v_a_123_);
lean_dec(v___x_122_);
v___x_125_ = lean_box(0);
v_isShared_126_ = v_isSharedCheck_131_;
goto v_resetjp_124_;
}
v_resetjp_124_:
{
lean_object* v___x_127_; lean_object* v___x_129_; 
v___x_127_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_127_, 0, v___x_119_);
lean_ctor_set(v___x_127_, 1, v_a_123_);
if (v_isShared_126_ == 0)
{
lean_ctor_set_tag(v___x_125_, 1);
lean_ctor_set(v___x_125_, 0, v___x_127_);
v___x_129_ = v___x_125_;
goto v_reusejp_128_;
}
else
{
lean_object* v_reuseFailAlloc_130_; 
v_reuseFailAlloc_130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_130_, 0, v___x_127_);
v___x_129_ = v_reuseFailAlloc_130_;
goto v_reusejp_128_;
}
v_reusejp_128_:
{
return v___x_129_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1___redArg___boxed(lean_object* v_msg_132_, lean_object* v___y_133_, lean_object* v___y_134_, lean_object* v___y_135_, lean_object* v___y_136_, lean_object* v___y_137_, lean_object* v___y_138_, lean_object* v___y_139_){
_start:
{
lean_object* v_res_140_; 
v_res_140_ = l_Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1___redArg(v_msg_132_, v___y_133_, v___y_134_, v___y_135_, v___y_136_, v___y_137_, v___y_138_);
lean_dec(v___y_138_);
lean_dec_ref(v___y_137_);
lean_dec(v___y_136_);
lean_dec_ref(v___y_135_);
lean_dec(v___y_134_);
lean_dec_ref(v___y_133_);
return v_res_140_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0___redArg___lam__0(lean_object* v_stx_141_, lean_object* v_output_142_, lean_object* v_trees_143_, lean_object* v___y_144_, lean_object* v___y_145_, lean_object* v___y_146_, lean_object* v___y_147_, lean_object* v___y_148_, lean_object* v___y_149_){
_start:
{
lean_object* v_lctx_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; 
v_lctx_151_ = lean_ctor_get(v___y_146_, 2);
lean_inc_ref(v_lctx_151_);
v___x_152_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_152_, 0, v_lctx_151_);
lean_ctor_set(v___x_152_, 1, v_stx_141_);
lean_ctor_set(v___x_152_, 2, v_output_142_);
v___x_153_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_153_, 0, v___x_152_);
v___x_154_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_154_, 0, v___x_153_);
lean_ctor_set(v___x_154_, 1, v_trees_143_);
v___x_155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_155_, 0, v___x_154_);
return v___x_155_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0___redArg___lam__0___boxed(lean_object* v_stx_156_, lean_object* v_output_157_, lean_object* v_trees_158_, lean_object* v___y_159_, lean_object* v___y_160_, lean_object* v___y_161_, lean_object* v___y_162_, lean_object* v___y_163_, lean_object* v___y_164_, lean_object* v___y_165_){
_start:
{
lean_object* v_res_166_; 
v_res_166_ = l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0___redArg___lam__0(v_stx_156_, v_output_157_, v_trees_158_, v___y_159_, v___y_160_, v___y_161_, v___y_162_, v___y_163_, v___y_164_);
lean_dec(v___y_164_);
lean_dec_ref(v___y_163_);
lean_dec(v___y_162_);
lean_dec_ref(v___y_161_);
lean_dec(v___y_160_);
lean_dec_ref(v___y_159_);
return v_res_166_;
}
}
static lean_object* _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0_spec__1_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; 
v___x_167_ = lean_unsigned_to_nat(32u);
v___x_168_ = lean_mk_empty_array_with_capacity(v___x_167_);
v___x_169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_169_, 0, v___x_168_);
return v___x_169_;
}
}
static lean_object* _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0_spec__1_spec__4___redArg___closed__1(void){
_start:
{
size_t v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; 
v___x_170_ = ((size_t)5ULL);
v___x_171_ = lean_unsigned_to_nat(0u);
v___x_172_ = lean_unsigned_to_nat(32u);
v___x_173_ = lean_mk_empty_array_with_capacity(v___x_172_);
v___x_174_ = lean_obj_once(&l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0_spec__1_spec__4___redArg___closed__0, &l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0_spec__1_spec__4___redArg___closed__0_once, _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0_spec__1_spec__4___redArg___closed__0);
v___x_175_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_175_, 0, v___x_174_);
lean_ctor_set(v___x_175_, 1, v___x_173_);
lean_ctor_set(v___x_175_, 2, v___x_171_);
lean_ctor_set(v___x_175_, 3, v___x_171_);
lean_ctor_set_usize(v___x_175_, 4, v___x_170_);
return v___x_175_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0_spec__1_spec__4___redArg(lean_object* v___y_176_){
_start:
{
lean_object* v___x_178_; lean_object* v_infoState_179_; lean_object* v_trees_180_; lean_object* v___x_181_; lean_object* v_infoState_182_; lean_object* v_env_183_; lean_object* v_nextMacroScope_184_; lean_object* v_ngen_185_; lean_object* v_auxDeclNGen_186_; lean_object* v_traceState_187_; lean_object* v_cache_188_; lean_object* v_messages_189_; lean_object* v_snapshotTasks_190_; lean_object* v___x_192_; uint8_t v_isShared_193_; uint8_t v_isSharedCheck_211_; 
v___x_178_ = lean_st_ref_get(v___y_176_);
v_infoState_179_ = lean_ctor_get(v___x_178_, 7);
lean_inc_ref(v_infoState_179_);
lean_dec(v___x_178_);
v_trees_180_ = lean_ctor_get(v_infoState_179_, 2);
lean_inc_ref(v_trees_180_);
lean_dec_ref(v_infoState_179_);
v___x_181_ = lean_st_ref_take(v___y_176_);
v_infoState_182_ = lean_ctor_get(v___x_181_, 7);
v_env_183_ = lean_ctor_get(v___x_181_, 0);
v_nextMacroScope_184_ = lean_ctor_get(v___x_181_, 1);
v_ngen_185_ = lean_ctor_get(v___x_181_, 2);
v_auxDeclNGen_186_ = lean_ctor_get(v___x_181_, 3);
v_traceState_187_ = lean_ctor_get(v___x_181_, 4);
v_cache_188_ = lean_ctor_get(v___x_181_, 5);
v_messages_189_ = lean_ctor_get(v___x_181_, 6);
v_snapshotTasks_190_ = lean_ctor_get(v___x_181_, 8);
v_isSharedCheck_211_ = !lean_is_exclusive(v___x_181_);
if (v_isSharedCheck_211_ == 0)
{
v___x_192_ = v___x_181_;
v_isShared_193_ = v_isSharedCheck_211_;
goto v_resetjp_191_;
}
else
{
lean_inc(v_snapshotTasks_190_);
lean_inc(v_infoState_182_);
lean_inc(v_messages_189_);
lean_inc(v_cache_188_);
lean_inc(v_traceState_187_);
lean_inc(v_auxDeclNGen_186_);
lean_inc(v_ngen_185_);
lean_inc(v_nextMacroScope_184_);
lean_inc(v_env_183_);
lean_dec(v___x_181_);
v___x_192_ = lean_box(0);
v_isShared_193_ = v_isSharedCheck_211_;
goto v_resetjp_191_;
}
v_resetjp_191_:
{
uint8_t v_enabled_194_; lean_object* v_assignment_195_; lean_object* v_lazyAssignment_196_; lean_object* v___x_198_; uint8_t v_isShared_199_; uint8_t v_isSharedCheck_209_; 
v_enabled_194_ = lean_ctor_get_uint8(v_infoState_182_, sizeof(void*)*3);
v_assignment_195_ = lean_ctor_get(v_infoState_182_, 0);
v_lazyAssignment_196_ = lean_ctor_get(v_infoState_182_, 1);
v_isSharedCheck_209_ = !lean_is_exclusive(v_infoState_182_);
if (v_isSharedCheck_209_ == 0)
{
lean_object* v_unused_210_; 
v_unused_210_ = lean_ctor_get(v_infoState_182_, 2);
lean_dec(v_unused_210_);
v___x_198_ = v_infoState_182_;
v_isShared_199_ = v_isSharedCheck_209_;
goto v_resetjp_197_;
}
else
{
lean_inc(v_lazyAssignment_196_);
lean_inc(v_assignment_195_);
lean_dec(v_infoState_182_);
v___x_198_ = lean_box(0);
v_isShared_199_ = v_isSharedCheck_209_;
goto v_resetjp_197_;
}
v_resetjp_197_:
{
lean_object* v___x_200_; lean_object* v___x_202_; 
v___x_200_ = lean_obj_once(&l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0_spec__1_spec__4___redArg___closed__1, &l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0_spec__1_spec__4___redArg___closed__1_once, _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0_spec__1_spec__4___redArg___closed__1);
if (v_isShared_199_ == 0)
{
lean_ctor_set(v___x_198_, 2, v___x_200_);
v___x_202_ = v___x_198_;
goto v_reusejp_201_;
}
else
{
lean_object* v_reuseFailAlloc_208_; 
v_reuseFailAlloc_208_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_208_, 0, v_assignment_195_);
lean_ctor_set(v_reuseFailAlloc_208_, 1, v_lazyAssignment_196_);
lean_ctor_set(v_reuseFailAlloc_208_, 2, v___x_200_);
lean_ctor_set_uint8(v_reuseFailAlloc_208_, sizeof(void*)*3, v_enabled_194_);
v___x_202_ = v_reuseFailAlloc_208_;
goto v_reusejp_201_;
}
v_reusejp_201_:
{
lean_object* v___x_204_; 
if (v_isShared_193_ == 0)
{
lean_ctor_set(v___x_192_, 7, v___x_202_);
v___x_204_ = v___x_192_;
goto v_reusejp_203_;
}
else
{
lean_object* v_reuseFailAlloc_207_; 
v_reuseFailAlloc_207_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_207_, 0, v_env_183_);
lean_ctor_set(v_reuseFailAlloc_207_, 1, v_nextMacroScope_184_);
lean_ctor_set(v_reuseFailAlloc_207_, 2, v_ngen_185_);
lean_ctor_set(v_reuseFailAlloc_207_, 3, v_auxDeclNGen_186_);
lean_ctor_set(v_reuseFailAlloc_207_, 4, v_traceState_187_);
lean_ctor_set(v_reuseFailAlloc_207_, 5, v_cache_188_);
lean_ctor_set(v_reuseFailAlloc_207_, 6, v_messages_189_);
lean_ctor_set(v_reuseFailAlloc_207_, 7, v___x_202_);
lean_ctor_set(v_reuseFailAlloc_207_, 8, v_snapshotTasks_190_);
v___x_204_ = v_reuseFailAlloc_207_;
goto v_reusejp_203_;
}
v_reusejp_203_:
{
lean_object* v___x_205_; lean_object* v___x_206_; 
v___x_205_ = lean_st_ref_put(v___y_176_, v___x_204_);
v___x_206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_206_, 0, v_trees_180_);
return v___x_206_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object* v___y_212_, lean_object* v___y_213_){
_start:
{
lean_object* v_res_214_; 
v_res_214_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0_spec__1_spec__4___redArg(v___y_212_);
lean_dec(v___y_212_);
return v_res_214_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0_spec__1___redArg___lam__0(lean_object* v___y_215_, lean_object* v_mkInfoTree_216_, lean_object* v___y_217_, lean_object* v___y_218_, lean_object* v___y_219_, lean_object* v___y_220_, lean_object* v___y_221_, lean_object* v_a_222_, lean_object* v_a_x3f_223_){
_start:
{
lean_object* v___x_225_; lean_object* v_infoState_226_; lean_object* v_trees_227_; lean_object* v___x_228_; 
v___x_225_ = lean_st_ref_get(v___y_215_);
v_infoState_226_ = lean_ctor_get(v___x_225_, 7);
lean_inc_ref(v_infoState_226_);
lean_dec(v___x_225_);
v_trees_227_ = lean_ctor_get(v_infoState_226_, 2);
lean_inc_ref(v_trees_227_);
lean_dec_ref(v_infoState_226_);
lean_inc(v___y_215_);
lean_inc_ref(v___y_221_);
lean_inc(v___y_220_);
lean_inc_ref(v___y_219_);
lean_inc(v___y_218_);
lean_inc_ref(v___y_217_);
v___x_228_ = lean_apply_8(v_mkInfoTree_216_, v_trees_227_, v___y_217_, v___y_218_, v___y_219_, v___y_220_, v___y_221_, v___y_215_, lean_box(0));
if (lean_obj_tag(v___x_228_) == 0)
{
lean_object* v_a_229_; lean_object* v___x_231_; uint8_t v_isShared_232_; uint8_t v_isSharedCheck_267_; 
v_a_229_ = lean_ctor_get(v___x_228_, 0);
v_isSharedCheck_267_ = !lean_is_exclusive(v___x_228_);
if (v_isSharedCheck_267_ == 0)
{
v___x_231_ = v___x_228_;
v_isShared_232_ = v_isSharedCheck_267_;
goto v_resetjp_230_;
}
else
{
lean_inc(v_a_229_);
lean_dec(v___x_228_);
v___x_231_ = lean_box(0);
v_isShared_232_ = v_isSharedCheck_267_;
goto v_resetjp_230_;
}
v_resetjp_230_:
{
lean_object* v___x_233_; lean_object* v_infoState_234_; lean_object* v_env_235_; lean_object* v_nextMacroScope_236_; lean_object* v_ngen_237_; lean_object* v_auxDeclNGen_238_; lean_object* v_traceState_239_; lean_object* v_cache_240_; lean_object* v_messages_241_; lean_object* v_snapshotTasks_242_; lean_object* v___x_244_; uint8_t v_isShared_245_; uint8_t v_isSharedCheck_266_; 
v___x_233_ = lean_st_ref_take(v___y_215_);
v_infoState_234_ = lean_ctor_get(v___x_233_, 7);
v_env_235_ = lean_ctor_get(v___x_233_, 0);
v_nextMacroScope_236_ = lean_ctor_get(v___x_233_, 1);
v_ngen_237_ = lean_ctor_get(v___x_233_, 2);
v_auxDeclNGen_238_ = lean_ctor_get(v___x_233_, 3);
v_traceState_239_ = lean_ctor_get(v___x_233_, 4);
v_cache_240_ = lean_ctor_get(v___x_233_, 5);
v_messages_241_ = lean_ctor_get(v___x_233_, 6);
v_snapshotTasks_242_ = lean_ctor_get(v___x_233_, 8);
v_isSharedCheck_266_ = !lean_is_exclusive(v___x_233_);
if (v_isSharedCheck_266_ == 0)
{
v___x_244_ = v___x_233_;
v_isShared_245_ = v_isSharedCheck_266_;
goto v_resetjp_243_;
}
else
{
lean_inc(v_snapshotTasks_242_);
lean_inc(v_infoState_234_);
lean_inc(v_messages_241_);
lean_inc(v_cache_240_);
lean_inc(v_traceState_239_);
lean_inc(v_auxDeclNGen_238_);
lean_inc(v_ngen_237_);
lean_inc(v_nextMacroScope_236_);
lean_inc(v_env_235_);
lean_dec(v___x_233_);
v___x_244_ = lean_box(0);
v_isShared_245_ = v_isSharedCheck_266_;
goto v_resetjp_243_;
}
v_resetjp_243_:
{
uint8_t v_enabled_246_; lean_object* v_assignment_247_; lean_object* v_lazyAssignment_248_; lean_object* v___x_250_; uint8_t v_isShared_251_; uint8_t v_isSharedCheck_264_; 
v_enabled_246_ = lean_ctor_get_uint8(v_infoState_234_, sizeof(void*)*3);
v_assignment_247_ = lean_ctor_get(v_infoState_234_, 0);
v_lazyAssignment_248_ = lean_ctor_get(v_infoState_234_, 1);
v_isSharedCheck_264_ = !lean_is_exclusive(v_infoState_234_);
if (v_isSharedCheck_264_ == 0)
{
lean_object* v_unused_265_; 
v_unused_265_ = lean_ctor_get(v_infoState_234_, 2);
lean_dec(v_unused_265_);
v___x_250_ = v_infoState_234_;
v_isShared_251_ = v_isSharedCheck_264_;
goto v_resetjp_249_;
}
else
{
lean_inc(v_lazyAssignment_248_);
lean_inc(v_assignment_247_);
lean_dec(v_infoState_234_);
v___x_250_ = lean_box(0);
v_isShared_251_ = v_isSharedCheck_264_;
goto v_resetjp_249_;
}
v_resetjp_249_:
{
lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_255_; 
v___x_252_ = lean_box(0);
v___x_253_ = l_Lean_PersistentArray_push___redArg(v_a_222_, v_a_229_);
if (v_isShared_251_ == 0)
{
lean_ctor_set(v___x_250_, 2, v___x_253_);
v___x_255_ = v___x_250_;
goto v_reusejp_254_;
}
else
{
lean_object* v_reuseFailAlloc_263_; 
v_reuseFailAlloc_263_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_263_, 0, v_assignment_247_);
lean_ctor_set(v_reuseFailAlloc_263_, 1, v_lazyAssignment_248_);
lean_ctor_set(v_reuseFailAlloc_263_, 2, v___x_253_);
lean_ctor_set_uint8(v_reuseFailAlloc_263_, sizeof(void*)*3, v_enabled_246_);
v___x_255_ = v_reuseFailAlloc_263_;
goto v_reusejp_254_;
}
v_reusejp_254_:
{
lean_object* v___x_257_; 
if (v_isShared_245_ == 0)
{
lean_ctor_set(v___x_244_, 7, v___x_255_);
v___x_257_ = v___x_244_;
goto v_reusejp_256_;
}
else
{
lean_object* v_reuseFailAlloc_262_; 
v_reuseFailAlloc_262_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_262_, 0, v_env_235_);
lean_ctor_set(v_reuseFailAlloc_262_, 1, v_nextMacroScope_236_);
lean_ctor_set(v_reuseFailAlloc_262_, 2, v_ngen_237_);
lean_ctor_set(v_reuseFailAlloc_262_, 3, v_auxDeclNGen_238_);
lean_ctor_set(v_reuseFailAlloc_262_, 4, v_traceState_239_);
lean_ctor_set(v_reuseFailAlloc_262_, 5, v_cache_240_);
lean_ctor_set(v_reuseFailAlloc_262_, 6, v_messages_241_);
lean_ctor_set(v_reuseFailAlloc_262_, 7, v___x_255_);
lean_ctor_set(v_reuseFailAlloc_262_, 8, v_snapshotTasks_242_);
v___x_257_ = v_reuseFailAlloc_262_;
goto v_reusejp_256_;
}
v_reusejp_256_:
{
lean_object* v___x_258_; lean_object* v___x_260_; 
v___x_258_ = lean_st_ref_put(v___y_215_, v___x_257_);
if (v_isShared_232_ == 0)
{
lean_ctor_set(v___x_231_, 0, v___x_252_);
v___x_260_ = v___x_231_;
goto v_reusejp_259_;
}
else
{
lean_object* v_reuseFailAlloc_261_; 
v_reuseFailAlloc_261_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_261_, 0, v___x_252_);
v___x_260_ = v_reuseFailAlloc_261_;
goto v_reusejp_259_;
}
v_reusejp_259_:
{
return v___x_260_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_268_; lean_object* v___x_270_; uint8_t v_isShared_271_; uint8_t v_isSharedCheck_275_; 
lean_dec_ref(v_a_222_);
v_a_268_ = lean_ctor_get(v___x_228_, 0);
v_isSharedCheck_275_ = !lean_is_exclusive(v___x_228_);
if (v_isSharedCheck_275_ == 0)
{
v___x_270_ = v___x_228_;
v_isShared_271_ = v_isSharedCheck_275_;
goto v_resetjp_269_;
}
else
{
lean_inc(v_a_268_);
lean_dec(v___x_228_);
v___x_270_ = lean_box(0);
v_isShared_271_ = v_isSharedCheck_275_;
goto v_resetjp_269_;
}
v_resetjp_269_:
{
lean_object* v___x_273_; 
if (v_isShared_271_ == 0)
{
v___x_273_ = v___x_270_;
goto v_reusejp_272_;
}
else
{
lean_object* v_reuseFailAlloc_274_; 
v_reuseFailAlloc_274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_274_, 0, v_a_268_);
v___x_273_ = v_reuseFailAlloc_274_;
goto v_reusejp_272_;
}
v_reusejp_272_:
{
return v___x_273_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0_spec__1___redArg___lam__0___boxed(lean_object* v___y_276_, lean_object* v_mkInfoTree_277_, lean_object* v___y_278_, lean_object* v___y_279_, lean_object* v___y_280_, lean_object* v___y_281_, lean_object* v___y_282_, lean_object* v_a_283_, lean_object* v_a_x3f_284_, lean_object* v___y_285_){
_start:
{
lean_object* v_res_286_; 
v_res_286_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0_spec__1___redArg___lam__0(v___y_276_, v_mkInfoTree_277_, v___y_278_, v___y_279_, v___y_280_, v___y_281_, v___y_282_, v_a_283_, v_a_x3f_284_);
lean_dec(v_a_x3f_284_);
lean_dec_ref(v___y_282_);
lean_dec(v___y_281_);
lean_dec_ref(v___y_280_);
lean_dec(v___y_279_);
lean_dec_ref(v___y_278_);
lean_dec(v___y_276_);
return v_res_286_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0_spec__1___redArg(lean_object* v_x_287_, lean_object* v_mkInfoTree_288_, lean_object* v___y_289_, lean_object* v___y_290_, lean_object* v___y_291_, lean_object* v___y_292_, lean_object* v___y_293_, lean_object* v___y_294_){
_start:
{
lean_object* v___x_296_; lean_object* v_infoState_297_; uint8_t v_enabled_298_; 
v___x_296_ = lean_st_ref_get(v___y_294_);
v_infoState_297_ = lean_ctor_get(v___x_296_, 7);
lean_inc_ref(v_infoState_297_);
lean_dec(v___x_296_);
v_enabled_298_ = lean_ctor_get_uint8(v_infoState_297_, sizeof(void*)*3);
lean_dec_ref(v_infoState_297_);
if (v_enabled_298_ == 0)
{
lean_object* v___x_299_; 
lean_dec_ref(v_mkInfoTree_288_);
lean_inc(v___y_294_);
lean_inc_ref(v___y_293_);
lean_inc(v___y_292_);
lean_inc_ref(v___y_291_);
lean_inc(v___y_290_);
lean_inc_ref(v___y_289_);
v___x_299_ = lean_apply_7(v_x_287_, v___y_289_, v___y_290_, v___y_291_, v___y_292_, v___y_293_, v___y_294_, lean_box(0));
return v___x_299_;
}
else
{
lean_object* v___x_300_; lean_object* v_a_301_; lean_object* v_r_302_; 
v___x_300_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0_spec__1_spec__4___redArg(v___y_294_);
v_a_301_ = lean_ctor_get(v___x_300_, 0);
lean_inc(v_a_301_);
lean_dec_ref(v___x_300_);
lean_inc(v___y_294_);
lean_inc_ref(v___y_293_);
lean_inc(v___y_292_);
lean_inc_ref(v___y_291_);
lean_inc(v___y_290_);
lean_inc_ref(v___y_289_);
v_r_302_ = lean_apply_7(v_x_287_, v___y_289_, v___y_290_, v___y_291_, v___y_292_, v___y_293_, v___y_294_, lean_box(0));
if (lean_obj_tag(v_r_302_) == 0)
{
lean_object* v_a_303_; lean_object* v___x_305_; uint8_t v_isShared_306_; uint8_t v_isSharedCheck_327_; 
v_a_303_ = lean_ctor_get(v_r_302_, 0);
v_isSharedCheck_327_ = !lean_is_exclusive(v_r_302_);
if (v_isSharedCheck_327_ == 0)
{
v___x_305_ = v_r_302_;
v_isShared_306_ = v_isSharedCheck_327_;
goto v_resetjp_304_;
}
else
{
lean_inc(v_a_303_);
lean_dec(v_r_302_);
v___x_305_ = lean_box(0);
v_isShared_306_ = v_isSharedCheck_327_;
goto v_resetjp_304_;
}
v_resetjp_304_:
{
lean_object* v___x_308_; 
lean_inc(v_a_303_);
if (v_isShared_306_ == 0)
{
lean_ctor_set_tag(v___x_305_, 1);
v___x_308_ = v___x_305_;
goto v_reusejp_307_;
}
else
{
lean_object* v_reuseFailAlloc_326_; 
v_reuseFailAlloc_326_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_326_, 0, v_a_303_);
v___x_308_ = v_reuseFailAlloc_326_;
goto v_reusejp_307_;
}
v_reusejp_307_:
{
lean_object* v___x_309_; 
v___x_309_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0_spec__1___redArg___lam__0(v___y_294_, v_mkInfoTree_288_, v___y_289_, v___y_290_, v___y_291_, v___y_292_, v___y_293_, v_a_301_, v___x_308_);
lean_dec_ref(v___x_308_);
if (lean_obj_tag(v___x_309_) == 0)
{
lean_object* v___x_311_; uint8_t v_isShared_312_; uint8_t v_isSharedCheck_316_; 
v_isSharedCheck_316_ = !lean_is_exclusive(v___x_309_);
if (v_isSharedCheck_316_ == 0)
{
lean_object* v_unused_317_; 
v_unused_317_ = lean_ctor_get(v___x_309_, 0);
lean_dec(v_unused_317_);
v___x_311_ = v___x_309_;
v_isShared_312_ = v_isSharedCheck_316_;
goto v_resetjp_310_;
}
else
{
lean_dec(v___x_309_);
v___x_311_ = lean_box(0);
v_isShared_312_ = v_isSharedCheck_316_;
goto v_resetjp_310_;
}
v_resetjp_310_:
{
lean_object* v___x_314_; 
if (v_isShared_312_ == 0)
{
lean_ctor_set(v___x_311_, 0, v_a_303_);
v___x_314_ = v___x_311_;
goto v_reusejp_313_;
}
else
{
lean_object* v_reuseFailAlloc_315_; 
v_reuseFailAlloc_315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_315_, 0, v_a_303_);
v___x_314_ = v_reuseFailAlloc_315_;
goto v_reusejp_313_;
}
v_reusejp_313_:
{
return v___x_314_;
}
}
}
else
{
lean_object* v_a_318_; lean_object* v___x_320_; uint8_t v_isShared_321_; uint8_t v_isSharedCheck_325_; 
lean_dec(v_a_303_);
v_a_318_ = lean_ctor_get(v___x_309_, 0);
v_isSharedCheck_325_ = !lean_is_exclusive(v___x_309_);
if (v_isSharedCheck_325_ == 0)
{
v___x_320_ = v___x_309_;
v_isShared_321_ = v_isSharedCheck_325_;
goto v_resetjp_319_;
}
else
{
lean_inc(v_a_318_);
lean_dec(v___x_309_);
v___x_320_ = lean_box(0);
v_isShared_321_ = v_isSharedCheck_325_;
goto v_resetjp_319_;
}
v_resetjp_319_:
{
lean_object* v___x_323_; 
if (v_isShared_321_ == 0)
{
v___x_323_ = v___x_320_;
goto v_reusejp_322_;
}
else
{
lean_object* v_reuseFailAlloc_324_; 
v_reuseFailAlloc_324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_324_, 0, v_a_318_);
v___x_323_ = v_reuseFailAlloc_324_;
goto v_reusejp_322_;
}
v_reusejp_322_:
{
return v___x_323_;
}
}
}
}
}
}
else
{
lean_object* v_a_328_; lean_object* v___x_329_; lean_object* v___x_330_; 
v_a_328_ = lean_ctor_get(v_r_302_, 0);
lean_inc(v_a_328_);
lean_dec_ref_known(v_r_302_, 1);
v___x_329_ = lean_box(0);
v___x_330_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0_spec__1___redArg___lam__0(v___y_294_, v_mkInfoTree_288_, v___y_289_, v___y_290_, v___y_291_, v___y_292_, v___y_293_, v_a_301_, v___x_329_);
if (lean_obj_tag(v___x_330_) == 0)
{
lean_object* v___x_332_; uint8_t v_isShared_333_; uint8_t v_isSharedCheck_337_; 
v_isSharedCheck_337_ = !lean_is_exclusive(v___x_330_);
if (v_isSharedCheck_337_ == 0)
{
lean_object* v_unused_338_; 
v_unused_338_ = lean_ctor_get(v___x_330_, 0);
lean_dec(v_unused_338_);
v___x_332_ = v___x_330_;
v_isShared_333_ = v_isSharedCheck_337_;
goto v_resetjp_331_;
}
else
{
lean_dec(v___x_330_);
v___x_332_ = lean_box(0);
v_isShared_333_ = v_isSharedCheck_337_;
goto v_resetjp_331_;
}
v_resetjp_331_:
{
lean_object* v___x_335_; 
if (v_isShared_333_ == 0)
{
lean_ctor_set_tag(v___x_332_, 1);
lean_ctor_set(v___x_332_, 0, v_a_328_);
v___x_335_ = v___x_332_;
goto v_reusejp_334_;
}
else
{
lean_object* v_reuseFailAlloc_336_; 
v_reuseFailAlloc_336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_336_, 0, v_a_328_);
v___x_335_ = v_reuseFailAlloc_336_;
goto v_reusejp_334_;
}
v_reusejp_334_:
{
return v___x_335_;
}
}
}
else
{
lean_object* v_a_339_; lean_object* v___x_341_; uint8_t v_isShared_342_; uint8_t v_isSharedCheck_346_; 
lean_dec(v_a_328_);
v_a_339_ = lean_ctor_get(v___x_330_, 0);
v_isSharedCheck_346_ = !lean_is_exclusive(v___x_330_);
if (v_isSharedCheck_346_ == 0)
{
v___x_341_ = v___x_330_;
v_isShared_342_ = v_isSharedCheck_346_;
goto v_resetjp_340_;
}
else
{
lean_inc(v_a_339_);
lean_dec(v___x_330_);
v___x_341_ = lean_box(0);
v_isShared_342_ = v_isSharedCheck_346_;
goto v_resetjp_340_;
}
v_resetjp_340_:
{
lean_object* v___x_344_; 
if (v_isShared_342_ == 0)
{
v___x_344_ = v___x_341_;
goto v_reusejp_343_;
}
else
{
lean_object* v_reuseFailAlloc_345_; 
v_reuseFailAlloc_345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_345_, 0, v_a_339_);
v___x_344_ = v_reuseFailAlloc_345_;
goto v_reusejp_343_;
}
v_reusejp_343_:
{
return v___x_344_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_347_, lean_object* v_mkInfoTree_348_, lean_object* v___y_349_, lean_object* v___y_350_, lean_object* v___y_351_, lean_object* v___y_352_, lean_object* v___y_353_, lean_object* v___y_354_, lean_object* v___y_355_){
_start:
{
lean_object* v_res_356_; 
v_res_356_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0_spec__1___redArg(v_x_347_, v_mkInfoTree_348_, v___y_349_, v___y_350_, v___y_351_, v___y_352_, v___y_353_, v___y_354_);
lean_dec(v___y_354_);
lean_dec_ref(v___y_353_);
lean_dec(v___y_352_);
lean_dec_ref(v___y_351_);
lean_dec(v___y_350_);
lean_dec_ref(v___y_349_);
return v_res_356_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0___redArg(lean_object* v_stx_357_, lean_object* v_output_358_, lean_object* v_x_359_, lean_object* v___y_360_, lean_object* v___y_361_, lean_object* v___y_362_, lean_object* v___y_363_, lean_object* v___y_364_, lean_object* v___y_365_){
_start:
{
lean_object* v___f_367_; lean_object* v___x_368_; 
v___f_367_ = lean_alloc_closure((void*)(l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0___redArg___lam__0___boxed), 10, 2);
lean_closure_set(v___f_367_, 0, v_stx_357_);
lean_closure_set(v___f_367_, 1, v_output_358_);
v___x_368_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0_spec__1___redArg(v_x_359_, v___f_367_, v___y_360_, v___y_361_, v___y_362_, v___y_363_, v___y_364_, v___y_365_);
return v___x_368_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0___redArg___boxed(lean_object* v_stx_369_, lean_object* v_output_370_, lean_object* v_x_371_, lean_object* v___y_372_, lean_object* v___y_373_, lean_object* v___y_374_, lean_object* v___y_375_, lean_object* v___y_376_, lean_object* v___y_377_, lean_object* v___y_378_){
_start:
{
lean_object* v_res_379_; 
v_res_379_ = l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0___redArg(v_stx_369_, v_output_370_, v_x_371_, v___y_372_, v___y_373_, v___y_374_, v___y_375_, v___y_376_, v___y_377_);
lean_dec(v___y_377_);
lean_dec_ref(v___y_376_);
lean_dec(v___y_375_);
lean_dec_ref(v___y_374_);
lean_dec(v___y_373_);
lean_dec_ref(v___y_372_);
return v_res_379_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0___redArg(lean_object* v_beforeStx_380_, lean_object* v_afterStx_381_, lean_object* v_x_382_, lean_object* v___y_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_){
_start:
{
lean_object* v___x_390_; lean_object* v___x_391_; 
lean_inc(v_afterStx_381_);
lean_inc(v_beforeStx_380_);
v___x_390_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_withPushMacroExpansionStack___boxed), 11, 4);
lean_closure_set(v___x_390_, 0, lean_box(0));
lean_closure_set(v___x_390_, 1, v_beforeStx_380_);
lean_closure_set(v___x_390_, 2, v_afterStx_381_);
lean_closure_set(v___x_390_, 3, v_x_382_);
v___x_391_ = l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0___redArg(v_beforeStx_380_, v_afterStx_381_, v___x_390_, v___y_383_, v___y_384_, v___y_385_, v___y_386_, v___y_387_, v___y_388_);
if (lean_obj_tag(v___x_391_) == 0)
{
lean_object* v_a_392_; lean_object* v___x_394_; uint8_t v_isShared_395_; uint8_t v_isSharedCheck_399_; 
v_a_392_ = lean_ctor_get(v___x_391_, 0);
v_isSharedCheck_399_ = !lean_is_exclusive(v___x_391_);
if (v_isSharedCheck_399_ == 0)
{
v___x_394_ = v___x_391_;
v_isShared_395_ = v_isSharedCheck_399_;
goto v_resetjp_393_;
}
else
{
lean_inc(v_a_392_);
lean_dec(v___x_391_);
v___x_394_ = lean_box(0);
v_isShared_395_ = v_isSharedCheck_399_;
goto v_resetjp_393_;
}
v_resetjp_393_:
{
lean_object* v___x_397_; 
if (v_isShared_395_ == 0)
{
v___x_397_ = v___x_394_;
goto v_reusejp_396_;
}
else
{
lean_object* v_reuseFailAlloc_398_; 
v_reuseFailAlloc_398_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_398_, 0, v_a_392_);
v___x_397_ = v_reuseFailAlloc_398_;
goto v_reusejp_396_;
}
v_reusejp_396_:
{
return v___x_397_;
}
}
}
else
{
lean_object* v_a_400_; lean_object* v___x_402_; uint8_t v_isShared_403_; uint8_t v_isSharedCheck_407_; 
v_a_400_ = lean_ctor_get(v___x_391_, 0);
v_isSharedCheck_407_ = !lean_is_exclusive(v___x_391_);
if (v_isSharedCheck_407_ == 0)
{
v___x_402_ = v___x_391_;
v_isShared_403_ = v_isSharedCheck_407_;
goto v_resetjp_401_;
}
else
{
lean_inc(v_a_400_);
lean_dec(v___x_391_);
v___x_402_ = lean_box(0);
v_isShared_403_ = v_isSharedCheck_407_;
goto v_resetjp_401_;
}
v_resetjp_401_:
{
lean_object* v___x_405_; 
if (v_isShared_403_ == 0)
{
v___x_405_ = v___x_402_;
goto v_reusejp_404_;
}
else
{
lean_object* v_reuseFailAlloc_406_; 
v_reuseFailAlloc_406_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_406_, 0, v_a_400_);
v___x_405_ = v_reuseFailAlloc_406_;
goto v_reusejp_404_;
}
v_reusejp_404_:
{
return v___x_405_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0___redArg___boxed(lean_object* v_beforeStx_408_, lean_object* v_afterStx_409_, lean_object* v_x_410_, lean_object* v___y_411_, lean_object* v___y_412_, lean_object* v___y_413_, lean_object* v___y_414_, lean_object* v___y_415_, lean_object* v___y_416_, lean_object* v___y_417_){
_start:
{
lean_object* v_res_418_; 
v_res_418_ = l_Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0___redArg(v_beforeStx_408_, v_afterStx_409_, v_x_410_, v___y_411_, v___y_412_, v___y_413_, v___y_414_, v___y_415_, v___y_416_);
lean_dec(v___y_416_);
lean_dec_ref(v___y_415_);
lean_dec(v___y_414_);
lean_dec_ref(v___y_413_);
lean_dec(v___y_412_);
lean_dec_ref(v___y_411_);
return v_res_418_;
}
}
static lean_object* _init_l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__4(void){
_start:
{
lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; 
v___x_426_ = l_Lean_instInhabitedName;
v___x_427_ = lean_unsigned_to_nat(0u);
v___x_428_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_428_, 0, v___x_427_);
lean_ctor_set(v___x_428_, 1, v___x_426_);
return v___x_428_;
}
}
static lean_object* _init_l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__5(void){
_start:
{
lean_object* v___x_429_; lean_object* v___x_430_; 
v___x_429_ = lean_box(0);
v___x_430_ = l_unsafeCast___redArg(v___x_429_);
return v___x_430_;
}
}
static lean_object* _init_l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__7(void){
_start:
{
lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; 
v___x_432_ = ((lean_object*)(l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__6));
v___x_433_ = l_Lake_DSL_packageDeclName;
v___x_434_ = l_Lean_Name_str___override(v___x_433_, v___x_432_);
return v___x_434_;
}
}
static lean_object* _init_l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__8(void){
_start:
{
lean_object* v___x_435_; lean_object* v___x_436_; 
v___x_435_ = lean_obj_once(&l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__7, &l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__7_once, _init_l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__7);
v___x_436_ = l_Lean_mkIdent(v___x_435_);
return v___x_436_;
}
}
static lean_object* _init_l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__10(void){
_start:
{
lean_object* v___x_438_; lean_object* v___x_439_; 
v___x_438_ = ((lean_object*)(l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__9));
v___x_439_ = l_Lean_stringToMessageData(v___x_438_);
return v___x_439_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst(lean_object* v_stx_440_, lean_object* v_expectedType_x3f_441_, lean_object* v_a_442_, lean_object* v_a_443_, lean_object* v_a_444_, lean_object* v_a_445_, lean_object* v_a_446_, lean_object* v_a_447_){
_start:
{
lean_object* v___y_450_; lean_object* v___y_451_; lean_object* v___y_452_; lean_object* v___y_453_; lean_object* v___y_454_; lean_object* v___y_455_; lean_object* v___y_456_; lean_object* v___y_457_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v_env_474_; lean_object* v___y_476_; lean_object* v___y_477_; lean_object* v___y_478_; lean_object* v___y_479_; lean_object* v___y_480_; lean_object* v___y_481_; lean_object* v___x_492_; uint8_t v___x_493_; uint8_t v___x_494_; 
v___x_472_ = lean_obj_once(&l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__4, &l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__4_once, _init_l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__4);
v___x_473_ = lean_st_ref_get(v_a_447_);
v_env_474_ = lean_ctor_get(v___x_473_, 0);
lean_inc_ref_n(v_env_474_, 2);
lean_dec(v___x_473_);
v___x_492_ = l_Lake_DSL_packageDeclName;
v___x_493_ = 1;
v___x_494_ = l_Lean_Environment_contains(v_env_474_, v___x_492_, v___x_493_);
if (v___x_494_ == 0)
{
lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v_a_497_; lean_object* v___x_499_; uint8_t v_isShared_500_; uint8_t v_isSharedCheck_504_; 
lean_dec_ref(v_env_474_);
lean_dec(v_expectedType_x3f_441_);
lean_dec(v_stx_440_);
v___x_495_ = lean_obj_once(&l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__10, &l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__10_once, _init_l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__10);
v___x_496_ = l_Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1___redArg(v___x_495_, v_a_442_, v_a_443_, v_a_444_, v_a_445_, v_a_446_, v_a_447_);
v_a_497_ = lean_ctor_get(v___x_496_, 0);
v_isSharedCheck_504_ = !lean_is_exclusive(v___x_496_);
if (v_isSharedCheck_504_ == 0)
{
v___x_499_ = v___x_496_;
v_isShared_500_ = v_isSharedCheck_504_;
goto v_resetjp_498_;
}
else
{
lean_inc(v_a_497_);
lean_dec(v___x_496_);
v___x_499_ = lean_box(0);
v_isShared_500_ = v_isSharedCheck_504_;
goto v_resetjp_498_;
}
v_resetjp_498_:
{
lean_object* v___x_502_; 
if (v_isShared_500_ == 0)
{
v___x_502_ = v___x_499_;
goto v_reusejp_501_;
}
else
{
lean_object* v_reuseFailAlloc_503_; 
v_reuseFailAlloc_503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_503_, 0, v_a_497_);
v___x_502_ = v_reuseFailAlloc_503_;
goto v_reusejp_501_;
}
v_reusejp_501_:
{
return v___x_502_;
}
}
}
else
{
v___y_476_ = v_a_442_;
v___y_477_ = v_a_443_;
v___y_478_ = v_a_444_;
v___y_479_ = v_a_445_;
v___y_480_ = v_a_446_;
v___y_481_ = v_a_447_;
goto v___jp_475_;
}
v___jp_449_:
{
lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; uint8_t v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; 
v___x_458_ = ((lean_object*)(l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__3));
v___x_459_ = l_Nat_reprFast(v___y_454_);
v___x_460_ = lean_box(2);
v___x_461_ = l_Lean_Syntax_mkNumLit(v___x_459_, v___x_460_);
v___x_462_ = lean_unsigned_to_nat(2u);
v___x_463_ = lean_mk_empty_array_with_capacity(v___x_462_);
v___x_464_ = lean_array_push(v___x_463_, v___y_457_);
v___x_465_ = lean_array_push(v___x_464_, v___x_461_);
v___x_466_ = l_Lean_Syntax_mkCApp(v___x_458_, v___x_465_);
lean_dec_ref(v___x_465_);
v___x_467_ = 1;
v___x_468_ = lean_box(v___x_467_);
v___x_469_ = lean_box(v___x_467_);
lean_inc(v___x_466_);
v___x_470_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabTerm___boxed), 11, 4);
lean_closure_set(v___x_470_, 0, v___x_466_);
lean_closure_set(v___x_470_, 1, v_expectedType_x3f_441_);
lean_closure_set(v___x_470_, 2, v___x_468_);
lean_closure_set(v___x_470_, 3, v___x_469_);
v___x_471_ = l_Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0___redArg(v_stx_440_, v___x_466_, v___x_470_, v___y_455_, v___y_453_, v___y_452_, v___y_451_, v___y_456_, v___y_450_);
return v___x_471_;
}
v___jp_475_:
{
lean_object* v___x_482_; lean_object* v_asyncMode_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v_snd_486_; 
v___x_482_ = l_Lake_nameExt;
v_asyncMode_483_ = lean_ctor_get(v___x_482_, 2);
v___x_484_ = lean_obj_once(&l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__5, &l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__5_once, _init_l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__5);
v___x_485_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_472_, v___x_482_, v_env_474_, v_asyncMode_483_, v___x_484_);
v_snd_486_ = lean_ctor_get(v___x_485_, 1);
lean_inc(v_snd_486_);
if (lean_obj_tag(v_snd_486_) == 0)
{
lean_object* v_fst_487_; lean_object* v___x_488_; 
v_fst_487_ = lean_ctor_get(v___x_485_, 0);
lean_inc(v_fst_487_);
lean_dec(v___x_485_);
v___x_488_ = lean_obj_once(&l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__8, &l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__8_once, _init_l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__8);
v___y_450_ = v___y_481_;
v___y_451_ = v___y_479_;
v___y_452_ = v___y_478_;
v___y_453_ = v___y_477_;
v___y_454_ = v_fst_487_;
v___y_455_ = v___y_476_;
v___y_456_ = v___y_480_;
v___y_457_ = v___x_488_;
goto v___jp_449_;
}
else
{
lean_object* v_fst_489_; uint8_t v___x_490_; lean_object* v___x_491_; 
v_fst_489_ = lean_ctor_get(v___x_485_, 0);
lean_inc(v_fst_489_);
lean_dec(v___x_485_);
v___x_490_ = 0;
lean_inc(v_stx_440_);
v___x_491_ = l_Lake_Name_quoteFrom(v_stx_440_, v_snd_486_, v___x_490_);
v___y_450_ = v___y_481_;
v___y_451_ = v___y_479_;
v___y_452_ = v___y_478_;
v___y_453_ = v___y_477_;
v___y_454_ = v_fst_489_;
v___y_455_ = v___y_476_;
v___y_456_ = v___y_480_;
v___y_457_ = v___x_491_;
goto v___jp_449_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___boxed(lean_object* v_stx_505_, lean_object* v_expectedType_x3f_506_, lean_object* v_a_507_, lean_object* v_a_508_, lean_object* v_a_509_, lean_object* v_a_510_, lean_object* v_a_511_, lean_object* v_a_512_, lean_object* v_a_513_){
_start:
{
lean_object* v_res_514_; 
v_res_514_ = l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst(v_stx_505_, v_expectedType_x3f_506_, v_a_507_, v_a_508_, v_a_509_, v_a_510_, v_a_511_, v_a_512_);
lean_dec(v_a_512_);
lean_dec_ref(v_a_511_);
lean_dec(v_a_510_);
lean_dec_ref(v_a_509_);
lean_dec(v_a_508_);
lean_dec_ref(v_a_507_);
return v_res_514_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0(lean_object* v_00_u03b1_515_, lean_object* v_beforeStx_516_, lean_object* v_afterStx_517_, lean_object* v_x_518_, lean_object* v___y_519_, lean_object* v___y_520_, lean_object* v___y_521_, lean_object* v___y_522_, lean_object* v___y_523_, lean_object* v___y_524_){
_start:
{
lean_object* v___x_526_; 
v___x_526_ = l_Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0___redArg(v_beforeStx_516_, v_afterStx_517_, v_x_518_, v___y_519_, v___y_520_, v___y_521_, v___y_522_, v___y_523_, v___y_524_);
return v___x_526_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0___boxed(lean_object* v_00_u03b1_527_, lean_object* v_beforeStx_528_, lean_object* v_afterStx_529_, lean_object* v_x_530_, lean_object* v___y_531_, lean_object* v___y_532_, lean_object* v___y_533_, lean_object* v___y_534_, lean_object* v___y_535_, lean_object* v___y_536_, lean_object* v___y_537_){
_start:
{
lean_object* v_res_538_; 
v_res_538_ = l_Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0(v_00_u03b1_527_, v_beforeStx_528_, v_afterStx_529_, v_x_530_, v___y_531_, v___y_532_, v___y_533_, v___y_534_, v___y_535_, v___y_536_);
lean_dec(v___y_536_);
lean_dec_ref(v___y_535_);
lean_dec(v___y_534_);
lean_dec_ref(v___y_533_);
lean_dec(v___y_532_);
lean_dec_ref(v___y_531_);
return v_res_538_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1(lean_object* v_00_u03b1_539_, lean_object* v_msg_540_, lean_object* v___y_541_, lean_object* v___y_542_, lean_object* v___y_543_, lean_object* v___y_544_, lean_object* v___y_545_, lean_object* v___y_546_){
_start:
{
lean_object* v___x_548_; 
v___x_548_ = l_Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1___redArg(v_msg_540_, v___y_541_, v___y_542_, v___y_543_, v___y_544_, v___y_545_, v___y_546_);
return v___x_548_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1___boxed(lean_object* v_00_u03b1_549_, lean_object* v_msg_550_, lean_object* v___y_551_, lean_object* v___y_552_, lean_object* v___y_553_, lean_object* v___y_554_, lean_object* v___y_555_, lean_object* v___y_556_, lean_object* v___y_557_){
_start:
{
lean_object* v_res_558_; 
v_res_558_ = l_Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1(v_00_u03b1_549_, v_msg_550_, v___y_551_, v___y_552_, v___y_553_, v___y_554_, v___y_555_, v___y_556_);
lean_dec(v___y_556_);
lean_dec_ref(v___y_555_);
lean_dec(v___y_554_);
lean_dec_ref(v___y_553_);
lean_dec(v___y_552_);
lean_dec_ref(v___y_551_);
return v_res_558_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0(lean_object* v_00_u03b1_559_, lean_object* v_stx_560_, lean_object* v_output_561_, lean_object* v_x_562_, lean_object* v___y_563_, lean_object* v___y_564_, lean_object* v___y_565_, lean_object* v___y_566_, lean_object* v___y_567_, lean_object* v___y_568_){
_start:
{
lean_object* v___x_570_; 
v___x_570_ = l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0___redArg(v_stx_560_, v_output_561_, v_x_562_, v___y_563_, v___y_564_, v___y_565_, v___y_566_, v___y_567_, v___y_568_);
return v___x_570_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0___boxed(lean_object* v_00_u03b1_571_, lean_object* v_stx_572_, lean_object* v_output_573_, lean_object* v_x_574_, lean_object* v___y_575_, lean_object* v___y_576_, lean_object* v___y_577_, lean_object* v___y_578_, lean_object* v___y_579_, lean_object* v___y_580_, lean_object* v___y_581_){
_start:
{
lean_object* v_res_582_; 
v_res_582_ = l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0(v_00_u03b1_571_, v_stx_572_, v_output_573_, v_x_574_, v___y_575_, v___y_576_, v___y_577_, v___y_578_, v___y_579_, v___y_580_);
lean_dec(v___y_580_);
lean_dec_ref(v___y_579_);
lean_dec(v___y_578_);
lean_dec_ref(v___y_577_);
lean_dec(v___y_576_);
lean_dec_ref(v___y_575_);
return v_res_582_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__3(lean_object* v_msgData_583_, lean_object* v_macroStack_584_, lean_object* v___y_585_, lean_object* v___y_586_, lean_object* v___y_587_, lean_object* v___y_588_, lean_object* v___y_589_, lean_object* v___y_590_){
_start:
{
lean_object* v___x_592_; 
v___x_592_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__3___redArg(v_msgData_583_, v_macroStack_584_, v___y_589_);
return v___x_592_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__3___boxed(lean_object* v_msgData_593_, lean_object* v_macroStack_594_, lean_object* v___y_595_, lean_object* v___y_596_, lean_object* v___y_597_, lean_object* v___y_598_, lean_object* v___y_599_, lean_object* v___y_600_, lean_object* v___y_601_){
_start:
{
lean_object* v_res_602_; 
v_res_602_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__1_spec__3(v_msgData_593_, v_macroStack_594_, v___y_595_, v___y_596_, v___y_597_, v___y_598_, v___y_599_, v___y_600_);
lean_dec(v___y_600_);
lean_dec_ref(v___y_599_);
lean_dec(v___y_598_);
lean_dec_ref(v___y_597_);
lean_dec(v___y_596_);
lean_dec_ref(v___y_595_);
return v_res_602_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0_spec__1_spec__4(lean_object* v___y_603_, lean_object* v___y_604_, lean_object* v___y_605_, lean_object* v___y_606_, lean_object* v___y_607_, lean_object* v___y_608_){
_start:
{
lean_object* v___x_610_; 
v___x_610_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0_spec__1_spec__4___redArg(v___y_608_);
return v___x_610_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v___y_611_, lean_object* v___y_612_, lean_object* v___y_613_, lean_object* v___y_614_, lean_object* v___y_615_, lean_object* v___y_616_, lean_object* v___y_617_){
_start:
{
lean_object* v_res_618_; 
v_res_618_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0_spec__1_spec__4(v___y_611_, v___y_612_, v___y_613_, v___y_614_, v___y_615_, v___y_616_);
lean_dec(v___y_616_);
lean_dec_ref(v___y_615_);
lean_dec(v___y_614_);
lean_dec_ref(v___y_613_);
lean_dec(v___y_612_);
lean_dec_ref(v___y_611_);
return v_res_618_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_619_, lean_object* v_x_620_, lean_object* v_mkInfoTree_621_, lean_object* v___y_622_, lean_object* v___y_623_, lean_object* v___y_624_, lean_object* v___y_625_, lean_object* v___y_626_, lean_object* v___y_627_){
_start:
{
lean_object* v___x_629_; 
v___x_629_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0_spec__1___redArg(v_x_620_, v_mkInfoTree_621_, v___y_622_, v___y_623_, v___y_624_, v___y_625_, v___y_626_, v___y_627_);
return v___x_629_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_630_, lean_object* v_x_631_, lean_object* v_mkInfoTree_632_, lean_object* v___y_633_, lean_object* v___y_634_, lean_object* v___y_635_, lean_object* v___y_636_, lean_object* v___y_637_, lean_object* v___y_638_, lean_object* v___y_639_){
_start:
{
lean_object* v_res_640_; 
v_res_640_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0_spec__0_spec__1(v_00_u03b1_630_, v_x_631_, v_mkInfoTree_632_, v___y_633_, v___y_634_, v___y_635_, v___y_636_, v___y_637_, v___y_638_);
lean_dec(v___y_638_);
lean_dec_ref(v___y_637_);
lean_dec(v___y_636_);
lean_dec_ref(v___y_635_);
lean_dec(v___y_634_);
lean_dec_ref(v___y_633_);
return v_res_640_;
}
}
static lean_object* _init_l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__5(void){
_start:
{
lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; 
v___x_649_ = ((lean_object*)(l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__4));
v___x_650_ = lean_obj_once(&l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__5, &l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__5_once, _init_l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__5);
v___x_651_ = l_Lean_Name_str___override(v___x_650_, v___x_649_);
return v___x_651_;
}
}
static lean_object* _init_l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__6(void){
_start:
{
lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; 
v___x_652_ = ((lean_object*)(l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__0));
v___x_653_ = lean_obj_once(&l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__5, &l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__5_once, _init_l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__5);
v___x_654_ = l_Lean_Name_str___override(v___x_653_, v___x_652_);
return v___x_654_;
}
}
static lean_object* _init_l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__7(void){
_start:
{
lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; 
v___x_655_ = ((lean_object*)(l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__1));
v___x_656_ = lean_obj_once(&l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__6, &l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__6_once, _init_l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__6);
v___x_657_ = l_Lean_Name_str___override(v___x_656_, v___x_655_);
return v___x_657_;
}
}
static lean_object* _init_l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__9(void){
_start:
{
lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; 
v___x_659_ = ((lean_object*)(l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__8));
v___x_660_ = lean_obj_once(&l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__7, &l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__7_once, _init_l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__7);
v___x_661_ = l_Lean_Name_str___override(v___x_660_, v___x_659_);
return v___x_661_;
}
}
static lean_object* _init_l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__10(void){
_start:
{
lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; 
v___x_662_ = lean_unsigned_to_nat(0u);
v___x_663_ = lean_obj_once(&l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__9, &l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__9_once, _init_l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__9);
v___x_664_ = l_Lean_Name_num___override(v___x_663_, v___x_662_);
return v___x_664_;
}
}
static lean_object* _init_l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__11(void){
_start:
{
lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; 
v___x_665_ = ((lean_object*)(l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__0));
v___x_666_ = lean_obj_once(&l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__10, &l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__10_once, _init_l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__10);
v___x_667_ = l_Lean_Name_str___override(v___x_666_, v___x_665_);
return v___x_667_;
}
}
static lean_object* _init_l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__12(void){
_start:
{
lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; 
v___x_668_ = ((lean_object*)(l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__1));
v___x_669_ = lean_obj_once(&l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__11, &l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__11_once, _init_l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__11);
v___x_670_ = l_Lean_Name_str___override(v___x_669_, v___x_668_);
return v___x_670_;
}
}
static lean_object* _init_l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__14(void){
_start:
{
lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; 
v___x_672_ = ((lean_object*)(l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__13));
v___x_673_ = lean_obj_once(&l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__12, &l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__12_once, _init_l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__12);
v___x_674_ = l_Lean_Name_str___override(v___x_673_, v___x_672_);
return v___x_674_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1(){
_start:
{
lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; 
v___x_676_ = l_Lean_Elab_Term_termElabAttribute;
v___x_677_ = ((lean_object*)(l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__3));
v___x_678_ = lean_obj_once(&l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__14, &l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__14_once, _init_l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__14);
v___x_679_ = lean_alloc_closure((void*)(l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___boxed), 9, 0);
v___x_680_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_676_, v___x_677_, v___x_678_, v___x_679_);
return v___x_680_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___boxed(lean_object* v_a_681_){
_start:
{
lean_object* v_res_682_; 
v_res_682_ = l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1();
return v_res_682_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst(lean_object* v_stx_700_, lean_object* v_expectedType_x3f_701_, lean_object* v_a_702_, lean_object* v_a_703_, lean_object* v_a_704_, lean_object* v_a_705_, lean_object* v_a_706_, lean_object* v_a_707_){
_start:
{
lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___y_712_; lean_object* v_env_718_; lean_object* v___x_719_; lean_object* v_asyncMode_720_; lean_object* v___x_721_; lean_object* v___x_722_; 
v___x_709_ = lean_box(0);
v___x_710_ = lean_st_ref_get(v_a_707_);
v_env_718_ = lean_ctor_get(v___x_710_, 0);
lean_inc_ref(v_env_718_);
lean_dec(v___x_710_);
v___x_719_ = l_Lake_dirExt;
v_asyncMode_720_ = lean_ctor_get(v___x_719_, 2);
v___x_721_ = lean_obj_once(&l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__5, &l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__5_once, _init_l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__5);
v___x_722_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_709_, v___x_719_, v_env_718_, v_asyncMode_720_, v___x_721_);
if (lean_obj_tag(v___x_722_) == 1)
{
lean_object* v_val_723_; uint8_t v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; 
v_val_723_ = lean_ctor_get(v___x_722_, 0);
lean_inc(v_val_723_);
lean_dec_ref_known(v___x_722_, 1);
v___x_724_ = 0;
v___x_725_ = l_Lean_SourceInfo_fromRef(v_stx_700_, v___x_724_);
v___x_726_ = l_Lean_Syntax_mkStrLit(v_val_723_, v___x_725_);
v___x_727_ = ((lean_object*)(l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___closed__3));
v___x_728_ = l_Lean_mkCIdentFrom(v_stx_700_, v___x_727_, v___x_724_);
v___x_729_ = lean_unsigned_to_nat(1u);
v___x_730_ = lean_mk_empty_array_with_capacity(v___x_729_);
v___x_731_ = lean_array_push(v___x_730_, v___x_726_);
v___x_732_ = l_Lean_Syntax_mkApp(v___x_728_, v___x_731_);
lean_dec_ref(v___x_731_);
v___y_712_ = v___x_732_;
goto v___jp_711_;
}
else
{
lean_object* v___x_733_; uint8_t v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; 
lean_dec(v___x_722_);
v___x_733_ = ((lean_object*)(l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___closed__5));
v___x_734_ = 0;
v___x_735_ = l_Lean_mkCIdentFrom(v_stx_700_, v___x_733_, v___x_734_);
v___x_736_ = ((lean_object*)(l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___closed__7));
v___x_737_ = l_Lean_mkCIdentFrom(v_stx_700_, v___x_736_, v___x_734_);
v___x_738_ = lean_unsigned_to_nat(1u);
v___x_739_ = lean_mk_empty_array_with_capacity(v___x_738_);
v___x_740_ = lean_array_push(v___x_739_, v___x_737_);
v___x_741_ = l_Lean_Syntax_mkApp(v___x_735_, v___x_740_);
lean_dec_ref(v___x_740_);
v___y_712_ = v___x_741_;
goto v___jp_711_;
}
v___jp_711_:
{
uint8_t v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; 
v___x_713_ = 1;
v___x_714_ = lean_box(v___x_713_);
v___x_715_ = lean_box(v___x_713_);
lean_inc(v___y_712_);
v___x_716_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabTerm___boxed), 11, 4);
lean_closure_set(v___x_716_, 0, v___y_712_);
lean_closure_set(v___x_716_, 1, v_expectedType_x3f_701_);
lean_closure_set(v___x_716_, 2, v___x_714_);
lean_closure_set(v___x_716_, 3, v___x_715_);
v___x_717_ = l_Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0___redArg(v_stx_700_, v___y_712_, v___x_716_, v_a_702_, v_a_703_, v_a_704_, v_a_705_, v_a_706_, v_a_707_);
return v___x_717_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___boxed(lean_object* v_stx_742_, lean_object* v_expectedType_x3f_743_, lean_object* v_a_744_, lean_object* v_a_745_, lean_object* v_a_746_, lean_object* v_a_747_, lean_object* v_a_748_, lean_object* v_a_749_, lean_object* v_a_750_){
_start:
{
lean_object* v_res_751_; 
v_res_751_ = l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst(v_stx_742_, v_expectedType_x3f_743_, v_a_744_, v_a_745_, v_a_746_, v_a_747_, v_a_748_, v_a_749_);
lean_dec(v_a_749_);
lean_dec_ref(v_a_748_);
lean_dec(v_a_747_);
lean_dec_ref(v_a_746_);
lean_dec(v_a_745_);
lean_dec_ref(v_a_744_);
return v_res_751_;
}
}
static lean_object* _init_l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst__1___closed__3(void){
_start:
{
lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; 
v___x_758_ = ((lean_object*)(l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst__1___closed__2));
v___x_759_ = lean_obj_once(&l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__12, &l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__12_once, _init_l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__12);
v___x_760_ = l_Lean_Name_str___override(v___x_759_, v___x_758_);
return v___x_760_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst__1(){
_start:
{
lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; 
v___x_762_ = l_Lean_Elab_Term_termElabAttribute;
v___x_763_ = ((lean_object*)(l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst__1___closed__1));
v___x_764_ = lean_obj_once(&l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst__1___closed__3, &l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst__1___closed__3_once, _init_l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst__1___closed__3);
v___x_765_ = lean_alloc_closure((void*)(l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___boxed), 9, 0);
v___x_766_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_762_, v___x_763_, v___x_764_, v___x_765_);
return v___x_766_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst__1___boxed(lean_object* v_a_767_){
_start:
{
lean_object* v_res_768_; 
v_res_768_ = l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst__1();
return v_res_768_;
}
}
LEAN_EXPORT lean_object* l_Lake_DSL_dummyGetConfig_x3f___redArg(){
_start:
{
lean_object* v___x_770_; 
v___x_770_ = lean_box(0);
return v___x_770_;
}
}
LEAN_EXPORT lean_object* l_Lake_DSL_dummyGetConfig_x3f___redArg___boxed(lean_object* v___dummy_771_){
_start:
{
lean_object* v_res_772_; 
v_res_772_ = l_Lake_DSL_dummyGetConfig_x3f___redArg();
return v_res_772_;
}
}
LEAN_EXPORT lean_object* l_Lake_DSL_dummyGetConfig_x3f(lean_object* v_a_773_){
_start:
{
lean_object* v___x_774_; 
v___x_774_ = lean_box(0);
return v___x_774_;
}
}
LEAN_EXPORT lean_object* l_Lake_DSL_dummyGetConfig_x3f___boxed(lean_object* v_a_775_){
_start:
{
lean_object* v_res_776_; 
v_res_776_ = l_Lake_DSL_dummyGetConfig_x3f(v_a_775_);
lean_dec(v_a_775_);
return v_res_776_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; 
v___x_777_ = lean_box(0);
v___x_778_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_779_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_779_, 0, v___x_778_);
lean_ctor_set(v___x_779_, 1, v___x_777_);
return v___x_779_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig_spec__0___redArg(){
_start:
{
lean_object* v___x_781_; lean_object* v___x_782_; 
v___x_781_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig_spec__0___redArg___closed__0);
v___x_782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_782_, 0, v___x_781_);
return v___x_782_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig_spec__0___redArg___boxed(lean_object* v___y_783_){
_start:
{
lean_object* v_res_784_; 
v_res_784_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig_spec__0___redArg();
return v_res_784_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig_spec__0(lean_object* v_00_u03b1_785_, lean_object* v___y_786_, lean_object* v___y_787_, lean_object* v___y_788_, lean_object* v___y_789_, lean_object* v___y_790_, lean_object* v___y_791_){
_start:
{
lean_object* v___x_793_; 
v___x_793_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig_spec__0___redArg();
return v___x_793_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig_spec__0___boxed(lean_object* v_00_u03b1_794_, lean_object* v___y_795_, lean_object* v___y_796_, lean_object* v___y_797_, lean_object* v___y_798_, lean_object* v___y_799_, lean_object* v___y_800_, lean_object* v___y_801_){
_start:
{
lean_object* v_res_802_; 
v_res_802_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig_spec__0(v_00_u03b1_794_, v___y_795_, v___y_796_, v___y_797_, v___y_798_, v___y_799_, v___y_800_);
lean_dec(v___y_800_);
lean_dec_ref(v___y_799_);
lean_dec(v___y_798_);
lean_dec_ref(v___y_797_);
lean_dec(v___y_796_);
lean_dec_ref(v___y_795_);
return v_res_802_;
}
}
static lean_object* _init_l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__7(void){
_start:
{
lean_object* v___x_817_; lean_object* v___x_818_; 
v___x_817_ = ((lean_object*)(l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__6));
v___x_818_ = l_String_toRawSubstring_x27(v___x_817_);
return v___x_818_;
}
}
static lean_object* _init_l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__22(void){
_start:
{
lean_object* v___x_850_; lean_object* v___x_851_; 
v___x_850_ = ((lean_object*)(l_Lake_DSL_dummyDir___closed__0));
v___x_851_ = l_String_toRawSubstring_x27(v___x_850_);
return v___x_851_;
}
}
static lean_object* _init_l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__37(void){
_start:
{
lean_object* v___x_886_; lean_object* v___x_887_; 
v___x_886_ = ((lean_object*)(l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__36));
v___x_887_ = l_String_toRawSubstring_x27(v___x_886_);
return v___x_887_;
}
}
static lean_object* _init_l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__43(void){
_start:
{
lean_object* v___x_900_; lean_object* v___x_901_; 
v___x_900_ = ((lean_object*)(l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__9));
v___x_901_ = l_String_toRawSubstring_x27(v___x_900_);
return v___x_901_;
}
}
static lean_object* _init_l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__53(void){
_start:
{
lean_object* v___x_924_; lean_object* v___x_925_; 
v___x_924_ = ((lean_object*)(l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__52));
v___x_925_ = l_String_toRawSubstring_x27(v___x_924_);
return v___x_925_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig(lean_object* v_stx_961_, lean_object* v_expectedType_x3f_962_, lean_object* v_a_963_, lean_object* v_a_964_, lean_object* v_a_965_, lean_object* v_a_966_, lean_object* v_a_967_, lean_object* v_a_968_){
_start:
{
lean_object* v___x_970_; lean_object* v___x_971_; 
v___x_970_ = lean_box(0);
lean_inc(v_expectedType_x3f_962_);
v___x_971_ = l_Lean_Elab_Term_tryPostponeIfNoneOrMVar(v_expectedType_x3f_962_, v_a_963_, v_a_964_, v_a_965_, v_a_966_, v_a_967_, v_a_968_);
if (lean_obj_tag(v___x_971_) == 0)
{
lean_object* v___x_972_; uint8_t v___x_973_; lean_object* v_a_975_; 
lean_dec_ref_known(v___x_971_, 1);
v___x_972_ = ((lean_object*)(l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__1));
lean_inc(v_stx_961_);
v___x_973_ = l_Lean_Syntax_isOfKind(v_stx_961_, v___x_972_);
if (v___x_973_ == 0)
{
lean_object* v___x_980_; 
lean_dec(v_expectedType_x3f_962_);
lean_dec(v_stx_961_);
v___x_980_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig_spec__0___redArg();
return v___x_980_;
}
else
{
lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v_env_984_; lean_object* v___x_985_; lean_object* v_asyncMode_986_; lean_object* v___x_987_; lean_object* v___x_988_; 
v___x_981_ = lean_unsigned_to_nat(1u);
v___x_982_ = l_Lean_Syntax_getArg(v_stx_961_, v___x_981_);
v___x_983_ = lean_st_ref_get(v_a_968_);
v_env_984_ = lean_ctor_get(v___x_983_, 0);
lean_inc_ref(v_env_984_);
lean_dec(v___x_983_);
v___x_985_ = l_Lake_optsExt;
v_asyncMode_986_ = lean_ctor_get(v___x_985_, 2);
v___x_987_ = lean_obj_once(&l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__5, &l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__5_once, _init_l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___closed__5);
v___x_988_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_970_, v___x_985_, v_env_984_, v_asyncMode_986_, v___x_987_);
if (lean_obj_tag(v___x_988_) == 1)
{
lean_object* v_val_989_; lean_object* v___x_990_; lean_object* v___x_991_; 
v_val_989_ = lean_ctor_get(v___x_988_, 0);
lean_inc(v_val_989_);
lean_dec_ref_known(v___x_988_, 1);
v___x_990_ = l_Lean_TSyntax_getId(v___x_982_);
lean_dec(v___x_982_);
v___x_991_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_val_989_, v___x_990_);
lean_dec(v___x_990_);
lean_dec(v_val_989_);
if (lean_obj_tag(v___x_991_) == 1)
{
lean_object* v_toCold_992_; lean_object* v_val_993_; lean_object* v_ref_994_; lean_object* v_quotContext_995_; lean_object* v_currMacroScope_996_; uint8_t v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; 
v_toCold_992_ = lean_ctor_get(v_a_967_, 0);
v_val_993_ = lean_ctor_get(v___x_991_, 0);
lean_inc(v_val_993_);
lean_dec_ref_known(v___x_991_, 1);
v_ref_994_ = lean_ctor_get(v_a_967_, 2);
v_quotContext_995_ = lean_ctor_get(v_toCold_992_, 8);
v_currMacroScope_996_ = lean_ctor_get(v_toCold_992_, 9);
v___x_997_ = 0;
v___x_998_ = l_Lean_SourceInfo_fromRef(v_ref_994_, v___x_997_);
v___x_999_ = ((lean_object*)(l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__5));
v___x_1000_ = lean_obj_once(&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__7, &l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__7_once, _init_l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__7);
v___x_1001_ = ((lean_object*)(l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__8));
lean_inc(v_currMacroScope_996_);
lean_inc(v_quotContext_995_);
v___x_1002_ = l_Lean_addMacroScope(v_quotContext_995_, v___x_1001_, v_currMacroScope_996_);
v___x_1003_ = ((lean_object*)(l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__12));
lean_inc_n(v___x_998_, 3);
v___x_1004_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1004_, 0, v___x_998_);
lean_ctor_set(v___x_1004_, 1, v___x_1000_);
lean_ctor_set(v___x_1004_, 2, v___x_1002_);
lean_ctor_set(v___x_1004_, 3, v___x_1003_);
v___x_1005_ = ((lean_object*)(l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__14));
v___x_1006_ = l_Lean_Syntax_mkStrLit(v_val_993_, v___x_998_);
v___x_1007_ = l_Lean_Syntax_node1(v___x_998_, v___x_1005_, v___x_1006_);
v___x_1008_ = l_Lean_Syntax_node2(v___x_998_, v___x_999_, v___x_1004_, v___x_1007_);
v_a_975_ = v___x_1008_;
goto v___jp_974_;
}
else
{
lean_object* v_toCold_1009_; lean_object* v_ref_1010_; lean_object* v_quotContext_1011_; lean_object* v_currMacroScope_1012_; uint8_t v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; 
lean_dec(v___x_991_);
v_toCold_1009_ = lean_ctor_get(v_a_967_, 0);
v_ref_1010_ = lean_ctor_get(v_a_967_, 2);
v_quotContext_1011_ = lean_ctor_get(v_toCold_1009_, 8);
v_currMacroScope_1012_ = lean_ctor_get(v_toCold_1009_, 9);
v___x_1013_ = 0;
v___x_1014_ = l_Lean_SourceInfo_fromRef(v_ref_1010_, v___x_1013_);
v___x_1015_ = ((lean_object*)(l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__16));
v___x_1016_ = ((lean_object*)(l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__18));
v___x_1017_ = ((lean_object*)(l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__19));
lean_inc_n(v___x_1014_, 12);
v___x_1018_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1018_, 0, v___x_1014_);
lean_ctor_set(v___x_1018_, 1, v___x_1017_);
v___x_1019_ = ((lean_object*)(l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__21));
v___x_1020_ = lean_obj_once(&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__22, &l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__22_once, _init_l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__22);
lean_inc_n(v_currMacroScope_1012_, 4);
lean_inc_n(v_quotContext_1011_, 4);
v___x_1021_ = l_Lean_addMacroScope(v_quotContext_1011_, v___x_987_, v_currMacroScope_1012_);
v___x_1022_ = ((lean_object*)(l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__35));
v___x_1023_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1023_, 0, v___x_1014_);
lean_ctor_set(v___x_1023_, 1, v___x_1020_);
lean_ctor_set(v___x_1023_, 2, v___x_1021_);
lean_ctor_set(v___x_1023_, 3, v___x_1022_);
v___x_1024_ = l_Lean_Syntax_node1(v___x_1014_, v___x_1019_, v___x_1023_);
v___x_1025_ = l_Lean_Syntax_node2(v___x_1014_, v___x_1016_, v___x_1018_, v___x_1024_);
v___x_1026_ = lean_obj_once(&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__37, &l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__37_once, _init_l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__37);
v___x_1027_ = ((lean_object*)(l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__38));
v___x_1028_ = l_Lean_addMacroScope(v_quotContext_1011_, v___x_1027_, v_currMacroScope_1012_);
v___x_1029_ = ((lean_object*)(l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__41));
v___x_1030_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1030_, 0, v___x_1014_);
lean_ctor_set(v___x_1030_, 1, v___x_1026_);
lean_ctor_set(v___x_1030_, 2, v___x_1028_);
lean_ctor_set(v___x_1030_, 3, v___x_1029_);
v___x_1031_ = ((lean_object*)(l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__42));
v___x_1032_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1032_, 0, v___x_1014_);
lean_ctor_set(v___x_1032_, 1, v___x_1031_);
v___x_1033_ = ((lean_object*)(l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__14));
v___x_1034_ = ((lean_object*)(l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__5));
v___x_1035_ = lean_obj_once(&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__43, &l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__43_once, _init_l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__43);
v___x_1036_ = ((lean_object*)(l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__44));
v___x_1037_ = l_Lean_addMacroScope(v_quotContext_1011_, v___x_1036_, v_currMacroScope_1012_);
v___x_1038_ = ((lean_object*)(l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__51));
v___x_1039_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1039_, 0, v___x_1014_);
lean_ctor_set(v___x_1039_, 1, v___x_1035_);
lean_ctor_set(v___x_1039_, 2, v___x_1037_);
lean_ctor_set(v___x_1039_, 3, v___x_1038_);
v___x_1040_ = lean_obj_once(&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__53, &l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__53_once, _init_l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__53);
v___x_1041_ = ((lean_object*)(l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__54));
v___x_1042_ = l_Lean_addMacroScope(v_quotContext_1011_, v___x_1041_, v_currMacroScope_1012_);
v___x_1043_ = ((lean_object*)(l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__61));
v___x_1044_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1044_, 0, v___x_1014_);
lean_ctor_set(v___x_1044_, 1, v___x_1040_);
lean_ctor_set(v___x_1044_, 2, v___x_1042_);
lean_ctor_set(v___x_1044_, 3, v___x_1043_);
v___x_1045_ = l_Lean_Syntax_node1(v___x_1014_, v___x_1033_, v___x_1044_);
v___x_1046_ = l_Lean_Syntax_node2(v___x_1014_, v___x_1034_, v___x_1039_, v___x_1045_);
v___x_1047_ = l_Lean_Syntax_node1(v___x_1014_, v___x_1033_, v___x_1046_);
v___x_1048_ = ((lean_object*)(l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__62));
v___x_1049_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1049_, 0, v___x_1014_);
lean_ctor_set(v___x_1049_, 1, v___x_1048_);
v___x_1050_ = l_Lean_Syntax_node5(v___x_1014_, v___x_1015_, v___x_1025_, v___x_1030_, v___x_1032_, v___x_1047_, v___x_1049_);
v_a_975_ = v___x_1050_;
goto v___jp_974_;
}
}
else
{
lean_object* v___x_1051_; uint8_t v___x_1052_; lean_object* v___x_1053_; lean_object* v___y_1055_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; 
lean_dec(v___x_988_);
v___x_1051_ = ((lean_object*)(l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__64));
v___x_1052_ = 0;
v___x_1053_ = l_Lean_mkCIdentFrom(v_stx_961_, v___x_1051_, v___x_1052_);
v___x_1059_ = l_Lean_TSyntax_getId(v___x_982_);
lean_dec(v___x_982_);
v___x_1060_ = lean_box(0);
lean_inc(v___x_1059_);
v___x_1061_ = l___private_Init_Meta_Defs_0__Lean_getEscapedNameParts_x3f(v___x_1060_, v___x_1059_);
if (lean_obj_tag(v___x_1061_) == 0)
{
lean_object* v___x_1062_; 
v___x_1062_ = l_Lean_quoteNameMk(v___x_1059_);
v___y_1055_ = v___x_1062_;
goto v___jp_1054_;
}
else
{
lean_object* v_val_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; 
lean_dec(v___x_1059_);
v_val_1063_ = lean_ctor_get(v___x_1061_, 0);
lean_inc(v_val_1063_);
lean_dec_ref_known(v___x_1061_, 1);
v___x_1064_ = ((lean_object*)(l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__66));
v___x_1065_ = ((lean_object*)(l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__67));
v___x_1066_ = ((lean_object*)(l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__68));
v___x_1067_ = lean_string_intercalate(v___x_1066_, v_val_1063_);
v___x_1068_ = lean_string_append(v___x_1065_, v___x_1067_);
lean_dec_ref(v___x_1067_);
v___x_1069_ = lean_box(2);
v___x_1070_ = l_Lean_Syntax_mkNameLit(v___x_1068_, v___x_1069_);
v___x_1071_ = lean_mk_empty_array_with_capacity(v___x_981_);
v___x_1072_ = lean_array_push(v___x_1071_, v___x_1070_);
v___x_1073_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1073_, 0, v___x_1069_);
lean_ctor_set(v___x_1073_, 1, v___x_1064_);
lean_ctor_set(v___x_1073_, 2, v___x_1072_);
v___y_1055_ = v___x_1073_;
goto v___jp_1054_;
}
v___jp_1054_:
{
lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; 
v___x_1056_ = lean_mk_empty_array_with_capacity(v___x_981_);
v___x_1057_ = lean_array_push(v___x_1056_, v___y_1055_);
v___x_1058_ = l_Lean_Syntax_mkApp(v___x_1053_, v___x_1057_);
lean_dec_ref(v___x_1057_);
v_a_975_ = v___x_1058_;
goto v___jp_974_;
}
}
}
v___jp_974_:
{
lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; 
v___x_976_ = lean_box(v___x_973_);
v___x_977_ = lean_box(v___x_973_);
lean_inc(v_a_975_);
v___x_978_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabTerm___boxed), 11, 4);
lean_closure_set(v___x_978_, 0, v_a_975_);
lean_closure_set(v___x_978_, 1, v_expectedType_x3f_962_);
lean_closure_set(v___x_978_, 2, v___x_976_);
lean_closure_set(v___x_978_, 3, v___x_977_);
v___x_979_ = l_Lean_Elab_Term_withMacroExpansion___at___00__private_Lake_DSL_Config_0__Lake_DSL_elabNameConst_spec__0___redArg(v_stx_961_, v_a_975_, v___x_978_, v_a_963_, v_a_964_, v_a_965_, v_a_966_, v_a_967_, v_a_968_);
return v___x_979_;
}
}
else
{
lean_object* v_a_1074_; lean_object* v___x_1076_; uint8_t v_isShared_1077_; uint8_t v_isSharedCheck_1081_; 
lean_dec(v_expectedType_x3f_962_);
lean_dec(v_stx_961_);
v_a_1074_ = lean_ctor_get(v___x_971_, 0);
v_isSharedCheck_1081_ = !lean_is_exclusive(v___x_971_);
if (v_isSharedCheck_1081_ == 0)
{
v___x_1076_ = v___x_971_;
v_isShared_1077_ = v_isSharedCheck_1081_;
goto v_resetjp_1075_;
}
else
{
lean_inc(v_a_1074_);
lean_dec(v___x_971_);
v___x_1076_ = lean_box(0);
v_isShared_1077_ = v_isSharedCheck_1081_;
goto v_resetjp_1075_;
}
v_resetjp_1075_:
{
lean_object* v___x_1079_; 
if (v_isShared_1077_ == 0)
{
v___x_1079_ = v___x_1076_;
goto v_reusejp_1078_;
}
else
{
lean_object* v_reuseFailAlloc_1080_; 
v_reuseFailAlloc_1080_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1080_, 0, v_a_1074_);
v___x_1079_ = v_reuseFailAlloc_1080_;
goto v_reusejp_1078_;
}
v_reusejp_1078_:
{
return v___x_1079_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___boxed(lean_object* v_stx_1082_, lean_object* v_expectedType_x3f_1083_, lean_object* v_a_1084_, lean_object* v_a_1085_, lean_object* v_a_1086_, lean_object* v_a_1087_, lean_object* v_a_1088_, lean_object* v_a_1089_, lean_object* v_a_1090_){
_start:
{
lean_object* v_res_1091_; 
v_res_1091_ = l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig(v_stx_1082_, v_expectedType_x3f_1083_, v_a_1084_, v_a_1085_, v_a_1086_, v_a_1087_, v_a_1088_, v_a_1089_);
lean_dec(v_a_1089_);
lean_dec_ref(v_a_1088_);
lean_dec(v_a_1087_);
lean_dec_ref(v_a_1086_);
lean_dec(v_a_1085_);
lean_dec_ref(v_a_1084_);
return v_res_1091_;
}
}
static lean_object* _init_l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig__1___closed__1(void){
_start:
{
lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; 
v___x_1093_ = ((lean_object*)(l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig__1___closed__0));
v___x_1094_ = lean_obj_once(&l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__12, &l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__12_once, _init_l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1___closed__12);
v___x_1095_ = l_Lean_Name_str___override(v___x_1094_, v___x_1093_);
return v___x_1095_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig__1(){
_start:
{
lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; 
v___x_1097_ = l_Lean_Elab_Term_termElabAttribute;
v___x_1098_ = ((lean_object*)(l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___closed__1));
v___x_1099_ = lean_obj_once(&l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig__1___closed__1, &l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig__1___closed__1_once, _init_l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig__1___closed__1);
v___x_1100_ = lean_alloc_closure((void*)(l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___boxed), 9, 0);
v___x_1101_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1097_, v___x_1098_, v___x_1099_, v___x_1100_);
return v___x_1101_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig__1___boxed(lean_object* v_a_1102_){
_start:
{
lean_object* v_res_1103_; 
v_res_1103_ = l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig__1();
return v_res_1103_;
}
}
lean_object* runtime_initialize_Lean_Elab_Term(uint8_t builtin);
lean_object* runtime_initialize_Lake_DSL_Extensions(uint8_t builtin);
lean_object* runtime_initialize_Lake_DSL_Syntax(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_Name(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_DSL_Config(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lean_Elab_Term(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_DSL_Extensions(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_DSL_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabNameConst__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabDirConst__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig___regBuiltin___private_Lake_DSL_Config_0__Lake_DSL_elabGetConfig__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_DSL_Config(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Term(uint8_t builtin);
lean_object* initialize_Lake_DSL_Extensions(uint8_t builtin);
lean_object* initialize_Lake_DSL_Syntax(uint8_t builtin);
lean_object* initialize_Lake_Util_Name(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_DSL_Config(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Term(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_DSL_Extensions(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_DSL_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_DSL_Config(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_DSL_Config(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_DSL_Config(builtin);
}
#ifdef __cplusplus
}
#endif

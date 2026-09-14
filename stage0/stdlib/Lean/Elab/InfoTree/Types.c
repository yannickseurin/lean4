// Lean compiler output
// Module: Lean.Elab.InfoTree.Types
// Imports: public import Lean.Data.DeclarationRange public import Lean.Data.OpenDecl public import Lean.Data.PPContext public import Lean.MetavarContext public import Lean.Environment public import Lean.Widget.Types
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
extern lean_object* l_Lean_instInhabitedLocalContext_default;
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedPersistentArray_default___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_PartialContextInfo_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PartialContextInfo_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PartialContextInfo_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PartialContextInfo_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PartialContextInfo_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PartialContextInfo_commandCtx_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PartialContextInfo_commandCtx_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PartialContextInfo_parentDeclCtx_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PartialContextInfo_parentDeclCtx_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PartialContextInfo_autoImplicitCtx_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PartialContextInfo_autoImplicitCtx_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_instInhabitedElabInfo_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instInhabitedElabInfo_default___closed__0;
static lean_once_cell_t l_Lean_Elab_instInhabitedElabInfo_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instInhabitedElabInfo_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_instInhabitedElabInfo_default;
LEAN_EXPORT lean_object* l_Lean_Elab_instInhabitedElabInfo;
static const lean_string_object l_Lean_Elab_instInhabitedTermInfo_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "_inhabitedExprDummy"};
static const lean_object* l_Lean_Elab_instInhabitedTermInfo_default___closed__0 = (const lean_object*)&l_Lean_Elab_instInhabitedTermInfo_default___closed__0_value;
static const lean_ctor_object l_Lean_Elab_instInhabitedTermInfo_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_instInhabitedTermInfo_default___closed__0_value),LEAN_SCALAR_PTR_LITERAL(37, 247, 56, 151, 29, 116, 116, 243)}};
static const lean_object* l_Lean_Elab_instInhabitedTermInfo_default___closed__1 = (const lean_object*)&l_Lean_Elab_instInhabitedTermInfo_default___closed__1_value;
static lean_once_cell_t l_Lean_Elab_instInhabitedTermInfo_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instInhabitedTermInfo_default___closed__2;
static lean_once_cell_t l_Lean_Elab_instInhabitedTermInfo_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instInhabitedTermInfo_default___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_instInhabitedTermInfo_default;
LEAN_EXPORT lean_object* l_Lean_Elab_instInhabitedTermInfo;
static lean_once_cell_t l_Lean_Elab_instInhabitedPartialTermInfo_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instInhabitedPartialTermInfo_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_instInhabitedPartialTermInfo_default;
LEAN_EXPORT lean_object* l_Lean_Elab_instInhabitedPartialTermInfo;
LEAN_EXPORT lean_object* l_Lean_Elab_instInhabitedCommandInfo_default;
LEAN_EXPORT lean_object* l_Lean_Elab_instInhabitedCommandInfo;
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_dot_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_dot_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_id_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_id_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_dotId_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_dotId_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_fieldId_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_fieldId_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_namespaceId_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_namespaceId_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_option_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_option_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_errorName_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_errorName_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_endSection_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_endSection_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_tactic_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_tactic_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_instInhabitedFieldInfo_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instInhabitedFieldInfo_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_instInhabitedFieldInfo_default;
LEAN_EXPORT lean_object* l_Lean_Elab_instInhabitedFieldInfo;
static lean_once_cell_t l_Lean_Elab_instInhabitedTacticInfo_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instInhabitedTacticInfo_default___closed__0;
static lean_once_cell_t l_Lean_Elab_instInhabitedTacticInfo_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instInhabitedTacticInfo_default___closed__1;
static lean_once_cell_t l_Lean_Elab_instInhabitedTacticInfo_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instInhabitedTacticInfo_default___closed__2;
static lean_once_cell_t l_Lean_Elab_instInhabitedTacticInfo_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instInhabitedTacticInfo_default___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_instInhabitedTacticInfo_default;
LEAN_EXPORT lean_object* l_Lean_Elab_instInhabitedTacticInfo;
static lean_once_cell_t l_Lean_Elab_instInhabitedMacroExpansionInfo_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instInhabitedMacroExpansionInfo_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_instInhabitedMacroExpansionInfo_default;
LEAN_EXPORT lean_object* l_Lean_Elab_instInhabitedMacroExpansionInfo;
LEAN_EXPORT lean_object* l_Lean_Elab_DocElabKind_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_DocElabKind_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_DocElabKind_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_DocElabKind_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_DocElabKind_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_DocElabKind_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_DocElabKind_role_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_DocElabKind_role_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_DocElabKind_role_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_DocElabKind_role_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_DocElabKind_codeBlock_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_DocElabKind_codeBlock_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_DocElabKind_codeBlock_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_DocElabKind_codeBlock_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_DocElabKind_directive_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_DocElabKind_directive_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_DocElabKind_directive_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_DocElabKind_directive_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_DocElabKind_command_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_DocElabKind_command_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_DocElabKind_command_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_DocElabKind_command_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_instReprDocElabKind_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lean.Elab.DocElabKind.role"};
static const lean_object* l_Lean_Elab_instReprDocElabKind_repr___closed__0 = (const lean_object*)&l_Lean_Elab_instReprDocElabKind_repr___closed__0_value;
static const lean_ctor_object l_Lean_Elab_instReprDocElabKind_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instReprDocElabKind_repr___closed__0_value)}};
static const lean_object* l_Lean_Elab_instReprDocElabKind_repr___closed__1 = (const lean_object*)&l_Lean_Elab_instReprDocElabKind_repr___closed__1_value;
static const lean_string_object l_Lean_Elab_instReprDocElabKind_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lean.Elab.DocElabKind.codeBlock"};
static const lean_object* l_Lean_Elab_instReprDocElabKind_repr___closed__2 = (const lean_object*)&l_Lean_Elab_instReprDocElabKind_repr___closed__2_value;
static const lean_ctor_object l_Lean_Elab_instReprDocElabKind_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instReprDocElabKind_repr___closed__2_value)}};
static const lean_object* l_Lean_Elab_instReprDocElabKind_repr___closed__3 = (const lean_object*)&l_Lean_Elab_instReprDocElabKind_repr___closed__3_value;
static const lean_string_object l_Lean_Elab_instReprDocElabKind_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lean.Elab.DocElabKind.directive"};
static const lean_object* l_Lean_Elab_instReprDocElabKind_repr___closed__4 = (const lean_object*)&l_Lean_Elab_instReprDocElabKind_repr___closed__4_value;
static const lean_ctor_object l_Lean_Elab_instReprDocElabKind_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instReprDocElabKind_repr___closed__4_value)}};
static const lean_object* l_Lean_Elab_instReprDocElabKind_repr___closed__5 = (const lean_object*)&l_Lean_Elab_instReprDocElabKind_repr___closed__5_value;
static const lean_string_object l_Lean_Elab_instReprDocElabKind_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lean.Elab.DocElabKind.command"};
static const lean_object* l_Lean_Elab_instReprDocElabKind_repr___closed__6 = (const lean_object*)&l_Lean_Elab_instReprDocElabKind_repr___closed__6_value;
static const lean_ctor_object l_Lean_Elab_instReprDocElabKind_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instReprDocElabKind_repr___closed__6_value)}};
static const lean_object* l_Lean_Elab_instReprDocElabKind_repr___closed__7 = (const lean_object*)&l_Lean_Elab_instReprDocElabKind_repr___closed__7_value;
static lean_once_cell_t l_Lean_Elab_instReprDocElabKind_repr___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instReprDocElabKind_repr___closed__8;
static lean_once_cell_t l_Lean_Elab_instReprDocElabKind_repr___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instReprDocElabKind_repr___closed__9;
LEAN_EXPORT lean_object* l_Lean_Elab_instReprDocElabKind_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_instReprDocElabKind_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_instReprDocElabKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_instReprDocElabKind_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_instReprDocElabKind___closed__0 = (const lean_object*)&l_Lean_Elab_instReprDocElabKind___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_instReprDocElabKind = (const lean_object*)&l_Lean_Elab_instReprDocElabKind___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofTacticInfo_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofTacticInfo_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofTermInfo_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofTermInfo_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofPartialTermInfo_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofPartialTermInfo_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofCommandInfo_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofCommandInfo_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofMacroExpansionInfo_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofMacroExpansionInfo_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofOptionInfo_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofOptionInfo_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofErrorNameInfo_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofErrorNameInfo_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofFieldInfo_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofFieldInfo_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofCompletionInfo_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofCompletionInfo_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofUserWidgetInfo_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofUserWidgetInfo_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofCustomInfo_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofCustomInfo_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofFVarAliasInfo_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofFVarAliasInfo_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofFieldRedeclInfo_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofFieldRedeclInfo_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofDelabTermInfo_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofDelabTermInfo_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofChoiceInfo_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofChoiceInfo_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofDocInfo_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofDocInfo_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofDocElabInfo_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofDocElabInfo_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_instInhabitedInfo_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instInhabitedInfo_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_instInhabitedInfo_default;
LEAN_EXPORT lean_object* l_Lean_Elab_instInhabitedInfo;
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_context_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_context_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_node_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_node_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_hole_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_hole_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_instInhabitedInfoTree_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instInhabitedInfoTree_default___closed__0;
static lean_once_cell_t l_Lean_Elab_instInhabitedInfoTree_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instInhabitedInfoTree_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_instInhabitedInfoTree_default;
LEAN_EXPORT lean_object* l_Lean_Elab_instInhabitedInfoTree;
static lean_once_cell_t l_Lean_Elab_instInhabitedInfoState_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instInhabitedInfoState_default___closed__0;
static lean_once_cell_t l_Lean_Elab_instInhabitedInfoState_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instInhabitedInfoState_default___closed__1;
static lean_once_cell_t l_Lean_Elab_instInhabitedInfoState_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instInhabitedInfoState_default___closed__2;
static lean_once_cell_t l_Lean_Elab_instInhabitedInfoState_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instInhabitedInfoState_default___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_instInhabitedInfoState_default;
LEAN_EXPORT lean_object* l_Lean_Elab_instInhabitedInfoState;
LEAN_EXPORT lean_object* l_Lean_Elab_instMonadInfoTreeOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_instMonadInfoTreeOfMonadLift___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_instMonadInfoTreeOfMonadLift(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_setInfoState___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_setInfoState___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_setInfoState___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_setInfoState(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PartialContextInfo_ctorIdx(lean_object* v_x_1_){
_start:
{
switch(lean_obj_tag(v_x_1_))
{
case 0:
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
case 1:
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
default: 
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PartialContextInfo_ctorIdx___boxed(lean_object* v_x_5_){
_start:
{
lean_object* v_res_6_; 
v_res_6_ = l_Lean_Elab_PartialContextInfo_ctorIdx(v_x_5_);
lean_dec_ref(v_x_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PartialContextInfo_ctorElim___redArg(lean_object* v_t_7_, lean_object* v_k_8_){
_start:
{
if (lean_obj_tag(v_t_7_) == 1)
{
lean_object* v_parentDecl_9_; lean_object* v___x_10_; 
v_parentDecl_9_ = lean_ctor_get(v_t_7_, 0);
lean_inc(v_parentDecl_9_);
lean_dec_ref_known(v_t_7_, 1);
v___x_10_ = lean_apply_1(v_k_8_, v_parentDecl_9_);
return v___x_10_;
}
else
{
lean_object* v_info_11_; lean_object* v___x_12_; 
v_info_11_ = lean_ctor_get(v_t_7_, 0);
lean_inc_ref(v_info_11_);
lean_dec_ref(v_t_7_);
v___x_12_ = lean_apply_1(v_k_8_, v_info_11_);
return v___x_12_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PartialContextInfo_ctorElim(lean_object* v_motive_13_, lean_object* v_ctorIdx_14_, lean_object* v_t_15_, lean_object* v_h_16_, lean_object* v_k_17_){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = l_Lean_Elab_PartialContextInfo_ctorElim___redArg(v_t_15_, v_k_17_);
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PartialContextInfo_ctorElim___boxed(lean_object* v_motive_19_, lean_object* v_ctorIdx_20_, lean_object* v_t_21_, lean_object* v_h_22_, lean_object* v_k_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_Lean_Elab_PartialContextInfo_ctorElim(v_motive_19_, v_ctorIdx_20_, v_t_21_, v_h_22_, v_k_23_);
lean_dec(v_ctorIdx_20_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PartialContextInfo_commandCtx_elim___redArg(lean_object* v_t_25_, lean_object* v_commandCtx_26_){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = l_Lean_Elab_PartialContextInfo_ctorElim___redArg(v_t_25_, v_commandCtx_26_);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PartialContextInfo_commandCtx_elim(lean_object* v_motive_28_, lean_object* v_t_29_, lean_object* v_h_30_, lean_object* v_commandCtx_31_){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = l_Lean_Elab_PartialContextInfo_ctorElim___redArg(v_t_29_, v_commandCtx_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PartialContextInfo_parentDeclCtx_elim___redArg(lean_object* v_t_33_, lean_object* v_parentDeclCtx_34_){
_start:
{
lean_object* v___x_35_; 
v___x_35_ = l_Lean_Elab_PartialContextInfo_ctorElim___redArg(v_t_33_, v_parentDeclCtx_34_);
return v___x_35_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PartialContextInfo_parentDeclCtx_elim(lean_object* v_motive_36_, lean_object* v_t_37_, lean_object* v_h_38_, lean_object* v_parentDeclCtx_39_){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = l_Lean_Elab_PartialContextInfo_ctorElim___redArg(v_t_37_, v_parentDeclCtx_39_);
return v___x_40_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PartialContextInfo_autoImplicitCtx_elim___redArg(lean_object* v_t_41_, lean_object* v_autoImplicitCtx_42_){
_start:
{
lean_object* v___x_43_; 
v___x_43_ = l_Lean_Elab_PartialContextInfo_ctorElim___redArg(v_t_41_, v_autoImplicitCtx_42_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PartialContextInfo_autoImplicitCtx_elim(lean_object* v_motive_44_, lean_object* v_t_45_, lean_object* v_h_46_, lean_object* v_autoImplicitCtx_47_){
_start:
{
lean_object* v___x_48_; 
v___x_48_ = l_Lean_Elab_PartialContextInfo_ctorElim___redArg(v_t_45_, v_autoImplicitCtx_47_);
return v___x_48_;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedElabInfo_default___closed__0(void){
_start:
{
lean_object* v___x_49_; lean_object* v___x_50_; 
v___x_49_ = lean_box(0);
v___x_50_ = l_unsafeCast___redArg(v___x_49_);
return v___x_50_;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedElabInfo_default___closed__1(void){
_start:
{
lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; 
v___x_51_ = lean_box(0);
v___x_52_ = lean_obj_once(&l_Lean_Elab_instInhabitedElabInfo_default___closed__0, &l_Lean_Elab_instInhabitedElabInfo_default___closed__0_once, _init_l_Lean_Elab_instInhabitedElabInfo_default___closed__0);
v___x_53_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_53_, 0, v___x_52_);
lean_ctor_set(v___x_53_, 1, v___x_51_);
return v___x_53_;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedElabInfo_default(void){
_start:
{
lean_object* v___x_54_; 
v___x_54_ = lean_obj_once(&l_Lean_Elab_instInhabitedElabInfo_default___closed__1, &l_Lean_Elab_instInhabitedElabInfo_default___closed__1_once, _init_l_Lean_Elab_instInhabitedElabInfo_default___closed__1);
return v___x_54_;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedElabInfo(void){
_start:
{
lean_object* v___x_55_; 
v___x_55_ = l_Lean_Elab_instInhabitedElabInfo_default;
return v___x_55_;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedTermInfo_default___closed__2(void){
_start:
{
lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; 
v___x_59_ = lean_box(0);
v___x_60_ = ((lean_object*)(l_Lean_Elab_instInhabitedTermInfo_default___closed__1));
v___x_61_ = l_Lean_Expr_const___override(v___x_60_, v___x_59_);
return v___x_61_;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedTermInfo_default___closed__3(void){
_start:
{
uint8_t v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; 
v___x_62_ = 0;
v___x_63_ = lean_obj_once(&l_Lean_Elab_instInhabitedTermInfo_default___closed__2, &l_Lean_Elab_instInhabitedTermInfo_default___closed__2_once, _init_l_Lean_Elab_instInhabitedTermInfo_default___closed__2);
v___x_64_ = lean_box(0);
v___x_65_ = l_Lean_instInhabitedLocalContext_default;
v___x_66_ = l_Lean_Elab_instInhabitedElabInfo_default;
v___x_67_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_67_, 0, v___x_66_);
lean_ctor_set(v___x_67_, 1, v___x_65_);
lean_ctor_set(v___x_67_, 2, v___x_64_);
lean_ctor_set(v___x_67_, 3, v___x_63_);
lean_ctor_set_uint8(v___x_67_, sizeof(void*)*4, v___x_62_);
lean_ctor_set_uint8(v___x_67_, sizeof(void*)*4 + 1, v___x_62_);
return v___x_67_;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedTermInfo_default(void){
_start:
{
lean_object* v___x_68_; 
v___x_68_ = lean_obj_once(&l_Lean_Elab_instInhabitedTermInfo_default___closed__3, &l_Lean_Elab_instInhabitedTermInfo_default___closed__3_once, _init_l_Lean_Elab_instInhabitedTermInfo_default___closed__3);
return v___x_68_;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedTermInfo(void){
_start:
{
lean_object* v___x_69_; 
v___x_69_ = l_Lean_Elab_instInhabitedTermInfo_default;
return v___x_69_;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedPartialTermInfo_default___closed__0(void){
_start:
{
lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; 
v___x_70_ = lean_box(0);
v___x_71_ = l_Lean_instInhabitedLocalContext_default;
v___x_72_ = l_Lean_Elab_instInhabitedElabInfo_default;
v___x_73_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_73_, 0, v___x_72_);
lean_ctor_set(v___x_73_, 1, v___x_71_);
lean_ctor_set(v___x_73_, 2, v___x_70_);
return v___x_73_;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedPartialTermInfo_default(void){
_start:
{
lean_object* v___x_74_; 
v___x_74_ = lean_obj_once(&l_Lean_Elab_instInhabitedPartialTermInfo_default___closed__0, &l_Lean_Elab_instInhabitedPartialTermInfo_default___closed__0_once, _init_l_Lean_Elab_instInhabitedPartialTermInfo_default___closed__0);
return v___x_74_;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedPartialTermInfo(void){
_start:
{
lean_object* v___x_75_; 
v___x_75_ = l_Lean_Elab_instInhabitedPartialTermInfo_default;
return v___x_75_;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedCommandInfo_default(void){
_start:
{
lean_object* v___x_76_; 
v___x_76_ = l_Lean_Elab_instInhabitedElabInfo_default;
return v___x_76_;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedCommandInfo(void){
_start:
{
lean_object* v___x_77_; 
v___x_77_ = l_Lean_Elab_instInhabitedElabInfo_default;
return v___x_77_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_ctorIdx(lean_object* v_x_78_){
_start:
{
switch(lean_obj_tag(v_x_78_))
{
case 0:
{
lean_object* v___x_79_; 
v___x_79_ = lean_unsigned_to_nat(0u);
return v___x_79_;
}
case 1:
{
lean_object* v___x_80_; 
v___x_80_ = lean_unsigned_to_nat(1u);
return v___x_80_;
}
case 2:
{
lean_object* v___x_81_; 
v___x_81_ = lean_unsigned_to_nat(2u);
return v___x_81_;
}
case 3:
{
lean_object* v___x_82_; 
v___x_82_ = lean_unsigned_to_nat(3u);
return v___x_82_;
}
case 4:
{
lean_object* v___x_83_; 
v___x_83_ = lean_unsigned_to_nat(4u);
return v___x_83_;
}
case 5:
{
lean_object* v___x_84_; 
v___x_84_ = lean_unsigned_to_nat(5u);
return v___x_84_;
}
case 6:
{
lean_object* v___x_85_; 
v___x_85_ = lean_unsigned_to_nat(6u);
return v___x_85_;
}
case 7:
{
lean_object* v___x_86_; 
v___x_86_ = lean_unsigned_to_nat(7u);
return v___x_86_;
}
default: 
{
lean_object* v___x_87_; 
v___x_87_ = lean_unsigned_to_nat(8u);
return v___x_87_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_ctorIdx___boxed(lean_object* v_x_88_){
_start:
{
lean_object* v_res_89_; 
v_res_89_ = l_Lean_Elab_CompletionInfo_ctorIdx(v_x_88_);
lean_dec_ref(v_x_88_);
return v_res_89_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_ctorElim___redArg(lean_object* v_t_90_, lean_object* v_k_91_){
_start:
{
switch(lean_obj_tag(v_t_90_))
{
case 0:
{
lean_object* v_termInfo_92_; lean_object* v_expectedType_x3f_93_; lean_object* v___x_94_; 
v_termInfo_92_ = lean_ctor_get(v_t_90_, 0);
lean_inc_ref(v_termInfo_92_);
v_expectedType_x3f_93_ = lean_ctor_get(v_t_90_, 1);
lean_inc(v_expectedType_x3f_93_);
lean_dec_ref_known(v_t_90_, 2);
v___x_94_ = lean_apply_2(v_k_91_, v_termInfo_92_, v_expectedType_x3f_93_);
return v___x_94_;
}
case 1:
{
lean_object* v_stx_95_; lean_object* v_id_96_; uint8_t v_danglingDot_97_; lean_object* v_lctx_98_; lean_object* v_expectedType_x3f_99_; lean_object* v___x_100_; lean_object* v___x_101_; 
v_stx_95_ = lean_ctor_get(v_t_90_, 0);
lean_inc(v_stx_95_);
v_id_96_ = lean_ctor_get(v_t_90_, 1);
lean_inc(v_id_96_);
v_danglingDot_97_ = lean_ctor_get_uint8(v_t_90_, sizeof(void*)*4);
v_lctx_98_ = lean_ctor_get(v_t_90_, 2);
lean_inc_ref(v_lctx_98_);
v_expectedType_x3f_99_ = lean_ctor_get(v_t_90_, 3);
lean_inc(v_expectedType_x3f_99_);
lean_dec_ref_known(v_t_90_, 4);
v___x_100_ = lean_box(v_danglingDot_97_);
v___x_101_ = lean_apply_5(v_k_91_, v_stx_95_, v_id_96_, v___x_100_, v_lctx_98_, v_expectedType_x3f_99_);
return v___x_101_;
}
case 2:
{
lean_object* v_stx_102_; lean_object* v_id_103_; lean_object* v_lctx_104_; lean_object* v_expectedType_x3f_105_; lean_object* v___x_106_; 
v_stx_102_ = lean_ctor_get(v_t_90_, 0);
lean_inc(v_stx_102_);
v_id_103_ = lean_ctor_get(v_t_90_, 1);
lean_inc(v_id_103_);
v_lctx_104_ = lean_ctor_get(v_t_90_, 2);
lean_inc_ref(v_lctx_104_);
v_expectedType_x3f_105_ = lean_ctor_get(v_t_90_, 3);
lean_inc(v_expectedType_x3f_105_);
lean_dec_ref_known(v_t_90_, 4);
v___x_106_ = lean_apply_4(v_k_91_, v_stx_102_, v_id_103_, v_lctx_104_, v_expectedType_x3f_105_);
return v___x_106_;
}
case 3:
{
lean_object* v_stx_107_; lean_object* v_id_108_; lean_object* v_lctx_109_; lean_object* v_structName_110_; lean_object* v___x_111_; 
v_stx_107_ = lean_ctor_get(v_t_90_, 0);
lean_inc(v_stx_107_);
v_id_108_ = lean_ctor_get(v_t_90_, 1);
lean_inc(v_id_108_);
v_lctx_109_ = lean_ctor_get(v_t_90_, 2);
lean_inc_ref(v_lctx_109_);
v_structName_110_ = lean_ctor_get(v_t_90_, 3);
lean_inc(v_structName_110_);
lean_dec_ref_known(v_t_90_, 4);
v___x_111_ = lean_apply_4(v_k_91_, v_stx_107_, v_id_108_, v_lctx_109_, v_structName_110_);
return v___x_111_;
}
case 6:
{
lean_object* v_stx_112_; lean_object* v_partialId_113_; lean_object* v___x_114_; 
v_stx_112_ = lean_ctor_get(v_t_90_, 0);
lean_inc(v_stx_112_);
v_partialId_113_ = lean_ctor_get(v_t_90_, 1);
lean_inc(v_partialId_113_);
lean_dec_ref_known(v_t_90_, 2);
v___x_114_ = lean_apply_2(v_k_91_, v_stx_112_, v_partialId_113_);
return v___x_114_;
}
case 7:
{
lean_object* v_stx_115_; lean_object* v_id_x3f_116_; uint8_t v_danglingDot_117_; lean_object* v_scopeNames_118_; lean_object* v___x_119_; lean_object* v___x_120_; 
v_stx_115_ = lean_ctor_get(v_t_90_, 0);
lean_inc(v_stx_115_);
v_id_x3f_116_ = lean_ctor_get(v_t_90_, 1);
lean_inc(v_id_x3f_116_);
v_danglingDot_117_ = lean_ctor_get_uint8(v_t_90_, sizeof(void*)*3);
v_scopeNames_118_ = lean_ctor_get(v_t_90_, 2);
lean_inc(v_scopeNames_118_);
lean_dec_ref_known(v_t_90_, 3);
v___x_119_ = lean_box(v_danglingDot_117_);
v___x_120_ = lean_apply_4(v_k_91_, v_stx_115_, v_id_x3f_116_, v___x_119_, v_scopeNames_118_);
return v___x_120_;
}
default: 
{
lean_object* v_stx_121_; lean_object* v___x_122_; 
v_stx_121_ = lean_ctor_get(v_t_90_, 0);
lean_inc(v_stx_121_);
lean_dec_ref(v_t_90_);
v___x_122_ = lean_apply_1(v_k_91_, v_stx_121_);
return v___x_122_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_ctorElim(lean_object* v_motive_123_, lean_object* v_ctorIdx_124_, lean_object* v_t_125_, lean_object* v_h_126_, lean_object* v_k_127_){
_start:
{
lean_object* v___x_128_; 
v___x_128_ = l_Lean_Elab_CompletionInfo_ctorElim___redArg(v_t_125_, v_k_127_);
return v___x_128_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_ctorElim___boxed(lean_object* v_motive_129_, lean_object* v_ctorIdx_130_, lean_object* v_t_131_, lean_object* v_h_132_, lean_object* v_k_133_){
_start:
{
lean_object* v_res_134_; 
v_res_134_ = l_Lean_Elab_CompletionInfo_ctorElim(v_motive_129_, v_ctorIdx_130_, v_t_131_, v_h_132_, v_k_133_);
lean_dec(v_ctorIdx_130_);
return v_res_134_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_dot_elim___redArg(lean_object* v_t_135_, lean_object* v_dot_136_){
_start:
{
lean_object* v___x_137_; 
v___x_137_ = l_Lean_Elab_CompletionInfo_ctorElim___redArg(v_t_135_, v_dot_136_);
return v___x_137_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_dot_elim(lean_object* v_motive_138_, lean_object* v_t_139_, lean_object* v_h_140_, lean_object* v_dot_141_){
_start:
{
lean_object* v___x_142_; 
v___x_142_ = l_Lean_Elab_CompletionInfo_ctorElim___redArg(v_t_139_, v_dot_141_);
return v___x_142_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_id_elim___redArg(lean_object* v_t_143_, lean_object* v_id_144_){
_start:
{
lean_object* v___x_145_; 
v___x_145_ = l_Lean_Elab_CompletionInfo_ctorElim___redArg(v_t_143_, v_id_144_);
return v___x_145_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_id_elim(lean_object* v_motive_146_, lean_object* v_t_147_, lean_object* v_h_148_, lean_object* v_id_149_){
_start:
{
lean_object* v___x_150_; 
v___x_150_ = l_Lean_Elab_CompletionInfo_ctorElim___redArg(v_t_147_, v_id_149_);
return v___x_150_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_dotId_elim___redArg(lean_object* v_t_151_, lean_object* v_dotId_152_){
_start:
{
lean_object* v___x_153_; 
v___x_153_ = l_Lean_Elab_CompletionInfo_ctorElim___redArg(v_t_151_, v_dotId_152_);
return v___x_153_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_dotId_elim(lean_object* v_motive_154_, lean_object* v_t_155_, lean_object* v_h_156_, lean_object* v_dotId_157_){
_start:
{
lean_object* v___x_158_; 
v___x_158_ = l_Lean_Elab_CompletionInfo_ctorElim___redArg(v_t_155_, v_dotId_157_);
return v___x_158_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_fieldId_elim___redArg(lean_object* v_t_159_, lean_object* v_fieldId_160_){
_start:
{
lean_object* v___x_161_; 
v___x_161_ = l_Lean_Elab_CompletionInfo_ctorElim___redArg(v_t_159_, v_fieldId_160_);
return v___x_161_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_fieldId_elim(lean_object* v_motive_162_, lean_object* v_t_163_, lean_object* v_h_164_, lean_object* v_fieldId_165_){
_start:
{
lean_object* v___x_166_; 
v___x_166_ = l_Lean_Elab_CompletionInfo_ctorElim___redArg(v_t_163_, v_fieldId_165_);
return v___x_166_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_namespaceId_elim___redArg(lean_object* v_t_167_, lean_object* v_namespaceId_168_){
_start:
{
lean_object* v___x_169_; 
v___x_169_ = l_Lean_Elab_CompletionInfo_ctorElim___redArg(v_t_167_, v_namespaceId_168_);
return v___x_169_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_namespaceId_elim(lean_object* v_motive_170_, lean_object* v_t_171_, lean_object* v_h_172_, lean_object* v_namespaceId_173_){
_start:
{
lean_object* v___x_174_; 
v___x_174_ = l_Lean_Elab_CompletionInfo_ctorElim___redArg(v_t_171_, v_namespaceId_173_);
return v___x_174_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_option_elim___redArg(lean_object* v_t_175_, lean_object* v_option_176_){
_start:
{
lean_object* v___x_177_; 
v___x_177_ = l_Lean_Elab_CompletionInfo_ctorElim___redArg(v_t_175_, v_option_176_);
return v___x_177_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_option_elim(lean_object* v_motive_178_, lean_object* v_t_179_, lean_object* v_h_180_, lean_object* v_option_181_){
_start:
{
lean_object* v___x_182_; 
v___x_182_ = l_Lean_Elab_CompletionInfo_ctorElim___redArg(v_t_179_, v_option_181_);
return v___x_182_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_errorName_elim___redArg(lean_object* v_t_183_, lean_object* v_errorName_184_){
_start:
{
lean_object* v___x_185_; 
v___x_185_ = l_Lean_Elab_CompletionInfo_ctorElim___redArg(v_t_183_, v_errorName_184_);
return v___x_185_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_errorName_elim(lean_object* v_motive_186_, lean_object* v_t_187_, lean_object* v_h_188_, lean_object* v_errorName_189_){
_start:
{
lean_object* v___x_190_; 
v___x_190_ = l_Lean_Elab_CompletionInfo_ctorElim___redArg(v_t_187_, v_errorName_189_);
return v___x_190_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_endSection_elim___redArg(lean_object* v_t_191_, lean_object* v_endSection_192_){
_start:
{
lean_object* v___x_193_; 
v___x_193_ = l_Lean_Elab_CompletionInfo_ctorElim___redArg(v_t_191_, v_endSection_192_);
return v___x_193_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_endSection_elim(lean_object* v_motive_194_, lean_object* v_t_195_, lean_object* v_h_196_, lean_object* v_endSection_197_){
_start:
{
lean_object* v___x_198_; 
v___x_198_ = l_Lean_Elab_CompletionInfo_ctorElim___redArg(v_t_195_, v_endSection_197_);
return v___x_198_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_tactic_elim___redArg(lean_object* v_t_199_, lean_object* v_tactic_200_){
_start:
{
lean_object* v___x_201_; 
v___x_201_ = l_Lean_Elab_CompletionInfo_ctorElim___redArg(v_t_199_, v_tactic_200_);
return v___x_201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_tactic_elim(lean_object* v_motive_202_, lean_object* v_t_203_, lean_object* v_h_204_, lean_object* v_tactic_205_){
_start:
{
lean_object* v___x_206_; 
v___x_206_ = l_Lean_Elab_CompletionInfo_ctorElim___redArg(v_t_203_, v_tactic_205_);
return v___x_206_;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedFieldInfo_default___closed__0(void){
_start:
{
lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; 
v___x_207_ = lean_box(0);
v___x_208_ = lean_obj_once(&l_Lean_Elab_instInhabitedTermInfo_default___closed__2, &l_Lean_Elab_instInhabitedTermInfo_default___closed__2_once, _init_l_Lean_Elab_instInhabitedTermInfo_default___closed__2);
v___x_209_ = l_Lean_instInhabitedLocalContext_default;
v___x_210_ = lean_obj_once(&l_Lean_Elab_instInhabitedElabInfo_default___closed__0, &l_Lean_Elab_instInhabitedElabInfo_default___closed__0_once, _init_l_Lean_Elab_instInhabitedElabInfo_default___closed__0);
v___x_211_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_211_, 0, v___x_210_);
lean_ctor_set(v___x_211_, 1, v___x_210_);
lean_ctor_set(v___x_211_, 2, v___x_209_);
lean_ctor_set(v___x_211_, 3, v___x_208_);
lean_ctor_set(v___x_211_, 4, v___x_207_);
return v___x_211_;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedFieldInfo_default(void){
_start:
{
lean_object* v___x_212_; 
v___x_212_ = lean_obj_once(&l_Lean_Elab_instInhabitedFieldInfo_default___closed__0, &l_Lean_Elab_instInhabitedFieldInfo_default___closed__0_once, _init_l_Lean_Elab_instInhabitedFieldInfo_default___closed__0);
return v___x_212_;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedFieldInfo(void){
_start:
{
lean_object* v___x_213_; 
v___x_213_ = l_Lean_Elab_instInhabitedFieldInfo_default;
return v___x_213_;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedTacticInfo_default___closed__0(void){
_start:
{
lean_object* v___x_214_; 
v___x_214_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_214_;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedTacticInfo_default___closed__1(void){
_start:
{
lean_object* v___x_215_; lean_object* v___x_216_; 
v___x_215_ = lean_obj_once(&l_Lean_Elab_instInhabitedTacticInfo_default___closed__0, &l_Lean_Elab_instInhabitedTacticInfo_default___closed__0_once, _init_l_Lean_Elab_instInhabitedTacticInfo_default___closed__0);
v___x_216_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_216_, 0, v___x_215_);
return v___x_216_;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedTacticInfo_default___closed__2(void){
_start:
{
lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; 
v___x_217_ = lean_obj_once(&l_Lean_Elab_instInhabitedTacticInfo_default___closed__1, &l_Lean_Elab_instInhabitedTacticInfo_default___closed__1_once, _init_l_Lean_Elab_instInhabitedTacticInfo_default___closed__1);
v___x_218_ = lean_unsigned_to_nat(0u);
v___x_219_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_219_, 0, v___x_218_);
lean_ctor_set(v___x_219_, 1, v___x_218_);
lean_ctor_set(v___x_219_, 2, v___x_218_);
lean_ctor_set(v___x_219_, 3, v___x_218_);
lean_ctor_set(v___x_219_, 4, v___x_217_);
lean_ctor_set(v___x_219_, 5, v___x_217_);
lean_ctor_set(v___x_219_, 6, v___x_217_);
lean_ctor_set(v___x_219_, 7, v___x_217_);
lean_ctor_set(v___x_219_, 8, v___x_217_);
lean_ctor_set(v___x_219_, 9, v___x_217_);
lean_ctor_set(v___x_219_, 10, v___x_217_);
return v___x_219_;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedTacticInfo_default___closed__3(void){
_start:
{
lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; 
v___x_220_ = lean_box(0);
v___x_221_ = lean_obj_once(&l_Lean_Elab_instInhabitedTacticInfo_default___closed__2, &l_Lean_Elab_instInhabitedTacticInfo_default___closed__2_once, _init_l_Lean_Elab_instInhabitedTacticInfo_default___closed__2);
v___x_222_ = l_Lean_Elab_instInhabitedElabInfo_default;
v___x_223_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_223_, 0, v___x_222_);
lean_ctor_set(v___x_223_, 1, v___x_221_);
lean_ctor_set(v___x_223_, 2, v___x_220_);
lean_ctor_set(v___x_223_, 3, v___x_221_);
lean_ctor_set(v___x_223_, 4, v___x_220_);
return v___x_223_;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedTacticInfo_default(void){
_start:
{
lean_object* v___x_224_; 
v___x_224_ = lean_obj_once(&l_Lean_Elab_instInhabitedTacticInfo_default___closed__3, &l_Lean_Elab_instInhabitedTacticInfo_default___closed__3_once, _init_l_Lean_Elab_instInhabitedTacticInfo_default___closed__3);
return v___x_224_;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedTacticInfo(void){
_start:
{
lean_object* v___x_225_; 
v___x_225_ = l_Lean_Elab_instInhabitedTacticInfo_default;
return v___x_225_;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedMacroExpansionInfo_default___closed__0(void){
_start:
{
lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; 
v___x_226_ = lean_box(0);
v___x_227_ = l_Lean_instInhabitedLocalContext_default;
v___x_228_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_228_, 0, v___x_227_);
lean_ctor_set(v___x_228_, 1, v___x_226_);
lean_ctor_set(v___x_228_, 2, v___x_226_);
return v___x_228_;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedMacroExpansionInfo_default(void){
_start:
{
lean_object* v___x_229_; 
v___x_229_ = lean_obj_once(&l_Lean_Elab_instInhabitedMacroExpansionInfo_default___closed__0, &l_Lean_Elab_instInhabitedMacroExpansionInfo_default___closed__0_once, _init_l_Lean_Elab_instInhabitedMacroExpansionInfo_default___closed__0);
return v___x_229_;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedMacroExpansionInfo(void){
_start:
{
lean_object* v___x_230_; 
v___x_230_ = l_Lean_Elab_instInhabitedMacroExpansionInfo_default;
return v___x_230_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DocElabKind_ctorIdx(uint8_t v_x_231_){
_start:
{
switch(v_x_231_)
{
case 0:
{
lean_object* v___x_232_; 
v___x_232_ = lean_unsigned_to_nat(0u);
return v___x_232_;
}
case 1:
{
lean_object* v___x_233_; 
v___x_233_ = lean_unsigned_to_nat(1u);
return v___x_233_;
}
case 2:
{
lean_object* v___x_234_; 
v___x_234_ = lean_unsigned_to_nat(2u);
return v___x_234_;
}
default: 
{
lean_object* v___x_235_; 
v___x_235_ = lean_unsigned_to_nat(3u);
return v___x_235_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DocElabKind_ctorIdx___boxed(lean_object* v_x_236_){
_start:
{
uint8_t v_x_boxed_237_; lean_object* v_res_238_; 
v_x_boxed_237_ = lean_unbox(v_x_236_);
v_res_238_ = l_Lean_Elab_DocElabKind_ctorIdx(v_x_boxed_237_);
return v_res_238_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DocElabKind_ctorElim___redArg(lean_object* v_k_239_){
_start:
{
lean_inc(v_k_239_);
return v_k_239_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DocElabKind_ctorElim___redArg___boxed(lean_object* v_k_240_){
_start:
{
lean_object* v_res_241_; 
v_res_241_ = l_Lean_Elab_DocElabKind_ctorElim___redArg(v_k_240_);
lean_dec(v_k_240_);
return v_res_241_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DocElabKind_ctorElim(lean_object* v_motive_242_, lean_object* v_ctorIdx_243_, uint8_t v_t_244_, lean_object* v_h_245_, lean_object* v_k_246_){
_start:
{
lean_inc(v_k_246_);
return v_k_246_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DocElabKind_ctorElim___boxed(lean_object* v_motive_247_, lean_object* v_ctorIdx_248_, lean_object* v_t_249_, lean_object* v_h_250_, lean_object* v_k_251_){
_start:
{
uint8_t v_t_boxed_252_; lean_object* v_res_253_; 
v_t_boxed_252_ = lean_unbox(v_t_249_);
v_res_253_ = l_Lean_Elab_DocElabKind_ctorElim(v_motive_247_, v_ctorIdx_248_, v_t_boxed_252_, v_h_250_, v_k_251_);
lean_dec(v_k_251_);
lean_dec(v_ctorIdx_248_);
return v_res_253_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DocElabKind_role_elim___redArg(lean_object* v_role_254_){
_start:
{
lean_inc(v_role_254_);
return v_role_254_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DocElabKind_role_elim___redArg___boxed(lean_object* v_role_255_){
_start:
{
lean_object* v_res_256_; 
v_res_256_ = l_Lean_Elab_DocElabKind_role_elim___redArg(v_role_255_);
lean_dec(v_role_255_);
return v_res_256_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DocElabKind_role_elim(lean_object* v_motive_257_, uint8_t v_t_258_, lean_object* v_h_259_, lean_object* v_role_260_){
_start:
{
lean_inc(v_role_260_);
return v_role_260_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DocElabKind_role_elim___boxed(lean_object* v_motive_261_, lean_object* v_t_262_, lean_object* v_h_263_, lean_object* v_role_264_){
_start:
{
uint8_t v_t_boxed_265_; lean_object* v_res_266_; 
v_t_boxed_265_ = lean_unbox(v_t_262_);
v_res_266_ = l_Lean_Elab_DocElabKind_role_elim(v_motive_261_, v_t_boxed_265_, v_h_263_, v_role_264_);
lean_dec(v_role_264_);
return v_res_266_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DocElabKind_codeBlock_elim___redArg(lean_object* v_codeBlock_267_){
_start:
{
lean_inc(v_codeBlock_267_);
return v_codeBlock_267_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DocElabKind_codeBlock_elim___redArg___boxed(lean_object* v_codeBlock_268_){
_start:
{
lean_object* v_res_269_; 
v_res_269_ = l_Lean_Elab_DocElabKind_codeBlock_elim___redArg(v_codeBlock_268_);
lean_dec(v_codeBlock_268_);
return v_res_269_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DocElabKind_codeBlock_elim(lean_object* v_motive_270_, uint8_t v_t_271_, lean_object* v_h_272_, lean_object* v_codeBlock_273_){
_start:
{
lean_inc(v_codeBlock_273_);
return v_codeBlock_273_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DocElabKind_codeBlock_elim___boxed(lean_object* v_motive_274_, lean_object* v_t_275_, lean_object* v_h_276_, lean_object* v_codeBlock_277_){
_start:
{
uint8_t v_t_boxed_278_; lean_object* v_res_279_; 
v_t_boxed_278_ = lean_unbox(v_t_275_);
v_res_279_ = l_Lean_Elab_DocElabKind_codeBlock_elim(v_motive_274_, v_t_boxed_278_, v_h_276_, v_codeBlock_277_);
lean_dec(v_codeBlock_277_);
return v_res_279_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DocElabKind_directive_elim___redArg(lean_object* v_directive_280_){
_start:
{
lean_inc(v_directive_280_);
return v_directive_280_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DocElabKind_directive_elim___redArg___boxed(lean_object* v_directive_281_){
_start:
{
lean_object* v_res_282_; 
v_res_282_ = l_Lean_Elab_DocElabKind_directive_elim___redArg(v_directive_281_);
lean_dec(v_directive_281_);
return v_res_282_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DocElabKind_directive_elim(lean_object* v_motive_283_, uint8_t v_t_284_, lean_object* v_h_285_, lean_object* v_directive_286_){
_start:
{
lean_inc(v_directive_286_);
return v_directive_286_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DocElabKind_directive_elim___boxed(lean_object* v_motive_287_, lean_object* v_t_288_, lean_object* v_h_289_, lean_object* v_directive_290_){
_start:
{
uint8_t v_t_boxed_291_; lean_object* v_res_292_; 
v_t_boxed_291_ = lean_unbox(v_t_288_);
v_res_292_ = l_Lean_Elab_DocElabKind_directive_elim(v_motive_287_, v_t_boxed_291_, v_h_289_, v_directive_290_);
lean_dec(v_directive_290_);
return v_res_292_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DocElabKind_command_elim___redArg(lean_object* v_command_293_){
_start:
{
lean_inc(v_command_293_);
return v_command_293_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DocElabKind_command_elim___redArg___boxed(lean_object* v_command_294_){
_start:
{
lean_object* v_res_295_; 
v_res_295_ = l_Lean_Elab_DocElabKind_command_elim___redArg(v_command_294_);
lean_dec(v_command_294_);
return v_res_295_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DocElabKind_command_elim(lean_object* v_motive_296_, uint8_t v_t_297_, lean_object* v_h_298_, lean_object* v_command_299_){
_start:
{
lean_inc(v_command_299_);
return v_command_299_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DocElabKind_command_elim___boxed(lean_object* v_motive_300_, lean_object* v_t_301_, lean_object* v_h_302_, lean_object* v_command_303_){
_start:
{
uint8_t v_t_boxed_304_; lean_object* v_res_305_; 
v_t_boxed_304_ = lean_unbox(v_t_301_);
v_res_305_ = l_Lean_Elab_DocElabKind_command_elim(v_motive_300_, v_t_boxed_304_, v_h_302_, v_command_303_);
lean_dec(v_command_303_);
return v_res_305_;
}
}
static lean_object* _init_l_Lean_Elab_instReprDocElabKind_repr___closed__8(void){
_start:
{
lean_object* v___x_318_; lean_object* v___x_319_; 
v___x_318_ = lean_unsigned_to_nat(2u);
v___x_319_ = lean_nat_to_int(v___x_318_);
return v___x_319_;
}
}
static lean_object* _init_l_Lean_Elab_instReprDocElabKind_repr___closed__9(void){
_start:
{
lean_object* v___x_320_; lean_object* v___x_321_; 
v___x_320_ = lean_unsigned_to_nat(1u);
v___x_321_ = lean_nat_to_int(v___x_320_);
return v___x_321_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instReprDocElabKind_repr(uint8_t v_x_322_, lean_object* v_prec_323_){
_start:
{
lean_object* v___y_325_; lean_object* v___y_332_; lean_object* v___y_339_; lean_object* v___y_346_; 
switch(v_x_322_)
{
case 0:
{
lean_object* v___x_352_; uint8_t v___x_353_; 
v___x_352_ = lean_unsigned_to_nat(1024u);
v___x_353_ = lean_nat_dec_le(v___x_352_, v_prec_323_);
if (v___x_353_ == 0)
{
lean_object* v___x_354_; 
v___x_354_ = lean_obj_once(&l_Lean_Elab_instReprDocElabKind_repr___closed__8, &l_Lean_Elab_instReprDocElabKind_repr___closed__8_once, _init_l_Lean_Elab_instReprDocElabKind_repr___closed__8);
v___y_325_ = v___x_354_;
goto v___jp_324_;
}
else
{
lean_object* v___x_355_; 
v___x_355_ = lean_obj_once(&l_Lean_Elab_instReprDocElabKind_repr___closed__9, &l_Lean_Elab_instReprDocElabKind_repr___closed__9_once, _init_l_Lean_Elab_instReprDocElabKind_repr___closed__9);
v___y_325_ = v___x_355_;
goto v___jp_324_;
}
}
case 1:
{
lean_object* v___x_356_; uint8_t v___x_357_; 
v___x_356_ = lean_unsigned_to_nat(1024u);
v___x_357_ = lean_nat_dec_le(v___x_356_, v_prec_323_);
if (v___x_357_ == 0)
{
lean_object* v___x_358_; 
v___x_358_ = lean_obj_once(&l_Lean_Elab_instReprDocElabKind_repr___closed__8, &l_Lean_Elab_instReprDocElabKind_repr___closed__8_once, _init_l_Lean_Elab_instReprDocElabKind_repr___closed__8);
v___y_332_ = v___x_358_;
goto v___jp_331_;
}
else
{
lean_object* v___x_359_; 
v___x_359_ = lean_obj_once(&l_Lean_Elab_instReprDocElabKind_repr___closed__9, &l_Lean_Elab_instReprDocElabKind_repr___closed__9_once, _init_l_Lean_Elab_instReprDocElabKind_repr___closed__9);
v___y_332_ = v___x_359_;
goto v___jp_331_;
}
}
case 2:
{
lean_object* v___x_360_; uint8_t v___x_361_; 
v___x_360_ = lean_unsigned_to_nat(1024u);
v___x_361_ = lean_nat_dec_le(v___x_360_, v_prec_323_);
if (v___x_361_ == 0)
{
lean_object* v___x_362_; 
v___x_362_ = lean_obj_once(&l_Lean_Elab_instReprDocElabKind_repr___closed__8, &l_Lean_Elab_instReprDocElabKind_repr___closed__8_once, _init_l_Lean_Elab_instReprDocElabKind_repr___closed__8);
v___y_339_ = v___x_362_;
goto v___jp_338_;
}
else
{
lean_object* v___x_363_; 
v___x_363_ = lean_obj_once(&l_Lean_Elab_instReprDocElabKind_repr___closed__9, &l_Lean_Elab_instReprDocElabKind_repr___closed__9_once, _init_l_Lean_Elab_instReprDocElabKind_repr___closed__9);
v___y_339_ = v___x_363_;
goto v___jp_338_;
}
}
default: 
{
lean_object* v___x_364_; uint8_t v___x_365_; 
v___x_364_ = lean_unsigned_to_nat(1024u);
v___x_365_ = lean_nat_dec_le(v___x_364_, v_prec_323_);
if (v___x_365_ == 0)
{
lean_object* v___x_366_; 
v___x_366_ = lean_obj_once(&l_Lean_Elab_instReprDocElabKind_repr___closed__8, &l_Lean_Elab_instReprDocElabKind_repr___closed__8_once, _init_l_Lean_Elab_instReprDocElabKind_repr___closed__8);
v___y_346_ = v___x_366_;
goto v___jp_345_;
}
else
{
lean_object* v___x_367_; 
v___x_367_ = lean_obj_once(&l_Lean_Elab_instReprDocElabKind_repr___closed__9, &l_Lean_Elab_instReprDocElabKind_repr___closed__9_once, _init_l_Lean_Elab_instReprDocElabKind_repr___closed__9);
v___y_346_ = v___x_367_;
goto v___jp_345_;
}
}
}
v___jp_324_:
{
lean_object* v___x_326_; lean_object* v___x_327_; uint8_t v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; 
v___x_326_ = ((lean_object*)(l_Lean_Elab_instReprDocElabKind_repr___closed__1));
lean_inc(v___y_325_);
v___x_327_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_327_, 0, v___y_325_);
lean_ctor_set(v___x_327_, 1, v___x_326_);
v___x_328_ = 0;
v___x_329_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_329_, 0, v___x_327_);
lean_ctor_set_uint8(v___x_329_, sizeof(void*)*1, v___x_328_);
v___x_330_ = l_Repr_addAppParen(v___x_329_, v_prec_323_);
return v___x_330_;
}
v___jp_331_:
{
lean_object* v___x_333_; lean_object* v___x_334_; uint8_t v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; 
v___x_333_ = ((lean_object*)(l_Lean_Elab_instReprDocElabKind_repr___closed__3));
lean_inc(v___y_332_);
v___x_334_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_334_, 0, v___y_332_);
lean_ctor_set(v___x_334_, 1, v___x_333_);
v___x_335_ = 0;
v___x_336_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_336_, 0, v___x_334_);
lean_ctor_set_uint8(v___x_336_, sizeof(void*)*1, v___x_335_);
v___x_337_ = l_Repr_addAppParen(v___x_336_, v_prec_323_);
return v___x_337_;
}
v___jp_338_:
{
lean_object* v___x_340_; lean_object* v___x_341_; uint8_t v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; 
v___x_340_ = ((lean_object*)(l_Lean_Elab_instReprDocElabKind_repr___closed__5));
lean_inc(v___y_339_);
v___x_341_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_341_, 0, v___y_339_);
lean_ctor_set(v___x_341_, 1, v___x_340_);
v___x_342_ = 0;
v___x_343_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_343_, 0, v___x_341_);
lean_ctor_set_uint8(v___x_343_, sizeof(void*)*1, v___x_342_);
v___x_344_ = l_Repr_addAppParen(v___x_343_, v_prec_323_);
return v___x_344_;
}
v___jp_345_:
{
lean_object* v___x_347_; lean_object* v___x_348_; uint8_t v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; 
v___x_347_ = ((lean_object*)(l_Lean_Elab_instReprDocElabKind_repr___closed__7));
lean_inc(v___y_346_);
v___x_348_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_348_, 0, v___y_346_);
lean_ctor_set(v___x_348_, 1, v___x_347_);
v___x_349_ = 0;
v___x_350_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_350_, 0, v___x_348_);
lean_ctor_set_uint8(v___x_350_, sizeof(void*)*1, v___x_349_);
v___x_351_ = l_Repr_addAppParen(v___x_350_, v_prec_323_);
return v___x_351_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instReprDocElabKind_repr___boxed(lean_object* v_x_368_, lean_object* v_prec_369_){
_start:
{
uint8_t v_x_225__boxed_370_; lean_object* v_res_371_; 
v_x_225__boxed_370_ = lean_unbox(v_x_368_);
v_res_371_ = l_Lean_Elab_instReprDocElabKind_repr(v_x_225__boxed_370_, v_prec_369_);
lean_dec(v_prec_369_);
return v_res_371_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ctorIdx(lean_object* v_x_374_){
_start:
{
switch(lean_obj_tag(v_x_374_))
{
case 0:
{
lean_object* v___x_375_; 
v___x_375_ = lean_unsigned_to_nat(0u);
return v___x_375_;
}
case 1:
{
lean_object* v___x_376_; 
v___x_376_ = lean_unsigned_to_nat(1u);
return v___x_376_;
}
case 2:
{
lean_object* v___x_377_; 
v___x_377_ = lean_unsigned_to_nat(2u);
return v___x_377_;
}
case 3:
{
lean_object* v___x_378_; 
v___x_378_ = lean_unsigned_to_nat(3u);
return v___x_378_;
}
case 4:
{
lean_object* v___x_379_; 
v___x_379_ = lean_unsigned_to_nat(4u);
return v___x_379_;
}
case 5:
{
lean_object* v___x_380_; 
v___x_380_ = lean_unsigned_to_nat(5u);
return v___x_380_;
}
case 6:
{
lean_object* v___x_381_; 
v___x_381_ = lean_unsigned_to_nat(6u);
return v___x_381_;
}
case 7:
{
lean_object* v___x_382_; 
v___x_382_ = lean_unsigned_to_nat(7u);
return v___x_382_;
}
case 8:
{
lean_object* v___x_383_; 
v___x_383_ = lean_unsigned_to_nat(8u);
return v___x_383_;
}
case 9:
{
lean_object* v___x_384_; 
v___x_384_ = lean_unsigned_to_nat(9u);
return v___x_384_;
}
case 10:
{
lean_object* v___x_385_; 
v___x_385_ = lean_unsigned_to_nat(10u);
return v___x_385_;
}
case 11:
{
lean_object* v___x_386_; 
v___x_386_ = lean_unsigned_to_nat(11u);
return v___x_386_;
}
case 12:
{
lean_object* v___x_387_; 
v___x_387_ = lean_unsigned_to_nat(12u);
return v___x_387_;
}
case 13:
{
lean_object* v___x_388_; 
v___x_388_ = lean_unsigned_to_nat(13u);
return v___x_388_;
}
case 14:
{
lean_object* v___x_389_; 
v___x_389_ = lean_unsigned_to_nat(14u);
return v___x_389_;
}
case 15:
{
lean_object* v___x_390_; 
v___x_390_ = lean_unsigned_to_nat(15u);
return v___x_390_;
}
default: 
{
lean_object* v___x_391_; 
v___x_391_ = lean_unsigned_to_nat(16u);
return v___x_391_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ctorIdx___boxed(lean_object* v_x_392_){
_start:
{
lean_object* v_res_393_; 
v_res_393_ = l_Lean_Elab_Info_ctorIdx(v_x_392_);
lean_dec_ref(v_x_392_);
return v_res_393_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ctorElim___redArg(lean_object* v_t_394_, lean_object* v_k_395_){
_start:
{
if (lean_obj_tag(v_t_394_) == 12)
{
lean_object* v_i_396_; lean_object* v___x_397_; 
v_i_396_ = lean_ctor_get(v_t_394_, 0);
lean_inc(v_i_396_);
lean_dec_ref_known(v_t_394_, 1);
v___x_397_ = lean_apply_1(v_k_395_, v_i_396_);
return v___x_397_;
}
else
{
lean_object* v_i_398_; lean_object* v___x_399_; 
v_i_398_ = lean_ctor_get(v_t_394_, 0);
lean_inc_ref(v_i_398_);
lean_dec_ref(v_t_394_);
v___x_399_ = lean_apply_1(v_k_395_, v_i_398_);
return v___x_399_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ctorElim(lean_object* v_motive_400_, lean_object* v_ctorIdx_401_, lean_object* v_t_402_, lean_object* v_h_403_, lean_object* v_k_404_){
_start:
{
lean_object* v___x_405_; 
v___x_405_ = l_Lean_Elab_Info_ctorElim___redArg(v_t_402_, v_k_404_);
return v___x_405_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ctorElim___boxed(lean_object* v_motive_406_, lean_object* v_ctorIdx_407_, lean_object* v_t_408_, lean_object* v_h_409_, lean_object* v_k_410_){
_start:
{
lean_object* v_res_411_; 
v_res_411_ = l_Lean_Elab_Info_ctorElim(v_motive_406_, v_ctorIdx_407_, v_t_408_, v_h_409_, v_k_410_);
lean_dec(v_ctorIdx_407_);
return v_res_411_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofTacticInfo_elim___redArg(lean_object* v_t_412_, lean_object* v_ofTacticInfo_413_){
_start:
{
lean_object* v___x_414_; 
v___x_414_ = l_Lean_Elab_Info_ctorElim___redArg(v_t_412_, v_ofTacticInfo_413_);
return v___x_414_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofTacticInfo_elim(lean_object* v_motive_415_, lean_object* v_t_416_, lean_object* v_h_417_, lean_object* v_ofTacticInfo_418_){
_start:
{
lean_object* v___x_419_; 
v___x_419_ = l_Lean_Elab_Info_ctorElim___redArg(v_t_416_, v_ofTacticInfo_418_);
return v___x_419_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofTermInfo_elim___redArg(lean_object* v_t_420_, lean_object* v_ofTermInfo_421_){
_start:
{
lean_object* v___x_422_; 
v___x_422_ = l_Lean_Elab_Info_ctorElim___redArg(v_t_420_, v_ofTermInfo_421_);
return v___x_422_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofTermInfo_elim(lean_object* v_motive_423_, lean_object* v_t_424_, lean_object* v_h_425_, lean_object* v_ofTermInfo_426_){
_start:
{
lean_object* v___x_427_; 
v___x_427_ = l_Lean_Elab_Info_ctorElim___redArg(v_t_424_, v_ofTermInfo_426_);
return v___x_427_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofPartialTermInfo_elim___redArg(lean_object* v_t_428_, lean_object* v_ofPartialTermInfo_429_){
_start:
{
lean_object* v___x_430_; 
v___x_430_ = l_Lean_Elab_Info_ctorElim___redArg(v_t_428_, v_ofPartialTermInfo_429_);
return v___x_430_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofPartialTermInfo_elim(lean_object* v_motive_431_, lean_object* v_t_432_, lean_object* v_h_433_, lean_object* v_ofPartialTermInfo_434_){
_start:
{
lean_object* v___x_435_; 
v___x_435_ = l_Lean_Elab_Info_ctorElim___redArg(v_t_432_, v_ofPartialTermInfo_434_);
return v___x_435_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofCommandInfo_elim___redArg(lean_object* v_t_436_, lean_object* v_ofCommandInfo_437_){
_start:
{
lean_object* v___x_438_; 
v___x_438_ = l_Lean_Elab_Info_ctorElim___redArg(v_t_436_, v_ofCommandInfo_437_);
return v___x_438_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofCommandInfo_elim(lean_object* v_motive_439_, lean_object* v_t_440_, lean_object* v_h_441_, lean_object* v_ofCommandInfo_442_){
_start:
{
lean_object* v___x_443_; 
v___x_443_ = l_Lean_Elab_Info_ctorElim___redArg(v_t_440_, v_ofCommandInfo_442_);
return v___x_443_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofMacroExpansionInfo_elim___redArg(lean_object* v_t_444_, lean_object* v_ofMacroExpansionInfo_445_){
_start:
{
lean_object* v___x_446_; 
v___x_446_ = l_Lean_Elab_Info_ctorElim___redArg(v_t_444_, v_ofMacroExpansionInfo_445_);
return v___x_446_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofMacroExpansionInfo_elim(lean_object* v_motive_447_, lean_object* v_t_448_, lean_object* v_h_449_, lean_object* v_ofMacroExpansionInfo_450_){
_start:
{
lean_object* v___x_451_; 
v___x_451_ = l_Lean_Elab_Info_ctorElim___redArg(v_t_448_, v_ofMacroExpansionInfo_450_);
return v___x_451_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofOptionInfo_elim___redArg(lean_object* v_t_452_, lean_object* v_ofOptionInfo_453_){
_start:
{
lean_object* v___x_454_; 
v___x_454_ = l_Lean_Elab_Info_ctorElim___redArg(v_t_452_, v_ofOptionInfo_453_);
return v___x_454_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofOptionInfo_elim(lean_object* v_motive_455_, lean_object* v_t_456_, lean_object* v_h_457_, lean_object* v_ofOptionInfo_458_){
_start:
{
lean_object* v___x_459_; 
v___x_459_ = l_Lean_Elab_Info_ctorElim___redArg(v_t_456_, v_ofOptionInfo_458_);
return v___x_459_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofErrorNameInfo_elim___redArg(lean_object* v_t_460_, lean_object* v_ofErrorNameInfo_461_){
_start:
{
lean_object* v___x_462_; 
v___x_462_ = l_Lean_Elab_Info_ctorElim___redArg(v_t_460_, v_ofErrorNameInfo_461_);
return v___x_462_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofErrorNameInfo_elim(lean_object* v_motive_463_, lean_object* v_t_464_, lean_object* v_h_465_, lean_object* v_ofErrorNameInfo_466_){
_start:
{
lean_object* v___x_467_; 
v___x_467_ = l_Lean_Elab_Info_ctorElim___redArg(v_t_464_, v_ofErrorNameInfo_466_);
return v___x_467_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofFieldInfo_elim___redArg(lean_object* v_t_468_, lean_object* v_ofFieldInfo_469_){
_start:
{
lean_object* v___x_470_; 
v___x_470_ = l_Lean_Elab_Info_ctorElim___redArg(v_t_468_, v_ofFieldInfo_469_);
return v___x_470_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofFieldInfo_elim(lean_object* v_motive_471_, lean_object* v_t_472_, lean_object* v_h_473_, lean_object* v_ofFieldInfo_474_){
_start:
{
lean_object* v___x_475_; 
v___x_475_ = l_Lean_Elab_Info_ctorElim___redArg(v_t_472_, v_ofFieldInfo_474_);
return v___x_475_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofCompletionInfo_elim___redArg(lean_object* v_t_476_, lean_object* v_ofCompletionInfo_477_){
_start:
{
lean_object* v___x_478_; 
v___x_478_ = l_Lean_Elab_Info_ctorElim___redArg(v_t_476_, v_ofCompletionInfo_477_);
return v___x_478_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofCompletionInfo_elim(lean_object* v_motive_479_, lean_object* v_t_480_, lean_object* v_h_481_, lean_object* v_ofCompletionInfo_482_){
_start:
{
lean_object* v___x_483_; 
v___x_483_ = l_Lean_Elab_Info_ctorElim___redArg(v_t_480_, v_ofCompletionInfo_482_);
return v___x_483_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofUserWidgetInfo_elim___redArg(lean_object* v_t_484_, lean_object* v_ofUserWidgetInfo_485_){
_start:
{
lean_object* v___x_486_; 
v___x_486_ = l_Lean_Elab_Info_ctorElim___redArg(v_t_484_, v_ofUserWidgetInfo_485_);
return v___x_486_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofUserWidgetInfo_elim(lean_object* v_motive_487_, lean_object* v_t_488_, lean_object* v_h_489_, lean_object* v_ofUserWidgetInfo_490_){
_start:
{
lean_object* v___x_491_; 
v___x_491_ = l_Lean_Elab_Info_ctorElim___redArg(v_t_488_, v_ofUserWidgetInfo_490_);
return v___x_491_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofCustomInfo_elim___redArg(lean_object* v_t_492_, lean_object* v_ofCustomInfo_493_){
_start:
{
lean_object* v___x_494_; 
v___x_494_ = l_Lean_Elab_Info_ctorElim___redArg(v_t_492_, v_ofCustomInfo_493_);
return v___x_494_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofCustomInfo_elim(lean_object* v_motive_495_, lean_object* v_t_496_, lean_object* v_h_497_, lean_object* v_ofCustomInfo_498_){
_start:
{
lean_object* v___x_499_; 
v___x_499_ = l_Lean_Elab_Info_ctorElim___redArg(v_t_496_, v_ofCustomInfo_498_);
return v___x_499_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofFVarAliasInfo_elim___redArg(lean_object* v_t_500_, lean_object* v_ofFVarAliasInfo_501_){
_start:
{
lean_object* v___x_502_; 
v___x_502_ = l_Lean_Elab_Info_ctorElim___redArg(v_t_500_, v_ofFVarAliasInfo_501_);
return v___x_502_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofFVarAliasInfo_elim(lean_object* v_motive_503_, lean_object* v_t_504_, lean_object* v_h_505_, lean_object* v_ofFVarAliasInfo_506_){
_start:
{
lean_object* v___x_507_; 
v___x_507_ = l_Lean_Elab_Info_ctorElim___redArg(v_t_504_, v_ofFVarAliasInfo_506_);
return v___x_507_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofFieldRedeclInfo_elim___redArg(lean_object* v_t_508_, lean_object* v_ofFieldRedeclInfo_509_){
_start:
{
lean_object* v___x_510_; 
v___x_510_ = l_Lean_Elab_Info_ctorElim___redArg(v_t_508_, v_ofFieldRedeclInfo_509_);
return v___x_510_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofFieldRedeclInfo_elim(lean_object* v_motive_511_, lean_object* v_t_512_, lean_object* v_h_513_, lean_object* v_ofFieldRedeclInfo_514_){
_start:
{
lean_object* v___x_515_; 
v___x_515_ = l_Lean_Elab_Info_ctorElim___redArg(v_t_512_, v_ofFieldRedeclInfo_514_);
return v___x_515_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofDelabTermInfo_elim___redArg(lean_object* v_t_516_, lean_object* v_ofDelabTermInfo_517_){
_start:
{
lean_object* v___x_518_; 
v___x_518_ = l_Lean_Elab_Info_ctorElim___redArg(v_t_516_, v_ofDelabTermInfo_517_);
return v___x_518_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofDelabTermInfo_elim(lean_object* v_motive_519_, lean_object* v_t_520_, lean_object* v_h_521_, lean_object* v_ofDelabTermInfo_522_){
_start:
{
lean_object* v___x_523_; 
v___x_523_ = l_Lean_Elab_Info_ctorElim___redArg(v_t_520_, v_ofDelabTermInfo_522_);
return v___x_523_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofChoiceInfo_elim___redArg(lean_object* v_t_524_, lean_object* v_ofChoiceInfo_525_){
_start:
{
lean_object* v___x_526_; 
v___x_526_ = l_Lean_Elab_Info_ctorElim___redArg(v_t_524_, v_ofChoiceInfo_525_);
return v___x_526_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofChoiceInfo_elim(lean_object* v_motive_527_, lean_object* v_t_528_, lean_object* v_h_529_, lean_object* v_ofChoiceInfo_530_){
_start:
{
lean_object* v___x_531_; 
v___x_531_ = l_Lean_Elab_Info_ctorElim___redArg(v_t_528_, v_ofChoiceInfo_530_);
return v___x_531_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofDocInfo_elim___redArg(lean_object* v_t_532_, lean_object* v_ofDocInfo_533_){
_start:
{
lean_object* v___x_534_; 
v___x_534_ = l_Lean_Elab_Info_ctorElim___redArg(v_t_532_, v_ofDocInfo_533_);
return v___x_534_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofDocInfo_elim(lean_object* v_motive_535_, lean_object* v_t_536_, lean_object* v_h_537_, lean_object* v_ofDocInfo_538_){
_start:
{
lean_object* v___x_539_; 
v___x_539_ = l_Lean_Elab_Info_ctorElim___redArg(v_t_536_, v_ofDocInfo_538_);
return v___x_539_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofDocElabInfo_elim___redArg(lean_object* v_t_540_, lean_object* v_ofDocElabInfo_541_){
_start:
{
lean_object* v___x_542_; 
v___x_542_ = l_Lean_Elab_Info_ctorElim___redArg(v_t_540_, v_ofDocElabInfo_541_);
return v___x_542_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Info_ofDocElabInfo_elim(lean_object* v_motive_543_, lean_object* v_t_544_, lean_object* v_h_545_, lean_object* v_ofDocElabInfo_546_){
_start:
{
lean_object* v___x_547_; 
v___x_547_ = l_Lean_Elab_Info_ctorElim___redArg(v_t_544_, v_ofDocElabInfo_546_);
return v___x_547_;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedInfo_default___closed__0(void){
_start:
{
lean_object* v___x_548_; lean_object* v___x_549_; 
v___x_548_ = l_Lean_Elab_instInhabitedTacticInfo_default;
v___x_549_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_549_, 0, v___x_548_);
return v___x_549_;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedInfo_default(void){
_start:
{
lean_object* v___x_550_; 
v___x_550_ = lean_obj_once(&l_Lean_Elab_instInhabitedInfo_default___closed__0, &l_Lean_Elab_instInhabitedInfo_default___closed__0_once, _init_l_Lean_Elab_instInhabitedInfo_default___closed__0);
return v___x_550_;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedInfo(void){
_start:
{
lean_object* v___x_551_; 
v___x_551_ = l_Lean_Elab_instInhabitedInfo_default;
return v___x_551_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_ctorIdx(lean_object* v_x_552_){
_start:
{
switch(lean_obj_tag(v_x_552_))
{
case 0:
{
lean_object* v___x_553_; 
v___x_553_ = lean_unsigned_to_nat(0u);
return v___x_553_;
}
case 1:
{
lean_object* v___x_554_; 
v___x_554_ = lean_unsigned_to_nat(1u);
return v___x_554_;
}
default: 
{
lean_object* v___x_555_; 
v___x_555_ = lean_unsigned_to_nat(2u);
return v___x_555_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_ctorIdx___boxed(lean_object* v_x_556_){
_start:
{
lean_object* v_res_557_; 
v_res_557_ = l_Lean_Elab_InfoTree_ctorIdx(v_x_556_);
lean_dec_ref(v_x_556_);
return v_res_557_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_ctorElim___redArg(lean_object* v_t_558_, lean_object* v_k_559_){
_start:
{
if (lean_obj_tag(v_t_558_) == 2)
{
lean_object* v_mvarId_560_; lean_object* v___x_561_; 
v_mvarId_560_ = lean_ctor_get(v_t_558_, 0);
lean_inc(v_mvarId_560_);
lean_dec_ref_known(v_t_558_, 1);
v___x_561_ = lean_apply_1(v_k_559_, v_mvarId_560_);
return v___x_561_;
}
else
{
lean_object* v_i_562_; lean_object* v_t_563_; lean_object* v___x_564_; 
v_i_562_ = lean_ctor_get(v_t_558_, 0);
lean_inc_ref(v_i_562_);
v_t_563_ = lean_ctor_get(v_t_558_, 1);
lean_inc_ref(v_t_563_);
lean_dec_ref(v_t_558_);
v___x_564_ = lean_apply_2(v_k_559_, v_i_562_, v_t_563_);
return v___x_564_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_ctorElim(lean_object* v_motive__1_565_, lean_object* v_ctorIdx_566_, lean_object* v_t_567_, lean_object* v_h_568_, lean_object* v_k_569_){
_start:
{
lean_object* v___x_570_; 
v___x_570_ = l_Lean_Elab_InfoTree_ctorElim___redArg(v_t_567_, v_k_569_);
return v___x_570_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_ctorElim___boxed(lean_object* v_motive__1_571_, lean_object* v_ctorIdx_572_, lean_object* v_t_573_, lean_object* v_h_574_, lean_object* v_k_575_){
_start:
{
lean_object* v_res_576_; 
v_res_576_ = l_Lean_Elab_InfoTree_ctorElim(v_motive__1_571_, v_ctorIdx_572_, v_t_573_, v_h_574_, v_k_575_);
lean_dec(v_ctorIdx_572_);
return v_res_576_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_context_elim___redArg(lean_object* v_t_577_, lean_object* v_context_578_){
_start:
{
lean_object* v___x_579_; 
v___x_579_ = l_Lean_Elab_InfoTree_ctorElim___redArg(v_t_577_, v_context_578_);
return v___x_579_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_context_elim(lean_object* v_motive__1_580_, lean_object* v_t_581_, lean_object* v_h_582_, lean_object* v_context_583_){
_start:
{
lean_object* v___x_584_; 
v___x_584_ = l_Lean_Elab_InfoTree_ctorElim___redArg(v_t_581_, v_context_583_);
return v___x_584_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_node_elim___redArg(lean_object* v_t_585_, lean_object* v_node_586_){
_start:
{
lean_object* v___x_587_; 
v___x_587_ = l_Lean_Elab_InfoTree_ctorElim___redArg(v_t_585_, v_node_586_);
return v___x_587_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_node_elim(lean_object* v_motive__1_588_, lean_object* v_t_589_, lean_object* v_h_590_, lean_object* v_node_591_){
_start:
{
lean_object* v___x_592_; 
v___x_592_ = l_Lean_Elab_InfoTree_ctorElim___redArg(v_t_589_, v_node_591_);
return v___x_592_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_hole_elim___redArg(lean_object* v_t_593_, lean_object* v_hole_594_){
_start:
{
lean_object* v___x_595_; 
v___x_595_ = l_Lean_Elab_InfoTree_ctorElim___redArg(v_t_593_, v_hole_594_);
return v___x_595_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_hole_elim(lean_object* v_motive__1_596_, lean_object* v_t_597_, lean_object* v_h_598_, lean_object* v_hole_599_){
_start:
{
lean_object* v___x_600_; 
v___x_600_ = l_Lean_Elab_InfoTree_ctorElim___redArg(v_t_597_, v_hole_599_);
return v___x_600_;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedInfoTree_default___closed__0(void){
_start:
{
lean_object* v___x_601_; 
v___x_601_ = l_Lean_instInhabitedPersistentArray_default___redArg();
return v___x_601_;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedInfoTree_default___closed__1(void){
_start:
{
lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; 
v___x_602_ = lean_obj_once(&l_Lean_Elab_instInhabitedInfoTree_default___closed__0, &l_Lean_Elab_instInhabitedInfoTree_default___closed__0_once, _init_l_Lean_Elab_instInhabitedInfoTree_default___closed__0);
v___x_603_ = l_Lean_Elab_instInhabitedInfo_default;
v___x_604_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_604_, 0, v___x_603_);
lean_ctor_set(v___x_604_, 1, v___x_602_);
return v___x_604_;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedInfoTree_default(void){
_start:
{
lean_object* v___x_605_; 
v___x_605_ = lean_obj_once(&l_Lean_Elab_instInhabitedInfoTree_default___closed__1, &l_Lean_Elab_instInhabitedInfoTree_default___closed__1_once, _init_l_Lean_Elab_instInhabitedInfoTree_default___closed__1);
return v___x_605_;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedInfoTree(void){
_start:
{
lean_object* v___x_606_; 
v___x_606_ = l_Lean_Elab_instInhabitedInfoTree_default;
return v___x_606_;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedInfoState_default___closed__0(void){
_start:
{
lean_object* v___x_607_; lean_object* v___x_608_; 
v___x_607_ = lean_obj_once(&l_Lean_Elab_instInhabitedTacticInfo_default___closed__0, &l_Lean_Elab_instInhabitedTacticInfo_default___closed__0_once, _init_l_Lean_Elab_instInhabitedTacticInfo_default___closed__0);
v___x_608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_608_, 0, v___x_607_);
return v___x_608_;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedInfoState_default___closed__1(void){
_start:
{
lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; 
v___x_609_ = lean_unsigned_to_nat(32u);
v___x_610_ = lean_mk_empty_array_with_capacity(v___x_609_);
v___x_611_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_611_, 0, v___x_610_);
return v___x_611_;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedInfoState_default___closed__2(void){
_start:
{
size_t v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; 
v___x_612_ = ((size_t)5ULL);
v___x_613_ = lean_unsigned_to_nat(0u);
v___x_614_ = lean_unsigned_to_nat(32u);
v___x_615_ = lean_mk_empty_array_with_capacity(v___x_614_);
v___x_616_ = lean_obj_once(&l_Lean_Elab_instInhabitedInfoState_default___closed__1, &l_Lean_Elab_instInhabitedInfoState_default___closed__1_once, _init_l_Lean_Elab_instInhabitedInfoState_default___closed__1);
v___x_617_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_617_, 0, v___x_616_);
lean_ctor_set(v___x_617_, 1, v___x_615_);
lean_ctor_set(v___x_617_, 2, v___x_613_);
lean_ctor_set(v___x_617_, 3, v___x_613_);
lean_ctor_set_usize(v___x_617_, 4, v___x_612_);
return v___x_617_;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedInfoState_default___closed__3(void){
_start:
{
lean_object* v___x_618_; lean_object* v___x_619_; uint8_t v___x_620_; lean_object* v___x_621_; 
v___x_618_ = lean_obj_once(&l_Lean_Elab_instInhabitedInfoState_default___closed__2, &l_Lean_Elab_instInhabitedInfoState_default___closed__2_once, _init_l_Lean_Elab_instInhabitedInfoState_default___closed__2);
v___x_619_ = lean_obj_once(&l_Lean_Elab_instInhabitedInfoState_default___closed__0, &l_Lean_Elab_instInhabitedInfoState_default___closed__0_once, _init_l_Lean_Elab_instInhabitedInfoState_default___closed__0);
v___x_620_ = 1;
v___x_621_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_621_, 0, v___x_619_);
lean_ctor_set(v___x_621_, 1, v___x_619_);
lean_ctor_set(v___x_621_, 2, v___x_618_);
lean_ctor_set_uint8(v___x_621_, sizeof(void*)*3, v___x_620_);
return v___x_621_;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedInfoState_default(void){
_start:
{
lean_object* v___x_622_; 
v___x_622_ = lean_obj_once(&l_Lean_Elab_instInhabitedInfoState_default___closed__3, &l_Lean_Elab_instInhabitedInfoState_default___closed__3_once, _init_l_Lean_Elab_instInhabitedInfoState_default___closed__3);
return v___x_622_;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedInfoState(void){
_start:
{
lean_object* v___x_623_; 
v___x_623_ = l_Lean_Elab_instInhabitedInfoState_default;
return v___x_623_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instMonadInfoTreeOfMonadLift___redArg___lam__0(lean_object* v_modifyInfoState_624_, lean_object* v_inst_625_, lean_object* v_f_626_){
_start:
{
lean_object* v___x_627_; lean_object* v___x_628_; 
v___x_627_ = lean_apply_1(v_modifyInfoState_624_, v_f_626_);
v___x_628_ = lean_apply_2(v_inst_625_, lean_box(0), v___x_627_);
return v___x_628_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instMonadInfoTreeOfMonadLift___redArg(lean_object* v_inst_629_, lean_object* v_inst_630_){
_start:
{
lean_object* v_getInfoState_631_; lean_object* v_modifyInfoState_632_; lean_object* v___x_634_; uint8_t v_isShared_635_; uint8_t v_isSharedCheck_641_; 
v_getInfoState_631_ = lean_ctor_get(v_inst_630_, 0);
v_modifyInfoState_632_ = lean_ctor_get(v_inst_630_, 1);
v_isSharedCheck_641_ = !lean_is_exclusive(v_inst_630_);
if (v_isSharedCheck_641_ == 0)
{
v___x_634_ = v_inst_630_;
v_isShared_635_ = v_isSharedCheck_641_;
goto v_resetjp_633_;
}
else
{
lean_inc(v_modifyInfoState_632_);
lean_inc(v_getInfoState_631_);
lean_dec(v_inst_630_);
v___x_634_ = lean_box(0);
v_isShared_635_ = v_isSharedCheck_641_;
goto v_resetjp_633_;
}
v_resetjp_633_:
{
lean_object* v___f_636_; lean_object* v___x_637_; lean_object* v___x_639_; 
lean_inc(v_inst_629_);
v___f_636_ = lean_alloc_closure((void*)(l_Lean_Elab_instMonadInfoTreeOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_636_, 0, v_modifyInfoState_632_);
lean_closure_set(v___f_636_, 1, v_inst_629_);
v___x_637_ = lean_apply_2(v_inst_629_, lean_box(0), v_getInfoState_631_);
if (v_isShared_635_ == 0)
{
lean_ctor_set(v___x_634_, 1, v___f_636_);
lean_ctor_set(v___x_634_, 0, v___x_637_);
v___x_639_ = v___x_634_;
goto v_reusejp_638_;
}
else
{
lean_object* v_reuseFailAlloc_640_; 
v_reuseFailAlloc_640_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_640_, 0, v___x_637_);
lean_ctor_set(v_reuseFailAlloc_640_, 1, v___f_636_);
v___x_639_ = v_reuseFailAlloc_640_;
goto v_reusejp_638_;
}
v_reusejp_638_:
{
return v___x_639_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instMonadInfoTreeOfMonadLift(lean_object* v_m_642_, lean_object* v_n_643_, lean_object* v_inst_644_, lean_object* v_inst_645_){
_start:
{
lean_object* v___x_646_; 
v___x_646_ = l_Lean_Elab_instMonadInfoTreeOfMonadLift___redArg(v_inst_644_, v_inst_645_);
return v___x_646_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_setInfoState___redArg___lam__0(lean_object* v_s_647_, lean_object* v_x_648_){
_start:
{
lean_inc_ref(v_s_647_);
return v_s_647_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_setInfoState___redArg___lam__0___boxed(lean_object* v_s_649_, lean_object* v_x_650_){
_start:
{
lean_object* v_res_651_; 
v_res_651_ = l_Lean_Elab_setInfoState___redArg___lam__0(v_s_649_, v_x_650_);
lean_dec_ref(v_x_650_);
lean_dec_ref(v_s_649_);
return v_res_651_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_setInfoState___redArg(lean_object* v_inst_652_, lean_object* v_s_653_){
_start:
{
lean_object* v_modifyInfoState_654_; lean_object* v___f_655_; lean_object* v___x_656_; 
v_modifyInfoState_654_ = lean_ctor_get(v_inst_652_, 1);
lean_inc(v_modifyInfoState_654_);
lean_dec_ref(v_inst_652_);
v___f_655_ = lean_alloc_closure((void*)(l_Lean_Elab_setInfoState___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_655_, 0, v_s_653_);
v___x_656_ = lean_apply_1(v_modifyInfoState_654_, v___f_655_);
return v___x_656_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_setInfoState(lean_object* v_m_657_, lean_object* v_inst_658_, lean_object* v_s_659_){
_start:
{
lean_object* v___x_660_; 
v___x_660_ = l_Lean_Elab_setInfoState___redArg(v_inst_658_, v_s_659_);
return v___x_660_;
}
}
lean_object* runtime_initialize_Lean_Data_DeclarationRange(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_OpenDecl(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_PPContext(uint8_t builtin);
lean_object* runtime_initialize_Lean_MetavarContext(uint8_t builtin);
lean_object* runtime_initialize_Lean_Environment(uint8_t builtin);
lean_object* runtime_initialize_Lean_Widget_Types(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_InfoTree_Types(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Data_DeclarationRange(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_OpenDecl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_PPContext(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_MetavarContext(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Environment(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Widget_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_instInhabitedElabInfo_default = _init_l_Lean_Elab_instInhabitedElabInfo_default();
lean_mark_persistent(l_Lean_Elab_instInhabitedElabInfo_default);
l_Lean_Elab_instInhabitedElabInfo = _init_l_Lean_Elab_instInhabitedElabInfo();
lean_mark_persistent(l_Lean_Elab_instInhabitedElabInfo);
l_Lean_Elab_instInhabitedTermInfo_default = _init_l_Lean_Elab_instInhabitedTermInfo_default();
lean_mark_persistent(l_Lean_Elab_instInhabitedTermInfo_default);
l_Lean_Elab_instInhabitedTermInfo = _init_l_Lean_Elab_instInhabitedTermInfo();
lean_mark_persistent(l_Lean_Elab_instInhabitedTermInfo);
l_Lean_Elab_instInhabitedPartialTermInfo_default = _init_l_Lean_Elab_instInhabitedPartialTermInfo_default();
lean_mark_persistent(l_Lean_Elab_instInhabitedPartialTermInfo_default);
l_Lean_Elab_instInhabitedPartialTermInfo = _init_l_Lean_Elab_instInhabitedPartialTermInfo();
lean_mark_persistent(l_Lean_Elab_instInhabitedPartialTermInfo);
l_Lean_Elab_instInhabitedCommandInfo_default = _init_l_Lean_Elab_instInhabitedCommandInfo_default();
lean_mark_persistent(l_Lean_Elab_instInhabitedCommandInfo_default);
l_Lean_Elab_instInhabitedCommandInfo = _init_l_Lean_Elab_instInhabitedCommandInfo();
lean_mark_persistent(l_Lean_Elab_instInhabitedCommandInfo);
l_Lean_Elab_instInhabitedFieldInfo_default = _init_l_Lean_Elab_instInhabitedFieldInfo_default();
lean_mark_persistent(l_Lean_Elab_instInhabitedFieldInfo_default);
l_Lean_Elab_instInhabitedFieldInfo = _init_l_Lean_Elab_instInhabitedFieldInfo();
lean_mark_persistent(l_Lean_Elab_instInhabitedFieldInfo);
l_Lean_Elab_instInhabitedTacticInfo_default = _init_l_Lean_Elab_instInhabitedTacticInfo_default();
lean_mark_persistent(l_Lean_Elab_instInhabitedTacticInfo_default);
l_Lean_Elab_instInhabitedTacticInfo = _init_l_Lean_Elab_instInhabitedTacticInfo();
lean_mark_persistent(l_Lean_Elab_instInhabitedTacticInfo);
l_Lean_Elab_instInhabitedMacroExpansionInfo_default = _init_l_Lean_Elab_instInhabitedMacroExpansionInfo_default();
lean_mark_persistent(l_Lean_Elab_instInhabitedMacroExpansionInfo_default);
l_Lean_Elab_instInhabitedMacroExpansionInfo = _init_l_Lean_Elab_instInhabitedMacroExpansionInfo();
lean_mark_persistent(l_Lean_Elab_instInhabitedMacroExpansionInfo);
l_Lean_Elab_instInhabitedInfo_default = _init_l_Lean_Elab_instInhabitedInfo_default();
lean_mark_persistent(l_Lean_Elab_instInhabitedInfo_default);
l_Lean_Elab_instInhabitedInfo = _init_l_Lean_Elab_instInhabitedInfo();
lean_mark_persistent(l_Lean_Elab_instInhabitedInfo);
l_Lean_Elab_instInhabitedInfoTree_default = _init_l_Lean_Elab_instInhabitedInfoTree_default();
lean_mark_persistent(l_Lean_Elab_instInhabitedInfoTree_default);
l_Lean_Elab_instInhabitedInfoTree = _init_l_Lean_Elab_instInhabitedInfoTree();
lean_mark_persistent(l_Lean_Elab_instInhabitedInfoTree);
l_Lean_Elab_instInhabitedInfoState_default = _init_l_Lean_Elab_instInhabitedInfoState_default();
lean_mark_persistent(l_Lean_Elab_instInhabitedInfoState_default);
l_Lean_Elab_instInhabitedInfoState = _init_l_Lean_Elab_instInhabitedInfoState();
lean_mark_persistent(l_Lean_Elab_instInhabitedInfoState);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_InfoTree_Types(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Data_DeclarationRange(uint8_t builtin);
lean_object* initialize_Lean_Data_OpenDecl(uint8_t builtin);
lean_object* initialize_Lean_Data_PPContext(uint8_t builtin);
lean_object* initialize_Lean_MetavarContext(uint8_t builtin);
lean_object* initialize_Lean_Environment(uint8_t builtin);
lean_object* initialize_Lean_Widget_Types(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_InfoTree_Types(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Data_DeclarationRange(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_OpenDecl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_PPContext(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_MetavarContext(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Environment(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Widget_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_InfoTree_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_InfoTree_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_InfoTree_Types(builtin);
}
#ifdef __cplusplus
}
#endif

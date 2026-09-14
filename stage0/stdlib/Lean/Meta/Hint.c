// Lean compiler output
// Module: Lean.Meta.Hint
// Imports: public import Lean.Meta.TryThis public import Lean.Util.Diff
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
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Subarray_drop___redArg(lean_object*, lean_object*);
lean_object* l_Subarray_get___redArg(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Subarray_take___redArg(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint64_t lean_string_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_split___redArg(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Diff_instBEqAction_beq(uint8_t, uint8_t);
uint64_t lean_uint32_to_uint64(uint32_t);
lean_object* l_Lean_Json_mkObj(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* lean_string_data(lean_object*);
lean_object* lean_array_mk(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_string_mk(lean_object*);
lean_object* l_Lean_MessageData_nestD(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Lsp_instToJsonRange_toJson(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getRange_x3f(lean_object*, uint8_t);
uint8_t l_Lean_Syntax_Range_includes(lean_object*, lean_object*, uint8_t, uint8_t);
extern lean_object* l_Lean_Meta_Tactic_TryThis_instImpl_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12_;
lean_object* l___private_Init_Dynamic_0__Dynamic_mkImpl___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_format(lean_object*, lean_object*);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_next(lean_object*, lean_object*);
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
uint8_t lean_string_utf8_at_end(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Lean_Syntax_ofRange(lean_object*, uint8_t);
lean_object* l_Lean_Meta_Tactic_TryThis_Suggestion_processEdit(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
static const lean_string_object l_Lean_Meta_Hint_textInsertionWidget___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1770, .m_capacity = 1770, .m_length = 1769, .m_data = "\nimport * as React from 'react';\nimport { EditorContext, EnvPosContext } from '@leanprover/infoview';\n\nconst e = React.createElement;\nexport default function ({ range, suggestion, acceptSuggestionProps }) {\n  const pos = React.useContext(EnvPosContext)\n  const editorConnection = React.useContext(EditorContext)\n  function onClick() {\n    editorConnection.api.applyEdit({\n      changes: { [pos.uri]: [{ range, newText: suggestion }] }\n    })\n  }\n\n  if (acceptSuggestionProps.kind === 'text') {\n    return e('span', {\n        onClick,\n        title: acceptSuggestionProps.hoverText,\n        className: 'link pointer dim font-code',\n        style: { color: 'var(--vscode-textLink-foreground)' }\n      },\n      acceptSuggestionProps.linkText)\n  } else if (acceptSuggestionProps.kind === 'icon') {\n    if (acceptSuggestionProps.gaps) {\n      const icon = e('span', {\n        className: `codicon codicon-${acceptSuggestionProps.codiconName}`,\n        style: {\n          verticalAlign: 'sub',\n          fontSize: 'var(--vscode-editor-font-size)'\n        }\n      })\n      return e('span', {\n        onClick,\n        title: acceptSuggestionProps.hoverText,\n        className: `link pointer dim font-code`,\n        style: { color: 'var(--vscode-textLink-foreground)' }\n      }, ' ', icon, ' ')\n    } else {\n      return e('span', {\n        onClick,\n        title: acceptSuggestionProps.hoverText,\n        className: `link pointer dim font-code codicon codicon-${acceptSuggestionProps.codiconName}`,\n        style: {\n          color: 'var(--vscode-textLink-foreground)',\n          verticalAlign: 'sub',\n          fontSize: 'var(--vscode-editor-font-size)'\n        }\n      })\n    }\n\n  }\n  throw new Error('Unexpected `acceptSuggestionProps` kind: ' + acceptSuggestionProps.kind)\n}"};
static const lean_object* l_Lean_Meta_Hint_textInsertionWidget___closed__0 = (const lean_object*)&l_Lean_Meta_Hint_textInsertionWidget___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Hint_textInsertionWidget___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lean_Meta_Hint_textInsertionWidget___closed__1;
static lean_once_cell_t l_Lean_Meta_Hint_textInsertionWidget___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Hint_textInsertionWidget___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_textInsertionWidget;
static const lean_string_object l_Lean_Meta_Hint_tryThisDiffWidget___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1142, .m_capacity = 1142, .m_length = 1141, .m_data = "\nimport * as React from 'react';\nimport { EditorContext, EnvPosContext } from '@leanprover/infoview';\n\nconst e = React.createElement;\nexport default function ({ diff, range, suggestion }) {\n  const pos = React.useContext(EnvPosContext)\n  const editorConnection = React.useContext(EditorContext)\n  const insStyle = {\n    style: { color: 'var(--vscode-textLink-foreground)' }\n  }\n  const delStyle = {\n    style: { color: 'var(--vscode-editorError-foreground)', textDecoration: 'line-through' }\n  }\n  const defStyle = {\n    style: { color: 'var(--vscode-editor-foreground)' }\n  }\n  function onClick() {\n    editorConnection.api.applyEdit({\n      changes: { [pos.uri]: [{ range, newText: suggestion }] }\n    })\n  }\n\n  const spans = diff.map (comp =>\n    comp.type === 'deletion' \? e('span', delStyle, comp.text) :\n    comp.type === 'insertion' \? e('span', insStyle, comp.text) :\n      e('span', defStyle, comp.text)\n  )\n  const fullDiff = e('span',\n    { onClick,\n      title: 'Apply suggestion',\n      className: 'link pointer dim font-code',\n      style: { display: 'inline-block', verticalAlign: 'text-top' } },\n    spans)\n  return fullDiff\n}"};
static const lean_object* l_Lean_Meta_Hint_tryThisDiffWidget___closed__0 = (const lean_object*)&l_Lean_Meta_Hint_tryThisDiffWidget___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Hint_tryThisDiffWidget___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lean_Meta_Hint_tryThisDiffWidget___closed__1;
static lean_once_cell_t l_Lean_Meta_Hint_tryThisDiffWidget___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Hint_tryThisDiffWidget___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_tryThisDiffWidget;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__1_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__1___boxed(lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "type"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "insertion"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__1_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__0_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__2_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "text"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "deletion"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__5_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__5_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__6_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__0_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__6_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__7_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "unchanged"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__8_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__8_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__9_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__0_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__9_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__10_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__1___closed__0___boxed__const__1;
static lean_once_cell_t l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__1___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__0___closed__0___boxed__const__1;
static lean_once_cell_t l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__0___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__0(lean_object*, lean_object*);
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString___closed__0 = (const lean_object*)&l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_auto_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_auto_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_auto_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_auto_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_char_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_char_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_char_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_char_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_word_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_word_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_word_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_word_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_all_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_all_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_all_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_all_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_none_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_none_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_none_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_none_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_instCoeSuggestionTextSuggestion___lam__0(lean_object*);
static const lean_closure_object l_Lean_Meta_Hint_instCoeSuggestionTextSuggestion___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Hint_instCoeSuggestionTextSuggestion___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Hint_instCoeSuggestionTextSuggestion___closed__0 = (const lean_object*)&l_Lean_Meta_Hint_instCoeSuggestionTextSuggestion___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Hint_instCoeSuggestionTextSuggestion = (const lean_object*)&l_Lean_Meta_Hint_instCoeSuggestionTextSuggestion___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_instToMessageDataSuggestion___lam__0(lean_object*);
static const lean_closure_object l_Lean_Meta_Hint_instToMessageDataSuggestion___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Hint_instToMessageDataSuggestion___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Hint_instToMessageDataSuggestion___closed__0 = (const lean_object*)&l_Lean_Meta_Hint_instToMessageDataSuggestion___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Hint_instToMessageDataSuggestion = (const lean_object*)&l_Lean_Meta_Hint_instToMessageDataSuggestion___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinCharDiff_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinCharDiff_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinCharDiff(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinCharDiff___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__9(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__13_spec__20___redArg(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__13_spec__20___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__13___redArg(lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__13___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__22___redArg(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__22___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__24___redArg(uint32_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__24___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__23_spec__28_spec__29___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__23_spec__28___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__23___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14___redArg(lean_object*, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10___redArg(lean_object*, lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__7___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__7___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___at___00Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__6_spec__8_spec__14___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___at___00Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__6_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__8___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__9(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Diff_0__Lean_Diff_matchPrefix_go___at___00Lean_Diff_matchPrefix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__5_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_matchPrefix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addLeft___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__12___redArg(lean_object*, lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addLeft___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4___closed__0;
static lean_once_cell_t l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4___closed__1;
LEAN_EXPORT lean_object* l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__8(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__2___redArg___boxed__const__1;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__2___redArg(lean_object*, lean_object*, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__3___redArg(lean_object*, lean_object*, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__5_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__5_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1___closed__0 = (const lean_object*)&l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1___closed__0_value;
static const lean_ctor_object l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1___closed__1 = (const lean_object*)&l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1___closed__1_value;
static const lean_ctor_object l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1___closed__0_value),((lean_object*)&l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1___closed__1_value)}};
static const lean_object* l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1___closed__2 = (const lean_object*)&l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__0_spec__0___redArg(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__2(lean_object*, lean_object*, uint32_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__3(lean_object*, lean_object*, uint32_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addLeft___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addLeft___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__13(lean_object*, lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__13___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14(lean_object*, lean_object*, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___at___00Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__6_spec__8_spec__14(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__13_spec__20(lean_object*, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__13_spec__20___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__22(lean_object*, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__22___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__23(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__24(lean_object*, uint32_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__24___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__23_spec__28(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__23_spec__28_spec__29(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_takeWhileAux___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitWordsAux_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_takeWhileAux___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitWordsAux_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitWordsAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitWordsAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitWords___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitWords___closed__0 = (const lean_object*)&l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitWords___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitWords(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitWords___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__8(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__7___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__8(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Diff_0__Lean_Diff_matchPrefix_go___at___00Lean_Diff_matchPrefix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__4_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_matchPrefix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__13_spec__20___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__13_spec__20___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__13___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__13___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__23_spec__28_spec__29___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__23_spec__28___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__23___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__24___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__22___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__22___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___at___00Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__5_spec__8_spec__14___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___at___00Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__5_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addLeft___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3___closed__0;
static lean_once_cell_t l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3___closed__1;
LEAN_EXPORT lean_object* l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__4_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__4_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__7(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__7___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1___closed__0 = (const lean_object*)&l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1___closed__0_value;
static const lean_ctor_object l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1___closed__0_value),((lean_object*)&l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1___closed__1_value)}};
static const lean_object* l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1___closed__1 = (const lean_object*)&l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2___redArg___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2___redArg___lam__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff___closed__0 = (const lean_object*)&l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff___closed__0_value)}};
static const lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff___closed__1 = (const lean_object*)&l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1___closed__0_value),((lean_object*)&l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff___closed__1_value)}};
static const lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff___closed__2 = (const lean_object*)&l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addLeft___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addLeft___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__13(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__13___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___at___00Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__5_spec__8_spec__14(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__13_spec__20(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__13_spec__20___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__22(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__22___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__23(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__24(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__23_spec__28(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__23_spec__28_spec__29(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitChars(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_charDiff(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_maxDiff(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Hint_readableDiff_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Hint_readableDiff_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_readableDiff(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_readableDiff___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__1_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_pushInfoLeaf___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__1___closed__0;
static lean_once_cell_t l_Lean_Elab_pushInfoLeaf___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___lam__0(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 2, .m_data = "• "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__3;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Hint"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__6_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "tryThisDiffWidget"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__7_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__8_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__5_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__8_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__6_value),LEAN_SCALAR_PTR_LITERAL(141, 179, 88, 64, 208, 112, 210, 214)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__8_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__7_value),LEAN_SCALAR_PTR_LITERAL(174, 189, 209, 40, 106, 230, 251, 8)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__8_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "diff"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__9_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "suggestion"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__10_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "range"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__11 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__11_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "linkText"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__12 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__12_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "[apply]"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__13 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__13_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__13_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__14 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__14_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__12_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__14_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__15 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__15_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__15_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__16 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__16_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "textInsertionWidget"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__17 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__17_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__18_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__18_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__5_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__18_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__18_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__6_value),LEAN_SCALAR_PTR_LITERAL(141, 179, 88, 64, 208, 112, 210, 214)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__18_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__17_value),LEAN_SCALAR_PTR_LITERAL(137, 84, 167, 88, 42, 220, 7, 88)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__18 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__18_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "acceptSuggestionProps"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__19 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__19_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "kind"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__20 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__20_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__4_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__21 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__21_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__20_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__21_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__22 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__22_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "hoverText"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__23 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__23_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Apply suggestion"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__24 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__24_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__24_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__25 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__25_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__23_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__25_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__26 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__26_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__26_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__16_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__27 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__27_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__22_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__27_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__28 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__28_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__29;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__30;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__31;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__13_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__32 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__32_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__33;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__34 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__34_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__35;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Try this: "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__36 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__36_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Hint_mkSuggestionsMessage___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Hint_mkSuggestionsMessage___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_mkSuggestionsMessage(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_mkSuggestionsMessage___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MessageData_hint___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hint"};
static const lean_object* l_Lean_MessageData_hint___closed__0 = (const lean_object*)&l_Lean_MessageData_hint___closed__0_value;
static const lean_ctor_object l_Lean_MessageData_hint___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MessageData_hint___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 129, 8, 98, 135, 223, 96, 106)}};
static const lean_object* l_Lean_MessageData_hint___closed__1 = (const lean_object*)&l_Lean_MessageData_hint___closed__1_value;
static const lean_string_object l_Lean_MessageData_hint___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "\n\nHint: "};
static const lean_object* l_Lean_MessageData_hint___closed__2 = (const lean_object*)&l_Lean_MessageData_hint___closed__2_value;
static lean_once_cell_t l_Lean_MessageData_hint___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_hint___closed__3;
LEAN_EXPORT lean_object* l_Lean_MessageData_hint(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_hint___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static uint64_t _init_l_Lean_Meta_Hint_textInsertionWidget___closed__1(void){
_start:
{
lean_object* v___x_2_; uint64_t v___x_3_; 
v___x_2_ = ((lean_object*)(l_Lean_Meta_Hint_textInsertionWidget___closed__0));
v___x_3_ = lean_string_hash(v___x_2_);
return v___x_3_;
}
}
static lean_object* _init_l_Lean_Meta_Hint_textInsertionWidget___closed__2(void){
_start:
{
uint64_t v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_4_ = lean_uint64_once(&l_Lean_Meta_Hint_textInsertionWidget___closed__1, &l_Lean_Meta_Hint_textInsertionWidget___closed__1_once, _init_l_Lean_Meta_Hint_textInsertionWidget___closed__1);
v___x_5_ = ((lean_object*)(l_Lean_Meta_Hint_textInsertionWidget___closed__0));
v___x_6_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_6_, 0, v___x_5_);
lean_ctor_set_uint64(v___x_6_, sizeof(void*)*1, v___x_4_);
return v___x_6_;
}
}
static lean_object* _init_l_Lean_Meta_Hint_textInsertionWidget(void){
_start:
{
lean_object* v___x_7_; 
v___x_7_ = lean_obj_once(&l_Lean_Meta_Hint_textInsertionWidget___closed__2, &l_Lean_Meta_Hint_textInsertionWidget___closed__2_once, _init_l_Lean_Meta_Hint_textInsertionWidget___closed__2);
return v___x_7_;
}
}
static uint64_t _init_l_Lean_Meta_Hint_tryThisDiffWidget___closed__1(void){
_start:
{
lean_object* v___x_9_; uint64_t v___x_10_; 
v___x_9_ = ((lean_object*)(l_Lean_Meta_Hint_tryThisDiffWidget___closed__0));
v___x_10_ = lean_string_hash(v___x_9_);
return v___x_10_;
}
}
static lean_object* _init_l_Lean_Meta_Hint_tryThisDiffWidget___closed__2(void){
_start:
{
uint64_t v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; 
v___x_11_ = lean_uint64_once(&l_Lean_Meta_Hint_tryThisDiffWidget___closed__1, &l_Lean_Meta_Hint_tryThisDiffWidget___closed__1_once, _init_l_Lean_Meta_Hint_tryThisDiffWidget___closed__1);
v___x_12_ = ((lean_object*)(l_Lean_Meta_Hint_tryThisDiffWidget___closed__0));
v___x_13_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_13_, 0, v___x_12_);
lean_ctor_set_uint64(v___x_13_, sizeof(void*)*1, v___x_11_);
return v___x_13_;
}
}
static lean_object* _init_l_Lean_Meta_Hint_tryThisDiffWidget(void){
_start:
{
lean_object* v___x_14_; 
v___x_14_ = lean_obj_once(&l_Lean_Meta_Hint_tryThisDiffWidget___closed__2, &l_Lean_Meta_Hint_tryThisDiffWidget___closed__2_once, _init_l_Lean_Meta_Hint_tryThisDiffWidget___closed__2);
return v___x_14_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__1_spec__1(size_t v_sz_15_, size_t v_i_16_, lean_object* v_bs_17_){
_start:
{
uint8_t v___x_18_; 
v___x_18_ = lean_usize_dec_lt(v_i_16_, v_sz_15_);
if (v___x_18_ == 0)
{
lean_object* v___x_19_; 
v___x_19_ = l_unsafeCast___redArg(v_bs_17_);
lean_dec_ref(v_bs_17_);
return v___x_19_;
}
else
{
lean_object* v_v_20_; lean_object* v___x_21_; lean_object* v_bs_x27_22_; lean_object* v___x_23_; size_t v___x_24_; size_t v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; 
v_v_20_ = lean_array_uget(v_bs_17_, v_i_16_);
v___x_21_ = lean_unsigned_to_nat(0u);
v_bs_x27_22_ = lean_array_uset(v_bs_17_, v_i_16_, v___x_21_);
v___x_23_ = l_unsafeCast___redArg(v_v_20_);
lean_dec(v_v_20_);
v___x_24_ = ((size_t)1ULL);
v___x_25_ = lean_usize_add(v_i_16_, v___x_24_);
v___x_26_ = l_unsafeCast___redArg(v___x_23_);
lean_dec(v___x_23_);
v___x_27_ = lean_array_uset(v_bs_x27_22_, v_i_16_, v___x_26_);
v_i_16_ = v___x_25_;
v_bs_17_ = v___x_27_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__1_spec__1___boxed(lean_object* v_sz_29_, lean_object* v_i_30_, lean_object* v_bs_31_){
_start:
{
size_t v_sz_boxed_32_; size_t v_i_boxed_33_; lean_object* v_res_34_; 
v_sz_boxed_32_ = lean_unbox_usize(v_sz_29_);
lean_dec(v_sz_29_);
v_i_boxed_33_ = lean_unbox_usize(v_i_30_);
lean_dec(v_i_30_);
v_res_34_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__1_spec__1(v_sz_boxed_32_, v_i_boxed_33_, v_bs_31_);
return v_res_34_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__1(lean_object* v_a_35_){
_start:
{
size_t v_sz_36_; size_t v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; 
v_sz_36_ = lean_array_size(v_a_35_);
v___x_37_ = ((size_t)0ULL);
v___x_38_ = l_unsafeCast___redArg(v_a_35_);
v___x_39_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__1_spec__1(v_sz_36_, v___x_37_, v___x_38_);
v___x_40_ = l_unsafeCast___redArg(v___x_39_);
lean_dec_ref(v___x_39_);
v___x_41_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_41_, 0, v___x_40_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__1___boxed(lean_object* v_a_42_){
_start:
{
lean_object* v_res_43_; 
v_res_43_ = l_Lean_Array_toJson___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__1(v_a_42_);
lean_dec_ref(v_a_42_);
return v_res_43_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0(size_t v_sz_64_, size_t v_i_65_, lean_object* v_bs_66_){
_start:
{
uint8_t v___x_67_; 
v___x_67_ = lean_usize_dec_lt(v_i_65_, v_sz_64_);
if (v___x_67_ == 0)
{
lean_object* v___x_68_; 
v___x_68_ = l_unsafeCast___redArg(v_bs_66_);
lean_dec_ref(v_bs_66_);
return v___x_68_;
}
else
{
lean_object* v_v_69_; lean_object* v___x_70_; lean_object* v_fst_71_; lean_object* v_snd_72_; lean_object* v___x_74_; uint8_t v_isShared_75_; uint8_t v_isSharedCheck_116_; 
v_v_69_ = lean_array_uget_borrowed(v_bs_66_, v_i_65_);
v___x_70_ = l_unsafeCast___redArg(v_v_69_);
v_fst_71_ = lean_ctor_get(v___x_70_, 0);
v_snd_72_ = lean_ctor_get(v___x_70_, 1);
v_isSharedCheck_116_ = !lean_is_exclusive(v___x_70_);
if (v_isSharedCheck_116_ == 0)
{
v___x_74_ = v___x_70_;
v_isShared_75_ = v_isSharedCheck_116_;
goto v_resetjp_73_;
}
else
{
lean_inc(v_snd_72_);
lean_inc(v_fst_71_);
lean_dec(v___x_70_);
v___x_74_ = lean_box(0);
v_isShared_75_ = v_isSharedCheck_116_;
goto v_resetjp_73_;
}
v_resetjp_73_:
{
lean_object* v___x_76_; lean_object* v_bs_x27_77_; lean_object* v___y_79_; uint8_t v___x_85_; 
v___x_76_ = lean_unsigned_to_nat(0u);
v_bs_x27_77_ = lean_array_uset(v_bs_66_, v_i_65_, v___x_76_);
v___x_85_ = lean_unbox(v_fst_71_);
lean_dec(v_fst_71_);
switch(v___x_85_)
{
case 0:
{
lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_90_; 
v___x_86_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__3));
v___x_87_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__4));
v___x_88_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_88_, 0, v_snd_72_);
if (v_isShared_75_ == 0)
{
lean_ctor_set(v___x_74_, 1, v___x_88_);
lean_ctor_set(v___x_74_, 0, v___x_87_);
v___x_90_ = v___x_74_;
goto v_reusejp_89_;
}
else
{
lean_object* v_reuseFailAlloc_95_; 
v_reuseFailAlloc_95_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_95_, 0, v___x_87_);
lean_ctor_set(v_reuseFailAlloc_95_, 1, v___x_88_);
v___x_90_ = v_reuseFailAlloc_95_;
goto v_reusejp_89_;
}
v_reusejp_89_:
{
lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; 
v___x_91_ = lean_box(0);
v___x_92_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_92_, 0, v___x_90_);
lean_ctor_set(v___x_92_, 1, v___x_91_);
v___x_93_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_93_, 0, v___x_86_);
lean_ctor_set(v___x_93_, 1, v___x_92_);
v___x_94_ = l_Lean_Json_mkObj(v___x_93_);
lean_dec_ref_known(v___x_93_, 2);
v___y_79_ = v___x_94_;
goto v___jp_78_;
}
}
case 1:
{
lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_100_; 
v___x_96_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__7));
v___x_97_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__4));
v___x_98_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_98_, 0, v_snd_72_);
if (v_isShared_75_ == 0)
{
lean_ctor_set(v___x_74_, 1, v___x_98_);
lean_ctor_set(v___x_74_, 0, v___x_97_);
v___x_100_ = v___x_74_;
goto v_reusejp_99_;
}
else
{
lean_object* v_reuseFailAlloc_105_; 
v_reuseFailAlloc_105_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_105_, 0, v___x_97_);
lean_ctor_set(v_reuseFailAlloc_105_, 1, v___x_98_);
v___x_100_ = v_reuseFailAlloc_105_;
goto v_reusejp_99_;
}
v_reusejp_99_:
{
lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; 
v___x_101_ = lean_box(0);
v___x_102_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_102_, 0, v___x_100_);
lean_ctor_set(v___x_102_, 1, v___x_101_);
v___x_103_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_103_, 0, v___x_96_);
lean_ctor_set(v___x_103_, 1, v___x_102_);
v___x_104_ = l_Lean_Json_mkObj(v___x_103_);
lean_dec_ref_known(v___x_103_, 2);
v___y_79_ = v___x_104_;
goto v___jp_78_;
}
}
default: 
{
lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_110_; 
v___x_106_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__10));
v___x_107_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__4));
v___x_108_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_108_, 0, v_snd_72_);
if (v_isShared_75_ == 0)
{
lean_ctor_set(v___x_74_, 1, v___x_108_);
lean_ctor_set(v___x_74_, 0, v___x_107_);
v___x_110_ = v___x_74_;
goto v_reusejp_109_;
}
else
{
lean_object* v_reuseFailAlloc_115_; 
v_reuseFailAlloc_115_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_115_, 0, v___x_107_);
lean_ctor_set(v_reuseFailAlloc_115_, 1, v___x_108_);
v___x_110_ = v_reuseFailAlloc_115_;
goto v_reusejp_109_;
}
v_reusejp_109_:
{
lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; 
v___x_111_ = lean_box(0);
v___x_112_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_112_, 0, v___x_110_);
lean_ctor_set(v___x_112_, 1, v___x_111_);
v___x_113_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_113_, 0, v___x_106_);
lean_ctor_set(v___x_113_, 1, v___x_112_);
v___x_114_ = l_Lean_Json_mkObj(v___x_113_);
lean_dec_ref_known(v___x_113_, 2);
v___y_79_ = v___x_114_;
goto v___jp_78_;
}
}
}
v___jp_78_:
{
size_t v___x_80_; size_t v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; 
v___x_80_ = ((size_t)1ULL);
v___x_81_ = lean_usize_add(v_i_65_, v___x_80_);
v___x_82_ = l_unsafeCast___redArg(v___y_79_);
lean_dec(v___y_79_);
v___x_83_ = lean_array_uset(v_bs_x27_77_, v_i_65_, v___x_82_);
v_i_65_ = v___x_81_;
v_bs_66_ = v___x_83_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___boxed(lean_object* v_sz_117_, lean_object* v_i_118_, lean_object* v_bs_119_){
_start:
{
size_t v_sz_boxed_120_; size_t v_i_boxed_121_; lean_object* v_res_122_; 
v_sz_boxed_120_ = lean_unbox_usize(v_sz_117_);
lean_dec(v_sz_117_);
v_i_boxed_121_ = lean_unbox_usize(v_i_118_);
lean_dec(v_i_118_);
v_res_122_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0(v_sz_boxed_120_, v_i_boxed_121_, v_bs_119_);
return v_res_122_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson(lean_object* v_ds_123_){
_start:
{
size_t v_sz_124_; size_t v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; 
v_sz_124_ = lean_array_size(v_ds_123_);
v___x_125_ = ((size_t)0ULL);
v___x_126_ = l_unsafeCast___redArg(v_ds_123_);
v___x_127_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0(v_sz_124_, v___x_125_, v___x_126_);
v___x_128_ = l_unsafeCast___redArg(v___x_127_);
lean_dec_ref(v___x_127_);
v___x_129_ = l_Lean_Array_toJson___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__1(v___x_128_);
lean_dec(v___x_128_);
return v___x_129_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson___boxed(lean_object* v_ds_130_){
_start:
{
lean_object* v_res_131_; 
v_res_131_ = l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson(v_ds_130_);
lean_dec_ref(v_ds_130_);
return v_res_131_;
}
}
static lean_object* _init_l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__1___closed__0___boxed__const__1(void){
_start:
{
uint32_t v___x_132_; lean_object* v___x_133_; 
v___x_132_ = 821;
v___x_133_ = lean_box_uint32(v___x_132_);
return v___x_133_;
}
}
static lean_object* _init_l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__1___closed__0(void){
_start:
{
lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; 
v___x_134_ = lean_box(0);
v___x_135_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__1___closed__0___boxed__const__1;
v___x_136_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_136_, 0, v___x_135_);
lean_ctor_set(v___x_136_, 1, v___x_134_);
return v___x_136_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__1(lean_object* v_a_137_, lean_object* v_a_138_){
_start:
{
if (lean_obj_tag(v_a_137_) == 0)
{
lean_object* v___x_139_; 
v___x_139_ = lean_array_to_list(v_a_138_);
return v___x_139_;
}
else
{
lean_object* v_head_140_; lean_object* v_tail_141_; lean_object* v___x_143_; uint8_t v_isShared_144_; uint8_t v_isSharedCheck_151_; 
v_head_140_ = lean_ctor_get(v_a_137_, 0);
v_tail_141_ = lean_ctor_get(v_a_137_, 1);
v_isSharedCheck_151_ = !lean_is_exclusive(v_a_137_);
if (v_isSharedCheck_151_ == 0)
{
v___x_143_ = v_a_137_;
v_isShared_144_ = v_isSharedCheck_151_;
goto v_resetjp_142_;
}
else
{
lean_inc(v_tail_141_);
lean_inc(v_head_140_);
lean_dec(v_a_137_);
v___x_143_ = lean_box(0);
v_isShared_144_ = v_isSharedCheck_151_;
goto v_resetjp_142_;
}
v_resetjp_142_:
{
lean_object* v___x_145_; lean_object* v___x_147_; 
v___x_145_ = lean_obj_once(&l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__1___closed__0, &l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__1___closed__0_once, _init_l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__1___closed__0);
if (v_isShared_144_ == 0)
{
lean_ctor_set(v___x_143_, 1, v___x_145_);
v___x_147_ = v___x_143_;
goto v_reusejp_146_;
}
else
{
lean_object* v_reuseFailAlloc_150_; 
v_reuseFailAlloc_150_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_150_, 0, v_head_140_);
lean_ctor_set(v_reuseFailAlloc_150_, 1, v___x_145_);
v___x_147_ = v_reuseFailAlloc_150_;
goto v_reusejp_146_;
}
v_reusejp_146_:
{
lean_object* v___x_148_; 
v___x_148_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_138_, v___x_147_);
v_a_137_ = v_tail_141_;
v_a_138_ = v___x_148_;
goto _start;
}
}
}
}
}
static lean_object* _init_l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__0___closed__0___boxed__const__1(void){
_start:
{
uint32_t v___x_152_; lean_object* v___x_153_; 
v___x_152_ = 818;
v___x_153_ = lean_box_uint32(v___x_152_);
return v___x_153_;
}
}
static lean_object* _init_l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__0___closed__0(void){
_start:
{
lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; 
v___x_154_ = lean_box(0);
v___x_155_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__0___closed__0___boxed__const__1;
v___x_156_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_156_, 0, v___x_155_);
lean_ctor_set(v___x_156_, 1, v___x_154_);
return v___x_156_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__0(lean_object* v_a_157_, lean_object* v_a_158_){
_start:
{
if (lean_obj_tag(v_a_157_) == 0)
{
lean_object* v___x_159_; 
v___x_159_ = lean_array_to_list(v_a_158_);
return v___x_159_;
}
else
{
lean_object* v_head_160_; lean_object* v_tail_161_; lean_object* v___x_163_; uint8_t v_isShared_164_; uint8_t v_isSharedCheck_171_; 
v_head_160_ = lean_ctor_get(v_a_157_, 0);
v_tail_161_ = lean_ctor_get(v_a_157_, 1);
v_isSharedCheck_171_ = !lean_is_exclusive(v_a_157_);
if (v_isSharedCheck_171_ == 0)
{
v___x_163_ = v_a_157_;
v_isShared_164_ = v_isSharedCheck_171_;
goto v_resetjp_162_;
}
else
{
lean_inc(v_tail_161_);
lean_inc(v_head_160_);
lean_dec(v_a_157_);
v___x_163_ = lean_box(0);
v_isShared_164_ = v_isSharedCheck_171_;
goto v_resetjp_162_;
}
v_resetjp_162_:
{
lean_object* v___x_165_; lean_object* v___x_167_; 
v___x_165_ = lean_obj_once(&l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__0___closed__0, &l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__0___closed__0_once, _init_l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__0___closed__0);
if (v_isShared_164_ == 0)
{
lean_ctor_set(v___x_163_, 1, v___x_165_);
v___x_167_ = v___x_163_;
goto v_reusejp_166_;
}
else
{
lean_object* v_reuseFailAlloc_170_; 
v_reuseFailAlloc_170_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_170_, 0, v_head_160_);
lean_ctor_set(v_reuseFailAlloc_170_, 1, v___x_165_);
v___x_167_ = v_reuseFailAlloc_170_;
goto v_reusejp_166_;
}
v_reusejp_166_:
{
lean_object* v___x_168_; 
v___x_168_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_158_, v___x_167_);
v_a_157_ = v_tail_161_;
v_a_158_ = v___x_168_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__2(size_t v_sz_174_, size_t v_i_175_, lean_object* v_bs_176_){
_start:
{
uint8_t v___x_177_; 
v___x_177_ = lean_usize_dec_lt(v_i_175_, v_sz_174_);
if (v___x_177_ == 0)
{
lean_object* v___x_178_; 
v___x_178_ = l_unsafeCast___redArg(v_bs_176_);
lean_dec_ref(v_bs_176_);
return v___x_178_;
}
else
{
lean_object* v_v_179_; lean_object* v___x_180_; lean_object* v_fst_181_; lean_object* v_snd_182_; lean_object* v___x_183_; lean_object* v_bs_x27_184_; lean_object* v___y_186_; uint8_t v___x_192_; 
v_v_179_ = lean_array_uget_borrowed(v_bs_176_, v_i_175_);
v___x_180_ = l_unsafeCast___redArg(v_v_179_);
v_fst_181_ = lean_ctor_get(v___x_180_, 0);
lean_inc(v_fst_181_);
v_snd_182_ = lean_ctor_get(v___x_180_, 1);
lean_inc(v_snd_182_);
lean_dec(v___x_180_);
v___x_183_ = lean_unsigned_to_nat(0u);
v_bs_x27_184_ = lean_array_uset(v_bs_176_, v_i_175_, v___x_183_);
v___x_192_ = lean_unbox(v_fst_181_);
lean_dec(v_fst_181_);
switch(v___x_192_)
{
case 0:
{
lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; 
v___x_193_ = lean_string_data(v_snd_182_);
v___x_194_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__2___closed__0));
v___x_195_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__0(v___x_193_, v___x_194_);
v___x_196_ = lean_string_mk(v___x_195_);
v___y_186_ = v___x_196_;
goto v___jp_185_;
}
case 1:
{
lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; 
v___x_197_ = lean_string_data(v_snd_182_);
v___x_198_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__2___closed__0));
v___x_199_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__1(v___x_197_, v___x_198_);
v___x_200_ = lean_string_mk(v___x_199_);
v___y_186_ = v___x_200_;
goto v___jp_185_;
}
default: 
{
v___y_186_ = v_snd_182_;
goto v___jp_185_;
}
}
v___jp_185_:
{
size_t v___x_187_; size_t v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; 
v___x_187_ = ((size_t)1ULL);
v___x_188_ = lean_usize_add(v_i_175_, v___x_187_);
v___x_189_ = l_unsafeCast___redArg(v___y_186_);
lean_dec_ref(v___y_186_);
v___x_190_ = lean_array_uset(v_bs_x27_184_, v_i_175_, v___x_189_);
v_i_175_ = v___x_188_;
v_bs_176_ = v___x_190_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__2___boxed(lean_object* v_sz_201_, lean_object* v_i_202_, lean_object* v_bs_203_){
_start:
{
size_t v_sz_boxed_204_; size_t v_i_boxed_205_; lean_object* v_res_206_; 
v_sz_boxed_204_ = lean_unbox_usize(v_sz_201_);
lean_dec(v_sz_201_);
v_i_boxed_205_ = lean_unbox_usize(v_i_202_);
lean_dec(v_i_202_);
v_res_206_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__2(v_sz_boxed_204_, v_i_boxed_205_, v_bs_203_);
return v_res_206_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__3(lean_object* v_as_207_, size_t v_i_208_, size_t v_stop_209_, lean_object* v_b_210_){
_start:
{
uint8_t v___x_211_; 
v___x_211_ = lean_usize_dec_eq(v_i_208_, v_stop_209_);
if (v___x_211_ == 0)
{
lean_object* v___x_212_; lean_object* v___x_213_; size_t v___x_214_; size_t v___x_215_; 
v___x_212_ = lean_array_uget_borrowed(v_as_207_, v_i_208_);
v___x_213_ = lean_string_append(v_b_210_, v___x_212_);
v___x_214_ = ((size_t)1ULL);
v___x_215_ = lean_usize_add(v_i_208_, v___x_214_);
v_i_208_ = v___x_215_;
v_b_210_ = v___x_213_;
goto _start;
}
else
{
return v_b_210_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__3___boxed(lean_object* v_as_217_, lean_object* v_i_218_, lean_object* v_stop_219_, lean_object* v_b_220_){
_start:
{
size_t v_i_boxed_221_; size_t v_stop_boxed_222_; lean_object* v_res_223_; 
v_i_boxed_221_ = lean_unbox_usize(v_i_218_);
lean_dec(v_i_218_);
v_stop_boxed_222_ = lean_unbox_usize(v_stop_219_);
lean_dec(v_stop_219_);
v_res_223_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__3(v_as_217_, v_i_boxed_221_, v_stop_boxed_222_, v_b_220_);
lean_dec_ref(v_as_217_);
return v_res_223_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString(lean_object* v_ds_225_){
_start:
{
size_t v_sz_226_; size_t v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v_rangeStrs_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; uint8_t v___x_234_; 
v_sz_226_ = lean_array_size(v_ds_225_);
v___x_227_ = ((size_t)0ULL);
v___x_228_ = l_unsafeCast___redArg(v_ds_225_);
v___x_229_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__2(v_sz_226_, v___x_227_, v___x_228_);
v_rangeStrs_230_ = l_unsafeCast___redArg(v___x_229_);
lean_dec_ref(v___x_229_);
v___x_231_ = ((lean_object*)(l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString___closed__0));
v___x_232_ = lean_unsigned_to_nat(0u);
v___x_233_ = lean_array_get_size(v_rangeStrs_230_);
v___x_234_ = lean_nat_dec_lt(v___x_232_, v___x_233_);
if (v___x_234_ == 0)
{
lean_dec(v_rangeStrs_230_);
return v___x_231_;
}
else
{
uint8_t v___x_235_; 
v___x_235_ = lean_nat_dec_le(v___x_233_, v___x_233_);
if (v___x_235_ == 0)
{
if (v___x_234_ == 0)
{
lean_dec(v_rangeStrs_230_);
return v___x_231_;
}
else
{
size_t v___x_236_; lean_object* v___x_237_; 
v___x_236_ = lean_usize_of_nat(v___x_233_);
v___x_237_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__3(v_rangeStrs_230_, v___x_227_, v___x_236_, v___x_231_);
lean_dec(v_rangeStrs_230_);
return v___x_237_;
}
}
else
{
size_t v___x_238_; lean_object* v___x_239_; 
v___x_238_ = lean_usize_of_nat(v___x_233_);
v___x_239_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__3(v_rangeStrs_230_, v___x_227_, v___x_238_, v___x_231_);
lean_dec(v_rangeStrs_230_);
return v___x_239_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString___boxed(lean_object* v_ds_240_){
_start:
{
lean_object* v_res_241_; 
v_res_241_ = l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString(v_ds_240_);
lean_dec_ref(v_ds_240_);
return v_res_241_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_ctorIdx(uint8_t v_x_242_){
_start:
{
switch(v_x_242_)
{
case 0:
{
lean_object* v___x_243_; 
v___x_243_ = lean_unsigned_to_nat(0u);
return v___x_243_;
}
case 1:
{
lean_object* v___x_244_; 
v___x_244_ = lean_unsigned_to_nat(1u);
return v___x_244_;
}
case 2:
{
lean_object* v___x_245_; 
v___x_245_ = lean_unsigned_to_nat(2u);
return v___x_245_;
}
case 3:
{
lean_object* v___x_246_; 
v___x_246_ = lean_unsigned_to_nat(3u);
return v___x_246_;
}
default: 
{
lean_object* v___x_247_; 
v___x_247_ = lean_unsigned_to_nat(4u);
return v___x_247_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_ctorIdx___boxed(lean_object* v_x_248_){
_start:
{
uint8_t v_x_boxed_249_; lean_object* v_res_250_; 
v_x_boxed_249_ = lean_unbox(v_x_248_);
v_res_250_ = l_Lean_Meta_Hint_DiffGranularity_ctorIdx(v_x_boxed_249_);
return v_res_250_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_ctorElim___redArg(lean_object* v_k_251_){
_start:
{
lean_inc(v_k_251_);
return v_k_251_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_ctorElim___redArg___boxed(lean_object* v_k_252_){
_start:
{
lean_object* v_res_253_; 
v_res_253_ = l_Lean_Meta_Hint_DiffGranularity_ctorElim___redArg(v_k_252_);
lean_dec(v_k_252_);
return v_res_253_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_ctorElim(lean_object* v_motive_254_, lean_object* v_ctorIdx_255_, uint8_t v_t_256_, lean_object* v_h_257_, lean_object* v_k_258_){
_start:
{
lean_inc(v_k_258_);
return v_k_258_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_ctorElim___boxed(lean_object* v_motive_259_, lean_object* v_ctorIdx_260_, lean_object* v_t_261_, lean_object* v_h_262_, lean_object* v_k_263_){
_start:
{
uint8_t v_t_boxed_264_; lean_object* v_res_265_; 
v_t_boxed_264_ = lean_unbox(v_t_261_);
v_res_265_ = l_Lean_Meta_Hint_DiffGranularity_ctorElim(v_motive_259_, v_ctorIdx_260_, v_t_boxed_264_, v_h_262_, v_k_263_);
lean_dec(v_k_263_);
lean_dec(v_ctorIdx_260_);
return v_res_265_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_auto_elim___redArg(lean_object* v_auto_266_){
_start:
{
lean_inc(v_auto_266_);
return v_auto_266_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_auto_elim___redArg___boxed(lean_object* v_auto_267_){
_start:
{
lean_object* v_res_268_; 
v_res_268_ = l_Lean_Meta_Hint_DiffGranularity_auto_elim___redArg(v_auto_267_);
lean_dec(v_auto_267_);
return v_res_268_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_auto_elim(lean_object* v_motive_269_, uint8_t v_t_270_, lean_object* v_h_271_, lean_object* v_auto_272_){
_start:
{
lean_inc(v_auto_272_);
return v_auto_272_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_auto_elim___boxed(lean_object* v_motive_273_, lean_object* v_t_274_, lean_object* v_h_275_, lean_object* v_auto_276_){
_start:
{
uint8_t v_t_boxed_277_; lean_object* v_res_278_; 
v_t_boxed_277_ = lean_unbox(v_t_274_);
v_res_278_ = l_Lean_Meta_Hint_DiffGranularity_auto_elim(v_motive_273_, v_t_boxed_277_, v_h_275_, v_auto_276_);
lean_dec(v_auto_276_);
return v_res_278_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_char_elim___redArg(lean_object* v_char_279_){
_start:
{
lean_inc(v_char_279_);
return v_char_279_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_char_elim___redArg___boxed(lean_object* v_char_280_){
_start:
{
lean_object* v_res_281_; 
v_res_281_ = l_Lean_Meta_Hint_DiffGranularity_char_elim___redArg(v_char_280_);
lean_dec(v_char_280_);
return v_res_281_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_char_elim(lean_object* v_motive_282_, uint8_t v_t_283_, lean_object* v_h_284_, lean_object* v_char_285_){
_start:
{
lean_inc(v_char_285_);
return v_char_285_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_char_elim___boxed(lean_object* v_motive_286_, lean_object* v_t_287_, lean_object* v_h_288_, lean_object* v_char_289_){
_start:
{
uint8_t v_t_boxed_290_; lean_object* v_res_291_; 
v_t_boxed_290_ = lean_unbox(v_t_287_);
v_res_291_ = l_Lean_Meta_Hint_DiffGranularity_char_elim(v_motive_286_, v_t_boxed_290_, v_h_288_, v_char_289_);
lean_dec(v_char_289_);
return v_res_291_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_word_elim___redArg(lean_object* v_word_292_){
_start:
{
lean_inc(v_word_292_);
return v_word_292_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_word_elim___redArg___boxed(lean_object* v_word_293_){
_start:
{
lean_object* v_res_294_; 
v_res_294_ = l_Lean_Meta_Hint_DiffGranularity_word_elim___redArg(v_word_293_);
lean_dec(v_word_293_);
return v_res_294_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_word_elim(lean_object* v_motive_295_, uint8_t v_t_296_, lean_object* v_h_297_, lean_object* v_word_298_){
_start:
{
lean_inc(v_word_298_);
return v_word_298_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_word_elim___boxed(lean_object* v_motive_299_, lean_object* v_t_300_, lean_object* v_h_301_, lean_object* v_word_302_){
_start:
{
uint8_t v_t_boxed_303_; lean_object* v_res_304_; 
v_t_boxed_303_ = lean_unbox(v_t_300_);
v_res_304_ = l_Lean_Meta_Hint_DiffGranularity_word_elim(v_motive_299_, v_t_boxed_303_, v_h_301_, v_word_302_);
lean_dec(v_word_302_);
return v_res_304_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_all_elim___redArg(lean_object* v_all_305_){
_start:
{
lean_inc(v_all_305_);
return v_all_305_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_all_elim___redArg___boxed(lean_object* v_all_306_){
_start:
{
lean_object* v_res_307_; 
v_res_307_ = l_Lean_Meta_Hint_DiffGranularity_all_elim___redArg(v_all_306_);
lean_dec(v_all_306_);
return v_res_307_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_all_elim(lean_object* v_motive_308_, uint8_t v_t_309_, lean_object* v_h_310_, lean_object* v_all_311_){
_start:
{
lean_inc(v_all_311_);
return v_all_311_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_all_elim___boxed(lean_object* v_motive_312_, lean_object* v_t_313_, lean_object* v_h_314_, lean_object* v_all_315_){
_start:
{
uint8_t v_t_boxed_316_; lean_object* v_res_317_; 
v_t_boxed_316_ = lean_unbox(v_t_313_);
v_res_317_ = l_Lean_Meta_Hint_DiffGranularity_all_elim(v_motive_312_, v_t_boxed_316_, v_h_314_, v_all_315_);
lean_dec(v_all_315_);
return v_res_317_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_none_elim___redArg(lean_object* v_none_318_){
_start:
{
lean_inc(v_none_318_);
return v_none_318_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_none_elim___redArg___boxed(lean_object* v_none_319_){
_start:
{
lean_object* v_res_320_; 
v_res_320_ = l_Lean_Meta_Hint_DiffGranularity_none_elim___redArg(v_none_319_);
lean_dec(v_none_319_);
return v_res_320_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_none_elim(lean_object* v_motive_321_, uint8_t v_t_322_, lean_object* v_h_323_, lean_object* v_none_324_){
_start:
{
lean_inc(v_none_324_);
return v_none_324_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_none_elim___boxed(lean_object* v_motive_325_, lean_object* v_t_326_, lean_object* v_h_327_, lean_object* v_none_328_){
_start:
{
uint8_t v_t_boxed_329_; lean_object* v_res_330_; 
v_t_boxed_329_ = lean_unbox(v_t_326_);
v_res_330_ = l_Lean_Meta_Hint_DiffGranularity_none_elim(v_motive_325_, v_t_boxed_329_, v_h_327_, v_none_328_);
lean_dec(v_none_328_);
return v_res_330_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_instCoeSuggestionTextSuggestion___lam__0(lean_object* v_t_331_){
_start:
{
lean_object* v___x_332_; lean_object* v___x_333_; uint8_t v___x_334_; lean_object* v___x_335_; 
v___x_332_ = lean_box(0);
v___x_333_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_333_, 0, v_t_331_);
lean_ctor_set(v___x_333_, 1, v___x_332_);
lean_ctor_set(v___x_333_, 2, v___x_332_);
lean_ctor_set(v___x_333_, 3, v___x_332_);
lean_ctor_set(v___x_333_, 4, v___x_332_);
lean_ctor_set(v___x_333_, 5, v___x_332_);
v___x_334_ = 0;
v___x_335_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_335_, 0, v___x_333_);
lean_ctor_set(v___x_335_, 1, v___x_332_);
lean_ctor_set(v___x_335_, 2, v___x_332_);
lean_ctor_set_uint8(v___x_335_, sizeof(void*)*3, v___x_334_);
return v___x_335_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_instToMessageDataSuggestion___lam__0(lean_object* v_s_338_){
_start:
{
lean_object* v_toTryThisSuggestion_339_; lean_object* v_messageData_x3f_340_; 
v_toTryThisSuggestion_339_ = lean_ctor_get(v_s_338_, 0);
lean_inc_ref(v_toTryThisSuggestion_339_);
lean_dec_ref(v_s_338_);
v_messageData_x3f_340_ = lean_ctor_get(v_toTryThisSuggestion_339_, 4);
if (lean_obj_tag(v_messageData_x3f_340_) == 0)
{
lean_object* v_suggestion_341_; 
v_suggestion_341_ = lean_ctor_get(v_toTryThisSuggestion_339_, 0);
lean_inc_ref(v_suggestion_341_);
lean_dec_ref(v_toTryThisSuggestion_339_);
if (lean_obj_tag(v_suggestion_341_) == 0)
{
lean_object* v_a_342_; lean_object* v___x_343_; 
v_a_342_ = lean_ctor_get(v_suggestion_341_, 1);
lean_inc(v_a_342_);
lean_dec_ref_known(v_suggestion_341_, 2);
v___x_343_ = l_Lean_MessageData_ofSyntax(v_a_342_);
return v___x_343_;
}
else
{
lean_object* v_a_344_; lean_object* v___x_346_; uint8_t v_isShared_347_; uint8_t v_isSharedCheck_352_; 
v_a_344_ = lean_ctor_get(v_suggestion_341_, 0);
v_isSharedCheck_352_ = !lean_is_exclusive(v_suggestion_341_);
if (v_isSharedCheck_352_ == 0)
{
v___x_346_ = v_suggestion_341_;
v_isShared_347_ = v_isSharedCheck_352_;
goto v_resetjp_345_;
}
else
{
lean_inc(v_a_344_);
lean_dec(v_suggestion_341_);
v___x_346_ = lean_box(0);
v_isShared_347_ = v_isSharedCheck_352_;
goto v_resetjp_345_;
}
v_resetjp_345_:
{
lean_object* v___x_349_; 
if (v_isShared_347_ == 0)
{
lean_ctor_set_tag(v___x_346_, 3);
v___x_349_ = v___x_346_;
goto v_reusejp_348_;
}
else
{
lean_object* v_reuseFailAlloc_351_; 
v_reuseFailAlloc_351_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_351_, 0, v_a_344_);
v___x_349_ = v_reuseFailAlloc_351_;
goto v_reusejp_348_;
}
v_reusejp_348_:
{
lean_object* v___x_350_; 
v___x_350_ = l_Lean_MessageData_ofFormat(v___x_349_);
return v___x_350_;
}
}
}
}
else
{
lean_object* v_val_353_; 
lean_inc_ref(v_messageData_x3f_340_);
lean_dec_ref(v_toTryThisSuggestion_339_);
v_val_353_ = lean_ctor_get(v_messageData_x3f_340_, 0);
lean_inc(v_val_353_);
lean_dec_ref_known(v_messageData_x3f_340_, 1);
return v_val_353_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits_spec__0___redArg(lean_object* v_as_356_, size_t v_i_357_, size_t v_stop_358_, lean_object* v_b_359_){
_start:
{
lean_object* v___y_361_; uint8_t v___x_365_; 
v___x_365_ = lean_usize_dec_eq(v_i_357_, v_stop_358_);
if (v___x_365_ == 0)
{
lean_object* v___x_366_; lean_object* v_fst_367_; lean_object* v_snd_368_; lean_object* v___x_370_; uint8_t v_isShared_371_; uint8_t v_isSharedCheck_405_; 
v___x_366_ = lean_array_uget(v_as_356_, v_i_357_);
v_fst_367_ = lean_ctor_get(v___x_366_, 0);
v_snd_368_ = lean_ctor_get(v___x_366_, 1);
v_isSharedCheck_405_ = !lean_is_exclusive(v___x_366_);
if (v_isSharedCheck_405_ == 0)
{
v___x_370_ = v___x_366_;
v_isShared_371_ = v_isSharedCheck_405_;
goto v_resetjp_369_;
}
else
{
lean_inc(v_snd_368_);
lean_inc(v_fst_367_);
lean_dec(v___x_366_);
v___x_370_ = lean_box(0);
v_isShared_371_ = v_isSharedCheck_405_;
goto v_resetjp_369_;
}
v_resetjp_369_:
{
lean_object* v___x_372_; lean_object* v___x_373_; uint8_t v___x_374_; 
v___x_372_ = lean_array_get_size(v_b_359_);
v___x_373_ = lean_unsigned_to_nat(0u);
v___x_374_ = lean_nat_dec_eq(v___x_372_, v___x_373_);
if (v___x_374_ == 0)
{
lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v_fst_378_; lean_object* v_snd_379_; lean_object* v___x_381_; uint8_t v_isShared_382_; uint8_t v_isSharedCheck_397_; 
lean_del_object(v___x_370_);
v___x_375_ = lean_unsigned_to_nat(1u);
v___x_376_ = lean_nat_sub(v___x_372_, v___x_375_);
v___x_377_ = lean_array_fget(v_b_359_, v___x_376_);
v_fst_378_ = lean_ctor_get(v___x_377_, 0);
v_snd_379_ = lean_ctor_get(v___x_377_, 1);
v_isSharedCheck_397_ = !lean_is_exclusive(v___x_377_);
if (v_isSharedCheck_397_ == 0)
{
v___x_381_ = v___x_377_;
v_isShared_382_ = v_isSharedCheck_397_;
goto v_resetjp_380_;
}
else
{
lean_inc(v_snd_379_);
lean_inc(v_fst_378_);
lean_dec(v___x_377_);
v___x_381_ = lean_box(0);
v_isShared_382_ = v_isSharedCheck_397_;
goto v_resetjp_380_;
}
v_resetjp_380_:
{
uint8_t v___x_383_; uint8_t v___x_384_; uint8_t v___x_385_; 
v___x_383_ = lean_unbox(v_fst_367_);
v___x_384_ = lean_unbox(v_fst_378_);
lean_dec(v_fst_378_);
v___x_385_ = l_Lean_Diff_instBEqAction_beq(v___x_383_, v___x_384_);
if (v___x_385_ == 0)
{
lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_389_; 
lean_dec(v_snd_379_);
lean_dec(v___x_376_);
v___x_386_ = lean_mk_empty_array_with_capacity(v___x_375_);
v___x_387_ = lean_array_push(v___x_386_, v_snd_368_);
if (v_isShared_382_ == 0)
{
lean_ctor_set(v___x_381_, 1, v___x_387_);
lean_ctor_set(v___x_381_, 0, v_fst_367_);
v___x_389_ = v___x_381_;
goto v_reusejp_388_;
}
else
{
lean_object* v_reuseFailAlloc_391_; 
v_reuseFailAlloc_391_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_391_, 0, v_fst_367_);
lean_ctor_set(v_reuseFailAlloc_391_, 1, v___x_387_);
v___x_389_ = v_reuseFailAlloc_391_;
goto v_reusejp_388_;
}
v_reusejp_388_:
{
lean_object* v___x_390_; 
v___x_390_ = lean_array_push(v_b_359_, v___x_389_);
v___y_361_ = v___x_390_;
goto v___jp_360_;
}
}
else
{
lean_object* v___x_392_; lean_object* v___x_394_; 
v___x_392_ = lean_array_push(v_snd_379_, v_snd_368_);
if (v_isShared_382_ == 0)
{
lean_ctor_set(v___x_381_, 1, v___x_392_);
lean_ctor_set(v___x_381_, 0, v_fst_367_);
v___x_394_ = v___x_381_;
goto v_reusejp_393_;
}
else
{
lean_object* v_reuseFailAlloc_396_; 
v_reuseFailAlloc_396_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_396_, 0, v_fst_367_);
lean_ctor_set(v_reuseFailAlloc_396_, 1, v___x_392_);
v___x_394_ = v_reuseFailAlloc_396_;
goto v_reusejp_393_;
}
v_reusejp_393_:
{
lean_object* v___x_395_; 
v___x_395_ = lean_array_fset(v_b_359_, v___x_376_, v___x_394_);
lean_dec(v___x_376_);
v___y_361_ = v___x_395_;
goto v___jp_360_;
}
}
}
}
else
{
lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_402_; 
lean_dec_ref(v_b_359_);
v___x_398_ = lean_unsigned_to_nat(1u);
v___x_399_ = lean_mk_empty_array_with_capacity(v___x_398_);
lean_inc_ref(v___x_399_);
v___x_400_ = lean_array_push(v___x_399_, v_snd_368_);
if (v_isShared_371_ == 0)
{
lean_ctor_set(v___x_370_, 1, v___x_400_);
v___x_402_ = v___x_370_;
goto v_reusejp_401_;
}
else
{
lean_object* v_reuseFailAlloc_404_; 
v_reuseFailAlloc_404_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_404_, 0, v_fst_367_);
lean_ctor_set(v_reuseFailAlloc_404_, 1, v___x_400_);
v___x_402_ = v_reuseFailAlloc_404_;
goto v_reusejp_401_;
}
v_reusejp_401_:
{
lean_object* v___x_403_; 
v___x_403_ = lean_array_push(v___x_399_, v___x_402_);
v___y_361_ = v___x_403_;
goto v___jp_360_;
}
}
}
}
else
{
return v_b_359_;
}
v___jp_360_:
{
size_t v___x_362_; size_t v___x_363_; 
v___x_362_ = ((size_t)1ULL);
v___x_363_ = lean_usize_add(v_i_357_, v___x_362_);
v_i_357_ = v___x_363_;
v_b_359_ = v___y_361_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits_spec__0___redArg___boxed(lean_object* v_as_406_, lean_object* v_i_407_, lean_object* v_stop_408_, lean_object* v_b_409_){
_start:
{
size_t v_i_boxed_410_; size_t v_stop_boxed_411_; lean_object* v_res_412_; 
v_i_boxed_410_ = lean_unbox_usize(v_i_407_);
lean_dec(v_i_407_);
v_stop_boxed_411_ = lean_unbox_usize(v_stop_408_);
lean_dec(v_stop_408_);
v_res_412_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits_spec__0___redArg(v_as_406_, v_i_boxed_410_, v_stop_boxed_411_, v_b_409_);
lean_dec_ref(v_as_406_);
return v_res_412_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits___redArg(lean_object* v_ds_415_){
_start:
{
lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; uint8_t v___x_419_; 
v___x_416_ = lean_unsigned_to_nat(0u);
v___x_417_ = ((lean_object*)(l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits___redArg___closed__0));
v___x_418_ = lean_array_get_size(v_ds_415_);
v___x_419_ = lean_nat_dec_lt(v___x_416_, v___x_418_);
if (v___x_419_ == 0)
{
return v___x_417_;
}
else
{
uint8_t v___x_420_; 
v___x_420_ = lean_nat_dec_le(v___x_418_, v___x_418_);
if (v___x_420_ == 0)
{
if (v___x_419_ == 0)
{
return v___x_417_;
}
else
{
size_t v___x_421_; size_t v___x_422_; lean_object* v___x_423_; 
v___x_421_ = ((size_t)0ULL);
v___x_422_ = lean_usize_of_nat(v___x_418_);
v___x_423_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits_spec__0___redArg(v_ds_415_, v___x_421_, v___x_422_, v___x_417_);
return v___x_423_;
}
}
else
{
size_t v___x_424_; size_t v___x_425_; lean_object* v___x_426_; 
v___x_424_ = ((size_t)0ULL);
v___x_425_ = lean_usize_of_nat(v___x_418_);
v___x_426_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits_spec__0___redArg(v_ds_415_, v___x_424_, v___x_425_, v___x_417_);
return v___x_426_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits___redArg___boxed(lean_object* v_ds_427_){
_start:
{
lean_object* v_res_428_; 
v_res_428_ = l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits___redArg(v_ds_427_);
lean_dec_ref(v_ds_427_);
return v_res_428_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits(lean_object* v_00_u03b1_429_, lean_object* v_ds_430_){
_start:
{
lean_object* v___x_431_; 
v___x_431_ = l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits___redArg(v_ds_430_);
return v___x_431_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits___boxed(lean_object* v_00_u03b1_432_, lean_object* v_ds_433_){
_start:
{
lean_object* v_res_434_; 
v_res_434_ = l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits(v_00_u03b1_432_, v_ds_433_);
lean_dec_ref(v_ds_433_);
return v_res_434_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits_spec__0(lean_object* v_00_u03b1_435_, lean_object* v_as_436_, size_t v_i_437_, size_t v_stop_438_, lean_object* v_b_439_){
_start:
{
lean_object* v___x_440_; 
v___x_440_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits_spec__0___redArg(v_as_436_, v_i_437_, v_stop_438_, v_b_439_);
return v___x_440_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits_spec__0___boxed(lean_object* v_00_u03b1_441_, lean_object* v_as_442_, lean_object* v_i_443_, lean_object* v_stop_444_, lean_object* v_b_445_){
_start:
{
size_t v_i_boxed_446_; size_t v_stop_boxed_447_; lean_object* v_res_448_; 
v_i_boxed_446_ = lean_unbox_usize(v_i_443_);
lean_dec(v_i_443_);
v_stop_boxed_447_ = lean_unbox_usize(v_stop_444_);
lean_dec(v_stop_444_);
v_res_448_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits_spec__0(v_00_u03b1_441_, v_as_442_, v_i_boxed_446_, v_stop_boxed_447_, v_b_445_);
lean_dec_ref(v_as_442_);
return v_res_448_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinCharDiff_spec__0(size_t v_sz_449_, size_t v_i_450_, lean_object* v_bs_451_){
_start:
{
uint8_t v___x_452_; 
v___x_452_ = lean_usize_dec_lt(v_i_450_, v_sz_449_);
if (v___x_452_ == 0)
{
lean_object* v___x_453_; 
v___x_453_ = l_unsafeCast___redArg(v_bs_451_);
lean_dec_ref(v_bs_451_);
return v___x_453_;
}
else
{
lean_object* v_v_454_; lean_object* v___x_455_; lean_object* v_fst_456_; lean_object* v_snd_457_; lean_object* v___x_459_; uint8_t v_isShared_460_; uint8_t v_isSharedCheck_473_; 
v_v_454_ = lean_array_uget_borrowed(v_bs_451_, v_i_450_);
v___x_455_ = l_unsafeCast___redArg(v_v_454_);
v_fst_456_ = lean_ctor_get(v___x_455_, 0);
v_snd_457_ = lean_ctor_get(v___x_455_, 1);
v_isSharedCheck_473_ = !lean_is_exclusive(v___x_455_);
if (v_isSharedCheck_473_ == 0)
{
v___x_459_ = v___x_455_;
v_isShared_460_ = v_isSharedCheck_473_;
goto v_resetjp_458_;
}
else
{
lean_inc(v_snd_457_);
lean_inc(v_fst_456_);
lean_dec(v___x_455_);
v___x_459_ = lean_box(0);
v_isShared_460_ = v_isSharedCheck_473_;
goto v_resetjp_458_;
}
v_resetjp_458_:
{
lean_object* v___x_461_; lean_object* v_bs_x27_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_466_; 
v___x_461_ = lean_unsigned_to_nat(0u);
v_bs_x27_462_ = lean_array_uset(v_bs_451_, v_i_450_, v___x_461_);
v___x_463_ = lean_array_to_list(v_snd_457_);
v___x_464_ = lean_string_mk(v___x_463_);
if (v_isShared_460_ == 0)
{
lean_ctor_set(v___x_459_, 1, v___x_464_);
v___x_466_ = v___x_459_;
goto v_reusejp_465_;
}
else
{
lean_object* v_reuseFailAlloc_472_; 
v_reuseFailAlloc_472_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_472_, 0, v_fst_456_);
lean_ctor_set(v_reuseFailAlloc_472_, 1, v___x_464_);
v___x_466_ = v_reuseFailAlloc_472_;
goto v_reusejp_465_;
}
v_reusejp_465_:
{
size_t v___x_467_; size_t v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; 
v___x_467_ = ((size_t)1ULL);
v___x_468_ = lean_usize_add(v_i_450_, v___x_467_);
v___x_469_ = l_unsafeCast___redArg(v___x_466_);
lean_dec_ref(v___x_466_);
v___x_470_ = lean_array_uset(v_bs_x27_462_, v_i_450_, v___x_469_);
v_i_450_ = v___x_468_;
v_bs_451_ = v___x_470_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinCharDiff_spec__0___boxed(lean_object* v_sz_474_, lean_object* v_i_475_, lean_object* v_bs_476_){
_start:
{
size_t v_sz_boxed_477_; size_t v_i_boxed_478_; lean_object* v_res_479_; 
v_sz_boxed_477_ = lean_unbox_usize(v_sz_474_);
lean_dec(v_sz_474_);
v_i_boxed_478_ = lean_unbox_usize(v_i_475_);
lean_dec(v_i_475_);
v_res_479_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinCharDiff_spec__0(v_sz_boxed_477_, v_i_boxed_478_, v_bs_476_);
return v_res_479_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinCharDiff(lean_object* v_d_480_){
_start:
{
lean_object* v___x_481_; size_t v_sz_482_; size_t v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; 
v___x_481_ = l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits___redArg(v_d_480_);
v_sz_482_ = lean_array_size(v___x_481_);
v___x_483_ = ((size_t)0ULL);
v___x_484_ = l_unsafeCast___redArg(v___x_481_);
lean_dec_ref(v___x_481_);
v___x_485_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinCharDiff_spec__0(v_sz_482_, v___x_483_, v___x_484_);
v___x_486_ = l_unsafeCast___redArg(v___x_485_);
lean_dec_ref(v___x_485_);
return v___x_486_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinCharDiff___boxed(lean_object* v_d_487_){
_start:
{
lean_object* v_res_488_; 
v_res_488_ = l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinCharDiff(v_d_487_);
lean_dec_ref(v_d_487_);
return v_res_488_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__9(size_t v_sz_489_, size_t v_i_490_, lean_object* v_bs_491_){
_start:
{
uint8_t v___x_492_; 
v___x_492_ = lean_usize_dec_lt(v_i_490_, v_sz_489_);
if (v___x_492_ == 0)
{
lean_object* v___x_493_; 
v___x_493_ = l_unsafeCast___redArg(v_bs_491_);
lean_dec_ref(v_bs_491_);
return v___x_493_;
}
else
{
lean_object* v_v_494_; lean_object* v___x_495_; lean_object* v_bs_x27_496_; lean_object* v___x_497_; uint8_t v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; size_t v___x_501_; size_t v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; 
v_v_494_ = lean_array_uget(v_bs_491_, v_i_490_);
v___x_495_ = lean_unsigned_to_nat(0u);
v_bs_x27_496_ = lean_array_uset(v_bs_491_, v_i_490_, v___x_495_);
v___x_497_ = l_unsafeCast___redArg(v_v_494_);
lean_dec(v_v_494_);
v___x_498_ = 0;
v___x_499_ = lean_box(v___x_498_);
v___x_500_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_500_, 0, v___x_499_);
lean_ctor_set(v___x_500_, 1, v___x_497_);
v___x_501_ = ((size_t)1ULL);
v___x_502_ = lean_usize_add(v_i_490_, v___x_501_);
v___x_503_ = l_unsafeCast___redArg(v___x_500_);
lean_dec_ref_known(v___x_500_, 2);
v___x_504_ = lean_array_uset(v_bs_x27_496_, v_i_490_, v___x_503_);
v_i_490_ = v___x_502_;
v_bs_491_ = v___x_504_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__9___boxed(lean_object* v_sz_506_, lean_object* v_i_507_, lean_object* v_bs_508_){
_start:
{
size_t v_sz_boxed_509_; size_t v_i_boxed_510_; lean_object* v_res_511_; 
v_sz_boxed_509_ = lean_unbox_usize(v_sz_506_);
lean_dec(v_sz_506_);
v_i_boxed_510_ = lean_unbox_usize(v_i_507_);
lean_dec(v_i_507_);
v_res_511_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__9(v_sz_boxed_509_, v_i_boxed_510_, v_bs_508_);
return v_res_511_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__6___redArg(lean_object* v___x_512_, lean_object* v_original_513_, lean_object* v_a_514_){
_start:
{
lean_object* v_fst_515_; lean_object* v_snd_516_; lean_object* v___x_518_; uint8_t v_isShared_519_; uint8_t v_isSharedCheck_535_; 
v_fst_515_ = lean_ctor_get(v_a_514_, 0);
v_snd_516_ = lean_ctor_get(v_a_514_, 1);
v_isSharedCheck_535_ = !lean_is_exclusive(v_a_514_);
if (v_isSharedCheck_535_ == 0)
{
v___x_518_ = v_a_514_;
v_isShared_519_ = v_isSharedCheck_535_;
goto v_resetjp_517_;
}
else
{
lean_inc(v_snd_516_);
lean_inc(v_fst_515_);
lean_dec(v_a_514_);
v___x_518_ = lean_box(0);
v_isShared_519_ = v_isSharedCheck_535_;
goto v_resetjp_517_;
}
v_resetjp_517_:
{
uint8_t v___x_520_; 
v___x_520_ = lean_nat_dec_lt(v_snd_516_, v___x_512_);
if (v___x_520_ == 0)
{
lean_object* v___x_522_; 
if (v_isShared_519_ == 0)
{
v___x_522_ = v___x_518_;
goto v_reusejp_521_;
}
else
{
lean_object* v_reuseFailAlloc_523_; 
v_reuseFailAlloc_523_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_523_, 0, v_fst_515_);
lean_ctor_set(v_reuseFailAlloc_523_, 1, v_snd_516_);
v___x_522_ = v_reuseFailAlloc_523_;
goto v_reusejp_521_;
}
v_reusejp_521_:
{
return v___x_522_;
}
}
else
{
uint8_t v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_528_; 
v___x_524_ = 1;
v___x_525_ = lean_array_fget_borrowed(v_original_513_, v_snd_516_);
v___x_526_ = lean_box(v___x_524_);
lean_inc(v___x_525_);
if (v_isShared_519_ == 0)
{
lean_ctor_set(v___x_518_, 1, v___x_525_);
lean_ctor_set(v___x_518_, 0, v___x_526_);
v___x_528_ = v___x_518_;
goto v_reusejp_527_;
}
else
{
lean_object* v_reuseFailAlloc_534_; 
v_reuseFailAlloc_534_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_534_, 0, v___x_526_);
lean_ctor_set(v_reuseFailAlloc_534_, 1, v___x_525_);
v___x_528_ = v_reuseFailAlloc_534_;
goto v_reusejp_527_;
}
v_reusejp_527_:
{
lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; 
v___x_529_ = lean_array_push(v_fst_515_, v___x_528_);
v___x_530_ = lean_unsigned_to_nat(1u);
v___x_531_ = lean_nat_add(v_snd_516_, v___x_530_);
lean_dec(v_snd_516_);
v___x_532_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_532_, 0, v___x_529_);
lean_ctor_set(v___x_532_, 1, v___x_531_);
v_a_514_ = v___x_532_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__6___redArg___boxed(lean_object* v___x_536_, lean_object* v_original_537_, lean_object* v_a_538_){
_start:
{
lean_object* v_res_539_; 
v_res_539_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__6___redArg(v___x_536_, v_original_537_, v_a_538_);
lean_dec_ref(v_original_537_);
lean_dec(v___x_536_);
return v_res_539_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__13_spec__20___redArg(uint32_t v_a_540_, lean_object* v_x_541_){
_start:
{
if (lean_obj_tag(v_x_541_) == 0)
{
lean_object* v___x_542_; 
v___x_542_ = lean_box(0);
return v___x_542_;
}
else
{
lean_object* v_key_543_; lean_object* v_value_544_; lean_object* v_tail_545_; uint32_t v___x_546_; uint8_t v___x_547_; 
v_key_543_ = lean_ctor_get(v_x_541_, 0);
v_value_544_ = lean_ctor_get(v_x_541_, 1);
v_tail_545_ = lean_ctor_get(v_x_541_, 2);
v___x_546_ = lean_unbox_uint32(v_key_543_);
v___x_547_ = lean_uint32_dec_eq(v___x_546_, v_a_540_);
if (v___x_547_ == 0)
{
v_x_541_ = v_tail_545_;
goto _start;
}
else
{
lean_object* v___x_549_; 
lean_inc(v_value_544_);
v___x_549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_549_, 0, v_value_544_);
return v___x_549_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__13_spec__20___redArg___boxed(lean_object* v_a_550_, lean_object* v_x_551_){
_start:
{
uint32_t v_a_boxed_552_; lean_object* v_res_553_; 
v_a_boxed_552_ = lean_unbox_uint32(v_a_550_);
lean_dec(v_a_550_);
v_res_553_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__13_spec__20___redArg(v_a_boxed_552_, v_x_551_);
lean_dec(v_x_551_);
return v_res_553_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__13___redArg(lean_object* v_m_554_, uint32_t v_a_555_){
_start:
{
lean_object* v_buckets_556_; lean_object* v___x_557_; uint64_t v___x_558_; uint64_t v___x_559_; uint64_t v___x_560_; uint64_t v_fold_561_; uint64_t v___x_562_; uint64_t v___x_563_; uint64_t v___x_564_; size_t v___x_565_; size_t v___x_566_; size_t v___x_567_; size_t v___x_568_; size_t v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; 
v_buckets_556_ = lean_ctor_get(v_m_554_, 1);
v___x_557_ = lean_array_get_size(v_buckets_556_);
v___x_558_ = lean_uint32_to_uint64(v_a_555_);
v___x_559_ = 32ULL;
v___x_560_ = lean_uint64_shift_right(v___x_558_, v___x_559_);
v_fold_561_ = lean_uint64_xor(v___x_558_, v___x_560_);
v___x_562_ = 16ULL;
v___x_563_ = lean_uint64_shift_right(v_fold_561_, v___x_562_);
v___x_564_ = lean_uint64_xor(v_fold_561_, v___x_563_);
v___x_565_ = lean_uint64_to_usize(v___x_564_);
v___x_566_ = lean_usize_of_nat(v___x_557_);
v___x_567_ = ((size_t)1ULL);
v___x_568_ = lean_usize_sub(v___x_566_, v___x_567_);
v___x_569_ = lean_usize_land(v___x_565_, v___x_568_);
v___x_570_ = lean_array_uget_borrowed(v_buckets_556_, v___x_569_);
v___x_571_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__13_spec__20___redArg(v_a_555_, v___x_570_);
return v___x_571_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__13___redArg___boxed(lean_object* v_m_572_, lean_object* v_a_573_){
_start:
{
uint32_t v_a_boxed_574_; lean_object* v_res_575_; 
v_a_boxed_574_ = lean_unbox_uint32(v_a_573_);
lean_dec(v_a_573_);
v_res_575_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__13___redArg(v_m_572_, v_a_boxed_574_);
lean_dec_ref(v_m_572_);
return v_res_575_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__22___redArg(uint32_t v_a_576_, lean_object* v_x_577_){
_start:
{
if (lean_obj_tag(v_x_577_) == 0)
{
uint8_t v___x_578_; 
v___x_578_ = 0;
return v___x_578_;
}
else
{
lean_object* v_key_579_; lean_object* v_tail_580_; uint32_t v___x_581_; uint8_t v___x_582_; 
v_key_579_ = lean_ctor_get(v_x_577_, 0);
v_tail_580_ = lean_ctor_get(v_x_577_, 2);
v___x_581_ = lean_unbox_uint32(v_key_579_);
v___x_582_ = lean_uint32_dec_eq(v___x_581_, v_a_576_);
if (v___x_582_ == 0)
{
v_x_577_ = v_tail_580_;
goto _start;
}
else
{
return v___x_582_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__22___redArg___boxed(lean_object* v_a_584_, lean_object* v_x_585_){
_start:
{
uint32_t v_a_boxed_586_; uint8_t v_res_587_; lean_object* v_r_588_; 
v_a_boxed_586_ = lean_unbox_uint32(v_a_584_);
lean_dec(v_a_584_);
v_res_587_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__22___redArg(v_a_boxed_586_, v_x_585_);
lean_dec(v_x_585_);
v_r_588_ = lean_box(v_res_587_);
return v_r_588_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__24___redArg(uint32_t v_a_589_, lean_object* v_b_590_, lean_object* v_x_591_){
_start:
{
if (lean_obj_tag(v_x_591_) == 0)
{
lean_dec(v_b_590_);
return v_x_591_;
}
else
{
lean_object* v_key_592_; lean_object* v_value_593_; lean_object* v_tail_594_; lean_object* v___x_596_; uint8_t v_isShared_597_; uint8_t v_isSharedCheck_608_; 
v_key_592_ = lean_ctor_get(v_x_591_, 0);
v_value_593_ = lean_ctor_get(v_x_591_, 1);
v_tail_594_ = lean_ctor_get(v_x_591_, 2);
v_isSharedCheck_608_ = !lean_is_exclusive(v_x_591_);
if (v_isSharedCheck_608_ == 0)
{
v___x_596_ = v_x_591_;
v_isShared_597_ = v_isSharedCheck_608_;
goto v_resetjp_595_;
}
else
{
lean_inc(v_tail_594_);
lean_inc(v_value_593_);
lean_inc(v_key_592_);
lean_dec(v_x_591_);
v___x_596_ = lean_box(0);
v_isShared_597_ = v_isSharedCheck_608_;
goto v_resetjp_595_;
}
v_resetjp_595_:
{
uint32_t v___x_598_; uint8_t v___x_599_; 
v___x_598_ = lean_unbox_uint32(v_key_592_);
v___x_599_ = lean_uint32_dec_eq(v___x_598_, v_a_589_);
if (v___x_599_ == 0)
{
lean_object* v___x_600_; lean_object* v___x_602_; 
v___x_600_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__24___redArg(v_a_589_, v_b_590_, v_tail_594_);
if (v_isShared_597_ == 0)
{
lean_ctor_set(v___x_596_, 2, v___x_600_);
v___x_602_ = v___x_596_;
goto v_reusejp_601_;
}
else
{
lean_object* v_reuseFailAlloc_603_; 
v_reuseFailAlloc_603_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_603_, 0, v_key_592_);
lean_ctor_set(v_reuseFailAlloc_603_, 1, v_value_593_);
lean_ctor_set(v_reuseFailAlloc_603_, 2, v___x_600_);
v___x_602_ = v_reuseFailAlloc_603_;
goto v_reusejp_601_;
}
v_reusejp_601_:
{
return v___x_602_;
}
}
else
{
lean_object* v___x_604_; lean_object* v___x_606_; 
lean_dec(v_value_593_);
lean_dec(v_key_592_);
v___x_604_ = lean_box_uint32(v_a_589_);
if (v_isShared_597_ == 0)
{
lean_ctor_set(v___x_596_, 1, v_b_590_);
lean_ctor_set(v___x_596_, 0, v___x_604_);
v___x_606_ = v___x_596_;
goto v_reusejp_605_;
}
else
{
lean_object* v_reuseFailAlloc_607_; 
v_reuseFailAlloc_607_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_607_, 0, v___x_604_);
lean_ctor_set(v_reuseFailAlloc_607_, 1, v_b_590_);
lean_ctor_set(v_reuseFailAlloc_607_, 2, v_tail_594_);
v___x_606_ = v_reuseFailAlloc_607_;
goto v_reusejp_605_;
}
v_reusejp_605_:
{
return v___x_606_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__24___redArg___boxed(lean_object* v_a_609_, lean_object* v_b_610_, lean_object* v_x_611_){
_start:
{
uint32_t v_a_boxed_612_; lean_object* v_res_613_; 
v_a_boxed_612_ = lean_unbox_uint32(v_a_609_);
lean_dec(v_a_609_);
v_res_613_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__24___redArg(v_a_boxed_612_, v_b_610_, v_x_611_);
return v_res_613_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__23_spec__28_spec__29___redArg(lean_object* v_x_614_, lean_object* v_x_615_){
_start:
{
if (lean_obj_tag(v_x_615_) == 0)
{
return v_x_614_;
}
else
{
lean_object* v_key_616_; lean_object* v_value_617_; lean_object* v_tail_618_; lean_object* v___x_620_; uint8_t v_isShared_621_; uint8_t v_isSharedCheck_642_; 
v_key_616_ = lean_ctor_get(v_x_615_, 0);
v_value_617_ = lean_ctor_get(v_x_615_, 1);
v_tail_618_ = lean_ctor_get(v_x_615_, 2);
v_isSharedCheck_642_ = !lean_is_exclusive(v_x_615_);
if (v_isSharedCheck_642_ == 0)
{
v___x_620_ = v_x_615_;
v_isShared_621_ = v_isSharedCheck_642_;
goto v_resetjp_619_;
}
else
{
lean_inc(v_tail_618_);
lean_inc(v_value_617_);
lean_inc(v_key_616_);
lean_dec(v_x_615_);
v___x_620_ = lean_box(0);
v_isShared_621_ = v_isSharedCheck_642_;
goto v_resetjp_619_;
}
v_resetjp_619_:
{
lean_object* v___x_622_; uint32_t v___x_623_; uint64_t v___x_624_; uint64_t v___x_625_; uint64_t v___x_626_; uint64_t v_fold_627_; uint64_t v___x_628_; uint64_t v___x_629_; uint64_t v___x_630_; size_t v___x_631_; size_t v___x_632_; size_t v___x_633_; size_t v___x_634_; size_t v___x_635_; lean_object* v___x_636_; lean_object* v___x_638_; 
v___x_622_ = lean_array_get_size(v_x_614_);
v___x_623_ = lean_unbox_uint32(v_key_616_);
v___x_624_ = lean_uint32_to_uint64(v___x_623_);
v___x_625_ = 32ULL;
v___x_626_ = lean_uint64_shift_right(v___x_624_, v___x_625_);
v_fold_627_ = lean_uint64_xor(v___x_624_, v___x_626_);
v___x_628_ = 16ULL;
v___x_629_ = lean_uint64_shift_right(v_fold_627_, v___x_628_);
v___x_630_ = lean_uint64_xor(v_fold_627_, v___x_629_);
v___x_631_ = lean_uint64_to_usize(v___x_630_);
v___x_632_ = lean_usize_of_nat(v___x_622_);
v___x_633_ = ((size_t)1ULL);
v___x_634_ = lean_usize_sub(v___x_632_, v___x_633_);
v___x_635_ = lean_usize_land(v___x_631_, v___x_634_);
v___x_636_ = lean_array_uget_borrowed(v_x_614_, v___x_635_);
lean_inc(v___x_636_);
if (v_isShared_621_ == 0)
{
lean_ctor_set(v___x_620_, 2, v___x_636_);
v___x_638_ = v___x_620_;
goto v_reusejp_637_;
}
else
{
lean_object* v_reuseFailAlloc_641_; 
v_reuseFailAlloc_641_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_641_, 0, v_key_616_);
lean_ctor_set(v_reuseFailAlloc_641_, 1, v_value_617_);
lean_ctor_set(v_reuseFailAlloc_641_, 2, v___x_636_);
v___x_638_ = v_reuseFailAlloc_641_;
goto v_reusejp_637_;
}
v_reusejp_637_:
{
lean_object* v___x_639_; 
v___x_639_ = lean_array_uset(v_x_614_, v___x_635_, v___x_638_);
v_x_614_ = v___x_639_;
v_x_615_ = v_tail_618_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__23_spec__28___redArg(lean_object* v_i_643_, lean_object* v_source_644_, lean_object* v_target_645_){
_start:
{
lean_object* v___x_646_; uint8_t v___x_647_; 
v___x_646_ = lean_array_get_size(v_source_644_);
v___x_647_ = lean_nat_dec_lt(v_i_643_, v___x_646_);
if (v___x_647_ == 0)
{
lean_dec_ref(v_source_644_);
lean_dec(v_i_643_);
return v_target_645_;
}
else
{
lean_object* v_es_648_; lean_object* v___x_649_; lean_object* v_source_650_; lean_object* v_target_651_; lean_object* v___x_652_; lean_object* v___x_653_; 
v_es_648_ = lean_array_fget(v_source_644_, v_i_643_);
v___x_649_ = lean_box(0);
v_source_650_ = lean_array_fset(v_source_644_, v_i_643_, v___x_649_);
v_target_651_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__23_spec__28_spec__29___redArg(v_target_645_, v_es_648_);
v___x_652_ = lean_unsigned_to_nat(1u);
v___x_653_ = lean_nat_add(v_i_643_, v___x_652_);
lean_dec(v_i_643_);
v_i_643_ = v___x_653_;
v_source_644_ = v_source_650_;
v_target_645_ = v_target_651_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__23___redArg(lean_object* v_data_655_){
_start:
{
lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v_nbuckets_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; 
v___x_656_ = lean_array_get_size(v_data_655_);
v___x_657_ = lean_unsigned_to_nat(2u);
v_nbuckets_658_ = lean_nat_mul(v___x_656_, v___x_657_);
v___x_659_ = lean_unsigned_to_nat(0u);
v___x_660_ = lean_box(0);
v___x_661_ = lean_mk_array(v_nbuckets_658_, v___x_660_);
v___x_662_ = lean_array_propagate_mark(v_data_655_, v___x_661_);
v___x_663_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__23_spec__28___redArg(v___x_659_, v_data_655_, v___x_662_);
return v___x_663_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14___redArg(lean_object* v_m_664_, uint32_t v_a_665_, lean_object* v_b_666_){
_start:
{
lean_object* v_size_667_; lean_object* v_buckets_668_; lean_object* v___x_670_; uint8_t v_isShared_671_; uint8_t v_isSharedCheck_712_; 
v_size_667_ = lean_ctor_get(v_m_664_, 0);
v_buckets_668_ = lean_ctor_get(v_m_664_, 1);
v_isSharedCheck_712_ = !lean_is_exclusive(v_m_664_);
if (v_isSharedCheck_712_ == 0)
{
v___x_670_ = v_m_664_;
v_isShared_671_ = v_isSharedCheck_712_;
goto v_resetjp_669_;
}
else
{
lean_inc(v_buckets_668_);
lean_inc(v_size_667_);
lean_dec(v_m_664_);
v___x_670_ = lean_box(0);
v_isShared_671_ = v_isSharedCheck_712_;
goto v_resetjp_669_;
}
v_resetjp_669_:
{
lean_object* v___x_672_; uint64_t v___x_673_; uint64_t v___x_674_; uint64_t v___x_675_; uint64_t v_fold_676_; uint64_t v___x_677_; uint64_t v___x_678_; uint64_t v___x_679_; size_t v___x_680_; size_t v___x_681_; size_t v___x_682_; size_t v___x_683_; size_t v___x_684_; lean_object* v_bkt_685_; uint8_t v___x_686_; 
v___x_672_ = lean_array_get_size(v_buckets_668_);
v___x_673_ = lean_uint32_to_uint64(v_a_665_);
v___x_674_ = 32ULL;
v___x_675_ = lean_uint64_shift_right(v___x_673_, v___x_674_);
v_fold_676_ = lean_uint64_xor(v___x_673_, v___x_675_);
v___x_677_ = 16ULL;
v___x_678_ = lean_uint64_shift_right(v_fold_676_, v___x_677_);
v___x_679_ = lean_uint64_xor(v_fold_676_, v___x_678_);
v___x_680_ = lean_uint64_to_usize(v___x_679_);
v___x_681_ = lean_usize_of_nat(v___x_672_);
v___x_682_ = ((size_t)1ULL);
v___x_683_ = lean_usize_sub(v___x_681_, v___x_682_);
v___x_684_ = lean_usize_land(v___x_680_, v___x_683_);
v_bkt_685_ = lean_array_uget_borrowed(v_buckets_668_, v___x_684_);
v___x_686_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__22___redArg(v_a_665_, v_bkt_685_);
if (v___x_686_ == 0)
{
lean_object* v___x_687_; lean_object* v_size_x27_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v_buckets_x27_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; uint8_t v___x_697_; 
v___x_687_ = lean_unsigned_to_nat(1u);
v_size_x27_688_ = lean_nat_add(v_size_667_, v___x_687_);
lean_dec(v_size_667_);
v___x_689_ = lean_box_uint32(v_a_665_);
lean_inc(v_bkt_685_);
v___x_690_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_690_, 0, v___x_689_);
lean_ctor_set(v___x_690_, 1, v_b_666_);
lean_ctor_set(v___x_690_, 2, v_bkt_685_);
v_buckets_x27_691_ = lean_array_uset(v_buckets_668_, v___x_684_, v___x_690_);
v___x_692_ = lean_unsigned_to_nat(4u);
v___x_693_ = lean_nat_mul(v_size_x27_688_, v___x_692_);
v___x_694_ = lean_unsigned_to_nat(3u);
v___x_695_ = lean_nat_div(v___x_693_, v___x_694_);
lean_dec(v___x_693_);
v___x_696_ = lean_array_get_size(v_buckets_x27_691_);
v___x_697_ = lean_nat_dec_le(v___x_695_, v___x_696_);
lean_dec(v___x_695_);
if (v___x_697_ == 0)
{
lean_object* v_val_698_; lean_object* v___x_700_; 
v_val_698_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__23___redArg(v_buckets_x27_691_);
if (v_isShared_671_ == 0)
{
lean_ctor_set(v___x_670_, 1, v_val_698_);
lean_ctor_set(v___x_670_, 0, v_size_x27_688_);
v___x_700_ = v___x_670_;
goto v_reusejp_699_;
}
else
{
lean_object* v_reuseFailAlloc_701_; 
v_reuseFailAlloc_701_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_701_, 0, v_size_x27_688_);
lean_ctor_set(v_reuseFailAlloc_701_, 1, v_val_698_);
v___x_700_ = v_reuseFailAlloc_701_;
goto v_reusejp_699_;
}
v_reusejp_699_:
{
return v___x_700_;
}
}
else
{
lean_object* v___x_703_; 
if (v_isShared_671_ == 0)
{
lean_ctor_set(v___x_670_, 1, v_buckets_x27_691_);
lean_ctor_set(v___x_670_, 0, v_size_x27_688_);
v___x_703_ = v___x_670_;
goto v_reusejp_702_;
}
else
{
lean_object* v_reuseFailAlloc_704_; 
v_reuseFailAlloc_704_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_704_, 0, v_size_x27_688_);
lean_ctor_set(v_reuseFailAlloc_704_, 1, v_buckets_x27_691_);
v___x_703_ = v_reuseFailAlloc_704_;
goto v_reusejp_702_;
}
v_reusejp_702_:
{
return v___x_703_;
}
}
}
else
{
lean_object* v___x_705_; lean_object* v_buckets_x27_706_; lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_710_; 
lean_inc(v_bkt_685_);
v___x_705_ = lean_box(0);
v_buckets_x27_706_ = lean_array_uset(v_buckets_668_, v___x_684_, v___x_705_);
v___x_707_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__24___redArg(v_a_665_, v_b_666_, v_bkt_685_);
v___x_708_ = lean_array_uset(v_buckets_x27_706_, v___x_684_, v___x_707_);
if (v_isShared_671_ == 0)
{
lean_ctor_set(v___x_670_, 1, v___x_708_);
v___x_710_ = v___x_670_;
goto v_reusejp_709_;
}
else
{
lean_object* v_reuseFailAlloc_711_; 
v_reuseFailAlloc_711_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_711_, 0, v_size_667_);
lean_ctor_set(v_reuseFailAlloc_711_, 1, v___x_708_);
v___x_710_ = v_reuseFailAlloc_711_;
goto v_reusejp_709_;
}
v_reusejp_709_:
{
return v___x_710_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14___redArg___boxed(lean_object* v_m_713_, lean_object* v_a_714_, lean_object* v_b_715_){
_start:
{
uint32_t v_a_boxed_716_; lean_object* v_res_717_; 
v_a_boxed_716_ = lean_unbox_uint32(v_a_714_);
lean_dec(v_a_714_);
v_res_717_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14___redArg(v_m_713_, v_a_boxed_716_, v_b_715_);
return v_res_717_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10___redArg(lean_object* v_histogram_718_, lean_object* v_index_719_, uint32_t v_val_720_){
_start:
{
lean_object* v___x_721_; 
v___x_721_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__13___redArg(v_histogram_718_, v_val_720_);
if (lean_obj_tag(v___x_721_) == 0)
{
lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; 
v___x_722_ = lean_unsigned_to_nat(0u);
v___x_723_ = lean_box(0);
v___x_724_ = lean_unsigned_to_nat(1u);
v___x_725_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_725_, 0, v_index_719_);
v___x_726_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_726_, 0, v___x_722_);
lean_ctor_set(v___x_726_, 1, v___x_723_);
lean_ctor_set(v___x_726_, 2, v___x_724_);
lean_ctor_set(v___x_726_, 3, v___x_725_);
v___x_727_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14___redArg(v_histogram_718_, v_val_720_, v___x_726_);
return v___x_727_;
}
else
{
lean_object* v_val_728_; lean_object* v___x_730_; uint8_t v_isShared_731_; uint8_t v_isSharedCheck_749_; 
v_val_728_ = lean_ctor_get(v___x_721_, 0);
v_isSharedCheck_749_ = !lean_is_exclusive(v___x_721_);
if (v_isSharedCheck_749_ == 0)
{
v___x_730_ = v___x_721_;
v_isShared_731_ = v_isSharedCheck_749_;
goto v_resetjp_729_;
}
else
{
lean_inc(v_val_728_);
lean_dec(v___x_721_);
v___x_730_ = lean_box(0);
v_isShared_731_ = v_isSharedCheck_749_;
goto v_resetjp_729_;
}
v_resetjp_729_:
{
lean_object* v_leftCount_732_; lean_object* v_leftIndex_733_; lean_object* v___x_735_; uint8_t v_isShared_736_; uint8_t v_isSharedCheck_746_; 
v_leftCount_732_ = lean_ctor_get(v_val_728_, 0);
v_leftIndex_733_ = lean_ctor_get(v_val_728_, 1);
v_isSharedCheck_746_ = !lean_is_exclusive(v_val_728_);
if (v_isSharedCheck_746_ == 0)
{
lean_object* v_unused_747_; lean_object* v_unused_748_; 
v_unused_747_ = lean_ctor_get(v_val_728_, 3);
lean_dec(v_unused_747_);
v_unused_748_ = lean_ctor_get(v_val_728_, 2);
lean_dec(v_unused_748_);
v___x_735_ = v_val_728_;
v_isShared_736_ = v_isSharedCheck_746_;
goto v_resetjp_734_;
}
else
{
lean_inc(v_leftIndex_733_);
lean_inc(v_leftCount_732_);
lean_dec(v_val_728_);
v___x_735_ = lean_box(0);
v_isShared_736_ = v_isSharedCheck_746_;
goto v_resetjp_734_;
}
v_resetjp_734_:
{
lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_740_; 
v___x_737_ = lean_unsigned_to_nat(1u);
v___x_738_ = lean_nat_add(v_leftCount_732_, v___x_737_);
if (v_isShared_731_ == 0)
{
lean_ctor_set(v___x_730_, 0, v_index_719_);
v___x_740_ = v___x_730_;
goto v_reusejp_739_;
}
else
{
lean_object* v_reuseFailAlloc_745_; 
v_reuseFailAlloc_745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_745_, 0, v_index_719_);
v___x_740_ = v_reuseFailAlloc_745_;
goto v_reusejp_739_;
}
v_reusejp_739_:
{
lean_object* v___x_742_; 
if (v_isShared_736_ == 0)
{
lean_ctor_set(v___x_735_, 3, v___x_740_);
lean_ctor_set(v___x_735_, 2, v___x_738_);
v___x_742_ = v___x_735_;
goto v_reusejp_741_;
}
else
{
lean_object* v_reuseFailAlloc_744_; 
v_reuseFailAlloc_744_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_744_, 0, v_leftCount_732_);
lean_ctor_set(v_reuseFailAlloc_744_, 1, v_leftIndex_733_);
lean_ctor_set(v_reuseFailAlloc_744_, 2, v___x_738_);
lean_ctor_set(v_reuseFailAlloc_744_, 3, v___x_740_);
v___x_742_ = v_reuseFailAlloc_744_;
goto v_reusejp_741_;
}
v_reusejp_741_:
{
lean_object* v___x_743_; 
v___x_743_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14___redArg(v_histogram_718_, v_val_720_, v___x_742_);
return v___x_743_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10___redArg___boxed(lean_object* v_histogram_750_, lean_object* v_index_751_, lean_object* v_val_752_){
_start:
{
uint32_t v_val_boxed_753_; lean_object* v_res_754_; 
v_val_boxed_753_ = lean_unbox_uint32(v_val_752_);
lean_dec(v_val_752_);
v_res_754_ = l_Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10___redArg(v_histogram_750_, v_index_751_, v_val_boxed_753_);
return v_res_754_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__11___redArg(lean_object* v_upperBound_755_, lean_object* v___x_756_, lean_object* v_fst_757_, lean_object* v___x_758_, lean_object* v_a_759_, lean_object* v_b_760_){
_start:
{
uint8_t v___x_761_; 
v___x_761_ = lean_nat_dec_lt(v_a_759_, v_upperBound_755_);
if (v___x_761_ == 0)
{
lean_dec(v_a_759_);
return v_b_760_;
}
else
{
lean_object* v___x_762_; uint32_t v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; 
v___x_762_ = l_Subarray_get___redArg(v_fst_757_, v_a_759_);
v___x_763_ = lean_unbox_uint32(v___x_762_);
lean_dec(v___x_762_);
lean_inc(v_a_759_);
v___x_764_ = l_Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10___redArg(v_b_760_, v_a_759_, v___x_763_);
v___x_765_ = lean_unsigned_to_nat(1u);
v___x_766_ = lean_nat_add(v_a_759_, v___x_765_);
lean_dec(v_a_759_);
v_a_759_ = v___x_766_;
v_b_760_ = v___x_764_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__11___redArg___boxed(lean_object* v_upperBound_768_, lean_object* v___x_769_, lean_object* v_fst_770_, lean_object* v___x_771_, lean_object* v_a_772_, lean_object* v_b_773_){
_start:
{
lean_object* v_res_774_; 
v_res_774_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__11___redArg(v_upperBound_768_, v___x_769_, v_fst_770_, v___x_771_, v_a_772_, v_b_773_);
lean_dec(v___x_771_);
lean_dec_ref(v_fst_770_);
lean_dec(v___x_769_);
lean_dec(v_upperBound_768_);
return v_res_774_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__7___redArg(lean_object* v_as_x27_775_, lean_object* v_b_776_){
_start:
{
if (lean_obj_tag(v_as_x27_775_) == 0)
{
return v_b_776_;
}
else
{
lean_object* v_head_777_; lean_object* v_snd_778_; lean_object* v_leftIndex_779_; 
v_head_777_ = lean_ctor_get(v_as_x27_775_, 0);
v_snd_778_ = lean_ctor_get(v_head_777_, 1);
v_leftIndex_779_ = lean_ctor_get(v_snd_778_, 1);
if (lean_obj_tag(v_leftIndex_779_) == 1)
{
lean_object* v_rightIndex_780_; 
v_rightIndex_780_ = lean_ctor_get(v_snd_778_, 3);
if (lean_obj_tag(v_rightIndex_780_) == 1)
{
if (lean_obj_tag(v_b_776_) == 0)
{
lean_object* v_tail_781_; lean_object* v_fst_782_; lean_object* v_leftCount_783_; lean_object* v_rightCount_784_; lean_object* v_val_785_; lean_object* v_val_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; 
v_tail_781_ = lean_ctor_get(v_as_x27_775_, 1);
v_fst_782_ = lean_ctor_get(v_head_777_, 0);
v_leftCount_783_ = lean_ctor_get(v_snd_778_, 0);
v_rightCount_784_ = lean_ctor_get(v_snd_778_, 2);
v_val_785_ = lean_ctor_get(v_leftIndex_779_, 0);
v_val_786_ = lean_ctor_get(v_rightIndex_780_, 0);
v___x_787_ = lean_nat_add(v_leftCount_783_, v_rightCount_784_);
lean_inc(v_val_786_);
lean_inc(v_val_785_);
v___x_788_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_788_, 0, v_val_785_);
lean_ctor_set(v___x_788_, 1, v_val_786_);
lean_inc(v_fst_782_);
v___x_789_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_789_, 0, v_fst_782_);
lean_ctor_set(v___x_789_, 1, v___x_788_);
v___x_790_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_790_, 0, v___x_787_);
lean_ctor_set(v___x_790_, 1, v___x_789_);
v___x_791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_791_, 0, v___x_790_);
v_as_x27_775_ = v_tail_781_;
v_b_776_ = v___x_791_;
goto _start;
}
else
{
lean_object* v_val_793_; lean_object* v_tail_794_; lean_object* v_fst_795_; lean_object* v_leftCount_796_; lean_object* v_rightCount_797_; lean_object* v_val_798_; lean_object* v_val_799_; lean_object* v_fst_800_; lean_object* v___x_802_; uint8_t v_isShared_803_; uint8_t v_isSharedCheck_821_; 
v_val_793_ = lean_ctor_get(v_b_776_, 0);
lean_inc(v_val_793_);
v_tail_794_ = lean_ctor_get(v_as_x27_775_, 1);
v_fst_795_ = lean_ctor_get(v_head_777_, 0);
v_leftCount_796_ = lean_ctor_get(v_snd_778_, 0);
v_rightCount_797_ = lean_ctor_get(v_snd_778_, 2);
v_val_798_ = lean_ctor_get(v_leftIndex_779_, 0);
v_val_799_ = lean_ctor_get(v_rightIndex_780_, 0);
v_fst_800_ = lean_ctor_get(v_val_793_, 0);
v_isSharedCheck_821_ = !lean_is_exclusive(v_val_793_);
if (v_isSharedCheck_821_ == 0)
{
lean_object* v_unused_822_; 
v_unused_822_ = lean_ctor_get(v_val_793_, 1);
lean_dec(v_unused_822_);
v___x_802_ = v_val_793_;
v_isShared_803_ = v_isSharedCheck_821_;
goto v_resetjp_801_;
}
else
{
lean_inc(v_fst_800_);
lean_dec(v_val_793_);
v___x_802_ = lean_box(0);
v_isShared_803_ = v_isSharedCheck_821_;
goto v_resetjp_801_;
}
v_resetjp_801_:
{
lean_object* v___x_804_; uint8_t v___x_805_; 
v___x_804_ = lean_nat_add(v_leftCount_796_, v_rightCount_797_);
v___x_805_ = lean_nat_dec_lt(v___x_804_, v_fst_800_);
lean_dec(v_fst_800_);
if (v___x_805_ == 0)
{
lean_dec(v___x_804_);
lean_del_object(v___x_802_);
v_as_x27_775_ = v_tail_794_;
goto _start;
}
else
{
lean_object* v___x_808_; uint8_t v_isShared_809_; uint8_t v_isSharedCheck_819_; 
v_isSharedCheck_819_ = !lean_is_exclusive(v_b_776_);
if (v_isSharedCheck_819_ == 0)
{
lean_object* v_unused_820_; 
v_unused_820_ = lean_ctor_get(v_b_776_, 0);
lean_dec(v_unused_820_);
v___x_808_ = v_b_776_;
v_isShared_809_ = v_isSharedCheck_819_;
goto v_resetjp_807_;
}
else
{
lean_dec(v_b_776_);
v___x_808_ = lean_box(0);
v_isShared_809_ = v_isSharedCheck_819_;
goto v_resetjp_807_;
}
v_resetjp_807_:
{
lean_object* v___x_811_; 
lean_inc(v_val_799_);
lean_inc(v_val_798_);
if (v_isShared_803_ == 0)
{
lean_ctor_set(v___x_802_, 1, v_val_799_);
lean_ctor_set(v___x_802_, 0, v_val_798_);
v___x_811_ = v___x_802_;
goto v_reusejp_810_;
}
else
{
lean_object* v_reuseFailAlloc_818_; 
v_reuseFailAlloc_818_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_818_, 0, v_val_798_);
lean_ctor_set(v_reuseFailAlloc_818_, 1, v_val_799_);
v___x_811_ = v_reuseFailAlloc_818_;
goto v_reusejp_810_;
}
v_reusejp_810_:
{
lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_815_; 
lean_inc(v_fst_795_);
v___x_812_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_812_, 0, v_fst_795_);
lean_ctor_set(v___x_812_, 1, v___x_811_);
v___x_813_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_813_, 0, v___x_804_);
lean_ctor_set(v___x_813_, 1, v___x_812_);
if (v_isShared_809_ == 0)
{
lean_ctor_set(v___x_808_, 0, v___x_813_);
v___x_815_ = v___x_808_;
goto v_reusejp_814_;
}
else
{
lean_object* v_reuseFailAlloc_817_; 
v_reuseFailAlloc_817_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_817_, 0, v___x_813_);
v___x_815_ = v_reuseFailAlloc_817_;
goto v_reusejp_814_;
}
v_reusejp_814_:
{
v_as_x27_775_ = v_tail_794_;
v_b_776_ = v___x_815_;
goto _start;
}
}
}
}
}
}
}
else
{
lean_object* v_tail_823_; 
v_tail_823_ = lean_ctor_get(v_as_x27_775_, 1);
v_as_x27_775_ = v_tail_823_;
goto _start;
}
}
else
{
lean_object* v_tail_825_; 
v_tail_825_ = lean_ctor_get(v_as_x27_775_, 1);
v_as_x27_775_ = v_tail_825_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__7___redArg___boxed(lean_object* v_as_x27_827_, lean_object* v_b_828_){
_start:
{
lean_object* v_res_829_; 
v_res_829_ = l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__7___redArg(v_as_x27_827_, v_b_828_);
lean_dec(v_as_x27_827_);
return v_res_829_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___at___00Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__6_spec__8_spec__14___redArg(lean_object* v_a_830_, lean_object* v_b_831_){
_start:
{
lean_object* v_array_832_; lean_object* v_start_833_; lean_object* v_stop_834_; lean_object* v___x_836_; uint8_t v_isShared_837_; uint8_t v_isSharedCheck_847_; 
v_array_832_ = lean_ctor_get(v_a_830_, 0);
v_start_833_ = lean_ctor_get(v_a_830_, 1);
v_stop_834_ = lean_ctor_get(v_a_830_, 2);
v_isSharedCheck_847_ = !lean_is_exclusive(v_a_830_);
if (v_isSharedCheck_847_ == 0)
{
v___x_836_ = v_a_830_;
v_isShared_837_ = v_isSharedCheck_847_;
goto v_resetjp_835_;
}
else
{
lean_inc(v_stop_834_);
lean_inc(v_start_833_);
lean_inc(v_array_832_);
lean_dec(v_a_830_);
v___x_836_ = lean_box(0);
v_isShared_837_ = v_isSharedCheck_847_;
goto v_resetjp_835_;
}
v_resetjp_835_:
{
uint8_t v___x_838_; 
v___x_838_ = lean_nat_dec_lt(v_start_833_, v_stop_834_);
if (v___x_838_ == 0)
{
lean_del_object(v___x_836_);
lean_dec(v_stop_834_);
lean_dec(v_start_833_);
lean_dec_ref(v_array_832_);
return v_b_831_;
}
else
{
lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_842_; 
v___x_839_ = lean_unsigned_to_nat(1u);
v___x_840_ = lean_nat_add(v_start_833_, v___x_839_);
lean_inc_ref(v_array_832_);
if (v_isShared_837_ == 0)
{
lean_ctor_set(v___x_836_, 1, v___x_840_);
v___x_842_ = v___x_836_;
goto v_reusejp_841_;
}
else
{
lean_object* v_reuseFailAlloc_846_; 
v_reuseFailAlloc_846_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_846_, 0, v_array_832_);
lean_ctor_set(v_reuseFailAlloc_846_, 1, v___x_840_);
lean_ctor_set(v_reuseFailAlloc_846_, 2, v_stop_834_);
v___x_842_ = v_reuseFailAlloc_846_;
goto v_reusejp_841_;
}
v_reusejp_841_:
{
lean_object* v___x_843_; lean_object* v___x_844_; 
v___x_843_ = lean_array_fget(v_array_832_, v_start_833_);
lean_dec(v_start_833_);
lean_dec_ref(v_array_832_);
v___x_844_ = lean_array_push(v_b_831_, v___x_843_);
v_a_830_ = v___x_842_;
v_b_831_ = v___x_844_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___at___00Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__6_spec__8(lean_object* v_left_848_, lean_object* v_right_849_, lean_object* v_i_850_){
_start:
{
lean_object* v_start_851_; lean_object* v_stop_852_; lean_object* v_start_853_; lean_object* v_stop_854_; lean_object* v___x_855_; uint8_t v___x_856_; lean_object* v___x_857_; uint8_t v___y_859_; 
v_start_851_ = lean_ctor_get(v_left_848_, 1);
v_stop_852_ = lean_ctor_get(v_left_848_, 2);
v_start_853_ = lean_ctor_get(v_right_849_, 1);
v_stop_854_ = lean_ctor_get(v_right_849_, 2);
v___x_855_ = lean_nat_sub(v_stop_852_, v_start_851_);
v___x_856_ = lean_nat_dec_lt(v_i_850_, v___x_855_);
v___x_857_ = lean_nat_sub(v_stop_854_, v_start_853_);
if (v___x_856_ == 0)
{
v___y_859_ = v___x_856_;
goto v___jp_858_;
}
else
{
uint8_t v___x_888_; 
v___x_888_ = lean_nat_dec_lt(v_i_850_, v___x_857_);
v___y_859_ = v___x_888_;
goto v___jp_858_;
}
v___jp_858_:
{
if (v___y_859_ == 0)
{
lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; 
v___x_860_ = lean_nat_sub(v___x_855_, v_i_850_);
lean_dec(v___x_855_);
lean_inc_ref(v_left_848_);
v___x_861_ = l_Subarray_take___redArg(v_left_848_, v___x_860_);
v___x_862_ = lean_nat_sub(v___x_857_, v_i_850_);
lean_dec(v_i_850_);
lean_dec(v___x_857_);
v___x_863_ = l_Subarray_take___redArg(v_right_849_, v___x_862_);
lean_dec(v___x_862_);
v___x_864_ = l_Subarray_drop___redArg(v_left_848_, v___x_860_);
lean_dec(v___x_860_);
v___x_865_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__2___closed__0));
v___x_866_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___at___00Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__6_spec__8_spec__14___redArg(v___x_864_, v___x_865_);
v___x_867_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_867_, 0, v___x_863_);
lean_ctor_set(v___x_867_, 1, v___x_866_);
v___x_868_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_868_, 0, v___x_861_);
lean_ctor_set(v___x_868_, 1, v___x_867_);
return v___x_868_;
}
else
{
lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; uint32_t v___x_876_; uint32_t v___x_877_; uint8_t v___x_878_; 
v___x_869_ = lean_nat_sub(v___x_855_, v_i_850_);
lean_dec(v___x_855_);
v___x_870_ = lean_unsigned_to_nat(1u);
v___x_871_ = lean_nat_sub(v___x_869_, v___x_870_);
v___x_872_ = l_Subarray_get___redArg(v_left_848_, v___x_871_);
lean_dec(v___x_871_);
v___x_873_ = lean_nat_sub(v___x_857_, v_i_850_);
lean_dec(v___x_857_);
v___x_874_ = lean_nat_sub(v___x_873_, v___x_870_);
v___x_875_ = l_Subarray_get___redArg(v_right_849_, v___x_874_);
lean_dec(v___x_874_);
v___x_876_ = lean_unbox_uint32(v___x_872_);
lean_dec(v___x_872_);
v___x_877_ = lean_unbox_uint32(v___x_875_);
lean_dec(v___x_875_);
v___x_878_ = lean_uint32_dec_eq(v___x_876_, v___x_877_);
if (v___x_878_ == 0)
{
lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; 
lean_dec(v_i_850_);
lean_inc_ref(v_left_848_);
v___x_879_ = l_Subarray_take___redArg(v_left_848_, v___x_869_);
v___x_880_ = l_Subarray_take___redArg(v_right_849_, v___x_873_);
lean_dec(v___x_873_);
v___x_881_ = l_Subarray_drop___redArg(v_left_848_, v___x_869_);
lean_dec(v___x_869_);
v___x_882_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__2___closed__0));
v___x_883_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___at___00Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__6_spec__8_spec__14___redArg(v___x_881_, v___x_882_);
v___x_884_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_884_, 0, v___x_880_);
lean_ctor_set(v___x_884_, 1, v___x_883_);
v___x_885_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_885_, 0, v___x_879_);
lean_ctor_set(v___x_885_, 1, v___x_884_);
return v___x_885_;
}
else
{
lean_object* v___x_886_; 
lean_dec(v___x_873_);
lean_dec(v___x_869_);
v___x_886_ = lean_nat_add(v_i_850_, v___x_870_);
lean_dec(v_i_850_);
v_i_850_ = v___x_886_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__6(lean_object* v_left_889_, lean_object* v_right_890_){
_start:
{
lean_object* v___x_891_; lean_object* v___x_892_; 
v___x_891_ = lean_unsigned_to_nat(0u);
v___x_892_ = l___private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___at___00Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__6_spec__8(v_left_889_, v_right_890_, v___x_891_);
return v___x_892_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__8(lean_object* v_x_893_, lean_object* v_x_894_){
_start:
{
if (lean_obj_tag(v_x_894_) == 0)
{
lean_inc(v_x_893_);
return v_x_893_;
}
else
{
lean_object* v_key_895_; lean_object* v_value_896_; lean_object* v_tail_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; 
v_key_895_ = lean_ctor_get(v_x_894_, 0);
v_value_896_ = lean_ctor_get(v_x_894_, 1);
v_tail_897_ = lean_ctor_get(v_x_894_, 2);
v___x_898_ = l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__8(v_x_893_, v_tail_897_);
lean_inc(v_value_896_);
lean_inc(v_key_895_);
v___x_899_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_899_, 0, v_key_895_);
lean_ctor_set(v___x_899_, 1, v_value_896_);
v___x_900_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_900_, 0, v___x_899_);
lean_ctor_set(v___x_900_, 1, v___x_898_);
return v___x_900_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__8___boxed(lean_object* v_x_901_, lean_object* v_x_902_){
_start:
{
lean_object* v_res_903_; 
v_res_903_ = l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__8(v_x_901_, v_x_902_);
lean_dec(v_x_902_);
lean_dec(v_x_901_);
return v_res_903_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__9(lean_object* v_as_904_, size_t v_i_905_, size_t v_stop_906_, lean_object* v_b_907_){
_start:
{
uint8_t v___x_908_; 
v___x_908_ = lean_usize_dec_eq(v_i_905_, v_stop_906_);
if (v___x_908_ == 0)
{
size_t v___x_909_; size_t v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; 
v___x_909_ = ((size_t)1ULL);
v___x_910_ = lean_usize_sub(v_i_905_, v___x_909_);
v___x_911_ = lean_array_uget_borrowed(v_as_904_, v___x_910_);
v___x_912_ = l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__8(v_b_907_, v___x_911_);
lean_dec(v_b_907_);
v_i_905_ = v___x_910_;
v_b_907_ = v___x_912_;
goto _start;
}
else
{
return v_b_907_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__9___boxed(lean_object* v_as_914_, lean_object* v_i_915_, lean_object* v_stop_916_, lean_object* v_b_917_){
_start:
{
size_t v_i_boxed_918_; size_t v_stop_boxed_919_; lean_object* v_res_920_; 
v_i_boxed_918_ = lean_unbox_usize(v_i_915_);
lean_dec(v_i_915_);
v_stop_boxed_919_ = lean_unbox_usize(v_stop_916_);
lean_dec(v_stop_916_);
v_res_920_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__9(v_as_914_, v_i_boxed_918_, v_stop_boxed_919_, v_b_917_);
lean_dec_ref(v_as_914_);
return v_res_920_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Diff_0__Lean_Diff_matchPrefix_go___at___00Lean_Diff_matchPrefix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__5_spec__6(lean_object* v_left_921_, lean_object* v_right_922_, lean_object* v_pref_923_){
_start:
{
lean_object* v_start_924_; lean_object* v_stop_925_; lean_object* v_start_926_; lean_object* v_stop_927_; lean_object* v_i_928_; uint8_t v___y_930_; lean_object* v___x_946_; uint8_t v___x_947_; 
v_start_924_ = lean_ctor_get(v_left_921_, 1);
v_stop_925_ = lean_ctor_get(v_left_921_, 2);
v_start_926_ = lean_ctor_get(v_right_922_, 1);
v_stop_927_ = lean_ctor_get(v_right_922_, 2);
v_i_928_ = lean_array_get_size(v_pref_923_);
v___x_946_ = lean_nat_sub(v_stop_925_, v_start_924_);
v___x_947_ = lean_nat_dec_lt(v_i_928_, v___x_946_);
lean_dec(v___x_946_);
if (v___x_947_ == 0)
{
v___y_930_ = v___x_947_;
goto v___jp_929_;
}
else
{
lean_object* v___x_948_; uint8_t v___x_949_; 
v___x_948_ = lean_nat_sub(v_stop_927_, v_start_926_);
v___x_949_ = lean_nat_dec_lt(v_i_928_, v___x_948_);
lean_dec(v___x_948_);
v___y_930_ = v___x_949_;
goto v___jp_929_;
}
v___jp_929_:
{
if (v___y_930_ == 0)
{
lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; 
v___x_931_ = l_Subarray_drop___redArg(v_left_921_, v_i_928_);
v___x_932_ = l_Subarray_drop___redArg(v_right_922_, v_i_928_);
v___x_933_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_933_, 0, v___x_931_);
lean_ctor_set(v___x_933_, 1, v___x_932_);
v___x_934_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_934_, 0, v_pref_923_);
lean_ctor_set(v___x_934_, 1, v___x_933_);
return v___x_934_;
}
else
{
lean_object* v___x_935_; lean_object* v___x_936_; uint32_t v___x_937_; uint32_t v___x_938_; uint8_t v___x_939_; 
v___x_935_ = l_Subarray_get___redArg(v_left_921_, v_i_928_);
v___x_936_ = l_Subarray_get___redArg(v_right_922_, v_i_928_);
v___x_937_ = lean_unbox_uint32(v___x_935_);
v___x_938_ = lean_unbox_uint32(v___x_936_);
lean_dec(v___x_936_);
v___x_939_ = lean_uint32_dec_eq(v___x_937_, v___x_938_);
if (v___x_939_ == 0)
{
lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; 
lean_dec(v___x_935_);
v___x_940_ = l_Subarray_drop___redArg(v_left_921_, v_i_928_);
v___x_941_ = l_Subarray_drop___redArg(v_right_922_, v_i_928_);
v___x_942_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_942_, 0, v___x_940_);
lean_ctor_set(v___x_942_, 1, v___x_941_);
v___x_943_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_943_, 0, v_pref_923_);
lean_ctor_set(v___x_943_, 1, v___x_942_);
return v___x_943_;
}
else
{
lean_object* v___x_944_; 
v___x_944_ = lean_array_push(v_pref_923_, v___x_935_);
v_pref_923_ = v___x_944_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_matchPrefix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__5(lean_object* v_left_950_, lean_object* v_right_951_){
_start:
{
lean_object* v___x_952_; lean_object* v___x_953_; 
v___x_952_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__2___closed__0));
v___x_953_ = l___private_Lean_Util_Diff_0__Lean_Diff_matchPrefix_go___at___00Lean_Diff_matchPrefix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__5_spec__6(v_left_950_, v_right_951_, v___x_952_);
return v___x_953_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addLeft___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__12___redArg(lean_object* v_histogram_954_, lean_object* v_index_955_, uint32_t v_val_956_){
_start:
{
lean_object* v___x_957_; 
v___x_957_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__13___redArg(v_histogram_954_, v_val_956_);
if (lean_obj_tag(v___x_957_) == 0)
{
lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; 
v___x_958_ = lean_unsigned_to_nat(1u);
v___x_959_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_959_, 0, v_index_955_);
v___x_960_ = lean_unsigned_to_nat(0u);
v___x_961_ = lean_box(0);
v___x_962_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_962_, 0, v___x_958_);
lean_ctor_set(v___x_962_, 1, v___x_959_);
lean_ctor_set(v___x_962_, 2, v___x_960_);
lean_ctor_set(v___x_962_, 3, v___x_961_);
v___x_963_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14___redArg(v_histogram_954_, v_val_956_, v___x_962_);
return v___x_963_;
}
else
{
lean_object* v_val_964_; lean_object* v___x_966_; uint8_t v_isShared_967_; uint8_t v_isSharedCheck_985_; 
v_val_964_ = lean_ctor_get(v___x_957_, 0);
v_isSharedCheck_985_ = !lean_is_exclusive(v___x_957_);
if (v_isSharedCheck_985_ == 0)
{
v___x_966_ = v___x_957_;
v_isShared_967_ = v_isSharedCheck_985_;
goto v_resetjp_965_;
}
else
{
lean_inc(v_val_964_);
lean_dec(v___x_957_);
v___x_966_ = lean_box(0);
v_isShared_967_ = v_isSharedCheck_985_;
goto v_resetjp_965_;
}
v_resetjp_965_:
{
lean_object* v_leftCount_968_; lean_object* v_rightCount_969_; lean_object* v_rightIndex_970_; lean_object* v___x_972_; uint8_t v_isShared_973_; uint8_t v_isSharedCheck_983_; 
v_leftCount_968_ = lean_ctor_get(v_val_964_, 0);
v_rightCount_969_ = lean_ctor_get(v_val_964_, 2);
v_rightIndex_970_ = lean_ctor_get(v_val_964_, 3);
v_isSharedCheck_983_ = !lean_is_exclusive(v_val_964_);
if (v_isSharedCheck_983_ == 0)
{
lean_object* v_unused_984_; 
v_unused_984_ = lean_ctor_get(v_val_964_, 1);
lean_dec(v_unused_984_);
v___x_972_ = v_val_964_;
v_isShared_973_ = v_isSharedCheck_983_;
goto v_resetjp_971_;
}
else
{
lean_inc(v_rightIndex_970_);
lean_inc(v_rightCount_969_);
lean_inc(v_leftCount_968_);
lean_dec(v_val_964_);
v___x_972_ = lean_box(0);
v_isShared_973_ = v_isSharedCheck_983_;
goto v_resetjp_971_;
}
v_resetjp_971_:
{
lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_977_; 
v___x_974_ = lean_unsigned_to_nat(1u);
v___x_975_ = lean_nat_add(v_leftCount_968_, v___x_974_);
lean_dec(v_leftCount_968_);
if (v_isShared_967_ == 0)
{
lean_ctor_set(v___x_966_, 0, v_index_955_);
v___x_977_ = v___x_966_;
goto v_reusejp_976_;
}
else
{
lean_object* v_reuseFailAlloc_982_; 
v_reuseFailAlloc_982_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_982_, 0, v_index_955_);
v___x_977_ = v_reuseFailAlloc_982_;
goto v_reusejp_976_;
}
v_reusejp_976_:
{
lean_object* v___x_979_; 
if (v_isShared_973_ == 0)
{
lean_ctor_set(v___x_972_, 1, v___x_977_);
lean_ctor_set(v___x_972_, 0, v___x_975_);
v___x_979_ = v___x_972_;
goto v_reusejp_978_;
}
else
{
lean_object* v_reuseFailAlloc_981_; 
v_reuseFailAlloc_981_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_981_, 0, v___x_975_);
lean_ctor_set(v_reuseFailAlloc_981_, 1, v___x_977_);
lean_ctor_set(v_reuseFailAlloc_981_, 2, v_rightCount_969_);
lean_ctor_set(v_reuseFailAlloc_981_, 3, v_rightIndex_970_);
v___x_979_ = v_reuseFailAlloc_981_;
goto v_reusejp_978_;
}
v_reusejp_978_:
{
lean_object* v___x_980_; 
v___x_980_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14___redArg(v_histogram_954_, v_val_956_, v___x_979_);
return v___x_980_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addLeft___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__12___redArg___boxed(lean_object* v_histogram_986_, lean_object* v_index_987_, lean_object* v_val_988_){
_start:
{
uint32_t v_val_boxed_989_; lean_object* v_res_990_; 
v_val_boxed_989_ = lean_unbox_uint32(v_val_988_);
lean_dec(v_val_988_);
v_res_990_ = l_Lean_Diff_Histogram_addLeft___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__12___redArg(v_histogram_986_, v_index_987_, v_val_boxed_989_);
return v_res_990_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__13___redArg(lean_object* v_upperBound_991_, lean_object* v_fst_992_, lean_object* v___x_993_, lean_object* v_fst_994_, lean_object* v_a_995_, lean_object* v_b_996_){
_start:
{
uint8_t v___x_997_; 
v___x_997_ = lean_nat_dec_lt(v_a_995_, v_upperBound_991_);
if (v___x_997_ == 0)
{
lean_dec(v_a_995_);
return v_b_996_;
}
else
{
lean_object* v___x_998_; uint32_t v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; 
v___x_998_ = l_Subarray_get___redArg(v_fst_994_, v_a_995_);
v___x_999_ = lean_unbox_uint32(v___x_998_);
lean_dec(v___x_998_);
lean_inc(v_a_995_);
v___x_1000_ = l_Lean_Diff_Histogram_addLeft___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__12___redArg(v_b_996_, v_a_995_, v___x_999_);
v___x_1001_ = lean_unsigned_to_nat(1u);
v___x_1002_ = lean_nat_add(v_a_995_, v___x_1001_);
lean_dec(v_a_995_);
v_a_995_ = v___x_1002_;
v_b_996_ = v___x_1000_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__13___redArg___boxed(lean_object* v_upperBound_1004_, lean_object* v_fst_1005_, lean_object* v___x_1006_, lean_object* v_fst_1007_, lean_object* v_a_1008_, lean_object* v_b_1009_){
_start:
{
lean_object* v_res_1010_; 
v_res_1010_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__13___redArg(v_upperBound_1004_, v_fst_1005_, v___x_1006_, v_fst_1007_, v_a_1008_, v_b_1009_);
lean_dec_ref(v_fst_1007_);
lean_dec(v___x_1006_);
lean_dec_ref(v_fst_1005_);
lean_dec(v_upperBound_1004_);
return v_res_1010_;
}
}
static lean_object* _init_l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4___closed__0(void){
_start:
{
lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; 
v___x_1011_ = lean_box(0);
v___x_1012_ = lean_unsigned_to_nat(16u);
v___x_1013_ = lean_mk_array(v___x_1012_, v___x_1011_);
return v___x_1013_;
}
}
static lean_object* _init_l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4___closed__1(void){
_start:
{
lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v_hist_1016_; 
v___x_1014_ = lean_obj_once(&l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4___closed__0, &l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4___closed__0_once, _init_l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4___closed__0);
v___x_1015_ = lean_unsigned_to_nat(0u);
v_hist_1016_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_hist_1016_, 0, v___x_1015_);
lean_ctor_set(v_hist_1016_, 1, v___x_1014_);
return v_hist_1016_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4(lean_object* v_left_1017_, lean_object* v_right_1018_){
_start:
{
lean_object* v___x_1019_; lean_object* v_snd_1020_; lean_object* v_fst_1021_; lean_object* v_fst_1022_; lean_object* v_snd_1023_; lean_object* v___x_1024_; lean_object* v_snd_1025_; lean_object* v_fst_1026_; lean_object* v_fst_1027_; lean_object* v_snd_1028_; lean_object* v_start_1029_; lean_object* v_stop_1030_; lean_object* v___x_1031_; lean_object* v_hist_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v_start_1035_; lean_object* v_stop_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v_buckets_1039_; lean_object* v___x_1040_; lean_object* v___y_1042_; lean_object* v___x_1068_; lean_object* v___x_1069_; uint8_t v___x_1070_; 
v___x_1019_ = l_Lean_Diff_matchPrefix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__5(v_left_1017_, v_right_1018_);
v_snd_1020_ = lean_ctor_get(v___x_1019_, 1);
lean_inc(v_snd_1020_);
v_fst_1021_ = lean_ctor_get(v___x_1019_, 0);
lean_inc(v_fst_1021_);
lean_dec_ref(v___x_1019_);
v_fst_1022_ = lean_ctor_get(v_snd_1020_, 0);
lean_inc(v_fst_1022_);
v_snd_1023_ = lean_ctor_get(v_snd_1020_, 1);
lean_inc(v_snd_1023_);
lean_dec(v_snd_1020_);
v___x_1024_ = l_Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__6(v_fst_1022_, v_snd_1023_);
v_snd_1025_ = lean_ctor_get(v___x_1024_, 1);
lean_inc(v_snd_1025_);
v_fst_1026_ = lean_ctor_get(v___x_1024_, 0);
lean_inc(v_fst_1026_);
lean_dec_ref(v___x_1024_);
v_fst_1027_ = lean_ctor_get(v_snd_1025_, 0);
lean_inc(v_fst_1027_);
v_snd_1028_ = lean_ctor_get(v_snd_1025_, 1);
lean_inc(v_snd_1028_);
lean_dec(v_snd_1025_);
v_start_1029_ = lean_ctor_get(v_fst_1026_, 1);
v_stop_1030_ = lean_ctor_get(v_fst_1026_, 2);
v___x_1031_ = lean_unsigned_to_nat(0u);
v_hist_1032_ = lean_obj_once(&l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4___closed__1, &l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4___closed__1_once, _init_l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4___closed__1);
v___x_1033_ = lean_nat_sub(v_stop_1030_, v_start_1029_);
v___x_1034_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__13___redArg(v___x_1033_, v_fst_1027_, v___x_1033_, v_fst_1026_, v___x_1031_, v_hist_1032_);
v_start_1035_ = lean_ctor_get(v_fst_1027_, 1);
v_stop_1036_ = lean_ctor_get(v_fst_1027_, 2);
v___x_1037_ = lean_nat_sub(v_stop_1036_, v_start_1035_);
v___x_1038_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__11___redArg(v___x_1037_, v___x_1037_, v_fst_1027_, v___x_1033_, v___x_1031_, v___x_1034_);
lean_dec(v___x_1033_);
lean_dec(v___x_1037_);
v_buckets_1039_ = lean_ctor_get(v___x_1038_, 1);
lean_inc_ref(v_buckets_1039_);
lean_dec_ref(v___x_1038_);
v___x_1040_ = lean_box(0);
v___x_1068_ = lean_box(0);
v___x_1069_ = lean_array_get_size(v_buckets_1039_);
v___x_1070_ = lean_nat_dec_lt(v___x_1031_, v___x_1069_);
if (v___x_1070_ == 0)
{
lean_dec_ref(v_buckets_1039_);
v___y_1042_ = v___x_1068_;
goto v___jp_1041_;
}
else
{
size_t v___x_1071_; size_t v___x_1072_; lean_object* v___x_1073_; 
v___x_1071_ = lean_usize_of_nat(v___x_1069_);
v___x_1072_ = ((size_t)0ULL);
v___x_1073_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__9(v_buckets_1039_, v___x_1071_, v___x_1072_, v___x_1068_);
lean_dec_ref(v_buckets_1039_);
v___y_1042_ = v___x_1073_;
goto v___jp_1041_;
}
v___jp_1041_:
{
lean_object* v___x_1043_; 
v___x_1043_ = l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__7___redArg(v___y_1042_, v___x_1040_);
lean_dec(v___y_1042_);
if (lean_obj_tag(v___x_1043_) == 1)
{
lean_object* v_val_1044_; lean_object* v_snd_1045_; lean_object* v_snd_1046_; lean_object* v_fst_1047_; lean_object* v_fst_1048_; lean_object* v_snd_1049_; lean_object* v___x_1050_; lean_object* v_fst_1051_; lean_object* v_snd_1052_; lean_object* v___x_1053_; lean_object* v_fst_1054_; lean_object* v_snd_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; 
v_val_1044_ = lean_ctor_get(v___x_1043_, 0);
lean_inc(v_val_1044_);
lean_dec_ref_known(v___x_1043_, 1);
v_snd_1045_ = lean_ctor_get(v_val_1044_, 1);
lean_inc(v_snd_1045_);
lean_dec(v_val_1044_);
v_snd_1046_ = lean_ctor_get(v_snd_1045_, 1);
lean_inc(v_snd_1046_);
v_fst_1047_ = lean_ctor_get(v_snd_1045_, 0);
lean_inc(v_fst_1047_);
lean_dec(v_snd_1045_);
v_fst_1048_ = lean_ctor_get(v_snd_1046_, 0);
lean_inc(v_fst_1048_);
v_snd_1049_ = lean_ctor_get(v_snd_1046_, 1);
lean_inc(v_snd_1049_);
lean_dec(v_snd_1046_);
v___x_1050_ = l_Subarray_split___redArg(v_fst_1026_, v_fst_1048_);
lean_dec(v_fst_1048_);
v_fst_1051_ = lean_ctor_get(v___x_1050_, 0);
lean_inc(v_fst_1051_);
v_snd_1052_ = lean_ctor_get(v___x_1050_, 1);
lean_inc(v_snd_1052_);
lean_dec_ref(v___x_1050_);
v___x_1053_ = l_Subarray_split___redArg(v_fst_1027_, v_snd_1049_);
lean_dec(v_snd_1049_);
v_fst_1054_ = lean_ctor_get(v___x_1053_, 0);
lean_inc(v_fst_1054_);
v_snd_1055_ = lean_ctor_get(v___x_1053_, 1);
lean_inc(v_snd_1055_);
lean_dec_ref(v___x_1053_);
v___x_1056_ = l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4(v_fst_1051_, v_fst_1054_);
v___x_1057_ = l_Array_append___redArg(v_fst_1021_, v___x_1056_);
lean_dec_ref(v___x_1056_);
v___x_1058_ = lean_unsigned_to_nat(1u);
v___x_1059_ = lean_mk_empty_array_with_capacity(v___x_1058_);
v___x_1060_ = lean_array_push(v___x_1059_, v_fst_1047_);
v___x_1061_ = l_Array_append___redArg(v___x_1057_, v___x_1060_);
lean_dec_ref(v___x_1060_);
v___x_1062_ = l_Subarray_drop___redArg(v_snd_1052_, v___x_1058_);
v___x_1063_ = l_Subarray_drop___redArg(v_snd_1055_, v___x_1058_);
v___x_1064_ = l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4(v___x_1062_, v___x_1063_);
v___x_1065_ = l_Array_append___redArg(v___x_1061_, v___x_1064_);
lean_dec_ref(v___x_1064_);
v___x_1066_ = l_Array_append___redArg(v___x_1065_, v_snd_1028_);
lean_dec(v_snd_1028_);
return v___x_1066_;
}
else
{
lean_object* v___x_1067_; 
lean_dec(v___x_1043_);
lean_dec(v_fst_1027_);
lean_dec(v_fst_1026_);
v___x_1067_ = l_Array_append___redArg(v_fst_1021_, v_snd_1028_);
lean_dec(v_snd_1028_);
return v___x_1067_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__7___redArg(lean_object* v___x_1074_, lean_object* v_edited_1075_, lean_object* v_a_1076_){
_start:
{
lean_object* v_fst_1077_; lean_object* v_snd_1078_; lean_object* v___x_1080_; uint8_t v_isShared_1081_; uint8_t v_isSharedCheck_1097_; 
v_fst_1077_ = lean_ctor_get(v_a_1076_, 0);
v_snd_1078_ = lean_ctor_get(v_a_1076_, 1);
v_isSharedCheck_1097_ = !lean_is_exclusive(v_a_1076_);
if (v_isSharedCheck_1097_ == 0)
{
v___x_1080_ = v_a_1076_;
v_isShared_1081_ = v_isSharedCheck_1097_;
goto v_resetjp_1079_;
}
else
{
lean_inc(v_snd_1078_);
lean_inc(v_fst_1077_);
lean_dec(v_a_1076_);
v___x_1080_ = lean_box(0);
v_isShared_1081_ = v_isSharedCheck_1097_;
goto v_resetjp_1079_;
}
v_resetjp_1079_:
{
uint8_t v___x_1082_; 
v___x_1082_ = lean_nat_dec_lt(v_snd_1078_, v___x_1074_);
if (v___x_1082_ == 0)
{
lean_object* v___x_1084_; 
if (v_isShared_1081_ == 0)
{
v___x_1084_ = v___x_1080_;
goto v_reusejp_1083_;
}
else
{
lean_object* v_reuseFailAlloc_1085_; 
v_reuseFailAlloc_1085_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1085_, 0, v_fst_1077_);
lean_ctor_set(v_reuseFailAlloc_1085_, 1, v_snd_1078_);
v___x_1084_ = v_reuseFailAlloc_1085_;
goto v_reusejp_1083_;
}
v_reusejp_1083_:
{
return v___x_1084_;
}
}
else
{
uint8_t v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1090_; 
v___x_1086_ = 0;
v___x_1087_ = lean_array_fget_borrowed(v_edited_1075_, v_snd_1078_);
v___x_1088_ = lean_box(v___x_1086_);
lean_inc(v___x_1087_);
if (v_isShared_1081_ == 0)
{
lean_ctor_set(v___x_1080_, 1, v___x_1087_);
lean_ctor_set(v___x_1080_, 0, v___x_1088_);
v___x_1090_ = v___x_1080_;
goto v_reusejp_1089_;
}
else
{
lean_object* v_reuseFailAlloc_1096_; 
v_reuseFailAlloc_1096_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1096_, 0, v___x_1088_);
lean_ctor_set(v_reuseFailAlloc_1096_, 1, v___x_1087_);
v___x_1090_ = v_reuseFailAlloc_1096_;
goto v_reusejp_1089_;
}
v_reusejp_1089_:
{
lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; 
v___x_1091_ = lean_array_push(v_fst_1077_, v___x_1090_);
v___x_1092_ = lean_unsigned_to_nat(1u);
v___x_1093_ = lean_nat_add(v_snd_1078_, v___x_1092_);
lean_dec(v_snd_1078_);
v___x_1094_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1094_, 0, v___x_1091_);
lean_ctor_set(v___x_1094_, 1, v___x_1093_);
v_a_1076_ = v___x_1094_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__7___redArg___boxed(lean_object* v___x_1098_, lean_object* v_edited_1099_, lean_object* v_a_1100_){
_start:
{
lean_object* v_res_1101_; 
v_res_1101_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__7___redArg(v___x_1098_, v_edited_1099_, v_a_1100_);
lean_dec_ref(v_edited_1099_);
lean_dec(v___x_1098_);
return v_res_1101_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__8(size_t v_sz_1102_, size_t v_i_1103_, lean_object* v_bs_1104_){
_start:
{
uint8_t v___x_1105_; 
v___x_1105_ = lean_usize_dec_lt(v_i_1103_, v_sz_1102_);
if (v___x_1105_ == 0)
{
lean_object* v___x_1106_; 
v___x_1106_ = l_unsafeCast___redArg(v_bs_1104_);
lean_dec_ref(v_bs_1104_);
return v___x_1106_;
}
else
{
lean_object* v_v_1107_; lean_object* v___x_1108_; lean_object* v_bs_x27_1109_; lean_object* v___x_1110_; uint8_t v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; size_t v___x_1114_; size_t v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; 
v_v_1107_ = lean_array_uget(v_bs_1104_, v_i_1103_);
v___x_1108_ = lean_unsigned_to_nat(0u);
v_bs_x27_1109_ = lean_array_uset(v_bs_1104_, v_i_1103_, v___x_1108_);
v___x_1110_ = l_unsafeCast___redArg(v_v_1107_);
lean_dec(v_v_1107_);
v___x_1111_ = 1;
v___x_1112_ = lean_box(v___x_1111_);
v___x_1113_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1113_, 0, v___x_1112_);
lean_ctor_set(v___x_1113_, 1, v___x_1110_);
v___x_1114_ = ((size_t)1ULL);
v___x_1115_ = lean_usize_add(v_i_1103_, v___x_1114_);
v___x_1116_ = l_unsafeCast___redArg(v___x_1113_);
lean_dec_ref_known(v___x_1113_, 2);
v___x_1117_ = lean_array_uset(v_bs_x27_1109_, v_i_1103_, v___x_1116_);
v_i_1103_ = v___x_1115_;
v_bs_1104_ = v___x_1117_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__8___boxed(lean_object* v_sz_1119_, lean_object* v_i_1120_, lean_object* v_bs_1121_){
_start:
{
size_t v_sz_boxed_1122_; size_t v_i_boxed_1123_; lean_object* v_res_1124_; 
v_sz_boxed_1122_ = lean_unbox_usize(v_sz_1119_);
lean_dec(v_sz_1119_);
v_i_boxed_1123_ = lean_unbox_usize(v_i_1120_);
lean_dec(v_i_1120_);
v_res_1124_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__8(v_sz_boxed_1122_, v_i_boxed_1123_, v_bs_1121_);
return v_res_1124_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__2___redArg___boxed__const__1(void){
_start:
{
uint32_t v___x_1125_; lean_object* v___x_1126_; 
v___x_1125_ = 65;
v___x_1126_ = lean_box_uint32(v___x_1125_);
return v___x_1126_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__2___redArg(lean_object* v___x_1127_, lean_object* v_original_1128_, uint32_t v_a_1129_, lean_object* v_a_1130_){
_start:
{
lean_object* v_fst_1131_; lean_object* v_snd_1132_; lean_object* v___x_1134_; uint8_t v_isShared_1135_; uint8_t v_isSharedCheck_1157_; 
v_fst_1131_ = lean_ctor_get(v_a_1130_, 0);
v_snd_1132_ = lean_ctor_get(v_a_1130_, 1);
v_isSharedCheck_1157_ = !lean_is_exclusive(v_a_1130_);
if (v_isSharedCheck_1157_ == 0)
{
v___x_1134_ = v_a_1130_;
v_isShared_1135_ = v_isSharedCheck_1157_;
goto v_resetjp_1133_;
}
else
{
lean_inc(v_snd_1132_);
lean_inc(v_fst_1131_);
lean_dec(v_a_1130_);
v___x_1134_ = lean_box(0);
v_isShared_1135_ = v_isSharedCheck_1157_;
goto v_resetjp_1133_;
}
v_resetjp_1133_:
{
uint8_t v___x_1136_; 
v___x_1136_ = lean_nat_dec_lt(v_snd_1132_, v___x_1127_);
if (v___x_1136_ == 0)
{
lean_object* v___x_1138_; 
if (v_isShared_1135_ == 0)
{
v___x_1138_ = v___x_1134_;
goto v_reusejp_1137_;
}
else
{
lean_object* v_reuseFailAlloc_1139_; 
v_reuseFailAlloc_1139_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1139_, 0, v_fst_1131_);
lean_ctor_set(v_reuseFailAlloc_1139_, 1, v_snd_1132_);
v___x_1138_ = v_reuseFailAlloc_1139_;
goto v_reusejp_1137_;
}
v_reusejp_1137_:
{
return v___x_1138_;
}
}
else
{
lean_object* v___x_1140_; lean_object* v___x_1141_; uint32_t v___x_1142_; uint8_t v___x_1143_; 
v___x_1140_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__2___redArg___boxed__const__1;
v___x_1141_ = lean_array_get_borrowed(v___x_1140_, v_original_1128_, v_snd_1132_);
v___x_1142_ = lean_unbox_uint32(v___x_1141_);
v___x_1143_ = lean_uint32_dec_eq(v___x_1142_, v_a_1129_);
if (v___x_1143_ == 0)
{
uint8_t v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1147_; 
v___x_1144_ = 1;
v___x_1145_ = lean_box(v___x_1144_);
lean_inc(v___x_1141_);
if (v_isShared_1135_ == 0)
{
lean_ctor_set(v___x_1134_, 1, v___x_1141_);
lean_ctor_set(v___x_1134_, 0, v___x_1145_);
v___x_1147_ = v___x_1134_;
goto v_reusejp_1146_;
}
else
{
lean_object* v_reuseFailAlloc_1153_; 
v_reuseFailAlloc_1153_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1153_, 0, v___x_1145_);
lean_ctor_set(v_reuseFailAlloc_1153_, 1, v___x_1141_);
v___x_1147_ = v_reuseFailAlloc_1153_;
goto v_reusejp_1146_;
}
v_reusejp_1146_:
{
lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; 
v___x_1148_ = lean_array_push(v_fst_1131_, v___x_1147_);
v___x_1149_ = lean_unsigned_to_nat(1u);
v___x_1150_ = lean_nat_add(v_snd_1132_, v___x_1149_);
lean_dec(v_snd_1132_);
v___x_1151_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1151_, 0, v___x_1148_);
lean_ctor_set(v___x_1151_, 1, v___x_1150_);
v_a_1130_ = v___x_1151_;
goto _start;
}
}
else
{
lean_object* v___x_1155_; 
if (v_isShared_1135_ == 0)
{
v___x_1155_ = v___x_1134_;
goto v_reusejp_1154_;
}
else
{
lean_object* v_reuseFailAlloc_1156_; 
v_reuseFailAlloc_1156_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1156_, 0, v_fst_1131_);
lean_ctor_set(v_reuseFailAlloc_1156_, 1, v_snd_1132_);
v___x_1155_ = v_reuseFailAlloc_1156_;
goto v_reusejp_1154_;
}
v_reusejp_1154_:
{
return v___x_1155_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__2___redArg___boxed(lean_object* v___x_1158_, lean_object* v_original_1159_, lean_object* v_a_1160_, lean_object* v_a_1161_){
_start:
{
uint32_t v_a_boxed_1162_; lean_object* v_res_1163_; 
v_a_boxed_1162_ = lean_unbox_uint32(v_a_1160_);
lean_dec(v_a_1160_);
v_res_1163_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__2___redArg(v___x_1158_, v_original_1159_, v_a_boxed_1162_, v_a_1161_);
lean_dec_ref(v_original_1159_);
lean_dec(v___x_1158_);
return v_res_1163_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__3___redArg(lean_object* v___x_1164_, lean_object* v_edited_1165_, uint32_t v_a_1166_, lean_object* v_a_1167_){
_start:
{
lean_object* v_fst_1168_; lean_object* v_snd_1169_; lean_object* v___x_1171_; uint8_t v_isShared_1172_; uint8_t v_isSharedCheck_1194_; 
v_fst_1168_ = lean_ctor_get(v_a_1167_, 0);
v_snd_1169_ = lean_ctor_get(v_a_1167_, 1);
v_isSharedCheck_1194_ = !lean_is_exclusive(v_a_1167_);
if (v_isSharedCheck_1194_ == 0)
{
v___x_1171_ = v_a_1167_;
v_isShared_1172_ = v_isSharedCheck_1194_;
goto v_resetjp_1170_;
}
else
{
lean_inc(v_snd_1169_);
lean_inc(v_fst_1168_);
lean_dec(v_a_1167_);
v___x_1171_ = lean_box(0);
v_isShared_1172_ = v_isSharedCheck_1194_;
goto v_resetjp_1170_;
}
v_resetjp_1170_:
{
uint8_t v___x_1173_; 
v___x_1173_ = lean_nat_dec_lt(v_snd_1169_, v___x_1164_);
if (v___x_1173_ == 0)
{
lean_object* v___x_1175_; 
if (v_isShared_1172_ == 0)
{
v___x_1175_ = v___x_1171_;
goto v_reusejp_1174_;
}
else
{
lean_object* v_reuseFailAlloc_1176_; 
v_reuseFailAlloc_1176_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1176_, 0, v_fst_1168_);
lean_ctor_set(v_reuseFailAlloc_1176_, 1, v_snd_1169_);
v___x_1175_ = v_reuseFailAlloc_1176_;
goto v_reusejp_1174_;
}
v_reusejp_1174_:
{
return v___x_1175_;
}
}
else
{
lean_object* v___x_1177_; lean_object* v___x_1178_; uint32_t v___x_1179_; uint8_t v___x_1180_; 
v___x_1177_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__2___redArg___boxed__const__1;
v___x_1178_ = lean_array_get_borrowed(v___x_1177_, v_edited_1165_, v_snd_1169_);
v___x_1179_ = lean_unbox_uint32(v___x_1178_);
v___x_1180_ = lean_uint32_dec_eq(v___x_1179_, v_a_1166_);
if (v___x_1180_ == 0)
{
uint8_t v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1184_; 
v___x_1181_ = 0;
v___x_1182_ = lean_box(v___x_1181_);
lean_inc(v___x_1178_);
if (v_isShared_1172_ == 0)
{
lean_ctor_set(v___x_1171_, 1, v___x_1178_);
lean_ctor_set(v___x_1171_, 0, v___x_1182_);
v___x_1184_ = v___x_1171_;
goto v_reusejp_1183_;
}
else
{
lean_object* v_reuseFailAlloc_1190_; 
v_reuseFailAlloc_1190_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1190_, 0, v___x_1182_);
lean_ctor_set(v_reuseFailAlloc_1190_, 1, v___x_1178_);
v___x_1184_ = v_reuseFailAlloc_1190_;
goto v_reusejp_1183_;
}
v_reusejp_1183_:
{
lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; 
v___x_1185_ = lean_array_push(v_fst_1168_, v___x_1184_);
v___x_1186_ = lean_unsigned_to_nat(1u);
v___x_1187_ = lean_nat_add(v_snd_1169_, v___x_1186_);
lean_dec(v_snd_1169_);
v___x_1188_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1188_, 0, v___x_1185_);
lean_ctor_set(v___x_1188_, 1, v___x_1187_);
v_a_1167_ = v___x_1188_;
goto _start;
}
}
else
{
lean_object* v___x_1192_; 
if (v_isShared_1172_ == 0)
{
v___x_1192_ = v___x_1171_;
goto v_reusejp_1191_;
}
else
{
lean_object* v_reuseFailAlloc_1193_; 
v_reuseFailAlloc_1193_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1193_, 0, v_fst_1168_);
lean_ctor_set(v_reuseFailAlloc_1193_, 1, v_snd_1169_);
v___x_1192_ = v_reuseFailAlloc_1193_;
goto v_reusejp_1191_;
}
v_reusejp_1191_:
{
return v___x_1192_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__3___redArg___boxed(lean_object* v___x_1195_, lean_object* v_edited_1196_, lean_object* v_a_1197_, lean_object* v_a_1198_){
_start:
{
uint32_t v_a_boxed_1199_; lean_object* v_res_1200_; 
v_a_boxed_1199_ = lean_unbox_uint32(v_a_1197_);
lean_dec(v_a_1197_);
v_res_1200_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__3___redArg(v___x_1195_, v_edited_1196_, v_a_boxed_1199_, v_a_1198_);
lean_dec_ref(v_edited_1196_);
lean_dec(v___x_1195_);
return v_res_1200_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__5_spec__15(lean_object* v___x_1201_, lean_object* v_original_1202_, lean_object* v___x_1203_, lean_object* v_edited_1204_, lean_object* v_as_1205_, size_t v_sz_1206_, size_t v_i_1207_, lean_object* v_b_1208_){
_start:
{
uint8_t v___x_1209_; 
v___x_1209_ = lean_usize_dec_lt(v_i_1207_, v_sz_1206_);
if (v___x_1209_ == 0)
{
return v_b_1208_;
}
else
{
lean_object* v_snd_1210_; lean_object* v_fst_1211_; lean_object* v___x_1213_; uint8_t v_isShared_1214_; uint8_t v_isSharedCheck_1260_; 
v_snd_1210_ = lean_ctor_get(v_b_1208_, 1);
v_fst_1211_ = lean_ctor_get(v_b_1208_, 0);
v_isSharedCheck_1260_ = !lean_is_exclusive(v_b_1208_);
if (v_isSharedCheck_1260_ == 0)
{
v___x_1213_ = v_b_1208_;
v_isShared_1214_ = v_isSharedCheck_1260_;
goto v_resetjp_1212_;
}
else
{
lean_inc(v_snd_1210_);
lean_inc(v_fst_1211_);
lean_dec(v_b_1208_);
v___x_1213_ = lean_box(0);
v_isShared_1214_ = v_isSharedCheck_1260_;
goto v_resetjp_1212_;
}
v_resetjp_1212_:
{
lean_object* v_fst_1215_; lean_object* v_snd_1216_; lean_object* v___x_1218_; uint8_t v_isShared_1219_; uint8_t v_isSharedCheck_1259_; 
v_fst_1215_ = lean_ctor_get(v_snd_1210_, 0);
v_snd_1216_ = lean_ctor_get(v_snd_1210_, 1);
v_isSharedCheck_1259_ = !lean_is_exclusive(v_snd_1210_);
if (v_isSharedCheck_1259_ == 0)
{
v___x_1218_ = v_snd_1210_;
v_isShared_1219_ = v_isSharedCheck_1259_;
goto v_resetjp_1217_;
}
else
{
lean_inc(v_snd_1216_);
lean_inc(v_fst_1215_);
lean_dec(v_snd_1210_);
v___x_1218_ = lean_box(0);
v_isShared_1219_ = v_isSharedCheck_1259_;
goto v_resetjp_1217_;
}
v_resetjp_1217_:
{
lean_object* v_a_1220_; lean_object* v___x_1222_; 
v_a_1220_ = lean_array_uget_borrowed(v_as_1205_, v_i_1207_);
if (v_isShared_1219_ == 0)
{
lean_ctor_set(v___x_1218_, 1, v_fst_1215_);
lean_ctor_set(v___x_1218_, 0, v_fst_1211_);
v___x_1222_ = v___x_1218_;
goto v_reusejp_1221_;
}
else
{
lean_object* v_reuseFailAlloc_1258_; 
v_reuseFailAlloc_1258_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1258_, 0, v_fst_1211_);
lean_ctor_set(v_reuseFailAlloc_1258_, 1, v_fst_1215_);
v___x_1222_ = v_reuseFailAlloc_1258_;
goto v_reusejp_1221_;
}
v_reusejp_1221_:
{
uint32_t v___x_1223_; lean_object* v___x_1224_; lean_object* v_fst_1225_; lean_object* v_snd_1226_; lean_object* v___x_1228_; uint8_t v_isShared_1229_; uint8_t v_isSharedCheck_1257_; 
v___x_1223_ = lean_unbox_uint32(v_a_1220_);
v___x_1224_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__2___redArg(v___x_1201_, v_original_1202_, v___x_1223_, v___x_1222_);
v_fst_1225_ = lean_ctor_get(v___x_1224_, 0);
v_snd_1226_ = lean_ctor_get(v___x_1224_, 1);
v_isSharedCheck_1257_ = !lean_is_exclusive(v___x_1224_);
if (v_isSharedCheck_1257_ == 0)
{
v___x_1228_ = v___x_1224_;
v_isShared_1229_ = v_isSharedCheck_1257_;
goto v_resetjp_1227_;
}
else
{
lean_inc(v_snd_1226_);
lean_inc(v_fst_1225_);
lean_dec(v___x_1224_);
v___x_1228_ = lean_box(0);
v_isShared_1229_ = v_isSharedCheck_1257_;
goto v_resetjp_1227_;
}
v_resetjp_1227_:
{
lean_object* v___x_1231_; 
if (v_isShared_1229_ == 0)
{
lean_ctor_set(v___x_1228_, 1, v_snd_1216_);
v___x_1231_ = v___x_1228_;
goto v_reusejp_1230_;
}
else
{
lean_object* v_reuseFailAlloc_1256_; 
v_reuseFailAlloc_1256_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1256_, 0, v_fst_1225_);
lean_ctor_set(v_reuseFailAlloc_1256_, 1, v_snd_1216_);
v___x_1231_ = v_reuseFailAlloc_1256_;
goto v_reusejp_1230_;
}
v_reusejp_1230_:
{
uint32_t v___x_1232_; lean_object* v___x_1233_; lean_object* v_fst_1234_; lean_object* v_snd_1235_; lean_object* v___x_1237_; uint8_t v_isShared_1238_; uint8_t v_isSharedCheck_1255_; 
v___x_1232_ = lean_unbox_uint32(v_a_1220_);
v___x_1233_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__3___redArg(v___x_1203_, v_edited_1204_, v___x_1232_, v___x_1231_);
v_fst_1234_ = lean_ctor_get(v___x_1233_, 0);
v_snd_1235_ = lean_ctor_get(v___x_1233_, 1);
v_isSharedCheck_1255_ = !lean_is_exclusive(v___x_1233_);
if (v_isSharedCheck_1255_ == 0)
{
v___x_1237_ = v___x_1233_;
v_isShared_1238_ = v_isSharedCheck_1255_;
goto v_resetjp_1236_;
}
else
{
lean_inc(v_snd_1235_);
lean_inc(v_fst_1234_);
lean_dec(v___x_1233_);
v___x_1237_ = lean_box(0);
v_isShared_1238_ = v_isSharedCheck_1255_;
goto v_resetjp_1236_;
}
v_resetjp_1236_:
{
uint8_t v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1242_; 
v___x_1239_ = 2;
v___x_1240_ = lean_box(v___x_1239_);
lean_inc(v_a_1220_);
if (v_isShared_1238_ == 0)
{
lean_ctor_set(v___x_1237_, 1, v_a_1220_);
lean_ctor_set(v___x_1237_, 0, v___x_1240_);
v___x_1242_ = v___x_1237_;
goto v_reusejp_1241_;
}
else
{
lean_object* v_reuseFailAlloc_1254_; 
v_reuseFailAlloc_1254_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1254_, 0, v___x_1240_);
lean_ctor_set(v_reuseFailAlloc_1254_, 1, v_a_1220_);
v___x_1242_ = v_reuseFailAlloc_1254_;
goto v_reusejp_1241_;
}
v_reusejp_1241_:
{
lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1248_; 
v___x_1243_ = lean_array_push(v_fst_1234_, v___x_1242_);
v___x_1244_ = lean_unsigned_to_nat(1u);
v___x_1245_ = lean_nat_add(v_snd_1226_, v___x_1244_);
lean_dec(v_snd_1226_);
v___x_1246_ = lean_nat_add(v_snd_1235_, v___x_1244_);
lean_dec(v_snd_1235_);
if (v_isShared_1214_ == 0)
{
lean_ctor_set(v___x_1213_, 1, v___x_1246_);
lean_ctor_set(v___x_1213_, 0, v___x_1245_);
v___x_1248_ = v___x_1213_;
goto v_reusejp_1247_;
}
else
{
lean_object* v_reuseFailAlloc_1253_; 
v_reuseFailAlloc_1253_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1253_, 0, v___x_1245_);
lean_ctor_set(v_reuseFailAlloc_1253_, 1, v___x_1246_);
v___x_1248_ = v_reuseFailAlloc_1253_;
goto v_reusejp_1247_;
}
v_reusejp_1247_:
{
lean_object* v___x_1249_; size_t v___x_1250_; size_t v___x_1251_; 
v___x_1249_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1249_, 0, v___x_1243_);
lean_ctor_set(v___x_1249_, 1, v___x_1248_);
v___x_1250_ = ((size_t)1ULL);
v___x_1251_ = lean_usize_add(v_i_1207_, v___x_1250_);
v_i_1207_ = v___x_1251_;
v_b_1208_ = v___x_1249_;
goto _start;
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
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__5_spec__15___boxed(lean_object* v___x_1261_, lean_object* v_original_1262_, lean_object* v___x_1263_, lean_object* v_edited_1264_, lean_object* v_as_1265_, lean_object* v_sz_1266_, lean_object* v_i_1267_, lean_object* v_b_1268_){
_start:
{
size_t v_sz_boxed_1269_; size_t v_i_boxed_1270_; lean_object* v_res_1271_; 
v_sz_boxed_1269_ = lean_unbox_usize(v_sz_1266_);
lean_dec(v_sz_1266_);
v_i_boxed_1270_ = lean_unbox_usize(v_i_1267_);
lean_dec(v_i_1267_);
v_res_1271_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__5_spec__15(v___x_1261_, v_original_1262_, v___x_1263_, v_edited_1264_, v_as_1265_, v_sz_boxed_1269_, v_i_boxed_1270_, v_b_1268_);
lean_dec_ref(v_as_1265_);
lean_dec_ref(v_edited_1264_);
lean_dec(v___x_1263_);
lean_dec_ref(v_original_1262_);
lean_dec(v___x_1261_);
return v_res_1271_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__5(lean_object* v___x_1272_, lean_object* v_edited_1273_, lean_object* v___x_1274_, lean_object* v_original_1275_, lean_object* v_as_1276_, size_t v_sz_1277_, size_t v_i_1278_, lean_object* v_b_1279_){
_start:
{
uint8_t v___x_1280_; 
v___x_1280_ = lean_usize_dec_lt(v_i_1278_, v_sz_1277_);
if (v___x_1280_ == 0)
{
return v_b_1279_;
}
else
{
lean_object* v_snd_1281_; lean_object* v_fst_1282_; lean_object* v___x_1284_; uint8_t v_isShared_1285_; uint8_t v_isSharedCheck_1331_; 
v_snd_1281_ = lean_ctor_get(v_b_1279_, 1);
v_fst_1282_ = lean_ctor_get(v_b_1279_, 0);
v_isSharedCheck_1331_ = !lean_is_exclusive(v_b_1279_);
if (v_isSharedCheck_1331_ == 0)
{
v___x_1284_ = v_b_1279_;
v_isShared_1285_ = v_isSharedCheck_1331_;
goto v_resetjp_1283_;
}
else
{
lean_inc(v_snd_1281_);
lean_inc(v_fst_1282_);
lean_dec(v_b_1279_);
v___x_1284_ = lean_box(0);
v_isShared_1285_ = v_isSharedCheck_1331_;
goto v_resetjp_1283_;
}
v_resetjp_1283_:
{
lean_object* v_fst_1286_; lean_object* v_snd_1287_; lean_object* v___x_1289_; uint8_t v_isShared_1290_; uint8_t v_isSharedCheck_1330_; 
v_fst_1286_ = lean_ctor_get(v_snd_1281_, 0);
v_snd_1287_ = lean_ctor_get(v_snd_1281_, 1);
v_isSharedCheck_1330_ = !lean_is_exclusive(v_snd_1281_);
if (v_isSharedCheck_1330_ == 0)
{
v___x_1289_ = v_snd_1281_;
v_isShared_1290_ = v_isSharedCheck_1330_;
goto v_resetjp_1288_;
}
else
{
lean_inc(v_snd_1287_);
lean_inc(v_fst_1286_);
lean_dec(v_snd_1281_);
v___x_1289_ = lean_box(0);
v_isShared_1290_ = v_isSharedCheck_1330_;
goto v_resetjp_1288_;
}
v_resetjp_1288_:
{
lean_object* v_a_1291_; lean_object* v___x_1293_; 
v_a_1291_ = lean_array_uget_borrowed(v_as_1276_, v_i_1278_);
if (v_isShared_1290_ == 0)
{
lean_ctor_set(v___x_1289_, 1, v_fst_1286_);
lean_ctor_set(v___x_1289_, 0, v_fst_1282_);
v___x_1293_ = v___x_1289_;
goto v_reusejp_1292_;
}
else
{
lean_object* v_reuseFailAlloc_1329_; 
v_reuseFailAlloc_1329_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1329_, 0, v_fst_1282_);
lean_ctor_set(v_reuseFailAlloc_1329_, 1, v_fst_1286_);
v___x_1293_ = v_reuseFailAlloc_1329_;
goto v_reusejp_1292_;
}
v_reusejp_1292_:
{
uint32_t v___x_1294_; lean_object* v___x_1295_; lean_object* v_fst_1296_; lean_object* v_snd_1297_; lean_object* v___x_1299_; uint8_t v_isShared_1300_; uint8_t v_isSharedCheck_1328_; 
v___x_1294_ = lean_unbox_uint32(v_a_1291_);
v___x_1295_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__2___redArg(v___x_1274_, v_original_1275_, v___x_1294_, v___x_1293_);
v_fst_1296_ = lean_ctor_get(v___x_1295_, 0);
v_snd_1297_ = lean_ctor_get(v___x_1295_, 1);
v_isSharedCheck_1328_ = !lean_is_exclusive(v___x_1295_);
if (v_isSharedCheck_1328_ == 0)
{
v___x_1299_ = v___x_1295_;
v_isShared_1300_ = v_isSharedCheck_1328_;
goto v_resetjp_1298_;
}
else
{
lean_inc(v_snd_1297_);
lean_inc(v_fst_1296_);
lean_dec(v___x_1295_);
v___x_1299_ = lean_box(0);
v_isShared_1300_ = v_isSharedCheck_1328_;
goto v_resetjp_1298_;
}
v_resetjp_1298_:
{
lean_object* v___x_1302_; 
if (v_isShared_1300_ == 0)
{
lean_ctor_set(v___x_1299_, 1, v_snd_1287_);
v___x_1302_ = v___x_1299_;
goto v_reusejp_1301_;
}
else
{
lean_object* v_reuseFailAlloc_1327_; 
v_reuseFailAlloc_1327_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1327_, 0, v_fst_1296_);
lean_ctor_set(v_reuseFailAlloc_1327_, 1, v_snd_1287_);
v___x_1302_ = v_reuseFailAlloc_1327_;
goto v_reusejp_1301_;
}
v_reusejp_1301_:
{
uint32_t v___x_1303_; lean_object* v___x_1304_; lean_object* v_fst_1305_; lean_object* v_snd_1306_; lean_object* v___x_1308_; uint8_t v_isShared_1309_; uint8_t v_isSharedCheck_1326_; 
v___x_1303_ = lean_unbox_uint32(v_a_1291_);
v___x_1304_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__3___redArg(v___x_1272_, v_edited_1273_, v___x_1303_, v___x_1302_);
v_fst_1305_ = lean_ctor_get(v___x_1304_, 0);
v_snd_1306_ = lean_ctor_get(v___x_1304_, 1);
v_isSharedCheck_1326_ = !lean_is_exclusive(v___x_1304_);
if (v_isSharedCheck_1326_ == 0)
{
v___x_1308_ = v___x_1304_;
v_isShared_1309_ = v_isSharedCheck_1326_;
goto v_resetjp_1307_;
}
else
{
lean_inc(v_snd_1306_);
lean_inc(v_fst_1305_);
lean_dec(v___x_1304_);
v___x_1308_ = lean_box(0);
v_isShared_1309_ = v_isSharedCheck_1326_;
goto v_resetjp_1307_;
}
v_resetjp_1307_:
{
uint8_t v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1313_; 
v___x_1310_ = 2;
v___x_1311_ = lean_box(v___x_1310_);
lean_inc(v_a_1291_);
if (v_isShared_1309_ == 0)
{
lean_ctor_set(v___x_1308_, 1, v_a_1291_);
lean_ctor_set(v___x_1308_, 0, v___x_1311_);
v___x_1313_ = v___x_1308_;
goto v_reusejp_1312_;
}
else
{
lean_object* v_reuseFailAlloc_1325_; 
v_reuseFailAlloc_1325_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1325_, 0, v___x_1311_);
lean_ctor_set(v_reuseFailAlloc_1325_, 1, v_a_1291_);
v___x_1313_ = v_reuseFailAlloc_1325_;
goto v_reusejp_1312_;
}
v_reusejp_1312_:
{
lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1319_; 
v___x_1314_ = lean_array_push(v_fst_1305_, v___x_1313_);
v___x_1315_ = lean_unsigned_to_nat(1u);
v___x_1316_ = lean_nat_add(v_snd_1297_, v___x_1315_);
lean_dec(v_snd_1297_);
v___x_1317_ = lean_nat_add(v_snd_1306_, v___x_1315_);
lean_dec(v_snd_1306_);
if (v_isShared_1285_ == 0)
{
lean_ctor_set(v___x_1284_, 1, v___x_1317_);
lean_ctor_set(v___x_1284_, 0, v___x_1316_);
v___x_1319_ = v___x_1284_;
goto v_reusejp_1318_;
}
else
{
lean_object* v_reuseFailAlloc_1324_; 
v_reuseFailAlloc_1324_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1324_, 0, v___x_1316_);
lean_ctor_set(v_reuseFailAlloc_1324_, 1, v___x_1317_);
v___x_1319_ = v_reuseFailAlloc_1324_;
goto v_reusejp_1318_;
}
v_reusejp_1318_:
{
lean_object* v___x_1320_; size_t v___x_1321_; size_t v___x_1322_; lean_object* v___x_1323_; 
v___x_1320_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1320_, 0, v___x_1314_);
lean_ctor_set(v___x_1320_, 1, v___x_1319_);
v___x_1321_ = ((size_t)1ULL);
v___x_1322_ = lean_usize_add(v_i_1278_, v___x_1321_);
v___x_1323_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__5_spec__15(v___x_1274_, v_original_1275_, v___x_1272_, v_edited_1273_, v_as_1276_, v_sz_1277_, v___x_1322_, v___x_1320_);
return v___x_1323_;
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
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__5___boxed(lean_object* v___x_1332_, lean_object* v_edited_1333_, lean_object* v___x_1334_, lean_object* v_original_1335_, lean_object* v_as_1336_, lean_object* v_sz_1337_, lean_object* v_i_1338_, lean_object* v_b_1339_){
_start:
{
size_t v_sz_boxed_1340_; size_t v_i_boxed_1341_; lean_object* v_res_1342_; 
v_sz_boxed_1340_ = lean_unbox_usize(v_sz_1337_);
lean_dec(v_sz_1337_);
v_i_boxed_1341_ = lean_unbox_usize(v_i_1338_);
lean_dec(v_i_1338_);
v_res_1342_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__5(v___x_1332_, v_edited_1333_, v___x_1334_, v_original_1335_, v_as_1336_, v_sz_boxed_1340_, v_i_boxed_1341_, v_b_1339_);
lean_dec_ref(v_as_1336_);
lean_dec_ref(v_original_1335_);
lean_dec(v___x_1334_);
lean_dec_ref(v_edited_1333_);
lean_dec(v___x_1332_);
return v_res_1342_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1(lean_object* v_original_1350_, lean_object* v_edited_1351_){
_start:
{
lean_object* v_i_1352_; lean_object* v___x_1353_; uint8_t v___x_1354_; 
v_i_1352_ = lean_unsigned_to_nat(0u);
v___x_1353_ = lean_array_get_size(v_original_1350_);
v___x_1354_ = lean_nat_dec_lt(v_i_1352_, v___x_1353_);
if (v___x_1354_ == 0)
{
size_t v_sz_1355_; size_t v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; 
lean_dec_ref(v_original_1350_);
v_sz_1355_ = lean_array_size(v_edited_1351_);
v___x_1356_ = ((size_t)0ULL);
v___x_1357_ = l_unsafeCast___redArg(v_edited_1351_);
lean_dec_ref(v_edited_1351_);
v___x_1358_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__9(v_sz_1355_, v___x_1356_, v___x_1357_);
v___x_1359_ = l_unsafeCast___redArg(v___x_1358_);
lean_dec_ref(v___x_1358_);
return v___x_1359_;
}
else
{
lean_object* v___x_1360_; uint8_t v___x_1361_; 
v___x_1360_ = lean_array_get_size(v_edited_1351_);
v___x_1361_ = lean_nat_dec_lt(v_i_1352_, v___x_1360_);
if (v___x_1361_ == 0)
{
size_t v_sz_1362_; size_t v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; 
lean_dec_ref(v_edited_1351_);
v_sz_1362_ = lean_array_size(v_original_1350_);
v___x_1363_ = ((size_t)0ULL);
v___x_1364_ = l_unsafeCast___redArg(v_original_1350_);
lean_dec_ref(v_original_1350_);
v___x_1365_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__8(v_sz_1362_, v___x_1363_, v___x_1364_);
v___x_1366_ = l_unsafeCast___redArg(v___x_1365_);
lean_dec_ref(v___x_1365_);
return v___x_1366_;
}
else
{
lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v_ds_1369_; lean_object* v___x_1370_; size_t v_sz_1371_; size_t v___x_1372_; lean_object* v___x_1373_; lean_object* v_snd_1374_; lean_object* v_fst_1375_; lean_object* v_fst_1376_; lean_object* v_snd_1377_; lean_object* v___x_1379_; uint8_t v_isShared_1380_; uint8_t v_isSharedCheck_1396_; 
lean_inc_ref(v_original_1350_);
v___x_1367_ = l_Array_toSubarray___redArg(v_original_1350_, v_i_1352_, v___x_1353_);
lean_inc_ref(v_edited_1351_);
v___x_1368_ = l_Array_toSubarray___redArg(v_edited_1351_, v_i_1352_, v___x_1360_);
v_ds_1369_ = l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4(v___x_1367_, v___x_1368_);
v___x_1370_ = ((lean_object*)(l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1___closed__2));
v_sz_1371_ = lean_array_size(v_ds_1369_);
v___x_1372_ = ((size_t)0ULL);
v___x_1373_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__5(v___x_1360_, v_edited_1351_, v___x_1353_, v_original_1350_, v_ds_1369_, v_sz_1371_, v___x_1372_, v___x_1370_);
lean_dec_ref(v_ds_1369_);
v_snd_1374_ = lean_ctor_get(v___x_1373_, 1);
lean_inc(v_snd_1374_);
v_fst_1375_ = lean_ctor_get(v___x_1373_, 0);
lean_inc(v_fst_1375_);
lean_dec_ref(v___x_1373_);
v_fst_1376_ = lean_ctor_get(v_snd_1374_, 0);
v_snd_1377_ = lean_ctor_get(v_snd_1374_, 1);
v_isSharedCheck_1396_ = !lean_is_exclusive(v_snd_1374_);
if (v_isSharedCheck_1396_ == 0)
{
v___x_1379_ = v_snd_1374_;
v_isShared_1380_ = v_isSharedCheck_1396_;
goto v_resetjp_1378_;
}
else
{
lean_inc(v_snd_1377_);
lean_inc(v_fst_1376_);
lean_dec(v_snd_1374_);
v___x_1379_ = lean_box(0);
v_isShared_1380_ = v_isSharedCheck_1396_;
goto v_resetjp_1378_;
}
v_resetjp_1378_:
{
lean_object* v___x_1382_; 
if (v_isShared_1380_ == 0)
{
lean_ctor_set(v___x_1379_, 1, v_fst_1376_);
lean_ctor_set(v___x_1379_, 0, v_fst_1375_);
v___x_1382_ = v___x_1379_;
goto v_reusejp_1381_;
}
else
{
lean_object* v_reuseFailAlloc_1395_; 
v_reuseFailAlloc_1395_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1395_, 0, v_fst_1375_);
lean_ctor_set(v_reuseFailAlloc_1395_, 1, v_fst_1376_);
v___x_1382_ = v_reuseFailAlloc_1395_;
goto v_reusejp_1381_;
}
v_reusejp_1381_:
{
lean_object* v___x_1383_; lean_object* v_fst_1384_; lean_object* v___x_1386_; uint8_t v_isShared_1387_; uint8_t v_isSharedCheck_1393_; 
v___x_1383_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__6___redArg(v___x_1353_, v_original_1350_, v___x_1382_);
lean_dec_ref(v_original_1350_);
v_fst_1384_ = lean_ctor_get(v___x_1383_, 0);
v_isSharedCheck_1393_ = !lean_is_exclusive(v___x_1383_);
if (v_isSharedCheck_1393_ == 0)
{
lean_object* v_unused_1394_; 
v_unused_1394_ = lean_ctor_get(v___x_1383_, 1);
lean_dec(v_unused_1394_);
v___x_1386_ = v___x_1383_;
v_isShared_1387_ = v_isSharedCheck_1393_;
goto v_resetjp_1385_;
}
else
{
lean_inc(v_fst_1384_);
lean_dec(v___x_1383_);
v___x_1386_ = lean_box(0);
v_isShared_1387_ = v_isSharedCheck_1393_;
goto v_resetjp_1385_;
}
v_resetjp_1385_:
{
lean_object* v___x_1389_; 
if (v_isShared_1387_ == 0)
{
lean_ctor_set(v___x_1386_, 1, v_snd_1377_);
v___x_1389_ = v___x_1386_;
goto v_reusejp_1388_;
}
else
{
lean_object* v_reuseFailAlloc_1392_; 
v_reuseFailAlloc_1392_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1392_, 0, v_fst_1384_);
lean_ctor_set(v_reuseFailAlloc_1392_, 1, v_snd_1377_);
v___x_1389_ = v_reuseFailAlloc_1392_;
goto v_reusejp_1388_;
}
v_reusejp_1388_:
{
lean_object* v___x_1390_; lean_object* v_fst_1391_; 
v___x_1390_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__7___redArg(v___x_1360_, v_edited_1351_, v___x_1389_);
lean_dec_ref(v_edited_1351_);
v_fst_1391_ = lean_ctor_get(v___x_1390_, 0);
lean_inc(v_fst_1391_);
lean_dec_ref(v___x_1390_);
return v_fst_1391_;
}
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__0_spec__0___redArg(lean_object* v_s_1397_, lean_object* v_a_1398_, uint8_t v_b_1399_){
_start:
{
lean_object* v_str_1400_; lean_object* v_startInclusive_1401_; lean_object* v_endExclusive_1402_; lean_object* v___x_1403_; uint8_t v_decide_1404_; 
v_str_1400_ = lean_ctor_get(v_s_1397_, 0);
v_startInclusive_1401_ = lean_ctor_get(v_s_1397_, 1);
v_endExclusive_1402_ = lean_ctor_get(v_s_1397_, 2);
v___x_1403_ = lean_nat_sub(v_endExclusive_1402_, v_startInclusive_1401_);
v_decide_1404_ = lean_nat_dec_eq(v_a_1398_, v___x_1403_);
lean_dec(v___x_1403_);
if (v_decide_1404_ == 0)
{
lean_object* v___x_1405_; uint32_t v___x_1406_; uint32_t v___x_1407_; uint8_t v___x_1408_; 
v___x_1405_ = lean_nat_add(v_startInclusive_1401_, v_a_1398_);
lean_dec(v_a_1398_);
v___x_1406_ = lean_string_utf8_get_fast(v_str_1400_, v___x_1405_);
v___x_1407_ = 10;
v___x_1408_ = lean_uint32_dec_eq(v___x_1406_, v___x_1407_);
if (v___x_1408_ == 0)
{
lean_object* v___x_1409_; lean_object* v___x_1410_; 
v___x_1409_ = lean_string_utf8_next_fast(v_str_1400_, v___x_1405_);
lean_dec(v___x_1405_);
v___x_1410_ = lean_nat_sub(v___x_1409_, v_startInclusive_1401_);
v_a_1398_ = v___x_1410_;
v_b_1399_ = v___x_1408_;
goto _start;
}
else
{
lean_dec(v___x_1405_);
return v___x_1408_;
}
}
else
{
lean_dec(v_a_1398_);
return v_b_1399_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__0_spec__0___redArg___boxed(lean_object* v_s_1412_, lean_object* v_a_1413_, lean_object* v_b_1414_){
_start:
{
uint8_t v_b_boxed_1415_; uint8_t v_res_1416_; lean_object* v_r_1417_; 
v_b_boxed_1415_ = lean_unbox(v_b_1414_);
v_res_1416_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__0_spec__0___redArg(v_s_1412_, v_a_1413_, v_b_boxed_1415_);
lean_dec_ref(v_s_1412_);
v_r_1417_ = lean_box(v_res_1416_);
return v_r_1417_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__0(lean_object* v_s_1418_){
_start:
{
lean_object* v_searcher_1419_; uint8_t v___x_1420_; uint8_t v___x_1421_; 
v_searcher_1419_ = lean_unsigned_to_nat(0u);
v___x_1420_ = 0;
v___x_1421_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__0_spec__0___redArg(v_s_1418_, v_searcher_1419_, v___x_1420_);
return v___x_1421_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__0___boxed(lean_object* v_s_1422_){
_start:
{
uint8_t v_res_1423_; lean_object* v_r_1424_; 
v_res_1423_ = l_String_Slice_contains___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__0(v_s_1422_);
lean_dec_ref(v_s_1422_);
v_r_1424_ = lean_box(v_res_1423_);
return v_r_1424_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff(lean_object* v_oldWs_1425_, lean_object* v_newWs_1426_){
_start:
{
lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; uint8_t v___x_1430_; 
v___x_1427_ = lean_unsigned_to_nat(0u);
v___x_1428_ = lean_string_utf8_byte_size(v_oldWs_1425_);
lean_inc_ref(v_oldWs_1425_);
v___x_1429_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1429_, 0, v_oldWs_1425_);
lean_ctor_set(v___x_1429_, 1, v___x_1427_);
lean_ctor_set(v___x_1429_, 2, v___x_1428_);
v___x_1430_ = l_String_Slice_contains___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__0(v___x_1429_);
lean_dec_ref_known(v___x_1429_, 3);
if (v___x_1430_ == 0)
{
lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; 
v___x_1431_ = lean_string_data(v_oldWs_1425_);
v___x_1432_ = lean_array_mk(v___x_1431_);
v___x_1433_ = lean_string_data(v_newWs_1426_);
v___x_1434_ = lean_array_mk(v___x_1433_);
v___x_1435_ = l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1(v___x_1432_, v___x_1434_);
v___x_1436_ = l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinCharDiff(v___x_1435_);
lean_dec_ref(v___x_1435_);
return v___x_1436_;
}
else
{
uint8_t v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; 
lean_dec_ref(v_oldWs_1425_);
v___x_1437_ = 2;
v___x_1438_ = lean_box(v___x_1437_);
v___x_1439_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1439_, 0, v___x_1438_);
lean_ctor_set(v___x_1439_, 1, v_newWs_1426_);
v___x_1440_ = lean_unsigned_to_nat(1u);
v___x_1441_ = lean_mk_empty_array_with_capacity(v___x_1440_);
v___x_1442_ = lean_array_push(v___x_1441_, v___x_1439_);
return v___x_1442_;
}
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__0_spec__0(lean_object* v_s_1443_, lean_object* v_inst_1444_, lean_object* v_R_1445_, lean_object* v_a_1446_, uint8_t v_b_1447_, lean_object* v_c_1448_){
_start:
{
uint8_t v___x_1449_; 
v___x_1449_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__0_spec__0___redArg(v_s_1443_, v_a_1446_, v_b_1447_);
return v___x_1449_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__0_spec__0___boxed(lean_object* v_s_1450_, lean_object* v_inst_1451_, lean_object* v_R_1452_, lean_object* v_a_1453_, lean_object* v_b_1454_, lean_object* v_c_1455_){
_start:
{
uint8_t v_b_boxed_1456_; uint8_t v_res_1457_; lean_object* v_r_1458_; 
v_b_boxed_1456_ = lean_unbox(v_b_1454_);
v_res_1457_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__0_spec__0(v_s_1450_, v_inst_1451_, v_R_1452_, v_a_1453_, v_b_boxed_1456_, v_c_1455_);
lean_dec_ref(v_s_1450_);
v_r_1458_ = lean_box(v_res_1457_);
return v_r_1458_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__2(lean_object* v___x_1459_, lean_object* v_original_1460_, uint32_t v_a_1461_, lean_object* v_inst_1462_, lean_object* v_a_1463_){
_start:
{
lean_object* v___x_1464_; 
v___x_1464_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__2___redArg(v___x_1459_, v_original_1460_, v_a_1461_, v_a_1463_);
return v___x_1464_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__2___boxed(lean_object* v___x_1465_, lean_object* v_original_1466_, lean_object* v_a_1467_, lean_object* v_inst_1468_, lean_object* v_a_1469_){
_start:
{
uint32_t v_a_boxed_1470_; lean_object* v_res_1471_; 
v_a_boxed_1470_ = lean_unbox_uint32(v_a_1467_);
lean_dec(v_a_1467_);
v_res_1471_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__2(v___x_1465_, v_original_1466_, v_a_boxed_1470_, v_inst_1468_, v_a_1469_);
lean_dec_ref(v_original_1466_);
lean_dec(v___x_1465_);
return v_res_1471_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__3(lean_object* v___x_1472_, lean_object* v_edited_1473_, uint32_t v_a_1474_, lean_object* v_inst_1475_, lean_object* v_a_1476_){
_start:
{
lean_object* v___x_1477_; 
v___x_1477_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__3___redArg(v___x_1472_, v_edited_1473_, v_a_1474_, v_a_1476_);
return v___x_1477_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__3___boxed(lean_object* v___x_1478_, lean_object* v_edited_1479_, lean_object* v_a_1480_, lean_object* v_inst_1481_, lean_object* v_a_1482_){
_start:
{
uint32_t v_a_boxed_1483_; lean_object* v_res_1484_; 
v_a_boxed_1483_ = lean_unbox_uint32(v_a_1480_);
lean_dec(v_a_1480_);
v_res_1484_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__3(v___x_1478_, v_edited_1479_, v_a_boxed_1483_, v_inst_1481_, v_a_1482_);
lean_dec_ref(v_edited_1479_);
lean_dec(v___x_1478_);
return v_res_1484_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__6(lean_object* v___x_1485_, lean_object* v_original_1486_, lean_object* v_inst_1487_, lean_object* v_a_1488_){
_start:
{
lean_object* v___x_1489_; 
v___x_1489_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__6___redArg(v___x_1485_, v_original_1486_, v_a_1488_);
return v___x_1489_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__6___boxed(lean_object* v___x_1490_, lean_object* v_original_1491_, lean_object* v_inst_1492_, lean_object* v_a_1493_){
_start:
{
lean_object* v_res_1494_; 
v_res_1494_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__6(v___x_1490_, v_original_1491_, v_inst_1492_, v_a_1493_);
lean_dec_ref(v_original_1491_);
lean_dec(v___x_1490_);
return v_res_1494_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__7(lean_object* v___x_1495_, lean_object* v_edited_1496_, lean_object* v_inst_1497_, lean_object* v_a_1498_){
_start:
{
lean_object* v___x_1499_; 
v___x_1499_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__7___redArg(v___x_1495_, v_edited_1496_, v_a_1498_);
return v___x_1499_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__7___boxed(lean_object* v___x_1500_, lean_object* v_edited_1501_, lean_object* v_inst_1502_, lean_object* v_a_1503_){
_start:
{
lean_object* v_res_1504_; 
v_res_1504_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__7(v___x_1500_, v_edited_1501_, v_inst_1502_, v_a_1503_);
lean_dec_ref(v_edited_1501_);
lean_dec(v___x_1500_);
return v_res_1504_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__7(lean_object* v_as_1505_, lean_object* v_as_x27_1506_, lean_object* v_b_1507_, lean_object* v_a_1508_){
_start:
{
lean_object* v___x_1509_; 
v___x_1509_ = l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__7___redArg(v_as_x27_1506_, v_b_1507_);
return v___x_1509_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__7___boxed(lean_object* v_as_1510_, lean_object* v_as_x27_1511_, lean_object* v_b_1512_, lean_object* v_a_1513_){
_start:
{
lean_object* v_res_1514_; 
v_res_1514_ = l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__7(v_as_1510_, v_as_x27_1511_, v_b_1512_, v_a_1513_);
lean_dec(v_as_x27_1511_);
lean_dec(v_as_1510_);
return v_res_1514_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10(lean_object* v_lsize_1515_, lean_object* v_rsize_1516_, lean_object* v_histogram_1517_, lean_object* v_index_1518_, uint32_t v_val_1519_){
_start:
{
lean_object* v___x_1520_; 
v___x_1520_ = l_Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10___redArg(v_histogram_1517_, v_index_1518_, v_val_1519_);
return v___x_1520_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10___boxed(lean_object* v_lsize_1521_, lean_object* v_rsize_1522_, lean_object* v_histogram_1523_, lean_object* v_index_1524_, lean_object* v_val_1525_){
_start:
{
uint32_t v_val_boxed_1526_; lean_object* v_res_1527_; 
v_val_boxed_1526_ = lean_unbox_uint32(v_val_1525_);
lean_dec(v_val_1525_);
v_res_1527_ = l_Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10(v_lsize_1521_, v_rsize_1522_, v_histogram_1523_, v_index_1524_, v_val_boxed_1526_);
lean_dec(v_rsize_1522_);
lean_dec(v_lsize_1521_);
return v_res_1527_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__11(lean_object* v_upperBound_1528_, lean_object* v___x_1529_, lean_object* v_fst_1530_, lean_object* v___x_1531_, lean_object* v_inst_1532_, lean_object* v_R_1533_, lean_object* v_a_1534_, lean_object* v_b_1535_, lean_object* v_c_1536_){
_start:
{
lean_object* v___x_1537_; 
v___x_1537_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__11___redArg(v_upperBound_1528_, v___x_1529_, v_fst_1530_, v___x_1531_, v_a_1534_, v_b_1535_);
return v___x_1537_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__11___boxed(lean_object* v_upperBound_1538_, lean_object* v___x_1539_, lean_object* v_fst_1540_, lean_object* v___x_1541_, lean_object* v_inst_1542_, lean_object* v_R_1543_, lean_object* v_a_1544_, lean_object* v_b_1545_, lean_object* v_c_1546_){
_start:
{
lean_object* v_res_1547_; 
v_res_1547_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__11(v_upperBound_1538_, v___x_1539_, v_fst_1540_, v___x_1541_, v_inst_1542_, v_R_1543_, v_a_1544_, v_b_1545_, v_c_1546_);
lean_dec(v___x_1541_);
lean_dec_ref(v_fst_1540_);
lean_dec(v___x_1539_);
lean_dec(v_upperBound_1538_);
return v_res_1547_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addLeft___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__12(lean_object* v_lsize_1548_, lean_object* v_rsize_1549_, lean_object* v_histogram_1550_, lean_object* v_index_1551_, uint32_t v_val_1552_){
_start:
{
lean_object* v___x_1553_; 
v___x_1553_ = l_Lean_Diff_Histogram_addLeft___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__12___redArg(v_histogram_1550_, v_index_1551_, v_val_1552_);
return v___x_1553_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addLeft___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__12___boxed(lean_object* v_lsize_1554_, lean_object* v_rsize_1555_, lean_object* v_histogram_1556_, lean_object* v_index_1557_, lean_object* v_val_1558_){
_start:
{
uint32_t v_val_boxed_1559_; lean_object* v_res_1560_; 
v_val_boxed_1559_ = lean_unbox_uint32(v_val_1558_);
lean_dec(v_val_1558_);
v_res_1560_ = l_Lean_Diff_Histogram_addLeft___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__12(v_lsize_1554_, v_rsize_1555_, v_histogram_1556_, v_index_1557_, v_val_boxed_1559_);
lean_dec(v_rsize_1555_);
lean_dec(v_lsize_1554_);
return v_res_1560_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__13(lean_object* v_upperBound_1561_, lean_object* v_fst_1562_, lean_object* v___x_1563_, lean_object* v_fst_1564_, lean_object* v_inst_1565_, lean_object* v_R_1566_, lean_object* v_a_1567_, lean_object* v_b_1568_, lean_object* v_c_1569_){
_start:
{
lean_object* v___x_1570_; 
v___x_1570_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__13___redArg(v_upperBound_1561_, v_fst_1562_, v___x_1563_, v_fst_1564_, v_a_1567_, v_b_1568_);
return v___x_1570_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__13___boxed(lean_object* v_upperBound_1571_, lean_object* v_fst_1572_, lean_object* v___x_1573_, lean_object* v_fst_1574_, lean_object* v_inst_1575_, lean_object* v_R_1576_, lean_object* v_a_1577_, lean_object* v_b_1578_, lean_object* v_c_1579_){
_start:
{
lean_object* v_res_1580_; 
v_res_1580_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__13(v_upperBound_1571_, v_fst_1572_, v___x_1573_, v_fst_1574_, v_inst_1575_, v_R_1576_, v_a_1577_, v_b_1578_, v_c_1579_);
lean_dec_ref(v_fst_1574_);
lean_dec(v___x_1573_);
lean_dec_ref(v_fst_1572_);
lean_dec(v_upperBound_1571_);
return v_res_1580_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__13(lean_object* v_00_u03b2_1581_, lean_object* v_m_1582_, uint32_t v_a_1583_){
_start:
{
lean_object* v___x_1584_; 
v___x_1584_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__13___redArg(v_m_1582_, v_a_1583_);
return v___x_1584_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__13___boxed(lean_object* v_00_u03b2_1585_, lean_object* v_m_1586_, lean_object* v_a_1587_){
_start:
{
uint32_t v_a_boxed_1588_; lean_object* v_res_1589_; 
v_a_boxed_1588_ = lean_unbox_uint32(v_a_1587_);
lean_dec(v_a_1587_);
v_res_1589_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__13(v_00_u03b2_1585_, v_m_1586_, v_a_boxed_1588_);
lean_dec_ref(v_m_1586_);
return v_res_1589_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14(lean_object* v_00_u03b2_1590_, lean_object* v_m_1591_, uint32_t v_a_1592_, lean_object* v_b_1593_){
_start:
{
lean_object* v___x_1594_; 
v___x_1594_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14___redArg(v_m_1591_, v_a_1592_, v_b_1593_);
return v___x_1594_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14___boxed(lean_object* v_00_u03b2_1595_, lean_object* v_m_1596_, lean_object* v_a_1597_, lean_object* v_b_1598_){
_start:
{
uint32_t v_a_boxed_1599_; lean_object* v_res_1600_; 
v_a_boxed_1599_ = lean_unbox_uint32(v_a_1597_);
lean_dec(v_a_1597_);
v_res_1600_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14(v_00_u03b2_1595_, v_m_1596_, v_a_boxed_1599_, v_b_1598_);
return v_res_1600_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___at___00Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__6_spec__8_spec__14(lean_object* v_inst_1601_, lean_object* v_R_1602_, lean_object* v_a_1603_, lean_object* v_b_1604_){
_start:
{
lean_object* v___x_1605_; 
v___x_1605_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___at___00Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__6_spec__8_spec__14___redArg(v_a_1603_, v_b_1604_);
return v___x_1605_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__13_spec__20(lean_object* v_00_u03b2_1606_, uint32_t v_a_1607_, lean_object* v_x_1608_){
_start:
{
lean_object* v___x_1609_; 
v___x_1609_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__13_spec__20___redArg(v_a_1607_, v_x_1608_);
return v___x_1609_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__13_spec__20___boxed(lean_object* v_00_u03b2_1610_, lean_object* v_a_1611_, lean_object* v_x_1612_){
_start:
{
uint32_t v_a_boxed_1613_; lean_object* v_res_1614_; 
v_a_boxed_1613_ = lean_unbox_uint32(v_a_1611_);
lean_dec(v_a_1611_);
v_res_1614_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__13_spec__20(v_00_u03b2_1610_, v_a_boxed_1613_, v_x_1612_);
lean_dec(v_x_1612_);
return v_res_1614_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__22(lean_object* v_00_u03b2_1615_, uint32_t v_a_1616_, lean_object* v_x_1617_){
_start:
{
uint8_t v___x_1618_; 
v___x_1618_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__22___redArg(v_a_1616_, v_x_1617_);
return v___x_1618_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__22___boxed(lean_object* v_00_u03b2_1619_, lean_object* v_a_1620_, lean_object* v_x_1621_){
_start:
{
uint32_t v_a_boxed_1622_; uint8_t v_res_1623_; lean_object* v_r_1624_; 
v_a_boxed_1622_ = lean_unbox_uint32(v_a_1620_);
lean_dec(v_a_1620_);
v_res_1623_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__22(v_00_u03b2_1619_, v_a_boxed_1622_, v_x_1621_);
lean_dec(v_x_1621_);
v_r_1624_ = lean_box(v_res_1623_);
return v_r_1624_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__23(lean_object* v_00_u03b2_1625_, lean_object* v_data_1626_){
_start:
{
lean_object* v___x_1627_; 
v___x_1627_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__23___redArg(v_data_1626_);
return v___x_1627_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__24(lean_object* v_00_u03b2_1628_, uint32_t v_a_1629_, lean_object* v_b_1630_, lean_object* v_x_1631_){
_start:
{
lean_object* v___x_1632_; 
v___x_1632_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__24___redArg(v_a_1629_, v_b_1630_, v_x_1631_);
return v___x_1632_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__24___boxed(lean_object* v_00_u03b2_1633_, lean_object* v_a_1634_, lean_object* v_b_1635_, lean_object* v_x_1636_){
_start:
{
uint32_t v_a_boxed_1637_; lean_object* v_res_1638_; 
v_a_boxed_1637_ = lean_unbox_uint32(v_a_1634_);
lean_dec(v_a_1634_);
v_res_1638_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__24(v_00_u03b2_1633_, v_a_boxed_1637_, v_b_1635_, v_x_1636_);
return v_res_1638_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__23_spec__28(lean_object* v_00_u03b2_1639_, lean_object* v_i_1640_, lean_object* v_source_1641_, lean_object* v_target_1642_){
_start:
{
lean_object* v___x_1643_; 
v___x_1643_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__23_spec__28___redArg(v_i_1640_, v_source_1641_, v_target_1642_);
return v___x_1643_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__23_spec__28_spec__29(lean_object* v_00_u03b2_1644_, lean_object* v_x_1645_, lean_object* v_x_1646_){
_start:
{
lean_object* v___x_1647_; 
v___x_1647_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__23_spec__28_spec__29___redArg(v_x_1645_, v_x_1646_);
return v___x_1647_;
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_takeWhileAux___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitWordsAux_spec__0(lean_object* v_s_1648_, lean_object* v_stopPos_1649_, lean_object* v_i_1650_){
_start:
{
uint8_t v___y_1652_; lean_object* v___x_1655_; lean_object* v___x_1656_; uint8_t v___x_1657_; 
v___x_1655_ = lean_unsigned_to_nat(1u);
v___x_1656_ = lean_nat_add(v_i_1650_, v___x_1655_);
v___x_1657_ = lean_nat_dec_le(v___x_1656_, v_stopPos_1649_);
lean_dec(v___x_1656_);
if (v___x_1657_ == 0)
{
return v_i_1650_;
}
else
{
if (v___x_1657_ == 0)
{
v___y_1652_ = v___x_1657_;
goto v___jp_1651_;
}
else
{
uint32_t v___x_1658_; uint32_t v___x_1659_; uint8_t v___x_1660_; 
v___x_1658_ = lean_string_utf8_get(v_s_1648_, v_i_1650_);
v___x_1659_ = 32;
v___x_1660_ = lean_uint32_dec_eq(v___x_1658_, v___x_1659_);
if (v___x_1660_ == 0)
{
uint32_t v___x_1661_; uint8_t v___x_1662_; 
v___x_1661_ = 9;
v___x_1662_ = lean_uint32_dec_eq(v___x_1658_, v___x_1661_);
if (v___x_1662_ == 0)
{
uint32_t v___x_1663_; uint8_t v___x_1664_; 
v___x_1663_ = 13;
v___x_1664_ = lean_uint32_dec_eq(v___x_1658_, v___x_1663_);
if (v___x_1664_ == 0)
{
uint32_t v___x_1665_; uint8_t v___x_1666_; 
v___x_1665_ = 10;
v___x_1666_ = lean_uint32_dec_eq(v___x_1658_, v___x_1665_);
v___y_1652_ = v___x_1666_;
goto v___jp_1651_;
}
else
{
v___y_1652_ = v___x_1664_;
goto v___jp_1651_;
}
}
else
{
v___y_1652_ = v___x_1662_;
goto v___jp_1651_;
}
}
else
{
v___y_1652_ = v___x_1660_;
goto v___jp_1651_;
}
}
}
v___jp_1651_:
{
if (v___y_1652_ == 0)
{
return v_i_1650_;
}
else
{
lean_object* v___x_1653_; 
v___x_1653_ = lean_string_utf8_next(v_s_1648_, v_i_1650_);
lean_dec(v_i_1650_);
v_i_1650_ = v___x_1653_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_takeWhileAux___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitWordsAux_spec__0___boxed(lean_object* v_s_1667_, lean_object* v_stopPos_1668_, lean_object* v_i_1669_){
_start:
{
lean_object* v_res_1670_; 
v_res_1670_ = l_Substring_Raw_takeWhileAux___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitWordsAux_spec__0(v_s_1667_, v_stopPos_1668_, v_i_1669_);
lean_dec(v_stopPos_1668_);
lean_dec_ref(v_s_1667_);
return v_res_1670_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitWordsAux(lean_object* v_s_1671_, lean_object* v_b_1672_, lean_object* v_i_1673_, lean_object* v_r_1674_, lean_object* v_ws_1675_){
_start:
{
uint8_t v___x_1684_; 
v___x_1684_ = lean_string_utf8_at_end(v_s_1671_, v_i_1673_);
if (v___x_1684_ == 0)
{
uint32_t v___x_1685_; uint32_t v___x_1686_; uint8_t v___x_1687_; 
v___x_1685_ = lean_string_utf8_get(v_s_1671_, v_i_1673_);
v___x_1686_ = 32;
v___x_1687_ = lean_uint32_dec_eq(v___x_1685_, v___x_1686_);
if (v___x_1687_ == 0)
{
uint32_t v___x_1688_; uint8_t v___x_1689_; 
v___x_1688_ = 9;
v___x_1689_ = lean_uint32_dec_eq(v___x_1685_, v___x_1688_);
if (v___x_1689_ == 0)
{
uint32_t v___x_1690_; uint8_t v___x_1691_; 
v___x_1690_ = 13;
v___x_1691_ = lean_uint32_dec_eq(v___x_1685_, v___x_1690_);
if (v___x_1691_ == 0)
{
uint32_t v___x_1692_; uint8_t v___x_1693_; 
v___x_1692_ = 10;
v___x_1693_ = lean_uint32_dec_eq(v___x_1685_, v___x_1692_);
if (v___x_1693_ == 0)
{
lean_object* v___x_1694_; 
v___x_1694_ = lean_string_utf8_next(v_s_1671_, v_i_1673_);
lean_dec(v_i_1673_);
v_i_1673_ = v___x_1694_;
goto _start;
}
else
{
goto v___jp_1676_;
}
}
else
{
goto v___jp_1676_;
}
}
else
{
goto v___jp_1676_;
}
}
else
{
goto v___jp_1676_;
}
}
else
{
lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; 
v___x_1696_ = lean_string_utf8_extract(v_s_1671_, v_b_1672_, v_i_1673_);
lean_dec(v_i_1673_);
lean_dec(v_b_1672_);
v___x_1697_ = lean_array_push(v_r_1674_, v___x_1696_);
v___x_1698_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1698_, 0, v___x_1697_);
lean_ctor_set(v___x_1698_, 1, v_ws_1675_);
return v___x_1698_;
}
v___jp_1676_:
{
lean_object* v___x_1677_; lean_object* v_e_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; 
v___x_1677_ = lean_string_utf8_byte_size(v_s_1671_);
lean_inc(v_i_1673_);
v_e_1678_ = l_Substring_Raw_takeWhileAux___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitWordsAux_spec__0(v_s_1671_, v___x_1677_, v_i_1673_);
v___x_1679_ = lean_string_utf8_extract(v_s_1671_, v_b_1672_, v_i_1673_);
lean_dec(v_b_1672_);
v___x_1680_ = lean_array_push(v_r_1674_, v___x_1679_);
v___x_1681_ = lean_string_utf8_extract(v_s_1671_, v_i_1673_, v_e_1678_);
lean_dec(v_i_1673_);
v___x_1682_ = lean_array_push(v_ws_1675_, v___x_1681_);
lean_inc(v_e_1678_);
v_b_1672_ = v_e_1678_;
v_i_1673_ = v_e_1678_;
v_r_1674_ = v___x_1680_;
v_ws_1675_ = v___x_1682_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitWordsAux___boxed(lean_object* v_s_1699_, lean_object* v_b_1700_, lean_object* v_i_1701_, lean_object* v_r_1702_, lean_object* v_ws_1703_){
_start:
{
lean_object* v_res_1704_; 
v_res_1704_ = l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitWordsAux(v_s_1699_, v_b_1700_, v_i_1701_, v_r_1702_, v_ws_1703_);
lean_dec_ref(v_s_1699_);
return v_res_1704_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitWords(lean_object* v_s_1707_){
_start:
{
lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; 
v___x_1708_ = lean_unsigned_to_nat(0u);
v___x_1709_ = ((lean_object*)(l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitWords___closed__0));
v___x_1710_ = l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitWordsAux(v_s_1707_, v___x_1708_, v___x_1708_, v___x_1709_, v___x_1709_);
return v___x_1710_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitWords___boxed(lean_object* v_s_1711_){
_start:
{
lean_object* v_res_1712_; 
v_res_1712_ = l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitWords(v_s_1711_);
lean_dec_ref(v_s_1711_);
return v_res_1712_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__0(size_t v_sz_1713_, size_t v_i_1714_, lean_object* v_bs_1715_){
_start:
{
uint8_t v___x_1716_; 
v___x_1716_ = lean_usize_dec_lt(v_i_1714_, v_sz_1713_);
if (v___x_1716_ == 0)
{
lean_object* v___x_1717_; 
v___x_1717_ = l_unsafeCast___redArg(v_bs_1715_);
lean_dec_ref(v_bs_1715_);
return v___x_1717_;
}
else
{
lean_object* v_v_1718_; lean_object* v___x_1719_; lean_object* v_fst_1720_; lean_object* v_snd_1721_; lean_object* v___x_1723_; uint8_t v_isShared_1724_; uint8_t v_isSharedCheck_1756_; 
v_v_1718_ = lean_array_uget_borrowed(v_bs_1715_, v_i_1714_);
v___x_1719_ = l_unsafeCast___redArg(v_v_1718_);
v_fst_1720_ = lean_ctor_get(v___x_1719_, 0);
v_snd_1721_ = lean_ctor_get(v___x_1719_, 1);
v_isSharedCheck_1756_ = !lean_is_exclusive(v___x_1719_);
if (v_isSharedCheck_1756_ == 0)
{
v___x_1723_ = v___x_1719_;
v_isShared_1724_ = v_isSharedCheck_1756_;
goto v_resetjp_1722_;
}
else
{
lean_inc(v_snd_1721_);
lean_inc(v_fst_1720_);
lean_dec(v___x_1719_);
v___x_1723_ = lean_box(0);
v_isShared_1724_ = v_isSharedCheck_1756_;
goto v_resetjp_1722_;
}
v_resetjp_1722_:
{
lean_object* v___x_1725_; lean_object* v_bs_x27_1726_; lean_object* v___y_1728_; lean_object* v___x_1734_; lean_object* v___x_1735_; uint8_t v___x_1736_; 
v___x_1725_ = lean_unsigned_to_nat(0u);
v_bs_x27_1726_ = lean_array_uset(v_bs_1715_, v_i_1714_, v___x_1725_);
v___x_1734_ = ((lean_object*)(l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString___closed__0));
v___x_1735_ = lean_array_get_size(v_snd_1721_);
v___x_1736_ = lean_nat_dec_lt(v___x_1725_, v___x_1735_);
if (v___x_1736_ == 0)
{
lean_object* v___x_1738_; 
lean_dec(v_snd_1721_);
if (v_isShared_1724_ == 0)
{
lean_ctor_set(v___x_1723_, 1, v___x_1734_);
v___x_1738_ = v___x_1723_;
goto v_reusejp_1737_;
}
else
{
lean_object* v_reuseFailAlloc_1739_; 
v_reuseFailAlloc_1739_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1739_, 0, v_fst_1720_);
lean_ctor_set(v_reuseFailAlloc_1739_, 1, v___x_1734_);
v___x_1738_ = v_reuseFailAlloc_1739_;
goto v_reusejp_1737_;
}
v_reusejp_1737_:
{
v___y_1728_ = v___x_1738_;
goto v___jp_1727_;
}
}
else
{
uint8_t v___x_1740_; 
v___x_1740_ = lean_nat_dec_le(v___x_1735_, v___x_1735_);
if (v___x_1740_ == 0)
{
if (v___x_1736_ == 0)
{
lean_object* v___x_1742_; 
lean_dec(v_snd_1721_);
if (v_isShared_1724_ == 0)
{
lean_ctor_set(v___x_1723_, 1, v___x_1734_);
v___x_1742_ = v___x_1723_;
goto v_reusejp_1741_;
}
else
{
lean_object* v_reuseFailAlloc_1743_; 
v_reuseFailAlloc_1743_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1743_, 0, v_fst_1720_);
lean_ctor_set(v_reuseFailAlloc_1743_, 1, v___x_1734_);
v___x_1742_ = v_reuseFailAlloc_1743_;
goto v_reusejp_1741_;
}
v_reusejp_1741_:
{
v___y_1728_ = v___x_1742_;
goto v___jp_1727_;
}
}
else
{
size_t v___x_1744_; size_t v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1748_; 
v___x_1744_ = ((size_t)0ULL);
v___x_1745_ = lean_usize_of_nat(v___x_1735_);
v___x_1746_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__3(v_snd_1721_, v___x_1744_, v___x_1745_, v___x_1734_);
lean_dec(v_snd_1721_);
if (v_isShared_1724_ == 0)
{
lean_ctor_set(v___x_1723_, 1, v___x_1746_);
v___x_1748_ = v___x_1723_;
goto v_reusejp_1747_;
}
else
{
lean_object* v_reuseFailAlloc_1749_; 
v_reuseFailAlloc_1749_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1749_, 0, v_fst_1720_);
lean_ctor_set(v_reuseFailAlloc_1749_, 1, v___x_1746_);
v___x_1748_ = v_reuseFailAlloc_1749_;
goto v_reusejp_1747_;
}
v_reusejp_1747_:
{
v___y_1728_ = v___x_1748_;
goto v___jp_1727_;
}
}
}
else
{
size_t v___x_1750_; size_t v___x_1751_; lean_object* v___x_1752_; lean_object* v___x_1754_; 
v___x_1750_ = ((size_t)0ULL);
v___x_1751_ = lean_usize_of_nat(v___x_1735_);
v___x_1752_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__3(v_snd_1721_, v___x_1750_, v___x_1751_, v___x_1734_);
lean_dec(v_snd_1721_);
if (v_isShared_1724_ == 0)
{
lean_ctor_set(v___x_1723_, 1, v___x_1752_);
v___x_1754_ = v___x_1723_;
goto v_reusejp_1753_;
}
else
{
lean_object* v_reuseFailAlloc_1755_; 
v_reuseFailAlloc_1755_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1755_, 0, v_fst_1720_);
lean_ctor_set(v_reuseFailAlloc_1755_, 1, v___x_1752_);
v___x_1754_ = v_reuseFailAlloc_1755_;
goto v_reusejp_1753_;
}
v_reusejp_1753_:
{
v___y_1728_ = v___x_1754_;
goto v___jp_1727_;
}
}
}
v___jp_1727_:
{
size_t v___x_1729_; size_t v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; 
v___x_1729_ = ((size_t)1ULL);
v___x_1730_ = lean_usize_add(v_i_1714_, v___x_1729_);
v___x_1731_ = l_unsafeCast___redArg(v___y_1728_);
lean_dec_ref(v___y_1728_);
v___x_1732_ = lean_array_uset(v_bs_x27_1726_, v_i_1714_, v___x_1731_);
v_i_1714_ = v___x_1730_;
v_bs_1715_ = v___x_1732_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__0___boxed(lean_object* v_sz_1757_, lean_object* v_i_1758_, lean_object* v_bs_1759_){
_start:
{
size_t v_sz_boxed_1760_; size_t v_i_boxed_1761_; lean_object* v_res_1762_; 
v_sz_boxed_1760_ = lean_unbox_usize(v_sz_1757_);
lean_dec(v_sz_1757_);
v_i_boxed_1761_ = lean_unbox_usize(v_i_1758_);
lean_dec(v_i_1758_);
v_res_1762_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__0(v_sz_boxed_1760_, v_i_boxed_1761_, v_bs_1759_);
return v_res_1762_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__8(size_t v_sz_1763_, size_t v_i_1764_, lean_object* v_bs_1765_){
_start:
{
uint8_t v___x_1766_; 
v___x_1766_ = lean_usize_dec_lt(v_i_1764_, v_sz_1763_);
if (v___x_1766_ == 0)
{
lean_object* v___x_1767_; 
v___x_1767_ = l_unsafeCast___redArg(v_bs_1765_);
lean_dec_ref(v_bs_1765_);
return v___x_1767_;
}
else
{
lean_object* v_v_1768_; lean_object* v___x_1769_; lean_object* v_bs_x27_1770_; lean_object* v___x_1771_; uint8_t v___x_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; size_t v___x_1775_; size_t v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; 
v_v_1768_ = lean_array_uget(v_bs_1765_, v_i_1764_);
v___x_1769_ = lean_unsigned_to_nat(0u);
v_bs_x27_1770_ = lean_array_uset(v_bs_1765_, v_i_1764_, v___x_1769_);
v___x_1771_ = l_unsafeCast___redArg(v_v_1768_);
lean_dec(v_v_1768_);
v___x_1772_ = 0;
v___x_1773_ = lean_box(v___x_1772_);
v___x_1774_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1774_, 0, v___x_1773_);
lean_ctor_set(v___x_1774_, 1, v___x_1771_);
v___x_1775_ = ((size_t)1ULL);
v___x_1776_ = lean_usize_add(v_i_1764_, v___x_1775_);
v___x_1777_ = l_unsafeCast___redArg(v___x_1774_);
lean_dec_ref_known(v___x_1774_, 2);
v___x_1778_ = lean_array_uset(v_bs_x27_1770_, v_i_1764_, v___x_1777_);
v_i_1764_ = v___x_1776_;
v_bs_1765_ = v___x_1778_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__8___boxed(lean_object* v_sz_1780_, lean_object* v_i_1781_, lean_object* v_bs_1782_){
_start:
{
size_t v_sz_boxed_1783_; size_t v_i_boxed_1784_; lean_object* v_res_1785_; 
v_sz_boxed_1783_ = lean_unbox_usize(v_sz_1780_);
lean_dec(v_sz_1780_);
v_i_boxed_1784_ = lean_unbox_usize(v_i_1781_);
lean_dec(v_i_1781_);
v_res_1785_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__8(v_sz_boxed_1783_, v_i_boxed_1784_, v_bs_1782_);
return v_res_1785_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__7(lean_object* v_x_1786_, lean_object* v_x_1787_){
_start:
{
if (lean_obj_tag(v_x_1787_) == 0)
{
lean_inc(v_x_1786_);
return v_x_1786_;
}
else
{
lean_object* v_key_1788_; lean_object* v_value_1789_; lean_object* v_tail_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; 
v_key_1788_ = lean_ctor_get(v_x_1787_, 0);
v_value_1789_ = lean_ctor_get(v_x_1787_, 1);
v_tail_1790_ = lean_ctor_get(v_x_1787_, 2);
v___x_1791_ = l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__7(v_x_1786_, v_tail_1790_);
lean_inc(v_value_1789_);
lean_inc(v_key_1788_);
v___x_1792_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1792_, 0, v_key_1788_);
lean_ctor_set(v___x_1792_, 1, v_value_1789_);
v___x_1793_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1793_, 0, v___x_1792_);
lean_ctor_set(v___x_1793_, 1, v___x_1791_);
return v___x_1793_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__7___boxed(lean_object* v_x_1794_, lean_object* v_x_1795_){
_start:
{
lean_object* v_res_1796_; 
v_res_1796_ = l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__7(v_x_1794_, v_x_1795_);
lean_dec(v_x_1795_);
lean_dec(v_x_1794_);
return v_res_1796_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__8(lean_object* v_as_1797_, size_t v_i_1798_, size_t v_stop_1799_, lean_object* v_b_1800_){
_start:
{
uint8_t v___x_1801_; 
v___x_1801_ = lean_usize_dec_eq(v_i_1798_, v_stop_1799_);
if (v___x_1801_ == 0)
{
size_t v___x_1802_; size_t v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; 
v___x_1802_ = ((size_t)1ULL);
v___x_1803_ = lean_usize_sub(v_i_1798_, v___x_1802_);
v___x_1804_ = lean_array_uget_borrowed(v_as_1797_, v___x_1803_);
v___x_1805_ = l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__7(v_b_1800_, v___x_1804_);
lean_dec(v_b_1800_);
v_i_1798_ = v___x_1803_;
v_b_1800_ = v___x_1805_;
goto _start;
}
else
{
return v_b_1800_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__8___boxed(lean_object* v_as_1807_, lean_object* v_i_1808_, lean_object* v_stop_1809_, lean_object* v_b_1810_){
_start:
{
size_t v_i_boxed_1811_; size_t v_stop_boxed_1812_; lean_object* v_res_1813_; 
v_i_boxed_1811_ = lean_unbox_usize(v_i_1808_);
lean_dec(v_i_1808_);
v_stop_boxed_1812_ = lean_unbox_usize(v_stop_1809_);
lean_dec(v_stop_1809_);
v_res_1813_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__8(v_as_1807_, v_i_boxed_1811_, v_stop_boxed_1812_, v_b_1810_);
lean_dec_ref(v_as_1807_);
return v_res_1813_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Diff_0__Lean_Diff_matchPrefix_go___at___00Lean_Diff_matchPrefix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__4_spec__6(lean_object* v_left_1814_, lean_object* v_right_1815_, lean_object* v_pref_1816_){
_start:
{
lean_object* v_start_1817_; lean_object* v_stop_1818_; lean_object* v_start_1819_; lean_object* v_stop_1820_; lean_object* v_i_1821_; uint8_t v___y_1823_; lean_object* v___x_1837_; uint8_t v___x_1838_; 
v_start_1817_ = lean_ctor_get(v_left_1814_, 1);
v_stop_1818_ = lean_ctor_get(v_left_1814_, 2);
v_start_1819_ = lean_ctor_get(v_right_1815_, 1);
v_stop_1820_ = lean_ctor_get(v_right_1815_, 2);
v_i_1821_ = lean_array_get_size(v_pref_1816_);
v___x_1837_ = lean_nat_sub(v_stop_1818_, v_start_1817_);
v___x_1838_ = lean_nat_dec_lt(v_i_1821_, v___x_1837_);
lean_dec(v___x_1837_);
if (v___x_1838_ == 0)
{
v___y_1823_ = v___x_1838_;
goto v___jp_1822_;
}
else
{
lean_object* v___x_1839_; uint8_t v___x_1840_; 
v___x_1839_ = lean_nat_sub(v_stop_1820_, v_start_1819_);
v___x_1840_ = lean_nat_dec_lt(v_i_1821_, v___x_1839_);
lean_dec(v___x_1839_);
v___y_1823_ = v___x_1840_;
goto v___jp_1822_;
}
v___jp_1822_:
{
if (v___y_1823_ == 0)
{
lean_object* v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; 
v___x_1824_ = l_Subarray_drop___redArg(v_left_1814_, v_i_1821_);
v___x_1825_ = l_Subarray_drop___redArg(v_right_1815_, v_i_1821_);
v___x_1826_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1826_, 0, v___x_1824_);
lean_ctor_set(v___x_1826_, 1, v___x_1825_);
v___x_1827_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1827_, 0, v_pref_1816_);
lean_ctor_set(v___x_1827_, 1, v___x_1826_);
return v___x_1827_;
}
else
{
lean_object* v___x_1828_; lean_object* v___x_1829_; uint8_t v___x_1830_; 
v___x_1828_ = l_Subarray_get___redArg(v_left_1814_, v_i_1821_);
v___x_1829_ = l_Subarray_get___redArg(v_right_1815_, v_i_1821_);
v___x_1830_ = lean_string_dec_eq(v___x_1828_, v___x_1829_);
lean_dec(v___x_1829_);
if (v___x_1830_ == 0)
{
lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; 
lean_dec(v___x_1828_);
v___x_1831_ = l_Subarray_drop___redArg(v_left_1814_, v_i_1821_);
v___x_1832_ = l_Subarray_drop___redArg(v_right_1815_, v_i_1821_);
v___x_1833_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1833_, 0, v___x_1831_);
lean_ctor_set(v___x_1833_, 1, v___x_1832_);
v___x_1834_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1834_, 0, v_pref_1816_);
lean_ctor_set(v___x_1834_, 1, v___x_1833_);
return v___x_1834_;
}
else
{
lean_object* v___x_1835_; 
v___x_1835_ = lean_array_push(v_pref_1816_, v___x_1828_);
v_pref_1816_ = v___x_1835_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_matchPrefix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__4(lean_object* v_left_1841_, lean_object* v_right_1842_){
_start:
{
lean_object* v___x_1843_; lean_object* v___x_1844_; 
v___x_1843_ = ((lean_object*)(l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitWords___closed__0));
v___x_1844_ = l___private_Lean_Util_Diff_0__Lean_Diff_matchPrefix_go___at___00Lean_Diff_matchPrefix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__4_spec__6(v_left_1841_, v_right_1842_, v___x_1843_);
return v___x_1844_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__13_spec__20___redArg(lean_object* v_a_1845_, lean_object* v_x_1846_){
_start:
{
if (lean_obj_tag(v_x_1846_) == 0)
{
lean_object* v___x_1847_; 
v___x_1847_ = lean_box(0);
return v___x_1847_;
}
else
{
lean_object* v_key_1848_; lean_object* v_value_1849_; lean_object* v_tail_1850_; uint8_t v___x_1851_; 
v_key_1848_ = lean_ctor_get(v_x_1846_, 0);
v_value_1849_ = lean_ctor_get(v_x_1846_, 1);
v_tail_1850_ = lean_ctor_get(v_x_1846_, 2);
v___x_1851_ = lean_string_dec_eq(v_key_1848_, v_a_1845_);
if (v___x_1851_ == 0)
{
v_x_1846_ = v_tail_1850_;
goto _start;
}
else
{
lean_object* v___x_1853_; 
lean_inc(v_value_1849_);
v___x_1853_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1853_, 0, v_value_1849_);
return v___x_1853_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__13_spec__20___redArg___boxed(lean_object* v_a_1854_, lean_object* v_x_1855_){
_start:
{
lean_object* v_res_1856_; 
v_res_1856_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__13_spec__20___redArg(v_a_1854_, v_x_1855_);
lean_dec(v_x_1855_);
lean_dec_ref(v_a_1854_);
return v_res_1856_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__13___redArg(lean_object* v_m_1857_, lean_object* v_a_1858_){
_start:
{
lean_object* v_buckets_1859_; lean_object* v___x_1860_; uint64_t v___x_1861_; uint64_t v___x_1862_; uint64_t v___x_1863_; uint64_t v_fold_1864_; uint64_t v___x_1865_; uint64_t v___x_1866_; uint64_t v___x_1867_; size_t v___x_1868_; size_t v___x_1869_; size_t v___x_1870_; size_t v___x_1871_; size_t v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; 
v_buckets_1859_ = lean_ctor_get(v_m_1857_, 1);
v___x_1860_ = lean_array_get_size(v_buckets_1859_);
v___x_1861_ = lean_string_hash(v_a_1858_);
v___x_1862_ = 32ULL;
v___x_1863_ = lean_uint64_shift_right(v___x_1861_, v___x_1862_);
v_fold_1864_ = lean_uint64_xor(v___x_1861_, v___x_1863_);
v___x_1865_ = 16ULL;
v___x_1866_ = lean_uint64_shift_right(v_fold_1864_, v___x_1865_);
v___x_1867_ = lean_uint64_xor(v_fold_1864_, v___x_1866_);
v___x_1868_ = lean_uint64_to_usize(v___x_1867_);
v___x_1869_ = lean_usize_of_nat(v___x_1860_);
v___x_1870_ = ((size_t)1ULL);
v___x_1871_ = lean_usize_sub(v___x_1869_, v___x_1870_);
v___x_1872_ = lean_usize_land(v___x_1868_, v___x_1871_);
v___x_1873_ = lean_array_uget_borrowed(v_buckets_1859_, v___x_1872_);
v___x_1874_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__13_spec__20___redArg(v_a_1858_, v___x_1873_);
return v___x_1874_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__13___redArg___boxed(lean_object* v_m_1875_, lean_object* v_a_1876_){
_start:
{
lean_object* v_res_1877_; 
v_res_1877_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__13___redArg(v_m_1875_, v_a_1876_);
lean_dec_ref(v_a_1876_);
lean_dec_ref(v_m_1875_);
return v_res_1877_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__23_spec__28_spec__29___redArg(lean_object* v_x_1878_, lean_object* v_x_1879_){
_start:
{
if (lean_obj_tag(v_x_1879_) == 0)
{
return v_x_1878_;
}
else
{
lean_object* v_key_1880_; lean_object* v_value_1881_; lean_object* v_tail_1882_; lean_object* v___x_1884_; uint8_t v_isShared_1885_; uint8_t v_isSharedCheck_1905_; 
v_key_1880_ = lean_ctor_get(v_x_1879_, 0);
v_value_1881_ = lean_ctor_get(v_x_1879_, 1);
v_tail_1882_ = lean_ctor_get(v_x_1879_, 2);
v_isSharedCheck_1905_ = !lean_is_exclusive(v_x_1879_);
if (v_isSharedCheck_1905_ == 0)
{
v___x_1884_ = v_x_1879_;
v_isShared_1885_ = v_isSharedCheck_1905_;
goto v_resetjp_1883_;
}
else
{
lean_inc(v_tail_1882_);
lean_inc(v_value_1881_);
lean_inc(v_key_1880_);
lean_dec(v_x_1879_);
v___x_1884_ = lean_box(0);
v_isShared_1885_ = v_isSharedCheck_1905_;
goto v_resetjp_1883_;
}
v_resetjp_1883_:
{
lean_object* v___x_1886_; uint64_t v___x_1887_; uint64_t v___x_1888_; uint64_t v___x_1889_; uint64_t v_fold_1890_; uint64_t v___x_1891_; uint64_t v___x_1892_; uint64_t v___x_1893_; size_t v___x_1894_; size_t v___x_1895_; size_t v___x_1896_; size_t v___x_1897_; size_t v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1901_; 
v___x_1886_ = lean_array_get_size(v_x_1878_);
v___x_1887_ = lean_string_hash(v_key_1880_);
v___x_1888_ = 32ULL;
v___x_1889_ = lean_uint64_shift_right(v___x_1887_, v___x_1888_);
v_fold_1890_ = lean_uint64_xor(v___x_1887_, v___x_1889_);
v___x_1891_ = 16ULL;
v___x_1892_ = lean_uint64_shift_right(v_fold_1890_, v___x_1891_);
v___x_1893_ = lean_uint64_xor(v_fold_1890_, v___x_1892_);
v___x_1894_ = lean_uint64_to_usize(v___x_1893_);
v___x_1895_ = lean_usize_of_nat(v___x_1886_);
v___x_1896_ = ((size_t)1ULL);
v___x_1897_ = lean_usize_sub(v___x_1895_, v___x_1896_);
v___x_1898_ = lean_usize_land(v___x_1894_, v___x_1897_);
v___x_1899_ = lean_array_uget_borrowed(v_x_1878_, v___x_1898_);
lean_inc(v___x_1899_);
if (v_isShared_1885_ == 0)
{
lean_ctor_set(v___x_1884_, 2, v___x_1899_);
v___x_1901_ = v___x_1884_;
goto v_reusejp_1900_;
}
else
{
lean_object* v_reuseFailAlloc_1904_; 
v_reuseFailAlloc_1904_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1904_, 0, v_key_1880_);
lean_ctor_set(v_reuseFailAlloc_1904_, 1, v_value_1881_);
lean_ctor_set(v_reuseFailAlloc_1904_, 2, v___x_1899_);
v___x_1901_ = v_reuseFailAlloc_1904_;
goto v_reusejp_1900_;
}
v_reusejp_1900_:
{
lean_object* v___x_1902_; 
v___x_1902_ = lean_array_uset(v_x_1878_, v___x_1898_, v___x_1901_);
v_x_1878_ = v___x_1902_;
v_x_1879_ = v_tail_1882_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__23_spec__28___redArg(lean_object* v_i_1906_, lean_object* v_source_1907_, lean_object* v_target_1908_){
_start:
{
lean_object* v___x_1909_; uint8_t v___x_1910_; 
v___x_1909_ = lean_array_get_size(v_source_1907_);
v___x_1910_ = lean_nat_dec_lt(v_i_1906_, v___x_1909_);
if (v___x_1910_ == 0)
{
lean_dec_ref(v_source_1907_);
lean_dec(v_i_1906_);
return v_target_1908_;
}
else
{
lean_object* v_es_1911_; lean_object* v___x_1912_; lean_object* v_source_1913_; lean_object* v_target_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; 
v_es_1911_ = lean_array_fget(v_source_1907_, v_i_1906_);
v___x_1912_ = lean_box(0);
v_source_1913_ = lean_array_fset(v_source_1907_, v_i_1906_, v___x_1912_);
v_target_1914_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__23_spec__28_spec__29___redArg(v_target_1908_, v_es_1911_);
v___x_1915_ = lean_unsigned_to_nat(1u);
v___x_1916_ = lean_nat_add(v_i_1906_, v___x_1915_);
lean_dec(v_i_1906_);
v_i_1906_ = v___x_1916_;
v_source_1907_ = v_source_1913_;
v_target_1908_ = v_target_1914_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__23___redArg(lean_object* v_data_1918_){
_start:
{
lean_object* v___x_1919_; lean_object* v___x_1920_; lean_object* v_nbuckets_1921_; lean_object* v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; 
v___x_1919_ = lean_array_get_size(v_data_1918_);
v___x_1920_ = lean_unsigned_to_nat(2u);
v_nbuckets_1921_ = lean_nat_mul(v___x_1919_, v___x_1920_);
v___x_1922_ = lean_unsigned_to_nat(0u);
v___x_1923_ = lean_box(0);
v___x_1924_ = lean_mk_array(v_nbuckets_1921_, v___x_1923_);
v___x_1925_ = lean_array_propagate_mark(v_data_1918_, v___x_1924_);
v___x_1926_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__23_spec__28___redArg(v___x_1922_, v_data_1918_, v___x_1925_);
return v___x_1926_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__24___redArg(lean_object* v_a_1927_, lean_object* v_b_1928_, lean_object* v_x_1929_){
_start:
{
if (lean_obj_tag(v_x_1929_) == 0)
{
lean_dec(v_b_1928_);
lean_dec_ref(v_a_1927_);
return v_x_1929_;
}
else
{
lean_object* v_key_1930_; lean_object* v_value_1931_; lean_object* v_tail_1932_; lean_object* v___x_1934_; uint8_t v_isShared_1935_; uint8_t v_isSharedCheck_1944_; 
v_key_1930_ = lean_ctor_get(v_x_1929_, 0);
v_value_1931_ = lean_ctor_get(v_x_1929_, 1);
v_tail_1932_ = lean_ctor_get(v_x_1929_, 2);
v_isSharedCheck_1944_ = !lean_is_exclusive(v_x_1929_);
if (v_isSharedCheck_1944_ == 0)
{
v___x_1934_ = v_x_1929_;
v_isShared_1935_ = v_isSharedCheck_1944_;
goto v_resetjp_1933_;
}
else
{
lean_inc(v_tail_1932_);
lean_inc(v_value_1931_);
lean_inc(v_key_1930_);
lean_dec(v_x_1929_);
v___x_1934_ = lean_box(0);
v_isShared_1935_ = v_isSharedCheck_1944_;
goto v_resetjp_1933_;
}
v_resetjp_1933_:
{
uint8_t v___x_1936_; 
v___x_1936_ = lean_string_dec_eq(v_key_1930_, v_a_1927_);
if (v___x_1936_ == 0)
{
lean_object* v___x_1937_; lean_object* v___x_1939_; 
v___x_1937_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__24___redArg(v_a_1927_, v_b_1928_, v_tail_1932_);
if (v_isShared_1935_ == 0)
{
lean_ctor_set(v___x_1934_, 2, v___x_1937_);
v___x_1939_ = v___x_1934_;
goto v_reusejp_1938_;
}
else
{
lean_object* v_reuseFailAlloc_1940_; 
v_reuseFailAlloc_1940_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1940_, 0, v_key_1930_);
lean_ctor_set(v_reuseFailAlloc_1940_, 1, v_value_1931_);
lean_ctor_set(v_reuseFailAlloc_1940_, 2, v___x_1937_);
v___x_1939_ = v_reuseFailAlloc_1940_;
goto v_reusejp_1938_;
}
v_reusejp_1938_:
{
return v___x_1939_;
}
}
else
{
lean_object* v___x_1942_; 
lean_dec(v_value_1931_);
lean_dec(v_key_1930_);
if (v_isShared_1935_ == 0)
{
lean_ctor_set(v___x_1934_, 1, v_b_1928_);
lean_ctor_set(v___x_1934_, 0, v_a_1927_);
v___x_1942_ = v___x_1934_;
goto v_reusejp_1941_;
}
else
{
lean_object* v_reuseFailAlloc_1943_; 
v_reuseFailAlloc_1943_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1943_, 0, v_a_1927_);
lean_ctor_set(v_reuseFailAlloc_1943_, 1, v_b_1928_);
lean_ctor_set(v_reuseFailAlloc_1943_, 2, v_tail_1932_);
v___x_1942_ = v_reuseFailAlloc_1943_;
goto v_reusejp_1941_;
}
v_reusejp_1941_:
{
return v___x_1942_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__22___redArg(lean_object* v_a_1945_, lean_object* v_x_1946_){
_start:
{
if (lean_obj_tag(v_x_1946_) == 0)
{
uint8_t v___x_1947_; 
v___x_1947_ = 0;
return v___x_1947_;
}
else
{
lean_object* v_key_1948_; lean_object* v_tail_1949_; uint8_t v___x_1950_; 
v_key_1948_ = lean_ctor_get(v_x_1946_, 0);
v_tail_1949_ = lean_ctor_get(v_x_1946_, 2);
v___x_1950_ = lean_string_dec_eq(v_key_1948_, v_a_1945_);
if (v___x_1950_ == 0)
{
v_x_1946_ = v_tail_1949_;
goto _start;
}
else
{
return v___x_1950_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__22___redArg___boxed(lean_object* v_a_1952_, lean_object* v_x_1953_){
_start:
{
uint8_t v_res_1954_; lean_object* v_r_1955_; 
v_res_1954_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__22___redArg(v_a_1952_, v_x_1953_);
lean_dec(v_x_1953_);
lean_dec_ref(v_a_1952_);
v_r_1955_ = lean_box(v_res_1954_);
return v_r_1955_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14___redArg(lean_object* v_m_1956_, lean_object* v_a_1957_, lean_object* v_b_1958_){
_start:
{
lean_object* v_size_1959_; lean_object* v_buckets_1960_; lean_object* v___x_1962_; uint8_t v_isShared_1963_; uint8_t v_isSharedCheck_2003_; 
v_size_1959_ = lean_ctor_get(v_m_1956_, 0);
v_buckets_1960_ = lean_ctor_get(v_m_1956_, 1);
v_isSharedCheck_2003_ = !lean_is_exclusive(v_m_1956_);
if (v_isSharedCheck_2003_ == 0)
{
v___x_1962_ = v_m_1956_;
v_isShared_1963_ = v_isSharedCheck_2003_;
goto v_resetjp_1961_;
}
else
{
lean_inc(v_buckets_1960_);
lean_inc(v_size_1959_);
lean_dec(v_m_1956_);
v___x_1962_ = lean_box(0);
v_isShared_1963_ = v_isSharedCheck_2003_;
goto v_resetjp_1961_;
}
v_resetjp_1961_:
{
lean_object* v___x_1964_; uint64_t v___x_1965_; uint64_t v___x_1966_; uint64_t v___x_1967_; uint64_t v_fold_1968_; uint64_t v___x_1969_; uint64_t v___x_1970_; uint64_t v___x_1971_; size_t v___x_1972_; size_t v___x_1973_; size_t v___x_1974_; size_t v___x_1975_; size_t v___x_1976_; lean_object* v_bkt_1977_; uint8_t v___x_1978_; 
v___x_1964_ = lean_array_get_size(v_buckets_1960_);
v___x_1965_ = lean_string_hash(v_a_1957_);
v___x_1966_ = 32ULL;
v___x_1967_ = lean_uint64_shift_right(v___x_1965_, v___x_1966_);
v_fold_1968_ = lean_uint64_xor(v___x_1965_, v___x_1967_);
v___x_1969_ = 16ULL;
v___x_1970_ = lean_uint64_shift_right(v_fold_1968_, v___x_1969_);
v___x_1971_ = lean_uint64_xor(v_fold_1968_, v___x_1970_);
v___x_1972_ = lean_uint64_to_usize(v___x_1971_);
v___x_1973_ = lean_usize_of_nat(v___x_1964_);
v___x_1974_ = ((size_t)1ULL);
v___x_1975_ = lean_usize_sub(v___x_1973_, v___x_1974_);
v___x_1976_ = lean_usize_land(v___x_1972_, v___x_1975_);
v_bkt_1977_ = lean_array_uget_borrowed(v_buckets_1960_, v___x_1976_);
v___x_1978_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__22___redArg(v_a_1957_, v_bkt_1977_);
if (v___x_1978_ == 0)
{
lean_object* v___x_1979_; lean_object* v_size_x27_1980_; lean_object* v___x_1981_; lean_object* v_buckets_x27_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; uint8_t v___x_1988_; 
v___x_1979_ = lean_unsigned_to_nat(1u);
v_size_x27_1980_ = lean_nat_add(v_size_1959_, v___x_1979_);
lean_dec(v_size_1959_);
lean_inc(v_bkt_1977_);
v___x_1981_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1981_, 0, v_a_1957_);
lean_ctor_set(v___x_1981_, 1, v_b_1958_);
lean_ctor_set(v___x_1981_, 2, v_bkt_1977_);
v_buckets_x27_1982_ = lean_array_uset(v_buckets_1960_, v___x_1976_, v___x_1981_);
v___x_1983_ = lean_unsigned_to_nat(4u);
v___x_1984_ = lean_nat_mul(v_size_x27_1980_, v___x_1983_);
v___x_1985_ = lean_unsigned_to_nat(3u);
v___x_1986_ = lean_nat_div(v___x_1984_, v___x_1985_);
lean_dec(v___x_1984_);
v___x_1987_ = lean_array_get_size(v_buckets_x27_1982_);
v___x_1988_ = lean_nat_dec_le(v___x_1986_, v___x_1987_);
lean_dec(v___x_1986_);
if (v___x_1988_ == 0)
{
lean_object* v_val_1989_; lean_object* v___x_1991_; 
v_val_1989_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__23___redArg(v_buckets_x27_1982_);
if (v_isShared_1963_ == 0)
{
lean_ctor_set(v___x_1962_, 1, v_val_1989_);
lean_ctor_set(v___x_1962_, 0, v_size_x27_1980_);
v___x_1991_ = v___x_1962_;
goto v_reusejp_1990_;
}
else
{
lean_object* v_reuseFailAlloc_1992_; 
v_reuseFailAlloc_1992_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1992_, 0, v_size_x27_1980_);
lean_ctor_set(v_reuseFailAlloc_1992_, 1, v_val_1989_);
v___x_1991_ = v_reuseFailAlloc_1992_;
goto v_reusejp_1990_;
}
v_reusejp_1990_:
{
return v___x_1991_;
}
}
else
{
lean_object* v___x_1994_; 
if (v_isShared_1963_ == 0)
{
lean_ctor_set(v___x_1962_, 1, v_buckets_x27_1982_);
lean_ctor_set(v___x_1962_, 0, v_size_x27_1980_);
v___x_1994_ = v___x_1962_;
goto v_reusejp_1993_;
}
else
{
lean_object* v_reuseFailAlloc_1995_; 
v_reuseFailAlloc_1995_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1995_, 0, v_size_x27_1980_);
lean_ctor_set(v_reuseFailAlloc_1995_, 1, v_buckets_x27_1982_);
v___x_1994_ = v_reuseFailAlloc_1995_;
goto v_reusejp_1993_;
}
v_reusejp_1993_:
{
return v___x_1994_;
}
}
}
else
{
lean_object* v___x_1996_; lean_object* v_buckets_x27_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2001_; 
lean_inc(v_bkt_1977_);
v___x_1996_ = lean_box(0);
v_buckets_x27_1997_ = lean_array_uset(v_buckets_1960_, v___x_1976_, v___x_1996_);
v___x_1998_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__24___redArg(v_a_1957_, v_b_1958_, v_bkt_1977_);
v___x_1999_ = lean_array_uset(v_buckets_x27_1997_, v___x_1976_, v___x_1998_);
if (v_isShared_1963_ == 0)
{
lean_ctor_set(v___x_1962_, 1, v___x_1999_);
v___x_2001_ = v___x_1962_;
goto v_reusejp_2000_;
}
else
{
lean_object* v_reuseFailAlloc_2002_; 
v_reuseFailAlloc_2002_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2002_, 0, v_size_1959_);
lean_ctor_set(v_reuseFailAlloc_2002_, 1, v___x_1999_);
v___x_2001_ = v_reuseFailAlloc_2002_;
goto v_reusejp_2000_;
}
v_reusejp_2000_:
{
return v___x_2001_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9___redArg(lean_object* v_histogram_2004_, lean_object* v_index_2005_, lean_object* v_val_2006_){
_start:
{
lean_object* v___x_2007_; 
v___x_2007_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__13___redArg(v_histogram_2004_, v_val_2006_);
if (lean_obj_tag(v___x_2007_) == 0)
{
lean_object* v___x_2008_; lean_object* v___x_2009_; lean_object* v___x_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; lean_object* v___x_2013_; 
v___x_2008_ = lean_unsigned_to_nat(0u);
v___x_2009_ = lean_box(0);
v___x_2010_ = lean_unsigned_to_nat(1u);
v___x_2011_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2011_, 0, v_index_2005_);
v___x_2012_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2012_, 0, v___x_2008_);
lean_ctor_set(v___x_2012_, 1, v___x_2009_);
lean_ctor_set(v___x_2012_, 2, v___x_2010_);
lean_ctor_set(v___x_2012_, 3, v___x_2011_);
v___x_2013_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14___redArg(v_histogram_2004_, v_val_2006_, v___x_2012_);
return v___x_2013_;
}
else
{
lean_object* v_val_2014_; lean_object* v___x_2016_; uint8_t v_isShared_2017_; uint8_t v_isSharedCheck_2035_; 
v_val_2014_ = lean_ctor_get(v___x_2007_, 0);
v_isSharedCheck_2035_ = !lean_is_exclusive(v___x_2007_);
if (v_isSharedCheck_2035_ == 0)
{
v___x_2016_ = v___x_2007_;
v_isShared_2017_ = v_isSharedCheck_2035_;
goto v_resetjp_2015_;
}
else
{
lean_inc(v_val_2014_);
lean_dec(v___x_2007_);
v___x_2016_ = lean_box(0);
v_isShared_2017_ = v_isSharedCheck_2035_;
goto v_resetjp_2015_;
}
v_resetjp_2015_:
{
lean_object* v_leftCount_2018_; lean_object* v_leftIndex_2019_; lean_object* v___x_2021_; uint8_t v_isShared_2022_; uint8_t v_isSharedCheck_2032_; 
v_leftCount_2018_ = lean_ctor_get(v_val_2014_, 0);
v_leftIndex_2019_ = lean_ctor_get(v_val_2014_, 1);
v_isSharedCheck_2032_ = !lean_is_exclusive(v_val_2014_);
if (v_isSharedCheck_2032_ == 0)
{
lean_object* v_unused_2033_; lean_object* v_unused_2034_; 
v_unused_2033_ = lean_ctor_get(v_val_2014_, 3);
lean_dec(v_unused_2033_);
v_unused_2034_ = lean_ctor_get(v_val_2014_, 2);
lean_dec(v_unused_2034_);
v___x_2021_ = v_val_2014_;
v_isShared_2022_ = v_isSharedCheck_2032_;
goto v_resetjp_2020_;
}
else
{
lean_inc(v_leftIndex_2019_);
lean_inc(v_leftCount_2018_);
lean_dec(v_val_2014_);
v___x_2021_ = lean_box(0);
v_isShared_2022_ = v_isSharedCheck_2032_;
goto v_resetjp_2020_;
}
v_resetjp_2020_:
{
lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2026_; 
v___x_2023_ = lean_unsigned_to_nat(1u);
v___x_2024_ = lean_nat_add(v_leftCount_2018_, v___x_2023_);
if (v_isShared_2017_ == 0)
{
lean_ctor_set(v___x_2016_, 0, v_index_2005_);
v___x_2026_ = v___x_2016_;
goto v_reusejp_2025_;
}
else
{
lean_object* v_reuseFailAlloc_2031_; 
v_reuseFailAlloc_2031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2031_, 0, v_index_2005_);
v___x_2026_ = v_reuseFailAlloc_2031_;
goto v_reusejp_2025_;
}
v_reusejp_2025_:
{
lean_object* v___x_2028_; 
if (v_isShared_2022_ == 0)
{
lean_ctor_set(v___x_2021_, 3, v___x_2026_);
lean_ctor_set(v___x_2021_, 2, v___x_2024_);
v___x_2028_ = v___x_2021_;
goto v_reusejp_2027_;
}
else
{
lean_object* v_reuseFailAlloc_2030_; 
v_reuseFailAlloc_2030_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2030_, 0, v_leftCount_2018_);
lean_ctor_set(v_reuseFailAlloc_2030_, 1, v_leftIndex_2019_);
lean_ctor_set(v_reuseFailAlloc_2030_, 2, v___x_2024_);
lean_ctor_set(v_reuseFailAlloc_2030_, 3, v___x_2026_);
v___x_2028_ = v_reuseFailAlloc_2030_;
goto v_reusejp_2027_;
}
v_reusejp_2027_:
{
lean_object* v___x_2029_; 
v___x_2029_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14___redArg(v_histogram_2004_, v_val_2006_, v___x_2028_);
return v___x_2029_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__10___redArg(lean_object* v_upperBound_2036_, lean_object* v___x_2037_, lean_object* v_fst_2038_, lean_object* v___x_2039_, lean_object* v_a_2040_, lean_object* v_b_2041_){
_start:
{
uint8_t v___x_2042_; 
v___x_2042_ = lean_nat_dec_lt(v_a_2040_, v_upperBound_2036_);
if (v___x_2042_ == 0)
{
lean_dec(v_a_2040_);
return v_b_2041_;
}
else
{
lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; 
v___x_2043_ = l_Subarray_get___redArg(v_fst_2038_, v_a_2040_);
lean_inc(v_a_2040_);
v___x_2044_ = l_Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9___redArg(v_b_2041_, v_a_2040_, v___x_2043_);
v___x_2045_ = lean_unsigned_to_nat(1u);
v___x_2046_ = lean_nat_add(v_a_2040_, v___x_2045_);
lean_dec(v_a_2040_);
v_a_2040_ = v___x_2046_;
v_b_2041_ = v___x_2044_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__10___redArg___boxed(lean_object* v_upperBound_2048_, lean_object* v___x_2049_, lean_object* v_fst_2050_, lean_object* v___x_2051_, lean_object* v_a_2052_, lean_object* v_b_2053_){
_start:
{
lean_object* v_res_2054_; 
v_res_2054_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__10___redArg(v_upperBound_2048_, v___x_2049_, v_fst_2050_, v___x_2051_, v_a_2052_, v_b_2053_);
lean_dec(v___x_2051_);
lean_dec_ref(v_fst_2050_);
lean_dec(v___x_2049_);
lean_dec(v_upperBound_2048_);
return v_res_2054_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__6___redArg(lean_object* v_as_x27_2055_, lean_object* v_b_2056_){
_start:
{
if (lean_obj_tag(v_as_x27_2055_) == 0)
{
return v_b_2056_;
}
else
{
lean_object* v_head_2057_; lean_object* v_snd_2058_; lean_object* v_leftIndex_2059_; 
v_head_2057_ = lean_ctor_get(v_as_x27_2055_, 0);
v_snd_2058_ = lean_ctor_get(v_head_2057_, 1);
v_leftIndex_2059_ = lean_ctor_get(v_snd_2058_, 1);
if (lean_obj_tag(v_leftIndex_2059_) == 1)
{
lean_object* v_rightIndex_2060_; 
v_rightIndex_2060_ = lean_ctor_get(v_snd_2058_, 3);
if (lean_obj_tag(v_rightIndex_2060_) == 1)
{
if (lean_obj_tag(v_b_2056_) == 0)
{
lean_object* v_tail_2061_; lean_object* v_fst_2062_; lean_object* v_leftCount_2063_; lean_object* v_rightCount_2064_; lean_object* v_val_2065_; lean_object* v_val_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; 
v_tail_2061_ = lean_ctor_get(v_as_x27_2055_, 1);
v_fst_2062_ = lean_ctor_get(v_head_2057_, 0);
v_leftCount_2063_ = lean_ctor_get(v_snd_2058_, 0);
v_rightCount_2064_ = lean_ctor_get(v_snd_2058_, 2);
v_val_2065_ = lean_ctor_get(v_leftIndex_2059_, 0);
v_val_2066_ = lean_ctor_get(v_rightIndex_2060_, 0);
v___x_2067_ = lean_nat_add(v_leftCount_2063_, v_rightCount_2064_);
lean_inc(v_val_2066_);
lean_inc(v_val_2065_);
v___x_2068_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2068_, 0, v_val_2065_);
lean_ctor_set(v___x_2068_, 1, v_val_2066_);
lean_inc(v_fst_2062_);
v___x_2069_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2069_, 0, v_fst_2062_);
lean_ctor_set(v___x_2069_, 1, v___x_2068_);
v___x_2070_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2070_, 0, v___x_2067_);
lean_ctor_set(v___x_2070_, 1, v___x_2069_);
v___x_2071_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2071_, 0, v___x_2070_);
v_as_x27_2055_ = v_tail_2061_;
v_b_2056_ = v___x_2071_;
goto _start;
}
else
{
lean_object* v_val_2073_; lean_object* v_tail_2074_; lean_object* v_fst_2075_; lean_object* v_leftCount_2076_; lean_object* v_rightCount_2077_; lean_object* v_val_2078_; lean_object* v_val_2079_; lean_object* v_fst_2080_; lean_object* v___x_2082_; uint8_t v_isShared_2083_; uint8_t v_isSharedCheck_2101_; 
v_val_2073_ = lean_ctor_get(v_b_2056_, 0);
lean_inc(v_val_2073_);
v_tail_2074_ = lean_ctor_get(v_as_x27_2055_, 1);
v_fst_2075_ = lean_ctor_get(v_head_2057_, 0);
v_leftCount_2076_ = lean_ctor_get(v_snd_2058_, 0);
v_rightCount_2077_ = lean_ctor_get(v_snd_2058_, 2);
v_val_2078_ = lean_ctor_get(v_leftIndex_2059_, 0);
v_val_2079_ = lean_ctor_get(v_rightIndex_2060_, 0);
v_fst_2080_ = lean_ctor_get(v_val_2073_, 0);
v_isSharedCheck_2101_ = !lean_is_exclusive(v_val_2073_);
if (v_isSharedCheck_2101_ == 0)
{
lean_object* v_unused_2102_; 
v_unused_2102_ = lean_ctor_get(v_val_2073_, 1);
lean_dec(v_unused_2102_);
v___x_2082_ = v_val_2073_;
v_isShared_2083_ = v_isSharedCheck_2101_;
goto v_resetjp_2081_;
}
else
{
lean_inc(v_fst_2080_);
lean_dec(v_val_2073_);
v___x_2082_ = lean_box(0);
v_isShared_2083_ = v_isSharedCheck_2101_;
goto v_resetjp_2081_;
}
v_resetjp_2081_:
{
lean_object* v___x_2084_; uint8_t v___x_2085_; 
v___x_2084_ = lean_nat_add(v_leftCount_2076_, v_rightCount_2077_);
v___x_2085_ = lean_nat_dec_lt(v___x_2084_, v_fst_2080_);
lean_dec(v_fst_2080_);
if (v___x_2085_ == 0)
{
lean_dec(v___x_2084_);
lean_del_object(v___x_2082_);
v_as_x27_2055_ = v_tail_2074_;
goto _start;
}
else
{
lean_object* v___x_2088_; uint8_t v_isShared_2089_; uint8_t v_isSharedCheck_2099_; 
v_isSharedCheck_2099_ = !lean_is_exclusive(v_b_2056_);
if (v_isSharedCheck_2099_ == 0)
{
lean_object* v_unused_2100_; 
v_unused_2100_ = lean_ctor_get(v_b_2056_, 0);
lean_dec(v_unused_2100_);
v___x_2088_ = v_b_2056_;
v_isShared_2089_ = v_isSharedCheck_2099_;
goto v_resetjp_2087_;
}
else
{
lean_dec(v_b_2056_);
v___x_2088_ = lean_box(0);
v_isShared_2089_ = v_isSharedCheck_2099_;
goto v_resetjp_2087_;
}
v_resetjp_2087_:
{
lean_object* v___x_2091_; 
lean_inc(v_val_2079_);
lean_inc(v_val_2078_);
if (v_isShared_2083_ == 0)
{
lean_ctor_set(v___x_2082_, 1, v_val_2079_);
lean_ctor_set(v___x_2082_, 0, v_val_2078_);
v___x_2091_ = v___x_2082_;
goto v_reusejp_2090_;
}
else
{
lean_object* v_reuseFailAlloc_2098_; 
v_reuseFailAlloc_2098_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2098_, 0, v_val_2078_);
lean_ctor_set(v_reuseFailAlloc_2098_, 1, v_val_2079_);
v___x_2091_ = v_reuseFailAlloc_2098_;
goto v_reusejp_2090_;
}
v_reusejp_2090_:
{
lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2095_; 
lean_inc(v_fst_2075_);
v___x_2092_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2092_, 0, v_fst_2075_);
lean_ctor_set(v___x_2092_, 1, v___x_2091_);
v___x_2093_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2093_, 0, v___x_2084_);
lean_ctor_set(v___x_2093_, 1, v___x_2092_);
if (v_isShared_2089_ == 0)
{
lean_ctor_set(v___x_2088_, 0, v___x_2093_);
v___x_2095_ = v___x_2088_;
goto v_reusejp_2094_;
}
else
{
lean_object* v_reuseFailAlloc_2097_; 
v_reuseFailAlloc_2097_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2097_, 0, v___x_2093_);
v___x_2095_ = v_reuseFailAlloc_2097_;
goto v_reusejp_2094_;
}
v_reusejp_2094_:
{
v_as_x27_2055_ = v_tail_2074_;
v_b_2056_ = v___x_2095_;
goto _start;
}
}
}
}
}
}
}
else
{
lean_object* v_tail_2103_; 
v_tail_2103_ = lean_ctor_get(v_as_x27_2055_, 1);
v_as_x27_2055_ = v_tail_2103_;
goto _start;
}
}
else
{
lean_object* v_tail_2105_; 
v_tail_2105_ = lean_ctor_get(v_as_x27_2055_, 1);
v_as_x27_2055_ = v_tail_2105_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__6___redArg___boxed(lean_object* v_as_x27_2107_, lean_object* v_b_2108_){
_start:
{
lean_object* v_res_2109_; 
v_res_2109_ = l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__6___redArg(v_as_x27_2107_, v_b_2108_);
lean_dec(v_as_x27_2107_);
return v_res_2109_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___at___00Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__5_spec__8_spec__14___redArg(lean_object* v_a_2110_, lean_object* v_b_2111_){
_start:
{
lean_object* v_array_2112_; lean_object* v_start_2113_; lean_object* v_stop_2114_; lean_object* v___x_2116_; uint8_t v_isShared_2117_; uint8_t v_isSharedCheck_2127_; 
v_array_2112_ = lean_ctor_get(v_a_2110_, 0);
v_start_2113_ = lean_ctor_get(v_a_2110_, 1);
v_stop_2114_ = lean_ctor_get(v_a_2110_, 2);
v_isSharedCheck_2127_ = !lean_is_exclusive(v_a_2110_);
if (v_isSharedCheck_2127_ == 0)
{
v___x_2116_ = v_a_2110_;
v_isShared_2117_ = v_isSharedCheck_2127_;
goto v_resetjp_2115_;
}
else
{
lean_inc(v_stop_2114_);
lean_inc(v_start_2113_);
lean_inc(v_array_2112_);
lean_dec(v_a_2110_);
v___x_2116_ = lean_box(0);
v_isShared_2117_ = v_isSharedCheck_2127_;
goto v_resetjp_2115_;
}
v_resetjp_2115_:
{
uint8_t v___x_2118_; 
v___x_2118_ = lean_nat_dec_lt(v_start_2113_, v_stop_2114_);
if (v___x_2118_ == 0)
{
lean_del_object(v___x_2116_);
lean_dec(v_stop_2114_);
lean_dec(v_start_2113_);
lean_dec_ref(v_array_2112_);
return v_b_2111_;
}
else
{
lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2122_; 
v___x_2119_ = lean_unsigned_to_nat(1u);
v___x_2120_ = lean_nat_add(v_start_2113_, v___x_2119_);
lean_inc_ref(v_array_2112_);
if (v_isShared_2117_ == 0)
{
lean_ctor_set(v___x_2116_, 1, v___x_2120_);
v___x_2122_ = v___x_2116_;
goto v_reusejp_2121_;
}
else
{
lean_object* v_reuseFailAlloc_2126_; 
v_reuseFailAlloc_2126_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2126_, 0, v_array_2112_);
lean_ctor_set(v_reuseFailAlloc_2126_, 1, v___x_2120_);
lean_ctor_set(v_reuseFailAlloc_2126_, 2, v_stop_2114_);
v___x_2122_ = v_reuseFailAlloc_2126_;
goto v_reusejp_2121_;
}
v_reusejp_2121_:
{
lean_object* v___x_2123_; lean_object* v___x_2124_; 
v___x_2123_ = lean_array_fget(v_array_2112_, v_start_2113_);
lean_dec(v_start_2113_);
lean_dec_ref(v_array_2112_);
v___x_2124_ = lean_array_push(v_b_2111_, v___x_2123_);
v_a_2110_ = v___x_2122_;
v_b_2111_ = v___x_2124_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___at___00Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__5_spec__8(lean_object* v_left_2128_, lean_object* v_right_2129_, lean_object* v_i_2130_){
_start:
{
lean_object* v_start_2131_; lean_object* v_stop_2132_; lean_object* v_start_2133_; lean_object* v_stop_2134_; lean_object* v___x_2135_; uint8_t v___x_2136_; lean_object* v___x_2137_; uint8_t v___y_2139_; 
v_start_2131_ = lean_ctor_get(v_left_2128_, 1);
v_stop_2132_ = lean_ctor_get(v_left_2128_, 2);
v_start_2133_ = lean_ctor_get(v_right_2129_, 1);
v_stop_2134_ = lean_ctor_get(v_right_2129_, 2);
v___x_2135_ = lean_nat_sub(v_stop_2132_, v_start_2131_);
v___x_2136_ = lean_nat_dec_lt(v_i_2130_, v___x_2135_);
v___x_2137_ = lean_nat_sub(v_stop_2134_, v_start_2133_);
if (v___x_2136_ == 0)
{
v___y_2139_ = v___x_2136_;
goto v___jp_2138_;
}
else
{
uint8_t v___x_2166_; 
v___x_2166_ = lean_nat_dec_lt(v_i_2130_, v___x_2137_);
v___y_2139_ = v___x_2166_;
goto v___jp_2138_;
}
v___jp_2138_:
{
if (v___y_2139_ == 0)
{
lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; 
v___x_2140_ = lean_nat_sub(v___x_2135_, v_i_2130_);
lean_dec(v___x_2135_);
lean_inc_ref(v_left_2128_);
v___x_2141_ = l_Subarray_take___redArg(v_left_2128_, v___x_2140_);
v___x_2142_ = lean_nat_sub(v___x_2137_, v_i_2130_);
lean_dec(v_i_2130_);
lean_dec(v___x_2137_);
v___x_2143_ = l_Subarray_take___redArg(v_right_2129_, v___x_2142_);
lean_dec(v___x_2142_);
v___x_2144_ = l_Subarray_drop___redArg(v_left_2128_, v___x_2140_);
lean_dec(v___x_2140_);
v___x_2145_ = ((lean_object*)(l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitWords___closed__0));
v___x_2146_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___at___00Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__5_spec__8_spec__14___redArg(v___x_2144_, v___x_2145_);
v___x_2147_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2147_, 0, v___x_2143_);
lean_ctor_set(v___x_2147_, 1, v___x_2146_);
v___x_2148_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2148_, 0, v___x_2141_);
lean_ctor_set(v___x_2148_, 1, v___x_2147_);
return v___x_2148_;
}
else
{
lean_object* v___x_2149_; lean_object* v___x_2150_; lean_object* v___x_2151_; lean_object* v___x_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; uint8_t v___x_2156_; 
v___x_2149_ = lean_nat_sub(v___x_2135_, v_i_2130_);
lean_dec(v___x_2135_);
v___x_2150_ = lean_unsigned_to_nat(1u);
v___x_2151_ = lean_nat_sub(v___x_2149_, v___x_2150_);
v___x_2152_ = l_Subarray_get___redArg(v_left_2128_, v___x_2151_);
lean_dec(v___x_2151_);
v___x_2153_ = lean_nat_sub(v___x_2137_, v_i_2130_);
lean_dec(v___x_2137_);
v___x_2154_ = lean_nat_sub(v___x_2153_, v___x_2150_);
v___x_2155_ = l_Subarray_get___redArg(v_right_2129_, v___x_2154_);
lean_dec(v___x_2154_);
v___x_2156_ = lean_string_dec_eq(v___x_2152_, v___x_2155_);
lean_dec(v___x_2155_);
lean_dec(v___x_2152_);
if (v___x_2156_ == 0)
{
lean_object* v___x_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; lean_object* v___x_2162_; lean_object* v___x_2163_; 
lean_dec(v_i_2130_);
lean_inc_ref(v_left_2128_);
v___x_2157_ = l_Subarray_take___redArg(v_left_2128_, v___x_2149_);
v___x_2158_ = l_Subarray_take___redArg(v_right_2129_, v___x_2153_);
lean_dec(v___x_2153_);
v___x_2159_ = l_Subarray_drop___redArg(v_left_2128_, v___x_2149_);
lean_dec(v___x_2149_);
v___x_2160_ = ((lean_object*)(l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitWords___closed__0));
v___x_2161_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___at___00Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__5_spec__8_spec__14___redArg(v___x_2159_, v___x_2160_);
v___x_2162_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2162_, 0, v___x_2158_);
lean_ctor_set(v___x_2162_, 1, v___x_2161_);
v___x_2163_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2163_, 0, v___x_2157_);
lean_ctor_set(v___x_2163_, 1, v___x_2162_);
return v___x_2163_;
}
else
{
lean_object* v___x_2164_; 
lean_dec(v___x_2153_);
lean_dec(v___x_2149_);
v___x_2164_ = lean_nat_add(v_i_2130_, v___x_2150_);
lean_dec(v_i_2130_);
v_i_2130_ = v___x_2164_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__5(lean_object* v_left_2167_, lean_object* v_right_2168_){
_start:
{
lean_object* v___x_2169_; lean_object* v___x_2170_; 
v___x_2169_ = lean_unsigned_to_nat(0u);
v___x_2170_ = l___private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___at___00Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__5_spec__8(v_left_2167_, v_right_2168_, v___x_2169_);
return v___x_2170_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addLeft___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__11___redArg(lean_object* v_histogram_2171_, lean_object* v_index_2172_, lean_object* v_val_2173_){
_start:
{
lean_object* v___x_2174_; 
v___x_2174_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__13___redArg(v_histogram_2171_, v_val_2173_);
if (lean_obj_tag(v___x_2174_) == 0)
{
lean_object* v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; 
v___x_2175_ = lean_unsigned_to_nat(1u);
v___x_2176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2176_, 0, v_index_2172_);
v___x_2177_ = lean_unsigned_to_nat(0u);
v___x_2178_ = lean_box(0);
v___x_2179_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2179_, 0, v___x_2175_);
lean_ctor_set(v___x_2179_, 1, v___x_2176_);
lean_ctor_set(v___x_2179_, 2, v___x_2177_);
lean_ctor_set(v___x_2179_, 3, v___x_2178_);
v___x_2180_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14___redArg(v_histogram_2171_, v_val_2173_, v___x_2179_);
return v___x_2180_;
}
else
{
lean_object* v_val_2181_; lean_object* v___x_2183_; uint8_t v_isShared_2184_; uint8_t v_isSharedCheck_2202_; 
v_val_2181_ = lean_ctor_get(v___x_2174_, 0);
v_isSharedCheck_2202_ = !lean_is_exclusive(v___x_2174_);
if (v_isSharedCheck_2202_ == 0)
{
v___x_2183_ = v___x_2174_;
v_isShared_2184_ = v_isSharedCheck_2202_;
goto v_resetjp_2182_;
}
else
{
lean_inc(v_val_2181_);
lean_dec(v___x_2174_);
v___x_2183_ = lean_box(0);
v_isShared_2184_ = v_isSharedCheck_2202_;
goto v_resetjp_2182_;
}
v_resetjp_2182_:
{
lean_object* v_leftCount_2185_; lean_object* v_rightCount_2186_; lean_object* v_rightIndex_2187_; lean_object* v___x_2189_; uint8_t v_isShared_2190_; uint8_t v_isSharedCheck_2200_; 
v_leftCount_2185_ = lean_ctor_get(v_val_2181_, 0);
v_rightCount_2186_ = lean_ctor_get(v_val_2181_, 2);
v_rightIndex_2187_ = lean_ctor_get(v_val_2181_, 3);
v_isSharedCheck_2200_ = !lean_is_exclusive(v_val_2181_);
if (v_isSharedCheck_2200_ == 0)
{
lean_object* v_unused_2201_; 
v_unused_2201_ = lean_ctor_get(v_val_2181_, 1);
lean_dec(v_unused_2201_);
v___x_2189_ = v_val_2181_;
v_isShared_2190_ = v_isSharedCheck_2200_;
goto v_resetjp_2188_;
}
else
{
lean_inc(v_rightIndex_2187_);
lean_inc(v_rightCount_2186_);
lean_inc(v_leftCount_2185_);
lean_dec(v_val_2181_);
v___x_2189_ = lean_box(0);
v_isShared_2190_ = v_isSharedCheck_2200_;
goto v_resetjp_2188_;
}
v_resetjp_2188_:
{
lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2194_; 
v___x_2191_ = lean_unsigned_to_nat(1u);
v___x_2192_ = lean_nat_add(v_leftCount_2185_, v___x_2191_);
lean_dec(v_leftCount_2185_);
if (v_isShared_2184_ == 0)
{
lean_ctor_set(v___x_2183_, 0, v_index_2172_);
v___x_2194_ = v___x_2183_;
goto v_reusejp_2193_;
}
else
{
lean_object* v_reuseFailAlloc_2199_; 
v_reuseFailAlloc_2199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2199_, 0, v_index_2172_);
v___x_2194_ = v_reuseFailAlloc_2199_;
goto v_reusejp_2193_;
}
v_reusejp_2193_:
{
lean_object* v___x_2196_; 
if (v_isShared_2190_ == 0)
{
lean_ctor_set(v___x_2189_, 1, v___x_2194_);
lean_ctor_set(v___x_2189_, 0, v___x_2192_);
v___x_2196_ = v___x_2189_;
goto v_reusejp_2195_;
}
else
{
lean_object* v_reuseFailAlloc_2198_; 
v_reuseFailAlloc_2198_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2198_, 0, v___x_2192_);
lean_ctor_set(v_reuseFailAlloc_2198_, 1, v___x_2194_);
lean_ctor_set(v_reuseFailAlloc_2198_, 2, v_rightCount_2186_);
lean_ctor_set(v_reuseFailAlloc_2198_, 3, v_rightIndex_2187_);
v___x_2196_ = v_reuseFailAlloc_2198_;
goto v_reusejp_2195_;
}
v_reusejp_2195_:
{
lean_object* v___x_2197_; 
v___x_2197_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14___redArg(v_histogram_2171_, v_val_2173_, v___x_2196_);
return v___x_2197_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__12___redArg(lean_object* v_upperBound_2203_, lean_object* v_fst_2204_, lean_object* v___x_2205_, lean_object* v_fst_2206_, lean_object* v_a_2207_, lean_object* v_b_2208_){
_start:
{
uint8_t v___x_2209_; 
v___x_2209_ = lean_nat_dec_lt(v_a_2207_, v_upperBound_2203_);
if (v___x_2209_ == 0)
{
lean_dec(v_a_2207_);
return v_b_2208_;
}
else
{
lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; 
v___x_2210_ = l_Subarray_get___redArg(v_fst_2206_, v_a_2207_);
lean_inc(v_a_2207_);
v___x_2211_ = l_Lean_Diff_Histogram_addLeft___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__11___redArg(v_b_2208_, v_a_2207_, v___x_2210_);
v___x_2212_ = lean_unsigned_to_nat(1u);
v___x_2213_ = lean_nat_add(v_a_2207_, v___x_2212_);
lean_dec(v_a_2207_);
v_a_2207_ = v___x_2213_;
v_b_2208_ = v___x_2211_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__12___redArg___boxed(lean_object* v_upperBound_2215_, lean_object* v_fst_2216_, lean_object* v___x_2217_, lean_object* v_fst_2218_, lean_object* v_a_2219_, lean_object* v_b_2220_){
_start:
{
lean_object* v_res_2221_; 
v_res_2221_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__12___redArg(v_upperBound_2215_, v_fst_2216_, v___x_2217_, v_fst_2218_, v_a_2219_, v_b_2220_);
lean_dec_ref(v_fst_2218_);
lean_dec(v___x_2217_);
lean_dec_ref(v_fst_2216_);
lean_dec(v_upperBound_2215_);
return v_res_2221_;
}
}
static lean_object* _init_l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3___closed__0(void){
_start:
{
lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; 
v___x_2222_ = lean_box(0);
v___x_2223_ = lean_unsigned_to_nat(16u);
v___x_2224_ = lean_mk_array(v___x_2223_, v___x_2222_);
return v___x_2224_;
}
}
static lean_object* _init_l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3___closed__1(void){
_start:
{
lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v_hist_2227_; 
v___x_2225_ = lean_obj_once(&l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3___closed__0, &l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3___closed__0_once, _init_l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3___closed__0);
v___x_2226_ = lean_unsigned_to_nat(0u);
v_hist_2227_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_hist_2227_, 0, v___x_2226_);
lean_ctor_set(v_hist_2227_, 1, v___x_2225_);
return v_hist_2227_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3(lean_object* v_left_2228_, lean_object* v_right_2229_){
_start:
{
lean_object* v___x_2230_; lean_object* v_snd_2231_; lean_object* v_fst_2232_; lean_object* v_fst_2233_; lean_object* v_snd_2234_; lean_object* v___x_2235_; lean_object* v_snd_2236_; lean_object* v_fst_2237_; lean_object* v_fst_2238_; lean_object* v_snd_2239_; lean_object* v_start_2240_; lean_object* v_stop_2241_; lean_object* v___x_2242_; lean_object* v_hist_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v_start_2246_; lean_object* v_stop_2247_; lean_object* v___x_2248_; lean_object* v___x_2249_; lean_object* v_buckets_2250_; lean_object* v___x_2251_; lean_object* v___y_2253_; lean_object* v___x_2279_; lean_object* v___x_2280_; uint8_t v___x_2281_; 
v___x_2230_ = l_Lean_Diff_matchPrefix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__4(v_left_2228_, v_right_2229_);
v_snd_2231_ = lean_ctor_get(v___x_2230_, 1);
lean_inc(v_snd_2231_);
v_fst_2232_ = lean_ctor_get(v___x_2230_, 0);
lean_inc(v_fst_2232_);
lean_dec_ref(v___x_2230_);
v_fst_2233_ = lean_ctor_get(v_snd_2231_, 0);
lean_inc(v_fst_2233_);
v_snd_2234_ = lean_ctor_get(v_snd_2231_, 1);
lean_inc(v_snd_2234_);
lean_dec(v_snd_2231_);
v___x_2235_ = l_Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__5(v_fst_2233_, v_snd_2234_);
v_snd_2236_ = lean_ctor_get(v___x_2235_, 1);
lean_inc(v_snd_2236_);
v_fst_2237_ = lean_ctor_get(v___x_2235_, 0);
lean_inc(v_fst_2237_);
lean_dec_ref(v___x_2235_);
v_fst_2238_ = lean_ctor_get(v_snd_2236_, 0);
lean_inc(v_fst_2238_);
v_snd_2239_ = lean_ctor_get(v_snd_2236_, 1);
lean_inc(v_snd_2239_);
lean_dec(v_snd_2236_);
v_start_2240_ = lean_ctor_get(v_fst_2237_, 1);
v_stop_2241_ = lean_ctor_get(v_fst_2237_, 2);
v___x_2242_ = lean_unsigned_to_nat(0u);
v_hist_2243_ = lean_obj_once(&l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3___closed__1, &l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3___closed__1_once, _init_l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3___closed__1);
v___x_2244_ = lean_nat_sub(v_stop_2241_, v_start_2240_);
v___x_2245_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__12___redArg(v___x_2244_, v_fst_2238_, v___x_2244_, v_fst_2237_, v___x_2242_, v_hist_2243_);
v_start_2246_ = lean_ctor_get(v_fst_2238_, 1);
v_stop_2247_ = lean_ctor_get(v_fst_2238_, 2);
v___x_2248_ = lean_nat_sub(v_stop_2247_, v_start_2246_);
v___x_2249_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__10___redArg(v___x_2248_, v___x_2248_, v_fst_2238_, v___x_2244_, v___x_2242_, v___x_2245_);
lean_dec(v___x_2244_);
lean_dec(v___x_2248_);
v_buckets_2250_ = lean_ctor_get(v___x_2249_, 1);
lean_inc_ref(v_buckets_2250_);
lean_dec_ref(v___x_2249_);
v___x_2251_ = lean_box(0);
v___x_2279_ = lean_box(0);
v___x_2280_ = lean_array_get_size(v_buckets_2250_);
v___x_2281_ = lean_nat_dec_lt(v___x_2242_, v___x_2280_);
if (v___x_2281_ == 0)
{
lean_dec_ref(v_buckets_2250_);
v___y_2253_ = v___x_2279_;
goto v___jp_2252_;
}
else
{
size_t v___x_2282_; size_t v___x_2283_; lean_object* v___x_2284_; 
v___x_2282_ = lean_usize_of_nat(v___x_2280_);
v___x_2283_ = ((size_t)0ULL);
v___x_2284_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__8(v_buckets_2250_, v___x_2282_, v___x_2283_, v___x_2279_);
lean_dec_ref(v_buckets_2250_);
v___y_2253_ = v___x_2284_;
goto v___jp_2252_;
}
v___jp_2252_:
{
lean_object* v___x_2254_; 
v___x_2254_ = l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__6___redArg(v___y_2253_, v___x_2251_);
lean_dec(v___y_2253_);
if (lean_obj_tag(v___x_2254_) == 1)
{
lean_object* v_val_2255_; lean_object* v_snd_2256_; lean_object* v_snd_2257_; lean_object* v_fst_2258_; lean_object* v_fst_2259_; lean_object* v_snd_2260_; lean_object* v___x_2261_; lean_object* v_fst_2262_; lean_object* v_snd_2263_; lean_object* v___x_2264_; lean_object* v_fst_2265_; lean_object* v_snd_2266_; lean_object* v___x_2267_; lean_object* v___x_2268_; lean_object* v___x_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; 
v_val_2255_ = lean_ctor_get(v___x_2254_, 0);
lean_inc(v_val_2255_);
lean_dec_ref_known(v___x_2254_, 1);
v_snd_2256_ = lean_ctor_get(v_val_2255_, 1);
lean_inc(v_snd_2256_);
lean_dec(v_val_2255_);
v_snd_2257_ = lean_ctor_get(v_snd_2256_, 1);
lean_inc(v_snd_2257_);
v_fst_2258_ = lean_ctor_get(v_snd_2256_, 0);
lean_inc(v_fst_2258_);
lean_dec(v_snd_2256_);
v_fst_2259_ = lean_ctor_get(v_snd_2257_, 0);
lean_inc(v_fst_2259_);
v_snd_2260_ = lean_ctor_get(v_snd_2257_, 1);
lean_inc(v_snd_2260_);
lean_dec(v_snd_2257_);
v___x_2261_ = l_Subarray_split___redArg(v_fst_2237_, v_fst_2259_);
lean_dec(v_fst_2259_);
v_fst_2262_ = lean_ctor_get(v___x_2261_, 0);
lean_inc(v_fst_2262_);
v_snd_2263_ = lean_ctor_get(v___x_2261_, 1);
lean_inc(v_snd_2263_);
lean_dec_ref(v___x_2261_);
v___x_2264_ = l_Subarray_split___redArg(v_fst_2238_, v_snd_2260_);
lean_dec(v_snd_2260_);
v_fst_2265_ = lean_ctor_get(v___x_2264_, 0);
lean_inc(v_fst_2265_);
v_snd_2266_ = lean_ctor_get(v___x_2264_, 1);
lean_inc(v_snd_2266_);
lean_dec_ref(v___x_2264_);
v___x_2267_ = l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3(v_fst_2262_, v_fst_2265_);
v___x_2268_ = l_Array_append___redArg(v_fst_2232_, v___x_2267_);
lean_dec_ref(v___x_2267_);
v___x_2269_ = lean_unsigned_to_nat(1u);
v___x_2270_ = lean_mk_empty_array_with_capacity(v___x_2269_);
v___x_2271_ = lean_array_push(v___x_2270_, v_fst_2258_);
v___x_2272_ = l_Array_append___redArg(v___x_2268_, v___x_2271_);
lean_dec_ref(v___x_2271_);
v___x_2273_ = l_Subarray_drop___redArg(v_snd_2263_, v___x_2269_);
v___x_2274_ = l_Subarray_drop___redArg(v_snd_2266_, v___x_2269_);
v___x_2275_ = l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3(v___x_2273_, v___x_2274_);
v___x_2276_ = l_Array_append___redArg(v___x_2272_, v___x_2275_);
lean_dec_ref(v___x_2275_);
v___x_2277_ = l_Array_append___redArg(v___x_2276_, v_snd_2239_);
lean_dec(v_snd_2239_);
return v___x_2277_;
}
else
{
lean_object* v___x_2278_; 
lean_dec(v___x_2254_);
lean_dec(v_fst_2238_);
lean_dec(v_fst_2237_);
v___x_2278_ = l_Array_append___redArg(v_fst_2232_, v_snd_2239_);
lean_dec(v_snd_2239_);
return v___x_2278_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__5___redArg(lean_object* v___x_2285_, lean_object* v_original_2286_, lean_object* v_a_2287_){
_start:
{
lean_object* v_fst_2288_; lean_object* v_snd_2289_; lean_object* v___x_2291_; uint8_t v_isShared_2292_; uint8_t v_isSharedCheck_2308_; 
v_fst_2288_ = lean_ctor_get(v_a_2287_, 0);
v_snd_2289_ = lean_ctor_get(v_a_2287_, 1);
v_isSharedCheck_2308_ = !lean_is_exclusive(v_a_2287_);
if (v_isSharedCheck_2308_ == 0)
{
v___x_2291_ = v_a_2287_;
v_isShared_2292_ = v_isSharedCheck_2308_;
goto v_resetjp_2290_;
}
else
{
lean_inc(v_snd_2289_);
lean_inc(v_fst_2288_);
lean_dec(v_a_2287_);
v___x_2291_ = lean_box(0);
v_isShared_2292_ = v_isSharedCheck_2308_;
goto v_resetjp_2290_;
}
v_resetjp_2290_:
{
uint8_t v___x_2293_; 
v___x_2293_ = lean_nat_dec_lt(v_snd_2289_, v___x_2285_);
if (v___x_2293_ == 0)
{
lean_object* v___x_2295_; 
if (v_isShared_2292_ == 0)
{
v___x_2295_ = v___x_2291_;
goto v_reusejp_2294_;
}
else
{
lean_object* v_reuseFailAlloc_2296_; 
v_reuseFailAlloc_2296_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2296_, 0, v_fst_2288_);
lean_ctor_set(v_reuseFailAlloc_2296_, 1, v_snd_2289_);
v___x_2295_ = v_reuseFailAlloc_2296_;
goto v_reusejp_2294_;
}
v_reusejp_2294_:
{
return v___x_2295_;
}
}
else
{
uint8_t v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2301_; 
v___x_2297_ = 1;
v___x_2298_ = lean_array_fget_borrowed(v_original_2286_, v_snd_2289_);
v___x_2299_ = lean_box(v___x_2297_);
lean_inc(v___x_2298_);
if (v_isShared_2292_ == 0)
{
lean_ctor_set(v___x_2291_, 1, v___x_2298_);
lean_ctor_set(v___x_2291_, 0, v___x_2299_);
v___x_2301_ = v___x_2291_;
goto v_reusejp_2300_;
}
else
{
lean_object* v_reuseFailAlloc_2307_; 
v_reuseFailAlloc_2307_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2307_, 0, v___x_2299_);
lean_ctor_set(v_reuseFailAlloc_2307_, 1, v___x_2298_);
v___x_2301_ = v_reuseFailAlloc_2307_;
goto v_reusejp_2300_;
}
v_reusejp_2300_:
{
lean_object* v___x_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; 
v___x_2302_ = lean_array_push(v_fst_2288_, v___x_2301_);
v___x_2303_ = lean_unsigned_to_nat(1u);
v___x_2304_ = lean_nat_add(v_snd_2289_, v___x_2303_);
lean_dec(v_snd_2289_);
v___x_2305_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2305_, 0, v___x_2302_);
lean_ctor_set(v___x_2305_, 1, v___x_2304_);
v_a_2287_ = v___x_2305_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__5___redArg___boxed(lean_object* v___x_2309_, lean_object* v_original_2310_, lean_object* v_a_2311_){
_start:
{
lean_object* v_res_2312_; 
v_res_2312_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__5___redArg(v___x_2309_, v_original_2310_, v_a_2311_);
lean_dec_ref(v_original_2310_);
lean_dec(v___x_2309_);
return v_res_2312_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__6___redArg(lean_object* v___x_2313_, lean_object* v_edited_2314_, lean_object* v_a_2315_){
_start:
{
lean_object* v_fst_2316_; lean_object* v_snd_2317_; lean_object* v___x_2319_; uint8_t v_isShared_2320_; uint8_t v_isSharedCheck_2336_; 
v_fst_2316_ = lean_ctor_get(v_a_2315_, 0);
v_snd_2317_ = lean_ctor_get(v_a_2315_, 1);
v_isSharedCheck_2336_ = !lean_is_exclusive(v_a_2315_);
if (v_isSharedCheck_2336_ == 0)
{
v___x_2319_ = v_a_2315_;
v_isShared_2320_ = v_isSharedCheck_2336_;
goto v_resetjp_2318_;
}
else
{
lean_inc(v_snd_2317_);
lean_inc(v_fst_2316_);
lean_dec(v_a_2315_);
v___x_2319_ = lean_box(0);
v_isShared_2320_ = v_isSharedCheck_2336_;
goto v_resetjp_2318_;
}
v_resetjp_2318_:
{
uint8_t v___x_2321_; 
v___x_2321_ = lean_nat_dec_lt(v_snd_2317_, v___x_2313_);
if (v___x_2321_ == 0)
{
lean_object* v___x_2323_; 
if (v_isShared_2320_ == 0)
{
v___x_2323_ = v___x_2319_;
goto v_reusejp_2322_;
}
else
{
lean_object* v_reuseFailAlloc_2324_; 
v_reuseFailAlloc_2324_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2324_, 0, v_fst_2316_);
lean_ctor_set(v_reuseFailAlloc_2324_, 1, v_snd_2317_);
v___x_2323_ = v_reuseFailAlloc_2324_;
goto v_reusejp_2322_;
}
v_reusejp_2322_:
{
return v___x_2323_;
}
}
else
{
uint8_t v___x_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; lean_object* v___x_2329_; 
v___x_2325_ = 0;
v___x_2326_ = lean_array_fget_borrowed(v_edited_2314_, v_snd_2317_);
v___x_2327_ = lean_box(v___x_2325_);
lean_inc(v___x_2326_);
if (v_isShared_2320_ == 0)
{
lean_ctor_set(v___x_2319_, 1, v___x_2326_);
lean_ctor_set(v___x_2319_, 0, v___x_2327_);
v___x_2329_ = v___x_2319_;
goto v_reusejp_2328_;
}
else
{
lean_object* v_reuseFailAlloc_2335_; 
v_reuseFailAlloc_2335_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2335_, 0, v___x_2327_);
lean_ctor_set(v_reuseFailAlloc_2335_, 1, v___x_2326_);
v___x_2329_ = v_reuseFailAlloc_2335_;
goto v_reusejp_2328_;
}
v_reusejp_2328_:
{
lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; 
v___x_2330_ = lean_array_push(v_fst_2316_, v___x_2329_);
v___x_2331_ = lean_unsigned_to_nat(1u);
v___x_2332_ = lean_nat_add(v_snd_2317_, v___x_2331_);
lean_dec(v_snd_2317_);
v___x_2333_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2333_, 0, v___x_2330_);
lean_ctor_set(v___x_2333_, 1, v___x_2332_);
v_a_2315_ = v___x_2333_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__6___redArg___boxed(lean_object* v___x_2337_, lean_object* v_edited_2338_, lean_object* v_a_2339_){
_start:
{
lean_object* v_res_2340_; 
v_res_2340_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__6___redArg(v___x_2337_, v_edited_2338_, v_a_2339_);
lean_dec_ref(v_edited_2338_);
lean_dec(v___x_2337_);
return v_res_2340_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__1___redArg(lean_object* v___x_2341_, lean_object* v_original_2342_, lean_object* v_a_2343_, lean_object* v_a_2344_){
_start:
{
lean_object* v_fst_2345_; lean_object* v_snd_2346_; lean_object* v___x_2348_; uint8_t v_isShared_2349_; uint8_t v_isSharedCheck_2370_; 
v_fst_2345_ = lean_ctor_get(v_a_2344_, 0);
v_snd_2346_ = lean_ctor_get(v_a_2344_, 1);
v_isSharedCheck_2370_ = !lean_is_exclusive(v_a_2344_);
if (v_isSharedCheck_2370_ == 0)
{
v___x_2348_ = v_a_2344_;
v_isShared_2349_ = v_isSharedCheck_2370_;
goto v_resetjp_2347_;
}
else
{
lean_inc(v_snd_2346_);
lean_inc(v_fst_2345_);
lean_dec(v_a_2344_);
v___x_2348_ = lean_box(0);
v_isShared_2349_ = v_isSharedCheck_2370_;
goto v_resetjp_2347_;
}
v_resetjp_2347_:
{
uint8_t v___x_2350_; 
v___x_2350_ = lean_nat_dec_lt(v_snd_2346_, v___x_2341_);
if (v___x_2350_ == 0)
{
lean_object* v___x_2352_; 
if (v_isShared_2349_ == 0)
{
v___x_2352_ = v___x_2348_;
goto v_reusejp_2351_;
}
else
{
lean_object* v_reuseFailAlloc_2353_; 
v_reuseFailAlloc_2353_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2353_, 0, v_fst_2345_);
lean_ctor_set(v_reuseFailAlloc_2353_, 1, v_snd_2346_);
v___x_2352_ = v_reuseFailAlloc_2353_;
goto v_reusejp_2351_;
}
v_reusejp_2351_:
{
return v___x_2352_;
}
}
else
{
lean_object* v___x_2354_; lean_object* v___x_2355_; uint8_t v___x_2356_; 
v___x_2354_ = ((lean_object*)(l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString___closed__0));
v___x_2355_ = lean_array_get_borrowed(v___x_2354_, v_original_2342_, v_snd_2346_);
v___x_2356_ = lean_string_dec_eq(v___x_2355_, v_a_2343_);
if (v___x_2356_ == 0)
{
uint8_t v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2360_; 
v___x_2357_ = 1;
v___x_2358_ = lean_box(v___x_2357_);
lean_inc(v___x_2355_);
if (v_isShared_2349_ == 0)
{
lean_ctor_set(v___x_2348_, 1, v___x_2355_);
lean_ctor_set(v___x_2348_, 0, v___x_2358_);
v___x_2360_ = v___x_2348_;
goto v_reusejp_2359_;
}
else
{
lean_object* v_reuseFailAlloc_2366_; 
v_reuseFailAlloc_2366_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2366_, 0, v___x_2358_);
lean_ctor_set(v_reuseFailAlloc_2366_, 1, v___x_2355_);
v___x_2360_ = v_reuseFailAlloc_2366_;
goto v_reusejp_2359_;
}
v_reusejp_2359_:
{
lean_object* v___x_2361_; lean_object* v___x_2362_; lean_object* v___x_2363_; lean_object* v___x_2364_; 
v___x_2361_ = lean_array_push(v_fst_2345_, v___x_2360_);
v___x_2362_ = lean_unsigned_to_nat(1u);
v___x_2363_ = lean_nat_add(v_snd_2346_, v___x_2362_);
lean_dec(v_snd_2346_);
v___x_2364_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2364_, 0, v___x_2361_);
lean_ctor_set(v___x_2364_, 1, v___x_2363_);
v_a_2344_ = v___x_2364_;
goto _start;
}
}
else
{
lean_object* v___x_2368_; 
if (v_isShared_2349_ == 0)
{
v___x_2368_ = v___x_2348_;
goto v_reusejp_2367_;
}
else
{
lean_object* v_reuseFailAlloc_2369_; 
v_reuseFailAlloc_2369_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2369_, 0, v_fst_2345_);
lean_ctor_set(v_reuseFailAlloc_2369_, 1, v_snd_2346_);
v___x_2368_ = v_reuseFailAlloc_2369_;
goto v_reusejp_2367_;
}
v_reusejp_2367_:
{
return v___x_2368_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__1___redArg___boxed(lean_object* v___x_2371_, lean_object* v_original_2372_, lean_object* v_a_2373_, lean_object* v_a_2374_){
_start:
{
lean_object* v_res_2375_; 
v_res_2375_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__1___redArg(v___x_2371_, v_original_2372_, v_a_2373_, v_a_2374_);
lean_dec_ref(v_a_2373_);
lean_dec_ref(v_original_2372_);
lean_dec(v___x_2371_);
return v_res_2375_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__2___redArg(lean_object* v___x_2376_, lean_object* v_edited_2377_, lean_object* v_a_2378_, lean_object* v_a_2379_){
_start:
{
lean_object* v_fst_2380_; lean_object* v_snd_2381_; lean_object* v___x_2383_; uint8_t v_isShared_2384_; uint8_t v_isSharedCheck_2405_; 
v_fst_2380_ = lean_ctor_get(v_a_2379_, 0);
v_snd_2381_ = lean_ctor_get(v_a_2379_, 1);
v_isSharedCheck_2405_ = !lean_is_exclusive(v_a_2379_);
if (v_isSharedCheck_2405_ == 0)
{
v___x_2383_ = v_a_2379_;
v_isShared_2384_ = v_isSharedCheck_2405_;
goto v_resetjp_2382_;
}
else
{
lean_inc(v_snd_2381_);
lean_inc(v_fst_2380_);
lean_dec(v_a_2379_);
v___x_2383_ = lean_box(0);
v_isShared_2384_ = v_isSharedCheck_2405_;
goto v_resetjp_2382_;
}
v_resetjp_2382_:
{
uint8_t v___x_2385_; 
v___x_2385_ = lean_nat_dec_lt(v_snd_2381_, v___x_2376_);
if (v___x_2385_ == 0)
{
lean_object* v___x_2387_; 
if (v_isShared_2384_ == 0)
{
v___x_2387_ = v___x_2383_;
goto v_reusejp_2386_;
}
else
{
lean_object* v_reuseFailAlloc_2388_; 
v_reuseFailAlloc_2388_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2388_, 0, v_fst_2380_);
lean_ctor_set(v_reuseFailAlloc_2388_, 1, v_snd_2381_);
v___x_2387_ = v_reuseFailAlloc_2388_;
goto v_reusejp_2386_;
}
v_reusejp_2386_:
{
return v___x_2387_;
}
}
else
{
lean_object* v___x_2389_; lean_object* v___x_2390_; uint8_t v___x_2391_; 
v___x_2389_ = ((lean_object*)(l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString___closed__0));
v___x_2390_ = lean_array_get_borrowed(v___x_2389_, v_edited_2377_, v_snd_2381_);
v___x_2391_ = lean_string_dec_eq(v___x_2390_, v_a_2378_);
if (v___x_2391_ == 0)
{
uint8_t v___x_2392_; lean_object* v___x_2393_; lean_object* v___x_2395_; 
v___x_2392_ = 0;
v___x_2393_ = lean_box(v___x_2392_);
lean_inc(v___x_2390_);
if (v_isShared_2384_ == 0)
{
lean_ctor_set(v___x_2383_, 1, v___x_2390_);
lean_ctor_set(v___x_2383_, 0, v___x_2393_);
v___x_2395_ = v___x_2383_;
goto v_reusejp_2394_;
}
else
{
lean_object* v_reuseFailAlloc_2401_; 
v_reuseFailAlloc_2401_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2401_, 0, v___x_2393_);
lean_ctor_set(v_reuseFailAlloc_2401_, 1, v___x_2390_);
v___x_2395_ = v_reuseFailAlloc_2401_;
goto v_reusejp_2394_;
}
v_reusejp_2394_:
{
lean_object* v___x_2396_; lean_object* v___x_2397_; lean_object* v___x_2398_; lean_object* v___x_2399_; 
v___x_2396_ = lean_array_push(v_fst_2380_, v___x_2395_);
v___x_2397_ = lean_unsigned_to_nat(1u);
v___x_2398_ = lean_nat_add(v_snd_2381_, v___x_2397_);
lean_dec(v_snd_2381_);
v___x_2399_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2399_, 0, v___x_2396_);
lean_ctor_set(v___x_2399_, 1, v___x_2398_);
v_a_2379_ = v___x_2399_;
goto _start;
}
}
else
{
lean_object* v___x_2403_; 
if (v_isShared_2384_ == 0)
{
v___x_2403_ = v___x_2383_;
goto v_reusejp_2402_;
}
else
{
lean_object* v_reuseFailAlloc_2404_; 
v_reuseFailAlloc_2404_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2404_, 0, v_fst_2380_);
lean_ctor_set(v_reuseFailAlloc_2404_, 1, v_snd_2381_);
v___x_2403_ = v_reuseFailAlloc_2404_;
goto v_reusejp_2402_;
}
v_reusejp_2402_:
{
return v___x_2403_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__2___redArg___boxed(lean_object* v___x_2406_, lean_object* v_edited_2407_, lean_object* v_a_2408_, lean_object* v_a_2409_){
_start:
{
lean_object* v_res_2410_; 
v_res_2410_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__2___redArg(v___x_2406_, v_edited_2407_, v_a_2408_, v_a_2409_);
lean_dec_ref(v_a_2408_);
lean_dec_ref(v_edited_2407_);
lean_dec(v___x_2406_);
return v_res_2410_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__4_spec__14(lean_object* v___x_2411_, lean_object* v_original_2412_, lean_object* v___x_2413_, lean_object* v_edited_2414_, lean_object* v_as_2415_, size_t v_sz_2416_, size_t v_i_2417_, lean_object* v_b_2418_){
_start:
{
uint8_t v___x_2419_; 
v___x_2419_ = lean_usize_dec_lt(v_i_2417_, v_sz_2416_);
if (v___x_2419_ == 0)
{
return v_b_2418_;
}
else
{
lean_object* v_snd_2420_; lean_object* v_fst_2421_; lean_object* v___x_2423_; uint8_t v_isShared_2424_; uint8_t v_isSharedCheck_2468_; 
v_snd_2420_ = lean_ctor_get(v_b_2418_, 1);
v_fst_2421_ = lean_ctor_get(v_b_2418_, 0);
v_isSharedCheck_2468_ = !lean_is_exclusive(v_b_2418_);
if (v_isSharedCheck_2468_ == 0)
{
v___x_2423_ = v_b_2418_;
v_isShared_2424_ = v_isSharedCheck_2468_;
goto v_resetjp_2422_;
}
else
{
lean_inc(v_snd_2420_);
lean_inc(v_fst_2421_);
lean_dec(v_b_2418_);
v___x_2423_ = lean_box(0);
v_isShared_2424_ = v_isSharedCheck_2468_;
goto v_resetjp_2422_;
}
v_resetjp_2422_:
{
lean_object* v_fst_2425_; lean_object* v_snd_2426_; lean_object* v___x_2428_; uint8_t v_isShared_2429_; uint8_t v_isSharedCheck_2467_; 
v_fst_2425_ = lean_ctor_get(v_snd_2420_, 0);
v_snd_2426_ = lean_ctor_get(v_snd_2420_, 1);
v_isSharedCheck_2467_ = !lean_is_exclusive(v_snd_2420_);
if (v_isSharedCheck_2467_ == 0)
{
v___x_2428_ = v_snd_2420_;
v_isShared_2429_ = v_isSharedCheck_2467_;
goto v_resetjp_2427_;
}
else
{
lean_inc(v_snd_2426_);
lean_inc(v_fst_2425_);
lean_dec(v_snd_2420_);
v___x_2428_ = lean_box(0);
v_isShared_2429_ = v_isSharedCheck_2467_;
goto v_resetjp_2427_;
}
v_resetjp_2427_:
{
lean_object* v_a_2430_; lean_object* v___x_2432_; 
v_a_2430_ = lean_array_uget_borrowed(v_as_2415_, v_i_2417_);
if (v_isShared_2429_ == 0)
{
lean_ctor_set(v___x_2428_, 1, v_fst_2425_);
lean_ctor_set(v___x_2428_, 0, v_fst_2421_);
v___x_2432_ = v___x_2428_;
goto v_reusejp_2431_;
}
else
{
lean_object* v_reuseFailAlloc_2466_; 
v_reuseFailAlloc_2466_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2466_, 0, v_fst_2421_);
lean_ctor_set(v_reuseFailAlloc_2466_, 1, v_fst_2425_);
v___x_2432_ = v_reuseFailAlloc_2466_;
goto v_reusejp_2431_;
}
v_reusejp_2431_:
{
lean_object* v___x_2433_; lean_object* v_fst_2434_; lean_object* v_snd_2435_; lean_object* v___x_2437_; uint8_t v_isShared_2438_; uint8_t v_isSharedCheck_2465_; 
v___x_2433_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__1___redArg(v___x_2411_, v_original_2412_, v_a_2430_, v___x_2432_);
v_fst_2434_ = lean_ctor_get(v___x_2433_, 0);
v_snd_2435_ = lean_ctor_get(v___x_2433_, 1);
v_isSharedCheck_2465_ = !lean_is_exclusive(v___x_2433_);
if (v_isSharedCheck_2465_ == 0)
{
v___x_2437_ = v___x_2433_;
v_isShared_2438_ = v_isSharedCheck_2465_;
goto v_resetjp_2436_;
}
else
{
lean_inc(v_snd_2435_);
lean_inc(v_fst_2434_);
lean_dec(v___x_2433_);
v___x_2437_ = lean_box(0);
v_isShared_2438_ = v_isSharedCheck_2465_;
goto v_resetjp_2436_;
}
v_resetjp_2436_:
{
lean_object* v___x_2440_; 
if (v_isShared_2438_ == 0)
{
lean_ctor_set(v___x_2437_, 1, v_snd_2426_);
v___x_2440_ = v___x_2437_;
goto v_reusejp_2439_;
}
else
{
lean_object* v_reuseFailAlloc_2464_; 
v_reuseFailAlloc_2464_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2464_, 0, v_fst_2434_);
lean_ctor_set(v_reuseFailAlloc_2464_, 1, v_snd_2426_);
v___x_2440_ = v_reuseFailAlloc_2464_;
goto v_reusejp_2439_;
}
v_reusejp_2439_:
{
lean_object* v___x_2441_; lean_object* v_fst_2442_; lean_object* v_snd_2443_; lean_object* v___x_2445_; uint8_t v_isShared_2446_; uint8_t v_isSharedCheck_2463_; 
v___x_2441_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__2___redArg(v___x_2413_, v_edited_2414_, v_a_2430_, v___x_2440_);
v_fst_2442_ = lean_ctor_get(v___x_2441_, 0);
v_snd_2443_ = lean_ctor_get(v___x_2441_, 1);
v_isSharedCheck_2463_ = !lean_is_exclusive(v___x_2441_);
if (v_isSharedCheck_2463_ == 0)
{
v___x_2445_ = v___x_2441_;
v_isShared_2446_ = v_isSharedCheck_2463_;
goto v_resetjp_2444_;
}
else
{
lean_inc(v_snd_2443_);
lean_inc(v_fst_2442_);
lean_dec(v___x_2441_);
v___x_2445_ = lean_box(0);
v_isShared_2446_ = v_isSharedCheck_2463_;
goto v_resetjp_2444_;
}
v_resetjp_2444_:
{
uint8_t v___x_2447_; lean_object* v___x_2448_; lean_object* v___x_2450_; 
v___x_2447_ = 2;
v___x_2448_ = lean_box(v___x_2447_);
lean_inc(v_a_2430_);
if (v_isShared_2446_ == 0)
{
lean_ctor_set(v___x_2445_, 1, v_a_2430_);
lean_ctor_set(v___x_2445_, 0, v___x_2448_);
v___x_2450_ = v___x_2445_;
goto v_reusejp_2449_;
}
else
{
lean_object* v_reuseFailAlloc_2462_; 
v_reuseFailAlloc_2462_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2462_, 0, v___x_2448_);
lean_ctor_set(v_reuseFailAlloc_2462_, 1, v_a_2430_);
v___x_2450_ = v_reuseFailAlloc_2462_;
goto v_reusejp_2449_;
}
v_reusejp_2449_:
{
lean_object* v___x_2451_; lean_object* v___x_2452_; lean_object* v___x_2453_; lean_object* v___x_2454_; lean_object* v___x_2456_; 
v___x_2451_ = lean_array_push(v_fst_2442_, v___x_2450_);
v___x_2452_ = lean_unsigned_to_nat(1u);
v___x_2453_ = lean_nat_add(v_snd_2435_, v___x_2452_);
lean_dec(v_snd_2435_);
v___x_2454_ = lean_nat_add(v_snd_2443_, v___x_2452_);
lean_dec(v_snd_2443_);
if (v_isShared_2424_ == 0)
{
lean_ctor_set(v___x_2423_, 1, v___x_2454_);
lean_ctor_set(v___x_2423_, 0, v___x_2453_);
v___x_2456_ = v___x_2423_;
goto v_reusejp_2455_;
}
else
{
lean_object* v_reuseFailAlloc_2461_; 
v_reuseFailAlloc_2461_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2461_, 0, v___x_2453_);
lean_ctor_set(v_reuseFailAlloc_2461_, 1, v___x_2454_);
v___x_2456_ = v_reuseFailAlloc_2461_;
goto v_reusejp_2455_;
}
v_reusejp_2455_:
{
lean_object* v___x_2457_; size_t v___x_2458_; size_t v___x_2459_; 
v___x_2457_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2457_, 0, v___x_2451_);
lean_ctor_set(v___x_2457_, 1, v___x_2456_);
v___x_2458_ = ((size_t)1ULL);
v___x_2459_ = lean_usize_add(v_i_2417_, v___x_2458_);
v_i_2417_ = v___x_2459_;
v_b_2418_ = v___x_2457_;
goto _start;
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
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__4_spec__14___boxed(lean_object* v___x_2469_, lean_object* v_original_2470_, lean_object* v___x_2471_, lean_object* v_edited_2472_, lean_object* v_as_2473_, lean_object* v_sz_2474_, lean_object* v_i_2475_, lean_object* v_b_2476_){
_start:
{
size_t v_sz_boxed_2477_; size_t v_i_boxed_2478_; lean_object* v_res_2479_; 
v_sz_boxed_2477_ = lean_unbox_usize(v_sz_2474_);
lean_dec(v_sz_2474_);
v_i_boxed_2478_ = lean_unbox_usize(v_i_2475_);
lean_dec(v_i_2475_);
v_res_2479_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__4_spec__14(v___x_2469_, v_original_2470_, v___x_2471_, v_edited_2472_, v_as_2473_, v_sz_boxed_2477_, v_i_boxed_2478_, v_b_2476_);
lean_dec_ref(v_as_2473_);
lean_dec_ref(v_edited_2472_);
lean_dec(v___x_2471_);
lean_dec_ref(v_original_2470_);
lean_dec(v___x_2469_);
return v_res_2479_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__4(lean_object* v___x_2480_, lean_object* v_edited_2481_, lean_object* v___x_2482_, lean_object* v_original_2483_, lean_object* v_as_2484_, size_t v_sz_2485_, size_t v_i_2486_, lean_object* v_b_2487_){
_start:
{
uint8_t v___x_2488_; 
v___x_2488_ = lean_usize_dec_lt(v_i_2486_, v_sz_2485_);
if (v___x_2488_ == 0)
{
return v_b_2487_;
}
else
{
lean_object* v_snd_2489_; lean_object* v_fst_2490_; lean_object* v___x_2492_; uint8_t v_isShared_2493_; uint8_t v_isSharedCheck_2537_; 
v_snd_2489_ = lean_ctor_get(v_b_2487_, 1);
v_fst_2490_ = lean_ctor_get(v_b_2487_, 0);
v_isSharedCheck_2537_ = !lean_is_exclusive(v_b_2487_);
if (v_isSharedCheck_2537_ == 0)
{
v___x_2492_ = v_b_2487_;
v_isShared_2493_ = v_isSharedCheck_2537_;
goto v_resetjp_2491_;
}
else
{
lean_inc(v_snd_2489_);
lean_inc(v_fst_2490_);
lean_dec(v_b_2487_);
v___x_2492_ = lean_box(0);
v_isShared_2493_ = v_isSharedCheck_2537_;
goto v_resetjp_2491_;
}
v_resetjp_2491_:
{
lean_object* v_fst_2494_; lean_object* v_snd_2495_; lean_object* v___x_2497_; uint8_t v_isShared_2498_; uint8_t v_isSharedCheck_2536_; 
v_fst_2494_ = lean_ctor_get(v_snd_2489_, 0);
v_snd_2495_ = lean_ctor_get(v_snd_2489_, 1);
v_isSharedCheck_2536_ = !lean_is_exclusive(v_snd_2489_);
if (v_isSharedCheck_2536_ == 0)
{
v___x_2497_ = v_snd_2489_;
v_isShared_2498_ = v_isSharedCheck_2536_;
goto v_resetjp_2496_;
}
else
{
lean_inc(v_snd_2495_);
lean_inc(v_fst_2494_);
lean_dec(v_snd_2489_);
v___x_2497_ = lean_box(0);
v_isShared_2498_ = v_isSharedCheck_2536_;
goto v_resetjp_2496_;
}
v_resetjp_2496_:
{
lean_object* v_a_2499_; lean_object* v___x_2501_; 
v_a_2499_ = lean_array_uget_borrowed(v_as_2484_, v_i_2486_);
if (v_isShared_2498_ == 0)
{
lean_ctor_set(v___x_2497_, 1, v_fst_2494_);
lean_ctor_set(v___x_2497_, 0, v_fst_2490_);
v___x_2501_ = v___x_2497_;
goto v_reusejp_2500_;
}
else
{
lean_object* v_reuseFailAlloc_2535_; 
v_reuseFailAlloc_2535_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2535_, 0, v_fst_2490_);
lean_ctor_set(v_reuseFailAlloc_2535_, 1, v_fst_2494_);
v___x_2501_ = v_reuseFailAlloc_2535_;
goto v_reusejp_2500_;
}
v_reusejp_2500_:
{
lean_object* v___x_2502_; lean_object* v_fst_2503_; lean_object* v_snd_2504_; lean_object* v___x_2506_; uint8_t v_isShared_2507_; uint8_t v_isSharedCheck_2534_; 
v___x_2502_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__1___redArg(v___x_2482_, v_original_2483_, v_a_2499_, v___x_2501_);
v_fst_2503_ = lean_ctor_get(v___x_2502_, 0);
v_snd_2504_ = lean_ctor_get(v___x_2502_, 1);
v_isSharedCheck_2534_ = !lean_is_exclusive(v___x_2502_);
if (v_isSharedCheck_2534_ == 0)
{
v___x_2506_ = v___x_2502_;
v_isShared_2507_ = v_isSharedCheck_2534_;
goto v_resetjp_2505_;
}
else
{
lean_inc(v_snd_2504_);
lean_inc(v_fst_2503_);
lean_dec(v___x_2502_);
v___x_2506_ = lean_box(0);
v_isShared_2507_ = v_isSharedCheck_2534_;
goto v_resetjp_2505_;
}
v_resetjp_2505_:
{
lean_object* v___x_2509_; 
if (v_isShared_2507_ == 0)
{
lean_ctor_set(v___x_2506_, 1, v_snd_2495_);
v___x_2509_ = v___x_2506_;
goto v_reusejp_2508_;
}
else
{
lean_object* v_reuseFailAlloc_2533_; 
v_reuseFailAlloc_2533_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2533_, 0, v_fst_2503_);
lean_ctor_set(v_reuseFailAlloc_2533_, 1, v_snd_2495_);
v___x_2509_ = v_reuseFailAlloc_2533_;
goto v_reusejp_2508_;
}
v_reusejp_2508_:
{
lean_object* v___x_2510_; lean_object* v_fst_2511_; lean_object* v_snd_2512_; lean_object* v___x_2514_; uint8_t v_isShared_2515_; uint8_t v_isSharedCheck_2532_; 
v___x_2510_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__2___redArg(v___x_2480_, v_edited_2481_, v_a_2499_, v___x_2509_);
v_fst_2511_ = lean_ctor_get(v___x_2510_, 0);
v_snd_2512_ = lean_ctor_get(v___x_2510_, 1);
v_isSharedCheck_2532_ = !lean_is_exclusive(v___x_2510_);
if (v_isSharedCheck_2532_ == 0)
{
v___x_2514_ = v___x_2510_;
v_isShared_2515_ = v_isSharedCheck_2532_;
goto v_resetjp_2513_;
}
else
{
lean_inc(v_snd_2512_);
lean_inc(v_fst_2511_);
lean_dec(v___x_2510_);
v___x_2514_ = lean_box(0);
v_isShared_2515_ = v_isSharedCheck_2532_;
goto v_resetjp_2513_;
}
v_resetjp_2513_:
{
uint8_t v___x_2516_; lean_object* v___x_2517_; lean_object* v___x_2519_; 
v___x_2516_ = 2;
v___x_2517_ = lean_box(v___x_2516_);
lean_inc(v_a_2499_);
if (v_isShared_2515_ == 0)
{
lean_ctor_set(v___x_2514_, 1, v_a_2499_);
lean_ctor_set(v___x_2514_, 0, v___x_2517_);
v___x_2519_ = v___x_2514_;
goto v_reusejp_2518_;
}
else
{
lean_object* v_reuseFailAlloc_2531_; 
v_reuseFailAlloc_2531_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2531_, 0, v___x_2517_);
lean_ctor_set(v_reuseFailAlloc_2531_, 1, v_a_2499_);
v___x_2519_ = v_reuseFailAlloc_2531_;
goto v_reusejp_2518_;
}
v_reusejp_2518_:
{
lean_object* v___x_2520_; lean_object* v___x_2521_; lean_object* v___x_2522_; lean_object* v___x_2523_; lean_object* v___x_2525_; 
v___x_2520_ = lean_array_push(v_fst_2511_, v___x_2519_);
v___x_2521_ = lean_unsigned_to_nat(1u);
v___x_2522_ = lean_nat_add(v_snd_2504_, v___x_2521_);
lean_dec(v_snd_2504_);
v___x_2523_ = lean_nat_add(v_snd_2512_, v___x_2521_);
lean_dec(v_snd_2512_);
if (v_isShared_2493_ == 0)
{
lean_ctor_set(v___x_2492_, 1, v___x_2523_);
lean_ctor_set(v___x_2492_, 0, v___x_2522_);
v___x_2525_ = v___x_2492_;
goto v_reusejp_2524_;
}
else
{
lean_object* v_reuseFailAlloc_2530_; 
v_reuseFailAlloc_2530_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2530_, 0, v___x_2522_);
lean_ctor_set(v_reuseFailAlloc_2530_, 1, v___x_2523_);
v___x_2525_ = v_reuseFailAlloc_2530_;
goto v_reusejp_2524_;
}
v_reusejp_2524_:
{
lean_object* v___x_2526_; size_t v___x_2527_; size_t v___x_2528_; lean_object* v___x_2529_; 
v___x_2526_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2526_, 0, v___x_2520_);
lean_ctor_set(v___x_2526_, 1, v___x_2525_);
v___x_2527_ = ((size_t)1ULL);
v___x_2528_ = lean_usize_add(v_i_2486_, v___x_2527_);
v___x_2529_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__4_spec__14(v___x_2482_, v_original_2483_, v___x_2480_, v_edited_2481_, v_as_2484_, v_sz_2485_, v___x_2528_, v___x_2526_);
return v___x_2529_;
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
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__4___boxed(lean_object* v___x_2538_, lean_object* v_edited_2539_, lean_object* v___x_2540_, lean_object* v_original_2541_, lean_object* v_as_2542_, lean_object* v_sz_2543_, lean_object* v_i_2544_, lean_object* v_b_2545_){
_start:
{
size_t v_sz_boxed_2546_; size_t v_i_boxed_2547_; lean_object* v_res_2548_; 
v_sz_boxed_2546_ = lean_unbox_usize(v_sz_2543_);
lean_dec(v_sz_2543_);
v_i_boxed_2547_ = lean_unbox_usize(v_i_2544_);
lean_dec(v_i_2544_);
v_res_2548_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__4(v___x_2538_, v_edited_2539_, v___x_2540_, v_original_2541_, v_as_2542_, v_sz_boxed_2546_, v_i_boxed_2547_, v_b_2545_);
lean_dec_ref(v_as_2542_);
lean_dec_ref(v_original_2541_);
lean_dec(v___x_2540_);
lean_dec_ref(v_edited_2539_);
lean_dec(v___x_2538_);
return v_res_2548_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__7(size_t v_sz_2549_, size_t v_i_2550_, lean_object* v_bs_2551_){
_start:
{
uint8_t v___x_2552_; 
v___x_2552_ = lean_usize_dec_lt(v_i_2550_, v_sz_2549_);
if (v___x_2552_ == 0)
{
lean_object* v___x_2553_; 
v___x_2553_ = l_unsafeCast___redArg(v_bs_2551_);
lean_dec_ref(v_bs_2551_);
return v___x_2553_;
}
else
{
lean_object* v_v_2554_; lean_object* v___x_2555_; lean_object* v_bs_x27_2556_; lean_object* v___x_2557_; uint8_t v___x_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; size_t v___x_2561_; size_t v___x_2562_; lean_object* v___x_2563_; lean_object* v___x_2564_; 
v_v_2554_ = lean_array_uget(v_bs_2551_, v_i_2550_);
v___x_2555_ = lean_unsigned_to_nat(0u);
v_bs_x27_2556_ = lean_array_uset(v_bs_2551_, v_i_2550_, v___x_2555_);
v___x_2557_ = l_unsafeCast___redArg(v_v_2554_);
lean_dec(v_v_2554_);
v___x_2558_ = 1;
v___x_2559_ = lean_box(v___x_2558_);
v___x_2560_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2560_, 0, v___x_2559_);
lean_ctor_set(v___x_2560_, 1, v___x_2557_);
v___x_2561_ = ((size_t)1ULL);
v___x_2562_ = lean_usize_add(v_i_2550_, v___x_2561_);
v___x_2563_ = l_unsafeCast___redArg(v___x_2560_);
lean_dec_ref_known(v___x_2560_, 2);
v___x_2564_ = lean_array_uset(v_bs_x27_2556_, v_i_2550_, v___x_2563_);
v_i_2550_ = v___x_2562_;
v_bs_2551_ = v___x_2564_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__7___boxed(lean_object* v_sz_2566_, lean_object* v_i_2567_, lean_object* v_bs_2568_){
_start:
{
size_t v_sz_boxed_2569_; size_t v_i_boxed_2570_; lean_object* v_res_2571_; 
v_sz_boxed_2569_ = lean_unbox_usize(v_sz_2566_);
lean_dec(v_sz_2566_);
v_i_boxed_2570_ = lean_unbox_usize(v_i_2567_);
lean_dec(v_i_2567_);
v_res_2571_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__7(v_sz_boxed_2569_, v_i_boxed_2570_, v_bs_2568_);
return v_res_2571_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1(lean_object* v_original_2577_, lean_object* v_edited_2578_){
_start:
{
lean_object* v_i_2579_; lean_object* v___x_2580_; uint8_t v___x_2581_; 
v_i_2579_ = lean_unsigned_to_nat(0u);
v___x_2580_ = lean_array_get_size(v_original_2577_);
v___x_2581_ = lean_nat_dec_lt(v_i_2579_, v___x_2580_);
if (v___x_2581_ == 0)
{
size_t v_sz_2582_; size_t v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; 
lean_dec_ref(v_original_2577_);
v_sz_2582_ = lean_array_size(v_edited_2578_);
v___x_2583_ = ((size_t)0ULL);
v___x_2584_ = l_unsafeCast___redArg(v_edited_2578_);
lean_dec_ref(v_edited_2578_);
v___x_2585_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__8(v_sz_2582_, v___x_2583_, v___x_2584_);
v___x_2586_ = l_unsafeCast___redArg(v___x_2585_);
lean_dec_ref(v___x_2585_);
return v___x_2586_;
}
else
{
lean_object* v___x_2587_; uint8_t v___x_2588_; 
v___x_2587_ = lean_array_get_size(v_edited_2578_);
v___x_2588_ = lean_nat_dec_lt(v_i_2579_, v___x_2587_);
if (v___x_2588_ == 0)
{
size_t v_sz_2589_; size_t v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; 
lean_dec_ref(v_edited_2578_);
v_sz_2589_ = lean_array_size(v_original_2577_);
v___x_2590_ = ((size_t)0ULL);
v___x_2591_ = l_unsafeCast___redArg(v_original_2577_);
lean_dec_ref(v_original_2577_);
v___x_2592_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__7(v_sz_2589_, v___x_2590_, v___x_2591_);
v___x_2593_ = l_unsafeCast___redArg(v___x_2592_);
lean_dec_ref(v___x_2592_);
return v___x_2593_;
}
else
{
lean_object* v___x_2594_; lean_object* v___x_2595_; lean_object* v_ds_2596_; lean_object* v___x_2597_; size_t v_sz_2598_; size_t v___x_2599_; lean_object* v___x_2600_; lean_object* v_snd_2601_; lean_object* v_fst_2602_; lean_object* v_fst_2603_; lean_object* v_snd_2604_; lean_object* v___x_2606_; uint8_t v_isShared_2607_; uint8_t v_isSharedCheck_2623_; 
lean_inc_ref(v_original_2577_);
v___x_2594_ = l_Array_toSubarray___redArg(v_original_2577_, v_i_2579_, v___x_2580_);
lean_inc_ref(v_edited_2578_);
v___x_2595_ = l_Array_toSubarray___redArg(v_edited_2578_, v_i_2579_, v___x_2587_);
v_ds_2596_ = l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3(v___x_2594_, v___x_2595_);
v___x_2597_ = ((lean_object*)(l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1___closed__1));
v_sz_2598_ = lean_array_size(v_ds_2596_);
v___x_2599_ = ((size_t)0ULL);
v___x_2600_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__4(v___x_2587_, v_edited_2578_, v___x_2580_, v_original_2577_, v_ds_2596_, v_sz_2598_, v___x_2599_, v___x_2597_);
lean_dec_ref(v_ds_2596_);
v_snd_2601_ = lean_ctor_get(v___x_2600_, 1);
lean_inc(v_snd_2601_);
v_fst_2602_ = lean_ctor_get(v___x_2600_, 0);
lean_inc(v_fst_2602_);
lean_dec_ref(v___x_2600_);
v_fst_2603_ = lean_ctor_get(v_snd_2601_, 0);
v_snd_2604_ = lean_ctor_get(v_snd_2601_, 1);
v_isSharedCheck_2623_ = !lean_is_exclusive(v_snd_2601_);
if (v_isSharedCheck_2623_ == 0)
{
v___x_2606_ = v_snd_2601_;
v_isShared_2607_ = v_isSharedCheck_2623_;
goto v_resetjp_2605_;
}
else
{
lean_inc(v_snd_2604_);
lean_inc(v_fst_2603_);
lean_dec(v_snd_2601_);
v___x_2606_ = lean_box(0);
v_isShared_2607_ = v_isSharedCheck_2623_;
goto v_resetjp_2605_;
}
v_resetjp_2605_:
{
lean_object* v___x_2609_; 
if (v_isShared_2607_ == 0)
{
lean_ctor_set(v___x_2606_, 1, v_fst_2603_);
lean_ctor_set(v___x_2606_, 0, v_fst_2602_);
v___x_2609_ = v___x_2606_;
goto v_reusejp_2608_;
}
else
{
lean_object* v_reuseFailAlloc_2622_; 
v_reuseFailAlloc_2622_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2622_, 0, v_fst_2602_);
lean_ctor_set(v_reuseFailAlloc_2622_, 1, v_fst_2603_);
v___x_2609_ = v_reuseFailAlloc_2622_;
goto v_reusejp_2608_;
}
v_reusejp_2608_:
{
lean_object* v___x_2610_; lean_object* v_fst_2611_; lean_object* v___x_2613_; uint8_t v_isShared_2614_; uint8_t v_isSharedCheck_2620_; 
v___x_2610_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__5___redArg(v___x_2580_, v_original_2577_, v___x_2609_);
lean_dec_ref(v_original_2577_);
v_fst_2611_ = lean_ctor_get(v___x_2610_, 0);
v_isSharedCheck_2620_ = !lean_is_exclusive(v___x_2610_);
if (v_isSharedCheck_2620_ == 0)
{
lean_object* v_unused_2621_; 
v_unused_2621_ = lean_ctor_get(v___x_2610_, 1);
lean_dec(v_unused_2621_);
v___x_2613_ = v___x_2610_;
v_isShared_2614_ = v_isSharedCheck_2620_;
goto v_resetjp_2612_;
}
else
{
lean_inc(v_fst_2611_);
lean_dec(v___x_2610_);
v___x_2613_ = lean_box(0);
v_isShared_2614_ = v_isSharedCheck_2620_;
goto v_resetjp_2612_;
}
v_resetjp_2612_:
{
lean_object* v___x_2616_; 
if (v_isShared_2614_ == 0)
{
lean_ctor_set(v___x_2613_, 1, v_snd_2604_);
v___x_2616_ = v___x_2613_;
goto v_reusejp_2615_;
}
else
{
lean_object* v_reuseFailAlloc_2619_; 
v_reuseFailAlloc_2619_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2619_, 0, v_fst_2611_);
lean_ctor_set(v_reuseFailAlloc_2619_, 1, v_snd_2604_);
v___x_2616_ = v_reuseFailAlloc_2619_;
goto v_reusejp_2615_;
}
v_reusejp_2615_:
{
lean_object* v___x_2617_; lean_object* v_fst_2618_; 
v___x_2617_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__6___redArg(v___x_2587_, v_edited_2578_, v___x_2616_);
lean_dec_ref(v_edited_2578_);
v_fst_2618_ = lean_ctor_get(v___x_2617_, 0);
lean_inc(v_fst_2618_);
lean_dec_ref(v___x_2617_);
return v_fst_2618_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2___redArg___lam__1(lean_object* v___x_2624_, uint8_t v_inSubst_2625_, lean_object* v___x_2626_, lean_object* v_____r_2627_, lean_object* v_wssIdx_2628_){
_start:
{
lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; 
v___x_2629_ = lean_box(v_inSubst_2625_);
v___x_2630_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2630_, 0, v___x_2624_);
lean_ctor_set(v___x_2630_, 1, v___x_2629_);
v___x_2631_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2631_, 0, v_wssIdx_2628_);
lean_ctor_set(v___x_2631_, 1, v___x_2630_);
v___x_2632_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2632_, 0, v___x_2626_);
lean_ctor_set(v___x_2632_, 1, v___x_2631_);
v___x_2633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2633_, 0, v___x_2632_);
return v___x_2633_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2___redArg___lam__1___boxed(lean_object* v___x_2634_, lean_object* v_inSubst_2635_, lean_object* v___x_2636_, lean_object* v_____r_2637_, lean_object* v_wssIdx_2638_){
_start:
{
uint8_t v_inSubst_boxed_2639_; lean_object* v_res_2640_; 
v_inSubst_boxed_2639_ = lean_unbox(v_inSubst_2635_);
v_res_2640_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2___redArg___lam__1(v___x_2634_, v_inSubst_boxed_2639_, v___x_2636_, v_____r_2637_, v_wssIdx_2638_);
return v_res_2640_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2___redArg___lam__0(lean_object* v_fst_2641_, uint8_t v___x_2642_, lean_object* v_fst_2643_, lean_object* v___x_2644_, lean_object* v_00___2645_){
_start:
{
lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; 
v___x_2646_ = lean_box(v___x_2642_);
v___x_2647_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2647_, 0, v_fst_2641_);
lean_ctor_set(v___x_2647_, 1, v___x_2646_);
v___x_2648_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2648_, 0, v_fst_2643_);
lean_ctor_set(v___x_2648_, 1, v___x_2647_);
v___x_2649_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2649_, 0, v___x_2644_);
lean_ctor_set(v___x_2649_, 1, v___x_2648_);
v___x_2650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2650_, 0, v___x_2649_);
return v___x_2650_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2___redArg___lam__0___boxed(lean_object* v_fst_2651_, lean_object* v___x_2652_, lean_object* v_fst_2653_, lean_object* v___x_2654_, lean_object* v_00___2655_){
_start:
{
uint8_t v___x_9257__boxed_2656_; lean_object* v_res_2657_; 
v___x_9257__boxed_2656_ = lean_unbox(v___x_2652_);
v_res_2657_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2___redArg___lam__0(v_fst_2651_, v___x_9257__boxed_2656_, v_fst_2653_, v___x_2654_, v_00___2655_);
return v_res_2657_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2___redArg___lam__2(uint8_t v_inSubst_2658_, lean_object* v_snd_2659_, lean_object* v_fst_2660_, lean_object* v_____r_2661_, lean_object* v_withWs_2662_, lean_object* v_wssIdx_2663_){
_start:
{
lean_object* v_wss_x27Idx_2665_; uint8_t v___x_2671_; 
v___x_2671_ = lean_unbox(v_snd_2659_);
if (v___x_2671_ == 0)
{
v_wss_x27Idx_2665_ = v_fst_2660_;
goto v___jp_2664_;
}
else
{
lean_object* v___x_2672_; lean_object* v___x_2673_; 
v___x_2672_ = lean_unsigned_to_nat(1u);
v___x_2673_ = lean_nat_add(v_fst_2660_, v___x_2672_);
lean_dec(v_fst_2660_);
v_wss_x27Idx_2665_ = v___x_2673_;
goto v___jp_2664_;
}
v___jp_2664_:
{
lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; 
v___x_2666_ = lean_box(v_inSubst_2658_);
v___x_2667_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2667_, 0, v_wss_x27Idx_2665_);
lean_ctor_set(v___x_2667_, 1, v___x_2666_);
v___x_2668_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2668_, 0, v_wssIdx_2663_);
lean_ctor_set(v___x_2668_, 1, v___x_2667_);
v___x_2669_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2669_, 0, v_withWs_2662_);
lean_ctor_set(v___x_2669_, 1, v___x_2668_);
v___x_2670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2670_, 0, v___x_2669_);
return v___x_2670_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2___redArg___lam__2___boxed(lean_object* v_inSubst_2674_, lean_object* v_snd_2675_, lean_object* v_fst_2676_, lean_object* v_____r_2677_, lean_object* v_withWs_2678_, lean_object* v_wssIdx_2679_){
_start:
{
uint8_t v_inSubst_boxed_2680_; lean_object* v_res_2681_; 
v_inSubst_boxed_2680_ = lean_unbox(v_inSubst_2674_);
v_res_2681_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2___redArg___lam__2(v_inSubst_boxed_2680_, v_snd_2675_, v_fst_2676_, v_____r_2677_, v_withWs_2678_, v_wssIdx_2679_);
lean_dec(v_snd_2675_);
return v_res_2681_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2___redArg(lean_object* v_upperBound_2682_, lean_object* v_diff_2683_, lean_object* v_snd_2684_, lean_object* v_snd_2685_, lean_object* v_a_2686_, lean_object* v_b_2687_){
_start:
{
lean_object* v_a_2689_; lean_object* v___y_2694_; uint8_t v___x_2697_; 
v___x_2697_ = lean_nat_dec_lt(v_a_2686_, v_upperBound_2682_);
if (v___x_2697_ == 0)
{
lean_dec(v_a_2686_);
return v_b_2687_;
}
else
{
lean_object* v___x_2698_; lean_object* v_snd_2699_; lean_object* v_snd_2700_; lean_object* v_fst_2701_; lean_object* v_fst_2702_; lean_object* v___x_2704_; uint8_t v_isShared_2705_; uint8_t v_isSharedCheck_2842_; 
v___x_2698_ = lean_array_fget_borrowed(v_diff_2683_, v_a_2686_);
v_snd_2699_ = lean_ctor_get(v_b_2687_, 1);
lean_inc(v_snd_2699_);
v_snd_2700_ = lean_ctor_get(v_snd_2699_, 1);
lean_inc(v_snd_2700_);
v_fst_2701_ = lean_ctor_get(v___x_2698_, 0);
v_fst_2702_ = lean_ctor_get(v_b_2687_, 0);
v_isSharedCheck_2842_ = !lean_is_exclusive(v_b_2687_);
if (v_isSharedCheck_2842_ == 0)
{
lean_object* v_unused_2843_; 
v_unused_2843_ = lean_ctor_get(v_b_2687_, 1);
lean_dec(v_unused_2843_);
v___x_2704_ = v_b_2687_;
v_isShared_2705_ = v_isSharedCheck_2842_;
goto v_resetjp_2703_;
}
else
{
lean_inc(v_fst_2702_);
lean_dec(v_b_2687_);
v___x_2704_ = lean_box(0);
v_isShared_2705_ = v_isSharedCheck_2842_;
goto v_resetjp_2703_;
}
v_resetjp_2703_:
{
lean_object* v_fst_2706_; lean_object* v___x_2708_; uint8_t v_isShared_2709_; uint8_t v_isSharedCheck_2840_; 
v_fst_2706_ = lean_ctor_get(v_snd_2699_, 0);
v_isSharedCheck_2840_ = !lean_is_exclusive(v_snd_2699_);
if (v_isSharedCheck_2840_ == 0)
{
lean_object* v_unused_2841_; 
v_unused_2841_ = lean_ctor_get(v_snd_2699_, 1);
lean_dec(v_unused_2841_);
v___x_2708_ = v_snd_2699_;
v_isShared_2709_ = v_isSharedCheck_2840_;
goto v_resetjp_2707_;
}
else
{
lean_inc(v_fst_2706_);
lean_dec(v_snd_2699_);
v___x_2708_ = lean_box(0);
v_isShared_2709_ = v_isSharedCheck_2840_;
goto v_resetjp_2707_;
}
v_resetjp_2707_:
{
lean_object* v_fst_2710_; lean_object* v_snd_2711_; lean_object* v___x_2713_; uint8_t v_isShared_2714_; uint8_t v_isSharedCheck_2839_; 
v_fst_2710_ = lean_ctor_get(v_snd_2700_, 0);
v_snd_2711_ = lean_ctor_get(v_snd_2700_, 1);
v_isSharedCheck_2839_ = !lean_is_exclusive(v_snd_2700_);
if (v_isSharedCheck_2839_ == 0)
{
v___x_2713_ = v_snd_2700_;
v_isShared_2714_ = v_isSharedCheck_2839_;
goto v_resetjp_2712_;
}
else
{
lean_inc(v_snd_2711_);
lean_inc(v_fst_2710_);
lean_dec(v_snd_2700_);
v___x_2713_ = lean_box(0);
v_isShared_2714_ = v_isSharedCheck_2839_;
goto v_resetjp_2712_;
}
v_resetjp_2712_:
{
lean_object* v___x_2715_; lean_object* v___y_2717_; lean_object* v___y_2732_; lean_object* v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; uint8_t v___x_2743_; 
lean_inc(v___x_2698_);
v___x_2715_ = lean_array_push(v_fst_2702_, v___x_2698_);
v___x_2740_ = lean_unsigned_to_nat(1u);
v___x_2741_ = lean_nat_add(v_a_2686_, v___x_2740_);
v___x_2742_ = lean_array_get_size(v_diff_2683_);
v___x_2743_ = lean_nat_dec_lt(v___x_2741_, v___x_2742_);
if (v___x_2743_ == 0)
{
lean_object* v___x_2744_; lean_object* v___x_2745_; lean_object* v___x_2746_; 
lean_dec(v___x_2741_);
lean_del_object(v___x_2713_);
lean_del_object(v___x_2708_);
lean_del_object(v___x_2704_);
v___x_2744_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2744_, 0, v_fst_2710_);
lean_ctor_set(v___x_2744_, 1, v_snd_2711_);
v___x_2745_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2745_, 0, v_fst_2706_);
lean_ctor_set(v___x_2745_, 1, v___x_2744_);
v___x_2746_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2746_, 0, v___x_2715_);
lean_ctor_set(v___x_2746_, 1, v___x_2745_);
v_a_2689_ = v___x_2746_;
goto v___jp_2688_;
}
else
{
lean_object* v___x_2747_; lean_object* v_fst_2748_; lean_object* v___x_2750_; uint8_t v_isShared_2751_; uint8_t v_isSharedCheck_2837_; 
v___x_2747_ = lean_array_fget(v_diff_2683_, v___x_2741_);
lean_dec(v___x_2741_);
v_fst_2748_ = lean_ctor_get(v___x_2747_, 0);
v_isSharedCheck_2837_ = !lean_is_exclusive(v___x_2747_);
if (v_isSharedCheck_2837_ == 0)
{
lean_object* v_unused_2838_; 
v_unused_2838_ = lean_ctor_get(v___x_2747_, 1);
lean_dec(v_unused_2838_);
v___x_2750_ = v___x_2747_;
v_isShared_2751_ = v_isSharedCheck_2837_;
goto v_resetjp_2749_;
}
else
{
lean_inc(v_fst_2748_);
lean_dec(v___x_2747_);
v___x_2750_ = lean_box(0);
v_isShared_2751_ = v_isSharedCheck_2837_;
goto v_resetjp_2749_;
}
v_resetjp_2749_:
{
uint8_t v_inSubst_2752_; lean_object* v___y_2754_; lean_object* v___x_2763_; uint8_t v___x_2764_; 
v_inSubst_2752_ = 0;
v___x_2763_ = ((lean_object*)(l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString___closed__0));
v___x_2764_ = lean_unbox(v_fst_2701_);
switch(v___x_2764_)
{
case 0:
{
uint8_t v___x_2765_; 
lean_del_object(v___x_2713_);
lean_del_object(v___x_2708_);
lean_del_object(v___x_2704_);
v___x_2765_ = lean_unbox(v_fst_2748_);
switch(v___x_2765_)
{
case 0:
{
lean_object* v___x_2766_; lean_object* v___x_2768_; 
v___x_2766_ = lean_array_get_borrowed(v___x_2763_, v_snd_2684_, v_fst_2710_);
lean_inc(v___x_2766_);
if (v_isShared_2751_ == 0)
{
lean_ctor_set(v___x_2750_, 1, v___x_2766_);
v___x_2768_ = v___x_2750_;
goto v_reusejp_2767_;
}
else
{
lean_object* v_reuseFailAlloc_2774_; 
v_reuseFailAlloc_2774_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2774_, 0, v_fst_2748_);
lean_ctor_set(v_reuseFailAlloc_2774_, 1, v___x_2766_);
v___x_2768_ = v_reuseFailAlloc_2774_;
goto v_reusejp_2767_;
}
v_reusejp_2767_:
{
lean_object* v___x_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; lean_object* v___x_2773_; 
v___x_2769_ = lean_array_push(v___x_2715_, v___x_2768_);
v___x_2770_ = lean_nat_add(v_fst_2710_, v___x_2740_);
lean_dec(v_fst_2710_);
v___x_2771_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2771_, 0, v___x_2770_);
lean_ctor_set(v___x_2771_, 1, v_snd_2711_);
v___x_2772_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2772_, 0, v_fst_2706_);
lean_ctor_set(v___x_2772_, 1, v___x_2771_);
v___x_2773_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2773_, 0, v___x_2769_);
lean_ctor_set(v___x_2773_, 1, v___x_2772_);
v_a_2689_ = v___x_2773_;
goto v___jp_2688_;
}
}
case 1:
{
lean_object* v___x_2775_; lean_object* v___x_2776_; 
lean_del_object(v___x_2750_);
lean_dec(v_fst_2748_);
lean_dec(v_snd_2711_);
v___x_2775_ = lean_box(0);
v___x_2776_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2___redArg___lam__0(v_fst_2710_, v___x_2697_, v_fst_2706_, v___x_2715_, v___x_2775_);
v___y_2694_ = v___x_2776_;
goto v___jp_2693_;
}
default: 
{
lean_object* v___x_2777_; uint8_t v___x_2778_; 
lean_dec(v_fst_2748_);
v___x_2777_ = lean_array_get_borrowed(v___x_2763_, v_snd_2684_, v_fst_2710_);
v___x_2778_ = lean_unbox(v_snd_2711_);
if (v___x_2778_ == 0)
{
lean_object* v___x_2780_; 
lean_inc(v___x_2777_);
lean_inc(v_fst_2701_);
if (v_isShared_2751_ == 0)
{
lean_ctor_set(v___x_2750_, 1, v___x_2777_);
lean_ctor_set(v___x_2750_, 0, v_fst_2701_);
v___x_2780_ = v___x_2750_;
goto v_reusejp_2779_;
}
else
{
lean_object* v_reuseFailAlloc_2783_; 
v_reuseFailAlloc_2783_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2783_, 0, v_fst_2701_);
lean_ctor_set(v_reuseFailAlloc_2783_, 1, v___x_2777_);
v___x_2780_ = v_reuseFailAlloc_2783_;
goto v_reusejp_2779_;
}
v_reusejp_2779_:
{
lean_object* v___x_2781_; lean_object* v___x_2782_; 
v___x_2781_ = lean_mk_empty_array_with_capacity(v___x_2740_);
v___x_2782_ = lean_array_push(v___x_2781_, v___x_2780_);
v___y_2754_ = v___x_2782_;
goto v___jp_2753_;
}
}
else
{
lean_object* v___x_2784_; lean_object* v___x_2785_; 
lean_del_object(v___x_2750_);
v___x_2784_ = lean_array_get_borrowed(v___x_2763_, v_snd_2685_, v_fst_2706_);
lean_inc(v___x_2777_);
lean_inc(v___x_2784_);
v___x_2785_ = l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff(v___x_2784_, v___x_2777_);
v___y_2754_ = v___x_2785_;
goto v___jp_2753_;
}
}
}
}
case 1:
{
uint8_t v___x_2786_; 
lean_del_object(v___x_2713_);
lean_del_object(v___x_2708_);
lean_del_object(v___x_2704_);
v___x_2786_ = lean_unbox(v_fst_2748_);
switch(v___x_2786_)
{
case 0:
{
lean_object* v___x_2787_; lean_object* v___x_2788_; 
lean_del_object(v___x_2750_);
lean_dec(v_fst_2748_);
lean_dec(v_snd_2711_);
v___x_2787_ = lean_box(0);
v___x_2788_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2___redArg___lam__0(v_fst_2710_, v___x_2697_, v_fst_2706_, v___x_2715_, v___x_2787_);
v___y_2694_ = v___x_2788_;
goto v___jp_2693_;
}
case 1:
{
lean_object* v___x_2789_; lean_object* v___x_2791_; 
v___x_2789_ = lean_array_get_borrowed(v___x_2763_, v_snd_2685_, v_fst_2706_);
lean_inc(v___x_2789_);
if (v_isShared_2751_ == 0)
{
lean_ctor_set(v___x_2750_, 1, v___x_2789_);
v___x_2791_ = v___x_2750_;
goto v_reusejp_2790_;
}
else
{
lean_object* v_reuseFailAlloc_2797_; 
v_reuseFailAlloc_2797_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2797_, 0, v_fst_2748_);
lean_ctor_set(v_reuseFailAlloc_2797_, 1, v___x_2789_);
v___x_2791_ = v_reuseFailAlloc_2797_;
goto v_reusejp_2790_;
}
v_reusejp_2790_:
{
lean_object* v___x_2792_; lean_object* v___x_2793_; lean_object* v___x_2794_; lean_object* v___x_2795_; lean_object* v___x_2796_; 
v___x_2792_ = lean_array_push(v___x_2715_, v___x_2791_);
v___x_2793_ = lean_nat_add(v_fst_2706_, v___x_2740_);
lean_dec(v_fst_2706_);
v___x_2794_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2794_, 0, v_fst_2710_);
lean_ctor_set(v___x_2794_, 1, v_snd_2711_);
v___x_2795_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2795_, 0, v___x_2793_);
lean_ctor_set(v___x_2795_, 1, v___x_2794_);
v___x_2796_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2796_, 0, v___x_2792_);
lean_ctor_set(v___x_2796_, 1, v___x_2795_);
v_a_2689_ = v___x_2796_;
goto v___jp_2688_;
}
}
default: 
{
uint8_t v___x_2801_; 
lean_dec(v_fst_2748_);
v___x_2801_ = lean_unbox(v_snd_2711_);
if (v___x_2801_ == 0)
{
lean_object* v___x_2802_; lean_object* v___x_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; uint8_t v___x_2806_; 
v___x_2802_ = lean_array_get_borrowed(v___x_2763_, v_snd_2685_, v_fst_2706_);
v___x_2803_ = lean_unsigned_to_nat(0u);
v___x_2804_ = lean_string_utf8_byte_size(v___x_2802_);
lean_inc(v___x_2802_);
v___x_2805_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2805_, 0, v___x_2802_);
lean_ctor_set(v___x_2805_, 1, v___x_2803_);
lean_ctor_set(v___x_2805_, 2, v___x_2804_);
v___x_2806_ = l_String_Slice_contains___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__0(v___x_2805_);
lean_dec_ref_known(v___x_2805_, 3);
if (v___x_2806_ == 0)
{
lean_object* v___x_2808_; 
lean_inc(v___x_2802_);
lean_inc(v_fst_2701_);
if (v_isShared_2751_ == 0)
{
lean_ctor_set(v___x_2750_, 1, v___x_2802_);
lean_ctor_set(v___x_2750_, 0, v_fst_2701_);
v___x_2808_ = v___x_2750_;
goto v_reusejp_2807_;
}
else
{
lean_object* v_reuseFailAlloc_2813_; 
v_reuseFailAlloc_2813_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2813_, 0, v_fst_2701_);
lean_ctor_set(v_reuseFailAlloc_2813_, 1, v___x_2802_);
v___x_2808_ = v_reuseFailAlloc_2813_;
goto v_reusejp_2807_;
}
v_reusejp_2807_:
{
lean_object* v___x_2809_; lean_object* v___x_2810_; lean_object* v___x_2811_; lean_object* v___x_2812_; 
v___x_2809_ = lean_array_push(v___x_2715_, v___x_2808_);
v___x_2810_ = lean_nat_add(v_fst_2706_, v___x_2740_);
lean_dec(v_fst_2706_);
v___x_2811_ = lean_box(0);
v___x_2812_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2___redArg___lam__2(v_inSubst_2752_, v_snd_2711_, v_fst_2710_, v___x_2811_, v___x_2809_, v___x_2810_);
lean_dec(v_snd_2711_);
v___y_2694_ = v___x_2812_;
goto v___jp_2693_;
}
}
else
{
lean_del_object(v___x_2750_);
goto v___jp_2798_;
}
}
else
{
lean_del_object(v___x_2750_);
goto v___jp_2798_;
}
v___jp_2798_:
{
lean_object* v___x_2799_; lean_object* v___x_2800_; 
v___x_2799_ = lean_box(0);
v___x_2800_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2___redArg___lam__2(v_inSubst_2752_, v_snd_2711_, v_fst_2710_, v___x_2799_, v___x_2715_, v_fst_2706_);
lean_dec(v_snd_2711_);
v___y_2694_ = v___x_2800_;
goto v___jp_2693_;
}
}
}
}
default: 
{
uint8_t v___x_2814_; 
v___x_2814_ = lean_unbox(v_fst_2748_);
if (v___x_2814_ == 1)
{
lean_object* v___x_2815_; lean_object* v___x_2816_; uint8_t v___x_2817_; 
v___x_2815_ = lean_array_get_borrowed(v___x_2763_, v_snd_2685_, v_fst_2706_);
v___x_2816_ = lean_array_get_size(v_snd_2684_);
v___x_2817_ = lean_nat_dec_lt(v_fst_2710_, v___x_2816_);
if (v___x_2817_ == 0)
{
lean_object* v___x_2819_; 
lean_inc(v___x_2815_);
if (v_isShared_2751_ == 0)
{
lean_ctor_set(v___x_2750_, 1, v___x_2815_);
v___x_2819_ = v___x_2750_;
goto v_reusejp_2818_;
}
else
{
lean_object* v_reuseFailAlloc_2822_; 
v_reuseFailAlloc_2822_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2822_, 0, v_fst_2748_);
lean_ctor_set(v_reuseFailAlloc_2822_, 1, v___x_2815_);
v___x_2819_ = v_reuseFailAlloc_2822_;
goto v_reusejp_2818_;
}
v_reusejp_2818_:
{
lean_object* v___x_2820_; lean_object* v___x_2821_; 
v___x_2820_ = lean_mk_empty_array_with_capacity(v___x_2740_);
v___x_2821_ = lean_array_push(v___x_2820_, v___x_2819_);
v___y_2717_ = v___x_2821_;
goto v___jp_2716_;
}
}
else
{
lean_object* v___x_2823_; lean_object* v___x_2824_; 
lean_del_object(v___x_2750_);
lean_dec(v_fst_2748_);
v___x_2823_ = lean_array_fget_borrowed(v_snd_2684_, v_fst_2710_);
lean_inc(v___x_2823_);
lean_inc(v___x_2815_);
v___x_2824_ = l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff(v___x_2815_, v___x_2823_);
v___y_2717_ = v___x_2824_;
goto v___jp_2716_;
}
}
else
{
lean_object* v___x_2825_; lean_object* v___x_2826_; uint8_t v___x_2827_; 
lean_dec(v_fst_2748_);
lean_del_object(v___x_2713_);
lean_del_object(v___x_2708_);
lean_del_object(v___x_2704_);
v___x_2825_ = lean_array_get_borrowed(v___x_2763_, v_snd_2684_, v_fst_2710_);
v___x_2826_ = lean_array_get_size(v_snd_2685_);
v___x_2827_ = lean_nat_dec_lt(v_fst_2706_, v___x_2826_);
if (v___x_2827_ == 0)
{
uint8_t v___x_2828_; lean_object* v___x_2829_; lean_object* v___x_2831_; 
v___x_2828_ = 0;
v___x_2829_ = lean_box(v___x_2828_);
lean_inc(v___x_2825_);
if (v_isShared_2751_ == 0)
{
lean_ctor_set(v___x_2750_, 1, v___x_2825_);
lean_ctor_set(v___x_2750_, 0, v___x_2829_);
v___x_2831_ = v___x_2750_;
goto v_reusejp_2830_;
}
else
{
lean_object* v_reuseFailAlloc_2834_; 
v_reuseFailAlloc_2834_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2834_, 0, v___x_2829_);
lean_ctor_set(v_reuseFailAlloc_2834_, 1, v___x_2825_);
v___x_2831_ = v_reuseFailAlloc_2834_;
goto v_reusejp_2830_;
}
v_reusejp_2830_:
{
lean_object* v___x_2832_; lean_object* v___x_2833_; 
v___x_2832_ = lean_mk_empty_array_with_capacity(v___x_2740_);
v___x_2833_ = lean_array_push(v___x_2832_, v___x_2831_);
v___y_2732_ = v___x_2833_;
goto v___jp_2731_;
}
}
else
{
lean_object* v___x_2835_; lean_object* v___x_2836_; 
lean_del_object(v___x_2750_);
v___x_2835_ = lean_array_fget_borrowed(v_snd_2685_, v_fst_2706_);
lean_inc(v___x_2825_);
lean_inc(v___x_2835_);
v___x_2836_ = l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff(v___x_2835_, v___x_2825_);
v___y_2732_ = v___x_2836_;
goto v___jp_2731_;
}
}
}
}
v___jp_2753_:
{
lean_object* v___x_2755_; lean_object* v___x_2756_; uint8_t v___x_2757_; 
v___x_2755_ = l_Array_append___redArg(v___x_2715_, v___y_2754_);
lean_dec_ref(v___y_2754_);
v___x_2756_ = lean_nat_add(v_fst_2710_, v___x_2740_);
lean_dec(v_fst_2710_);
v___x_2757_ = lean_unbox(v_snd_2711_);
lean_dec(v_snd_2711_);
if (v___x_2757_ == 0)
{
lean_object* v___x_2758_; lean_object* v___x_2759_; 
v___x_2758_ = lean_box(0);
v___x_2759_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2___redArg___lam__1(v___x_2756_, v_inSubst_2752_, v___x_2755_, v___x_2758_, v_fst_2706_);
v___y_2694_ = v___x_2759_;
goto v___jp_2693_;
}
else
{
lean_object* v___x_2760_; lean_object* v___x_2761_; lean_object* v___x_2762_; 
v___x_2760_ = lean_nat_add(v_fst_2706_, v___x_2740_);
lean_dec(v_fst_2706_);
v___x_2761_ = lean_box(0);
v___x_2762_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2___redArg___lam__1(v___x_2756_, v_inSubst_2752_, v___x_2755_, v___x_2761_, v___x_2760_);
v___y_2694_ = v___x_2762_;
goto v___jp_2693_;
}
}
}
}
v___jp_2716_:
{
lean_object* v___x_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2723_; 
v___x_2718_ = l_Array_append___redArg(v___x_2715_, v___y_2717_);
lean_dec_ref(v___y_2717_);
v___x_2719_ = lean_unsigned_to_nat(1u);
v___x_2720_ = lean_nat_add(v_fst_2706_, v___x_2719_);
lean_dec(v_fst_2706_);
v___x_2721_ = lean_nat_add(v_fst_2710_, v___x_2719_);
lean_dec(v_fst_2710_);
if (v_isShared_2714_ == 0)
{
lean_ctor_set(v___x_2713_, 0, v___x_2721_);
v___x_2723_ = v___x_2713_;
goto v_reusejp_2722_;
}
else
{
lean_object* v_reuseFailAlloc_2730_; 
v_reuseFailAlloc_2730_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2730_, 0, v___x_2721_);
lean_ctor_set(v_reuseFailAlloc_2730_, 1, v_snd_2711_);
v___x_2723_ = v_reuseFailAlloc_2730_;
goto v_reusejp_2722_;
}
v_reusejp_2722_:
{
lean_object* v___x_2725_; 
if (v_isShared_2709_ == 0)
{
lean_ctor_set(v___x_2708_, 1, v___x_2723_);
lean_ctor_set(v___x_2708_, 0, v___x_2720_);
v___x_2725_ = v___x_2708_;
goto v_reusejp_2724_;
}
else
{
lean_object* v_reuseFailAlloc_2729_; 
v_reuseFailAlloc_2729_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2729_, 0, v___x_2720_);
lean_ctor_set(v_reuseFailAlloc_2729_, 1, v___x_2723_);
v___x_2725_ = v_reuseFailAlloc_2729_;
goto v_reusejp_2724_;
}
v_reusejp_2724_:
{
lean_object* v___x_2727_; 
if (v_isShared_2705_ == 0)
{
lean_ctor_set(v___x_2704_, 1, v___x_2725_);
lean_ctor_set(v___x_2704_, 0, v___x_2718_);
v___x_2727_ = v___x_2704_;
goto v_reusejp_2726_;
}
else
{
lean_object* v_reuseFailAlloc_2728_; 
v_reuseFailAlloc_2728_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2728_, 0, v___x_2718_);
lean_ctor_set(v_reuseFailAlloc_2728_, 1, v___x_2725_);
v___x_2727_ = v_reuseFailAlloc_2728_;
goto v_reusejp_2726_;
}
v_reusejp_2726_:
{
v_a_2689_ = v___x_2727_;
goto v___jp_2688_;
}
}
}
}
v___jp_2731_:
{
lean_object* v___x_2733_; lean_object* v___x_2734_; lean_object* v___x_2735_; lean_object* v___x_2736_; lean_object* v___x_2737_; lean_object* v___x_2738_; lean_object* v___x_2739_; 
v___x_2733_ = l_Array_append___redArg(v___x_2715_, v___y_2732_);
lean_dec_ref(v___y_2732_);
v___x_2734_ = lean_unsigned_to_nat(1u);
v___x_2735_ = lean_nat_add(v_fst_2706_, v___x_2734_);
lean_dec(v_fst_2706_);
v___x_2736_ = lean_nat_add(v_fst_2710_, v___x_2734_);
lean_dec(v_fst_2710_);
v___x_2737_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2737_, 0, v___x_2736_);
lean_ctor_set(v___x_2737_, 1, v_snd_2711_);
v___x_2738_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2738_, 0, v___x_2735_);
lean_ctor_set(v___x_2738_, 1, v___x_2737_);
v___x_2739_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2739_, 0, v___x_2733_);
lean_ctor_set(v___x_2739_, 1, v___x_2738_);
v_a_2689_ = v___x_2739_;
goto v___jp_2688_;
}
}
}
}
}
v___jp_2688_:
{
lean_object* v___x_2690_; lean_object* v___x_2691_; 
v___x_2690_ = lean_unsigned_to_nat(1u);
v___x_2691_ = lean_nat_add(v_a_2686_, v___x_2690_);
lean_dec(v_a_2686_);
v_a_2686_ = v___x_2691_;
v_b_2687_ = v_a_2689_;
goto _start;
}
v___jp_2693_:
{
if (lean_obj_tag(v___y_2694_) == 0)
{
lean_object* v_a_2695_; 
lean_dec(v_a_2686_);
v_a_2695_ = lean_ctor_get(v___y_2694_, 0);
lean_inc(v_a_2695_);
lean_dec_ref_known(v___y_2694_, 1);
return v_a_2695_;
}
else
{
lean_object* v_a_2696_; 
v_a_2696_ = lean_ctor_get(v___y_2694_, 0);
lean_inc(v_a_2696_);
lean_dec_ref_known(v___y_2694_, 1);
v_a_2689_ = v_a_2696_;
goto v___jp_2688_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2___redArg___boxed(lean_object* v_upperBound_2844_, lean_object* v_diff_2845_, lean_object* v_snd_2846_, lean_object* v_snd_2847_, lean_object* v_a_2848_, lean_object* v_b_2849_){
_start:
{
lean_object* v_res_2850_; 
v_res_2850_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2___redArg(v_upperBound_2844_, v_diff_2845_, v_snd_2846_, v_snd_2847_, v_a_2848_, v_b_2849_);
lean_dec_ref(v_snd_2847_);
lean_dec_ref(v_snd_2846_);
lean_dec_ref(v_diff_2845_);
lean_dec(v_upperBound_2844_);
return v_res_2850_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff(lean_object* v_s_2861_, lean_object* v_s_x27_2862_){
_start:
{
lean_object* v___x_2863_; lean_object* v_fst_2864_; lean_object* v_snd_2865_; lean_object* v___x_2866_; lean_object* v_fst_2867_; lean_object* v_snd_2868_; lean_object* v_diff_2869_; lean_object* v___x_2870_; lean_object* v___x_2871_; lean_object* v___x_2872_; lean_object* v___x_2873_; lean_object* v_fst_2874_; lean_object* v___x_2875_; size_t v_sz_2876_; size_t v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; 
v___x_2863_ = l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitWords(v_s_2861_);
v_fst_2864_ = lean_ctor_get(v___x_2863_, 0);
lean_inc(v_fst_2864_);
v_snd_2865_ = lean_ctor_get(v___x_2863_, 1);
lean_inc(v_snd_2865_);
lean_dec_ref(v___x_2863_);
v___x_2866_ = l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitWords(v_s_x27_2862_);
v_fst_2867_ = lean_ctor_get(v___x_2866_, 0);
lean_inc(v_fst_2867_);
v_snd_2868_ = lean_ctor_get(v___x_2866_, 1);
lean_inc(v_snd_2868_);
lean_dec_ref(v___x_2866_);
v_diff_2869_ = l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1(v_fst_2864_, v_fst_2867_);
v___x_2870_ = lean_unsigned_to_nat(0u);
v___x_2871_ = lean_array_get_size(v_diff_2869_);
v___x_2872_ = ((lean_object*)(l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff___closed__2));
v___x_2873_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2___redArg(v___x_2871_, v_diff_2869_, v_snd_2868_, v_snd_2865_, v___x_2870_, v___x_2872_);
lean_dec(v_snd_2865_);
lean_dec(v_snd_2868_);
lean_dec_ref(v_diff_2869_);
v_fst_2874_ = lean_ctor_get(v___x_2873_, 0);
lean_inc(v_fst_2874_);
lean_dec_ref(v___x_2873_);
v___x_2875_ = l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits___redArg(v_fst_2874_);
lean_dec(v_fst_2874_);
v_sz_2876_ = lean_array_size(v___x_2875_);
v___x_2877_ = ((size_t)0ULL);
v___x_2878_ = l_unsafeCast___redArg(v___x_2875_);
lean_dec_ref(v___x_2875_);
v___x_2879_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__0(v_sz_2876_, v___x_2877_, v___x_2878_);
v___x_2880_ = l_unsafeCast___redArg(v___x_2879_);
lean_dec_ref(v___x_2879_);
return v___x_2880_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff___boxed(lean_object* v_s_2881_, lean_object* v_s_x27_2882_){
_start:
{
lean_object* v_res_2883_; 
v_res_2883_ = l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff(v_s_2881_, v_s_x27_2882_);
lean_dec_ref(v_s_x27_2882_);
lean_dec_ref(v_s_2881_);
return v_res_2883_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2(lean_object* v_upperBound_2884_, lean_object* v_diff_2885_, lean_object* v_snd_2886_, lean_object* v_snd_2887_, lean_object* v_inst_2888_, lean_object* v_R_2889_, lean_object* v_a_2890_, lean_object* v_b_2891_, lean_object* v_c_2892_){
_start:
{
lean_object* v___x_2893_; 
v___x_2893_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2___redArg(v_upperBound_2884_, v_diff_2885_, v_snd_2886_, v_snd_2887_, v_a_2890_, v_b_2891_);
return v___x_2893_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2___boxed(lean_object* v_upperBound_2894_, lean_object* v_diff_2895_, lean_object* v_snd_2896_, lean_object* v_snd_2897_, lean_object* v_inst_2898_, lean_object* v_R_2899_, lean_object* v_a_2900_, lean_object* v_b_2901_, lean_object* v_c_2902_){
_start:
{
lean_object* v_res_2903_; 
v_res_2903_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2(v_upperBound_2894_, v_diff_2895_, v_snd_2896_, v_snd_2897_, v_inst_2898_, v_R_2899_, v_a_2900_, v_b_2901_, v_c_2902_);
lean_dec_ref(v_snd_2897_);
lean_dec_ref(v_snd_2896_);
lean_dec_ref(v_diff_2895_);
lean_dec(v_upperBound_2894_);
return v_res_2903_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__1(lean_object* v___x_2904_, lean_object* v_original_2905_, lean_object* v_a_2906_, lean_object* v_inst_2907_, lean_object* v_a_2908_){
_start:
{
lean_object* v___x_2909_; 
v___x_2909_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__1___redArg(v___x_2904_, v_original_2905_, v_a_2906_, v_a_2908_);
return v___x_2909_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__1___boxed(lean_object* v___x_2910_, lean_object* v_original_2911_, lean_object* v_a_2912_, lean_object* v_inst_2913_, lean_object* v_a_2914_){
_start:
{
lean_object* v_res_2915_; 
v_res_2915_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__1(v___x_2910_, v_original_2911_, v_a_2912_, v_inst_2913_, v_a_2914_);
lean_dec_ref(v_a_2912_);
lean_dec_ref(v_original_2911_);
lean_dec(v___x_2910_);
return v_res_2915_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__2(lean_object* v___x_2916_, lean_object* v_edited_2917_, lean_object* v_a_2918_, lean_object* v_inst_2919_, lean_object* v_a_2920_){
_start:
{
lean_object* v___x_2921_; 
v___x_2921_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__2___redArg(v___x_2916_, v_edited_2917_, v_a_2918_, v_a_2920_);
return v___x_2921_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__2___boxed(lean_object* v___x_2922_, lean_object* v_edited_2923_, lean_object* v_a_2924_, lean_object* v_inst_2925_, lean_object* v_a_2926_){
_start:
{
lean_object* v_res_2927_; 
v_res_2927_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__2(v___x_2922_, v_edited_2923_, v_a_2924_, v_inst_2925_, v_a_2926_);
lean_dec_ref(v_a_2924_);
lean_dec_ref(v_edited_2923_);
lean_dec(v___x_2922_);
return v_res_2927_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__5(lean_object* v___x_2928_, lean_object* v_original_2929_, lean_object* v_inst_2930_, lean_object* v_a_2931_){
_start:
{
lean_object* v___x_2932_; 
v___x_2932_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__5___redArg(v___x_2928_, v_original_2929_, v_a_2931_);
return v___x_2932_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__5___boxed(lean_object* v___x_2933_, lean_object* v_original_2934_, lean_object* v_inst_2935_, lean_object* v_a_2936_){
_start:
{
lean_object* v_res_2937_; 
v_res_2937_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__5(v___x_2933_, v_original_2934_, v_inst_2935_, v_a_2936_);
lean_dec_ref(v_original_2934_);
lean_dec(v___x_2933_);
return v_res_2937_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__6(lean_object* v___x_2938_, lean_object* v_edited_2939_, lean_object* v_inst_2940_, lean_object* v_a_2941_){
_start:
{
lean_object* v___x_2942_; 
v___x_2942_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__6___redArg(v___x_2938_, v_edited_2939_, v_a_2941_);
return v___x_2942_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__6___boxed(lean_object* v___x_2943_, lean_object* v_edited_2944_, lean_object* v_inst_2945_, lean_object* v_a_2946_){
_start:
{
lean_object* v_res_2947_; 
v_res_2947_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__6(v___x_2943_, v_edited_2944_, v_inst_2945_, v_a_2946_);
lean_dec_ref(v_edited_2944_);
lean_dec(v___x_2943_);
return v_res_2947_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__6(lean_object* v_as_2948_, lean_object* v_as_x27_2949_, lean_object* v_b_2950_, lean_object* v_a_2951_){
_start:
{
lean_object* v___x_2952_; 
v___x_2952_ = l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__6___redArg(v_as_x27_2949_, v_b_2950_);
return v___x_2952_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__6___boxed(lean_object* v_as_2953_, lean_object* v_as_x27_2954_, lean_object* v_b_2955_, lean_object* v_a_2956_){
_start:
{
lean_object* v_res_2957_; 
v_res_2957_ = l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__6(v_as_2953_, v_as_x27_2954_, v_b_2955_, v_a_2956_);
lean_dec(v_as_x27_2954_);
lean_dec(v_as_2953_);
return v_res_2957_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9(lean_object* v_lsize_2958_, lean_object* v_rsize_2959_, lean_object* v_histogram_2960_, lean_object* v_index_2961_, lean_object* v_val_2962_){
_start:
{
lean_object* v___x_2963_; 
v___x_2963_ = l_Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9___redArg(v_histogram_2960_, v_index_2961_, v_val_2962_);
return v___x_2963_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9___boxed(lean_object* v_lsize_2964_, lean_object* v_rsize_2965_, lean_object* v_histogram_2966_, lean_object* v_index_2967_, lean_object* v_val_2968_){
_start:
{
lean_object* v_res_2969_; 
v_res_2969_ = l_Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9(v_lsize_2964_, v_rsize_2965_, v_histogram_2966_, v_index_2967_, v_val_2968_);
lean_dec(v_rsize_2965_);
lean_dec(v_lsize_2964_);
return v_res_2969_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__10(lean_object* v_upperBound_2970_, lean_object* v___x_2971_, lean_object* v_fst_2972_, lean_object* v___x_2973_, lean_object* v_inst_2974_, lean_object* v_R_2975_, lean_object* v_a_2976_, lean_object* v_b_2977_, lean_object* v_c_2978_){
_start:
{
lean_object* v___x_2979_; 
v___x_2979_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__10___redArg(v_upperBound_2970_, v___x_2971_, v_fst_2972_, v___x_2973_, v_a_2976_, v_b_2977_);
return v___x_2979_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__10___boxed(lean_object* v_upperBound_2980_, lean_object* v___x_2981_, lean_object* v_fst_2982_, lean_object* v___x_2983_, lean_object* v_inst_2984_, lean_object* v_R_2985_, lean_object* v_a_2986_, lean_object* v_b_2987_, lean_object* v_c_2988_){
_start:
{
lean_object* v_res_2989_; 
v_res_2989_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__10(v_upperBound_2980_, v___x_2981_, v_fst_2982_, v___x_2983_, v_inst_2984_, v_R_2985_, v_a_2986_, v_b_2987_, v_c_2988_);
lean_dec(v___x_2983_);
lean_dec_ref(v_fst_2982_);
lean_dec(v___x_2981_);
lean_dec(v_upperBound_2980_);
return v_res_2989_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addLeft___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__11(lean_object* v_lsize_2990_, lean_object* v_rsize_2991_, lean_object* v_histogram_2992_, lean_object* v_index_2993_, lean_object* v_val_2994_){
_start:
{
lean_object* v___x_2995_; 
v___x_2995_ = l_Lean_Diff_Histogram_addLeft___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__11___redArg(v_histogram_2992_, v_index_2993_, v_val_2994_);
return v___x_2995_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addLeft___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__11___boxed(lean_object* v_lsize_2996_, lean_object* v_rsize_2997_, lean_object* v_histogram_2998_, lean_object* v_index_2999_, lean_object* v_val_3000_){
_start:
{
lean_object* v_res_3001_; 
v_res_3001_ = l_Lean_Diff_Histogram_addLeft___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__11(v_lsize_2996_, v_rsize_2997_, v_histogram_2998_, v_index_2999_, v_val_3000_);
lean_dec(v_rsize_2997_);
lean_dec(v_lsize_2996_);
return v_res_3001_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__12(lean_object* v_upperBound_3002_, lean_object* v_fst_3003_, lean_object* v___x_3004_, lean_object* v_fst_3005_, lean_object* v_inst_3006_, lean_object* v_R_3007_, lean_object* v_a_3008_, lean_object* v_b_3009_, lean_object* v_c_3010_){
_start:
{
lean_object* v___x_3011_; 
v___x_3011_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__12___redArg(v_upperBound_3002_, v_fst_3003_, v___x_3004_, v_fst_3005_, v_a_3008_, v_b_3009_);
return v___x_3011_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__12___boxed(lean_object* v_upperBound_3012_, lean_object* v_fst_3013_, lean_object* v___x_3014_, lean_object* v_fst_3015_, lean_object* v_inst_3016_, lean_object* v_R_3017_, lean_object* v_a_3018_, lean_object* v_b_3019_, lean_object* v_c_3020_){
_start:
{
lean_object* v_res_3021_; 
v_res_3021_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__12(v_upperBound_3012_, v_fst_3013_, v___x_3014_, v_fst_3015_, v_inst_3016_, v_R_3017_, v_a_3018_, v_b_3019_, v_c_3020_);
lean_dec_ref(v_fst_3015_);
lean_dec(v___x_3014_);
lean_dec_ref(v_fst_3013_);
lean_dec(v_upperBound_3012_);
return v_res_3021_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__13(lean_object* v_00_u03b2_3022_, lean_object* v_m_3023_, lean_object* v_a_3024_){
_start:
{
lean_object* v___x_3025_; 
v___x_3025_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__13___redArg(v_m_3023_, v_a_3024_);
return v___x_3025_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__13___boxed(lean_object* v_00_u03b2_3026_, lean_object* v_m_3027_, lean_object* v_a_3028_){
_start:
{
lean_object* v_res_3029_; 
v_res_3029_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__13(v_00_u03b2_3026_, v_m_3027_, v_a_3028_);
lean_dec_ref(v_a_3028_);
lean_dec_ref(v_m_3027_);
return v_res_3029_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14(lean_object* v_00_u03b2_3030_, lean_object* v_m_3031_, lean_object* v_a_3032_, lean_object* v_b_3033_){
_start:
{
lean_object* v___x_3034_; 
v___x_3034_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14___redArg(v_m_3031_, v_a_3032_, v_b_3033_);
return v___x_3034_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___at___00Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__5_spec__8_spec__14(lean_object* v_inst_3035_, lean_object* v_R_3036_, lean_object* v_a_3037_, lean_object* v_b_3038_){
_start:
{
lean_object* v___x_3039_; 
v___x_3039_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___at___00Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__5_spec__8_spec__14___redArg(v_a_3037_, v_b_3038_);
return v___x_3039_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__13_spec__20(lean_object* v_00_u03b2_3040_, lean_object* v_a_3041_, lean_object* v_x_3042_){
_start:
{
lean_object* v___x_3043_; 
v___x_3043_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__13_spec__20___redArg(v_a_3041_, v_x_3042_);
return v___x_3043_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__13_spec__20___boxed(lean_object* v_00_u03b2_3044_, lean_object* v_a_3045_, lean_object* v_x_3046_){
_start:
{
lean_object* v_res_3047_; 
v_res_3047_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__13_spec__20(v_00_u03b2_3044_, v_a_3045_, v_x_3046_);
lean_dec(v_x_3046_);
lean_dec_ref(v_a_3045_);
return v_res_3047_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__22(lean_object* v_00_u03b2_3048_, lean_object* v_a_3049_, lean_object* v_x_3050_){
_start:
{
uint8_t v___x_3051_; 
v___x_3051_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__22___redArg(v_a_3049_, v_x_3050_);
return v___x_3051_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__22___boxed(lean_object* v_00_u03b2_3052_, lean_object* v_a_3053_, lean_object* v_x_3054_){
_start:
{
uint8_t v_res_3055_; lean_object* v_r_3056_; 
v_res_3055_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__22(v_00_u03b2_3052_, v_a_3053_, v_x_3054_);
lean_dec(v_x_3054_);
lean_dec_ref(v_a_3053_);
v_r_3056_ = lean_box(v_res_3055_);
return v_r_3056_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__23(lean_object* v_00_u03b2_3057_, lean_object* v_data_3058_){
_start:
{
lean_object* v___x_3059_; 
v___x_3059_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__23___redArg(v_data_3058_);
return v___x_3059_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__24(lean_object* v_00_u03b2_3060_, lean_object* v_a_3061_, lean_object* v_b_3062_, lean_object* v_x_3063_){
_start:
{
lean_object* v___x_3064_; 
v___x_3064_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__24___redArg(v_a_3061_, v_b_3062_, v_x_3063_);
return v___x_3064_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__23_spec__28(lean_object* v_00_u03b2_3065_, lean_object* v_i_3066_, lean_object* v_source_3067_, lean_object* v_target_3068_){
_start:
{
lean_object* v___x_3069_; 
v___x_3069_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__23_spec__28___redArg(v_i_3066_, v_source_3067_, v_target_3068_);
return v___x_3069_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__23_spec__28_spec__29(lean_object* v_00_u03b2_3070_, lean_object* v_x_3071_, lean_object* v_x_3072_){
_start:
{
lean_object* v___x_3073_; 
v___x_3073_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__23_spec__28_spec__29___redArg(v_x_3071_, v_x_3072_);
return v___x_3073_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitChars(lean_object* v_s_3074_){
_start:
{
lean_object* v___x_3075_; lean_object* v___x_3076_; 
v___x_3075_ = lean_string_data(v_s_3074_);
v___x_3076_ = lean_array_mk(v___x_3075_);
return v___x_3076_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_charDiff(lean_object* v_s_3077_, lean_object* v_s_x27_3078_){
_start:
{
lean_object* v___x_3079_; lean_object* v___x_3080_; lean_object* v___x_3081_; lean_object* v___x_3082_; 
v___x_3079_ = l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitChars(v_s_3077_);
v___x_3080_ = l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitChars(v_s_x27_3078_);
v___x_3081_ = l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1(v___x_3079_, v___x_3080_);
v___x_3082_ = l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinCharDiff(v___x_3081_);
lean_dec_ref(v___x_3081_);
return v___x_3082_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_maxDiff(lean_object* v_s_3083_, lean_object* v_s_x27_3084_){
_start:
{
uint8_t v___x_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; uint8_t v___x_3088_; lean_object* v___x_3089_; lean_object* v___x_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; lean_object* v___x_3093_; lean_object* v___x_3094_; 
v___x_3085_ = 1;
v___x_3086_ = lean_box(v___x_3085_);
v___x_3087_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3087_, 0, v___x_3086_);
lean_ctor_set(v___x_3087_, 1, v_s_3083_);
v___x_3088_ = 0;
v___x_3089_ = lean_box(v___x_3088_);
v___x_3090_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3090_, 0, v___x_3089_);
lean_ctor_set(v___x_3090_, 1, v_s_x27_3084_);
v___x_3091_ = lean_unsigned_to_nat(2u);
v___x_3092_ = lean_mk_empty_array_with_capacity(v___x_3091_);
v___x_3093_ = lean_array_push(v___x_3092_, v___x_3087_);
v___x_3094_ = lean_array_push(v___x_3093_, v___x_3090_);
return v___x_3094_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Hint_readableDiff_spec__0(lean_object* v_as_3095_, size_t v_i_3096_, size_t v_stop_3097_, lean_object* v_b_3098_){
_start:
{
lean_object* v___y_3100_; uint8_t v___x_3104_; 
v___x_3104_ = lean_usize_dec_eq(v_i_3096_, v_stop_3097_);
if (v___x_3104_ == 0)
{
lean_object* v___x_3105_; lean_object* v_fst_3106_; uint8_t v___x_3107_; uint8_t v___x_3108_; uint8_t v___x_3109_; 
v___x_3105_ = lean_array_uget_borrowed(v_as_3095_, v_i_3096_);
v_fst_3106_ = lean_ctor_get(v___x_3105_, 0);
v___x_3107_ = 2;
v___x_3108_ = lean_unbox(v_fst_3106_);
v___x_3109_ = l_Lean_Diff_instBEqAction_beq(v___x_3108_, v___x_3107_);
if (v___x_3109_ == 0)
{
lean_object* v___x_3110_; 
lean_inc(v___x_3105_);
v___x_3110_ = lean_array_push(v_b_3098_, v___x_3105_);
v___y_3100_ = v___x_3110_;
goto v___jp_3099_;
}
else
{
v___y_3100_ = v_b_3098_;
goto v___jp_3099_;
}
}
else
{
return v_b_3098_;
}
v___jp_3099_:
{
size_t v___x_3101_; size_t v___x_3102_; 
v___x_3101_ = ((size_t)1ULL);
v___x_3102_ = lean_usize_add(v_i_3096_, v___x_3101_);
v_i_3096_ = v___x_3102_;
v_b_3098_ = v___y_3100_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Hint_readableDiff_spec__0___boxed(lean_object* v_as_3111_, lean_object* v_i_3112_, lean_object* v_stop_3113_, lean_object* v_b_3114_){
_start:
{
size_t v_i_boxed_3115_; size_t v_stop_boxed_3116_; lean_object* v_res_3117_; 
v_i_boxed_3115_ = lean_unbox_usize(v_i_3112_);
lean_dec(v_i_3112_);
v_stop_boxed_3116_ = lean_unbox_usize(v_stop_3113_);
lean_dec(v_stop_3113_);
v_res_3117_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Hint_readableDiff_spec__0(v_as_3111_, v_i_boxed_3115_, v_stop_boxed_3116_, v_b_3114_);
lean_dec_ref(v_as_3111_);
return v_res_3117_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_readableDiff(lean_object* v_s_3118_, lean_object* v_s_x27_3119_, uint8_t v_granularity_3120_){
_start:
{
lean_object* v___y_3122_; lean_object* v___y_3129_; lean_object* v___y_3130_; lean_object* v___y_3131_; lean_object* v___y_3132_; lean_object* v___y_3143_; lean_object* v___y_3144_; lean_object* v___y_3145_; lean_object* v___y_3146_; 
switch(v_granularity_3120_)
{
case 0:
{
lean_object* v___x_3163_; lean_object* v___x_3164_; lean_object* v___y_3166_; uint8_t v___x_3172_; 
v___x_3163_ = lean_string_length(v_s_3118_);
v___x_3164_ = lean_string_length(v_s_x27_3119_);
v___x_3172_ = lean_nat_dec_le(v___x_3163_, v___x_3164_);
if (v___x_3172_ == 0)
{
v___y_3166_ = v___x_3164_;
goto v___jp_3165_;
}
else
{
v___y_3166_ = v___x_3163_;
goto v___jp_3165_;
}
v___jp_3165_:
{
lean_object* v___x_3167_; lean_object* v_maxCharDiffDistance_3168_; lean_object* v___x_3169_; lean_object* v___x_3170_; uint8_t v___x_3171_; 
v___x_3167_ = lean_unsigned_to_nat(5u);
v_maxCharDiffDistance_3168_ = lean_nat_div(v___y_3166_, v___x_3167_);
v___x_3169_ = lean_unsigned_to_nat(1u);
v___x_3170_ = lean_nat_shiftr(v___y_3166_, v___x_3169_);
lean_dec(v___y_3166_);
v___x_3171_ = lean_nat_dec_le(v___x_3163_, v___x_3164_);
if (v___x_3171_ == 0)
{
v___y_3143_ = v___x_3170_;
v___y_3144_ = v___x_3169_;
v___y_3145_ = v_maxCharDiffDistance_3168_;
v___y_3146_ = v___x_3163_;
goto v___jp_3142_;
}
else
{
v___y_3143_ = v___x_3170_;
v___y_3144_ = v___x_3169_;
v___y_3145_ = v_maxCharDiffDistance_3168_;
v___y_3146_ = v___x_3164_;
goto v___jp_3142_;
}
}
}
case 1:
{
lean_object* v___x_3173_; 
v___x_3173_ = l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_charDiff(v_s_3118_, v_s_x27_3119_);
return v___x_3173_;
}
case 2:
{
lean_object* v___x_3174_; 
v___x_3174_ = l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff(v_s_3118_, v_s_x27_3119_);
lean_dec_ref(v_s_x27_3119_);
lean_dec_ref(v_s_3118_);
return v___x_3174_;
}
case 3:
{
lean_object* v___x_3175_; 
v___x_3175_ = l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_maxDiff(v_s_3118_, v_s_x27_3119_);
return v___x_3175_;
}
default: 
{
uint8_t v___x_3176_; lean_object* v___x_3177_; lean_object* v___x_3178_; lean_object* v___x_3179_; lean_object* v___x_3180_; lean_object* v___x_3181_; 
lean_dec_ref(v_s_3118_);
v___x_3176_ = 0;
v___x_3177_ = lean_box(v___x_3176_);
v___x_3178_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3178_, 0, v___x_3177_);
lean_ctor_set(v___x_3178_, 1, v_s_x27_3119_);
v___x_3179_ = lean_unsigned_to_nat(1u);
v___x_3180_ = lean_mk_empty_array_with_capacity(v___x_3179_);
v___x_3181_ = lean_array_push(v___x_3180_, v___x_3178_);
return v___x_3181_;
}
}
v___jp_3121_:
{
size_t v_sz_3123_; size_t v___x_3124_; lean_object* v___x_3125_; lean_object* v___x_3126_; lean_object* v___x_3127_; 
v_sz_3123_ = lean_array_size(v___y_3122_);
v___x_3124_ = ((size_t)0ULL);
v___x_3125_ = l_unsafeCast___redArg(v___y_3122_);
lean_dec_ref(v___y_3122_);
v___x_3126_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinCharDiff_spec__0(v_sz_3123_, v___x_3124_, v___x_3125_);
v___x_3127_ = l_unsafeCast___redArg(v___x_3126_);
lean_dec_ref(v___x_3126_);
return v___x_3127_;
}
v___jp_3128_:
{
lean_object* v_charArrDiff_3133_; lean_object* v___x_3134_; lean_object* v___x_3135_; uint8_t v___x_3136_; 
v_charArrDiff_3133_ = l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits___redArg(v___y_3131_);
lean_dec_ref(v___y_3131_);
v___x_3134_ = lean_array_get_size(v_charArrDiff_3133_);
v___x_3135_ = lean_unsigned_to_nat(3u);
v___x_3136_ = lean_nat_dec_le(v___x_3134_, v___x_3135_);
if (v___x_3136_ == 0)
{
lean_object* v_approxEditDistance_3137_; uint8_t v___x_3138_; 
v_approxEditDistance_3137_ = lean_array_get_size(v___y_3132_);
lean_dec_ref(v___y_3132_);
v___x_3138_ = lean_nat_dec_le(v_approxEditDistance_3137_, v___y_3130_);
lean_dec(v___y_3130_);
if (v___x_3138_ == 0)
{
uint8_t v___x_3139_; 
lean_dec_ref(v_charArrDiff_3133_);
v___x_3139_ = lean_nat_dec_le(v_approxEditDistance_3137_, v___y_3129_);
lean_dec(v___y_3129_);
if (v___x_3139_ == 0)
{
lean_object* v___x_3140_; 
v___x_3140_ = l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_maxDiff(v_s_3118_, v_s_x27_3119_);
return v___x_3140_;
}
else
{
lean_object* v___x_3141_; 
v___x_3141_ = l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff(v_s_3118_, v_s_x27_3119_);
lean_dec_ref(v_s_x27_3119_);
lean_dec_ref(v_s_3118_);
return v___x_3141_;
}
}
else
{
lean_dec(v___y_3129_);
lean_dec_ref(v_s_x27_3119_);
lean_dec_ref(v_s_3118_);
v___y_3122_ = v_charArrDiff_3133_;
goto v___jp_3121_;
}
}
else
{
lean_dec_ref(v___y_3132_);
lean_dec(v___y_3130_);
lean_dec(v___y_3129_);
lean_dec_ref(v_s_x27_3119_);
lean_dec_ref(v_s_3118_);
v___y_3122_ = v_charArrDiff_3133_;
goto v___jp_3121_;
}
}
v___jp_3142_:
{
lean_object* v___x_3147_; lean_object* v_maxWordDiffDistance_3148_; lean_object* v___x_3149_; lean_object* v___x_3150_; lean_object* v_charDiffRaw_3151_; lean_object* v___x_3152_; lean_object* v___x_3153_; lean_object* v___x_3154_; uint8_t v___x_3155_; 
v___x_3147_ = lean_nat_shiftr(v___y_3146_, v___y_3144_);
lean_dec(v___y_3146_);
v_maxWordDiffDistance_3148_ = lean_nat_add(v___y_3143_, v___x_3147_);
lean_dec(v___x_3147_);
lean_dec(v___y_3143_);
lean_inc_ref(v_s_3118_);
v___x_3149_ = l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitChars(v_s_3118_);
lean_inc_ref(v_s_x27_3119_);
v___x_3150_ = l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitChars(v_s_x27_3119_);
v_charDiffRaw_3151_ = l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1(v___x_3149_, v___x_3150_);
v___x_3152_ = lean_unsigned_to_nat(0u);
v___x_3153_ = lean_array_get_size(v_charDiffRaw_3151_);
v___x_3154_ = ((lean_object*)(l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1___closed__0));
v___x_3155_ = lean_nat_dec_lt(v___x_3152_, v___x_3153_);
if (v___x_3155_ == 0)
{
v___y_3129_ = v_maxWordDiffDistance_3148_;
v___y_3130_ = v___y_3145_;
v___y_3131_ = v_charDiffRaw_3151_;
v___y_3132_ = v___x_3154_;
goto v___jp_3128_;
}
else
{
uint8_t v___x_3156_; 
v___x_3156_ = lean_nat_dec_le(v___x_3153_, v___x_3153_);
if (v___x_3156_ == 0)
{
if (v___x_3155_ == 0)
{
v___y_3129_ = v_maxWordDiffDistance_3148_;
v___y_3130_ = v___y_3145_;
v___y_3131_ = v_charDiffRaw_3151_;
v___y_3132_ = v___x_3154_;
goto v___jp_3128_;
}
else
{
size_t v___x_3157_; size_t v___x_3158_; lean_object* v___x_3159_; 
v___x_3157_ = ((size_t)0ULL);
v___x_3158_ = lean_usize_of_nat(v___x_3153_);
v___x_3159_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Hint_readableDiff_spec__0(v_charDiffRaw_3151_, v___x_3157_, v___x_3158_, v___x_3154_);
v___y_3129_ = v_maxWordDiffDistance_3148_;
v___y_3130_ = v___y_3145_;
v___y_3131_ = v_charDiffRaw_3151_;
v___y_3132_ = v___x_3159_;
goto v___jp_3128_;
}
}
else
{
size_t v___x_3160_; size_t v___x_3161_; lean_object* v___x_3162_; 
v___x_3160_ = ((size_t)0ULL);
v___x_3161_ = lean_usize_of_nat(v___x_3153_);
v___x_3162_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Hint_readableDiff_spec__0(v_charDiffRaw_3151_, v___x_3160_, v___x_3161_, v___x_3154_);
v___y_3129_ = v_maxWordDiffDistance_3148_;
v___y_3130_ = v___y_3145_;
v___y_3131_ = v_charDiffRaw_3151_;
v___y_3132_ = v___x_3162_;
goto v___jp_3128_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_readableDiff___boxed(lean_object* v_s_3182_, lean_object* v_s_x27_3183_, lean_object* v_granularity_3184_){
_start:
{
uint8_t v_granularity_boxed_3185_; lean_object* v_res_3186_; 
v_granularity_boxed_3185_ = lean_unbox(v_granularity_3184_);
v_res_3186_ = l_Lean_Meta_Hint_readableDiff(v_s_3182_, v_s_x27_3183_, v_granularity_boxed_3185_);
return v_res_3186_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__0(lean_object* v_as_3187_, size_t v_i_3188_, size_t v_stop_3189_, lean_object* v_b_3190_){
_start:
{
uint8_t v___x_3191_; 
v___x_3191_ = lean_usize_dec_eq(v_i_3188_, v_stop_3189_);
if (v___x_3191_ == 0)
{
lean_object* v___x_3192_; lean_object* v_snd_3193_; lean_object* v___x_3194_; size_t v___x_3195_; size_t v___x_3196_; 
v___x_3192_ = lean_array_uget_borrowed(v_as_3187_, v_i_3188_);
v_snd_3193_ = lean_ctor_get(v___x_3192_, 1);
v___x_3194_ = lean_string_append(v_b_3190_, v_snd_3193_);
v___x_3195_ = ((size_t)1ULL);
v___x_3196_ = lean_usize_add(v_i_3188_, v___x_3195_);
v_i_3188_ = v___x_3196_;
v_b_3190_ = v___x_3194_;
goto _start;
}
else
{
return v_b_3190_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__0___boxed(lean_object* v_as_3198_, lean_object* v_i_3199_, lean_object* v_stop_3200_, lean_object* v_b_3201_){
_start:
{
size_t v_i_boxed_3202_; size_t v_stop_boxed_3203_; lean_object* v_res_3204_; 
v_i_boxed_3202_ = lean_unbox_usize(v_i_3199_);
lean_dec(v_i_3199_);
v_stop_boxed_3203_ = lean_unbox_usize(v_stop_3200_);
lean_dec(v_stop_3200_);
v_res_3204_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__0(v_as_3198_, v_i_boxed_3202_, v_stop_boxed_3203_, v_b_3201_);
lean_dec_ref(v_as_3198_);
return v_res_3204_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__1_spec__1___redArg(lean_object* v_t_3205_, lean_object* v___y_3206_){
_start:
{
lean_object* v___x_3208_; lean_object* v_infoState_3209_; uint8_t v_enabled_3210_; 
v___x_3208_ = lean_st_ref_get(v___y_3206_);
v_infoState_3209_ = lean_ctor_get(v___x_3208_, 7);
lean_inc_ref(v_infoState_3209_);
lean_dec(v___x_3208_);
v_enabled_3210_ = lean_ctor_get_uint8(v_infoState_3209_, sizeof(void*)*3);
lean_dec_ref(v_infoState_3209_);
if (v_enabled_3210_ == 0)
{
lean_object* v___x_3211_; lean_object* v___x_3212_; 
lean_dec_ref(v_t_3205_);
v___x_3211_ = lean_box(0);
v___x_3212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3212_, 0, v___x_3211_);
return v___x_3212_;
}
else
{
lean_object* v___x_3213_; lean_object* v_infoState_3214_; lean_object* v_env_3215_; lean_object* v_nextMacroScope_3216_; lean_object* v_ngen_3217_; lean_object* v_auxDeclNGen_3218_; lean_object* v_traceState_3219_; lean_object* v_cache_3220_; lean_object* v_messages_3221_; lean_object* v_snapshotTasks_3222_; lean_object* v___x_3224_; uint8_t v_isShared_3225_; uint8_t v_isSharedCheck_3244_; 
v___x_3213_ = lean_st_ref_take(v___y_3206_);
v_infoState_3214_ = lean_ctor_get(v___x_3213_, 7);
v_env_3215_ = lean_ctor_get(v___x_3213_, 0);
v_nextMacroScope_3216_ = lean_ctor_get(v___x_3213_, 1);
v_ngen_3217_ = lean_ctor_get(v___x_3213_, 2);
v_auxDeclNGen_3218_ = lean_ctor_get(v___x_3213_, 3);
v_traceState_3219_ = lean_ctor_get(v___x_3213_, 4);
v_cache_3220_ = lean_ctor_get(v___x_3213_, 5);
v_messages_3221_ = lean_ctor_get(v___x_3213_, 6);
v_snapshotTasks_3222_ = lean_ctor_get(v___x_3213_, 8);
v_isSharedCheck_3244_ = !lean_is_exclusive(v___x_3213_);
if (v_isSharedCheck_3244_ == 0)
{
v___x_3224_ = v___x_3213_;
v_isShared_3225_ = v_isSharedCheck_3244_;
goto v_resetjp_3223_;
}
else
{
lean_inc(v_snapshotTasks_3222_);
lean_inc(v_infoState_3214_);
lean_inc(v_messages_3221_);
lean_inc(v_cache_3220_);
lean_inc(v_traceState_3219_);
lean_inc(v_auxDeclNGen_3218_);
lean_inc(v_ngen_3217_);
lean_inc(v_nextMacroScope_3216_);
lean_inc(v_env_3215_);
lean_dec(v___x_3213_);
v___x_3224_ = lean_box(0);
v_isShared_3225_ = v_isSharedCheck_3244_;
goto v_resetjp_3223_;
}
v_resetjp_3223_:
{
uint8_t v_enabled_3226_; lean_object* v_assignment_3227_; lean_object* v_lazyAssignment_3228_; lean_object* v_trees_3229_; lean_object* v___x_3231_; uint8_t v_isShared_3232_; uint8_t v_isSharedCheck_3243_; 
v_enabled_3226_ = lean_ctor_get_uint8(v_infoState_3214_, sizeof(void*)*3);
v_assignment_3227_ = lean_ctor_get(v_infoState_3214_, 0);
v_lazyAssignment_3228_ = lean_ctor_get(v_infoState_3214_, 1);
v_trees_3229_ = lean_ctor_get(v_infoState_3214_, 2);
v_isSharedCheck_3243_ = !lean_is_exclusive(v_infoState_3214_);
if (v_isSharedCheck_3243_ == 0)
{
v___x_3231_ = v_infoState_3214_;
v_isShared_3232_ = v_isSharedCheck_3243_;
goto v_resetjp_3230_;
}
else
{
lean_inc(v_trees_3229_);
lean_inc(v_lazyAssignment_3228_);
lean_inc(v_assignment_3227_);
lean_dec(v_infoState_3214_);
v___x_3231_ = lean_box(0);
v_isShared_3232_ = v_isSharedCheck_3243_;
goto v_resetjp_3230_;
}
v_resetjp_3230_:
{
lean_object* v___x_3233_; lean_object* v___x_3234_; lean_object* v___x_3236_; 
v___x_3233_ = lean_box(0);
v___x_3234_ = l_Lean_PersistentArray_push___redArg(v_trees_3229_, v_t_3205_);
if (v_isShared_3232_ == 0)
{
lean_ctor_set(v___x_3231_, 2, v___x_3234_);
v___x_3236_ = v___x_3231_;
goto v_reusejp_3235_;
}
else
{
lean_object* v_reuseFailAlloc_3242_; 
v_reuseFailAlloc_3242_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_3242_, 0, v_assignment_3227_);
lean_ctor_set(v_reuseFailAlloc_3242_, 1, v_lazyAssignment_3228_);
lean_ctor_set(v_reuseFailAlloc_3242_, 2, v___x_3234_);
lean_ctor_set_uint8(v_reuseFailAlloc_3242_, sizeof(void*)*3, v_enabled_3226_);
v___x_3236_ = v_reuseFailAlloc_3242_;
goto v_reusejp_3235_;
}
v_reusejp_3235_:
{
lean_object* v___x_3238_; 
if (v_isShared_3225_ == 0)
{
lean_ctor_set(v___x_3224_, 7, v___x_3236_);
v___x_3238_ = v___x_3224_;
goto v_reusejp_3237_;
}
else
{
lean_object* v_reuseFailAlloc_3241_; 
v_reuseFailAlloc_3241_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3241_, 0, v_env_3215_);
lean_ctor_set(v_reuseFailAlloc_3241_, 1, v_nextMacroScope_3216_);
lean_ctor_set(v_reuseFailAlloc_3241_, 2, v_ngen_3217_);
lean_ctor_set(v_reuseFailAlloc_3241_, 3, v_auxDeclNGen_3218_);
lean_ctor_set(v_reuseFailAlloc_3241_, 4, v_traceState_3219_);
lean_ctor_set(v_reuseFailAlloc_3241_, 5, v_cache_3220_);
lean_ctor_set(v_reuseFailAlloc_3241_, 6, v_messages_3221_);
lean_ctor_set(v_reuseFailAlloc_3241_, 7, v___x_3236_);
lean_ctor_set(v_reuseFailAlloc_3241_, 8, v_snapshotTasks_3222_);
v___x_3238_ = v_reuseFailAlloc_3241_;
goto v_reusejp_3237_;
}
v_reusejp_3237_:
{
lean_object* v___x_3239_; lean_object* v___x_3240_; 
v___x_3239_ = lean_st_ref_put(v___y_3206_, v___x_3238_);
v___x_3240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3240_, 0, v___x_3233_);
return v___x_3240_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__1_spec__1___redArg___boxed(lean_object* v_t_3245_, lean_object* v___y_3246_, lean_object* v___y_3247_){
_start:
{
lean_object* v_res_3248_; 
v_res_3248_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__1_spec__1___redArg(v_t_3245_, v___y_3246_);
lean_dec(v___y_3246_);
return v_res_3248_;
}
}
static lean_object* _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__1___closed__0(void){
_start:
{
lean_object* v___x_3249_; lean_object* v___x_3250_; lean_object* v___x_3251_; 
v___x_3249_ = lean_unsigned_to_nat(32u);
v___x_3250_ = lean_mk_empty_array_with_capacity(v___x_3249_);
v___x_3251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3251_, 0, v___x_3250_);
return v___x_3251_;
}
}
static lean_object* _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__1___closed__1(void){
_start:
{
size_t v___x_3252_; lean_object* v___x_3253_; lean_object* v___x_3254_; lean_object* v___x_3255_; lean_object* v___x_3256_; lean_object* v___x_3257_; 
v___x_3252_ = ((size_t)5ULL);
v___x_3253_ = lean_unsigned_to_nat(0u);
v___x_3254_ = lean_unsigned_to_nat(32u);
v___x_3255_ = lean_mk_empty_array_with_capacity(v___x_3254_);
v___x_3256_ = lean_obj_once(&l_Lean_Elab_pushInfoLeaf___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__1___closed__0, &l_Lean_Elab_pushInfoLeaf___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__1___closed__0_once, _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__1___closed__0);
v___x_3257_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_3257_, 0, v___x_3256_);
lean_ctor_set(v___x_3257_, 1, v___x_3255_);
lean_ctor_set(v___x_3257_, 2, v___x_3253_);
lean_ctor_set(v___x_3257_, 3, v___x_3253_);
lean_ctor_set_usize(v___x_3257_, 4, v___x_3252_);
return v___x_3257_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__1(lean_object* v_t_3258_, lean_object* v___y_3259_, lean_object* v___y_3260_){
_start:
{
lean_object* v___x_3262_; lean_object* v_infoState_3263_; uint8_t v_enabled_3264_; 
v___x_3262_ = lean_st_ref_get(v___y_3260_);
v_infoState_3263_ = lean_ctor_get(v___x_3262_, 7);
lean_inc_ref(v_infoState_3263_);
lean_dec(v___x_3262_);
v_enabled_3264_ = lean_ctor_get_uint8(v_infoState_3263_, sizeof(void*)*3);
lean_dec_ref(v_infoState_3263_);
if (v_enabled_3264_ == 0)
{
lean_object* v___x_3265_; lean_object* v___x_3266_; 
lean_dec_ref(v_t_3258_);
v___x_3265_ = lean_box(0);
v___x_3266_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3266_, 0, v___x_3265_);
return v___x_3266_;
}
else
{
lean_object* v___x_3267_; lean_object* v___x_3268_; lean_object* v___x_3269_; 
v___x_3267_ = lean_obj_once(&l_Lean_Elab_pushInfoLeaf___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__1___closed__1, &l_Lean_Elab_pushInfoLeaf___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__1___closed__1_once, _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__1___closed__1);
v___x_3268_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3268_, 0, v_t_3258_);
lean_ctor_set(v___x_3268_, 1, v___x_3267_);
v___x_3269_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__1_spec__1___redArg(v___x_3268_, v___y_3260_);
return v___x_3269_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__1___boxed(lean_object* v_t_3270_, lean_object* v___y_3271_, lean_object* v___y_3272_, lean_object* v___y_3273_){
_start:
{
lean_object* v_res_3274_; 
v_res_3274_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__1(v_t_3270_, v___y_3271_, v___y_3272_);
lean_dec(v___y_3272_);
lean_dec_ref(v___y_3271_);
return v_res_3274_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___lam__0(lean_object* v___x_3275_, lean_object* v___y_3276_){
_start:
{
lean_object* v___x_3277_; 
v___x_3277_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3277_, 0, v___x_3275_);
lean_ctor_set(v___x_3277_, 1, v___y_3276_);
return v___x_3277_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__1(void){
_start:
{
lean_object* v___x_3279_; lean_object* v___x_3280_; 
v___x_3279_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__0));
v___x_3280_ = l_Lean_stringToMessageData(v___x_3279_);
return v___x_3280_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__3(void){
_start:
{
lean_object* v___x_3282_; lean_object* v___x_3283_; 
v___x_3282_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__2));
v___x_3283_ = l_Lean_stringToMessageData(v___x_3282_);
return v___x_3283_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__29(void){
_start:
{
lean_object* v___x_3332_; lean_object* v___x_3333_; 
v___x_3332_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__28));
v___x_3333_ = l_Lean_Json_mkObj(v___x_3332_);
return v___x_3333_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__30(void){
_start:
{
lean_object* v___x_3334_; lean_object* v___x_3335_; lean_object* v___x_3336_; 
v___x_3334_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__29, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__29_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__29);
v___x_3335_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__19));
v___x_3336_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3336_, 0, v___x_3335_);
lean_ctor_set(v___x_3336_, 1, v___x_3334_);
return v___x_3336_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__31(void){
_start:
{
lean_object* v___x_3337_; lean_object* v___x_3338_; lean_object* v___x_3339_; 
v___x_3337_ = lean_box(0);
v___x_3338_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__30, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__30_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__30);
v___x_3339_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3339_, 0, v___x_3338_);
lean_ctor_set(v___x_3339_, 1, v___x_3337_);
return v___x_3339_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__33(void){
_start:
{
lean_object* v___x_3342_; lean_object* v___x_3343_; 
v___x_3342_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__32));
v___x_3343_ = l_Lean_MessageData_ofFormat(v___x_3342_);
return v___x_3343_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__35(void){
_start:
{
lean_object* v___x_3345_; lean_object* v___x_3346_; 
v___x_3345_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__34));
v___x_3346_ = l_Lean_stringToMessageData(v___x_3345_);
return v___x_3346_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2(lean_object* v_suggestions_3348_, uint8_t v_forceList_3349_, lean_object* v_codeActionPrefix_x3f_3350_, lean_object* v_ref_3351_, lean_object* v_as_3352_, size_t v_sz_3353_, size_t v_i_3354_, lean_object* v_b_3355_, lean_object* v___y_3356_, lean_object* v___y_3357_){
_start:
{
lean_object* v_a_3360_; lean_object* v___y_3365_; lean_object* v___y_3369_; lean_object* v___y_3370_; lean_object* v___y_3371_; lean_object* v___y_3376_; lean_object* v___y_3384_; lean_object* v___y_3385_; lean_object* v___y_3386_; lean_object* v___y_3387_; uint8_t v___x_3404_; 
v___x_3404_ = lean_usize_dec_lt(v_i_3354_, v_sz_3353_);
if (v___x_3404_ == 0)
{
lean_object* v___x_3405_; 
lean_dec(v_ref_3351_);
lean_dec(v_codeActionPrefix_x3f_3350_);
v___x_3405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3405_, 0, v_b_3355_);
return v___x_3405_;
}
else
{
lean_object* v_a_3406_; lean_object* v_span_x3f_3407_; lean_object* v___x_3408_; lean_object* v___y_3410_; uint8_t v___y_3411_; lean_object* v___y_3412_; lean_object* v___y_3413_; lean_object* v___y_3414_; lean_object* v___y_3415_; lean_object* v___y_3443_; uint8_t v___y_3444_; lean_object* v___y_3445_; lean_object* v___y_3446_; lean_object* v___y_3447_; lean_object* v___y_3448_; lean_object* v___y_3449_; lean_object* v___y_3450_; lean_object* v___y_3489_; lean_object* v___y_3490_; lean_object* v___y_3491_; lean_object* v___y_3492_; lean_object* v___y_3493_; lean_object* v___y_3494_; lean_object* v___y_3495_; uint8_t v___y_3496_; lean_object* v___y_3499_; lean_object* v___y_3500_; lean_object* v___y_3501_; lean_object* v___y_3502_; uint8_t v___y_3503_; uint8_t v___y_3504_; lean_object* v___y_3505_; lean_object* v___y_3506_; lean_object* v___y_3507_; lean_object* v___y_3509_; lean_object* v___y_3510_; lean_object* v___y_3511_; lean_object* v___y_3512_; uint8_t v___y_3513_; uint8_t v___y_3514_; lean_object* v___y_3515_; lean_object* v_postInfo_x3f_3516_; lean_object* v___y_3517_; lean_object* v___y_3520_; lean_object* v___y_3521_; lean_object* v___y_3522_; uint8_t v___y_3523_; uint8_t v___y_3524_; lean_object* v___y_3525_; lean_object* v_edits_3526_; lean_object* v___y_3532_; lean_object* v___y_3533_; lean_object* v___y_3534_; lean_object* v_stop_3535_; lean_object* v___y_3536_; lean_object* v___y_3537_; uint8_t v___y_3538_; uint8_t v___y_3539_; lean_object* v___y_3540_; lean_object* v_edits_3541_; lean_object* v___y_3552_; lean_object* v___y_3553_; lean_object* v___y_3554_; lean_object* v___y_3555_; lean_object* v___y_3556_; uint8_t v___y_3557_; uint8_t v___y_3558_; lean_object* v___y_3559_; lean_object* v___y_3560_; lean_object* v_edits_3561_; lean_object* v___y_3562_; lean_object* v___x_3588_; lean_object* v___y_3590_; lean_object* v___y_3591_; lean_object* v___y_3592_; lean_object* v___y_3593_; lean_object* v___y_3594_; lean_object* v___y_3595_; uint8_t v___y_3596_; uint8_t v___y_3597_; lean_object* v___y_3598_; lean_object* v___y_3599_; lean_object* v___y_3636_; lean_object* v___y_3637_; lean_object* v___y_3638_; lean_object* v___y_3639_; lean_object* v___y_3640_; uint8_t v___y_3641_; uint8_t v___y_3642_; lean_object* v___y_3643_; lean_object* v___y_3644_; lean_object* v___y_3654_; 
v_a_3406_ = lean_array_uget_borrowed(v_as_3352_, v_i_3354_);
v_span_x3f_3407_ = lean_ctor_get(v_a_3406_, 1);
v___x_3408_ = ((lean_object*)(l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString___closed__0));
v___x_3588_ = l_Lean_Meta_Tactic_TryThis_instImpl_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12_;
if (lean_obj_tag(v_span_x3f_3407_) == 0)
{
lean_inc(v_ref_3351_);
v___y_3654_ = v_ref_3351_;
goto v___jp_3653_;
}
else
{
lean_object* v_val_3675_; 
v_val_3675_ = lean_ctor_get(v_span_x3f_3407_, 0);
lean_inc(v_val_3675_);
v___y_3654_ = v_val_3675_;
goto v___jp_3653_;
}
v___jp_3409_:
{
lean_object* v___x_3416_; lean_object* v___x_3417_; lean_object* v___x_3418_; lean_object* v___x_3419_; lean_object* v___x_3420_; lean_object* v___x_3421_; lean_object* v___x_3422_; lean_object* v___x_3423_; lean_object* v___x_3424_; lean_object* v___x_3425_; lean_object* v___x_3426_; lean_object* v___x_3427_; lean_object* v___x_3428_; lean_object* v___x_3429_; lean_object* v___f_3430_; 
v___x_3416_ = l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson(v___y_3410_);
v___x_3417_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__9));
v___x_3418_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3418_, 0, v___x_3417_);
lean_ctor_set(v___x_3418_, 1, v___x_3416_);
v___x_3419_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__10));
v___x_3420_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3420_, 0, v___y_3412_);
v___x_3421_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3421_, 0, v___x_3419_);
lean_ctor_set(v___x_3421_, 1, v___x_3420_);
v___x_3422_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__11));
v___x_3423_ = l_Lean_Lsp_instToJsonRange_toJson(v___y_3413_);
v___x_3424_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3424_, 0, v___x_3422_);
lean_ctor_set(v___x_3424_, 1, v___x_3423_);
v___x_3425_ = lean_box(0);
v___x_3426_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3426_, 0, v___x_3424_);
lean_ctor_set(v___x_3426_, 1, v___x_3425_);
v___x_3427_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3427_, 0, v___x_3421_);
lean_ctor_set(v___x_3427_, 1, v___x_3426_);
v___x_3428_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3428_, 0, v___x_3418_);
lean_ctor_set(v___x_3428_, 1, v___x_3427_);
v___x_3429_ = l_Lean_Json_mkObj(v___x_3428_);
lean_dec_ref_known(v___x_3428_, 2);
v___f_3430_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___lam__0), 2, 1);
lean_closure_set(v___f_3430_, 0, v___x_3429_);
if (v___y_3411_ == 0)
{
lean_object* v___x_3431_; 
v___x_3431_ = l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString(v___y_3410_);
lean_dec_ref(v___y_3410_);
v___y_3384_ = v___f_3430_;
v___y_3385_ = v___y_3414_;
v___y_3386_ = v___y_3415_;
v___y_3387_ = v___x_3431_;
goto v___jp_3383_;
}
else
{
lean_object* v___x_3432_; lean_object* v___x_3433_; uint8_t v___x_3434_; 
v___x_3432_ = lean_unsigned_to_nat(0u);
v___x_3433_ = lean_array_get_size(v___y_3410_);
v___x_3434_ = lean_nat_dec_lt(v___x_3432_, v___x_3433_);
if (v___x_3434_ == 0)
{
lean_dec_ref(v___y_3410_);
v___y_3384_ = v___f_3430_;
v___y_3385_ = v___y_3414_;
v___y_3386_ = v___y_3415_;
v___y_3387_ = v___x_3408_;
goto v___jp_3383_;
}
else
{
uint8_t v___x_3435_; 
v___x_3435_ = lean_nat_dec_le(v___x_3433_, v___x_3433_);
if (v___x_3435_ == 0)
{
if (v___x_3434_ == 0)
{
lean_dec_ref(v___y_3410_);
v___y_3384_ = v___f_3430_;
v___y_3385_ = v___y_3414_;
v___y_3386_ = v___y_3415_;
v___y_3387_ = v___x_3408_;
goto v___jp_3383_;
}
else
{
size_t v___x_3436_; size_t v___x_3437_; lean_object* v___x_3438_; 
v___x_3436_ = ((size_t)0ULL);
v___x_3437_ = lean_usize_of_nat(v___x_3433_);
v___x_3438_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__0(v___y_3410_, v___x_3436_, v___x_3437_, v___x_3408_);
lean_dec_ref(v___y_3410_);
v___y_3384_ = v___f_3430_;
v___y_3385_ = v___y_3414_;
v___y_3386_ = v___y_3415_;
v___y_3387_ = v___x_3438_;
goto v___jp_3383_;
}
}
else
{
size_t v___x_3439_; size_t v___x_3440_; lean_object* v___x_3441_; 
v___x_3439_ = ((size_t)0ULL);
v___x_3440_ = lean_usize_of_nat(v___x_3433_);
v___x_3441_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__0(v___y_3410_, v___x_3439_, v___x_3440_, v___x_3408_);
lean_dec_ref(v___y_3410_);
v___y_3384_ = v___f_3430_;
v___y_3385_ = v___y_3414_;
v___y_3386_ = v___y_3415_;
v___y_3387_ = v___x_3441_;
goto v___jp_3383_;
}
}
}
}
v___jp_3442_:
{
if (lean_obj_tag(v___y_3446_) == 0)
{
lean_object* v___x_3451_; uint64_t v_javascriptHash_3452_; lean_object* v_suggestion_3453_; lean_object* v_messageData_x3f_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; lean_object* v___x_3457_; lean_object* v___x_3458_; lean_object* v___x_3459_; lean_object* v___x_3460_; lean_object* v___x_3461_; lean_object* v___x_3462_; lean_object* v___x_3463_; lean_object* v___x_3464_; lean_object* v___x_3465_; lean_object* v___f_3466_; lean_object* v___x_3467_; lean_object* v___x_3468_; lean_object* v___x_3469_; lean_object* v___x_3470_; lean_object* v___x_3471_; lean_object* v___x_3472_; lean_object* v___x_3473_; lean_object* v___x_3474_; lean_object* v___x_3475_; 
lean_dec_ref(v___y_3443_);
v___x_3451_ = l_Lean_Meta_Hint_textInsertionWidget;
v_javascriptHash_3452_ = lean_ctor_get_uint64(v___x_3451_, sizeof(void*)*1);
v_suggestion_3453_ = lean_ctor_get(v___y_3448_, 0);
lean_inc_ref(v_suggestion_3453_);
v_messageData_x3f_3454_ = lean_ctor_get(v___y_3448_, 4);
lean_inc(v_messageData_x3f_3454_);
lean_dec_ref(v___y_3448_);
v___x_3455_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__18));
v___x_3456_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__11));
v___x_3457_ = l_Lean_Lsp_instToJsonRange_toJson(v___y_3447_);
v___x_3458_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3458_, 0, v___x_3456_);
lean_ctor_set(v___x_3458_, 1, v___x_3457_);
v___x_3459_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__10));
v___x_3460_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3460_, 0, v___y_3445_);
v___x_3461_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3461_, 0, v___x_3459_);
lean_ctor_set(v___x_3461_, 1, v___x_3460_);
v___x_3462_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__31, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__31_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__31);
v___x_3463_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3463_, 0, v___x_3461_);
lean_ctor_set(v___x_3463_, 1, v___x_3462_);
v___x_3464_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3464_, 0, v___x_3458_);
lean_ctor_set(v___x_3464_, 1, v___x_3463_);
v___x_3465_ = l_Lean_Json_mkObj(v___x_3464_);
lean_dec_ref_known(v___x_3464_, 2);
v___f_3466_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___lam__0), 2, 1);
lean_closure_set(v___f_3466_, 0, v___x_3465_);
v___x_3467_ = lean_alloc_ctor(0, 2, 8);
lean_ctor_set(v___x_3467_, 0, v___x_3455_);
lean_ctor_set(v___x_3467_, 1, v___f_3466_);
lean_ctor_set_uint64(v___x_3467_, sizeof(void*)*2, v_javascriptHash_3452_);
v___x_3468_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__33, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__33_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__33);
v___x_3469_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3469_, 0, v___x_3467_);
lean_ctor_set(v___x_3469_, 1, v___x_3468_);
v___x_3470_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__1);
v___x_3471_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3471_, 0, v___x_3470_);
lean_ctor_set(v___x_3471_, 1, v___x_3469_);
v___x_3472_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__35, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__35_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__35);
v___x_3473_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3473_, 0, v___x_3471_);
lean_ctor_set(v___x_3473_, 1, v___x_3472_);
v___x_3474_ = l_Lean_stringToMessageData(v___y_3450_);
v___x_3475_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3475_, 0, v___x_3473_);
lean_ctor_set(v___x_3475_, 1, v___x_3474_);
if (lean_obj_tag(v_messageData_x3f_3454_) == 0)
{
if (lean_obj_tag(v_suggestion_3453_) == 0)
{
lean_object* v_a_3476_; lean_object* v___x_3477_; 
v_a_3476_ = lean_ctor_get(v_suggestion_3453_, 1);
lean_inc(v_a_3476_);
lean_dec_ref_known(v_suggestion_3453_, 2);
v___x_3477_ = l_Lean_MessageData_ofSyntax(v_a_3476_);
v___y_3369_ = v___x_3475_;
v___y_3370_ = v___y_3449_;
v___y_3371_ = v___x_3477_;
goto v___jp_3368_;
}
else
{
lean_object* v_a_3478_; lean_object* v___x_3480_; uint8_t v_isShared_3481_; uint8_t v_isSharedCheck_3486_; 
v_a_3478_ = lean_ctor_get(v_suggestion_3453_, 0);
v_isSharedCheck_3486_ = !lean_is_exclusive(v_suggestion_3453_);
if (v_isSharedCheck_3486_ == 0)
{
v___x_3480_ = v_suggestion_3453_;
v_isShared_3481_ = v_isSharedCheck_3486_;
goto v_resetjp_3479_;
}
else
{
lean_inc(v_a_3478_);
lean_dec(v_suggestion_3453_);
v___x_3480_ = lean_box(0);
v_isShared_3481_ = v_isSharedCheck_3486_;
goto v_resetjp_3479_;
}
v_resetjp_3479_:
{
lean_object* v___x_3483_; 
if (v_isShared_3481_ == 0)
{
lean_ctor_set_tag(v___x_3480_, 3);
v___x_3483_ = v___x_3480_;
goto v_reusejp_3482_;
}
else
{
lean_object* v_reuseFailAlloc_3485_; 
v_reuseFailAlloc_3485_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3485_, 0, v_a_3478_);
v___x_3483_ = v_reuseFailAlloc_3485_;
goto v_reusejp_3482_;
}
v_reusejp_3482_:
{
lean_object* v___x_3484_; 
v___x_3484_ = l_Lean_MessageData_ofFormat(v___x_3483_);
v___y_3369_ = v___x_3475_;
v___y_3370_ = v___y_3449_;
v___y_3371_ = v___x_3484_;
goto v___jp_3368_;
}
}
}
}
else
{
lean_object* v_val_3487_; 
lean_dec_ref(v_suggestion_3453_);
v_val_3487_ = lean_ctor_get(v_messageData_x3f_3454_, 0);
lean_inc(v_val_3487_);
lean_dec_ref_known(v_messageData_x3f_3454_, 1);
v___y_3369_ = v___x_3475_;
v___y_3370_ = v___y_3449_;
v___y_3371_ = v_val_3487_;
goto v___jp_3368_;
}
}
else
{
lean_dec_ref_known(v___y_3446_, 1);
lean_dec_ref(v___y_3448_);
v___y_3410_ = v___y_3443_;
v___y_3411_ = v___y_3444_;
v___y_3412_ = v___y_3445_;
v___y_3413_ = v___y_3447_;
v___y_3414_ = v___y_3450_;
v___y_3415_ = v___y_3449_;
goto v___jp_3409_;
}
}
v___jp_3488_:
{
if (v___y_3496_ == 0)
{
lean_object* v_messageData_x3f_3497_; 
v_messageData_x3f_3497_ = lean_ctor_get(v___y_3493_, 4);
if (lean_obj_tag(v_messageData_x3f_3497_) == 0)
{
lean_dec_ref(v___y_3493_);
lean_dec(v___y_3491_);
v___y_3410_ = v___y_3489_;
v___y_3411_ = v___y_3496_;
v___y_3412_ = v___y_3490_;
v___y_3413_ = v___y_3492_;
v___y_3414_ = v___y_3495_;
v___y_3415_ = v___y_3494_;
goto v___jp_3409_;
}
else
{
v___y_3443_ = v___y_3489_;
v___y_3444_ = v___y_3496_;
v___y_3445_ = v___y_3490_;
v___y_3446_ = v___y_3491_;
v___y_3447_ = v___y_3492_;
v___y_3448_ = v___y_3493_;
v___y_3449_ = v___y_3494_;
v___y_3450_ = v___y_3495_;
goto v___jp_3442_;
}
}
else
{
v___y_3443_ = v___y_3489_;
v___y_3444_ = v___y_3496_;
v___y_3445_ = v___y_3490_;
v___y_3446_ = v___y_3491_;
v___y_3447_ = v___y_3492_;
v___y_3448_ = v___y_3493_;
v___y_3449_ = v___y_3494_;
v___y_3450_ = v___y_3495_;
goto v___jp_3442_;
}
}
v___jp_3498_:
{
if (v___y_3504_ == 4)
{
v___y_3489_ = v___y_3499_;
v___y_3490_ = v___y_3500_;
v___y_3491_ = v___y_3501_;
v___y_3492_ = v___y_3502_;
v___y_3493_ = v___y_3505_;
v___y_3494_ = v___y_3507_;
v___y_3495_ = v___y_3506_;
v___y_3496_ = v___x_3404_;
goto v___jp_3488_;
}
else
{
v___y_3489_ = v___y_3499_;
v___y_3490_ = v___y_3500_;
v___y_3491_ = v___y_3501_;
v___y_3492_ = v___y_3502_;
v___y_3493_ = v___y_3505_;
v___y_3494_ = v___y_3507_;
v___y_3495_ = v___y_3506_;
v___y_3496_ = v___y_3503_;
goto v___jp_3488_;
}
}
v___jp_3508_:
{
if (lean_obj_tag(v_postInfo_x3f_3516_) == 0)
{
v___y_3499_ = v___y_3509_;
v___y_3500_ = v___y_3510_;
v___y_3501_ = v___y_3511_;
v___y_3502_ = v___y_3512_;
v___y_3503_ = v___y_3514_;
v___y_3504_ = v___y_3513_;
v___y_3505_ = v___y_3515_;
v___y_3506_ = v___y_3517_;
v___y_3507_ = v___x_3408_;
goto v___jp_3498_;
}
else
{
lean_object* v_val_3518_; 
v_val_3518_ = lean_ctor_get(v_postInfo_x3f_3516_, 0);
lean_inc(v_val_3518_);
lean_dec_ref_known(v_postInfo_x3f_3516_, 1);
v___y_3499_ = v___y_3509_;
v___y_3500_ = v___y_3510_;
v___y_3501_ = v___y_3511_;
v___y_3502_ = v___y_3512_;
v___y_3503_ = v___y_3514_;
v___y_3504_ = v___y_3513_;
v___y_3505_ = v___y_3515_;
v___y_3506_ = v___y_3517_;
v___y_3507_ = v_val_3518_;
goto v___jp_3498_;
}
}
v___jp_3519_:
{
lean_object* v_preInfo_x3f_3527_; 
v_preInfo_x3f_3527_ = lean_ctor_get(v___y_3525_, 1);
if (lean_obj_tag(v_preInfo_x3f_3527_) == 0)
{
lean_object* v_postInfo_x3f_3528_; 
v_postInfo_x3f_3528_ = lean_ctor_get(v___y_3525_, 2);
lean_inc(v_postInfo_x3f_3528_);
v___y_3509_ = v_edits_3526_;
v___y_3510_ = v___y_3520_;
v___y_3511_ = v___y_3521_;
v___y_3512_ = v___y_3522_;
v___y_3513_ = v___y_3524_;
v___y_3514_ = v___y_3523_;
v___y_3515_ = v___y_3525_;
v_postInfo_x3f_3516_ = v_postInfo_x3f_3528_;
v___y_3517_ = v___x_3408_;
goto v___jp_3508_;
}
else
{
lean_object* v_postInfo_x3f_3529_; lean_object* v_val_3530_; 
v_postInfo_x3f_3529_ = lean_ctor_get(v___y_3525_, 2);
lean_inc(v_postInfo_x3f_3529_);
v_val_3530_ = lean_ctor_get(v_preInfo_x3f_3527_, 0);
lean_inc(v_val_3530_);
v___y_3509_ = v_edits_3526_;
v___y_3510_ = v___y_3520_;
v___y_3511_ = v___y_3521_;
v___y_3512_ = v___y_3522_;
v___y_3513_ = v___y_3524_;
v___y_3514_ = v___y_3523_;
v___y_3515_ = v___y_3525_;
v_postInfo_x3f_3516_ = v_postInfo_x3f_3529_;
v___y_3517_ = v_val_3530_;
goto v___jp_3508_;
}
}
v___jp_3531_:
{
lean_object* v___x_3542_; lean_object* v___x_3543_; uint8_t v___x_3544_; 
v___x_3542_ = lean_unsigned_to_nat(1u);
v___x_3543_ = lean_nat_add(v___y_3534_, v___x_3542_);
v___x_3544_ = lean_nat_dec_le(v___x_3543_, v_stop_3535_);
lean_dec(v___x_3543_);
if (v___x_3544_ == 0)
{
lean_dec(v_stop_3535_);
lean_dec(v___y_3534_);
v___y_3520_ = v___y_3532_;
v___y_3521_ = v___y_3536_;
v___y_3522_ = v___y_3537_;
v___y_3523_ = v___y_3539_;
v___y_3524_ = v___y_3538_;
v___y_3525_ = v___y_3540_;
v_edits_3526_ = v_edits_3541_;
goto v___jp_3519_;
}
else
{
lean_object* v_source_3545_; uint8_t v___x_3546_; lean_object* v___x_3547_; lean_object* v___x_3548_; lean_object* v___x_3549_; lean_object* v___x_3550_; 
v_source_3545_ = lean_ctor_get(v___y_3533_, 0);
v___x_3546_ = 2;
v___x_3547_ = lean_string_utf8_extract(v_source_3545_, v___y_3534_, v_stop_3535_);
lean_dec(v_stop_3535_);
lean_dec(v___y_3534_);
v___x_3548_ = lean_box(v___x_3546_);
v___x_3549_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3549_, 0, v___x_3548_);
lean_ctor_set(v___x_3549_, 1, v___x_3547_);
v___x_3550_ = lean_array_push(v_edits_3541_, v___x_3549_);
v___y_3520_ = v___y_3532_;
v___y_3521_ = v___y_3536_;
v___y_3522_ = v___y_3537_;
v___y_3523_ = v___y_3539_;
v___y_3524_ = v___y_3538_;
v___y_3525_ = v___y_3540_;
v_edits_3526_ = v___x_3550_;
goto v___jp_3519_;
}
}
v___jp_3551_:
{
if (lean_obj_tag(v___y_3555_) == 0)
{
lean_dec(v___y_3560_);
lean_dec_ref(v___y_3554_);
lean_dec(v___y_3553_);
v___y_3520_ = v___y_3552_;
v___y_3521_ = v___y_3555_;
v___y_3522_ = v___y_3556_;
v___y_3523_ = v___y_3558_;
v___y_3524_ = v___y_3557_;
v___y_3525_ = v___y_3559_;
v_edits_3526_ = v_edits_3561_;
goto v___jp_3519_;
}
else
{
lean_object* v_val_3563_; lean_object* v___x_3564_; 
v_val_3563_ = lean_ctor_get(v___y_3555_, 0);
v___x_3564_ = l_Lean_Syntax_getRange_x3f(v_val_3563_, v___y_3558_);
if (lean_obj_tag(v___x_3564_) == 1)
{
lean_object* v_val_3565_; uint8_t v___x_3566_; 
v_val_3565_ = lean_ctor_get(v___x_3564_, 0);
lean_inc(v_val_3565_);
lean_dec_ref_known(v___x_3564_, 1);
v___x_3566_ = l_Lean_Syntax_Range_includes(v_val_3565_, v___y_3554_, v___y_3558_, v___y_3558_);
lean_dec_ref(v___y_3554_);
if (v___x_3566_ == 0)
{
lean_dec(v_val_3565_);
lean_dec(v___y_3560_);
lean_dec(v___y_3553_);
v___y_3520_ = v___y_3552_;
v___y_3521_ = v___y_3555_;
v___y_3522_ = v___y_3556_;
v___y_3523_ = v___y_3558_;
v___y_3524_ = v___y_3557_;
v___y_3525_ = v___y_3559_;
v_edits_3526_ = v_edits_3561_;
goto v___jp_3519_;
}
else
{
lean_object* v_toCold_3567_; lean_object* v_fileMap_3568_; lean_object* v_start_3569_; lean_object* v_stop_3570_; lean_object* v___x_3572_; uint8_t v_isShared_3573_; uint8_t v_isSharedCheck_3587_; 
v_toCold_3567_ = lean_ctor_get(v___y_3562_, 0);
v_fileMap_3568_ = lean_ctor_get(v_toCold_3567_, 1);
v_start_3569_ = lean_ctor_get(v_val_3565_, 0);
v_stop_3570_ = lean_ctor_get(v_val_3565_, 1);
v_isSharedCheck_3587_ = !lean_is_exclusive(v_val_3565_);
if (v_isSharedCheck_3587_ == 0)
{
v___x_3572_ = v_val_3565_;
v_isShared_3573_ = v_isSharedCheck_3587_;
goto v_resetjp_3571_;
}
else
{
lean_inc(v_stop_3570_);
lean_inc(v_start_3569_);
lean_dec(v_val_3565_);
v___x_3572_ = lean_box(0);
v_isShared_3573_ = v_isSharedCheck_3587_;
goto v_resetjp_3571_;
}
v_resetjp_3571_:
{
lean_object* v___x_3574_; lean_object* v___x_3575_; uint8_t v___x_3576_; 
v___x_3574_ = lean_unsigned_to_nat(1u);
v___x_3575_ = lean_nat_add(v_start_3569_, v___x_3574_);
v___x_3576_ = lean_nat_dec_le(v___x_3575_, v___y_3560_);
lean_dec(v___x_3575_);
if (v___x_3576_ == 0)
{
lean_del_object(v___x_3572_);
lean_dec(v_start_3569_);
lean_dec(v___y_3560_);
v___y_3532_ = v___y_3552_;
v___y_3533_ = v_fileMap_3568_;
v___y_3534_ = v___y_3553_;
v_stop_3535_ = v_stop_3570_;
v___y_3536_ = v___y_3555_;
v___y_3537_ = v___y_3556_;
v___y_3538_ = v___y_3557_;
v___y_3539_ = v___y_3558_;
v___y_3540_ = v___y_3559_;
v_edits_3541_ = v_edits_3561_;
goto v___jp_3531_;
}
else
{
lean_object* v_source_3577_; uint8_t v___x_3578_; lean_object* v___x_3579_; lean_object* v___x_3580_; lean_object* v___x_3582_; 
v_source_3577_ = lean_ctor_get(v_fileMap_3568_, 0);
v___x_3578_ = 2;
v___x_3579_ = lean_string_utf8_extract(v_source_3577_, v_start_3569_, v___y_3560_);
lean_dec(v___y_3560_);
lean_dec(v_start_3569_);
v___x_3580_ = lean_box(v___x_3578_);
if (v_isShared_3573_ == 0)
{
lean_ctor_set(v___x_3572_, 1, v___x_3579_);
lean_ctor_set(v___x_3572_, 0, v___x_3580_);
v___x_3582_ = v___x_3572_;
goto v_reusejp_3581_;
}
else
{
lean_object* v_reuseFailAlloc_3586_; 
v_reuseFailAlloc_3586_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3586_, 0, v___x_3580_);
lean_ctor_set(v_reuseFailAlloc_3586_, 1, v___x_3579_);
v___x_3582_ = v_reuseFailAlloc_3586_;
goto v_reusejp_3581_;
}
v_reusejp_3581_:
{
lean_object* v___x_3583_; lean_object* v___x_3584_; lean_object* v___x_3585_; 
v___x_3583_ = lean_mk_empty_array_with_capacity(v___x_3574_);
v___x_3584_ = lean_array_push(v___x_3583_, v___x_3582_);
v___x_3585_ = l_Array_append___redArg(v___x_3584_, v_edits_3561_);
lean_dec_ref(v_edits_3561_);
v___y_3532_ = v___y_3552_;
v___y_3533_ = v_fileMap_3568_;
v___y_3534_ = v___y_3553_;
v_stop_3535_ = v_stop_3570_;
v___y_3536_ = v___y_3555_;
v___y_3537_ = v___y_3556_;
v___y_3538_ = v___y_3557_;
v___y_3539_ = v___y_3558_;
v___y_3540_ = v___y_3559_;
v_edits_3541_ = v___x_3585_;
goto v___jp_3531_;
}
}
}
}
}
else
{
lean_dec(v___x_3564_);
lean_dec(v___y_3560_);
lean_dec_ref(v___y_3554_);
lean_dec(v___y_3553_);
v___y_3520_ = v___y_3552_;
v___y_3521_ = v___y_3555_;
v___y_3522_ = v___y_3556_;
v___y_3523_ = v___y_3558_;
v___y_3524_ = v___y_3557_;
v___y_3525_ = v___y_3559_;
v_edits_3526_ = v_edits_3561_;
goto v___jp_3519_;
}
}
}
v___jp_3589_:
{
lean_object* v___x_3600_; lean_object* v___x_3601_; lean_object* v___x_3602_; lean_object* v___x_3603_; lean_object* v___x_3604_; 
lean_inc_ref(v___y_3598_);
v___x_3600_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3600_, 0, v___y_3595_);
lean_ctor_set(v___x_3600_, 1, v___y_3599_);
lean_ctor_set(v___x_3600_, 2, v___y_3598_);
v___x_3601_ = l___private_Init_Dynamic_0__Dynamic_mkImpl___redArg(v___x_3588_, v___x_3600_);
lean_dec_ref_known(v___x_3600_, 3);
v___x_3602_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3602_, 0, v___y_3590_);
lean_ctor_set(v___x_3602_, 1, v___x_3601_);
v___x_3603_ = lean_alloc_ctor(10, 1, 0);
lean_ctor_set(v___x_3603_, 0, v___x_3602_);
v___x_3604_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__1(v___x_3603_, v___y_3356_, v___y_3357_);
if (lean_obj_tag(v___x_3604_) == 0)
{
lean_object* v_messageData_x3f_3605_; 
lean_dec_ref_known(v___x_3604_, 1);
v_messageData_x3f_3605_ = lean_ctor_get(v___y_3598_, 4);
if (lean_obj_tag(v_messageData_x3f_3605_) == 1)
{
lean_object* v_start_3606_; lean_object* v_stop_3607_; lean_object* v_val_3608_; lean_object* v___x_3609_; lean_object* v___x_3610_; uint8_t v___x_3611_; lean_object* v___x_3612_; lean_object* v___x_3613_; lean_object* v___x_3614_; lean_object* v___x_3615_; lean_object* v___x_3616_; lean_object* v___x_3617_; lean_object* v___x_3618_; lean_object* v___x_3619_; 
v_start_3606_ = lean_ctor_get(v___y_3592_, 0);
lean_inc(v_start_3606_);
v_stop_3607_ = lean_ctor_get(v___y_3592_, 1);
lean_inc(v_stop_3607_);
v_val_3608_ = lean_ctor_get(v_messageData_x3f_3605_, 0);
v___x_3609_ = lean_box(0);
lean_inc(v_val_3608_);
v___x_3610_ = l_Lean_MessageData_format(v_val_3608_, v___x_3609_);
v___x_3611_ = 0;
v___x_3612_ = l_Std_Format_defWidth;
v___x_3613_ = lean_unsigned_to_nat(0u);
v___x_3614_ = l_Std_Format_pretty(v___x_3610_, v___x_3612_, v___x_3613_, v___x_3613_);
v___x_3615_ = lean_box(v___x_3611_);
v___x_3616_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3616_, 0, v___x_3615_);
lean_ctor_set(v___x_3616_, 1, v___x_3614_);
v___x_3617_ = lean_unsigned_to_nat(1u);
v___x_3618_ = lean_mk_empty_array_with_capacity(v___x_3617_);
v___x_3619_ = lean_array_push(v___x_3618_, v___x_3616_);
v___y_3552_ = v___y_3591_;
v___y_3553_ = v_stop_3607_;
v___y_3554_ = v___y_3592_;
v___y_3555_ = v___y_3593_;
v___y_3556_ = v___y_3594_;
v___y_3557_ = v___y_3597_;
v___y_3558_ = v___y_3596_;
v___y_3559_ = v___y_3598_;
v___y_3560_ = v_start_3606_;
v_edits_3561_ = v___x_3619_;
v___y_3562_ = v___y_3356_;
goto v___jp_3551_;
}
else
{
lean_object* v_toCold_3620_; lean_object* v_fileMap_3621_; lean_object* v_start_3622_; lean_object* v_stop_3623_; lean_object* v_source_3624_; lean_object* v___x_3625_; lean_object* v___x_3626_; 
v_toCold_3620_ = lean_ctor_get(v___y_3356_, 0);
v_fileMap_3621_ = lean_ctor_get(v_toCold_3620_, 1);
v_start_3622_ = lean_ctor_get(v___y_3592_, 0);
lean_inc(v_start_3622_);
v_stop_3623_ = lean_ctor_get(v___y_3592_, 1);
lean_inc(v_stop_3623_);
v_source_3624_ = lean_ctor_get(v_fileMap_3621_, 0);
v___x_3625_ = lean_string_utf8_extract(v_source_3624_, v_start_3622_, v_stop_3623_);
lean_inc_ref(v___y_3591_);
v___x_3626_ = l_Lean_Meta_Hint_readableDiff(v___x_3625_, v___y_3591_, v___y_3597_);
v___y_3552_ = v___y_3591_;
v___y_3553_ = v_stop_3623_;
v___y_3554_ = v___y_3592_;
v___y_3555_ = v___y_3593_;
v___y_3556_ = v___y_3594_;
v___y_3557_ = v___y_3597_;
v___y_3558_ = v___y_3596_;
v___y_3559_ = v___y_3598_;
v___y_3560_ = v_start_3622_;
v_edits_3561_ = v___x_3626_;
v___y_3562_ = v___y_3356_;
goto v___jp_3551_;
}
}
else
{
lean_object* v_a_3627_; lean_object* v___x_3629_; uint8_t v_isShared_3630_; uint8_t v_isSharedCheck_3634_; 
lean_dec_ref(v___y_3598_);
lean_dec_ref(v___y_3594_);
lean_dec(v___y_3593_);
lean_dec_ref(v___y_3592_);
lean_dec_ref(v___y_3591_);
lean_dec_ref(v_b_3355_);
lean_dec(v_ref_3351_);
lean_dec(v_codeActionPrefix_x3f_3350_);
v_a_3627_ = lean_ctor_get(v___x_3604_, 0);
v_isSharedCheck_3634_ = !lean_is_exclusive(v___x_3604_);
if (v_isSharedCheck_3634_ == 0)
{
v___x_3629_ = v___x_3604_;
v_isShared_3630_ = v_isSharedCheck_3634_;
goto v_resetjp_3628_;
}
else
{
lean_inc(v_a_3627_);
lean_dec(v___x_3604_);
v___x_3629_ = lean_box(0);
v_isShared_3630_ = v_isSharedCheck_3634_;
goto v_resetjp_3628_;
}
v_resetjp_3628_:
{
lean_object* v___x_3632_; 
if (v_isShared_3630_ == 0)
{
v___x_3632_ = v___x_3629_;
goto v_reusejp_3631_;
}
else
{
lean_object* v_reuseFailAlloc_3633_; 
v_reuseFailAlloc_3633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3633_, 0, v_a_3627_);
v___x_3632_ = v_reuseFailAlloc_3633_;
goto v_reusejp_3631_;
}
v_reusejp_3631_:
{
return v___x_3632_;
}
}
}
}
v___jp_3635_:
{
lean_object* v_toCodeActionTitle_x3f_3645_; lean_object* v___x_3646_; 
v_toCodeActionTitle_x3f_3645_ = lean_ctor_get(v___y_3643_, 5);
v___x_3646_ = l_Lean_Syntax_ofRange(v___y_3644_, v___x_3404_);
if (lean_obj_tag(v_toCodeActionTitle_x3f_3645_) == 0)
{
if (lean_obj_tag(v_codeActionPrefix_x3f_3350_) == 0)
{
lean_object* v___x_3647_; lean_object* v___x_3648_; 
v___x_3647_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__36));
v___x_3648_ = lean_string_append(v___x_3647_, v___y_3636_);
v___y_3590_ = v___x_3646_;
v___y_3591_ = v___y_3636_;
v___y_3592_ = v___y_3637_;
v___y_3593_ = v___y_3638_;
v___y_3594_ = v___y_3640_;
v___y_3595_ = v___y_3639_;
v___y_3596_ = v___y_3642_;
v___y_3597_ = v___y_3641_;
v___y_3598_ = v___y_3643_;
v___y_3599_ = v___x_3648_;
goto v___jp_3589_;
}
else
{
lean_object* v_val_3649_; lean_object* v___x_3650_; 
v_val_3649_ = lean_ctor_get(v_codeActionPrefix_x3f_3350_, 0);
lean_inc(v_val_3649_);
v___x_3650_ = lean_string_append(v_val_3649_, v___y_3636_);
v___y_3590_ = v___x_3646_;
v___y_3591_ = v___y_3636_;
v___y_3592_ = v___y_3637_;
v___y_3593_ = v___y_3638_;
v___y_3594_ = v___y_3640_;
v___y_3595_ = v___y_3639_;
v___y_3596_ = v___y_3642_;
v___y_3597_ = v___y_3641_;
v___y_3598_ = v___y_3643_;
v___y_3599_ = v___x_3650_;
goto v___jp_3589_;
}
}
else
{
lean_object* v_val_3651_; lean_object* v___x_3652_; 
v_val_3651_ = lean_ctor_get(v_toCodeActionTitle_x3f_3645_, 0);
lean_inc(v_val_3651_);
lean_inc_ref(v___y_3636_);
v___x_3652_ = lean_apply_1(v_val_3651_, v___y_3636_);
v___y_3590_ = v___x_3646_;
v___y_3591_ = v___y_3636_;
v___y_3592_ = v___y_3637_;
v___y_3593_ = v___y_3638_;
v___y_3594_ = v___y_3640_;
v___y_3595_ = v___y_3639_;
v___y_3596_ = v___y_3642_;
v___y_3597_ = v___y_3641_;
v___y_3598_ = v___y_3643_;
v___y_3599_ = v___x_3652_;
goto v___jp_3589_;
}
}
v___jp_3653_:
{
uint8_t v___x_3655_; lean_object* v___x_3656_; 
v___x_3655_ = 0;
v___x_3656_ = l_Lean_Syntax_getRange_x3f(v___y_3654_, v___x_3655_);
lean_dec(v___y_3654_);
if (lean_obj_tag(v___x_3656_) == 1)
{
lean_object* v_val_3657_; lean_object* v_toTryThisSuggestion_3658_; lean_object* v_previewSpan_x3f_3659_; uint8_t v_diffGranularity_3660_; lean_object* v___x_3661_; 
v_val_3657_ = lean_ctor_get(v___x_3656_, 0);
lean_inc_n(v_val_3657_, 2);
lean_dec_ref_known(v___x_3656_, 1);
v_toTryThisSuggestion_3658_ = lean_ctor_get(v_a_3406_, 0);
v_previewSpan_x3f_3659_ = lean_ctor_get(v_a_3406_, 2);
v_diffGranularity_3660_ = lean_ctor_get_uint8(v_a_3406_, sizeof(void*)*3);
lean_inc_ref(v_toTryThisSuggestion_3658_);
v___x_3661_ = l_Lean_Meta_Tactic_TryThis_Suggestion_processEdit(v_toTryThisSuggestion_3658_, v_val_3657_, v___y_3356_, v___y_3357_);
if (lean_obj_tag(v___x_3661_) == 0)
{
lean_object* v_a_3662_; lean_object* v_range_3663_; lean_object* v_newText_3664_; lean_object* v___x_3665_; 
v_a_3662_ = lean_ctor_get(v___x_3661_, 0);
lean_inc(v_a_3662_);
lean_dec_ref_known(v___x_3661_, 1);
v_range_3663_ = lean_ctor_get(v_a_3662_, 0);
lean_inc_ref(v_range_3663_);
v_newText_3664_ = lean_ctor_get(v_a_3662_, 1);
lean_inc_ref(v_newText_3664_);
v___x_3665_ = l_Lean_Syntax_getRange_x3f(v_ref_3351_, v___x_3655_);
if (lean_obj_tag(v___x_3665_) == 0)
{
lean_inc_ref(v_toTryThisSuggestion_3658_);
lean_inc(v_previewSpan_x3f_3659_);
lean_inc(v_val_3657_);
v___y_3636_ = v_newText_3664_;
v___y_3637_ = v_val_3657_;
v___y_3638_ = v_previewSpan_x3f_3659_;
v___y_3639_ = v_a_3662_;
v___y_3640_ = v_range_3663_;
v___y_3641_ = v_diffGranularity_3660_;
v___y_3642_ = v___x_3655_;
v___y_3643_ = v_toTryThisSuggestion_3658_;
v___y_3644_ = v_val_3657_;
goto v___jp_3635_;
}
else
{
lean_object* v_val_3666_; 
v_val_3666_ = lean_ctor_get(v___x_3665_, 0);
lean_inc(v_val_3666_);
lean_dec_ref_known(v___x_3665_, 1);
lean_inc_ref(v_toTryThisSuggestion_3658_);
lean_inc(v_previewSpan_x3f_3659_);
v___y_3636_ = v_newText_3664_;
v___y_3637_ = v_val_3657_;
v___y_3638_ = v_previewSpan_x3f_3659_;
v___y_3639_ = v_a_3662_;
v___y_3640_ = v_range_3663_;
v___y_3641_ = v_diffGranularity_3660_;
v___y_3642_ = v___x_3655_;
v___y_3643_ = v_toTryThisSuggestion_3658_;
v___y_3644_ = v_val_3666_;
goto v___jp_3635_;
}
}
else
{
lean_object* v_a_3667_; lean_object* v___x_3669_; uint8_t v_isShared_3670_; uint8_t v_isSharedCheck_3674_; 
lean_dec(v_val_3657_);
lean_dec_ref(v_b_3355_);
lean_dec(v_ref_3351_);
lean_dec(v_codeActionPrefix_x3f_3350_);
v_a_3667_ = lean_ctor_get(v___x_3661_, 0);
v_isSharedCheck_3674_ = !lean_is_exclusive(v___x_3661_);
if (v_isSharedCheck_3674_ == 0)
{
v___x_3669_ = v___x_3661_;
v_isShared_3670_ = v_isSharedCheck_3674_;
goto v_resetjp_3668_;
}
else
{
lean_inc(v_a_3667_);
lean_dec(v___x_3661_);
v___x_3669_ = lean_box(0);
v_isShared_3670_ = v_isSharedCheck_3674_;
goto v_resetjp_3668_;
}
v_resetjp_3668_:
{
lean_object* v___x_3672_; 
if (v_isShared_3670_ == 0)
{
v___x_3672_ = v___x_3669_;
goto v_reusejp_3671_;
}
else
{
lean_object* v_reuseFailAlloc_3673_; 
v_reuseFailAlloc_3673_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3673_, 0, v_a_3667_);
v___x_3672_ = v_reuseFailAlloc_3673_;
goto v_reusejp_3671_;
}
v_reusejp_3671_:
{
return v___x_3672_;
}
}
}
}
else
{
lean_dec(v___x_3656_);
v_a_3360_ = v_b_3355_;
goto v___jp_3359_;
}
}
}
v___jp_3359_:
{
size_t v___x_3361_; size_t v___x_3362_; 
v___x_3361_ = ((size_t)1ULL);
v___x_3362_ = lean_usize_add(v_i_3354_, v___x_3361_);
v_i_3354_ = v___x_3362_;
v_b_3355_ = v_a_3360_;
goto _start;
}
v___jp_3364_:
{
lean_object* v___x_3366_; lean_object* v___x_3367_; 
v___x_3366_ = l_Lean_MessageData_nestD(v___y_3365_);
v___x_3367_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3367_, 0, v_b_3355_);
lean_ctor_set(v___x_3367_, 1, v___x_3366_);
v_a_3360_ = v___x_3367_;
goto v___jp_3359_;
}
v___jp_3368_:
{
lean_object* v___x_3372_; lean_object* v___x_3373_; lean_object* v___x_3374_; 
v___x_3372_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3372_, 0, v___y_3369_);
lean_ctor_set(v___x_3372_, 1, v___y_3371_);
v___x_3373_ = l_Lean_stringToMessageData(v___y_3370_);
v___x_3374_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3374_, 0, v___x_3372_);
lean_ctor_set(v___x_3374_, 1, v___x_3373_);
v___y_3365_ = v___x_3374_;
goto v___jp_3364_;
}
v___jp_3375_:
{
lean_object* v___x_3377_; lean_object* v___x_3378_; lean_object* v___x_3379_; lean_object* v___x_3380_; lean_object* v___x_3381_; lean_object* v___x_3382_; 
v___x_3377_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__1);
v___x_3378_ = lean_unsigned_to_nat(2u);
v___x_3379_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__3);
v___x_3380_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3380_, 0, v___x_3379_);
lean_ctor_set(v___x_3380_, 1, v___y_3376_);
v___x_3381_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3381_, 0, v___x_3378_);
lean_ctor_set(v___x_3381_, 1, v___x_3380_);
v___x_3382_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3382_, 0, v___x_3377_);
lean_ctor_set(v___x_3382_, 1, v___x_3381_);
v___y_3365_ = v___x_3382_;
goto v___jp_3364_;
}
v___jp_3383_:
{
lean_object* v___x_3388_; uint64_t v_javascriptHash_3389_; lean_object* v___x_3390_; lean_object* v___x_3391_; lean_object* v___x_3392_; lean_object* v___x_3393_; lean_object* v___x_3394_; lean_object* v___x_3395_; lean_object* v___x_3396_; lean_object* v___x_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; lean_object* v___x_3400_; uint8_t v___x_3401_; 
v___x_3388_ = l_Lean_Meta_Hint_tryThisDiffWidget;
v_javascriptHash_3389_ = lean_ctor_get_uint64(v___x_3388_, sizeof(void*)*1);
v___x_3390_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__8));
v___x_3391_ = lean_alloc_ctor(0, 2, 8);
lean_ctor_set(v___x_3391_, 0, v___x_3390_);
lean_ctor_set(v___x_3391_, 1, v___y_3384_);
lean_ctor_set_uint64(v___x_3391_, sizeof(void*)*2, v_javascriptHash_3389_);
v___x_3392_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3392_, 0, v___y_3387_);
v___x_3393_ = l_Lean_MessageData_ofFormat(v___x_3392_);
v___x_3394_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3394_, 0, v___x_3391_);
lean_ctor_set(v___x_3394_, 1, v___x_3393_);
v___x_3395_ = l_Lean_stringToMessageData(v___y_3385_);
v___x_3396_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3396_, 0, v___x_3395_);
lean_ctor_set(v___x_3396_, 1, v___x_3394_);
v___x_3397_ = l_Lean_stringToMessageData(v___y_3386_);
v___x_3398_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3398_, 0, v___x_3396_);
lean_ctor_set(v___x_3398_, 1, v___x_3397_);
v___x_3399_ = lean_array_get_size(v_suggestions_3348_);
v___x_3400_ = lean_unsigned_to_nat(1u);
v___x_3401_ = lean_nat_dec_eq(v___x_3399_, v___x_3400_);
if (v___x_3401_ == 0)
{
v___y_3376_ = v___x_3398_;
goto v___jp_3375_;
}
else
{
if (v_forceList_3349_ == 0)
{
lean_object* v___x_3402_; lean_object* v___x_3403_; 
v___x_3402_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__1);
v___x_3403_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3403_, 0, v___x_3402_);
lean_ctor_set(v___x_3403_, 1, v___x_3398_);
v___y_3365_ = v___x_3403_;
goto v___jp_3364_;
}
else
{
v___y_3376_ = v___x_3398_;
goto v___jp_3375_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___boxed(lean_object* v_suggestions_3676_, lean_object* v_forceList_3677_, lean_object* v_codeActionPrefix_x3f_3678_, lean_object* v_ref_3679_, lean_object* v_as_3680_, lean_object* v_sz_3681_, lean_object* v_i_3682_, lean_object* v_b_3683_, lean_object* v___y_3684_, lean_object* v___y_3685_, lean_object* v___y_3686_){
_start:
{
uint8_t v_forceList_boxed_3687_; size_t v_sz_boxed_3688_; size_t v_i_boxed_3689_; lean_object* v_res_3690_; 
v_forceList_boxed_3687_ = lean_unbox(v_forceList_3677_);
v_sz_boxed_3688_ = lean_unbox_usize(v_sz_3681_);
lean_dec(v_sz_3681_);
v_i_boxed_3689_ = lean_unbox_usize(v_i_3682_);
lean_dec(v_i_3682_);
v_res_3690_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2(v_suggestions_3676_, v_forceList_boxed_3687_, v_codeActionPrefix_x3f_3678_, v_ref_3679_, v_as_3680_, v_sz_boxed_3688_, v_i_boxed_3689_, v_b_3683_, v___y_3684_, v___y_3685_);
lean_dec(v___y_3685_);
lean_dec_ref(v___y_3684_);
lean_dec_ref(v_as_3680_);
lean_dec_ref(v_suggestions_3676_);
return v_res_3690_;
}
}
static lean_object* _init_l_Lean_Meta_Hint_mkSuggestionsMessage___closed__0(void){
_start:
{
lean_object* v___x_3691_; lean_object* v_msg_3692_; 
v___x_3691_ = ((lean_object*)(l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString___closed__0));
v_msg_3692_ = l_Lean_stringToMessageData(v___x_3691_);
return v_msg_3692_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_mkSuggestionsMessage(lean_object* v_suggestions_3693_, lean_object* v_ref_3694_, lean_object* v_codeActionPrefix_x3f_3695_, uint8_t v_forceList_3696_, lean_object* v_a_3697_, lean_object* v_a_3698_){
_start:
{
lean_object* v_msg_3700_; size_t v_sz_3701_; size_t v___x_3702_; lean_object* v___x_3703_; 
v_msg_3700_ = lean_obj_once(&l_Lean_Meta_Hint_mkSuggestionsMessage___closed__0, &l_Lean_Meta_Hint_mkSuggestionsMessage___closed__0_once, _init_l_Lean_Meta_Hint_mkSuggestionsMessage___closed__0);
v_sz_3701_ = lean_array_size(v_suggestions_3693_);
v___x_3702_ = ((size_t)0ULL);
v___x_3703_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2(v_suggestions_3693_, v_forceList_3696_, v_codeActionPrefix_x3f_3695_, v_ref_3694_, v_suggestions_3693_, v_sz_3701_, v___x_3702_, v_msg_3700_, v_a_3697_, v_a_3698_);
return v___x_3703_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_mkSuggestionsMessage___boxed(lean_object* v_suggestions_3704_, lean_object* v_ref_3705_, lean_object* v_codeActionPrefix_x3f_3706_, lean_object* v_forceList_3707_, lean_object* v_a_3708_, lean_object* v_a_3709_, lean_object* v_a_3710_){
_start:
{
uint8_t v_forceList_boxed_3711_; lean_object* v_res_3712_; 
v_forceList_boxed_3711_ = lean_unbox(v_forceList_3707_);
v_res_3712_ = l_Lean_Meta_Hint_mkSuggestionsMessage(v_suggestions_3704_, v_ref_3705_, v_codeActionPrefix_x3f_3706_, v_forceList_boxed_3711_, v_a_3708_, v_a_3709_);
lean_dec(v_a_3709_);
lean_dec_ref(v_a_3708_);
lean_dec_ref(v_suggestions_3704_);
return v_res_3712_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__1_spec__1(lean_object* v_t_3713_, lean_object* v___y_3714_, lean_object* v___y_3715_){
_start:
{
lean_object* v___x_3717_; 
v___x_3717_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__1_spec__1___redArg(v_t_3713_, v___y_3715_);
return v___x_3717_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__1_spec__1___boxed(lean_object* v_t_3718_, lean_object* v___y_3719_, lean_object* v___y_3720_, lean_object* v___y_3721_){
_start:
{
lean_object* v_res_3722_; 
v_res_3722_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__1_spec__1(v_t_3718_, v___y_3719_, v___y_3720_);
lean_dec(v___y_3720_);
lean_dec_ref(v___y_3719_);
return v_res_3722_;
}
}
static lean_object* _init_l_Lean_MessageData_hint___closed__3(void){
_start:
{
lean_object* v___x_3727_; lean_object* v___x_3728_; 
v___x_3727_ = ((lean_object*)(l_Lean_MessageData_hint___closed__2));
v___x_3728_ = l_Lean_stringToMessageData(v___x_3727_);
return v___x_3728_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_hint(lean_object* v_hint_3729_, lean_object* v_suggestions_3730_, lean_object* v_ref_x3f_3731_, lean_object* v_codeActionPrefix_x3f_3732_, uint8_t v_forceList_3733_, lean_object* v_a_3734_, lean_object* v_a_3735_){
_start:
{
lean_object* v___y_3738_; 
if (lean_obj_tag(v_ref_x3f_3731_) == 0)
{
lean_object* v_ref_3753_; 
v_ref_3753_ = lean_ctor_get(v_a_3734_, 2);
lean_inc(v_ref_3753_);
v___y_3738_ = v_ref_3753_;
goto v___jp_3737_;
}
else
{
lean_object* v_val_3754_; 
v_val_3754_ = lean_ctor_get(v_ref_x3f_3731_, 0);
lean_inc(v_val_3754_);
lean_dec_ref_known(v_ref_x3f_3731_, 1);
v___y_3738_ = v_val_3754_;
goto v___jp_3737_;
}
v___jp_3737_:
{
lean_object* v___x_3739_; 
v___x_3739_ = l_Lean_Meta_Hint_mkSuggestionsMessage(v_suggestions_3730_, v___y_3738_, v_codeActionPrefix_x3f_3732_, v_forceList_3733_, v_a_3734_, v_a_3735_);
if (lean_obj_tag(v___x_3739_) == 0)
{
lean_object* v_a_3740_; lean_object* v___x_3742_; uint8_t v_isShared_3743_; uint8_t v_isSharedCheck_3752_; 
v_a_3740_ = lean_ctor_get(v___x_3739_, 0);
v_isSharedCheck_3752_ = !lean_is_exclusive(v___x_3739_);
if (v_isSharedCheck_3752_ == 0)
{
v___x_3742_ = v___x_3739_;
v_isShared_3743_ = v_isSharedCheck_3752_;
goto v_resetjp_3741_;
}
else
{
lean_inc(v_a_3740_);
lean_dec(v___x_3739_);
v___x_3742_ = lean_box(0);
v_isShared_3743_ = v_isSharedCheck_3752_;
goto v_resetjp_3741_;
}
v_resetjp_3741_:
{
lean_object* v___x_3744_; lean_object* v___x_3745_; lean_object* v___x_3746_; lean_object* v___x_3747_; lean_object* v___x_3748_; lean_object* v___x_3750_; 
v___x_3744_ = ((lean_object*)(l_Lean_MessageData_hint___closed__1));
v___x_3745_ = lean_obj_once(&l_Lean_MessageData_hint___closed__3, &l_Lean_MessageData_hint___closed__3_once, _init_l_Lean_MessageData_hint___closed__3);
v___x_3746_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3746_, 0, v___x_3745_);
lean_ctor_set(v___x_3746_, 1, v_hint_3729_);
v___x_3747_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3747_, 0, v___x_3746_);
lean_ctor_set(v___x_3747_, 1, v_a_3740_);
v___x_3748_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_3748_, 0, v___x_3744_);
lean_ctor_set(v___x_3748_, 1, v___x_3747_);
if (v_isShared_3743_ == 0)
{
lean_ctor_set(v___x_3742_, 0, v___x_3748_);
v___x_3750_ = v___x_3742_;
goto v_reusejp_3749_;
}
else
{
lean_object* v_reuseFailAlloc_3751_; 
v_reuseFailAlloc_3751_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3751_, 0, v___x_3748_);
v___x_3750_ = v_reuseFailAlloc_3751_;
goto v_reusejp_3749_;
}
v_reusejp_3749_:
{
return v___x_3750_;
}
}
}
else
{
lean_dec_ref(v_hint_3729_);
return v___x_3739_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_hint___boxed(lean_object* v_hint_3755_, lean_object* v_suggestions_3756_, lean_object* v_ref_x3f_3757_, lean_object* v_codeActionPrefix_x3f_3758_, lean_object* v_forceList_3759_, lean_object* v_a_3760_, lean_object* v_a_3761_, lean_object* v_a_3762_){
_start:
{
uint8_t v_forceList_boxed_3763_; lean_object* v_res_3764_; 
v_forceList_boxed_3763_ = lean_unbox(v_forceList_3759_);
v_res_3764_ = l_Lean_MessageData_hint(v_hint_3755_, v_suggestions_3756_, v_ref_x3f_3757_, v_codeActionPrefix_x3f_3758_, v_forceList_boxed_3763_, v_a_3760_, v_a_3761_);
lean_dec(v_a_3761_);
lean_dec_ref(v_a_3760_);
lean_dec_ref(v_suggestions_3756_);
return v_res_3764_;
}
}
lean_object* runtime_initialize_Lean_Meta_TryThis(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_Diff(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Hint(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_TryThis(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_Diff(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_Hint_textInsertionWidget = _init_l_Lean_Meta_Hint_textInsertionWidget();
lean_mark_persistent(l_Lean_Meta_Hint_textInsertionWidget);
l_Lean_Meta_Hint_tryThisDiffWidget = _init_l_Lean_Meta_Hint_tryThisDiffWidget();
lean_mark_persistent(l_Lean_Meta_Hint_tryThisDiffWidget);
l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__1___closed__0___boxed__const__1 = _init_l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__1___closed__0___boxed__const__1();
lean_mark_persistent(l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__1___closed__0___boxed__const__1);
l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__0___closed__0___boxed__const__1 = _init_l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__0___closed__0___boxed__const__1();
lean_mark_persistent(l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__0___closed__0___boxed__const__1);
l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__2___redArg___boxed__const__1 = _init_l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__2___redArg___boxed__const__1();
lean_mark_persistent(l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__2___redArg___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Hint(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_TryThis(uint8_t builtin);
lean_object* initialize_Lean_Util_Diff(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Hint(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_TryThis(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_Diff(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Hint(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Hint(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Hint(builtin);
}
#ifdef __cplusplus
}
#endif

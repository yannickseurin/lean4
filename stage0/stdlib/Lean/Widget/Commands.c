// Lean compiler output
// Module: Lean.Widget.Commands
// Imports: public meta import Lean.Widget.UserWidget public import Init.Notation import Lean.Attributes
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
lean_object* l_Lean_PersistentHashMap_empty___redArg();
lean_object* lean_st_ref_get(lean_object*);
extern lean_object* l___private_Lean_ExtraModUses_0__Lean_extraModUses;
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableExtraModUse_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqExtraModUse_beq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Std_HashMap_instInhabited___redArg();
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Environment_header(lean_object*);
extern lean_object* l_Lean_instInhabitedEffectiveImport_default;
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
extern lean_object* l_Lean_indirectModUseExt;
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t l_Lean_isMarkedMeta(lean_object*, lean_object*);
uint8_t lean_uint64_dec_lt(uint64_t, uint64_t);
uint8_t lean_uint64_dec_eq(uint64_t, uint64_t);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_maxView___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_minView___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_panelWidgetsExt;
lean_object* l_Lean_ScopedEnvExtension_modifyState___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_ScopedEnvExtension_addCore___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* l_Lean_mkPrivateName(lean_object*, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_privateToUserName(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_Syntax_TSepArray_getElems___redArg(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_addAndCompile(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Elab_toAttributeKind___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_expandMacroImpl_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ResolveName_resolveNamespace(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ResolveName_resolveGlobalName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTerm(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l___private_Init_Meta_Defs_0__Lean_getEscapedNameParts_x3f(lean_object*, lean_object*);
lean_object* l_Lean_quoteNameMk(lean_object*);
lean_object* lean_string_intercalate(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_mkNameLit(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalWidgetInstanceUnsafe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalModuleUnsafe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_liftTermElabM___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Widget_savePanelWidgetInfo(uint64_t, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Widget_widgetInstanceSpec___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "widgetInstanceSpec"};
static const lean_object* l_Lean_Widget_widgetInstanceSpec___closed__0 = (const lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__0_value;
static const lean_string_object l_Lean_Widget_widgetInstanceSpec___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Widget_widgetInstanceSpec___closed__1 = (const lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__1_value;
static const lean_string_object l_Lean_Widget_widgetInstanceSpec___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Widget"};
static const lean_object* l_Lean_Widget_widgetInstanceSpec___closed__2 = (const lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__2_value;
static const lean_ctor_object l_Lean_Widget_widgetInstanceSpec___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Widget_widgetInstanceSpec___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__3_value_aux_0),((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__2_value),LEAN_SCALAR_PTR_LITERAL(242, 47, 106, 136, 147, 253, 78, 115)}};
static const lean_ctor_object l_Lean_Widget_widgetInstanceSpec___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__3_value_aux_1),((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__0_value),LEAN_SCALAR_PTR_LITERAL(187, 43, 105, 195, 200, 35, 64, 193)}};
static const lean_object* l_Lean_Widget_widgetInstanceSpec___closed__3 = (const lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__3_value;
static const lean_string_object l_Lean_Widget_widgetInstanceSpec___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_Lean_Widget_widgetInstanceSpec___closed__4 = (const lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__4_value;
static const lean_ctor_object l_Lean_Widget_widgetInstanceSpec___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__4_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_Lean_Widget_widgetInstanceSpec___closed__5 = (const lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__5_value;
static const lean_string_object l_Lean_Widget_widgetInstanceSpec___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Lean_Widget_widgetInstanceSpec___closed__6 = (const lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__6_value;
static const lean_ctor_object l_Lean_Widget_widgetInstanceSpec___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__6_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_Lean_Widget_widgetInstanceSpec___closed__7 = (const lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__7_value;
static const lean_ctor_object l_Lean_Widget_widgetInstanceSpec___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__7_value)}};
static const lean_object* l_Lean_Widget_widgetInstanceSpec___closed__8 = (const lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__8_value;
static const lean_string_object l_Lean_Widget_widgetInstanceSpec___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "optional"};
static const lean_object* l_Lean_Widget_widgetInstanceSpec___closed__9 = (const lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__9_value;
static const lean_ctor_object l_Lean_Widget_widgetInstanceSpec___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__9_value),LEAN_SCALAR_PTR_LITERAL(233, 141, 154, 50, 143, 135, 42, 252)}};
static const lean_object* l_Lean_Widget_widgetInstanceSpec___closed__10 = (const lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__10_value;
static const lean_string_object l_Lean_Widget_widgetInstanceSpec___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "with "};
static const lean_object* l_Lean_Widget_widgetInstanceSpec___closed__11 = (const lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__11_value;
static const lean_ctor_object l_Lean_Widget_widgetInstanceSpec___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__11_value)}};
static const lean_object* l_Lean_Widget_widgetInstanceSpec___closed__12 = (const lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__12_value;
static const lean_string_object l_Lean_Widget_widgetInstanceSpec___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_Lean_Widget_widgetInstanceSpec___closed__13 = (const lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__13_value;
static const lean_ctor_object l_Lean_Widget_widgetInstanceSpec___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__13_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l_Lean_Widget_widgetInstanceSpec___closed__14 = (const lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__14_value;
static const lean_ctor_object l_Lean_Widget_widgetInstanceSpec___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__14_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Widget_widgetInstanceSpec___closed__15 = (const lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__15_value;
static const lean_ctor_object l_Lean_Widget_widgetInstanceSpec___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__5_value),((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__12_value),((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__15_value)}};
static const lean_object* l_Lean_Widget_widgetInstanceSpec___closed__16 = (const lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__16_value;
static const lean_ctor_object l_Lean_Widget_widgetInstanceSpec___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__10_value),((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__16_value)}};
static const lean_object* l_Lean_Widget_widgetInstanceSpec___closed__17 = (const lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__17_value;
static const lean_ctor_object l_Lean_Widget_widgetInstanceSpec___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__5_value),((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__8_value),((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__17_value)}};
static const lean_object* l_Lean_Widget_widgetInstanceSpec___closed__18 = (const lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__18_value;
static const lean_ctor_object l_Lean_Widget_widgetInstanceSpec___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 9}, .m_objs = {((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__0_value),((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__3_value),((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__18_value)}};
static const lean_object* l_Lean_Widget_widgetInstanceSpec___closed__19 = (const lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__19_value;
LEAN_EXPORT const lean_object* l_Lean_Widget_widgetInstanceSpec = (const lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__19_value;
static const lean_string_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__0 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__0_value;
static const lean_string_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__1 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__1_value;
static const lean_string_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "structInst"};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__2 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__2_value;
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__2_value),LEAN_SCALAR_PTR_LITERAL(50, 43, 73, 62, 118, 124, 31, 28)}};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__3 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__3_value;
static const lean_string_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "{"};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__4 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__4_value;
static const lean_string_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__5 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__5_value;
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__5_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__6 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__6_value;
static lean_once_cell_t l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__7;
static const lean_string_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "structInstFields"};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__8 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__8_value;
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__9_value_aux_0),((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__9_value_aux_1),((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__9_value_aux_2),((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__8_value),LEAN_SCALAR_PTR_LITERAL(0, 82, 141, 43, 62, 171, 163, 69)}};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__9 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__9_value;
static const lean_string_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "structInstField"};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__10 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__10_value;
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__11_value_aux_0),((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__11_value_aux_1),((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__11_value_aux_2),((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__10_value),LEAN_SCALAR_PTR_LITERAL(50, 77, 20, 88, 28, 210, 230, 84)}};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__11 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__11_value;
static const lean_string_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "structInstLVal"};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__12 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__12_value;
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__13_value_aux_0),((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__13_value_aux_1),((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__13_value_aux_2),((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__12_value),LEAN_SCALAR_PTR_LITERAL(185, 133, 6, 147, 6, 183, 100, 198)}};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__13 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__13_value;
static const lean_string_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "id"};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__14 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__14_value;
static lean_once_cell_t l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__15;
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__14_value),LEAN_SCALAR_PTR_LITERAL(223, 78, 141, 85, 50, 255, 216, 83)}};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__16 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__16_value;
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__16_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__17 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__17_value;
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__17_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__18 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__18_value;
static const lean_string_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "structInstFieldDef"};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__19 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__19_value;
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__20_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__20_value_aux_0),((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__20_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__20_value_aux_1),((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__20_value_aux_2),((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__19_value),LEAN_SCALAR_PTR_LITERAL(81, 102, 39, 227, 176, 252, 65, 103)}};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__20 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__20_value;
static const lean_string_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__21 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__21_value;
static const lean_string_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "javascriptHash"};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__22 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__22_value;
static lean_once_cell_t l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__23;
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__22_value),LEAN_SCALAR_PTR_LITERAL(60, 110, 51, 206, 110, 51, 190, 4)}};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__24 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__24_value;
static const lean_string_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "proj"};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__25 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__25_value;
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__26_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__26_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__26_value_aux_0),((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__26_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__26_value_aux_1),((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__26_value_aux_2),((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__25_value),LEAN_SCALAR_PTR_LITERAL(103, 149, 207, 196, 17, 4, 77, 74)}};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__26 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__26_value;
static const lean_string_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__27 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__27_value;
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__28_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__28_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__28_value_aux_0),((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__28_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__28_value_aux_1),((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__28_value_aux_2),((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__27_value),LEAN_SCALAR_PTR_LITERAL(124, 9, 161, 194, 227, 100, 20, 110)}};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__28 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__28_value;
static const lean_string_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__29 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__29_value;
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__30_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__30_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__30_value_aux_0),((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__30_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__30_value_aux_1),((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__30_value_aux_2),((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__29_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__30 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__30_value;
static const lean_string_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__31 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__31_value;
static const lean_string_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__32 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__32_value;
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__32_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__33 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__33_value;
static const lean_string_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__34 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__34_value;
static lean_once_cell_t l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__35;
static lean_once_cell_t l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__36;
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__37_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__37_value_aux_0),((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__2_value),LEAN_SCALAR_PTR_LITERAL(242, 47, 106, 136, 147, 253, 78, 115)}};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__37 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__37_value;
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__37_value)}};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__38 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__38_value;
static const lean_string_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__39 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__39_value;
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__40_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__40_value_aux_0),((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__39_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__40 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__40_value;
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__40_value)}};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__41 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__41_value;
static const lean_string_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__42 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__42_value;
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__43_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__43_value_aux_0),((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__42_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__43 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__43_value;
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__43_value)}};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__44 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__44_value;
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__44_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__45 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__45_value;
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__41_value),((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__45_value)}};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__46 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__46_value;
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__38_value),((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__46_value)}};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__47 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__47_value;
static const lean_string_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__48 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__48_value;
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__49_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__49_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__49_value_aux_0),((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__49_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__49_value_aux_1),((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__49_value_aux_2),((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__48_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__49 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__49_value;
static const lean_string_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "ToModule.toModule"};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__50 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__50_value;
static lean_once_cell_t l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__51_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__51;
static const lean_string_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "ToModule"};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__52 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__52_value;
static const lean_string_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "toModule"};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__53 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__53_value;
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__54_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__52_value),LEAN_SCALAR_PTR_LITERAL(253, 179, 245, 63, 235, 253, 66, 181)}};
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__54_value_aux_0),((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__53_value),LEAN_SCALAR_PTR_LITERAL(150, 248, 26, 83, 63, 136, 226, 191)}};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__54 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__54_value;
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__55_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__55_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__55_value_aux_0),((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__2_value),LEAN_SCALAR_PTR_LITERAL(242, 47, 106, 136, 147, 253, 78, 115)}};
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__55_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__55_value_aux_1),((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__52_value),LEAN_SCALAR_PTR_LITERAL(128, 245, 164, 144, 51, 121, 0, 192)}};
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__55_value_aux_2),((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__53_value),LEAN_SCALAR_PTR_LITERAL(127, 158, 235, 43, 214, 142, 113, 225)}};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__55 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__55_value;
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__55_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__56 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__56_value;
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__56_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__57 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__57_value;
static const lean_string_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__58 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__58_value;
static const lean_string_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__59 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__59_value;
static const lean_string_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "props"};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__60 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__60_value;
static lean_once_cell_t l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__61_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__61;
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__60_value),LEAN_SCALAR_PTR_LITERAL(81, 109, 51, 84, 90, 92, 70, 19)}};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__62 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__62_value;
static const lean_string_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Server.RpcEncodable.rpcEncode"};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__63 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__63_value;
static lean_once_cell_t l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__64_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__64;
static const lean_string_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Server"};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__65 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__65_value;
static const lean_string_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "RpcEncodable"};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__66 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__66_value;
static const lean_string_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "rpcEncode"};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__67 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__67_value;
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__68_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__65_value),LEAN_SCALAR_PTR_LITERAL(154, 127, 234, 255, 208, 218, 159, 21)}};
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__68_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__68_value_aux_0),((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__66_value),LEAN_SCALAR_PTR_LITERAL(40, 69, 103, 196, 247, 23, 35, 197)}};
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__68_value_aux_1),((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__67_value),LEAN_SCALAR_PTR_LITERAL(26, 58, 71, 199, 118, 20, 218, 18)}};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__68 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__68_value;
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__69_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__69_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__69_value_aux_0),((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__65_value),LEAN_SCALAR_PTR_LITERAL(251, 1, 140, 35, 91, 244, 83, 213)}};
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__69_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__69_value_aux_1),((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__66_value),LEAN_SCALAR_PTR_LITERAL(157, 192, 180, 137, 118, 34, 3, 132)}};
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__69_value_aux_2),((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__67_value),LEAN_SCALAR_PTR_LITERAL(147, 95, 3, 206, 143, 66, 59, 169)}};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__69 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__69_value;
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__69_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__70 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__70_value;
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__71_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__70_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__71 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__71_value;
static const lean_string_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__72_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "optEllipsis"};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__72 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__72_value;
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__73_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__73_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__73_value_aux_0),((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__73_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__73_value_aux_1),((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__73_value_aux_2),((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__72_value),LEAN_SCALAR_PTR_LITERAL(13, 1, 242, 203, 207, 188, 181, 160)}};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__73 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__73_value;
static const lean_string_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__74_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "}"};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__74 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__74_value;
static const lean_string_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__75_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "WidgetInstance"};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__75 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__75_value;
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__76_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__76_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__76_value_aux_0),((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__2_value),LEAN_SCALAR_PTR_LITERAL(242, 47, 106, 136, 147, 253, 78, 115)}};
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__76_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__76_value_aux_1),((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__75_value),LEAN_SCALAR_PTR_LITERAL(18, 26, 248, 187, 7, 143, 98, 88)}};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__76 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__76_value;
static lean_once_cell_t l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__77_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__77;
static lean_once_cell_t l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__78_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__78;
static const lean_string_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__79_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "quotedName"};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__79 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__79_value;
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__80_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__80_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__80_value_aux_0),((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__80_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__80_value_aux_1),((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__80_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__80_value_aux_2),((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__79_value),LEAN_SCALAR_PTR_LITERAL(217, 120, 158, 75, 195, 162, 2, 130)}};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__80 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__80_value;
static const lean_string_object l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__81_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__81 = (const lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__81_value;
LEAN_EXPORT lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Widget_elabWidgetInstanceSpec_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Widget_elabWidgetInstanceSpec_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Widget_elabWidgetInstanceSpec_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Widget_elabWidgetInstanceSpec_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Widget_elabWidgetInstanceSpec_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Widget_elabWidgetInstanceSpec_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Widget_elabWidgetInstanceSpec___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Json.mkObj"};
static const lean_object* l_Lean_Widget_elabWidgetInstanceSpec___closed__0 = (const lean_object*)&l_Lean_Widget_elabWidgetInstanceSpec___closed__0_value;
static lean_once_cell_t l_Lean_Widget_elabWidgetInstanceSpec___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_elabWidgetInstanceSpec___closed__1;
static const lean_string_object l_Lean_Widget_elabWidgetInstanceSpec___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Json"};
static const lean_object* l_Lean_Widget_elabWidgetInstanceSpec___closed__2 = (const lean_object*)&l_Lean_Widget_elabWidgetInstanceSpec___closed__2_value;
static const lean_string_object l_Lean_Widget_elabWidgetInstanceSpec___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "mkObj"};
static const lean_object* l_Lean_Widget_elabWidgetInstanceSpec___closed__3 = (const lean_object*)&l_Lean_Widget_elabWidgetInstanceSpec___closed__3_value;
static const lean_ctor_object l_Lean_Widget_elabWidgetInstanceSpec___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_elabWidgetInstanceSpec___closed__2_value),LEAN_SCALAR_PTR_LITERAL(190, 18, 71, 130, 82, 255, 111, 18)}};
static const lean_ctor_object l_Lean_Widget_elabWidgetInstanceSpec___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Widget_elabWidgetInstanceSpec___closed__4_value_aux_0),((lean_object*)&l_Lean_Widget_elabWidgetInstanceSpec___closed__3_value),LEAN_SCALAR_PTR_LITERAL(108, 196, 116, 61, 5, 129, 122, 6)}};
static const lean_object* l_Lean_Widget_elabWidgetInstanceSpec___closed__4 = (const lean_object*)&l_Lean_Widget_elabWidgetInstanceSpec___closed__4_value;
static const lean_ctor_object l_Lean_Widget_elabWidgetInstanceSpec___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Widget_elabWidgetInstanceSpec___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Widget_elabWidgetInstanceSpec___closed__5_value_aux_0),((lean_object*)&l_Lean_Widget_elabWidgetInstanceSpec___closed__2_value),LEAN_SCALAR_PTR_LITERAL(215, 126, 99, 176, 35, 107, 201, 11)}};
static const lean_ctor_object l_Lean_Widget_elabWidgetInstanceSpec___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Widget_elabWidgetInstanceSpec___closed__5_value_aux_1),((lean_object*)&l_Lean_Widget_elabWidgetInstanceSpec___closed__3_value),LEAN_SCALAR_PTR_LITERAL(249, 119, 229, 103, 93, 90, 238, 17)}};
static const lean_object* l_Lean_Widget_elabWidgetInstanceSpec___closed__5 = (const lean_object*)&l_Lean_Widget_elabWidgetInstanceSpec___closed__5_value;
static const lean_ctor_object l_Lean_Widget_elabWidgetInstanceSpec___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Widget_elabWidgetInstanceSpec___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Widget_elabWidgetInstanceSpec___closed__6 = (const lean_object*)&l_Lean_Widget_elabWidgetInstanceSpec___closed__6_value;
static const lean_ctor_object l_Lean_Widget_elabWidgetInstanceSpec___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Widget_elabWidgetInstanceSpec___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Widget_elabWidgetInstanceSpec___closed__7 = (const lean_object*)&l_Lean_Widget_elabWidgetInstanceSpec___closed__7_value;
static const lean_string_object l_Lean_Widget_elabWidgetInstanceSpec___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "term[_]"};
static const lean_object* l_Lean_Widget_elabWidgetInstanceSpec___closed__8 = (const lean_object*)&l_Lean_Widget_elabWidgetInstanceSpec___closed__8_value;
static const lean_ctor_object l_Lean_Widget_elabWidgetInstanceSpec___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_elabWidgetInstanceSpec___closed__8_value),LEAN_SCALAR_PTR_LITERAL(86, 147, 168, 74, 195, 98, 232, 161)}};
static const lean_object* l_Lean_Widget_elabWidgetInstanceSpec___closed__9 = (const lean_object*)&l_Lean_Widget_elabWidgetInstanceSpec___closed__9_value;
static const lean_string_object l_Lean_Widget_elabWidgetInstanceSpec___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_Lean_Widget_elabWidgetInstanceSpec___closed__10 = (const lean_object*)&l_Lean_Widget_elabWidgetInstanceSpec___closed__10_value;
static const lean_string_object l_Lean_Widget_elabWidgetInstanceSpec___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Lean_Widget_elabWidgetInstanceSpec___closed__11 = (const lean_object*)&l_Lean_Widget_elabWidgetInstanceSpec___closed__11_value;
LEAN_EXPORT lean_object* l_Lean_Widget_elabWidgetInstanceSpec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_elabWidgetInstanceSpec___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Widget_addWidgetSpec___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "addWidgetSpec"};
static const lean_object* l_Lean_Widget_addWidgetSpec___closed__0 = (const lean_object*)&l_Lean_Widget_addWidgetSpec___closed__0_value;
static const lean_ctor_object l_Lean_Widget_addWidgetSpec___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Widget_addWidgetSpec___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Widget_addWidgetSpec___closed__1_value_aux_0),((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__2_value),LEAN_SCALAR_PTR_LITERAL(242, 47, 106, 136, 147, 253, 78, 115)}};
static const lean_ctor_object l_Lean_Widget_addWidgetSpec___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Widget_addWidgetSpec___closed__1_value_aux_1),((lean_object*)&l_Lean_Widget_addWidgetSpec___closed__0_value),LEAN_SCALAR_PTR_LITERAL(92, 146, 251, 200, 206, 220, 208, 83)}};
static const lean_object* l_Lean_Widget_addWidgetSpec___closed__1 = (const lean_object*)&l_Lean_Widget_addWidgetSpec___closed__1_value;
static const lean_string_object l_Lean_Widget_addWidgetSpec___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "attrKind"};
static const lean_object* l_Lean_Widget_addWidgetSpec___closed__2 = (const lean_object*)&l_Lean_Widget_addWidgetSpec___closed__2_value;
static const lean_ctor_object l_Lean_Widget_addWidgetSpec___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Widget_addWidgetSpec___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Widget_addWidgetSpec___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Widget_addWidgetSpec___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Widget_addWidgetSpec___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Widget_addWidgetSpec___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Widget_addWidgetSpec___closed__3_value_aux_2),((lean_object*)&l_Lean_Widget_addWidgetSpec___closed__2_value),LEAN_SCALAR_PTR_LITERAL(32, 164, 20, 104, 12, 221, 204, 110)}};
static const lean_object* l_Lean_Widget_addWidgetSpec___closed__3 = (const lean_object*)&l_Lean_Widget_addWidgetSpec___closed__3_value;
static const lean_ctor_object l_Lean_Widget_addWidgetSpec___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 8}, .m_objs = {((lean_object*)&l_Lean_Widget_addWidgetSpec___closed__3_value)}};
static const lean_object* l_Lean_Widget_addWidgetSpec___closed__4 = (const lean_object*)&l_Lean_Widget_addWidgetSpec___closed__4_value;
static const lean_ctor_object l_Lean_Widget_addWidgetSpec___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__5_value),((lean_object*)&l_Lean_Widget_addWidgetSpec___closed__4_value),((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__19_value)}};
static const lean_object* l_Lean_Widget_addWidgetSpec___closed__5 = (const lean_object*)&l_Lean_Widget_addWidgetSpec___closed__5_value;
static const lean_ctor_object l_Lean_Widget_addWidgetSpec___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 9}, .m_objs = {((lean_object*)&l_Lean_Widget_addWidgetSpec___closed__0_value),((lean_object*)&l_Lean_Widget_addWidgetSpec___closed__1_value),((lean_object*)&l_Lean_Widget_addWidgetSpec___closed__5_value)}};
static const lean_object* l_Lean_Widget_addWidgetSpec___closed__6 = (const lean_object*)&l_Lean_Widget_addWidgetSpec___closed__6_value;
LEAN_EXPORT const lean_object* l_Lean_Widget_addWidgetSpec = (const lean_object*)&l_Lean_Widget_addWidgetSpec___closed__6_value;
static const lean_string_object l_Lean_Widget_eraseWidgetSpec___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "eraseWidgetSpec"};
static const lean_object* l_Lean_Widget_eraseWidgetSpec___closed__0 = (const lean_object*)&l_Lean_Widget_eraseWidgetSpec___closed__0_value;
static const lean_ctor_object l_Lean_Widget_eraseWidgetSpec___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Widget_eraseWidgetSpec___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Widget_eraseWidgetSpec___closed__1_value_aux_0),((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__2_value),LEAN_SCALAR_PTR_LITERAL(242, 47, 106, 136, 147, 253, 78, 115)}};
static const lean_ctor_object l_Lean_Widget_eraseWidgetSpec___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Widget_eraseWidgetSpec___closed__1_value_aux_1),((lean_object*)&l_Lean_Widget_eraseWidgetSpec___closed__0_value),LEAN_SCALAR_PTR_LITERAL(246, 58, 73, 174, 184, 82, 104, 4)}};
static const lean_object* l_Lean_Widget_eraseWidgetSpec___closed__1 = (const lean_object*)&l_Lean_Widget_eraseWidgetSpec___closed__1_value;
static const lean_string_object l_Lean_Widget_eraseWidgetSpec___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* l_Lean_Widget_eraseWidgetSpec___closed__2 = (const lean_object*)&l_Lean_Widget_eraseWidgetSpec___closed__2_value;
static const lean_ctor_object l_Lean_Widget_eraseWidgetSpec___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Widget_eraseWidgetSpec___closed__2_value)}};
static const lean_object* l_Lean_Widget_eraseWidgetSpec___closed__3 = (const lean_object*)&l_Lean_Widget_eraseWidgetSpec___closed__3_value;
static const lean_ctor_object l_Lean_Widget_eraseWidgetSpec___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__5_value),((lean_object*)&l_Lean_Widget_eraseWidgetSpec___closed__3_value),((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__8_value)}};
static const lean_object* l_Lean_Widget_eraseWidgetSpec___closed__4 = (const lean_object*)&l_Lean_Widget_eraseWidgetSpec___closed__4_value;
static const lean_ctor_object l_Lean_Widget_eraseWidgetSpec___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 9}, .m_objs = {((lean_object*)&l_Lean_Widget_eraseWidgetSpec___closed__0_value),((lean_object*)&l_Lean_Widget_eraseWidgetSpec___closed__1_value),((lean_object*)&l_Lean_Widget_eraseWidgetSpec___closed__4_value)}};
static const lean_object* l_Lean_Widget_eraseWidgetSpec___closed__5 = (const lean_object*)&l_Lean_Widget_eraseWidgetSpec___closed__5_value;
LEAN_EXPORT const lean_object* l_Lean_Widget_eraseWidgetSpec = (const lean_object*)&l_Lean_Widget_eraseWidgetSpec___closed__5_value;
static const lean_string_object l_Lean_Widget_showWidgetSpec___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "showWidgetSpec"};
static const lean_object* l_Lean_Widget_showWidgetSpec___closed__0 = (const lean_object*)&l_Lean_Widget_showWidgetSpec___closed__0_value;
static const lean_ctor_object l_Lean_Widget_showWidgetSpec___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Widget_showWidgetSpec___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Widget_showWidgetSpec___closed__1_value_aux_0),((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__2_value),LEAN_SCALAR_PTR_LITERAL(242, 47, 106, 136, 147, 253, 78, 115)}};
static const lean_ctor_object l_Lean_Widget_showWidgetSpec___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Widget_showWidgetSpec___closed__1_value_aux_1),((lean_object*)&l_Lean_Widget_showWidgetSpec___closed__0_value),LEAN_SCALAR_PTR_LITERAL(200, 169, 125, 185, 204, 106, 221, 205)}};
static const lean_object* l_Lean_Widget_showWidgetSpec___closed__1 = (const lean_object*)&l_Lean_Widget_showWidgetSpec___closed__1_value;
static const lean_string_object l_Lean_Widget_showWidgetSpec___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "orelse"};
static const lean_object* l_Lean_Widget_showWidgetSpec___closed__2 = (const lean_object*)&l_Lean_Widget_showWidgetSpec___closed__2_value;
static const lean_ctor_object l_Lean_Widget_showWidgetSpec___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_showWidgetSpec___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 76, 4, 51, 251, 212, 116, 5)}};
static const lean_object* l_Lean_Widget_showWidgetSpec___closed__3 = (const lean_object*)&l_Lean_Widget_showWidgetSpec___closed__3_value;
static const lean_ctor_object l_Lean_Widget_showWidgetSpec___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Widget_showWidgetSpec___closed__3_value),((lean_object*)&l_Lean_Widget_addWidgetSpec___closed__6_value),((lean_object*)&l_Lean_Widget_eraseWidgetSpec___closed__5_value)}};
static const lean_object* l_Lean_Widget_showWidgetSpec___closed__4 = (const lean_object*)&l_Lean_Widget_showWidgetSpec___closed__4_value;
static const lean_ctor_object l_Lean_Widget_showWidgetSpec___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 9}, .m_objs = {((lean_object*)&l_Lean_Widget_showWidgetSpec___closed__0_value),((lean_object*)&l_Lean_Widget_showWidgetSpec___closed__1_value),((lean_object*)&l_Lean_Widget_showWidgetSpec___closed__4_value)}};
static const lean_object* l_Lean_Widget_showWidgetSpec___closed__5 = (const lean_object*)&l_Lean_Widget_showWidgetSpec___closed__5_value;
LEAN_EXPORT const lean_object* l_Lean_Widget_showWidgetSpec = (const lean_object*)&l_Lean_Widget_showWidgetSpec___closed__5_value;
static const lean_string_object l_Lean_Widget_showPanelWidgetsCmd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "showPanelWidgetsCmd"};
static const lean_object* l_Lean_Widget_showPanelWidgetsCmd___closed__0 = (const lean_object*)&l_Lean_Widget_showPanelWidgetsCmd___closed__0_value;
static const lean_ctor_object l_Lean_Widget_showPanelWidgetsCmd___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Widget_showPanelWidgetsCmd___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Widget_showPanelWidgetsCmd___closed__1_value_aux_0),((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__2_value),LEAN_SCALAR_PTR_LITERAL(242, 47, 106, 136, 147, 253, 78, 115)}};
static const lean_ctor_object l_Lean_Widget_showPanelWidgetsCmd___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Widget_showPanelWidgetsCmd___closed__1_value_aux_1),((lean_object*)&l_Lean_Widget_showPanelWidgetsCmd___closed__0_value),LEAN_SCALAR_PTR_LITERAL(203, 207, 30, 126, 74, 89, 231, 190)}};
static const lean_object* l_Lean_Widget_showPanelWidgetsCmd___closed__1 = (const lean_object*)&l_Lean_Widget_showPanelWidgetsCmd___closed__1_value;
static const lean_string_object l_Lean_Widget_showPanelWidgetsCmd___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "show_panel_widgets "};
static const lean_object* l_Lean_Widget_showPanelWidgetsCmd___closed__2 = (const lean_object*)&l_Lean_Widget_showPanelWidgetsCmd___closed__2_value;
static const lean_ctor_object l_Lean_Widget_showPanelWidgetsCmd___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Widget_showPanelWidgetsCmd___closed__2_value)}};
static const lean_object* l_Lean_Widget_showPanelWidgetsCmd___closed__3 = (const lean_object*)&l_Lean_Widget_showPanelWidgetsCmd___closed__3_value;
static const lean_ctor_object l_Lean_Widget_showPanelWidgetsCmd___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Widget_elabWidgetInstanceSpec___closed__10_value)}};
static const lean_object* l_Lean_Widget_showPanelWidgetsCmd___closed__4 = (const lean_object*)&l_Lean_Widget_showPanelWidgetsCmd___closed__4_value;
static const lean_ctor_object l_Lean_Widget_showPanelWidgetsCmd___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__5_value),((lean_object*)&l_Lean_Widget_showPanelWidgetsCmd___closed__3_value),((lean_object*)&l_Lean_Widget_showPanelWidgetsCmd___closed__4_value)}};
static const lean_object* l_Lean_Widget_showPanelWidgetsCmd___closed__5 = (const lean_object*)&l_Lean_Widget_showPanelWidgetsCmd___closed__5_value;
static const lean_string_object l_Lean_Widget_showPanelWidgetsCmd___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l_Lean_Widget_showPanelWidgetsCmd___closed__6 = (const lean_object*)&l_Lean_Widget_showPanelWidgetsCmd___closed__6_value;
static const lean_ctor_object l_Lean_Widget_showPanelWidgetsCmd___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Widget_showPanelWidgetsCmd___closed__6_value)}};
static const lean_object* l_Lean_Widget_showPanelWidgetsCmd___closed__7 = (const lean_object*)&l_Lean_Widget_showPanelWidgetsCmd___closed__7_value;
static const lean_ctor_object l_Lean_Widget_showPanelWidgetsCmd___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 11}, .m_objs = {((lean_object*)&l_Lean_Widget_showWidgetSpec___closed__5_value),((lean_object*)&l_Lean_Widget_showPanelWidgetsCmd___closed__6_value),((lean_object*)&l_Lean_Widget_showPanelWidgetsCmd___closed__7_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Widget_showPanelWidgetsCmd___closed__8 = (const lean_object*)&l_Lean_Widget_showPanelWidgetsCmd___closed__8_value;
static const lean_ctor_object l_Lean_Widget_showPanelWidgetsCmd___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__5_value),((lean_object*)&l_Lean_Widget_showPanelWidgetsCmd___closed__5_value),((lean_object*)&l_Lean_Widget_showPanelWidgetsCmd___closed__8_value)}};
static const lean_object* l_Lean_Widget_showPanelWidgetsCmd___closed__9 = (const lean_object*)&l_Lean_Widget_showPanelWidgetsCmd___closed__9_value;
static const lean_ctor_object l_Lean_Widget_showPanelWidgetsCmd___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Widget_elabWidgetInstanceSpec___closed__11_value)}};
static const lean_object* l_Lean_Widget_showPanelWidgetsCmd___closed__10 = (const lean_object*)&l_Lean_Widget_showPanelWidgetsCmd___closed__10_value;
static const lean_ctor_object l_Lean_Widget_showPanelWidgetsCmd___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__5_value),((lean_object*)&l_Lean_Widget_showPanelWidgetsCmd___closed__9_value),((lean_object*)&l_Lean_Widget_showPanelWidgetsCmd___closed__10_value)}};
static const lean_object* l_Lean_Widget_showPanelWidgetsCmd___closed__11 = (const lean_object*)&l_Lean_Widget_showPanelWidgetsCmd___closed__11_value;
static const lean_ctor_object l_Lean_Widget_showPanelWidgetsCmd___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Widget_showPanelWidgetsCmd___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Widget_showPanelWidgetsCmd___closed__11_value)}};
static const lean_object* l_Lean_Widget_showPanelWidgetsCmd___closed__12 = (const lean_object*)&l_Lean_Widget_showPanelWidgetsCmd___closed__12_value;
LEAN_EXPORT const lean_object* l_Lean_Widget_showPanelWidgetsCmd = (const lean_object*)&l_Lean_Widget_showPanelWidgetsCmd___closed__12_value;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7_spec__19___redArg(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7_spec__19___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7___redArg___lam__0(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7___redArg___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7___redArg___closed__0;
static lean_once_cell_t l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7___redArg___closed__1;
static lean_once_cell_t l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7___redArg___closed__2;
static lean_once_cell_t l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7___redArg(uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Widget_addPanelWidgetLocal___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__2_spec__9___redArg(lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Widget_addPanelWidgetLocal___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__2_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Widget_addPanelWidgetLocal___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__2_spec__10___redArg(uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Widget_addPanelWidgetLocal___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__2_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_addPanelWidgetLocal___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__2___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_addPanelWidgetLocal___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_addPanelWidgetLocal___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Widget_addPanelWidgetGlobal___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__4_spec__13___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Widget_addPanelWidgetGlobal___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__4_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_addPanelWidgetScoped___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__5(uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_addPanelWidgetScoped___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_addPanelWidgetGlobal___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__4(uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_addPanelWidgetGlobal___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__1___redArg___closed__0;
static const lean_array_object l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__1___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__1___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__5___closed__0 = (const lean_object*)&l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__5___closed__0_value;
static const lean_ctor_object l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__5___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__5___closed__1 = (const lean_object*)&l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__5___closed__1_value;
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__17_spec__21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__17_spec__21___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__17_spec__22___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__17_spec__22___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__17_spec__22___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__17_spec__22___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__17_spec__22___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__17_spec__22___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__17_spec__22___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__17_spec__22___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__17_spec__22___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__17_spec__22___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__17_spec__22___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__17_spec__22(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__17___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__17___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__17___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__17___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__17___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__17___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__17___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__17___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__17___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__17___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5_spec__15_spec__24_spec__28___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5_spec__15_spec__24_spec__28___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5_spec__15_spec__24___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5_spec__15_spec__24___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5_spec__15___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5_spec__15___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__0;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "extraModUses"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__1 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__1_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__1_value),LEAN_SCALAR_PTR_LITERAL(27, 95, 70, 98, 97, 66, 56, 109)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__2 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__2_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " extra mod use "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__3 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__3_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__4;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " of "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__5 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__5_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__6;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__7;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__8;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "recording "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__9 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__9_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__10;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__11 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__11_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__12;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "regular"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__13 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__13_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__14 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__14_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__15 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__15_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__16 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__16_value;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__6(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__7_spec__18___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__7_spec__18___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__7___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__7___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3___closed__0;
static const lean_array_object l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3___closed__1 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1___redArg___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__7___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__7___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__7___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__7___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__7___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__7___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__7___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__7___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__7___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__7___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__7___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__7___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__7___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__7___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__7___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__7___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__7___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__7___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__7___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__7___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__7___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 158, .m_capacity = 158, .m_length = 157, .m_data = "maximum recursion depth has been reached\nuse `set_option maxRecDepth <num>` to increase limit\nuse `set_option diagnostics true` to get diagnostic information"};
static const lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__8___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__8___closed__0;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__8___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "_instance"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__8___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__8___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__8___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__8___closed__1_value),LEAN_SCALAR_PTR_LITERAL(145, 220, 71, 116, 84, 119, 12, 45)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__8___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__8___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__8___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 56, .m_capacity = 56, .m_length = 55, .m_data = "failed to compile expression, it contains metavariables"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__8___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__8___closed__3_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__8___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__8___closed__4;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__8___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Module"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__8___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__8___closed__5_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__8___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__8___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__8___closed__6_value_aux_0),((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__2_value),LEAN_SCALAR_PTR_LITERAL(242, 47, 106, 136, 147, 253, 78, 115)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__8___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__8___closed__6_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__8___closed__5_value),LEAN_SCALAR_PTR_LITERAL(222, 167, 125, 136, 228, 207, 28, 37)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__8___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__8___closed__6_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__8___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__8___closed__7;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__8___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__8___closed__8;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__8(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_elabShowPanelWidgetsCmd___lam__0(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_elabShowPanelWidgetsCmd___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Widget_elabShowPanelWidgetsCmd___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_Widget_elabShowPanelWidgetsCmd___boxed__const__1 = (const lean_object*)&l_Lean_Widget_elabShowPanelWidgetsCmd___boxed__const__1_value;
LEAN_EXPORT lean_object* l_Lean_Widget_elabShowPanelWidgetsCmd(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_elabShowPanelWidgetsCmd___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_addPanelWidgetLocal___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_addPanelWidgetLocal___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Widget_addPanelWidgetGlobal___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__4_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Widget_addPanelWidgetGlobal___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__4_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7(uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Widget_addPanelWidgetLocal___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__2_spec__9(lean_object*, lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Widget_addPanelWidgetLocal___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__2_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Widget_addPanelWidgetLocal___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__2_spec__10(lean_object*, uint64_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Widget_addPanelWidgetLocal___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__2_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7_spec__19(lean_object*, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5_spec__15(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5_spec__15___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__7_spec__18(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__7_spec__18___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5_spec__15_spec__24(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5_spec__15_spec__24___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5_spec__15_spec__24_spec__28(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5_spec__15_spec__24_spec__28___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Widget_widgetCmd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "widgetCmd"};
static const lean_object* l_Lean_Widget_widgetCmd___closed__0 = (const lean_object*)&l_Lean_Widget_widgetCmd___closed__0_value;
static const lean_ctor_object l_Lean_Widget_widgetCmd___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Widget_widgetCmd___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Widget_widgetCmd___closed__1_value_aux_0),((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__2_value),LEAN_SCALAR_PTR_LITERAL(242, 47, 106, 136, 147, 253, 78, 115)}};
static const lean_ctor_object l_Lean_Widget_widgetCmd___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Widget_widgetCmd___closed__1_value_aux_1),((lean_object*)&l_Lean_Widget_widgetCmd___closed__0_value),LEAN_SCALAR_PTR_LITERAL(113, 247, 198, 226, 79, 16, 223, 88)}};
static const lean_object* l_Lean_Widget_widgetCmd___closed__1 = (const lean_object*)&l_Lean_Widget_widgetCmd___closed__1_value;
static const lean_string_object l_Lean_Widget_widgetCmd___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "#widget "};
static const lean_object* l_Lean_Widget_widgetCmd___closed__2 = (const lean_object*)&l_Lean_Widget_widgetCmd___closed__2_value;
static const lean_ctor_object l_Lean_Widget_widgetCmd___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Widget_widgetCmd___closed__2_value)}};
static const lean_object* l_Lean_Widget_widgetCmd___closed__3 = (const lean_object*)&l_Lean_Widget_widgetCmd___closed__3_value;
static const lean_ctor_object l_Lean_Widget_widgetCmd___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__5_value),((lean_object*)&l_Lean_Widget_widgetCmd___closed__3_value),((lean_object*)&l_Lean_Widget_widgetInstanceSpec___closed__19_value)}};
static const lean_object* l_Lean_Widget_widgetCmd___closed__4 = (const lean_object*)&l_Lean_Widget_widgetCmd___closed__4_value;
static const lean_ctor_object l_Lean_Widget_widgetCmd___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Widget_widgetCmd___closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lean_Widget_widgetCmd___closed__4_value)}};
static const lean_object* l_Lean_Widget_widgetCmd___closed__5 = (const lean_object*)&l_Lean_Widget_widgetCmd___closed__5_value;
LEAN_EXPORT const lean_object* l_Lean_Widget_widgetCmd = (const lean_object*)&l_Lean_Widget_widgetCmd___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Widget_elabWidgetCmd___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_elabWidgetCmd___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_elabWidgetCmd(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_elabWidgetCmd___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__7(void){
_start:
{
lean_object* v___x_56_; 
v___x_56_ = l_Array_mkArray0___redArg();
return v___x_56_;
}
}
static lean_object* _init_l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__15(void){
_start:
{
lean_object* v___x_76_; lean_object* v___x_77_; 
v___x_76_ = ((lean_object*)(l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__14));
v___x_77_ = l_String_toRawSubstring_x27(v___x_76_);
return v___x_77_;
}
}
static lean_object* _init_l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__23(void){
_start:
{
lean_object* v___x_94_; lean_object* v___x_95_; 
v___x_94_ = ((lean_object*)(l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__22));
v___x_95_ = l_String_toRawSubstring_x27(v___x_94_);
return v___x_95_;
}
}
static lean_object* _init_l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__35(void){
_start:
{
lean_object* v___x_121_; lean_object* v___x_122_; 
v___x_121_ = ((lean_object*)(l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__34));
v___x_122_ = l_String_toRawSubstring_x27(v___x_121_);
return v___x_122_;
}
}
static lean_object* _init_l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__36(void){
_start:
{
lean_object* v___x_123_; lean_object* v___x_124_; 
v___x_123_ = lean_box(0);
v___x_124_ = l_unsafeCast___redArg(v___x_123_);
return v___x_124_;
}
}
static lean_object* _init_l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__51(void){
_start:
{
lean_object* v___x_158_; lean_object* v___x_159_; 
v___x_158_ = ((lean_object*)(l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__50));
v___x_159_ = l_String_toRawSubstring_x27(v___x_158_);
return v___x_159_;
}
}
static lean_object* _init_l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__61(void){
_start:
{
lean_object* v___x_179_; lean_object* v___x_180_; 
v___x_179_ = ((lean_object*)(l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__60));
v___x_180_ = l_String_toRawSubstring_x27(v___x_179_);
return v___x_180_;
}
}
static lean_object* _init_l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__64(void){
_start:
{
lean_object* v___x_184_; lean_object* v___x_185_; 
v___x_184_ = ((lean_object*)(l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__63));
v___x_185_ = l_String_toRawSubstring_x27(v___x_184_);
return v___x_185_;
}
}
static lean_object* _init_l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__77(void){
_start:
{
lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; 
v___x_216_ = lean_box(0);
v___x_217_ = ((lean_object*)(l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__76));
v___x_218_ = l_Lean_mkConst(v___x_217_, v___x_216_);
return v___x_218_;
}
}
static lean_object* _init_l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__78(void){
_start:
{
lean_object* v___x_219_; lean_object* v___x_220_; 
v___x_219_ = lean_obj_once(&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__77, &l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__77_once, _init_l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__77);
v___x_220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_220_, 0, v___x_219_);
return v___x_220_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux(lean_object* v_mod_228_, lean_object* v_props_229_, lean_object* v_a_230_, lean_object* v_a_231_, lean_object* v_a_232_, lean_object* v_a_233_, lean_object* v_a_234_, lean_object* v_a_235_){
_start:
{
lean_object* v_toCold_237_; lean_object* v_ref_238_; lean_object* v_quotContext_239_; lean_object* v_currMacroScope_240_; uint8_t v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___y_263_; lean_object* v___x_327_; lean_object* v___x_328_; 
v_toCold_237_ = lean_ctor_get(v_a_234_, 0);
v_ref_238_ = lean_ctor_get(v_a_234_, 2);
v_quotContext_239_ = lean_ctor_get(v_toCold_237_, 8);
v_currMacroScope_240_ = lean_ctor_get(v_toCold_237_, 9);
v___x_241_ = 0;
v___x_242_ = l_Lean_SourceInfo_fromRef(v_ref_238_, v___x_241_);
v___x_243_ = ((lean_object*)(l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__3));
v___x_244_ = ((lean_object*)(l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__4));
lean_inc_n(v___x_242_, 5);
v___x_245_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_245_, 0, v___x_242_);
lean_ctor_set(v___x_245_, 1, v___x_244_);
v___x_246_ = ((lean_object*)(l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__6));
v___x_247_ = lean_obj_once(&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__7, &l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__7_once, _init_l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__7);
v___x_248_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_248_, 0, v___x_242_);
lean_ctor_set(v___x_248_, 1, v___x_246_);
lean_ctor_set(v___x_248_, 2, v___x_247_);
v___x_249_ = ((lean_object*)(l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__9));
v___x_250_ = ((lean_object*)(l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__11));
v___x_251_ = ((lean_object*)(l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__13));
v___x_252_ = lean_obj_once(&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__15, &l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__15_once, _init_l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__15);
v___x_253_ = ((lean_object*)(l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__16));
lean_inc(v_currMacroScope_240_);
lean_inc(v_quotContext_239_);
v___x_254_ = l_Lean_addMacroScope(v_quotContext_239_, v___x_253_, v_currMacroScope_240_);
v___x_255_ = lean_box(0);
v___x_256_ = ((lean_object*)(l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__18));
v___x_257_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_257_, 0, v___x_242_);
lean_ctor_set(v___x_257_, 1, v___x_252_);
lean_ctor_set(v___x_257_, 2, v___x_254_);
lean_ctor_set(v___x_257_, 3, v___x_256_);
lean_inc_ref(v___x_248_);
v___x_258_ = l_Lean_Syntax_node2(v___x_242_, v___x_251_, v___x_257_, v___x_248_);
v___x_259_ = ((lean_object*)(l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__20));
v___x_260_ = ((lean_object*)(l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__21));
v___x_261_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_261_, 0, v___x_242_);
lean_ctor_set(v___x_261_, 1, v___x_260_);
v___x_327_ = l_Lean_TSyntax_getId(v_mod_228_);
lean_inc(v___x_327_);
v___x_328_ = l___private_Init_Meta_Defs_0__Lean_getEscapedNameParts_x3f(v___x_255_, v___x_327_);
if (lean_obj_tag(v___x_328_) == 0)
{
lean_object* v___x_329_; 
v___x_329_ = l_Lean_quoteNameMk(v___x_327_);
v___y_263_ = v___x_329_;
goto v___jp_262_;
}
else
{
lean_object* v_val_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; 
lean_dec(v___x_327_);
v_val_330_ = lean_ctor_get(v___x_328_, 0);
lean_inc(v_val_330_);
lean_dec_ref_known(v___x_328_, 1);
v___x_331_ = ((lean_object*)(l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__80));
v___x_332_ = ((lean_object*)(l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__81));
v___x_333_ = ((lean_object*)(l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__59));
v___x_334_ = lean_string_intercalate(v___x_333_, v_val_330_);
v___x_335_ = lean_string_append(v___x_332_, v___x_334_);
lean_dec_ref(v___x_334_);
v___x_336_ = lean_box(2);
v___x_337_ = l_Lean_Syntax_mkNameLit(v___x_335_, v___x_336_);
v___x_338_ = lean_unsigned_to_nat(1u);
v___x_339_ = lean_mk_empty_array_with_capacity(v___x_338_);
v___x_340_ = lean_array_push(v___x_339_, v___x_337_);
v___x_341_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_341_, 0, v___x_336_);
lean_ctor_set(v___x_341_, 1, v___x_331_);
lean_ctor_set(v___x_341_, 2, v___x_340_);
v___y_263_ = v___x_341_;
goto v___jp_262_;
}
v___jp_262_:
{
lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; uint8_t v___x_325_; lean_object* v___x_326_; 
lean_inc_ref_n(v___x_248_, 15);
lean_inc_ref_n(v___x_261_, 2);
lean_inc_n(v___x_242_, 31);
v___x_264_ = l_Lean_Syntax_node3(v___x_242_, v___x_259_, v___x_261_, v___x_248_, v___y_263_);
v___x_265_ = l_Lean_Syntax_node3(v___x_242_, v___x_246_, v___x_248_, v___x_248_, v___x_264_);
v___x_266_ = l_Lean_Syntax_node2(v___x_242_, v___x_250_, v___x_258_, v___x_265_);
v___x_267_ = lean_obj_once(&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__23, &l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__23_once, _init_l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__23);
v___x_268_ = ((lean_object*)(l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__24));
lean_inc_n(v_currMacroScope_240_, 5);
lean_inc_n(v_quotContext_239_, 5);
v___x_269_ = l_Lean_addMacroScope(v_quotContext_239_, v___x_268_, v_currMacroScope_240_);
v___x_270_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_270_, 0, v___x_242_);
lean_ctor_set(v___x_270_, 1, v___x_267_);
lean_ctor_set(v___x_270_, 2, v___x_269_);
lean_ctor_set(v___x_270_, 3, v___x_255_);
lean_inc_ref(v___x_270_);
v___x_271_ = l_Lean_Syntax_node2(v___x_242_, v___x_251_, v___x_270_, v___x_248_);
v___x_272_ = ((lean_object*)(l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__26));
v___x_273_ = ((lean_object*)(l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__28));
v___x_274_ = ((lean_object*)(l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__30));
v___x_275_ = ((lean_object*)(l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__31));
v___x_276_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_276_, 0, v___x_242_);
lean_ctor_set(v___x_276_, 1, v___x_275_);
v___x_277_ = ((lean_object*)(l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__33));
v___x_278_ = lean_obj_once(&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__35, &l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__35_once, _init_l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__35);
v___x_279_ = lean_obj_once(&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__36, &l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__36_once, _init_l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__36);
v___x_280_ = l_Lean_addMacroScope(v_quotContext_239_, v___x_279_, v_currMacroScope_240_);
v___x_281_ = ((lean_object*)(l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__47));
v___x_282_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_282_, 0, v___x_242_);
lean_ctor_set(v___x_282_, 1, v___x_278_);
lean_ctor_set(v___x_282_, 2, v___x_280_);
lean_ctor_set(v___x_282_, 3, v___x_281_);
v___x_283_ = l_Lean_Syntax_node1(v___x_242_, v___x_277_, v___x_282_);
v___x_284_ = l_Lean_Syntax_node2(v___x_242_, v___x_274_, v___x_276_, v___x_283_);
v___x_285_ = ((lean_object*)(l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__49));
v___x_286_ = lean_obj_once(&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__51, &l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__51_once, _init_l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__51);
v___x_287_ = ((lean_object*)(l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__54));
v___x_288_ = l_Lean_addMacroScope(v_quotContext_239_, v___x_287_, v_currMacroScope_240_);
v___x_289_ = ((lean_object*)(l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__57));
v___x_290_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_290_, 0, v___x_242_);
lean_ctor_set(v___x_290_, 1, v___x_286_);
lean_ctor_set(v___x_290_, 2, v___x_288_);
lean_ctor_set(v___x_290_, 3, v___x_289_);
v___x_291_ = l_Lean_Syntax_node1(v___x_242_, v___x_246_, v_mod_228_);
v___x_292_ = l_Lean_Syntax_node2(v___x_242_, v___x_285_, v___x_290_, v___x_291_);
v___x_293_ = ((lean_object*)(l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__58));
v___x_294_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_294_, 0, v___x_242_);
lean_ctor_set(v___x_294_, 1, v___x_293_);
v___x_295_ = l_Lean_Syntax_node3(v___x_242_, v___x_273_, v___x_284_, v___x_292_, v___x_294_);
v___x_296_ = ((lean_object*)(l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__59));
v___x_297_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_297_, 0, v___x_242_);
lean_ctor_set(v___x_297_, 1, v___x_296_);
v___x_298_ = l_Lean_Syntax_node3(v___x_242_, v___x_272_, v___x_295_, v___x_297_, v___x_270_);
v___x_299_ = l_Lean_Syntax_node3(v___x_242_, v___x_259_, v___x_261_, v___x_248_, v___x_298_);
v___x_300_ = l_Lean_Syntax_node3(v___x_242_, v___x_246_, v___x_248_, v___x_248_, v___x_299_);
v___x_301_ = l_Lean_Syntax_node2(v___x_242_, v___x_250_, v___x_271_, v___x_300_);
v___x_302_ = lean_obj_once(&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__61, &l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__61_once, _init_l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__61);
v___x_303_ = ((lean_object*)(l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__62));
v___x_304_ = l_Lean_addMacroScope(v_quotContext_239_, v___x_303_, v_currMacroScope_240_);
v___x_305_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_305_, 0, v___x_242_);
lean_ctor_set(v___x_305_, 1, v___x_302_);
lean_ctor_set(v___x_305_, 2, v___x_304_);
lean_ctor_set(v___x_305_, 3, v___x_255_);
v___x_306_ = l_Lean_Syntax_node2(v___x_242_, v___x_251_, v___x_305_, v___x_248_);
v___x_307_ = lean_obj_once(&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__64, &l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__64_once, _init_l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__64);
v___x_308_ = ((lean_object*)(l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__68));
v___x_309_ = l_Lean_addMacroScope(v_quotContext_239_, v___x_308_, v_currMacroScope_240_);
v___x_310_ = ((lean_object*)(l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__71));
v___x_311_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_311_, 0, v___x_242_);
lean_ctor_set(v___x_311_, 1, v___x_307_);
lean_ctor_set(v___x_311_, 2, v___x_309_);
lean_ctor_set(v___x_311_, 3, v___x_310_);
v___x_312_ = l_Lean_Syntax_node1(v___x_242_, v___x_246_, v_props_229_);
v___x_313_ = l_Lean_Syntax_node2(v___x_242_, v___x_285_, v___x_311_, v___x_312_);
v___x_314_ = l_Lean_Syntax_node3(v___x_242_, v___x_259_, v___x_261_, v___x_248_, v___x_313_);
v___x_315_ = l_Lean_Syntax_node3(v___x_242_, v___x_246_, v___x_248_, v___x_248_, v___x_314_);
v___x_316_ = l_Lean_Syntax_node2(v___x_242_, v___x_250_, v___x_306_, v___x_315_);
v___x_317_ = l_Lean_Syntax_node5(v___x_242_, v___x_246_, v___x_266_, v___x_248_, v___x_301_, v___x_248_, v___x_316_);
v___x_318_ = l_Lean_Syntax_node1(v___x_242_, v___x_249_, v___x_317_);
v___x_319_ = ((lean_object*)(l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__73));
v___x_320_ = l_Lean_Syntax_node1(v___x_242_, v___x_319_, v___x_248_);
v___x_321_ = ((lean_object*)(l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__74));
v___x_322_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_322_, 0, v___x_242_);
lean_ctor_set(v___x_322_, 1, v___x_321_);
v___x_323_ = l_Lean_Syntax_node6(v___x_242_, v___x_243_, v___x_245_, v___x_248_, v___x_318_, v___x_320_, v___x_248_, v___x_322_);
v___x_324_ = lean_obj_once(&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__78, &l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__78_once, _init_l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__78);
v___x_325_ = 1;
v___x_326_ = l_Lean_Elab_Term_elabTerm(v___x_323_, v___x_324_, v___x_325_, v___x_325_, v_a_230_, v_a_231_, v_a_232_, v_a_233_, v_a_234_, v_a_235_);
return v___x_326_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___boxed(lean_object* v_mod_342_, lean_object* v_props_343_, lean_object* v_a_344_, lean_object* v_a_345_, lean_object* v_a_346_, lean_object* v_a_347_, lean_object* v_a_348_, lean_object* v_a_349_, lean_object* v_a_350_){
_start:
{
lean_object* v_res_351_; 
v_res_351_ = l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux(v_mod_342_, v_props_343_, v_a_344_, v_a_345_, v_a_346_, v_a_347_, v_a_348_, v_a_349_);
lean_dec(v_a_349_);
lean_dec_ref(v_a_348_);
lean_dec(v_a_347_);
lean_dec_ref(v_a_346_);
lean_dec(v_a_345_);
lean_dec_ref(v_a_344_);
return v_res_351_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Widget_elabWidgetInstanceSpec_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; 
v___x_352_ = lean_box(0);
v___x_353_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_354_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_354_, 0, v___x_353_);
lean_ctor_set(v___x_354_, 1, v___x_352_);
return v___x_354_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Widget_elabWidgetInstanceSpec_spec__0___redArg(){
_start:
{
lean_object* v___x_356_; lean_object* v___x_357_; 
v___x_356_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Widget_elabWidgetInstanceSpec_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Widget_elabWidgetInstanceSpec_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Widget_elabWidgetInstanceSpec_spec__0___redArg___closed__0);
v___x_357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_357_, 0, v___x_356_);
return v___x_357_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Widget_elabWidgetInstanceSpec_spec__0___redArg___boxed(lean_object* v___y_358_){
_start:
{
lean_object* v_res_359_; 
v_res_359_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Widget_elabWidgetInstanceSpec_spec__0___redArg();
return v_res_359_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Widget_elabWidgetInstanceSpec_spec__0(lean_object* v_00_u03b1_360_, lean_object* v___y_361_, lean_object* v___y_362_, lean_object* v___y_363_, lean_object* v___y_364_, lean_object* v___y_365_, lean_object* v___y_366_){
_start:
{
lean_object* v___x_368_; 
v___x_368_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Widget_elabWidgetInstanceSpec_spec__0___redArg();
return v___x_368_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Widget_elabWidgetInstanceSpec_spec__0___boxed(lean_object* v_00_u03b1_369_, lean_object* v___y_370_, lean_object* v___y_371_, lean_object* v___y_372_, lean_object* v___y_373_, lean_object* v___y_374_, lean_object* v___y_375_, lean_object* v___y_376_){
_start:
{
lean_object* v_res_377_; 
v_res_377_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Widget_elabWidgetInstanceSpec_spec__0(v_00_u03b1_369_, v___y_370_, v___y_371_, v___y_372_, v___y_373_, v___y_374_, v___y_375_);
lean_dec(v___y_375_);
lean_dec_ref(v___y_374_);
lean_dec(v___y_373_);
lean_dec_ref(v___y_372_);
lean_dec(v___y_371_);
lean_dec_ref(v___y_370_);
return v_res_377_;
}
}
static lean_object* _init_l_Lean_Widget_elabWidgetInstanceSpec___closed__1(void){
_start:
{
lean_object* v___x_379_; lean_object* v___x_380_; 
v___x_379_ = ((lean_object*)(l_Lean_Widget_elabWidgetInstanceSpec___closed__0));
v___x_380_ = l_String_toRawSubstring_x27(v___x_379_);
return v___x_380_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_elabWidgetInstanceSpec(lean_object* v_x_401_, lean_object* v_a_402_, lean_object* v_a_403_, lean_object* v_a_404_, lean_object* v_a_405_, lean_object* v_a_406_, lean_object* v_a_407_){
_start:
{
lean_object* v___x_409_; uint8_t v___x_410_; 
v___x_409_ = ((lean_object*)(l_Lean_Widget_widgetInstanceSpec___closed__3));
lean_inc(v_x_401_);
v___x_410_ = l_Lean_Syntax_isOfKind(v_x_401_, v___x_409_);
if (v___x_410_ == 0)
{
lean_object* v___x_411_; 
lean_dec(v_x_401_);
v___x_411_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Widget_elabWidgetInstanceSpec_spec__0___redArg();
return v___x_411_;
}
else
{
lean_object* v___x_412_; lean_object* v_mod_413_; lean_object* v___x_414_; uint8_t v___x_415_; 
v___x_412_ = lean_unsigned_to_nat(0u);
v_mod_413_ = l_Lean_Syntax_getArg(v_x_401_, v___x_412_);
v___x_414_ = ((lean_object*)(l_Lean_Widget_widgetInstanceSpec___closed__7));
lean_inc(v_mod_413_);
v___x_415_ = l_Lean_Syntax_isOfKind(v_mod_413_, v___x_414_);
if (v___x_415_ == 0)
{
lean_object* v___x_416_; 
lean_dec(v_mod_413_);
lean_dec(v_x_401_);
v___x_416_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Widget_elabWidgetInstanceSpec_spec__0___redArg();
return v___x_416_;
}
else
{
lean_object* v___x_417_; lean_object* v___x_418_; uint8_t v___x_419_; 
v___x_417_ = lean_unsigned_to_nat(1u);
v___x_418_ = l_Lean_Syntax_getArg(v_x_401_, v___x_417_);
lean_dec(v_x_401_);
lean_inc(v___x_418_);
v___x_419_ = l_Lean_Syntax_matchesNull(v___x_418_, v___x_412_);
if (v___x_419_ == 0)
{
lean_object* v___x_420_; uint8_t v___x_421_; 
v___x_420_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_418_);
v___x_421_ = l_Lean_Syntax_matchesNull(v___x_418_, v___x_420_);
if (v___x_421_ == 0)
{
lean_object* v___x_422_; 
lean_dec(v___x_418_);
lean_dec(v_mod_413_);
v___x_422_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Widget_elabWidgetInstanceSpec_spec__0___redArg();
return v___x_422_;
}
else
{
lean_object* v_props_423_; lean_object* v___x_424_; 
v_props_423_ = l_Lean_Syntax_getArg(v___x_418_, v___x_417_);
lean_dec(v___x_418_);
v___x_424_ = l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux(v_mod_413_, v_props_423_, v_a_402_, v_a_403_, v_a_404_, v_a_405_, v_a_406_, v_a_407_);
return v___x_424_;
}
}
else
{
lean_object* v_toCold_425_; lean_object* v_ref_426_; lean_object* v_quotContext_427_; lean_object* v_currMacroScope_428_; uint8_t v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; 
lean_dec(v___x_418_);
v_toCold_425_ = lean_ctor_get(v_a_406_, 0);
v_ref_426_ = lean_ctor_get(v_a_406_, 2);
v_quotContext_427_ = lean_ctor_get(v_toCold_425_, 8);
v_currMacroScope_428_ = lean_ctor_get(v_toCold_425_, 9);
v___x_429_ = 0;
v___x_430_ = l_Lean_SourceInfo_fromRef(v_ref_426_, v___x_429_);
v___x_431_ = ((lean_object*)(l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__49));
v___x_432_ = lean_obj_once(&l_Lean_Widget_elabWidgetInstanceSpec___closed__1, &l_Lean_Widget_elabWidgetInstanceSpec___closed__1_once, _init_l_Lean_Widget_elabWidgetInstanceSpec___closed__1);
v___x_433_ = ((lean_object*)(l_Lean_Widget_elabWidgetInstanceSpec___closed__4));
lean_inc(v_currMacroScope_428_);
lean_inc(v_quotContext_427_);
v___x_434_ = l_Lean_addMacroScope(v_quotContext_427_, v___x_433_, v_currMacroScope_428_);
v___x_435_ = ((lean_object*)(l_Lean_Widget_elabWidgetInstanceSpec___closed__7));
lean_inc_n(v___x_430_, 6);
v___x_436_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_436_, 0, v___x_430_);
lean_ctor_set(v___x_436_, 1, v___x_432_);
lean_ctor_set(v___x_436_, 2, v___x_434_);
lean_ctor_set(v___x_436_, 3, v___x_435_);
v___x_437_ = ((lean_object*)(l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__6));
v___x_438_ = ((lean_object*)(l_Lean_Widget_elabWidgetInstanceSpec___closed__9));
v___x_439_ = ((lean_object*)(l_Lean_Widget_elabWidgetInstanceSpec___closed__10));
v___x_440_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_440_, 0, v___x_430_);
lean_ctor_set(v___x_440_, 1, v___x_439_);
v___x_441_ = lean_obj_once(&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__7, &l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__7_once, _init_l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__7);
v___x_442_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_442_, 0, v___x_430_);
lean_ctor_set(v___x_442_, 1, v___x_437_);
lean_ctor_set(v___x_442_, 2, v___x_441_);
v___x_443_ = ((lean_object*)(l_Lean_Widget_elabWidgetInstanceSpec___closed__11));
v___x_444_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_444_, 0, v___x_430_);
lean_ctor_set(v___x_444_, 1, v___x_443_);
v___x_445_ = l_Lean_Syntax_node3(v___x_430_, v___x_438_, v___x_440_, v___x_442_, v___x_444_);
v___x_446_ = l_Lean_Syntax_node1(v___x_430_, v___x_437_, v___x_445_);
v___x_447_ = l_Lean_Syntax_node2(v___x_430_, v___x_431_, v___x_436_, v___x_446_);
v___x_448_ = l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux(v_mod_413_, v___x_447_, v_a_402_, v_a_403_, v_a_404_, v_a_405_, v_a_406_, v_a_407_);
return v___x_448_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_elabWidgetInstanceSpec___boxed(lean_object* v_x_449_, lean_object* v_a_450_, lean_object* v_a_451_, lean_object* v_a_452_, lean_object* v_a_453_, lean_object* v_a_454_, lean_object* v_a_455_, lean_object* v_a_456_){
_start:
{
lean_object* v_res_457_; 
v_res_457_ = l_Lean_Widget_elabWidgetInstanceSpec(v_x_449_, v_a_450_, v_a_451_, v_a_452_, v_a_453_, v_a_454_, v_a_455_);
lean_dec(v_a_455_);
lean_dec_ref(v_a_454_);
lean_dec(v_a_453_);
lean_dec_ref(v_a_452_);
lean_dec(v_a_451_);
lean_dec_ref(v_a_450_);
return v_res_457_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__0___redArg(){
_start:
{
lean_object* v___x_552_; lean_object* v___x_553_; 
v___x_552_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Widget_elabWidgetInstanceSpec_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Widget_elabWidgetInstanceSpec_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Widget_elabWidgetInstanceSpec_spec__0___redArg___closed__0);
v___x_553_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_553_, 0, v___x_552_);
return v___x_553_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__0___redArg___boxed(lean_object* v___y_554_){
_start:
{
lean_object* v_res_555_; 
v_res_555_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__0___redArg();
return v_res_555_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__0(lean_object* v_00_u03b1_556_, lean_object* v___y_557_, lean_object* v___y_558_){
_start:
{
lean_object* v___x_560_; 
v___x_560_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__0___redArg();
return v___x_560_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__0___boxed(lean_object* v_00_u03b1_561_, lean_object* v___y_562_, lean_object* v___y_563_, lean_object* v___y_564_){
_start:
{
lean_object* v_res_565_; 
v_res_565_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__0(v_00_u03b1_561_, v___y_562_, v___y_563_);
lean_dec(v___y_563_);
lean_dec_ref(v___y_562_);
return v_res_565_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__3___redArg(lean_object* v_e_566_, lean_object* v___y_567_){
_start:
{
uint8_t v___x_569_; 
v___x_569_ = l_Lean_Expr_hasMVar(v_e_566_);
if (v___x_569_ == 0)
{
lean_object* v___x_570_; 
v___x_570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_570_, 0, v_e_566_);
return v___x_570_;
}
else
{
lean_object* v___x_571_; lean_object* v_mctx_572_; lean_object* v___x_573_; lean_object* v_fst_574_; lean_object* v_snd_575_; lean_object* v___x_576_; lean_object* v_cache_577_; lean_object* v_zetaDeltaFVarIds_578_; lean_object* v_postponed_579_; lean_object* v_diag_580_; lean_object* v___x_582_; uint8_t v_isShared_583_; uint8_t v_isSharedCheck_589_; 
v___x_571_ = lean_st_ref_get(v___y_567_);
v_mctx_572_ = lean_ctor_get(v___x_571_, 0);
lean_inc_ref(v_mctx_572_);
lean_dec(v___x_571_);
v___x_573_ = l_Lean_instantiateMVarsCore(v_mctx_572_, v_e_566_);
v_fst_574_ = lean_ctor_get(v___x_573_, 0);
lean_inc(v_fst_574_);
v_snd_575_ = lean_ctor_get(v___x_573_, 1);
lean_inc(v_snd_575_);
lean_dec_ref(v___x_573_);
v___x_576_ = lean_st_ref_take(v___y_567_);
v_cache_577_ = lean_ctor_get(v___x_576_, 1);
v_zetaDeltaFVarIds_578_ = lean_ctor_get(v___x_576_, 2);
v_postponed_579_ = lean_ctor_get(v___x_576_, 3);
v_diag_580_ = lean_ctor_get(v___x_576_, 4);
v_isSharedCheck_589_ = !lean_is_exclusive(v___x_576_);
if (v_isSharedCheck_589_ == 0)
{
lean_object* v_unused_590_; 
v_unused_590_ = lean_ctor_get(v___x_576_, 0);
lean_dec(v_unused_590_);
v___x_582_ = v___x_576_;
v_isShared_583_ = v_isSharedCheck_589_;
goto v_resetjp_581_;
}
else
{
lean_inc(v_diag_580_);
lean_inc(v_postponed_579_);
lean_inc(v_zetaDeltaFVarIds_578_);
lean_inc(v_cache_577_);
lean_dec(v___x_576_);
v___x_582_ = lean_box(0);
v_isShared_583_ = v_isSharedCheck_589_;
goto v_resetjp_581_;
}
v_resetjp_581_:
{
lean_object* v___x_585_; 
if (v_isShared_583_ == 0)
{
lean_ctor_set(v___x_582_, 0, v_snd_575_);
v___x_585_ = v___x_582_;
goto v_reusejp_584_;
}
else
{
lean_object* v_reuseFailAlloc_588_; 
v_reuseFailAlloc_588_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_588_, 0, v_snd_575_);
lean_ctor_set(v_reuseFailAlloc_588_, 1, v_cache_577_);
lean_ctor_set(v_reuseFailAlloc_588_, 2, v_zetaDeltaFVarIds_578_);
lean_ctor_set(v_reuseFailAlloc_588_, 3, v_postponed_579_);
lean_ctor_set(v_reuseFailAlloc_588_, 4, v_diag_580_);
v___x_585_ = v_reuseFailAlloc_588_;
goto v_reusejp_584_;
}
v_reusejp_584_:
{
lean_object* v___x_586_; lean_object* v___x_587_; 
v___x_586_ = lean_st_ref_put(v___y_567_, v___x_585_);
v___x_587_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_587_, 0, v_fst_574_);
return v___x_587_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__3___redArg___boxed(lean_object* v_e_591_, lean_object* v___y_592_, lean_object* v___y_593_){
_start:
{
lean_object* v_res_594_; 
v_res_594_ = l_Lean_instantiateMVars___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__3___redArg(v_e_591_, v___y_592_);
lean_dec(v___y_592_);
return v_res_594_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__3(lean_object* v_e_595_, lean_object* v___y_596_, lean_object* v___y_597_, lean_object* v___y_598_, lean_object* v___y_599_, lean_object* v___y_600_, lean_object* v___y_601_){
_start:
{
lean_object* v___x_603_; 
v___x_603_ = l_Lean_instantiateMVars___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__3___redArg(v_e_595_, v___y_599_);
return v___x_603_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__3___boxed(lean_object* v_e_604_, lean_object* v___y_605_, lean_object* v___y_606_, lean_object* v___y_607_, lean_object* v___y_608_, lean_object* v___y_609_, lean_object* v___y_610_, lean_object* v___y_611_){
_start:
{
lean_object* v_res_612_; 
v_res_612_ = l_Lean_instantiateMVars___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__3(v_e_604_, v___y_605_, v___y_606_, v___y_607_, v___y_608_, v___y_609_, v___y_610_);
lean_dec(v___y_610_);
lean_dec_ref(v___y_609_);
lean_dec(v___y_608_);
lean_dec_ref(v___y_607_);
lean_dec(v___y_606_);
lean_dec_ref(v___y_605_);
return v_res_612_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7_spec__19___redArg(uint64_t v_k_613_, lean_object* v_t_614_){
_start:
{
if (lean_obj_tag(v_t_614_) == 0)
{
lean_object* v_k_615_; lean_object* v_v_616_; lean_object* v_l_617_; lean_object* v_r_618_; lean_object* v___x_620_; uint8_t v_isShared_621_; uint8_t v_isSharedCheck_1275_; 
v_k_615_ = lean_ctor_get(v_t_614_, 1);
v_v_616_ = lean_ctor_get(v_t_614_, 2);
v_l_617_ = lean_ctor_get(v_t_614_, 3);
v_r_618_ = lean_ctor_get(v_t_614_, 4);
v_isSharedCheck_1275_ = !lean_is_exclusive(v_t_614_);
if (v_isSharedCheck_1275_ == 0)
{
lean_object* v_unused_1276_; 
v_unused_1276_ = lean_ctor_get(v_t_614_, 0);
lean_dec(v_unused_1276_);
v___x_620_ = v_t_614_;
v_isShared_621_ = v_isSharedCheck_1275_;
goto v_resetjp_619_;
}
else
{
lean_inc(v_r_618_);
lean_inc(v_l_617_);
lean_inc(v_v_616_);
lean_inc(v_k_615_);
lean_dec(v_t_614_);
v___x_620_ = lean_box(0);
v_isShared_621_ = v_isSharedCheck_1275_;
goto v_resetjp_619_;
}
v_resetjp_619_:
{
uint64_t v___x_622_; uint8_t v___x_623_; 
v___x_622_ = lean_unbox_uint64(v_k_615_);
v___x_623_ = lean_uint64_dec_lt(v_k_613_, v___x_622_);
if (v___x_623_ == 0)
{
uint64_t v___x_624_; uint8_t v___x_625_; 
v___x_624_ = lean_unbox_uint64(v_k_615_);
v___x_625_ = lean_uint64_dec_eq(v_k_613_, v___x_624_);
if (v___x_625_ == 0)
{
lean_object* v_impl_626_; lean_object* v___x_627_; 
v_impl_626_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7_spec__19___redArg(v_k_613_, v_r_618_);
v___x_627_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_impl_626_) == 0)
{
if (lean_obj_tag(v_l_617_) == 0)
{
lean_object* v_size_628_; lean_object* v_size_629_; lean_object* v_k_630_; lean_object* v_v_631_; lean_object* v_l_632_; lean_object* v_r_633_; lean_object* v___x_634_; lean_object* v___x_635_; uint8_t v___x_636_; 
v_size_628_ = lean_ctor_get(v_impl_626_, 0);
lean_inc(v_size_628_);
v_size_629_ = lean_ctor_get(v_l_617_, 0);
v_k_630_ = lean_ctor_get(v_l_617_, 1);
v_v_631_ = lean_ctor_get(v_l_617_, 2);
v_l_632_ = lean_ctor_get(v_l_617_, 3);
v_r_633_ = lean_ctor_get(v_l_617_, 4);
lean_inc(v_r_633_);
v___x_634_ = lean_unsigned_to_nat(3u);
v___x_635_ = lean_nat_mul(v___x_634_, v_size_628_);
v___x_636_ = lean_nat_dec_lt(v___x_635_, v_size_629_);
lean_dec(v___x_635_);
if (v___x_636_ == 0)
{
lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_640_; 
lean_dec(v_r_633_);
v___x_637_ = lean_nat_add(v___x_627_, v_size_629_);
v___x_638_ = lean_nat_add(v___x_637_, v_size_628_);
lean_dec(v_size_628_);
lean_dec(v___x_637_);
if (v_isShared_621_ == 0)
{
lean_ctor_set(v___x_620_, 4, v_impl_626_);
lean_ctor_set(v___x_620_, 0, v___x_638_);
v___x_640_ = v___x_620_;
goto v_reusejp_639_;
}
else
{
lean_object* v_reuseFailAlloc_641_; 
v_reuseFailAlloc_641_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_641_, 0, v___x_638_);
lean_ctor_set(v_reuseFailAlloc_641_, 1, v_k_615_);
lean_ctor_set(v_reuseFailAlloc_641_, 2, v_v_616_);
lean_ctor_set(v_reuseFailAlloc_641_, 3, v_l_617_);
lean_ctor_set(v_reuseFailAlloc_641_, 4, v_impl_626_);
v___x_640_ = v_reuseFailAlloc_641_;
goto v_reusejp_639_;
}
v_reusejp_639_:
{
return v___x_640_;
}
}
else
{
lean_object* v___x_643_; uint8_t v_isShared_644_; uint8_t v_isSharedCheck_707_; 
lean_inc(v_l_632_);
lean_inc(v_v_631_);
lean_inc(v_k_630_);
lean_inc(v_size_629_);
v_isSharedCheck_707_ = !lean_is_exclusive(v_l_617_);
if (v_isSharedCheck_707_ == 0)
{
lean_object* v_unused_708_; lean_object* v_unused_709_; lean_object* v_unused_710_; lean_object* v_unused_711_; lean_object* v_unused_712_; 
v_unused_708_ = lean_ctor_get(v_l_617_, 4);
lean_dec(v_unused_708_);
v_unused_709_ = lean_ctor_get(v_l_617_, 3);
lean_dec(v_unused_709_);
v_unused_710_ = lean_ctor_get(v_l_617_, 2);
lean_dec(v_unused_710_);
v_unused_711_ = lean_ctor_get(v_l_617_, 1);
lean_dec(v_unused_711_);
v_unused_712_ = lean_ctor_get(v_l_617_, 0);
lean_dec(v_unused_712_);
v___x_643_ = v_l_617_;
v_isShared_644_ = v_isSharedCheck_707_;
goto v_resetjp_642_;
}
else
{
lean_dec(v_l_617_);
v___x_643_ = lean_box(0);
v_isShared_644_ = v_isSharedCheck_707_;
goto v_resetjp_642_;
}
v_resetjp_642_:
{
lean_object* v_size_645_; lean_object* v_size_646_; lean_object* v_k_647_; lean_object* v_v_648_; lean_object* v_l_649_; lean_object* v_r_650_; lean_object* v___x_651_; lean_object* v___x_652_; uint8_t v___x_653_; 
v_size_645_ = lean_ctor_get(v_l_632_, 0);
v_size_646_ = lean_ctor_get(v_r_633_, 0);
v_k_647_ = lean_ctor_get(v_r_633_, 1);
v_v_648_ = lean_ctor_get(v_r_633_, 2);
v_l_649_ = lean_ctor_get(v_r_633_, 3);
v_r_650_ = lean_ctor_get(v_r_633_, 4);
v___x_651_ = lean_unsigned_to_nat(2u);
v___x_652_ = lean_nat_mul(v___x_651_, v_size_645_);
v___x_653_ = lean_nat_dec_lt(v_size_646_, v___x_652_);
lean_dec(v___x_652_);
if (v___x_653_ == 0)
{
lean_object* v___x_655_; uint8_t v_isShared_656_; uint8_t v_isSharedCheck_682_; 
lean_inc(v_r_650_);
lean_inc(v_l_649_);
lean_inc(v_v_648_);
lean_inc(v_k_647_);
v_isSharedCheck_682_ = !lean_is_exclusive(v_r_633_);
if (v_isSharedCheck_682_ == 0)
{
lean_object* v_unused_683_; lean_object* v_unused_684_; lean_object* v_unused_685_; lean_object* v_unused_686_; lean_object* v_unused_687_; 
v_unused_683_ = lean_ctor_get(v_r_633_, 4);
lean_dec(v_unused_683_);
v_unused_684_ = lean_ctor_get(v_r_633_, 3);
lean_dec(v_unused_684_);
v_unused_685_ = lean_ctor_get(v_r_633_, 2);
lean_dec(v_unused_685_);
v_unused_686_ = lean_ctor_get(v_r_633_, 1);
lean_dec(v_unused_686_);
v_unused_687_ = lean_ctor_get(v_r_633_, 0);
lean_dec(v_unused_687_);
v___x_655_ = v_r_633_;
v_isShared_656_ = v_isSharedCheck_682_;
goto v_resetjp_654_;
}
else
{
lean_dec(v_r_633_);
v___x_655_ = lean_box(0);
v_isShared_656_ = v_isSharedCheck_682_;
goto v_resetjp_654_;
}
v_resetjp_654_:
{
lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___y_660_; lean_object* v___y_661_; lean_object* v___y_662_; lean_object* v___x_670_; lean_object* v___y_672_; 
v___x_657_ = lean_nat_add(v___x_627_, v_size_629_);
lean_dec(v_size_629_);
v___x_658_ = lean_nat_add(v___x_657_, v_size_628_);
lean_dec(v___x_657_);
v___x_670_ = lean_nat_add(v___x_627_, v_size_645_);
if (lean_obj_tag(v_l_649_) == 0)
{
lean_object* v_size_680_; 
v_size_680_ = lean_ctor_get(v_l_649_, 0);
lean_inc(v_size_680_);
v___y_672_ = v_size_680_;
goto v___jp_671_;
}
else
{
lean_object* v___x_681_; 
v___x_681_ = lean_unsigned_to_nat(0u);
v___y_672_ = v___x_681_;
goto v___jp_671_;
}
v___jp_659_:
{
lean_object* v___x_663_; lean_object* v___x_665_; 
v___x_663_ = lean_nat_add(v___y_660_, v___y_662_);
lean_dec(v___y_662_);
lean_dec(v___y_660_);
if (v_isShared_656_ == 0)
{
lean_ctor_set(v___x_655_, 4, v_impl_626_);
lean_ctor_set(v___x_655_, 3, v_r_650_);
lean_ctor_set(v___x_655_, 2, v_v_616_);
lean_ctor_set(v___x_655_, 1, v_k_615_);
lean_ctor_set(v___x_655_, 0, v___x_663_);
v___x_665_ = v___x_655_;
goto v_reusejp_664_;
}
else
{
lean_object* v_reuseFailAlloc_669_; 
v_reuseFailAlloc_669_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_669_, 0, v___x_663_);
lean_ctor_set(v_reuseFailAlloc_669_, 1, v_k_615_);
lean_ctor_set(v_reuseFailAlloc_669_, 2, v_v_616_);
lean_ctor_set(v_reuseFailAlloc_669_, 3, v_r_650_);
lean_ctor_set(v_reuseFailAlloc_669_, 4, v_impl_626_);
v___x_665_ = v_reuseFailAlloc_669_;
goto v_reusejp_664_;
}
v_reusejp_664_:
{
lean_object* v___x_667_; 
if (v_isShared_644_ == 0)
{
lean_ctor_set(v___x_643_, 4, v___x_665_);
lean_ctor_set(v___x_643_, 3, v___y_661_);
lean_ctor_set(v___x_643_, 2, v_v_648_);
lean_ctor_set(v___x_643_, 1, v_k_647_);
lean_ctor_set(v___x_643_, 0, v___x_658_);
v___x_667_ = v___x_643_;
goto v_reusejp_666_;
}
else
{
lean_object* v_reuseFailAlloc_668_; 
v_reuseFailAlloc_668_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_668_, 0, v___x_658_);
lean_ctor_set(v_reuseFailAlloc_668_, 1, v_k_647_);
lean_ctor_set(v_reuseFailAlloc_668_, 2, v_v_648_);
lean_ctor_set(v_reuseFailAlloc_668_, 3, v___y_661_);
lean_ctor_set(v_reuseFailAlloc_668_, 4, v___x_665_);
v___x_667_ = v_reuseFailAlloc_668_;
goto v_reusejp_666_;
}
v_reusejp_666_:
{
return v___x_667_;
}
}
}
v___jp_671_:
{
lean_object* v___x_673_; lean_object* v___x_675_; 
v___x_673_ = lean_nat_add(v___x_670_, v___y_672_);
lean_dec(v___y_672_);
lean_dec(v___x_670_);
if (v_isShared_621_ == 0)
{
lean_ctor_set(v___x_620_, 4, v_l_649_);
lean_ctor_set(v___x_620_, 3, v_l_632_);
lean_ctor_set(v___x_620_, 2, v_v_631_);
lean_ctor_set(v___x_620_, 1, v_k_630_);
lean_ctor_set(v___x_620_, 0, v___x_673_);
v___x_675_ = v___x_620_;
goto v_reusejp_674_;
}
else
{
lean_object* v_reuseFailAlloc_679_; 
v_reuseFailAlloc_679_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_679_, 0, v___x_673_);
lean_ctor_set(v_reuseFailAlloc_679_, 1, v_k_630_);
lean_ctor_set(v_reuseFailAlloc_679_, 2, v_v_631_);
lean_ctor_set(v_reuseFailAlloc_679_, 3, v_l_632_);
lean_ctor_set(v_reuseFailAlloc_679_, 4, v_l_649_);
v___x_675_ = v_reuseFailAlloc_679_;
goto v_reusejp_674_;
}
v_reusejp_674_:
{
lean_object* v___x_676_; 
v___x_676_ = lean_nat_add(v___x_627_, v_size_628_);
lean_dec(v_size_628_);
if (lean_obj_tag(v_r_650_) == 0)
{
lean_object* v_size_677_; 
v_size_677_ = lean_ctor_get(v_r_650_, 0);
lean_inc(v_size_677_);
v___y_660_ = v___x_676_;
v___y_661_ = v___x_675_;
v___y_662_ = v_size_677_;
goto v___jp_659_;
}
else
{
lean_object* v___x_678_; 
v___x_678_ = lean_unsigned_to_nat(0u);
v___y_660_ = v___x_676_;
v___y_661_ = v___x_675_;
v___y_662_ = v___x_678_;
goto v___jp_659_;
}
}
}
}
}
else
{
lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_693_; 
lean_del_object(v___x_620_);
v___x_688_ = lean_nat_add(v___x_627_, v_size_629_);
lean_dec(v_size_629_);
v___x_689_ = lean_nat_add(v___x_688_, v_size_628_);
lean_dec(v___x_688_);
v___x_690_ = lean_nat_add(v___x_627_, v_size_628_);
lean_dec(v_size_628_);
v___x_691_ = lean_nat_add(v___x_690_, v_size_646_);
lean_dec(v___x_690_);
lean_inc_ref(v_impl_626_);
if (v_isShared_644_ == 0)
{
lean_ctor_set(v___x_643_, 4, v_impl_626_);
lean_ctor_set(v___x_643_, 3, v_r_633_);
lean_ctor_set(v___x_643_, 2, v_v_616_);
lean_ctor_set(v___x_643_, 1, v_k_615_);
lean_ctor_set(v___x_643_, 0, v___x_691_);
v___x_693_ = v___x_643_;
goto v_reusejp_692_;
}
else
{
lean_object* v_reuseFailAlloc_706_; 
v_reuseFailAlloc_706_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_706_, 0, v___x_691_);
lean_ctor_set(v_reuseFailAlloc_706_, 1, v_k_615_);
lean_ctor_set(v_reuseFailAlloc_706_, 2, v_v_616_);
lean_ctor_set(v_reuseFailAlloc_706_, 3, v_r_633_);
lean_ctor_set(v_reuseFailAlloc_706_, 4, v_impl_626_);
v___x_693_ = v_reuseFailAlloc_706_;
goto v_reusejp_692_;
}
v_reusejp_692_:
{
lean_object* v___x_695_; uint8_t v_isShared_696_; uint8_t v_isSharedCheck_700_; 
v_isSharedCheck_700_ = !lean_is_exclusive(v_impl_626_);
if (v_isSharedCheck_700_ == 0)
{
lean_object* v_unused_701_; lean_object* v_unused_702_; lean_object* v_unused_703_; lean_object* v_unused_704_; lean_object* v_unused_705_; 
v_unused_701_ = lean_ctor_get(v_impl_626_, 4);
lean_dec(v_unused_701_);
v_unused_702_ = lean_ctor_get(v_impl_626_, 3);
lean_dec(v_unused_702_);
v_unused_703_ = lean_ctor_get(v_impl_626_, 2);
lean_dec(v_unused_703_);
v_unused_704_ = lean_ctor_get(v_impl_626_, 1);
lean_dec(v_unused_704_);
v_unused_705_ = lean_ctor_get(v_impl_626_, 0);
lean_dec(v_unused_705_);
v___x_695_ = v_impl_626_;
v_isShared_696_ = v_isSharedCheck_700_;
goto v_resetjp_694_;
}
else
{
lean_dec(v_impl_626_);
v___x_695_ = lean_box(0);
v_isShared_696_ = v_isSharedCheck_700_;
goto v_resetjp_694_;
}
v_resetjp_694_:
{
lean_object* v___x_698_; 
if (v_isShared_696_ == 0)
{
lean_ctor_set(v___x_695_, 4, v___x_693_);
lean_ctor_set(v___x_695_, 3, v_l_632_);
lean_ctor_set(v___x_695_, 2, v_v_631_);
lean_ctor_set(v___x_695_, 1, v_k_630_);
lean_ctor_set(v___x_695_, 0, v___x_689_);
v___x_698_ = v___x_695_;
goto v_reusejp_697_;
}
else
{
lean_object* v_reuseFailAlloc_699_; 
v_reuseFailAlloc_699_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_699_, 0, v___x_689_);
lean_ctor_set(v_reuseFailAlloc_699_, 1, v_k_630_);
lean_ctor_set(v_reuseFailAlloc_699_, 2, v_v_631_);
lean_ctor_set(v_reuseFailAlloc_699_, 3, v_l_632_);
lean_ctor_set(v_reuseFailAlloc_699_, 4, v___x_693_);
v___x_698_ = v_reuseFailAlloc_699_;
goto v_reusejp_697_;
}
v_reusejp_697_:
{
return v___x_698_;
}
}
}
}
}
}
}
else
{
lean_object* v_size_713_; lean_object* v___x_714_; lean_object* v___x_716_; 
v_size_713_ = lean_ctor_get(v_impl_626_, 0);
lean_inc(v_size_713_);
v___x_714_ = lean_nat_add(v___x_627_, v_size_713_);
lean_dec(v_size_713_);
if (v_isShared_621_ == 0)
{
lean_ctor_set(v___x_620_, 4, v_impl_626_);
lean_ctor_set(v___x_620_, 0, v___x_714_);
v___x_716_ = v___x_620_;
goto v_reusejp_715_;
}
else
{
lean_object* v_reuseFailAlloc_717_; 
v_reuseFailAlloc_717_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_717_, 0, v___x_714_);
lean_ctor_set(v_reuseFailAlloc_717_, 1, v_k_615_);
lean_ctor_set(v_reuseFailAlloc_717_, 2, v_v_616_);
lean_ctor_set(v_reuseFailAlloc_717_, 3, v_l_617_);
lean_ctor_set(v_reuseFailAlloc_717_, 4, v_impl_626_);
v___x_716_ = v_reuseFailAlloc_717_;
goto v_reusejp_715_;
}
v_reusejp_715_:
{
return v___x_716_;
}
}
}
else
{
if (lean_obj_tag(v_l_617_) == 0)
{
lean_object* v_l_718_; 
v_l_718_ = lean_ctor_get(v_l_617_, 3);
if (lean_obj_tag(v_l_718_) == 0)
{
lean_object* v_r_719_; 
lean_inc_ref(v_l_718_);
v_r_719_ = lean_ctor_get(v_l_617_, 4);
lean_inc(v_r_719_);
if (lean_obj_tag(v_r_719_) == 0)
{
lean_object* v_size_720_; lean_object* v_k_721_; lean_object* v_v_722_; lean_object* v___x_724_; uint8_t v_isShared_725_; uint8_t v_isSharedCheck_735_; 
v_size_720_ = lean_ctor_get(v_l_617_, 0);
v_k_721_ = lean_ctor_get(v_l_617_, 1);
v_v_722_ = lean_ctor_get(v_l_617_, 2);
v_isSharedCheck_735_ = !lean_is_exclusive(v_l_617_);
if (v_isSharedCheck_735_ == 0)
{
lean_object* v_unused_736_; lean_object* v_unused_737_; 
v_unused_736_ = lean_ctor_get(v_l_617_, 4);
lean_dec(v_unused_736_);
v_unused_737_ = lean_ctor_get(v_l_617_, 3);
lean_dec(v_unused_737_);
v___x_724_ = v_l_617_;
v_isShared_725_ = v_isSharedCheck_735_;
goto v_resetjp_723_;
}
else
{
lean_inc(v_v_722_);
lean_inc(v_k_721_);
lean_inc(v_size_720_);
lean_dec(v_l_617_);
v___x_724_ = lean_box(0);
v_isShared_725_ = v_isSharedCheck_735_;
goto v_resetjp_723_;
}
v_resetjp_723_:
{
lean_object* v_size_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_730_; 
v_size_726_ = lean_ctor_get(v_r_719_, 0);
v___x_727_ = lean_nat_add(v___x_627_, v_size_720_);
lean_dec(v_size_720_);
v___x_728_ = lean_nat_add(v___x_627_, v_size_726_);
if (v_isShared_725_ == 0)
{
lean_ctor_set(v___x_724_, 4, v_impl_626_);
lean_ctor_set(v___x_724_, 3, v_r_719_);
lean_ctor_set(v___x_724_, 2, v_v_616_);
lean_ctor_set(v___x_724_, 1, v_k_615_);
lean_ctor_set(v___x_724_, 0, v___x_728_);
v___x_730_ = v___x_724_;
goto v_reusejp_729_;
}
else
{
lean_object* v_reuseFailAlloc_734_; 
v_reuseFailAlloc_734_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_734_, 0, v___x_728_);
lean_ctor_set(v_reuseFailAlloc_734_, 1, v_k_615_);
lean_ctor_set(v_reuseFailAlloc_734_, 2, v_v_616_);
lean_ctor_set(v_reuseFailAlloc_734_, 3, v_r_719_);
lean_ctor_set(v_reuseFailAlloc_734_, 4, v_impl_626_);
v___x_730_ = v_reuseFailAlloc_734_;
goto v_reusejp_729_;
}
v_reusejp_729_:
{
lean_object* v___x_732_; 
if (v_isShared_621_ == 0)
{
lean_ctor_set(v___x_620_, 4, v___x_730_);
lean_ctor_set(v___x_620_, 3, v_l_718_);
lean_ctor_set(v___x_620_, 2, v_v_722_);
lean_ctor_set(v___x_620_, 1, v_k_721_);
lean_ctor_set(v___x_620_, 0, v___x_727_);
v___x_732_ = v___x_620_;
goto v_reusejp_731_;
}
else
{
lean_object* v_reuseFailAlloc_733_; 
v_reuseFailAlloc_733_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_733_, 0, v___x_727_);
lean_ctor_set(v_reuseFailAlloc_733_, 1, v_k_721_);
lean_ctor_set(v_reuseFailAlloc_733_, 2, v_v_722_);
lean_ctor_set(v_reuseFailAlloc_733_, 3, v_l_718_);
lean_ctor_set(v_reuseFailAlloc_733_, 4, v___x_730_);
v___x_732_ = v_reuseFailAlloc_733_;
goto v_reusejp_731_;
}
v_reusejp_731_:
{
return v___x_732_;
}
}
}
}
else
{
lean_object* v_k_738_; lean_object* v_v_739_; lean_object* v___x_741_; uint8_t v_isShared_742_; uint8_t v_isSharedCheck_750_; 
v_k_738_ = lean_ctor_get(v_l_617_, 1);
v_v_739_ = lean_ctor_get(v_l_617_, 2);
v_isSharedCheck_750_ = !lean_is_exclusive(v_l_617_);
if (v_isSharedCheck_750_ == 0)
{
lean_object* v_unused_751_; lean_object* v_unused_752_; lean_object* v_unused_753_; 
v_unused_751_ = lean_ctor_get(v_l_617_, 4);
lean_dec(v_unused_751_);
v_unused_752_ = lean_ctor_get(v_l_617_, 3);
lean_dec(v_unused_752_);
v_unused_753_ = lean_ctor_get(v_l_617_, 0);
lean_dec(v_unused_753_);
v___x_741_ = v_l_617_;
v_isShared_742_ = v_isSharedCheck_750_;
goto v_resetjp_740_;
}
else
{
lean_inc(v_v_739_);
lean_inc(v_k_738_);
lean_dec(v_l_617_);
v___x_741_ = lean_box(0);
v_isShared_742_ = v_isSharedCheck_750_;
goto v_resetjp_740_;
}
v_resetjp_740_:
{
lean_object* v___x_743_; lean_object* v___x_745_; 
v___x_743_ = lean_unsigned_to_nat(3u);
if (v_isShared_742_ == 0)
{
lean_ctor_set(v___x_741_, 3, v_r_719_);
lean_ctor_set(v___x_741_, 2, v_v_616_);
lean_ctor_set(v___x_741_, 1, v_k_615_);
lean_ctor_set(v___x_741_, 0, v___x_627_);
v___x_745_ = v___x_741_;
goto v_reusejp_744_;
}
else
{
lean_object* v_reuseFailAlloc_749_; 
v_reuseFailAlloc_749_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_749_, 0, v___x_627_);
lean_ctor_set(v_reuseFailAlloc_749_, 1, v_k_615_);
lean_ctor_set(v_reuseFailAlloc_749_, 2, v_v_616_);
lean_ctor_set(v_reuseFailAlloc_749_, 3, v_r_719_);
lean_ctor_set(v_reuseFailAlloc_749_, 4, v_r_719_);
v___x_745_ = v_reuseFailAlloc_749_;
goto v_reusejp_744_;
}
v_reusejp_744_:
{
lean_object* v___x_747_; 
if (v_isShared_621_ == 0)
{
lean_ctor_set(v___x_620_, 4, v___x_745_);
lean_ctor_set(v___x_620_, 3, v_l_718_);
lean_ctor_set(v___x_620_, 2, v_v_739_);
lean_ctor_set(v___x_620_, 1, v_k_738_);
lean_ctor_set(v___x_620_, 0, v___x_743_);
v___x_747_ = v___x_620_;
goto v_reusejp_746_;
}
else
{
lean_object* v_reuseFailAlloc_748_; 
v_reuseFailAlloc_748_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_748_, 0, v___x_743_);
lean_ctor_set(v_reuseFailAlloc_748_, 1, v_k_738_);
lean_ctor_set(v_reuseFailAlloc_748_, 2, v_v_739_);
lean_ctor_set(v_reuseFailAlloc_748_, 3, v_l_718_);
lean_ctor_set(v_reuseFailAlloc_748_, 4, v___x_745_);
v___x_747_ = v_reuseFailAlloc_748_;
goto v_reusejp_746_;
}
v_reusejp_746_:
{
return v___x_747_;
}
}
}
}
}
else
{
lean_object* v_r_754_; 
v_r_754_ = lean_ctor_get(v_l_617_, 4);
lean_inc(v_r_754_);
if (lean_obj_tag(v_r_754_) == 0)
{
lean_object* v_k_755_; lean_object* v_v_756_; lean_object* v___x_758_; uint8_t v_isShared_759_; uint8_t v_isSharedCheck_779_; 
lean_inc(v_l_718_);
v_k_755_ = lean_ctor_get(v_l_617_, 1);
v_v_756_ = lean_ctor_get(v_l_617_, 2);
v_isSharedCheck_779_ = !lean_is_exclusive(v_l_617_);
if (v_isSharedCheck_779_ == 0)
{
lean_object* v_unused_780_; lean_object* v_unused_781_; lean_object* v_unused_782_; 
v_unused_780_ = lean_ctor_get(v_l_617_, 4);
lean_dec(v_unused_780_);
v_unused_781_ = lean_ctor_get(v_l_617_, 3);
lean_dec(v_unused_781_);
v_unused_782_ = lean_ctor_get(v_l_617_, 0);
lean_dec(v_unused_782_);
v___x_758_ = v_l_617_;
v_isShared_759_ = v_isSharedCheck_779_;
goto v_resetjp_757_;
}
else
{
lean_inc(v_v_756_);
lean_inc(v_k_755_);
lean_dec(v_l_617_);
v___x_758_ = lean_box(0);
v_isShared_759_ = v_isSharedCheck_779_;
goto v_resetjp_757_;
}
v_resetjp_757_:
{
lean_object* v_k_760_; lean_object* v_v_761_; lean_object* v___x_763_; uint8_t v_isShared_764_; uint8_t v_isSharedCheck_775_; 
v_k_760_ = lean_ctor_get(v_r_754_, 1);
v_v_761_ = lean_ctor_get(v_r_754_, 2);
v_isSharedCheck_775_ = !lean_is_exclusive(v_r_754_);
if (v_isSharedCheck_775_ == 0)
{
lean_object* v_unused_776_; lean_object* v_unused_777_; lean_object* v_unused_778_; 
v_unused_776_ = lean_ctor_get(v_r_754_, 4);
lean_dec(v_unused_776_);
v_unused_777_ = lean_ctor_get(v_r_754_, 3);
lean_dec(v_unused_777_);
v_unused_778_ = lean_ctor_get(v_r_754_, 0);
lean_dec(v_unused_778_);
v___x_763_ = v_r_754_;
v_isShared_764_ = v_isSharedCheck_775_;
goto v_resetjp_762_;
}
else
{
lean_inc(v_v_761_);
lean_inc(v_k_760_);
lean_dec(v_r_754_);
v___x_763_ = lean_box(0);
v_isShared_764_ = v_isSharedCheck_775_;
goto v_resetjp_762_;
}
v_resetjp_762_:
{
lean_object* v___x_765_; lean_object* v___x_767_; 
v___x_765_ = lean_unsigned_to_nat(3u);
if (v_isShared_764_ == 0)
{
lean_ctor_set(v___x_763_, 4, v_l_718_);
lean_ctor_set(v___x_763_, 3, v_l_718_);
lean_ctor_set(v___x_763_, 2, v_v_756_);
lean_ctor_set(v___x_763_, 1, v_k_755_);
lean_ctor_set(v___x_763_, 0, v___x_627_);
v___x_767_ = v___x_763_;
goto v_reusejp_766_;
}
else
{
lean_object* v_reuseFailAlloc_774_; 
v_reuseFailAlloc_774_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_774_, 0, v___x_627_);
lean_ctor_set(v_reuseFailAlloc_774_, 1, v_k_755_);
lean_ctor_set(v_reuseFailAlloc_774_, 2, v_v_756_);
lean_ctor_set(v_reuseFailAlloc_774_, 3, v_l_718_);
lean_ctor_set(v_reuseFailAlloc_774_, 4, v_l_718_);
v___x_767_ = v_reuseFailAlloc_774_;
goto v_reusejp_766_;
}
v_reusejp_766_:
{
lean_object* v___x_769_; 
if (v_isShared_759_ == 0)
{
lean_ctor_set(v___x_758_, 4, v_l_718_);
lean_ctor_set(v___x_758_, 2, v_v_616_);
lean_ctor_set(v___x_758_, 1, v_k_615_);
lean_ctor_set(v___x_758_, 0, v___x_627_);
v___x_769_ = v___x_758_;
goto v_reusejp_768_;
}
else
{
lean_object* v_reuseFailAlloc_773_; 
v_reuseFailAlloc_773_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_773_, 0, v___x_627_);
lean_ctor_set(v_reuseFailAlloc_773_, 1, v_k_615_);
lean_ctor_set(v_reuseFailAlloc_773_, 2, v_v_616_);
lean_ctor_set(v_reuseFailAlloc_773_, 3, v_l_718_);
lean_ctor_set(v_reuseFailAlloc_773_, 4, v_l_718_);
v___x_769_ = v_reuseFailAlloc_773_;
goto v_reusejp_768_;
}
v_reusejp_768_:
{
lean_object* v___x_771_; 
if (v_isShared_621_ == 0)
{
lean_ctor_set(v___x_620_, 4, v___x_769_);
lean_ctor_set(v___x_620_, 3, v___x_767_);
lean_ctor_set(v___x_620_, 2, v_v_761_);
lean_ctor_set(v___x_620_, 1, v_k_760_);
lean_ctor_set(v___x_620_, 0, v___x_765_);
v___x_771_ = v___x_620_;
goto v_reusejp_770_;
}
else
{
lean_object* v_reuseFailAlloc_772_; 
v_reuseFailAlloc_772_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_772_, 0, v___x_765_);
lean_ctor_set(v_reuseFailAlloc_772_, 1, v_k_760_);
lean_ctor_set(v_reuseFailAlloc_772_, 2, v_v_761_);
lean_ctor_set(v_reuseFailAlloc_772_, 3, v___x_767_);
lean_ctor_set(v_reuseFailAlloc_772_, 4, v___x_769_);
v___x_771_ = v_reuseFailAlloc_772_;
goto v_reusejp_770_;
}
v_reusejp_770_:
{
return v___x_771_;
}
}
}
}
}
}
else
{
lean_object* v___x_783_; lean_object* v___x_785_; 
v___x_783_ = lean_unsigned_to_nat(2u);
if (v_isShared_621_ == 0)
{
lean_ctor_set(v___x_620_, 4, v_r_754_);
lean_ctor_set(v___x_620_, 0, v___x_783_);
v___x_785_ = v___x_620_;
goto v_reusejp_784_;
}
else
{
lean_object* v_reuseFailAlloc_786_; 
v_reuseFailAlloc_786_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_786_, 0, v___x_783_);
lean_ctor_set(v_reuseFailAlloc_786_, 1, v_k_615_);
lean_ctor_set(v_reuseFailAlloc_786_, 2, v_v_616_);
lean_ctor_set(v_reuseFailAlloc_786_, 3, v_l_617_);
lean_ctor_set(v_reuseFailAlloc_786_, 4, v_r_754_);
v___x_785_ = v_reuseFailAlloc_786_;
goto v_reusejp_784_;
}
v_reusejp_784_:
{
return v___x_785_;
}
}
}
}
else
{
lean_object* v___x_788_; 
if (v_isShared_621_ == 0)
{
lean_ctor_set(v___x_620_, 4, v_l_617_);
lean_ctor_set(v___x_620_, 0, v___x_627_);
v___x_788_ = v___x_620_;
goto v_reusejp_787_;
}
else
{
lean_object* v_reuseFailAlloc_789_; 
v_reuseFailAlloc_789_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_789_, 0, v___x_627_);
lean_ctor_set(v_reuseFailAlloc_789_, 1, v_k_615_);
lean_ctor_set(v_reuseFailAlloc_789_, 2, v_v_616_);
lean_ctor_set(v_reuseFailAlloc_789_, 3, v_l_617_);
lean_ctor_set(v_reuseFailAlloc_789_, 4, v_l_617_);
v___x_788_ = v_reuseFailAlloc_789_;
goto v_reusejp_787_;
}
v_reusejp_787_:
{
return v___x_788_;
}
}
}
}
else
{
lean_del_object(v___x_620_);
lean_dec(v_v_616_);
lean_dec(v_k_615_);
if (lean_obj_tag(v_l_617_) == 0)
{
if (lean_obj_tag(v_r_618_) == 0)
{
lean_object* v_size_790_; lean_object* v_k_791_; lean_object* v_v_792_; lean_object* v_l_793_; lean_object* v_r_794_; lean_object* v_size_795_; lean_object* v_k_796_; lean_object* v_v_797_; lean_object* v_l_798_; lean_object* v_r_799_; lean_object* v___x_800_; uint8_t v___x_801_; 
v_size_790_ = lean_ctor_get(v_l_617_, 0);
v_k_791_ = lean_ctor_get(v_l_617_, 1);
v_v_792_ = lean_ctor_get(v_l_617_, 2);
v_l_793_ = lean_ctor_get(v_l_617_, 3);
v_r_794_ = lean_ctor_get(v_l_617_, 4);
lean_inc(v_r_794_);
v_size_795_ = lean_ctor_get(v_r_618_, 0);
v_k_796_ = lean_ctor_get(v_r_618_, 1);
v_v_797_ = lean_ctor_get(v_r_618_, 2);
v_l_798_ = lean_ctor_get(v_r_618_, 3);
lean_inc(v_l_798_);
v_r_799_ = lean_ctor_get(v_r_618_, 4);
v___x_800_ = lean_unsigned_to_nat(1u);
v___x_801_ = lean_nat_dec_lt(v_size_790_, v_size_795_);
if (v___x_801_ == 0)
{
lean_object* v___x_803_; uint8_t v_isShared_804_; uint8_t v_isSharedCheck_937_; 
lean_inc(v_l_793_);
lean_inc(v_v_792_);
lean_inc(v_k_791_);
v_isSharedCheck_937_ = !lean_is_exclusive(v_l_617_);
if (v_isSharedCheck_937_ == 0)
{
lean_object* v_unused_938_; lean_object* v_unused_939_; lean_object* v_unused_940_; lean_object* v_unused_941_; lean_object* v_unused_942_; 
v_unused_938_ = lean_ctor_get(v_l_617_, 4);
lean_dec(v_unused_938_);
v_unused_939_ = lean_ctor_get(v_l_617_, 3);
lean_dec(v_unused_939_);
v_unused_940_ = lean_ctor_get(v_l_617_, 2);
lean_dec(v_unused_940_);
v_unused_941_ = lean_ctor_get(v_l_617_, 1);
lean_dec(v_unused_941_);
v_unused_942_ = lean_ctor_get(v_l_617_, 0);
lean_dec(v_unused_942_);
v___x_803_ = v_l_617_;
v_isShared_804_ = v_isSharedCheck_937_;
goto v_resetjp_802_;
}
else
{
lean_dec(v_l_617_);
v___x_803_ = lean_box(0);
v_isShared_804_ = v_isSharedCheck_937_;
goto v_resetjp_802_;
}
v_resetjp_802_:
{
lean_object* v___x_805_; lean_object* v_tree_806_; 
v___x_805_ = l_Std_DTreeMap_Internal_Impl_maxView___redArg(v_k_791_, v_v_792_, v_l_793_, v_r_794_);
v_tree_806_ = lean_ctor_get(v___x_805_, 2);
lean_inc(v_tree_806_);
if (lean_obj_tag(v_tree_806_) == 0)
{
lean_object* v_k_807_; lean_object* v_v_808_; lean_object* v_size_809_; lean_object* v___x_810_; lean_object* v___x_811_; uint8_t v___x_812_; 
v_k_807_ = lean_ctor_get(v___x_805_, 0);
lean_inc(v_k_807_);
v_v_808_ = lean_ctor_get(v___x_805_, 1);
lean_inc(v_v_808_);
lean_dec_ref(v___x_805_);
v_size_809_ = lean_ctor_get(v_tree_806_, 0);
v___x_810_ = lean_unsigned_to_nat(3u);
v___x_811_ = lean_nat_mul(v___x_810_, v_size_809_);
v___x_812_ = lean_nat_dec_lt(v___x_811_, v_size_795_);
lean_dec(v___x_811_);
if (v___x_812_ == 0)
{
lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_816_; 
lean_dec(v_l_798_);
v___x_813_ = lean_nat_add(v___x_800_, v_size_809_);
v___x_814_ = lean_nat_add(v___x_813_, v_size_795_);
lean_dec(v___x_813_);
if (v_isShared_804_ == 0)
{
lean_ctor_set(v___x_803_, 4, v_r_618_);
lean_ctor_set(v___x_803_, 3, v_tree_806_);
lean_ctor_set(v___x_803_, 2, v_v_808_);
lean_ctor_set(v___x_803_, 1, v_k_807_);
lean_ctor_set(v___x_803_, 0, v___x_814_);
v___x_816_ = v___x_803_;
goto v_reusejp_815_;
}
else
{
lean_object* v_reuseFailAlloc_817_; 
v_reuseFailAlloc_817_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_817_, 0, v___x_814_);
lean_ctor_set(v_reuseFailAlloc_817_, 1, v_k_807_);
lean_ctor_set(v_reuseFailAlloc_817_, 2, v_v_808_);
lean_ctor_set(v_reuseFailAlloc_817_, 3, v_tree_806_);
lean_ctor_set(v_reuseFailAlloc_817_, 4, v_r_618_);
v___x_816_ = v_reuseFailAlloc_817_;
goto v_reusejp_815_;
}
v_reusejp_815_:
{
return v___x_816_;
}
}
else
{
lean_object* v___x_819_; uint8_t v_isShared_820_; uint8_t v_isSharedCheck_872_; 
lean_inc(v_r_799_);
lean_inc(v_v_797_);
lean_inc(v_k_796_);
lean_inc(v_size_795_);
v_isSharedCheck_872_ = !lean_is_exclusive(v_r_618_);
if (v_isSharedCheck_872_ == 0)
{
lean_object* v_unused_873_; lean_object* v_unused_874_; lean_object* v_unused_875_; lean_object* v_unused_876_; lean_object* v_unused_877_; 
v_unused_873_ = lean_ctor_get(v_r_618_, 4);
lean_dec(v_unused_873_);
v_unused_874_ = lean_ctor_get(v_r_618_, 3);
lean_dec(v_unused_874_);
v_unused_875_ = lean_ctor_get(v_r_618_, 2);
lean_dec(v_unused_875_);
v_unused_876_ = lean_ctor_get(v_r_618_, 1);
lean_dec(v_unused_876_);
v_unused_877_ = lean_ctor_get(v_r_618_, 0);
lean_dec(v_unused_877_);
v___x_819_ = v_r_618_;
v_isShared_820_ = v_isSharedCheck_872_;
goto v_resetjp_818_;
}
else
{
lean_dec(v_r_618_);
v___x_819_ = lean_box(0);
v_isShared_820_ = v_isSharedCheck_872_;
goto v_resetjp_818_;
}
v_resetjp_818_:
{
lean_object* v_size_821_; lean_object* v_k_822_; lean_object* v_v_823_; lean_object* v_l_824_; lean_object* v_r_825_; lean_object* v_size_826_; lean_object* v___x_827_; lean_object* v___x_828_; uint8_t v___x_829_; 
v_size_821_ = lean_ctor_get(v_l_798_, 0);
v_k_822_ = lean_ctor_get(v_l_798_, 1);
v_v_823_ = lean_ctor_get(v_l_798_, 2);
v_l_824_ = lean_ctor_get(v_l_798_, 3);
v_r_825_ = lean_ctor_get(v_l_798_, 4);
v_size_826_ = lean_ctor_get(v_r_799_, 0);
v___x_827_ = lean_unsigned_to_nat(2u);
v___x_828_ = lean_nat_mul(v___x_827_, v_size_826_);
v___x_829_ = lean_nat_dec_lt(v_size_821_, v___x_828_);
lean_dec(v___x_828_);
if (v___x_829_ == 0)
{
lean_object* v___x_831_; uint8_t v_isShared_832_; uint8_t v_isSharedCheck_857_; 
lean_inc(v_r_825_);
lean_inc(v_l_824_);
lean_inc(v_v_823_);
lean_inc(v_k_822_);
v_isSharedCheck_857_ = !lean_is_exclusive(v_l_798_);
if (v_isSharedCheck_857_ == 0)
{
lean_object* v_unused_858_; lean_object* v_unused_859_; lean_object* v_unused_860_; lean_object* v_unused_861_; lean_object* v_unused_862_; 
v_unused_858_ = lean_ctor_get(v_l_798_, 4);
lean_dec(v_unused_858_);
v_unused_859_ = lean_ctor_get(v_l_798_, 3);
lean_dec(v_unused_859_);
v_unused_860_ = lean_ctor_get(v_l_798_, 2);
lean_dec(v_unused_860_);
v_unused_861_ = lean_ctor_get(v_l_798_, 1);
lean_dec(v_unused_861_);
v_unused_862_ = lean_ctor_get(v_l_798_, 0);
lean_dec(v_unused_862_);
v___x_831_ = v_l_798_;
v_isShared_832_ = v_isSharedCheck_857_;
goto v_resetjp_830_;
}
else
{
lean_dec(v_l_798_);
v___x_831_ = lean_box(0);
v_isShared_832_ = v_isSharedCheck_857_;
goto v_resetjp_830_;
}
v_resetjp_830_:
{
lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___y_836_; lean_object* v___y_837_; lean_object* v___y_838_; lean_object* v___y_847_; 
v___x_833_ = lean_nat_add(v___x_800_, v_size_809_);
v___x_834_ = lean_nat_add(v___x_833_, v_size_795_);
lean_dec(v_size_795_);
if (lean_obj_tag(v_l_824_) == 0)
{
lean_object* v_size_855_; 
v_size_855_ = lean_ctor_get(v_l_824_, 0);
lean_inc(v_size_855_);
v___y_847_ = v_size_855_;
goto v___jp_846_;
}
else
{
lean_object* v___x_856_; 
v___x_856_ = lean_unsigned_to_nat(0u);
v___y_847_ = v___x_856_;
goto v___jp_846_;
}
v___jp_835_:
{
lean_object* v___x_839_; lean_object* v___x_841_; 
v___x_839_ = lean_nat_add(v___y_836_, v___y_838_);
lean_dec(v___y_838_);
lean_dec(v___y_836_);
if (v_isShared_832_ == 0)
{
lean_ctor_set(v___x_831_, 4, v_r_799_);
lean_ctor_set(v___x_831_, 3, v_r_825_);
lean_ctor_set(v___x_831_, 2, v_v_797_);
lean_ctor_set(v___x_831_, 1, v_k_796_);
lean_ctor_set(v___x_831_, 0, v___x_839_);
v___x_841_ = v___x_831_;
goto v_reusejp_840_;
}
else
{
lean_object* v_reuseFailAlloc_845_; 
v_reuseFailAlloc_845_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_845_, 0, v___x_839_);
lean_ctor_set(v_reuseFailAlloc_845_, 1, v_k_796_);
lean_ctor_set(v_reuseFailAlloc_845_, 2, v_v_797_);
lean_ctor_set(v_reuseFailAlloc_845_, 3, v_r_825_);
lean_ctor_set(v_reuseFailAlloc_845_, 4, v_r_799_);
v___x_841_ = v_reuseFailAlloc_845_;
goto v_reusejp_840_;
}
v_reusejp_840_:
{
lean_object* v___x_843_; 
if (v_isShared_820_ == 0)
{
lean_ctor_set(v___x_819_, 4, v___x_841_);
lean_ctor_set(v___x_819_, 3, v___y_837_);
lean_ctor_set(v___x_819_, 2, v_v_823_);
lean_ctor_set(v___x_819_, 1, v_k_822_);
lean_ctor_set(v___x_819_, 0, v___x_834_);
v___x_843_ = v___x_819_;
goto v_reusejp_842_;
}
else
{
lean_object* v_reuseFailAlloc_844_; 
v_reuseFailAlloc_844_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_844_, 0, v___x_834_);
lean_ctor_set(v_reuseFailAlloc_844_, 1, v_k_822_);
lean_ctor_set(v_reuseFailAlloc_844_, 2, v_v_823_);
lean_ctor_set(v_reuseFailAlloc_844_, 3, v___y_837_);
lean_ctor_set(v_reuseFailAlloc_844_, 4, v___x_841_);
v___x_843_ = v_reuseFailAlloc_844_;
goto v_reusejp_842_;
}
v_reusejp_842_:
{
return v___x_843_;
}
}
}
v___jp_846_:
{
lean_object* v___x_848_; lean_object* v___x_850_; 
v___x_848_ = lean_nat_add(v___x_833_, v___y_847_);
lean_dec(v___y_847_);
lean_dec(v___x_833_);
if (v_isShared_804_ == 0)
{
lean_ctor_set(v___x_803_, 4, v_l_824_);
lean_ctor_set(v___x_803_, 3, v_tree_806_);
lean_ctor_set(v___x_803_, 2, v_v_808_);
lean_ctor_set(v___x_803_, 1, v_k_807_);
lean_ctor_set(v___x_803_, 0, v___x_848_);
v___x_850_ = v___x_803_;
goto v_reusejp_849_;
}
else
{
lean_object* v_reuseFailAlloc_854_; 
v_reuseFailAlloc_854_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_854_, 0, v___x_848_);
lean_ctor_set(v_reuseFailAlloc_854_, 1, v_k_807_);
lean_ctor_set(v_reuseFailAlloc_854_, 2, v_v_808_);
lean_ctor_set(v_reuseFailAlloc_854_, 3, v_tree_806_);
lean_ctor_set(v_reuseFailAlloc_854_, 4, v_l_824_);
v___x_850_ = v_reuseFailAlloc_854_;
goto v_reusejp_849_;
}
v_reusejp_849_:
{
lean_object* v___x_851_; 
v___x_851_ = lean_nat_add(v___x_800_, v_size_826_);
if (lean_obj_tag(v_r_825_) == 0)
{
lean_object* v_size_852_; 
v_size_852_ = lean_ctor_get(v_r_825_, 0);
lean_inc(v_size_852_);
v___y_836_ = v___x_851_;
v___y_837_ = v___x_850_;
v___y_838_ = v_size_852_;
goto v___jp_835_;
}
else
{
lean_object* v___x_853_; 
v___x_853_ = lean_unsigned_to_nat(0u);
v___y_836_ = v___x_851_;
v___y_837_ = v___x_850_;
v___y_838_ = v___x_853_;
goto v___jp_835_;
}
}
}
}
}
else
{
lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_867_; 
v___x_863_ = lean_nat_add(v___x_800_, v_size_809_);
v___x_864_ = lean_nat_add(v___x_863_, v_size_795_);
lean_dec(v_size_795_);
v___x_865_ = lean_nat_add(v___x_863_, v_size_821_);
lean_dec(v___x_863_);
if (v_isShared_820_ == 0)
{
lean_ctor_set(v___x_819_, 4, v_l_798_);
lean_ctor_set(v___x_819_, 3, v_tree_806_);
lean_ctor_set(v___x_819_, 2, v_v_808_);
lean_ctor_set(v___x_819_, 1, v_k_807_);
lean_ctor_set(v___x_819_, 0, v___x_865_);
v___x_867_ = v___x_819_;
goto v_reusejp_866_;
}
else
{
lean_object* v_reuseFailAlloc_871_; 
v_reuseFailAlloc_871_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_871_, 0, v___x_865_);
lean_ctor_set(v_reuseFailAlloc_871_, 1, v_k_807_);
lean_ctor_set(v_reuseFailAlloc_871_, 2, v_v_808_);
lean_ctor_set(v_reuseFailAlloc_871_, 3, v_tree_806_);
lean_ctor_set(v_reuseFailAlloc_871_, 4, v_l_798_);
v___x_867_ = v_reuseFailAlloc_871_;
goto v_reusejp_866_;
}
v_reusejp_866_:
{
lean_object* v___x_869_; 
if (v_isShared_804_ == 0)
{
lean_ctor_set(v___x_803_, 4, v_r_799_);
lean_ctor_set(v___x_803_, 3, v___x_867_);
lean_ctor_set(v___x_803_, 2, v_v_797_);
lean_ctor_set(v___x_803_, 1, v_k_796_);
lean_ctor_set(v___x_803_, 0, v___x_864_);
v___x_869_ = v___x_803_;
goto v_reusejp_868_;
}
else
{
lean_object* v_reuseFailAlloc_870_; 
v_reuseFailAlloc_870_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_870_, 0, v___x_864_);
lean_ctor_set(v_reuseFailAlloc_870_, 1, v_k_796_);
lean_ctor_set(v_reuseFailAlloc_870_, 2, v_v_797_);
lean_ctor_set(v_reuseFailAlloc_870_, 3, v___x_867_);
lean_ctor_set(v_reuseFailAlloc_870_, 4, v_r_799_);
v___x_869_ = v_reuseFailAlloc_870_;
goto v_reusejp_868_;
}
v_reusejp_868_:
{
return v___x_869_;
}
}
}
}
}
}
else
{
lean_object* v___x_879_; uint8_t v_isShared_880_; uint8_t v_isSharedCheck_931_; 
lean_inc(v_r_799_);
lean_inc(v_v_797_);
lean_inc(v_k_796_);
lean_inc(v_size_795_);
v_isSharedCheck_931_ = !lean_is_exclusive(v_r_618_);
if (v_isSharedCheck_931_ == 0)
{
lean_object* v_unused_932_; lean_object* v_unused_933_; lean_object* v_unused_934_; lean_object* v_unused_935_; lean_object* v_unused_936_; 
v_unused_932_ = lean_ctor_get(v_r_618_, 4);
lean_dec(v_unused_932_);
v_unused_933_ = lean_ctor_get(v_r_618_, 3);
lean_dec(v_unused_933_);
v_unused_934_ = lean_ctor_get(v_r_618_, 2);
lean_dec(v_unused_934_);
v_unused_935_ = lean_ctor_get(v_r_618_, 1);
lean_dec(v_unused_935_);
v_unused_936_ = lean_ctor_get(v_r_618_, 0);
lean_dec(v_unused_936_);
v___x_879_ = v_r_618_;
v_isShared_880_ = v_isSharedCheck_931_;
goto v_resetjp_878_;
}
else
{
lean_dec(v_r_618_);
v___x_879_ = lean_box(0);
v_isShared_880_ = v_isSharedCheck_931_;
goto v_resetjp_878_;
}
v_resetjp_878_:
{
if (lean_obj_tag(v_l_798_) == 0)
{
if (lean_obj_tag(v_r_799_) == 0)
{
lean_object* v_k_881_; lean_object* v_v_882_; lean_object* v_size_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_887_; 
v_k_881_ = lean_ctor_get(v___x_805_, 0);
lean_inc(v_k_881_);
v_v_882_ = lean_ctor_get(v___x_805_, 1);
lean_inc(v_v_882_);
lean_dec_ref(v___x_805_);
v_size_883_ = lean_ctor_get(v_l_798_, 0);
v___x_884_ = lean_nat_add(v___x_800_, v_size_795_);
lean_dec(v_size_795_);
v___x_885_ = lean_nat_add(v___x_800_, v_size_883_);
if (v_isShared_880_ == 0)
{
lean_ctor_set(v___x_879_, 4, v_l_798_);
lean_ctor_set(v___x_879_, 3, v_tree_806_);
lean_ctor_set(v___x_879_, 2, v_v_882_);
lean_ctor_set(v___x_879_, 1, v_k_881_);
lean_ctor_set(v___x_879_, 0, v___x_885_);
v___x_887_ = v___x_879_;
goto v_reusejp_886_;
}
else
{
lean_object* v_reuseFailAlloc_891_; 
v_reuseFailAlloc_891_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_891_, 0, v___x_885_);
lean_ctor_set(v_reuseFailAlloc_891_, 1, v_k_881_);
lean_ctor_set(v_reuseFailAlloc_891_, 2, v_v_882_);
lean_ctor_set(v_reuseFailAlloc_891_, 3, v_tree_806_);
lean_ctor_set(v_reuseFailAlloc_891_, 4, v_l_798_);
v___x_887_ = v_reuseFailAlloc_891_;
goto v_reusejp_886_;
}
v_reusejp_886_:
{
lean_object* v___x_889_; 
if (v_isShared_804_ == 0)
{
lean_ctor_set(v___x_803_, 4, v_r_799_);
lean_ctor_set(v___x_803_, 3, v___x_887_);
lean_ctor_set(v___x_803_, 2, v_v_797_);
lean_ctor_set(v___x_803_, 1, v_k_796_);
lean_ctor_set(v___x_803_, 0, v___x_884_);
v___x_889_ = v___x_803_;
goto v_reusejp_888_;
}
else
{
lean_object* v_reuseFailAlloc_890_; 
v_reuseFailAlloc_890_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_890_, 0, v___x_884_);
lean_ctor_set(v_reuseFailAlloc_890_, 1, v_k_796_);
lean_ctor_set(v_reuseFailAlloc_890_, 2, v_v_797_);
lean_ctor_set(v_reuseFailAlloc_890_, 3, v___x_887_);
lean_ctor_set(v_reuseFailAlloc_890_, 4, v_r_799_);
v___x_889_ = v_reuseFailAlloc_890_;
goto v_reusejp_888_;
}
v_reusejp_888_:
{
return v___x_889_;
}
}
}
else
{
lean_object* v_k_892_; lean_object* v_v_893_; lean_object* v_k_894_; lean_object* v_v_895_; lean_object* v___x_897_; uint8_t v_isShared_898_; uint8_t v_isSharedCheck_909_; 
lean_dec(v_size_795_);
v_k_892_ = lean_ctor_get(v___x_805_, 0);
lean_inc(v_k_892_);
v_v_893_ = lean_ctor_get(v___x_805_, 1);
lean_inc(v_v_893_);
lean_dec_ref(v___x_805_);
v_k_894_ = lean_ctor_get(v_l_798_, 1);
v_v_895_ = lean_ctor_get(v_l_798_, 2);
v_isSharedCheck_909_ = !lean_is_exclusive(v_l_798_);
if (v_isSharedCheck_909_ == 0)
{
lean_object* v_unused_910_; lean_object* v_unused_911_; lean_object* v_unused_912_; 
v_unused_910_ = lean_ctor_get(v_l_798_, 4);
lean_dec(v_unused_910_);
v_unused_911_ = lean_ctor_get(v_l_798_, 3);
lean_dec(v_unused_911_);
v_unused_912_ = lean_ctor_get(v_l_798_, 0);
lean_dec(v_unused_912_);
v___x_897_ = v_l_798_;
v_isShared_898_ = v_isSharedCheck_909_;
goto v_resetjp_896_;
}
else
{
lean_inc(v_v_895_);
lean_inc(v_k_894_);
lean_dec(v_l_798_);
v___x_897_ = lean_box(0);
v_isShared_898_ = v_isSharedCheck_909_;
goto v_resetjp_896_;
}
v_resetjp_896_:
{
lean_object* v___x_899_; lean_object* v___x_901_; 
v___x_899_ = lean_unsigned_to_nat(3u);
if (v_isShared_898_ == 0)
{
lean_ctor_set(v___x_897_, 4, v_r_799_);
lean_ctor_set(v___x_897_, 3, v_r_799_);
lean_ctor_set(v___x_897_, 2, v_v_893_);
lean_ctor_set(v___x_897_, 1, v_k_892_);
lean_ctor_set(v___x_897_, 0, v___x_800_);
v___x_901_ = v___x_897_;
goto v_reusejp_900_;
}
else
{
lean_object* v_reuseFailAlloc_908_; 
v_reuseFailAlloc_908_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_908_, 0, v___x_800_);
lean_ctor_set(v_reuseFailAlloc_908_, 1, v_k_892_);
lean_ctor_set(v_reuseFailAlloc_908_, 2, v_v_893_);
lean_ctor_set(v_reuseFailAlloc_908_, 3, v_r_799_);
lean_ctor_set(v_reuseFailAlloc_908_, 4, v_r_799_);
v___x_901_ = v_reuseFailAlloc_908_;
goto v_reusejp_900_;
}
v_reusejp_900_:
{
lean_object* v___x_903_; 
if (v_isShared_880_ == 0)
{
lean_ctor_set(v___x_879_, 3, v_r_799_);
lean_ctor_set(v___x_879_, 0, v___x_800_);
v___x_903_ = v___x_879_;
goto v_reusejp_902_;
}
else
{
lean_object* v_reuseFailAlloc_907_; 
v_reuseFailAlloc_907_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_907_, 0, v___x_800_);
lean_ctor_set(v_reuseFailAlloc_907_, 1, v_k_796_);
lean_ctor_set(v_reuseFailAlloc_907_, 2, v_v_797_);
lean_ctor_set(v_reuseFailAlloc_907_, 3, v_r_799_);
lean_ctor_set(v_reuseFailAlloc_907_, 4, v_r_799_);
v___x_903_ = v_reuseFailAlloc_907_;
goto v_reusejp_902_;
}
v_reusejp_902_:
{
lean_object* v___x_905_; 
if (v_isShared_804_ == 0)
{
lean_ctor_set(v___x_803_, 4, v___x_903_);
lean_ctor_set(v___x_803_, 3, v___x_901_);
lean_ctor_set(v___x_803_, 2, v_v_895_);
lean_ctor_set(v___x_803_, 1, v_k_894_);
lean_ctor_set(v___x_803_, 0, v___x_899_);
v___x_905_ = v___x_803_;
goto v_reusejp_904_;
}
else
{
lean_object* v_reuseFailAlloc_906_; 
v_reuseFailAlloc_906_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_906_, 0, v___x_899_);
lean_ctor_set(v_reuseFailAlloc_906_, 1, v_k_894_);
lean_ctor_set(v_reuseFailAlloc_906_, 2, v_v_895_);
lean_ctor_set(v_reuseFailAlloc_906_, 3, v___x_901_);
lean_ctor_set(v_reuseFailAlloc_906_, 4, v___x_903_);
v___x_905_ = v_reuseFailAlloc_906_;
goto v_reusejp_904_;
}
v_reusejp_904_:
{
return v___x_905_;
}
}
}
}
}
}
else
{
if (lean_obj_tag(v_r_799_) == 0)
{
lean_object* v_k_913_; lean_object* v_v_914_; lean_object* v___x_915_; lean_object* v___x_917_; 
lean_dec(v_size_795_);
v_k_913_ = lean_ctor_get(v___x_805_, 0);
lean_inc(v_k_913_);
v_v_914_ = lean_ctor_get(v___x_805_, 1);
lean_inc(v_v_914_);
lean_dec_ref(v___x_805_);
v___x_915_ = lean_unsigned_to_nat(3u);
if (v_isShared_880_ == 0)
{
lean_ctor_set(v___x_879_, 4, v_l_798_);
lean_ctor_set(v___x_879_, 2, v_v_914_);
lean_ctor_set(v___x_879_, 1, v_k_913_);
lean_ctor_set(v___x_879_, 0, v___x_800_);
v___x_917_ = v___x_879_;
goto v_reusejp_916_;
}
else
{
lean_object* v_reuseFailAlloc_921_; 
v_reuseFailAlloc_921_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_921_, 0, v___x_800_);
lean_ctor_set(v_reuseFailAlloc_921_, 1, v_k_913_);
lean_ctor_set(v_reuseFailAlloc_921_, 2, v_v_914_);
lean_ctor_set(v_reuseFailAlloc_921_, 3, v_l_798_);
lean_ctor_set(v_reuseFailAlloc_921_, 4, v_l_798_);
v___x_917_ = v_reuseFailAlloc_921_;
goto v_reusejp_916_;
}
v_reusejp_916_:
{
lean_object* v___x_919_; 
if (v_isShared_804_ == 0)
{
lean_ctor_set(v___x_803_, 4, v_r_799_);
lean_ctor_set(v___x_803_, 3, v___x_917_);
lean_ctor_set(v___x_803_, 2, v_v_797_);
lean_ctor_set(v___x_803_, 1, v_k_796_);
lean_ctor_set(v___x_803_, 0, v___x_915_);
v___x_919_ = v___x_803_;
goto v_reusejp_918_;
}
else
{
lean_object* v_reuseFailAlloc_920_; 
v_reuseFailAlloc_920_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_920_, 0, v___x_915_);
lean_ctor_set(v_reuseFailAlloc_920_, 1, v_k_796_);
lean_ctor_set(v_reuseFailAlloc_920_, 2, v_v_797_);
lean_ctor_set(v_reuseFailAlloc_920_, 3, v___x_917_);
lean_ctor_set(v_reuseFailAlloc_920_, 4, v_r_799_);
v___x_919_ = v_reuseFailAlloc_920_;
goto v_reusejp_918_;
}
v_reusejp_918_:
{
return v___x_919_;
}
}
}
else
{
lean_object* v_k_922_; lean_object* v_v_923_; lean_object* v___x_925_; 
v_k_922_ = lean_ctor_get(v___x_805_, 0);
lean_inc(v_k_922_);
v_v_923_ = lean_ctor_get(v___x_805_, 1);
lean_inc(v_v_923_);
lean_dec_ref(v___x_805_);
if (v_isShared_880_ == 0)
{
lean_ctor_set(v___x_879_, 3, v_r_799_);
v___x_925_ = v___x_879_;
goto v_reusejp_924_;
}
else
{
lean_object* v_reuseFailAlloc_930_; 
v_reuseFailAlloc_930_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_930_, 0, v_size_795_);
lean_ctor_set(v_reuseFailAlloc_930_, 1, v_k_796_);
lean_ctor_set(v_reuseFailAlloc_930_, 2, v_v_797_);
lean_ctor_set(v_reuseFailAlloc_930_, 3, v_r_799_);
lean_ctor_set(v_reuseFailAlloc_930_, 4, v_r_799_);
v___x_925_ = v_reuseFailAlloc_930_;
goto v_reusejp_924_;
}
v_reusejp_924_:
{
lean_object* v___x_926_; lean_object* v___x_928_; 
v___x_926_ = lean_unsigned_to_nat(2u);
if (v_isShared_804_ == 0)
{
lean_ctor_set(v___x_803_, 4, v___x_925_);
lean_ctor_set(v___x_803_, 3, v_r_799_);
lean_ctor_set(v___x_803_, 2, v_v_923_);
lean_ctor_set(v___x_803_, 1, v_k_922_);
lean_ctor_set(v___x_803_, 0, v___x_926_);
v___x_928_ = v___x_803_;
goto v_reusejp_927_;
}
else
{
lean_object* v_reuseFailAlloc_929_; 
v_reuseFailAlloc_929_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_929_, 0, v___x_926_);
lean_ctor_set(v_reuseFailAlloc_929_, 1, v_k_922_);
lean_ctor_set(v_reuseFailAlloc_929_, 2, v_v_923_);
lean_ctor_set(v_reuseFailAlloc_929_, 3, v_r_799_);
lean_ctor_set(v_reuseFailAlloc_929_, 4, v___x_925_);
v___x_928_ = v_reuseFailAlloc_929_;
goto v_reusejp_927_;
}
v_reusejp_927_:
{
return v___x_928_;
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
lean_object* v___x_944_; uint8_t v_isShared_945_; uint8_t v_isSharedCheck_1095_; 
lean_inc(v_r_799_);
lean_inc(v_v_797_);
lean_inc(v_k_796_);
v_isSharedCheck_1095_ = !lean_is_exclusive(v_r_618_);
if (v_isSharedCheck_1095_ == 0)
{
lean_object* v_unused_1096_; lean_object* v_unused_1097_; lean_object* v_unused_1098_; lean_object* v_unused_1099_; lean_object* v_unused_1100_; 
v_unused_1096_ = lean_ctor_get(v_r_618_, 4);
lean_dec(v_unused_1096_);
v_unused_1097_ = lean_ctor_get(v_r_618_, 3);
lean_dec(v_unused_1097_);
v_unused_1098_ = lean_ctor_get(v_r_618_, 2);
lean_dec(v_unused_1098_);
v_unused_1099_ = lean_ctor_get(v_r_618_, 1);
lean_dec(v_unused_1099_);
v_unused_1100_ = lean_ctor_get(v_r_618_, 0);
lean_dec(v_unused_1100_);
v___x_944_ = v_r_618_;
v_isShared_945_ = v_isSharedCheck_1095_;
goto v_resetjp_943_;
}
else
{
lean_dec(v_r_618_);
v___x_944_ = lean_box(0);
v_isShared_945_ = v_isSharedCheck_1095_;
goto v_resetjp_943_;
}
v_resetjp_943_:
{
lean_object* v___x_946_; lean_object* v_tree_947_; 
v___x_946_ = l_Std_DTreeMap_Internal_Impl_minView___redArg(v_k_796_, v_v_797_, v_l_798_, v_r_799_);
v_tree_947_ = lean_ctor_get(v___x_946_, 2);
lean_inc(v_tree_947_);
if (lean_obj_tag(v_tree_947_) == 0)
{
lean_object* v_k_948_; lean_object* v_v_949_; lean_object* v_size_950_; lean_object* v___x_951_; lean_object* v___x_952_; uint8_t v___x_953_; 
v_k_948_ = lean_ctor_get(v___x_946_, 0);
lean_inc(v_k_948_);
v_v_949_ = lean_ctor_get(v___x_946_, 1);
lean_inc(v_v_949_);
lean_dec_ref(v___x_946_);
v_size_950_ = lean_ctor_get(v_tree_947_, 0);
v___x_951_ = lean_unsigned_to_nat(3u);
v___x_952_ = lean_nat_mul(v___x_951_, v_size_950_);
v___x_953_ = lean_nat_dec_lt(v___x_952_, v_size_790_);
lean_dec(v___x_952_);
if (v___x_953_ == 0)
{
lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_957_; 
lean_dec(v_r_794_);
v___x_954_ = lean_nat_add(v___x_800_, v_size_790_);
v___x_955_ = lean_nat_add(v___x_954_, v_size_950_);
lean_dec(v___x_954_);
if (v_isShared_945_ == 0)
{
lean_ctor_set(v___x_944_, 4, v_tree_947_);
lean_ctor_set(v___x_944_, 3, v_l_617_);
lean_ctor_set(v___x_944_, 2, v_v_949_);
lean_ctor_set(v___x_944_, 1, v_k_948_);
lean_ctor_set(v___x_944_, 0, v___x_955_);
v___x_957_ = v___x_944_;
goto v_reusejp_956_;
}
else
{
lean_object* v_reuseFailAlloc_958_; 
v_reuseFailAlloc_958_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_958_, 0, v___x_955_);
lean_ctor_set(v_reuseFailAlloc_958_, 1, v_k_948_);
lean_ctor_set(v_reuseFailAlloc_958_, 2, v_v_949_);
lean_ctor_set(v_reuseFailAlloc_958_, 3, v_l_617_);
lean_ctor_set(v_reuseFailAlloc_958_, 4, v_tree_947_);
v___x_957_ = v_reuseFailAlloc_958_;
goto v_reusejp_956_;
}
v_reusejp_956_:
{
return v___x_957_;
}
}
else
{
lean_object* v___x_960_; uint8_t v_isShared_961_; uint8_t v_isSharedCheck_1024_; 
lean_inc(v_l_793_);
lean_inc(v_v_792_);
lean_inc(v_k_791_);
lean_inc(v_size_790_);
v_isSharedCheck_1024_ = !lean_is_exclusive(v_l_617_);
if (v_isSharedCheck_1024_ == 0)
{
lean_object* v_unused_1025_; lean_object* v_unused_1026_; lean_object* v_unused_1027_; lean_object* v_unused_1028_; lean_object* v_unused_1029_; 
v_unused_1025_ = lean_ctor_get(v_l_617_, 4);
lean_dec(v_unused_1025_);
v_unused_1026_ = lean_ctor_get(v_l_617_, 3);
lean_dec(v_unused_1026_);
v_unused_1027_ = lean_ctor_get(v_l_617_, 2);
lean_dec(v_unused_1027_);
v_unused_1028_ = lean_ctor_get(v_l_617_, 1);
lean_dec(v_unused_1028_);
v_unused_1029_ = lean_ctor_get(v_l_617_, 0);
lean_dec(v_unused_1029_);
v___x_960_ = v_l_617_;
v_isShared_961_ = v_isSharedCheck_1024_;
goto v_resetjp_959_;
}
else
{
lean_dec(v_l_617_);
v___x_960_ = lean_box(0);
v_isShared_961_ = v_isSharedCheck_1024_;
goto v_resetjp_959_;
}
v_resetjp_959_:
{
lean_object* v_size_962_; lean_object* v_size_963_; lean_object* v_k_964_; lean_object* v_v_965_; lean_object* v_l_966_; lean_object* v_r_967_; lean_object* v___x_968_; lean_object* v___x_969_; uint8_t v___x_970_; 
v_size_962_ = lean_ctor_get(v_l_793_, 0);
v_size_963_ = lean_ctor_get(v_r_794_, 0);
v_k_964_ = lean_ctor_get(v_r_794_, 1);
v_v_965_ = lean_ctor_get(v_r_794_, 2);
v_l_966_ = lean_ctor_get(v_r_794_, 3);
v_r_967_ = lean_ctor_get(v_r_794_, 4);
v___x_968_ = lean_unsigned_to_nat(2u);
v___x_969_ = lean_nat_mul(v___x_968_, v_size_962_);
v___x_970_ = lean_nat_dec_lt(v_size_963_, v___x_969_);
lean_dec(v___x_969_);
if (v___x_970_ == 0)
{
lean_object* v___x_972_; uint8_t v_isShared_973_; uint8_t v_isSharedCheck_1008_; 
lean_inc(v_r_967_);
lean_inc(v_l_966_);
lean_inc(v_v_965_);
lean_inc(v_k_964_);
lean_del_object(v___x_960_);
v_isSharedCheck_1008_ = !lean_is_exclusive(v_r_794_);
if (v_isSharedCheck_1008_ == 0)
{
lean_object* v_unused_1009_; lean_object* v_unused_1010_; lean_object* v_unused_1011_; lean_object* v_unused_1012_; lean_object* v_unused_1013_; 
v_unused_1009_ = lean_ctor_get(v_r_794_, 4);
lean_dec(v_unused_1009_);
v_unused_1010_ = lean_ctor_get(v_r_794_, 3);
lean_dec(v_unused_1010_);
v_unused_1011_ = lean_ctor_get(v_r_794_, 2);
lean_dec(v_unused_1011_);
v_unused_1012_ = lean_ctor_get(v_r_794_, 1);
lean_dec(v_unused_1012_);
v_unused_1013_ = lean_ctor_get(v_r_794_, 0);
lean_dec(v_unused_1013_);
v___x_972_ = v_r_794_;
v_isShared_973_ = v_isSharedCheck_1008_;
goto v_resetjp_971_;
}
else
{
lean_dec(v_r_794_);
v___x_972_ = lean_box(0);
v_isShared_973_ = v_isSharedCheck_1008_;
goto v_resetjp_971_;
}
v_resetjp_971_:
{
lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___y_977_; lean_object* v___y_978_; lean_object* v___y_979_; lean_object* v___x_996_; lean_object* v___y_998_; 
v___x_974_ = lean_nat_add(v___x_800_, v_size_790_);
lean_dec(v_size_790_);
v___x_975_ = lean_nat_add(v___x_974_, v_size_950_);
lean_dec(v___x_974_);
v___x_996_ = lean_nat_add(v___x_800_, v_size_962_);
if (lean_obj_tag(v_l_966_) == 0)
{
lean_object* v_size_1006_; 
v_size_1006_ = lean_ctor_get(v_l_966_, 0);
lean_inc(v_size_1006_);
v___y_998_ = v_size_1006_;
goto v___jp_997_;
}
else
{
lean_object* v___x_1007_; 
v___x_1007_ = lean_unsigned_to_nat(0u);
v___y_998_ = v___x_1007_;
goto v___jp_997_;
}
v___jp_976_:
{
lean_object* v___x_980_; lean_object* v___x_982_; 
v___x_980_ = lean_nat_add(v___y_977_, v___y_979_);
lean_dec(v___y_979_);
lean_dec(v___y_977_);
lean_inc_ref(v_tree_947_);
if (v_isShared_973_ == 0)
{
lean_ctor_set(v___x_972_, 4, v_tree_947_);
lean_ctor_set(v___x_972_, 3, v_r_967_);
lean_ctor_set(v___x_972_, 2, v_v_949_);
lean_ctor_set(v___x_972_, 1, v_k_948_);
lean_ctor_set(v___x_972_, 0, v___x_980_);
v___x_982_ = v___x_972_;
goto v_reusejp_981_;
}
else
{
lean_object* v_reuseFailAlloc_995_; 
v_reuseFailAlloc_995_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_995_, 0, v___x_980_);
lean_ctor_set(v_reuseFailAlloc_995_, 1, v_k_948_);
lean_ctor_set(v_reuseFailAlloc_995_, 2, v_v_949_);
lean_ctor_set(v_reuseFailAlloc_995_, 3, v_r_967_);
lean_ctor_set(v_reuseFailAlloc_995_, 4, v_tree_947_);
v___x_982_ = v_reuseFailAlloc_995_;
goto v_reusejp_981_;
}
v_reusejp_981_:
{
lean_object* v___x_984_; uint8_t v_isShared_985_; uint8_t v_isSharedCheck_989_; 
v_isSharedCheck_989_ = !lean_is_exclusive(v_tree_947_);
if (v_isSharedCheck_989_ == 0)
{
lean_object* v_unused_990_; lean_object* v_unused_991_; lean_object* v_unused_992_; lean_object* v_unused_993_; lean_object* v_unused_994_; 
v_unused_990_ = lean_ctor_get(v_tree_947_, 4);
lean_dec(v_unused_990_);
v_unused_991_ = lean_ctor_get(v_tree_947_, 3);
lean_dec(v_unused_991_);
v_unused_992_ = lean_ctor_get(v_tree_947_, 2);
lean_dec(v_unused_992_);
v_unused_993_ = lean_ctor_get(v_tree_947_, 1);
lean_dec(v_unused_993_);
v_unused_994_ = lean_ctor_get(v_tree_947_, 0);
lean_dec(v_unused_994_);
v___x_984_ = v_tree_947_;
v_isShared_985_ = v_isSharedCheck_989_;
goto v_resetjp_983_;
}
else
{
lean_dec(v_tree_947_);
v___x_984_ = lean_box(0);
v_isShared_985_ = v_isSharedCheck_989_;
goto v_resetjp_983_;
}
v_resetjp_983_:
{
lean_object* v___x_987_; 
if (v_isShared_985_ == 0)
{
lean_ctor_set(v___x_984_, 4, v___x_982_);
lean_ctor_set(v___x_984_, 3, v___y_978_);
lean_ctor_set(v___x_984_, 2, v_v_965_);
lean_ctor_set(v___x_984_, 1, v_k_964_);
lean_ctor_set(v___x_984_, 0, v___x_975_);
v___x_987_ = v___x_984_;
goto v_reusejp_986_;
}
else
{
lean_object* v_reuseFailAlloc_988_; 
v_reuseFailAlloc_988_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_988_, 0, v___x_975_);
lean_ctor_set(v_reuseFailAlloc_988_, 1, v_k_964_);
lean_ctor_set(v_reuseFailAlloc_988_, 2, v_v_965_);
lean_ctor_set(v_reuseFailAlloc_988_, 3, v___y_978_);
lean_ctor_set(v_reuseFailAlloc_988_, 4, v___x_982_);
v___x_987_ = v_reuseFailAlloc_988_;
goto v_reusejp_986_;
}
v_reusejp_986_:
{
return v___x_987_;
}
}
}
}
v___jp_997_:
{
lean_object* v___x_999_; lean_object* v___x_1001_; 
v___x_999_ = lean_nat_add(v___x_996_, v___y_998_);
lean_dec(v___y_998_);
lean_dec(v___x_996_);
if (v_isShared_945_ == 0)
{
lean_ctor_set(v___x_944_, 4, v_l_966_);
lean_ctor_set(v___x_944_, 3, v_l_793_);
lean_ctor_set(v___x_944_, 2, v_v_792_);
lean_ctor_set(v___x_944_, 1, v_k_791_);
lean_ctor_set(v___x_944_, 0, v___x_999_);
v___x_1001_ = v___x_944_;
goto v_reusejp_1000_;
}
else
{
lean_object* v_reuseFailAlloc_1005_; 
v_reuseFailAlloc_1005_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1005_, 0, v___x_999_);
lean_ctor_set(v_reuseFailAlloc_1005_, 1, v_k_791_);
lean_ctor_set(v_reuseFailAlloc_1005_, 2, v_v_792_);
lean_ctor_set(v_reuseFailAlloc_1005_, 3, v_l_793_);
lean_ctor_set(v_reuseFailAlloc_1005_, 4, v_l_966_);
v___x_1001_ = v_reuseFailAlloc_1005_;
goto v_reusejp_1000_;
}
v_reusejp_1000_:
{
lean_object* v___x_1002_; 
v___x_1002_ = lean_nat_add(v___x_800_, v_size_950_);
if (lean_obj_tag(v_r_967_) == 0)
{
lean_object* v_size_1003_; 
v_size_1003_ = lean_ctor_get(v_r_967_, 0);
lean_inc(v_size_1003_);
v___y_977_ = v___x_1002_;
v___y_978_ = v___x_1001_;
v___y_979_ = v_size_1003_;
goto v___jp_976_;
}
else
{
lean_object* v___x_1004_; 
v___x_1004_ = lean_unsigned_to_nat(0u);
v___y_977_ = v___x_1002_;
v___y_978_ = v___x_1001_;
v___y_979_ = v___x_1004_;
goto v___jp_976_;
}
}
}
}
}
else
{
lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1019_; 
v___x_1014_ = lean_nat_add(v___x_800_, v_size_790_);
lean_dec(v_size_790_);
v___x_1015_ = lean_nat_add(v___x_1014_, v_size_950_);
lean_dec(v___x_1014_);
v___x_1016_ = lean_nat_add(v___x_800_, v_size_950_);
v___x_1017_ = lean_nat_add(v___x_1016_, v_size_963_);
lean_dec(v___x_1016_);
if (v_isShared_945_ == 0)
{
lean_ctor_set(v___x_944_, 4, v_tree_947_);
lean_ctor_set(v___x_944_, 3, v_r_794_);
lean_ctor_set(v___x_944_, 2, v_v_949_);
lean_ctor_set(v___x_944_, 1, v_k_948_);
lean_ctor_set(v___x_944_, 0, v___x_1017_);
v___x_1019_ = v___x_944_;
goto v_reusejp_1018_;
}
else
{
lean_object* v_reuseFailAlloc_1023_; 
v_reuseFailAlloc_1023_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1023_, 0, v___x_1017_);
lean_ctor_set(v_reuseFailAlloc_1023_, 1, v_k_948_);
lean_ctor_set(v_reuseFailAlloc_1023_, 2, v_v_949_);
lean_ctor_set(v_reuseFailAlloc_1023_, 3, v_r_794_);
lean_ctor_set(v_reuseFailAlloc_1023_, 4, v_tree_947_);
v___x_1019_ = v_reuseFailAlloc_1023_;
goto v_reusejp_1018_;
}
v_reusejp_1018_:
{
lean_object* v___x_1021_; 
if (v_isShared_961_ == 0)
{
lean_ctor_set(v___x_960_, 4, v___x_1019_);
lean_ctor_set(v___x_960_, 0, v___x_1015_);
v___x_1021_ = v___x_960_;
goto v_reusejp_1020_;
}
else
{
lean_object* v_reuseFailAlloc_1022_; 
v_reuseFailAlloc_1022_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1022_, 0, v___x_1015_);
lean_ctor_set(v_reuseFailAlloc_1022_, 1, v_k_791_);
lean_ctor_set(v_reuseFailAlloc_1022_, 2, v_v_792_);
lean_ctor_set(v_reuseFailAlloc_1022_, 3, v_l_793_);
lean_ctor_set(v_reuseFailAlloc_1022_, 4, v___x_1019_);
v___x_1021_ = v_reuseFailAlloc_1022_;
goto v_reusejp_1020_;
}
v_reusejp_1020_:
{
return v___x_1021_;
}
}
}
}
}
}
else
{
if (lean_obj_tag(v_l_793_) == 0)
{
lean_object* v___x_1031_; uint8_t v_isShared_1032_; uint8_t v_isSharedCheck_1053_; 
lean_inc_ref(v_l_793_);
lean_inc(v_v_792_);
lean_inc(v_k_791_);
lean_inc(v_size_790_);
v_isSharedCheck_1053_ = !lean_is_exclusive(v_l_617_);
if (v_isSharedCheck_1053_ == 0)
{
lean_object* v_unused_1054_; lean_object* v_unused_1055_; lean_object* v_unused_1056_; lean_object* v_unused_1057_; lean_object* v_unused_1058_; 
v_unused_1054_ = lean_ctor_get(v_l_617_, 4);
lean_dec(v_unused_1054_);
v_unused_1055_ = lean_ctor_get(v_l_617_, 3);
lean_dec(v_unused_1055_);
v_unused_1056_ = lean_ctor_get(v_l_617_, 2);
lean_dec(v_unused_1056_);
v_unused_1057_ = lean_ctor_get(v_l_617_, 1);
lean_dec(v_unused_1057_);
v_unused_1058_ = lean_ctor_get(v_l_617_, 0);
lean_dec(v_unused_1058_);
v___x_1031_ = v_l_617_;
v_isShared_1032_ = v_isSharedCheck_1053_;
goto v_resetjp_1030_;
}
else
{
lean_dec(v_l_617_);
v___x_1031_ = lean_box(0);
v_isShared_1032_ = v_isSharedCheck_1053_;
goto v_resetjp_1030_;
}
v_resetjp_1030_:
{
if (lean_obj_tag(v_r_794_) == 0)
{
lean_object* v_k_1033_; lean_object* v_v_1034_; lean_object* v_size_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1039_; 
v_k_1033_ = lean_ctor_get(v___x_946_, 0);
lean_inc(v_k_1033_);
v_v_1034_ = lean_ctor_get(v___x_946_, 1);
lean_inc(v_v_1034_);
lean_dec_ref(v___x_946_);
v_size_1035_ = lean_ctor_get(v_r_794_, 0);
v___x_1036_ = lean_nat_add(v___x_800_, v_size_790_);
lean_dec(v_size_790_);
v___x_1037_ = lean_nat_add(v___x_800_, v_size_1035_);
if (v_isShared_945_ == 0)
{
lean_ctor_set(v___x_944_, 4, v_tree_947_);
lean_ctor_set(v___x_944_, 3, v_r_794_);
lean_ctor_set(v___x_944_, 2, v_v_1034_);
lean_ctor_set(v___x_944_, 1, v_k_1033_);
lean_ctor_set(v___x_944_, 0, v___x_1037_);
v___x_1039_ = v___x_944_;
goto v_reusejp_1038_;
}
else
{
lean_object* v_reuseFailAlloc_1043_; 
v_reuseFailAlloc_1043_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1043_, 0, v___x_1037_);
lean_ctor_set(v_reuseFailAlloc_1043_, 1, v_k_1033_);
lean_ctor_set(v_reuseFailAlloc_1043_, 2, v_v_1034_);
lean_ctor_set(v_reuseFailAlloc_1043_, 3, v_r_794_);
lean_ctor_set(v_reuseFailAlloc_1043_, 4, v_tree_947_);
v___x_1039_ = v_reuseFailAlloc_1043_;
goto v_reusejp_1038_;
}
v_reusejp_1038_:
{
lean_object* v___x_1041_; 
if (v_isShared_1032_ == 0)
{
lean_ctor_set(v___x_1031_, 4, v___x_1039_);
lean_ctor_set(v___x_1031_, 0, v___x_1036_);
v___x_1041_ = v___x_1031_;
goto v_reusejp_1040_;
}
else
{
lean_object* v_reuseFailAlloc_1042_; 
v_reuseFailAlloc_1042_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1042_, 0, v___x_1036_);
lean_ctor_set(v_reuseFailAlloc_1042_, 1, v_k_791_);
lean_ctor_set(v_reuseFailAlloc_1042_, 2, v_v_792_);
lean_ctor_set(v_reuseFailAlloc_1042_, 3, v_l_793_);
lean_ctor_set(v_reuseFailAlloc_1042_, 4, v___x_1039_);
v___x_1041_ = v_reuseFailAlloc_1042_;
goto v_reusejp_1040_;
}
v_reusejp_1040_:
{
return v___x_1041_;
}
}
}
else
{
lean_object* v_k_1044_; lean_object* v_v_1045_; lean_object* v___x_1046_; lean_object* v___x_1048_; 
lean_dec(v_size_790_);
v_k_1044_ = lean_ctor_get(v___x_946_, 0);
lean_inc(v_k_1044_);
v_v_1045_ = lean_ctor_get(v___x_946_, 1);
lean_inc(v_v_1045_);
lean_dec_ref(v___x_946_);
v___x_1046_ = lean_unsigned_to_nat(3u);
if (v_isShared_945_ == 0)
{
lean_ctor_set(v___x_944_, 4, v_r_794_);
lean_ctor_set(v___x_944_, 3, v_r_794_);
lean_ctor_set(v___x_944_, 2, v_v_1045_);
lean_ctor_set(v___x_944_, 1, v_k_1044_);
lean_ctor_set(v___x_944_, 0, v___x_800_);
v___x_1048_ = v___x_944_;
goto v_reusejp_1047_;
}
else
{
lean_object* v_reuseFailAlloc_1052_; 
v_reuseFailAlloc_1052_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1052_, 0, v___x_800_);
lean_ctor_set(v_reuseFailAlloc_1052_, 1, v_k_1044_);
lean_ctor_set(v_reuseFailAlloc_1052_, 2, v_v_1045_);
lean_ctor_set(v_reuseFailAlloc_1052_, 3, v_r_794_);
lean_ctor_set(v_reuseFailAlloc_1052_, 4, v_r_794_);
v___x_1048_ = v_reuseFailAlloc_1052_;
goto v_reusejp_1047_;
}
v_reusejp_1047_:
{
lean_object* v___x_1050_; 
if (v_isShared_1032_ == 0)
{
lean_ctor_set(v___x_1031_, 4, v___x_1048_);
lean_ctor_set(v___x_1031_, 0, v___x_1046_);
v___x_1050_ = v___x_1031_;
goto v_reusejp_1049_;
}
else
{
lean_object* v_reuseFailAlloc_1051_; 
v_reuseFailAlloc_1051_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1051_, 0, v___x_1046_);
lean_ctor_set(v_reuseFailAlloc_1051_, 1, v_k_791_);
lean_ctor_set(v_reuseFailAlloc_1051_, 2, v_v_792_);
lean_ctor_set(v_reuseFailAlloc_1051_, 3, v_l_793_);
lean_ctor_set(v_reuseFailAlloc_1051_, 4, v___x_1048_);
v___x_1050_ = v_reuseFailAlloc_1051_;
goto v_reusejp_1049_;
}
v_reusejp_1049_:
{
return v___x_1050_;
}
}
}
}
}
else
{
if (lean_obj_tag(v_r_794_) == 0)
{
lean_object* v___x_1060_; uint8_t v_isShared_1061_; uint8_t v_isSharedCheck_1083_; 
lean_inc(v_l_793_);
lean_inc(v_v_792_);
lean_inc(v_k_791_);
v_isSharedCheck_1083_ = !lean_is_exclusive(v_l_617_);
if (v_isSharedCheck_1083_ == 0)
{
lean_object* v_unused_1084_; lean_object* v_unused_1085_; lean_object* v_unused_1086_; lean_object* v_unused_1087_; lean_object* v_unused_1088_; 
v_unused_1084_ = lean_ctor_get(v_l_617_, 4);
lean_dec(v_unused_1084_);
v_unused_1085_ = lean_ctor_get(v_l_617_, 3);
lean_dec(v_unused_1085_);
v_unused_1086_ = lean_ctor_get(v_l_617_, 2);
lean_dec(v_unused_1086_);
v_unused_1087_ = lean_ctor_get(v_l_617_, 1);
lean_dec(v_unused_1087_);
v_unused_1088_ = lean_ctor_get(v_l_617_, 0);
lean_dec(v_unused_1088_);
v___x_1060_ = v_l_617_;
v_isShared_1061_ = v_isSharedCheck_1083_;
goto v_resetjp_1059_;
}
else
{
lean_dec(v_l_617_);
v___x_1060_ = lean_box(0);
v_isShared_1061_ = v_isSharedCheck_1083_;
goto v_resetjp_1059_;
}
v_resetjp_1059_:
{
lean_object* v_k_1062_; lean_object* v_v_1063_; lean_object* v_k_1064_; lean_object* v_v_1065_; lean_object* v___x_1067_; uint8_t v_isShared_1068_; uint8_t v_isSharedCheck_1079_; 
v_k_1062_ = lean_ctor_get(v___x_946_, 0);
lean_inc(v_k_1062_);
v_v_1063_ = lean_ctor_get(v___x_946_, 1);
lean_inc(v_v_1063_);
lean_dec_ref(v___x_946_);
v_k_1064_ = lean_ctor_get(v_r_794_, 1);
v_v_1065_ = lean_ctor_get(v_r_794_, 2);
v_isSharedCheck_1079_ = !lean_is_exclusive(v_r_794_);
if (v_isSharedCheck_1079_ == 0)
{
lean_object* v_unused_1080_; lean_object* v_unused_1081_; lean_object* v_unused_1082_; 
v_unused_1080_ = lean_ctor_get(v_r_794_, 4);
lean_dec(v_unused_1080_);
v_unused_1081_ = lean_ctor_get(v_r_794_, 3);
lean_dec(v_unused_1081_);
v_unused_1082_ = lean_ctor_get(v_r_794_, 0);
lean_dec(v_unused_1082_);
v___x_1067_ = v_r_794_;
v_isShared_1068_ = v_isSharedCheck_1079_;
goto v_resetjp_1066_;
}
else
{
lean_inc(v_v_1065_);
lean_inc(v_k_1064_);
lean_dec(v_r_794_);
v___x_1067_ = lean_box(0);
v_isShared_1068_ = v_isSharedCheck_1079_;
goto v_resetjp_1066_;
}
v_resetjp_1066_:
{
lean_object* v___x_1069_; lean_object* v___x_1071_; 
v___x_1069_ = lean_unsigned_to_nat(3u);
if (v_isShared_1068_ == 0)
{
lean_ctor_set(v___x_1067_, 4, v_l_793_);
lean_ctor_set(v___x_1067_, 3, v_l_793_);
lean_ctor_set(v___x_1067_, 2, v_v_792_);
lean_ctor_set(v___x_1067_, 1, v_k_791_);
lean_ctor_set(v___x_1067_, 0, v___x_800_);
v___x_1071_ = v___x_1067_;
goto v_reusejp_1070_;
}
else
{
lean_object* v_reuseFailAlloc_1078_; 
v_reuseFailAlloc_1078_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1078_, 0, v___x_800_);
lean_ctor_set(v_reuseFailAlloc_1078_, 1, v_k_791_);
lean_ctor_set(v_reuseFailAlloc_1078_, 2, v_v_792_);
lean_ctor_set(v_reuseFailAlloc_1078_, 3, v_l_793_);
lean_ctor_set(v_reuseFailAlloc_1078_, 4, v_l_793_);
v___x_1071_ = v_reuseFailAlloc_1078_;
goto v_reusejp_1070_;
}
v_reusejp_1070_:
{
lean_object* v___x_1073_; 
if (v_isShared_945_ == 0)
{
lean_ctor_set(v___x_944_, 4, v_l_793_);
lean_ctor_set(v___x_944_, 3, v_l_793_);
lean_ctor_set(v___x_944_, 2, v_v_1063_);
lean_ctor_set(v___x_944_, 1, v_k_1062_);
lean_ctor_set(v___x_944_, 0, v___x_800_);
v___x_1073_ = v___x_944_;
goto v_reusejp_1072_;
}
else
{
lean_object* v_reuseFailAlloc_1077_; 
v_reuseFailAlloc_1077_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1077_, 0, v___x_800_);
lean_ctor_set(v_reuseFailAlloc_1077_, 1, v_k_1062_);
lean_ctor_set(v_reuseFailAlloc_1077_, 2, v_v_1063_);
lean_ctor_set(v_reuseFailAlloc_1077_, 3, v_l_793_);
lean_ctor_set(v_reuseFailAlloc_1077_, 4, v_l_793_);
v___x_1073_ = v_reuseFailAlloc_1077_;
goto v_reusejp_1072_;
}
v_reusejp_1072_:
{
lean_object* v___x_1075_; 
if (v_isShared_1061_ == 0)
{
lean_ctor_set(v___x_1060_, 4, v___x_1073_);
lean_ctor_set(v___x_1060_, 3, v___x_1071_);
lean_ctor_set(v___x_1060_, 2, v_v_1065_);
lean_ctor_set(v___x_1060_, 1, v_k_1064_);
lean_ctor_set(v___x_1060_, 0, v___x_1069_);
v___x_1075_ = v___x_1060_;
goto v_reusejp_1074_;
}
else
{
lean_object* v_reuseFailAlloc_1076_; 
v_reuseFailAlloc_1076_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1076_, 0, v___x_1069_);
lean_ctor_set(v_reuseFailAlloc_1076_, 1, v_k_1064_);
lean_ctor_set(v_reuseFailAlloc_1076_, 2, v_v_1065_);
lean_ctor_set(v_reuseFailAlloc_1076_, 3, v___x_1071_);
lean_ctor_set(v_reuseFailAlloc_1076_, 4, v___x_1073_);
v___x_1075_ = v_reuseFailAlloc_1076_;
goto v_reusejp_1074_;
}
v_reusejp_1074_:
{
return v___x_1075_;
}
}
}
}
}
}
else
{
lean_object* v_k_1089_; lean_object* v_v_1090_; lean_object* v___x_1091_; lean_object* v___x_1093_; 
v_k_1089_ = lean_ctor_get(v___x_946_, 0);
lean_inc(v_k_1089_);
v_v_1090_ = lean_ctor_get(v___x_946_, 1);
lean_inc(v_v_1090_);
lean_dec_ref(v___x_946_);
v___x_1091_ = lean_unsigned_to_nat(2u);
if (v_isShared_945_ == 0)
{
lean_ctor_set(v___x_944_, 4, v_r_794_);
lean_ctor_set(v___x_944_, 3, v_l_617_);
lean_ctor_set(v___x_944_, 2, v_v_1090_);
lean_ctor_set(v___x_944_, 1, v_k_1089_);
lean_ctor_set(v___x_944_, 0, v___x_1091_);
v___x_1093_ = v___x_944_;
goto v_reusejp_1092_;
}
else
{
lean_object* v_reuseFailAlloc_1094_; 
v_reuseFailAlloc_1094_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1094_, 0, v___x_1091_);
lean_ctor_set(v_reuseFailAlloc_1094_, 1, v_k_1089_);
lean_ctor_set(v_reuseFailAlloc_1094_, 2, v_v_1090_);
lean_ctor_set(v_reuseFailAlloc_1094_, 3, v_l_617_);
lean_ctor_set(v_reuseFailAlloc_1094_, 4, v_r_794_);
v___x_1093_ = v_reuseFailAlloc_1094_;
goto v_reusejp_1092_;
}
v_reusejp_1092_:
{
return v___x_1093_;
}
}
}
}
}
}
}
else
{
return v_l_617_;
}
}
else
{
return v_r_618_;
}
}
}
else
{
lean_object* v_impl_1101_; lean_object* v___x_1102_; 
v_impl_1101_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7_spec__19___redArg(v_k_613_, v_l_617_);
v___x_1102_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_impl_1101_) == 0)
{
if (lean_obj_tag(v_r_618_) == 0)
{
lean_object* v_size_1103_; lean_object* v_size_1104_; lean_object* v_k_1105_; lean_object* v_v_1106_; lean_object* v_l_1107_; lean_object* v_r_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; uint8_t v___x_1111_; 
v_size_1103_ = lean_ctor_get(v_impl_1101_, 0);
lean_inc(v_size_1103_);
v_size_1104_ = lean_ctor_get(v_r_618_, 0);
v_k_1105_ = lean_ctor_get(v_r_618_, 1);
v_v_1106_ = lean_ctor_get(v_r_618_, 2);
v_l_1107_ = lean_ctor_get(v_r_618_, 3);
lean_inc(v_l_1107_);
v_r_1108_ = lean_ctor_get(v_r_618_, 4);
v___x_1109_ = lean_unsigned_to_nat(3u);
v___x_1110_ = lean_nat_mul(v___x_1109_, v_size_1103_);
v___x_1111_ = lean_nat_dec_lt(v___x_1110_, v_size_1104_);
lean_dec(v___x_1110_);
if (v___x_1111_ == 0)
{
lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1115_; 
lean_dec(v_l_1107_);
v___x_1112_ = lean_nat_add(v___x_1102_, v_size_1103_);
lean_dec(v_size_1103_);
v___x_1113_ = lean_nat_add(v___x_1112_, v_size_1104_);
lean_dec(v___x_1112_);
if (v_isShared_621_ == 0)
{
lean_ctor_set(v___x_620_, 3, v_impl_1101_);
lean_ctor_set(v___x_620_, 0, v___x_1113_);
v___x_1115_ = v___x_620_;
goto v_reusejp_1114_;
}
else
{
lean_object* v_reuseFailAlloc_1116_; 
v_reuseFailAlloc_1116_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1116_, 0, v___x_1113_);
lean_ctor_set(v_reuseFailAlloc_1116_, 1, v_k_615_);
lean_ctor_set(v_reuseFailAlloc_1116_, 2, v_v_616_);
lean_ctor_set(v_reuseFailAlloc_1116_, 3, v_impl_1101_);
lean_ctor_set(v_reuseFailAlloc_1116_, 4, v_r_618_);
v___x_1115_ = v_reuseFailAlloc_1116_;
goto v_reusejp_1114_;
}
v_reusejp_1114_:
{
return v___x_1115_;
}
}
else
{
lean_object* v___x_1118_; uint8_t v_isShared_1119_; uint8_t v_isSharedCheck_1180_; 
lean_inc(v_r_1108_);
lean_inc(v_v_1106_);
lean_inc(v_k_1105_);
lean_inc(v_size_1104_);
v_isSharedCheck_1180_ = !lean_is_exclusive(v_r_618_);
if (v_isSharedCheck_1180_ == 0)
{
lean_object* v_unused_1181_; lean_object* v_unused_1182_; lean_object* v_unused_1183_; lean_object* v_unused_1184_; lean_object* v_unused_1185_; 
v_unused_1181_ = lean_ctor_get(v_r_618_, 4);
lean_dec(v_unused_1181_);
v_unused_1182_ = lean_ctor_get(v_r_618_, 3);
lean_dec(v_unused_1182_);
v_unused_1183_ = lean_ctor_get(v_r_618_, 2);
lean_dec(v_unused_1183_);
v_unused_1184_ = lean_ctor_get(v_r_618_, 1);
lean_dec(v_unused_1184_);
v_unused_1185_ = lean_ctor_get(v_r_618_, 0);
lean_dec(v_unused_1185_);
v___x_1118_ = v_r_618_;
v_isShared_1119_ = v_isSharedCheck_1180_;
goto v_resetjp_1117_;
}
else
{
lean_dec(v_r_618_);
v___x_1118_ = lean_box(0);
v_isShared_1119_ = v_isSharedCheck_1180_;
goto v_resetjp_1117_;
}
v_resetjp_1117_:
{
lean_object* v_size_1120_; lean_object* v_k_1121_; lean_object* v_v_1122_; lean_object* v_l_1123_; lean_object* v_r_1124_; lean_object* v_size_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; uint8_t v___x_1128_; 
v_size_1120_ = lean_ctor_get(v_l_1107_, 0);
v_k_1121_ = lean_ctor_get(v_l_1107_, 1);
v_v_1122_ = lean_ctor_get(v_l_1107_, 2);
v_l_1123_ = lean_ctor_get(v_l_1107_, 3);
v_r_1124_ = lean_ctor_get(v_l_1107_, 4);
v_size_1125_ = lean_ctor_get(v_r_1108_, 0);
v___x_1126_ = lean_unsigned_to_nat(2u);
v___x_1127_ = lean_nat_mul(v___x_1126_, v_size_1125_);
v___x_1128_ = lean_nat_dec_lt(v_size_1120_, v___x_1127_);
lean_dec(v___x_1127_);
if (v___x_1128_ == 0)
{
lean_object* v___x_1130_; uint8_t v_isShared_1131_; uint8_t v_isSharedCheck_1156_; 
lean_inc(v_r_1124_);
lean_inc(v_l_1123_);
lean_inc(v_v_1122_);
lean_inc(v_k_1121_);
v_isSharedCheck_1156_ = !lean_is_exclusive(v_l_1107_);
if (v_isSharedCheck_1156_ == 0)
{
lean_object* v_unused_1157_; lean_object* v_unused_1158_; lean_object* v_unused_1159_; lean_object* v_unused_1160_; lean_object* v_unused_1161_; 
v_unused_1157_ = lean_ctor_get(v_l_1107_, 4);
lean_dec(v_unused_1157_);
v_unused_1158_ = lean_ctor_get(v_l_1107_, 3);
lean_dec(v_unused_1158_);
v_unused_1159_ = lean_ctor_get(v_l_1107_, 2);
lean_dec(v_unused_1159_);
v_unused_1160_ = lean_ctor_get(v_l_1107_, 1);
lean_dec(v_unused_1160_);
v_unused_1161_ = lean_ctor_get(v_l_1107_, 0);
lean_dec(v_unused_1161_);
v___x_1130_ = v_l_1107_;
v_isShared_1131_ = v_isSharedCheck_1156_;
goto v_resetjp_1129_;
}
else
{
lean_dec(v_l_1107_);
v___x_1130_ = lean_box(0);
v_isShared_1131_ = v_isSharedCheck_1156_;
goto v_resetjp_1129_;
}
v_resetjp_1129_:
{
lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___y_1135_; lean_object* v___y_1136_; lean_object* v___y_1137_; lean_object* v___y_1146_; 
v___x_1132_ = lean_nat_add(v___x_1102_, v_size_1103_);
lean_dec(v_size_1103_);
v___x_1133_ = lean_nat_add(v___x_1132_, v_size_1104_);
lean_dec(v_size_1104_);
if (lean_obj_tag(v_l_1123_) == 0)
{
lean_object* v_size_1154_; 
v_size_1154_ = lean_ctor_get(v_l_1123_, 0);
lean_inc(v_size_1154_);
v___y_1146_ = v_size_1154_;
goto v___jp_1145_;
}
else
{
lean_object* v___x_1155_; 
v___x_1155_ = lean_unsigned_to_nat(0u);
v___y_1146_ = v___x_1155_;
goto v___jp_1145_;
}
v___jp_1134_:
{
lean_object* v___x_1138_; lean_object* v___x_1140_; 
v___x_1138_ = lean_nat_add(v___y_1135_, v___y_1137_);
lean_dec(v___y_1137_);
lean_dec(v___y_1135_);
if (v_isShared_1131_ == 0)
{
lean_ctor_set(v___x_1130_, 4, v_r_1108_);
lean_ctor_set(v___x_1130_, 3, v_r_1124_);
lean_ctor_set(v___x_1130_, 2, v_v_1106_);
lean_ctor_set(v___x_1130_, 1, v_k_1105_);
lean_ctor_set(v___x_1130_, 0, v___x_1138_);
v___x_1140_ = v___x_1130_;
goto v_reusejp_1139_;
}
else
{
lean_object* v_reuseFailAlloc_1144_; 
v_reuseFailAlloc_1144_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1144_, 0, v___x_1138_);
lean_ctor_set(v_reuseFailAlloc_1144_, 1, v_k_1105_);
lean_ctor_set(v_reuseFailAlloc_1144_, 2, v_v_1106_);
lean_ctor_set(v_reuseFailAlloc_1144_, 3, v_r_1124_);
lean_ctor_set(v_reuseFailAlloc_1144_, 4, v_r_1108_);
v___x_1140_ = v_reuseFailAlloc_1144_;
goto v_reusejp_1139_;
}
v_reusejp_1139_:
{
lean_object* v___x_1142_; 
if (v_isShared_1119_ == 0)
{
lean_ctor_set(v___x_1118_, 4, v___x_1140_);
lean_ctor_set(v___x_1118_, 3, v___y_1136_);
lean_ctor_set(v___x_1118_, 2, v_v_1122_);
lean_ctor_set(v___x_1118_, 1, v_k_1121_);
lean_ctor_set(v___x_1118_, 0, v___x_1133_);
v___x_1142_ = v___x_1118_;
goto v_reusejp_1141_;
}
else
{
lean_object* v_reuseFailAlloc_1143_; 
v_reuseFailAlloc_1143_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1143_, 0, v___x_1133_);
lean_ctor_set(v_reuseFailAlloc_1143_, 1, v_k_1121_);
lean_ctor_set(v_reuseFailAlloc_1143_, 2, v_v_1122_);
lean_ctor_set(v_reuseFailAlloc_1143_, 3, v___y_1136_);
lean_ctor_set(v_reuseFailAlloc_1143_, 4, v___x_1140_);
v___x_1142_ = v_reuseFailAlloc_1143_;
goto v_reusejp_1141_;
}
v_reusejp_1141_:
{
return v___x_1142_;
}
}
}
v___jp_1145_:
{
lean_object* v___x_1147_; lean_object* v___x_1149_; 
v___x_1147_ = lean_nat_add(v___x_1132_, v___y_1146_);
lean_dec(v___y_1146_);
lean_dec(v___x_1132_);
if (v_isShared_621_ == 0)
{
lean_ctor_set(v___x_620_, 4, v_l_1123_);
lean_ctor_set(v___x_620_, 3, v_impl_1101_);
lean_ctor_set(v___x_620_, 0, v___x_1147_);
v___x_1149_ = v___x_620_;
goto v_reusejp_1148_;
}
else
{
lean_object* v_reuseFailAlloc_1153_; 
v_reuseFailAlloc_1153_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1153_, 0, v___x_1147_);
lean_ctor_set(v_reuseFailAlloc_1153_, 1, v_k_615_);
lean_ctor_set(v_reuseFailAlloc_1153_, 2, v_v_616_);
lean_ctor_set(v_reuseFailAlloc_1153_, 3, v_impl_1101_);
lean_ctor_set(v_reuseFailAlloc_1153_, 4, v_l_1123_);
v___x_1149_ = v_reuseFailAlloc_1153_;
goto v_reusejp_1148_;
}
v_reusejp_1148_:
{
lean_object* v___x_1150_; 
v___x_1150_ = lean_nat_add(v___x_1102_, v_size_1125_);
if (lean_obj_tag(v_r_1124_) == 0)
{
lean_object* v_size_1151_; 
v_size_1151_ = lean_ctor_get(v_r_1124_, 0);
lean_inc(v_size_1151_);
v___y_1135_ = v___x_1150_;
v___y_1136_ = v___x_1149_;
v___y_1137_ = v_size_1151_;
goto v___jp_1134_;
}
else
{
lean_object* v___x_1152_; 
v___x_1152_ = lean_unsigned_to_nat(0u);
v___y_1135_ = v___x_1150_;
v___y_1136_ = v___x_1149_;
v___y_1137_ = v___x_1152_;
goto v___jp_1134_;
}
}
}
}
}
else
{
lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1166_; 
lean_del_object(v___x_620_);
v___x_1162_ = lean_nat_add(v___x_1102_, v_size_1103_);
lean_dec(v_size_1103_);
v___x_1163_ = lean_nat_add(v___x_1162_, v_size_1104_);
lean_dec(v_size_1104_);
v___x_1164_ = lean_nat_add(v___x_1162_, v_size_1120_);
lean_dec(v___x_1162_);
lean_inc_ref(v_impl_1101_);
if (v_isShared_1119_ == 0)
{
lean_ctor_set(v___x_1118_, 4, v_l_1107_);
lean_ctor_set(v___x_1118_, 3, v_impl_1101_);
lean_ctor_set(v___x_1118_, 2, v_v_616_);
lean_ctor_set(v___x_1118_, 1, v_k_615_);
lean_ctor_set(v___x_1118_, 0, v___x_1164_);
v___x_1166_ = v___x_1118_;
goto v_reusejp_1165_;
}
else
{
lean_object* v_reuseFailAlloc_1179_; 
v_reuseFailAlloc_1179_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1179_, 0, v___x_1164_);
lean_ctor_set(v_reuseFailAlloc_1179_, 1, v_k_615_);
lean_ctor_set(v_reuseFailAlloc_1179_, 2, v_v_616_);
lean_ctor_set(v_reuseFailAlloc_1179_, 3, v_impl_1101_);
lean_ctor_set(v_reuseFailAlloc_1179_, 4, v_l_1107_);
v___x_1166_ = v_reuseFailAlloc_1179_;
goto v_reusejp_1165_;
}
v_reusejp_1165_:
{
lean_object* v___x_1168_; uint8_t v_isShared_1169_; uint8_t v_isSharedCheck_1173_; 
v_isSharedCheck_1173_ = !lean_is_exclusive(v_impl_1101_);
if (v_isSharedCheck_1173_ == 0)
{
lean_object* v_unused_1174_; lean_object* v_unused_1175_; lean_object* v_unused_1176_; lean_object* v_unused_1177_; lean_object* v_unused_1178_; 
v_unused_1174_ = lean_ctor_get(v_impl_1101_, 4);
lean_dec(v_unused_1174_);
v_unused_1175_ = lean_ctor_get(v_impl_1101_, 3);
lean_dec(v_unused_1175_);
v_unused_1176_ = lean_ctor_get(v_impl_1101_, 2);
lean_dec(v_unused_1176_);
v_unused_1177_ = lean_ctor_get(v_impl_1101_, 1);
lean_dec(v_unused_1177_);
v_unused_1178_ = lean_ctor_get(v_impl_1101_, 0);
lean_dec(v_unused_1178_);
v___x_1168_ = v_impl_1101_;
v_isShared_1169_ = v_isSharedCheck_1173_;
goto v_resetjp_1167_;
}
else
{
lean_dec(v_impl_1101_);
v___x_1168_ = lean_box(0);
v_isShared_1169_ = v_isSharedCheck_1173_;
goto v_resetjp_1167_;
}
v_resetjp_1167_:
{
lean_object* v___x_1171_; 
if (v_isShared_1169_ == 0)
{
lean_ctor_set(v___x_1168_, 4, v_r_1108_);
lean_ctor_set(v___x_1168_, 3, v___x_1166_);
lean_ctor_set(v___x_1168_, 2, v_v_1106_);
lean_ctor_set(v___x_1168_, 1, v_k_1105_);
lean_ctor_set(v___x_1168_, 0, v___x_1163_);
v___x_1171_ = v___x_1168_;
goto v_reusejp_1170_;
}
else
{
lean_object* v_reuseFailAlloc_1172_; 
v_reuseFailAlloc_1172_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1172_, 0, v___x_1163_);
lean_ctor_set(v_reuseFailAlloc_1172_, 1, v_k_1105_);
lean_ctor_set(v_reuseFailAlloc_1172_, 2, v_v_1106_);
lean_ctor_set(v_reuseFailAlloc_1172_, 3, v___x_1166_);
lean_ctor_set(v_reuseFailAlloc_1172_, 4, v_r_1108_);
v___x_1171_ = v_reuseFailAlloc_1172_;
goto v_reusejp_1170_;
}
v_reusejp_1170_:
{
return v___x_1171_;
}
}
}
}
}
}
}
else
{
lean_object* v_size_1186_; lean_object* v___x_1187_; lean_object* v___x_1189_; 
v_size_1186_ = lean_ctor_get(v_impl_1101_, 0);
lean_inc(v_size_1186_);
v___x_1187_ = lean_nat_add(v___x_1102_, v_size_1186_);
lean_dec(v_size_1186_);
if (v_isShared_621_ == 0)
{
lean_ctor_set(v___x_620_, 3, v_impl_1101_);
lean_ctor_set(v___x_620_, 0, v___x_1187_);
v___x_1189_ = v___x_620_;
goto v_reusejp_1188_;
}
else
{
lean_object* v_reuseFailAlloc_1190_; 
v_reuseFailAlloc_1190_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1190_, 0, v___x_1187_);
lean_ctor_set(v_reuseFailAlloc_1190_, 1, v_k_615_);
lean_ctor_set(v_reuseFailAlloc_1190_, 2, v_v_616_);
lean_ctor_set(v_reuseFailAlloc_1190_, 3, v_impl_1101_);
lean_ctor_set(v_reuseFailAlloc_1190_, 4, v_r_618_);
v___x_1189_ = v_reuseFailAlloc_1190_;
goto v_reusejp_1188_;
}
v_reusejp_1188_:
{
return v___x_1189_;
}
}
}
else
{
if (lean_obj_tag(v_r_618_) == 0)
{
lean_object* v_l_1191_; 
v_l_1191_ = lean_ctor_get(v_r_618_, 3);
lean_inc(v_l_1191_);
if (lean_obj_tag(v_l_1191_) == 0)
{
lean_object* v_r_1192_; 
v_r_1192_ = lean_ctor_get(v_r_618_, 4);
lean_inc(v_r_1192_);
if (lean_obj_tag(v_r_1192_) == 0)
{
lean_object* v_size_1193_; lean_object* v_k_1194_; lean_object* v_v_1195_; lean_object* v___x_1197_; uint8_t v_isShared_1198_; uint8_t v_isSharedCheck_1208_; 
v_size_1193_ = lean_ctor_get(v_r_618_, 0);
v_k_1194_ = lean_ctor_get(v_r_618_, 1);
v_v_1195_ = lean_ctor_get(v_r_618_, 2);
v_isSharedCheck_1208_ = !lean_is_exclusive(v_r_618_);
if (v_isSharedCheck_1208_ == 0)
{
lean_object* v_unused_1209_; lean_object* v_unused_1210_; 
v_unused_1209_ = lean_ctor_get(v_r_618_, 4);
lean_dec(v_unused_1209_);
v_unused_1210_ = lean_ctor_get(v_r_618_, 3);
lean_dec(v_unused_1210_);
v___x_1197_ = v_r_618_;
v_isShared_1198_ = v_isSharedCheck_1208_;
goto v_resetjp_1196_;
}
else
{
lean_inc(v_v_1195_);
lean_inc(v_k_1194_);
lean_inc(v_size_1193_);
lean_dec(v_r_618_);
v___x_1197_ = lean_box(0);
v_isShared_1198_ = v_isSharedCheck_1208_;
goto v_resetjp_1196_;
}
v_resetjp_1196_:
{
lean_object* v_size_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1203_; 
v_size_1199_ = lean_ctor_get(v_l_1191_, 0);
v___x_1200_ = lean_nat_add(v___x_1102_, v_size_1193_);
lean_dec(v_size_1193_);
v___x_1201_ = lean_nat_add(v___x_1102_, v_size_1199_);
if (v_isShared_1198_ == 0)
{
lean_ctor_set(v___x_1197_, 4, v_l_1191_);
lean_ctor_set(v___x_1197_, 3, v_impl_1101_);
lean_ctor_set(v___x_1197_, 2, v_v_616_);
lean_ctor_set(v___x_1197_, 1, v_k_615_);
lean_ctor_set(v___x_1197_, 0, v___x_1201_);
v___x_1203_ = v___x_1197_;
goto v_reusejp_1202_;
}
else
{
lean_object* v_reuseFailAlloc_1207_; 
v_reuseFailAlloc_1207_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1207_, 0, v___x_1201_);
lean_ctor_set(v_reuseFailAlloc_1207_, 1, v_k_615_);
lean_ctor_set(v_reuseFailAlloc_1207_, 2, v_v_616_);
lean_ctor_set(v_reuseFailAlloc_1207_, 3, v_impl_1101_);
lean_ctor_set(v_reuseFailAlloc_1207_, 4, v_l_1191_);
v___x_1203_ = v_reuseFailAlloc_1207_;
goto v_reusejp_1202_;
}
v_reusejp_1202_:
{
lean_object* v___x_1205_; 
if (v_isShared_621_ == 0)
{
lean_ctor_set(v___x_620_, 4, v_r_1192_);
lean_ctor_set(v___x_620_, 3, v___x_1203_);
lean_ctor_set(v___x_620_, 2, v_v_1195_);
lean_ctor_set(v___x_620_, 1, v_k_1194_);
lean_ctor_set(v___x_620_, 0, v___x_1200_);
v___x_1205_ = v___x_620_;
goto v_reusejp_1204_;
}
else
{
lean_object* v_reuseFailAlloc_1206_; 
v_reuseFailAlloc_1206_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1206_, 0, v___x_1200_);
lean_ctor_set(v_reuseFailAlloc_1206_, 1, v_k_1194_);
lean_ctor_set(v_reuseFailAlloc_1206_, 2, v_v_1195_);
lean_ctor_set(v_reuseFailAlloc_1206_, 3, v___x_1203_);
lean_ctor_set(v_reuseFailAlloc_1206_, 4, v_r_1192_);
v___x_1205_ = v_reuseFailAlloc_1206_;
goto v_reusejp_1204_;
}
v_reusejp_1204_:
{
return v___x_1205_;
}
}
}
}
else
{
lean_object* v_k_1211_; lean_object* v_v_1212_; lean_object* v___x_1214_; uint8_t v_isShared_1215_; uint8_t v_isSharedCheck_1235_; 
v_k_1211_ = lean_ctor_get(v_r_618_, 1);
v_v_1212_ = lean_ctor_get(v_r_618_, 2);
v_isSharedCheck_1235_ = !lean_is_exclusive(v_r_618_);
if (v_isSharedCheck_1235_ == 0)
{
lean_object* v_unused_1236_; lean_object* v_unused_1237_; lean_object* v_unused_1238_; 
v_unused_1236_ = lean_ctor_get(v_r_618_, 4);
lean_dec(v_unused_1236_);
v_unused_1237_ = lean_ctor_get(v_r_618_, 3);
lean_dec(v_unused_1237_);
v_unused_1238_ = lean_ctor_get(v_r_618_, 0);
lean_dec(v_unused_1238_);
v___x_1214_ = v_r_618_;
v_isShared_1215_ = v_isSharedCheck_1235_;
goto v_resetjp_1213_;
}
else
{
lean_inc(v_v_1212_);
lean_inc(v_k_1211_);
lean_dec(v_r_618_);
v___x_1214_ = lean_box(0);
v_isShared_1215_ = v_isSharedCheck_1235_;
goto v_resetjp_1213_;
}
v_resetjp_1213_:
{
lean_object* v_k_1216_; lean_object* v_v_1217_; lean_object* v___x_1219_; uint8_t v_isShared_1220_; uint8_t v_isSharedCheck_1231_; 
v_k_1216_ = lean_ctor_get(v_l_1191_, 1);
v_v_1217_ = lean_ctor_get(v_l_1191_, 2);
v_isSharedCheck_1231_ = !lean_is_exclusive(v_l_1191_);
if (v_isSharedCheck_1231_ == 0)
{
lean_object* v_unused_1232_; lean_object* v_unused_1233_; lean_object* v_unused_1234_; 
v_unused_1232_ = lean_ctor_get(v_l_1191_, 4);
lean_dec(v_unused_1232_);
v_unused_1233_ = lean_ctor_get(v_l_1191_, 3);
lean_dec(v_unused_1233_);
v_unused_1234_ = lean_ctor_get(v_l_1191_, 0);
lean_dec(v_unused_1234_);
v___x_1219_ = v_l_1191_;
v_isShared_1220_ = v_isSharedCheck_1231_;
goto v_resetjp_1218_;
}
else
{
lean_inc(v_v_1217_);
lean_inc(v_k_1216_);
lean_dec(v_l_1191_);
v___x_1219_ = lean_box(0);
v_isShared_1220_ = v_isSharedCheck_1231_;
goto v_resetjp_1218_;
}
v_resetjp_1218_:
{
lean_object* v___x_1221_; lean_object* v___x_1223_; 
v___x_1221_ = lean_unsigned_to_nat(3u);
if (v_isShared_1220_ == 0)
{
lean_ctor_set(v___x_1219_, 4, v_r_1192_);
lean_ctor_set(v___x_1219_, 3, v_r_1192_);
lean_ctor_set(v___x_1219_, 2, v_v_616_);
lean_ctor_set(v___x_1219_, 1, v_k_615_);
lean_ctor_set(v___x_1219_, 0, v___x_1102_);
v___x_1223_ = v___x_1219_;
goto v_reusejp_1222_;
}
else
{
lean_object* v_reuseFailAlloc_1230_; 
v_reuseFailAlloc_1230_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1230_, 0, v___x_1102_);
lean_ctor_set(v_reuseFailAlloc_1230_, 1, v_k_615_);
lean_ctor_set(v_reuseFailAlloc_1230_, 2, v_v_616_);
lean_ctor_set(v_reuseFailAlloc_1230_, 3, v_r_1192_);
lean_ctor_set(v_reuseFailAlloc_1230_, 4, v_r_1192_);
v___x_1223_ = v_reuseFailAlloc_1230_;
goto v_reusejp_1222_;
}
v_reusejp_1222_:
{
lean_object* v___x_1225_; 
if (v_isShared_1215_ == 0)
{
lean_ctor_set(v___x_1214_, 3, v_r_1192_);
lean_ctor_set(v___x_1214_, 0, v___x_1102_);
v___x_1225_ = v___x_1214_;
goto v_reusejp_1224_;
}
else
{
lean_object* v_reuseFailAlloc_1229_; 
v_reuseFailAlloc_1229_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1229_, 0, v___x_1102_);
lean_ctor_set(v_reuseFailAlloc_1229_, 1, v_k_1211_);
lean_ctor_set(v_reuseFailAlloc_1229_, 2, v_v_1212_);
lean_ctor_set(v_reuseFailAlloc_1229_, 3, v_r_1192_);
lean_ctor_set(v_reuseFailAlloc_1229_, 4, v_r_1192_);
v___x_1225_ = v_reuseFailAlloc_1229_;
goto v_reusejp_1224_;
}
v_reusejp_1224_:
{
lean_object* v___x_1227_; 
if (v_isShared_621_ == 0)
{
lean_ctor_set(v___x_620_, 4, v___x_1225_);
lean_ctor_set(v___x_620_, 3, v___x_1223_);
lean_ctor_set(v___x_620_, 2, v_v_1217_);
lean_ctor_set(v___x_620_, 1, v_k_1216_);
lean_ctor_set(v___x_620_, 0, v___x_1221_);
v___x_1227_ = v___x_620_;
goto v_reusejp_1226_;
}
else
{
lean_object* v_reuseFailAlloc_1228_; 
v_reuseFailAlloc_1228_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1228_, 0, v___x_1221_);
lean_ctor_set(v_reuseFailAlloc_1228_, 1, v_k_1216_);
lean_ctor_set(v_reuseFailAlloc_1228_, 2, v_v_1217_);
lean_ctor_set(v_reuseFailAlloc_1228_, 3, v___x_1223_);
lean_ctor_set(v_reuseFailAlloc_1228_, 4, v___x_1225_);
v___x_1227_ = v_reuseFailAlloc_1228_;
goto v_reusejp_1226_;
}
v_reusejp_1226_:
{
return v___x_1227_;
}
}
}
}
}
}
}
else
{
lean_object* v_r_1239_; 
v_r_1239_ = lean_ctor_get(v_r_618_, 4);
lean_inc(v_r_1239_);
if (lean_obj_tag(v_r_1239_) == 0)
{
lean_object* v_k_1240_; lean_object* v_v_1241_; lean_object* v___x_1243_; uint8_t v_isShared_1244_; uint8_t v_isSharedCheck_1252_; 
v_k_1240_ = lean_ctor_get(v_r_618_, 1);
v_v_1241_ = lean_ctor_get(v_r_618_, 2);
v_isSharedCheck_1252_ = !lean_is_exclusive(v_r_618_);
if (v_isSharedCheck_1252_ == 0)
{
lean_object* v_unused_1253_; lean_object* v_unused_1254_; lean_object* v_unused_1255_; 
v_unused_1253_ = lean_ctor_get(v_r_618_, 4);
lean_dec(v_unused_1253_);
v_unused_1254_ = lean_ctor_get(v_r_618_, 3);
lean_dec(v_unused_1254_);
v_unused_1255_ = lean_ctor_get(v_r_618_, 0);
lean_dec(v_unused_1255_);
v___x_1243_ = v_r_618_;
v_isShared_1244_ = v_isSharedCheck_1252_;
goto v_resetjp_1242_;
}
else
{
lean_inc(v_v_1241_);
lean_inc(v_k_1240_);
lean_dec(v_r_618_);
v___x_1243_ = lean_box(0);
v_isShared_1244_ = v_isSharedCheck_1252_;
goto v_resetjp_1242_;
}
v_resetjp_1242_:
{
lean_object* v___x_1245_; lean_object* v___x_1247_; 
v___x_1245_ = lean_unsigned_to_nat(3u);
if (v_isShared_1244_ == 0)
{
lean_ctor_set(v___x_1243_, 4, v_l_1191_);
lean_ctor_set(v___x_1243_, 2, v_v_616_);
lean_ctor_set(v___x_1243_, 1, v_k_615_);
lean_ctor_set(v___x_1243_, 0, v___x_1102_);
v___x_1247_ = v___x_1243_;
goto v_reusejp_1246_;
}
else
{
lean_object* v_reuseFailAlloc_1251_; 
v_reuseFailAlloc_1251_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1251_, 0, v___x_1102_);
lean_ctor_set(v_reuseFailAlloc_1251_, 1, v_k_615_);
lean_ctor_set(v_reuseFailAlloc_1251_, 2, v_v_616_);
lean_ctor_set(v_reuseFailAlloc_1251_, 3, v_l_1191_);
lean_ctor_set(v_reuseFailAlloc_1251_, 4, v_l_1191_);
v___x_1247_ = v_reuseFailAlloc_1251_;
goto v_reusejp_1246_;
}
v_reusejp_1246_:
{
lean_object* v___x_1249_; 
if (v_isShared_621_ == 0)
{
lean_ctor_set(v___x_620_, 4, v_r_1239_);
lean_ctor_set(v___x_620_, 3, v___x_1247_);
lean_ctor_set(v___x_620_, 2, v_v_1241_);
lean_ctor_set(v___x_620_, 1, v_k_1240_);
lean_ctor_set(v___x_620_, 0, v___x_1245_);
v___x_1249_ = v___x_620_;
goto v_reusejp_1248_;
}
else
{
lean_object* v_reuseFailAlloc_1250_; 
v_reuseFailAlloc_1250_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1250_, 0, v___x_1245_);
lean_ctor_set(v_reuseFailAlloc_1250_, 1, v_k_1240_);
lean_ctor_set(v_reuseFailAlloc_1250_, 2, v_v_1241_);
lean_ctor_set(v_reuseFailAlloc_1250_, 3, v___x_1247_);
lean_ctor_set(v_reuseFailAlloc_1250_, 4, v_r_1239_);
v___x_1249_ = v_reuseFailAlloc_1250_;
goto v_reusejp_1248_;
}
v_reusejp_1248_:
{
return v___x_1249_;
}
}
}
}
else
{
lean_object* v_size_1256_; lean_object* v_k_1257_; lean_object* v_v_1258_; lean_object* v___x_1260_; uint8_t v_isShared_1261_; uint8_t v_isSharedCheck_1269_; 
v_size_1256_ = lean_ctor_get(v_r_618_, 0);
v_k_1257_ = lean_ctor_get(v_r_618_, 1);
v_v_1258_ = lean_ctor_get(v_r_618_, 2);
v_isSharedCheck_1269_ = !lean_is_exclusive(v_r_618_);
if (v_isSharedCheck_1269_ == 0)
{
lean_object* v_unused_1270_; lean_object* v_unused_1271_; 
v_unused_1270_ = lean_ctor_get(v_r_618_, 4);
lean_dec(v_unused_1270_);
v_unused_1271_ = lean_ctor_get(v_r_618_, 3);
lean_dec(v_unused_1271_);
v___x_1260_ = v_r_618_;
v_isShared_1261_ = v_isSharedCheck_1269_;
goto v_resetjp_1259_;
}
else
{
lean_inc(v_v_1258_);
lean_inc(v_k_1257_);
lean_inc(v_size_1256_);
lean_dec(v_r_618_);
v___x_1260_ = lean_box(0);
v_isShared_1261_ = v_isSharedCheck_1269_;
goto v_resetjp_1259_;
}
v_resetjp_1259_:
{
lean_object* v___x_1263_; 
if (v_isShared_1261_ == 0)
{
lean_ctor_set(v___x_1260_, 3, v_r_1239_);
v___x_1263_ = v___x_1260_;
goto v_reusejp_1262_;
}
else
{
lean_object* v_reuseFailAlloc_1268_; 
v_reuseFailAlloc_1268_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1268_, 0, v_size_1256_);
lean_ctor_set(v_reuseFailAlloc_1268_, 1, v_k_1257_);
lean_ctor_set(v_reuseFailAlloc_1268_, 2, v_v_1258_);
lean_ctor_set(v_reuseFailAlloc_1268_, 3, v_r_1239_);
lean_ctor_set(v_reuseFailAlloc_1268_, 4, v_r_1239_);
v___x_1263_ = v_reuseFailAlloc_1268_;
goto v_reusejp_1262_;
}
v_reusejp_1262_:
{
lean_object* v___x_1264_; lean_object* v___x_1266_; 
v___x_1264_ = lean_unsigned_to_nat(2u);
if (v_isShared_621_ == 0)
{
lean_ctor_set(v___x_620_, 4, v___x_1263_);
lean_ctor_set(v___x_620_, 3, v_r_1239_);
lean_ctor_set(v___x_620_, 0, v___x_1264_);
v___x_1266_ = v___x_620_;
goto v_reusejp_1265_;
}
else
{
lean_object* v_reuseFailAlloc_1267_; 
v_reuseFailAlloc_1267_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1267_, 0, v___x_1264_);
lean_ctor_set(v_reuseFailAlloc_1267_, 1, v_k_615_);
lean_ctor_set(v_reuseFailAlloc_1267_, 2, v_v_616_);
lean_ctor_set(v_reuseFailAlloc_1267_, 3, v_r_1239_);
lean_ctor_set(v_reuseFailAlloc_1267_, 4, v___x_1263_);
v___x_1266_ = v_reuseFailAlloc_1267_;
goto v_reusejp_1265_;
}
v_reusejp_1265_:
{
return v___x_1266_;
}
}
}
}
}
}
else
{
lean_object* v___x_1273_; 
if (v_isShared_621_ == 0)
{
lean_ctor_set(v___x_620_, 3, v_r_618_);
lean_ctor_set(v___x_620_, 0, v___x_1102_);
v___x_1273_ = v___x_620_;
goto v_reusejp_1272_;
}
else
{
lean_object* v_reuseFailAlloc_1274_; 
v_reuseFailAlloc_1274_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1274_, 0, v___x_1102_);
lean_ctor_set(v_reuseFailAlloc_1274_, 1, v_k_615_);
lean_ctor_set(v_reuseFailAlloc_1274_, 2, v_v_616_);
lean_ctor_set(v_reuseFailAlloc_1274_, 3, v_r_618_);
lean_ctor_set(v_reuseFailAlloc_1274_, 4, v_r_618_);
v___x_1273_ = v_reuseFailAlloc_1274_;
goto v_reusejp_1272_;
}
v_reusejp_1272_:
{
return v___x_1273_;
}
}
}
}
}
}
else
{
return v_t_614_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7_spec__19___redArg___boxed(lean_object* v_k_1277_, lean_object* v_t_1278_){
_start:
{
uint64_t v_k_boxed_1279_; lean_object* v_res_1280_; 
v_k_boxed_1279_ = lean_unbox_uint64(v_k_1277_);
lean_dec_ref(v_k_1277_);
v_res_1280_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7_spec__19___redArg(v_k_boxed_1279_, v_t_1278_);
return v_res_1280_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7___redArg___lam__0(uint64_t v_h_1281_, lean_object* v_st_1282_){
_start:
{
lean_object* v___x_1283_; 
v___x_1283_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7_spec__19___redArg(v_h_1281_, v_st_1282_);
return v___x_1283_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7___redArg___lam__0___boxed(lean_object* v_h_1284_, lean_object* v_st_1285_){
_start:
{
uint64_t v_h_boxed_1286_; lean_object* v_res_1287_; 
v_h_boxed_1286_ = lean_unbox_uint64(v_h_1284_);
lean_dec_ref(v_h_1284_);
v_res_1287_ = l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7___redArg___lam__0(v_h_boxed_1286_, v_st_1285_);
return v_res_1287_;
}
}
static lean_object* _init_l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7___redArg___closed__0(void){
_start:
{
lean_object* v___x_1288_; 
v___x_1288_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1288_;
}
}
static lean_object* _init_l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7___redArg___closed__1(void){
_start:
{
lean_object* v___x_1289_; lean_object* v___x_1290_; 
v___x_1289_ = lean_obj_once(&l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7___redArg___closed__0, &l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7___redArg___closed__0_once, _init_l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7___redArg___closed__0);
v___x_1290_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1290_, 0, v___x_1289_);
return v___x_1290_;
}
}
static lean_object* _init_l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7___redArg___closed__2(void){
_start:
{
lean_object* v___x_1291_; lean_object* v___x_1292_; 
v___x_1291_ = lean_obj_once(&l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7___redArg___closed__1, &l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7___redArg___closed__1_once, _init_l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7___redArg___closed__1);
v___x_1292_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1292_, 0, v___x_1291_);
lean_ctor_set(v___x_1292_, 1, v___x_1291_);
return v___x_1292_;
}
}
static lean_object* _init_l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7___redArg___closed__3(void){
_start:
{
lean_object* v___x_1293_; lean_object* v___x_1294_; 
v___x_1293_ = lean_obj_once(&l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7___redArg___closed__1, &l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7___redArg___closed__1_once, _init_l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7___redArg___closed__1);
v___x_1294_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1294_, 0, v___x_1293_);
lean_ctor_set(v___x_1294_, 1, v___x_1293_);
lean_ctor_set(v___x_1294_, 2, v___x_1293_);
lean_ctor_set(v___x_1294_, 3, v___x_1293_);
lean_ctor_set(v___x_1294_, 4, v___x_1293_);
lean_ctor_set(v___x_1294_, 5, v___x_1293_);
return v___x_1294_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7___redArg(uint64_t v_h_1295_, lean_object* v___y_1296_, lean_object* v___y_1297_){
_start:
{
lean_object* v___x_1299_; lean_object* v___f_1300_; lean_object* v___x_1301_; lean_object* v_env_1302_; lean_object* v_nextMacroScope_1303_; lean_object* v_ngen_1304_; lean_object* v_auxDeclNGen_1305_; lean_object* v_traceState_1306_; lean_object* v_messages_1307_; lean_object* v_infoState_1308_; lean_object* v_snapshotTasks_1309_; lean_object* v___x_1311_; uint8_t v_isShared_1312_; uint8_t v_isSharedCheck_1337_; 
v___x_1299_ = lean_box_uint64(v_h_1295_);
v___f_1300_ = lean_alloc_closure((void*)(l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1300_, 0, v___x_1299_);
v___x_1301_ = lean_st_ref_take(v___y_1297_);
v_env_1302_ = lean_ctor_get(v___x_1301_, 0);
v_nextMacroScope_1303_ = lean_ctor_get(v___x_1301_, 1);
v_ngen_1304_ = lean_ctor_get(v___x_1301_, 2);
v_auxDeclNGen_1305_ = lean_ctor_get(v___x_1301_, 3);
v_traceState_1306_ = lean_ctor_get(v___x_1301_, 4);
v_messages_1307_ = lean_ctor_get(v___x_1301_, 6);
v_infoState_1308_ = lean_ctor_get(v___x_1301_, 7);
v_snapshotTasks_1309_ = lean_ctor_get(v___x_1301_, 8);
v_isSharedCheck_1337_ = !lean_is_exclusive(v___x_1301_);
if (v_isSharedCheck_1337_ == 0)
{
lean_object* v_unused_1338_; 
v_unused_1338_ = lean_ctor_get(v___x_1301_, 5);
lean_dec(v_unused_1338_);
v___x_1311_ = v___x_1301_;
v_isShared_1312_ = v_isSharedCheck_1337_;
goto v_resetjp_1310_;
}
else
{
lean_inc(v_snapshotTasks_1309_);
lean_inc(v_infoState_1308_);
lean_inc(v_messages_1307_);
lean_inc(v_traceState_1306_);
lean_inc(v_auxDeclNGen_1305_);
lean_inc(v_ngen_1304_);
lean_inc(v_nextMacroScope_1303_);
lean_inc(v_env_1302_);
lean_dec(v___x_1301_);
v___x_1311_ = lean_box(0);
v_isShared_1312_ = v_isSharedCheck_1337_;
goto v_resetjp_1310_;
}
v_resetjp_1310_:
{
lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1317_; 
v___x_1313_ = l___private_Lean_Widget_UserWidget_0__Lean_Widget_panelWidgetsExt;
v___x_1314_ = l_Lean_ScopedEnvExtension_modifyState___redArg(v___x_1313_, v_env_1302_, v___f_1300_);
v___x_1315_ = lean_obj_once(&l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7___redArg___closed__2, &l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7___redArg___closed__2_once, _init_l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7___redArg___closed__2);
if (v_isShared_1312_ == 0)
{
lean_ctor_set(v___x_1311_, 5, v___x_1315_);
lean_ctor_set(v___x_1311_, 0, v___x_1314_);
v___x_1317_ = v___x_1311_;
goto v_reusejp_1316_;
}
else
{
lean_object* v_reuseFailAlloc_1336_; 
v_reuseFailAlloc_1336_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1336_, 0, v___x_1314_);
lean_ctor_set(v_reuseFailAlloc_1336_, 1, v_nextMacroScope_1303_);
lean_ctor_set(v_reuseFailAlloc_1336_, 2, v_ngen_1304_);
lean_ctor_set(v_reuseFailAlloc_1336_, 3, v_auxDeclNGen_1305_);
lean_ctor_set(v_reuseFailAlloc_1336_, 4, v_traceState_1306_);
lean_ctor_set(v_reuseFailAlloc_1336_, 5, v___x_1315_);
lean_ctor_set(v_reuseFailAlloc_1336_, 6, v_messages_1307_);
lean_ctor_set(v_reuseFailAlloc_1336_, 7, v_infoState_1308_);
lean_ctor_set(v_reuseFailAlloc_1336_, 8, v_snapshotTasks_1309_);
v___x_1317_ = v_reuseFailAlloc_1336_;
goto v_reusejp_1316_;
}
v_reusejp_1316_:
{
lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v_mctx_1320_; lean_object* v_zetaDeltaFVarIds_1321_; lean_object* v_postponed_1322_; lean_object* v_diag_1323_; lean_object* v___x_1325_; uint8_t v_isShared_1326_; uint8_t v_isSharedCheck_1334_; 
v___x_1318_ = lean_st_ref_put(v___y_1297_, v___x_1317_);
v___x_1319_ = lean_st_ref_take(v___y_1296_);
v_mctx_1320_ = lean_ctor_get(v___x_1319_, 0);
v_zetaDeltaFVarIds_1321_ = lean_ctor_get(v___x_1319_, 2);
v_postponed_1322_ = lean_ctor_get(v___x_1319_, 3);
v_diag_1323_ = lean_ctor_get(v___x_1319_, 4);
v_isSharedCheck_1334_ = !lean_is_exclusive(v___x_1319_);
if (v_isSharedCheck_1334_ == 0)
{
lean_object* v_unused_1335_; 
v_unused_1335_ = lean_ctor_get(v___x_1319_, 1);
lean_dec(v_unused_1335_);
v___x_1325_ = v___x_1319_;
v_isShared_1326_ = v_isSharedCheck_1334_;
goto v_resetjp_1324_;
}
else
{
lean_inc(v_diag_1323_);
lean_inc(v_postponed_1322_);
lean_inc(v_zetaDeltaFVarIds_1321_);
lean_inc(v_mctx_1320_);
lean_dec(v___x_1319_);
v___x_1325_ = lean_box(0);
v_isShared_1326_ = v_isSharedCheck_1334_;
goto v_resetjp_1324_;
}
v_resetjp_1324_:
{
lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1330_; 
v___x_1327_ = lean_box(0);
v___x_1328_ = lean_obj_once(&l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7___redArg___closed__3, &l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7___redArg___closed__3_once, _init_l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7___redArg___closed__3);
if (v_isShared_1326_ == 0)
{
lean_ctor_set(v___x_1325_, 1, v___x_1328_);
v___x_1330_ = v___x_1325_;
goto v_reusejp_1329_;
}
else
{
lean_object* v_reuseFailAlloc_1333_; 
v_reuseFailAlloc_1333_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1333_, 0, v_mctx_1320_);
lean_ctor_set(v_reuseFailAlloc_1333_, 1, v___x_1328_);
lean_ctor_set(v_reuseFailAlloc_1333_, 2, v_zetaDeltaFVarIds_1321_);
lean_ctor_set(v_reuseFailAlloc_1333_, 3, v_postponed_1322_);
lean_ctor_set(v_reuseFailAlloc_1333_, 4, v_diag_1323_);
v___x_1330_ = v_reuseFailAlloc_1333_;
goto v_reusejp_1329_;
}
v_reusejp_1329_:
{
lean_object* v___x_1331_; lean_object* v___x_1332_; 
v___x_1331_ = lean_st_ref_put(v___y_1296_, v___x_1330_);
v___x_1332_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1332_, 0, v___x_1327_);
return v___x_1332_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7___redArg___boxed(lean_object* v_h_1339_, lean_object* v___y_1340_, lean_object* v___y_1341_, lean_object* v___y_1342_){
_start:
{
uint64_t v_h_boxed_1343_; lean_object* v_res_1344_; 
v_h_boxed_1343_ = lean_unbox_uint64(v_h_1339_);
lean_dec_ref(v_h_1339_);
v_res_1344_ = l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7___redArg(v_h_boxed_1343_, v___y_1340_, v___y_1341_);
lean_dec(v___y_1341_);
lean_dec(v___y_1340_);
return v_res_1344_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Widget_addPanelWidgetLocal___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__2_spec__9___redArg(lean_object* v_t_1345_, uint64_t v_k_1346_, lean_object* v_fallback_1347_){
_start:
{
if (lean_obj_tag(v_t_1345_) == 0)
{
lean_object* v_k_1348_; lean_object* v_v_1349_; lean_object* v_l_1350_; lean_object* v_r_1351_; uint64_t v___x_1352_; uint8_t v___x_1353_; 
v_k_1348_ = lean_ctor_get(v_t_1345_, 1);
v_v_1349_ = lean_ctor_get(v_t_1345_, 2);
v_l_1350_ = lean_ctor_get(v_t_1345_, 3);
v_r_1351_ = lean_ctor_get(v_t_1345_, 4);
v___x_1352_ = lean_unbox_uint64(v_k_1348_);
v___x_1353_ = lean_uint64_dec_lt(v_k_1346_, v___x_1352_);
if (v___x_1353_ == 0)
{
uint64_t v___x_1354_; uint8_t v___x_1355_; 
v___x_1354_ = lean_unbox_uint64(v_k_1348_);
v___x_1355_ = lean_uint64_dec_eq(v_k_1346_, v___x_1354_);
if (v___x_1355_ == 0)
{
v_t_1345_ = v_r_1351_;
goto _start;
}
else
{
lean_inc(v_v_1349_);
return v_v_1349_;
}
}
else
{
v_t_1345_ = v_l_1350_;
goto _start;
}
}
else
{
lean_inc(v_fallback_1347_);
return v_fallback_1347_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Widget_addPanelWidgetLocal___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__2_spec__9___redArg___boxed(lean_object* v_t_1358_, lean_object* v_k_1359_, lean_object* v_fallback_1360_){
_start:
{
uint64_t v_k_boxed_1361_; lean_object* v_res_1362_; 
v_k_boxed_1361_ = lean_unbox_uint64(v_k_1359_);
lean_dec_ref(v_k_1359_);
v_res_1362_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Widget_addPanelWidgetLocal___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__2_spec__9___redArg(v_t_1358_, v_k_boxed_1361_, v_fallback_1360_);
lean_dec(v_fallback_1360_);
lean_dec(v_t_1358_);
return v_res_1362_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Widget_addPanelWidgetLocal___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__2_spec__10___redArg(uint64_t v_k_1363_, lean_object* v_v_1364_, lean_object* v_t_1365_){
_start:
{
if (lean_obj_tag(v_t_1365_) == 0)
{
lean_object* v_size_1366_; lean_object* v_k_1367_; lean_object* v_v_1368_; lean_object* v_l_1369_; lean_object* v_r_1370_; lean_object* v___x_1372_; uint8_t v_isShared_1373_; uint8_t v_isSharedCheck_1654_; 
v_size_1366_ = lean_ctor_get(v_t_1365_, 0);
v_k_1367_ = lean_ctor_get(v_t_1365_, 1);
v_v_1368_ = lean_ctor_get(v_t_1365_, 2);
v_l_1369_ = lean_ctor_get(v_t_1365_, 3);
v_r_1370_ = lean_ctor_get(v_t_1365_, 4);
v_isSharedCheck_1654_ = !lean_is_exclusive(v_t_1365_);
if (v_isSharedCheck_1654_ == 0)
{
v___x_1372_ = v_t_1365_;
v_isShared_1373_ = v_isSharedCheck_1654_;
goto v_resetjp_1371_;
}
else
{
lean_inc(v_r_1370_);
lean_inc(v_l_1369_);
lean_inc(v_v_1368_);
lean_inc(v_k_1367_);
lean_inc(v_size_1366_);
lean_dec(v_t_1365_);
v___x_1372_ = lean_box(0);
v_isShared_1373_ = v_isSharedCheck_1654_;
goto v_resetjp_1371_;
}
v_resetjp_1371_:
{
uint64_t v___x_1374_; uint8_t v___x_1375_; 
v___x_1374_ = lean_unbox_uint64(v_k_1367_);
v___x_1375_ = lean_uint64_dec_lt(v_k_1363_, v___x_1374_);
if (v___x_1375_ == 0)
{
uint64_t v___x_1376_; uint8_t v___x_1377_; 
v___x_1376_ = lean_unbox_uint64(v_k_1367_);
v___x_1377_ = lean_uint64_dec_eq(v_k_1363_, v___x_1376_);
if (v___x_1377_ == 0)
{
lean_object* v_impl_1378_; lean_object* v___x_1379_; 
lean_dec(v_size_1366_);
v_impl_1378_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Widget_addPanelWidgetLocal___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__2_spec__10___redArg(v_k_1363_, v_v_1364_, v_r_1370_);
v___x_1379_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_1369_) == 0)
{
lean_object* v_size_1380_; lean_object* v_size_1381_; lean_object* v_k_1382_; lean_object* v_v_1383_; lean_object* v_l_1384_; lean_object* v_r_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; uint8_t v___x_1388_; 
v_size_1380_ = lean_ctor_get(v_l_1369_, 0);
v_size_1381_ = lean_ctor_get(v_impl_1378_, 0);
lean_inc(v_size_1381_);
v_k_1382_ = lean_ctor_get(v_impl_1378_, 1);
lean_inc(v_k_1382_);
v_v_1383_ = lean_ctor_get(v_impl_1378_, 2);
lean_inc(v_v_1383_);
v_l_1384_ = lean_ctor_get(v_impl_1378_, 3);
lean_inc(v_l_1384_);
v_r_1385_ = lean_ctor_get(v_impl_1378_, 4);
lean_inc(v_r_1385_);
v___x_1386_ = lean_unsigned_to_nat(3u);
v___x_1387_ = lean_nat_mul(v___x_1386_, v_size_1380_);
v___x_1388_ = lean_nat_dec_lt(v___x_1387_, v_size_1381_);
lean_dec(v___x_1387_);
if (v___x_1388_ == 0)
{
lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1392_; 
lean_dec(v_r_1385_);
lean_dec(v_l_1384_);
lean_dec(v_v_1383_);
lean_dec(v_k_1382_);
v___x_1389_ = lean_nat_add(v___x_1379_, v_size_1380_);
v___x_1390_ = lean_nat_add(v___x_1389_, v_size_1381_);
lean_dec(v_size_1381_);
lean_dec(v___x_1389_);
if (v_isShared_1373_ == 0)
{
lean_ctor_set(v___x_1372_, 4, v_impl_1378_);
lean_ctor_set(v___x_1372_, 0, v___x_1390_);
v___x_1392_ = v___x_1372_;
goto v_reusejp_1391_;
}
else
{
lean_object* v_reuseFailAlloc_1393_; 
v_reuseFailAlloc_1393_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1393_, 0, v___x_1390_);
lean_ctor_set(v_reuseFailAlloc_1393_, 1, v_k_1367_);
lean_ctor_set(v_reuseFailAlloc_1393_, 2, v_v_1368_);
lean_ctor_set(v_reuseFailAlloc_1393_, 3, v_l_1369_);
lean_ctor_set(v_reuseFailAlloc_1393_, 4, v_impl_1378_);
v___x_1392_ = v_reuseFailAlloc_1393_;
goto v_reusejp_1391_;
}
v_reusejp_1391_:
{
return v___x_1392_;
}
}
else
{
lean_object* v___x_1395_; uint8_t v_isShared_1396_; uint8_t v_isSharedCheck_1457_; 
v_isSharedCheck_1457_ = !lean_is_exclusive(v_impl_1378_);
if (v_isSharedCheck_1457_ == 0)
{
lean_object* v_unused_1458_; lean_object* v_unused_1459_; lean_object* v_unused_1460_; lean_object* v_unused_1461_; lean_object* v_unused_1462_; 
v_unused_1458_ = lean_ctor_get(v_impl_1378_, 4);
lean_dec(v_unused_1458_);
v_unused_1459_ = lean_ctor_get(v_impl_1378_, 3);
lean_dec(v_unused_1459_);
v_unused_1460_ = lean_ctor_get(v_impl_1378_, 2);
lean_dec(v_unused_1460_);
v_unused_1461_ = lean_ctor_get(v_impl_1378_, 1);
lean_dec(v_unused_1461_);
v_unused_1462_ = lean_ctor_get(v_impl_1378_, 0);
lean_dec(v_unused_1462_);
v___x_1395_ = v_impl_1378_;
v_isShared_1396_ = v_isSharedCheck_1457_;
goto v_resetjp_1394_;
}
else
{
lean_dec(v_impl_1378_);
v___x_1395_ = lean_box(0);
v_isShared_1396_ = v_isSharedCheck_1457_;
goto v_resetjp_1394_;
}
v_resetjp_1394_:
{
lean_object* v_size_1397_; lean_object* v_k_1398_; lean_object* v_v_1399_; lean_object* v_l_1400_; lean_object* v_r_1401_; lean_object* v_size_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; uint8_t v___x_1405_; 
v_size_1397_ = lean_ctor_get(v_l_1384_, 0);
v_k_1398_ = lean_ctor_get(v_l_1384_, 1);
v_v_1399_ = lean_ctor_get(v_l_1384_, 2);
v_l_1400_ = lean_ctor_get(v_l_1384_, 3);
v_r_1401_ = lean_ctor_get(v_l_1384_, 4);
v_size_1402_ = lean_ctor_get(v_r_1385_, 0);
v___x_1403_ = lean_unsigned_to_nat(2u);
v___x_1404_ = lean_nat_mul(v___x_1403_, v_size_1402_);
v___x_1405_ = lean_nat_dec_lt(v_size_1397_, v___x_1404_);
lean_dec(v___x_1404_);
if (v___x_1405_ == 0)
{
lean_object* v___x_1407_; uint8_t v_isShared_1408_; uint8_t v_isSharedCheck_1433_; 
lean_inc(v_r_1401_);
lean_inc(v_l_1400_);
lean_inc(v_v_1399_);
lean_inc(v_k_1398_);
v_isSharedCheck_1433_ = !lean_is_exclusive(v_l_1384_);
if (v_isSharedCheck_1433_ == 0)
{
lean_object* v_unused_1434_; lean_object* v_unused_1435_; lean_object* v_unused_1436_; lean_object* v_unused_1437_; lean_object* v_unused_1438_; 
v_unused_1434_ = lean_ctor_get(v_l_1384_, 4);
lean_dec(v_unused_1434_);
v_unused_1435_ = lean_ctor_get(v_l_1384_, 3);
lean_dec(v_unused_1435_);
v_unused_1436_ = lean_ctor_get(v_l_1384_, 2);
lean_dec(v_unused_1436_);
v_unused_1437_ = lean_ctor_get(v_l_1384_, 1);
lean_dec(v_unused_1437_);
v_unused_1438_ = lean_ctor_get(v_l_1384_, 0);
lean_dec(v_unused_1438_);
v___x_1407_ = v_l_1384_;
v_isShared_1408_ = v_isSharedCheck_1433_;
goto v_resetjp_1406_;
}
else
{
lean_dec(v_l_1384_);
v___x_1407_ = lean_box(0);
v_isShared_1408_ = v_isSharedCheck_1433_;
goto v_resetjp_1406_;
}
v_resetjp_1406_:
{
lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___y_1412_; lean_object* v___y_1413_; lean_object* v___y_1414_; lean_object* v___y_1423_; 
v___x_1409_ = lean_nat_add(v___x_1379_, v_size_1380_);
v___x_1410_ = lean_nat_add(v___x_1409_, v_size_1381_);
lean_dec(v_size_1381_);
if (lean_obj_tag(v_l_1400_) == 0)
{
lean_object* v_size_1431_; 
v_size_1431_ = lean_ctor_get(v_l_1400_, 0);
lean_inc(v_size_1431_);
v___y_1423_ = v_size_1431_;
goto v___jp_1422_;
}
else
{
lean_object* v___x_1432_; 
v___x_1432_ = lean_unsigned_to_nat(0u);
v___y_1423_ = v___x_1432_;
goto v___jp_1422_;
}
v___jp_1411_:
{
lean_object* v___x_1415_; lean_object* v___x_1417_; 
v___x_1415_ = lean_nat_add(v___y_1413_, v___y_1414_);
lean_dec(v___y_1414_);
lean_dec(v___y_1413_);
if (v_isShared_1408_ == 0)
{
lean_ctor_set(v___x_1407_, 4, v_r_1385_);
lean_ctor_set(v___x_1407_, 3, v_r_1401_);
lean_ctor_set(v___x_1407_, 2, v_v_1383_);
lean_ctor_set(v___x_1407_, 1, v_k_1382_);
lean_ctor_set(v___x_1407_, 0, v___x_1415_);
v___x_1417_ = v___x_1407_;
goto v_reusejp_1416_;
}
else
{
lean_object* v_reuseFailAlloc_1421_; 
v_reuseFailAlloc_1421_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1421_, 0, v___x_1415_);
lean_ctor_set(v_reuseFailAlloc_1421_, 1, v_k_1382_);
lean_ctor_set(v_reuseFailAlloc_1421_, 2, v_v_1383_);
lean_ctor_set(v_reuseFailAlloc_1421_, 3, v_r_1401_);
lean_ctor_set(v_reuseFailAlloc_1421_, 4, v_r_1385_);
v___x_1417_ = v_reuseFailAlloc_1421_;
goto v_reusejp_1416_;
}
v_reusejp_1416_:
{
lean_object* v___x_1419_; 
if (v_isShared_1396_ == 0)
{
lean_ctor_set(v___x_1395_, 4, v___x_1417_);
lean_ctor_set(v___x_1395_, 3, v___y_1412_);
lean_ctor_set(v___x_1395_, 2, v_v_1399_);
lean_ctor_set(v___x_1395_, 1, v_k_1398_);
lean_ctor_set(v___x_1395_, 0, v___x_1410_);
v___x_1419_ = v___x_1395_;
goto v_reusejp_1418_;
}
else
{
lean_object* v_reuseFailAlloc_1420_; 
v_reuseFailAlloc_1420_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1420_, 0, v___x_1410_);
lean_ctor_set(v_reuseFailAlloc_1420_, 1, v_k_1398_);
lean_ctor_set(v_reuseFailAlloc_1420_, 2, v_v_1399_);
lean_ctor_set(v_reuseFailAlloc_1420_, 3, v___y_1412_);
lean_ctor_set(v_reuseFailAlloc_1420_, 4, v___x_1417_);
v___x_1419_ = v_reuseFailAlloc_1420_;
goto v_reusejp_1418_;
}
v_reusejp_1418_:
{
return v___x_1419_;
}
}
}
v___jp_1422_:
{
lean_object* v___x_1424_; lean_object* v___x_1426_; 
v___x_1424_ = lean_nat_add(v___x_1409_, v___y_1423_);
lean_dec(v___y_1423_);
lean_dec(v___x_1409_);
if (v_isShared_1373_ == 0)
{
lean_ctor_set(v___x_1372_, 4, v_l_1400_);
lean_ctor_set(v___x_1372_, 0, v___x_1424_);
v___x_1426_ = v___x_1372_;
goto v_reusejp_1425_;
}
else
{
lean_object* v_reuseFailAlloc_1430_; 
v_reuseFailAlloc_1430_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1430_, 0, v___x_1424_);
lean_ctor_set(v_reuseFailAlloc_1430_, 1, v_k_1367_);
lean_ctor_set(v_reuseFailAlloc_1430_, 2, v_v_1368_);
lean_ctor_set(v_reuseFailAlloc_1430_, 3, v_l_1369_);
lean_ctor_set(v_reuseFailAlloc_1430_, 4, v_l_1400_);
v___x_1426_ = v_reuseFailAlloc_1430_;
goto v_reusejp_1425_;
}
v_reusejp_1425_:
{
lean_object* v___x_1427_; 
v___x_1427_ = lean_nat_add(v___x_1379_, v_size_1402_);
if (lean_obj_tag(v_r_1401_) == 0)
{
lean_object* v_size_1428_; 
v_size_1428_ = lean_ctor_get(v_r_1401_, 0);
lean_inc(v_size_1428_);
v___y_1412_ = v___x_1426_;
v___y_1413_ = v___x_1427_;
v___y_1414_ = v_size_1428_;
goto v___jp_1411_;
}
else
{
lean_object* v___x_1429_; 
v___x_1429_ = lean_unsigned_to_nat(0u);
v___y_1412_ = v___x_1426_;
v___y_1413_ = v___x_1427_;
v___y_1414_ = v___x_1429_;
goto v___jp_1411_;
}
}
}
}
}
else
{
lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1443_; 
lean_del_object(v___x_1372_);
v___x_1439_ = lean_nat_add(v___x_1379_, v_size_1380_);
v___x_1440_ = lean_nat_add(v___x_1439_, v_size_1381_);
lean_dec(v_size_1381_);
v___x_1441_ = lean_nat_add(v___x_1439_, v_size_1397_);
lean_dec(v___x_1439_);
lean_inc_ref(v_l_1369_);
if (v_isShared_1396_ == 0)
{
lean_ctor_set(v___x_1395_, 4, v_l_1384_);
lean_ctor_set(v___x_1395_, 3, v_l_1369_);
lean_ctor_set(v___x_1395_, 2, v_v_1368_);
lean_ctor_set(v___x_1395_, 1, v_k_1367_);
lean_ctor_set(v___x_1395_, 0, v___x_1441_);
v___x_1443_ = v___x_1395_;
goto v_reusejp_1442_;
}
else
{
lean_object* v_reuseFailAlloc_1456_; 
v_reuseFailAlloc_1456_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1456_, 0, v___x_1441_);
lean_ctor_set(v_reuseFailAlloc_1456_, 1, v_k_1367_);
lean_ctor_set(v_reuseFailAlloc_1456_, 2, v_v_1368_);
lean_ctor_set(v_reuseFailAlloc_1456_, 3, v_l_1369_);
lean_ctor_set(v_reuseFailAlloc_1456_, 4, v_l_1384_);
v___x_1443_ = v_reuseFailAlloc_1456_;
goto v_reusejp_1442_;
}
v_reusejp_1442_:
{
lean_object* v___x_1445_; uint8_t v_isShared_1446_; uint8_t v_isSharedCheck_1450_; 
v_isSharedCheck_1450_ = !lean_is_exclusive(v_l_1369_);
if (v_isSharedCheck_1450_ == 0)
{
lean_object* v_unused_1451_; lean_object* v_unused_1452_; lean_object* v_unused_1453_; lean_object* v_unused_1454_; lean_object* v_unused_1455_; 
v_unused_1451_ = lean_ctor_get(v_l_1369_, 4);
lean_dec(v_unused_1451_);
v_unused_1452_ = lean_ctor_get(v_l_1369_, 3);
lean_dec(v_unused_1452_);
v_unused_1453_ = lean_ctor_get(v_l_1369_, 2);
lean_dec(v_unused_1453_);
v_unused_1454_ = lean_ctor_get(v_l_1369_, 1);
lean_dec(v_unused_1454_);
v_unused_1455_ = lean_ctor_get(v_l_1369_, 0);
lean_dec(v_unused_1455_);
v___x_1445_ = v_l_1369_;
v_isShared_1446_ = v_isSharedCheck_1450_;
goto v_resetjp_1444_;
}
else
{
lean_dec(v_l_1369_);
v___x_1445_ = lean_box(0);
v_isShared_1446_ = v_isSharedCheck_1450_;
goto v_resetjp_1444_;
}
v_resetjp_1444_:
{
lean_object* v___x_1448_; 
if (v_isShared_1446_ == 0)
{
lean_ctor_set(v___x_1445_, 4, v_r_1385_);
lean_ctor_set(v___x_1445_, 3, v___x_1443_);
lean_ctor_set(v___x_1445_, 2, v_v_1383_);
lean_ctor_set(v___x_1445_, 1, v_k_1382_);
lean_ctor_set(v___x_1445_, 0, v___x_1440_);
v___x_1448_ = v___x_1445_;
goto v_reusejp_1447_;
}
else
{
lean_object* v_reuseFailAlloc_1449_; 
v_reuseFailAlloc_1449_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1449_, 0, v___x_1440_);
lean_ctor_set(v_reuseFailAlloc_1449_, 1, v_k_1382_);
lean_ctor_set(v_reuseFailAlloc_1449_, 2, v_v_1383_);
lean_ctor_set(v_reuseFailAlloc_1449_, 3, v___x_1443_);
lean_ctor_set(v_reuseFailAlloc_1449_, 4, v_r_1385_);
v___x_1448_ = v_reuseFailAlloc_1449_;
goto v_reusejp_1447_;
}
v_reusejp_1447_:
{
return v___x_1448_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_1463_; 
v_l_1463_ = lean_ctor_get(v_impl_1378_, 3);
lean_inc(v_l_1463_);
if (lean_obj_tag(v_l_1463_) == 0)
{
lean_object* v_r_1464_; lean_object* v_k_1465_; lean_object* v_v_1466_; lean_object* v___x_1468_; uint8_t v_isShared_1469_; uint8_t v_isSharedCheck_1489_; 
v_r_1464_ = lean_ctor_get(v_impl_1378_, 4);
v_k_1465_ = lean_ctor_get(v_impl_1378_, 1);
v_v_1466_ = lean_ctor_get(v_impl_1378_, 2);
v_isSharedCheck_1489_ = !lean_is_exclusive(v_impl_1378_);
if (v_isSharedCheck_1489_ == 0)
{
lean_object* v_unused_1490_; lean_object* v_unused_1491_; 
v_unused_1490_ = lean_ctor_get(v_impl_1378_, 3);
lean_dec(v_unused_1490_);
v_unused_1491_ = lean_ctor_get(v_impl_1378_, 0);
lean_dec(v_unused_1491_);
v___x_1468_ = v_impl_1378_;
v_isShared_1469_ = v_isSharedCheck_1489_;
goto v_resetjp_1467_;
}
else
{
lean_inc(v_r_1464_);
lean_inc(v_v_1466_);
lean_inc(v_k_1465_);
lean_dec(v_impl_1378_);
v___x_1468_ = lean_box(0);
v_isShared_1469_ = v_isSharedCheck_1489_;
goto v_resetjp_1467_;
}
v_resetjp_1467_:
{
lean_object* v_k_1470_; lean_object* v_v_1471_; lean_object* v___x_1473_; uint8_t v_isShared_1474_; uint8_t v_isSharedCheck_1485_; 
v_k_1470_ = lean_ctor_get(v_l_1463_, 1);
v_v_1471_ = lean_ctor_get(v_l_1463_, 2);
v_isSharedCheck_1485_ = !lean_is_exclusive(v_l_1463_);
if (v_isSharedCheck_1485_ == 0)
{
lean_object* v_unused_1486_; lean_object* v_unused_1487_; lean_object* v_unused_1488_; 
v_unused_1486_ = lean_ctor_get(v_l_1463_, 4);
lean_dec(v_unused_1486_);
v_unused_1487_ = lean_ctor_get(v_l_1463_, 3);
lean_dec(v_unused_1487_);
v_unused_1488_ = lean_ctor_get(v_l_1463_, 0);
lean_dec(v_unused_1488_);
v___x_1473_ = v_l_1463_;
v_isShared_1474_ = v_isSharedCheck_1485_;
goto v_resetjp_1472_;
}
else
{
lean_inc(v_v_1471_);
lean_inc(v_k_1470_);
lean_dec(v_l_1463_);
v___x_1473_ = lean_box(0);
v_isShared_1474_ = v_isSharedCheck_1485_;
goto v_resetjp_1472_;
}
v_resetjp_1472_:
{
lean_object* v___x_1475_; lean_object* v___x_1477_; 
v___x_1475_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_1464_, 2);
if (v_isShared_1474_ == 0)
{
lean_ctor_set(v___x_1473_, 4, v_r_1464_);
lean_ctor_set(v___x_1473_, 3, v_r_1464_);
lean_ctor_set(v___x_1473_, 2, v_v_1368_);
lean_ctor_set(v___x_1473_, 1, v_k_1367_);
lean_ctor_set(v___x_1473_, 0, v___x_1379_);
v___x_1477_ = v___x_1473_;
goto v_reusejp_1476_;
}
else
{
lean_object* v_reuseFailAlloc_1484_; 
v_reuseFailAlloc_1484_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1484_, 0, v___x_1379_);
lean_ctor_set(v_reuseFailAlloc_1484_, 1, v_k_1367_);
lean_ctor_set(v_reuseFailAlloc_1484_, 2, v_v_1368_);
lean_ctor_set(v_reuseFailAlloc_1484_, 3, v_r_1464_);
lean_ctor_set(v_reuseFailAlloc_1484_, 4, v_r_1464_);
v___x_1477_ = v_reuseFailAlloc_1484_;
goto v_reusejp_1476_;
}
v_reusejp_1476_:
{
lean_object* v___x_1479_; 
lean_inc(v_r_1464_);
if (v_isShared_1469_ == 0)
{
lean_ctor_set(v___x_1468_, 3, v_r_1464_);
lean_ctor_set(v___x_1468_, 0, v___x_1379_);
v___x_1479_ = v___x_1468_;
goto v_reusejp_1478_;
}
else
{
lean_object* v_reuseFailAlloc_1483_; 
v_reuseFailAlloc_1483_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1483_, 0, v___x_1379_);
lean_ctor_set(v_reuseFailAlloc_1483_, 1, v_k_1465_);
lean_ctor_set(v_reuseFailAlloc_1483_, 2, v_v_1466_);
lean_ctor_set(v_reuseFailAlloc_1483_, 3, v_r_1464_);
lean_ctor_set(v_reuseFailAlloc_1483_, 4, v_r_1464_);
v___x_1479_ = v_reuseFailAlloc_1483_;
goto v_reusejp_1478_;
}
v_reusejp_1478_:
{
lean_object* v___x_1481_; 
if (v_isShared_1373_ == 0)
{
lean_ctor_set(v___x_1372_, 4, v___x_1479_);
lean_ctor_set(v___x_1372_, 3, v___x_1477_);
lean_ctor_set(v___x_1372_, 2, v_v_1471_);
lean_ctor_set(v___x_1372_, 1, v_k_1470_);
lean_ctor_set(v___x_1372_, 0, v___x_1475_);
v___x_1481_ = v___x_1372_;
goto v_reusejp_1480_;
}
else
{
lean_object* v_reuseFailAlloc_1482_; 
v_reuseFailAlloc_1482_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1482_, 0, v___x_1475_);
lean_ctor_set(v_reuseFailAlloc_1482_, 1, v_k_1470_);
lean_ctor_set(v_reuseFailAlloc_1482_, 2, v_v_1471_);
lean_ctor_set(v_reuseFailAlloc_1482_, 3, v___x_1477_);
lean_ctor_set(v_reuseFailAlloc_1482_, 4, v___x_1479_);
v___x_1481_ = v_reuseFailAlloc_1482_;
goto v_reusejp_1480_;
}
v_reusejp_1480_:
{
return v___x_1481_;
}
}
}
}
}
}
else
{
lean_object* v_r_1492_; 
v_r_1492_ = lean_ctor_get(v_impl_1378_, 4);
lean_inc(v_r_1492_);
if (lean_obj_tag(v_r_1492_) == 0)
{
lean_object* v_k_1493_; lean_object* v_v_1494_; lean_object* v___x_1496_; uint8_t v_isShared_1497_; uint8_t v_isSharedCheck_1505_; 
v_k_1493_ = lean_ctor_get(v_impl_1378_, 1);
v_v_1494_ = lean_ctor_get(v_impl_1378_, 2);
v_isSharedCheck_1505_ = !lean_is_exclusive(v_impl_1378_);
if (v_isSharedCheck_1505_ == 0)
{
lean_object* v_unused_1506_; lean_object* v_unused_1507_; lean_object* v_unused_1508_; 
v_unused_1506_ = lean_ctor_get(v_impl_1378_, 4);
lean_dec(v_unused_1506_);
v_unused_1507_ = lean_ctor_get(v_impl_1378_, 3);
lean_dec(v_unused_1507_);
v_unused_1508_ = lean_ctor_get(v_impl_1378_, 0);
lean_dec(v_unused_1508_);
v___x_1496_ = v_impl_1378_;
v_isShared_1497_ = v_isSharedCheck_1505_;
goto v_resetjp_1495_;
}
else
{
lean_inc(v_v_1494_);
lean_inc(v_k_1493_);
lean_dec(v_impl_1378_);
v___x_1496_ = lean_box(0);
v_isShared_1497_ = v_isSharedCheck_1505_;
goto v_resetjp_1495_;
}
v_resetjp_1495_:
{
lean_object* v___x_1498_; lean_object* v___x_1500_; 
v___x_1498_ = lean_unsigned_to_nat(3u);
if (v_isShared_1497_ == 0)
{
lean_ctor_set(v___x_1496_, 4, v_l_1463_);
lean_ctor_set(v___x_1496_, 2, v_v_1368_);
lean_ctor_set(v___x_1496_, 1, v_k_1367_);
lean_ctor_set(v___x_1496_, 0, v___x_1379_);
v___x_1500_ = v___x_1496_;
goto v_reusejp_1499_;
}
else
{
lean_object* v_reuseFailAlloc_1504_; 
v_reuseFailAlloc_1504_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1504_, 0, v___x_1379_);
lean_ctor_set(v_reuseFailAlloc_1504_, 1, v_k_1367_);
lean_ctor_set(v_reuseFailAlloc_1504_, 2, v_v_1368_);
lean_ctor_set(v_reuseFailAlloc_1504_, 3, v_l_1463_);
lean_ctor_set(v_reuseFailAlloc_1504_, 4, v_l_1463_);
v___x_1500_ = v_reuseFailAlloc_1504_;
goto v_reusejp_1499_;
}
v_reusejp_1499_:
{
lean_object* v___x_1502_; 
if (v_isShared_1373_ == 0)
{
lean_ctor_set(v___x_1372_, 4, v_r_1492_);
lean_ctor_set(v___x_1372_, 3, v___x_1500_);
lean_ctor_set(v___x_1372_, 2, v_v_1494_);
lean_ctor_set(v___x_1372_, 1, v_k_1493_);
lean_ctor_set(v___x_1372_, 0, v___x_1498_);
v___x_1502_ = v___x_1372_;
goto v_reusejp_1501_;
}
else
{
lean_object* v_reuseFailAlloc_1503_; 
v_reuseFailAlloc_1503_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1503_, 0, v___x_1498_);
lean_ctor_set(v_reuseFailAlloc_1503_, 1, v_k_1493_);
lean_ctor_set(v_reuseFailAlloc_1503_, 2, v_v_1494_);
lean_ctor_set(v_reuseFailAlloc_1503_, 3, v___x_1500_);
lean_ctor_set(v_reuseFailAlloc_1503_, 4, v_r_1492_);
v___x_1502_ = v_reuseFailAlloc_1503_;
goto v_reusejp_1501_;
}
v_reusejp_1501_:
{
return v___x_1502_;
}
}
}
}
else
{
lean_object* v___x_1509_; lean_object* v___x_1511_; 
v___x_1509_ = lean_unsigned_to_nat(2u);
if (v_isShared_1373_ == 0)
{
lean_ctor_set(v___x_1372_, 4, v_impl_1378_);
lean_ctor_set(v___x_1372_, 3, v_r_1492_);
lean_ctor_set(v___x_1372_, 0, v___x_1509_);
v___x_1511_ = v___x_1372_;
goto v_reusejp_1510_;
}
else
{
lean_object* v_reuseFailAlloc_1512_; 
v_reuseFailAlloc_1512_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1512_, 0, v___x_1509_);
lean_ctor_set(v_reuseFailAlloc_1512_, 1, v_k_1367_);
lean_ctor_set(v_reuseFailAlloc_1512_, 2, v_v_1368_);
lean_ctor_set(v_reuseFailAlloc_1512_, 3, v_r_1492_);
lean_ctor_set(v_reuseFailAlloc_1512_, 4, v_impl_1378_);
v___x_1511_ = v_reuseFailAlloc_1512_;
goto v_reusejp_1510_;
}
v_reusejp_1510_:
{
return v___x_1511_;
}
}
}
}
}
else
{
lean_object* v___x_1513_; lean_object* v___x_1515_; 
lean_dec(v_v_1368_);
lean_dec(v_k_1367_);
v___x_1513_ = lean_box_uint64(v_k_1363_);
if (v_isShared_1373_ == 0)
{
lean_ctor_set(v___x_1372_, 2, v_v_1364_);
lean_ctor_set(v___x_1372_, 1, v___x_1513_);
v___x_1515_ = v___x_1372_;
goto v_reusejp_1514_;
}
else
{
lean_object* v_reuseFailAlloc_1516_; 
v_reuseFailAlloc_1516_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1516_, 0, v_size_1366_);
lean_ctor_set(v_reuseFailAlloc_1516_, 1, v___x_1513_);
lean_ctor_set(v_reuseFailAlloc_1516_, 2, v_v_1364_);
lean_ctor_set(v_reuseFailAlloc_1516_, 3, v_l_1369_);
lean_ctor_set(v_reuseFailAlloc_1516_, 4, v_r_1370_);
v___x_1515_ = v_reuseFailAlloc_1516_;
goto v_reusejp_1514_;
}
v_reusejp_1514_:
{
return v___x_1515_;
}
}
}
else
{
lean_object* v_impl_1517_; lean_object* v___x_1518_; 
lean_dec(v_size_1366_);
v_impl_1517_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Widget_addPanelWidgetLocal___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__2_spec__10___redArg(v_k_1363_, v_v_1364_, v_l_1369_);
v___x_1518_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_1370_) == 0)
{
lean_object* v_size_1519_; lean_object* v_size_1520_; lean_object* v_k_1521_; lean_object* v_v_1522_; lean_object* v_l_1523_; lean_object* v_r_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; uint8_t v___x_1527_; 
v_size_1519_ = lean_ctor_get(v_r_1370_, 0);
v_size_1520_ = lean_ctor_get(v_impl_1517_, 0);
lean_inc(v_size_1520_);
v_k_1521_ = lean_ctor_get(v_impl_1517_, 1);
lean_inc(v_k_1521_);
v_v_1522_ = lean_ctor_get(v_impl_1517_, 2);
lean_inc(v_v_1522_);
v_l_1523_ = lean_ctor_get(v_impl_1517_, 3);
lean_inc(v_l_1523_);
v_r_1524_ = lean_ctor_get(v_impl_1517_, 4);
lean_inc(v_r_1524_);
v___x_1525_ = lean_unsigned_to_nat(3u);
v___x_1526_ = lean_nat_mul(v___x_1525_, v_size_1519_);
v___x_1527_ = lean_nat_dec_lt(v___x_1526_, v_size_1520_);
lean_dec(v___x_1526_);
if (v___x_1527_ == 0)
{
lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1531_; 
lean_dec(v_r_1524_);
lean_dec(v_l_1523_);
lean_dec(v_v_1522_);
lean_dec(v_k_1521_);
v___x_1528_ = lean_nat_add(v___x_1518_, v_size_1520_);
lean_dec(v_size_1520_);
v___x_1529_ = lean_nat_add(v___x_1528_, v_size_1519_);
lean_dec(v___x_1528_);
if (v_isShared_1373_ == 0)
{
lean_ctor_set(v___x_1372_, 3, v_impl_1517_);
lean_ctor_set(v___x_1372_, 0, v___x_1529_);
v___x_1531_ = v___x_1372_;
goto v_reusejp_1530_;
}
else
{
lean_object* v_reuseFailAlloc_1532_; 
v_reuseFailAlloc_1532_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1532_, 0, v___x_1529_);
lean_ctor_set(v_reuseFailAlloc_1532_, 1, v_k_1367_);
lean_ctor_set(v_reuseFailAlloc_1532_, 2, v_v_1368_);
lean_ctor_set(v_reuseFailAlloc_1532_, 3, v_impl_1517_);
lean_ctor_set(v_reuseFailAlloc_1532_, 4, v_r_1370_);
v___x_1531_ = v_reuseFailAlloc_1532_;
goto v_reusejp_1530_;
}
v_reusejp_1530_:
{
return v___x_1531_;
}
}
else
{
lean_object* v___x_1534_; uint8_t v_isShared_1535_; uint8_t v_isSharedCheck_1598_; 
v_isSharedCheck_1598_ = !lean_is_exclusive(v_impl_1517_);
if (v_isSharedCheck_1598_ == 0)
{
lean_object* v_unused_1599_; lean_object* v_unused_1600_; lean_object* v_unused_1601_; lean_object* v_unused_1602_; lean_object* v_unused_1603_; 
v_unused_1599_ = lean_ctor_get(v_impl_1517_, 4);
lean_dec(v_unused_1599_);
v_unused_1600_ = lean_ctor_get(v_impl_1517_, 3);
lean_dec(v_unused_1600_);
v_unused_1601_ = lean_ctor_get(v_impl_1517_, 2);
lean_dec(v_unused_1601_);
v_unused_1602_ = lean_ctor_get(v_impl_1517_, 1);
lean_dec(v_unused_1602_);
v_unused_1603_ = lean_ctor_get(v_impl_1517_, 0);
lean_dec(v_unused_1603_);
v___x_1534_ = v_impl_1517_;
v_isShared_1535_ = v_isSharedCheck_1598_;
goto v_resetjp_1533_;
}
else
{
lean_dec(v_impl_1517_);
v___x_1534_ = lean_box(0);
v_isShared_1535_ = v_isSharedCheck_1598_;
goto v_resetjp_1533_;
}
v_resetjp_1533_:
{
lean_object* v_size_1536_; lean_object* v_size_1537_; lean_object* v_k_1538_; lean_object* v_v_1539_; lean_object* v_l_1540_; lean_object* v_r_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; uint8_t v___x_1544_; 
v_size_1536_ = lean_ctor_get(v_l_1523_, 0);
v_size_1537_ = lean_ctor_get(v_r_1524_, 0);
v_k_1538_ = lean_ctor_get(v_r_1524_, 1);
v_v_1539_ = lean_ctor_get(v_r_1524_, 2);
v_l_1540_ = lean_ctor_get(v_r_1524_, 3);
v_r_1541_ = lean_ctor_get(v_r_1524_, 4);
v___x_1542_ = lean_unsigned_to_nat(2u);
v___x_1543_ = lean_nat_mul(v___x_1542_, v_size_1536_);
v___x_1544_ = lean_nat_dec_lt(v_size_1537_, v___x_1543_);
lean_dec(v___x_1543_);
if (v___x_1544_ == 0)
{
lean_object* v___x_1546_; uint8_t v_isShared_1547_; uint8_t v_isSharedCheck_1573_; 
lean_inc(v_r_1541_);
lean_inc(v_l_1540_);
lean_inc(v_v_1539_);
lean_inc(v_k_1538_);
v_isSharedCheck_1573_ = !lean_is_exclusive(v_r_1524_);
if (v_isSharedCheck_1573_ == 0)
{
lean_object* v_unused_1574_; lean_object* v_unused_1575_; lean_object* v_unused_1576_; lean_object* v_unused_1577_; lean_object* v_unused_1578_; 
v_unused_1574_ = lean_ctor_get(v_r_1524_, 4);
lean_dec(v_unused_1574_);
v_unused_1575_ = lean_ctor_get(v_r_1524_, 3);
lean_dec(v_unused_1575_);
v_unused_1576_ = lean_ctor_get(v_r_1524_, 2);
lean_dec(v_unused_1576_);
v_unused_1577_ = lean_ctor_get(v_r_1524_, 1);
lean_dec(v_unused_1577_);
v_unused_1578_ = lean_ctor_get(v_r_1524_, 0);
lean_dec(v_unused_1578_);
v___x_1546_ = v_r_1524_;
v_isShared_1547_ = v_isSharedCheck_1573_;
goto v_resetjp_1545_;
}
else
{
lean_dec(v_r_1524_);
v___x_1546_ = lean_box(0);
v_isShared_1547_ = v_isSharedCheck_1573_;
goto v_resetjp_1545_;
}
v_resetjp_1545_:
{
lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___y_1551_; lean_object* v___y_1552_; lean_object* v___y_1553_; lean_object* v___x_1561_; lean_object* v___y_1563_; 
v___x_1548_ = lean_nat_add(v___x_1518_, v_size_1520_);
lean_dec(v_size_1520_);
v___x_1549_ = lean_nat_add(v___x_1548_, v_size_1519_);
lean_dec(v___x_1548_);
v___x_1561_ = lean_nat_add(v___x_1518_, v_size_1536_);
if (lean_obj_tag(v_l_1540_) == 0)
{
lean_object* v_size_1571_; 
v_size_1571_ = lean_ctor_get(v_l_1540_, 0);
lean_inc(v_size_1571_);
v___y_1563_ = v_size_1571_;
goto v___jp_1562_;
}
else
{
lean_object* v___x_1572_; 
v___x_1572_ = lean_unsigned_to_nat(0u);
v___y_1563_ = v___x_1572_;
goto v___jp_1562_;
}
v___jp_1550_:
{
lean_object* v___x_1554_; lean_object* v___x_1556_; 
v___x_1554_ = lean_nat_add(v___y_1552_, v___y_1553_);
lean_dec(v___y_1553_);
lean_dec(v___y_1552_);
if (v_isShared_1547_ == 0)
{
lean_ctor_set(v___x_1546_, 4, v_r_1370_);
lean_ctor_set(v___x_1546_, 3, v_r_1541_);
lean_ctor_set(v___x_1546_, 2, v_v_1368_);
lean_ctor_set(v___x_1546_, 1, v_k_1367_);
lean_ctor_set(v___x_1546_, 0, v___x_1554_);
v___x_1556_ = v___x_1546_;
goto v_reusejp_1555_;
}
else
{
lean_object* v_reuseFailAlloc_1560_; 
v_reuseFailAlloc_1560_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1560_, 0, v___x_1554_);
lean_ctor_set(v_reuseFailAlloc_1560_, 1, v_k_1367_);
lean_ctor_set(v_reuseFailAlloc_1560_, 2, v_v_1368_);
lean_ctor_set(v_reuseFailAlloc_1560_, 3, v_r_1541_);
lean_ctor_set(v_reuseFailAlloc_1560_, 4, v_r_1370_);
v___x_1556_ = v_reuseFailAlloc_1560_;
goto v_reusejp_1555_;
}
v_reusejp_1555_:
{
lean_object* v___x_1558_; 
if (v_isShared_1535_ == 0)
{
lean_ctor_set(v___x_1534_, 4, v___x_1556_);
lean_ctor_set(v___x_1534_, 3, v___y_1551_);
lean_ctor_set(v___x_1534_, 2, v_v_1539_);
lean_ctor_set(v___x_1534_, 1, v_k_1538_);
lean_ctor_set(v___x_1534_, 0, v___x_1549_);
v___x_1558_ = v___x_1534_;
goto v_reusejp_1557_;
}
else
{
lean_object* v_reuseFailAlloc_1559_; 
v_reuseFailAlloc_1559_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1559_, 0, v___x_1549_);
lean_ctor_set(v_reuseFailAlloc_1559_, 1, v_k_1538_);
lean_ctor_set(v_reuseFailAlloc_1559_, 2, v_v_1539_);
lean_ctor_set(v_reuseFailAlloc_1559_, 3, v___y_1551_);
lean_ctor_set(v_reuseFailAlloc_1559_, 4, v___x_1556_);
v___x_1558_ = v_reuseFailAlloc_1559_;
goto v_reusejp_1557_;
}
v_reusejp_1557_:
{
return v___x_1558_;
}
}
}
v___jp_1562_:
{
lean_object* v___x_1564_; lean_object* v___x_1566_; 
v___x_1564_ = lean_nat_add(v___x_1561_, v___y_1563_);
lean_dec(v___y_1563_);
lean_dec(v___x_1561_);
if (v_isShared_1373_ == 0)
{
lean_ctor_set(v___x_1372_, 4, v_l_1540_);
lean_ctor_set(v___x_1372_, 3, v_l_1523_);
lean_ctor_set(v___x_1372_, 2, v_v_1522_);
lean_ctor_set(v___x_1372_, 1, v_k_1521_);
lean_ctor_set(v___x_1372_, 0, v___x_1564_);
v___x_1566_ = v___x_1372_;
goto v_reusejp_1565_;
}
else
{
lean_object* v_reuseFailAlloc_1570_; 
v_reuseFailAlloc_1570_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1570_, 0, v___x_1564_);
lean_ctor_set(v_reuseFailAlloc_1570_, 1, v_k_1521_);
lean_ctor_set(v_reuseFailAlloc_1570_, 2, v_v_1522_);
lean_ctor_set(v_reuseFailAlloc_1570_, 3, v_l_1523_);
lean_ctor_set(v_reuseFailAlloc_1570_, 4, v_l_1540_);
v___x_1566_ = v_reuseFailAlloc_1570_;
goto v_reusejp_1565_;
}
v_reusejp_1565_:
{
lean_object* v___x_1567_; 
v___x_1567_ = lean_nat_add(v___x_1518_, v_size_1519_);
if (lean_obj_tag(v_r_1541_) == 0)
{
lean_object* v_size_1568_; 
v_size_1568_ = lean_ctor_get(v_r_1541_, 0);
lean_inc(v_size_1568_);
v___y_1551_ = v___x_1566_;
v___y_1552_ = v___x_1567_;
v___y_1553_ = v_size_1568_;
goto v___jp_1550_;
}
else
{
lean_object* v___x_1569_; 
v___x_1569_ = lean_unsigned_to_nat(0u);
v___y_1551_ = v___x_1566_;
v___y_1552_ = v___x_1567_;
v___y_1553_ = v___x_1569_;
goto v___jp_1550_;
}
}
}
}
}
else
{
lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1584_; 
lean_del_object(v___x_1372_);
v___x_1579_ = lean_nat_add(v___x_1518_, v_size_1520_);
lean_dec(v_size_1520_);
v___x_1580_ = lean_nat_add(v___x_1579_, v_size_1519_);
lean_dec(v___x_1579_);
v___x_1581_ = lean_nat_add(v___x_1518_, v_size_1519_);
v___x_1582_ = lean_nat_add(v___x_1581_, v_size_1537_);
lean_dec(v___x_1581_);
lean_inc_ref(v_r_1370_);
if (v_isShared_1535_ == 0)
{
lean_ctor_set(v___x_1534_, 4, v_r_1370_);
lean_ctor_set(v___x_1534_, 3, v_r_1524_);
lean_ctor_set(v___x_1534_, 2, v_v_1368_);
lean_ctor_set(v___x_1534_, 1, v_k_1367_);
lean_ctor_set(v___x_1534_, 0, v___x_1582_);
v___x_1584_ = v___x_1534_;
goto v_reusejp_1583_;
}
else
{
lean_object* v_reuseFailAlloc_1597_; 
v_reuseFailAlloc_1597_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1597_, 0, v___x_1582_);
lean_ctor_set(v_reuseFailAlloc_1597_, 1, v_k_1367_);
lean_ctor_set(v_reuseFailAlloc_1597_, 2, v_v_1368_);
lean_ctor_set(v_reuseFailAlloc_1597_, 3, v_r_1524_);
lean_ctor_set(v_reuseFailAlloc_1597_, 4, v_r_1370_);
v___x_1584_ = v_reuseFailAlloc_1597_;
goto v_reusejp_1583_;
}
v_reusejp_1583_:
{
lean_object* v___x_1586_; uint8_t v_isShared_1587_; uint8_t v_isSharedCheck_1591_; 
v_isSharedCheck_1591_ = !lean_is_exclusive(v_r_1370_);
if (v_isSharedCheck_1591_ == 0)
{
lean_object* v_unused_1592_; lean_object* v_unused_1593_; lean_object* v_unused_1594_; lean_object* v_unused_1595_; lean_object* v_unused_1596_; 
v_unused_1592_ = lean_ctor_get(v_r_1370_, 4);
lean_dec(v_unused_1592_);
v_unused_1593_ = lean_ctor_get(v_r_1370_, 3);
lean_dec(v_unused_1593_);
v_unused_1594_ = lean_ctor_get(v_r_1370_, 2);
lean_dec(v_unused_1594_);
v_unused_1595_ = lean_ctor_get(v_r_1370_, 1);
lean_dec(v_unused_1595_);
v_unused_1596_ = lean_ctor_get(v_r_1370_, 0);
lean_dec(v_unused_1596_);
v___x_1586_ = v_r_1370_;
v_isShared_1587_ = v_isSharedCheck_1591_;
goto v_resetjp_1585_;
}
else
{
lean_dec(v_r_1370_);
v___x_1586_ = lean_box(0);
v_isShared_1587_ = v_isSharedCheck_1591_;
goto v_resetjp_1585_;
}
v_resetjp_1585_:
{
lean_object* v___x_1589_; 
if (v_isShared_1587_ == 0)
{
lean_ctor_set(v___x_1586_, 4, v___x_1584_);
lean_ctor_set(v___x_1586_, 3, v_l_1523_);
lean_ctor_set(v___x_1586_, 2, v_v_1522_);
lean_ctor_set(v___x_1586_, 1, v_k_1521_);
lean_ctor_set(v___x_1586_, 0, v___x_1580_);
v___x_1589_ = v___x_1586_;
goto v_reusejp_1588_;
}
else
{
lean_object* v_reuseFailAlloc_1590_; 
v_reuseFailAlloc_1590_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1590_, 0, v___x_1580_);
lean_ctor_set(v_reuseFailAlloc_1590_, 1, v_k_1521_);
lean_ctor_set(v_reuseFailAlloc_1590_, 2, v_v_1522_);
lean_ctor_set(v_reuseFailAlloc_1590_, 3, v_l_1523_);
lean_ctor_set(v_reuseFailAlloc_1590_, 4, v___x_1584_);
v___x_1589_ = v_reuseFailAlloc_1590_;
goto v_reusejp_1588_;
}
v_reusejp_1588_:
{
return v___x_1589_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_1604_; 
v_l_1604_ = lean_ctor_get(v_impl_1517_, 3);
lean_inc(v_l_1604_);
if (lean_obj_tag(v_l_1604_) == 0)
{
lean_object* v_r_1605_; lean_object* v_k_1606_; lean_object* v_v_1607_; lean_object* v___x_1609_; uint8_t v_isShared_1610_; uint8_t v_isSharedCheck_1618_; 
v_r_1605_ = lean_ctor_get(v_impl_1517_, 4);
v_k_1606_ = lean_ctor_get(v_impl_1517_, 1);
v_v_1607_ = lean_ctor_get(v_impl_1517_, 2);
v_isSharedCheck_1618_ = !lean_is_exclusive(v_impl_1517_);
if (v_isSharedCheck_1618_ == 0)
{
lean_object* v_unused_1619_; lean_object* v_unused_1620_; 
v_unused_1619_ = lean_ctor_get(v_impl_1517_, 3);
lean_dec(v_unused_1619_);
v_unused_1620_ = lean_ctor_get(v_impl_1517_, 0);
lean_dec(v_unused_1620_);
v___x_1609_ = v_impl_1517_;
v_isShared_1610_ = v_isSharedCheck_1618_;
goto v_resetjp_1608_;
}
else
{
lean_inc(v_r_1605_);
lean_inc(v_v_1607_);
lean_inc(v_k_1606_);
lean_dec(v_impl_1517_);
v___x_1609_ = lean_box(0);
v_isShared_1610_ = v_isSharedCheck_1618_;
goto v_resetjp_1608_;
}
v_resetjp_1608_:
{
lean_object* v___x_1611_; lean_object* v___x_1613_; 
v___x_1611_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_1605_);
if (v_isShared_1610_ == 0)
{
lean_ctor_set(v___x_1609_, 3, v_r_1605_);
lean_ctor_set(v___x_1609_, 2, v_v_1368_);
lean_ctor_set(v___x_1609_, 1, v_k_1367_);
lean_ctor_set(v___x_1609_, 0, v___x_1518_);
v___x_1613_ = v___x_1609_;
goto v_reusejp_1612_;
}
else
{
lean_object* v_reuseFailAlloc_1617_; 
v_reuseFailAlloc_1617_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1617_, 0, v___x_1518_);
lean_ctor_set(v_reuseFailAlloc_1617_, 1, v_k_1367_);
lean_ctor_set(v_reuseFailAlloc_1617_, 2, v_v_1368_);
lean_ctor_set(v_reuseFailAlloc_1617_, 3, v_r_1605_);
lean_ctor_set(v_reuseFailAlloc_1617_, 4, v_r_1605_);
v___x_1613_ = v_reuseFailAlloc_1617_;
goto v_reusejp_1612_;
}
v_reusejp_1612_:
{
lean_object* v___x_1615_; 
if (v_isShared_1373_ == 0)
{
lean_ctor_set(v___x_1372_, 4, v___x_1613_);
lean_ctor_set(v___x_1372_, 3, v_l_1604_);
lean_ctor_set(v___x_1372_, 2, v_v_1607_);
lean_ctor_set(v___x_1372_, 1, v_k_1606_);
lean_ctor_set(v___x_1372_, 0, v___x_1611_);
v___x_1615_ = v___x_1372_;
goto v_reusejp_1614_;
}
else
{
lean_object* v_reuseFailAlloc_1616_; 
v_reuseFailAlloc_1616_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1616_, 0, v___x_1611_);
lean_ctor_set(v_reuseFailAlloc_1616_, 1, v_k_1606_);
lean_ctor_set(v_reuseFailAlloc_1616_, 2, v_v_1607_);
lean_ctor_set(v_reuseFailAlloc_1616_, 3, v_l_1604_);
lean_ctor_set(v_reuseFailAlloc_1616_, 4, v___x_1613_);
v___x_1615_ = v_reuseFailAlloc_1616_;
goto v_reusejp_1614_;
}
v_reusejp_1614_:
{
return v___x_1615_;
}
}
}
}
else
{
lean_object* v_r_1621_; 
v_r_1621_ = lean_ctor_get(v_impl_1517_, 4);
lean_inc(v_r_1621_);
if (lean_obj_tag(v_r_1621_) == 0)
{
lean_object* v_k_1622_; lean_object* v_v_1623_; lean_object* v___x_1625_; uint8_t v_isShared_1626_; uint8_t v_isSharedCheck_1646_; 
v_k_1622_ = lean_ctor_get(v_impl_1517_, 1);
v_v_1623_ = lean_ctor_get(v_impl_1517_, 2);
v_isSharedCheck_1646_ = !lean_is_exclusive(v_impl_1517_);
if (v_isSharedCheck_1646_ == 0)
{
lean_object* v_unused_1647_; lean_object* v_unused_1648_; lean_object* v_unused_1649_; 
v_unused_1647_ = lean_ctor_get(v_impl_1517_, 4);
lean_dec(v_unused_1647_);
v_unused_1648_ = lean_ctor_get(v_impl_1517_, 3);
lean_dec(v_unused_1648_);
v_unused_1649_ = lean_ctor_get(v_impl_1517_, 0);
lean_dec(v_unused_1649_);
v___x_1625_ = v_impl_1517_;
v_isShared_1626_ = v_isSharedCheck_1646_;
goto v_resetjp_1624_;
}
else
{
lean_inc(v_v_1623_);
lean_inc(v_k_1622_);
lean_dec(v_impl_1517_);
v___x_1625_ = lean_box(0);
v_isShared_1626_ = v_isSharedCheck_1646_;
goto v_resetjp_1624_;
}
v_resetjp_1624_:
{
lean_object* v_k_1627_; lean_object* v_v_1628_; lean_object* v___x_1630_; uint8_t v_isShared_1631_; uint8_t v_isSharedCheck_1642_; 
v_k_1627_ = lean_ctor_get(v_r_1621_, 1);
v_v_1628_ = lean_ctor_get(v_r_1621_, 2);
v_isSharedCheck_1642_ = !lean_is_exclusive(v_r_1621_);
if (v_isSharedCheck_1642_ == 0)
{
lean_object* v_unused_1643_; lean_object* v_unused_1644_; lean_object* v_unused_1645_; 
v_unused_1643_ = lean_ctor_get(v_r_1621_, 4);
lean_dec(v_unused_1643_);
v_unused_1644_ = lean_ctor_get(v_r_1621_, 3);
lean_dec(v_unused_1644_);
v_unused_1645_ = lean_ctor_get(v_r_1621_, 0);
lean_dec(v_unused_1645_);
v___x_1630_ = v_r_1621_;
v_isShared_1631_ = v_isSharedCheck_1642_;
goto v_resetjp_1629_;
}
else
{
lean_inc(v_v_1628_);
lean_inc(v_k_1627_);
lean_dec(v_r_1621_);
v___x_1630_ = lean_box(0);
v_isShared_1631_ = v_isSharedCheck_1642_;
goto v_resetjp_1629_;
}
v_resetjp_1629_:
{
lean_object* v___x_1632_; lean_object* v___x_1634_; 
v___x_1632_ = lean_unsigned_to_nat(3u);
if (v_isShared_1631_ == 0)
{
lean_ctor_set(v___x_1630_, 4, v_l_1604_);
lean_ctor_set(v___x_1630_, 3, v_l_1604_);
lean_ctor_set(v___x_1630_, 2, v_v_1623_);
lean_ctor_set(v___x_1630_, 1, v_k_1622_);
lean_ctor_set(v___x_1630_, 0, v___x_1518_);
v___x_1634_ = v___x_1630_;
goto v_reusejp_1633_;
}
else
{
lean_object* v_reuseFailAlloc_1641_; 
v_reuseFailAlloc_1641_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1641_, 0, v___x_1518_);
lean_ctor_set(v_reuseFailAlloc_1641_, 1, v_k_1622_);
lean_ctor_set(v_reuseFailAlloc_1641_, 2, v_v_1623_);
lean_ctor_set(v_reuseFailAlloc_1641_, 3, v_l_1604_);
lean_ctor_set(v_reuseFailAlloc_1641_, 4, v_l_1604_);
v___x_1634_ = v_reuseFailAlloc_1641_;
goto v_reusejp_1633_;
}
v_reusejp_1633_:
{
lean_object* v___x_1636_; 
if (v_isShared_1626_ == 0)
{
lean_ctor_set(v___x_1625_, 4, v_l_1604_);
lean_ctor_set(v___x_1625_, 2, v_v_1368_);
lean_ctor_set(v___x_1625_, 1, v_k_1367_);
lean_ctor_set(v___x_1625_, 0, v___x_1518_);
v___x_1636_ = v___x_1625_;
goto v_reusejp_1635_;
}
else
{
lean_object* v_reuseFailAlloc_1640_; 
v_reuseFailAlloc_1640_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1640_, 0, v___x_1518_);
lean_ctor_set(v_reuseFailAlloc_1640_, 1, v_k_1367_);
lean_ctor_set(v_reuseFailAlloc_1640_, 2, v_v_1368_);
lean_ctor_set(v_reuseFailAlloc_1640_, 3, v_l_1604_);
lean_ctor_set(v_reuseFailAlloc_1640_, 4, v_l_1604_);
v___x_1636_ = v_reuseFailAlloc_1640_;
goto v_reusejp_1635_;
}
v_reusejp_1635_:
{
lean_object* v___x_1638_; 
if (v_isShared_1373_ == 0)
{
lean_ctor_set(v___x_1372_, 4, v___x_1636_);
lean_ctor_set(v___x_1372_, 3, v___x_1634_);
lean_ctor_set(v___x_1372_, 2, v_v_1628_);
lean_ctor_set(v___x_1372_, 1, v_k_1627_);
lean_ctor_set(v___x_1372_, 0, v___x_1632_);
v___x_1638_ = v___x_1372_;
goto v_reusejp_1637_;
}
else
{
lean_object* v_reuseFailAlloc_1639_; 
v_reuseFailAlloc_1639_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1639_, 0, v___x_1632_);
lean_ctor_set(v_reuseFailAlloc_1639_, 1, v_k_1627_);
lean_ctor_set(v_reuseFailAlloc_1639_, 2, v_v_1628_);
lean_ctor_set(v_reuseFailAlloc_1639_, 3, v___x_1634_);
lean_ctor_set(v_reuseFailAlloc_1639_, 4, v___x_1636_);
v___x_1638_ = v_reuseFailAlloc_1639_;
goto v_reusejp_1637_;
}
v_reusejp_1637_:
{
return v___x_1638_;
}
}
}
}
}
}
else
{
lean_object* v___x_1650_; lean_object* v___x_1652_; 
v___x_1650_ = lean_unsigned_to_nat(2u);
if (v_isShared_1373_ == 0)
{
lean_ctor_set(v___x_1372_, 4, v_r_1621_);
lean_ctor_set(v___x_1372_, 3, v_impl_1517_);
lean_ctor_set(v___x_1372_, 0, v___x_1650_);
v___x_1652_ = v___x_1372_;
goto v_reusejp_1651_;
}
else
{
lean_object* v_reuseFailAlloc_1653_; 
v_reuseFailAlloc_1653_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1653_, 0, v___x_1650_);
lean_ctor_set(v_reuseFailAlloc_1653_, 1, v_k_1367_);
lean_ctor_set(v_reuseFailAlloc_1653_, 2, v_v_1368_);
lean_ctor_set(v_reuseFailAlloc_1653_, 3, v_impl_1517_);
lean_ctor_set(v_reuseFailAlloc_1653_, 4, v_r_1621_);
v___x_1652_ = v_reuseFailAlloc_1653_;
goto v_reusejp_1651_;
}
v_reusejp_1651_:
{
return v___x_1652_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; 
v___x_1655_ = lean_unsigned_to_nat(1u);
v___x_1656_ = lean_box_uint64(v_k_1363_);
v___x_1657_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1657_, 0, v___x_1655_);
lean_ctor_set(v___x_1657_, 1, v___x_1656_);
lean_ctor_set(v___x_1657_, 2, v_v_1364_);
lean_ctor_set(v___x_1657_, 3, v_t_1365_);
lean_ctor_set(v___x_1657_, 4, v_t_1365_);
return v___x_1657_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Widget_addPanelWidgetLocal___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__2_spec__10___redArg___boxed(lean_object* v_k_1658_, lean_object* v_v_1659_, lean_object* v_t_1660_){
_start:
{
uint64_t v_k_boxed_1661_; lean_object* v_res_1662_; 
v_k_boxed_1661_ = lean_unbox_uint64(v_k_1658_);
lean_dec_ref(v_k_1658_);
v_res_1662_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Widget_addPanelWidgetLocal___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__2_spec__10___redArg(v_k_boxed_1661_, v_v_1659_, v_t_1660_);
return v_res_1662_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_addPanelWidgetLocal___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__2___redArg___lam__0(lean_object* v_wi_1663_, lean_object* v_s_1664_){
_start:
{
uint64_t v_javascriptHash_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; 
v_javascriptHash_1665_ = lean_ctor_get_uint64(v_wi_1663_, sizeof(void*)*2);
v___x_1666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1666_, 0, v_wi_1663_);
v___x_1667_ = lean_box(0);
v___x_1668_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Widget_addPanelWidgetLocal___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__2_spec__9___redArg(v_s_1664_, v_javascriptHash_1665_, v___x_1667_);
v___x_1669_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1669_, 0, v___x_1666_);
lean_ctor_set(v___x_1669_, 1, v___x_1668_);
v___x_1670_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Widget_addPanelWidgetLocal___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__2_spec__10___redArg(v_javascriptHash_1665_, v___x_1669_, v_s_1664_);
return v___x_1670_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_addPanelWidgetLocal___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__2___redArg(lean_object* v_wi_1671_, lean_object* v___y_1672_, lean_object* v___y_1673_){
_start:
{
lean_object* v___f_1675_; lean_object* v___x_1676_; lean_object* v_env_1677_; lean_object* v_nextMacroScope_1678_; lean_object* v_ngen_1679_; lean_object* v_auxDeclNGen_1680_; lean_object* v_traceState_1681_; lean_object* v_messages_1682_; lean_object* v_infoState_1683_; lean_object* v_snapshotTasks_1684_; lean_object* v___x_1686_; uint8_t v_isShared_1687_; uint8_t v_isSharedCheck_1712_; 
v___f_1675_ = lean_alloc_closure((void*)(l_Lean_Widget_addPanelWidgetLocal___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__2___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1675_, 0, v_wi_1671_);
v___x_1676_ = lean_st_ref_take(v___y_1673_);
v_env_1677_ = lean_ctor_get(v___x_1676_, 0);
v_nextMacroScope_1678_ = lean_ctor_get(v___x_1676_, 1);
v_ngen_1679_ = lean_ctor_get(v___x_1676_, 2);
v_auxDeclNGen_1680_ = lean_ctor_get(v___x_1676_, 3);
v_traceState_1681_ = lean_ctor_get(v___x_1676_, 4);
v_messages_1682_ = lean_ctor_get(v___x_1676_, 6);
v_infoState_1683_ = lean_ctor_get(v___x_1676_, 7);
v_snapshotTasks_1684_ = lean_ctor_get(v___x_1676_, 8);
v_isSharedCheck_1712_ = !lean_is_exclusive(v___x_1676_);
if (v_isSharedCheck_1712_ == 0)
{
lean_object* v_unused_1713_; 
v_unused_1713_ = lean_ctor_get(v___x_1676_, 5);
lean_dec(v_unused_1713_);
v___x_1686_ = v___x_1676_;
v_isShared_1687_ = v_isSharedCheck_1712_;
goto v_resetjp_1685_;
}
else
{
lean_inc(v_snapshotTasks_1684_);
lean_inc(v_infoState_1683_);
lean_inc(v_messages_1682_);
lean_inc(v_traceState_1681_);
lean_inc(v_auxDeclNGen_1680_);
lean_inc(v_ngen_1679_);
lean_inc(v_nextMacroScope_1678_);
lean_inc(v_env_1677_);
lean_dec(v___x_1676_);
v___x_1686_ = lean_box(0);
v_isShared_1687_ = v_isSharedCheck_1712_;
goto v_resetjp_1685_;
}
v_resetjp_1685_:
{
lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1692_; 
v___x_1688_ = l___private_Lean_Widget_UserWidget_0__Lean_Widget_panelWidgetsExt;
v___x_1689_ = l_Lean_ScopedEnvExtension_modifyState___redArg(v___x_1688_, v_env_1677_, v___f_1675_);
v___x_1690_ = lean_obj_once(&l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7___redArg___closed__2, &l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7___redArg___closed__2_once, _init_l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7___redArg___closed__2);
if (v_isShared_1687_ == 0)
{
lean_ctor_set(v___x_1686_, 5, v___x_1690_);
lean_ctor_set(v___x_1686_, 0, v___x_1689_);
v___x_1692_ = v___x_1686_;
goto v_reusejp_1691_;
}
else
{
lean_object* v_reuseFailAlloc_1711_; 
v_reuseFailAlloc_1711_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1711_, 0, v___x_1689_);
lean_ctor_set(v_reuseFailAlloc_1711_, 1, v_nextMacroScope_1678_);
lean_ctor_set(v_reuseFailAlloc_1711_, 2, v_ngen_1679_);
lean_ctor_set(v_reuseFailAlloc_1711_, 3, v_auxDeclNGen_1680_);
lean_ctor_set(v_reuseFailAlloc_1711_, 4, v_traceState_1681_);
lean_ctor_set(v_reuseFailAlloc_1711_, 5, v___x_1690_);
lean_ctor_set(v_reuseFailAlloc_1711_, 6, v_messages_1682_);
lean_ctor_set(v_reuseFailAlloc_1711_, 7, v_infoState_1683_);
lean_ctor_set(v_reuseFailAlloc_1711_, 8, v_snapshotTasks_1684_);
v___x_1692_ = v_reuseFailAlloc_1711_;
goto v_reusejp_1691_;
}
v_reusejp_1691_:
{
lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v_mctx_1695_; lean_object* v_zetaDeltaFVarIds_1696_; lean_object* v_postponed_1697_; lean_object* v_diag_1698_; lean_object* v___x_1700_; uint8_t v_isShared_1701_; uint8_t v_isSharedCheck_1709_; 
v___x_1693_ = lean_st_ref_put(v___y_1673_, v___x_1692_);
v___x_1694_ = lean_st_ref_take(v___y_1672_);
v_mctx_1695_ = lean_ctor_get(v___x_1694_, 0);
v_zetaDeltaFVarIds_1696_ = lean_ctor_get(v___x_1694_, 2);
v_postponed_1697_ = lean_ctor_get(v___x_1694_, 3);
v_diag_1698_ = lean_ctor_get(v___x_1694_, 4);
v_isSharedCheck_1709_ = !lean_is_exclusive(v___x_1694_);
if (v_isSharedCheck_1709_ == 0)
{
lean_object* v_unused_1710_; 
v_unused_1710_ = lean_ctor_get(v___x_1694_, 1);
lean_dec(v_unused_1710_);
v___x_1700_ = v___x_1694_;
v_isShared_1701_ = v_isSharedCheck_1709_;
goto v_resetjp_1699_;
}
else
{
lean_inc(v_diag_1698_);
lean_inc(v_postponed_1697_);
lean_inc(v_zetaDeltaFVarIds_1696_);
lean_inc(v_mctx_1695_);
lean_dec(v___x_1694_);
v___x_1700_ = lean_box(0);
v_isShared_1701_ = v_isSharedCheck_1709_;
goto v_resetjp_1699_;
}
v_resetjp_1699_:
{
lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1705_; 
v___x_1702_ = lean_box(0);
v___x_1703_ = lean_obj_once(&l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7___redArg___closed__3, &l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7___redArg___closed__3_once, _init_l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7___redArg___closed__3);
if (v_isShared_1701_ == 0)
{
lean_ctor_set(v___x_1700_, 1, v___x_1703_);
v___x_1705_ = v___x_1700_;
goto v_reusejp_1704_;
}
else
{
lean_object* v_reuseFailAlloc_1708_; 
v_reuseFailAlloc_1708_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1708_, 0, v_mctx_1695_);
lean_ctor_set(v_reuseFailAlloc_1708_, 1, v___x_1703_);
lean_ctor_set(v_reuseFailAlloc_1708_, 2, v_zetaDeltaFVarIds_1696_);
lean_ctor_set(v_reuseFailAlloc_1708_, 3, v_postponed_1697_);
lean_ctor_set(v_reuseFailAlloc_1708_, 4, v_diag_1698_);
v___x_1705_ = v_reuseFailAlloc_1708_;
goto v_reusejp_1704_;
}
v_reusejp_1704_:
{
lean_object* v___x_1706_; lean_object* v___x_1707_; 
v___x_1706_ = lean_st_ref_put(v___y_1672_, v___x_1705_);
v___x_1707_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1707_, 0, v___x_1702_);
return v___x_1707_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_addPanelWidgetLocal___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__2___redArg___boxed(lean_object* v_wi_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_, lean_object* v___y_1717_){
_start:
{
lean_object* v_res_1718_; 
v_res_1718_ = l_Lean_Widget_addPanelWidgetLocal___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__2___redArg(v_wi_1714_, v___y_1715_, v___y_1716_);
lean_dec(v___y_1716_);
lean_dec(v___y_1715_);
return v_res_1718_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Widget_addPanelWidgetGlobal___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__4_spec__13___redArg(lean_object* v_ext_1719_, lean_object* v_b_1720_, uint8_t v_kind_1721_, lean_object* v___y_1722_, lean_object* v___y_1723_, lean_object* v___y_1724_){
_start:
{
lean_object* v_toCold_1726_; lean_object* v_currNamespace_1727_; lean_object* v___x_1728_; lean_object* v_env_1729_; lean_object* v_nextMacroScope_1730_; lean_object* v_ngen_1731_; lean_object* v_auxDeclNGen_1732_; lean_object* v_traceState_1733_; lean_object* v_messages_1734_; lean_object* v_infoState_1735_; lean_object* v_snapshotTasks_1736_; lean_object* v___x_1738_; uint8_t v_isShared_1739_; uint8_t v_isSharedCheck_1763_; 
v_toCold_1726_ = lean_ctor_get(v___y_1723_, 0);
v_currNamespace_1727_ = lean_ctor_get(v_toCold_1726_, 4);
v___x_1728_ = lean_st_ref_take(v___y_1724_);
v_env_1729_ = lean_ctor_get(v___x_1728_, 0);
v_nextMacroScope_1730_ = lean_ctor_get(v___x_1728_, 1);
v_ngen_1731_ = lean_ctor_get(v___x_1728_, 2);
v_auxDeclNGen_1732_ = lean_ctor_get(v___x_1728_, 3);
v_traceState_1733_ = lean_ctor_get(v___x_1728_, 4);
v_messages_1734_ = lean_ctor_get(v___x_1728_, 6);
v_infoState_1735_ = lean_ctor_get(v___x_1728_, 7);
v_snapshotTasks_1736_ = lean_ctor_get(v___x_1728_, 8);
v_isSharedCheck_1763_ = !lean_is_exclusive(v___x_1728_);
if (v_isSharedCheck_1763_ == 0)
{
lean_object* v_unused_1764_; 
v_unused_1764_ = lean_ctor_get(v___x_1728_, 5);
lean_dec(v_unused_1764_);
v___x_1738_ = v___x_1728_;
v_isShared_1739_ = v_isSharedCheck_1763_;
goto v_resetjp_1737_;
}
else
{
lean_inc(v_snapshotTasks_1736_);
lean_inc(v_infoState_1735_);
lean_inc(v_messages_1734_);
lean_inc(v_traceState_1733_);
lean_inc(v_auxDeclNGen_1732_);
lean_inc(v_ngen_1731_);
lean_inc(v_nextMacroScope_1730_);
lean_inc(v_env_1729_);
lean_dec(v___x_1728_);
v___x_1738_ = lean_box(0);
v_isShared_1739_ = v_isSharedCheck_1763_;
goto v_resetjp_1737_;
}
v_resetjp_1737_:
{
lean_object* v___x_1740_; lean_object* v___x_1741_; lean_object* v___x_1743_; 
lean_inc(v_currNamespace_1727_);
v___x_1740_ = l_Lean_ScopedEnvExtension_addCore___redArg(v_env_1729_, v_ext_1719_, v_b_1720_, v_kind_1721_, v_currNamespace_1727_);
v___x_1741_ = lean_obj_once(&l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7___redArg___closed__2, &l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7___redArg___closed__2_once, _init_l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7___redArg___closed__2);
if (v_isShared_1739_ == 0)
{
lean_ctor_set(v___x_1738_, 5, v___x_1741_);
lean_ctor_set(v___x_1738_, 0, v___x_1740_);
v___x_1743_ = v___x_1738_;
goto v_reusejp_1742_;
}
else
{
lean_object* v_reuseFailAlloc_1762_; 
v_reuseFailAlloc_1762_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1762_, 0, v___x_1740_);
lean_ctor_set(v_reuseFailAlloc_1762_, 1, v_nextMacroScope_1730_);
lean_ctor_set(v_reuseFailAlloc_1762_, 2, v_ngen_1731_);
lean_ctor_set(v_reuseFailAlloc_1762_, 3, v_auxDeclNGen_1732_);
lean_ctor_set(v_reuseFailAlloc_1762_, 4, v_traceState_1733_);
lean_ctor_set(v_reuseFailAlloc_1762_, 5, v___x_1741_);
lean_ctor_set(v_reuseFailAlloc_1762_, 6, v_messages_1734_);
lean_ctor_set(v_reuseFailAlloc_1762_, 7, v_infoState_1735_);
lean_ctor_set(v_reuseFailAlloc_1762_, 8, v_snapshotTasks_1736_);
v___x_1743_ = v_reuseFailAlloc_1762_;
goto v_reusejp_1742_;
}
v_reusejp_1742_:
{
lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v_mctx_1746_; lean_object* v_zetaDeltaFVarIds_1747_; lean_object* v_postponed_1748_; lean_object* v_diag_1749_; lean_object* v___x_1751_; uint8_t v_isShared_1752_; uint8_t v_isSharedCheck_1760_; 
v___x_1744_ = lean_st_ref_put(v___y_1724_, v___x_1743_);
v___x_1745_ = lean_st_ref_take(v___y_1722_);
v_mctx_1746_ = lean_ctor_get(v___x_1745_, 0);
v_zetaDeltaFVarIds_1747_ = lean_ctor_get(v___x_1745_, 2);
v_postponed_1748_ = lean_ctor_get(v___x_1745_, 3);
v_diag_1749_ = lean_ctor_get(v___x_1745_, 4);
v_isSharedCheck_1760_ = !lean_is_exclusive(v___x_1745_);
if (v_isSharedCheck_1760_ == 0)
{
lean_object* v_unused_1761_; 
v_unused_1761_ = lean_ctor_get(v___x_1745_, 1);
lean_dec(v_unused_1761_);
v___x_1751_ = v___x_1745_;
v_isShared_1752_ = v_isSharedCheck_1760_;
goto v_resetjp_1750_;
}
else
{
lean_inc(v_diag_1749_);
lean_inc(v_postponed_1748_);
lean_inc(v_zetaDeltaFVarIds_1747_);
lean_inc(v_mctx_1746_);
lean_dec(v___x_1745_);
v___x_1751_ = lean_box(0);
v_isShared_1752_ = v_isSharedCheck_1760_;
goto v_resetjp_1750_;
}
v_resetjp_1750_:
{
lean_object* v___x_1753_; lean_object* v___x_1754_; lean_object* v___x_1756_; 
v___x_1753_ = lean_box(0);
v___x_1754_ = lean_obj_once(&l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7___redArg___closed__3, &l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7___redArg___closed__3_once, _init_l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7___redArg___closed__3);
if (v_isShared_1752_ == 0)
{
lean_ctor_set(v___x_1751_, 1, v___x_1754_);
v___x_1756_ = v___x_1751_;
goto v_reusejp_1755_;
}
else
{
lean_object* v_reuseFailAlloc_1759_; 
v_reuseFailAlloc_1759_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1759_, 0, v_mctx_1746_);
lean_ctor_set(v_reuseFailAlloc_1759_, 1, v___x_1754_);
lean_ctor_set(v_reuseFailAlloc_1759_, 2, v_zetaDeltaFVarIds_1747_);
lean_ctor_set(v_reuseFailAlloc_1759_, 3, v_postponed_1748_);
lean_ctor_set(v_reuseFailAlloc_1759_, 4, v_diag_1749_);
v___x_1756_ = v_reuseFailAlloc_1759_;
goto v_reusejp_1755_;
}
v_reusejp_1755_:
{
lean_object* v___x_1757_; lean_object* v___x_1758_; 
v___x_1757_ = lean_st_ref_put(v___y_1722_, v___x_1756_);
v___x_1758_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1758_, 0, v___x_1753_);
return v___x_1758_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Widget_addPanelWidgetGlobal___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__4_spec__13___redArg___boxed(lean_object* v_ext_1765_, lean_object* v_b_1766_, lean_object* v_kind_1767_, lean_object* v___y_1768_, lean_object* v___y_1769_, lean_object* v___y_1770_, lean_object* v___y_1771_){
_start:
{
uint8_t v_kind_boxed_1772_; lean_object* v_res_1773_; 
v_kind_boxed_1772_ = lean_unbox(v_kind_1767_);
v_res_1773_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Widget_addPanelWidgetGlobal___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__4_spec__13___redArg(v_ext_1765_, v_b_1766_, v_kind_boxed_1772_, v___y_1768_, v___y_1769_, v___y_1770_);
lean_dec(v___y_1770_);
lean_dec_ref(v___y_1769_);
lean_dec(v___y_1768_);
return v_res_1773_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_addPanelWidgetScoped___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__5(uint64_t v_h_1774_, lean_object* v_n_1775_, lean_object* v___y_1776_, lean_object* v___y_1777_, lean_object* v___y_1778_, lean_object* v___y_1779_, lean_object* v___y_1780_, lean_object* v___y_1781_){
_start:
{
lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; uint8_t v___x_1786_; lean_object* v___x_1787_; 
v___x_1783_ = l___private_Lean_Widget_UserWidget_0__Lean_Widget_panelWidgetsExt;
v___x_1784_ = lean_box_uint64(v_h_1774_);
v___x_1785_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1785_, 0, v___x_1784_);
lean_ctor_set(v___x_1785_, 1, v_n_1775_);
v___x_1786_ = 2;
v___x_1787_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Widget_addPanelWidgetGlobal___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__4_spec__13___redArg(v___x_1783_, v___x_1785_, v___x_1786_, v___y_1779_, v___y_1780_, v___y_1781_);
return v___x_1787_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_addPanelWidgetScoped___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__5___boxed(lean_object* v_h_1788_, lean_object* v_n_1789_, lean_object* v___y_1790_, lean_object* v___y_1791_, lean_object* v___y_1792_, lean_object* v___y_1793_, lean_object* v___y_1794_, lean_object* v___y_1795_, lean_object* v___y_1796_){
_start:
{
uint64_t v_h_boxed_1797_; lean_object* v_res_1798_; 
v_h_boxed_1797_ = lean_unbox_uint64(v_h_1788_);
lean_dec_ref(v_h_1788_);
v_res_1798_ = l_Lean_Widget_addPanelWidgetScoped___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__5(v_h_boxed_1797_, v_n_1789_, v___y_1790_, v___y_1791_, v___y_1792_, v___y_1793_, v___y_1794_, v___y_1795_);
lean_dec(v___y_1795_);
lean_dec_ref(v___y_1794_);
lean_dec(v___y_1793_);
lean_dec_ref(v___y_1792_);
lean_dec(v___y_1791_);
lean_dec_ref(v___y_1790_);
return v_res_1798_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_addPanelWidgetGlobal___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__4(uint64_t v_h_1799_, lean_object* v_n_1800_, lean_object* v___y_1801_, lean_object* v___y_1802_, lean_object* v___y_1803_, lean_object* v___y_1804_, lean_object* v___y_1805_, lean_object* v___y_1806_){
_start:
{
lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; uint8_t v___x_1811_; lean_object* v___x_1812_; 
v___x_1808_ = l___private_Lean_Widget_UserWidget_0__Lean_Widget_panelWidgetsExt;
v___x_1809_ = lean_box_uint64(v_h_1799_);
v___x_1810_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1810_, 0, v___x_1809_);
lean_ctor_set(v___x_1810_, 1, v_n_1800_);
v___x_1811_ = 0;
v___x_1812_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Widget_addPanelWidgetGlobal___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__4_spec__13___redArg(v___x_1808_, v___x_1810_, v___x_1811_, v___y_1804_, v___y_1805_, v___y_1806_);
return v___x_1812_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_addPanelWidgetGlobal___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__4___boxed(lean_object* v_h_1813_, lean_object* v_n_1814_, lean_object* v___y_1815_, lean_object* v___y_1816_, lean_object* v___y_1817_, lean_object* v___y_1818_, lean_object* v___y_1819_, lean_object* v___y_1820_, lean_object* v___y_1821_){
_start:
{
uint64_t v_h_boxed_1822_; lean_object* v_res_1823_; 
v_h_boxed_1822_ = lean_unbox_uint64(v_h_1813_);
lean_dec_ref(v_h_1813_);
v_res_1823_ = l_Lean_Widget_addPanelWidgetGlobal___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__4(v_h_boxed_1822_, v_n_1814_, v___y_1815_, v___y_1816_, v___y_1817_, v___y_1818_, v___y_1819_, v___y_1820_);
lean_dec(v___y_1820_);
lean_dec_ref(v___y_1819_);
lean_dec(v___y_1818_);
lean_dec_ref(v___y_1817_);
lean_dec(v___y_1816_);
lean_dec_ref(v___y_1815_);
return v_res_1823_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1___redArg___lam__1(lean_object* v_env_1824_, lean_object* v_declName_1825_, lean_object* v___y_1826_, lean_object* v___y_1827_){
_start:
{
uint8_t v___x_1828_; lean_object* v_env_1829_; lean_object* v___x_1830_; uint8_t v___x_1831_; uint8_t v___x_1832_; 
v___x_1828_ = 0;
v_env_1829_ = l_Lean_Environment_setExporting(v_env_1824_, v___x_1828_);
lean_inc(v_declName_1825_);
v___x_1830_ = l_Lean_mkPrivateName(v_env_1829_, v_declName_1825_);
v___x_1831_ = 1;
lean_inc_ref(v_env_1829_);
v___x_1832_ = l_Lean_Environment_contains(v_env_1829_, v___x_1830_, v___x_1831_);
if (v___x_1832_ == 0)
{
lean_object* v___x_1833_; uint8_t v___x_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; 
v___x_1833_ = l_Lean_privateToUserName(v_declName_1825_);
v___x_1834_ = l_Lean_Environment_contains(v_env_1829_, v___x_1833_, v___x_1831_);
v___x_1835_ = lean_box(v___x_1834_);
v___x_1836_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1836_, 0, v___x_1835_);
lean_ctor_set(v___x_1836_, 1, v___y_1827_);
return v___x_1836_;
}
else
{
lean_object* v___x_1837_; lean_object* v___x_1838_; 
lean_dec_ref(v_env_1829_);
lean_dec(v_declName_1825_);
v___x_1837_ = lean_box(v___x_1832_);
v___x_1838_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1838_, 0, v___x_1837_);
lean_ctor_set(v___x_1838_, 1, v___y_1827_);
return v___x_1838_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1___redArg___lam__1___boxed(lean_object* v_env_1839_, lean_object* v_declName_1840_, lean_object* v___y_1841_, lean_object* v___y_1842_){
_start:
{
lean_object* v_res_1843_; 
v_res_1843_ = l_Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1___redArg___lam__1(v_env_1839_, v_declName_1840_, v___y_1841_, v___y_1842_);
lean_dec_ref(v___y_1841_);
return v_res_1843_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__16(lean_object* v_msgData_1844_, lean_object* v___y_1845_, lean_object* v___y_1846_, lean_object* v___y_1847_, lean_object* v___y_1848_){
_start:
{
lean_object* v___x_1850_; lean_object* v_env_1851_; lean_object* v___x_1852_; lean_object* v_toCold_1853_; lean_object* v_mctx_1854_; lean_object* v_lctx_1855_; lean_object* v_options_1856_; lean_object* v___x_1857_; lean_object* v___x_1858_; lean_object* v___x_1859_; 
v___x_1850_ = lean_st_ref_get(v___y_1848_);
v_env_1851_ = lean_ctor_get(v___x_1850_, 0);
lean_inc_ref(v_env_1851_);
lean_dec(v___x_1850_);
v___x_1852_ = lean_st_ref_get(v___y_1846_);
v_toCold_1853_ = lean_ctor_get(v___y_1847_, 0);
v_mctx_1854_ = lean_ctor_get(v___x_1852_, 0);
lean_inc_ref(v_mctx_1854_);
lean_dec(v___x_1852_);
v_lctx_1855_ = lean_ctor_get(v___y_1845_, 2);
v_options_1856_ = lean_ctor_get(v_toCold_1853_, 2);
lean_inc_ref(v_options_1856_);
lean_inc_ref(v_lctx_1855_);
v___x_1857_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1857_, 0, v_env_1851_);
lean_ctor_set(v___x_1857_, 1, v_mctx_1854_);
lean_ctor_set(v___x_1857_, 2, v_lctx_1855_);
lean_ctor_set(v___x_1857_, 3, v_options_1856_);
v___x_1858_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1858_, 0, v___x_1857_);
lean_ctor_set(v___x_1858_, 1, v_msgData_1844_);
v___x_1859_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1859_, 0, v___x_1858_);
return v___x_1859_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__16___boxed(lean_object* v_msgData_1860_, lean_object* v___y_1861_, lean_object* v___y_1862_, lean_object* v___y_1863_, lean_object* v___y_1864_, lean_object* v___y_1865_){
_start:
{
lean_object* v_res_1866_; 
v_res_1866_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__16(v_msgData_1860_, v___y_1861_, v___y_1862_, v___y_1863_, v___y_1864_);
lean_dec(v___y_1864_);
lean_dec_ref(v___y_1863_);
lean_dec(v___y_1862_);
lean_dec_ref(v___y_1861_);
return v_res_1866_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_1867_; double v___x_1868_; 
v___x_1867_ = lean_unsigned_to_nat(0u);
v___x_1868_ = lean_float_of_nat(v___x_1867_);
return v___x_1868_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__1___redArg(lean_object* v_cls_1871_, lean_object* v_msg_1872_, lean_object* v___y_1873_, lean_object* v___y_1874_, lean_object* v___y_1875_, lean_object* v___y_1876_){
_start:
{
lean_object* v_ref_1878_; lean_object* v___x_1879_; lean_object* v_a_1880_; lean_object* v___x_1882_; uint8_t v_isShared_1883_; uint8_t v_isSharedCheck_1924_; 
v_ref_1878_ = lean_ctor_get(v___y_1875_, 2);
v___x_1879_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__16(v_msg_1872_, v___y_1873_, v___y_1874_, v___y_1875_, v___y_1876_);
v_a_1880_ = lean_ctor_get(v___x_1879_, 0);
v_isSharedCheck_1924_ = !lean_is_exclusive(v___x_1879_);
if (v_isSharedCheck_1924_ == 0)
{
v___x_1882_ = v___x_1879_;
v_isShared_1883_ = v_isSharedCheck_1924_;
goto v_resetjp_1881_;
}
else
{
lean_inc(v_a_1880_);
lean_dec(v___x_1879_);
v___x_1882_ = lean_box(0);
v_isShared_1883_ = v_isSharedCheck_1924_;
goto v_resetjp_1881_;
}
v_resetjp_1881_:
{
lean_object* v___x_1884_; lean_object* v_traceState_1885_; lean_object* v_env_1886_; lean_object* v_nextMacroScope_1887_; lean_object* v_ngen_1888_; lean_object* v_auxDeclNGen_1889_; lean_object* v_cache_1890_; lean_object* v_messages_1891_; lean_object* v_infoState_1892_; lean_object* v_snapshotTasks_1893_; lean_object* v___x_1895_; uint8_t v_isShared_1896_; uint8_t v_isSharedCheck_1923_; 
v___x_1884_ = lean_st_ref_take(v___y_1876_);
v_traceState_1885_ = lean_ctor_get(v___x_1884_, 4);
v_env_1886_ = lean_ctor_get(v___x_1884_, 0);
v_nextMacroScope_1887_ = lean_ctor_get(v___x_1884_, 1);
v_ngen_1888_ = lean_ctor_get(v___x_1884_, 2);
v_auxDeclNGen_1889_ = lean_ctor_get(v___x_1884_, 3);
v_cache_1890_ = lean_ctor_get(v___x_1884_, 5);
v_messages_1891_ = lean_ctor_get(v___x_1884_, 6);
v_infoState_1892_ = lean_ctor_get(v___x_1884_, 7);
v_snapshotTasks_1893_ = lean_ctor_get(v___x_1884_, 8);
v_isSharedCheck_1923_ = !lean_is_exclusive(v___x_1884_);
if (v_isSharedCheck_1923_ == 0)
{
v___x_1895_ = v___x_1884_;
v_isShared_1896_ = v_isSharedCheck_1923_;
goto v_resetjp_1894_;
}
else
{
lean_inc(v_snapshotTasks_1893_);
lean_inc(v_infoState_1892_);
lean_inc(v_messages_1891_);
lean_inc(v_cache_1890_);
lean_inc(v_traceState_1885_);
lean_inc(v_auxDeclNGen_1889_);
lean_inc(v_ngen_1888_);
lean_inc(v_nextMacroScope_1887_);
lean_inc(v_env_1886_);
lean_dec(v___x_1884_);
v___x_1895_ = lean_box(0);
v_isShared_1896_ = v_isSharedCheck_1923_;
goto v_resetjp_1894_;
}
v_resetjp_1894_:
{
uint64_t v_tid_1897_; lean_object* v_traces_1898_; lean_object* v___x_1900_; uint8_t v_isShared_1901_; uint8_t v_isSharedCheck_1922_; 
v_tid_1897_ = lean_ctor_get_uint64(v_traceState_1885_, sizeof(void*)*1);
v_traces_1898_ = lean_ctor_get(v_traceState_1885_, 0);
v_isSharedCheck_1922_ = !lean_is_exclusive(v_traceState_1885_);
if (v_isSharedCheck_1922_ == 0)
{
v___x_1900_ = v_traceState_1885_;
v_isShared_1901_ = v_isSharedCheck_1922_;
goto v_resetjp_1899_;
}
else
{
lean_inc(v_traces_1898_);
lean_dec(v_traceState_1885_);
v___x_1900_ = lean_box(0);
v_isShared_1901_ = v_isSharedCheck_1922_;
goto v_resetjp_1899_;
}
v_resetjp_1899_:
{
lean_object* v___x_1902_; lean_object* v___x_1903_; double v___x_1904_; uint8_t v___x_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; lean_object* v___x_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; lean_object* v___x_1913_; 
v___x_1902_ = lean_box(0);
v___x_1903_ = lean_box(0);
v___x_1904_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__1___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__1___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__1___redArg___closed__0);
v___x_1905_ = 0;
v___x_1906_ = ((lean_object*)(l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__34));
v___x_1907_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1907_, 0, v_cls_1871_);
lean_ctor_set(v___x_1907_, 1, v___x_1903_);
lean_ctor_set(v___x_1907_, 2, v___x_1906_);
lean_ctor_set_float(v___x_1907_, sizeof(void*)*3, v___x_1904_);
lean_ctor_set_float(v___x_1907_, sizeof(void*)*3 + 8, v___x_1904_);
lean_ctor_set_uint8(v___x_1907_, sizeof(void*)*3 + 16, v___x_1905_);
v___x_1908_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__1___redArg___closed__1));
v___x_1909_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1909_, 0, v___x_1907_);
lean_ctor_set(v___x_1909_, 1, v_a_1880_);
lean_ctor_set(v___x_1909_, 2, v___x_1908_);
lean_inc(v_ref_1878_);
v___x_1910_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1910_, 0, v_ref_1878_);
lean_ctor_set(v___x_1910_, 1, v___x_1909_);
v___x_1911_ = l_Lean_PersistentArray_push___redArg(v_traces_1898_, v___x_1910_);
if (v_isShared_1901_ == 0)
{
lean_ctor_set(v___x_1900_, 0, v___x_1911_);
v___x_1913_ = v___x_1900_;
goto v_reusejp_1912_;
}
else
{
lean_object* v_reuseFailAlloc_1921_; 
v_reuseFailAlloc_1921_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1921_, 0, v___x_1911_);
lean_ctor_set_uint64(v_reuseFailAlloc_1921_, sizeof(void*)*1, v_tid_1897_);
v___x_1913_ = v_reuseFailAlloc_1921_;
goto v_reusejp_1912_;
}
v_reusejp_1912_:
{
lean_object* v___x_1915_; 
if (v_isShared_1896_ == 0)
{
lean_ctor_set(v___x_1895_, 4, v___x_1913_);
v___x_1915_ = v___x_1895_;
goto v_reusejp_1914_;
}
else
{
lean_object* v_reuseFailAlloc_1920_; 
v_reuseFailAlloc_1920_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1920_, 0, v_env_1886_);
lean_ctor_set(v_reuseFailAlloc_1920_, 1, v_nextMacroScope_1887_);
lean_ctor_set(v_reuseFailAlloc_1920_, 2, v_ngen_1888_);
lean_ctor_set(v_reuseFailAlloc_1920_, 3, v_auxDeclNGen_1889_);
lean_ctor_set(v_reuseFailAlloc_1920_, 4, v___x_1913_);
lean_ctor_set(v_reuseFailAlloc_1920_, 5, v_cache_1890_);
lean_ctor_set(v_reuseFailAlloc_1920_, 6, v_messages_1891_);
lean_ctor_set(v_reuseFailAlloc_1920_, 7, v_infoState_1892_);
lean_ctor_set(v_reuseFailAlloc_1920_, 8, v_snapshotTasks_1893_);
v___x_1915_ = v_reuseFailAlloc_1920_;
goto v_reusejp_1914_;
}
v_reusejp_1914_:
{
lean_object* v___x_1916_; lean_object* v___x_1918_; 
v___x_1916_ = lean_st_ref_put(v___y_1876_, v___x_1915_);
if (v_isShared_1883_ == 0)
{
lean_ctor_set(v___x_1882_, 0, v___x_1902_);
v___x_1918_ = v___x_1882_;
goto v_reusejp_1917_;
}
else
{
lean_object* v_reuseFailAlloc_1919_; 
v_reuseFailAlloc_1919_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1919_, 0, v___x_1902_);
v___x_1918_ = v_reuseFailAlloc_1919_;
goto v_reusejp_1917_;
}
v_reusejp_1917_:
{
return v___x_1918_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__1___redArg___boxed(lean_object* v_cls_1925_, lean_object* v_msg_1926_, lean_object* v___y_1927_, lean_object* v___y_1928_, lean_object* v___y_1929_, lean_object* v___y_1930_, lean_object* v___y_1931_){
_start:
{
lean_object* v_res_1932_; 
v_res_1932_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__1___redArg(v_cls_1925_, v_msg_1926_, v___y_1927_, v___y_1928_, v___y_1929_, v___y_1930_);
lean_dec(v___y_1930_);
lean_dec_ref(v___y_1929_);
lean_dec(v___y_1928_);
lean_dec_ref(v___y_1927_);
return v_res_1932_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__5(lean_object* v_as_1936_, lean_object* v___y_1937_, lean_object* v___y_1938_, lean_object* v___y_1939_, lean_object* v___y_1940_, lean_object* v___y_1941_, lean_object* v___y_1942_){
_start:
{
if (lean_obj_tag(v_as_1936_) == 0)
{
lean_object* v___x_1944_; lean_object* v___x_1945_; 
v___x_1944_ = lean_box(0);
v___x_1945_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1945_, 0, v___x_1944_);
return v___x_1945_;
}
else
{
lean_object* v_toCold_1946_; lean_object* v_options_1947_; uint8_t v_hasTrace_1948_; 
v_toCold_1946_ = lean_ctor_get(v___y_1941_, 0);
v_options_1947_ = lean_ctor_get(v_toCold_1946_, 2);
v_hasTrace_1948_ = lean_ctor_get_uint8(v_options_1947_, sizeof(void*)*1);
if (v_hasTrace_1948_ == 0)
{
lean_object* v_tail_1949_; 
v_tail_1949_ = lean_ctor_get(v_as_1936_, 1);
lean_inc(v_tail_1949_);
lean_dec_ref_known(v_as_1936_, 2);
v_as_1936_ = v_tail_1949_;
goto _start;
}
else
{
lean_object* v_head_1951_; lean_object* v_tail_1952_; lean_object* v_fst_1953_; lean_object* v_snd_1954_; lean_object* v_inheritedTraceOptions_1955_; lean_object* v___x_1956_; lean_object* v___x_1957_; uint8_t v___x_1958_; 
v_head_1951_ = lean_ctor_get(v_as_1936_, 0);
lean_inc(v_head_1951_);
v_tail_1952_ = lean_ctor_get(v_as_1936_, 1);
lean_inc(v_tail_1952_);
lean_dec_ref_known(v_as_1936_, 2);
v_fst_1953_ = lean_ctor_get(v_head_1951_, 0);
lean_inc_n(v_fst_1953_, 2);
v_snd_1954_ = lean_ctor_get(v_head_1951_, 1);
lean_inc(v_snd_1954_);
lean_dec(v_head_1951_);
v_inheritedTraceOptions_1955_ = lean_ctor_get(v_toCold_1946_, 11);
v___x_1956_ = ((lean_object*)(l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__5___closed__1));
v___x_1957_ = l_Lean_Name_append(v___x_1956_, v_fst_1953_);
v___x_1958_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1955_, v_options_1947_, v___x_1957_);
lean_dec(v___x_1957_);
if (v___x_1958_ == 0)
{
lean_dec(v_snd_1954_);
lean_dec(v_fst_1953_);
v_as_1936_ = v_tail_1952_;
goto _start;
}
else
{
lean_object* v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; 
v___x_1960_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1960_, 0, v_snd_1954_);
v___x_1961_ = l_Lean_MessageData_ofFormat(v___x_1960_);
v___x_1962_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__1___redArg(v_fst_1953_, v___x_1961_, v___y_1939_, v___y_1940_, v___y_1941_, v___y_1942_);
if (lean_obj_tag(v___x_1962_) == 0)
{
lean_dec_ref_known(v___x_1962_, 1);
v_as_1936_ = v_tail_1952_;
goto _start;
}
else
{
lean_dec(v_tail_1952_);
return v___x_1962_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__5___boxed(lean_object* v_as_1964_, lean_object* v___y_1965_, lean_object* v___y_1966_, lean_object* v___y_1967_, lean_object* v___y_1968_, lean_object* v___y_1969_, lean_object* v___y_1970_, lean_object* v___y_1971_){
_start:
{
lean_object* v_res_1972_; 
v_res_1972_ = l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__5(v_as_1964_, v___y_1965_, v___y_1966_, v___y_1967_, v___y_1968_, v___y_1969_, v___y_1970_);
lean_dec(v___y_1970_);
lean_dec_ref(v___y_1969_);
lean_dec(v___y_1968_);
lean_dec_ref(v___y_1967_);
lean_dec(v___y_1966_);
lean_dec_ref(v___y_1965_);
return v_res_1972_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1___redArg___lam__2(lean_object* v_env_1973_, lean_object* v_currNamespace_1974_, lean_object* v_openDecls_1975_, lean_object* v_n_1976_, lean_object* v___y_1977_, lean_object* v___y_1978_){
_start:
{
lean_object* v___x_1979_; lean_object* v___x_1980_; 
v___x_1979_ = l_Lean_ResolveName_resolveNamespace(v_env_1973_, v_currNamespace_1974_, v_openDecls_1975_, v_n_1976_);
v___x_1980_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1980_, 0, v___x_1979_);
lean_ctor_set(v___x_1980_, 1, v___y_1978_);
return v___x_1980_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1___redArg___lam__2___boxed(lean_object* v_env_1981_, lean_object* v_currNamespace_1982_, lean_object* v_openDecls_1983_, lean_object* v_n_1984_, lean_object* v___y_1985_, lean_object* v___y_1986_){
_start:
{
lean_object* v_res_1987_; 
v_res_1987_ = l_Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1___redArg___lam__2(v_env_1981_, v_currNamespace_1982_, v_openDecls_1983_, v_n_1984_, v___y_1985_, v___y_1986_);
lean_dec_ref(v___y_1985_);
return v_res_1987_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__17_spec__21(lean_object* v_opts_1988_, lean_object* v_opt_1989_){
_start:
{
lean_object* v_name_1990_; lean_object* v_defValue_1991_; lean_object* v_map_1992_; lean_object* v___x_1993_; 
v_name_1990_ = lean_ctor_get(v_opt_1989_, 0);
v_defValue_1991_ = lean_ctor_get(v_opt_1989_, 1);
v_map_1992_ = lean_ctor_get(v_opts_1988_, 0);
v___x_1993_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1992_, v_name_1990_);
if (lean_obj_tag(v___x_1993_) == 0)
{
uint8_t v___x_1994_; 
v___x_1994_ = lean_unbox(v_defValue_1991_);
return v___x_1994_;
}
else
{
lean_object* v_val_1995_; 
v_val_1995_ = lean_ctor_get(v___x_1993_, 0);
lean_inc(v_val_1995_);
lean_dec_ref_known(v___x_1993_, 1);
if (lean_obj_tag(v_val_1995_) == 1)
{
uint8_t v_v_1996_; 
v_v_1996_ = lean_ctor_get_uint8(v_val_1995_, 0);
lean_dec_ref_known(v_val_1995_, 0);
return v_v_1996_;
}
else
{
uint8_t v___x_1997_; 
lean_dec(v_val_1995_);
v___x_1997_ = lean_unbox(v_defValue_1991_);
return v___x_1997_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__17_spec__21___boxed(lean_object* v_opts_1998_, lean_object* v_opt_1999_){
_start:
{
uint8_t v_res_2000_; lean_object* v_r_2001_; 
v_res_2000_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__17_spec__21(v_opts_1998_, v_opt_1999_);
lean_dec_ref(v_opt_1999_);
lean_dec_ref(v_opts_1998_);
v_r_2001_ = lean_box(v_res_2000_);
return v_r_2001_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__17_spec__22___closed__0(void){
_start:
{
lean_object* v___x_2002_; lean_object* v___x_2003_; 
v___x_2002_ = lean_box(1);
v___x_2003_ = l_Lean_MessageData_ofFormat(v___x_2002_);
return v___x_2003_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__17_spec__22___closed__3(void){
_start:
{
lean_object* v___x_2007_; lean_object* v___x_2008_; 
v___x_2007_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__17_spec__22___closed__2));
v___x_2008_ = l_Lean_MessageData_ofFormat(v___x_2007_);
return v___x_2008_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__17_spec__22(lean_object* v_x_2009_, lean_object* v_x_2010_){
_start:
{
if (lean_obj_tag(v_x_2010_) == 0)
{
return v_x_2009_;
}
else
{
lean_object* v_head_2011_; lean_object* v_tail_2012_; lean_object* v___x_2014_; uint8_t v_isShared_2015_; uint8_t v_isSharedCheck_2034_; 
v_head_2011_ = lean_ctor_get(v_x_2010_, 0);
v_tail_2012_ = lean_ctor_get(v_x_2010_, 1);
v_isSharedCheck_2034_ = !lean_is_exclusive(v_x_2010_);
if (v_isSharedCheck_2034_ == 0)
{
v___x_2014_ = v_x_2010_;
v_isShared_2015_ = v_isSharedCheck_2034_;
goto v_resetjp_2013_;
}
else
{
lean_inc(v_tail_2012_);
lean_inc(v_head_2011_);
lean_dec(v_x_2010_);
v___x_2014_ = lean_box(0);
v_isShared_2015_ = v_isSharedCheck_2034_;
goto v_resetjp_2013_;
}
v_resetjp_2013_:
{
lean_object* v_before_2016_; lean_object* v___x_2018_; uint8_t v_isShared_2019_; uint8_t v_isSharedCheck_2032_; 
v_before_2016_ = lean_ctor_get(v_head_2011_, 0);
v_isSharedCheck_2032_ = !lean_is_exclusive(v_head_2011_);
if (v_isSharedCheck_2032_ == 0)
{
lean_object* v_unused_2033_; 
v_unused_2033_ = lean_ctor_get(v_head_2011_, 1);
lean_dec(v_unused_2033_);
v___x_2018_ = v_head_2011_;
v_isShared_2019_ = v_isSharedCheck_2032_;
goto v_resetjp_2017_;
}
else
{
lean_inc(v_before_2016_);
lean_dec(v_head_2011_);
v___x_2018_ = lean_box(0);
v_isShared_2019_ = v_isSharedCheck_2032_;
goto v_resetjp_2017_;
}
v_resetjp_2017_:
{
lean_object* v___x_2020_; lean_object* v___x_2022_; 
v___x_2020_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__17_spec__22___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__17_spec__22___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__17_spec__22___closed__0);
if (v_isShared_2019_ == 0)
{
lean_ctor_set_tag(v___x_2018_, 7);
lean_ctor_set(v___x_2018_, 1, v___x_2020_);
lean_ctor_set(v___x_2018_, 0, v_x_2009_);
v___x_2022_ = v___x_2018_;
goto v_reusejp_2021_;
}
else
{
lean_object* v_reuseFailAlloc_2031_; 
v_reuseFailAlloc_2031_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2031_, 0, v_x_2009_);
lean_ctor_set(v_reuseFailAlloc_2031_, 1, v___x_2020_);
v___x_2022_ = v_reuseFailAlloc_2031_;
goto v_reusejp_2021_;
}
v_reusejp_2021_:
{
lean_object* v___x_2023_; lean_object* v___x_2025_; 
v___x_2023_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__17_spec__22___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__17_spec__22___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__17_spec__22___closed__3);
if (v_isShared_2015_ == 0)
{
lean_ctor_set_tag(v___x_2014_, 7);
lean_ctor_set(v___x_2014_, 1, v___x_2023_);
lean_ctor_set(v___x_2014_, 0, v___x_2022_);
v___x_2025_ = v___x_2014_;
goto v_reusejp_2024_;
}
else
{
lean_object* v_reuseFailAlloc_2030_; 
v_reuseFailAlloc_2030_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2030_, 0, v___x_2022_);
lean_ctor_set(v_reuseFailAlloc_2030_, 1, v___x_2023_);
v___x_2025_ = v_reuseFailAlloc_2030_;
goto v_reusejp_2024_;
}
v_reusejp_2024_:
{
lean_object* v___x_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; 
v___x_2026_ = l_Lean_MessageData_ofSyntax(v_before_2016_);
v___x_2027_ = l_Lean_indentD(v___x_2026_);
v___x_2028_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2028_, 0, v___x_2025_);
lean_ctor_set(v___x_2028_, 1, v___x_2027_);
v_x_2009_ = v___x_2028_;
v_x_2010_ = v_tail_2012_;
goto _start;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__17___redArg___closed__2(void){
_start:
{
lean_object* v___x_2038_; lean_object* v___x_2039_; 
v___x_2038_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__17___redArg___closed__1));
v___x_2039_ = l_Lean_MessageData_ofFormat(v___x_2038_);
return v___x_2039_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__17___redArg(lean_object* v_msgData_2040_, lean_object* v_macroStack_2041_, lean_object* v___y_2042_){
_start:
{
lean_object* v_toCold_2044_; lean_object* v_options_2045_; lean_object* v___x_2046_; uint8_t v___x_2047_; 
v_toCold_2044_ = lean_ctor_get(v___y_2042_, 0);
v_options_2045_ = lean_ctor_get(v_toCold_2044_, 2);
v___x_2046_ = l_Lean_Elab_pp_macroStack;
v___x_2047_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__17_spec__21(v_options_2045_, v___x_2046_);
if (v___x_2047_ == 0)
{
lean_object* v___x_2048_; 
lean_dec(v_macroStack_2041_);
v___x_2048_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2048_, 0, v_msgData_2040_);
return v___x_2048_;
}
else
{
if (lean_obj_tag(v_macroStack_2041_) == 0)
{
lean_object* v___x_2049_; 
v___x_2049_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2049_, 0, v_msgData_2040_);
return v___x_2049_;
}
else
{
lean_object* v_head_2050_; lean_object* v_after_2051_; lean_object* v___x_2053_; uint8_t v_isShared_2054_; uint8_t v_isSharedCheck_2066_; 
v_head_2050_ = lean_ctor_get(v_macroStack_2041_, 0);
lean_inc(v_head_2050_);
v_after_2051_ = lean_ctor_get(v_head_2050_, 1);
v_isSharedCheck_2066_ = !lean_is_exclusive(v_head_2050_);
if (v_isSharedCheck_2066_ == 0)
{
lean_object* v_unused_2067_; 
v_unused_2067_ = lean_ctor_get(v_head_2050_, 0);
lean_dec(v_unused_2067_);
v___x_2053_ = v_head_2050_;
v_isShared_2054_ = v_isSharedCheck_2066_;
goto v_resetjp_2052_;
}
else
{
lean_inc(v_after_2051_);
lean_dec(v_head_2050_);
v___x_2053_ = lean_box(0);
v_isShared_2054_ = v_isSharedCheck_2066_;
goto v_resetjp_2052_;
}
v_resetjp_2052_:
{
lean_object* v___x_2055_; lean_object* v___x_2057_; 
v___x_2055_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__17_spec__22___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__17_spec__22___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__17_spec__22___closed__0);
if (v_isShared_2054_ == 0)
{
lean_ctor_set_tag(v___x_2053_, 7);
lean_ctor_set(v___x_2053_, 1, v___x_2055_);
lean_ctor_set(v___x_2053_, 0, v_msgData_2040_);
v___x_2057_ = v___x_2053_;
goto v_reusejp_2056_;
}
else
{
lean_object* v_reuseFailAlloc_2065_; 
v_reuseFailAlloc_2065_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2065_, 0, v_msgData_2040_);
lean_ctor_set(v_reuseFailAlloc_2065_, 1, v___x_2055_);
v___x_2057_ = v_reuseFailAlloc_2065_;
goto v_reusejp_2056_;
}
v_reusejp_2056_:
{
lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v_msgData_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; 
v___x_2058_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__17___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__17___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__17___redArg___closed__2);
v___x_2059_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2059_, 0, v___x_2057_);
lean_ctor_set(v___x_2059_, 1, v___x_2058_);
v___x_2060_ = l_Lean_MessageData_ofSyntax(v_after_2051_);
v___x_2061_ = l_Lean_indentD(v___x_2060_);
v_msgData_2062_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_2062_, 0, v___x_2059_);
lean_ctor_set(v_msgData_2062_, 1, v___x_2061_);
v___x_2063_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__17_spec__22(v_msgData_2062_, v_macroStack_2041_);
v___x_2064_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2064_, 0, v___x_2063_);
return v___x_2064_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__17___redArg___boxed(lean_object* v_msgData_2068_, lean_object* v_macroStack_2069_, lean_object* v___y_2070_, lean_object* v___y_2071_){
_start:
{
lean_object* v_res_2072_; 
v_res_2072_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__17___redArg(v_msgData_2068_, v_macroStack_2069_, v___y_2070_);
lean_dec_ref(v___y_2070_);
return v_res_2072_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6___redArg(lean_object* v_msg_2073_, lean_object* v___y_2074_, lean_object* v___y_2075_, lean_object* v___y_2076_, lean_object* v___y_2077_, lean_object* v___y_2078_, lean_object* v___y_2079_){
_start:
{
lean_object* v_ref_2081_; lean_object* v_macroStack_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v_a_2085_; lean_object* v___x_2086_; lean_object* v_a_2087_; lean_object* v___x_2089_; uint8_t v_isShared_2090_; uint8_t v_isSharedCheck_2095_; 
v_ref_2081_ = lean_ctor_get(v___y_2078_, 2);
v_macroStack_2082_ = lean_ctor_get(v___y_2074_, 1);
v___x_2083_ = l_Lean_Elab_getBetterRef(v_ref_2081_, v_macroStack_2082_);
v___x_2084_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__16(v_msg_2073_, v___y_2076_, v___y_2077_, v___y_2078_, v___y_2079_);
v_a_2085_ = lean_ctor_get(v___x_2084_, 0);
lean_inc(v_a_2085_);
lean_dec_ref(v___x_2084_);
lean_inc(v_macroStack_2082_);
v___x_2086_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__17___redArg(v_a_2085_, v_macroStack_2082_, v___y_2078_);
v_a_2087_ = lean_ctor_get(v___x_2086_, 0);
v_isSharedCheck_2095_ = !lean_is_exclusive(v___x_2086_);
if (v_isSharedCheck_2095_ == 0)
{
v___x_2089_ = v___x_2086_;
v_isShared_2090_ = v_isSharedCheck_2095_;
goto v_resetjp_2088_;
}
else
{
lean_inc(v_a_2087_);
lean_dec(v___x_2086_);
v___x_2089_ = lean_box(0);
v_isShared_2090_ = v_isSharedCheck_2095_;
goto v_resetjp_2088_;
}
v_resetjp_2088_:
{
lean_object* v___x_2091_; lean_object* v___x_2093_; 
v___x_2091_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2091_, 0, v___x_2083_);
lean_ctor_set(v___x_2091_, 1, v_a_2087_);
if (v_isShared_2090_ == 0)
{
lean_ctor_set_tag(v___x_2089_, 1);
lean_ctor_set(v___x_2089_, 0, v___x_2091_);
v___x_2093_ = v___x_2089_;
goto v_reusejp_2092_;
}
else
{
lean_object* v_reuseFailAlloc_2094_; 
v_reuseFailAlloc_2094_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2094_, 0, v___x_2091_);
v___x_2093_ = v_reuseFailAlloc_2094_;
goto v_reusejp_2092_;
}
v_reusejp_2092_:
{
return v___x_2093_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6___redArg___boxed(lean_object* v_msg_2096_, lean_object* v___y_2097_, lean_object* v___y_2098_, lean_object* v___y_2099_, lean_object* v___y_2100_, lean_object* v___y_2101_, lean_object* v___y_2102_, lean_object* v___y_2103_){
_start:
{
lean_object* v_res_2104_; 
v_res_2104_ = l_Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6___redArg(v_msg_2096_, v___y_2097_, v___y_2098_, v___y_2099_, v___y_2100_, v___y_2101_, v___y_2102_);
lean_dec(v___y_2102_);
lean_dec_ref(v___y_2101_);
lean_dec(v___y_2100_);
lean_dec_ref(v___y_2099_);
lean_dec(v___y_2098_);
lean_dec_ref(v___y_2097_);
return v_res_2104_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__6___redArg(lean_object* v_ref_2105_, lean_object* v_msg_2106_, lean_object* v___y_2107_, lean_object* v___y_2108_, lean_object* v___y_2109_, lean_object* v___y_2110_, lean_object* v___y_2111_, lean_object* v___y_2112_){
_start:
{
lean_object* v_toCold_2114_; lean_object* v_currRecDepth_2115_; lean_object* v_ref_2116_; uint8_t v_diag_2117_; uint8_t v_suppressElabErrors_2118_; lean_object* v_ref_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; 
v_toCold_2114_ = lean_ctor_get(v___y_2111_, 0);
v_currRecDepth_2115_ = lean_ctor_get(v___y_2111_, 1);
v_ref_2116_ = lean_ctor_get(v___y_2111_, 2);
v_diag_2117_ = lean_ctor_get_uint8(v___y_2111_, sizeof(void*)*3);
v_suppressElabErrors_2118_ = lean_ctor_get_uint8(v___y_2111_, sizeof(void*)*3 + 1);
v_ref_2119_ = l_Lean_replaceRef(v_ref_2105_, v_ref_2116_);
lean_inc(v_currRecDepth_2115_);
lean_inc_ref(v_toCold_2114_);
v___x_2120_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2120_, 0, v_toCold_2114_);
lean_ctor_set(v___x_2120_, 1, v_currRecDepth_2115_);
lean_ctor_set(v___x_2120_, 2, v_ref_2119_);
lean_ctor_set_uint8(v___x_2120_, sizeof(void*)*3, v_diag_2117_);
lean_ctor_set_uint8(v___x_2120_, sizeof(void*)*3 + 1, v_suppressElabErrors_2118_);
v___x_2121_ = l_Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6___redArg(v_msg_2106_, v___y_2107_, v___y_2108_, v___y_2109_, v___y_2110_, v___x_2120_, v___y_2112_);
lean_dec_ref_known(v___x_2120_, 3);
return v___x_2121_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__6___redArg___boxed(lean_object* v_ref_2122_, lean_object* v_msg_2123_, lean_object* v___y_2124_, lean_object* v___y_2125_, lean_object* v___y_2126_, lean_object* v___y_2127_, lean_object* v___y_2128_, lean_object* v___y_2129_, lean_object* v___y_2130_){
_start:
{
lean_object* v_res_2131_; 
v_res_2131_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__6___redArg(v_ref_2122_, v_msg_2123_, v___y_2124_, v___y_2125_, v___y_2126_, v___y_2127_, v___y_2128_, v___y_2129_);
lean_dec(v___y_2129_);
lean_dec_ref(v___y_2128_);
lean_dec(v___y_2127_);
lean_dec_ref(v___y_2126_);
lean_dec(v___y_2125_);
lean_dec_ref(v___y_2124_);
lean_dec(v_ref_2122_);
return v_res_2131_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1___redArg___lam__4(lean_object* v_env_2132_, lean_object* v_options_2133_, lean_object* v_currNamespace_2134_, lean_object* v_openDecls_2135_, lean_object* v_n_2136_, lean_object* v___y_2137_, lean_object* v___y_2138_){
_start:
{
lean_object* v___x_2139_; lean_object* v___x_2140_; 
v___x_2139_ = l_Lean_ResolveName_resolveGlobalName(v_env_2132_, v_options_2133_, v_currNamespace_2134_, v_openDecls_2135_, v_n_2136_);
v___x_2140_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2140_, 0, v___x_2139_);
lean_ctor_set(v___x_2140_, 1, v___y_2138_);
return v___x_2140_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1___redArg___lam__4___boxed(lean_object* v_env_2141_, lean_object* v_options_2142_, lean_object* v_currNamespace_2143_, lean_object* v_openDecls_2144_, lean_object* v_n_2145_, lean_object* v___y_2146_, lean_object* v___y_2147_){
_start:
{
lean_object* v_res_2148_; 
v_res_2148_ = l_Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1___redArg___lam__4(v_env_2141_, v_options_2142_, v_currNamespace_2143_, v_openDecls_2144_, v_n_2145_, v___y_2146_, v___y_2147_);
lean_dec_ref(v___y_2146_);
lean_dec_ref(v_options_2142_);
return v_res_2148_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5_spec__15_spec__24_spec__28___redArg(lean_object* v_keys_2149_, lean_object* v_i_2150_, lean_object* v_k_2151_){
_start:
{
lean_object* v___x_2152_; uint8_t v___x_2153_; 
v___x_2152_ = lean_array_get_size(v_keys_2149_);
v___x_2153_ = lean_nat_dec_lt(v_i_2150_, v___x_2152_);
if (v___x_2153_ == 0)
{
lean_dec(v_i_2150_);
return v___x_2153_;
}
else
{
lean_object* v_k_x27_2154_; uint8_t v___x_2155_; 
v_k_x27_2154_ = lean_array_fget_borrowed(v_keys_2149_, v_i_2150_);
v___x_2155_ = l_Lean_instBEqExtraModUse_beq(v_k_2151_, v_k_x27_2154_);
if (v___x_2155_ == 0)
{
lean_object* v___x_2156_; lean_object* v___x_2157_; 
v___x_2156_ = lean_unsigned_to_nat(1u);
v___x_2157_ = lean_nat_add(v_i_2150_, v___x_2156_);
lean_dec(v_i_2150_);
v_i_2150_ = v___x_2157_;
goto _start;
}
else
{
lean_dec(v_i_2150_);
return v___x_2153_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5_spec__15_spec__24_spec__28___redArg___boxed(lean_object* v_keys_2159_, lean_object* v_i_2160_, lean_object* v_k_2161_){
_start:
{
uint8_t v_res_2162_; lean_object* v_r_2163_; 
v_res_2162_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5_spec__15_spec__24_spec__28___redArg(v_keys_2159_, v_i_2160_, v_k_2161_);
lean_dec_ref(v_k_2161_);
lean_dec_ref(v_keys_2159_);
v_r_2163_ = lean_box(v_res_2162_);
return v_r_2163_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5_spec__15_spec__24___redArg(lean_object* v_x_2164_, size_t v_x_2165_, lean_object* v_x_2166_){
_start:
{
if (lean_obj_tag(v_x_2164_) == 0)
{
lean_object* v_es_2167_; lean_object* v___x_2168_; size_t v___x_2169_; size_t v___x_2170_; lean_object* v_j_2171_; lean_object* v___x_2172_; 
v_es_2167_ = lean_ctor_get(v_x_2164_, 0);
v___x_2168_ = lean_box(2);
v___x_2169_ = ((size_t)31ULL);
v___x_2170_ = lean_usize_land(v_x_2165_, v___x_2169_);
v_j_2171_ = lean_usize_to_nat(v___x_2170_);
v___x_2172_ = lean_array_get_borrowed(v___x_2168_, v_es_2167_, v_j_2171_);
lean_dec(v_j_2171_);
switch(lean_obj_tag(v___x_2172_))
{
case 0:
{
lean_object* v_key_2173_; uint8_t v___x_2174_; 
v_key_2173_ = lean_ctor_get(v___x_2172_, 0);
v___x_2174_ = l_Lean_instBEqExtraModUse_beq(v_x_2166_, v_key_2173_);
return v___x_2174_;
}
case 1:
{
lean_object* v_node_2175_; size_t v___x_2176_; size_t v___x_2177_; 
v_node_2175_ = lean_ctor_get(v___x_2172_, 0);
v___x_2176_ = ((size_t)5ULL);
v___x_2177_ = lean_usize_shift_right(v_x_2165_, v___x_2176_);
v_x_2164_ = v_node_2175_;
v_x_2165_ = v___x_2177_;
goto _start;
}
default: 
{
uint8_t v___x_2179_; 
v___x_2179_ = 0;
return v___x_2179_;
}
}
}
else
{
lean_object* v_ks_2180_; lean_object* v___x_2181_; uint8_t v___x_2182_; 
v_ks_2180_ = lean_ctor_get(v_x_2164_, 0);
v___x_2181_ = lean_unsigned_to_nat(0u);
v___x_2182_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5_spec__15_spec__24_spec__28___redArg(v_ks_2180_, v___x_2181_, v_x_2166_);
return v___x_2182_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5_spec__15_spec__24___redArg___boxed(lean_object* v_x_2183_, lean_object* v_x_2184_, lean_object* v_x_2185_){
_start:
{
size_t v_x_29421__boxed_2186_; uint8_t v_res_2187_; lean_object* v_r_2188_; 
v_x_29421__boxed_2186_ = lean_unbox_usize(v_x_2184_);
lean_dec(v_x_2184_);
v_res_2187_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5_spec__15_spec__24___redArg(v_x_2183_, v_x_29421__boxed_2186_, v_x_2185_);
lean_dec_ref(v_x_2185_);
lean_dec_ref(v_x_2183_);
v_r_2188_ = lean_box(v_res_2187_);
return v_r_2188_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5_spec__15___redArg(lean_object* v_x_2189_, lean_object* v_x_2190_){
_start:
{
uint64_t v___x_2191_; size_t v___x_2192_; uint8_t v___x_2193_; 
v___x_2191_ = l_Lean_instHashableExtraModUse_hash(v_x_2190_);
v___x_2192_ = lean_uint64_to_usize(v___x_2191_);
v___x_2193_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5_spec__15_spec__24___redArg(v_x_2189_, v___x_2192_, v_x_2190_);
return v___x_2193_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5_spec__15___redArg___boxed(lean_object* v_x_2194_, lean_object* v_x_2195_){
_start:
{
uint8_t v_res_2196_; lean_object* v_r_2197_; 
v_res_2196_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5_spec__15___redArg(v_x_2194_, v_x_2195_);
lean_dec_ref(v_x_2195_);
lean_dec_ref(v_x_2194_);
v_r_2197_ = lean_box(v_res_2196_);
return v_r_2197_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__0(void){
_start:
{
lean_object* v___x_2198_; 
v___x_2198_ = l_Lean_PersistentHashMap_empty___redArg();
return v___x_2198_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__4(void){
_start:
{
lean_object* v___x_2203_; lean_object* v___x_2204_; 
v___x_2203_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__3));
v___x_2204_ = l_Lean_stringToMessageData(v___x_2203_);
return v___x_2204_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__6(void){
_start:
{
lean_object* v___x_2206_; lean_object* v___x_2207_; 
v___x_2206_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__5));
v___x_2207_ = l_Lean_stringToMessageData(v___x_2206_);
return v___x_2207_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__7(void){
_start:
{
lean_object* v___x_2208_; lean_object* v___x_2209_; 
v___x_2208_ = ((lean_object*)(l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__34));
v___x_2209_ = l_Lean_stringToMessageData(v___x_2208_);
return v___x_2209_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__8(void){
_start:
{
lean_object* v_cls_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; 
v_cls_2210_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__2));
v___x_2211_ = ((lean_object*)(l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__5___closed__1));
v___x_2212_ = l_Lean_Name_append(v___x_2211_, v_cls_2210_);
return v___x_2212_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__10(void){
_start:
{
lean_object* v___x_2214_; lean_object* v___x_2215_; 
v___x_2214_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__9));
v___x_2215_ = l_Lean_stringToMessageData(v___x_2214_);
return v___x_2215_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__12(void){
_start:
{
lean_object* v___x_2217_; lean_object* v___x_2218_; 
v___x_2217_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__11));
v___x_2218_ = l_Lean_stringToMessageData(v___x_2217_);
return v___x_2218_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5(lean_object* v_mod_2223_, uint8_t v_isMeta_2224_, lean_object* v_hint_2225_, lean_object* v___y_2226_, lean_object* v___y_2227_, lean_object* v___y_2228_, lean_object* v___y_2229_, lean_object* v___y_2230_, lean_object* v___y_2231_){
_start:
{
lean_object* v___x_2233_; lean_object* v___x_2234_; lean_object* v_env_2235_; uint8_t v_isExporting_2236_; lean_object* v_entry_2237_; lean_object* v___x_2238_; lean_object* v_env_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___y_2244_; lean_object* v___y_2245_; lean_object* v___x_2285_; uint8_t v___x_2286_; 
v___x_2233_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__0);
v___x_2234_ = lean_st_ref_get(v___y_2231_);
v_env_2235_ = lean_ctor_get(v___x_2234_, 0);
lean_inc_ref(v_env_2235_);
lean_dec(v___x_2234_);
v_isExporting_2236_ = lean_ctor_get_uint8(v_env_2235_, sizeof(void*)*8);
lean_dec_ref(v_env_2235_);
lean_inc(v_mod_2223_);
v_entry_2237_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_2237_, 0, v_mod_2223_);
lean_ctor_set_uint8(v_entry_2237_, sizeof(void*)*1, v_isExporting_2236_);
lean_ctor_set_uint8(v_entry_2237_, sizeof(void*)*1 + 1, v_isMeta_2224_);
v___x_2238_ = lean_st_ref_get(v___y_2231_);
v_env_2239_ = lean_ctor_get(v___x_2238_, 0);
lean_inc_ref(v_env_2239_);
lean_dec(v___x_2238_);
v___x_2240_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_2241_ = lean_box(1);
v___x_2242_ = lean_obj_once(&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__36, &l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__36_once, _init_l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__36);
v___x_2285_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_2233_, v___x_2240_, v_env_2239_, v___x_2241_, v___x_2242_);
v___x_2286_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5_spec__15___redArg(v___x_2285_, v_entry_2237_);
lean_dec(v___x_2285_);
if (v___x_2286_ == 0)
{
lean_object* v_toCold_2287_; lean_object* v_options_2288_; uint8_t v_hasTrace_2289_; 
v_toCold_2287_ = lean_ctor_get(v___y_2230_, 0);
v_options_2288_ = lean_ctor_get(v_toCold_2287_, 2);
v_hasTrace_2289_ = lean_ctor_get_uint8(v_options_2288_, sizeof(void*)*1);
if (v_hasTrace_2289_ == 0)
{
lean_dec(v_hint_2225_);
lean_dec(v_mod_2223_);
v___y_2244_ = v___y_2229_;
v___y_2245_ = v___y_2231_;
goto v___jp_2243_;
}
else
{
lean_object* v_inheritedTraceOptions_2290_; lean_object* v_cls_2291_; lean_object* v___y_2293_; lean_object* v___y_2294_; lean_object* v___y_2298_; lean_object* v___y_2299_; lean_object* v___x_2311_; uint8_t v___x_2312_; 
v_inheritedTraceOptions_2290_ = lean_ctor_get(v_toCold_2287_, 11);
v_cls_2291_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__2));
v___x_2311_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__8, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__8_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__8);
v___x_2312_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2290_, v_options_2288_, v___x_2311_);
if (v___x_2312_ == 0)
{
lean_dec(v_hint_2225_);
lean_dec(v_mod_2223_);
v___y_2244_ = v___y_2229_;
v___y_2245_ = v___y_2231_;
goto v___jp_2243_;
}
else
{
lean_object* v___x_2313_; lean_object* v___y_2315_; 
v___x_2313_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__10, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__10_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__10);
if (v_isExporting_2236_ == 0)
{
lean_object* v___x_2322_; 
v___x_2322_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__15));
v___y_2315_ = v___x_2322_;
goto v___jp_2314_;
}
else
{
lean_object* v___x_2323_; 
v___x_2323_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__16));
v___y_2315_ = v___x_2323_;
goto v___jp_2314_;
}
v___jp_2314_:
{
lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; 
lean_inc_ref(v___y_2315_);
v___x_2316_ = l_Lean_stringToMessageData(v___y_2315_);
v___x_2317_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2317_, 0, v___x_2313_);
lean_ctor_set(v___x_2317_, 1, v___x_2316_);
v___x_2318_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__12, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__12_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__12);
v___x_2319_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2319_, 0, v___x_2317_);
lean_ctor_set(v___x_2319_, 1, v___x_2318_);
if (v_isMeta_2224_ == 0)
{
lean_object* v___x_2320_; 
v___x_2320_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__13));
v___y_2298_ = v___x_2319_;
v___y_2299_ = v___x_2320_;
goto v___jp_2297_;
}
else
{
lean_object* v___x_2321_; 
v___x_2321_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__14));
v___y_2298_ = v___x_2319_;
v___y_2299_ = v___x_2321_;
goto v___jp_2297_;
}
}
}
v___jp_2292_:
{
lean_object* v___x_2295_; lean_object* v___x_2296_; 
v___x_2295_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2295_, 0, v___y_2293_);
lean_ctor_set(v___x_2295_, 1, v___y_2294_);
v___x_2296_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__1___redArg(v_cls_2291_, v___x_2295_, v___y_2228_, v___y_2229_, v___y_2230_, v___y_2231_);
if (lean_obj_tag(v___x_2296_) == 0)
{
lean_dec_ref_known(v___x_2296_, 1);
v___y_2244_ = v___y_2229_;
v___y_2245_ = v___y_2231_;
goto v___jp_2243_;
}
else
{
lean_dec_ref_known(v_entry_2237_, 1);
return v___x_2296_;
}
}
v___jp_2297_:
{
lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; uint8_t v___x_2306_; 
lean_inc_ref(v___y_2299_);
v___x_2300_ = l_Lean_stringToMessageData(v___y_2299_);
v___x_2301_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2301_, 0, v___y_2298_);
lean_ctor_set(v___x_2301_, 1, v___x_2300_);
v___x_2302_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__4, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__4_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__4);
v___x_2303_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2303_, 0, v___x_2301_);
lean_ctor_set(v___x_2303_, 1, v___x_2302_);
v___x_2304_ = l_Lean_MessageData_ofName(v_mod_2223_);
v___x_2305_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2305_, 0, v___x_2303_);
lean_ctor_set(v___x_2305_, 1, v___x_2304_);
v___x_2306_ = l_Lean_Name_isAnonymous(v_hint_2225_);
if (v___x_2306_ == 0)
{
lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; 
v___x_2307_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__6, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__6_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__6);
v___x_2308_ = l_Lean_MessageData_ofName(v_hint_2225_);
v___x_2309_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2309_, 0, v___x_2307_);
lean_ctor_set(v___x_2309_, 1, v___x_2308_);
v___y_2293_ = v___x_2305_;
v___y_2294_ = v___x_2309_;
goto v___jp_2292_;
}
else
{
lean_object* v___x_2310_; 
lean_dec(v_hint_2225_);
v___x_2310_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__7, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__7_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___closed__7);
v___y_2293_ = v___x_2305_;
v___y_2294_ = v___x_2310_;
goto v___jp_2292_;
}
}
}
}
else
{
lean_object* v___x_2324_; lean_object* v___x_2325_; 
lean_dec_ref_known(v_entry_2237_, 1);
lean_dec(v_hint_2225_);
lean_dec(v_mod_2223_);
v___x_2324_ = lean_box(0);
v___x_2325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2325_, 0, v___x_2324_);
return v___x_2325_;
}
v___jp_2243_:
{
lean_object* v___x_2246_; lean_object* v_toEnvExtension_2247_; lean_object* v_env_2248_; lean_object* v_nextMacroScope_2249_; lean_object* v_ngen_2250_; lean_object* v_auxDeclNGen_2251_; lean_object* v_traceState_2252_; lean_object* v_messages_2253_; lean_object* v_infoState_2254_; lean_object* v_snapshotTasks_2255_; lean_object* v___x_2257_; uint8_t v_isShared_2258_; uint8_t v_isSharedCheck_2283_; 
v___x_2246_ = lean_st_ref_take(v___y_2245_);
v_toEnvExtension_2247_ = lean_ctor_get(v___x_2240_, 0);
v_env_2248_ = lean_ctor_get(v___x_2246_, 0);
v_nextMacroScope_2249_ = lean_ctor_get(v___x_2246_, 1);
v_ngen_2250_ = lean_ctor_get(v___x_2246_, 2);
v_auxDeclNGen_2251_ = lean_ctor_get(v___x_2246_, 3);
v_traceState_2252_ = lean_ctor_get(v___x_2246_, 4);
v_messages_2253_ = lean_ctor_get(v___x_2246_, 6);
v_infoState_2254_ = lean_ctor_get(v___x_2246_, 7);
v_snapshotTasks_2255_ = lean_ctor_get(v___x_2246_, 8);
v_isSharedCheck_2283_ = !lean_is_exclusive(v___x_2246_);
if (v_isSharedCheck_2283_ == 0)
{
lean_object* v_unused_2284_; 
v_unused_2284_ = lean_ctor_get(v___x_2246_, 5);
lean_dec(v_unused_2284_);
v___x_2257_ = v___x_2246_;
v_isShared_2258_ = v_isSharedCheck_2283_;
goto v_resetjp_2256_;
}
else
{
lean_inc(v_snapshotTasks_2255_);
lean_inc(v_infoState_2254_);
lean_inc(v_messages_2253_);
lean_inc(v_traceState_2252_);
lean_inc(v_auxDeclNGen_2251_);
lean_inc(v_ngen_2250_);
lean_inc(v_nextMacroScope_2249_);
lean_inc(v_env_2248_);
lean_dec(v___x_2246_);
v___x_2257_ = lean_box(0);
v_isShared_2258_ = v_isSharedCheck_2283_;
goto v_resetjp_2256_;
}
v_resetjp_2256_:
{
lean_object* v_asyncMode_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; lean_object* v___x_2263_; 
v_asyncMode_2259_ = lean_ctor_get(v_toEnvExtension_2247_, 2);
v___x_2260_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_2240_, v_env_2248_, v_entry_2237_, v_asyncMode_2259_, v___x_2242_);
v___x_2261_ = lean_obj_once(&l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7___redArg___closed__2, &l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7___redArg___closed__2_once, _init_l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7___redArg___closed__2);
if (v_isShared_2258_ == 0)
{
lean_ctor_set(v___x_2257_, 5, v___x_2261_);
lean_ctor_set(v___x_2257_, 0, v___x_2260_);
v___x_2263_ = v___x_2257_;
goto v_reusejp_2262_;
}
else
{
lean_object* v_reuseFailAlloc_2282_; 
v_reuseFailAlloc_2282_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2282_, 0, v___x_2260_);
lean_ctor_set(v_reuseFailAlloc_2282_, 1, v_nextMacroScope_2249_);
lean_ctor_set(v_reuseFailAlloc_2282_, 2, v_ngen_2250_);
lean_ctor_set(v_reuseFailAlloc_2282_, 3, v_auxDeclNGen_2251_);
lean_ctor_set(v_reuseFailAlloc_2282_, 4, v_traceState_2252_);
lean_ctor_set(v_reuseFailAlloc_2282_, 5, v___x_2261_);
lean_ctor_set(v_reuseFailAlloc_2282_, 6, v_messages_2253_);
lean_ctor_set(v_reuseFailAlloc_2282_, 7, v_infoState_2254_);
lean_ctor_set(v_reuseFailAlloc_2282_, 8, v_snapshotTasks_2255_);
v___x_2263_ = v_reuseFailAlloc_2282_;
goto v_reusejp_2262_;
}
v_reusejp_2262_:
{
lean_object* v___x_2264_; lean_object* v___x_2265_; lean_object* v_mctx_2266_; lean_object* v_zetaDeltaFVarIds_2267_; lean_object* v_postponed_2268_; lean_object* v_diag_2269_; lean_object* v___x_2271_; uint8_t v_isShared_2272_; uint8_t v_isSharedCheck_2280_; 
v___x_2264_ = lean_st_ref_put(v___y_2245_, v___x_2263_);
v___x_2265_ = lean_st_ref_take(v___y_2244_);
v_mctx_2266_ = lean_ctor_get(v___x_2265_, 0);
v_zetaDeltaFVarIds_2267_ = lean_ctor_get(v___x_2265_, 2);
v_postponed_2268_ = lean_ctor_get(v___x_2265_, 3);
v_diag_2269_ = lean_ctor_get(v___x_2265_, 4);
v_isSharedCheck_2280_ = !lean_is_exclusive(v___x_2265_);
if (v_isSharedCheck_2280_ == 0)
{
lean_object* v_unused_2281_; 
v_unused_2281_ = lean_ctor_get(v___x_2265_, 1);
lean_dec(v_unused_2281_);
v___x_2271_ = v___x_2265_;
v_isShared_2272_ = v_isSharedCheck_2280_;
goto v_resetjp_2270_;
}
else
{
lean_inc(v_diag_2269_);
lean_inc(v_postponed_2268_);
lean_inc(v_zetaDeltaFVarIds_2267_);
lean_inc(v_mctx_2266_);
lean_dec(v___x_2265_);
v___x_2271_ = lean_box(0);
v_isShared_2272_ = v_isSharedCheck_2280_;
goto v_resetjp_2270_;
}
v_resetjp_2270_:
{
lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2276_; 
v___x_2273_ = lean_box(0);
v___x_2274_ = lean_obj_once(&l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7___redArg___closed__3, &l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7___redArg___closed__3_once, _init_l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7___redArg___closed__3);
if (v_isShared_2272_ == 0)
{
lean_ctor_set(v___x_2271_, 1, v___x_2274_);
v___x_2276_ = v___x_2271_;
goto v_reusejp_2275_;
}
else
{
lean_object* v_reuseFailAlloc_2279_; 
v_reuseFailAlloc_2279_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2279_, 0, v_mctx_2266_);
lean_ctor_set(v_reuseFailAlloc_2279_, 1, v___x_2274_);
lean_ctor_set(v_reuseFailAlloc_2279_, 2, v_zetaDeltaFVarIds_2267_);
lean_ctor_set(v_reuseFailAlloc_2279_, 3, v_postponed_2268_);
lean_ctor_set(v_reuseFailAlloc_2279_, 4, v_diag_2269_);
v___x_2276_ = v_reuseFailAlloc_2279_;
goto v_reusejp_2275_;
}
v_reusejp_2275_:
{
lean_object* v___x_2277_; lean_object* v___x_2278_; 
v___x_2277_ = lean_st_ref_put(v___y_2244_, v___x_2276_);
v___x_2278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2278_, 0, v___x_2273_);
return v___x_2278_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5___boxed(lean_object* v_mod_2326_, lean_object* v_isMeta_2327_, lean_object* v_hint_2328_, lean_object* v___y_2329_, lean_object* v___y_2330_, lean_object* v___y_2331_, lean_object* v___y_2332_, lean_object* v___y_2333_, lean_object* v___y_2334_, lean_object* v___y_2335_){
_start:
{
uint8_t v_isMeta_boxed_2336_; lean_object* v_res_2337_; 
v_isMeta_boxed_2336_ = lean_unbox(v_isMeta_2327_);
v_res_2337_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5(v_mod_2326_, v_isMeta_boxed_2336_, v_hint_2328_, v___y_2329_, v___y_2330_, v___y_2331_, v___y_2332_, v___y_2333_, v___y_2334_);
lean_dec(v___y_2334_);
lean_dec_ref(v___y_2333_);
lean_dec(v___y_2332_);
lean_dec_ref(v___y_2331_);
lean_dec(v___y_2330_);
lean_dec_ref(v___y_2329_);
return v_res_2337_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__6(lean_object* v___x_2338_, lean_object* v_declName_2339_, lean_object* v_as_2340_, size_t v_sz_2341_, size_t v_i_2342_, lean_object* v_b_2343_, lean_object* v___y_2344_, lean_object* v___y_2345_, lean_object* v___y_2346_, lean_object* v___y_2347_, lean_object* v___y_2348_, lean_object* v___y_2349_){
_start:
{
uint8_t v___x_2351_; 
v___x_2351_ = lean_usize_dec_lt(v_i_2342_, v_sz_2341_);
if (v___x_2351_ == 0)
{
lean_object* v___x_2352_; 
lean_dec(v_declName_2339_);
v___x_2352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2352_, 0, v_b_2343_);
return v___x_2352_;
}
else
{
lean_object* v___x_2353_; lean_object* v_modules_2354_; lean_object* v___x_2355_; lean_object* v_a_2356_; lean_object* v___x_2357_; lean_object* v_toImport_2358_; lean_object* v_module_2359_; lean_object* v___x_2360_; uint8_t v___x_2361_; lean_object* v___x_2362_; 
v___x_2353_ = l_Lean_Environment_header(v___x_2338_);
v_modules_2354_ = lean_ctor_get(v___x_2353_, 3);
lean_inc_ref(v_modules_2354_);
lean_dec_ref(v___x_2353_);
v___x_2355_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_2356_ = lean_array_uget_borrowed(v_as_2340_, v_i_2342_);
v___x_2357_ = lean_array_get(v___x_2355_, v_modules_2354_, v_a_2356_);
lean_dec_ref(v_modules_2354_);
v_toImport_2358_ = lean_ctor_get(v___x_2357_, 0);
lean_inc_ref(v_toImport_2358_);
lean_dec(v___x_2357_);
v_module_2359_ = lean_ctor_get(v_toImport_2358_, 0);
lean_inc(v_module_2359_);
lean_dec_ref(v_toImport_2358_);
v___x_2360_ = lean_box(0);
v___x_2361_ = 0;
lean_inc(v_declName_2339_);
v___x_2362_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5(v_module_2359_, v___x_2361_, v_declName_2339_, v___y_2344_, v___y_2345_, v___y_2346_, v___y_2347_, v___y_2348_, v___y_2349_);
if (lean_obj_tag(v___x_2362_) == 0)
{
size_t v___x_2363_; size_t v___x_2364_; 
lean_dec_ref_known(v___x_2362_, 1);
v___x_2363_ = ((size_t)1ULL);
v___x_2364_ = lean_usize_add(v_i_2342_, v___x_2363_);
v_i_2342_ = v___x_2364_;
v_b_2343_ = v___x_2360_;
goto _start;
}
else
{
lean_dec(v_declName_2339_);
return v___x_2362_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__6___boxed(lean_object* v___x_2366_, lean_object* v_declName_2367_, lean_object* v_as_2368_, lean_object* v_sz_2369_, lean_object* v_i_2370_, lean_object* v_b_2371_, lean_object* v___y_2372_, lean_object* v___y_2373_, lean_object* v___y_2374_, lean_object* v___y_2375_, lean_object* v___y_2376_, lean_object* v___y_2377_, lean_object* v___y_2378_){
_start:
{
size_t v_sz_boxed_2379_; size_t v_i_boxed_2380_; lean_object* v_res_2381_; 
v_sz_boxed_2379_ = lean_unbox_usize(v_sz_2369_);
lean_dec(v_sz_2369_);
v_i_boxed_2380_ = lean_unbox_usize(v_i_2370_);
lean_dec(v_i_2370_);
v_res_2381_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__6(v___x_2366_, v_declName_2367_, v_as_2368_, v_sz_boxed_2379_, v_i_boxed_2380_, v_b_2371_, v___y_2372_, v___y_2373_, v___y_2374_, v___y_2375_, v___y_2376_, v___y_2377_);
lean_dec(v___y_2377_);
lean_dec_ref(v___y_2376_);
lean_dec(v___y_2375_);
lean_dec_ref(v___y_2374_);
lean_dec(v___y_2373_);
lean_dec_ref(v___y_2372_);
lean_dec_ref(v_as_2368_);
lean_dec_ref(v___x_2366_);
return v_res_2381_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__7_spec__18___redArg(lean_object* v_a_2382_, lean_object* v_x_2383_){
_start:
{
if (lean_obj_tag(v_x_2383_) == 0)
{
lean_object* v___x_2384_; 
v___x_2384_ = lean_box(0);
return v___x_2384_;
}
else
{
lean_object* v_key_2385_; lean_object* v_value_2386_; lean_object* v_tail_2387_; uint8_t v___x_2388_; 
v_key_2385_ = lean_ctor_get(v_x_2383_, 0);
v_value_2386_ = lean_ctor_get(v_x_2383_, 1);
v_tail_2387_ = lean_ctor_get(v_x_2383_, 2);
v___x_2388_ = lean_name_eq(v_key_2385_, v_a_2382_);
if (v___x_2388_ == 0)
{
v_x_2383_ = v_tail_2387_;
goto _start;
}
else
{
lean_object* v___x_2390_; 
lean_inc(v_value_2386_);
v___x_2390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2390_, 0, v_value_2386_);
return v___x_2390_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__7_spec__18___redArg___boxed(lean_object* v_a_2391_, lean_object* v_x_2392_){
_start:
{
lean_object* v_res_2393_; 
v_res_2393_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__7_spec__18___redArg(v_a_2391_, v_x_2392_);
lean_dec(v_x_2392_);
lean_dec(v_a_2391_);
return v_res_2393_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__7___redArg(lean_object* v_m_2394_, lean_object* v_a_2395_){
_start:
{
lean_object* v_buckets_2396_; lean_object* v___x_2397_; uint64_t v___y_2399_; lean_object* v___x_2413_; 
v_buckets_2396_ = lean_ctor_get(v_m_2394_, 1);
v___x_2397_ = lean_array_get_size(v_buckets_2396_);
v___x_2413_ = l_unsafeCast___redArg(v_a_2395_);
if (lean_obj_tag(v___x_2413_) == 0)
{
uint64_t v___x_2414_; 
v___x_2414_ = 1723ULL;
v___y_2399_ = v___x_2414_;
goto v___jp_2398_;
}
else
{
uint64_t v_hash_2415_; 
v_hash_2415_ = lean_ctor_get_uint64(v___x_2413_, sizeof(void*)*2);
lean_dec(v___x_2413_);
v___y_2399_ = v_hash_2415_;
goto v___jp_2398_;
}
v___jp_2398_:
{
uint64_t v___x_2400_; uint64_t v___x_2401_; uint64_t v_fold_2402_; uint64_t v___x_2403_; uint64_t v___x_2404_; uint64_t v___x_2405_; size_t v___x_2406_; size_t v___x_2407_; size_t v___x_2408_; size_t v___x_2409_; size_t v___x_2410_; lean_object* v___x_2411_; lean_object* v___x_2412_; 
v___x_2400_ = 32ULL;
v___x_2401_ = lean_uint64_shift_right(v___y_2399_, v___x_2400_);
v_fold_2402_ = lean_uint64_xor(v___y_2399_, v___x_2401_);
v___x_2403_ = 16ULL;
v___x_2404_ = lean_uint64_shift_right(v_fold_2402_, v___x_2403_);
v___x_2405_ = lean_uint64_xor(v_fold_2402_, v___x_2404_);
v___x_2406_ = lean_uint64_to_usize(v___x_2405_);
v___x_2407_ = lean_usize_of_nat(v___x_2397_);
v___x_2408_ = ((size_t)1ULL);
v___x_2409_ = lean_usize_sub(v___x_2407_, v___x_2408_);
v___x_2410_ = lean_usize_land(v___x_2406_, v___x_2409_);
v___x_2411_ = lean_array_uget_borrowed(v_buckets_2396_, v___x_2410_);
v___x_2412_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__7_spec__18___redArg(v_a_2395_, v___x_2411_);
return v___x_2412_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__7___redArg___boxed(lean_object* v_m_2416_, lean_object* v_a_2417_){
_start:
{
lean_object* v_res_2418_; 
v_res_2418_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__7___redArg(v_m_2416_, v_a_2417_);
lean_dec(v_a_2417_);
lean_dec_ref(v_m_2416_);
return v_res_2418_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3___closed__0(void){
_start:
{
lean_object* v___x_2419_; 
v___x_2419_ = l_Std_HashMap_instInhabited___redArg();
return v___x_2419_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3(lean_object* v_declName_2422_, uint8_t v_isMeta_2423_, lean_object* v___y_2424_, lean_object* v___y_2425_, lean_object* v___y_2426_, lean_object* v___y_2427_, lean_object* v___y_2428_, lean_object* v___y_2429_){
_start:
{
lean_object* v___x_2431_; lean_object* v___x_2432_; lean_object* v_env_2436_; lean_object* v___y_2438_; lean_object* v___x_2451_; 
v___x_2431_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3___closed__0, &l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3___closed__0_once, _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3___closed__0);
v___x_2432_ = lean_st_ref_get(v___y_2429_);
v_env_2436_ = lean_ctor_get(v___x_2432_, 0);
lean_inc_ref(v_env_2436_);
lean_dec(v___x_2432_);
v___x_2451_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2436_, v_declName_2422_);
if (lean_obj_tag(v___x_2451_) == 0)
{
lean_dec_ref(v_env_2436_);
lean_dec(v_declName_2422_);
goto v___jp_2433_;
}
else
{
lean_object* v_val_2452_; lean_object* v___x_2453_; lean_object* v_modules_2454_; lean_object* v___x_2455_; uint8_t v___x_2456_; 
v_val_2452_ = lean_ctor_get(v___x_2451_, 0);
lean_inc(v_val_2452_);
lean_dec_ref_known(v___x_2451_, 1);
v___x_2453_ = l_Lean_Environment_header(v_env_2436_);
v_modules_2454_ = lean_ctor_get(v___x_2453_, 3);
lean_inc_ref(v_modules_2454_);
lean_dec_ref(v___x_2453_);
v___x_2455_ = lean_array_get_size(v_modules_2454_);
v___x_2456_ = lean_nat_dec_lt(v_val_2452_, v___x_2455_);
if (v___x_2456_ == 0)
{
lean_dec_ref(v_modules_2454_);
lean_dec(v_val_2452_);
lean_dec_ref(v_env_2436_);
lean_dec(v_declName_2422_);
goto v___jp_2433_;
}
else
{
lean_object* v___x_2457_; lean_object* v___x_2458_; uint8_t v___y_2460_; 
v___x_2457_ = lean_array_fget(v_modules_2454_, v_val_2452_);
lean_dec(v_val_2452_);
lean_dec_ref(v_modules_2454_);
v___x_2458_ = lean_st_ref_get(v___y_2429_);
if (v_isMeta_2423_ == 0)
{
lean_dec(v___x_2458_);
v___y_2460_ = v_isMeta_2423_;
goto v___jp_2459_;
}
else
{
lean_object* v_env_2471_; uint8_t v___x_2472_; 
v_env_2471_ = lean_ctor_get(v___x_2458_, 0);
lean_inc_ref(v_env_2471_);
lean_dec(v___x_2458_);
lean_inc(v_declName_2422_);
v___x_2472_ = l_Lean_isMarkedMeta(v_env_2471_, v_declName_2422_);
if (v___x_2472_ == 0)
{
v___y_2460_ = v_isMeta_2423_;
goto v___jp_2459_;
}
else
{
uint8_t v___x_2473_; 
v___x_2473_ = 0;
v___y_2460_ = v___x_2473_;
goto v___jp_2459_;
}
}
v___jp_2459_:
{
lean_object* v_toImport_2461_; lean_object* v_module_2462_; lean_object* v___x_2463_; 
v_toImport_2461_ = lean_ctor_get(v___x_2457_, 0);
lean_inc_ref(v_toImport_2461_);
lean_dec(v___x_2457_);
v_module_2462_ = lean_ctor_get(v_toImport_2461_, 0);
lean_inc(v_module_2462_);
lean_dec_ref(v_toImport_2461_);
lean_inc(v_declName_2422_);
v___x_2463_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5(v_module_2462_, v___y_2460_, v_declName_2422_, v___y_2424_, v___y_2425_, v___y_2426_, v___y_2427_, v___y_2428_, v___y_2429_);
if (lean_obj_tag(v___x_2463_) == 0)
{
lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; 
lean_dec_ref_known(v___x_2463_, 1);
v___x_2464_ = l_Lean_indirectModUseExt;
v___x_2465_ = lean_box(1);
v___x_2466_ = lean_obj_once(&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__36, &l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__36_once, _init_l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__36);
lean_inc_ref(v_env_2436_);
v___x_2467_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_2431_, v___x_2464_, v_env_2436_, v___x_2465_, v___x_2466_);
v___x_2468_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__7___redArg(v___x_2467_, v_declName_2422_);
lean_dec(v___x_2467_);
if (lean_obj_tag(v___x_2468_) == 0)
{
lean_object* v___x_2469_; 
v___x_2469_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3___closed__1));
v___y_2438_ = v___x_2469_;
goto v___jp_2437_;
}
else
{
lean_object* v_val_2470_; 
v_val_2470_ = lean_ctor_get(v___x_2468_, 0);
lean_inc(v_val_2470_);
lean_dec_ref_known(v___x_2468_, 1);
v___y_2438_ = v_val_2470_;
goto v___jp_2437_;
}
}
else
{
lean_dec_ref(v_env_2436_);
lean_dec(v_declName_2422_);
return v___x_2463_;
}
}
}
}
v___jp_2433_:
{
lean_object* v___x_2434_; lean_object* v___x_2435_; 
v___x_2434_ = lean_box(0);
v___x_2435_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2435_, 0, v___x_2434_);
return v___x_2435_;
}
v___jp_2437_:
{
lean_object* v___x_2439_; size_t v_sz_2440_; size_t v___x_2441_; lean_object* v___x_2442_; 
v___x_2439_ = lean_box(0);
v_sz_2440_ = lean_array_size(v___y_2438_);
v___x_2441_ = ((size_t)0ULL);
v___x_2442_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__6(v_env_2436_, v_declName_2422_, v___y_2438_, v_sz_2440_, v___x_2441_, v___x_2439_, v___y_2424_, v___y_2425_, v___y_2426_, v___y_2427_, v___y_2428_, v___y_2429_);
lean_dec_ref(v___y_2438_);
lean_dec_ref(v_env_2436_);
if (lean_obj_tag(v___x_2442_) == 0)
{
lean_object* v___x_2444_; uint8_t v_isShared_2445_; uint8_t v_isSharedCheck_2449_; 
v_isSharedCheck_2449_ = !lean_is_exclusive(v___x_2442_);
if (v_isSharedCheck_2449_ == 0)
{
lean_object* v_unused_2450_; 
v_unused_2450_ = lean_ctor_get(v___x_2442_, 0);
lean_dec(v_unused_2450_);
v___x_2444_ = v___x_2442_;
v_isShared_2445_ = v_isSharedCheck_2449_;
goto v_resetjp_2443_;
}
else
{
lean_dec(v___x_2442_);
v___x_2444_ = lean_box(0);
v_isShared_2445_ = v_isSharedCheck_2449_;
goto v_resetjp_2443_;
}
v_resetjp_2443_:
{
lean_object* v___x_2447_; 
if (v_isShared_2445_ == 0)
{
lean_ctor_set(v___x_2444_, 0, v___x_2439_);
v___x_2447_ = v___x_2444_;
goto v_reusejp_2446_;
}
else
{
lean_object* v_reuseFailAlloc_2448_; 
v_reuseFailAlloc_2448_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2448_, 0, v___x_2439_);
v___x_2447_ = v_reuseFailAlloc_2448_;
goto v_reusejp_2446_;
}
v_reusejp_2446_:
{
return v___x_2447_;
}
}
}
else
{
return v___x_2442_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3___boxed(lean_object* v_declName_2474_, lean_object* v_isMeta_2475_, lean_object* v___y_2476_, lean_object* v___y_2477_, lean_object* v___y_2478_, lean_object* v___y_2479_, lean_object* v___y_2480_, lean_object* v___y_2481_, lean_object* v___y_2482_){
_start:
{
uint8_t v_isMeta_boxed_2483_; lean_object* v_res_2484_; 
v_isMeta_boxed_2483_ = lean_unbox(v_isMeta_2475_);
v_res_2484_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3(v_declName_2474_, v_isMeta_boxed_2483_, v___y_2476_, v___y_2477_, v___y_2478_, v___y_2479_, v___y_2480_, v___y_2481_);
lean_dec(v___y_2481_);
lean_dec_ref(v___y_2480_);
lean_dec(v___y_2479_);
lean_dec_ref(v___y_2478_);
lean_dec(v___y_2477_);
lean_dec_ref(v___y_2476_);
return v_res_2484_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__4___redArg(lean_object* v_as_x27_2485_, lean_object* v_b_2486_, lean_object* v___y_2487_, lean_object* v___y_2488_, lean_object* v___y_2489_, lean_object* v___y_2490_, lean_object* v___y_2491_, lean_object* v___y_2492_){
_start:
{
if (lean_obj_tag(v_as_x27_2485_) == 0)
{
lean_object* v___x_2494_; 
v___x_2494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2494_, 0, v_b_2486_);
return v___x_2494_;
}
else
{
lean_object* v_head_2495_; lean_object* v_tail_2496_; lean_object* v___x_2497_; uint8_t v___x_2498_; lean_object* v___x_2499_; 
v_head_2495_ = lean_ctor_get(v_as_x27_2485_, 0);
v_tail_2496_ = lean_ctor_get(v_as_x27_2485_, 1);
v___x_2497_ = lean_box(0);
v___x_2498_ = 1;
lean_inc(v_head_2495_);
v___x_2499_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3(v_head_2495_, v___x_2498_, v___y_2487_, v___y_2488_, v___y_2489_, v___y_2490_, v___y_2491_, v___y_2492_);
if (lean_obj_tag(v___x_2499_) == 0)
{
lean_dec_ref_known(v___x_2499_, 1);
v_as_x27_2485_ = v_tail_2496_;
v_b_2486_ = v___x_2497_;
goto _start;
}
else
{
return v___x_2499_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__4___redArg___boxed(lean_object* v_as_x27_2501_, lean_object* v_b_2502_, lean_object* v___y_2503_, lean_object* v___y_2504_, lean_object* v___y_2505_, lean_object* v___y_2506_, lean_object* v___y_2507_, lean_object* v___y_2508_, lean_object* v___y_2509_){
_start:
{
lean_object* v_res_2510_; 
v_res_2510_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__4___redArg(v_as_x27_2501_, v_b_2502_, v___y_2503_, v___y_2504_, v___y_2505_, v___y_2506_, v___y_2507_, v___y_2508_);
lean_dec(v___y_2508_);
lean_dec_ref(v___y_2507_);
lean_dec(v___y_2506_);
lean_dec_ref(v___y_2505_);
lean_dec(v___y_2504_);
lean_dec_ref(v___y_2503_);
lean_dec(v_as_x27_2501_);
return v_res_2510_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1___redArg___lam__3(lean_object* v_currNamespace_2511_, lean_object* v___y_2512_, lean_object* v___y_2513_){
_start:
{
lean_object* v___x_2514_; 
v___x_2514_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2514_, 0, v_currNamespace_2511_);
lean_ctor_set(v___x_2514_, 1, v___y_2513_);
return v___x_2514_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1___redArg___lam__3___boxed(lean_object* v_currNamespace_2515_, lean_object* v___y_2516_, lean_object* v___y_2517_){
_start:
{
lean_object* v_res_2518_; 
v_res_2518_ = l_Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1___redArg___lam__3(v_currNamespace_2515_, v___y_2516_, v___y_2517_);
lean_dec_ref(v___y_2516_);
return v_res_2518_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__2___redArg(lean_object* v_x_2519_, lean_object* v___y_2520_){
_start:
{
if (lean_obj_tag(v_x_2519_) == 0)
{
lean_object* v_a_2521_; lean_object* v___x_2522_; 
v_a_2521_ = lean_ctor_get(v_x_2519_, 0);
lean_inc(v_a_2521_);
v___x_2522_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2522_, 0, v_a_2521_);
lean_ctor_set(v___x_2522_, 1, v___y_2520_);
return v___x_2522_;
}
else
{
lean_object* v_a_2523_; lean_object* v___x_2524_; 
v_a_2523_ = lean_ctor_get(v_x_2519_, 0);
lean_inc(v_a_2523_);
v___x_2524_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2524_, 0, v_a_2523_);
lean_ctor_set(v___x_2524_, 1, v___y_2520_);
return v___x_2524_;
}
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__2___redArg___boxed(lean_object* v_x_2525_, lean_object* v___y_2526_){
_start:
{
lean_object* v_res_2527_; 
v_res_2527_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__2___redArg(v_x_2525_, v___y_2526_);
lean_dec_ref(v_x_2525_);
return v_res_2527_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1___redArg___lam__0(lean_object* v_env_2528_, lean_object* v_stx_2529_, lean_object* v___y_2530_, lean_object* v___y_2531_){
_start:
{
lean_object* v___x_2532_; 
v___x_2532_ = l_Lean_Elab_expandMacroImpl_x3f(v_env_2528_, v_stx_2529_, v___y_2530_, v___y_2531_);
if (lean_obj_tag(v___x_2532_) == 0)
{
lean_object* v_a_2533_; 
v_a_2533_ = lean_ctor_get(v___x_2532_, 0);
lean_inc(v_a_2533_);
if (lean_obj_tag(v_a_2533_) == 0)
{
lean_object* v_a_2534_; lean_object* v___x_2536_; uint8_t v_isShared_2537_; uint8_t v_isSharedCheck_2542_; 
v_a_2534_ = lean_ctor_get(v___x_2532_, 1);
v_isSharedCheck_2542_ = !lean_is_exclusive(v___x_2532_);
if (v_isSharedCheck_2542_ == 0)
{
lean_object* v_unused_2543_; 
v_unused_2543_ = lean_ctor_get(v___x_2532_, 0);
lean_dec(v_unused_2543_);
v___x_2536_ = v___x_2532_;
v_isShared_2537_ = v_isSharedCheck_2542_;
goto v_resetjp_2535_;
}
else
{
lean_inc(v_a_2534_);
lean_dec(v___x_2532_);
v___x_2536_ = lean_box(0);
v_isShared_2537_ = v_isSharedCheck_2542_;
goto v_resetjp_2535_;
}
v_resetjp_2535_:
{
lean_object* v___x_2538_; lean_object* v___x_2540_; 
v___x_2538_ = lean_box(0);
if (v_isShared_2537_ == 0)
{
lean_ctor_set(v___x_2536_, 0, v___x_2538_);
v___x_2540_ = v___x_2536_;
goto v_reusejp_2539_;
}
else
{
lean_object* v_reuseFailAlloc_2541_; 
v_reuseFailAlloc_2541_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2541_, 0, v___x_2538_);
lean_ctor_set(v_reuseFailAlloc_2541_, 1, v_a_2534_);
v___x_2540_ = v_reuseFailAlloc_2541_;
goto v_reusejp_2539_;
}
v_reusejp_2539_:
{
return v___x_2540_;
}
}
}
else
{
lean_object* v_val_2544_; lean_object* v___x_2546_; uint8_t v_isShared_2547_; uint8_t v_isSharedCheck_2572_; 
v_val_2544_ = lean_ctor_get(v_a_2533_, 0);
v_isSharedCheck_2572_ = !lean_is_exclusive(v_a_2533_);
if (v_isSharedCheck_2572_ == 0)
{
v___x_2546_ = v_a_2533_;
v_isShared_2547_ = v_isSharedCheck_2572_;
goto v_resetjp_2545_;
}
else
{
lean_inc(v_val_2544_);
lean_dec(v_a_2533_);
v___x_2546_ = lean_box(0);
v_isShared_2547_ = v_isSharedCheck_2572_;
goto v_resetjp_2545_;
}
v_resetjp_2545_:
{
lean_object* v_snd_2548_; 
v_snd_2548_ = lean_ctor_get(v_val_2544_, 1);
lean_inc(v_snd_2548_);
lean_dec(v_val_2544_);
if (lean_obj_tag(v_snd_2548_) == 0)
{
lean_object* v_a_2549_; lean_object* v_a_2550_; lean_object* v___x_2552_; uint8_t v_isShared_2553_; uint8_t v_isSharedCheck_2558_; 
lean_del_object(v___x_2546_);
v_a_2549_ = lean_ctor_get(v___x_2532_, 1);
lean_inc(v_a_2549_);
lean_dec_ref_known(v___x_2532_, 2);
v_a_2550_ = lean_ctor_get(v_snd_2548_, 0);
v_isSharedCheck_2558_ = !lean_is_exclusive(v_snd_2548_);
if (v_isSharedCheck_2558_ == 0)
{
v___x_2552_ = v_snd_2548_;
v_isShared_2553_ = v_isSharedCheck_2558_;
goto v_resetjp_2551_;
}
else
{
lean_inc(v_a_2550_);
lean_dec(v_snd_2548_);
v___x_2552_ = lean_box(0);
v_isShared_2553_ = v_isSharedCheck_2558_;
goto v_resetjp_2551_;
}
v_resetjp_2551_:
{
lean_object* v___x_2555_; 
if (v_isShared_2553_ == 0)
{
v___x_2555_ = v___x_2552_;
goto v_reusejp_2554_;
}
else
{
lean_object* v_reuseFailAlloc_2557_; 
v_reuseFailAlloc_2557_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2557_, 0, v_a_2550_);
v___x_2555_ = v_reuseFailAlloc_2557_;
goto v_reusejp_2554_;
}
v_reusejp_2554_:
{
lean_object* v___x_2556_; 
v___x_2556_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__2___redArg(v___x_2555_, v_a_2549_);
lean_dec_ref(v___x_2555_);
return v___x_2556_;
}
}
}
else
{
lean_object* v_a_2559_; lean_object* v_a_2560_; lean_object* v___x_2562_; uint8_t v_isShared_2563_; uint8_t v_isSharedCheck_2571_; 
v_a_2559_ = lean_ctor_get(v___x_2532_, 1);
lean_inc(v_a_2559_);
lean_dec_ref_known(v___x_2532_, 2);
v_a_2560_ = lean_ctor_get(v_snd_2548_, 0);
v_isSharedCheck_2571_ = !lean_is_exclusive(v_snd_2548_);
if (v_isSharedCheck_2571_ == 0)
{
v___x_2562_ = v_snd_2548_;
v_isShared_2563_ = v_isSharedCheck_2571_;
goto v_resetjp_2561_;
}
else
{
lean_inc(v_a_2560_);
lean_dec(v_snd_2548_);
v___x_2562_ = lean_box(0);
v_isShared_2563_ = v_isSharedCheck_2571_;
goto v_resetjp_2561_;
}
v_resetjp_2561_:
{
lean_object* v___x_2565_; 
if (v_isShared_2547_ == 0)
{
lean_ctor_set(v___x_2546_, 0, v_a_2560_);
v___x_2565_ = v___x_2546_;
goto v_reusejp_2564_;
}
else
{
lean_object* v_reuseFailAlloc_2570_; 
v_reuseFailAlloc_2570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2570_, 0, v_a_2560_);
v___x_2565_ = v_reuseFailAlloc_2570_;
goto v_reusejp_2564_;
}
v_reusejp_2564_:
{
lean_object* v___x_2567_; 
if (v_isShared_2563_ == 0)
{
lean_ctor_set(v___x_2562_, 0, v___x_2565_);
v___x_2567_ = v___x_2562_;
goto v_reusejp_2566_;
}
else
{
lean_object* v_reuseFailAlloc_2569_; 
v_reuseFailAlloc_2569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2569_, 0, v___x_2565_);
v___x_2567_ = v_reuseFailAlloc_2569_;
goto v_reusejp_2566_;
}
v_reusejp_2566_:
{
lean_object* v___x_2568_; 
v___x_2568_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__2___redArg(v___x_2567_, v_a_2559_);
lean_dec_ref(v___x_2567_);
return v___x_2568_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2573_; lean_object* v_a_2574_; lean_object* v___x_2576_; uint8_t v_isShared_2577_; uint8_t v_isSharedCheck_2581_; 
v_a_2573_ = lean_ctor_get(v___x_2532_, 0);
v_a_2574_ = lean_ctor_get(v___x_2532_, 1);
v_isSharedCheck_2581_ = !lean_is_exclusive(v___x_2532_);
if (v_isSharedCheck_2581_ == 0)
{
v___x_2576_ = v___x_2532_;
v_isShared_2577_ = v_isSharedCheck_2581_;
goto v_resetjp_2575_;
}
else
{
lean_inc(v_a_2574_);
lean_inc(v_a_2573_);
lean_dec(v___x_2532_);
v___x_2576_ = lean_box(0);
v_isShared_2577_ = v_isSharedCheck_2581_;
goto v_resetjp_2575_;
}
v_resetjp_2575_:
{
lean_object* v___x_2579_; 
if (v_isShared_2577_ == 0)
{
v___x_2579_ = v___x_2576_;
goto v_reusejp_2578_;
}
else
{
lean_object* v_reuseFailAlloc_2580_; 
v_reuseFailAlloc_2580_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2580_, 0, v_a_2573_);
lean_ctor_set(v_reuseFailAlloc_2580_, 1, v_a_2574_);
v___x_2579_ = v_reuseFailAlloc_2580_;
goto v_reusejp_2578_;
}
v_reusejp_2578_:
{
return v___x_2579_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1___redArg___lam__0___boxed(lean_object* v_env_2582_, lean_object* v_stx_2583_, lean_object* v___y_2584_, lean_object* v___y_2585_){
_start:
{
lean_object* v_res_2586_; 
v_res_2586_ = l_Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1___redArg___lam__0(v_env_2582_, v_stx_2583_, v___y_2584_, v___y_2585_);
lean_dec_ref(v___y_2584_);
return v_res_2586_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__7___redArg___closed__3(void){
_start:
{
lean_object* v___x_2592_; lean_object* v___x_2593_; 
v___x_2592_ = l_Lean_maxRecDepthErrorMessage;
v___x_2593_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2593_, 0, v___x_2592_);
return v___x_2593_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__7___redArg___closed__4(void){
_start:
{
lean_object* v___x_2594_; lean_object* v___x_2595_; 
v___x_2594_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__7___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__7___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__7___redArg___closed__3);
v___x_2595_ = l_Lean_MessageData_ofFormat(v___x_2594_);
return v___x_2595_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__7___redArg___closed__5(void){
_start:
{
lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; 
v___x_2596_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__7___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__7___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__7___redArg___closed__4);
v___x_2597_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__7___redArg___closed__2));
v___x_2598_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2598_, 0, v___x_2597_);
lean_ctor_set(v___x_2598_, 1, v___x_2596_);
return v___x_2598_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__7___redArg(lean_object* v_ref_2599_){
_start:
{
lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; 
v___x_2601_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__7___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__7___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__7___redArg___closed__5);
v___x_2602_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2602_, 0, v_ref_2599_);
lean_ctor_set(v___x_2602_, 1, v___x_2601_);
v___x_2603_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2603_, 0, v___x_2602_);
return v___x_2603_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__7___redArg___boxed(lean_object* v_ref_2604_, lean_object* v___y_2605_){
_start:
{
lean_object* v_res_2606_; 
v_res_2606_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__7___redArg(v_ref_2604_);
return v_res_2606_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1___redArg(lean_object* v_x_2608_, lean_object* v___y_2609_, lean_object* v___y_2610_, lean_object* v___y_2611_, lean_object* v___y_2612_, lean_object* v___y_2613_, lean_object* v___y_2614_){
_start:
{
lean_object* v___x_2616_; lean_object* v_toCold_2617_; lean_object* v_env_2618_; lean_object* v_currRecDepth_2619_; lean_object* v_ref_2620_; lean_object* v_options_2621_; lean_object* v_maxRecDepth_2622_; lean_object* v_currNamespace_2623_; lean_object* v_openDecls_2624_; lean_object* v_quotContext_2625_; lean_object* v_currMacroScope_2626_; lean_object* v___f_2627_; lean_object* v___f_2628_; lean_object* v___f_2629_; lean_object* v___f_2630_; lean_object* v___f_2631_; lean_object* v___x_2632_; lean_object* v_methods_2633_; lean_object* v___x_2634_; lean_object* v_nextMacroScope_2635_; lean_object* v___x_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; 
v___x_2616_ = lean_st_ref_get(v___y_2614_);
v_toCold_2617_ = lean_ctor_get(v___y_2613_, 0);
v_env_2618_ = lean_ctor_get(v___x_2616_, 0);
lean_inc_ref_n(v_env_2618_, 4);
lean_dec(v___x_2616_);
v_currRecDepth_2619_ = lean_ctor_get(v___y_2613_, 1);
v_ref_2620_ = lean_ctor_get(v___y_2613_, 2);
v_options_2621_ = lean_ctor_get(v_toCold_2617_, 2);
v_maxRecDepth_2622_ = lean_ctor_get(v_toCold_2617_, 3);
v_currNamespace_2623_ = lean_ctor_get(v_toCold_2617_, 4);
v_openDecls_2624_ = lean_ctor_get(v_toCold_2617_, 5);
v_quotContext_2625_ = lean_ctor_get(v_toCold_2617_, 8);
v_currMacroScope_2626_ = lean_ctor_get(v_toCold_2617_, 9);
v___f_2627_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_2627_, 0, v_env_2618_);
v___f_2628_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1___redArg___lam__1___boxed), 4, 1);
lean_closure_set(v___f_2628_, 0, v_env_2618_);
lean_inc_n(v_openDecls_2624_, 2);
lean_inc_n(v_currNamespace_2623_, 3);
v___f_2629_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1___redArg___lam__2___boxed), 6, 3);
lean_closure_set(v___f_2629_, 0, v_env_2618_);
lean_closure_set(v___f_2629_, 1, v_currNamespace_2623_);
lean_closure_set(v___f_2629_, 2, v_openDecls_2624_);
v___f_2630_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2630_, 0, v_currNamespace_2623_);
lean_inc_ref(v_options_2621_);
v___f_2631_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1___redArg___lam__4___boxed), 7, 4);
lean_closure_set(v___f_2631_, 0, v_env_2618_);
lean_closure_set(v___f_2631_, 1, v_options_2621_);
lean_closure_set(v___f_2631_, 2, v_currNamespace_2623_);
lean_closure_set(v___f_2631_, 3, v_openDecls_2624_);
v___x_2632_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2632_, 0, v___f_2627_);
lean_ctor_set(v___x_2632_, 1, v___f_2630_);
lean_ctor_set(v___x_2632_, 2, v___f_2628_);
lean_ctor_set(v___x_2632_, 3, v___f_2629_);
lean_ctor_set(v___x_2632_, 4, v___f_2631_);
v_methods_2633_ = l_unsafeCast___redArg(v___x_2632_);
lean_dec_ref_known(v___x_2632_, 5);
v___x_2634_ = lean_st_ref_get(v___y_2614_);
v_nextMacroScope_2635_ = lean_ctor_get(v___x_2634_, 1);
lean_inc(v_nextMacroScope_2635_);
lean_dec(v___x_2634_);
lean_inc(v_ref_2620_);
lean_inc(v_maxRecDepth_2622_);
lean_inc(v_currRecDepth_2619_);
lean_inc(v_currMacroScope_2626_);
lean_inc(v_quotContext_2625_);
v___x_2636_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2636_, 0, v_methods_2633_);
lean_ctor_set(v___x_2636_, 1, v_quotContext_2625_);
lean_ctor_set(v___x_2636_, 2, v_currMacroScope_2626_);
lean_ctor_set(v___x_2636_, 3, v_currRecDepth_2619_);
lean_ctor_set(v___x_2636_, 4, v_maxRecDepth_2622_);
lean_ctor_set(v___x_2636_, 5, v_ref_2620_);
v___x_2637_ = lean_box(0);
v___x_2638_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2638_, 0, v_nextMacroScope_2635_);
lean_ctor_set(v___x_2638_, 1, v___x_2637_);
lean_ctor_set(v___x_2638_, 2, v___x_2637_);
v___x_2639_ = lean_apply_2(v_x_2608_, v___x_2636_, v___x_2638_);
if (lean_obj_tag(v___x_2639_) == 0)
{
lean_object* v_a_2640_; lean_object* v_a_2641_; lean_object* v_macroScope_2642_; lean_object* v_traceMsgs_2643_; lean_object* v_expandedMacroDecls_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; 
v_a_2640_ = lean_ctor_get(v___x_2639_, 1);
lean_inc(v_a_2640_);
v_a_2641_ = lean_ctor_get(v___x_2639_, 0);
lean_inc(v_a_2641_);
lean_dec_ref_known(v___x_2639_, 2);
v_macroScope_2642_ = lean_ctor_get(v_a_2640_, 0);
lean_inc(v_macroScope_2642_);
v_traceMsgs_2643_ = lean_ctor_get(v_a_2640_, 1);
lean_inc(v_traceMsgs_2643_);
v_expandedMacroDecls_2644_ = lean_ctor_get(v_a_2640_, 2);
lean_inc(v_expandedMacroDecls_2644_);
lean_dec(v_a_2640_);
v___x_2645_ = lean_box(0);
v___x_2646_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__4___redArg(v_expandedMacroDecls_2644_, v___x_2645_, v___y_2609_, v___y_2610_, v___y_2611_, v___y_2612_, v___y_2613_, v___y_2614_);
lean_dec(v_expandedMacroDecls_2644_);
if (lean_obj_tag(v___x_2646_) == 0)
{
lean_object* v___x_2647_; lean_object* v_env_2648_; lean_object* v_ngen_2649_; lean_object* v_auxDeclNGen_2650_; lean_object* v_traceState_2651_; lean_object* v_cache_2652_; lean_object* v_messages_2653_; lean_object* v_infoState_2654_; lean_object* v_snapshotTasks_2655_; lean_object* v___x_2657_; uint8_t v_isShared_2658_; uint8_t v_isSharedCheck_2681_; 
lean_dec_ref_known(v___x_2646_, 1);
v___x_2647_ = lean_st_ref_take(v___y_2614_);
v_env_2648_ = lean_ctor_get(v___x_2647_, 0);
v_ngen_2649_ = lean_ctor_get(v___x_2647_, 2);
v_auxDeclNGen_2650_ = lean_ctor_get(v___x_2647_, 3);
v_traceState_2651_ = lean_ctor_get(v___x_2647_, 4);
v_cache_2652_ = lean_ctor_get(v___x_2647_, 5);
v_messages_2653_ = lean_ctor_get(v___x_2647_, 6);
v_infoState_2654_ = lean_ctor_get(v___x_2647_, 7);
v_snapshotTasks_2655_ = lean_ctor_get(v___x_2647_, 8);
v_isSharedCheck_2681_ = !lean_is_exclusive(v___x_2647_);
if (v_isSharedCheck_2681_ == 0)
{
lean_object* v_unused_2682_; 
v_unused_2682_ = lean_ctor_get(v___x_2647_, 1);
lean_dec(v_unused_2682_);
v___x_2657_ = v___x_2647_;
v_isShared_2658_ = v_isSharedCheck_2681_;
goto v_resetjp_2656_;
}
else
{
lean_inc(v_snapshotTasks_2655_);
lean_inc(v_infoState_2654_);
lean_inc(v_messages_2653_);
lean_inc(v_cache_2652_);
lean_inc(v_traceState_2651_);
lean_inc(v_auxDeclNGen_2650_);
lean_inc(v_ngen_2649_);
lean_inc(v_env_2648_);
lean_dec(v___x_2647_);
v___x_2657_ = lean_box(0);
v_isShared_2658_ = v_isSharedCheck_2681_;
goto v_resetjp_2656_;
}
v_resetjp_2656_:
{
lean_object* v___x_2660_; 
if (v_isShared_2658_ == 0)
{
lean_ctor_set(v___x_2657_, 1, v_macroScope_2642_);
v___x_2660_ = v___x_2657_;
goto v_reusejp_2659_;
}
else
{
lean_object* v_reuseFailAlloc_2680_; 
v_reuseFailAlloc_2680_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2680_, 0, v_env_2648_);
lean_ctor_set(v_reuseFailAlloc_2680_, 1, v_macroScope_2642_);
lean_ctor_set(v_reuseFailAlloc_2680_, 2, v_ngen_2649_);
lean_ctor_set(v_reuseFailAlloc_2680_, 3, v_auxDeclNGen_2650_);
lean_ctor_set(v_reuseFailAlloc_2680_, 4, v_traceState_2651_);
lean_ctor_set(v_reuseFailAlloc_2680_, 5, v_cache_2652_);
lean_ctor_set(v_reuseFailAlloc_2680_, 6, v_messages_2653_);
lean_ctor_set(v_reuseFailAlloc_2680_, 7, v_infoState_2654_);
lean_ctor_set(v_reuseFailAlloc_2680_, 8, v_snapshotTasks_2655_);
v___x_2660_ = v_reuseFailAlloc_2680_;
goto v_reusejp_2659_;
}
v_reusejp_2659_:
{
lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; 
v___x_2661_ = lean_st_ref_put(v___y_2614_, v___x_2660_);
v___x_2662_ = l_List_reverse___redArg(v_traceMsgs_2643_);
v___x_2663_ = l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__5(v___x_2662_, v___y_2609_, v___y_2610_, v___y_2611_, v___y_2612_, v___y_2613_, v___y_2614_);
if (lean_obj_tag(v___x_2663_) == 0)
{
lean_object* v___x_2665_; uint8_t v_isShared_2666_; uint8_t v_isSharedCheck_2670_; 
v_isSharedCheck_2670_ = !lean_is_exclusive(v___x_2663_);
if (v_isSharedCheck_2670_ == 0)
{
lean_object* v_unused_2671_; 
v_unused_2671_ = lean_ctor_get(v___x_2663_, 0);
lean_dec(v_unused_2671_);
v___x_2665_ = v___x_2663_;
v_isShared_2666_ = v_isSharedCheck_2670_;
goto v_resetjp_2664_;
}
else
{
lean_dec(v___x_2663_);
v___x_2665_ = lean_box(0);
v_isShared_2666_ = v_isSharedCheck_2670_;
goto v_resetjp_2664_;
}
v_resetjp_2664_:
{
lean_object* v___x_2668_; 
if (v_isShared_2666_ == 0)
{
lean_ctor_set(v___x_2665_, 0, v_a_2641_);
v___x_2668_ = v___x_2665_;
goto v_reusejp_2667_;
}
else
{
lean_object* v_reuseFailAlloc_2669_; 
v_reuseFailAlloc_2669_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2669_, 0, v_a_2641_);
v___x_2668_ = v_reuseFailAlloc_2669_;
goto v_reusejp_2667_;
}
v_reusejp_2667_:
{
return v___x_2668_;
}
}
}
else
{
lean_object* v_a_2672_; lean_object* v___x_2674_; uint8_t v_isShared_2675_; uint8_t v_isSharedCheck_2679_; 
lean_dec(v_a_2641_);
v_a_2672_ = lean_ctor_get(v___x_2663_, 0);
v_isSharedCheck_2679_ = !lean_is_exclusive(v___x_2663_);
if (v_isSharedCheck_2679_ == 0)
{
v___x_2674_ = v___x_2663_;
v_isShared_2675_ = v_isSharedCheck_2679_;
goto v_resetjp_2673_;
}
else
{
lean_inc(v_a_2672_);
lean_dec(v___x_2663_);
v___x_2674_ = lean_box(0);
v_isShared_2675_ = v_isSharedCheck_2679_;
goto v_resetjp_2673_;
}
v_resetjp_2673_:
{
lean_object* v___x_2677_; 
if (v_isShared_2675_ == 0)
{
v___x_2677_ = v___x_2674_;
goto v_reusejp_2676_;
}
else
{
lean_object* v_reuseFailAlloc_2678_; 
v_reuseFailAlloc_2678_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2678_, 0, v_a_2672_);
v___x_2677_ = v_reuseFailAlloc_2678_;
goto v_reusejp_2676_;
}
v_reusejp_2676_:
{
return v___x_2677_;
}
}
}
}
}
}
else
{
lean_object* v_a_2683_; lean_object* v___x_2685_; uint8_t v_isShared_2686_; uint8_t v_isSharedCheck_2690_; 
lean_dec(v_traceMsgs_2643_);
lean_dec(v_macroScope_2642_);
lean_dec(v_a_2641_);
v_a_2683_ = lean_ctor_get(v___x_2646_, 0);
v_isSharedCheck_2690_ = !lean_is_exclusive(v___x_2646_);
if (v_isSharedCheck_2690_ == 0)
{
v___x_2685_ = v___x_2646_;
v_isShared_2686_ = v_isSharedCheck_2690_;
goto v_resetjp_2684_;
}
else
{
lean_inc(v_a_2683_);
lean_dec(v___x_2646_);
v___x_2685_ = lean_box(0);
v_isShared_2686_ = v_isSharedCheck_2690_;
goto v_resetjp_2684_;
}
v_resetjp_2684_:
{
lean_object* v___x_2688_; 
if (v_isShared_2686_ == 0)
{
v___x_2688_ = v___x_2685_;
goto v_reusejp_2687_;
}
else
{
lean_object* v_reuseFailAlloc_2689_; 
v_reuseFailAlloc_2689_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2689_, 0, v_a_2683_);
v___x_2688_ = v_reuseFailAlloc_2689_;
goto v_reusejp_2687_;
}
v_reusejp_2687_:
{
return v___x_2688_;
}
}
}
}
else
{
lean_object* v_a_2691_; 
v_a_2691_ = lean_ctor_get(v___x_2639_, 0);
lean_inc(v_a_2691_);
lean_dec_ref_known(v___x_2639_, 2);
if (lean_obj_tag(v_a_2691_) == 0)
{
lean_object* v_a_2692_; lean_object* v_a_2693_; lean_object* v___x_2694_; uint8_t v___x_2695_; 
v_a_2692_ = lean_ctor_get(v_a_2691_, 0);
lean_inc(v_a_2692_);
v_a_2693_ = lean_ctor_get(v_a_2691_, 1);
lean_inc_ref(v_a_2693_);
lean_dec_ref_known(v_a_2691_, 2);
v___x_2694_ = ((lean_object*)(l_Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1___redArg___closed__0));
v___x_2695_ = lean_string_dec_eq(v_a_2693_, v___x_2694_);
if (v___x_2695_ == 0)
{
lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2698_; 
v___x_2696_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2696_, 0, v_a_2693_);
v___x_2697_ = l_Lean_MessageData_ofFormat(v___x_2696_);
v___x_2698_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__6___redArg(v_a_2692_, v___x_2697_, v___y_2609_, v___y_2610_, v___y_2611_, v___y_2612_, v___y_2613_, v___y_2614_);
lean_dec(v_a_2692_);
return v___x_2698_;
}
else
{
lean_object* v___x_2699_; 
lean_dec_ref(v_a_2693_);
v___x_2699_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__7___redArg(v_a_2692_);
return v___x_2699_;
}
}
else
{
lean_object* v___x_2700_; 
v___x_2700_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Widget_elabWidgetInstanceSpec_spec__0___redArg();
return v___x_2700_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1___redArg___boxed(lean_object* v_x_2701_, lean_object* v___y_2702_, lean_object* v___y_2703_, lean_object* v___y_2704_, lean_object* v___y_2705_, lean_object* v___y_2706_, lean_object* v___y_2707_, lean_object* v___y_2708_){
_start:
{
lean_object* v_res_2709_; 
v_res_2709_ = l_Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1___redArg(v_x_2701_, v___y_2702_, v___y_2703_, v___y_2704_, v___y_2705_, v___y_2706_, v___y_2707_);
lean_dec(v___y_2707_);
lean_dec_ref(v___y_2706_);
lean_dec(v___y_2705_);
lean_dec_ref(v___y_2704_);
lean_dec(v___y_2703_);
lean_dec_ref(v___y_2702_);
return v_res_2709_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__8___closed__0(void){
_start:
{
lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; 
v___x_2710_ = lean_box(0);
v___x_2711_ = ((lean_object*)(l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__76));
v___x_2712_ = l_Lean_mkConst(v___x_2711_, v___x_2710_);
return v___x_2712_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__8___closed__4(void){
_start:
{
lean_object* v___x_2717_; lean_object* v___x_2718_; 
v___x_2717_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__8___closed__3));
v___x_2718_ = l_Lean_stringToMessageData(v___x_2717_);
return v___x_2718_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__8___closed__7(void){
_start:
{
lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; 
v___x_2724_ = lean_box(0);
v___x_2725_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__8___closed__6));
v___x_2726_ = l_Lean_mkConst(v___x_2725_, v___x_2724_);
return v___x_2726_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__8___closed__8(void){
_start:
{
lean_object* v___x_2727_; lean_object* v___x_2728_; 
v___x_2727_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__8___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__8___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__8___closed__7);
v___x_2728_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2728_, 0, v___x_2727_);
return v___x_2728_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__8(uint8_t v___x_2729_, lean_object* v_as_2730_, size_t v_sz_2731_, size_t v_i_2732_, lean_object* v_b_2733_, lean_object* v___y_2734_, lean_object* v___y_2735_, lean_object* v___y_2736_, lean_object* v___y_2737_, lean_object* v___y_2738_, lean_object* v___y_2739_){
_start:
{
lean_object* v_a_2742_; uint8_t v___x_2746_; 
v___x_2746_ = lean_usize_dec_lt(v_i_2732_, v_sz_2731_);
if (v___x_2746_ == 0)
{
lean_object* v___x_2747_; 
v___x_2747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2747_, 0, v_b_2733_);
return v___x_2747_;
}
else
{
lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v_a_2750_; uint8_t v___x_2751_; 
v___x_2748_ = ((lean_object*)(l_Lean_Widget_showWidgetSpec___closed__1));
v___x_2749_ = lean_box(0);
v_a_2750_ = lean_array_uget_borrowed(v_as_2730_, v_i_2732_);
lean_inc(v_a_2750_);
v___x_2751_ = l_Lean_Syntax_isOfKind(v_a_2750_, v___x_2748_);
if (v___x_2751_ == 0)
{
lean_object* v___x_2752_; 
v___x_2752_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Widget_elabWidgetInstanceSpec_spec__0___redArg();
if (lean_obj_tag(v___x_2752_) == 0)
{
lean_dec_ref_known(v___x_2752_, 1);
v_a_2742_ = v___x_2749_;
goto v___jp_2741_;
}
else
{
return v___x_2752_;
}
}
else
{
lean_object* v___x_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; uint8_t v___x_2757_; 
v___x_2753_ = lean_unsigned_to_nat(0u);
v___x_2754_ = lean_unsigned_to_nat(1u);
v___x_2755_ = l_Lean_Syntax_getArg(v_a_2750_, v___x_2753_);
v___x_2756_ = ((lean_object*)(l_Lean_Widget_eraseWidgetSpec___closed__1));
lean_inc(v___x_2755_);
v___x_2757_ = l_Lean_Syntax_isOfKind(v___x_2755_, v___x_2756_);
if (v___x_2757_ == 0)
{
lean_object* v___x_2758_; uint8_t v___x_2759_; 
v___x_2758_ = ((lean_object*)(l_Lean_Widget_addWidgetSpec___closed__1));
lean_inc(v___x_2755_);
v___x_2759_ = l_Lean_Syntax_isOfKind(v___x_2755_, v___x_2758_);
if (v___x_2759_ == 0)
{
lean_object* v___x_2760_; 
lean_dec(v___x_2755_);
v___x_2760_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Widget_elabWidgetInstanceSpec_spec__0___redArg();
if (lean_obj_tag(v___x_2760_) == 0)
{
lean_dec_ref_known(v___x_2760_, 1);
v_a_2742_ = v___x_2749_;
goto v___jp_2741_;
}
else
{
return v___x_2760_;
}
}
else
{
lean_object* v___x_2761_; lean_object* v___y_2763_; lean_object* v___y_2764_; uint64_t v___y_2765_; uint8_t v___y_2766_; lean_object* v___y_2767_; lean_object* v___y_2768_; lean_object* v___y_2769_; lean_object* v___y_2770_; lean_object* v___y_2771_; lean_object* v___y_2772_; lean_object* v___x_2783_; lean_object* v___y_2785_; 
v___x_2761_ = lean_box(0);
v___x_2783_ = l_Lean_Syntax_getArg(v___x_2755_, v___x_2753_);
if (v___x_2757_ == 0)
{
lean_object* v___x_2856_; uint8_t v___x_2857_; 
v___x_2856_ = ((lean_object*)(l_Lean_Widget_addWidgetSpec___closed__3));
lean_inc(v___x_2783_);
v___x_2857_ = l_Lean_Syntax_isOfKind(v___x_2783_, v___x_2856_);
if (v___x_2857_ == 0)
{
lean_object* v___x_2858_; 
lean_dec(v___x_2783_);
lean_dec(v___x_2755_);
v___x_2858_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Widget_elabWidgetInstanceSpec_spec__0___redArg();
if (lean_obj_tag(v___x_2858_) == 0)
{
lean_dec_ref_known(v___x_2858_, 1);
v_a_2742_ = v___x_2749_;
goto v___jp_2741_;
}
else
{
return v___x_2858_;
}
}
else
{
goto v___jp_2851_;
}
}
else
{
goto v___jp_2851_;
}
v___jp_2762_:
{
lean_object* v___x_2773_; lean_object* v___x_2774_; lean_object* v___x_2775_; uint8_t v___x_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; lean_object* v___x_2779_; lean_object* v___x_2780_; 
v___x_2773_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__8___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__8___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__8___closed__0);
lean_inc_n(v___y_2763_, 2);
v___x_2774_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2774_, 0, v___y_2763_);
lean_ctor_set(v___x_2774_, 1, v___x_2761_);
lean_ctor_set(v___x_2774_, 2, v___x_2773_);
v___x_2775_ = lean_box(0);
v___x_2776_ = 1;
v___x_2777_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2777_, 0, v___y_2763_);
lean_ctor_set(v___x_2777_, 1, v___x_2761_);
v___x_2778_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2778_, 0, v___x_2774_);
lean_ctor_set(v___x_2778_, 1, v___y_2764_);
lean_ctor_set(v___x_2778_, 2, v___x_2775_);
lean_ctor_set(v___x_2778_, 3, v___x_2777_);
lean_ctor_set_uint8(v___x_2778_, sizeof(void*)*4, v___x_2776_);
v___x_2779_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2779_, 0, v___x_2778_);
v___x_2780_ = l_Lean_addAndCompile(v___x_2779_, v___x_2729_, v___x_2757_, v___y_2771_, v___y_2772_);
if (lean_obj_tag(v___x_2780_) == 0)
{
lean_dec_ref_known(v___x_2780_, 1);
if (v___y_2766_ == 0)
{
lean_object* v___x_2781_; 
v___x_2781_ = l_Lean_Widget_addPanelWidgetGlobal___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__4(v___y_2765_, v___y_2763_, v___y_2767_, v___y_2768_, v___y_2769_, v___y_2770_, v___y_2771_, v___y_2772_);
if (lean_obj_tag(v___x_2781_) == 0)
{
lean_dec_ref_known(v___x_2781_, 1);
v_a_2742_ = v___x_2749_;
goto v___jp_2741_;
}
else
{
return v___x_2781_;
}
}
else
{
lean_object* v___x_2782_; 
v___x_2782_ = l_Lean_Widget_addPanelWidgetScoped___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__5(v___y_2765_, v___y_2763_, v___y_2767_, v___y_2768_, v___y_2769_, v___y_2770_, v___y_2771_, v___y_2772_);
if (lean_obj_tag(v___x_2782_) == 0)
{
lean_dec_ref_known(v___x_2782_, 1);
v_a_2742_ = v___x_2749_;
goto v___jp_2741_;
}
else
{
return v___x_2782_;
}
}
}
else
{
lean_dec(v___y_2763_);
return v___x_2780_;
}
}
v___jp_2784_:
{
lean_object* v___x_2786_; lean_object* v___x_2787_; 
v___x_2786_ = lean_alloc_closure((void*)(l_Lean_Elab_toAttributeKind___boxed), 3, 1);
lean_closure_set(v___x_2786_, 0, v___x_2783_);
v___x_2787_ = l_Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1___redArg(v___x_2786_, v___y_2734_, v___y_2735_, v___y_2736_, v___y_2737_, v___y_2738_, v___y_2739_);
if (lean_obj_tag(v___x_2787_) == 0)
{
lean_object* v_a_2788_; lean_object* v___x_2789_; 
v_a_2788_ = lean_ctor_get(v___x_2787_, 0);
lean_inc(v_a_2788_);
lean_dec_ref_known(v___x_2787_, 1);
v___x_2789_ = l_Lean_Widget_elabWidgetInstanceSpec(v___y_2785_, v___y_2734_, v___y_2735_, v___y_2736_, v___y_2737_, v___y_2738_, v___y_2739_);
if (lean_obj_tag(v___x_2789_) == 0)
{
lean_object* v_a_2790_; lean_object* v___x_2791_; 
v_a_2790_ = lean_ctor_get(v___x_2789_, 0);
lean_inc_n(v_a_2790_, 2);
lean_dec_ref_known(v___x_2789_, 1);
v___x_2791_ = l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalWidgetInstanceUnsafe(v_a_2790_, v___y_2736_, v___y_2737_, v___y_2738_, v___y_2739_);
if (lean_obj_tag(v___x_2791_) == 0)
{
uint8_t v___x_2792_; 
v___x_2792_ = lean_unbox(v_a_2788_);
if (v___x_2792_ == 1)
{
lean_object* v_a_2793_; lean_object* v___x_2794_; 
lean_dec(v_a_2790_);
lean_dec(v_a_2788_);
v_a_2793_ = lean_ctor_get(v___x_2791_, 0);
lean_inc(v_a_2793_);
lean_dec_ref_known(v___x_2791_, 1);
v___x_2794_ = l_Lean_Widget_addPanelWidgetLocal___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__2___redArg(v_a_2793_, v___y_2737_, v___y_2739_);
if (lean_obj_tag(v___x_2794_) == 0)
{
lean_dec_ref_known(v___x_2794_, 1);
v_a_2742_ = v___x_2749_;
goto v___jp_2741_;
}
else
{
return v___x_2794_;
}
}
else
{
lean_object* v_a_2795_; lean_object* v_id_2796_; uint64_t v_javascriptHash_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; lean_object* v___x_2800_; 
v_a_2795_ = lean_ctor_get(v___x_2791_, 0);
lean_inc(v_a_2795_);
lean_dec_ref_known(v___x_2791_, 1);
v_id_2796_ = lean_ctor_get(v_a_2795_, 0);
lean_inc(v_id_2796_);
v_javascriptHash_2797_ = lean_ctor_get_uint64(v_a_2795_, sizeof(void*)*2);
lean_dec(v_a_2795_);
v___x_2798_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__8___closed__2));
v___x_2799_ = l_Lean_Name_append(v_id_2796_, v___x_2798_);
v___x_2800_ = l_Lean_Core_mkFreshUserName(v___x_2799_, v___y_2738_, v___y_2739_);
if (lean_obj_tag(v___x_2800_) == 0)
{
lean_object* v_a_2801_; lean_object* v___x_2802_; 
v_a_2801_ = lean_ctor_get(v___x_2800_, 0);
lean_inc(v_a_2801_);
lean_dec_ref_known(v___x_2800_, 1);
v___x_2802_ = l_Lean_instantiateMVars___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__3___redArg(v_a_2790_, v___y_2737_);
if (lean_obj_tag(v___x_2802_) == 0)
{
lean_object* v_a_2803_; uint8_t v___x_2804_; 
v_a_2803_ = lean_ctor_get(v___x_2802_, 0);
lean_inc(v_a_2803_);
lean_dec_ref_known(v___x_2802_, 1);
v___x_2804_ = l_Lean_Expr_hasMVar(v_a_2803_);
if (v___x_2804_ == 0)
{
uint8_t v___x_2805_; 
v___x_2805_ = lean_unbox(v_a_2788_);
lean_dec(v_a_2788_);
v___y_2763_ = v_a_2801_;
v___y_2764_ = v_a_2803_;
v___y_2765_ = v_javascriptHash_2797_;
v___y_2766_ = v___x_2805_;
v___y_2767_ = v___y_2734_;
v___y_2768_ = v___y_2735_;
v___y_2769_ = v___y_2736_;
v___y_2770_ = v___y_2737_;
v___y_2771_ = v___y_2738_;
v___y_2772_ = v___y_2739_;
goto v___jp_2762_;
}
else
{
lean_object* v___x_2806_; lean_object* v___x_2807_; lean_object* v___x_2808_; lean_object* v___x_2809_; 
v___x_2806_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__8___closed__4, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__8___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__8___closed__4);
lean_inc(v_a_2803_);
v___x_2807_ = l_Lean_indentExpr(v_a_2803_);
v___x_2808_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2808_, 0, v___x_2806_);
lean_ctor_set(v___x_2808_, 1, v___x_2807_);
v___x_2809_ = l_Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6___redArg(v___x_2808_, v___y_2734_, v___y_2735_, v___y_2736_, v___y_2737_, v___y_2738_, v___y_2739_);
if (lean_obj_tag(v___x_2809_) == 0)
{
uint8_t v___x_2810_; 
lean_dec_ref_known(v___x_2809_, 1);
v___x_2810_ = lean_unbox(v_a_2788_);
lean_dec(v_a_2788_);
v___y_2763_ = v_a_2801_;
v___y_2764_ = v_a_2803_;
v___y_2765_ = v_javascriptHash_2797_;
v___y_2766_ = v___x_2810_;
v___y_2767_ = v___y_2734_;
v___y_2768_ = v___y_2735_;
v___y_2769_ = v___y_2736_;
v___y_2770_ = v___y_2737_;
v___y_2771_ = v___y_2738_;
v___y_2772_ = v___y_2739_;
goto v___jp_2762_;
}
else
{
lean_dec(v_a_2803_);
lean_dec(v_a_2801_);
lean_dec(v_a_2788_);
return v___x_2809_;
}
}
}
else
{
lean_object* v_a_2811_; lean_object* v___x_2813_; uint8_t v_isShared_2814_; uint8_t v_isSharedCheck_2818_; 
lean_dec(v_a_2801_);
lean_dec(v_a_2788_);
v_a_2811_ = lean_ctor_get(v___x_2802_, 0);
v_isSharedCheck_2818_ = !lean_is_exclusive(v___x_2802_);
if (v_isSharedCheck_2818_ == 0)
{
v___x_2813_ = v___x_2802_;
v_isShared_2814_ = v_isSharedCheck_2818_;
goto v_resetjp_2812_;
}
else
{
lean_inc(v_a_2811_);
lean_dec(v___x_2802_);
v___x_2813_ = lean_box(0);
v_isShared_2814_ = v_isSharedCheck_2818_;
goto v_resetjp_2812_;
}
v_resetjp_2812_:
{
lean_object* v___x_2816_; 
if (v_isShared_2814_ == 0)
{
v___x_2816_ = v___x_2813_;
goto v_reusejp_2815_;
}
else
{
lean_object* v_reuseFailAlloc_2817_; 
v_reuseFailAlloc_2817_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2817_, 0, v_a_2811_);
v___x_2816_ = v_reuseFailAlloc_2817_;
goto v_reusejp_2815_;
}
v_reusejp_2815_:
{
return v___x_2816_;
}
}
}
}
else
{
lean_object* v_a_2819_; lean_object* v___x_2821_; uint8_t v_isShared_2822_; uint8_t v_isSharedCheck_2826_; 
lean_dec(v_a_2790_);
lean_dec(v_a_2788_);
v_a_2819_ = lean_ctor_get(v___x_2800_, 0);
v_isSharedCheck_2826_ = !lean_is_exclusive(v___x_2800_);
if (v_isSharedCheck_2826_ == 0)
{
v___x_2821_ = v___x_2800_;
v_isShared_2822_ = v_isSharedCheck_2826_;
goto v_resetjp_2820_;
}
else
{
lean_inc(v_a_2819_);
lean_dec(v___x_2800_);
v___x_2821_ = lean_box(0);
v_isShared_2822_ = v_isSharedCheck_2826_;
goto v_resetjp_2820_;
}
v_resetjp_2820_:
{
lean_object* v___x_2824_; 
if (v_isShared_2822_ == 0)
{
v___x_2824_ = v___x_2821_;
goto v_reusejp_2823_;
}
else
{
lean_object* v_reuseFailAlloc_2825_; 
v_reuseFailAlloc_2825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2825_, 0, v_a_2819_);
v___x_2824_ = v_reuseFailAlloc_2825_;
goto v_reusejp_2823_;
}
v_reusejp_2823_:
{
return v___x_2824_;
}
}
}
}
}
else
{
lean_object* v_a_2827_; lean_object* v___x_2829_; uint8_t v_isShared_2830_; uint8_t v_isSharedCheck_2834_; 
lean_dec(v_a_2790_);
lean_dec(v_a_2788_);
v_a_2827_ = lean_ctor_get(v___x_2791_, 0);
v_isSharedCheck_2834_ = !lean_is_exclusive(v___x_2791_);
if (v_isSharedCheck_2834_ == 0)
{
v___x_2829_ = v___x_2791_;
v_isShared_2830_ = v_isSharedCheck_2834_;
goto v_resetjp_2828_;
}
else
{
lean_inc(v_a_2827_);
lean_dec(v___x_2791_);
v___x_2829_ = lean_box(0);
v_isShared_2830_ = v_isSharedCheck_2834_;
goto v_resetjp_2828_;
}
v_resetjp_2828_:
{
lean_object* v___x_2832_; 
if (v_isShared_2830_ == 0)
{
v___x_2832_ = v___x_2829_;
goto v_reusejp_2831_;
}
else
{
lean_object* v_reuseFailAlloc_2833_; 
v_reuseFailAlloc_2833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2833_, 0, v_a_2827_);
v___x_2832_ = v_reuseFailAlloc_2833_;
goto v_reusejp_2831_;
}
v_reusejp_2831_:
{
return v___x_2832_;
}
}
}
}
else
{
lean_object* v_a_2835_; lean_object* v___x_2837_; uint8_t v_isShared_2838_; uint8_t v_isSharedCheck_2842_; 
lean_dec(v_a_2788_);
v_a_2835_ = lean_ctor_get(v___x_2789_, 0);
v_isSharedCheck_2842_ = !lean_is_exclusive(v___x_2789_);
if (v_isSharedCheck_2842_ == 0)
{
v___x_2837_ = v___x_2789_;
v_isShared_2838_ = v_isSharedCheck_2842_;
goto v_resetjp_2836_;
}
else
{
lean_inc(v_a_2835_);
lean_dec(v___x_2789_);
v___x_2837_ = lean_box(0);
v_isShared_2838_ = v_isSharedCheck_2842_;
goto v_resetjp_2836_;
}
v_resetjp_2836_:
{
lean_object* v___x_2840_; 
if (v_isShared_2838_ == 0)
{
v___x_2840_ = v___x_2837_;
goto v_reusejp_2839_;
}
else
{
lean_object* v_reuseFailAlloc_2841_; 
v_reuseFailAlloc_2841_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2841_, 0, v_a_2835_);
v___x_2840_ = v_reuseFailAlloc_2841_;
goto v_reusejp_2839_;
}
v_reusejp_2839_:
{
return v___x_2840_;
}
}
}
}
else
{
lean_object* v_a_2843_; lean_object* v___x_2845_; uint8_t v_isShared_2846_; uint8_t v_isSharedCheck_2850_; 
lean_dec(v___y_2785_);
v_a_2843_ = lean_ctor_get(v___x_2787_, 0);
v_isSharedCheck_2850_ = !lean_is_exclusive(v___x_2787_);
if (v_isSharedCheck_2850_ == 0)
{
v___x_2845_ = v___x_2787_;
v_isShared_2846_ = v_isSharedCheck_2850_;
goto v_resetjp_2844_;
}
else
{
lean_inc(v_a_2843_);
lean_dec(v___x_2787_);
v___x_2845_ = lean_box(0);
v_isShared_2846_ = v_isSharedCheck_2850_;
goto v_resetjp_2844_;
}
v_resetjp_2844_:
{
lean_object* v___x_2848_; 
if (v_isShared_2846_ == 0)
{
v___x_2848_ = v___x_2845_;
goto v_reusejp_2847_;
}
else
{
lean_object* v_reuseFailAlloc_2849_; 
v_reuseFailAlloc_2849_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2849_, 0, v_a_2843_);
v___x_2848_ = v_reuseFailAlloc_2849_;
goto v_reusejp_2847_;
}
v_reusejp_2847_:
{
return v___x_2848_;
}
}
}
}
v___jp_2851_:
{
lean_object* v___x_2852_; 
v___x_2852_ = l_Lean_Syntax_getArg(v___x_2755_, v___x_2754_);
lean_dec(v___x_2755_);
if (v___x_2757_ == 0)
{
lean_object* v___x_2853_; uint8_t v___x_2854_; 
v___x_2853_ = ((lean_object*)(l_Lean_Widget_widgetInstanceSpec___closed__3));
lean_inc(v___x_2852_);
v___x_2854_ = l_Lean_Syntax_isOfKind(v___x_2852_, v___x_2853_);
if (v___x_2854_ == 0)
{
lean_object* v___x_2855_; 
lean_dec(v___x_2852_);
lean_dec(v___x_2783_);
v___x_2855_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Widget_elabWidgetInstanceSpec_spec__0___redArg();
if (lean_obj_tag(v___x_2855_) == 0)
{
lean_dec_ref_known(v___x_2855_, 1);
v_a_2742_ = v___x_2749_;
goto v___jp_2741_;
}
else
{
return v___x_2855_;
}
}
else
{
v___y_2785_ = v___x_2852_;
goto v___jp_2784_;
}
}
else
{
v___y_2785_ = v___x_2852_;
goto v___jp_2784_;
}
}
}
}
else
{
lean_object* v___x_2859_; lean_object* v___x_2860_; uint8_t v___x_2861_; 
v___x_2859_ = l_Lean_Syntax_getArg(v___x_2755_, v___x_2754_);
lean_dec(v___x_2755_);
v___x_2860_ = ((lean_object*)(l_Lean_Widget_widgetInstanceSpec___closed__7));
lean_inc(v___x_2859_);
v___x_2861_ = l_Lean_Syntax_isOfKind(v___x_2859_, v___x_2860_);
if (v___x_2861_ == 0)
{
lean_object* v___x_2862_; 
lean_dec(v___x_2859_);
v___x_2862_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Widget_elabWidgetInstanceSpec_spec__0___redArg();
if (lean_obj_tag(v___x_2862_) == 0)
{
lean_dec_ref_known(v___x_2862_, 1);
v_a_2742_ = v___x_2749_;
goto v___jp_2741_;
}
else
{
return v___x_2862_;
}
}
else
{
lean_object* v_toCold_2863_; lean_object* v_ref_2864_; lean_object* v_quotContext_2865_; lean_object* v_currMacroScope_2866_; uint8_t v___x_2867_; lean_object* v___x_2868_; lean_object* v___x_2869_; lean_object* v___x_2870_; lean_object* v___x_2871_; lean_object* v___x_2872_; lean_object* v___x_2873_; lean_object* v___x_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; 
v_toCold_2863_ = lean_ctor_get(v___y_2738_, 0);
v_ref_2864_ = lean_ctor_get(v___y_2738_, 2);
v_quotContext_2865_ = lean_ctor_get(v_toCold_2863_, 8);
v_currMacroScope_2866_ = lean_ctor_get(v_toCold_2863_, 9);
v___x_2867_ = 0;
v___x_2868_ = l_Lean_SourceInfo_fromRef(v_ref_2864_, v___x_2867_);
v___x_2869_ = ((lean_object*)(l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__49));
v___x_2870_ = lean_obj_once(&l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__51, &l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__51_once, _init_l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__51);
v___x_2871_ = ((lean_object*)(l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__54));
lean_inc(v_currMacroScope_2866_);
lean_inc(v_quotContext_2865_);
v___x_2872_ = l_Lean_addMacroScope(v_quotContext_2865_, v___x_2871_, v_currMacroScope_2866_);
v___x_2873_ = ((lean_object*)(l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__57));
lean_inc_n(v___x_2868_, 2);
v___x_2874_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2874_, 0, v___x_2868_);
lean_ctor_set(v___x_2874_, 1, v___x_2870_);
lean_ctor_set(v___x_2874_, 2, v___x_2872_);
lean_ctor_set(v___x_2874_, 3, v___x_2873_);
v___x_2875_ = ((lean_object*)(l___private_Lean_Widget_Commands_0__Lean_Widget_elabWidgetInstanceSpecAux___closed__6));
v___x_2876_ = l_Lean_Syntax_node1(v___x_2868_, v___x_2875_, v___x_2859_);
v___x_2877_ = l_Lean_Syntax_node2(v___x_2868_, v___x_2869_, v___x_2874_, v___x_2876_);
v___x_2878_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__8___closed__8, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__8___closed__8_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__8___closed__8);
v___x_2879_ = l_Lean_Elab_Term_elabTerm(v___x_2877_, v___x_2878_, v___x_2729_, v___x_2729_, v___y_2734_, v___y_2735_, v___y_2736_, v___y_2737_, v___y_2738_, v___y_2739_);
if (lean_obj_tag(v___x_2879_) == 0)
{
lean_object* v_a_2880_; lean_object* v___x_2881_; 
v_a_2880_ = lean_ctor_get(v___x_2879_, 0);
lean_inc(v_a_2880_);
lean_dec_ref_known(v___x_2879_, 1);
v___x_2881_ = l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalModuleUnsafe(v_a_2880_, v___y_2736_, v___y_2737_, v___y_2738_, v___y_2739_);
if (lean_obj_tag(v___x_2881_) == 0)
{
lean_object* v_a_2882_; uint64_t v_javascriptHash_2883_; lean_object* v___x_2884_; 
v_a_2882_ = lean_ctor_get(v___x_2881_, 0);
lean_inc(v_a_2882_);
lean_dec_ref_known(v___x_2881_, 1);
v_javascriptHash_2883_ = lean_ctor_get_uint64(v_a_2882_, sizeof(void*)*1);
lean_dec(v_a_2882_);
v___x_2884_ = l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7___redArg(v_javascriptHash_2883_, v___y_2737_, v___y_2739_);
if (lean_obj_tag(v___x_2884_) == 0)
{
lean_dec_ref_known(v___x_2884_, 1);
v_a_2742_ = v___x_2749_;
goto v___jp_2741_;
}
else
{
return v___x_2884_;
}
}
else
{
lean_object* v_a_2885_; lean_object* v___x_2887_; uint8_t v_isShared_2888_; uint8_t v_isSharedCheck_2892_; 
v_a_2885_ = lean_ctor_get(v___x_2881_, 0);
v_isSharedCheck_2892_ = !lean_is_exclusive(v___x_2881_);
if (v_isSharedCheck_2892_ == 0)
{
v___x_2887_ = v___x_2881_;
v_isShared_2888_ = v_isSharedCheck_2892_;
goto v_resetjp_2886_;
}
else
{
lean_inc(v_a_2885_);
lean_dec(v___x_2881_);
v___x_2887_ = lean_box(0);
v_isShared_2888_ = v_isSharedCheck_2892_;
goto v_resetjp_2886_;
}
v_resetjp_2886_:
{
lean_object* v___x_2890_; 
if (v_isShared_2888_ == 0)
{
v___x_2890_ = v___x_2887_;
goto v_reusejp_2889_;
}
else
{
lean_object* v_reuseFailAlloc_2891_; 
v_reuseFailAlloc_2891_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2891_, 0, v_a_2885_);
v___x_2890_ = v_reuseFailAlloc_2891_;
goto v_reusejp_2889_;
}
v_reusejp_2889_:
{
return v___x_2890_;
}
}
}
}
else
{
lean_object* v_a_2893_; lean_object* v___x_2895_; uint8_t v_isShared_2896_; uint8_t v_isSharedCheck_2900_; 
v_a_2893_ = lean_ctor_get(v___x_2879_, 0);
v_isSharedCheck_2900_ = !lean_is_exclusive(v___x_2879_);
if (v_isSharedCheck_2900_ == 0)
{
v___x_2895_ = v___x_2879_;
v_isShared_2896_ = v_isSharedCheck_2900_;
goto v_resetjp_2894_;
}
else
{
lean_inc(v_a_2893_);
lean_dec(v___x_2879_);
v___x_2895_ = lean_box(0);
v_isShared_2896_ = v_isSharedCheck_2900_;
goto v_resetjp_2894_;
}
v_resetjp_2894_:
{
lean_object* v___x_2898_; 
if (v_isShared_2896_ == 0)
{
v___x_2898_ = v___x_2895_;
goto v_reusejp_2897_;
}
else
{
lean_object* v_reuseFailAlloc_2899_; 
v_reuseFailAlloc_2899_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2899_, 0, v_a_2893_);
v___x_2898_ = v_reuseFailAlloc_2899_;
goto v_reusejp_2897_;
}
v_reusejp_2897_:
{
return v___x_2898_;
}
}
}
}
}
}
}
v___jp_2741_:
{
size_t v___x_2743_; size_t v___x_2744_; 
v___x_2743_ = ((size_t)1ULL);
v___x_2744_ = lean_usize_add(v_i_2732_, v___x_2743_);
v_i_2732_ = v___x_2744_;
v_b_2733_ = v_a_2742_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__8___boxed(lean_object* v___x_2901_, lean_object* v_as_2902_, lean_object* v_sz_2903_, lean_object* v_i_2904_, lean_object* v_b_2905_, lean_object* v___y_2906_, lean_object* v___y_2907_, lean_object* v___y_2908_, lean_object* v___y_2909_, lean_object* v___y_2910_, lean_object* v___y_2911_, lean_object* v___y_2912_){
_start:
{
uint8_t v___x_30410__boxed_2913_; size_t v_sz_boxed_2914_; size_t v_i_boxed_2915_; lean_object* v_res_2916_; 
v___x_30410__boxed_2913_ = lean_unbox(v___x_2901_);
v_sz_boxed_2914_ = lean_unbox_usize(v_sz_2903_);
lean_dec(v_sz_2903_);
v_i_boxed_2915_ = lean_unbox_usize(v_i_2904_);
lean_dec(v_i_2904_);
v_res_2916_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__8(v___x_30410__boxed_2913_, v_as_2902_, v_sz_boxed_2914_, v_i_boxed_2915_, v_b_2905_, v___y_2906_, v___y_2907_, v___y_2908_, v___y_2909_, v___y_2910_, v___y_2911_);
lean_dec(v___y_2911_);
lean_dec_ref(v___y_2910_);
lean_dec(v___y_2909_);
lean_dec_ref(v___y_2908_);
lean_dec(v___y_2907_);
lean_dec_ref(v___y_2906_);
lean_dec_ref(v_as_2902_);
return v_res_2916_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_elabShowPanelWidgetsCmd___lam__0(uint8_t v___x_2917_, lean_object* v___x_2918_, size_t v_sz_2919_, size_t v___x_2920_, lean_object* v___x_2921_, lean_object* v___y_2922_, lean_object* v___y_2923_, lean_object* v___y_2924_, lean_object* v___y_2925_, lean_object* v___y_2926_, lean_object* v___y_2927_){
_start:
{
lean_object* v___x_2929_; 
v___x_2929_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__8(v___x_2917_, v___x_2918_, v_sz_2919_, v___x_2920_, v___x_2921_, v___y_2922_, v___y_2923_, v___y_2924_, v___y_2925_, v___y_2926_, v___y_2927_);
if (lean_obj_tag(v___x_2929_) == 0)
{
lean_object* v___x_2931_; uint8_t v_isShared_2932_; uint8_t v_isSharedCheck_2936_; 
v_isSharedCheck_2936_ = !lean_is_exclusive(v___x_2929_);
if (v_isSharedCheck_2936_ == 0)
{
lean_object* v_unused_2937_; 
v_unused_2937_ = lean_ctor_get(v___x_2929_, 0);
lean_dec(v_unused_2937_);
v___x_2931_ = v___x_2929_;
v_isShared_2932_ = v_isSharedCheck_2936_;
goto v_resetjp_2930_;
}
else
{
lean_dec(v___x_2929_);
v___x_2931_ = lean_box(0);
v_isShared_2932_ = v_isSharedCheck_2936_;
goto v_resetjp_2930_;
}
v_resetjp_2930_:
{
lean_object* v___x_2934_; 
if (v_isShared_2932_ == 0)
{
lean_ctor_set(v___x_2931_, 0, v___x_2921_);
v___x_2934_ = v___x_2931_;
goto v_reusejp_2933_;
}
else
{
lean_object* v_reuseFailAlloc_2935_; 
v_reuseFailAlloc_2935_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2935_, 0, v___x_2921_);
v___x_2934_ = v_reuseFailAlloc_2935_;
goto v_reusejp_2933_;
}
v_reusejp_2933_:
{
return v___x_2934_;
}
}
}
else
{
return v___x_2929_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_elabShowPanelWidgetsCmd___lam__0___boxed(lean_object* v___x_2938_, lean_object* v___x_2939_, lean_object* v_sz_2940_, lean_object* v___x_2941_, lean_object* v___x_2942_, lean_object* v___y_2943_, lean_object* v___y_2944_, lean_object* v___y_2945_, lean_object* v___y_2946_, lean_object* v___y_2947_, lean_object* v___y_2948_, lean_object* v___y_2949_){
_start:
{
uint8_t v___x_30778__boxed_2950_; size_t v_sz_boxed_2951_; size_t v___x_30780__boxed_2952_; lean_object* v_res_2953_; 
v___x_30778__boxed_2950_ = lean_unbox(v___x_2938_);
v_sz_boxed_2951_ = lean_unbox_usize(v_sz_2940_);
lean_dec(v_sz_2940_);
v___x_30780__boxed_2952_ = lean_unbox_usize(v___x_2941_);
lean_dec(v___x_2941_);
v_res_2953_ = l_Lean_Widget_elabShowPanelWidgetsCmd___lam__0(v___x_30778__boxed_2950_, v___x_2939_, v_sz_boxed_2951_, v___x_30780__boxed_2952_, v___x_2942_, v___y_2943_, v___y_2944_, v___y_2945_, v___y_2946_, v___y_2947_, v___y_2948_);
lean_dec(v___y_2948_);
lean_dec_ref(v___y_2947_);
lean_dec(v___y_2946_);
lean_dec_ref(v___y_2945_);
lean_dec(v___y_2944_);
lean_dec_ref(v___y_2943_);
lean_dec_ref(v___x_2939_);
return v_res_2953_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_elabShowPanelWidgetsCmd(lean_object* v_x_2956_, lean_object* v_a_2957_, lean_object* v_a_2958_){
_start:
{
lean_object* v___x_2960_; uint8_t v___x_2961_; 
v___x_2960_ = ((lean_object*)(l_Lean_Widget_showPanelWidgetsCmd___closed__1));
lean_inc(v_x_2956_);
v___x_2961_ = l_Lean_Syntax_isOfKind(v_x_2956_, v___x_2960_);
if (v___x_2961_ == 0)
{
lean_object* v___x_2962_; 
lean_dec(v_x_2956_);
v___x_2962_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__0___redArg();
return v___x_2962_;
}
else
{
lean_object* v___x_2963_; lean_object* v___x_2964_; lean_object* v_ws_2965_; lean_object* v___x_2966_; lean_object* v___x_2967_; size_t v_sz_2968_; lean_object* v___x_2969_; lean_object* v___x_2970_; lean_object* v___x_2971_; lean_object* v___f_2972_; lean_object* v___x_2973_; 
v___x_2963_ = lean_unsigned_to_nat(2u);
v___x_2964_ = l_Lean_Syntax_getArg(v_x_2956_, v___x_2963_);
lean_dec(v_x_2956_);
v_ws_2965_ = l_Lean_Syntax_getArgs(v___x_2964_);
lean_dec(v___x_2964_);
v___x_2966_ = l_Lean_Syntax_TSepArray_getElems___redArg(v_ws_2965_);
lean_dec_ref(v_ws_2965_);
v___x_2967_ = lean_box(0);
v_sz_2968_ = lean_array_size(v___x_2966_);
v___x_2969_ = lean_box(v___x_2961_);
v___x_2970_ = lean_box_usize(v_sz_2968_);
v___x_2971_ = ((lean_object*)(l_Lean_Widget_elabShowPanelWidgetsCmd___boxed__const__1));
v___f_2972_ = lean_alloc_closure((void*)(l_Lean_Widget_elabShowPanelWidgetsCmd___lam__0___boxed), 12, 5);
lean_closure_set(v___f_2972_, 0, v___x_2969_);
lean_closure_set(v___f_2972_, 1, v___x_2966_);
lean_closure_set(v___f_2972_, 2, v___x_2970_);
lean_closure_set(v___f_2972_, 3, v___x_2971_);
lean_closure_set(v___f_2972_, 4, v___x_2967_);
v___x_2973_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___f_2972_, v_a_2957_, v_a_2958_);
return v___x_2973_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_elabShowPanelWidgetsCmd___boxed(lean_object* v_x_2974_, lean_object* v_a_2975_, lean_object* v_a_2976_, lean_object* v_a_2977_){
_start:
{
lean_object* v_res_2978_; 
v_res_2978_ = l_Lean_Widget_elabShowPanelWidgetsCmd(v_x_2974_, v_a_2975_, v_a_2976_);
lean_dec(v_a_2976_);
lean_dec_ref(v_a_2975_);
return v_res_2978_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__2(lean_object* v_00_u03b1_2979_, lean_object* v_x_2980_, lean_object* v___y_2981_, lean_object* v___y_2982_){
_start:
{
lean_object* v___x_2983_; 
v___x_2983_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__2___redArg(v_x_2980_, v___y_2982_);
return v___x_2983_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__2___boxed(lean_object* v_00_u03b1_2984_, lean_object* v_x_2985_, lean_object* v___y_2986_, lean_object* v___y_2987_){
_start:
{
lean_object* v_res_2988_; 
v_res_2988_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__2(v_00_u03b1_2984_, v_x_2985_, v___y_2986_, v___y_2987_);
lean_dec_ref(v___y_2986_);
lean_dec_ref(v_x_2985_);
return v_res_2988_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__7(lean_object* v_00_u03b1_2989_, lean_object* v_ref_2990_, lean_object* v___y_2991_, lean_object* v___y_2992_, lean_object* v___y_2993_, lean_object* v___y_2994_, lean_object* v___y_2995_, lean_object* v___y_2996_){
_start:
{
lean_object* v___x_2998_; 
v___x_2998_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__7___redArg(v_ref_2990_);
return v___x_2998_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__7___boxed(lean_object* v_00_u03b1_2999_, lean_object* v_ref_3000_, lean_object* v___y_3001_, lean_object* v___y_3002_, lean_object* v___y_3003_, lean_object* v___y_3004_, lean_object* v___y_3005_, lean_object* v___y_3006_, lean_object* v___y_3007_){
_start:
{
lean_object* v_res_3008_; 
v_res_3008_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__7(v_00_u03b1_2999_, v_ref_3000_, v___y_3001_, v___y_3002_, v___y_3003_, v___y_3004_, v___y_3005_, v___y_3006_);
lean_dec(v___y_3006_);
lean_dec_ref(v___y_3005_);
lean_dec(v___y_3004_);
lean_dec_ref(v___y_3003_);
lean_dec(v___y_3002_);
lean_dec_ref(v___y_3001_);
return v_res_3008_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1(lean_object* v_00_u03b1_3009_, lean_object* v_x_3010_, lean_object* v___y_3011_, lean_object* v___y_3012_, lean_object* v___y_3013_, lean_object* v___y_3014_, lean_object* v___y_3015_, lean_object* v___y_3016_){
_start:
{
lean_object* v___x_3018_; 
v___x_3018_ = l_Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1___redArg(v_x_3010_, v___y_3011_, v___y_3012_, v___y_3013_, v___y_3014_, v___y_3015_, v___y_3016_);
return v___x_3018_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1___boxed(lean_object* v_00_u03b1_3019_, lean_object* v_x_3020_, lean_object* v___y_3021_, lean_object* v___y_3022_, lean_object* v___y_3023_, lean_object* v___y_3024_, lean_object* v___y_3025_, lean_object* v___y_3026_, lean_object* v___y_3027_){
_start:
{
lean_object* v_res_3028_; 
v_res_3028_ = l_Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1(v_00_u03b1_3019_, v_x_3020_, v___y_3021_, v___y_3022_, v___y_3023_, v___y_3024_, v___y_3025_, v___y_3026_);
lean_dec(v___y_3026_);
lean_dec_ref(v___y_3025_);
lean_dec(v___y_3024_);
lean_dec_ref(v___y_3023_);
lean_dec(v___y_3022_);
lean_dec_ref(v___y_3021_);
return v_res_3028_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_addPanelWidgetLocal___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__2(lean_object* v_wi_3029_, lean_object* v___y_3030_, lean_object* v___y_3031_, lean_object* v___y_3032_, lean_object* v___y_3033_, lean_object* v___y_3034_, lean_object* v___y_3035_){
_start:
{
lean_object* v___x_3037_; 
v___x_3037_ = l_Lean_Widget_addPanelWidgetLocal___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__2___redArg(v_wi_3029_, v___y_3033_, v___y_3035_);
return v___x_3037_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_addPanelWidgetLocal___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__2___boxed(lean_object* v_wi_3038_, lean_object* v___y_3039_, lean_object* v___y_3040_, lean_object* v___y_3041_, lean_object* v___y_3042_, lean_object* v___y_3043_, lean_object* v___y_3044_, lean_object* v___y_3045_){
_start:
{
lean_object* v_res_3046_; 
v_res_3046_ = l_Lean_Widget_addPanelWidgetLocal___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__2(v_wi_3038_, v___y_3039_, v___y_3040_, v___y_3041_, v___y_3042_, v___y_3043_, v___y_3044_);
lean_dec(v___y_3044_);
lean_dec_ref(v___y_3043_);
lean_dec(v___y_3042_);
lean_dec_ref(v___y_3041_);
lean_dec(v___y_3040_);
lean_dec_ref(v___y_3039_);
return v_res_3046_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Widget_addPanelWidgetGlobal___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__4_spec__13(lean_object* v_00_u03b1_3047_, lean_object* v_00_u03b2_3048_, lean_object* v_00_u03c3_3049_, lean_object* v_ext_3050_, lean_object* v_b_3051_, uint8_t v_kind_3052_, lean_object* v___y_3053_, lean_object* v___y_3054_, lean_object* v___y_3055_, lean_object* v___y_3056_, lean_object* v___y_3057_, lean_object* v___y_3058_){
_start:
{
lean_object* v___x_3060_; 
v___x_3060_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Widget_addPanelWidgetGlobal___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__4_spec__13___redArg(v_ext_3050_, v_b_3051_, v_kind_3052_, v___y_3056_, v___y_3057_, v___y_3058_);
return v___x_3060_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Widget_addPanelWidgetGlobal___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__4_spec__13___boxed(lean_object* v_00_u03b1_3061_, lean_object* v_00_u03b2_3062_, lean_object* v_00_u03c3_3063_, lean_object* v_ext_3064_, lean_object* v_b_3065_, lean_object* v_kind_3066_, lean_object* v___y_3067_, lean_object* v___y_3068_, lean_object* v___y_3069_, lean_object* v___y_3070_, lean_object* v___y_3071_, lean_object* v___y_3072_, lean_object* v___y_3073_){
_start:
{
uint8_t v_kind_boxed_3074_; lean_object* v_res_3075_; 
v_kind_boxed_3074_ = lean_unbox(v_kind_3066_);
v_res_3075_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Widget_addPanelWidgetGlobal___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__4_spec__13(v_00_u03b1_3061_, v_00_u03b2_3062_, v_00_u03c3_3063_, v_ext_3064_, v_b_3065_, v_kind_boxed_3074_, v___y_3067_, v___y_3068_, v___y_3069_, v___y_3070_, v___y_3071_, v___y_3072_);
lean_dec(v___y_3072_);
lean_dec_ref(v___y_3071_);
lean_dec(v___y_3070_);
lean_dec_ref(v___y_3069_);
lean_dec(v___y_3068_);
lean_dec_ref(v___y_3067_);
return v_res_3075_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6(lean_object* v_00_u03b1_3076_, lean_object* v_msg_3077_, lean_object* v___y_3078_, lean_object* v___y_3079_, lean_object* v___y_3080_, lean_object* v___y_3081_, lean_object* v___y_3082_, lean_object* v___y_3083_){
_start:
{
lean_object* v___x_3085_; 
v___x_3085_ = l_Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6___redArg(v_msg_3077_, v___y_3078_, v___y_3079_, v___y_3080_, v___y_3081_, v___y_3082_, v___y_3083_);
return v___x_3085_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6___boxed(lean_object* v_00_u03b1_3086_, lean_object* v_msg_3087_, lean_object* v___y_3088_, lean_object* v___y_3089_, lean_object* v___y_3090_, lean_object* v___y_3091_, lean_object* v___y_3092_, lean_object* v___y_3093_, lean_object* v___y_3094_){
_start:
{
lean_object* v_res_3095_; 
v_res_3095_ = l_Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6(v_00_u03b1_3086_, v_msg_3087_, v___y_3088_, v___y_3089_, v___y_3090_, v___y_3091_, v___y_3092_, v___y_3093_);
lean_dec(v___y_3093_);
lean_dec_ref(v___y_3092_);
lean_dec(v___y_3091_);
lean_dec_ref(v___y_3090_);
lean_dec(v___y_3089_);
lean_dec_ref(v___y_3088_);
return v_res_3095_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7(uint64_t v_h_3096_, lean_object* v___y_3097_, lean_object* v___y_3098_, lean_object* v___y_3099_, lean_object* v___y_3100_, lean_object* v___y_3101_, lean_object* v___y_3102_){
_start:
{
lean_object* v___x_3104_; 
v___x_3104_ = l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7___redArg(v_h_3096_, v___y_3100_, v___y_3102_);
return v___x_3104_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7___boxed(lean_object* v_h_3105_, lean_object* v___y_3106_, lean_object* v___y_3107_, lean_object* v___y_3108_, lean_object* v___y_3109_, lean_object* v___y_3110_, lean_object* v___y_3111_, lean_object* v___y_3112_){
_start:
{
uint64_t v_h_boxed_3113_; lean_object* v_res_3114_; 
v_h_boxed_3113_ = lean_unbox_uint64(v_h_3105_);
lean_dec_ref(v_h_3105_);
v_res_3114_ = l_Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7(v_h_boxed_3113_, v___y_3106_, v___y_3107_, v___y_3108_, v___y_3109_, v___y_3110_, v___y_3111_);
lean_dec(v___y_3111_);
lean_dec_ref(v___y_3110_);
lean_dec(v___y_3109_);
lean_dec_ref(v___y_3108_);
lean_dec(v___y_3107_);
lean_dec_ref(v___y_3106_);
return v_res_3114_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__1(lean_object* v_cls_3115_, lean_object* v_msg_3116_, lean_object* v___y_3117_, lean_object* v___y_3118_, lean_object* v___y_3119_, lean_object* v___y_3120_, lean_object* v___y_3121_, lean_object* v___y_3122_){
_start:
{
lean_object* v___x_3124_; 
v___x_3124_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__1___redArg(v_cls_3115_, v_msg_3116_, v___y_3119_, v___y_3120_, v___y_3121_, v___y_3122_);
return v___x_3124_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__1___boxed(lean_object* v_cls_3125_, lean_object* v_msg_3126_, lean_object* v___y_3127_, lean_object* v___y_3128_, lean_object* v___y_3129_, lean_object* v___y_3130_, lean_object* v___y_3131_, lean_object* v___y_3132_, lean_object* v___y_3133_){
_start:
{
lean_object* v_res_3134_; 
v_res_3134_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__1(v_cls_3125_, v_msg_3126_, v___y_3127_, v___y_3128_, v___y_3129_, v___y_3130_, v___y_3131_, v___y_3132_);
lean_dec(v___y_3132_);
lean_dec_ref(v___y_3131_);
lean_dec(v___y_3130_);
lean_dec_ref(v___y_3129_);
lean_dec(v___y_3128_);
lean_dec_ref(v___y_3127_);
return v_res_3134_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__4(lean_object* v_as_3135_, lean_object* v_as_x27_3136_, lean_object* v_b_3137_, lean_object* v_a_3138_, lean_object* v___y_3139_, lean_object* v___y_3140_, lean_object* v___y_3141_, lean_object* v___y_3142_, lean_object* v___y_3143_, lean_object* v___y_3144_){
_start:
{
lean_object* v___x_3146_; 
v___x_3146_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__4___redArg(v_as_x27_3136_, v_b_3137_, v___y_3139_, v___y_3140_, v___y_3141_, v___y_3142_, v___y_3143_, v___y_3144_);
return v___x_3146_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__4___boxed(lean_object* v_as_3147_, lean_object* v_as_x27_3148_, lean_object* v_b_3149_, lean_object* v_a_3150_, lean_object* v___y_3151_, lean_object* v___y_3152_, lean_object* v___y_3153_, lean_object* v___y_3154_, lean_object* v___y_3155_, lean_object* v___y_3156_, lean_object* v___y_3157_){
_start:
{
lean_object* v_res_3158_; 
v_res_3158_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__4(v_as_3147_, v_as_x27_3148_, v_b_3149_, v_a_3150_, v___y_3151_, v___y_3152_, v___y_3153_, v___y_3154_, v___y_3155_, v___y_3156_);
lean_dec(v___y_3156_);
lean_dec_ref(v___y_3155_);
lean_dec(v___y_3154_);
lean_dec_ref(v___y_3153_);
lean_dec(v___y_3152_);
lean_dec_ref(v___y_3151_);
lean_dec(v_as_x27_3148_);
lean_dec(v_as_3147_);
return v_res_3158_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__6(lean_object* v_00_u03b1_3159_, lean_object* v_ref_3160_, lean_object* v_msg_3161_, lean_object* v___y_3162_, lean_object* v___y_3163_, lean_object* v___y_3164_, lean_object* v___y_3165_, lean_object* v___y_3166_, lean_object* v___y_3167_){
_start:
{
lean_object* v___x_3169_; 
v___x_3169_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__6___redArg(v_ref_3160_, v_msg_3161_, v___y_3162_, v___y_3163_, v___y_3164_, v___y_3165_, v___y_3166_, v___y_3167_);
return v___x_3169_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__6___boxed(lean_object* v_00_u03b1_3170_, lean_object* v_ref_3171_, lean_object* v_msg_3172_, lean_object* v___y_3173_, lean_object* v___y_3174_, lean_object* v___y_3175_, lean_object* v___y_3176_, lean_object* v___y_3177_, lean_object* v___y_3178_, lean_object* v___y_3179_){
_start:
{
lean_object* v_res_3180_; 
v_res_3180_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__6(v_00_u03b1_3170_, v_ref_3171_, v_msg_3172_, v___y_3173_, v___y_3174_, v___y_3175_, v___y_3176_, v___y_3177_, v___y_3178_);
lean_dec(v___y_3178_);
lean_dec_ref(v___y_3177_);
lean_dec(v___y_3176_);
lean_dec_ref(v___y_3175_);
lean_dec(v___y_3174_);
lean_dec_ref(v___y_3173_);
lean_dec(v_ref_3171_);
return v_res_3180_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Widget_addPanelWidgetLocal___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__2_spec__9(lean_object* v_00_u03b4_3181_, lean_object* v_t_3182_, uint64_t v_k_3183_, lean_object* v_fallback_3184_){
_start:
{
lean_object* v___x_3185_; 
v___x_3185_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Widget_addPanelWidgetLocal___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__2_spec__9___redArg(v_t_3182_, v_k_3183_, v_fallback_3184_);
return v___x_3185_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Widget_addPanelWidgetLocal___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__2_spec__9___boxed(lean_object* v_00_u03b4_3186_, lean_object* v_t_3187_, lean_object* v_k_3188_, lean_object* v_fallback_3189_){
_start:
{
uint64_t v_k_boxed_3190_; lean_object* v_res_3191_; 
v_k_boxed_3190_ = lean_unbox_uint64(v_k_3188_);
lean_dec_ref(v_k_3188_);
v_res_3191_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Widget_addPanelWidgetLocal___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__2_spec__9(v_00_u03b4_3186_, v_t_3187_, v_k_boxed_3190_, v_fallback_3189_);
lean_dec(v_fallback_3189_);
lean_dec(v_t_3187_);
return v_res_3191_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Widget_addPanelWidgetLocal___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__2_spec__10(lean_object* v_00_u03b2_3192_, uint64_t v_k_3193_, lean_object* v_v_3194_, lean_object* v_t_3195_, lean_object* v_hl_3196_){
_start:
{
lean_object* v___x_3197_; 
v___x_3197_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Widget_addPanelWidgetLocal___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__2_spec__10___redArg(v_k_3193_, v_v_3194_, v_t_3195_);
return v___x_3197_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Widget_addPanelWidgetLocal___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__2_spec__10___boxed(lean_object* v_00_u03b2_3198_, lean_object* v_k_3199_, lean_object* v_v_3200_, lean_object* v_t_3201_, lean_object* v_hl_3202_){
_start:
{
uint64_t v_k_boxed_3203_; lean_object* v_res_3204_; 
v_k_boxed_3203_ = lean_unbox_uint64(v_k_3199_);
lean_dec_ref(v_k_3199_);
v_res_3204_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Widget_addPanelWidgetLocal___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__2_spec__10(v_00_u03b2_3198_, v_k_boxed_3203_, v_v_3200_, v_t_3201_, v_hl_3202_);
return v_res_3204_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__17(lean_object* v_msgData_3205_, lean_object* v_macroStack_3206_, lean_object* v___y_3207_, lean_object* v___y_3208_, lean_object* v___y_3209_, lean_object* v___y_3210_, lean_object* v___y_3211_, lean_object* v___y_3212_){
_start:
{
lean_object* v___x_3214_; 
v___x_3214_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__17___redArg(v_msgData_3205_, v_macroStack_3206_, v___y_3211_);
return v___x_3214_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__17___boxed(lean_object* v_msgData_3215_, lean_object* v_macroStack_3216_, lean_object* v___y_3217_, lean_object* v___y_3218_, lean_object* v___y_3219_, lean_object* v___y_3220_, lean_object* v___y_3221_, lean_object* v___y_3222_, lean_object* v___y_3223_){
_start:
{
lean_object* v_res_3224_; 
v_res_3224_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__6_spec__17(v_msgData_3215_, v_macroStack_3216_, v___y_3217_, v___y_3218_, v___y_3219_, v___y_3220_, v___y_3221_, v___y_3222_);
lean_dec(v___y_3222_);
lean_dec_ref(v___y_3221_);
lean_dec(v___y_3220_);
lean_dec_ref(v___y_3219_);
lean_dec(v___y_3218_);
lean_dec_ref(v___y_3217_);
return v_res_3224_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7_spec__19(lean_object* v_00_u03b2_3225_, uint64_t v_k_3226_, lean_object* v_t_3227_, lean_object* v_h_3228_){
_start:
{
lean_object* v___x_3229_; 
v___x_3229_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7_spec__19___redArg(v_k_3226_, v_t_3227_);
return v___x_3229_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7_spec__19___boxed(lean_object* v_00_u03b2_3230_, lean_object* v_k_3231_, lean_object* v_t_3232_, lean_object* v_h_3233_){
_start:
{
uint64_t v_k_boxed_3234_; lean_object* v_res_3235_; 
v_k_boxed_3234_ = lean_unbox_uint64(v_k_3231_);
lean_dec_ref(v_k_3231_);
v_res_3235_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Widget_erasePanelWidget___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__7_spec__19(v_00_u03b2_3230_, v_k_boxed_3234_, v_t_3232_, v_h_3233_);
return v_res_3235_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__7(lean_object* v_00_u03b2_3236_, lean_object* v_m_3237_, lean_object* v_a_3238_){
_start:
{
lean_object* v___x_3239_; 
v___x_3239_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__7___redArg(v_m_3237_, v_a_3238_);
return v___x_3239_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__7___boxed(lean_object* v_00_u03b2_3240_, lean_object* v_m_3241_, lean_object* v_a_3242_){
_start:
{
lean_object* v_res_3243_; 
v_res_3243_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__7(v_00_u03b2_3240_, v_m_3241_, v_a_3242_);
lean_dec(v_a_3242_);
lean_dec_ref(v_m_3241_);
return v_res_3243_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5_spec__15(lean_object* v_00_u03b2_3244_, lean_object* v_x_3245_, lean_object* v_x_3246_){
_start:
{
uint8_t v___x_3247_; 
v___x_3247_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5_spec__15___redArg(v_x_3245_, v_x_3246_);
return v___x_3247_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5_spec__15___boxed(lean_object* v_00_u03b2_3248_, lean_object* v_x_3249_, lean_object* v_x_3250_){
_start:
{
uint8_t v_res_3251_; lean_object* v_r_3252_; 
v_res_3251_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5_spec__15(v_00_u03b2_3248_, v_x_3249_, v_x_3250_);
lean_dec_ref(v_x_3250_);
lean_dec_ref(v_x_3249_);
v_r_3252_ = lean_box(v_res_3251_);
return v_r_3252_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__7_spec__18(lean_object* v_00_u03b2_3253_, lean_object* v_a_3254_, lean_object* v_x_3255_){
_start:
{
lean_object* v___x_3256_; 
v___x_3256_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__7_spec__18___redArg(v_a_3254_, v_x_3255_);
return v___x_3256_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__7_spec__18___boxed(lean_object* v_00_u03b2_3257_, lean_object* v_a_3258_, lean_object* v_x_3259_){
_start:
{
lean_object* v_res_3260_; 
v_res_3260_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__7_spec__18(v_00_u03b2_3257_, v_a_3258_, v_x_3259_);
lean_dec(v_x_3259_);
lean_dec(v_a_3258_);
return v_res_3260_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5_spec__15_spec__24(lean_object* v_00_u03b2_3261_, lean_object* v_x_3262_, size_t v_x_3263_, lean_object* v_x_3264_){
_start:
{
uint8_t v___x_3265_; 
v___x_3265_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5_spec__15_spec__24___redArg(v_x_3262_, v_x_3263_, v_x_3264_);
return v___x_3265_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5_spec__15_spec__24___boxed(lean_object* v_00_u03b2_3266_, lean_object* v_x_3267_, lean_object* v_x_3268_, lean_object* v_x_3269_){
_start:
{
size_t v_x_31142__boxed_3270_; uint8_t v_res_3271_; lean_object* v_r_3272_; 
v_x_31142__boxed_3270_ = lean_unbox_usize(v_x_3268_);
lean_dec(v_x_3268_);
v_res_3271_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5_spec__15_spec__24(v_00_u03b2_3266_, v_x_3267_, v_x_31142__boxed_3270_, v_x_3269_);
lean_dec_ref(v_x_3269_);
lean_dec_ref(v_x_3267_);
v_r_3272_ = lean_box(v_res_3271_);
return v_r_3272_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5_spec__15_spec__24_spec__28(lean_object* v_00_u03b2_3273_, lean_object* v_keys_3274_, lean_object* v_vals_3275_, lean_object* v_heq_3276_, lean_object* v_i_3277_, lean_object* v_k_3278_){
_start:
{
uint8_t v___x_3279_; 
v___x_3279_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5_spec__15_spec__24_spec__28___redArg(v_keys_3274_, v_i_3277_, v_k_3278_);
return v___x_3279_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5_spec__15_spec__24_spec__28___boxed(lean_object* v_00_u03b2_3280_, lean_object* v_keys_3281_, lean_object* v_vals_3282_, lean_object* v_heq_3283_, lean_object* v_i_3284_, lean_object* v_k_3285_){
_start:
{
uint8_t v_res_3286_; lean_object* v_r_3287_; 
v_res_3286_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__1_spec__3_spec__5_spec__15_spec__24_spec__28(v_00_u03b2_3280_, v_keys_3281_, v_vals_3282_, v_heq_3283_, v_i_3284_, v_k_3285_);
lean_dec_ref(v_k_3285_);
lean_dec_ref(v_vals_3282_);
lean_dec_ref(v_keys_3281_);
v_r_3287_ = lean_box(v_res_3286_);
return v_r_3287_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_elabWidgetCmd___lam__0(lean_object* v_s_3305_, lean_object* v_x_3306_, lean_object* v___y_3307_, lean_object* v___y_3308_, lean_object* v___y_3309_, lean_object* v___y_3310_, lean_object* v___y_3311_, lean_object* v___y_3312_){
_start:
{
lean_object* v___x_3314_; 
v___x_3314_ = l_Lean_Widget_elabWidgetInstanceSpec(v_s_3305_, v___y_3307_, v___y_3308_, v___y_3309_, v___y_3310_, v___y_3311_, v___y_3312_);
if (lean_obj_tag(v___x_3314_) == 0)
{
lean_object* v_a_3315_; lean_object* v___x_3316_; 
v_a_3315_ = lean_ctor_get(v___x_3314_, 0);
lean_inc(v_a_3315_);
lean_dec_ref_known(v___x_3314_, 1);
v___x_3316_ = l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalWidgetInstanceUnsafe(v_a_3315_, v___y_3309_, v___y_3310_, v___y_3311_, v___y_3312_);
if (lean_obj_tag(v___x_3316_) == 0)
{
lean_object* v_a_3317_; uint64_t v_javascriptHash_3318_; lean_object* v_props_3319_; lean_object* v___x_3320_; 
v_a_3317_ = lean_ctor_get(v___x_3316_, 0);
lean_inc(v_a_3317_);
lean_dec_ref_known(v___x_3316_, 1);
v_javascriptHash_3318_ = lean_ctor_get_uint64(v_a_3317_, sizeof(void*)*2);
v_props_3319_ = lean_ctor_get(v_a_3317_, 1);
lean_inc_ref(v_props_3319_);
lean_dec(v_a_3317_);
v___x_3320_ = l_Lean_Widget_savePanelWidgetInfo(v_javascriptHash_3318_, v_props_3319_, v_x_3306_, v___y_3311_, v___y_3312_);
return v___x_3320_;
}
else
{
lean_object* v_a_3321_; lean_object* v___x_3323_; uint8_t v_isShared_3324_; uint8_t v_isSharedCheck_3328_; 
lean_dec(v_x_3306_);
v_a_3321_ = lean_ctor_get(v___x_3316_, 0);
v_isSharedCheck_3328_ = !lean_is_exclusive(v___x_3316_);
if (v_isSharedCheck_3328_ == 0)
{
v___x_3323_ = v___x_3316_;
v_isShared_3324_ = v_isSharedCheck_3328_;
goto v_resetjp_3322_;
}
else
{
lean_inc(v_a_3321_);
lean_dec(v___x_3316_);
v___x_3323_ = lean_box(0);
v_isShared_3324_ = v_isSharedCheck_3328_;
goto v_resetjp_3322_;
}
v_resetjp_3322_:
{
lean_object* v___x_3326_; 
if (v_isShared_3324_ == 0)
{
v___x_3326_ = v___x_3323_;
goto v_reusejp_3325_;
}
else
{
lean_object* v_reuseFailAlloc_3327_; 
v_reuseFailAlloc_3327_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3327_, 0, v_a_3321_);
v___x_3326_ = v_reuseFailAlloc_3327_;
goto v_reusejp_3325_;
}
v_reusejp_3325_:
{
return v___x_3326_;
}
}
}
}
else
{
lean_object* v_a_3329_; lean_object* v___x_3331_; uint8_t v_isShared_3332_; uint8_t v_isSharedCheck_3336_; 
lean_dec(v_x_3306_);
v_a_3329_ = lean_ctor_get(v___x_3314_, 0);
v_isSharedCheck_3336_ = !lean_is_exclusive(v___x_3314_);
if (v_isSharedCheck_3336_ == 0)
{
v___x_3331_ = v___x_3314_;
v_isShared_3332_ = v_isSharedCheck_3336_;
goto v_resetjp_3330_;
}
else
{
lean_inc(v_a_3329_);
lean_dec(v___x_3314_);
v___x_3331_ = lean_box(0);
v_isShared_3332_ = v_isSharedCheck_3336_;
goto v_resetjp_3330_;
}
v_resetjp_3330_:
{
lean_object* v___x_3334_; 
if (v_isShared_3332_ == 0)
{
v___x_3334_ = v___x_3331_;
goto v_reusejp_3333_;
}
else
{
lean_object* v_reuseFailAlloc_3335_; 
v_reuseFailAlloc_3335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3335_, 0, v_a_3329_);
v___x_3334_ = v_reuseFailAlloc_3335_;
goto v_reusejp_3333_;
}
v_reusejp_3333_:
{
return v___x_3334_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_elabWidgetCmd___lam__0___boxed(lean_object* v_s_3337_, lean_object* v_x_3338_, lean_object* v___y_3339_, lean_object* v___y_3340_, lean_object* v___y_3341_, lean_object* v___y_3342_, lean_object* v___y_3343_, lean_object* v___y_3344_, lean_object* v___y_3345_){
_start:
{
lean_object* v_res_3346_; 
v_res_3346_ = l_Lean_Widget_elabWidgetCmd___lam__0(v_s_3337_, v_x_3338_, v___y_3339_, v___y_3340_, v___y_3341_, v___y_3342_, v___y_3343_, v___y_3344_);
lean_dec(v___y_3344_);
lean_dec_ref(v___y_3343_);
lean_dec(v___y_3342_);
lean_dec_ref(v___y_3341_);
lean_dec(v___y_3340_);
lean_dec_ref(v___y_3339_);
return v_res_3346_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_elabWidgetCmd(lean_object* v_x_3347_, lean_object* v_a_3348_, lean_object* v_a_3349_){
_start:
{
lean_object* v___x_3351_; uint8_t v___x_3352_; 
v___x_3351_ = ((lean_object*)(l_Lean_Widget_widgetCmd___closed__1));
lean_inc(v_x_3347_);
v___x_3352_ = l_Lean_Syntax_isOfKind(v_x_3347_, v___x_3351_);
if (v___x_3352_ == 0)
{
lean_object* v___x_3353_; 
lean_dec(v_x_3347_);
v___x_3353_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Widget_elabShowPanelWidgetsCmd_spec__0___redArg();
return v___x_3353_;
}
else
{
lean_object* v___x_3354_; lean_object* v_s_3355_; lean_object* v___f_3356_; lean_object* v___x_3357_; 
v___x_3354_ = lean_unsigned_to_nat(1u);
v_s_3355_ = l_Lean_Syntax_getArg(v_x_3347_, v___x_3354_);
v___f_3356_ = lean_alloc_closure((void*)(l_Lean_Widget_elabWidgetCmd___lam__0___boxed), 9, 2);
lean_closure_set(v___f_3356_, 0, v_s_3355_);
lean_closure_set(v___f_3356_, 1, v_x_3347_);
v___x_3357_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___f_3356_, v_a_3348_, v_a_3349_);
return v___x_3357_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_elabWidgetCmd___boxed(lean_object* v_x_3358_, lean_object* v_a_3359_, lean_object* v_a_3360_, lean_object* v_a_3361_){
_start:
{
lean_object* v_res_3362_; 
v_res_3362_ = l_Lean_Widget_elabWidgetCmd(v_x_3358_, v_a_3359_, v_a_3360_);
lean_dec(v_a_3360_);
lean_dec_ref(v_a_3359_);
return v_res_3362_;
}
}
lean_object* runtime_initialize_Init_Notation(uint8_t builtin);
lean_object* runtime_initialize_Lean_Attributes(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Widget_Commands(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Notation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Attributes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lean_Widget_UserWidget(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Widget_Commands(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lean_Widget_UserWidget(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Widget_UserWidget(uint8_t builtin);
lean_object* initialize_Init_Notation(uint8_t builtin);
lean_object* initialize_Lean_Attributes(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Widget_Commands(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Widget_UserWidget(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Notation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Attributes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Widget_Commands(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Widget_Commands(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Widget_Commands(builtin);
}
#ifdef __cplusplus
}
#endif

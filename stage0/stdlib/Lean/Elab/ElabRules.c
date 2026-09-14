// Lean compiler output
// Module: Lean.Elab.ElabRules
// Imports: public import Lean.Elab.MacroArgUtil public import Lean.Elab.AuxDef public import Lean.Elab.Do.Basic
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
lean_object* lean_array_get_size(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
extern lean_object* l_Lean_Elab_Command_instInhabitedScope_default;
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* l_Lean_mkPrivateName(lean_object*, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_privateToUserName(lean_object*);
lean_object* l_Lean_Elab_expandMacroImpl_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_getScope___redArg(lean_object*);
lean_object* l_Lean_ResolveName_resolveNamespace(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ResolveName_resolveGlobalName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_getRef___redArg(lean_object*);
lean_object* l_Lean_Elab_Command_getCurrMacroScope___redArg(lean_object*);
lean_object* l_Std_HashMap_instInhabited___redArg();
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Environment_header(lean_object*);
extern lean_object* l_Lean_instInhabitedEffectiveImport_default;
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_empty___redArg();
extern lean_object* l___private_Lean_ExtraModUses_0__Lean_extraModUses;
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableExtraModUse_hash(lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqExtraModUse_beq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
extern lean_object* l_Lean_inheritedTraceOptions;
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
extern lean_object* l_Lean_indirectModUseExt;
uint8_t l_Lean_isMarkedMeta(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabCommand(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray2___redArg(lean_object*, lean_object*);
lean_object* l_Array_mkArray1___redArg(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_Syntax_mkNumLit(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabSyntax(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_evalOptPrio___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandMacroArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_unzip___redArg(lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lean_Elab_Command_resolveSyntaxKind(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getQuotContent(lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
uint8_t l_Lean_Elab_Command_checkRuleKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_setArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isQuot(lean_object*);
lean_object* l_Lean_Syntax_TSepArray_ofElems___redArg(lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkIdent(lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkIdentFrom(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Syntax_TSepArray_getElems___redArg(lean_object*);
lean_object* l_Lean_Parser_Command_visibility_ofAttrKind(lean_object*);
lean_object* l_Array_mkArray5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandNoKindMacroRulesAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_adaptExpander(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Command_commandElabAttribute;
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkIdentFromRef___at___00Lean_Elab_Command_elabElabRulesAux_spec__0___redArg(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkIdentFromRef___at___00Lean_Elab_Command_elabElabRulesAux_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkIdentFromRef___at___00Lean_Elab_Command_elabElabRulesAux_spec__0(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkIdentFromRef___at___00Lean_Elab_Command_elabElabRulesAux_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabElabRulesAux_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabElabRulesAux_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabElabRulesAux_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabElabRulesAux_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabElabRulesAux_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabElabRulesAux_spec__2___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabElabRulesAux_spec__2___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabElabRulesAux_spec__2___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabElabRulesAux_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabElabRulesAux_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__0_value;
static const lean_string_object l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__1_value;
static const lean_string_object l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__2 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__2_value;
static const lean_string_object l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "attrInstance"};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__3 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(241, 75, 242, 110, 47, 5, 20, 104)}};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__4 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__4_value;
static const lean_string_object l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Attr"};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__5 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__5_value;
static const lean_string_object l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "simple"};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__6 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__7_value_aux_0),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__7_value_aux_1),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__5_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__7_value_aux_2),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__6_value),LEAN_SCALAR_PTR_LITERAL(107, 67, 254, 234, 65, 174, 209, 53)}};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__7 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__7_value;
static const lean_string_object l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__8 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__8_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__9 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabElabRulesAux___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabElabRulesAux___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__7_spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__7_spec__8___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__7_spec__9___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__7_spec__9___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__7_spec__9___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__7_spec__9___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__7_spec__9___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__7_spec__9___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__7_spec__9___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__7_spec__9___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__7_spec__9___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__7_spec__9___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__7_spec__9___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__7_spec__9(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__7___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__7___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__7___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__7___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__7___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__7___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__7___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__7___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__7___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__6___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__6___redArg___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__6___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__6___redArg___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__6___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__6___redArg___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__6___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__6___redArg___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__6___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__6___redArg___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__6___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__6___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Command_elabElabRulesAux_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Command_elabElabRulesAux_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabElabRulesAux_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabElabRulesAux_spec__4___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabElabRulesAux_spec__4___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabElabRulesAux_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabElabRulesAux_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 59, .m_data = "invalid elab_rules alternative, expected syntax node kind `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__3;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "matchAlt"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__4_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__5_value_aux_1),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__5_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__4_value),LEAN_SCALAR_PTR_LITERAL(178, 0, 203, 112, 215, 49, 100, 229)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "|"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__6_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__7;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "=>"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__8_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "choice"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__9_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__9_value),LEAN_SCALAR_PTR_LITERAL(59, 66, 148, 42, 181, 100, 85, 166)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__10_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "invalid elab_rules alternative, unexpected syntax node kind `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__11 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__11_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__12;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Command_elabElabRulesAux___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "attributes"};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__0 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__0_value;
static const lean_string_object l_Lean_Elab_Command_elabElabRulesAux___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "@["};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__1 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__1_value;
static const lean_string_object l_Lean_Elab_Command_elabElabRulesAux___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__2 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__2_value;
static const lean_string_object l_Lean_Elab_Command_elabElabRulesAux___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__3 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__3_value;
static const lean_string_object l_Lean_Elab_Command_elabElabRulesAux___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "elabRules"};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__4 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Command_elabElabRulesAux___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__5;
static const lean_ctor_object l_Lean_Elab_Command_elabElabRulesAux___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__4_value),LEAN_SCALAR_PTR_LITERAL(187, 124, 47, 85, 21, 141, 50, 117)}};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__6 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__6_value;
static const lean_string_object l_Lean_Elab_Command_elabElabRulesAux___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__7 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__7_value;
static const lean_string_object l_Lean_Elab_Command_elabElabRulesAux___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lean.Elab.Do.DoElab"};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__8 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__8_value;
static lean_once_cell_t l_Lean_Elab_Command_elabElabRulesAux___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__9;
static const lean_string_object l_Lean_Elab_Command_elabElabRulesAux___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Do"};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__10 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__10_value;
static const lean_string_object l_Lean_Elab_Command_elabElabRulesAux___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "DoElab"};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__11 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__11_value;
static const lean_string_object l_Lean_Elab_Command_elabElabRulesAux___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__12 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__12_value;
static const lean_string_object l_Lean_Elab_Command_elabElabRulesAux___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "fun"};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__13 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__13_value;
static const lean_string_object l_Lean_Elab_Command_elabElabRulesAux___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "basicFun"};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__14 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__14_value;
static const lean_string_object l_Lean_Elab_Command_elabElabRulesAux___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "stx"};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__15 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__15_value;
static lean_once_cell_t l_Lean_Elab_Command_elabElabRulesAux___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__16;
static const lean_ctor_object l_Lean_Elab_Command_elabElabRulesAux___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__15_value),LEAN_SCALAR_PTR_LITERAL(89, 124, 230, 186, 154, 11, 21, 78)}};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__17 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__17_value;
static const lean_string_object l_Lean_Elab_Command_elabElabRulesAux___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "match"};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__18 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__18_value;
static const lean_string_object l_Lean_Elab_Command_elabElabRulesAux___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "matchDiscr"};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__19 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__19_value;
static const lean_string_object l_Lean_Elab_Command_elabElabRulesAux___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "with"};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__20 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__20_value;
static const lean_string_object l_Lean_Elab_Command_elabElabRulesAux___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "matchAlts"};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__21 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__21_value;
static const lean_string_object l_Lean_Elab_Command_elabElabRulesAux___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hole"};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__22 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__22_value;
static const lean_string_object l_Lean_Elab_Command_elabElabRulesAux___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__23 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__23_value;
static const lean_string_object l_Lean_Elab_Command_elabElabRulesAux___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "noErrorIfUnused"};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__24 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__24_value;
static const lean_string_object l_Lean_Elab_Command_elabElabRulesAux___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "no_error_if_unused%"};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__25 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__25_value;
static const lean_string_object l_Lean_Elab_Command_elabElabRulesAux___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "throwUnsupportedSyntax"};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__26 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__26_value;
static lean_once_cell_t l_Lean_Elab_Command_elabElabRulesAux___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__27;
static const lean_ctor_object l_Lean_Elab_Command_elabElabRulesAux___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__26_value),LEAN_SCALAR_PTR_LITERAL(225, 251, 194, 35, 13, 152, 147, 184)}};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__28 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__28_value;
static const lean_string_object l_Lean_Elab_Command_elabElabRulesAux___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__29 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__29_value;
static const lean_string_object l_Lean_Elab_Command_elabElabRulesAux___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__30 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__30_value;
static const lean_string_object l_Lean_Elab_Command_elabElabRulesAux___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "aux_def"};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__31 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__31_value;
static const lean_ctor_object l_Lean_Elab_Command_elabElabRulesAux___closed__32_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabElabRulesAux___closed__32_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__32_value_aux_0),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__29_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_Command_elabElabRulesAux___closed__32_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__32_value_aux_1),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__30_value),LEAN_SCALAR_PTR_LITERAL(177, 181, 244, 12, 1, 14, 170, 235)}};
static const lean_ctor_object l_Lean_Elab_Command_elabElabRulesAux___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__32_value_aux_2),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__31_value),LEAN_SCALAR_PTR_LITERAL(83, 33, 36, 212, 17, 187, 86, 94)}};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__32 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__32_value;
static const lean_array_object l_Lean_Elab_Command_elabElabRulesAux___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__33 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__33_value;
static const lean_string_object l_Lean_Elab_Command_elabElabRulesAux___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lean.Elab.Term.TermElab"};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__34 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__34_value;
static lean_once_cell_t l_Lean_Elab_Command_elabElabRulesAux___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__35;
static const lean_string_object l_Lean_Elab_Command_elabElabRulesAux___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "TermElab"};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__36 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__36_value;
static const lean_string_object l_Lean_Elab_Command_elabElabRulesAux___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "expectedType\?"};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__37 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__37_value;
static lean_once_cell_t l_Lean_Elab_Command_elabElabRulesAux___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__38;
static const lean_ctor_object l_Lean_Elab_Command_elabElabRulesAux___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__37_value),LEAN_SCALAR_PTR_LITERAL(47, 72, 75, 114, 68, 52, 233, 214)}};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__39 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__39_value;
static const lean_string_object l_Lean_Elab_Command_elabElabRulesAux___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__40 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__40_value;
static const lean_string_object l_Lean_Elab_Command_elabElabRulesAux___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lean.Elab.Term.withExpectedType"};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__41 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__41_value;
static lean_once_cell_t l_Lean_Elab_Command_elabElabRulesAux___closed__42_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__42;
static const lean_string_object l_Lean_Elab_Command_elabElabRulesAux___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "withExpectedType"};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__43 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__43_value;
static const lean_string_object l_Lean_Elab_Command_elabElabRulesAux___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lean.Elab.Tactic.Tactic"};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__44 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__44_value;
static lean_once_cell_t l_Lean_Elab_Command_elabElabRulesAux___closed__45_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__45;
static const lean_string_object l_Lean_Elab_Command_elabElabRulesAux___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__46 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__46_value;
static const lean_string_object l_Lean_Elab_Command_elabElabRulesAux___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cont"};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__47 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__47_value;
static lean_once_cell_t l_Lean_Elab_Command_elabElabRulesAux___closed__48_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__48;
static const lean_ctor_object l_Lean_Elab_Command_elabElabRulesAux___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__47_value),LEAN_SCALAR_PTR_LITERAL(53, 231, 177, 147, 174, 255, 200, 174)}};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__49 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__49_value;
static const lean_string_object l_Lean_Elab_Command_elabElabRulesAux___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lean.Elab.Command.CommandElab"};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__50 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__50_value;
static lean_once_cell_t l_Lean_Elab_Command_elabElabRulesAux___closed__51_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__51;
static const lean_string_object l_Lean_Elab_Command_elabElabRulesAux___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "CommandElab"};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__52 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__52_value;
static const lean_string_object l_Lean_Elab_Command_elabElabRulesAux___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__53 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__53_value;
static const lean_ctor_object l_Lean_Elab_Command_elabElabRulesAux___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__53_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__54 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__54_value;
static const lean_string_object l_Lean_Elab_Command_elabElabRulesAux___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "doElem"};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__55 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__55_value;
static const lean_ctor_object l_Lean_Elab_Command_elabElabRulesAux___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__55_value),LEAN_SCALAR_PTR_LITERAL(224, 169, 39, 82, 97, 101, 60, 174)}};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__56 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__56_value;
static const lean_string_object l_Lean_Elab_Command_elabElabRulesAux___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "syntax category `"};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__57 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__57_value;
static lean_once_cell_t l_Lean_Elab_Command_elabElabRulesAux___closed__58_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__58;
static const lean_string_object l_Lean_Elab_Command_elabElabRulesAux___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "` does not support expected type specification"};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__59 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__59_value;
static lean_once_cell_t l_Lean_Elab_Command_elabElabRulesAux___closed__60_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__60;
static const lean_string_object l_Lean_Elab_Command_elabElabRulesAux___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "doElem_elab"};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__61 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__61_value;
static const lean_ctor_object l_Lean_Elab_Command_elabElabRulesAux___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__61_value),LEAN_SCALAR_PTR_LITERAL(211, 179, 163, 70, 253, 44, 85, 125)}};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__62 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__62_value;
static const lean_string_object l_Lean_Elab_Command_elabElabRulesAux___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "term_elab"};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__63 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__63_value;
static const lean_ctor_object l_Lean_Elab_Command_elabElabRulesAux___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__63_value),LEAN_SCALAR_PTR_LITERAL(226, 9, 43, 122, 104, 86, 206, 223)}};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__64 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__64_value;
static const lean_string_object l_Lean_Elab_Command_elabElabRulesAux___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "command"};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__65 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__65_value;
static const lean_ctor_object l_Lean_Elab_Command_elabElabRulesAux___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__65_value),LEAN_SCALAR_PTR_LITERAL(29, 69, 134, 125, 237, 175, 69, 70)}};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__66 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__66_value;
static const lean_string_object l_Lean_Elab_Command_elabElabRulesAux___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "tactic"};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__67 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__67_value;
static const lean_ctor_object l_Lean_Elab_Command_elabElabRulesAux___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__67_value),LEAN_SCALAR_PTR_LITERAL(99, 76, 33, 121, 85, 143, 17, 224)}};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__68 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__68_value;
static const lean_string_object l_Lean_Elab_Command_elabElabRulesAux___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "conv"};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__69 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__69_value;
static const lean_ctor_object l_Lean_Elab_Command_elabElabRulesAux___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__69_value),LEAN_SCALAR_PTR_LITERAL(232, 67, 39, 189, 45, 247, 54, 81)}};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__70 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__70_value;
static const lean_string_object l_Lean_Elab_Command_elabElabRulesAux___closed__71_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "unsupported syntax category `"};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__71 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__71_value;
static lean_once_cell_t l_Lean_Elab_Command_elabElabRulesAux___closed__72_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__72;
static const lean_string_object l_Lean_Elab_Command_elabElabRulesAux___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "command_elab"};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__73 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__73_value;
static const lean_ctor_object l_Lean_Elab_Command_elabElabRulesAux___closed__74_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__73_value),LEAN_SCALAR_PTR_LITERAL(7, 200, 102, 28, 219, 237, 42, 33)}};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__74 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__74_value;
static const lean_string_object l_Lean_Elab_Command_elabElabRulesAux___closed__75_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 76, .m_capacity = 76, .m_length = 75, .m_data = "invalid elab_rules command, specify category using `elab_rules : <cat> ...`"};
static const lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__75 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__75_value;
static lean_once_cell_t l_Lean_Elab_Command_elabElabRulesAux___closed__76_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabElabRulesAux___closed__76;
static const lean_ctor_object l_Lean_Elab_Command_elabElabRulesAux___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_Elab_Command_elabElabRulesAux___boxed__const__1 = (const lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___boxed__const__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabElabRulesAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabElabRulesAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Command_elabElabRulesAux_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Command_elabElabRulesAux_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabElabRules___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabElabRules___lam__0___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Command_elabElabRules___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "<="};
static const lean_object* l_Lean_Elab_Command_elabElabRules___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_Command_elabElabRules___lam__1___closed__0_value;
static const lean_string_object l_Lean_Elab_Command_elabElabRules___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Lean_Elab_Command_elabElabRules___lam__1___closed__1 = (const lean_object*)&l_Lean_Elab_Command_elabElabRules___lam__1___closed__1_value;
static const lean_string_object l_Lean_Elab_Command_elabElabRules___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "kind"};
static const lean_object* l_Lean_Elab_Command_elabElabRules___lam__1___closed__2 = (const lean_object*)&l_Lean_Elab_Command_elabElabRules___lam__1___closed__2_value;
static const lean_string_object l_Lean_Elab_Command_elabElabRules___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lean_Elab_Command_elabElabRules___lam__1___closed__3 = (const lean_object*)&l_Lean_Elab_Command_elabElabRules___lam__1___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabElabRules___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabElabRules___lam__1___boxed(lean_object**);
static const lean_string_object l_Lean_Elab_Command_elabElabRules___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "elab_rules"};
static const lean_object* l_Lean_Elab_Command_elabElabRules___lam__2___closed__0 = (const lean_object*)&l_Lean_Elab_Command_elabElabRules___lam__2___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Command_elabElabRules___lam__2___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabElabRules___lam__2___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabElabRules___lam__2___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_elabElabRules___lam__2___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabElabRules___lam__2___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__30_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Command_elabElabRules___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabElabRules___lam__2___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Command_elabElabRules___lam__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(60, 70, 226, 250, 127, 121, 118, 247)}};
static const lean_object* l_Lean_Elab_Command_elabElabRules___lam__2___closed__1 = (const lean_object*)&l_Lean_Elab_Command_elabElabRules___lam__2___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Command_elabElabRules___lam__2___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabElabRules___lam__2___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabElabRules___lam__2___closed__2_value_aux_0),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_elabElabRules___lam__2___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabElabRules___lam__2___closed__2_value_aux_1),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Command_elabElabRules___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabElabRules___lam__2___closed__2_value_aux_2),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__21_value),LEAN_SCALAR_PTR_LITERAL(193, 186, 26, 109, 82, 172, 197, 183)}};
static const lean_object* l_Lean_Elab_Command_elabElabRules___lam__2___closed__2 = (const lean_object*)&l_Lean_Elab_Command_elabElabRules___lam__2___closed__2_value;
static const lean_string_object l_Lean_Elab_Command_elabElabRules___lam__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "attrKind"};
static const lean_object* l_Lean_Elab_Command_elabElabRules___lam__2___closed__3 = (const lean_object*)&l_Lean_Elab_Command_elabElabRules___lam__2___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Command_elabElabRules___lam__2___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabElabRules___lam__2___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabElabRules___lam__2___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_elabElabRules___lam__2___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabElabRules___lam__2___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Command_elabElabRules___lam__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabElabRules___lam__2___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_Command_elabElabRules___lam__2___closed__3_value),LEAN_SCALAR_PTR_LITERAL(32, 164, 20, 104, 12, 221, 204, 110)}};
static const lean_object* l_Lean_Elab_Command_elabElabRules___lam__2___closed__4 = (const lean_object*)&l_Lean_Elab_Command_elabElabRules___lam__2___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Command_elabElabRules___lam__2___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabElabRules___lam__2___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabElabRules___lam__2___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_elabElabRules___lam__2___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabElabRules___lam__2___closed__5_value_aux_1),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Command_elabElabRules___lam__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabElabRules___lam__2___closed__5_value_aux_2),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__0_value),LEAN_SCALAR_PTR_LITERAL(66, 184, 196, 169, 25, 125, 40, 35)}};
static const lean_object* l_Lean_Elab_Command_elabElabRules___lam__2___closed__5 = (const lean_object*)&l_Lean_Elab_Command_elabElabRules___lam__2___closed__5_value;
static const lean_string_object l_Lean_Elab_Command_elabElabRules___lam__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "docComment"};
static const lean_object* l_Lean_Elab_Command_elabElabRules___lam__2___closed__6 = (const lean_object*)&l_Lean_Elab_Command_elabElabRules___lam__2___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Command_elabElabRules___lam__2___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabElabRules___lam__2___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabElabRules___lam__2___closed__7_value_aux_0),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_elabElabRules___lam__2___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabElabRules___lam__2___closed__7_value_aux_1),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__30_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Command_elabElabRules___lam__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabElabRules___lam__2___closed__7_value_aux_2),((lean_object*)&l_Lean_Elab_Command_elabElabRules___lam__2___closed__6_value),LEAN_SCALAR_PTR_LITERAL(44, 76, 179, 33, 27, 4, 201, 125)}};
static const lean_object* l_Lean_Elab_Command_elabElabRules___lam__2___closed__7 = (const lean_object*)&l_Lean_Elab_Command_elabElabRules___lam__2___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabElabRules___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabElabRules___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Command_elabElabRules___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Command_elabElabRules___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Command_elabElabRules___closed__0 = (const lean_object*)&l_Lean_Elab_Command_elabElabRules___closed__0_value;
static const lean_closure_object l_Lean_Elab_Command_elabElabRules___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Command_elabElabRules___lam__2___boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabElabRules___closed__0_value)} };
static const lean_object* l_Lean_Elab_Command_elabElabRules___closed__1 = (const lean_object*)&l_Lean_Elab_Command_elabElabRules___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabElabRules(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabElabRules___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElabRules___regBuiltin_Lean_Elab_Command_elabElabRules__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "elabElabRules"};
static const lean_object* l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElabRules___regBuiltin_Lean_Elab_Command_elabElabRules__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElabRules___regBuiltin_Lean_Elab_Command_elabElabRules__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElabRules___regBuiltin_Lean_Elab_Command_elabElabRules__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElabRules___regBuiltin_Lean_Elab_Command_elabElabRules__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElabRules___regBuiltin_Lean_Elab_Command_elabElabRules__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__29_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElabRules___regBuiltin_Lean_Elab_Command_elabElabRules__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElabRules___regBuiltin_Lean_Elab_Command_elabElabRules__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__30_value),LEAN_SCALAR_PTR_LITERAL(177, 181, 244, 12, 1, 14, 170, 235)}};
static const lean_ctor_object l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElabRules___regBuiltin_Lean_Elab_Command_elabElabRules__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElabRules___regBuiltin_Lean_Elab_Command_elabElabRules__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElabRules___regBuiltin_Lean_Elab_Command_elabElabRules__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(195, 97, 52, 186, 206, 196, 221, 235)}};
static const lean_object* l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElabRules___regBuiltin_Lean_Elab_Command_elabElabRules__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElabRules___regBuiltin_Lean_Elab_Command_elabElabRules__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElabRules___regBuiltin_Lean_Elab_Command_elabElabRules__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElabRules___regBuiltin_Lean_Elab_Command_elabElabRules__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElabRules___regBuiltin_Lean_Elab_Command_elabElabRules_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(74) << 1) | 1)),((lean_object*)(((size_t)(37) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElabRules___regBuiltin_Lean_Elab_Command_elabElabRules_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElabRules___regBuiltin_Lean_Elab_Command_elabElabRules_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElabRules___regBuiltin_Lean_Elab_Command_elabElabRules_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(81) << 1) | 1)),((lean_object*)(((size_t)(32) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElabRules___regBuiltin_Lean_Elab_Command_elabElabRules_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElabRules___regBuiltin_Lean_Elab_Command_elabElabRules_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElabRules___regBuiltin_Lean_Elab_Command_elabElabRules_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElabRules___regBuiltin_Lean_Elab_Command_elabElabRules_declRange__3___closed__0_value),((lean_object*)(((size_t)(37) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElabRules___regBuiltin_Lean_Elab_Command_elabElabRules_declRange__3___closed__1_value),((lean_object*)(((size_t)(32) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElabRules___regBuiltin_Lean_Elab_Command_elabElabRules_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElabRules___regBuiltin_Lean_Elab_Command_elabElabRules_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElabRules___regBuiltin_Lean_Elab_Command_elabElabRules_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(74) << 1) | 1)),((lean_object*)(((size_t)(41) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElabRules___regBuiltin_Lean_Elab_Command_elabElabRules_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElabRules___regBuiltin_Lean_Elab_Command_elabElabRules_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElabRules___regBuiltin_Lean_Elab_Command_elabElabRules_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(74) << 1) | 1)),((lean_object*)(((size_t)(54) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElabRules___regBuiltin_Lean_Elab_Command_elabElabRules_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElabRules___regBuiltin_Lean_Elab_Command_elabElabRules_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElabRules___regBuiltin_Lean_Elab_Command_elabElabRules_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElabRules___regBuiltin_Lean_Elab_Command_elabElabRules_declRange__3___closed__3_value),((lean_object*)(((size_t)(41) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElabRules___regBuiltin_Lean_Elab_Command_elabElabRules_declRange__3___closed__4_value),((lean_object*)(((size_t)(54) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElabRules___regBuiltin_Lean_Elab_Command_elabElabRules_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElabRules___regBuiltin_Lean_Elab_Command_elabElabRules_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElabRules___regBuiltin_Lean_Elab_Command_elabElabRules_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElabRules___regBuiltin_Lean_Elab_Command_elabElabRules_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElabRules___regBuiltin_Lean_Elab_Command_elabElabRules_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElabRules___regBuiltin_Lean_Elab_Command_elabElabRules_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElabRules___regBuiltin_Lean_Elab_Command_elabElabRules_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElabRules___regBuiltin_Lean_Elab_Command_elabElabRules_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElabRules___regBuiltin_Lean_Elab_Command_elabElabRules_declRange__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElab_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElab_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElab_spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElab_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3_spec__7_spec__10_spec__13___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3_spec__7_spec__10_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3_spec__7_spec__10___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3_spec__7_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3_spec__7___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3_spec__7___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__0___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__0___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__0___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__0;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__1;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "extraModUses"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__2 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__2_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(27, 95, 70, 98, 97, 66, 56, 109)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__3 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__3_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " extra mod use "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__4 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__4_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__5;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " of "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__6 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__6_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__7;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__8;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__9 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__9_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__9_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__10 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__10_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__11;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "recording "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__12 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__12_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__13;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__14 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__14_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__15;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "regular"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__16 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__16_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__17 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__17_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__18 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__18_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__19 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__19_value;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__4(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__5_spec__10___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__5_spec__10___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2___closed__0;
static const lean_array_object l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2___closed__1 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__5___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__5___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__5___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__5___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__5___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__5___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__5___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__5___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__5___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__5___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__5___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__5___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__5___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__5___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__5___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__5___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__5___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__5___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__5___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__5___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 158, .m_capacity = 158, .m_length = 157, .m_data = "maximum recursion depth has been reached\nuse `set_option maxRecDepth <num>` to increase limit\nuse `set_option diagnostics true` to get diagnostic information"};
static const lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Command_elabElab___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "quot"};
static const lean_object* l_Lean_Elab_Command_elabElab___closed__0 = (const lean_object*)&l_Lean_Elab_Command_elabElab___closed__0_value;
static const lean_string_object l_Lean_Elab_Command_elabElab___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`("};
static const lean_object* l_Lean_Elab_Command_elabElab___closed__1 = (const lean_object*)&l_Lean_Elab_Command_elabElab___closed__1_value;
static const lean_string_object l_Lean_Elab_Command_elabElab___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "elab"};
static const lean_object* l_Lean_Elab_Command_elabElab___closed__2 = (const lean_object*)&l_Lean_Elab_Command_elabElab___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Command_elabElab___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabElab___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabElab___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_elabElab___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabElab___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__30_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Command_elabElab___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabElab___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_Command_elabElab___closed__2_value),LEAN_SCALAR_PTR_LITERAL(160, 177, 45, 203, 60, 20, 245, 118)}};
static const lean_object* l_Lean_Elab_Command_elabElab___closed__3 = (const lean_object*)&l_Lean_Elab_Command_elabElab___closed__3_value;
static const lean_string_object l_Lean_Elab_Command_elabElab___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "namedPrio"};
static const lean_object* l_Lean_Elab_Command_elabElab___closed__4 = (const lean_object*)&l_Lean_Elab_Command_elabElab___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Command_elabElab___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabElab___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabElab___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_elabElab___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabElab___closed__5_value_aux_1),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__30_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Command_elabElab___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabElab___closed__5_value_aux_2),((lean_object*)&l_Lean_Elab_Command_elabElab___closed__4_value),LEAN_SCALAR_PTR_LITERAL(171, 32, 2, 102, 118, 75, 64, 185)}};
static const lean_object* l_Lean_Elab_Command_elabElab___closed__5 = (const lean_object*)&l_Lean_Elab_Command_elabElab___closed__5_value;
static const lean_string_object l_Lean_Elab_Command_elabElab___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "priority"};
static const lean_object* l_Lean_Elab_Command_elabElab___closed__6 = (const lean_object*)&l_Lean_Elab_Command_elabElab___closed__6_value;
static const lean_string_object l_Lean_Elab_Command_elabElab___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "namedName"};
static const lean_object* l_Lean_Elab_Command_elabElab___closed__7 = (const lean_object*)&l_Lean_Elab_Command_elabElab___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Command_elabElab___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabElab___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabElab___closed__8_value_aux_0),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_elabElab___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabElab___closed__8_value_aux_1),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__30_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Command_elabElab___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabElab___closed__8_value_aux_2),((lean_object*)&l_Lean_Elab_Command_elabElab___closed__7_value),LEAN_SCALAR_PTR_LITERAL(73, 173, 122, 11, 5, 195, 101, 245)}};
static const lean_object* l_Lean_Elab_Command_elabElab___closed__8 = (const lean_object*)&l_Lean_Elab_Command_elabElab___closed__8_value;
static const lean_string_object l_Lean_Elab_Command_elabElab___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l_Lean_Elab_Command_elabElab___closed__9 = (const lean_object*)&l_Lean_Elab_Command_elabElab___closed__9_value;
static const lean_string_object l_Lean_Elab_Command_elabElab___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "precedence"};
static const lean_object* l_Lean_Elab_Command_elabElab___closed__10 = (const lean_object*)&l_Lean_Elab_Command_elabElab___closed__10_value;
static const lean_ctor_object l_Lean_Elab_Command_elabElab___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabElab___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabElab___closed__11_value_aux_0),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_elabElab___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabElab___closed__11_value_aux_1),((lean_object*)&l_Lean_Elab_Command_elabElab___closed__10_value),LEAN_SCALAR_PTR_LITERAL(69, 243, 176, 51, 48, 112, 202, 160)}};
static const lean_object* l_Lean_Elab_Command_elabElab___closed__11 = (const lean_object*)&l_Lean_Elab_Command_elabElab___closed__11_value;
static const lean_string_object l_Lean_Elab_Command_elabElab___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "syntax"};
static const lean_object* l_Lean_Elab_Command_elabElab___closed__12 = (const lean_object*)&l_Lean_Elab_Command_elabElab___closed__12_value;
static const lean_ctor_object l_Lean_Elab_Command_elabElab___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabElab___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabElab___closed__13_value_aux_0),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_elabElab___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabElab___closed__13_value_aux_1),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__30_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Command_elabElab___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabElab___closed__13_value_aux_2),((lean_object*)&l_Lean_Elab_Command_elabElab___closed__12_value),LEAN_SCALAR_PTR_LITERAL(39, 60, 146, 133, 142, 21, 8, 39)}};
static const lean_object* l_Lean_Elab_Command_elabElab___closed__13 = (const lean_object*)&l_Lean_Elab_Command_elabElab___closed__13_value;
static const lean_string_object l_Lean_Elab_Command_elabElab___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "elabTail"};
static const lean_object* l_Lean_Elab_Command_elabElab___closed__14 = (const lean_object*)&l_Lean_Elab_Command_elabElab___closed__14_value;
static const lean_ctor_object l_Lean_Elab_Command_elabElab___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabElab___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabElab___closed__15_value_aux_0),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_elabElab___closed__15_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabElab___closed__15_value_aux_1),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__30_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Command_elabElab___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabElab___closed__15_value_aux_2),((lean_object*)&l_Lean_Elab_Command_elabElab___closed__14_value),LEAN_SCALAR_PTR_LITERAL(131, 240, 225, 71, 37, 75, 83, 37)}};
static const lean_object* l_Lean_Elab_Command_elabElab___closed__15 = (const lean_object*)&l_Lean_Elab_Command_elabElab___closed__15_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabElab(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabElab___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3_spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__5_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__5_spec__10___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3_spec__7_spec__10(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3_spec__7_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3_spec__7_spec__10_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3_spec__7_spec__10_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElab___regBuiltin_Lean_Elab_Command_elabElab__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "elabElab"};
static const lean_object* l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElab___regBuiltin_Lean_Elab_Command_elabElab__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElab___regBuiltin_Lean_Elab_Command_elabElab__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElab___regBuiltin_Lean_Elab_Command_elabElab__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElab___regBuiltin_Lean_Elab_Command_elabElab__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElab___regBuiltin_Lean_Elab_Command_elabElab__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__29_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElab___regBuiltin_Lean_Elab_Command_elabElab__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElab___regBuiltin_Lean_Elab_Command_elabElab__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Command_elabElabRulesAux___closed__30_value),LEAN_SCALAR_PTR_LITERAL(177, 181, 244, 12, 1, 14, 170, 235)}};
static const lean_ctor_object l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElab___regBuiltin_Lean_Elab_Command_elabElab__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElab___regBuiltin_Lean_Elab_Command_elabElab__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElab___regBuiltin_Lean_Elab_Command_elabElab__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(64, 235, 135, 254, 44, 234, 233, 9)}};
static const lean_object* l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElab___regBuiltin_Lean_Elab_Command_elabElab__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElab___regBuiltin_Lean_Elab_Command_elabElab__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElab___regBuiltin_Lean_Elab_Command_elabElab__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElab___regBuiltin_Lean_Elab_Command_elabElab__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElab___regBuiltin_Lean_Elab_Command_elabElab_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(84) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElab___regBuiltin_Lean_Elab_Command_elabElab_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElab___regBuiltin_Lean_Elab_Command_elabElab_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElab___regBuiltin_Lean_Elab_Command_elabElab_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(100) << 1) | 1)),((lean_object*)(((size_t)(31) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElab___regBuiltin_Lean_Elab_Command_elabElab_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElab___regBuiltin_Lean_Elab_Command_elabElab_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElab___regBuiltin_Lean_Elab_Command_elabElab_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElab___regBuiltin_Lean_Elab_Command_elabElab_declRange__3___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElab___regBuiltin_Lean_Elab_Command_elabElab_declRange__3___closed__1_value),((lean_object*)(((size_t)(31) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElab___regBuiltin_Lean_Elab_Command_elabElab_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElab___regBuiltin_Lean_Elab_Command_elabElab_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElab___regBuiltin_Lean_Elab_Command_elabElab_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(84) << 1) | 1)),((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElab___regBuiltin_Lean_Elab_Command_elabElab_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElab___regBuiltin_Lean_Elab_Command_elabElab_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElab___regBuiltin_Lean_Elab_Command_elabElab_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(84) << 1) | 1)),((lean_object*)(((size_t)(12) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElab___regBuiltin_Lean_Elab_Command_elabElab_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElab___regBuiltin_Lean_Elab_Command_elabElab_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElab___regBuiltin_Lean_Elab_Command_elabElab_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElab___regBuiltin_Lean_Elab_Command_elabElab_declRange__3___closed__3_value),((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElab___regBuiltin_Lean_Elab_Command_elabElab_declRange__3___closed__4_value),((lean_object*)(((size_t)(12) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElab___regBuiltin_Lean_Elab_Command_elabElab_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElab___regBuiltin_Lean_Elab_Command_elabElab_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElab___regBuiltin_Lean_Elab_Command_elabElab_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElab___regBuiltin_Lean_Elab_Command_elabElab_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElab___regBuiltin_Lean_Elab_Command_elabElab_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElab___regBuiltin_Lean_Elab_Command_elabElab_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElab___regBuiltin_Lean_Elab_Command_elabElab_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElab___regBuiltin_Lean_Elab_Command_elabElab_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElab___regBuiltin_Lean_Elab_Command_elabElab_declRange__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkIdentFromRef___at___00Lean_Elab_Command_elabElabRulesAux_spec__0___redArg(lean_object* v_val_1_, uint8_t v_canonical_2_, lean_object* v___y_3_){
_start:
{
lean_object* v___x_5_; 
v___x_5_ = l_Lean_Elab_Command_getRef___redArg(v___y_3_);
if (lean_obj_tag(v___x_5_) == 0)
{
lean_object* v_a_6_; lean_object* v___x_8_; uint8_t v_isShared_9_; uint8_t v_isSharedCheck_14_; 
v_a_6_ = lean_ctor_get(v___x_5_, 0);
v_isSharedCheck_14_ = !lean_is_exclusive(v___x_5_);
if (v_isSharedCheck_14_ == 0)
{
v___x_8_ = v___x_5_;
v_isShared_9_ = v_isSharedCheck_14_;
goto v_resetjp_7_;
}
else
{
lean_inc(v_a_6_);
lean_dec(v___x_5_);
v___x_8_ = lean_box(0);
v_isShared_9_ = v_isSharedCheck_14_;
goto v_resetjp_7_;
}
v_resetjp_7_:
{
lean_object* v___x_10_; lean_object* v___x_12_; 
v___x_10_ = l_Lean_mkIdentFrom(v_a_6_, v_val_1_, v_canonical_2_);
lean_dec(v_a_6_);
if (v_isShared_9_ == 0)
{
lean_ctor_set(v___x_8_, 0, v___x_10_);
v___x_12_ = v___x_8_;
goto v_reusejp_11_;
}
else
{
lean_object* v_reuseFailAlloc_13_; 
v_reuseFailAlloc_13_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_13_, 0, v___x_10_);
v___x_12_ = v_reuseFailAlloc_13_;
goto v_reusejp_11_;
}
v_reusejp_11_:
{
return v___x_12_;
}
}
}
else
{
lean_object* v_a_15_; lean_object* v___x_17_; uint8_t v_isShared_18_; uint8_t v_isSharedCheck_22_; 
lean_dec(v_val_1_);
v_a_15_ = lean_ctor_get(v___x_5_, 0);
v_isSharedCheck_22_ = !lean_is_exclusive(v___x_5_);
if (v_isSharedCheck_22_ == 0)
{
v___x_17_ = v___x_5_;
v_isShared_18_ = v_isSharedCheck_22_;
goto v_resetjp_16_;
}
else
{
lean_inc(v_a_15_);
lean_dec(v___x_5_);
v___x_17_ = lean_box(0);
v_isShared_18_ = v_isSharedCheck_22_;
goto v_resetjp_16_;
}
v_resetjp_16_:
{
lean_object* v___x_20_; 
if (v_isShared_18_ == 0)
{
v___x_20_ = v___x_17_;
goto v_reusejp_19_;
}
else
{
lean_object* v_reuseFailAlloc_21_; 
v_reuseFailAlloc_21_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_21_, 0, v_a_15_);
v___x_20_ = v_reuseFailAlloc_21_;
goto v_reusejp_19_;
}
v_reusejp_19_:
{
return v___x_20_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkIdentFromRef___at___00Lean_Elab_Command_elabElabRulesAux_spec__0___redArg___boxed(lean_object* v_val_23_, lean_object* v_canonical_24_, lean_object* v___y_25_, lean_object* v___y_26_){
_start:
{
uint8_t v_canonical_boxed_27_; lean_object* v_res_28_; 
v_canonical_boxed_27_ = lean_unbox(v_canonical_24_);
v_res_28_ = l_Lean_mkIdentFromRef___at___00Lean_Elab_Command_elabElabRulesAux_spec__0___redArg(v_val_23_, v_canonical_boxed_27_, v___y_25_);
lean_dec_ref(v___y_25_);
return v_res_28_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkIdentFromRef___at___00Lean_Elab_Command_elabElabRulesAux_spec__0(lean_object* v_val_29_, uint8_t v_canonical_30_, lean_object* v___y_31_, lean_object* v___y_32_){
_start:
{
lean_object* v___x_34_; 
v___x_34_ = l_Lean_mkIdentFromRef___at___00Lean_Elab_Command_elabElabRulesAux_spec__0___redArg(v_val_29_, v_canonical_30_, v___y_31_);
return v___x_34_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkIdentFromRef___at___00Lean_Elab_Command_elabElabRulesAux_spec__0___boxed(lean_object* v_val_35_, lean_object* v_canonical_36_, lean_object* v___y_37_, lean_object* v___y_38_, lean_object* v___y_39_){
_start:
{
uint8_t v_canonical_boxed_40_; lean_object* v_res_41_; 
v_canonical_boxed_40_ = lean_unbox(v_canonical_36_);
v_res_41_ = l_Lean_mkIdentFromRef___at___00Lean_Elab_Command_elabElabRulesAux_spec__0(v_val_35_, v_canonical_boxed_40_, v___y_37_, v___y_38_);
lean_dec(v___y_38_);
lean_dec_ref(v___y_37_);
return v_res_41_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabElabRulesAux_spec__1___redArg(lean_object* v___y_42_){
_start:
{
lean_object* v___x_44_; lean_object* v_env_45_; lean_object* v___x_46_; lean_object* v_mainModule_47_; lean_object* v___x_48_; 
v___x_44_ = lean_st_ref_get(v___y_42_);
v_env_45_ = lean_ctor_get(v___x_44_, 0);
lean_inc_ref(v_env_45_);
lean_dec(v___x_44_);
v___x_46_ = l_Lean_Environment_header(v_env_45_);
lean_dec_ref(v_env_45_);
v_mainModule_47_ = lean_ctor_get(v___x_46_, 0);
lean_inc(v_mainModule_47_);
lean_dec_ref(v___x_46_);
v___x_48_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_48_, 0, v_mainModule_47_);
return v___x_48_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabElabRulesAux_spec__1___redArg___boxed(lean_object* v___y_49_, lean_object* v___y_50_){
_start:
{
lean_object* v_res_51_; 
v_res_51_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabElabRulesAux_spec__1___redArg(v___y_49_);
lean_dec(v___y_49_);
return v_res_51_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabElabRulesAux_spec__1(lean_object* v___y_52_, lean_object* v___y_53_){
_start:
{
lean_object* v___x_55_; 
v___x_55_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabElabRulesAux_spec__1___redArg(v___y_53_);
return v___x_55_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabElabRulesAux_spec__1___boxed(lean_object* v___y_56_, lean_object* v___y_57_, lean_object* v___y_58_){
_start:
{
lean_object* v_res_59_; 
v_res_59_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabElabRulesAux_spec__1(v___y_56_, v___y_57_);
lean_dec(v___y_57_);
lean_dec_ref(v___y_56_);
return v_res_59_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabElabRulesAux_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_60_ = lean_box(0);
v___x_61_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_62_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_62_, 0, v___x_61_);
lean_ctor_set(v___x_62_, 1, v___x_60_);
return v___x_62_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabElabRulesAux_spec__2___redArg(){
_start:
{
lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_64_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabElabRulesAux_spec__2___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabElabRulesAux_spec__2___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabElabRulesAux_spec__2___redArg___closed__0);
v___x_65_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_65_, 0, v___x_64_);
return v___x_65_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabElabRulesAux_spec__2___redArg___boxed(lean_object* v___y_66_){
_start:
{
lean_object* v_res_67_; 
v_res_67_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabElabRulesAux_spec__2___redArg();
return v_res_67_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabElabRulesAux_spec__2(lean_object* v_00_u03b1_68_, lean_object* v___y_69_, lean_object* v___y_70_){
_start:
{
lean_object* v___x_72_; 
v___x_72_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabElabRulesAux_spec__2___redArg();
return v___x_72_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabElabRulesAux_spec__2___boxed(lean_object* v_00_u03b1_73_, lean_object* v___y_74_, lean_object* v___y_75_, lean_object* v___y_76_){
_start:
{
lean_object* v_res_77_; 
v_res_77_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabElabRulesAux_spec__2(v_00_u03b1_73_, v___y_74_, v___y_75_);
lean_dec(v___y_75_);
lean_dec_ref(v___y_74_);
return v_res_77_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabElabRulesAux___lam__0(lean_object* v_k_97_, lean_object* v_attrKind_98_, lean_object* v_attrs_x3f_99_, lean_object* v_kind_100_, lean_object* v___y_101_, lean_object* v___y_102_){
_start:
{
uint8_t v___x_104_; lean_object* v___x_105_; 
v___x_104_ = 0;
v___x_105_ = l_Lean_mkIdentFromRef___at___00Lean_Elab_Command_elabElabRulesAux_spec__0___redArg(v_k_97_, v___x_104_, v___y_101_);
if (lean_obj_tag(v___x_105_) == 0)
{
lean_object* v_a_106_; lean_object* v___x_107_; 
v_a_106_ = lean_ctor_get(v___x_105_, 0);
lean_inc(v_a_106_);
lean_dec_ref_known(v___x_105_, 1);
v___x_107_ = l_Lean_Elab_Command_getRef___redArg(v___y_101_);
if (lean_obj_tag(v___x_107_) == 0)
{
lean_object* v_a_108_; lean_object* v___x_110_; uint8_t v_isShared_111_; uint8_t v_isSharedCheck_144_; 
v_a_108_ = lean_ctor_get(v___x_107_, 0);
v_isSharedCheck_144_ = !lean_is_exclusive(v___x_107_);
if (v_isSharedCheck_144_ == 0)
{
v___x_110_ = v___x_107_;
v_isShared_111_ = v_isSharedCheck_144_;
goto v_resetjp_109_;
}
else
{
lean_inc(v_a_108_);
lean_dec(v___x_107_);
v___x_110_ = lean_box(0);
v_isShared_111_ = v_isSharedCheck_144_;
goto v_resetjp_109_;
}
v_resetjp_109_:
{
lean_object* v___x_112_; lean_object* v___x_133_; 
v___x_112_ = l_Lean_SourceInfo_fromRef(v_a_108_, v___x_104_);
lean_dec(v_a_108_);
v___x_133_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_101_);
if (lean_obj_tag(v___x_133_) == 0)
{
lean_object* v_quotContext_x3f_134_; 
lean_dec_ref_known(v___x_133_, 1);
v_quotContext_x3f_134_ = lean_ctor_get(v___y_101_, 5);
if (lean_obj_tag(v_quotContext_x3f_134_) == 0)
{
lean_object* v___x_135_; 
v___x_135_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabElabRulesAux_spec__1___redArg(v___y_102_);
lean_dec_ref(v___x_135_);
goto v___jp_113_;
}
else
{
goto v___jp_113_;
}
}
else
{
lean_object* v_a_136_; lean_object* v___x_138_; uint8_t v_isShared_139_; uint8_t v_isSharedCheck_143_; 
lean_dec(v___x_112_);
lean_del_object(v___x_110_);
lean_dec(v_a_106_);
lean_dec(v_kind_100_);
lean_dec(v_attrKind_98_);
v_a_136_ = lean_ctor_get(v___x_133_, 0);
v_isSharedCheck_143_ = !lean_is_exclusive(v___x_133_);
if (v_isSharedCheck_143_ == 0)
{
v___x_138_ = v___x_133_;
v_isShared_139_ = v_isSharedCheck_143_;
goto v_resetjp_137_;
}
else
{
lean_inc(v_a_136_);
lean_dec(v___x_133_);
v___x_138_ = lean_box(0);
v_isShared_139_ = v_isSharedCheck_143_;
goto v_resetjp_137_;
}
v_resetjp_137_:
{
lean_object* v___x_141_; 
if (v_isShared_139_ == 0)
{
v___x_141_ = v___x_138_;
goto v_reusejp_140_;
}
else
{
lean_object* v_reuseFailAlloc_142_; 
v_reuseFailAlloc_142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_142_, 0, v_a_136_);
v___x_141_ = v_reuseFailAlloc_142_;
goto v_reusejp_140_;
}
v_reusejp_140_:
{
return v___x_141_;
}
}
}
v___jp_113_:
{
lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; 
v___x_114_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__4));
v___x_115_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__7));
v___x_116_ = l_Lean_mkIdent(v_kind_100_);
v___x_117_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__9));
lean_inc_n(v___x_112_, 2);
v___x_118_ = l_Lean_Syntax_node1(v___x_112_, v___x_117_, v_a_106_);
v___x_119_ = l_Lean_Syntax_node2(v___x_112_, v___x_115_, v___x_116_, v___x_118_);
v___x_120_ = l_Lean_Syntax_node2(v___x_112_, v___x_114_, v_attrKind_98_, v___x_119_);
if (lean_obj_tag(v_attrs_x3f_99_) == 0)
{
lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_125_; 
v___x_121_ = lean_unsigned_to_nat(1u);
v___x_122_ = lean_mk_empty_array_with_capacity(v___x_121_);
v___x_123_ = lean_array_push(v___x_122_, v___x_120_);
if (v_isShared_111_ == 0)
{
lean_ctor_set(v___x_110_, 0, v___x_123_);
v___x_125_ = v___x_110_;
goto v_reusejp_124_;
}
else
{
lean_object* v_reuseFailAlloc_126_; 
v_reuseFailAlloc_126_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_126_, 0, v___x_123_);
v___x_125_ = v_reuseFailAlloc_126_;
goto v_reusejp_124_;
}
v_reusejp_124_:
{
return v___x_125_;
}
}
else
{
lean_object* v_val_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_131_; 
v_val_127_ = lean_ctor_get(v_attrs_x3f_99_, 0);
v___x_128_ = l_Lean_Syntax_TSepArray_getElems___redArg(v_val_127_);
v___x_129_ = lean_array_push(v___x_128_, v___x_120_);
if (v_isShared_111_ == 0)
{
lean_ctor_set(v___x_110_, 0, v___x_129_);
v___x_131_ = v___x_110_;
goto v_reusejp_130_;
}
else
{
lean_object* v_reuseFailAlloc_132_; 
v_reuseFailAlloc_132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_132_, 0, v___x_129_);
v___x_131_ = v_reuseFailAlloc_132_;
goto v_reusejp_130_;
}
v_reusejp_130_:
{
return v___x_131_;
}
}
}
}
}
else
{
lean_object* v_a_145_; lean_object* v___x_147_; uint8_t v_isShared_148_; uint8_t v_isSharedCheck_152_; 
lean_dec(v_a_106_);
lean_dec(v_kind_100_);
lean_dec(v_attrKind_98_);
v_a_145_ = lean_ctor_get(v___x_107_, 0);
v_isSharedCheck_152_ = !lean_is_exclusive(v___x_107_);
if (v_isSharedCheck_152_ == 0)
{
v___x_147_ = v___x_107_;
v_isShared_148_ = v_isSharedCheck_152_;
goto v_resetjp_146_;
}
else
{
lean_inc(v_a_145_);
lean_dec(v___x_107_);
v___x_147_ = lean_box(0);
v_isShared_148_ = v_isSharedCheck_152_;
goto v_resetjp_146_;
}
v_resetjp_146_:
{
lean_object* v___x_150_; 
if (v_isShared_148_ == 0)
{
v___x_150_ = v___x_147_;
goto v_reusejp_149_;
}
else
{
lean_object* v_reuseFailAlloc_151_; 
v_reuseFailAlloc_151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_151_, 0, v_a_145_);
v___x_150_ = v_reuseFailAlloc_151_;
goto v_reusejp_149_;
}
v_reusejp_149_:
{
return v___x_150_;
}
}
}
}
else
{
lean_object* v_a_153_; lean_object* v___x_155_; uint8_t v_isShared_156_; uint8_t v_isSharedCheck_160_; 
lean_dec(v_kind_100_);
lean_dec(v_attrKind_98_);
v_a_153_ = lean_ctor_get(v___x_105_, 0);
v_isSharedCheck_160_ = !lean_is_exclusive(v___x_105_);
if (v_isSharedCheck_160_ == 0)
{
v___x_155_ = v___x_105_;
v_isShared_156_ = v_isSharedCheck_160_;
goto v_resetjp_154_;
}
else
{
lean_inc(v_a_153_);
lean_dec(v___x_105_);
v___x_155_ = lean_box(0);
v_isShared_156_ = v_isSharedCheck_160_;
goto v_resetjp_154_;
}
v_resetjp_154_:
{
lean_object* v___x_158_; 
if (v_isShared_156_ == 0)
{
v___x_158_ = v___x_155_;
goto v_reusejp_157_;
}
else
{
lean_object* v_reuseFailAlloc_159_; 
v_reuseFailAlloc_159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_159_, 0, v_a_153_);
v___x_158_ = v_reuseFailAlloc_159_;
goto v_reusejp_157_;
}
v_reusejp_157_:
{
return v___x_158_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabElabRulesAux___lam__0___boxed(lean_object* v_k_161_, lean_object* v_attrKind_162_, lean_object* v_attrs_x3f_163_, lean_object* v_kind_164_, lean_object* v___y_165_, lean_object* v___y_166_, lean_object* v___y_167_){
_start:
{
lean_object* v_res_168_; 
v_res_168_ = l_Lean_Elab_Command_elabElabRulesAux___lam__0(v_k_161_, v_attrKind_162_, v_attrs_x3f_163_, v_kind_164_, v___y_165_, v___y_166_);
lean_dec(v___y_166_);
lean_dec_ref(v___y_165_);
lean_dec(v_attrs_x3f_163_);
return v_res_168_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__7_spec__8(lean_object* v_opts_169_, lean_object* v_opt_170_){
_start:
{
lean_object* v_name_171_; lean_object* v_defValue_172_; lean_object* v_map_173_; lean_object* v___x_174_; 
v_name_171_ = lean_ctor_get(v_opt_170_, 0);
v_defValue_172_ = lean_ctor_get(v_opt_170_, 1);
v_map_173_ = lean_ctor_get(v_opts_169_, 0);
v___x_174_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_173_, v_name_171_);
if (lean_obj_tag(v___x_174_) == 0)
{
uint8_t v___x_175_; 
v___x_175_ = lean_unbox(v_defValue_172_);
return v___x_175_;
}
else
{
lean_object* v_val_176_; 
v_val_176_ = lean_ctor_get(v___x_174_, 0);
lean_inc(v_val_176_);
lean_dec_ref_known(v___x_174_, 1);
if (lean_obj_tag(v_val_176_) == 1)
{
uint8_t v_v_177_; 
v_v_177_ = lean_ctor_get_uint8(v_val_176_, 0);
lean_dec_ref_known(v_val_176_, 0);
return v_v_177_;
}
else
{
uint8_t v___x_178_; 
lean_dec(v_val_176_);
v___x_178_ = lean_unbox(v_defValue_172_);
return v___x_178_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__7_spec__8___boxed(lean_object* v_opts_179_, lean_object* v_opt_180_){
_start:
{
uint8_t v_res_181_; lean_object* v_r_182_; 
v_res_181_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__7_spec__8(v_opts_179_, v_opt_180_);
lean_dec_ref(v_opt_180_);
lean_dec_ref(v_opts_179_);
v_r_182_ = lean_box(v_res_181_);
return v_r_182_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__7_spec__9___closed__0(void){
_start:
{
lean_object* v___x_183_; lean_object* v___x_184_; 
v___x_183_ = lean_box(1);
v___x_184_ = l_Lean_MessageData_ofFormat(v___x_183_);
return v___x_184_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__7_spec__9___closed__3(void){
_start:
{
lean_object* v___x_188_; lean_object* v___x_189_; 
v___x_188_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__7_spec__9___closed__2));
v___x_189_ = l_Lean_MessageData_ofFormat(v___x_188_);
return v___x_189_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__7_spec__9(lean_object* v_x_190_, lean_object* v_x_191_){
_start:
{
if (lean_obj_tag(v_x_191_) == 0)
{
return v_x_190_;
}
else
{
lean_object* v_head_192_; lean_object* v_tail_193_; lean_object* v___x_195_; uint8_t v_isShared_196_; uint8_t v_isSharedCheck_215_; 
v_head_192_ = lean_ctor_get(v_x_191_, 0);
v_tail_193_ = lean_ctor_get(v_x_191_, 1);
v_isSharedCheck_215_ = !lean_is_exclusive(v_x_191_);
if (v_isSharedCheck_215_ == 0)
{
v___x_195_ = v_x_191_;
v_isShared_196_ = v_isSharedCheck_215_;
goto v_resetjp_194_;
}
else
{
lean_inc(v_tail_193_);
lean_inc(v_head_192_);
lean_dec(v_x_191_);
v___x_195_ = lean_box(0);
v_isShared_196_ = v_isSharedCheck_215_;
goto v_resetjp_194_;
}
v_resetjp_194_:
{
lean_object* v_before_197_; lean_object* v___x_199_; uint8_t v_isShared_200_; uint8_t v_isSharedCheck_213_; 
v_before_197_ = lean_ctor_get(v_head_192_, 0);
v_isSharedCheck_213_ = !lean_is_exclusive(v_head_192_);
if (v_isSharedCheck_213_ == 0)
{
lean_object* v_unused_214_; 
v_unused_214_ = lean_ctor_get(v_head_192_, 1);
lean_dec(v_unused_214_);
v___x_199_ = v_head_192_;
v_isShared_200_ = v_isSharedCheck_213_;
goto v_resetjp_198_;
}
else
{
lean_inc(v_before_197_);
lean_dec(v_head_192_);
v___x_199_ = lean_box(0);
v_isShared_200_ = v_isSharedCheck_213_;
goto v_resetjp_198_;
}
v_resetjp_198_:
{
lean_object* v___x_201_; lean_object* v___x_203_; 
v___x_201_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__7_spec__9___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__7_spec__9___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__7_spec__9___closed__0);
if (v_isShared_200_ == 0)
{
lean_ctor_set_tag(v___x_199_, 7);
lean_ctor_set(v___x_199_, 1, v___x_201_);
lean_ctor_set(v___x_199_, 0, v_x_190_);
v___x_203_ = v___x_199_;
goto v_reusejp_202_;
}
else
{
lean_object* v_reuseFailAlloc_212_; 
v_reuseFailAlloc_212_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_212_, 0, v_x_190_);
lean_ctor_set(v_reuseFailAlloc_212_, 1, v___x_201_);
v___x_203_ = v_reuseFailAlloc_212_;
goto v_reusejp_202_;
}
v_reusejp_202_:
{
lean_object* v___x_204_; lean_object* v___x_206_; 
v___x_204_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__7_spec__9___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__7_spec__9___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__7_spec__9___closed__3);
if (v_isShared_196_ == 0)
{
lean_ctor_set_tag(v___x_195_, 7);
lean_ctor_set(v___x_195_, 1, v___x_204_);
lean_ctor_set(v___x_195_, 0, v___x_203_);
v___x_206_ = v___x_195_;
goto v_reusejp_205_;
}
else
{
lean_object* v_reuseFailAlloc_211_; 
v_reuseFailAlloc_211_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_211_, 0, v___x_203_);
lean_ctor_set(v_reuseFailAlloc_211_, 1, v___x_204_);
v___x_206_ = v_reuseFailAlloc_211_;
goto v_reusejp_205_;
}
v_reusejp_205_:
{
lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; 
v___x_207_ = l_Lean_MessageData_ofSyntax(v_before_197_);
v___x_208_ = l_Lean_indentD(v___x_207_);
v___x_209_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_209_, 0, v___x_206_);
lean_ctor_set(v___x_209_, 1, v___x_208_);
v_x_190_ = v___x_209_;
v_x_191_ = v_tail_193_;
goto _start;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__7___redArg___closed__2(void){
_start:
{
lean_object* v___x_219_; lean_object* v___x_220_; 
v___x_219_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__7___redArg___closed__1));
v___x_220_ = l_Lean_MessageData_ofFormat(v___x_219_);
return v___x_220_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__7___redArg(lean_object* v_msgData_221_, lean_object* v_macroStack_222_, lean_object* v___y_223_){
_start:
{
lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v_scopes_227_; lean_object* v___x_228_; lean_object* v_opts_229_; lean_object* v___x_230_; uint8_t v___x_231_; 
v___x_225_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_226_ = lean_st_ref_get(v___y_223_);
v_scopes_227_ = lean_ctor_get(v___x_226_, 2);
lean_inc(v_scopes_227_);
lean_dec(v___x_226_);
v___x_228_ = l_List_head_x21___redArg(v___x_225_, v_scopes_227_);
lean_dec(v_scopes_227_);
v_opts_229_ = lean_ctor_get(v___x_228_, 1);
lean_inc_ref(v_opts_229_);
lean_dec(v___x_228_);
v___x_230_ = l_Lean_Elab_pp_macroStack;
v___x_231_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__7_spec__8(v_opts_229_, v___x_230_);
lean_dec_ref(v_opts_229_);
if (v___x_231_ == 0)
{
lean_object* v___x_232_; 
lean_dec(v_macroStack_222_);
v___x_232_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_232_, 0, v_msgData_221_);
return v___x_232_;
}
else
{
if (lean_obj_tag(v_macroStack_222_) == 0)
{
lean_object* v___x_233_; 
v___x_233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_233_, 0, v_msgData_221_);
return v___x_233_;
}
else
{
lean_object* v_head_234_; lean_object* v_after_235_; lean_object* v___x_237_; uint8_t v_isShared_238_; uint8_t v_isSharedCheck_250_; 
v_head_234_ = lean_ctor_get(v_macroStack_222_, 0);
lean_inc(v_head_234_);
v_after_235_ = lean_ctor_get(v_head_234_, 1);
v_isSharedCheck_250_ = !lean_is_exclusive(v_head_234_);
if (v_isSharedCheck_250_ == 0)
{
lean_object* v_unused_251_; 
v_unused_251_ = lean_ctor_get(v_head_234_, 0);
lean_dec(v_unused_251_);
v___x_237_ = v_head_234_;
v_isShared_238_ = v_isSharedCheck_250_;
goto v_resetjp_236_;
}
else
{
lean_inc(v_after_235_);
lean_dec(v_head_234_);
v___x_237_ = lean_box(0);
v_isShared_238_ = v_isSharedCheck_250_;
goto v_resetjp_236_;
}
v_resetjp_236_:
{
lean_object* v___x_239_; lean_object* v___x_241_; 
v___x_239_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__7_spec__9___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__7_spec__9___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__7_spec__9___closed__0);
if (v_isShared_238_ == 0)
{
lean_ctor_set_tag(v___x_237_, 7);
lean_ctor_set(v___x_237_, 1, v___x_239_);
lean_ctor_set(v___x_237_, 0, v_msgData_221_);
v___x_241_ = v___x_237_;
goto v_reusejp_240_;
}
else
{
lean_object* v_reuseFailAlloc_249_; 
v_reuseFailAlloc_249_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_249_, 0, v_msgData_221_);
lean_ctor_set(v_reuseFailAlloc_249_, 1, v___x_239_);
v___x_241_ = v_reuseFailAlloc_249_;
goto v_reusejp_240_;
}
v_reusejp_240_:
{
lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v_msgData_246_; lean_object* v___x_247_; lean_object* v___x_248_; 
v___x_242_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__7___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__7___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__7___redArg___closed__2);
v___x_243_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_243_, 0, v___x_241_);
lean_ctor_set(v___x_243_, 1, v___x_242_);
v___x_244_ = l_Lean_MessageData_ofSyntax(v_after_235_);
v___x_245_ = l_Lean_indentD(v___x_244_);
v_msgData_246_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_246_, 0, v___x_243_);
lean_ctor_set(v_msgData_246_, 1, v___x_245_);
v___x_247_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__7_spec__9(v_msgData_246_, v_macroStack_222_);
v___x_248_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_248_, 0, v___x_247_);
return v___x_248_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__7___redArg___boxed(lean_object* v_msgData_252_, lean_object* v_macroStack_253_, lean_object* v___y_254_, lean_object* v___y_255_){
_start:
{
lean_object* v_res_256_; 
v_res_256_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__7___redArg(v_msgData_252_, v_macroStack_253_, v___y_254_);
lean_dec(v___y_254_);
return v_res_256_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__6___redArg___closed__0(void){
_start:
{
lean_object* v___x_257_; 
v___x_257_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_257_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__6___redArg___closed__1(void){
_start:
{
lean_object* v___x_258_; lean_object* v___x_259_; 
v___x_258_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__6___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__6___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__6___redArg___closed__0);
v___x_259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_259_, 0, v___x_258_);
return v___x_259_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__6___redArg___closed__2(void){
_start:
{
lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; 
v___x_260_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__6___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__6___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__6___redArg___closed__1);
v___x_261_ = lean_unsigned_to_nat(0u);
v___x_262_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_262_, 0, v___x_261_);
lean_ctor_set(v___x_262_, 1, v___x_261_);
lean_ctor_set(v___x_262_, 2, v___x_261_);
lean_ctor_set(v___x_262_, 3, v___x_261_);
lean_ctor_set(v___x_262_, 4, v___x_260_);
lean_ctor_set(v___x_262_, 5, v___x_260_);
lean_ctor_set(v___x_262_, 6, v___x_260_);
lean_ctor_set(v___x_262_, 7, v___x_260_);
lean_ctor_set(v___x_262_, 8, v___x_260_);
lean_ctor_set(v___x_262_, 9, v___x_260_);
lean_ctor_set(v___x_262_, 10, v___x_260_);
return v___x_262_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__6___redArg___closed__3(void){
_start:
{
lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; 
v___x_263_ = lean_unsigned_to_nat(32u);
v___x_264_ = lean_mk_empty_array_with_capacity(v___x_263_);
v___x_265_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_265_, 0, v___x_264_);
return v___x_265_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__6___redArg___closed__4(void){
_start:
{
size_t v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; 
v___x_266_ = ((size_t)5ULL);
v___x_267_ = lean_unsigned_to_nat(0u);
v___x_268_ = lean_unsigned_to_nat(32u);
v___x_269_ = lean_mk_empty_array_with_capacity(v___x_268_);
v___x_270_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__6___redArg___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__6___redArg___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__6___redArg___closed__3);
v___x_271_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_271_, 0, v___x_270_);
lean_ctor_set(v___x_271_, 1, v___x_269_);
lean_ctor_set(v___x_271_, 2, v___x_267_);
lean_ctor_set(v___x_271_, 3, v___x_267_);
lean_ctor_set_usize(v___x_271_, 4, v___x_266_);
return v___x_271_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__6___redArg___closed__5(void){
_start:
{
lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; 
v___x_272_ = lean_box(1);
v___x_273_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__6___redArg___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__6___redArg___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__6___redArg___closed__4);
v___x_274_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__6___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__6___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__6___redArg___closed__1);
v___x_275_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_275_, 0, v___x_274_);
lean_ctor_set(v___x_275_, 1, v___x_273_);
lean_ctor_set(v___x_275_, 2, v___x_272_);
return v___x_275_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__6___redArg(lean_object* v_msgData_276_, lean_object* v___y_277_){
_start:
{
lean_object* v___x_279_; lean_object* v_env_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v_scopes_283_; lean_object* v___x_284_; lean_object* v_opts_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; 
v___x_279_ = lean_st_ref_get(v___y_277_);
v_env_280_ = lean_ctor_get(v___x_279_, 0);
lean_inc_ref(v_env_280_);
lean_dec(v___x_279_);
v___x_281_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_282_ = lean_st_ref_get(v___y_277_);
v_scopes_283_ = lean_ctor_get(v___x_282_, 2);
lean_inc(v_scopes_283_);
lean_dec(v___x_282_);
v___x_284_ = l_List_head_x21___redArg(v___x_281_, v_scopes_283_);
lean_dec(v_scopes_283_);
v_opts_285_ = lean_ctor_get(v___x_284_, 1);
lean_inc_ref(v_opts_285_);
lean_dec(v___x_284_);
v___x_286_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__6___redArg___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__6___redArg___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__6___redArg___closed__2);
v___x_287_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__6___redArg___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__6___redArg___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__6___redArg___closed__5);
v___x_288_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_288_, 0, v_env_280_);
lean_ctor_set(v___x_288_, 1, v___x_286_);
lean_ctor_set(v___x_288_, 2, v___x_287_);
lean_ctor_set(v___x_288_, 3, v_opts_285_);
v___x_289_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_289_, 0, v___x_288_);
lean_ctor_set(v___x_289_, 1, v_msgData_276_);
v___x_290_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_290_, 0, v___x_289_);
return v___x_290_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__6___redArg___boxed(lean_object* v_msgData_291_, lean_object* v___y_292_, lean_object* v___y_293_){
_start:
{
lean_object* v_res_294_; 
v_res_294_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__6___redArg(v_msgData_291_, v___y_292_);
lean_dec(v___y_292_);
return v_res_294_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6___redArg(lean_object* v_msg_295_, lean_object* v___y_296_, lean_object* v___y_297_){
_start:
{
lean_object* v___x_299_; 
v___x_299_ = l_Lean_Elab_Command_getRef___redArg(v___y_296_);
if (lean_obj_tag(v___x_299_) == 0)
{
lean_object* v_a_300_; lean_object* v_macroStack_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v_a_304_; lean_object* v___x_305_; lean_object* v_a_306_; lean_object* v___x_308_; uint8_t v_isShared_309_; uint8_t v_isSharedCheck_314_; 
v_a_300_ = lean_ctor_get(v___x_299_, 0);
lean_inc(v_a_300_);
lean_dec_ref_known(v___x_299_, 1);
v_macroStack_301_ = lean_ctor_get(v___y_296_, 4);
v___x_302_ = l_Lean_Elab_getBetterRef(v_a_300_, v_macroStack_301_);
lean_dec(v_a_300_);
v___x_303_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__6___redArg(v_msg_295_, v___y_297_);
v_a_304_ = lean_ctor_get(v___x_303_, 0);
lean_inc(v_a_304_);
lean_dec_ref(v___x_303_);
lean_inc(v_macroStack_301_);
v___x_305_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__7___redArg(v_a_304_, v_macroStack_301_, v___y_297_);
v_a_306_ = lean_ctor_get(v___x_305_, 0);
v_isSharedCheck_314_ = !lean_is_exclusive(v___x_305_);
if (v_isSharedCheck_314_ == 0)
{
v___x_308_ = v___x_305_;
v_isShared_309_ = v_isSharedCheck_314_;
goto v_resetjp_307_;
}
else
{
lean_inc(v_a_306_);
lean_dec(v___x_305_);
v___x_308_ = lean_box(0);
v_isShared_309_ = v_isSharedCheck_314_;
goto v_resetjp_307_;
}
v_resetjp_307_:
{
lean_object* v___x_310_; lean_object* v___x_312_; 
v___x_310_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_310_, 0, v___x_302_);
lean_ctor_set(v___x_310_, 1, v_a_306_);
if (v_isShared_309_ == 0)
{
lean_ctor_set_tag(v___x_308_, 1);
lean_ctor_set(v___x_308_, 0, v___x_310_);
v___x_312_ = v___x_308_;
goto v_reusejp_311_;
}
else
{
lean_object* v_reuseFailAlloc_313_; 
v_reuseFailAlloc_313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_313_, 0, v___x_310_);
v___x_312_ = v_reuseFailAlloc_313_;
goto v_reusejp_311_;
}
v_reusejp_311_:
{
return v___x_312_;
}
}
}
else
{
lean_object* v_a_315_; lean_object* v___x_317_; uint8_t v_isShared_318_; uint8_t v_isSharedCheck_322_; 
lean_dec_ref(v_msg_295_);
v_a_315_ = lean_ctor_get(v___x_299_, 0);
v_isSharedCheck_322_ = !lean_is_exclusive(v___x_299_);
if (v_isSharedCheck_322_ == 0)
{
v___x_317_ = v___x_299_;
v_isShared_318_ = v_isSharedCheck_322_;
goto v_resetjp_316_;
}
else
{
lean_inc(v_a_315_);
lean_dec(v___x_299_);
v___x_317_ = lean_box(0);
v_isShared_318_ = v_isSharedCheck_322_;
goto v_resetjp_316_;
}
v_resetjp_316_:
{
lean_object* v___x_320_; 
if (v_isShared_318_ == 0)
{
v___x_320_ = v___x_317_;
goto v_reusejp_319_;
}
else
{
lean_object* v_reuseFailAlloc_321_; 
v_reuseFailAlloc_321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_321_, 0, v_a_315_);
v___x_320_ = v_reuseFailAlloc_321_;
goto v_reusejp_319_;
}
v_reusejp_319_:
{
return v___x_320_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6___redArg___boxed(lean_object* v_msg_323_, lean_object* v___y_324_, lean_object* v___y_325_, lean_object* v___y_326_){
_start:
{
lean_object* v_res_327_; 
v_res_327_ = l_Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6___redArg(v_msg_323_, v___y_324_, v___y_325_);
lean_dec(v___y_325_);
lean_dec_ref(v___y_324_);
return v_res_327_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Command_elabElabRulesAux_spec__3___redArg(lean_object* v_ref_328_, lean_object* v_msg_329_, lean_object* v___y_330_, lean_object* v___y_331_){
_start:
{
lean_object* v___x_333_; 
v___x_333_ = l_Lean_Elab_Command_getRef___redArg(v___y_330_);
if (lean_obj_tag(v___x_333_) == 0)
{
lean_object* v_a_334_; lean_object* v_fileName_335_; lean_object* v_fileMap_336_; lean_object* v_currRecDepth_337_; lean_object* v_cmdPos_338_; lean_object* v_macroStack_339_; lean_object* v_quotContext_x3f_340_; lean_object* v_currMacroScope_341_; lean_object* v_snap_x3f_342_; lean_object* v_cancelTk_x3f_343_; uint8_t v_suppressElabErrors_344_; lean_object* v_ref_345_; lean_object* v___x_346_; lean_object* v___x_347_; 
v_a_334_ = lean_ctor_get(v___x_333_, 0);
lean_inc(v_a_334_);
lean_dec_ref_known(v___x_333_, 1);
v_fileName_335_ = lean_ctor_get(v___y_330_, 0);
v_fileMap_336_ = lean_ctor_get(v___y_330_, 1);
v_currRecDepth_337_ = lean_ctor_get(v___y_330_, 2);
v_cmdPos_338_ = lean_ctor_get(v___y_330_, 3);
v_macroStack_339_ = lean_ctor_get(v___y_330_, 4);
v_quotContext_x3f_340_ = lean_ctor_get(v___y_330_, 5);
v_currMacroScope_341_ = lean_ctor_get(v___y_330_, 6);
v_snap_x3f_342_ = lean_ctor_get(v___y_330_, 8);
v_cancelTk_x3f_343_ = lean_ctor_get(v___y_330_, 9);
v_suppressElabErrors_344_ = lean_ctor_get_uint8(v___y_330_, sizeof(void*)*10);
v_ref_345_ = l_Lean_replaceRef(v_ref_328_, v_a_334_);
lean_dec(v_a_334_);
lean_inc(v_cancelTk_x3f_343_);
lean_inc(v_snap_x3f_342_);
lean_inc(v_currMacroScope_341_);
lean_inc(v_quotContext_x3f_340_);
lean_inc(v_macroStack_339_);
lean_inc(v_cmdPos_338_);
lean_inc(v_currRecDepth_337_);
lean_inc_ref(v_fileMap_336_);
lean_inc_ref(v_fileName_335_);
v___x_346_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v___x_346_, 0, v_fileName_335_);
lean_ctor_set(v___x_346_, 1, v_fileMap_336_);
lean_ctor_set(v___x_346_, 2, v_currRecDepth_337_);
lean_ctor_set(v___x_346_, 3, v_cmdPos_338_);
lean_ctor_set(v___x_346_, 4, v_macroStack_339_);
lean_ctor_set(v___x_346_, 5, v_quotContext_x3f_340_);
lean_ctor_set(v___x_346_, 6, v_currMacroScope_341_);
lean_ctor_set(v___x_346_, 7, v_ref_345_);
lean_ctor_set(v___x_346_, 8, v_snap_x3f_342_);
lean_ctor_set(v___x_346_, 9, v_cancelTk_x3f_343_);
lean_ctor_set_uint8(v___x_346_, sizeof(void*)*10, v_suppressElabErrors_344_);
v___x_347_ = l_Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6___redArg(v_msg_329_, v___x_346_, v___y_331_);
lean_dec_ref_known(v___x_346_, 10);
return v___x_347_;
}
else
{
lean_object* v_a_348_; lean_object* v___x_350_; uint8_t v_isShared_351_; uint8_t v_isSharedCheck_355_; 
lean_dec_ref(v_msg_329_);
v_a_348_ = lean_ctor_get(v___x_333_, 0);
v_isSharedCheck_355_ = !lean_is_exclusive(v___x_333_);
if (v_isSharedCheck_355_ == 0)
{
v___x_350_ = v___x_333_;
v_isShared_351_ = v_isSharedCheck_355_;
goto v_resetjp_349_;
}
else
{
lean_inc(v_a_348_);
lean_dec(v___x_333_);
v___x_350_ = lean_box(0);
v_isShared_351_ = v_isSharedCheck_355_;
goto v_resetjp_349_;
}
v_resetjp_349_:
{
lean_object* v___x_353_; 
if (v_isShared_351_ == 0)
{
v___x_353_ = v___x_350_;
goto v_reusejp_352_;
}
else
{
lean_object* v_reuseFailAlloc_354_; 
v_reuseFailAlloc_354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_354_, 0, v_a_348_);
v___x_353_ = v_reuseFailAlloc_354_;
goto v_reusejp_352_;
}
v_reusejp_352_:
{
return v___x_353_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Command_elabElabRulesAux_spec__3___redArg___boxed(lean_object* v_ref_356_, lean_object* v_msg_357_, lean_object* v___y_358_, lean_object* v___y_359_, lean_object* v___y_360_){
_start:
{
lean_object* v_res_361_; 
v_res_361_ = l_Lean_throwErrorAt___at___00Lean_Elab_Command_elabElabRulesAux_spec__3___redArg(v_ref_356_, v_msg_357_, v___y_358_, v___y_359_);
lean_dec(v___y_359_);
lean_dec_ref(v___y_358_);
lean_dec(v_ref_356_);
return v_res_361_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabElabRulesAux_spec__4(lean_object* v_k_365_, lean_object* v_as_366_, size_t v_sz_367_, size_t v_i_368_, lean_object* v_b_369_){
_start:
{
uint8_t v___x_370_; 
v___x_370_ = lean_usize_dec_lt(v_i_368_, v_sz_367_);
if (v___x_370_ == 0)
{
lean_dec(v_k_365_);
lean_inc_ref(v_b_369_);
return v_b_369_;
}
else
{
lean_object* v___x_371_; lean_object* v_a_372_; lean_object* v___x_373_; uint8_t v___x_374_; 
v___x_371_ = lean_box(0);
v_a_372_ = lean_array_uget_borrowed(v_as_366_, v_i_368_);
lean_inc(v_a_372_);
v___x_373_ = l_Lean_Syntax_getKind(v_a_372_);
lean_inc(v_k_365_);
v___x_374_ = l_Lean_Elab_Command_checkRuleKind(v___x_373_, v_k_365_);
lean_dec(v___x_373_);
if (v___x_374_ == 0)
{
lean_object* v___x_375_; size_t v___x_376_; size_t v___x_377_; 
v___x_375_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabElabRulesAux_spec__4___closed__0));
v___x_376_ = ((size_t)1ULL);
v___x_377_ = lean_usize_add(v_i_368_, v___x_376_);
v_i_368_ = v___x_377_;
v_b_369_ = v___x_375_;
goto _start;
}
else
{
lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; 
lean_dec(v_k_365_);
lean_inc(v_a_372_);
v___x_379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_379_, 0, v_a_372_);
v___x_380_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_380_, 0, v___x_379_);
v___x_381_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_381_, 0, v___x_380_);
lean_ctor_set(v___x_381_, 1, v___x_371_);
return v___x_381_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabElabRulesAux_spec__4___boxed(lean_object* v_k_382_, lean_object* v_as_383_, lean_object* v_sz_384_, lean_object* v_i_385_, lean_object* v_b_386_){
_start:
{
size_t v_sz_boxed_387_; size_t v_i_boxed_388_; lean_object* v_res_389_; 
v_sz_boxed_387_ = lean_unbox_usize(v_sz_384_);
lean_dec(v_sz_384_);
v_i_boxed_388_ = lean_unbox_usize(v_i_385_);
lean_dec(v_i_385_);
v_res_389_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabElabRulesAux_spec__4(v_k_382_, v_as_383_, v_sz_boxed_387_, v_i_boxed_388_, v_b_386_);
lean_dec_ref(v_b_386_);
lean_dec_ref(v_as_383_);
return v_res_389_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__1(void){
_start:
{
lean_object* v___x_391_; lean_object* v___x_392_; 
v___x_391_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__0));
v___x_392_ = l_Lean_stringToMessageData(v___x_391_);
return v___x_392_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__3(void){
_start:
{
lean_object* v___x_394_; lean_object* v___x_395_; 
v___x_394_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__2));
v___x_395_ = l_Lean_stringToMessageData(v___x_394_);
return v___x_395_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__7(void){
_start:
{
lean_object* v___x_403_; 
v___x_403_ = l_Array_mkArray0___redArg();
return v___x_403_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__12(void){
_start:
{
lean_object* v___x_409_; lean_object* v___x_410_; 
v___x_409_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__11));
v___x_410_ = l_Lean_stringToMessageData(v___x_409_);
return v___x_410_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5(lean_object* v_k_411_, size_t v_sz_412_, size_t v_i_413_, lean_object* v_bs_414_, lean_object* v___y_415_, lean_object* v___y_416_){
_start:
{
uint8_t v___x_418_; 
v___x_418_ = lean_usize_dec_lt(v_i_413_, v_sz_412_);
if (v___x_418_ == 0)
{
lean_object* v___x_419_; lean_object* v___x_420_; 
lean_dec(v_k_411_);
v___x_419_ = l_unsafeCast___redArg(v_bs_414_);
lean_dec_ref(v_bs_414_);
v___x_420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_420_, 0, v___x_419_);
return v___x_420_;
}
else
{
lean_object* v_v_421_; lean_object* v___x_422_; lean_object* v_bs_x27_423_; lean_object* v_a_425_; lean_object* v___y_432_; lean_object* v___x_442_; lean_object* v___y_444_; lean_object* v___y_445_; lean_object* v___x_452_; uint8_t v___x_453_; 
v_v_421_ = lean_array_uget(v_bs_414_, v_i_413_);
v___x_422_ = lean_unsigned_to_nat(0u);
v_bs_x27_423_ = lean_array_uset(v_bs_414_, v_i_413_, v___x_422_);
v___x_442_ = l_unsafeCast___redArg(v_v_421_);
lean_dec(v_v_421_);
v___x_452_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__5));
lean_inc(v___x_442_);
v___x_453_ = l_Lean_Syntax_isOfKind(v___x_442_, v___x_452_);
if (v___x_453_ == 0)
{
lean_object* v___x_454_; 
lean_dec(v___x_442_);
v___x_454_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabElabRulesAux_spec__2___redArg();
v___y_432_ = v___x_454_;
goto v___jp_431_;
}
else
{
lean_object* v___x_455_; lean_object* v___x_456_; uint8_t v___x_457_; 
v___x_455_ = lean_unsigned_to_nat(1u);
v___x_456_ = l_Lean_Syntax_getArg(v___x_442_, v___x_455_);
lean_inc(v___x_456_);
v___x_457_ = l_Lean_Syntax_matchesNull(v___x_456_, v___x_455_);
if (v___x_457_ == 0)
{
lean_object* v___x_458_; 
lean_dec(v___x_456_);
lean_dec(v___x_442_);
v___x_458_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabElabRulesAux_spec__2___redArg();
v___y_432_ = v___x_458_;
goto v___jp_431_;
}
else
{
lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___y_464_; lean_object* v___y_465_; lean_object* v___x_476_; lean_object* v_pat_477_; lean_object* v___y_479_; lean_object* v___y_480_; uint8_t v___x_532_; 
v___x_459_ = lean_box(0);
v___x_460_ = l_Lean_Syntax_getArg(v___x_456_, v___x_422_);
lean_dec(v___x_456_);
v___x_461_ = lean_unsigned_to_nat(3u);
v___x_462_ = l_Lean_Syntax_getArg(v___x_442_, v___x_461_);
v___x_476_ = l_Lean_Syntax_getArgs(v___x_460_);
lean_dec(v___x_460_);
v_pat_477_ = lean_array_get(v___x_459_, v___x_476_, v___x_422_);
v___x_532_ = l_Lean_Syntax_isQuot(v_pat_477_);
if (v___x_532_ == 0)
{
if (v___x_457_ == 0)
{
v___y_479_ = v___y_415_;
v___y_480_ = v___y_416_;
goto v___jp_478_;
}
else
{
lean_object* v___x_533_; 
v___x_533_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabElabRulesAux_spec__2___redArg();
if (lean_obj_tag(v___x_533_) == 0)
{
lean_dec_ref_known(v___x_533_, 1);
v___y_479_ = v___y_415_;
v___y_480_ = v___y_416_;
goto v___jp_478_;
}
else
{
lean_object* v_a_534_; lean_object* v___x_536_; uint8_t v_isShared_537_; uint8_t v_isSharedCheck_541_; 
lean_dec(v_pat_477_);
lean_dec_ref(v___x_476_);
lean_dec(v___x_462_);
lean_dec(v___x_442_);
lean_dec_ref(v_bs_x27_423_);
lean_dec(v_k_411_);
v_a_534_ = lean_ctor_get(v___x_533_, 0);
v_isSharedCheck_541_ = !lean_is_exclusive(v___x_533_);
if (v_isSharedCheck_541_ == 0)
{
v___x_536_ = v___x_533_;
v_isShared_537_ = v_isSharedCheck_541_;
goto v_resetjp_535_;
}
else
{
lean_inc(v_a_534_);
lean_dec(v___x_533_);
v___x_536_ = lean_box(0);
v_isShared_537_ = v_isSharedCheck_541_;
goto v_resetjp_535_;
}
v_resetjp_535_:
{
lean_object* v___x_539_; 
if (v_isShared_537_ == 0)
{
v___x_539_ = v___x_536_;
goto v_reusejp_538_;
}
else
{
lean_object* v_reuseFailAlloc_540_; 
v_reuseFailAlloc_540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_540_, 0, v_a_534_);
v___x_539_ = v_reuseFailAlloc_540_;
goto v_reusejp_538_;
}
v_reusejp_538_:
{
return v___x_539_;
}
}
}
}
}
else
{
v___y_479_ = v___y_415_;
v___y_480_ = v___y_416_;
goto v___jp_478_;
}
v___jp_463_:
{
lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; 
v___x_466_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__6));
lean_inc_n(v___y_465_, 4);
v___x_467_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_467_, 0, v___y_465_);
lean_ctor_set(v___x_467_, 1, v___x_466_);
v___x_468_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__9));
v___x_469_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__7, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__7);
v___x_470_ = l_Array_append___redArg(v___x_469_, v___y_464_);
lean_dec_ref(v___y_464_);
v___x_471_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_471_, 0, v___y_465_);
lean_ctor_set(v___x_471_, 1, v___x_468_);
lean_ctor_set(v___x_471_, 2, v___x_470_);
v___x_472_ = l_Lean_Syntax_node1(v___y_465_, v___x_468_, v___x_471_);
v___x_473_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__8));
v___x_474_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_474_, 0, v___y_465_);
lean_ctor_set(v___x_474_, 1, v___x_473_);
v___x_475_ = l_Lean_Syntax_node4(v___y_465_, v___x_452_, v___x_467_, v___x_472_, v___x_474_, v___x_462_);
v_a_425_ = v___x_475_;
goto v___jp_424_;
}
v___jp_478_:
{
lean_object* v_quoted_481_; lean_object* v_k_x27_482_; uint8_t v___x_483_; 
lean_inc(v_pat_477_);
v_quoted_481_ = l_Lean_Syntax_getQuotContent(v_pat_477_);
lean_inc(v_quoted_481_);
v_k_x27_482_ = l_Lean_Syntax_getKind(v_quoted_481_);
lean_inc(v_k_411_);
v___x_483_ = l_Lean_Elab_Command_checkRuleKind(v_k_x27_482_, v_k_411_);
if (v___x_483_ == 0)
{
lean_object* v___x_484_; uint8_t v___x_485_; 
v___x_484_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__10));
v___x_485_ = lean_name_eq(v_k_x27_482_, v___x_484_);
if (v___x_485_ == 0)
{
lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; 
lean_dec(v_quoted_481_);
lean_dec(v_pat_477_);
lean_dec_ref(v___x_476_);
lean_dec(v___x_462_);
v___x_486_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__12, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__12_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__12);
v___x_487_ = l_Lean_MessageData_ofName(v_k_x27_482_);
v___x_488_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_488_, 0, v___x_486_);
lean_ctor_set(v___x_488_, 1, v___x_487_);
v___x_489_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__3, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__3);
v___x_490_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_490_, 0, v___x_488_);
lean_ctor_set(v___x_490_, 1, v___x_489_);
v___x_491_ = l_Lean_throwErrorAt___at___00Lean_Elab_Command_elabElabRulesAux_spec__3___redArg(v___x_442_, v___x_490_, v___y_479_, v___y_480_);
lean_dec(v___x_442_);
v___y_432_ = v___x_491_;
goto v___jp_431_;
}
else
{
lean_object* v___x_492_; lean_object* v___x_493_; size_t v_sz_494_; size_t v___x_495_; lean_object* v___x_496_; lean_object* v_fst_497_; 
lean_dec(v_k_x27_482_);
v___x_492_ = l_Lean_Syntax_getArgs(v_quoted_481_);
lean_dec(v_quoted_481_);
v___x_493_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabElabRulesAux_spec__4___closed__0));
v_sz_494_ = lean_array_size(v___x_492_);
v___x_495_ = ((size_t)0ULL);
lean_inc(v_k_411_);
v___x_496_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabElabRulesAux_spec__4(v_k_411_, v___x_492_, v_sz_494_, v___x_495_, v___x_493_);
lean_dec_ref(v___x_492_);
v_fst_497_ = lean_ctor_get(v___x_496_, 0);
lean_inc(v_fst_497_);
lean_dec_ref(v___x_496_);
if (lean_obj_tag(v_fst_497_) == 0)
{
lean_dec(v_pat_477_);
lean_dec_ref(v___x_476_);
lean_dec(v___x_462_);
v___y_444_ = v___y_480_;
v___y_445_ = v___y_479_;
goto v___jp_443_;
}
else
{
lean_object* v_val_498_; 
v_val_498_ = lean_ctor_get(v_fst_497_, 0);
lean_inc(v_val_498_);
lean_dec_ref_known(v_fst_497_, 1);
if (lean_obj_tag(v_val_498_) == 0)
{
lean_dec(v_pat_477_);
lean_dec_ref(v___x_476_);
lean_dec(v___x_462_);
v___y_444_ = v___y_480_;
v___y_445_ = v___y_479_;
goto v___jp_443_;
}
else
{
lean_object* v_val_499_; lean_object* v_pat_500_; lean_object* v___x_501_; lean_object* v___x_502_; 
lean_dec(v___x_442_);
v_val_499_ = lean_ctor_get(v_val_498_, 0);
lean_inc(v_val_499_);
lean_dec_ref_known(v_val_498_, 1);
v_pat_500_ = l_Lean_Syntax_setArg(v_pat_477_, v___x_455_, v_val_499_);
v___x_501_ = lean_array_set(v___x_476_, v___x_422_, v_pat_500_);
v___x_502_ = l_Lean_Elab_Command_getRef___redArg(v___y_479_);
if (lean_obj_tag(v___x_502_) == 0)
{
lean_object* v_a_503_; lean_object* v___x_504_; lean_object* v___x_505_; 
v_a_503_ = lean_ctor_get(v___x_502_, 0);
lean_inc(v_a_503_);
lean_dec_ref_known(v___x_502_, 1);
v___x_504_ = l_Lean_SourceInfo_fromRef(v_a_503_, v___x_483_);
lean_dec(v_a_503_);
v___x_505_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_479_);
if (lean_obj_tag(v___x_505_) == 0)
{
lean_object* v_quotContext_x3f_506_; 
lean_dec_ref_known(v___x_505_, 1);
v_quotContext_x3f_506_ = lean_ctor_get(v___y_479_, 5);
if (lean_obj_tag(v_quotContext_x3f_506_) == 0)
{
lean_object* v___x_507_; 
v___x_507_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabElabRulesAux_spec__1___redArg(v___y_480_);
if (lean_obj_tag(v___x_507_) == 0)
{
lean_dec_ref_known(v___x_507_, 1);
v___y_464_ = v___x_501_;
v___y_465_ = v___x_504_;
goto v___jp_463_;
}
else
{
lean_object* v_a_508_; lean_object* v___x_510_; uint8_t v_isShared_511_; uint8_t v_isSharedCheck_515_; 
lean_dec(v___x_504_);
lean_dec_ref(v___x_501_);
lean_dec(v___x_462_);
lean_dec_ref(v_bs_x27_423_);
lean_dec(v_k_411_);
v_a_508_ = lean_ctor_get(v___x_507_, 0);
v_isSharedCheck_515_ = !lean_is_exclusive(v___x_507_);
if (v_isSharedCheck_515_ == 0)
{
v___x_510_ = v___x_507_;
v_isShared_511_ = v_isSharedCheck_515_;
goto v_resetjp_509_;
}
else
{
lean_inc(v_a_508_);
lean_dec(v___x_507_);
v___x_510_ = lean_box(0);
v_isShared_511_ = v_isSharedCheck_515_;
goto v_resetjp_509_;
}
v_resetjp_509_:
{
lean_object* v___x_513_; 
if (v_isShared_511_ == 0)
{
v___x_513_ = v___x_510_;
goto v_reusejp_512_;
}
else
{
lean_object* v_reuseFailAlloc_514_; 
v_reuseFailAlloc_514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_514_, 0, v_a_508_);
v___x_513_ = v_reuseFailAlloc_514_;
goto v_reusejp_512_;
}
v_reusejp_512_:
{
return v___x_513_;
}
}
}
}
else
{
v___y_464_ = v___x_501_;
v___y_465_ = v___x_504_;
goto v___jp_463_;
}
}
else
{
lean_object* v_a_516_; lean_object* v___x_518_; uint8_t v_isShared_519_; uint8_t v_isSharedCheck_523_; 
lean_dec(v___x_504_);
lean_dec_ref(v___x_501_);
lean_dec(v___x_462_);
lean_dec_ref(v_bs_x27_423_);
lean_dec(v_k_411_);
v_a_516_ = lean_ctor_get(v___x_505_, 0);
v_isSharedCheck_523_ = !lean_is_exclusive(v___x_505_);
if (v_isSharedCheck_523_ == 0)
{
v___x_518_ = v___x_505_;
v_isShared_519_ = v_isSharedCheck_523_;
goto v_resetjp_517_;
}
else
{
lean_inc(v_a_516_);
lean_dec(v___x_505_);
v___x_518_ = lean_box(0);
v_isShared_519_ = v_isSharedCheck_523_;
goto v_resetjp_517_;
}
v_resetjp_517_:
{
lean_object* v___x_521_; 
if (v_isShared_519_ == 0)
{
v___x_521_ = v___x_518_;
goto v_reusejp_520_;
}
else
{
lean_object* v_reuseFailAlloc_522_; 
v_reuseFailAlloc_522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_522_, 0, v_a_516_);
v___x_521_ = v_reuseFailAlloc_522_;
goto v_reusejp_520_;
}
v_reusejp_520_:
{
return v___x_521_;
}
}
}
}
else
{
lean_object* v_a_524_; lean_object* v___x_526_; uint8_t v_isShared_527_; uint8_t v_isSharedCheck_531_; 
lean_dec_ref(v___x_501_);
lean_dec(v___x_462_);
lean_dec_ref(v_bs_x27_423_);
lean_dec(v_k_411_);
v_a_524_ = lean_ctor_get(v___x_502_, 0);
v_isSharedCheck_531_ = !lean_is_exclusive(v___x_502_);
if (v_isSharedCheck_531_ == 0)
{
v___x_526_ = v___x_502_;
v_isShared_527_ = v_isSharedCheck_531_;
goto v_resetjp_525_;
}
else
{
lean_inc(v_a_524_);
lean_dec(v___x_502_);
v___x_526_ = lean_box(0);
v_isShared_527_ = v_isSharedCheck_531_;
goto v_resetjp_525_;
}
v_resetjp_525_:
{
lean_object* v___x_529_; 
if (v_isShared_527_ == 0)
{
v___x_529_ = v___x_526_;
goto v_reusejp_528_;
}
else
{
lean_object* v_reuseFailAlloc_530_; 
v_reuseFailAlloc_530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_530_, 0, v_a_524_);
v___x_529_ = v_reuseFailAlloc_530_;
goto v_reusejp_528_;
}
v_reusejp_528_:
{
return v___x_529_;
}
}
}
}
}
}
}
else
{
lean_dec(v_k_x27_482_);
lean_dec(v_quoted_481_);
lean_dec(v_pat_477_);
lean_dec_ref(v___x_476_);
lean_dec(v___x_462_);
v_a_425_ = v___x_442_;
goto v___jp_424_;
}
}
}
}
v___jp_424_:
{
size_t v___x_426_; size_t v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; 
v___x_426_ = ((size_t)1ULL);
v___x_427_ = lean_usize_add(v_i_413_, v___x_426_);
v___x_428_ = l_unsafeCast___redArg(v_a_425_);
lean_dec(v_a_425_);
v___x_429_ = lean_array_uset(v_bs_x27_423_, v_i_413_, v___x_428_);
v_i_413_ = v___x_427_;
v_bs_414_ = v___x_429_;
goto _start;
}
v___jp_431_:
{
if (lean_obj_tag(v___y_432_) == 0)
{
lean_object* v_a_433_; 
v_a_433_ = lean_ctor_get(v___y_432_, 0);
lean_inc(v_a_433_);
lean_dec_ref_known(v___y_432_, 1);
v_a_425_ = v_a_433_;
goto v___jp_424_;
}
else
{
lean_object* v_a_434_; lean_object* v___x_436_; uint8_t v_isShared_437_; uint8_t v_isSharedCheck_441_; 
lean_dec_ref(v_bs_x27_423_);
lean_dec(v_k_411_);
v_a_434_ = lean_ctor_get(v___y_432_, 0);
v_isSharedCheck_441_ = !lean_is_exclusive(v___y_432_);
if (v_isSharedCheck_441_ == 0)
{
v___x_436_ = v___y_432_;
v_isShared_437_ = v_isSharedCheck_441_;
goto v_resetjp_435_;
}
else
{
lean_inc(v_a_434_);
lean_dec(v___y_432_);
v___x_436_ = lean_box(0);
v_isShared_437_ = v_isSharedCheck_441_;
goto v_resetjp_435_;
}
v_resetjp_435_:
{
lean_object* v___x_439_; 
if (v_isShared_437_ == 0)
{
v___x_439_ = v___x_436_;
goto v_reusejp_438_;
}
else
{
lean_object* v_reuseFailAlloc_440_; 
v_reuseFailAlloc_440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_440_, 0, v_a_434_);
v___x_439_ = v_reuseFailAlloc_440_;
goto v_reusejp_438_;
}
v_reusejp_438_:
{
return v___x_439_;
}
}
}
}
v___jp_443_:
{
lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; 
v___x_446_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__1);
lean_inc(v_k_411_);
v___x_447_ = l_Lean_MessageData_ofName(v_k_411_);
v___x_448_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_448_, 0, v___x_446_);
lean_ctor_set(v___x_448_, 1, v___x_447_);
v___x_449_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__3, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__3);
v___x_450_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_450_, 0, v___x_448_);
lean_ctor_set(v___x_450_, 1, v___x_449_);
v___x_451_ = l_Lean_throwErrorAt___at___00Lean_Elab_Command_elabElabRulesAux_spec__3___redArg(v___x_442_, v___x_450_, v___y_445_, v___y_444_);
lean_dec(v___x_442_);
v___y_432_ = v___x_451_;
goto v___jp_431_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___boxed(lean_object* v_k_542_, lean_object* v_sz_543_, lean_object* v_i_544_, lean_object* v_bs_545_, lean_object* v___y_546_, lean_object* v___y_547_, lean_object* v___y_548_){
_start:
{
size_t v_sz_boxed_549_; size_t v_i_boxed_550_; lean_object* v_res_551_; 
v_sz_boxed_549_ = lean_unbox_usize(v_sz_543_);
lean_dec(v_sz_543_);
v_i_boxed_550_ = lean_unbox_usize(v_i_544_);
lean_dec(v_i_544_);
v_res_551_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5(v_k_542_, v_sz_boxed_549_, v_i_boxed_550_, v_bs_545_, v___y_546_, v___y_547_);
lean_dec(v___y_547_);
lean_dec_ref(v___y_546_);
return v_res_551_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabElabRulesAux___closed__5(void){
_start:
{
lean_object* v___x_557_; lean_object* v___x_558_; 
v___x_557_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__4));
v___x_558_ = l_String_toRawSubstring_x27(v___x_557_);
return v___x_558_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabElabRulesAux___closed__9(void){
_start:
{
lean_object* v___x_563_; lean_object* v___x_564_; 
v___x_563_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__8));
v___x_564_ = l_String_toRawSubstring_x27(v___x_563_);
return v___x_564_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabElabRulesAux___closed__16(void){
_start:
{
lean_object* v___x_571_; lean_object* v___x_572_; 
v___x_571_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__15));
v___x_572_ = l_String_toRawSubstring_x27(v___x_571_);
return v___x_572_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabElabRulesAux___closed__27(void){
_start:
{
lean_object* v___x_584_; lean_object* v___x_585_; 
v___x_584_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__26));
v___x_585_ = l_String_toRawSubstring_x27(v___x_584_);
return v___x_585_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabElabRulesAux___closed__35(void){
_start:
{
lean_object* v___x_599_; lean_object* v___x_600_; 
v___x_599_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__34));
v___x_600_ = l_String_toRawSubstring_x27(v___x_599_);
return v___x_600_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabElabRulesAux___closed__38(void){
_start:
{
lean_object* v___x_603_; lean_object* v___x_604_; 
v___x_603_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__37));
v___x_604_ = l_String_toRawSubstring_x27(v___x_603_);
return v___x_604_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabElabRulesAux___closed__42(void){
_start:
{
lean_object* v___x_609_; lean_object* v___x_610_; 
v___x_609_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__41));
v___x_610_ = l_String_toRawSubstring_x27(v___x_609_);
return v___x_610_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabElabRulesAux___closed__45(void){
_start:
{
lean_object* v___x_613_; lean_object* v___x_614_; 
v___x_613_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__44));
v___x_614_ = l_String_toRawSubstring_x27(v___x_613_);
return v___x_614_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabElabRulesAux___closed__48(void){
_start:
{
lean_object* v___x_617_; lean_object* v___x_618_; 
v___x_617_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__47));
v___x_618_ = l_String_toRawSubstring_x27(v___x_617_);
return v___x_618_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabElabRulesAux___closed__51(void){
_start:
{
lean_object* v___x_622_; lean_object* v___x_623_; 
v___x_622_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__50));
v___x_623_ = l_String_toRawSubstring_x27(v___x_622_);
return v___x_623_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabElabRulesAux___closed__58(void){
_start:
{
lean_object* v___x_632_; lean_object* v___x_633_; 
v___x_632_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__57));
v___x_633_ = l_Lean_stringToMessageData(v___x_632_);
return v___x_633_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabElabRulesAux___closed__60(void){
_start:
{
lean_object* v___x_635_; lean_object* v___x_636_; 
v___x_635_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__59));
v___x_636_ = l_Lean_stringToMessageData(v___x_635_);
return v___x_636_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabElabRulesAux___closed__72(void){
_start:
{
lean_object* v___x_653_; lean_object* v___x_654_; 
v___x_653_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__71));
v___x_654_ = l_Lean_stringToMessageData(v___x_653_);
return v___x_654_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabElabRulesAux___closed__76(void){
_start:
{
lean_object* v___x_659_; lean_object* v___x_660_; 
v___x_659_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__75));
v___x_660_ = l_Lean_stringToMessageData(v___x_659_);
return v___x_660_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabElabRulesAux(lean_object* v_doc_x3f_663_, lean_object* v_attrs_x3f_664_, lean_object* v_attrKind_665_, lean_object* v_k_666_, lean_object* v_cat_x3f_667_, lean_object* v_expty_x3f_668_, lean_object* v_alts_669_, lean_object* v_a_670_, lean_object* v_a_671_){
_start:
{
size_t v_sz_673_; lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_21251__overap_678_; lean_object* v___x_679_; 
v_sz_673_ = lean_array_size(v_alts_669_);
v___x_674_ = l_unsafeCast___redArg(v_alts_669_);
v___x_675_ = lean_box_usize(v_sz_673_);
v___x_676_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___boxed__const__1));
lean_inc(v_k_666_);
v___x_677_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___boxed), 7, 4);
lean_closure_set(v___x_677_, 0, v_k_666_);
lean_closure_set(v___x_677_, 1, v___x_675_);
lean_closure_set(v___x_677_, 2, v___x_676_);
lean_closure_set(v___x_677_, 3, v___x_674_);
v___x_21251__overap_678_ = l_unsafeCast___redArg(v___x_677_);
lean_dec_ref(v___x_677_);
lean_inc(v_a_671_);
lean_inc_ref(v_a_670_);
v___x_679_ = lean_apply_3(v___x_21251__overap_678_, v_a_670_, v_a_671_, lean_box(0));
if (lean_obj_tag(v___x_679_) == 0)
{
lean_object* v_a_680_; lean_object* v___x_682_; uint8_t v_isShared_683_; uint8_t v_isSharedCheck_1702_; 
v_a_680_ = lean_ctor_get(v___x_679_, 0);
v_isSharedCheck_1702_ = !lean_is_exclusive(v___x_679_);
if (v_isSharedCheck_1702_ == 0)
{
v___x_682_ = v___x_679_;
v_isShared_683_ = v_isSharedCheck_1702_;
goto v_resetjp_681_;
}
else
{
lean_inc(v_a_680_);
lean_dec(v___x_679_);
v___x_682_ = lean_box(0);
v_isShared_683_ = v_isSharedCheck_1702_;
goto v_resetjp_681_;
}
v_resetjp_681_:
{
lean_object* v___y_685_; lean_object* v___y_686_; lean_object* v___y_687_; lean_object* v___y_688_; lean_object* v___y_689_; lean_object* v___y_690_; lean_object* v___y_691_; lean_object* v___y_692_; lean_object* v___y_693_; lean_object* v___y_694_; lean_object* v___y_695_; lean_object* v___y_696_; lean_object* v___y_697_; lean_object* v___y_807_; lean_object* v___y_808_; lean_object* v___y_809_; lean_object* v___y_810_; lean_object* v___y_811_; lean_object* v_a_812_; lean_object* v___y_823_; lean_object* v___y_824_; lean_object* v___y_825_; lean_object* v___y_826_; lean_object* v___y_827_; lean_object* v___y_828_; lean_object* v___y_829_; lean_object* v___y_830_; lean_object* v___y_831_; lean_object* v___y_832_; lean_object* v___y_833_; lean_object* v___y_834_; lean_object* v___y_835_; lean_object* v___y_960_; lean_object* v___y_961_; lean_object* v___y_962_; lean_object* v___y_963_; lean_object* v___y_964_; lean_object* v_a_965_; lean_object* v___y_976_; lean_object* v___y_977_; lean_object* v___y_978_; lean_object* v___y_979_; lean_object* v___y_980_; lean_object* v___y_981_; lean_object* v___y_982_; lean_object* v___y_983_; lean_object* v___y_984_; lean_object* v___y_985_; lean_object* v___y_986_; lean_object* v___y_987_; lean_object* v___y_1075_; lean_object* v___y_1076_; lean_object* v___y_1077_; lean_object* v___y_1078_; lean_object* v_a_1079_; lean_object* v___y_1090_; uint8_t v___y_1091_; lean_object* v___y_1092_; lean_object* v___y_1093_; lean_object* v___y_1094_; lean_object* v___y_1124_; lean_object* v___y_1125_; lean_object* v___y_1126_; lean_object* v___y_1127_; lean_object* v___y_1128_; lean_object* v___y_1129_; lean_object* v___y_1130_; lean_object* v___y_1131_; lean_object* v___y_1132_; lean_object* v___y_1133_; lean_object* v___y_1134_; lean_object* v___y_1135_; lean_object* v___y_1247_; lean_object* v___y_1248_; lean_object* v___y_1249_; lean_object* v___y_1250_; lean_object* v_a_1251_; lean_object* v___y_1262_; lean_object* v___y_1263_; lean_object* v___y_1264_; lean_object* v___y_1265_; lean_object* v___y_1266_; lean_object* v___y_1267_; lean_object* v___y_1268_; lean_object* v___y_1269_; lean_object* v___y_1270_; lean_object* v___y_1271_; lean_object* v___y_1272_; lean_object* v___y_1273_; lean_object* v___y_1274_; lean_object* v___y_1362_; lean_object* v___y_1363_; lean_object* v___y_1364_; lean_object* v___y_1365_; lean_object* v_a_1366_; lean_object* v___y_1378_; lean_object* v___y_1379_; lean_object* v___y_1380_; lean_object* v___y_1381_; lean_object* v___y_1382_; lean_object* v___y_1383_; lean_object* v___y_1384_; lean_object* v___y_1385_; lean_object* v___y_1386_; lean_object* v___y_1387_; lean_object* v___y_1388_; lean_object* v___y_1389_; lean_object* v___y_1496_; lean_object* v___y_1497_; lean_object* v___y_1498_; lean_object* v___y_1499_; lean_object* v_a_1500_; lean_object* v_catName_1511_; lean_object* v___y_1512_; lean_object* v___y_1513_; 
if (lean_obj_tag(v_cat_x3f_667_) == 1)
{
lean_object* v_val_1689_; lean_object* v___x_1690_; 
v_val_1689_ = lean_ctor_get(v_cat_x3f_667_, 0);
v___x_1690_ = l_Lean_TSyntax_getId(v_val_1689_);
v_catName_1511_ = v___x_1690_;
v___y_1512_ = v_a_670_;
v___y_1513_ = v_a_671_;
goto v___jp_1510_;
}
else
{
if (lean_obj_tag(v_expty_x3f_668_) == 1)
{
lean_object* v___x_1691_; 
v___x_1691_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__54));
v_catName_1511_ = v___x_1691_;
v___y_1512_ = v_a_670_;
v___y_1513_ = v_a_671_;
goto v___jp_1510_;
}
else
{
lean_object* v___x_1692_; lean_object* v___x_1693_; lean_object* v_a_1694_; lean_object* v___x_1696_; uint8_t v_isShared_1697_; uint8_t v_isSharedCheck_1701_; 
lean_del_object(v___x_682_);
lean_dec(v_a_680_);
lean_dec(v_expty_x3f_668_);
lean_dec(v_k_666_);
lean_dec(v_attrKind_665_);
lean_dec(v_doc_x3f_663_);
v___x_1692_ = lean_obj_once(&l_Lean_Elab_Command_elabElabRulesAux___closed__76, &l_Lean_Elab_Command_elabElabRulesAux___closed__76_once, _init_l_Lean_Elab_Command_elabElabRulesAux___closed__76);
v___x_1693_ = l_Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6___redArg(v___x_1692_, v_a_670_, v_a_671_);
v_a_1694_ = lean_ctor_get(v___x_1693_, 0);
v_isSharedCheck_1701_ = !lean_is_exclusive(v___x_1693_);
if (v_isSharedCheck_1701_ == 0)
{
v___x_1696_ = v___x_1693_;
v_isShared_1697_ = v_isSharedCheck_1701_;
goto v_resetjp_1695_;
}
else
{
lean_inc(v_a_1694_);
lean_dec(v___x_1693_);
v___x_1696_ = lean_box(0);
v_isShared_1697_ = v_isSharedCheck_1701_;
goto v_resetjp_1695_;
}
v_resetjp_1695_:
{
lean_object* v___x_1699_; 
if (v_isShared_1697_ == 0)
{
v___x_1699_ = v___x_1696_;
goto v_reusejp_1698_;
}
else
{
lean_object* v_reuseFailAlloc_1700_; 
v_reuseFailAlloc_1700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1700_, 0, v_a_1694_);
v___x_1699_ = v_reuseFailAlloc_1700_;
goto v_reusejp_1698_;
}
v_reusejp_1698_:
{
return v___x_1699_;
}
}
}
}
v___jp_684_:
{
lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_804_; 
lean_inc_ref_n(v___y_693_, 4);
v___x_698_ = l_Array_append___redArg(v___y_693_, v___y_697_);
lean_dec_ref(v___y_697_);
lean_inc_n(v___y_696_, 10);
lean_inc_n(v___y_690_, 35);
v___x_699_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_699_, 0, v___y_690_);
lean_ctor_set(v___x_699_, 1, v___y_696_);
lean_ctor_set(v___x_699_, 2, v___x_698_);
v___x_700_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__1));
v___x_701_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__2));
v___x_702_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__0));
lean_inc_ref_n(v___y_685_, 11);
v___x_703_ = l_Lean_Name_mkStr4(v___y_685_, v___x_700_, v___x_701_, v___x_702_);
v___x_704_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__1));
v___x_705_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_705_, 0, v___y_690_);
lean_ctor_set(v___x_705_, 1, v___x_704_);
v___x_706_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__2));
v___x_707_ = l_Lean_Syntax_TSepArray_ofElems___redArg(v___x_706_, v___y_689_);
lean_dec_ref(v___y_689_);
v___x_708_ = l_Array_append___redArg(v___y_693_, v___x_707_);
lean_dec_ref(v___x_707_);
v___x_709_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_709_, 0, v___y_690_);
lean_ctor_set(v___x_709_, 1, v___y_696_);
lean_ctor_set(v___x_709_, 2, v___x_708_);
v___x_710_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__3));
v___x_711_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_711_, 0, v___y_690_);
lean_ctor_set(v___x_711_, 1, v___x_710_);
v___x_712_ = l_Lean_Syntax_node3(v___y_690_, v___x_703_, v___x_705_, v___x_709_, v___x_711_);
v___x_713_ = l_Lean_Syntax_node1(v___y_690_, v___y_696_, v___x_712_);
lean_inc_ref(v___y_691_);
v___x_714_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_714_, 0, v___y_690_);
lean_ctor_set(v___x_714_, 1, v___y_691_);
v___x_715_ = lean_obj_once(&l_Lean_Elab_Command_elabElabRulesAux___closed__5, &l_Lean_Elab_Command_elabElabRulesAux___closed__5_once, _init_l_Lean_Elab_Command_elabElabRulesAux___closed__5);
v___x_716_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__6));
lean_inc_n(v___y_695_, 3);
lean_inc_n(v___y_692_, 3);
v___x_717_ = l_Lean_addMacroScope(v___y_692_, v___x_716_, v___y_695_);
v___x_718_ = lean_box(0);
v___x_719_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_719_, 0, v___y_690_);
lean_ctor_set(v___x_719_, 1, v___x_715_);
lean_ctor_set(v___x_719_, 2, v___x_717_);
lean_ctor_set(v___x_719_, 3, v___x_718_);
v___x_720_ = l_Lean_mkIdent(v_k_666_);
v___x_721_ = l_Lean_Syntax_node2(v___y_690_, v___y_696_, v___x_719_, v___x_720_);
v___x_722_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__7));
v___x_723_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_723_, 0, v___y_690_);
lean_ctor_set(v___x_723_, 1, v___x_722_);
v___x_724_ = lean_obj_once(&l_Lean_Elab_Command_elabElabRulesAux___closed__9, &l_Lean_Elab_Command_elabElabRulesAux___closed__9_once, _init_l_Lean_Elab_Command_elabElabRulesAux___closed__9);
v___x_725_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__10));
v___x_726_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__11));
lean_inc_ref_n(v___y_686_, 2);
v___x_727_ = l_Lean_Name_mkStr4(v___y_685_, v___y_686_, v___x_725_, v___x_726_);
lean_inc(v___x_727_);
v___x_728_ = l_Lean_addMacroScope(v___y_692_, v___x_727_, v___y_695_);
v___x_729_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_729_, 0, v___x_727_);
lean_ctor_set(v___x_729_, 1, v___x_718_);
v___x_730_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_730_, 0, v___x_729_);
lean_ctor_set(v___x_730_, 1, v___x_718_);
v___x_731_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_731_, 0, v___y_690_);
lean_ctor_set(v___x_731_, 1, v___x_724_);
lean_ctor_set(v___x_731_, 2, v___x_728_);
lean_ctor_set(v___x_731_, 3, v___x_730_);
v___x_732_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__12));
v___x_733_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_733_, 0, v___y_690_);
lean_ctor_set(v___x_733_, 1, v___x_732_);
v___x_734_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__13));
v___x_735_ = l_Lean_Name_mkStr4(v___y_685_, v___x_700_, v___x_701_, v___x_734_);
v___x_736_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_736_, 0, v___y_690_);
lean_ctor_set(v___x_736_, 1, v___x_734_);
v___x_737_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__14));
v___x_738_ = l_Lean_Name_mkStr4(v___y_685_, v___x_700_, v___x_701_, v___x_737_);
v___x_739_ = lean_obj_once(&l_Lean_Elab_Command_elabElabRulesAux___closed__16, &l_Lean_Elab_Command_elabElabRulesAux___closed__16_once, _init_l_Lean_Elab_Command_elabElabRulesAux___closed__16);
v___x_740_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__17));
v___x_741_ = l_Lean_addMacroScope(v___y_692_, v___x_740_, v___y_695_);
v___x_742_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_742_, 0, v___y_690_);
lean_ctor_set(v___x_742_, 1, v___x_739_);
lean_ctor_set(v___x_742_, 2, v___x_741_);
lean_ctor_set(v___x_742_, 3, v___x_718_);
lean_inc_ref(v___x_742_);
v___x_743_ = l_Lean_Syntax_node2(v___y_690_, v___y_696_, v___x_742_, v___y_687_);
v___x_744_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_744_, 0, v___y_690_);
lean_ctor_set(v___x_744_, 1, v___y_696_);
lean_ctor_set(v___x_744_, 2, v___y_693_);
v___x_745_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__8));
v___x_746_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_746_, 0, v___y_690_);
lean_ctor_set(v___x_746_, 1, v___x_745_);
v___x_747_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__18));
v___x_748_ = l_Lean_Name_mkStr4(v___y_685_, v___x_700_, v___x_701_, v___x_747_);
v___x_749_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_749_, 0, v___y_690_);
lean_ctor_set(v___x_749_, 1, v___x_747_);
v___x_750_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__19));
v___x_751_ = l_Lean_Name_mkStr4(v___y_685_, v___x_700_, v___x_701_, v___x_750_);
lean_inc_ref_n(v___x_744_, 3);
v___x_752_ = l_Lean_Syntax_node2(v___y_690_, v___x_751_, v___x_744_, v___x_742_);
v___x_753_ = l_Lean_Syntax_node1(v___y_690_, v___y_696_, v___x_752_);
v___x_754_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__20));
v___x_755_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_755_, 0, v___y_690_);
lean_ctor_set(v___x_755_, 1, v___x_754_);
v___x_756_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__21));
v___x_757_ = l_Lean_Name_mkStr4(v___y_685_, v___x_700_, v___x_701_, v___x_756_);
v___x_758_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__4));
v___x_759_ = l_Lean_Name_mkStr4(v___y_685_, v___x_700_, v___x_701_, v___x_758_);
v___x_760_ = l_unsafeCast___redArg(v_a_680_);
lean_dec(v_a_680_);
v___x_761_ = l_Array_append___redArg(v___y_693_, v___x_760_);
lean_dec(v___x_760_);
v___x_762_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__6));
v___x_763_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_763_, 0, v___y_690_);
lean_ctor_set(v___x_763_, 1, v___x_762_);
v___x_764_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__22));
v___x_765_ = l_Lean_Name_mkStr4(v___y_685_, v___x_700_, v___x_701_, v___x_764_);
v___x_766_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__23));
v___x_767_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_767_, 0, v___y_690_);
lean_ctor_set(v___x_767_, 1, v___x_766_);
v___x_768_ = l_Lean_Syntax_node1(v___y_690_, v___x_765_, v___x_767_);
v___x_769_ = l_Lean_Syntax_node1(v___y_690_, v___y_696_, v___x_768_);
v___x_770_ = l_Lean_Syntax_node1(v___y_690_, v___y_696_, v___x_769_);
v___x_771_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__24));
v___x_772_ = l_Lean_Name_mkStr4(v___y_685_, v___x_700_, v___x_701_, v___x_771_);
v___x_773_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__25));
v___x_774_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_774_, 0, v___y_690_);
lean_ctor_set(v___x_774_, 1, v___x_773_);
v___x_775_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__26));
v___x_776_ = lean_obj_once(&l_Lean_Elab_Command_elabElabRulesAux___closed__27, &l_Lean_Elab_Command_elabElabRulesAux___closed__27_once, _init_l_Lean_Elab_Command_elabElabRulesAux___closed__27);
v___x_777_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__28));
v___x_778_ = l_Lean_addMacroScope(v___y_692_, v___x_777_, v___y_695_);
v___x_779_ = l_Lean_Name_mkStr3(v___y_685_, v___y_686_, v___x_775_);
v___x_780_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_780_, 0, v___x_779_);
lean_ctor_set(v___x_780_, 1, v___x_718_);
v___x_781_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_781_, 0, v___x_780_);
lean_ctor_set(v___x_781_, 1, v___x_718_);
v___x_782_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_782_, 0, v___y_690_);
lean_ctor_set(v___x_782_, 1, v___x_776_);
lean_ctor_set(v___x_782_, 2, v___x_778_);
lean_ctor_set(v___x_782_, 3, v___x_781_);
v___x_783_ = l_Lean_Syntax_node2(v___y_690_, v___x_772_, v___x_774_, v___x_782_);
lean_inc_ref(v___x_746_);
v___x_784_ = l_Lean_Syntax_node4(v___y_690_, v___x_759_, v___x_763_, v___x_770_, v___x_746_, v___x_783_);
v___x_785_ = lean_array_push(v___x_761_, v___x_784_);
v___x_786_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_786_, 0, v___y_690_);
lean_ctor_set(v___x_786_, 1, v___y_696_);
lean_ctor_set(v___x_786_, 2, v___x_785_);
v___x_787_ = l_Lean_Syntax_node1(v___y_690_, v___x_757_, v___x_786_);
v___x_788_ = l_Lean_Syntax_node6(v___y_690_, v___x_748_, v___x_749_, v___x_744_, v___x_744_, v___x_753_, v___x_755_, v___x_787_);
v___x_789_ = l_Lean_Syntax_node4(v___y_690_, v___x_738_, v___x_743_, v___x_744_, v___x_746_, v___x_788_);
v___x_790_ = l_Lean_Syntax_node2(v___y_690_, v___x_735_, v___x_736_, v___x_789_);
v___x_791_ = lean_unsigned_to_nat(9u);
v___x_792_ = lean_mk_empty_array_with_capacity(v___x_791_);
v___x_793_ = lean_array_push(v___x_792_, v___x_699_);
v___x_794_ = lean_array_push(v___x_793_, v___x_713_);
v___x_795_ = lean_array_push(v___x_794_, v___y_688_);
v___x_796_ = lean_array_push(v___x_795_, v___x_714_);
v___x_797_ = lean_array_push(v___x_796_, v___x_721_);
v___x_798_ = lean_array_push(v___x_797_, v___x_723_);
v___x_799_ = lean_array_push(v___x_798_, v___x_731_);
v___x_800_ = lean_array_push(v___x_799_, v___x_733_);
v___x_801_ = lean_array_push(v___x_800_, v___x_790_);
lean_inc(v___y_694_);
v___x_802_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_802_, 0, v___y_690_);
lean_ctor_set(v___x_802_, 1, v___y_694_);
lean_ctor_set(v___x_802_, 2, v___x_801_);
if (v_isShared_683_ == 0)
{
lean_ctor_set(v___x_682_, 0, v___x_802_);
v___x_804_ = v___x_682_;
goto v_reusejp_803_;
}
else
{
lean_object* v_reuseFailAlloc_805_; 
v_reuseFailAlloc_805_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_805_, 0, v___x_802_);
v___x_804_ = v_reuseFailAlloc_805_;
goto v_reusejp_803_;
}
v_reusejp_803_:
{
return v___x_804_;
}
}
v___jp_806_:
{
lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; 
v___x_813_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__0));
v___x_814_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__29));
v___x_815_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__31));
v___x_816_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__32));
v___x_817_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__9));
v___x_818_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__7, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__7);
if (lean_obj_tag(v_doc_x3f_663_) == 1)
{
lean_object* v_val_819_; lean_object* v___x_820_; 
v_val_819_ = lean_ctor_get(v_doc_x3f_663_, 0);
lean_inc(v_val_819_);
lean_dec_ref_known(v_doc_x3f_663_, 1);
v___x_820_ = l_Array_mkArray1___redArg(v_val_819_);
v___y_685_ = v___x_813_;
v___y_686_ = v___x_814_;
v___y_687_ = v___y_808_;
v___y_688_ = v___y_807_;
v___y_689_ = v___y_809_;
v___y_690_ = v___y_811_;
v___y_691_ = v___x_815_;
v___y_692_ = v_a_812_;
v___y_693_ = v___x_818_;
v___y_694_ = v___x_816_;
v___y_695_ = v___y_810_;
v___y_696_ = v___x_817_;
v___y_697_ = v___x_820_;
goto v___jp_684_;
}
else
{
lean_object* v___x_821_; 
lean_dec(v_doc_x3f_663_);
v___x_821_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__33));
v___y_685_ = v___x_813_;
v___y_686_ = v___x_814_;
v___y_687_ = v___y_808_;
v___y_688_ = v___y_807_;
v___y_689_ = v___y_809_;
v___y_690_ = v___y_811_;
v___y_691_ = v___x_815_;
v___y_692_ = v_a_812_;
v___y_693_ = v___x_818_;
v___y_694_ = v___x_816_;
v___y_695_ = v___y_810_;
v___y_696_ = v___x_817_;
v___y_697_ = v___x_821_;
goto v___jp_684_;
}
}
v___jp_822_:
{
lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; 
lean_inc_ref_n(v___y_826_, 4);
v___x_836_ = l_Array_append___redArg(v___y_826_, v___y_835_);
lean_dec_ref(v___y_835_);
lean_inc_n(v___y_828_, 12);
lean_inc_n(v___y_834_, 42);
v___x_837_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_837_, 0, v___y_834_);
lean_ctor_set(v___x_837_, 1, v___y_828_);
lean_ctor_set(v___x_837_, 2, v___x_836_);
v___x_838_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__1));
v___x_839_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__2));
v___x_840_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__0));
lean_inc_ref_n(v___y_833_, 13);
v___x_841_ = l_Lean_Name_mkStr4(v___y_833_, v___x_838_, v___x_839_, v___x_840_);
v___x_842_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__1));
v___x_843_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_843_, 0, v___y_834_);
lean_ctor_set(v___x_843_, 1, v___x_842_);
v___x_844_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__2));
v___x_845_ = l_Lean_Syntax_TSepArray_ofElems___redArg(v___x_844_, v___y_823_);
lean_dec_ref(v___y_823_);
v___x_846_ = l_Array_append___redArg(v___y_826_, v___x_845_);
lean_dec_ref(v___x_845_);
v___x_847_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_847_, 0, v___y_834_);
lean_ctor_set(v___x_847_, 1, v___y_828_);
lean_ctor_set(v___x_847_, 2, v___x_846_);
v___x_848_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__3));
v___x_849_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_849_, 0, v___y_834_);
lean_ctor_set(v___x_849_, 1, v___x_848_);
v___x_850_ = l_Lean_Syntax_node3(v___y_834_, v___x_841_, v___x_843_, v___x_847_, v___x_849_);
v___x_851_ = l_Lean_Syntax_node1(v___y_834_, v___y_828_, v___x_850_);
lean_inc_ref(v___y_831_);
v___x_852_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_852_, 0, v___y_834_);
lean_ctor_set(v___x_852_, 1, v___y_831_);
v___x_853_ = lean_obj_once(&l_Lean_Elab_Command_elabElabRulesAux___closed__5, &l_Lean_Elab_Command_elabElabRulesAux___closed__5_once, _init_l_Lean_Elab_Command_elabElabRulesAux___closed__5);
v___x_854_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__6));
lean_inc_n(v___y_832_, 5);
lean_inc_n(v___y_830_, 5);
v___x_855_ = l_Lean_addMacroScope(v___y_830_, v___x_854_, v___y_832_);
v___x_856_ = lean_box(0);
v___x_857_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_857_, 0, v___y_834_);
lean_ctor_set(v___x_857_, 1, v___x_853_);
lean_ctor_set(v___x_857_, 2, v___x_855_);
lean_ctor_set(v___x_857_, 3, v___x_856_);
v___x_858_ = l_Lean_mkIdent(v_k_666_);
v___x_859_ = l_Lean_Syntax_node2(v___y_834_, v___y_828_, v___x_857_, v___x_858_);
v___x_860_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__7));
v___x_861_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_861_, 0, v___y_834_);
lean_ctor_set(v___x_861_, 1, v___x_860_);
v___x_862_ = lean_obj_once(&l_Lean_Elab_Command_elabElabRulesAux___closed__35, &l_Lean_Elab_Command_elabElabRulesAux___closed__35_once, _init_l_Lean_Elab_Command_elabElabRulesAux___closed__35);
v___x_863_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__36));
lean_inc_ref_n(v___y_829_, 3);
v___x_864_ = l_Lean_Name_mkStr4(v___y_833_, v___y_829_, v___x_839_, v___x_863_);
lean_inc(v___x_864_);
v___x_865_ = l_Lean_addMacroScope(v___y_830_, v___x_864_, v___y_832_);
v___x_866_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_866_, 0, v___x_864_);
lean_ctor_set(v___x_866_, 1, v___x_856_);
v___x_867_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_867_, 0, v___x_866_);
lean_ctor_set(v___x_867_, 1, v___x_856_);
v___x_868_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_868_, 0, v___y_834_);
lean_ctor_set(v___x_868_, 1, v___x_862_);
lean_ctor_set(v___x_868_, 2, v___x_865_);
lean_ctor_set(v___x_868_, 3, v___x_867_);
v___x_869_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__12));
v___x_870_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_870_, 0, v___y_834_);
lean_ctor_set(v___x_870_, 1, v___x_869_);
v___x_871_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__13));
v___x_872_ = l_Lean_Name_mkStr4(v___y_833_, v___x_838_, v___x_839_, v___x_871_);
v___x_873_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_873_, 0, v___y_834_);
lean_ctor_set(v___x_873_, 1, v___x_871_);
v___x_874_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__14));
v___x_875_ = l_Lean_Name_mkStr4(v___y_833_, v___x_838_, v___x_839_, v___x_874_);
v___x_876_ = lean_obj_once(&l_Lean_Elab_Command_elabElabRulesAux___closed__16, &l_Lean_Elab_Command_elabElabRulesAux___closed__16_once, _init_l_Lean_Elab_Command_elabElabRulesAux___closed__16);
v___x_877_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__17));
v___x_878_ = l_Lean_addMacroScope(v___y_830_, v___x_877_, v___y_832_);
v___x_879_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_879_, 0, v___y_834_);
lean_ctor_set(v___x_879_, 1, v___x_876_);
lean_ctor_set(v___x_879_, 2, v___x_878_);
lean_ctor_set(v___x_879_, 3, v___x_856_);
v___x_880_ = lean_obj_once(&l_Lean_Elab_Command_elabElabRulesAux___closed__38, &l_Lean_Elab_Command_elabElabRulesAux___closed__38_once, _init_l_Lean_Elab_Command_elabElabRulesAux___closed__38);
v___x_881_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__39));
v___x_882_ = l_Lean_addMacroScope(v___y_830_, v___x_881_, v___y_832_);
v___x_883_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_883_, 0, v___y_834_);
lean_ctor_set(v___x_883_, 1, v___x_880_);
lean_ctor_set(v___x_883_, 2, v___x_882_);
lean_ctor_set(v___x_883_, 3, v___x_856_);
lean_inc_ref(v___x_883_);
lean_inc_ref(v___x_879_);
v___x_884_ = l_Lean_Syntax_node2(v___y_834_, v___y_828_, v___x_879_, v___x_883_);
v___x_885_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_885_, 0, v___y_834_);
lean_ctor_set(v___x_885_, 1, v___y_828_);
lean_ctor_set(v___x_885_, 2, v___y_826_);
v___x_886_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__8));
v___x_887_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_887_, 0, v___y_834_);
lean_ctor_set(v___x_887_, 1, v___x_886_);
v___x_888_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__40));
v___x_889_ = l_Lean_Name_mkStr4(v___y_833_, v___x_838_, v___x_839_, v___x_888_);
v___x_890_ = lean_obj_once(&l_Lean_Elab_Command_elabElabRulesAux___closed__42, &l_Lean_Elab_Command_elabElabRulesAux___closed__42_once, _init_l_Lean_Elab_Command_elabElabRulesAux___closed__42);
v___x_891_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__43));
v___x_892_ = l_Lean_Name_mkStr4(v___y_833_, v___y_829_, v___x_839_, v___x_891_);
lean_inc(v___x_892_);
v___x_893_ = l_Lean_addMacroScope(v___y_830_, v___x_892_, v___y_832_);
v___x_894_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_894_, 0, v___x_892_);
lean_ctor_set(v___x_894_, 1, v___x_856_);
v___x_895_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_895_, 0, v___x_894_);
lean_ctor_set(v___x_895_, 1, v___x_856_);
v___x_896_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_896_, 0, v___y_834_);
lean_ctor_set(v___x_896_, 1, v___x_890_);
lean_ctor_set(v___x_896_, 2, v___x_893_);
lean_ctor_set(v___x_896_, 3, v___x_895_);
v___x_897_ = l_Lean_Syntax_node1(v___y_834_, v___y_828_, v___y_824_);
v___x_898_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__18));
v___x_899_ = l_Lean_Name_mkStr4(v___y_833_, v___x_838_, v___x_839_, v___x_898_);
v___x_900_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_900_, 0, v___y_834_);
lean_ctor_set(v___x_900_, 1, v___x_898_);
v___x_901_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__19));
v___x_902_ = l_Lean_Name_mkStr4(v___y_833_, v___x_838_, v___x_839_, v___x_901_);
lean_inc_ref_n(v___x_885_, 4);
v___x_903_ = l_Lean_Syntax_node2(v___y_834_, v___x_902_, v___x_885_, v___x_879_);
v___x_904_ = l_Lean_Syntax_node1(v___y_834_, v___y_828_, v___x_903_);
v___x_905_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__20));
v___x_906_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_906_, 0, v___y_834_);
lean_ctor_set(v___x_906_, 1, v___x_905_);
v___x_907_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__21));
v___x_908_ = l_Lean_Name_mkStr4(v___y_833_, v___x_838_, v___x_839_, v___x_907_);
v___x_909_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__4));
v___x_910_ = l_Lean_Name_mkStr4(v___y_833_, v___x_838_, v___x_839_, v___x_909_);
v___x_911_ = l_unsafeCast___redArg(v_a_680_);
lean_dec(v_a_680_);
v___x_912_ = l_Array_append___redArg(v___y_826_, v___x_911_);
lean_dec(v___x_911_);
v___x_913_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__6));
v___x_914_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_914_, 0, v___y_834_);
lean_ctor_set(v___x_914_, 1, v___x_913_);
v___x_915_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__22));
v___x_916_ = l_Lean_Name_mkStr4(v___y_833_, v___x_838_, v___x_839_, v___x_915_);
v___x_917_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__23));
v___x_918_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_918_, 0, v___y_834_);
lean_ctor_set(v___x_918_, 1, v___x_917_);
v___x_919_ = l_Lean_Syntax_node1(v___y_834_, v___x_916_, v___x_918_);
v___x_920_ = l_Lean_Syntax_node1(v___y_834_, v___y_828_, v___x_919_);
v___x_921_ = l_Lean_Syntax_node1(v___y_834_, v___y_828_, v___x_920_);
v___x_922_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__24));
v___x_923_ = l_Lean_Name_mkStr4(v___y_833_, v___x_838_, v___x_839_, v___x_922_);
v___x_924_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__25));
v___x_925_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_925_, 0, v___y_834_);
lean_ctor_set(v___x_925_, 1, v___x_924_);
v___x_926_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__26));
v___x_927_ = lean_obj_once(&l_Lean_Elab_Command_elabElabRulesAux___closed__27, &l_Lean_Elab_Command_elabElabRulesAux___closed__27_once, _init_l_Lean_Elab_Command_elabElabRulesAux___closed__27);
v___x_928_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__28));
v___x_929_ = l_Lean_addMacroScope(v___y_830_, v___x_928_, v___y_832_);
v___x_930_ = l_Lean_Name_mkStr3(v___y_833_, v___y_829_, v___x_926_);
v___x_931_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_931_, 0, v___x_930_);
lean_ctor_set(v___x_931_, 1, v___x_856_);
v___x_932_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_932_, 0, v___x_931_);
lean_ctor_set(v___x_932_, 1, v___x_856_);
v___x_933_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_933_, 0, v___y_834_);
lean_ctor_set(v___x_933_, 1, v___x_927_);
lean_ctor_set(v___x_933_, 2, v___x_929_);
lean_ctor_set(v___x_933_, 3, v___x_932_);
v___x_934_ = l_Lean_Syntax_node2(v___y_834_, v___x_923_, v___x_925_, v___x_933_);
lean_inc_ref_n(v___x_887_, 2);
v___x_935_ = l_Lean_Syntax_node4(v___y_834_, v___x_910_, v___x_914_, v___x_921_, v___x_887_, v___x_934_);
v___x_936_ = lean_array_push(v___x_912_, v___x_935_);
v___x_937_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_937_, 0, v___y_834_);
lean_ctor_set(v___x_937_, 1, v___y_828_);
lean_ctor_set(v___x_937_, 2, v___x_936_);
v___x_938_ = l_Lean_Syntax_node1(v___y_834_, v___x_908_, v___x_937_);
v___x_939_ = l_Lean_Syntax_node6(v___y_834_, v___x_899_, v___x_900_, v___x_885_, v___x_885_, v___x_904_, v___x_906_, v___x_938_);
lean_inc(v___x_875_);
v___x_940_ = l_Lean_Syntax_node4(v___y_834_, v___x_875_, v___x_897_, v___x_885_, v___x_887_, v___x_939_);
lean_inc_ref(v___x_873_);
lean_inc(v___x_872_);
v___x_941_ = l_Lean_Syntax_node2(v___y_834_, v___x_872_, v___x_873_, v___x_940_);
v___x_942_ = l_Lean_Syntax_node2(v___y_834_, v___y_828_, v___x_883_, v___x_941_);
v___x_943_ = l_Lean_Syntax_node2(v___y_834_, v___x_889_, v___x_896_, v___x_942_);
v___x_944_ = l_Lean_Syntax_node4(v___y_834_, v___x_875_, v___x_884_, v___x_885_, v___x_887_, v___x_943_);
v___x_945_ = l_Lean_Syntax_node2(v___y_834_, v___x_872_, v___x_873_, v___x_944_);
v___x_946_ = lean_unsigned_to_nat(9u);
v___x_947_ = lean_mk_empty_array_with_capacity(v___x_946_);
v___x_948_ = lean_array_push(v___x_947_, v___x_837_);
v___x_949_ = lean_array_push(v___x_948_, v___x_851_);
v___x_950_ = lean_array_push(v___x_949_, v___y_825_);
v___x_951_ = lean_array_push(v___x_950_, v___x_852_);
v___x_952_ = lean_array_push(v___x_951_, v___x_859_);
v___x_953_ = lean_array_push(v___x_952_, v___x_861_);
v___x_954_ = lean_array_push(v___x_953_, v___x_868_);
v___x_955_ = lean_array_push(v___x_954_, v___x_870_);
v___x_956_ = lean_array_push(v___x_955_, v___x_945_);
lean_inc(v___y_827_);
v___x_957_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_957_, 0, v___y_834_);
lean_ctor_set(v___x_957_, 1, v___y_827_);
lean_ctor_set(v___x_957_, 2, v___x_956_);
v___x_958_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_958_, 0, v___x_957_);
return v___x_958_;
}
v___jp_959_:
{
lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; 
v___x_966_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__0));
v___x_967_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__29));
v___x_968_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__31));
v___x_969_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__32));
v___x_970_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__9));
v___x_971_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__7, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__7);
if (lean_obj_tag(v_doc_x3f_663_) == 1)
{
lean_object* v_val_972_; lean_object* v___x_973_; 
v_val_972_ = lean_ctor_get(v_doc_x3f_663_, 0);
lean_inc(v_val_972_);
lean_dec_ref_known(v_doc_x3f_663_, 1);
v___x_973_ = l_Array_mkArray1___redArg(v_val_972_);
v___y_823_ = v___y_960_;
v___y_824_ = v___y_963_;
v___y_825_ = v___y_962_;
v___y_826_ = v___x_971_;
v___y_827_ = v___x_969_;
v___y_828_ = v___x_970_;
v___y_829_ = v___x_967_;
v___y_830_ = v_a_965_;
v___y_831_ = v___x_968_;
v___y_832_ = v___y_961_;
v___y_833_ = v___x_966_;
v___y_834_ = v___y_964_;
v___y_835_ = v___x_973_;
goto v___jp_822_;
}
else
{
lean_object* v___x_974_; 
lean_dec(v_doc_x3f_663_);
v___x_974_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__33));
v___y_823_ = v___y_960_;
v___y_824_ = v___y_963_;
v___y_825_ = v___y_962_;
v___y_826_ = v___x_971_;
v___y_827_ = v___x_969_;
v___y_828_ = v___x_970_;
v___y_829_ = v___x_967_;
v___y_830_ = v_a_965_;
v___y_831_ = v___x_968_;
v___y_832_ = v___y_961_;
v___y_833_ = v___x_966_;
v___y_834_ = v___y_964_;
v___y_835_ = v___x_974_;
goto v___jp_822_;
}
}
v___jp_975_:
{
lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; 
lean_inc_ref_n(v___y_979_, 3);
v___x_988_ = l_Array_append___redArg(v___y_979_, v___y_987_);
lean_dec_ref(v___y_987_);
lean_inc_n(v___y_983_, 7);
lean_inc_n(v___y_984_, 26);
v___x_989_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_989_, 0, v___y_984_);
lean_ctor_set(v___x_989_, 1, v___y_983_);
lean_ctor_set(v___x_989_, 2, v___x_988_);
v___x_990_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__1));
v___x_991_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__2));
v___x_992_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__0));
lean_inc_ref_n(v___y_981_, 8);
v___x_993_ = l_Lean_Name_mkStr4(v___y_981_, v___x_990_, v___x_991_, v___x_992_);
v___x_994_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__1));
v___x_995_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_995_, 0, v___y_984_);
lean_ctor_set(v___x_995_, 1, v___x_994_);
v___x_996_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__2));
v___x_997_ = l_Lean_Syntax_TSepArray_ofElems___redArg(v___x_996_, v___y_976_);
lean_dec_ref(v___y_976_);
v___x_998_ = l_Array_append___redArg(v___y_979_, v___x_997_);
lean_dec_ref(v___x_997_);
v___x_999_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_999_, 0, v___y_984_);
lean_ctor_set(v___x_999_, 1, v___y_983_);
lean_ctor_set(v___x_999_, 2, v___x_998_);
v___x_1000_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__3));
v___x_1001_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1001_, 0, v___y_984_);
lean_ctor_set(v___x_1001_, 1, v___x_1000_);
v___x_1002_ = l_Lean_Syntax_node3(v___y_984_, v___x_993_, v___x_995_, v___x_999_, v___x_1001_);
v___x_1003_ = l_Lean_Syntax_node1(v___y_984_, v___y_983_, v___x_1002_);
lean_inc_ref(v___y_985_);
v___x_1004_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1004_, 0, v___y_984_);
lean_ctor_set(v___x_1004_, 1, v___y_985_);
v___x_1005_ = lean_obj_once(&l_Lean_Elab_Command_elabElabRulesAux___closed__5, &l_Lean_Elab_Command_elabElabRulesAux___closed__5_once, _init_l_Lean_Elab_Command_elabElabRulesAux___closed__5);
v___x_1006_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__6));
lean_inc_n(v___y_977_, 2);
lean_inc_n(v___y_978_, 2);
v___x_1007_ = l_Lean_addMacroScope(v___y_978_, v___x_1006_, v___y_977_);
v___x_1008_ = lean_box(0);
v___x_1009_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1009_, 0, v___y_984_);
lean_ctor_set(v___x_1009_, 1, v___x_1005_);
lean_ctor_set(v___x_1009_, 2, v___x_1007_);
lean_ctor_set(v___x_1009_, 3, v___x_1008_);
v___x_1010_ = l_Lean_mkIdent(v_k_666_);
v___x_1011_ = l_Lean_Syntax_node2(v___y_984_, v___y_983_, v___x_1009_, v___x_1010_);
v___x_1012_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__7));
v___x_1013_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1013_, 0, v___y_984_);
lean_ctor_set(v___x_1013_, 1, v___x_1012_);
v___x_1014_ = lean_obj_once(&l_Lean_Elab_Command_elabElabRulesAux___closed__45, &l_Lean_Elab_Command_elabElabRulesAux___closed__45_once, _init_l_Lean_Elab_Command_elabElabRulesAux___closed__45);
v___x_1015_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__46));
lean_inc_ref_n(v___y_986_, 2);
v___x_1016_ = l_Lean_Name_mkStr4(v___y_981_, v___y_986_, v___x_1015_, v___x_1015_);
lean_inc(v___x_1016_);
v___x_1017_ = l_Lean_addMacroScope(v___y_978_, v___x_1016_, v___y_977_);
v___x_1018_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1018_, 0, v___x_1016_);
lean_ctor_set(v___x_1018_, 1, v___x_1008_);
v___x_1019_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1019_, 0, v___x_1018_);
lean_ctor_set(v___x_1019_, 1, v___x_1008_);
v___x_1020_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1020_, 0, v___y_984_);
lean_ctor_set(v___x_1020_, 1, v___x_1014_);
lean_ctor_set(v___x_1020_, 2, v___x_1017_);
lean_ctor_set(v___x_1020_, 3, v___x_1019_);
v___x_1021_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__12));
v___x_1022_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1022_, 0, v___y_984_);
lean_ctor_set(v___x_1022_, 1, v___x_1021_);
v___x_1023_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__13));
v___x_1024_ = l_Lean_Name_mkStr4(v___y_981_, v___x_990_, v___x_991_, v___x_1023_);
v___x_1025_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1025_, 0, v___y_984_);
lean_ctor_set(v___x_1025_, 1, v___x_1023_);
v___x_1026_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__21));
v___x_1027_ = l_Lean_Name_mkStr4(v___y_981_, v___x_990_, v___x_991_, v___x_1026_);
v___x_1028_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__4));
v___x_1029_ = l_Lean_Name_mkStr4(v___y_981_, v___x_990_, v___x_991_, v___x_1028_);
v___x_1030_ = l_unsafeCast___redArg(v_a_680_);
lean_dec(v_a_680_);
v___x_1031_ = l_Array_append___redArg(v___y_979_, v___x_1030_);
lean_dec(v___x_1030_);
v___x_1032_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__6));
v___x_1033_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1033_, 0, v___y_984_);
lean_ctor_set(v___x_1033_, 1, v___x_1032_);
v___x_1034_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__22));
v___x_1035_ = l_Lean_Name_mkStr4(v___y_981_, v___x_990_, v___x_991_, v___x_1034_);
v___x_1036_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__23));
v___x_1037_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1037_, 0, v___y_984_);
lean_ctor_set(v___x_1037_, 1, v___x_1036_);
v___x_1038_ = l_Lean_Syntax_node1(v___y_984_, v___x_1035_, v___x_1037_);
v___x_1039_ = l_Lean_Syntax_node1(v___y_984_, v___y_983_, v___x_1038_);
v___x_1040_ = l_Lean_Syntax_node1(v___y_984_, v___y_983_, v___x_1039_);
v___x_1041_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__8));
v___x_1042_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1042_, 0, v___y_984_);
lean_ctor_set(v___x_1042_, 1, v___x_1041_);
v___x_1043_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__24));
v___x_1044_ = l_Lean_Name_mkStr4(v___y_981_, v___x_990_, v___x_991_, v___x_1043_);
v___x_1045_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__25));
v___x_1046_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1046_, 0, v___y_984_);
lean_ctor_set(v___x_1046_, 1, v___x_1045_);
v___x_1047_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__26));
v___x_1048_ = lean_obj_once(&l_Lean_Elab_Command_elabElabRulesAux___closed__27, &l_Lean_Elab_Command_elabElabRulesAux___closed__27_once, _init_l_Lean_Elab_Command_elabElabRulesAux___closed__27);
v___x_1049_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__28));
v___x_1050_ = l_Lean_addMacroScope(v___y_978_, v___x_1049_, v___y_977_);
v___x_1051_ = l_Lean_Name_mkStr3(v___y_981_, v___y_986_, v___x_1047_);
v___x_1052_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1052_, 0, v___x_1051_);
lean_ctor_set(v___x_1052_, 1, v___x_1008_);
v___x_1053_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1053_, 0, v___x_1052_);
lean_ctor_set(v___x_1053_, 1, v___x_1008_);
v___x_1054_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1054_, 0, v___y_984_);
lean_ctor_set(v___x_1054_, 1, v___x_1048_);
lean_ctor_set(v___x_1054_, 2, v___x_1050_);
lean_ctor_set(v___x_1054_, 3, v___x_1053_);
v___x_1055_ = l_Lean_Syntax_node2(v___y_984_, v___x_1044_, v___x_1046_, v___x_1054_);
v___x_1056_ = l_Lean_Syntax_node4(v___y_984_, v___x_1029_, v___x_1033_, v___x_1040_, v___x_1042_, v___x_1055_);
v___x_1057_ = lean_array_push(v___x_1031_, v___x_1056_);
v___x_1058_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1058_, 0, v___y_984_);
lean_ctor_set(v___x_1058_, 1, v___y_983_);
lean_ctor_set(v___x_1058_, 2, v___x_1057_);
v___x_1059_ = l_Lean_Syntax_node1(v___y_984_, v___x_1027_, v___x_1058_);
v___x_1060_ = l_Lean_Syntax_node2(v___y_984_, v___x_1024_, v___x_1025_, v___x_1059_);
v___x_1061_ = lean_unsigned_to_nat(9u);
v___x_1062_ = lean_mk_empty_array_with_capacity(v___x_1061_);
v___x_1063_ = lean_array_push(v___x_1062_, v___x_989_);
v___x_1064_ = lean_array_push(v___x_1063_, v___x_1003_);
v___x_1065_ = lean_array_push(v___x_1064_, v___y_980_);
v___x_1066_ = lean_array_push(v___x_1065_, v___x_1004_);
v___x_1067_ = lean_array_push(v___x_1066_, v___x_1011_);
v___x_1068_ = lean_array_push(v___x_1067_, v___x_1013_);
v___x_1069_ = lean_array_push(v___x_1068_, v___x_1020_);
v___x_1070_ = lean_array_push(v___x_1069_, v___x_1022_);
v___x_1071_ = lean_array_push(v___x_1070_, v___x_1060_);
lean_inc(v___y_982_);
v___x_1072_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1072_, 0, v___y_984_);
lean_ctor_set(v___x_1072_, 1, v___y_982_);
lean_ctor_set(v___x_1072_, 2, v___x_1071_);
v___x_1073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1073_, 0, v___x_1072_);
return v___x_1073_;
}
v___jp_1074_:
{
lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; 
v___x_1080_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__0));
v___x_1081_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__29));
v___x_1082_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__31));
v___x_1083_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__32));
v___x_1084_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__9));
v___x_1085_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__7, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__7);
if (lean_obj_tag(v_doc_x3f_663_) == 1)
{
lean_object* v_val_1086_; lean_object* v___x_1087_; 
v_val_1086_ = lean_ctor_get(v_doc_x3f_663_, 0);
lean_inc(v_val_1086_);
lean_dec_ref_known(v_doc_x3f_663_, 1);
v___x_1087_ = l_Array_mkArray1___redArg(v_val_1086_);
v___y_976_ = v___y_1075_;
v___y_977_ = v___y_1076_;
v___y_978_ = v_a_1079_;
v___y_979_ = v___x_1085_;
v___y_980_ = v___y_1077_;
v___y_981_ = v___x_1080_;
v___y_982_ = v___x_1083_;
v___y_983_ = v___x_1084_;
v___y_984_ = v___y_1078_;
v___y_985_ = v___x_1082_;
v___y_986_ = v___x_1081_;
v___y_987_ = v___x_1087_;
goto v___jp_975_;
}
else
{
lean_object* v___x_1088_; 
lean_dec(v_doc_x3f_663_);
v___x_1088_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__33));
v___y_976_ = v___y_1075_;
v___y_977_ = v___y_1076_;
v___y_978_ = v_a_1079_;
v___y_979_ = v___x_1085_;
v___y_980_ = v___y_1077_;
v___y_981_ = v___x_1080_;
v___y_982_ = v___x_1083_;
v___y_983_ = v___x_1084_;
v___y_984_ = v___y_1078_;
v___y_985_ = v___x_1082_;
v___y_986_ = v___x_1081_;
v___y_987_ = v___x_1088_;
goto v___jp_975_;
}
}
v___jp_1089_:
{
lean_object* v___x_1095_; 
lean_inc(v___y_1092_);
lean_inc(v_k_666_);
v___x_1095_ = l_Lean_Elab_Command_elabElabRulesAux___lam__0(v_k_666_, v_attrKind_665_, v_attrs_x3f_664_, v___y_1092_, v___y_1093_, v___y_1094_);
if (lean_obj_tag(v___x_1095_) == 0)
{
lean_object* v_a_1096_; lean_object* v___x_1097_; 
v_a_1096_ = lean_ctor_get(v___x_1095_, 0);
lean_inc(v_a_1096_);
lean_dec_ref_known(v___x_1095_, 1);
v___x_1097_ = l_Lean_Elab_Command_getRef___redArg(v___y_1093_);
if (lean_obj_tag(v___x_1097_) == 0)
{
lean_object* v_a_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; 
v_a_1098_ = lean_ctor_get(v___x_1097_, 0);
lean_inc(v_a_1098_);
lean_dec_ref_known(v___x_1097_, 1);
v___x_1099_ = l_Lean_SourceInfo_fromRef(v_a_1098_, v___y_1091_);
lean_dec(v_a_1098_);
v___x_1100_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_1093_);
if (lean_obj_tag(v___x_1100_) == 0)
{
lean_object* v_quotContext_x3f_1101_; 
v_quotContext_x3f_1101_ = lean_ctor_get(v___y_1093_, 5);
if (lean_obj_tag(v_quotContext_x3f_1101_) == 0)
{
lean_object* v_a_1102_; lean_object* v___x_1103_; lean_object* v_a_1104_; 
v_a_1102_ = lean_ctor_get(v___x_1100_, 0);
lean_inc(v_a_1102_);
lean_dec_ref_known(v___x_1100_, 1);
v___x_1103_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabElabRulesAux_spec__1___redArg(v___y_1094_);
v_a_1104_ = lean_ctor_get(v___x_1103_, 0);
lean_inc(v_a_1104_);
lean_dec_ref(v___x_1103_);
v___y_1075_ = v_a_1096_;
v___y_1076_ = v_a_1102_;
v___y_1077_ = v___y_1090_;
v___y_1078_ = v___x_1099_;
v_a_1079_ = v_a_1104_;
goto v___jp_1074_;
}
else
{
lean_object* v_a_1105_; lean_object* v_val_1106_; 
v_a_1105_ = lean_ctor_get(v___x_1100_, 0);
lean_inc(v_a_1105_);
lean_dec_ref_known(v___x_1100_, 1);
v_val_1106_ = lean_ctor_get(v_quotContext_x3f_1101_, 0);
lean_inc(v_val_1106_);
v___y_1075_ = v_a_1096_;
v___y_1076_ = v_a_1105_;
v___y_1077_ = v___y_1090_;
v___y_1078_ = v___x_1099_;
v_a_1079_ = v_val_1106_;
goto v___jp_1074_;
}
}
else
{
lean_object* v_a_1107_; lean_object* v___x_1109_; uint8_t v_isShared_1110_; uint8_t v_isSharedCheck_1114_; 
lean_dec(v___x_1099_);
lean_dec(v_a_1096_);
lean_dec(v___y_1090_);
lean_dec(v_a_680_);
lean_dec(v_k_666_);
lean_dec(v_doc_x3f_663_);
v_a_1107_ = lean_ctor_get(v___x_1100_, 0);
v_isSharedCheck_1114_ = !lean_is_exclusive(v___x_1100_);
if (v_isSharedCheck_1114_ == 0)
{
v___x_1109_ = v___x_1100_;
v_isShared_1110_ = v_isSharedCheck_1114_;
goto v_resetjp_1108_;
}
else
{
lean_inc(v_a_1107_);
lean_dec(v___x_1100_);
v___x_1109_ = lean_box(0);
v_isShared_1110_ = v_isSharedCheck_1114_;
goto v_resetjp_1108_;
}
v_resetjp_1108_:
{
lean_object* v___x_1112_; 
if (v_isShared_1110_ == 0)
{
v___x_1112_ = v___x_1109_;
goto v_reusejp_1111_;
}
else
{
lean_object* v_reuseFailAlloc_1113_; 
v_reuseFailAlloc_1113_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1113_, 0, v_a_1107_);
v___x_1112_ = v_reuseFailAlloc_1113_;
goto v_reusejp_1111_;
}
v_reusejp_1111_:
{
return v___x_1112_;
}
}
}
}
else
{
lean_dec(v_a_1096_);
lean_dec(v___y_1090_);
lean_dec(v_a_680_);
lean_dec(v_k_666_);
lean_dec(v_doc_x3f_663_);
return v___x_1097_;
}
}
else
{
lean_object* v_a_1115_; lean_object* v___x_1117_; uint8_t v_isShared_1118_; uint8_t v_isSharedCheck_1122_; 
lean_dec(v___y_1090_);
lean_dec(v_a_680_);
lean_dec(v_k_666_);
lean_dec(v_doc_x3f_663_);
v_a_1115_ = lean_ctor_get(v___x_1095_, 0);
v_isSharedCheck_1122_ = !lean_is_exclusive(v___x_1095_);
if (v_isSharedCheck_1122_ == 0)
{
v___x_1117_ = v___x_1095_;
v_isShared_1118_ = v_isSharedCheck_1122_;
goto v_resetjp_1116_;
}
else
{
lean_inc(v_a_1115_);
lean_dec(v___x_1095_);
v___x_1117_ = lean_box(0);
v_isShared_1118_ = v_isSharedCheck_1122_;
goto v_resetjp_1116_;
}
v_resetjp_1116_:
{
lean_object* v___x_1120_; 
if (v_isShared_1118_ == 0)
{
v___x_1120_ = v___x_1117_;
goto v_reusejp_1119_;
}
else
{
lean_object* v_reuseFailAlloc_1121_; 
v_reuseFailAlloc_1121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1121_, 0, v_a_1115_);
v___x_1120_ = v_reuseFailAlloc_1121_;
goto v_reusejp_1119_;
}
v_reusejp_1119_:
{
return v___x_1120_;
}
}
}
}
v___jp_1123_:
{
lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; 
lean_inc_ref_n(v___y_1133_, 4);
v___x_1136_ = l_Array_append___redArg(v___y_1133_, v___y_1135_);
lean_dec_ref(v___y_1135_);
lean_inc_n(v___y_1132_, 10);
lean_inc_n(v___y_1128_, 36);
v___x_1137_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1137_, 0, v___y_1128_);
lean_ctor_set(v___x_1137_, 1, v___y_1132_);
lean_ctor_set(v___x_1137_, 2, v___x_1136_);
v___x_1138_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__1));
v___x_1139_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__2));
v___x_1140_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__0));
lean_inc_ref_n(v___y_1127_, 11);
v___x_1141_ = l_Lean_Name_mkStr4(v___y_1127_, v___x_1138_, v___x_1139_, v___x_1140_);
v___x_1142_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__1));
v___x_1143_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1143_, 0, v___y_1128_);
lean_ctor_set(v___x_1143_, 1, v___x_1142_);
v___x_1144_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__2));
v___x_1145_ = l_Lean_Syntax_TSepArray_ofElems___redArg(v___x_1144_, v___y_1126_);
lean_dec_ref(v___y_1126_);
v___x_1146_ = l_Array_append___redArg(v___y_1133_, v___x_1145_);
lean_dec_ref(v___x_1145_);
v___x_1147_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1147_, 0, v___y_1128_);
lean_ctor_set(v___x_1147_, 1, v___y_1132_);
lean_ctor_set(v___x_1147_, 2, v___x_1146_);
v___x_1148_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__3));
v___x_1149_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1149_, 0, v___y_1128_);
lean_ctor_set(v___x_1149_, 1, v___x_1148_);
v___x_1150_ = l_Lean_Syntax_node3(v___y_1128_, v___x_1141_, v___x_1143_, v___x_1147_, v___x_1149_);
v___x_1151_ = l_Lean_Syntax_node1(v___y_1128_, v___y_1132_, v___x_1150_);
lean_inc_ref(v___y_1131_);
v___x_1152_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1152_, 0, v___y_1128_);
lean_ctor_set(v___x_1152_, 1, v___y_1131_);
v___x_1153_ = lean_obj_once(&l_Lean_Elab_Command_elabElabRulesAux___closed__5, &l_Lean_Elab_Command_elabElabRulesAux___closed__5_once, _init_l_Lean_Elab_Command_elabElabRulesAux___closed__5);
v___x_1154_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__6));
lean_inc_n(v___y_1134_, 4);
lean_inc_n(v___y_1124_, 4);
v___x_1155_ = l_Lean_addMacroScope(v___y_1124_, v___x_1154_, v___y_1134_);
v___x_1156_ = lean_box(0);
v___x_1157_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1157_, 0, v___y_1128_);
lean_ctor_set(v___x_1157_, 1, v___x_1153_);
lean_ctor_set(v___x_1157_, 2, v___x_1155_);
lean_ctor_set(v___x_1157_, 3, v___x_1156_);
v___x_1158_ = l_Lean_mkIdent(v_k_666_);
v___x_1159_ = l_Lean_Syntax_node2(v___y_1128_, v___y_1132_, v___x_1157_, v___x_1158_);
v___x_1160_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__7));
v___x_1161_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1161_, 0, v___y_1128_);
lean_ctor_set(v___x_1161_, 1, v___x_1160_);
v___x_1162_ = lean_obj_once(&l_Lean_Elab_Command_elabElabRulesAux___closed__9, &l_Lean_Elab_Command_elabElabRulesAux___closed__9_once, _init_l_Lean_Elab_Command_elabElabRulesAux___closed__9);
v___x_1163_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__10));
v___x_1164_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__11));
lean_inc_ref_n(v___y_1125_, 2);
v___x_1165_ = l_Lean_Name_mkStr4(v___y_1127_, v___y_1125_, v___x_1163_, v___x_1164_);
lean_inc(v___x_1165_);
v___x_1166_ = l_Lean_addMacroScope(v___y_1124_, v___x_1165_, v___y_1134_);
v___x_1167_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1167_, 0, v___x_1165_);
lean_ctor_set(v___x_1167_, 1, v___x_1156_);
v___x_1168_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1168_, 0, v___x_1167_);
lean_ctor_set(v___x_1168_, 1, v___x_1156_);
v___x_1169_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1169_, 0, v___y_1128_);
lean_ctor_set(v___x_1169_, 1, v___x_1162_);
lean_ctor_set(v___x_1169_, 2, v___x_1166_);
lean_ctor_set(v___x_1169_, 3, v___x_1168_);
v___x_1170_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__12));
v___x_1171_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1171_, 0, v___y_1128_);
lean_ctor_set(v___x_1171_, 1, v___x_1170_);
v___x_1172_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__13));
v___x_1173_ = l_Lean_Name_mkStr4(v___y_1127_, v___x_1138_, v___x_1139_, v___x_1172_);
v___x_1174_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1174_, 0, v___y_1128_);
lean_ctor_set(v___x_1174_, 1, v___x_1172_);
v___x_1175_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__14));
v___x_1176_ = l_Lean_Name_mkStr4(v___y_1127_, v___x_1138_, v___x_1139_, v___x_1175_);
v___x_1177_ = lean_obj_once(&l_Lean_Elab_Command_elabElabRulesAux___closed__16, &l_Lean_Elab_Command_elabElabRulesAux___closed__16_once, _init_l_Lean_Elab_Command_elabElabRulesAux___closed__16);
v___x_1178_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__17));
v___x_1179_ = l_Lean_addMacroScope(v___y_1124_, v___x_1178_, v___y_1134_);
v___x_1180_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1180_, 0, v___y_1128_);
lean_ctor_set(v___x_1180_, 1, v___x_1177_);
lean_ctor_set(v___x_1180_, 2, v___x_1179_);
lean_ctor_set(v___x_1180_, 3, v___x_1156_);
v___x_1181_ = lean_obj_once(&l_Lean_Elab_Command_elabElabRulesAux___closed__48, &l_Lean_Elab_Command_elabElabRulesAux___closed__48_once, _init_l_Lean_Elab_Command_elabElabRulesAux___closed__48);
v___x_1182_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__49));
v___x_1183_ = l_Lean_addMacroScope(v___y_1124_, v___x_1182_, v___y_1134_);
v___x_1184_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1184_, 0, v___y_1128_);
lean_ctor_set(v___x_1184_, 1, v___x_1181_);
lean_ctor_set(v___x_1184_, 2, v___x_1183_);
lean_ctor_set(v___x_1184_, 3, v___x_1156_);
lean_inc_ref(v___x_1180_);
v___x_1185_ = l_Lean_Syntax_node2(v___y_1128_, v___y_1132_, v___x_1180_, v___x_1184_);
v___x_1186_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1186_, 0, v___y_1128_);
lean_ctor_set(v___x_1186_, 1, v___y_1132_);
lean_ctor_set(v___x_1186_, 2, v___y_1133_);
v___x_1187_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__8));
v___x_1188_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1188_, 0, v___y_1128_);
lean_ctor_set(v___x_1188_, 1, v___x_1187_);
v___x_1189_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__18));
v___x_1190_ = l_Lean_Name_mkStr4(v___y_1127_, v___x_1138_, v___x_1139_, v___x_1189_);
v___x_1191_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1191_, 0, v___y_1128_);
lean_ctor_set(v___x_1191_, 1, v___x_1189_);
v___x_1192_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__19));
v___x_1193_ = l_Lean_Name_mkStr4(v___y_1127_, v___x_1138_, v___x_1139_, v___x_1192_);
lean_inc_ref_n(v___x_1186_, 3);
v___x_1194_ = l_Lean_Syntax_node2(v___y_1128_, v___x_1193_, v___x_1186_, v___x_1180_);
v___x_1195_ = l_Lean_Syntax_node1(v___y_1128_, v___y_1132_, v___x_1194_);
v___x_1196_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__20));
v___x_1197_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1197_, 0, v___y_1128_);
lean_ctor_set(v___x_1197_, 1, v___x_1196_);
v___x_1198_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__21));
v___x_1199_ = l_Lean_Name_mkStr4(v___y_1127_, v___x_1138_, v___x_1139_, v___x_1198_);
v___x_1200_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__4));
v___x_1201_ = l_Lean_Name_mkStr4(v___y_1127_, v___x_1138_, v___x_1139_, v___x_1200_);
v___x_1202_ = l_unsafeCast___redArg(v_a_680_);
lean_dec(v_a_680_);
v___x_1203_ = l_Array_append___redArg(v___y_1133_, v___x_1202_);
lean_dec(v___x_1202_);
v___x_1204_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__6));
v___x_1205_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1205_, 0, v___y_1128_);
lean_ctor_set(v___x_1205_, 1, v___x_1204_);
v___x_1206_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__22));
v___x_1207_ = l_Lean_Name_mkStr4(v___y_1127_, v___x_1138_, v___x_1139_, v___x_1206_);
v___x_1208_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__23));
v___x_1209_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1209_, 0, v___y_1128_);
lean_ctor_set(v___x_1209_, 1, v___x_1208_);
v___x_1210_ = l_Lean_Syntax_node1(v___y_1128_, v___x_1207_, v___x_1209_);
v___x_1211_ = l_Lean_Syntax_node1(v___y_1128_, v___y_1132_, v___x_1210_);
v___x_1212_ = l_Lean_Syntax_node1(v___y_1128_, v___y_1132_, v___x_1211_);
v___x_1213_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__24));
v___x_1214_ = l_Lean_Name_mkStr4(v___y_1127_, v___x_1138_, v___x_1139_, v___x_1213_);
v___x_1215_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__25));
v___x_1216_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1216_, 0, v___y_1128_);
lean_ctor_set(v___x_1216_, 1, v___x_1215_);
v___x_1217_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__26));
v___x_1218_ = lean_obj_once(&l_Lean_Elab_Command_elabElabRulesAux___closed__27, &l_Lean_Elab_Command_elabElabRulesAux___closed__27_once, _init_l_Lean_Elab_Command_elabElabRulesAux___closed__27);
v___x_1219_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__28));
v___x_1220_ = l_Lean_addMacroScope(v___y_1124_, v___x_1219_, v___y_1134_);
v___x_1221_ = l_Lean_Name_mkStr3(v___y_1127_, v___y_1125_, v___x_1217_);
v___x_1222_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1222_, 0, v___x_1221_);
lean_ctor_set(v___x_1222_, 1, v___x_1156_);
v___x_1223_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1223_, 0, v___x_1222_);
lean_ctor_set(v___x_1223_, 1, v___x_1156_);
v___x_1224_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1224_, 0, v___y_1128_);
lean_ctor_set(v___x_1224_, 1, v___x_1218_);
lean_ctor_set(v___x_1224_, 2, v___x_1220_);
lean_ctor_set(v___x_1224_, 3, v___x_1223_);
v___x_1225_ = l_Lean_Syntax_node2(v___y_1128_, v___x_1214_, v___x_1216_, v___x_1224_);
lean_inc_ref(v___x_1188_);
v___x_1226_ = l_Lean_Syntax_node4(v___y_1128_, v___x_1201_, v___x_1205_, v___x_1212_, v___x_1188_, v___x_1225_);
v___x_1227_ = lean_array_push(v___x_1203_, v___x_1226_);
v___x_1228_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1228_, 0, v___y_1128_);
lean_ctor_set(v___x_1228_, 1, v___y_1132_);
lean_ctor_set(v___x_1228_, 2, v___x_1227_);
v___x_1229_ = l_Lean_Syntax_node1(v___y_1128_, v___x_1199_, v___x_1228_);
v___x_1230_ = l_Lean_Syntax_node6(v___y_1128_, v___x_1190_, v___x_1191_, v___x_1186_, v___x_1186_, v___x_1195_, v___x_1197_, v___x_1229_);
v___x_1231_ = l_Lean_Syntax_node4(v___y_1128_, v___x_1176_, v___x_1185_, v___x_1186_, v___x_1188_, v___x_1230_);
v___x_1232_ = l_Lean_Syntax_node2(v___y_1128_, v___x_1173_, v___x_1174_, v___x_1231_);
v___x_1233_ = lean_unsigned_to_nat(9u);
v___x_1234_ = lean_mk_empty_array_with_capacity(v___x_1233_);
v___x_1235_ = lean_array_push(v___x_1234_, v___x_1137_);
v___x_1236_ = lean_array_push(v___x_1235_, v___x_1151_);
v___x_1237_ = lean_array_push(v___x_1236_, v___y_1130_);
v___x_1238_ = lean_array_push(v___x_1237_, v___x_1152_);
v___x_1239_ = lean_array_push(v___x_1238_, v___x_1159_);
v___x_1240_ = lean_array_push(v___x_1239_, v___x_1161_);
v___x_1241_ = lean_array_push(v___x_1240_, v___x_1169_);
v___x_1242_ = lean_array_push(v___x_1241_, v___x_1171_);
v___x_1243_ = lean_array_push(v___x_1242_, v___x_1232_);
lean_inc(v___y_1129_);
v___x_1244_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1244_, 0, v___y_1128_);
lean_ctor_set(v___x_1244_, 1, v___y_1129_);
lean_ctor_set(v___x_1244_, 2, v___x_1243_);
v___x_1245_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1245_, 0, v___x_1244_);
return v___x_1245_;
}
v___jp_1246_:
{
lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; 
v___x_1252_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__0));
v___x_1253_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__29));
v___x_1254_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__31));
v___x_1255_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__32));
v___x_1256_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__9));
v___x_1257_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__7, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__7);
if (lean_obj_tag(v_doc_x3f_663_) == 1)
{
lean_object* v_val_1258_; lean_object* v___x_1259_; 
v_val_1258_ = lean_ctor_get(v_doc_x3f_663_, 0);
lean_inc(v_val_1258_);
lean_dec_ref_known(v_doc_x3f_663_, 1);
v___x_1259_ = l_Array_mkArray1___redArg(v_val_1258_);
v___y_1124_ = v_a_1251_;
v___y_1125_ = v___x_1253_;
v___y_1126_ = v___y_1247_;
v___y_1127_ = v___x_1252_;
v___y_1128_ = v___y_1248_;
v___y_1129_ = v___x_1255_;
v___y_1130_ = v___y_1249_;
v___y_1131_ = v___x_1254_;
v___y_1132_ = v___x_1256_;
v___y_1133_ = v___x_1257_;
v___y_1134_ = v___y_1250_;
v___y_1135_ = v___x_1259_;
goto v___jp_1123_;
}
else
{
lean_object* v___x_1260_; 
lean_dec(v_doc_x3f_663_);
v___x_1260_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__33));
v___y_1124_ = v_a_1251_;
v___y_1125_ = v___x_1253_;
v___y_1126_ = v___y_1247_;
v___y_1127_ = v___x_1252_;
v___y_1128_ = v___y_1248_;
v___y_1129_ = v___x_1255_;
v___y_1130_ = v___y_1249_;
v___y_1131_ = v___x_1254_;
v___y_1132_ = v___x_1256_;
v___y_1133_ = v___x_1257_;
v___y_1134_ = v___y_1250_;
v___y_1135_ = v___x_1260_;
goto v___jp_1123_;
}
}
v___jp_1261_:
{
lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; 
lean_inc_ref_n(v___y_1272_, 3);
v___x_1275_ = l_Array_append___redArg(v___y_1272_, v___y_1274_);
lean_dec_ref(v___y_1274_);
lean_inc_n(v___y_1271_, 7);
lean_inc_n(v___y_1266_, 26);
v___x_1276_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1276_, 0, v___y_1266_);
lean_ctor_set(v___x_1276_, 1, v___y_1271_);
lean_ctor_set(v___x_1276_, 2, v___x_1275_);
v___x_1277_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__1));
v___x_1278_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__2));
v___x_1279_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__0));
lean_inc_ref_n(v___y_1262_, 8);
v___x_1280_ = l_Lean_Name_mkStr4(v___y_1262_, v___x_1277_, v___x_1278_, v___x_1279_);
v___x_1281_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__1));
v___x_1282_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1282_, 0, v___y_1266_);
lean_ctor_set(v___x_1282_, 1, v___x_1281_);
v___x_1283_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__2));
v___x_1284_ = l_Lean_Syntax_TSepArray_ofElems___redArg(v___x_1283_, v___y_1273_);
lean_dec_ref(v___y_1273_);
v___x_1285_ = l_Array_append___redArg(v___y_1272_, v___x_1284_);
lean_dec_ref(v___x_1284_);
v___x_1286_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1286_, 0, v___y_1266_);
lean_ctor_set(v___x_1286_, 1, v___y_1271_);
lean_ctor_set(v___x_1286_, 2, v___x_1285_);
v___x_1287_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__3));
v___x_1288_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1288_, 0, v___y_1266_);
lean_ctor_set(v___x_1288_, 1, v___x_1287_);
v___x_1289_ = l_Lean_Syntax_node3(v___y_1266_, v___x_1280_, v___x_1282_, v___x_1286_, v___x_1288_);
v___x_1290_ = l_Lean_Syntax_node1(v___y_1266_, v___y_1271_, v___x_1289_);
lean_inc_ref(v___y_1263_);
v___x_1291_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1291_, 0, v___y_1266_);
lean_ctor_set(v___x_1291_, 1, v___y_1263_);
v___x_1292_ = lean_obj_once(&l_Lean_Elab_Command_elabElabRulesAux___closed__5, &l_Lean_Elab_Command_elabElabRulesAux___closed__5_once, _init_l_Lean_Elab_Command_elabElabRulesAux___closed__5);
v___x_1293_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__6));
lean_inc_n(v___y_1265_, 2);
lean_inc_n(v___y_1267_, 2);
v___x_1294_ = l_Lean_addMacroScope(v___y_1267_, v___x_1293_, v___y_1265_);
v___x_1295_ = lean_box(0);
v___x_1296_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1296_, 0, v___y_1266_);
lean_ctor_set(v___x_1296_, 1, v___x_1292_);
lean_ctor_set(v___x_1296_, 2, v___x_1294_);
lean_ctor_set(v___x_1296_, 3, v___x_1295_);
v___x_1297_ = l_Lean_mkIdent(v_k_666_);
v___x_1298_ = l_Lean_Syntax_node2(v___y_1266_, v___y_1271_, v___x_1296_, v___x_1297_);
v___x_1299_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__7));
v___x_1300_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1300_, 0, v___y_1266_);
lean_ctor_set(v___x_1300_, 1, v___x_1299_);
v___x_1301_ = lean_obj_once(&l_Lean_Elab_Command_elabElabRulesAux___closed__51, &l_Lean_Elab_Command_elabElabRulesAux___closed__51_once, _init_l_Lean_Elab_Command_elabElabRulesAux___closed__51);
v___x_1302_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__52));
lean_inc_ref(v___y_1268_);
lean_inc_ref_n(v___y_1269_, 2);
v___x_1303_ = l_Lean_Name_mkStr4(v___y_1262_, v___y_1269_, v___y_1268_, v___x_1302_);
lean_inc(v___x_1303_);
v___x_1304_ = l_Lean_addMacroScope(v___y_1267_, v___x_1303_, v___y_1265_);
v___x_1305_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1305_, 0, v___x_1303_);
lean_ctor_set(v___x_1305_, 1, v___x_1295_);
v___x_1306_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1306_, 0, v___x_1305_);
lean_ctor_set(v___x_1306_, 1, v___x_1295_);
v___x_1307_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1307_, 0, v___y_1266_);
lean_ctor_set(v___x_1307_, 1, v___x_1301_);
lean_ctor_set(v___x_1307_, 2, v___x_1304_);
lean_ctor_set(v___x_1307_, 3, v___x_1306_);
v___x_1308_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__12));
v___x_1309_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1309_, 0, v___y_1266_);
lean_ctor_set(v___x_1309_, 1, v___x_1308_);
v___x_1310_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__13));
v___x_1311_ = l_Lean_Name_mkStr4(v___y_1262_, v___x_1277_, v___x_1278_, v___x_1310_);
v___x_1312_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1312_, 0, v___y_1266_);
lean_ctor_set(v___x_1312_, 1, v___x_1310_);
v___x_1313_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__21));
v___x_1314_ = l_Lean_Name_mkStr4(v___y_1262_, v___x_1277_, v___x_1278_, v___x_1313_);
v___x_1315_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__4));
v___x_1316_ = l_Lean_Name_mkStr4(v___y_1262_, v___x_1277_, v___x_1278_, v___x_1315_);
v___x_1317_ = l_unsafeCast___redArg(v_a_680_);
lean_dec(v_a_680_);
v___x_1318_ = l_Array_append___redArg(v___y_1272_, v___x_1317_);
lean_dec(v___x_1317_);
v___x_1319_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__6));
v___x_1320_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1320_, 0, v___y_1266_);
lean_ctor_set(v___x_1320_, 1, v___x_1319_);
v___x_1321_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__22));
v___x_1322_ = l_Lean_Name_mkStr4(v___y_1262_, v___x_1277_, v___x_1278_, v___x_1321_);
v___x_1323_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__23));
v___x_1324_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1324_, 0, v___y_1266_);
lean_ctor_set(v___x_1324_, 1, v___x_1323_);
v___x_1325_ = l_Lean_Syntax_node1(v___y_1266_, v___x_1322_, v___x_1324_);
v___x_1326_ = l_Lean_Syntax_node1(v___y_1266_, v___y_1271_, v___x_1325_);
v___x_1327_ = l_Lean_Syntax_node1(v___y_1266_, v___y_1271_, v___x_1326_);
v___x_1328_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__8));
v___x_1329_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1329_, 0, v___y_1266_);
lean_ctor_set(v___x_1329_, 1, v___x_1328_);
v___x_1330_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__24));
v___x_1331_ = l_Lean_Name_mkStr4(v___y_1262_, v___x_1277_, v___x_1278_, v___x_1330_);
v___x_1332_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__25));
v___x_1333_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1333_, 0, v___y_1266_);
lean_ctor_set(v___x_1333_, 1, v___x_1332_);
v___x_1334_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__26));
v___x_1335_ = lean_obj_once(&l_Lean_Elab_Command_elabElabRulesAux___closed__27, &l_Lean_Elab_Command_elabElabRulesAux___closed__27_once, _init_l_Lean_Elab_Command_elabElabRulesAux___closed__27);
v___x_1336_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__28));
v___x_1337_ = l_Lean_addMacroScope(v___y_1267_, v___x_1336_, v___y_1265_);
v___x_1338_ = l_Lean_Name_mkStr3(v___y_1262_, v___y_1269_, v___x_1334_);
v___x_1339_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1339_, 0, v___x_1338_);
lean_ctor_set(v___x_1339_, 1, v___x_1295_);
v___x_1340_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1340_, 0, v___x_1339_);
lean_ctor_set(v___x_1340_, 1, v___x_1295_);
v___x_1341_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1341_, 0, v___y_1266_);
lean_ctor_set(v___x_1341_, 1, v___x_1335_);
lean_ctor_set(v___x_1341_, 2, v___x_1337_);
lean_ctor_set(v___x_1341_, 3, v___x_1340_);
v___x_1342_ = l_Lean_Syntax_node2(v___y_1266_, v___x_1331_, v___x_1333_, v___x_1341_);
v___x_1343_ = l_Lean_Syntax_node4(v___y_1266_, v___x_1316_, v___x_1320_, v___x_1327_, v___x_1329_, v___x_1342_);
v___x_1344_ = lean_array_push(v___x_1318_, v___x_1343_);
v___x_1345_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1345_, 0, v___y_1266_);
lean_ctor_set(v___x_1345_, 1, v___y_1271_);
lean_ctor_set(v___x_1345_, 2, v___x_1344_);
v___x_1346_ = l_Lean_Syntax_node1(v___y_1266_, v___x_1314_, v___x_1345_);
v___x_1347_ = l_Lean_Syntax_node2(v___y_1266_, v___x_1311_, v___x_1312_, v___x_1346_);
v___x_1348_ = lean_unsigned_to_nat(9u);
v___x_1349_ = lean_mk_empty_array_with_capacity(v___x_1348_);
v___x_1350_ = lean_array_push(v___x_1349_, v___x_1276_);
v___x_1351_ = lean_array_push(v___x_1350_, v___x_1290_);
v___x_1352_ = lean_array_push(v___x_1351_, v___y_1264_);
v___x_1353_ = lean_array_push(v___x_1352_, v___x_1291_);
v___x_1354_ = lean_array_push(v___x_1353_, v___x_1298_);
v___x_1355_ = lean_array_push(v___x_1354_, v___x_1300_);
v___x_1356_ = lean_array_push(v___x_1355_, v___x_1307_);
v___x_1357_ = lean_array_push(v___x_1356_, v___x_1309_);
v___x_1358_ = lean_array_push(v___x_1357_, v___x_1347_);
lean_inc(v___y_1270_);
v___x_1359_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1359_, 0, v___y_1266_);
lean_ctor_set(v___x_1359_, 1, v___y_1270_);
lean_ctor_set(v___x_1359_, 2, v___x_1358_);
v___x_1360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1360_, 0, v___x_1359_);
return v___x_1360_;
}
v___jp_1361_:
{
lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; 
v___x_1367_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__0));
v___x_1368_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__29));
v___x_1369_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__30));
v___x_1370_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__31));
v___x_1371_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__32));
v___x_1372_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__9));
v___x_1373_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__7, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__7);
if (lean_obj_tag(v_doc_x3f_663_) == 1)
{
lean_object* v_val_1374_; lean_object* v___x_1375_; 
v_val_1374_ = lean_ctor_get(v_doc_x3f_663_, 0);
lean_inc(v_val_1374_);
lean_dec_ref_known(v_doc_x3f_663_, 1);
v___x_1375_ = l_Array_mkArray1___redArg(v_val_1374_);
v___y_1262_ = v___x_1367_;
v___y_1263_ = v___x_1370_;
v___y_1264_ = v___y_1362_;
v___y_1265_ = v___y_1363_;
v___y_1266_ = v___y_1364_;
v___y_1267_ = v_a_1366_;
v___y_1268_ = v___x_1369_;
v___y_1269_ = v___x_1368_;
v___y_1270_ = v___x_1371_;
v___y_1271_ = v___x_1372_;
v___y_1272_ = v___x_1373_;
v___y_1273_ = v___y_1365_;
v___y_1274_ = v___x_1375_;
goto v___jp_1261_;
}
else
{
lean_object* v___x_1376_; 
lean_dec(v_doc_x3f_663_);
v___x_1376_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__33));
v___y_1262_ = v___x_1367_;
v___y_1263_ = v___x_1370_;
v___y_1264_ = v___y_1362_;
v___y_1265_ = v___y_1363_;
v___y_1266_ = v___y_1364_;
v___y_1267_ = v_a_1366_;
v___y_1268_ = v___x_1369_;
v___y_1269_ = v___x_1368_;
v___y_1270_ = v___x_1371_;
v___y_1271_ = v___x_1372_;
v___y_1272_ = v___x_1373_;
v___y_1273_ = v___y_1365_;
v___y_1274_ = v___x_1376_;
goto v___jp_1261_;
}
}
v___jp_1377_:
{
lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; 
lean_inc_ref_n(v___y_1381_, 4);
v___x_1390_ = l_Array_append___redArg(v___y_1381_, v___y_1389_);
lean_dec_ref(v___y_1389_);
lean_inc_n(v___y_1384_, 10);
lean_inc_n(v___y_1388_, 35);
v___x_1391_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1391_, 0, v___y_1388_);
lean_ctor_set(v___x_1391_, 1, v___y_1384_);
lean_ctor_set(v___x_1391_, 2, v___x_1390_);
v___x_1392_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__1));
v___x_1393_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__2));
v___x_1394_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__0));
lean_inc_ref_n(v___y_1380_, 11);
v___x_1395_ = l_Lean_Name_mkStr4(v___y_1380_, v___x_1392_, v___x_1393_, v___x_1394_);
v___x_1396_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__1));
v___x_1397_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1397_, 0, v___y_1388_);
lean_ctor_set(v___x_1397_, 1, v___x_1396_);
v___x_1398_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__2));
v___x_1399_ = l_Lean_Syntax_TSepArray_ofElems___redArg(v___x_1398_, v___y_1379_);
lean_dec_ref(v___y_1379_);
v___x_1400_ = l_Array_append___redArg(v___y_1381_, v___x_1399_);
lean_dec_ref(v___x_1399_);
v___x_1401_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1401_, 0, v___y_1388_);
lean_ctor_set(v___x_1401_, 1, v___y_1384_);
lean_ctor_set(v___x_1401_, 2, v___x_1400_);
v___x_1402_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__3));
v___x_1403_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1403_, 0, v___y_1388_);
lean_ctor_set(v___x_1403_, 1, v___x_1402_);
v___x_1404_ = l_Lean_Syntax_node3(v___y_1388_, v___x_1395_, v___x_1397_, v___x_1401_, v___x_1403_);
v___x_1405_ = l_Lean_Syntax_node1(v___y_1388_, v___y_1384_, v___x_1404_);
lean_inc_ref(v___y_1386_);
v___x_1406_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1406_, 0, v___y_1388_);
lean_ctor_set(v___x_1406_, 1, v___y_1386_);
v___x_1407_ = lean_obj_once(&l_Lean_Elab_Command_elabElabRulesAux___closed__5, &l_Lean_Elab_Command_elabElabRulesAux___closed__5_once, _init_l_Lean_Elab_Command_elabElabRulesAux___closed__5);
v___x_1408_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__6));
lean_inc_n(v___y_1383_, 3);
lean_inc_n(v___y_1385_, 3);
v___x_1409_ = l_Lean_addMacroScope(v___y_1385_, v___x_1408_, v___y_1383_);
v___x_1410_ = lean_box(0);
v___x_1411_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1411_, 0, v___y_1388_);
lean_ctor_set(v___x_1411_, 1, v___x_1407_);
lean_ctor_set(v___x_1411_, 2, v___x_1409_);
lean_ctor_set(v___x_1411_, 3, v___x_1410_);
v___x_1412_ = l_Lean_mkIdent(v_k_666_);
v___x_1413_ = l_Lean_Syntax_node2(v___y_1388_, v___y_1384_, v___x_1411_, v___x_1412_);
v___x_1414_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__7));
v___x_1415_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1415_, 0, v___y_1388_);
lean_ctor_set(v___x_1415_, 1, v___x_1414_);
v___x_1416_ = lean_obj_once(&l_Lean_Elab_Command_elabElabRulesAux___closed__35, &l_Lean_Elab_Command_elabElabRulesAux___closed__35_once, _init_l_Lean_Elab_Command_elabElabRulesAux___closed__35);
v___x_1417_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__36));
lean_inc_ref_n(v___y_1387_, 2);
v___x_1418_ = l_Lean_Name_mkStr4(v___y_1380_, v___y_1387_, v___x_1393_, v___x_1417_);
lean_inc(v___x_1418_);
v___x_1419_ = l_Lean_addMacroScope(v___y_1385_, v___x_1418_, v___y_1383_);
v___x_1420_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1420_, 0, v___x_1418_);
lean_ctor_set(v___x_1420_, 1, v___x_1410_);
v___x_1421_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1421_, 0, v___x_1420_);
lean_ctor_set(v___x_1421_, 1, v___x_1410_);
v___x_1422_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1422_, 0, v___y_1388_);
lean_ctor_set(v___x_1422_, 1, v___x_1416_);
lean_ctor_set(v___x_1422_, 2, v___x_1419_);
lean_ctor_set(v___x_1422_, 3, v___x_1421_);
v___x_1423_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__12));
v___x_1424_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1424_, 0, v___y_1388_);
lean_ctor_set(v___x_1424_, 1, v___x_1423_);
v___x_1425_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__13));
v___x_1426_ = l_Lean_Name_mkStr4(v___y_1380_, v___x_1392_, v___x_1393_, v___x_1425_);
v___x_1427_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1427_, 0, v___y_1388_);
lean_ctor_set(v___x_1427_, 1, v___x_1425_);
v___x_1428_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__14));
v___x_1429_ = l_Lean_Name_mkStr4(v___y_1380_, v___x_1392_, v___x_1393_, v___x_1428_);
v___x_1430_ = lean_obj_once(&l_Lean_Elab_Command_elabElabRulesAux___closed__16, &l_Lean_Elab_Command_elabElabRulesAux___closed__16_once, _init_l_Lean_Elab_Command_elabElabRulesAux___closed__16);
v___x_1431_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__17));
v___x_1432_ = l_Lean_addMacroScope(v___y_1385_, v___x_1431_, v___y_1383_);
v___x_1433_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1433_, 0, v___y_1388_);
lean_ctor_set(v___x_1433_, 1, v___x_1430_);
lean_ctor_set(v___x_1433_, 2, v___x_1432_);
lean_ctor_set(v___x_1433_, 3, v___x_1410_);
v___x_1434_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__22));
v___x_1435_ = l_Lean_Name_mkStr4(v___y_1380_, v___x_1392_, v___x_1393_, v___x_1434_);
v___x_1436_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__23));
v___x_1437_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1437_, 0, v___y_1388_);
lean_ctor_set(v___x_1437_, 1, v___x_1436_);
v___x_1438_ = l_Lean_Syntax_node1(v___y_1388_, v___x_1435_, v___x_1437_);
lean_inc(v___x_1438_);
lean_inc_ref(v___x_1433_);
v___x_1439_ = l_Lean_Syntax_node2(v___y_1388_, v___y_1384_, v___x_1433_, v___x_1438_);
v___x_1440_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1440_, 0, v___y_1388_);
lean_ctor_set(v___x_1440_, 1, v___y_1384_);
lean_ctor_set(v___x_1440_, 2, v___y_1381_);
v___x_1441_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__8));
v___x_1442_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1442_, 0, v___y_1388_);
lean_ctor_set(v___x_1442_, 1, v___x_1441_);
v___x_1443_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__18));
v___x_1444_ = l_Lean_Name_mkStr4(v___y_1380_, v___x_1392_, v___x_1393_, v___x_1443_);
v___x_1445_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1445_, 0, v___y_1388_);
lean_ctor_set(v___x_1445_, 1, v___x_1443_);
v___x_1446_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__19));
v___x_1447_ = l_Lean_Name_mkStr4(v___y_1380_, v___x_1392_, v___x_1393_, v___x_1446_);
lean_inc_ref_n(v___x_1440_, 3);
v___x_1448_ = l_Lean_Syntax_node2(v___y_1388_, v___x_1447_, v___x_1440_, v___x_1433_);
v___x_1449_ = l_Lean_Syntax_node1(v___y_1388_, v___y_1384_, v___x_1448_);
v___x_1450_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__20));
v___x_1451_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1451_, 0, v___y_1388_);
lean_ctor_set(v___x_1451_, 1, v___x_1450_);
v___x_1452_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__21));
v___x_1453_ = l_Lean_Name_mkStr4(v___y_1380_, v___x_1392_, v___x_1393_, v___x_1452_);
v___x_1454_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__4));
v___x_1455_ = l_Lean_Name_mkStr4(v___y_1380_, v___x_1392_, v___x_1393_, v___x_1454_);
v___x_1456_ = l_unsafeCast___redArg(v_a_680_);
lean_dec(v_a_680_);
v___x_1457_ = l_Array_append___redArg(v___y_1381_, v___x_1456_);
lean_dec(v___x_1456_);
v___x_1458_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__6));
v___x_1459_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1459_, 0, v___y_1388_);
lean_ctor_set(v___x_1459_, 1, v___x_1458_);
v___x_1460_ = l_Lean_Syntax_node1(v___y_1388_, v___y_1384_, v___x_1438_);
v___x_1461_ = l_Lean_Syntax_node1(v___y_1388_, v___y_1384_, v___x_1460_);
v___x_1462_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__24));
v___x_1463_ = l_Lean_Name_mkStr4(v___y_1380_, v___x_1392_, v___x_1393_, v___x_1462_);
v___x_1464_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__25));
v___x_1465_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1465_, 0, v___y_1388_);
lean_ctor_set(v___x_1465_, 1, v___x_1464_);
v___x_1466_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__26));
v___x_1467_ = lean_obj_once(&l_Lean_Elab_Command_elabElabRulesAux___closed__27, &l_Lean_Elab_Command_elabElabRulesAux___closed__27_once, _init_l_Lean_Elab_Command_elabElabRulesAux___closed__27);
v___x_1468_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__28));
v___x_1469_ = l_Lean_addMacroScope(v___y_1385_, v___x_1468_, v___y_1383_);
v___x_1470_ = l_Lean_Name_mkStr3(v___y_1380_, v___y_1387_, v___x_1466_);
v___x_1471_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1471_, 0, v___x_1470_);
lean_ctor_set(v___x_1471_, 1, v___x_1410_);
v___x_1472_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1472_, 0, v___x_1471_);
lean_ctor_set(v___x_1472_, 1, v___x_1410_);
v___x_1473_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1473_, 0, v___y_1388_);
lean_ctor_set(v___x_1473_, 1, v___x_1467_);
lean_ctor_set(v___x_1473_, 2, v___x_1469_);
lean_ctor_set(v___x_1473_, 3, v___x_1472_);
v___x_1474_ = l_Lean_Syntax_node2(v___y_1388_, v___x_1463_, v___x_1465_, v___x_1473_);
lean_inc_ref(v___x_1442_);
v___x_1475_ = l_Lean_Syntax_node4(v___y_1388_, v___x_1455_, v___x_1459_, v___x_1461_, v___x_1442_, v___x_1474_);
v___x_1476_ = lean_array_push(v___x_1457_, v___x_1475_);
v___x_1477_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1477_, 0, v___y_1388_);
lean_ctor_set(v___x_1477_, 1, v___y_1384_);
lean_ctor_set(v___x_1477_, 2, v___x_1476_);
v___x_1478_ = l_Lean_Syntax_node1(v___y_1388_, v___x_1453_, v___x_1477_);
v___x_1479_ = l_Lean_Syntax_node6(v___y_1388_, v___x_1444_, v___x_1445_, v___x_1440_, v___x_1440_, v___x_1449_, v___x_1451_, v___x_1478_);
v___x_1480_ = l_Lean_Syntax_node4(v___y_1388_, v___x_1429_, v___x_1439_, v___x_1440_, v___x_1442_, v___x_1479_);
v___x_1481_ = l_Lean_Syntax_node2(v___y_1388_, v___x_1426_, v___x_1427_, v___x_1480_);
v___x_1482_ = lean_unsigned_to_nat(9u);
v___x_1483_ = lean_mk_empty_array_with_capacity(v___x_1482_);
v___x_1484_ = lean_array_push(v___x_1483_, v___x_1391_);
v___x_1485_ = lean_array_push(v___x_1484_, v___x_1405_);
v___x_1486_ = lean_array_push(v___x_1485_, v___y_1382_);
v___x_1487_ = lean_array_push(v___x_1486_, v___x_1406_);
v___x_1488_ = lean_array_push(v___x_1487_, v___x_1413_);
v___x_1489_ = lean_array_push(v___x_1488_, v___x_1415_);
v___x_1490_ = lean_array_push(v___x_1489_, v___x_1422_);
v___x_1491_ = lean_array_push(v___x_1490_, v___x_1424_);
v___x_1492_ = lean_array_push(v___x_1491_, v___x_1481_);
lean_inc(v___y_1378_);
v___x_1493_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1493_, 0, v___y_1388_);
lean_ctor_set(v___x_1493_, 1, v___y_1378_);
lean_ctor_set(v___x_1493_, 2, v___x_1492_);
v___x_1494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1494_, 0, v___x_1493_);
return v___x_1494_;
}
v___jp_1495_:
{
lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; 
v___x_1501_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__0));
v___x_1502_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__29));
v___x_1503_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__31));
v___x_1504_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__32));
v___x_1505_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__9));
v___x_1506_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__7, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__7);
if (lean_obj_tag(v_doc_x3f_663_) == 1)
{
lean_object* v_val_1507_; lean_object* v___x_1508_; 
v_val_1507_ = lean_ctor_get(v_doc_x3f_663_, 0);
lean_inc(v_val_1507_);
lean_dec_ref_known(v_doc_x3f_663_, 1);
v___x_1508_ = l_Array_mkArray1___redArg(v_val_1507_);
v___y_1378_ = v___x_1504_;
v___y_1379_ = v___y_1496_;
v___y_1380_ = v___x_1501_;
v___y_1381_ = v___x_1506_;
v___y_1382_ = v___y_1497_;
v___y_1383_ = v___y_1498_;
v___y_1384_ = v___x_1505_;
v___y_1385_ = v_a_1500_;
v___y_1386_ = v___x_1503_;
v___y_1387_ = v___x_1502_;
v___y_1388_ = v___y_1499_;
v___y_1389_ = v___x_1508_;
goto v___jp_1377_;
}
else
{
lean_object* v___x_1509_; 
lean_dec(v_doc_x3f_663_);
v___x_1509_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__33));
v___y_1378_ = v___x_1504_;
v___y_1379_ = v___y_1496_;
v___y_1380_ = v___x_1501_;
v___y_1381_ = v___x_1506_;
v___y_1382_ = v___y_1497_;
v___y_1383_ = v___y_1498_;
v___y_1384_ = v___x_1505_;
v___y_1385_ = v_a_1500_;
v___y_1386_ = v___x_1503_;
v___y_1387_ = v___x_1502_;
v___y_1388_ = v___y_1499_;
v___y_1389_ = v___x_1509_;
goto v___jp_1377_;
}
}
v___jp_1510_:
{
lean_object* v___x_1514_; 
lean_inc(v_attrKind_665_);
v___x_1514_ = l_Lean_Parser_Command_visibility_ofAttrKind(v_attrKind_665_);
if (lean_obj_tag(v_expty_x3f_668_) == 1)
{
lean_object* v_val_1515_; lean_object* v___x_1516_; uint8_t v___x_1517_; 
v_val_1515_ = lean_ctor_get(v_expty_x3f_668_, 0);
lean_inc(v_val_1515_);
lean_dec_ref_known(v_expty_x3f_668_, 1);
v___x_1516_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__54));
v___x_1517_ = lean_name_eq(v_catName_1511_, v___x_1516_);
if (v___x_1517_ == 0)
{
lean_object* v___x_1518_; uint8_t v___x_1519_; 
v___x_1518_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__56));
v___x_1519_ = lean_name_eq(v_catName_1511_, v___x_1518_);
if (v___x_1519_ == 0)
{
lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; 
lean_dec(v___x_1514_);
lean_del_object(v___x_682_);
lean_dec(v_a_680_);
lean_dec(v_k_666_);
lean_dec(v_attrKind_665_);
lean_dec(v_doc_x3f_663_);
v___x_1520_ = lean_obj_once(&l_Lean_Elab_Command_elabElabRulesAux___closed__58, &l_Lean_Elab_Command_elabElabRulesAux___closed__58_once, _init_l_Lean_Elab_Command_elabElabRulesAux___closed__58);
v___x_1521_ = l_Lean_MessageData_ofName(v_catName_1511_);
v___x_1522_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1522_, 0, v___x_1520_);
lean_ctor_set(v___x_1522_, 1, v___x_1521_);
v___x_1523_ = lean_obj_once(&l_Lean_Elab_Command_elabElabRulesAux___closed__60, &l_Lean_Elab_Command_elabElabRulesAux___closed__60_once, _init_l_Lean_Elab_Command_elabElabRulesAux___closed__60);
v___x_1524_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1524_, 0, v___x_1522_);
lean_ctor_set(v___x_1524_, 1, v___x_1523_);
v___x_1525_ = l_Lean_throwErrorAt___at___00Lean_Elab_Command_elabElabRulesAux_spec__3___redArg(v_val_1515_, v___x_1524_, v___y_1512_, v___y_1513_);
lean_dec(v_val_1515_);
return v___x_1525_;
}
else
{
lean_object* v___x_1526_; lean_object* v___x_1527_; 
lean_dec(v_catName_1511_);
v___x_1526_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__62));
lean_inc(v_k_666_);
v___x_1527_ = l_Lean_Elab_Command_elabElabRulesAux___lam__0(v_k_666_, v_attrKind_665_, v_attrs_x3f_664_, v___x_1526_, v___y_1512_, v___y_1513_);
if (lean_obj_tag(v___x_1527_) == 0)
{
lean_object* v_a_1528_; lean_object* v___x_1529_; 
v_a_1528_ = lean_ctor_get(v___x_1527_, 0);
lean_inc(v_a_1528_);
lean_dec_ref_known(v___x_1527_, 1);
v___x_1529_ = l_Lean_Elab_Command_getRef___redArg(v___y_1512_);
if (lean_obj_tag(v___x_1529_) == 0)
{
lean_object* v_a_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; 
v_a_1530_ = lean_ctor_get(v___x_1529_, 0);
lean_inc(v_a_1530_);
lean_dec_ref_known(v___x_1529_, 1);
v___x_1531_ = l_Lean_SourceInfo_fromRef(v_a_1530_, v___x_1517_);
lean_dec(v_a_1530_);
v___x_1532_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_1512_);
if (lean_obj_tag(v___x_1532_) == 0)
{
lean_object* v_quotContext_x3f_1533_; 
v_quotContext_x3f_1533_ = lean_ctor_get(v___y_1512_, 5);
if (lean_obj_tag(v_quotContext_x3f_1533_) == 0)
{
lean_object* v_a_1534_; lean_object* v___x_1535_; lean_object* v_a_1536_; 
v_a_1534_ = lean_ctor_get(v___x_1532_, 0);
lean_inc(v_a_1534_);
lean_dec_ref_known(v___x_1532_, 1);
v___x_1535_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabElabRulesAux_spec__1___redArg(v___y_1513_);
v_a_1536_ = lean_ctor_get(v___x_1535_, 0);
lean_inc(v_a_1536_);
lean_dec_ref(v___x_1535_);
v___y_807_ = v___x_1514_;
v___y_808_ = v_val_1515_;
v___y_809_ = v_a_1528_;
v___y_810_ = v_a_1534_;
v___y_811_ = v___x_1531_;
v_a_812_ = v_a_1536_;
goto v___jp_806_;
}
else
{
lean_object* v_a_1537_; lean_object* v_val_1538_; 
v_a_1537_ = lean_ctor_get(v___x_1532_, 0);
lean_inc(v_a_1537_);
lean_dec_ref_known(v___x_1532_, 1);
v_val_1538_ = lean_ctor_get(v_quotContext_x3f_1533_, 0);
lean_inc(v_val_1538_);
v___y_807_ = v___x_1514_;
v___y_808_ = v_val_1515_;
v___y_809_ = v_a_1528_;
v___y_810_ = v_a_1537_;
v___y_811_ = v___x_1531_;
v_a_812_ = v_val_1538_;
goto v___jp_806_;
}
}
else
{
lean_object* v_a_1539_; lean_object* v___x_1541_; uint8_t v_isShared_1542_; uint8_t v_isSharedCheck_1546_; 
lean_dec(v___x_1531_);
lean_dec(v_a_1528_);
lean_dec(v_val_1515_);
lean_dec(v___x_1514_);
lean_del_object(v___x_682_);
lean_dec(v_a_680_);
lean_dec(v_k_666_);
lean_dec(v_doc_x3f_663_);
v_a_1539_ = lean_ctor_get(v___x_1532_, 0);
v_isSharedCheck_1546_ = !lean_is_exclusive(v___x_1532_);
if (v_isSharedCheck_1546_ == 0)
{
v___x_1541_ = v___x_1532_;
v_isShared_1542_ = v_isSharedCheck_1546_;
goto v_resetjp_1540_;
}
else
{
lean_inc(v_a_1539_);
lean_dec(v___x_1532_);
v___x_1541_ = lean_box(0);
v_isShared_1542_ = v_isSharedCheck_1546_;
goto v_resetjp_1540_;
}
v_resetjp_1540_:
{
lean_object* v___x_1544_; 
if (v_isShared_1542_ == 0)
{
v___x_1544_ = v___x_1541_;
goto v_reusejp_1543_;
}
else
{
lean_object* v_reuseFailAlloc_1545_; 
v_reuseFailAlloc_1545_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1545_, 0, v_a_1539_);
v___x_1544_ = v_reuseFailAlloc_1545_;
goto v_reusejp_1543_;
}
v_reusejp_1543_:
{
return v___x_1544_;
}
}
}
}
else
{
lean_dec(v_a_1528_);
lean_dec(v_val_1515_);
lean_dec(v___x_1514_);
lean_del_object(v___x_682_);
lean_dec(v_a_680_);
lean_dec(v_k_666_);
lean_dec(v_doc_x3f_663_);
return v___x_1529_;
}
}
else
{
lean_object* v_a_1547_; lean_object* v___x_1549_; uint8_t v_isShared_1550_; uint8_t v_isSharedCheck_1554_; 
lean_dec(v_val_1515_);
lean_dec(v___x_1514_);
lean_del_object(v___x_682_);
lean_dec(v_a_680_);
lean_dec(v_k_666_);
lean_dec(v_doc_x3f_663_);
v_a_1547_ = lean_ctor_get(v___x_1527_, 0);
v_isSharedCheck_1554_ = !lean_is_exclusive(v___x_1527_);
if (v_isSharedCheck_1554_ == 0)
{
v___x_1549_ = v___x_1527_;
v_isShared_1550_ = v_isSharedCheck_1554_;
goto v_resetjp_1548_;
}
else
{
lean_inc(v_a_1547_);
lean_dec(v___x_1527_);
v___x_1549_ = lean_box(0);
v_isShared_1550_ = v_isSharedCheck_1554_;
goto v_resetjp_1548_;
}
v_resetjp_1548_:
{
lean_object* v___x_1552_; 
if (v_isShared_1550_ == 0)
{
v___x_1552_ = v___x_1549_;
goto v_reusejp_1551_;
}
else
{
lean_object* v_reuseFailAlloc_1553_; 
v_reuseFailAlloc_1553_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1553_, 0, v_a_1547_);
v___x_1552_ = v_reuseFailAlloc_1553_;
goto v_reusejp_1551_;
}
v_reusejp_1551_:
{
return v___x_1552_;
}
}
}
}
}
else
{
lean_object* v___x_1555_; lean_object* v___x_1556_; 
lean_dec(v_catName_1511_);
lean_del_object(v___x_682_);
v___x_1555_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__64));
lean_inc(v_k_666_);
v___x_1556_ = l_Lean_Elab_Command_elabElabRulesAux___lam__0(v_k_666_, v_attrKind_665_, v_attrs_x3f_664_, v___x_1555_, v___y_1512_, v___y_1513_);
if (lean_obj_tag(v___x_1556_) == 0)
{
lean_object* v_a_1557_; lean_object* v___x_1558_; 
v_a_1557_ = lean_ctor_get(v___x_1556_, 0);
lean_inc(v_a_1557_);
lean_dec_ref_known(v___x_1556_, 1);
v___x_1558_ = l_Lean_Elab_Command_getRef___redArg(v___y_1512_);
if (lean_obj_tag(v___x_1558_) == 0)
{
lean_object* v_a_1559_; uint8_t v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; 
v_a_1559_ = lean_ctor_get(v___x_1558_, 0);
lean_inc(v_a_1559_);
lean_dec_ref_known(v___x_1558_, 1);
v___x_1560_ = 0;
v___x_1561_ = l_Lean_SourceInfo_fromRef(v_a_1559_, v___x_1560_);
lean_dec(v_a_1559_);
v___x_1562_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_1512_);
if (lean_obj_tag(v___x_1562_) == 0)
{
lean_object* v_quotContext_x3f_1563_; 
v_quotContext_x3f_1563_ = lean_ctor_get(v___y_1512_, 5);
if (lean_obj_tag(v_quotContext_x3f_1563_) == 0)
{
lean_object* v_a_1564_; lean_object* v___x_1565_; lean_object* v_a_1566_; 
v_a_1564_ = lean_ctor_get(v___x_1562_, 0);
lean_inc(v_a_1564_);
lean_dec_ref_known(v___x_1562_, 1);
v___x_1565_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabElabRulesAux_spec__1___redArg(v___y_1513_);
v_a_1566_ = lean_ctor_get(v___x_1565_, 0);
lean_inc(v_a_1566_);
lean_dec_ref(v___x_1565_);
v___y_960_ = v_a_1557_;
v___y_961_ = v_a_1564_;
v___y_962_ = v___x_1514_;
v___y_963_ = v_val_1515_;
v___y_964_ = v___x_1561_;
v_a_965_ = v_a_1566_;
goto v___jp_959_;
}
else
{
lean_object* v_a_1567_; lean_object* v_val_1568_; 
v_a_1567_ = lean_ctor_get(v___x_1562_, 0);
lean_inc(v_a_1567_);
lean_dec_ref_known(v___x_1562_, 1);
v_val_1568_ = lean_ctor_get(v_quotContext_x3f_1563_, 0);
lean_inc(v_val_1568_);
v___y_960_ = v_a_1557_;
v___y_961_ = v_a_1567_;
v___y_962_ = v___x_1514_;
v___y_963_ = v_val_1515_;
v___y_964_ = v___x_1561_;
v_a_965_ = v_val_1568_;
goto v___jp_959_;
}
}
else
{
lean_object* v_a_1569_; lean_object* v___x_1571_; uint8_t v_isShared_1572_; uint8_t v_isSharedCheck_1576_; 
lean_dec(v___x_1561_);
lean_dec(v_a_1557_);
lean_dec(v_val_1515_);
lean_dec(v___x_1514_);
lean_dec(v_a_680_);
lean_dec(v_k_666_);
lean_dec(v_doc_x3f_663_);
v_a_1569_ = lean_ctor_get(v___x_1562_, 0);
v_isSharedCheck_1576_ = !lean_is_exclusive(v___x_1562_);
if (v_isSharedCheck_1576_ == 0)
{
v___x_1571_ = v___x_1562_;
v_isShared_1572_ = v_isSharedCheck_1576_;
goto v_resetjp_1570_;
}
else
{
lean_inc(v_a_1569_);
lean_dec(v___x_1562_);
v___x_1571_ = lean_box(0);
v_isShared_1572_ = v_isSharedCheck_1576_;
goto v_resetjp_1570_;
}
v_resetjp_1570_:
{
lean_object* v___x_1574_; 
if (v_isShared_1572_ == 0)
{
v___x_1574_ = v___x_1571_;
goto v_reusejp_1573_;
}
else
{
lean_object* v_reuseFailAlloc_1575_; 
v_reuseFailAlloc_1575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1575_, 0, v_a_1569_);
v___x_1574_ = v_reuseFailAlloc_1575_;
goto v_reusejp_1573_;
}
v_reusejp_1573_:
{
return v___x_1574_;
}
}
}
}
else
{
lean_dec(v_a_1557_);
lean_dec(v_val_1515_);
lean_dec(v___x_1514_);
lean_dec(v_a_680_);
lean_dec(v_k_666_);
lean_dec(v_doc_x3f_663_);
return v___x_1558_;
}
}
else
{
lean_object* v_a_1577_; lean_object* v___x_1579_; uint8_t v_isShared_1580_; uint8_t v_isSharedCheck_1584_; 
lean_dec(v_val_1515_);
lean_dec(v___x_1514_);
lean_dec(v_a_680_);
lean_dec(v_k_666_);
lean_dec(v_doc_x3f_663_);
v_a_1577_ = lean_ctor_get(v___x_1556_, 0);
v_isSharedCheck_1584_ = !lean_is_exclusive(v___x_1556_);
if (v_isSharedCheck_1584_ == 0)
{
v___x_1579_ = v___x_1556_;
v_isShared_1580_ = v_isSharedCheck_1584_;
goto v_resetjp_1578_;
}
else
{
lean_inc(v_a_1577_);
lean_dec(v___x_1556_);
v___x_1579_ = lean_box(0);
v_isShared_1580_ = v_isSharedCheck_1584_;
goto v_resetjp_1578_;
}
v_resetjp_1578_:
{
lean_object* v___x_1582_; 
if (v_isShared_1580_ == 0)
{
v___x_1582_ = v___x_1579_;
goto v_reusejp_1581_;
}
else
{
lean_object* v_reuseFailAlloc_1583_; 
v_reuseFailAlloc_1583_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1583_, 0, v_a_1577_);
v___x_1582_ = v_reuseFailAlloc_1583_;
goto v_reusejp_1581_;
}
v_reusejp_1581_:
{
return v___x_1582_;
}
}
}
}
}
else
{
lean_object* v___x_1585_; uint8_t v___x_1586_; 
lean_del_object(v___x_682_);
lean_dec(v_expty_x3f_668_);
v___x_1585_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__54));
v___x_1586_ = lean_name_eq(v_catName_1511_, v___x_1585_);
if (v___x_1586_ == 0)
{
lean_object* v___x_1587_; uint8_t v___x_1588_; 
v___x_1587_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__66));
v___x_1588_ = lean_name_eq(v_catName_1511_, v___x_1587_);
if (v___x_1588_ == 0)
{
lean_object* v___x_1589_; uint8_t v___x_1590_; 
v___x_1589_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__68));
v___x_1590_ = lean_name_eq(v_catName_1511_, v___x_1589_);
if (v___x_1590_ == 0)
{
lean_object* v___x_1591_; uint8_t v___x_1592_; 
v___x_1591_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__70));
v___x_1592_ = lean_name_eq(v_catName_1511_, v___x_1591_);
if (v___x_1592_ == 0)
{
lean_object* v___x_1593_; uint8_t v___x_1594_; 
v___x_1593_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__56));
v___x_1594_ = lean_name_eq(v_catName_1511_, v___x_1593_);
if (v___x_1594_ == 0)
{
lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; 
lean_dec(v___x_1514_);
lean_dec(v_a_680_);
lean_dec(v_k_666_);
lean_dec(v_attrKind_665_);
lean_dec(v_doc_x3f_663_);
v___x_1595_ = lean_obj_once(&l_Lean_Elab_Command_elabElabRulesAux___closed__72, &l_Lean_Elab_Command_elabElabRulesAux___closed__72_once, _init_l_Lean_Elab_Command_elabElabRulesAux___closed__72);
v___x_1596_ = l_Lean_MessageData_ofName(v_catName_1511_);
v___x_1597_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1597_, 0, v___x_1595_);
lean_ctor_set(v___x_1597_, 1, v___x_1596_);
v___x_1598_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__3, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__3);
v___x_1599_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1599_, 0, v___x_1597_);
lean_ctor_set(v___x_1599_, 1, v___x_1598_);
v___x_1600_ = l_Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6___redArg(v___x_1599_, v___y_1512_, v___y_1513_);
return v___x_1600_;
}
else
{
lean_object* v___x_1601_; lean_object* v___x_1602_; 
lean_dec(v_catName_1511_);
v___x_1601_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__62));
lean_inc(v_k_666_);
v___x_1602_ = l_Lean_Elab_Command_elabElabRulesAux___lam__0(v_k_666_, v_attrKind_665_, v_attrs_x3f_664_, v___x_1601_, v___y_1512_, v___y_1513_);
if (lean_obj_tag(v___x_1602_) == 0)
{
lean_object* v_a_1603_; lean_object* v___x_1604_; 
v_a_1603_ = lean_ctor_get(v___x_1602_, 0);
lean_inc(v_a_1603_);
lean_dec_ref_known(v___x_1602_, 1);
v___x_1604_ = l_Lean_Elab_Command_getRef___redArg(v___y_1512_);
if (lean_obj_tag(v___x_1604_) == 0)
{
lean_object* v_a_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; 
v_a_1605_ = lean_ctor_get(v___x_1604_, 0);
lean_inc(v_a_1605_);
lean_dec_ref_known(v___x_1604_, 1);
v___x_1606_ = l_Lean_SourceInfo_fromRef(v_a_1605_, v___x_1592_);
lean_dec(v_a_1605_);
v___x_1607_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_1512_);
if (lean_obj_tag(v___x_1607_) == 0)
{
lean_object* v_quotContext_x3f_1608_; 
v_quotContext_x3f_1608_ = lean_ctor_get(v___y_1512_, 5);
if (lean_obj_tag(v_quotContext_x3f_1608_) == 0)
{
lean_object* v_a_1609_; lean_object* v___x_1610_; lean_object* v_a_1611_; 
v_a_1609_ = lean_ctor_get(v___x_1607_, 0);
lean_inc(v_a_1609_);
lean_dec_ref_known(v___x_1607_, 1);
v___x_1610_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabElabRulesAux_spec__1___redArg(v___y_1513_);
v_a_1611_ = lean_ctor_get(v___x_1610_, 0);
lean_inc(v_a_1611_);
lean_dec_ref(v___x_1610_);
v___y_1247_ = v_a_1603_;
v___y_1248_ = v___x_1606_;
v___y_1249_ = v___x_1514_;
v___y_1250_ = v_a_1609_;
v_a_1251_ = v_a_1611_;
goto v___jp_1246_;
}
else
{
lean_object* v_a_1612_; lean_object* v_val_1613_; 
v_a_1612_ = lean_ctor_get(v___x_1607_, 0);
lean_inc(v_a_1612_);
lean_dec_ref_known(v___x_1607_, 1);
v_val_1613_ = lean_ctor_get(v_quotContext_x3f_1608_, 0);
lean_inc(v_val_1613_);
v___y_1247_ = v_a_1603_;
v___y_1248_ = v___x_1606_;
v___y_1249_ = v___x_1514_;
v___y_1250_ = v_a_1612_;
v_a_1251_ = v_val_1613_;
goto v___jp_1246_;
}
}
else
{
lean_object* v_a_1614_; lean_object* v___x_1616_; uint8_t v_isShared_1617_; uint8_t v_isSharedCheck_1621_; 
lean_dec(v___x_1606_);
lean_dec(v_a_1603_);
lean_dec(v___x_1514_);
lean_dec(v_a_680_);
lean_dec(v_k_666_);
lean_dec(v_doc_x3f_663_);
v_a_1614_ = lean_ctor_get(v___x_1607_, 0);
v_isSharedCheck_1621_ = !lean_is_exclusive(v___x_1607_);
if (v_isSharedCheck_1621_ == 0)
{
v___x_1616_ = v___x_1607_;
v_isShared_1617_ = v_isSharedCheck_1621_;
goto v_resetjp_1615_;
}
else
{
lean_inc(v_a_1614_);
lean_dec(v___x_1607_);
v___x_1616_ = lean_box(0);
v_isShared_1617_ = v_isSharedCheck_1621_;
goto v_resetjp_1615_;
}
v_resetjp_1615_:
{
lean_object* v___x_1619_; 
if (v_isShared_1617_ == 0)
{
v___x_1619_ = v___x_1616_;
goto v_reusejp_1618_;
}
else
{
lean_object* v_reuseFailAlloc_1620_; 
v_reuseFailAlloc_1620_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1620_, 0, v_a_1614_);
v___x_1619_ = v_reuseFailAlloc_1620_;
goto v_reusejp_1618_;
}
v_reusejp_1618_:
{
return v___x_1619_;
}
}
}
}
else
{
lean_dec(v_a_1603_);
lean_dec(v___x_1514_);
lean_dec(v_a_680_);
lean_dec(v_k_666_);
lean_dec(v_doc_x3f_663_);
return v___x_1604_;
}
}
else
{
lean_object* v_a_1622_; lean_object* v___x_1624_; uint8_t v_isShared_1625_; uint8_t v_isSharedCheck_1629_; 
lean_dec(v___x_1514_);
lean_dec(v_a_680_);
lean_dec(v_k_666_);
lean_dec(v_doc_x3f_663_);
v_a_1622_ = lean_ctor_get(v___x_1602_, 0);
v_isSharedCheck_1629_ = !lean_is_exclusive(v___x_1602_);
if (v_isSharedCheck_1629_ == 0)
{
v___x_1624_ = v___x_1602_;
v_isShared_1625_ = v_isSharedCheck_1629_;
goto v_resetjp_1623_;
}
else
{
lean_inc(v_a_1622_);
lean_dec(v___x_1602_);
v___x_1624_ = lean_box(0);
v_isShared_1625_ = v_isSharedCheck_1629_;
goto v_resetjp_1623_;
}
v_resetjp_1623_:
{
lean_object* v___x_1627_; 
if (v_isShared_1625_ == 0)
{
v___x_1627_ = v___x_1624_;
goto v_reusejp_1626_;
}
else
{
lean_object* v_reuseFailAlloc_1628_; 
v_reuseFailAlloc_1628_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1628_, 0, v_a_1622_);
v___x_1627_ = v_reuseFailAlloc_1628_;
goto v_reusejp_1626_;
}
v_reusejp_1626_:
{
return v___x_1627_;
}
}
}
}
}
else
{
lean_dec(v_catName_1511_);
v___y_1090_ = v___x_1514_;
v___y_1091_ = v___x_1588_;
v___y_1092_ = v___x_1589_;
v___y_1093_ = v___y_1512_;
v___y_1094_ = v___y_1513_;
goto v___jp_1089_;
}
}
else
{
lean_dec(v_catName_1511_);
v___y_1090_ = v___x_1514_;
v___y_1091_ = v___x_1588_;
v___y_1092_ = v___x_1589_;
v___y_1093_ = v___y_1512_;
v___y_1094_ = v___y_1513_;
goto v___jp_1089_;
}
}
else
{
lean_object* v___x_1630_; lean_object* v___x_1631_; 
lean_dec(v_catName_1511_);
v___x_1630_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__74));
lean_inc(v_k_666_);
v___x_1631_ = l_Lean_Elab_Command_elabElabRulesAux___lam__0(v_k_666_, v_attrKind_665_, v_attrs_x3f_664_, v___x_1630_, v___y_1512_, v___y_1513_);
if (lean_obj_tag(v___x_1631_) == 0)
{
lean_object* v_a_1632_; lean_object* v___x_1633_; 
v_a_1632_ = lean_ctor_get(v___x_1631_, 0);
lean_inc(v_a_1632_);
lean_dec_ref_known(v___x_1631_, 1);
v___x_1633_ = l_Lean_Elab_Command_getRef___redArg(v___y_1512_);
if (lean_obj_tag(v___x_1633_) == 0)
{
lean_object* v_a_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; 
v_a_1634_ = lean_ctor_get(v___x_1633_, 0);
lean_inc(v_a_1634_);
lean_dec_ref_known(v___x_1633_, 1);
v___x_1635_ = l_Lean_SourceInfo_fromRef(v_a_1634_, v___x_1586_);
lean_dec(v_a_1634_);
v___x_1636_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_1512_);
if (lean_obj_tag(v___x_1636_) == 0)
{
lean_object* v_quotContext_x3f_1637_; 
v_quotContext_x3f_1637_ = lean_ctor_get(v___y_1512_, 5);
if (lean_obj_tag(v_quotContext_x3f_1637_) == 0)
{
lean_object* v_a_1638_; lean_object* v___x_1639_; lean_object* v_a_1640_; 
v_a_1638_ = lean_ctor_get(v___x_1636_, 0);
lean_inc(v_a_1638_);
lean_dec_ref_known(v___x_1636_, 1);
v___x_1639_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabElabRulesAux_spec__1___redArg(v___y_1513_);
v_a_1640_ = lean_ctor_get(v___x_1639_, 0);
lean_inc(v_a_1640_);
lean_dec_ref(v___x_1639_);
v___y_1362_ = v___x_1514_;
v___y_1363_ = v_a_1638_;
v___y_1364_ = v___x_1635_;
v___y_1365_ = v_a_1632_;
v_a_1366_ = v_a_1640_;
goto v___jp_1361_;
}
else
{
lean_object* v_a_1641_; lean_object* v_val_1642_; 
v_a_1641_ = lean_ctor_get(v___x_1636_, 0);
lean_inc(v_a_1641_);
lean_dec_ref_known(v___x_1636_, 1);
v_val_1642_ = lean_ctor_get(v_quotContext_x3f_1637_, 0);
lean_inc(v_val_1642_);
v___y_1362_ = v___x_1514_;
v___y_1363_ = v_a_1641_;
v___y_1364_ = v___x_1635_;
v___y_1365_ = v_a_1632_;
v_a_1366_ = v_val_1642_;
goto v___jp_1361_;
}
}
else
{
lean_object* v_a_1643_; lean_object* v___x_1645_; uint8_t v_isShared_1646_; uint8_t v_isSharedCheck_1650_; 
lean_dec(v___x_1635_);
lean_dec(v_a_1632_);
lean_dec(v___x_1514_);
lean_dec(v_a_680_);
lean_dec(v_k_666_);
lean_dec(v_doc_x3f_663_);
v_a_1643_ = lean_ctor_get(v___x_1636_, 0);
v_isSharedCheck_1650_ = !lean_is_exclusive(v___x_1636_);
if (v_isSharedCheck_1650_ == 0)
{
v___x_1645_ = v___x_1636_;
v_isShared_1646_ = v_isSharedCheck_1650_;
goto v_resetjp_1644_;
}
else
{
lean_inc(v_a_1643_);
lean_dec(v___x_1636_);
v___x_1645_ = lean_box(0);
v_isShared_1646_ = v_isSharedCheck_1650_;
goto v_resetjp_1644_;
}
v_resetjp_1644_:
{
lean_object* v___x_1648_; 
if (v_isShared_1646_ == 0)
{
v___x_1648_ = v___x_1645_;
goto v_reusejp_1647_;
}
else
{
lean_object* v_reuseFailAlloc_1649_; 
v_reuseFailAlloc_1649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1649_, 0, v_a_1643_);
v___x_1648_ = v_reuseFailAlloc_1649_;
goto v_reusejp_1647_;
}
v_reusejp_1647_:
{
return v___x_1648_;
}
}
}
}
else
{
lean_dec(v_a_1632_);
lean_dec(v___x_1514_);
lean_dec(v_a_680_);
lean_dec(v_k_666_);
lean_dec(v_doc_x3f_663_);
return v___x_1633_;
}
}
else
{
lean_object* v_a_1651_; lean_object* v___x_1653_; uint8_t v_isShared_1654_; uint8_t v_isSharedCheck_1658_; 
lean_dec(v___x_1514_);
lean_dec(v_a_680_);
lean_dec(v_k_666_);
lean_dec(v_doc_x3f_663_);
v_a_1651_ = lean_ctor_get(v___x_1631_, 0);
v_isSharedCheck_1658_ = !lean_is_exclusive(v___x_1631_);
if (v_isSharedCheck_1658_ == 0)
{
v___x_1653_ = v___x_1631_;
v_isShared_1654_ = v_isSharedCheck_1658_;
goto v_resetjp_1652_;
}
else
{
lean_inc(v_a_1651_);
lean_dec(v___x_1631_);
v___x_1653_ = lean_box(0);
v_isShared_1654_ = v_isSharedCheck_1658_;
goto v_resetjp_1652_;
}
v_resetjp_1652_:
{
lean_object* v___x_1656_; 
if (v_isShared_1654_ == 0)
{
v___x_1656_ = v___x_1653_;
goto v_reusejp_1655_;
}
else
{
lean_object* v_reuseFailAlloc_1657_; 
v_reuseFailAlloc_1657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1657_, 0, v_a_1651_);
v___x_1656_ = v_reuseFailAlloc_1657_;
goto v_reusejp_1655_;
}
v_reusejp_1655_:
{
return v___x_1656_;
}
}
}
}
}
else
{
lean_object* v___x_1659_; lean_object* v___x_1660_; 
lean_dec(v_catName_1511_);
v___x_1659_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__64));
lean_inc(v_k_666_);
v___x_1660_ = l_Lean_Elab_Command_elabElabRulesAux___lam__0(v_k_666_, v_attrKind_665_, v_attrs_x3f_664_, v___x_1659_, v___y_1512_, v___y_1513_);
if (lean_obj_tag(v___x_1660_) == 0)
{
lean_object* v_a_1661_; lean_object* v___x_1662_; 
v_a_1661_ = lean_ctor_get(v___x_1660_, 0);
lean_inc(v_a_1661_);
lean_dec_ref_known(v___x_1660_, 1);
v___x_1662_ = l_Lean_Elab_Command_getRef___redArg(v___y_1512_);
if (lean_obj_tag(v___x_1662_) == 0)
{
lean_object* v_a_1663_; uint8_t v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; 
v_a_1663_ = lean_ctor_get(v___x_1662_, 0);
lean_inc(v_a_1663_);
lean_dec_ref_known(v___x_1662_, 1);
v___x_1664_ = 0;
v___x_1665_ = l_Lean_SourceInfo_fromRef(v_a_1663_, v___x_1664_);
lean_dec(v_a_1663_);
v___x_1666_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_1512_);
if (lean_obj_tag(v___x_1666_) == 0)
{
lean_object* v_quotContext_x3f_1667_; 
v_quotContext_x3f_1667_ = lean_ctor_get(v___y_1512_, 5);
if (lean_obj_tag(v_quotContext_x3f_1667_) == 0)
{
lean_object* v_a_1668_; lean_object* v___x_1669_; lean_object* v_a_1670_; 
v_a_1668_ = lean_ctor_get(v___x_1666_, 0);
lean_inc(v_a_1668_);
lean_dec_ref_known(v___x_1666_, 1);
v___x_1669_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabElabRulesAux_spec__1___redArg(v___y_1513_);
v_a_1670_ = lean_ctor_get(v___x_1669_, 0);
lean_inc(v_a_1670_);
lean_dec_ref(v___x_1669_);
v___y_1496_ = v_a_1661_;
v___y_1497_ = v___x_1514_;
v___y_1498_ = v_a_1668_;
v___y_1499_ = v___x_1665_;
v_a_1500_ = v_a_1670_;
goto v___jp_1495_;
}
else
{
lean_object* v_a_1671_; lean_object* v_val_1672_; 
v_a_1671_ = lean_ctor_get(v___x_1666_, 0);
lean_inc(v_a_1671_);
lean_dec_ref_known(v___x_1666_, 1);
v_val_1672_ = lean_ctor_get(v_quotContext_x3f_1667_, 0);
lean_inc(v_val_1672_);
v___y_1496_ = v_a_1661_;
v___y_1497_ = v___x_1514_;
v___y_1498_ = v_a_1671_;
v___y_1499_ = v___x_1665_;
v_a_1500_ = v_val_1672_;
goto v___jp_1495_;
}
}
else
{
lean_object* v_a_1673_; lean_object* v___x_1675_; uint8_t v_isShared_1676_; uint8_t v_isSharedCheck_1680_; 
lean_dec(v___x_1665_);
lean_dec(v_a_1661_);
lean_dec(v___x_1514_);
lean_dec(v_a_680_);
lean_dec(v_k_666_);
lean_dec(v_doc_x3f_663_);
v_a_1673_ = lean_ctor_get(v___x_1666_, 0);
v_isSharedCheck_1680_ = !lean_is_exclusive(v___x_1666_);
if (v_isSharedCheck_1680_ == 0)
{
v___x_1675_ = v___x_1666_;
v_isShared_1676_ = v_isSharedCheck_1680_;
goto v_resetjp_1674_;
}
else
{
lean_inc(v_a_1673_);
lean_dec(v___x_1666_);
v___x_1675_ = lean_box(0);
v_isShared_1676_ = v_isSharedCheck_1680_;
goto v_resetjp_1674_;
}
v_resetjp_1674_:
{
lean_object* v___x_1678_; 
if (v_isShared_1676_ == 0)
{
v___x_1678_ = v___x_1675_;
goto v_reusejp_1677_;
}
else
{
lean_object* v_reuseFailAlloc_1679_; 
v_reuseFailAlloc_1679_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1679_, 0, v_a_1673_);
v___x_1678_ = v_reuseFailAlloc_1679_;
goto v_reusejp_1677_;
}
v_reusejp_1677_:
{
return v___x_1678_;
}
}
}
}
else
{
lean_dec(v_a_1661_);
lean_dec(v___x_1514_);
lean_dec(v_a_680_);
lean_dec(v_k_666_);
lean_dec(v_doc_x3f_663_);
return v___x_1662_;
}
}
else
{
lean_object* v_a_1681_; lean_object* v___x_1683_; uint8_t v_isShared_1684_; uint8_t v_isSharedCheck_1688_; 
lean_dec(v___x_1514_);
lean_dec(v_a_680_);
lean_dec(v_k_666_);
lean_dec(v_doc_x3f_663_);
v_a_1681_ = lean_ctor_get(v___x_1660_, 0);
v_isSharedCheck_1688_ = !lean_is_exclusive(v___x_1660_);
if (v_isSharedCheck_1688_ == 0)
{
v___x_1683_ = v___x_1660_;
v_isShared_1684_ = v_isSharedCheck_1688_;
goto v_resetjp_1682_;
}
else
{
lean_inc(v_a_1681_);
lean_dec(v___x_1660_);
v___x_1683_ = lean_box(0);
v_isShared_1684_ = v_isSharedCheck_1688_;
goto v_resetjp_1682_;
}
v_resetjp_1682_:
{
lean_object* v___x_1686_; 
if (v_isShared_1684_ == 0)
{
v___x_1686_ = v___x_1683_;
goto v_reusejp_1685_;
}
else
{
lean_object* v_reuseFailAlloc_1687_; 
v_reuseFailAlloc_1687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1687_, 0, v_a_1681_);
v___x_1686_ = v_reuseFailAlloc_1687_;
goto v_reusejp_1685_;
}
v_reusejp_1685_:
{
return v___x_1686_;
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
lean_object* v_a_1703_; lean_object* v___x_1705_; uint8_t v_isShared_1706_; uint8_t v_isSharedCheck_1710_; 
lean_dec(v_expty_x3f_668_);
lean_dec(v_k_666_);
lean_dec(v_attrKind_665_);
lean_dec(v_doc_x3f_663_);
v_a_1703_ = lean_ctor_get(v___x_679_, 0);
v_isSharedCheck_1710_ = !lean_is_exclusive(v___x_679_);
if (v_isSharedCheck_1710_ == 0)
{
v___x_1705_ = v___x_679_;
v_isShared_1706_ = v_isSharedCheck_1710_;
goto v_resetjp_1704_;
}
else
{
lean_inc(v_a_1703_);
lean_dec(v___x_679_);
v___x_1705_ = lean_box(0);
v_isShared_1706_ = v_isSharedCheck_1710_;
goto v_resetjp_1704_;
}
v_resetjp_1704_:
{
lean_object* v___x_1708_; 
if (v_isShared_1706_ == 0)
{
v___x_1708_ = v___x_1705_;
goto v_reusejp_1707_;
}
else
{
lean_object* v_reuseFailAlloc_1709_; 
v_reuseFailAlloc_1709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1709_, 0, v_a_1703_);
v___x_1708_ = v_reuseFailAlloc_1709_;
goto v_reusejp_1707_;
}
v_reusejp_1707_:
{
return v___x_1708_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabElabRulesAux___boxed(lean_object* v_doc_x3f_1711_, lean_object* v_attrs_x3f_1712_, lean_object* v_attrKind_1713_, lean_object* v_k_1714_, lean_object* v_cat_x3f_1715_, lean_object* v_expty_x3f_1716_, lean_object* v_alts_1717_, lean_object* v_a_1718_, lean_object* v_a_1719_, lean_object* v_a_1720_){
_start:
{
lean_object* v_res_1721_; 
v_res_1721_ = l_Lean_Elab_Command_elabElabRulesAux(v_doc_x3f_1711_, v_attrs_x3f_1712_, v_attrKind_1713_, v_k_1714_, v_cat_x3f_1715_, v_expty_x3f_1716_, v_alts_1717_, v_a_1718_, v_a_1719_);
lean_dec(v_a_1719_);
lean_dec_ref(v_a_1718_);
lean_dec_ref(v_alts_1717_);
lean_dec(v_cat_x3f_1715_);
lean_dec(v_attrs_x3f_1712_);
return v_res_1721_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Command_elabElabRulesAux_spec__3(lean_object* v_00_u03b1_1722_, lean_object* v_ref_1723_, lean_object* v_msg_1724_, lean_object* v___y_1725_, lean_object* v___y_1726_){
_start:
{
lean_object* v___x_1728_; 
v___x_1728_ = l_Lean_throwErrorAt___at___00Lean_Elab_Command_elabElabRulesAux_spec__3___redArg(v_ref_1723_, v_msg_1724_, v___y_1725_, v___y_1726_);
return v___x_1728_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Command_elabElabRulesAux_spec__3___boxed(lean_object* v_00_u03b1_1729_, lean_object* v_ref_1730_, lean_object* v_msg_1731_, lean_object* v___y_1732_, lean_object* v___y_1733_, lean_object* v___y_1734_){
_start:
{
lean_object* v_res_1735_; 
v_res_1735_ = l_Lean_throwErrorAt___at___00Lean_Elab_Command_elabElabRulesAux_spec__3(v_00_u03b1_1729_, v_ref_1730_, v_msg_1731_, v___y_1732_, v___y_1733_);
lean_dec(v___y_1733_);
lean_dec_ref(v___y_1732_);
lean_dec(v_ref_1730_);
return v_res_1735_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__6(lean_object* v_msgData_1736_, lean_object* v___y_1737_, lean_object* v___y_1738_){
_start:
{
lean_object* v___x_1740_; 
v___x_1740_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__6___redArg(v_msgData_1736_, v___y_1738_);
return v___x_1740_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__6___boxed(lean_object* v_msgData_1741_, lean_object* v___y_1742_, lean_object* v___y_1743_, lean_object* v___y_1744_){
_start:
{
lean_object* v_res_1745_; 
v_res_1745_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__6(v_msgData_1741_, v___y_1742_, v___y_1743_);
lean_dec(v___y_1743_);
lean_dec_ref(v___y_1742_);
return v_res_1745_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6(lean_object* v_00_u03b1_1746_, lean_object* v_msg_1747_, lean_object* v___y_1748_, lean_object* v___y_1749_){
_start:
{
lean_object* v___x_1751_; 
v___x_1751_ = l_Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6___redArg(v_msg_1747_, v___y_1748_, v___y_1749_);
return v___x_1751_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6___boxed(lean_object* v_00_u03b1_1752_, lean_object* v_msg_1753_, lean_object* v___y_1754_, lean_object* v___y_1755_, lean_object* v___y_1756_){
_start:
{
lean_object* v_res_1757_; 
v_res_1757_ = l_Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6(v_00_u03b1_1752_, v_msg_1753_, v___y_1754_, v___y_1755_);
lean_dec(v___y_1755_);
lean_dec_ref(v___y_1754_);
return v_res_1757_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__7(lean_object* v_msgData_1758_, lean_object* v_macroStack_1759_, lean_object* v___y_1760_, lean_object* v___y_1761_){
_start:
{
lean_object* v___x_1763_; 
v___x_1763_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__7___redArg(v_msgData_1758_, v_macroStack_1759_, v___y_1761_);
return v___x_1763_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__7___boxed(lean_object* v_msgData_1764_, lean_object* v_macroStack_1765_, lean_object* v___y_1766_, lean_object* v___y_1767_, lean_object* v___y_1768_){
_start:
{
lean_object* v_res_1769_; 
v_res_1769_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__7(v_msgData_1764_, v_macroStack_1765_, v___y_1766_, v___y_1767_);
lean_dec(v___y_1767_);
lean_dec_ref(v___y_1766_);
return v_res_1769_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabElabRules___lam__0(lean_object* v_x_1770_){
_start:
{
lean_object* v___x_1771_; 
v___x_1771_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__33));
return v___x_1771_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabElabRules___lam__0___boxed(lean_object* v_x_1772_){
_start:
{
lean_object* v_res_1773_; 
v_res_1773_ = l_Lean_Elab_Command_elabElabRules___lam__0(v_x_1772_);
lean_dec(v_x_1772_);
return v_res_1773_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabElabRules___lam__1(lean_object* v___x_1778_, lean_object* v___x_1779_, lean_object* v_attrKind_1780_, lean_object* v_expty_x3f_1781_, lean_object* v___f_1782_, lean_object* v_cat_x3f_1783_, lean_object* v___x_1784_, lean_object* v___x_1785_, lean_object* v_attrs_x3f_1786_, lean_object* v___x_1787_, lean_object* v___x_1788_, lean_object* v___x_1789_, lean_object* v_doc_x3f_1790_, lean_object* v_kind_x3f_1791_, lean_object* v_alts_1792_, lean_object* v___y_1793_, lean_object* v___y_1794_){
_start:
{
lean_object* v___x_1796_; 
v___x_1796_ = l_Lean_Elab_Command_getRef___redArg(v___y_1793_);
if (lean_obj_tag(v___x_1796_) == 0)
{
lean_object* v_a_1797_; lean_object* v___x_1799_; uint8_t v_isShared_1800_; uint8_t v_isSharedCheck_1906_; 
v_a_1797_ = lean_ctor_get(v___x_1796_, 0);
v_isSharedCheck_1906_ = !lean_is_exclusive(v___x_1796_);
if (v_isSharedCheck_1906_ == 0)
{
v___x_1799_ = v___x_1796_;
v_isShared_1800_ = v_isSharedCheck_1906_;
goto v_resetjp_1798_;
}
else
{
lean_inc(v_a_1797_);
lean_dec(v___x_1796_);
v___x_1799_ = lean_box(0);
v_isShared_1800_ = v_isSharedCheck_1906_;
goto v_resetjp_1798_;
}
v_resetjp_1798_:
{
uint8_t v___x_1801_; lean_object* v___x_1802_; lean_object* v___y_1804_; lean_object* v___y_1805_; lean_object* v___y_1806_; lean_object* v___y_1807_; lean_object* v___y_1808_; lean_object* v___y_1809_; lean_object* v___y_1810_; lean_object* v___y_1811_; lean_object* v___y_1823_; lean_object* v___y_1824_; lean_object* v___y_1825_; lean_object* v___y_1826_; lean_object* v___y_1827_; lean_object* v___y_1828_; lean_object* v___y_1829_; lean_object* v___y_1838_; lean_object* v___y_1839_; lean_object* v___y_1840_; lean_object* v___y_1841_; lean_object* v___y_1842_; lean_object* v___y_1843_; lean_object* v___y_1852_; lean_object* v___y_1853_; lean_object* v___y_1854_; lean_object* v___y_1855_; lean_object* v___y_1872_; lean_object* v___y_1873_; lean_object* v___y_1874_; lean_object* v___x_1895_; 
v___x_1801_ = 0;
v___x_1802_ = l_Lean_SourceInfo_fromRef(v_a_1797_, v___x_1801_);
lean_dec(v_a_1797_);
v___x_1895_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_1793_);
if (lean_obj_tag(v___x_1895_) == 0)
{
lean_object* v_quotContext_x3f_1896_; 
lean_dec_ref_known(v___x_1895_, 1);
v_quotContext_x3f_1896_ = lean_ctor_get(v___y_1793_, 5);
if (lean_obj_tag(v_quotContext_x3f_1896_) == 0)
{
lean_object* v___x_1897_; 
v___x_1897_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabElabRulesAux_spec__1___redArg(v___y_1794_);
lean_dec_ref(v___x_1897_);
goto v___jp_1889_;
}
else
{
goto v___jp_1889_;
}
}
else
{
lean_object* v_a_1898_; lean_object* v___x_1900_; uint8_t v_isShared_1901_; uint8_t v_isSharedCheck_1905_; 
lean_dec(v___x_1802_);
lean_del_object(v___x_1799_);
lean_dec(v_kind_x3f_1791_);
lean_dec(v_doc_x3f_1790_);
lean_dec_ref(v___x_1789_);
lean_dec_ref(v___x_1788_);
lean_dec_ref(v___x_1787_);
lean_dec_ref(v___x_1784_);
lean_dec(v_cat_x3f_1783_);
lean_dec_ref(v___f_1782_);
lean_dec(v_expty_x3f_1781_);
lean_dec(v_attrKind_1780_);
lean_dec(v___x_1779_);
lean_dec(v___x_1778_);
v_a_1898_ = lean_ctor_get(v___x_1895_, 0);
v_isSharedCheck_1905_ = !lean_is_exclusive(v___x_1895_);
if (v_isSharedCheck_1905_ == 0)
{
v___x_1900_ = v___x_1895_;
v_isShared_1901_ = v_isSharedCheck_1905_;
goto v_resetjp_1899_;
}
else
{
lean_inc(v_a_1898_);
lean_dec(v___x_1895_);
v___x_1900_ = lean_box(0);
v_isShared_1901_ = v_isSharedCheck_1905_;
goto v_resetjp_1899_;
}
v_resetjp_1899_:
{
lean_object* v___x_1903_; 
if (v_isShared_1901_ == 0)
{
v___x_1903_ = v___x_1900_;
goto v_reusejp_1902_;
}
else
{
lean_object* v_reuseFailAlloc_1904_; 
v_reuseFailAlloc_1904_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1904_, 0, v_a_1898_);
v___x_1903_ = v_reuseFailAlloc_1904_;
goto v_reusejp_1902_;
}
v_reusejp_1902_:
{
return v___x_1903_;
}
}
}
v___jp_1803_:
{
lean_object* v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1820_; 
lean_inc_ref_n(v___y_1804_, 2);
v___x_1812_ = l_Array_append___redArg(v___y_1804_, v___y_1811_);
lean_dec_ref(v___y_1811_);
lean_inc_n(v___y_1808_, 2);
lean_inc_n(v___x_1802_, 3);
v___x_1813_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1813_, 0, v___x_1802_);
lean_ctor_set(v___x_1813_, 1, v___y_1808_);
lean_ctor_set(v___x_1813_, 2, v___x_1812_);
v___x_1814_ = l_unsafeCast___redArg(v_alts_1792_);
v___x_1815_ = l_Array_append___redArg(v___y_1804_, v___x_1814_);
lean_dec(v___x_1814_);
v___x_1816_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1816_, 0, v___x_1802_);
lean_ctor_set(v___x_1816_, 1, v___y_1808_);
lean_ctor_set(v___x_1816_, 2, v___x_1815_);
v___x_1817_ = l_Lean_Syntax_node1(v___x_1802_, v___x_1778_, v___x_1816_);
v___x_1818_ = l_Lean_Syntax_node8(v___x_1802_, v___x_1779_, v___y_1806_, v___y_1807_, v_attrKind_1780_, v___y_1810_, v___y_1805_, v___y_1809_, v___x_1813_, v___x_1817_);
if (v_isShared_1800_ == 0)
{
lean_ctor_set(v___x_1799_, 0, v___x_1818_);
v___x_1820_ = v___x_1799_;
goto v_reusejp_1819_;
}
else
{
lean_object* v_reuseFailAlloc_1821_; 
v_reuseFailAlloc_1821_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1821_, 0, v___x_1818_);
v___x_1820_ = v_reuseFailAlloc_1821_;
goto v_reusejp_1819_;
}
v_reusejp_1819_:
{
return v___x_1820_;
}
}
v___jp_1822_:
{
lean_object* v___x_1830_; lean_object* v___x_1831_; 
lean_inc_ref(v___y_1823_);
v___x_1830_ = l_Array_append___redArg(v___y_1823_, v___y_1829_);
lean_dec_ref(v___y_1829_);
lean_inc(v___y_1827_);
lean_inc(v___x_1802_);
v___x_1831_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1831_, 0, v___x_1802_);
lean_ctor_set(v___x_1831_, 1, v___y_1827_);
lean_ctor_set(v___x_1831_, 2, v___x_1830_);
if (lean_obj_tag(v_expty_x3f_1781_) == 1)
{
lean_object* v_val_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; 
lean_dec_ref(v___f_1782_);
v_val_1832_ = lean_ctor_get(v_expty_x3f_1781_, 0);
lean_inc(v_val_1832_);
lean_dec_ref_known(v_expty_x3f_1781_, 1);
v___x_1833_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRules___lam__1___closed__0));
lean_inc(v___x_1802_);
v___x_1834_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1834_, 0, v___x_1802_);
lean_ctor_set(v___x_1834_, 1, v___x_1833_);
v___x_1835_ = l_Array_mkArray2___redArg(v___x_1834_, v_val_1832_);
v___y_1804_ = v___y_1823_;
v___y_1805_ = v___y_1824_;
v___y_1806_ = v___y_1825_;
v___y_1807_ = v___y_1826_;
v___y_1808_ = v___y_1827_;
v___y_1809_ = v___x_1831_;
v___y_1810_ = v___y_1828_;
v___y_1811_ = v___x_1835_;
goto v___jp_1803_;
}
else
{
lean_object* v___x_1836_; 
v___x_1836_ = lean_apply_1(v___f_1782_, v_expty_x3f_1781_);
v___y_1804_ = v___y_1823_;
v___y_1805_ = v___y_1824_;
v___y_1806_ = v___y_1825_;
v___y_1807_ = v___y_1826_;
v___y_1808_ = v___y_1827_;
v___y_1809_ = v___x_1831_;
v___y_1810_ = v___y_1828_;
v___y_1811_ = v___x_1836_;
goto v___jp_1803_;
}
}
v___jp_1837_:
{
lean_object* v___x_1844_; lean_object* v___x_1845_; 
lean_inc_ref(v___y_1838_);
v___x_1844_ = l_Array_append___redArg(v___y_1838_, v___y_1843_);
lean_dec_ref(v___y_1843_);
lean_inc(v___y_1841_);
lean_inc(v___x_1802_);
v___x_1845_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1845_, 0, v___x_1802_);
lean_ctor_set(v___x_1845_, 1, v___y_1841_);
lean_ctor_set(v___x_1845_, 2, v___x_1844_);
if (lean_obj_tag(v_cat_x3f_1783_) == 1)
{
lean_object* v_val_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; 
v_val_1846_ = lean_ctor_get(v_cat_x3f_1783_, 0);
lean_inc(v_val_1846_);
lean_dec_ref_known(v_cat_x3f_1783_, 1);
v___x_1847_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__7));
lean_inc(v___x_1802_);
v___x_1848_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1848_, 0, v___x_1802_);
lean_ctor_set(v___x_1848_, 1, v___x_1847_);
v___x_1849_ = l_Array_mkArray2___redArg(v___x_1848_, v_val_1846_);
v___y_1823_ = v___y_1838_;
v___y_1824_ = v___x_1845_;
v___y_1825_ = v___y_1839_;
v___y_1826_ = v___y_1840_;
v___y_1827_ = v___y_1841_;
v___y_1828_ = v___y_1842_;
v___y_1829_ = v___x_1849_;
goto v___jp_1822_;
}
else
{
lean_object* v___x_1850_; 
lean_inc_ref(v___f_1782_);
v___x_1850_ = lean_apply_1(v___f_1782_, v_cat_x3f_1783_);
v___y_1823_ = v___y_1838_;
v___y_1824_ = v___x_1845_;
v___y_1825_ = v___y_1839_;
v___y_1826_ = v___y_1840_;
v___y_1827_ = v___y_1841_;
v___y_1828_ = v___y_1842_;
v___y_1829_ = v___x_1850_;
goto v___jp_1822_;
}
}
v___jp_1851_:
{
lean_object* v___x_1856_; lean_object* v___x_1857_; lean_object* v___x_1858_; 
lean_inc_ref(v___y_1852_);
v___x_1856_ = l_Array_append___redArg(v___y_1852_, v___y_1855_);
lean_dec_ref(v___y_1855_);
lean_inc(v___y_1854_);
lean_inc_n(v___x_1802_, 2);
v___x_1857_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1857_, 0, v___x_1802_);
lean_ctor_set(v___x_1857_, 1, v___y_1854_);
lean_ctor_set(v___x_1857_, 2, v___x_1856_);
v___x_1858_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1858_, 0, v___x_1802_);
lean_ctor_set(v___x_1858_, 1, v___x_1784_);
if (lean_obj_tag(v_kind_x3f_1791_) == 0)
{
lean_object* v___x_1859_; 
v___x_1859_ = lean_mk_empty_array_with_capacity(v___x_1785_);
v___y_1838_ = v___y_1852_;
v___y_1839_ = v___y_1853_;
v___y_1840_ = v___x_1857_;
v___y_1841_ = v___y_1854_;
v___y_1842_ = v___x_1858_;
v___y_1843_ = v___x_1859_;
goto v___jp_1837_;
}
else
{
lean_object* v_val_1860_; lean_object* v___x_1861_; lean_object* v___x_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; lean_object* v___x_1868_; lean_object* v___x_1869_; lean_object* v___x_1870_; 
v_val_1860_ = lean_ctor_get(v_kind_x3f_1791_, 0);
lean_inc(v_val_1860_);
lean_dec_ref_known(v_kind_x3f_1791_, 1);
v___x_1861_ = l_Lean_mkIdent(v_val_1860_);
v___x_1862_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRules___lam__1___closed__1));
lean_inc_n(v___x_1802_, 4);
v___x_1863_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1863_, 0, v___x_1802_);
lean_ctor_set(v___x_1863_, 1, v___x_1862_);
v___x_1864_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRules___lam__1___closed__2));
v___x_1865_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1865_, 0, v___x_1802_);
lean_ctor_set(v___x_1865_, 1, v___x_1864_);
v___x_1866_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__12));
v___x_1867_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1867_, 0, v___x_1802_);
lean_ctor_set(v___x_1867_, 1, v___x_1866_);
v___x_1868_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRules___lam__1___closed__3));
v___x_1869_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1869_, 0, v___x_1802_);
lean_ctor_set(v___x_1869_, 1, v___x_1868_);
v___x_1870_ = l_Array_mkArray5___redArg(v___x_1863_, v___x_1865_, v___x_1867_, v___x_1861_, v___x_1869_);
v___y_1838_ = v___y_1852_;
v___y_1839_ = v___y_1853_;
v___y_1840_ = v___x_1857_;
v___y_1841_ = v___y_1854_;
v___y_1842_ = v___x_1858_;
v___y_1843_ = v___x_1870_;
goto v___jp_1837_;
}
}
v___jp_1871_:
{
lean_object* v___x_1875_; lean_object* v___x_1876_; 
lean_inc_ref(v___y_1872_);
v___x_1875_ = l_Array_append___redArg(v___y_1872_, v___y_1874_);
lean_dec_ref(v___y_1874_);
lean_inc(v___y_1873_);
lean_inc(v___x_1802_);
v___x_1876_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1876_, 0, v___x_1802_);
lean_ctor_set(v___x_1876_, 1, v___y_1873_);
lean_ctor_set(v___x_1876_, 2, v___x_1875_);
if (lean_obj_tag(v_attrs_x3f_1786_) == 1)
{
lean_object* v_val_1877_; lean_object* v___x_1878_; lean_object* v___x_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; lean_object* v___x_1882_; lean_object* v___x_1883_; lean_object* v___x_1884_; lean_object* v___x_1885_; lean_object* v___x_1886_; lean_object* v___x_1887_; 
v_val_1877_ = lean_ctor_get(v_attrs_x3f_1786_, 0);
v___x_1878_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__0));
v___x_1879_ = l_Lean_Name_mkStr4(v___x_1787_, v___x_1788_, v___x_1789_, v___x_1878_);
v___x_1880_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__1));
lean_inc_n(v___x_1802_, 4);
v___x_1881_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1881_, 0, v___x_1802_);
lean_ctor_set(v___x_1881_, 1, v___x_1880_);
lean_inc_ref(v___y_1872_);
v___x_1882_ = l_Array_append___redArg(v___y_1872_, v_val_1877_);
lean_inc(v___y_1873_);
v___x_1883_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1883_, 0, v___x_1802_);
lean_ctor_set(v___x_1883_, 1, v___y_1873_);
lean_ctor_set(v___x_1883_, 2, v___x_1882_);
v___x_1884_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__3));
v___x_1885_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1885_, 0, v___x_1802_);
lean_ctor_set(v___x_1885_, 1, v___x_1884_);
v___x_1886_ = l_Lean_Syntax_node3(v___x_1802_, v___x_1879_, v___x_1881_, v___x_1883_, v___x_1885_);
v___x_1887_ = l_Array_mkArray1___redArg(v___x_1886_);
v___y_1852_ = v___y_1872_;
v___y_1853_ = v___x_1876_;
v___y_1854_ = v___y_1873_;
v___y_1855_ = v___x_1887_;
goto v___jp_1851_;
}
else
{
lean_object* v___x_1888_; 
lean_dec_ref(v___x_1789_);
lean_dec_ref(v___x_1788_);
lean_dec_ref(v___x_1787_);
v___x_1888_ = lean_mk_empty_array_with_capacity(v___x_1785_);
v___y_1852_ = v___y_1872_;
v___y_1853_ = v___x_1876_;
v___y_1854_ = v___y_1873_;
v___y_1855_ = v___x_1888_;
goto v___jp_1851_;
}
}
v___jp_1889_:
{
lean_object* v___x_1890_; lean_object* v___x_1891_; 
v___x_1890_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__9));
v___x_1891_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__7, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__7);
if (lean_obj_tag(v_doc_x3f_1790_) == 1)
{
lean_object* v_val_1892_; lean_object* v___x_1893_; 
v_val_1892_ = lean_ctor_get(v_doc_x3f_1790_, 0);
lean_inc(v_val_1892_);
lean_dec_ref_known(v_doc_x3f_1790_, 1);
v___x_1893_ = l_Array_mkArray1___redArg(v_val_1892_);
v___y_1872_ = v___x_1891_;
v___y_1873_ = v___x_1890_;
v___y_1874_ = v___x_1893_;
goto v___jp_1871_;
}
else
{
lean_object* v___x_1894_; 
lean_dec(v_doc_x3f_1790_);
v___x_1894_ = lean_mk_empty_array_with_capacity(v___x_1785_);
v___y_1872_ = v___x_1891_;
v___y_1873_ = v___x_1890_;
v___y_1874_ = v___x_1894_;
goto v___jp_1871_;
}
}
}
}
else
{
lean_object* v_a_1907_; lean_object* v___x_1909_; uint8_t v_isShared_1910_; uint8_t v_isSharedCheck_1914_; 
lean_dec(v_kind_x3f_1791_);
lean_dec(v_doc_x3f_1790_);
lean_dec_ref(v___x_1789_);
lean_dec_ref(v___x_1788_);
lean_dec_ref(v___x_1787_);
lean_dec_ref(v___x_1784_);
lean_dec(v_cat_x3f_1783_);
lean_dec_ref(v___f_1782_);
lean_dec(v_expty_x3f_1781_);
lean_dec(v_attrKind_1780_);
lean_dec(v___x_1779_);
lean_dec(v___x_1778_);
v_a_1907_ = lean_ctor_get(v___x_1796_, 0);
v_isSharedCheck_1914_ = !lean_is_exclusive(v___x_1796_);
if (v_isSharedCheck_1914_ == 0)
{
v___x_1909_ = v___x_1796_;
v_isShared_1910_ = v_isSharedCheck_1914_;
goto v_resetjp_1908_;
}
else
{
lean_inc(v_a_1907_);
lean_dec(v___x_1796_);
v___x_1909_ = lean_box(0);
v_isShared_1910_ = v_isSharedCheck_1914_;
goto v_resetjp_1908_;
}
v_resetjp_1908_:
{
lean_object* v___x_1912_; 
if (v_isShared_1910_ == 0)
{
v___x_1912_ = v___x_1909_;
goto v_reusejp_1911_;
}
else
{
lean_object* v_reuseFailAlloc_1913_; 
v_reuseFailAlloc_1913_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1913_, 0, v_a_1907_);
v___x_1912_ = v_reuseFailAlloc_1913_;
goto v_reusejp_1911_;
}
v_reusejp_1911_:
{
return v___x_1912_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabElabRules___lam__1___boxed(lean_object** _args){
lean_object* v___x_1915_ = _args[0];
lean_object* v___x_1916_ = _args[1];
lean_object* v_attrKind_1917_ = _args[2];
lean_object* v_expty_x3f_1918_ = _args[3];
lean_object* v___f_1919_ = _args[4];
lean_object* v_cat_x3f_1920_ = _args[5];
lean_object* v___x_1921_ = _args[6];
lean_object* v___x_1922_ = _args[7];
lean_object* v_attrs_x3f_1923_ = _args[8];
lean_object* v___x_1924_ = _args[9];
lean_object* v___x_1925_ = _args[10];
lean_object* v___x_1926_ = _args[11];
lean_object* v_doc_x3f_1927_ = _args[12];
lean_object* v_kind_x3f_1928_ = _args[13];
lean_object* v_alts_1929_ = _args[14];
lean_object* v___y_1930_ = _args[15];
lean_object* v___y_1931_ = _args[16];
lean_object* v___y_1932_ = _args[17];
_start:
{
lean_object* v_res_1933_; 
v_res_1933_ = l_Lean_Elab_Command_elabElabRules___lam__1(v___x_1915_, v___x_1916_, v_attrKind_1917_, v_expty_x3f_1918_, v___f_1919_, v_cat_x3f_1920_, v___x_1921_, v___x_1922_, v_attrs_x3f_1923_, v___x_1924_, v___x_1925_, v___x_1926_, v_doc_x3f_1927_, v_kind_x3f_1928_, v_alts_1929_, v___y_1930_, v___y_1931_);
lean_dec(v___y_1931_);
lean_dec_ref(v___y_1930_);
lean_dec_ref(v_alts_1929_);
lean_dec(v_attrs_x3f_1923_);
lean_dec(v___x_1922_);
return v_res_1933_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabElabRules___lam__2(lean_object* v___f_1962_, lean_object* v_stx_1963_, lean_object* v___y_1964_, lean_object* v___y_1965_){
_start:
{
lean_object* v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; uint8_t v___x_1971_; 
v___x_1967_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__0));
v___x_1968_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__1));
v___x_1969_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRules___lam__2___closed__0));
v___x_1970_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRules___lam__2___closed__1));
lean_inc(v_stx_1963_);
v___x_1971_ = l_Lean_Syntax_isOfKind(v_stx_1963_, v___x_1970_);
if (v___x_1971_ == 0)
{
lean_object* v___x_1972_; 
lean_dec(v_stx_1963_);
lean_dec_ref(v___f_1962_);
v___x_1972_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabElabRulesAux_spec__2___redArg();
return v___x_1972_;
}
else
{
lean_object* v___x_1973_; lean_object* v___y_1975_; lean_object* v___y_1976_; lean_object* v___y_1977_; lean_object* v___y_1978_; lean_object* v___y_1979_; lean_object* v___y_1980_; lean_object* v_expty_x3f_1981_; lean_object* v___y_1982_; lean_object* v___y_1983_; lean_object* v___y_2006_; lean_object* v___y_2007_; lean_object* v___y_2008_; lean_object* v___y_2009_; lean_object* v___y_2010_; lean_object* v___y_2011_; lean_object* v___y_2012_; lean_object* v_cat_x3f_2013_; lean_object* v___y_2014_; lean_object* v___y_2015_; lean_object* v___y_2025_; lean_object* v___y_2026_; lean_object* v___y_2027_; lean_object* v___y_2028_; lean_object* v___y_2029_; lean_object* v___y_2030_; lean_object* v_expty_x3f_2031_; lean_object* v___y_2060_; lean_object* v___y_2061_; lean_object* v___y_2062_; lean_object* v___y_2063_; lean_object* v___y_2064_; lean_object* v_cat_x3f_2065_; lean_object* v___y_2066_; lean_object* v___y_2067_; lean_object* v___y_2077_; lean_object* v___y_2078_; lean_object* v___y_2079_; lean_object* v___y_2080_; lean_object* v_attrs_x3f_2081_; lean_object* v_doc_x3f_2112_; lean_object* v___y_2113_; lean_object* v___y_2114_; lean_object* v___x_2128_; uint8_t v___x_2129_; 
v___x_1973_ = lean_unsigned_to_nat(0u);
v___x_2128_ = l_Lean_Syntax_getArg(v_stx_1963_, v___x_1973_);
v___x_2129_ = l_Lean_Syntax_isNone(v___x_2128_);
if (v___x_2129_ == 0)
{
lean_object* v___x_2130_; uint8_t v___x_2131_; 
v___x_2130_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_2128_);
v___x_2131_ = l_Lean_Syntax_matchesNull(v___x_2128_, v___x_2130_);
if (v___x_2131_ == 0)
{
lean_object* v___x_2132_; 
lean_dec(v___x_2128_);
lean_dec(v_stx_1963_);
lean_dec_ref(v___f_1962_);
v___x_2132_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabElabRulesAux_spec__2___redArg();
return v___x_2132_;
}
else
{
lean_object* v_doc_x3f_2133_; 
v_doc_x3f_2133_ = l_Lean_Syntax_getArg(v___x_2128_, v___x_1973_);
lean_dec(v___x_2128_);
if (v___x_2129_ == 0)
{
lean_object* v___x_2136_; uint8_t v___x_2137_; 
v___x_2136_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRules___lam__2___closed__7));
lean_inc(v_doc_x3f_2133_);
v___x_2137_ = l_Lean_Syntax_isOfKind(v_doc_x3f_2133_, v___x_2136_);
if (v___x_2137_ == 0)
{
lean_object* v___x_2138_; 
lean_dec(v_doc_x3f_2133_);
lean_dec(v_stx_1963_);
lean_dec_ref(v___f_1962_);
v___x_2138_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabElabRulesAux_spec__2___redArg();
return v___x_2138_;
}
else
{
goto v___jp_2134_;
}
}
else
{
goto v___jp_2134_;
}
v___jp_2134_:
{
lean_object* v___x_2135_; 
v___x_2135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2135_, 0, v_doc_x3f_2133_);
v_doc_x3f_2112_ = v___x_2135_;
v___y_2113_ = v___y_1964_;
v___y_2114_ = v___y_1965_;
goto v___jp_2111_;
}
}
}
else
{
lean_object* v___x_2139_; 
lean_dec(v___x_2128_);
v___x_2139_ = lean_box(0);
v_doc_x3f_2112_ = v___x_2139_;
v___y_2113_ = v___y_1964_;
v___y_2114_ = v___y_1965_;
goto v___jp_2111_;
}
v___jp_1974_:
{
lean_object* v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; uint8_t v___x_1988_; 
v___x_1984_ = lean_unsigned_to_nat(7u);
v___x_1985_ = l_Lean_Syntax_getArg(v_stx_1963_, v___x_1984_);
lean_dec(v_stx_1963_);
v___x_1986_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__21));
lean_inc_ref(v___y_1979_);
v___x_1987_ = l_Lean_Name_mkStr4(v___x_1967_, v___x_1968_, v___y_1979_, v___x_1986_);
lean_inc(v___x_1985_);
v___x_1988_ = l_Lean_Syntax_isOfKind(v___x_1985_, v___x_1987_);
lean_dec(v___x_1987_);
if (v___x_1988_ == 0)
{
lean_object* v___x_1989_; 
lean_dec(v___x_1985_);
lean_dec(v_expty_x3f_1981_);
lean_dec(v___y_1980_);
lean_dec(v___y_1978_);
lean_dec(v___y_1977_);
lean_dec(v___y_1976_);
lean_dec(v___y_1975_);
v___x_1989_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabElabRulesAux_spec__2___redArg();
return v___x_1989_;
}
else
{
lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v_alts_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; 
v___x_1990_ = l_Lean_Syntax_getArg(v___x_1985_, v___x_1973_);
lean_dec(v___x_1985_);
v___x_1991_ = l_Lean_Syntax_getArgs(v___x_1990_);
lean_dec(v___x_1990_);
v_alts_1992_ = l_unsafeCast___redArg(v___x_1991_);
lean_dec_ref(v___x_1991_);
v___x_1993_ = l_Lean_TSyntax_getId(v___y_1977_);
lean_dec(v___y_1977_);
v___x_1994_ = l_Lean_Elab_Command_resolveSyntaxKind(v___x_1993_, v___y_1982_, v___y_1983_);
if (lean_obj_tag(v___x_1994_) == 0)
{
lean_object* v_a_1995_; lean_object* v___x_1996_; 
v_a_1995_ = lean_ctor_get(v___x_1994_, 0);
lean_inc(v_a_1995_);
lean_dec_ref_known(v___x_1994_, 1);
v___x_1996_ = l_Lean_Elab_Command_elabElabRulesAux(v___y_1978_, v___y_1980_, v___y_1975_, v_a_1995_, v___y_1976_, v_expty_x3f_1981_, v_alts_1992_, v___y_1982_, v___y_1983_);
lean_dec(v_alts_1992_);
lean_dec(v___y_1976_);
lean_dec(v___y_1980_);
return v___x_1996_;
}
else
{
lean_object* v_a_1997_; lean_object* v___x_1999_; uint8_t v_isShared_2000_; uint8_t v_isSharedCheck_2004_; 
lean_dec(v_alts_1992_);
lean_dec(v_expty_x3f_1981_);
lean_dec(v___y_1980_);
lean_dec(v___y_1978_);
lean_dec(v___y_1976_);
lean_dec(v___y_1975_);
v_a_1997_ = lean_ctor_get(v___x_1994_, 0);
v_isSharedCheck_2004_ = !lean_is_exclusive(v___x_1994_);
if (v_isSharedCheck_2004_ == 0)
{
v___x_1999_ = v___x_1994_;
v_isShared_2000_ = v_isSharedCheck_2004_;
goto v_resetjp_1998_;
}
else
{
lean_inc(v_a_1997_);
lean_dec(v___x_1994_);
v___x_1999_ = lean_box(0);
v_isShared_2000_ = v_isSharedCheck_2004_;
goto v_resetjp_1998_;
}
v_resetjp_1998_:
{
lean_object* v___x_2002_; 
if (v_isShared_2000_ == 0)
{
v___x_2002_ = v___x_1999_;
goto v_reusejp_2001_;
}
else
{
lean_object* v_reuseFailAlloc_2003_; 
v_reuseFailAlloc_2003_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2003_, 0, v_a_1997_);
v___x_2002_ = v_reuseFailAlloc_2003_;
goto v_reusejp_2001_;
}
v_reusejp_2001_:
{
return v___x_2002_;
}
}
}
}
}
v___jp_2005_:
{
lean_object* v___x_2016_; lean_object* v___x_2017_; uint8_t v___x_2018_; 
v___x_2016_ = lean_unsigned_to_nat(6u);
v___x_2017_ = l_Lean_Syntax_getArg(v_stx_1963_, v___x_2016_);
v___x_2018_ = l_Lean_Syntax_isNone(v___x_2017_);
if (v___x_2018_ == 0)
{
uint8_t v___x_2019_; 
lean_inc(v___x_2017_);
v___x_2019_ = l_Lean_Syntax_matchesNull(v___x_2017_, v___y_2006_);
if (v___x_2019_ == 0)
{
lean_object* v___x_2020_; 
lean_dec(v___x_2017_);
lean_dec(v_cat_x3f_2013_);
lean_dec(v___y_2012_);
lean_dec(v___y_2011_);
lean_dec(v___y_2009_);
lean_dec(v___y_2008_);
lean_dec(v_stx_1963_);
v___x_2020_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabElabRulesAux_spec__2___redArg();
return v___x_2020_;
}
else
{
lean_object* v_expty_x3f_2021_; lean_object* v___x_2022_; 
v_expty_x3f_2021_ = l_Lean_Syntax_getArg(v___x_2017_, v___y_2007_);
lean_dec(v___x_2017_);
v___x_2022_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2022_, 0, v_expty_x3f_2021_);
v___y_1975_ = v___y_2008_;
v___y_1976_ = v_cat_x3f_2013_;
v___y_1977_ = v___y_2009_;
v___y_1978_ = v___y_2011_;
v___y_1979_ = v___y_2010_;
v___y_1980_ = v___y_2012_;
v_expty_x3f_1981_ = v___x_2022_;
v___y_1982_ = v___y_2014_;
v___y_1983_ = v___y_2015_;
goto v___jp_1974_;
}
}
else
{
lean_object* v___x_2023_; 
lean_dec(v___x_2017_);
v___x_2023_ = lean_box(0);
v___y_1975_ = v___y_2008_;
v___y_1976_ = v_cat_x3f_2013_;
v___y_1977_ = v___y_2009_;
v___y_1978_ = v___y_2011_;
v___y_1979_ = v___y_2010_;
v___y_1980_ = v___y_2012_;
v_expty_x3f_1981_ = v___x_2023_;
v___y_1982_ = v___y_2014_;
v___y_1983_ = v___y_2015_;
goto v___jp_1974_;
}
}
v___jp_2024_:
{
lean_object* v___x_2032_; lean_object* v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; uint8_t v___x_2036_; 
v___x_2032_ = lean_unsigned_to_nat(7u);
v___x_2033_ = l_Lean_Syntax_getArg(v_stx_1963_, v___x_2032_);
lean_dec(v_stx_1963_);
v___x_2034_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__2));
v___x_2035_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRules___lam__2___closed__2));
lean_inc(v___x_2033_);
v___x_2036_ = l_Lean_Syntax_isOfKind(v___x_2033_, v___x_2035_);
if (v___x_2036_ == 0)
{
lean_object* v___x_2037_; 
lean_dec(v___x_2033_);
lean_dec(v_expty_x3f_2031_);
lean_dec(v___y_2029_);
lean_dec(v___y_2027_);
lean_dec(v___y_2026_);
lean_dec(v___y_2025_);
lean_dec_ref(v___f_1962_);
v___x_2037_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabElabRulesAux_spec__2___redArg();
return v___x_2037_;
}
else
{
lean_object* v___f_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v_alts_2041_; lean_object* v___x_2042_; 
v___f_2038_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabElabRules___lam__1___boxed), 18, 13);
lean_closure_set(v___f_2038_, 0, v___x_2035_);
lean_closure_set(v___f_2038_, 1, v___x_1970_);
lean_closure_set(v___f_2038_, 2, v___y_2029_);
lean_closure_set(v___f_2038_, 3, v_expty_x3f_2031_);
lean_closure_set(v___f_2038_, 4, v___f_1962_);
lean_closure_set(v___f_2038_, 5, v___y_2027_);
lean_closure_set(v___f_2038_, 6, v___x_1969_);
lean_closure_set(v___f_2038_, 7, v___x_1973_);
lean_closure_set(v___f_2038_, 8, v___y_2026_);
lean_closure_set(v___f_2038_, 9, v___x_1967_);
lean_closure_set(v___f_2038_, 10, v___x_1968_);
lean_closure_set(v___f_2038_, 11, v___x_2034_);
lean_closure_set(v___f_2038_, 12, v___y_2025_);
v___x_2039_ = l_Lean_Syntax_getArg(v___x_2033_, v___x_1973_);
lean_dec(v___x_2033_);
v___x_2040_ = l_Lean_Syntax_getArgs(v___x_2039_);
lean_dec(v___x_2039_);
v_alts_2041_ = l_unsafeCast___redArg(v___x_2040_);
lean_dec_ref(v___x_2040_);
v___x_2042_ = l_Lean_Elab_Command_expandNoKindMacroRulesAux(v_alts_2041_, v___x_1969_, v___f_2038_, v___y_2028_, v___y_2030_);
lean_dec(v_alts_2041_);
if (lean_obj_tag(v___x_2042_) == 0)
{
lean_object* v_a_2043_; lean_object* v___x_2045_; uint8_t v_isShared_2046_; uint8_t v_isSharedCheck_2050_; 
v_a_2043_ = lean_ctor_get(v___x_2042_, 0);
v_isSharedCheck_2050_ = !lean_is_exclusive(v___x_2042_);
if (v_isSharedCheck_2050_ == 0)
{
v___x_2045_ = v___x_2042_;
v_isShared_2046_ = v_isSharedCheck_2050_;
goto v_resetjp_2044_;
}
else
{
lean_inc(v_a_2043_);
lean_dec(v___x_2042_);
v___x_2045_ = lean_box(0);
v_isShared_2046_ = v_isSharedCheck_2050_;
goto v_resetjp_2044_;
}
v_resetjp_2044_:
{
lean_object* v___x_2048_; 
if (v_isShared_2046_ == 0)
{
v___x_2048_ = v___x_2045_;
goto v_reusejp_2047_;
}
else
{
lean_object* v_reuseFailAlloc_2049_; 
v_reuseFailAlloc_2049_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2049_, 0, v_a_2043_);
v___x_2048_ = v_reuseFailAlloc_2049_;
goto v_reusejp_2047_;
}
v_reusejp_2047_:
{
return v___x_2048_;
}
}
}
else
{
lean_object* v_a_2051_; lean_object* v___x_2053_; uint8_t v_isShared_2054_; uint8_t v_isSharedCheck_2058_; 
v_a_2051_ = lean_ctor_get(v___x_2042_, 0);
v_isSharedCheck_2058_ = !lean_is_exclusive(v___x_2042_);
if (v_isSharedCheck_2058_ == 0)
{
v___x_2053_ = v___x_2042_;
v_isShared_2054_ = v_isSharedCheck_2058_;
goto v_resetjp_2052_;
}
else
{
lean_inc(v_a_2051_);
lean_dec(v___x_2042_);
v___x_2053_ = lean_box(0);
v_isShared_2054_ = v_isSharedCheck_2058_;
goto v_resetjp_2052_;
}
v_resetjp_2052_:
{
lean_object* v___x_2056_; 
if (v_isShared_2054_ == 0)
{
v___x_2056_ = v___x_2053_;
goto v_reusejp_2055_;
}
else
{
lean_object* v_reuseFailAlloc_2057_; 
v_reuseFailAlloc_2057_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2057_, 0, v_a_2051_);
v___x_2056_ = v_reuseFailAlloc_2057_;
goto v_reusejp_2055_;
}
v_reusejp_2055_:
{
return v___x_2056_;
}
}
}
}
}
v___jp_2059_:
{
lean_object* v___x_2068_; lean_object* v___x_2069_; uint8_t v___x_2070_; 
v___x_2068_ = lean_unsigned_to_nat(6u);
v___x_2069_ = l_Lean_Syntax_getArg(v_stx_1963_, v___x_2068_);
v___x_2070_ = l_Lean_Syntax_isNone(v___x_2069_);
if (v___x_2070_ == 0)
{
uint8_t v___x_2071_; 
lean_inc(v___x_2069_);
v___x_2071_ = l_Lean_Syntax_matchesNull(v___x_2069_, v___y_2063_);
if (v___x_2071_ == 0)
{
lean_object* v___x_2072_; 
lean_dec(v___x_2069_);
lean_dec(v_cat_x3f_2065_);
lean_dec(v___y_2062_);
lean_dec(v___y_2061_);
lean_dec(v___y_2060_);
lean_dec(v_stx_1963_);
lean_dec_ref(v___f_1962_);
v___x_2072_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabElabRulesAux_spec__2___redArg();
return v___x_2072_;
}
else
{
lean_object* v_expty_x3f_2073_; lean_object* v___x_2074_; 
v_expty_x3f_2073_ = l_Lean_Syntax_getArg(v___x_2069_, v___y_2064_);
lean_dec(v___x_2069_);
v___x_2074_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2074_, 0, v_expty_x3f_2073_);
v___y_2025_ = v___y_2061_;
v___y_2026_ = v___y_2060_;
v___y_2027_ = v_cat_x3f_2065_;
v___y_2028_ = v___y_2066_;
v___y_2029_ = v___y_2062_;
v___y_2030_ = v___y_2067_;
v_expty_x3f_2031_ = v___x_2074_;
goto v___jp_2024_;
}
}
else
{
lean_object* v___x_2075_; 
lean_dec(v___x_2069_);
v___x_2075_ = lean_box(0);
v___y_2025_ = v___y_2061_;
v___y_2026_ = v___y_2060_;
v___y_2027_ = v_cat_x3f_2065_;
v___y_2028_ = v___y_2066_;
v___y_2029_ = v___y_2062_;
v___y_2030_ = v___y_2067_;
v_expty_x3f_2031_ = v___x_2075_;
goto v___jp_2024_;
}
}
v___jp_2076_:
{
lean_object* v___x_2082_; lean_object* v_attrKind_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; uint8_t v___x_2086_; 
v___x_2082_ = lean_unsigned_to_nat(2u);
v_attrKind_2083_ = l_Lean_Syntax_getArg(v_stx_1963_, v___x_2082_);
v___x_2084_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__2));
v___x_2085_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRules___lam__2___closed__4));
lean_inc(v_attrKind_2083_);
v___x_2086_ = l_Lean_Syntax_isOfKind(v_attrKind_2083_, v___x_2085_);
if (v___x_2086_ == 0)
{
lean_object* v___x_2087_; 
lean_dec(v_attrKind_2083_);
lean_dec(v_attrs_x3f_2081_);
lean_dec(v___y_2078_);
lean_dec(v_stx_1963_);
lean_dec_ref(v___f_1962_);
v___x_2087_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabElabRulesAux_spec__2___redArg();
return v___x_2087_;
}
else
{
lean_object* v___x_2088_; lean_object* v___x_2089_; uint8_t v___x_2090_; 
v___x_2088_ = lean_unsigned_to_nat(4u);
v___x_2089_ = l_Lean_Syntax_getArg(v_stx_1963_, v___x_2088_);
lean_inc(v___x_2089_);
v___x_2090_ = l_Lean_Syntax_matchesNull(v___x_2089_, v___x_1973_);
if (v___x_2090_ == 0)
{
lean_object* v___x_2091_; uint8_t v___x_2092_; 
lean_dec_ref(v___f_1962_);
v___x_2091_ = lean_unsigned_to_nat(5u);
lean_inc(v___x_2089_);
v___x_2092_ = l_Lean_Syntax_matchesNull(v___x_2089_, v___x_2091_);
if (v___x_2092_ == 0)
{
lean_object* v___x_2093_; 
lean_dec(v___x_2089_);
lean_dec(v_attrKind_2083_);
lean_dec(v_attrs_x3f_2081_);
lean_dec(v___y_2078_);
lean_dec(v_stx_1963_);
v___x_2093_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabElabRulesAux_spec__2___redArg();
return v___x_2093_;
}
else
{
lean_object* v___x_2094_; lean_object* v_kind_2095_; lean_object* v___x_2096_; uint8_t v___x_2097_; 
v___x_2094_ = lean_unsigned_to_nat(3u);
v_kind_2095_ = l_Lean_Syntax_getArg(v___x_2089_, v___x_2094_);
lean_dec(v___x_2089_);
v___x_2096_ = l_Lean_Syntax_getArg(v_stx_1963_, v___x_2091_);
v___x_2097_ = l_Lean_Syntax_isNone(v___x_2096_);
if (v___x_2097_ == 0)
{
uint8_t v___x_2098_; 
lean_inc(v___x_2096_);
v___x_2098_ = l_Lean_Syntax_matchesNull(v___x_2096_, v___x_2082_);
if (v___x_2098_ == 0)
{
lean_object* v___x_2099_; 
lean_dec(v___x_2096_);
lean_dec(v_kind_2095_);
lean_dec(v_attrKind_2083_);
lean_dec(v_attrs_x3f_2081_);
lean_dec(v___y_2078_);
lean_dec(v_stx_1963_);
v___x_2099_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabElabRulesAux_spec__2___redArg();
return v___x_2099_;
}
else
{
lean_object* v_cat_x3f_2100_; lean_object* v___x_2101_; 
v_cat_x3f_2100_ = l_Lean_Syntax_getArg(v___x_2096_, v___y_2080_);
lean_dec(v___x_2096_);
v___x_2101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2101_, 0, v_cat_x3f_2100_);
v___y_2006_ = v___x_2082_;
v___y_2007_ = v___y_2080_;
v___y_2008_ = v_attrKind_2083_;
v___y_2009_ = v_kind_2095_;
v___y_2010_ = v___x_2084_;
v___y_2011_ = v___y_2078_;
v___y_2012_ = v_attrs_x3f_2081_;
v_cat_x3f_2013_ = v___x_2101_;
v___y_2014_ = v___y_2077_;
v___y_2015_ = v___y_2079_;
goto v___jp_2005_;
}
}
else
{
lean_object* v___x_2102_; 
lean_dec(v___x_2096_);
v___x_2102_ = lean_box(0);
v___y_2006_ = v___x_2082_;
v___y_2007_ = v___y_2080_;
v___y_2008_ = v_attrKind_2083_;
v___y_2009_ = v_kind_2095_;
v___y_2010_ = v___x_2084_;
v___y_2011_ = v___y_2078_;
v___y_2012_ = v_attrs_x3f_2081_;
v_cat_x3f_2013_ = v___x_2102_;
v___y_2014_ = v___y_2077_;
v___y_2015_ = v___y_2079_;
goto v___jp_2005_;
}
}
}
else
{
lean_object* v___x_2103_; lean_object* v___x_2104_; uint8_t v___x_2105_; 
lean_dec(v___x_2089_);
v___x_2103_ = lean_unsigned_to_nat(5u);
v___x_2104_ = l_Lean_Syntax_getArg(v_stx_1963_, v___x_2103_);
v___x_2105_ = l_Lean_Syntax_isNone(v___x_2104_);
if (v___x_2105_ == 0)
{
uint8_t v___x_2106_; 
lean_inc(v___x_2104_);
v___x_2106_ = l_Lean_Syntax_matchesNull(v___x_2104_, v___x_2082_);
if (v___x_2106_ == 0)
{
lean_object* v___x_2107_; 
lean_dec(v___x_2104_);
lean_dec(v_attrKind_2083_);
lean_dec(v_attrs_x3f_2081_);
lean_dec(v___y_2078_);
lean_dec(v_stx_1963_);
lean_dec_ref(v___f_1962_);
v___x_2107_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabElabRulesAux_spec__2___redArg();
return v___x_2107_;
}
else
{
lean_object* v_cat_x3f_2108_; lean_object* v___x_2109_; 
v_cat_x3f_2108_ = l_Lean_Syntax_getArg(v___x_2104_, v___y_2080_);
lean_dec(v___x_2104_);
v___x_2109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2109_, 0, v_cat_x3f_2108_);
v___y_2060_ = v_attrs_x3f_2081_;
v___y_2061_ = v___y_2078_;
v___y_2062_ = v_attrKind_2083_;
v___y_2063_ = v___x_2082_;
v___y_2064_ = v___y_2080_;
v_cat_x3f_2065_ = v___x_2109_;
v___y_2066_ = v___y_2077_;
v___y_2067_ = v___y_2079_;
goto v___jp_2059_;
}
}
else
{
lean_object* v___x_2110_; 
lean_dec(v___x_2104_);
v___x_2110_ = lean_box(0);
v___y_2060_ = v_attrs_x3f_2081_;
v___y_2061_ = v___y_2078_;
v___y_2062_ = v_attrKind_2083_;
v___y_2063_ = v___x_2082_;
v___y_2064_ = v___y_2080_;
v_cat_x3f_2065_ = v___x_2110_;
v___y_2066_ = v___y_2077_;
v___y_2067_ = v___y_2079_;
goto v___jp_2059_;
}
}
}
}
v___jp_2111_:
{
lean_object* v___x_2115_; lean_object* v___x_2116_; uint8_t v___x_2117_; 
v___x_2115_ = lean_unsigned_to_nat(1u);
v___x_2116_ = l_Lean_Syntax_getArg(v_stx_1963_, v___x_2115_);
v___x_2117_ = l_Lean_Syntax_isNone(v___x_2116_);
if (v___x_2117_ == 0)
{
uint8_t v___x_2118_; 
lean_inc(v___x_2116_);
v___x_2118_ = l_Lean_Syntax_matchesNull(v___x_2116_, v___x_2115_);
if (v___x_2118_ == 0)
{
lean_object* v___x_2119_; 
lean_dec(v___x_2116_);
lean_dec(v_doc_x3f_2112_);
lean_dec(v_stx_1963_);
lean_dec_ref(v___f_1962_);
v___x_2119_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabElabRulesAux_spec__2___redArg();
return v___x_2119_;
}
else
{
lean_object* v___x_2120_; lean_object* v___x_2121_; uint8_t v___x_2122_; 
v___x_2120_ = l_Lean_Syntax_getArg(v___x_2116_, v___x_1973_);
lean_dec(v___x_2116_);
v___x_2121_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRules___lam__2___closed__5));
lean_inc(v___x_2120_);
v___x_2122_ = l_Lean_Syntax_isOfKind(v___x_2120_, v___x_2121_);
if (v___x_2122_ == 0)
{
lean_object* v___x_2123_; 
lean_dec(v___x_2120_);
lean_dec(v_doc_x3f_2112_);
lean_dec(v_stx_1963_);
lean_dec_ref(v___f_1962_);
v___x_2123_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabElabRulesAux_spec__2___redArg();
return v___x_2123_;
}
else
{
lean_object* v___x_2124_; lean_object* v_attrs_x3f_2125_; lean_object* v___x_2126_; 
v___x_2124_ = l_Lean_Syntax_getArg(v___x_2120_, v___x_2115_);
lean_dec(v___x_2120_);
v_attrs_x3f_2125_ = l_Lean_Syntax_getArgs(v___x_2124_);
lean_dec(v___x_2124_);
v___x_2126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2126_, 0, v_attrs_x3f_2125_);
v___y_2077_ = v___y_2113_;
v___y_2078_ = v_doc_x3f_2112_;
v___y_2079_ = v___y_2114_;
v___y_2080_ = v___x_2115_;
v_attrs_x3f_2081_ = v___x_2126_;
goto v___jp_2076_;
}
}
}
else
{
lean_object* v___x_2127_; 
lean_dec(v___x_2116_);
v___x_2127_ = lean_box(0);
v___y_2077_ = v___y_2113_;
v___y_2078_ = v_doc_x3f_2112_;
v___y_2079_ = v___y_2114_;
v___y_2080_ = v___x_2115_;
v_attrs_x3f_2081_ = v___x_2127_;
goto v___jp_2076_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabElabRules___lam__2___boxed(lean_object* v___f_2140_, lean_object* v_stx_2141_, lean_object* v___y_2142_, lean_object* v___y_2143_, lean_object* v___y_2144_){
_start:
{
lean_object* v_res_2145_; 
v_res_2145_ = l_Lean_Elab_Command_elabElabRules___lam__2(v___f_2140_, v_stx_2141_, v___y_2142_, v___y_2143_);
lean_dec(v___y_2143_);
lean_dec_ref(v___y_2142_);
return v_res_2145_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabElabRules(lean_object* v_a_2149_, lean_object* v_a_2150_, lean_object* v_a_2151_){
_start:
{
lean_object* v___f_2153_; lean_object* v___x_2154_; 
v___f_2153_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRules___closed__1));
v___x_2154_ = l_Lean_Elab_Command_adaptExpander(v___f_2153_, v_a_2149_, v_a_2150_, v_a_2151_);
return v___x_2154_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabElabRules___boxed(lean_object* v_a_2155_, lean_object* v_a_2156_, lean_object* v_a_2157_, lean_object* v_a_2158_){
_start:
{
lean_object* v_res_2159_; 
v_res_2159_ = l_Lean_Elab_Command_elabElabRules(v_a_2155_, v_a_2156_, v_a_2157_);
lean_dec(v_a_2157_);
lean_dec_ref(v_a_2156_);
return v_res_2159_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElabRules___regBuiltin_Lean_Elab_Command_elabElabRules__1(){
_start:
{
lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; 
v___x_2167_ = l_Lean_Elab_Command_commandElabAttribute;
v___x_2168_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRules___lam__2___closed__1));
v___x_2169_ = ((lean_object*)(l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElabRules___regBuiltin_Lean_Elab_Command_elabElabRules__1___closed__1));
v___x_2170_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabElabRules___boxed), 4, 0);
v___x_2171_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2167_, v___x_2168_, v___x_2169_, v___x_2170_);
return v___x_2171_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElabRules___regBuiltin_Lean_Elab_Command_elabElabRules__1___boxed(lean_object* v_a_2172_){
_start:
{
lean_object* v_res_2173_; 
v_res_2173_ = l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElabRules___regBuiltin_Lean_Elab_Command_elabElabRules__1();
return v_res_2173_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElabRules___regBuiltin_Lean_Elab_Command_elabElabRules_declRange__3(){
_start:
{
lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; 
v___x_2200_ = ((lean_object*)(l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElabRules___regBuiltin_Lean_Elab_Command_elabElabRules__1___closed__1));
v___x_2201_ = ((lean_object*)(l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElabRules___regBuiltin_Lean_Elab_Command_elabElabRules_declRange__3___closed__6));
v___x_2202_ = l_Lean_addBuiltinDeclarationRanges(v___x_2200_, v___x_2201_);
return v___x_2202_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElabRules___regBuiltin_Lean_Elab_Command_elabElabRules_declRange__3___boxed(lean_object* v_a_2203_){
_start:
{
lean_object* v_res_2204_; 
v_res_2204_ = l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElabRules___regBuiltin_Lean_Elab_Command_elabElabRules_declRange__3();
return v_res_2204_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElab_spec__2(size_t v_sz_2205_, size_t v_i_2206_, lean_object* v_bs_2207_){
_start:
{
uint8_t v___x_2208_; 
v___x_2208_ = lean_usize_dec_lt(v_i_2206_, v_sz_2205_);
if (v___x_2208_ == 0)
{
lean_object* v___x_2209_; 
v___x_2209_ = l_unsafeCast___redArg(v_bs_2207_);
lean_dec_ref(v_bs_2207_);
return v___x_2209_;
}
else
{
lean_object* v_v_2210_; lean_object* v___x_2211_; lean_object* v_bs_x27_2212_; lean_object* v___x_2213_; size_t v___x_2214_; size_t v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; 
v_v_2210_ = lean_array_uget(v_bs_2207_, v_i_2206_);
v___x_2211_ = lean_unsigned_to_nat(0u);
v_bs_x27_2212_ = lean_array_uset(v_bs_2207_, v_i_2206_, v___x_2211_);
v___x_2213_ = l_unsafeCast___redArg(v_v_2210_);
lean_dec(v_v_2210_);
v___x_2214_ = ((size_t)1ULL);
v___x_2215_ = lean_usize_add(v_i_2206_, v___x_2214_);
v___x_2216_ = l_unsafeCast___redArg(v___x_2213_);
lean_dec(v___x_2213_);
v___x_2217_ = lean_array_uset(v_bs_x27_2212_, v_i_2206_, v___x_2216_);
v_i_2206_ = v___x_2215_;
v_bs_2207_ = v___x_2217_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElab_spec__2___boxed(lean_object* v_sz_2219_, lean_object* v_i_2220_, lean_object* v_bs_2221_){
_start:
{
size_t v_sz_boxed_2222_; size_t v_i_boxed_2223_; lean_object* v_res_2224_; 
v_sz_boxed_2222_ = lean_unbox_usize(v_sz_2219_);
lean_dec(v_sz_2219_);
v_i_boxed_2223_ = lean_unbox_usize(v_i_2220_);
lean_dec(v_i_2220_);
v_res_2224_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElab_spec__2(v_sz_boxed_2222_, v_i_boxed_2223_, v_bs_2221_);
return v_res_2224_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElab_spec__1(size_t v_sz_2225_, size_t v_i_2226_, lean_object* v_bs_2227_, lean_object* v___y_2228_, lean_object* v___y_2229_){
_start:
{
uint8_t v___x_2231_; 
v___x_2231_ = lean_usize_dec_lt(v_i_2226_, v_sz_2225_);
if (v___x_2231_ == 0)
{
lean_object* v___x_2232_; lean_object* v___x_2233_; 
v___x_2232_ = l_unsafeCast___redArg(v_bs_2227_);
lean_dec_ref(v_bs_2227_);
v___x_2233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2233_, 0, v___x_2232_);
return v___x_2233_;
}
else
{
lean_object* v_v_2234_; lean_object* v___x_2235_; lean_object* v_bs_x27_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; 
v_v_2234_ = lean_array_uget(v_bs_2227_, v_i_2226_);
v___x_2235_ = lean_unsigned_to_nat(0u);
v_bs_x27_2236_ = lean_array_uset(v_bs_2227_, v_i_2226_, v___x_2235_);
v___x_2237_ = l_unsafeCast___redArg(v_v_2234_);
lean_dec(v_v_2234_);
v___x_2238_ = l_Lean_Elab_Command_expandMacroArg(v___x_2237_, v___y_2228_, v___y_2229_);
if (lean_obj_tag(v___x_2238_) == 0)
{
lean_object* v_a_2239_; size_t v___x_2240_; size_t v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; 
v_a_2239_ = lean_ctor_get(v___x_2238_, 0);
lean_inc(v_a_2239_);
lean_dec_ref_known(v___x_2238_, 1);
v___x_2240_ = ((size_t)1ULL);
v___x_2241_ = lean_usize_add(v_i_2226_, v___x_2240_);
v___x_2242_ = l_unsafeCast___redArg(v_a_2239_);
lean_dec(v_a_2239_);
v___x_2243_ = lean_array_uset(v_bs_x27_2236_, v_i_2226_, v___x_2242_);
v_i_2226_ = v___x_2241_;
v_bs_2227_ = v___x_2243_;
goto _start;
}
else
{
lean_object* v_a_2245_; lean_object* v___x_2247_; uint8_t v_isShared_2248_; uint8_t v_isSharedCheck_2252_; 
lean_dec_ref(v_bs_x27_2236_);
v_a_2245_ = lean_ctor_get(v___x_2238_, 0);
v_isSharedCheck_2252_ = !lean_is_exclusive(v___x_2238_);
if (v_isSharedCheck_2252_ == 0)
{
v___x_2247_ = v___x_2238_;
v_isShared_2248_ = v_isSharedCheck_2252_;
goto v_resetjp_2246_;
}
else
{
lean_inc(v_a_2245_);
lean_dec(v___x_2238_);
v___x_2247_ = lean_box(0);
v_isShared_2248_ = v_isSharedCheck_2252_;
goto v_resetjp_2246_;
}
v_resetjp_2246_:
{
lean_object* v___x_2250_; 
if (v_isShared_2248_ == 0)
{
v___x_2250_ = v___x_2247_;
goto v_reusejp_2249_;
}
else
{
lean_object* v_reuseFailAlloc_2251_; 
v_reuseFailAlloc_2251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2251_, 0, v_a_2245_);
v___x_2250_ = v_reuseFailAlloc_2251_;
goto v_reusejp_2249_;
}
v_reusejp_2249_:
{
return v___x_2250_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElab_spec__1___boxed(lean_object* v_sz_2253_, lean_object* v_i_2254_, lean_object* v_bs_2255_, lean_object* v___y_2256_, lean_object* v___y_2257_, lean_object* v___y_2258_){
_start:
{
size_t v_sz_boxed_2259_; size_t v_i_boxed_2260_; lean_object* v_res_2261_; 
v_sz_boxed_2259_ = lean_unbox_usize(v_sz_2253_);
lean_dec(v_sz_2253_);
v_i_boxed_2260_ = lean_unbox_usize(v_i_2254_);
lean_dec(v_i_2254_);
v_res_2261_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElab_spec__1(v_sz_boxed_2259_, v_i_boxed_2260_, v_bs_2255_, v___y_2256_, v___y_2257_);
lean_dec(v___y_2257_);
lean_dec_ref(v___y_2256_);
return v_res_2261_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3_spec__7_spec__10_spec__13___redArg(lean_object* v_keys_2262_, lean_object* v_i_2263_, lean_object* v_k_2264_){
_start:
{
lean_object* v___x_2265_; uint8_t v___x_2266_; 
v___x_2265_ = lean_array_get_size(v_keys_2262_);
v___x_2266_ = lean_nat_dec_lt(v_i_2263_, v___x_2265_);
if (v___x_2266_ == 0)
{
lean_dec(v_i_2263_);
return v___x_2266_;
}
else
{
lean_object* v_k_x27_2267_; uint8_t v___x_2268_; 
v_k_x27_2267_ = lean_array_fget_borrowed(v_keys_2262_, v_i_2263_);
v___x_2268_ = l_Lean_instBEqExtraModUse_beq(v_k_2264_, v_k_x27_2267_);
if (v___x_2268_ == 0)
{
lean_object* v___x_2269_; lean_object* v___x_2270_; 
v___x_2269_ = lean_unsigned_to_nat(1u);
v___x_2270_ = lean_nat_add(v_i_2263_, v___x_2269_);
lean_dec(v_i_2263_);
v_i_2263_ = v___x_2270_;
goto _start;
}
else
{
lean_dec(v_i_2263_);
return v___x_2266_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3_spec__7_spec__10_spec__13___redArg___boxed(lean_object* v_keys_2272_, lean_object* v_i_2273_, lean_object* v_k_2274_){
_start:
{
uint8_t v_res_2275_; lean_object* v_r_2276_; 
v_res_2275_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3_spec__7_spec__10_spec__13___redArg(v_keys_2272_, v_i_2273_, v_k_2274_);
lean_dec_ref(v_k_2274_);
lean_dec_ref(v_keys_2272_);
v_r_2276_ = lean_box(v_res_2275_);
return v_r_2276_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3_spec__7_spec__10___redArg(lean_object* v_x_2277_, size_t v_x_2278_, lean_object* v_x_2279_){
_start:
{
if (lean_obj_tag(v_x_2277_) == 0)
{
lean_object* v_es_2280_; lean_object* v___x_2281_; size_t v___x_2282_; size_t v___x_2283_; lean_object* v_j_2284_; lean_object* v___x_2285_; 
v_es_2280_ = lean_ctor_get(v_x_2277_, 0);
v___x_2281_ = lean_box(2);
v___x_2282_ = ((size_t)31ULL);
v___x_2283_ = lean_usize_land(v_x_2278_, v___x_2282_);
v_j_2284_ = lean_usize_to_nat(v___x_2283_);
v___x_2285_ = lean_array_get_borrowed(v___x_2281_, v_es_2280_, v_j_2284_);
lean_dec(v_j_2284_);
switch(lean_obj_tag(v___x_2285_))
{
case 0:
{
lean_object* v_key_2286_; uint8_t v___x_2287_; 
v_key_2286_ = lean_ctor_get(v___x_2285_, 0);
v___x_2287_ = l_Lean_instBEqExtraModUse_beq(v_x_2279_, v_key_2286_);
return v___x_2287_;
}
case 1:
{
lean_object* v_node_2288_; size_t v___x_2289_; size_t v___x_2290_; 
v_node_2288_ = lean_ctor_get(v___x_2285_, 0);
v___x_2289_ = ((size_t)5ULL);
v___x_2290_ = lean_usize_shift_right(v_x_2278_, v___x_2289_);
v_x_2277_ = v_node_2288_;
v_x_2278_ = v___x_2290_;
goto _start;
}
default: 
{
uint8_t v___x_2292_; 
v___x_2292_ = 0;
return v___x_2292_;
}
}
}
else
{
lean_object* v_ks_2293_; lean_object* v___x_2294_; uint8_t v___x_2295_; 
v_ks_2293_ = lean_ctor_get(v_x_2277_, 0);
v___x_2294_ = lean_unsigned_to_nat(0u);
v___x_2295_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3_spec__7_spec__10_spec__13___redArg(v_ks_2293_, v___x_2294_, v_x_2279_);
return v___x_2295_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3_spec__7_spec__10___redArg___boxed(lean_object* v_x_2296_, lean_object* v_x_2297_, lean_object* v_x_2298_){
_start:
{
size_t v_x_16589__boxed_2299_; uint8_t v_res_2300_; lean_object* v_r_2301_; 
v_x_16589__boxed_2299_ = lean_unbox_usize(v_x_2297_);
lean_dec(v_x_2297_);
v_res_2300_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3_spec__7_spec__10___redArg(v_x_2296_, v_x_16589__boxed_2299_, v_x_2298_);
lean_dec_ref(v_x_2298_);
lean_dec_ref(v_x_2296_);
v_r_2301_ = lean_box(v_res_2300_);
return v_r_2301_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3_spec__7___redArg(lean_object* v_x_2302_, lean_object* v_x_2303_){
_start:
{
uint64_t v___x_2304_; size_t v___x_2305_; uint8_t v___x_2306_; 
v___x_2304_ = l_Lean_instHashableExtraModUse_hash(v_x_2303_);
v___x_2305_ = lean_uint64_to_usize(v___x_2304_);
v___x_2306_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3_spec__7_spec__10___redArg(v_x_2302_, v___x_2305_, v_x_2303_);
return v___x_2306_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3_spec__7___redArg___boxed(lean_object* v_x_2307_, lean_object* v_x_2308_){
_start:
{
uint8_t v_res_2309_; lean_object* v_r_2310_; 
v_res_2309_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3_spec__7___redArg(v_x_2307_, v_x_2308_);
lean_dec_ref(v_x_2308_);
lean_dec_ref(v_x_2307_);
v_r_2310_ = lean_box(v_res_2309_);
return v_r_2310_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_2311_; double v___x_2312_; 
v___x_2311_ = lean_unsigned_to_nat(0u);
v___x_2312_ = lean_float_of_nat(v___x_2311_);
return v___x_2312_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__0(lean_object* v_cls_2316_, lean_object* v_msg_2317_, lean_object* v___y_2318_, lean_object* v___y_2319_){
_start:
{
lean_object* v___x_2321_; 
v___x_2321_ = l_Lean_Elab_Command_getRef___redArg(v___y_2318_);
if (lean_obj_tag(v___x_2321_) == 0)
{
lean_object* v_a_2322_; lean_object* v___x_2323_; lean_object* v_a_2324_; lean_object* v___x_2326_; uint8_t v_isShared_2327_; uint8_t v_isSharedCheck_2372_; 
v_a_2322_ = lean_ctor_get(v___x_2321_, 0);
lean_inc(v_a_2322_);
lean_dec_ref_known(v___x_2321_, 1);
v___x_2323_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_elabElabRulesAux_spec__6_spec__6___redArg(v_msg_2317_, v___y_2319_);
v_a_2324_ = lean_ctor_get(v___x_2323_, 0);
v_isSharedCheck_2372_ = !lean_is_exclusive(v___x_2323_);
if (v_isSharedCheck_2372_ == 0)
{
v___x_2326_ = v___x_2323_;
v_isShared_2327_ = v_isSharedCheck_2372_;
goto v_resetjp_2325_;
}
else
{
lean_inc(v_a_2324_);
lean_dec(v___x_2323_);
v___x_2326_ = lean_box(0);
v_isShared_2327_ = v_isSharedCheck_2372_;
goto v_resetjp_2325_;
}
v_resetjp_2325_:
{
lean_object* v___x_2328_; lean_object* v_traceState_2329_; lean_object* v_env_2330_; lean_object* v_messages_2331_; lean_object* v_scopes_2332_; lean_object* v_usedQuotCtxts_2333_; lean_object* v_nextMacroScope_2334_; lean_object* v_maxRecDepth_2335_; lean_object* v_ngen_2336_; lean_object* v_auxDeclNGen_2337_; lean_object* v_infoState_2338_; lean_object* v_snapshotTasks_2339_; lean_object* v_prevLinterStates_2340_; lean_object* v_codeQualityEntryTasks_2341_; lean_object* v___x_2343_; uint8_t v_isShared_2344_; uint8_t v_isSharedCheck_2371_; 
v___x_2328_ = lean_st_ref_take(v___y_2319_);
v_traceState_2329_ = lean_ctor_get(v___x_2328_, 9);
v_env_2330_ = lean_ctor_get(v___x_2328_, 0);
v_messages_2331_ = lean_ctor_get(v___x_2328_, 1);
v_scopes_2332_ = lean_ctor_get(v___x_2328_, 2);
v_usedQuotCtxts_2333_ = lean_ctor_get(v___x_2328_, 3);
v_nextMacroScope_2334_ = lean_ctor_get(v___x_2328_, 4);
v_maxRecDepth_2335_ = lean_ctor_get(v___x_2328_, 5);
v_ngen_2336_ = lean_ctor_get(v___x_2328_, 6);
v_auxDeclNGen_2337_ = lean_ctor_get(v___x_2328_, 7);
v_infoState_2338_ = lean_ctor_get(v___x_2328_, 8);
v_snapshotTasks_2339_ = lean_ctor_get(v___x_2328_, 10);
v_prevLinterStates_2340_ = lean_ctor_get(v___x_2328_, 11);
v_codeQualityEntryTasks_2341_ = lean_ctor_get(v___x_2328_, 12);
v_isSharedCheck_2371_ = !lean_is_exclusive(v___x_2328_);
if (v_isSharedCheck_2371_ == 0)
{
v___x_2343_ = v___x_2328_;
v_isShared_2344_ = v_isSharedCheck_2371_;
goto v_resetjp_2342_;
}
else
{
lean_inc(v_codeQualityEntryTasks_2341_);
lean_inc(v_prevLinterStates_2340_);
lean_inc(v_snapshotTasks_2339_);
lean_inc(v_traceState_2329_);
lean_inc(v_infoState_2338_);
lean_inc(v_auxDeclNGen_2337_);
lean_inc(v_ngen_2336_);
lean_inc(v_maxRecDepth_2335_);
lean_inc(v_nextMacroScope_2334_);
lean_inc(v_usedQuotCtxts_2333_);
lean_inc(v_scopes_2332_);
lean_inc(v_messages_2331_);
lean_inc(v_env_2330_);
lean_dec(v___x_2328_);
v___x_2343_ = lean_box(0);
v_isShared_2344_ = v_isSharedCheck_2371_;
goto v_resetjp_2342_;
}
v_resetjp_2342_:
{
uint64_t v_tid_2345_; lean_object* v_traces_2346_; lean_object* v___x_2348_; uint8_t v_isShared_2349_; uint8_t v_isSharedCheck_2370_; 
v_tid_2345_ = lean_ctor_get_uint64(v_traceState_2329_, sizeof(void*)*1);
v_traces_2346_ = lean_ctor_get(v_traceState_2329_, 0);
v_isSharedCheck_2370_ = !lean_is_exclusive(v_traceState_2329_);
if (v_isSharedCheck_2370_ == 0)
{
v___x_2348_ = v_traceState_2329_;
v_isShared_2349_ = v_isSharedCheck_2370_;
goto v_resetjp_2347_;
}
else
{
lean_inc(v_traces_2346_);
lean_dec(v_traceState_2329_);
v___x_2348_ = lean_box(0);
v_isShared_2349_ = v_isSharedCheck_2370_;
goto v_resetjp_2347_;
}
v_resetjp_2347_:
{
lean_object* v___x_2350_; lean_object* v___x_2351_; double v___x_2352_; uint8_t v___x_2353_; lean_object* v___x_2354_; lean_object* v___x_2355_; lean_object* v___x_2356_; lean_object* v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2361_; 
v___x_2350_ = lean_box(0);
v___x_2351_ = lean_box(0);
v___x_2352_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__0___closed__0, &l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__0___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__0___closed__0);
v___x_2353_ = 0;
v___x_2354_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__0___closed__1));
v___x_2355_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2355_, 0, v_cls_2316_);
lean_ctor_set(v___x_2355_, 1, v___x_2351_);
lean_ctor_set(v___x_2355_, 2, v___x_2354_);
lean_ctor_set_float(v___x_2355_, sizeof(void*)*3, v___x_2352_);
lean_ctor_set_float(v___x_2355_, sizeof(void*)*3 + 8, v___x_2352_);
lean_ctor_set_uint8(v___x_2355_, sizeof(void*)*3 + 16, v___x_2353_);
v___x_2356_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__0___closed__2));
v___x_2357_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2357_, 0, v___x_2355_);
lean_ctor_set(v___x_2357_, 1, v_a_2324_);
lean_ctor_set(v___x_2357_, 2, v___x_2356_);
v___x_2358_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2358_, 0, v_a_2322_);
lean_ctor_set(v___x_2358_, 1, v___x_2357_);
v___x_2359_ = l_Lean_PersistentArray_push___redArg(v_traces_2346_, v___x_2358_);
if (v_isShared_2349_ == 0)
{
lean_ctor_set(v___x_2348_, 0, v___x_2359_);
v___x_2361_ = v___x_2348_;
goto v_reusejp_2360_;
}
else
{
lean_object* v_reuseFailAlloc_2369_; 
v_reuseFailAlloc_2369_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2369_, 0, v___x_2359_);
lean_ctor_set_uint64(v_reuseFailAlloc_2369_, sizeof(void*)*1, v_tid_2345_);
v___x_2361_ = v_reuseFailAlloc_2369_;
goto v_reusejp_2360_;
}
v_reusejp_2360_:
{
lean_object* v___x_2363_; 
if (v_isShared_2344_ == 0)
{
lean_ctor_set(v___x_2343_, 9, v___x_2361_);
v___x_2363_ = v___x_2343_;
goto v_reusejp_2362_;
}
else
{
lean_object* v_reuseFailAlloc_2368_; 
v_reuseFailAlloc_2368_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_2368_, 0, v_env_2330_);
lean_ctor_set(v_reuseFailAlloc_2368_, 1, v_messages_2331_);
lean_ctor_set(v_reuseFailAlloc_2368_, 2, v_scopes_2332_);
lean_ctor_set(v_reuseFailAlloc_2368_, 3, v_usedQuotCtxts_2333_);
lean_ctor_set(v_reuseFailAlloc_2368_, 4, v_nextMacroScope_2334_);
lean_ctor_set(v_reuseFailAlloc_2368_, 5, v_maxRecDepth_2335_);
lean_ctor_set(v_reuseFailAlloc_2368_, 6, v_ngen_2336_);
lean_ctor_set(v_reuseFailAlloc_2368_, 7, v_auxDeclNGen_2337_);
lean_ctor_set(v_reuseFailAlloc_2368_, 8, v_infoState_2338_);
lean_ctor_set(v_reuseFailAlloc_2368_, 9, v___x_2361_);
lean_ctor_set(v_reuseFailAlloc_2368_, 10, v_snapshotTasks_2339_);
lean_ctor_set(v_reuseFailAlloc_2368_, 11, v_prevLinterStates_2340_);
lean_ctor_set(v_reuseFailAlloc_2368_, 12, v_codeQualityEntryTasks_2341_);
v___x_2363_ = v_reuseFailAlloc_2368_;
goto v_reusejp_2362_;
}
v_reusejp_2362_:
{
lean_object* v___x_2364_; lean_object* v___x_2366_; 
v___x_2364_ = lean_st_ref_put(v___y_2319_, v___x_2363_);
if (v_isShared_2327_ == 0)
{
lean_ctor_set(v___x_2326_, 0, v___x_2350_);
v___x_2366_ = v___x_2326_;
goto v_reusejp_2365_;
}
else
{
lean_object* v_reuseFailAlloc_2367_; 
v_reuseFailAlloc_2367_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2367_, 0, v___x_2350_);
v___x_2366_ = v_reuseFailAlloc_2367_;
goto v_reusejp_2365_;
}
v_reusejp_2365_:
{
return v___x_2366_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2373_; lean_object* v___x_2375_; uint8_t v_isShared_2376_; uint8_t v_isSharedCheck_2380_; 
lean_dec_ref(v_msg_2317_);
lean_dec(v_cls_2316_);
v_a_2373_ = lean_ctor_get(v___x_2321_, 0);
v_isSharedCheck_2380_ = !lean_is_exclusive(v___x_2321_);
if (v_isSharedCheck_2380_ == 0)
{
v___x_2375_ = v___x_2321_;
v_isShared_2376_ = v_isSharedCheck_2380_;
goto v_resetjp_2374_;
}
else
{
lean_inc(v_a_2373_);
lean_dec(v___x_2321_);
v___x_2375_ = lean_box(0);
v_isShared_2376_ = v_isSharedCheck_2380_;
goto v_resetjp_2374_;
}
v_resetjp_2374_:
{
lean_object* v___x_2378_; 
if (v_isShared_2376_ == 0)
{
v___x_2378_ = v___x_2375_;
goto v_reusejp_2377_;
}
else
{
lean_object* v_reuseFailAlloc_2379_; 
v_reuseFailAlloc_2379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2379_, 0, v_a_2373_);
v___x_2378_ = v_reuseFailAlloc_2379_;
goto v_reusejp_2377_;
}
v_reusejp_2377_:
{
return v___x_2378_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__0___boxed(lean_object* v_cls_2381_, lean_object* v_msg_2382_, lean_object* v___y_2383_, lean_object* v___y_2384_, lean_object* v___y_2385_){
_start:
{
lean_object* v_res_2386_; 
v_res_2386_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__0(v_cls_2381_, v_msg_2382_, v___y_2383_, v___y_2384_);
lean_dec(v___y_2384_);
lean_dec_ref(v___y_2383_);
return v_res_2386_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__0(void){
_start:
{
lean_object* v___x_2387_; 
v___x_2387_ = l_Lean_PersistentHashMap_empty___redArg();
return v___x_2387_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__1(void){
_start:
{
lean_object* v___x_2388_; lean_object* v___x_2389_; 
v___x_2388_ = lean_box(0);
v___x_2389_ = l_unsafeCast___redArg(v___x_2388_);
return v___x_2389_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__5(void){
_start:
{
lean_object* v___x_2394_; lean_object* v___x_2395_; 
v___x_2394_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__4));
v___x_2395_ = l_Lean_stringToMessageData(v___x_2394_);
return v___x_2395_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__7(void){
_start:
{
lean_object* v___x_2397_; lean_object* v___x_2398_; 
v___x_2397_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__6));
v___x_2398_ = l_Lean_stringToMessageData(v___x_2397_);
return v___x_2398_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__8(void){
_start:
{
lean_object* v___x_2399_; lean_object* v___x_2400_; 
v___x_2399_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__0___closed__1));
v___x_2400_ = l_Lean_stringToMessageData(v___x_2399_);
return v___x_2400_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__11(void){
_start:
{
lean_object* v_cls_2404_; lean_object* v___x_2405_; lean_object* v___x_2406_; 
v_cls_2404_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__3));
v___x_2405_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__10));
v___x_2406_ = l_Lean_Name_append(v___x_2405_, v_cls_2404_);
return v___x_2406_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__13(void){
_start:
{
lean_object* v___x_2408_; lean_object* v___x_2409_; 
v___x_2408_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__12));
v___x_2409_ = l_Lean_stringToMessageData(v___x_2408_);
return v___x_2409_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__15(void){
_start:
{
lean_object* v___x_2411_; lean_object* v___x_2412_; 
v___x_2411_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__14));
v___x_2412_ = l_Lean_stringToMessageData(v___x_2411_);
return v___x_2412_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3(lean_object* v_mod_2417_, uint8_t v_isMeta_2418_, lean_object* v_hint_2419_, lean_object* v___y_2420_, lean_object* v___y_2421_){
_start:
{
lean_object* v___x_2423_; lean_object* v___x_2424_; lean_object* v_env_2425_; uint8_t v_isExporting_2426_; lean_object* v_entry_2427_; lean_object* v___x_2428_; lean_object* v_env_2429_; lean_object* v___x_2430_; lean_object* v___x_2431_; lean_object* v___x_2432_; lean_object* v___y_2434_; lean_object* v___x_2462_; uint8_t v___x_2463_; 
v___x_2423_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__0);
v___x_2424_ = lean_st_ref_get(v___y_2421_);
v_env_2425_ = lean_ctor_get(v___x_2424_, 0);
lean_inc_ref(v_env_2425_);
lean_dec(v___x_2424_);
v_isExporting_2426_ = lean_ctor_get_uint8(v_env_2425_, sizeof(void*)*8);
lean_dec_ref(v_env_2425_);
lean_inc(v_mod_2417_);
v_entry_2427_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_2427_, 0, v_mod_2417_);
lean_ctor_set_uint8(v_entry_2427_, sizeof(void*)*1, v_isExporting_2426_);
lean_ctor_set_uint8(v_entry_2427_, sizeof(void*)*1 + 1, v_isMeta_2418_);
v___x_2428_ = lean_st_ref_get(v___y_2421_);
v_env_2429_ = lean_ctor_get(v___x_2428_, 0);
lean_inc_ref(v_env_2429_);
lean_dec(v___x_2428_);
v___x_2430_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_2431_ = lean_box(1);
v___x_2432_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__1, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__1_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__1);
v___x_2462_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_2423_, v___x_2430_, v_env_2429_, v___x_2431_, v___x_2432_);
v___x_2463_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3_spec__7___redArg(v___x_2462_, v_entry_2427_);
lean_dec(v___x_2462_);
if (v___x_2463_ == 0)
{
lean_object* v_cls_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v___y_2470_; lean_object* v___y_2471_; lean_object* v___y_2475_; lean_object* v___y_2476_; lean_object* v_scopes_2488_; lean_object* v___x_2489_; lean_object* v_opts_2490_; uint8_t v_hasTrace_2491_; 
v_cls_2464_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__3));
v___x_2465_ = l_Lean_inheritedTraceOptions;
v___x_2466_ = lean_st_ref_get(v___x_2465_);
v___x_2467_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_2468_ = lean_st_ref_get(v___y_2421_);
v_scopes_2488_ = lean_ctor_get(v___x_2468_, 2);
lean_inc(v_scopes_2488_);
lean_dec(v___x_2468_);
v___x_2489_ = l_List_head_x21___redArg(v___x_2467_, v_scopes_2488_);
lean_dec(v_scopes_2488_);
v_opts_2490_ = lean_ctor_get(v___x_2489_, 1);
lean_inc_ref(v_opts_2490_);
lean_dec(v___x_2489_);
v_hasTrace_2491_ = lean_ctor_get_uint8(v_opts_2490_, sizeof(void*)*1);
if (v_hasTrace_2491_ == 0)
{
lean_dec_ref(v_opts_2490_);
lean_dec(v___x_2466_);
lean_dec(v_hint_2419_);
lean_dec(v_mod_2417_);
v___y_2434_ = v___y_2421_;
goto v___jp_2433_;
}
else
{
lean_object* v___x_2492_; uint8_t v___x_2493_; 
v___x_2492_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__11, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__11_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__11);
v___x_2493_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_2466_, v_opts_2490_, v___x_2492_);
lean_dec_ref(v_opts_2490_);
lean_dec(v___x_2466_);
if (v___x_2493_ == 0)
{
lean_dec(v_hint_2419_);
lean_dec(v_mod_2417_);
v___y_2434_ = v___y_2421_;
goto v___jp_2433_;
}
else
{
lean_object* v___x_2494_; lean_object* v___y_2496_; 
v___x_2494_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__13, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__13_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__13);
if (v_isExporting_2426_ == 0)
{
lean_object* v___x_2503_; 
v___x_2503_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__18));
v___y_2496_ = v___x_2503_;
goto v___jp_2495_;
}
else
{
lean_object* v___x_2504_; 
v___x_2504_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__19));
v___y_2496_ = v___x_2504_;
goto v___jp_2495_;
}
v___jp_2495_:
{
lean_object* v___x_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; lean_object* v___x_2500_; 
lean_inc_ref(v___y_2496_);
v___x_2497_ = l_Lean_stringToMessageData(v___y_2496_);
v___x_2498_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2498_, 0, v___x_2494_);
lean_ctor_set(v___x_2498_, 1, v___x_2497_);
v___x_2499_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__15, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__15_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__15);
v___x_2500_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2500_, 0, v___x_2498_);
lean_ctor_set(v___x_2500_, 1, v___x_2499_);
if (v_isMeta_2418_ == 0)
{
lean_object* v___x_2501_; 
v___x_2501_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__16));
v___y_2475_ = v___x_2500_;
v___y_2476_ = v___x_2501_;
goto v___jp_2474_;
}
else
{
lean_object* v___x_2502_; 
v___x_2502_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__17));
v___y_2475_ = v___x_2500_;
v___y_2476_ = v___x_2502_;
goto v___jp_2474_;
}
}
}
}
v___jp_2469_:
{
lean_object* v___x_2472_; lean_object* v___x_2473_; 
v___x_2472_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2472_, 0, v___y_2470_);
lean_ctor_set(v___x_2472_, 1, v___y_2471_);
v___x_2473_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__0(v_cls_2464_, v___x_2472_, v___y_2420_, v___y_2421_);
if (lean_obj_tag(v___x_2473_) == 0)
{
lean_dec_ref_known(v___x_2473_, 1);
v___y_2434_ = v___y_2421_;
goto v___jp_2433_;
}
else
{
lean_dec_ref_known(v_entry_2427_, 1);
return v___x_2473_;
}
}
v___jp_2474_:
{
lean_object* v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; uint8_t v___x_2483_; 
lean_inc_ref(v___y_2476_);
v___x_2477_ = l_Lean_stringToMessageData(v___y_2476_);
v___x_2478_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2478_, 0, v___y_2475_);
lean_ctor_set(v___x_2478_, 1, v___x_2477_);
v___x_2479_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__5, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__5_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__5);
v___x_2480_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2480_, 0, v___x_2478_);
lean_ctor_set(v___x_2480_, 1, v___x_2479_);
v___x_2481_ = l_Lean_MessageData_ofName(v_mod_2417_);
v___x_2482_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2482_, 0, v___x_2480_);
lean_ctor_set(v___x_2482_, 1, v___x_2481_);
v___x_2483_ = l_Lean_Name_isAnonymous(v_hint_2419_);
if (v___x_2483_ == 0)
{
lean_object* v___x_2484_; lean_object* v___x_2485_; lean_object* v___x_2486_; 
v___x_2484_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__7, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__7_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__7);
v___x_2485_ = l_Lean_MessageData_ofName(v_hint_2419_);
v___x_2486_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2486_, 0, v___x_2484_);
lean_ctor_set(v___x_2486_, 1, v___x_2485_);
v___y_2470_ = v___x_2482_;
v___y_2471_ = v___x_2486_;
goto v___jp_2469_;
}
else
{
lean_object* v___x_2487_; 
lean_dec(v_hint_2419_);
v___x_2487_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__8, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__8_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__8);
v___y_2470_ = v___x_2482_;
v___y_2471_ = v___x_2487_;
goto v___jp_2469_;
}
}
}
else
{
lean_object* v___x_2505_; lean_object* v___x_2506_; 
lean_dec_ref_known(v_entry_2427_, 1);
lean_dec(v_hint_2419_);
lean_dec(v_mod_2417_);
v___x_2505_ = lean_box(0);
v___x_2506_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2506_, 0, v___x_2505_);
return v___x_2506_;
}
v___jp_2433_:
{
lean_object* v___x_2435_; lean_object* v_toEnvExtension_2436_; lean_object* v_env_2437_; lean_object* v_messages_2438_; lean_object* v_scopes_2439_; lean_object* v_usedQuotCtxts_2440_; lean_object* v_nextMacroScope_2441_; lean_object* v_maxRecDepth_2442_; lean_object* v_ngen_2443_; lean_object* v_auxDeclNGen_2444_; lean_object* v_infoState_2445_; lean_object* v_traceState_2446_; lean_object* v_snapshotTasks_2447_; lean_object* v_prevLinterStates_2448_; lean_object* v_codeQualityEntryTasks_2449_; lean_object* v___x_2451_; uint8_t v_isShared_2452_; uint8_t v_isSharedCheck_2461_; 
v___x_2435_ = lean_st_ref_take(v___y_2434_);
v_toEnvExtension_2436_ = lean_ctor_get(v___x_2430_, 0);
v_env_2437_ = lean_ctor_get(v___x_2435_, 0);
v_messages_2438_ = lean_ctor_get(v___x_2435_, 1);
v_scopes_2439_ = lean_ctor_get(v___x_2435_, 2);
v_usedQuotCtxts_2440_ = lean_ctor_get(v___x_2435_, 3);
v_nextMacroScope_2441_ = lean_ctor_get(v___x_2435_, 4);
v_maxRecDepth_2442_ = lean_ctor_get(v___x_2435_, 5);
v_ngen_2443_ = lean_ctor_get(v___x_2435_, 6);
v_auxDeclNGen_2444_ = lean_ctor_get(v___x_2435_, 7);
v_infoState_2445_ = lean_ctor_get(v___x_2435_, 8);
v_traceState_2446_ = lean_ctor_get(v___x_2435_, 9);
v_snapshotTasks_2447_ = lean_ctor_get(v___x_2435_, 10);
v_prevLinterStates_2448_ = lean_ctor_get(v___x_2435_, 11);
v_codeQualityEntryTasks_2449_ = lean_ctor_get(v___x_2435_, 12);
v_isSharedCheck_2461_ = !lean_is_exclusive(v___x_2435_);
if (v_isSharedCheck_2461_ == 0)
{
v___x_2451_ = v___x_2435_;
v_isShared_2452_ = v_isSharedCheck_2461_;
goto v_resetjp_2450_;
}
else
{
lean_inc(v_codeQualityEntryTasks_2449_);
lean_inc(v_prevLinterStates_2448_);
lean_inc(v_snapshotTasks_2447_);
lean_inc(v_traceState_2446_);
lean_inc(v_infoState_2445_);
lean_inc(v_auxDeclNGen_2444_);
lean_inc(v_ngen_2443_);
lean_inc(v_maxRecDepth_2442_);
lean_inc(v_nextMacroScope_2441_);
lean_inc(v_usedQuotCtxts_2440_);
lean_inc(v_scopes_2439_);
lean_inc(v_messages_2438_);
lean_inc(v_env_2437_);
lean_dec(v___x_2435_);
v___x_2451_ = lean_box(0);
v_isShared_2452_ = v_isSharedCheck_2461_;
goto v_resetjp_2450_;
}
v_resetjp_2450_:
{
lean_object* v_asyncMode_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; lean_object* v___x_2457_; 
v_asyncMode_2453_ = lean_ctor_get(v_toEnvExtension_2436_, 2);
v___x_2454_ = lean_box(0);
v___x_2455_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_2430_, v_env_2437_, v_entry_2427_, v_asyncMode_2453_, v___x_2432_);
if (v_isShared_2452_ == 0)
{
lean_ctor_set(v___x_2451_, 0, v___x_2455_);
v___x_2457_ = v___x_2451_;
goto v_reusejp_2456_;
}
else
{
lean_object* v_reuseFailAlloc_2460_; 
v_reuseFailAlloc_2460_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_2460_, 0, v___x_2455_);
lean_ctor_set(v_reuseFailAlloc_2460_, 1, v_messages_2438_);
lean_ctor_set(v_reuseFailAlloc_2460_, 2, v_scopes_2439_);
lean_ctor_set(v_reuseFailAlloc_2460_, 3, v_usedQuotCtxts_2440_);
lean_ctor_set(v_reuseFailAlloc_2460_, 4, v_nextMacroScope_2441_);
lean_ctor_set(v_reuseFailAlloc_2460_, 5, v_maxRecDepth_2442_);
lean_ctor_set(v_reuseFailAlloc_2460_, 6, v_ngen_2443_);
lean_ctor_set(v_reuseFailAlloc_2460_, 7, v_auxDeclNGen_2444_);
lean_ctor_set(v_reuseFailAlloc_2460_, 8, v_infoState_2445_);
lean_ctor_set(v_reuseFailAlloc_2460_, 9, v_traceState_2446_);
lean_ctor_set(v_reuseFailAlloc_2460_, 10, v_snapshotTasks_2447_);
lean_ctor_set(v_reuseFailAlloc_2460_, 11, v_prevLinterStates_2448_);
lean_ctor_set(v_reuseFailAlloc_2460_, 12, v_codeQualityEntryTasks_2449_);
v___x_2457_ = v_reuseFailAlloc_2460_;
goto v_reusejp_2456_;
}
v_reusejp_2456_:
{
lean_object* v___x_2458_; lean_object* v___x_2459_; 
v___x_2458_ = lean_st_ref_put(v___y_2434_, v___x_2457_);
v___x_2459_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2459_, 0, v___x_2454_);
return v___x_2459_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___boxed(lean_object* v_mod_2507_, lean_object* v_isMeta_2508_, lean_object* v_hint_2509_, lean_object* v___y_2510_, lean_object* v___y_2511_, lean_object* v___y_2512_){
_start:
{
uint8_t v_isMeta_boxed_2513_; lean_object* v_res_2514_; 
v_isMeta_boxed_2513_ = lean_unbox(v_isMeta_2508_);
v_res_2514_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3(v_mod_2507_, v_isMeta_boxed_2513_, v_hint_2509_, v___y_2510_, v___y_2511_);
lean_dec(v___y_2511_);
lean_dec_ref(v___y_2510_);
return v_res_2514_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__4(lean_object* v___x_2515_, lean_object* v_declName_2516_, lean_object* v_as_2517_, size_t v_sz_2518_, size_t v_i_2519_, lean_object* v_b_2520_, lean_object* v___y_2521_, lean_object* v___y_2522_){
_start:
{
uint8_t v___x_2524_; 
v___x_2524_ = lean_usize_dec_lt(v_i_2519_, v_sz_2518_);
if (v___x_2524_ == 0)
{
lean_object* v___x_2525_; 
lean_dec(v_declName_2516_);
v___x_2525_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2525_, 0, v_b_2520_);
return v___x_2525_;
}
else
{
lean_object* v___x_2526_; lean_object* v_modules_2527_; lean_object* v___x_2528_; lean_object* v_a_2529_; lean_object* v___x_2530_; lean_object* v_toImport_2531_; lean_object* v_module_2532_; lean_object* v___x_2533_; uint8_t v___x_2534_; lean_object* v___x_2535_; 
v___x_2526_ = l_Lean_Environment_header(v___x_2515_);
v_modules_2527_ = lean_ctor_get(v___x_2526_, 3);
lean_inc_ref(v_modules_2527_);
lean_dec_ref(v___x_2526_);
v___x_2528_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_2529_ = lean_array_uget_borrowed(v_as_2517_, v_i_2519_);
v___x_2530_ = lean_array_get(v___x_2528_, v_modules_2527_, v_a_2529_);
lean_dec_ref(v_modules_2527_);
v_toImport_2531_ = lean_ctor_get(v___x_2530_, 0);
lean_inc_ref(v_toImport_2531_);
lean_dec(v___x_2530_);
v_module_2532_ = lean_ctor_get(v_toImport_2531_, 0);
lean_inc(v_module_2532_);
lean_dec_ref(v_toImport_2531_);
v___x_2533_ = lean_box(0);
v___x_2534_ = 0;
lean_inc(v_declName_2516_);
v___x_2535_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3(v_module_2532_, v___x_2534_, v_declName_2516_, v___y_2521_, v___y_2522_);
if (lean_obj_tag(v___x_2535_) == 0)
{
size_t v___x_2536_; size_t v___x_2537_; 
lean_dec_ref_known(v___x_2535_, 1);
v___x_2536_ = ((size_t)1ULL);
v___x_2537_ = lean_usize_add(v_i_2519_, v___x_2536_);
v_i_2519_ = v___x_2537_;
v_b_2520_ = v___x_2533_;
goto _start;
}
else
{
lean_dec(v_declName_2516_);
return v___x_2535_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__4___boxed(lean_object* v___x_2539_, lean_object* v_declName_2540_, lean_object* v_as_2541_, lean_object* v_sz_2542_, lean_object* v_i_2543_, lean_object* v_b_2544_, lean_object* v___y_2545_, lean_object* v___y_2546_, lean_object* v___y_2547_){
_start:
{
size_t v_sz_boxed_2548_; size_t v_i_boxed_2549_; lean_object* v_res_2550_; 
v_sz_boxed_2548_ = lean_unbox_usize(v_sz_2542_);
lean_dec(v_sz_2542_);
v_i_boxed_2549_ = lean_unbox_usize(v_i_2543_);
lean_dec(v_i_2543_);
v_res_2550_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__4(v___x_2539_, v_declName_2540_, v_as_2541_, v_sz_boxed_2548_, v_i_boxed_2549_, v_b_2544_, v___y_2545_, v___y_2546_);
lean_dec(v___y_2546_);
lean_dec_ref(v___y_2545_);
lean_dec_ref(v_as_2541_);
lean_dec_ref(v___x_2539_);
return v_res_2550_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__5_spec__10___redArg(lean_object* v_a_2551_, lean_object* v_x_2552_){
_start:
{
if (lean_obj_tag(v_x_2552_) == 0)
{
lean_object* v___x_2553_; 
v___x_2553_ = lean_box(0);
return v___x_2553_;
}
else
{
lean_object* v_key_2554_; lean_object* v_value_2555_; lean_object* v_tail_2556_; uint8_t v___x_2557_; 
v_key_2554_ = lean_ctor_get(v_x_2552_, 0);
v_value_2555_ = lean_ctor_get(v_x_2552_, 1);
v_tail_2556_ = lean_ctor_get(v_x_2552_, 2);
v___x_2557_ = lean_name_eq(v_key_2554_, v_a_2551_);
if (v___x_2557_ == 0)
{
v_x_2552_ = v_tail_2556_;
goto _start;
}
else
{
lean_object* v___x_2559_; 
lean_inc(v_value_2555_);
v___x_2559_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2559_, 0, v_value_2555_);
return v___x_2559_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__5_spec__10___redArg___boxed(lean_object* v_a_2560_, lean_object* v_x_2561_){
_start:
{
lean_object* v_res_2562_; 
v_res_2562_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__5_spec__10___redArg(v_a_2560_, v_x_2561_);
lean_dec(v_x_2561_);
lean_dec(v_a_2560_);
return v_res_2562_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__5___redArg(lean_object* v_m_2563_, lean_object* v_a_2564_){
_start:
{
lean_object* v_buckets_2565_; lean_object* v___x_2566_; uint64_t v___y_2568_; lean_object* v___x_2582_; 
v_buckets_2565_ = lean_ctor_get(v_m_2563_, 1);
v___x_2566_ = lean_array_get_size(v_buckets_2565_);
v___x_2582_ = l_unsafeCast___redArg(v_a_2564_);
if (lean_obj_tag(v___x_2582_) == 0)
{
uint64_t v___x_2583_; 
v___x_2583_ = 1723ULL;
v___y_2568_ = v___x_2583_;
goto v___jp_2567_;
}
else
{
uint64_t v_hash_2584_; 
v_hash_2584_ = lean_ctor_get_uint64(v___x_2582_, sizeof(void*)*2);
lean_dec(v___x_2582_);
v___y_2568_ = v_hash_2584_;
goto v___jp_2567_;
}
v___jp_2567_:
{
uint64_t v___x_2569_; uint64_t v___x_2570_; uint64_t v_fold_2571_; uint64_t v___x_2572_; uint64_t v___x_2573_; uint64_t v___x_2574_; size_t v___x_2575_; size_t v___x_2576_; size_t v___x_2577_; size_t v___x_2578_; size_t v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; 
v___x_2569_ = 32ULL;
v___x_2570_ = lean_uint64_shift_right(v___y_2568_, v___x_2569_);
v_fold_2571_ = lean_uint64_xor(v___y_2568_, v___x_2570_);
v___x_2572_ = 16ULL;
v___x_2573_ = lean_uint64_shift_right(v_fold_2571_, v___x_2572_);
v___x_2574_ = lean_uint64_xor(v_fold_2571_, v___x_2573_);
v___x_2575_ = lean_uint64_to_usize(v___x_2574_);
v___x_2576_ = lean_usize_of_nat(v___x_2566_);
v___x_2577_ = ((size_t)1ULL);
v___x_2578_ = lean_usize_sub(v___x_2576_, v___x_2577_);
v___x_2579_ = lean_usize_land(v___x_2575_, v___x_2578_);
v___x_2580_ = lean_array_uget_borrowed(v_buckets_2565_, v___x_2579_);
v___x_2581_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__5_spec__10___redArg(v_a_2564_, v___x_2580_);
return v___x_2581_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__5___redArg___boxed(lean_object* v_m_2585_, lean_object* v_a_2586_){
_start:
{
lean_object* v_res_2587_; 
v_res_2587_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__5___redArg(v_m_2585_, v_a_2586_);
lean_dec(v_a_2586_);
lean_dec_ref(v_m_2585_);
return v_res_2587_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2___closed__0(void){
_start:
{
lean_object* v___x_2588_; 
v___x_2588_ = l_Std_HashMap_instInhabited___redArg();
return v___x_2588_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2(lean_object* v_declName_2591_, uint8_t v_isMeta_2592_, lean_object* v___y_2593_, lean_object* v___y_2594_){
_start:
{
lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v_env_2601_; lean_object* v___y_2603_; lean_object* v___x_2616_; 
v___x_2596_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2___closed__0, &l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2___closed__0_once, _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2___closed__0);
v___x_2597_ = lean_st_ref_get(v___y_2594_);
v_env_2601_ = lean_ctor_get(v___x_2597_, 0);
lean_inc_ref(v_env_2601_);
lean_dec(v___x_2597_);
v___x_2616_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2601_, v_declName_2591_);
if (lean_obj_tag(v___x_2616_) == 0)
{
lean_dec_ref(v_env_2601_);
lean_dec(v_declName_2591_);
goto v___jp_2598_;
}
else
{
lean_object* v_val_2617_; lean_object* v___x_2618_; lean_object* v_modules_2619_; lean_object* v___x_2620_; uint8_t v___x_2621_; 
v_val_2617_ = lean_ctor_get(v___x_2616_, 0);
lean_inc(v_val_2617_);
lean_dec_ref_known(v___x_2616_, 1);
v___x_2618_ = l_Lean_Environment_header(v_env_2601_);
v_modules_2619_ = lean_ctor_get(v___x_2618_, 3);
lean_inc_ref(v_modules_2619_);
lean_dec_ref(v___x_2618_);
v___x_2620_ = lean_array_get_size(v_modules_2619_);
v___x_2621_ = lean_nat_dec_lt(v_val_2617_, v___x_2620_);
if (v___x_2621_ == 0)
{
lean_dec_ref(v_modules_2619_);
lean_dec(v_val_2617_);
lean_dec_ref(v_env_2601_);
lean_dec(v_declName_2591_);
goto v___jp_2598_;
}
else
{
lean_object* v___x_2622_; lean_object* v___x_2623_; uint8_t v___y_2625_; 
v___x_2622_ = lean_array_fget(v_modules_2619_, v_val_2617_);
lean_dec(v_val_2617_);
lean_dec_ref(v_modules_2619_);
v___x_2623_ = lean_st_ref_get(v___y_2594_);
if (v_isMeta_2592_ == 0)
{
lean_dec(v___x_2623_);
v___y_2625_ = v_isMeta_2592_;
goto v___jp_2624_;
}
else
{
lean_object* v_env_2636_; uint8_t v___x_2637_; 
v_env_2636_ = lean_ctor_get(v___x_2623_, 0);
lean_inc_ref(v_env_2636_);
lean_dec(v___x_2623_);
lean_inc(v_declName_2591_);
v___x_2637_ = l_Lean_isMarkedMeta(v_env_2636_, v_declName_2591_);
if (v___x_2637_ == 0)
{
v___y_2625_ = v_isMeta_2592_;
goto v___jp_2624_;
}
else
{
uint8_t v___x_2638_; 
v___x_2638_ = 0;
v___y_2625_ = v___x_2638_;
goto v___jp_2624_;
}
}
v___jp_2624_:
{
lean_object* v_toImport_2626_; lean_object* v_module_2627_; lean_object* v___x_2628_; 
v_toImport_2626_ = lean_ctor_get(v___x_2622_, 0);
lean_inc_ref(v_toImport_2626_);
lean_dec(v___x_2622_);
v_module_2627_ = lean_ctor_get(v_toImport_2626_, 0);
lean_inc(v_module_2627_);
lean_dec_ref(v_toImport_2626_);
lean_inc(v_declName_2591_);
v___x_2628_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3(v_module_2627_, v___y_2625_, v_declName_2591_, v___y_2593_, v___y_2594_);
if (lean_obj_tag(v___x_2628_) == 0)
{
lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; 
lean_dec_ref_known(v___x_2628_, 1);
v___x_2629_ = l_Lean_indirectModUseExt;
v___x_2630_ = lean_box(1);
v___x_2631_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__1, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__1_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__1);
lean_inc_ref(v_env_2601_);
v___x_2632_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_2596_, v___x_2629_, v_env_2601_, v___x_2630_, v___x_2631_);
v___x_2633_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__5___redArg(v___x_2632_, v_declName_2591_);
lean_dec(v___x_2632_);
if (lean_obj_tag(v___x_2633_) == 0)
{
lean_object* v___x_2634_; 
v___x_2634_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2___closed__1));
v___y_2603_ = v___x_2634_;
goto v___jp_2602_;
}
else
{
lean_object* v_val_2635_; 
v_val_2635_ = lean_ctor_get(v___x_2633_, 0);
lean_inc(v_val_2635_);
lean_dec_ref_known(v___x_2633_, 1);
v___y_2603_ = v_val_2635_;
goto v___jp_2602_;
}
}
else
{
lean_dec_ref(v_env_2601_);
lean_dec(v_declName_2591_);
return v___x_2628_;
}
}
}
}
v___jp_2598_:
{
lean_object* v___x_2599_; lean_object* v___x_2600_; 
v___x_2599_ = lean_box(0);
v___x_2600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2600_, 0, v___x_2599_);
return v___x_2600_;
}
v___jp_2602_:
{
lean_object* v___x_2604_; size_t v_sz_2605_; size_t v___x_2606_; lean_object* v___x_2607_; 
v___x_2604_ = lean_box(0);
v_sz_2605_ = lean_array_size(v___y_2603_);
v___x_2606_ = ((size_t)0ULL);
v___x_2607_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__4(v_env_2601_, v_declName_2591_, v___y_2603_, v_sz_2605_, v___x_2606_, v___x_2604_, v___y_2593_, v___y_2594_);
lean_dec_ref(v___y_2603_);
lean_dec_ref(v_env_2601_);
if (lean_obj_tag(v___x_2607_) == 0)
{
lean_object* v___x_2609_; uint8_t v_isShared_2610_; uint8_t v_isSharedCheck_2614_; 
v_isSharedCheck_2614_ = !lean_is_exclusive(v___x_2607_);
if (v_isSharedCheck_2614_ == 0)
{
lean_object* v_unused_2615_; 
v_unused_2615_ = lean_ctor_get(v___x_2607_, 0);
lean_dec(v_unused_2615_);
v___x_2609_ = v___x_2607_;
v_isShared_2610_ = v_isSharedCheck_2614_;
goto v_resetjp_2608_;
}
else
{
lean_dec(v___x_2607_);
v___x_2609_ = lean_box(0);
v_isShared_2610_ = v_isSharedCheck_2614_;
goto v_resetjp_2608_;
}
v_resetjp_2608_:
{
lean_object* v___x_2612_; 
if (v_isShared_2610_ == 0)
{
lean_ctor_set(v___x_2609_, 0, v___x_2604_);
v___x_2612_ = v___x_2609_;
goto v_reusejp_2611_;
}
else
{
lean_object* v_reuseFailAlloc_2613_; 
v_reuseFailAlloc_2613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2613_, 0, v___x_2604_);
v___x_2612_ = v_reuseFailAlloc_2613_;
goto v_reusejp_2611_;
}
v_reusejp_2611_:
{
return v___x_2612_;
}
}
}
else
{
return v___x_2607_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2___boxed(lean_object* v_declName_2639_, lean_object* v_isMeta_2640_, lean_object* v___y_2641_, lean_object* v___y_2642_, lean_object* v___y_2643_){
_start:
{
uint8_t v_isMeta_boxed_2644_; lean_object* v_res_2645_; 
v_isMeta_boxed_2644_ = lean_unbox(v_isMeta_2640_);
v_res_2645_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2(v_declName_2639_, v_isMeta_boxed_2644_, v___y_2641_, v___y_2642_);
lean_dec(v___y_2642_);
lean_dec_ref(v___y_2641_);
return v_res_2645_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__3___redArg(lean_object* v_as_x27_2646_, lean_object* v_b_2647_, lean_object* v___y_2648_, lean_object* v___y_2649_){
_start:
{
if (lean_obj_tag(v_as_x27_2646_) == 0)
{
lean_object* v___x_2651_; 
v___x_2651_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2651_, 0, v_b_2647_);
return v___x_2651_;
}
else
{
lean_object* v_head_2652_; lean_object* v_tail_2653_; lean_object* v___x_2654_; uint8_t v___x_2655_; lean_object* v___x_2656_; 
v_head_2652_ = lean_ctor_get(v_as_x27_2646_, 0);
v_tail_2653_ = lean_ctor_get(v_as_x27_2646_, 1);
v___x_2654_ = lean_box(0);
v___x_2655_ = 1;
lean_inc(v_head_2652_);
v___x_2656_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2(v_head_2652_, v___x_2655_, v___y_2648_, v___y_2649_);
if (lean_obj_tag(v___x_2656_) == 0)
{
lean_dec_ref_known(v___x_2656_, 1);
v_as_x27_2646_ = v_tail_2653_;
v_b_2647_ = v___x_2654_;
goto _start;
}
else
{
return v___x_2656_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__3___redArg___boxed(lean_object* v_as_x27_2658_, lean_object* v_b_2659_, lean_object* v___y_2660_, lean_object* v___y_2661_, lean_object* v___y_2662_){
_start:
{
lean_object* v_res_2663_; 
v_res_2663_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__3___redArg(v_as_x27_2658_, v_b_2659_, v___y_2660_, v___y_2661_);
lean_dec(v___y_2661_);
lean_dec_ref(v___y_2660_);
lean_dec(v_as_x27_2658_);
return v_res_2663_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__5___redArg___closed__3(void){
_start:
{
lean_object* v___x_2669_; lean_object* v___x_2670_; 
v___x_2669_ = l_Lean_maxRecDepthErrorMessage;
v___x_2670_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2670_, 0, v___x_2669_);
return v___x_2670_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__5___redArg___closed__4(void){
_start:
{
lean_object* v___x_2671_; lean_object* v___x_2672_; 
v___x_2671_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__5___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__5___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__5___redArg___closed__3);
v___x_2672_ = l_Lean_MessageData_ofFormat(v___x_2671_);
return v___x_2672_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__5___redArg___closed__5(void){
_start:
{
lean_object* v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; 
v___x_2673_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__5___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__5___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__5___redArg___closed__4);
v___x_2674_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__5___redArg___closed__2));
v___x_2675_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2675_, 0, v___x_2674_);
lean_ctor_set(v___x_2675_, 1, v___x_2673_);
return v___x_2675_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__5___redArg(lean_object* v_ref_2676_){
_start:
{
lean_object* v___x_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; 
v___x_2678_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__5___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__5___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__5___redArg___closed__5);
v___x_2679_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2679_, 0, v_ref_2676_);
lean_ctor_set(v___x_2679_, 1, v___x_2678_);
v___x_2680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2680_, 0, v___x_2679_);
return v___x_2680_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__5___redArg___boxed(lean_object* v_ref_2681_, lean_object* v___y_2682_){
_start:
{
lean_object* v_res_2683_; 
v_res_2683_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__5___redArg(v_ref_2681_);
return v_res_2683_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0___redArg___lam__2(lean_object* v_currNamespace_2684_, lean_object* v___y_2685_, lean_object* v___y_2686_){
_start:
{
lean_object* v___x_2687_; 
v___x_2687_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2687_, 0, v_currNamespace_2684_);
lean_ctor_set(v___x_2687_, 1, v___y_2686_);
return v___x_2687_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0___redArg___lam__2___boxed(lean_object* v_currNamespace_2688_, lean_object* v___y_2689_, lean_object* v___y_2690_){
_start:
{
lean_object* v_res_2691_; 
v_res_2691_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0___redArg___lam__2(v_currNamespace_2688_, v___y_2689_, v___y_2690_);
lean_dec_ref(v___y_2689_);
return v_res_2691_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0___redArg___lam__0(lean_object* v_env_2692_, lean_object* v_declName_2693_, lean_object* v___y_2694_, lean_object* v___y_2695_){
_start:
{
uint8_t v___x_2696_; lean_object* v_env_2697_; lean_object* v___x_2698_; uint8_t v___x_2699_; uint8_t v___x_2700_; 
v___x_2696_ = 0;
v_env_2697_ = l_Lean_Environment_setExporting(v_env_2692_, v___x_2696_);
lean_inc(v_declName_2693_);
v___x_2698_ = l_Lean_mkPrivateName(v_env_2697_, v_declName_2693_);
v___x_2699_ = 1;
lean_inc_ref(v_env_2697_);
v___x_2700_ = l_Lean_Environment_contains(v_env_2697_, v___x_2698_, v___x_2699_);
if (v___x_2700_ == 0)
{
lean_object* v___x_2701_; uint8_t v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; 
v___x_2701_ = l_Lean_privateToUserName(v_declName_2693_);
v___x_2702_ = l_Lean_Environment_contains(v_env_2697_, v___x_2701_, v___x_2699_);
v___x_2703_ = lean_box(v___x_2702_);
v___x_2704_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2704_, 0, v___x_2703_);
lean_ctor_set(v___x_2704_, 1, v___y_2695_);
return v___x_2704_;
}
else
{
lean_object* v___x_2705_; lean_object* v___x_2706_; 
lean_dec_ref(v_env_2697_);
lean_dec(v_declName_2693_);
v___x_2705_ = lean_box(v___x_2700_);
v___x_2706_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2706_, 0, v___x_2705_);
lean_ctor_set(v___x_2706_, 1, v___y_2695_);
return v___x_2706_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0___redArg___lam__0___boxed(lean_object* v_env_2707_, lean_object* v_declName_2708_, lean_object* v___y_2709_, lean_object* v___y_2710_){
_start:
{
lean_object* v_res_2711_; 
v_res_2711_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0___redArg___lam__0(v_env_2707_, v_declName_2708_, v___y_2709_, v___y_2710_);
lean_dec_ref(v___y_2709_);
return v_res_2711_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__1___redArg(lean_object* v_x_2712_, lean_object* v___y_2713_){
_start:
{
if (lean_obj_tag(v_x_2712_) == 0)
{
lean_object* v_a_2714_; lean_object* v___x_2715_; 
v_a_2714_ = lean_ctor_get(v_x_2712_, 0);
lean_inc(v_a_2714_);
v___x_2715_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2715_, 0, v_a_2714_);
lean_ctor_set(v___x_2715_, 1, v___y_2713_);
return v___x_2715_;
}
else
{
lean_object* v_a_2716_; lean_object* v___x_2717_; 
v_a_2716_ = lean_ctor_get(v_x_2712_, 0);
lean_inc(v_a_2716_);
v___x_2717_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2717_, 0, v_a_2716_);
lean_ctor_set(v___x_2717_, 1, v___y_2713_);
return v___x_2717_;
}
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__1___redArg___boxed(lean_object* v_x_2718_, lean_object* v___y_2719_){
_start:
{
lean_object* v_res_2720_; 
v_res_2720_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__1___redArg(v_x_2718_, v___y_2719_);
lean_dec_ref(v_x_2718_);
return v_res_2720_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0___redArg___lam__1(lean_object* v_env_2721_, lean_object* v_stx_2722_, lean_object* v___y_2723_, lean_object* v___y_2724_){
_start:
{
lean_object* v___x_2725_; 
v___x_2725_ = l_Lean_Elab_expandMacroImpl_x3f(v_env_2721_, v_stx_2722_, v___y_2723_, v___y_2724_);
if (lean_obj_tag(v___x_2725_) == 0)
{
lean_object* v_a_2726_; 
v_a_2726_ = lean_ctor_get(v___x_2725_, 0);
lean_inc(v_a_2726_);
if (lean_obj_tag(v_a_2726_) == 0)
{
lean_object* v_a_2727_; lean_object* v___x_2729_; uint8_t v_isShared_2730_; uint8_t v_isSharedCheck_2735_; 
v_a_2727_ = lean_ctor_get(v___x_2725_, 1);
v_isSharedCheck_2735_ = !lean_is_exclusive(v___x_2725_);
if (v_isSharedCheck_2735_ == 0)
{
lean_object* v_unused_2736_; 
v_unused_2736_ = lean_ctor_get(v___x_2725_, 0);
lean_dec(v_unused_2736_);
v___x_2729_ = v___x_2725_;
v_isShared_2730_ = v_isSharedCheck_2735_;
goto v_resetjp_2728_;
}
else
{
lean_inc(v_a_2727_);
lean_dec(v___x_2725_);
v___x_2729_ = lean_box(0);
v_isShared_2730_ = v_isSharedCheck_2735_;
goto v_resetjp_2728_;
}
v_resetjp_2728_:
{
lean_object* v___x_2731_; lean_object* v___x_2733_; 
v___x_2731_ = lean_box(0);
if (v_isShared_2730_ == 0)
{
lean_ctor_set(v___x_2729_, 0, v___x_2731_);
v___x_2733_ = v___x_2729_;
goto v_reusejp_2732_;
}
else
{
lean_object* v_reuseFailAlloc_2734_; 
v_reuseFailAlloc_2734_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2734_, 0, v___x_2731_);
lean_ctor_set(v_reuseFailAlloc_2734_, 1, v_a_2727_);
v___x_2733_ = v_reuseFailAlloc_2734_;
goto v_reusejp_2732_;
}
v_reusejp_2732_:
{
return v___x_2733_;
}
}
}
else
{
lean_object* v_val_2737_; lean_object* v___x_2739_; uint8_t v_isShared_2740_; uint8_t v_isSharedCheck_2765_; 
v_val_2737_ = lean_ctor_get(v_a_2726_, 0);
v_isSharedCheck_2765_ = !lean_is_exclusive(v_a_2726_);
if (v_isSharedCheck_2765_ == 0)
{
v___x_2739_ = v_a_2726_;
v_isShared_2740_ = v_isSharedCheck_2765_;
goto v_resetjp_2738_;
}
else
{
lean_inc(v_val_2737_);
lean_dec(v_a_2726_);
v___x_2739_ = lean_box(0);
v_isShared_2740_ = v_isSharedCheck_2765_;
goto v_resetjp_2738_;
}
v_resetjp_2738_:
{
lean_object* v_snd_2741_; 
v_snd_2741_ = lean_ctor_get(v_val_2737_, 1);
lean_inc(v_snd_2741_);
lean_dec(v_val_2737_);
if (lean_obj_tag(v_snd_2741_) == 0)
{
lean_object* v_a_2742_; lean_object* v_a_2743_; lean_object* v___x_2745_; uint8_t v_isShared_2746_; uint8_t v_isSharedCheck_2751_; 
lean_del_object(v___x_2739_);
v_a_2742_ = lean_ctor_get(v___x_2725_, 1);
lean_inc(v_a_2742_);
lean_dec_ref_known(v___x_2725_, 2);
v_a_2743_ = lean_ctor_get(v_snd_2741_, 0);
v_isSharedCheck_2751_ = !lean_is_exclusive(v_snd_2741_);
if (v_isSharedCheck_2751_ == 0)
{
v___x_2745_ = v_snd_2741_;
v_isShared_2746_ = v_isSharedCheck_2751_;
goto v_resetjp_2744_;
}
else
{
lean_inc(v_a_2743_);
lean_dec(v_snd_2741_);
v___x_2745_ = lean_box(0);
v_isShared_2746_ = v_isSharedCheck_2751_;
goto v_resetjp_2744_;
}
v_resetjp_2744_:
{
lean_object* v___x_2748_; 
if (v_isShared_2746_ == 0)
{
v___x_2748_ = v___x_2745_;
goto v_reusejp_2747_;
}
else
{
lean_object* v_reuseFailAlloc_2750_; 
v_reuseFailAlloc_2750_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2750_, 0, v_a_2743_);
v___x_2748_ = v_reuseFailAlloc_2750_;
goto v_reusejp_2747_;
}
v_reusejp_2747_:
{
lean_object* v___x_2749_; 
v___x_2749_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__1___redArg(v___x_2748_, v_a_2742_);
lean_dec_ref(v___x_2748_);
return v___x_2749_;
}
}
}
else
{
lean_object* v_a_2752_; lean_object* v_a_2753_; lean_object* v___x_2755_; uint8_t v_isShared_2756_; uint8_t v_isSharedCheck_2764_; 
v_a_2752_ = lean_ctor_get(v___x_2725_, 1);
lean_inc(v_a_2752_);
lean_dec_ref_known(v___x_2725_, 2);
v_a_2753_ = lean_ctor_get(v_snd_2741_, 0);
v_isSharedCheck_2764_ = !lean_is_exclusive(v_snd_2741_);
if (v_isSharedCheck_2764_ == 0)
{
v___x_2755_ = v_snd_2741_;
v_isShared_2756_ = v_isSharedCheck_2764_;
goto v_resetjp_2754_;
}
else
{
lean_inc(v_a_2753_);
lean_dec(v_snd_2741_);
v___x_2755_ = lean_box(0);
v_isShared_2756_ = v_isSharedCheck_2764_;
goto v_resetjp_2754_;
}
v_resetjp_2754_:
{
lean_object* v___x_2758_; 
if (v_isShared_2740_ == 0)
{
lean_ctor_set(v___x_2739_, 0, v_a_2753_);
v___x_2758_ = v___x_2739_;
goto v_reusejp_2757_;
}
else
{
lean_object* v_reuseFailAlloc_2763_; 
v_reuseFailAlloc_2763_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2763_, 0, v_a_2753_);
v___x_2758_ = v_reuseFailAlloc_2763_;
goto v_reusejp_2757_;
}
v_reusejp_2757_:
{
lean_object* v___x_2760_; 
if (v_isShared_2756_ == 0)
{
lean_ctor_set(v___x_2755_, 0, v___x_2758_);
v___x_2760_ = v___x_2755_;
goto v_reusejp_2759_;
}
else
{
lean_object* v_reuseFailAlloc_2762_; 
v_reuseFailAlloc_2762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2762_, 0, v___x_2758_);
v___x_2760_ = v_reuseFailAlloc_2762_;
goto v_reusejp_2759_;
}
v_reusejp_2759_:
{
lean_object* v___x_2761_; 
v___x_2761_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__1___redArg(v___x_2760_, v_a_2752_);
lean_dec_ref(v___x_2760_);
return v___x_2761_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2766_; lean_object* v_a_2767_; lean_object* v___x_2769_; uint8_t v_isShared_2770_; uint8_t v_isSharedCheck_2774_; 
v_a_2766_ = lean_ctor_get(v___x_2725_, 0);
v_a_2767_ = lean_ctor_get(v___x_2725_, 1);
v_isSharedCheck_2774_ = !lean_is_exclusive(v___x_2725_);
if (v_isSharedCheck_2774_ == 0)
{
v___x_2769_ = v___x_2725_;
v_isShared_2770_ = v_isSharedCheck_2774_;
goto v_resetjp_2768_;
}
else
{
lean_inc(v_a_2767_);
lean_inc(v_a_2766_);
lean_dec(v___x_2725_);
v___x_2769_ = lean_box(0);
v_isShared_2770_ = v_isSharedCheck_2774_;
goto v_resetjp_2768_;
}
v_resetjp_2768_:
{
lean_object* v___x_2772_; 
if (v_isShared_2770_ == 0)
{
v___x_2772_ = v___x_2769_;
goto v_reusejp_2771_;
}
else
{
lean_object* v_reuseFailAlloc_2773_; 
v_reuseFailAlloc_2773_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2773_, 0, v_a_2766_);
lean_ctor_set(v_reuseFailAlloc_2773_, 1, v_a_2767_);
v___x_2772_ = v_reuseFailAlloc_2773_;
goto v_reusejp_2771_;
}
v_reusejp_2771_:
{
return v___x_2772_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0___redArg___lam__1___boxed(lean_object* v_env_2775_, lean_object* v_stx_2776_, lean_object* v___y_2777_, lean_object* v___y_2778_){
_start:
{
lean_object* v_res_2779_; 
v_res_2779_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0___redArg___lam__1(v_env_2775_, v_stx_2776_, v___y_2777_, v___y_2778_);
lean_dec_ref(v___y_2777_);
return v_res_2779_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0___redArg___lam__3(lean_object* v_env_2780_, lean_object* v_currNamespace_2781_, lean_object* v_openDecls_2782_, lean_object* v_n_2783_, lean_object* v___y_2784_, lean_object* v___y_2785_){
_start:
{
lean_object* v___x_2786_; lean_object* v___x_2787_; 
v___x_2786_ = l_Lean_ResolveName_resolveNamespace(v_env_2780_, v_currNamespace_2781_, v_openDecls_2782_, v_n_2783_);
v___x_2787_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2787_, 0, v___x_2786_);
lean_ctor_set(v___x_2787_, 1, v___y_2785_);
return v___x_2787_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0___redArg___lam__3___boxed(lean_object* v_env_2788_, lean_object* v_currNamespace_2789_, lean_object* v_openDecls_2790_, lean_object* v_n_2791_, lean_object* v___y_2792_, lean_object* v___y_2793_){
_start:
{
lean_object* v_res_2794_; 
v_res_2794_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0___redArg___lam__3(v_env_2788_, v_currNamespace_2789_, v_openDecls_2790_, v_n_2791_, v___y_2792_, v___y_2793_);
lean_dec_ref(v___y_2792_);
return v_res_2794_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__4(lean_object* v_as_2795_, lean_object* v___y_2796_, lean_object* v___y_2797_){
_start:
{
if (lean_obj_tag(v_as_2795_) == 0)
{
lean_object* v___x_2799_; lean_object* v___x_2800_; 
v___x_2799_ = lean_box(0);
v___x_2800_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2800_, 0, v___x_2799_);
return v___x_2800_;
}
else
{
lean_object* v_head_2801_; lean_object* v_tail_2802_; lean_object* v_fst_2803_; lean_object* v_snd_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; lean_object* v___x_2808_; lean_object* v_scopes_2809_; lean_object* v___x_2810_; lean_object* v_opts_2811_; uint8_t v_hasTrace_2812_; 
v_head_2801_ = lean_ctor_get(v_as_2795_, 0);
lean_inc(v_head_2801_);
v_tail_2802_ = lean_ctor_get(v_as_2795_, 1);
lean_inc(v_tail_2802_);
lean_dec_ref_known(v_as_2795_, 2);
v_fst_2803_ = lean_ctor_get(v_head_2801_, 0);
lean_inc(v_fst_2803_);
v_snd_2804_ = lean_ctor_get(v_head_2801_, 1);
lean_inc(v_snd_2804_);
lean_dec(v_head_2801_);
v___x_2805_ = l_Lean_inheritedTraceOptions;
v___x_2806_ = lean_st_ref_get(v___x_2805_);
v___x_2807_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_2808_ = lean_st_ref_get(v___y_2797_);
v_scopes_2809_ = lean_ctor_get(v___x_2808_, 2);
lean_inc(v_scopes_2809_);
lean_dec(v___x_2808_);
v___x_2810_ = l_List_head_x21___redArg(v___x_2807_, v_scopes_2809_);
lean_dec(v_scopes_2809_);
v_opts_2811_ = lean_ctor_get(v___x_2810_, 1);
lean_inc_ref(v_opts_2811_);
lean_dec(v___x_2810_);
v_hasTrace_2812_ = lean_ctor_get_uint8(v_opts_2811_, sizeof(void*)*1);
if (v_hasTrace_2812_ == 0)
{
lean_dec_ref(v_opts_2811_);
lean_dec(v___x_2806_);
lean_dec(v_snd_2804_);
lean_dec(v_fst_2803_);
v_as_2795_ = v_tail_2802_;
goto _start;
}
else
{
lean_object* v___x_2814_; lean_object* v___x_2815_; uint8_t v___x_2816_; 
v___x_2814_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3___closed__10));
lean_inc(v_fst_2803_);
v___x_2815_ = l_Lean_Name_append(v___x_2814_, v_fst_2803_);
v___x_2816_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_2806_, v_opts_2811_, v___x_2815_);
lean_dec(v___x_2815_);
lean_dec_ref(v_opts_2811_);
lean_dec(v___x_2806_);
if (v___x_2816_ == 0)
{
lean_dec(v_snd_2804_);
lean_dec(v_fst_2803_);
v_as_2795_ = v_tail_2802_;
goto _start;
}
else
{
lean_object* v___x_2818_; lean_object* v___x_2819_; lean_object* v___x_2820_; 
v___x_2818_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2818_, 0, v_snd_2804_);
v___x_2819_ = l_Lean_MessageData_ofFormat(v___x_2818_);
v___x_2820_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__0(v_fst_2803_, v___x_2819_, v___y_2796_, v___y_2797_);
if (lean_obj_tag(v___x_2820_) == 0)
{
lean_dec_ref_known(v___x_2820_, 1);
v_as_2795_ = v_tail_2802_;
goto _start;
}
else
{
lean_dec(v_tail_2802_);
return v___x_2820_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__4___boxed(lean_object* v_as_2822_, lean_object* v___y_2823_, lean_object* v___y_2824_, lean_object* v___y_2825_){
_start:
{
lean_object* v_res_2826_; 
v_res_2826_ = l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__4(v_as_2822_, v___y_2823_, v___y_2824_);
lean_dec(v___y_2824_);
lean_dec_ref(v___y_2823_);
return v_res_2826_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0___redArg___lam__4(lean_object* v_env_2827_, lean_object* v_opts_2828_, lean_object* v_currNamespace_2829_, lean_object* v_openDecls_2830_, lean_object* v_n_2831_, lean_object* v___y_2832_, lean_object* v___y_2833_){
_start:
{
lean_object* v___x_2834_; lean_object* v___x_2835_; 
v___x_2834_ = l_Lean_ResolveName_resolveGlobalName(v_env_2827_, v_opts_2828_, v_currNamespace_2829_, v_openDecls_2830_, v_n_2831_);
v___x_2835_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2835_, 0, v___x_2834_);
lean_ctor_set(v___x_2835_, 1, v___y_2833_);
return v___x_2835_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0___redArg___lam__4___boxed(lean_object* v_env_2836_, lean_object* v_opts_2837_, lean_object* v_currNamespace_2838_, lean_object* v_openDecls_2839_, lean_object* v_n_2840_, lean_object* v___y_2841_, lean_object* v___y_2842_){
_start:
{
lean_object* v_res_2843_; 
v_res_2843_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0___redArg___lam__4(v_env_2836_, v_opts_2837_, v_currNamespace_2838_, v_openDecls_2839_, v_n_2840_, v___y_2841_, v___y_2842_);
lean_dec_ref(v___y_2841_);
lean_dec_ref(v_opts_2837_);
return v_res_2843_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0___redArg(lean_object* v_x_2845_, lean_object* v___y_2846_, lean_object* v___y_2847_){
_start:
{
lean_object* v___x_2849_; lean_object* v_env_2850_; lean_object* v___f_2851_; lean_object* v___f_2852_; lean_object* v___x_2853_; lean_object* v___x_2854_; lean_object* v_scopes_2855_; lean_object* v___x_2856_; lean_object* v_opts_2857_; lean_object* v___x_2858_; 
v___x_2849_ = lean_st_ref_get(v___y_2847_);
v_env_2850_ = lean_ctor_get(v___x_2849_, 0);
lean_inc_ref_n(v_env_2850_, 3);
lean_dec(v___x_2849_);
v___f_2851_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_2851_, 0, v_env_2850_);
v___f_2852_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0___redArg___lam__1___boxed), 4, 1);
lean_closure_set(v___f_2852_, 0, v_env_2850_);
v___x_2853_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_2854_ = lean_st_ref_get(v___y_2847_);
v_scopes_2855_ = lean_ctor_get(v___x_2854_, 2);
lean_inc(v_scopes_2855_);
lean_dec(v___x_2854_);
v___x_2856_ = l_List_head_x21___redArg(v___x_2853_, v_scopes_2855_);
lean_dec(v_scopes_2855_);
v_opts_2857_ = lean_ctor_get(v___x_2856_, 1);
lean_inc_ref(v_opts_2857_);
lean_dec(v___x_2856_);
v___x_2858_ = l_Lean_Elab_Command_getScope___redArg(v___y_2847_);
if (lean_obj_tag(v___x_2858_) == 0)
{
lean_object* v_a_2859_; lean_object* v_currNamespace_2860_; lean_object* v___f_2861_; lean_object* v___x_2862_; 
v_a_2859_ = lean_ctor_get(v___x_2858_, 0);
lean_inc(v_a_2859_);
lean_dec_ref_known(v___x_2858_, 1);
v_currNamespace_2860_ = lean_ctor_get(v_a_2859_, 2);
lean_inc_n(v_currNamespace_2860_, 2);
lean_dec(v_a_2859_);
v___f_2861_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_2861_, 0, v_currNamespace_2860_);
v___x_2862_ = l_Lean_Elab_Command_getScope___redArg(v___y_2847_);
if (lean_obj_tag(v___x_2862_) == 0)
{
lean_object* v_a_2863_; lean_object* v_openDecls_2864_; lean_object* v___f_2865_; lean_object* v___f_2866_; lean_object* v___x_2867_; lean_object* v_methods_2868_; lean_object* v___x_2869_; 
v_a_2863_ = lean_ctor_get(v___x_2862_, 0);
lean_inc(v_a_2863_);
lean_dec_ref_known(v___x_2862_, 1);
v_openDecls_2864_ = lean_ctor_get(v_a_2863_, 3);
lean_inc_n(v_openDecls_2864_, 2);
lean_dec(v_a_2863_);
lean_inc(v_currNamespace_2860_);
lean_inc_ref(v_env_2850_);
v___f_2865_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0___redArg___lam__3___boxed), 6, 3);
lean_closure_set(v___f_2865_, 0, v_env_2850_);
lean_closure_set(v___f_2865_, 1, v_currNamespace_2860_);
lean_closure_set(v___f_2865_, 2, v_openDecls_2864_);
v___f_2866_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0___redArg___lam__4___boxed), 7, 4);
lean_closure_set(v___f_2866_, 0, v_env_2850_);
lean_closure_set(v___f_2866_, 1, v_opts_2857_);
lean_closure_set(v___f_2866_, 2, v_currNamespace_2860_);
lean_closure_set(v___f_2866_, 3, v_openDecls_2864_);
v___x_2867_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2867_, 0, v___f_2852_);
lean_ctor_set(v___x_2867_, 1, v___f_2861_);
lean_ctor_set(v___x_2867_, 2, v___f_2851_);
lean_ctor_set(v___x_2867_, 3, v___f_2865_);
lean_ctor_set(v___x_2867_, 4, v___f_2866_);
v_methods_2868_ = l_unsafeCast___redArg(v___x_2867_);
lean_dec_ref_known(v___x_2867_, 5);
v___x_2869_ = l_Lean_Elab_Command_getRef___redArg(v___y_2846_);
if (lean_obj_tag(v___x_2869_) == 0)
{
lean_object* v_a_2870_; lean_object* v___x_2871_; 
v_a_2870_ = lean_ctor_get(v___x_2869_, 0);
lean_inc(v_a_2870_);
lean_dec_ref_known(v___x_2869_, 1);
v___x_2871_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_2846_);
if (lean_obj_tag(v___x_2871_) == 0)
{
lean_object* v_a_2872_; lean_object* v_currRecDepth_2873_; lean_object* v_quotContext_x3f_2874_; lean_object* v_a_2876_; 
v_a_2872_ = lean_ctor_get(v___x_2871_, 0);
lean_inc(v_a_2872_);
lean_dec_ref_known(v___x_2871_, 1);
v_currRecDepth_2873_ = lean_ctor_get(v___y_2846_, 2);
v_quotContext_x3f_2874_ = lean_ctor_get(v___y_2846_, 5);
if (lean_obj_tag(v_quotContext_x3f_2874_) == 0)
{
lean_object* v___x_2950_; lean_object* v_a_2951_; 
v___x_2950_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabElabRulesAux_spec__1___redArg(v___y_2847_);
v_a_2951_ = lean_ctor_get(v___x_2950_, 0);
lean_inc(v_a_2951_);
lean_dec_ref(v___x_2950_);
v_a_2876_ = v_a_2951_;
goto v___jp_2875_;
}
else
{
lean_object* v_val_2952_; 
v_val_2952_ = lean_ctor_get(v_quotContext_x3f_2874_, 0);
lean_inc(v_val_2952_);
v_a_2876_ = v_val_2952_;
goto v___jp_2875_;
}
v___jp_2875_:
{
lean_object* v___x_2877_; lean_object* v_maxRecDepth_2878_; lean_object* v___x_2879_; lean_object* v_nextMacroScope_2880_; lean_object* v___x_2881_; lean_object* v___x_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; 
v___x_2877_ = lean_st_ref_get(v___y_2847_);
v_maxRecDepth_2878_ = lean_ctor_get(v___x_2877_, 5);
lean_inc(v_maxRecDepth_2878_);
lean_dec(v___x_2877_);
v___x_2879_ = lean_st_ref_get(v___y_2847_);
v_nextMacroScope_2880_ = lean_ctor_get(v___x_2879_, 4);
lean_inc(v_nextMacroScope_2880_);
lean_dec(v___x_2879_);
lean_inc(v_currRecDepth_2873_);
v___x_2881_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2881_, 0, v_methods_2868_);
lean_ctor_set(v___x_2881_, 1, v_a_2876_);
lean_ctor_set(v___x_2881_, 2, v_a_2872_);
lean_ctor_set(v___x_2881_, 3, v_currRecDepth_2873_);
lean_ctor_set(v___x_2881_, 4, v_maxRecDepth_2878_);
lean_ctor_set(v___x_2881_, 5, v_a_2870_);
v___x_2882_ = lean_box(0);
v___x_2883_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2883_, 0, v_nextMacroScope_2880_);
lean_ctor_set(v___x_2883_, 1, v___x_2882_);
lean_ctor_set(v___x_2883_, 2, v___x_2882_);
v___x_2884_ = lean_apply_2(v_x_2845_, v___x_2881_, v___x_2883_);
if (lean_obj_tag(v___x_2884_) == 0)
{
lean_object* v_a_2885_; lean_object* v_a_2886_; lean_object* v_macroScope_2887_; lean_object* v_traceMsgs_2888_; lean_object* v_expandedMacroDecls_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; 
v_a_2885_ = lean_ctor_get(v___x_2884_, 1);
lean_inc(v_a_2885_);
v_a_2886_ = lean_ctor_get(v___x_2884_, 0);
lean_inc(v_a_2886_);
lean_dec_ref_known(v___x_2884_, 2);
v_macroScope_2887_ = lean_ctor_get(v_a_2885_, 0);
lean_inc(v_macroScope_2887_);
v_traceMsgs_2888_ = lean_ctor_get(v_a_2885_, 1);
lean_inc(v_traceMsgs_2888_);
v_expandedMacroDecls_2889_ = lean_ctor_get(v_a_2885_, 2);
lean_inc(v_expandedMacroDecls_2889_);
lean_dec(v_a_2885_);
v___x_2890_ = lean_box(0);
v___x_2891_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__3___redArg(v_expandedMacroDecls_2889_, v___x_2890_, v___y_2846_, v___y_2847_);
lean_dec(v_expandedMacroDecls_2889_);
if (lean_obj_tag(v___x_2891_) == 0)
{
lean_object* v___x_2892_; lean_object* v_env_2893_; lean_object* v_messages_2894_; lean_object* v_scopes_2895_; lean_object* v_usedQuotCtxts_2896_; lean_object* v_maxRecDepth_2897_; lean_object* v_ngen_2898_; lean_object* v_auxDeclNGen_2899_; lean_object* v_infoState_2900_; lean_object* v_traceState_2901_; lean_object* v_snapshotTasks_2902_; lean_object* v_prevLinterStates_2903_; lean_object* v_codeQualityEntryTasks_2904_; lean_object* v___x_2906_; uint8_t v_isShared_2907_; uint8_t v_isSharedCheck_2930_; 
lean_dec_ref_known(v___x_2891_, 1);
v___x_2892_ = lean_st_ref_take(v___y_2847_);
v_env_2893_ = lean_ctor_get(v___x_2892_, 0);
v_messages_2894_ = lean_ctor_get(v___x_2892_, 1);
v_scopes_2895_ = lean_ctor_get(v___x_2892_, 2);
v_usedQuotCtxts_2896_ = lean_ctor_get(v___x_2892_, 3);
v_maxRecDepth_2897_ = lean_ctor_get(v___x_2892_, 5);
v_ngen_2898_ = lean_ctor_get(v___x_2892_, 6);
v_auxDeclNGen_2899_ = lean_ctor_get(v___x_2892_, 7);
v_infoState_2900_ = lean_ctor_get(v___x_2892_, 8);
v_traceState_2901_ = lean_ctor_get(v___x_2892_, 9);
v_snapshotTasks_2902_ = lean_ctor_get(v___x_2892_, 10);
v_prevLinterStates_2903_ = lean_ctor_get(v___x_2892_, 11);
v_codeQualityEntryTasks_2904_ = lean_ctor_get(v___x_2892_, 12);
v_isSharedCheck_2930_ = !lean_is_exclusive(v___x_2892_);
if (v_isSharedCheck_2930_ == 0)
{
lean_object* v_unused_2931_; 
v_unused_2931_ = lean_ctor_get(v___x_2892_, 4);
lean_dec(v_unused_2931_);
v___x_2906_ = v___x_2892_;
v_isShared_2907_ = v_isSharedCheck_2930_;
goto v_resetjp_2905_;
}
else
{
lean_inc(v_codeQualityEntryTasks_2904_);
lean_inc(v_prevLinterStates_2903_);
lean_inc(v_snapshotTasks_2902_);
lean_inc(v_traceState_2901_);
lean_inc(v_infoState_2900_);
lean_inc(v_auxDeclNGen_2899_);
lean_inc(v_ngen_2898_);
lean_inc(v_maxRecDepth_2897_);
lean_inc(v_usedQuotCtxts_2896_);
lean_inc(v_scopes_2895_);
lean_inc(v_messages_2894_);
lean_inc(v_env_2893_);
lean_dec(v___x_2892_);
v___x_2906_ = lean_box(0);
v_isShared_2907_ = v_isSharedCheck_2930_;
goto v_resetjp_2905_;
}
v_resetjp_2905_:
{
lean_object* v___x_2909_; 
if (v_isShared_2907_ == 0)
{
lean_ctor_set(v___x_2906_, 4, v_macroScope_2887_);
v___x_2909_ = v___x_2906_;
goto v_reusejp_2908_;
}
else
{
lean_object* v_reuseFailAlloc_2929_; 
v_reuseFailAlloc_2929_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_2929_, 0, v_env_2893_);
lean_ctor_set(v_reuseFailAlloc_2929_, 1, v_messages_2894_);
lean_ctor_set(v_reuseFailAlloc_2929_, 2, v_scopes_2895_);
lean_ctor_set(v_reuseFailAlloc_2929_, 3, v_usedQuotCtxts_2896_);
lean_ctor_set(v_reuseFailAlloc_2929_, 4, v_macroScope_2887_);
lean_ctor_set(v_reuseFailAlloc_2929_, 5, v_maxRecDepth_2897_);
lean_ctor_set(v_reuseFailAlloc_2929_, 6, v_ngen_2898_);
lean_ctor_set(v_reuseFailAlloc_2929_, 7, v_auxDeclNGen_2899_);
lean_ctor_set(v_reuseFailAlloc_2929_, 8, v_infoState_2900_);
lean_ctor_set(v_reuseFailAlloc_2929_, 9, v_traceState_2901_);
lean_ctor_set(v_reuseFailAlloc_2929_, 10, v_snapshotTasks_2902_);
lean_ctor_set(v_reuseFailAlloc_2929_, 11, v_prevLinterStates_2903_);
lean_ctor_set(v_reuseFailAlloc_2929_, 12, v_codeQualityEntryTasks_2904_);
v___x_2909_ = v_reuseFailAlloc_2929_;
goto v_reusejp_2908_;
}
v_reusejp_2908_:
{
lean_object* v___x_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; 
v___x_2910_ = lean_st_ref_put(v___y_2847_, v___x_2909_);
v___x_2911_ = l_List_reverse___redArg(v_traceMsgs_2888_);
v___x_2912_ = l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__4(v___x_2911_, v___y_2846_, v___y_2847_);
if (lean_obj_tag(v___x_2912_) == 0)
{
lean_object* v___x_2914_; uint8_t v_isShared_2915_; uint8_t v_isSharedCheck_2919_; 
v_isSharedCheck_2919_ = !lean_is_exclusive(v___x_2912_);
if (v_isSharedCheck_2919_ == 0)
{
lean_object* v_unused_2920_; 
v_unused_2920_ = lean_ctor_get(v___x_2912_, 0);
lean_dec(v_unused_2920_);
v___x_2914_ = v___x_2912_;
v_isShared_2915_ = v_isSharedCheck_2919_;
goto v_resetjp_2913_;
}
else
{
lean_dec(v___x_2912_);
v___x_2914_ = lean_box(0);
v_isShared_2915_ = v_isSharedCheck_2919_;
goto v_resetjp_2913_;
}
v_resetjp_2913_:
{
lean_object* v___x_2917_; 
if (v_isShared_2915_ == 0)
{
lean_ctor_set(v___x_2914_, 0, v_a_2886_);
v___x_2917_ = v___x_2914_;
goto v_reusejp_2916_;
}
else
{
lean_object* v_reuseFailAlloc_2918_; 
v_reuseFailAlloc_2918_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2918_, 0, v_a_2886_);
v___x_2917_ = v_reuseFailAlloc_2918_;
goto v_reusejp_2916_;
}
v_reusejp_2916_:
{
return v___x_2917_;
}
}
}
else
{
lean_object* v_a_2921_; lean_object* v___x_2923_; uint8_t v_isShared_2924_; uint8_t v_isSharedCheck_2928_; 
lean_dec(v_a_2886_);
v_a_2921_ = lean_ctor_get(v___x_2912_, 0);
v_isSharedCheck_2928_ = !lean_is_exclusive(v___x_2912_);
if (v_isSharedCheck_2928_ == 0)
{
v___x_2923_ = v___x_2912_;
v_isShared_2924_ = v_isSharedCheck_2928_;
goto v_resetjp_2922_;
}
else
{
lean_inc(v_a_2921_);
lean_dec(v___x_2912_);
v___x_2923_ = lean_box(0);
v_isShared_2924_ = v_isSharedCheck_2928_;
goto v_resetjp_2922_;
}
v_resetjp_2922_:
{
lean_object* v___x_2926_; 
if (v_isShared_2924_ == 0)
{
v___x_2926_ = v___x_2923_;
goto v_reusejp_2925_;
}
else
{
lean_object* v_reuseFailAlloc_2927_; 
v_reuseFailAlloc_2927_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2927_, 0, v_a_2921_);
v___x_2926_ = v_reuseFailAlloc_2927_;
goto v_reusejp_2925_;
}
v_reusejp_2925_:
{
return v___x_2926_;
}
}
}
}
}
}
else
{
lean_object* v_a_2932_; lean_object* v___x_2934_; uint8_t v_isShared_2935_; uint8_t v_isSharedCheck_2939_; 
lean_dec(v_traceMsgs_2888_);
lean_dec(v_macroScope_2887_);
lean_dec(v_a_2886_);
v_a_2932_ = lean_ctor_get(v___x_2891_, 0);
v_isSharedCheck_2939_ = !lean_is_exclusive(v___x_2891_);
if (v_isSharedCheck_2939_ == 0)
{
v___x_2934_ = v___x_2891_;
v_isShared_2935_ = v_isSharedCheck_2939_;
goto v_resetjp_2933_;
}
else
{
lean_inc(v_a_2932_);
lean_dec(v___x_2891_);
v___x_2934_ = lean_box(0);
v_isShared_2935_ = v_isSharedCheck_2939_;
goto v_resetjp_2933_;
}
v_resetjp_2933_:
{
lean_object* v___x_2937_; 
if (v_isShared_2935_ == 0)
{
v___x_2937_ = v___x_2934_;
goto v_reusejp_2936_;
}
else
{
lean_object* v_reuseFailAlloc_2938_; 
v_reuseFailAlloc_2938_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2938_, 0, v_a_2932_);
v___x_2937_ = v_reuseFailAlloc_2938_;
goto v_reusejp_2936_;
}
v_reusejp_2936_:
{
return v___x_2937_;
}
}
}
}
else
{
lean_object* v_a_2940_; 
v_a_2940_ = lean_ctor_get(v___x_2884_, 0);
lean_inc(v_a_2940_);
lean_dec_ref_known(v___x_2884_, 2);
if (lean_obj_tag(v_a_2940_) == 0)
{
lean_object* v_a_2941_; lean_object* v_a_2942_; lean_object* v___x_2943_; uint8_t v___x_2944_; 
v_a_2941_ = lean_ctor_get(v_a_2940_, 0);
lean_inc(v_a_2941_);
v_a_2942_ = lean_ctor_get(v_a_2940_, 1);
lean_inc_ref(v_a_2942_);
lean_dec_ref_known(v_a_2940_, 2);
v___x_2943_ = ((lean_object*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0___redArg___closed__0));
v___x_2944_ = lean_string_dec_eq(v_a_2942_, v___x_2943_);
if (v___x_2944_ == 0)
{
lean_object* v___x_2945_; lean_object* v___x_2946_; lean_object* v___x_2947_; 
v___x_2945_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2945_, 0, v_a_2942_);
v___x_2946_ = l_Lean_MessageData_ofFormat(v___x_2945_);
v___x_2947_ = l_Lean_throwErrorAt___at___00Lean_Elab_Command_elabElabRulesAux_spec__3___redArg(v_a_2941_, v___x_2946_, v___y_2846_, v___y_2847_);
lean_dec(v_a_2941_);
return v___x_2947_;
}
else
{
lean_object* v___x_2948_; 
lean_dec_ref(v_a_2942_);
v___x_2948_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__5___redArg(v_a_2941_);
return v___x_2948_;
}
}
else
{
lean_object* v___x_2949_; 
v___x_2949_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabElabRulesAux_spec__2___redArg();
return v___x_2949_;
}
}
}
}
else
{
lean_object* v_a_2953_; lean_object* v___x_2955_; uint8_t v_isShared_2956_; uint8_t v_isSharedCheck_2960_; 
lean_dec(v_a_2870_);
lean_dec(v_methods_2868_);
lean_dec_ref(v_x_2845_);
v_a_2953_ = lean_ctor_get(v___x_2871_, 0);
v_isSharedCheck_2960_ = !lean_is_exclusive(v___x_2871_);
if (v_isSharedCheck_2960_ == 0)
{
v___x_2955_ = v___x_2871_;
v_isShared_2956_ = v_isSharedCheck_2960_;
goto v_resetjp_2954_;
}
else
{
lean_inc(v_a_2953_);
lean_dec(v___x_2871_);
v___x_2955_ = lean_box(0);
v_isShared_2956_ = v_isSharedCheck_2960_;
goto v_resetjp_2954_;
}
v_resetjp_2954_:
{
lean_object* v___x_2958_; 
if (v_isShared_2956_ == 0)
{
v___x_2958_ = v___x_2955_;
goto v_reusejp_2957_;
}
else
{
lean_object* v_reuseFailAlloc_2959_; 
v_reuseFailAlloc_2959_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2959_, 0, v_a_2953_);
v___x_2958_ = v_reuseFailAlloc_2959_;
goto v_reusejp_2957_;
}
v_reusejp_2957_:
{
return v___x_2958_;
}
}
}
}
else
{
lean_object* v_a_2961_; lean_object* v___x_2963_; uint8_t v_isShared_2964_; uint8_t v_isSharedCheck_2968_; 
lean_dec(v_methods_2868_);
lean_dec_ref(v_x_2845_);
v_a_2961_ = lean_ctor_get(v___x_2869_, 0);
v_isSharedCheck_2968_ = !lean_is_exclusive(v___x_2869_);
if (v_isSharedCheck_2968_ == 0)
{
v___x_2963_ = v___x_2869_;
v_isShared_2964_ = v_isSharedCheck_2968_;
goto v_resetjp_2962_;
}
else
{
lean_inc(v_a_2961_);
lean_dec(v___x_2869_);
v___x_2963_ = lean_box(0);
v_isShared_2964_ = v_isSharedCheck_2968_;
goto v_resetjp_2962_;
}
v_resetjp_2962_:
{
lean_object* v___x_2966_; 
if (v_isShared_2964_ == 0)
{
v___x_2966_ = v___x_2963_;
goto v_reusejp_2965_;
}
else
{
lean_object* v_reuseFailAlloc_2967_; 
v_reuseFailAlloc_2967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2967_, 0, v_a_2961_);
v___x_2966_ = v_reuseFailAlloc_2967_;
goto v_reusejp_2965_;
}
v_reusejp_2965_:
{
return v___x_2966_;
}
}
}
}
else
{
lean_object* v_a_2969_; lean_object* v___x_2971_; uint8_t v_isShared_2972_; uint8_t v_isSharedCheck_2976_; 
lean_dec_ref(v___f_2861_);
lean_dec(v_currNamespace_2860_);
lean_dec_ref(v_opts_2857_);
lean_dec_ref(v___f_2852_);
lean_dec_ref(v___f_2851_);
lean_dec_ref(v_env_2850_);
lean_dec_ref(v_x_2845_);
v_a_2969_ = lean_ctor_get(v___x_2862_, 0);
v_isSharedCheck_2976_ = !lean_is_exclusive(v___x_2862_);
if (v_isSharedCheck_2976_ == 0)
{
v___x_2971_ = v___x_2862_;
v_isShared_2972_ = v_isSharedCheck_2976_;
goto v_resetjp_2970_;
}
else
{
lean_inc(v_a_2969_);
lean_dec(v___x_2862_);
v___x_2971_ = lean_box(0);
v_isShared_2972_ = v_isSharedCheck_2976_;
goto v_resetjp_2970_;
}
v_resetjp_2970_:
{
lean_object* v___x_2974_; 
if (v_isShared_2972_ == 0)
{
v___x_2974_ = v___x_2971_;
goto v_reusejp_2973_;
}
else
{
lean_object* v_reuseFailAlloc_2975_; 
v_reuseFailAlloc_2975_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2975_, 0, v_a_2969_);
v___x_2974_ = v_reuseFailAlloc_2975_;
goto v_reusejp_2973_;
}
v_reusejp_2973_:
{
return v___x_2974_;
}
}
}
}
else
{
lean_object* v_a_2977_; lean_object* v___x_2979_; uint8_t v_isShared_2980_; uint8_t v_isSharedCheck_2984_; 
lean_dec_ref(v_opts_2857_);
lean_dec_ref(v___f_2852_);
lean_dec_ref(v___f_2851_);
lean_dec_ref(v_env_2850_);
lean_dec_ref(v_x_2845_);
v_a_2977_ = lean_ctor_get(v___x_2858_, 0);
v_isSharedCheck_2984_ = !lean_is_exclusive(v___x_2858_);
if (v_isSharedCheck_2984_ == 0)
{
v___x_2979_ = v___x_2858_;
v_isShared_2980_ = v_isSharedCheck_2984_;
goto v_resetjp_2978_;
}
else
{
lean_inc(v_a_2977_);
lean_dec(v___x_2858_);
v___x_2979_ = lean_box(0);
v_isShared_2980_ = v_isSharedCheck_2984_;
goto v_resetjp_2978_;
}
v_resetjp_2978_:
{
lean_object* v___x_2982_; 
if (v_isShared_2980_ == 0)
{
v___x_2982_ = v___x_2979_;
goto v_reusejp_2981_;
}
else
{
lean_object* v_reuseFailAlloc_2983_; 
v_reuseFailAlloc_2983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2983_, 0, v_a_2977_);
v___x_2982_ = v_reuseFailAlloc_2983_;
goto v_reusejp_2981_;
}
v_reusejp_2981_:
{
return v___x_2982_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0___redArg___boxed(lean_object* v_x_2985_, lean_object* v___y_2986_, lean_object* v___y_2987_, lean_object* v___y_2988_){
_start:
{
lean_object* v_res_2989_; 
v_res_2989_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0___redArg(v_x_2985_, v___y_2986_, v___y_2987_);
lean_dec(v___y_2987_);
lean_dec_ref(v___y_2986_);
return v_res_2989_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabElab(lean_object* v_x_3029_, lean_object* v_a_3030_, lean_object* v_a_3031_){
_start:
{
lean_object* v___x_3033_; lean_object* v___x_3034_; lean_object* v___y_3036_; lean_object* v___y_3037_; lean_object* v___y_3038_; lean_object* v___y_3039_; lean_object* v___y_3040_; lean_object* v___y_3041_; lean_object* v___y_3042_; lean_object* v___y_3043_; lean_object* v___y_3044_; lean_object* v___y_3045_; lean_object* v___y_3046_; lean_object* v___y_3047_; lean_object* v___y_3048_; lean_object* v___y_3049_; lean_object* v___y_3050_; lean_object* v___y_3051_; lean_object* v___x_3075_; uint8_t v___x_3076_; 
v___x_3033_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__0));
v___x_3034_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__1));
v___x_3075_ = ((lean_object*)(l_Lean_Elab_Command_elabElab___closed__3));
lean_inc(v_x_3029_);
v___x_3076_ = l_Lean_Syntax_isOfKind(v_x_3029_, v___x_3075_);
if (v___x_3076_ == 0)
{
lean_object* v___x_3077_; 
lean_dec(v_x_3029_);
v___x_3077_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabElabRulesAux_spec__2___redArg();
return v___x_3077_;
}
else
{
lean_object* v___x_3078_; lean_object* v___y_3080_; lean_object* v___y_3081_; lean_object* v___y_3082_; lean_object* v___y_3083_; lean_object* v___y_3084_; lean_object* v___y_3085_; lean_object* v___y_3086_; lean_object* v___y_3087_; lean_object* v___y_3088_; lean_object* v___y_3089_; lean_object* v___y_3090_; lean_object* v___y_3091_; lean_object* v___y_3092_; lean_object* v___y_3093_; lean_object* v___y_3094_; lean_object* v___y_3095_; lean_object* v___y_3109_; lean_object* v___y_3110_; lean_object* v___y_3111_; lean_object* v___y_3112_; lean_object* v___y_3113_; lean_object* v___y_3114_; lean_object* v___y_3115_; lean_object* v___y_3116_; lean_object* v___y_3117_; lean_object* v___y_3118_; lean_object* v___y_3119_; lean_object* v___y_3120_; lean_object* v___y_3121_; lean_object* v___y_3122_; lean_object* v___y_3129_; lean_object* v___y_3130_; lean_object* v___y_3131_; lean_object* v___y_3132_; lean_object* v___y_3133_; lean_object* v___y_3134_; lean_object* v___y_3135_; lean_object* v___y_3136_; lean_object* v___y_3137_; uint8_t v___y_3138_; lean_object* v___y_3139_; lean_object* v___y_3140_; size_t v___y_3141_; lean_object* v___y_3142_; lean_object* v___y_3143_; lean_object* v___y_3144_; lean_object* v___y_3145_; lean_object* v___y_3146_; lean_object* v___y_3147_; lean_object* v___y_3148_; lean_object* v___y_3149_; lean_object* v___y_3150_; lean_object* v___y_3151_; lean_object* v___y_3224_; lean_object* v___y_3225_; lean_object* v___y_3226_; lean_object* v___y_3227_; lean_object* v___y_3228_; lean_object* v___y_3229_; lean_object* v___y_3230_; lean_object* v___y_3231_; lean_object* v___y_3232_; lean_object* v___y_3233_; uint8_t v___y_3234_; lean_object* v___y_3235_; size_t v___y_3236_; lean_object* v___y_3237_; lean_object* v___y_3238_; lean_object* v___y_3239_; lean_object* v___y_3240_; lean_object* v___y_3241_; lean_object* v___y_3242_; lean_object* v___y_3243_; lean_object* v___y_3244_; lean_object* v___y_3245_; lean_object* v___y_3246_; lean_object* v___y_3263_; lean_object* v___y_3264_; lean_object* v___y_3265_; lean_object* v___y_3266_; lean_object* v___y_3267_; lean_object* v___y_3268_; lean_object* v___y_3269_; lean_object* v___y_3270_; lean_object* v___y_3271_; lean_object* v___y_3272_; lean_object* v___y_3273_; uint8_t v___y_3274_; size_t v___y_3275_; lean_object* v___y_3276_; lean_object* v___y_3277_; lean_object* v___y_3278_; lean_object* v___y_3279_; lean_object* v___y_3280_; lean_object* v___y_3281_; lean_object* v___y_3282_; lean_object* v___y_3283_; lean_object* v___y_3284_; lean_object* v___y_3285_; lean_object* v___y_3286_; lean_object* v___y_3299_; lean_object* v___y_3300_; lean_object* v___y_3301_; lean_object* v___y_3302_; lean_object* v___y_3303_; lean_object* v___y_3304_; lean_object* v___y_3305_; lean_object* v___y_3306_; lean_object* v___y_3307_; lean_object* v___y_3308_; uint8_t v___y_3309_; lean_object* v___y_3310_; size_t v___y_3311_; lean_object* v___y_3312_; lean_object* v___y_3313_; lean_object* v___y_3314_; lean_object* v___y_3315_; lean_object* v___y_3316_; lean_object* v___y_3317_; lean_object* v___y_3318_; lean_object* v___y_3319_; lean_object* v___y_3320_; lean_object* v___y_3321_; lean_object* v___y_3322_; lean_object* v___y_3338_; lean_object* v___y_3339_; lean_object* v___y_3340_; lean_object* v___y_3341_; lean_object* v___y_3342_; lean_object* v___y_3343_; lean_object* v___y_3344_; lean_object* v___y_3345_; lean_object* v___y_3346_; uint8_t v___y_3347_; size_t v___y_3348_; lean_object* v___y_3349_; lean_object* v___y_3350_; lean_object* v___y_3351_; lean_object* v___y_3352_; lean_object* v___y_3353_; lean_object* v___y_3354_; lean_object* v___y_3355_; lean_object* v___y_3356_; lean_object* v___y_3365_; lean_object* v___y_3366_; lean_object* v___y_3367_; lean_object* v___y_3368_; lean_object* v___y_3369_; lean_object* v___y_3370_; lean_object* v___y_3371_; lean_object* v___y_3372_; lean_object* v___y_3373_; lean_object* v___y_3374_; lean_object* v___y_3375_; lean_object* v___y_3376_; lean_object* v___y_3377_; lean_object* v_expectedType_x3f_3378_; lean_object* v___y_3379_; lean_object* v___y_3380_; lean_object* v___y_3439_; lean_object* v___y_3440_; lean_object* v___y_3441_; lean_object* v___y_3442_; lean_object* v___y_3443_; lean_object* v___y_3444_; lean_object* v___y_3445_; lean_object* v___y_3446_; lean_object* v___y_3447_; lean_object* v___y_3448_; lean_object* v___y_3449_; lean_object* v_prio_x3f_3450_; lean_object* v___y_3451_; lean_object* v___y_3452_; lean_object* v___y_3469_; lean_object* v___y_3470_; lean_object* v___y_3471_; lean_object* v___y_3472_; lean_object* v___y_3473_; lean_object* v___y_3474_; lean_object* v___y_3475_; lean_object* v___y_3476_; lean_object* v___y_3477_; lean_object* v___y_3478_; lean_object* v___y_3479_; lean_object* v_name_x3f_3480_; lean_object* v___y_3481_; lean_object* v___y_3482_; lean_object* v___y_3496_; lean_object* v___y_3497_; lean_object* v___y_3498_; lean_object* v___y_3499_; lean_object* v___y_3500_; lean_object* v___y_3501_; lean_object* v___y_3502_; lean_object* v___y_3503_; lean_object* v___y_3504_; lean_object* v___y_3505_; lean_object* v_prec_x3f_3506_; lean_object* v___y_3507_; lean_object* v___y_3508_; lean_object* v___y_3522_; lean_object* v___y_3523_; lean_object* v_attrs_x3f_3524_; lean_object* v___y_3525_; lean_object* v___y_3526_; lean_object* v_doc_x3f_3548_; lean_object* v___y_3549_; lean_object* v___y_3550_; lean_object* v___x_3564_; uint8_t v___x_3565_; 
v___x_3078_ = lean_unsigned_to_nat(0u);
v___x_3564_ = l_Lean_Syntax_getArg(v_x_3029_, v___x_3078_);
v___x_3565_ = l_Lean_Syntax_isNone(v___x_3564_);
if (v___x_3565_ == 0)
{
lean_object* v___x_3566_; uint8_t v___x_3567_; 
v___x_3566_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_3564_);
v___x_3567_ = l_Lean_Syntax_matchesNull(v___x_3564_, v___x_3566_);
if (v___x_3567_ == 0)
{
lean_object* v___x_3568_; 
lean_dec(v___x_3564_);
lean_dec(v_x_3029_);
v___x_3568_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabElabRulesAux_spec__2___redArg();
return v___x_3568_;
}
else
{
lean_object* v_doc_x3f_3569_; 
v_doc_x3f_3569_ = l_Lean_Syntax_getArg(v___x_3564_, v___x_3078_);
lean_dec(v___x_3564_);
if (v___x_3565_ == 0)
{
lean_object* v___x_3572_; uint8_t v___x_3573_; 
v___x_3572_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRules___lam__2___closed__7));
lean_inc(v_doc_x3f_3569_);
v___x_3573_ = l_Lean_Syntax_isOfKind(v_doc_x3f_3569_, v___x_3572_);
if (v___x_3573_ == 0)
{
lean_object* v___x_3574_; 
lean_dec(v_doc_x3f_3569_);
lean_dec(v_x_3029_);
v___x_3574_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabElabRulesAux_spec__2___redArg();
return v___x_3574_;
}
else
{
goto v___jp_3570_;
}
}
else
{
goto v___jp_3570_;
}
v___jp_3570_:
{
lean_object* v___x_3571_; 
v___x_3571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3571_, 0, v_doc_x3f_3569_);
v_doc_x3f_3548_ = v___x_3571_;
v___y_3549_ = v_a_3030_;
v___y_3550_ = v_a_3031_;
goto v___jp_3547_;
}
}
}
else
{
lean_object* v___x_3575_; 
lean_dec(v___x_3564_);
v___x_3575_ = lean_box(0);
v_doc_x3f_3548_ = v___x_3575_;
v___y_3549_ = v_a_3030_;
v___y_3550_ = v_a_3031_;
goto v___jp_3547_;
}
v___jp_3079_:
{
lean_object* v___x_3096_; lean_object* v___x_3097_; lean_object* v___x_3098_; lean_object* v___x_3099_; lean_object* v___x_3100_; lean_object* v___x_3101_; lean_object* v___x_3102_; 
lean_inc_ref_n(v___y_3093_, 2);
v___x_3096_ = l_Array_append___redArg(v___y_3093_, v___y_3095_);
lean_dec_ref(v___y_3095_);
lean_inc_n(v___y_3086_, 3);
lean_inc_n(v___y_3087_, 6);
v___x_3097_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3097_, 0, v___y_3087_);
lean_ctor_set(v___x_3097_, 1, v___y_3086_);
lean_ctor_set(v___x_3097_, 2, v___x_3096_);
v___x_3098_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3098_, 0, v___y_3087_);
lean_ctor_set(v___x_3098_, 1, v___y_3086_);
lean_ctor_set(v___x_3098_, 2, v___y_3093_);
lean_inc_ref(v___x_3098_);
lean_inc(v___y_3084_);
v___x_3099_ = l_Lean_Syntax_node1(v___y_3087_, v___y_3084_, v___x_3098_);
lean_inc_ref(v___y_3080_);
v___x_3100_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3100_, 0, v___y_3087_);
lean_ctor_set(v___x_3100_, 1, v___y_3080_);
lean_inc_ref(v___y_3090_);
v___x_3101_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3101_, 0, v___y_3087_);
lean_ctor_set(v___x_3101_, 1, v___y_3090_);
v___x_3102_ = l_Lean_Syntax_node2(v___y_3087_, v___y_3086_, v___x_3101_, v___y_3081_);
if (lean_obj_tag(v___y_3085_) == 1)
{
lean_object* v_val_3103_; lean_object* v___x_3104_; lean_object* v___x_3105_; lean_object* v___x_3106_; 
v_val_3103_ = lean_ctor_get(v___y_3085_, 0);
lean_inc(v_val_3103_);
lean_dec_ref_known(v___y_3085_, 1);
v___x_3104_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRules___lam__1___closed__0));
lean_inc(v___y_3087_);
v___x_3105_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3105_, 0, v___y_3087_);
lean_ctor_set(v___x_3105_, 1, v___x_3104_);
v___x_3106_ = l_Array_mkArray2___redArg(v___x_3105_, v_val_3103_);
v___y_3036_ = v___y_3082_;
v___y_3037_ = v___x_3098_;
v___y_3038_ = v___y_3083_;
v___y_3039_ = v___x_3100_;
v___y_3040_ = v___y_3086_;
v___y_3041_ = v___y_3087_;
v___y_3042_ = v___x_3099_;
v___y_3043_ = v___y_3088_;
v___y_3044_ = v___x_3102_;
v___y_3045_ = v___y_3089_;
v___y_3046_ = v___x_3097_;
v___y_3047_ = v___y_3091_;
v___y_3048_ = v___y_3093_;
v___y_3049_ = v___y_3094_;
v___y_3050_ = v___y_3092_;
v___y_3051_ = v___x_3106_;
goto v___jp_3035_;
}
else
{
lean_object* v___x_3107_; 
lean_dec(v___y_3085_);
v___x_3107_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__33));
v___y_3036_ = v___y_3082_;
v___y_3037_ = v___x_3098_;
v___y_3038_ = v___y_3083_;
v___y_3039_ = v___x_3100_;
v___y_3040_ = v___y_3086_;
v___y_3041_ = v___y_3087_;
v___y_3042_ = v___x_3099_;
v___y_3043_ = v___y_3088_;
v___y_3044_ = v___x_3102_;
v___y_3045_ = v___y_3089_;
v___y_3046_ = v___x_3097_;
v___y_3047_ = v___y_3091_;
v___y_3048_ = v___y_3093_;
v___y_3049_ = v___y_3094_;
v___y_3050_ = v___y_3092_;
v___y_3051_ = v___x_3107_;
goto v___jp_3035_;
}
}
v___jp_3108_:
{
lean_object* v___x_3123_; lean_object* v___x_3124_; 
v___x_3123_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRules___lam__2___closed__0));
v___x_3124_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRules___lam__2___closed__1));
if (lean_obj_tag(v___y_3122_) == 1)
{
lean_object* v_val_3125_; lean_object* v___x_3126_; 
v_val_3125_ = lean_ctor_get(v___y_3122_, 0);
lean_inc(v_val_3125_);
lean_dec_ref_known(v___y_3122_, 1);
v___x_3126_ = l_Array_mkArray1___redArg(v_val_3125_);
v___y_3080_ = v___x_3123_;
v___y_3081_ = v___y_3109_;
v___y_3082_ = v___x_3124_;
v___y_3083_ = v___y_3110_;
v___y_3084_ = v___y_3111_;
v___y_3085_ = v___y_3112_;
v___y_3086_ = v___y_3113_;
v___y_3087_ = v___y_3114_;
v___y_3088_ = v___y_3115_;
v___y_3089_ = v___y_3116_;
v___y_3090_ = v___y_3117_;
v___y_3091_ = v___y_3118_;
v___y_3092_ = v___y_3119_;
v___y_3093_ = v___y_3120_;
v___y_3094_ = v___y_3121_;
v___y_3095_ = v___x_3126_;
goto v___jp_3079_;
}
else
{
lean_object* v___x_3127_; 
lean_dec(v___y_3122_);
v___x_3127_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__33));
v___y_3080_ = v___x_3123_;
v___y_3081_ = v___y_3109_;
v___y_3082_ = v___x_3124_;
v___y_3083_ = v___y_3110_;
v___y_3084_ = v___y_3111_;
v___y_3085_ = v___y_3112_;
v___y_3086_ = v___y_3113_;
v___y_3087_ = v___y_3114_;
v___y_3088_ = v___y_3115_;
v___y_3089_ = v___y_3116_;
v___y_3090_ = v___y_3117_;
v___y_3091_ = v___y_3118_;
v___y_3092_ = v___y_3119_;
v___y_3093_ = v___y_3120_;
v___y_3094_ = v___y_3121_;
v___y_3095_ = v___x_3127_;
goto v___jp_3079_;
}
}
v___jp_3128_:
{
lean_object* v___x_3152_; lean_object* v___x_3153_; lean_object* v___x_3154_; lean_object* v___x_3155_; lean_object* v___x_3156_; lean_object* v___x_3157_; lean_object* v___x_3158_; lean_object* v___x_3159_; lean_object* v___x_3160_; lean_object* v___x_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; lean_object* v___x_3164_; lean_object* v___x_3165_; lean_object* v___x_3166_; lean_object* v___x_3167_; size_t v_sz_3168_; lean_object* v___x_3169_; lean_object* v___x_3170_; lean_object* v___x_3171_; lean_object* v___x_3172_; lean_object* v___x_3173_; lean_object* v___x_3174_; lean_object* v___x_3175_; lean_object* v___x_3176_; lean_object* v___x_3177_; lean_object* v___x_3178_; lean_object* v___x_3179_; lean_object* v___x_3180_; lean_object* v___x_3181_; lean_object* v___x_3182_; lean_object* v___x_3183_; lean_object* v___x_3184_; lean_object* v___x_3185_; lean_object* v___x_3186_; lean_object* v___x_3187_; lean_object* v___x_3188_; lean_object* v___x_3189_; 
lean_inc_ref_n(v___y_3145_, 2);
v___x_3152_ = l_Array_append___redArg(v___y_3145_, v___y_3151_);
lean_dec_ref(v___y_3151_);
lean_inc_n(v___y_3136_, 3);
lean_inc_n(v___y_3149_, 9);
v___x_3153_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3153_, 0, v___y_3149_);
lean_ctor_set(v___x_3153_, 1, v___y_3136_);
lean_ctor_set(v___x_3153_, 2, v___x_3152_);
v___x_3154_ = ((lean_object*)(l_Lean_Elab_Command_elabElab___closed__5));
v___x_3155_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRules___lam__1___closed__1));
v___x_3156_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3156_, 0, v___y_3149_);
lean_ctor_set(v___x_3156_, 1, v___x_3155_);
v___x_3157_ = ((lean_object*)(l_Lean_Elab_Command_elabElab___closed__6));
v___x_3158_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3158_, 0, v___y_3149_);
lean_ctor_set(v___x_3158_, 1, v___x_3157_);
v___x_3159_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__12));
v___x_3160_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3160_, 0, v___y_3149_);
lean_ctor_set(v___x_3160_, 1, v___x_3159_);
v___x_3161_ = l_Nat_reprFast(v___y_3132_);
v___x_3162_ = lean_box(2);
v___x_3163_ = l_Lean_Syntax_mkNumLit(v___x_3161_, v___x_3162_);
v___x_3164_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRules___lam__1___closed__3));
v___x_3165_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3165_, 0, v___y_3149_);
lean_ctor_set(v___x_3165_, 1, v___x_3164_);
v___x_3166_ = l_Lean_Syntax_node5(v___y_3149_, v___x_3154_, v___x_3156_, v___x_3158_, v___x_3160_, v___x_3163_, v___x_3165_);
v___x_3167_ = l_Lean_Syntax_node1(v___y_3149_, v___y_3136_, v___x_3166_);
v_sz_3168_ = lean_array_size(v___y_3135_);
v___x_3169_ = l_unsafeCast___redArg(v___y_3135_);
lean_dec_ref(v___y_3135_);
v___x_3170_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElab_spec__2(v_sz_3168_, v___y_3141_, v___x_3169_);
v___x_3171_ = l_unsafeCast___redArg(v___x_3170_);
lean_dec_ref(v___x_3170_);
v___x_3172_ = l_Array_append___redArg(v___y_3145_, v___x_3171_);
lean_dec(v___x_3171_);
v___x_3173_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3173_, 0, v___y_3149_);
lean_ctor_set(v___x_3173_, 1, v___y_3136_);
lean_ctor_set(v___x_3173_, 2, v___x_3172_);
v___x_3174_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__7));
v___x_3175_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3175_, 0, v___y_3149_);
lean_ctor_set(v___x_3175_, 1, v___x_3174_);
v___x_3176_ = lean_unsigned_to_nat(10u);
v___x_3177_ = lean_mk_empty_array_with_capacity(v___x_3176_);
v___x_3178_ = lean_array_push(v___x_3177_, v___y_3147_);
v___x_3179_ = lean_array_push(v___x_3178_, v___y_3148_);
v___x_3180_ = lean_array_push(v___x_3179_, v___y_3133_);
v___x_3181_ = lean_array_push(v___x_3180_, v___y_3146_);
v___x_3182_ = lean_array_push(v___x_3181_, v___y_3139_);
v___x_3183_ = lean_array_push(v___x_3182_, v___x_3153_);
v___x_3184_ = lean_array_push(v___x_3183_, v___x_3167_);
v___x_3185_ = lean_array_push(v___x_3184_, v___x_3173_);
v___x_3186_ = lean_array_push(v___x_3185_, v___x_3175_);
lean_inc(v___y_3129_);
v___x_3187_ = lean_array_push(v___x_3186_, v___y_3129_);
lean_inc(v___y_3140_);
v___x_3188_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3188_, 0, v___y_3149_);
lean_ctor_set(v___x_3188_, 1, v___y_3140_);
lean_ctor_set(v___x_3188_, 2, v___x_3187_);
v___x_3189_ = l_Lean_Elab_Command_elabSyntax(v___x_3188_, v___y_3130_, v___y_3142_);
if (lean_obj_tag(v___x_3189_) == 0)
{
lean_object* v_a_3190_; lean_object* v___x_3191_; lean_object* v___x_3192_; lean_object* v___x_3193_; 
v_a_3190_ = lean_ctor_get(v___x_3189_, 0);
lean_inc(v_a_3190_);
lean_dec_ref_known(v___x_3189_, 1);
v___x_3191_ = l_unsafeCast___redArg(v___y_3137_);
lean_dec_ref(v___y_3137_);
v___x_3192_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3192_, 0, v___x_3162_);
lean_ctor_set(v___x_3192_, 1, v_a_3190_);
lean_ctor_set(v___x_3192_, 2, v___x_3191_);
v___x_3193_ = l_Lean_Elab_Command_getRef___redArg(v___y_3130_);
if (lean_obj_tag(v___x_3193_) == 0)
{
lean_object* v_a_3194_; lean_object* v___x_3195_; lean_object* v___x_3196_; 
v_a_3194_ = lean_ctor_get(v___x_3193_, 0);
lean_inc(v_a_3194_);
lean_dec_ref_known(v___x_3193_, 1);
v___x_3195_ = l_Lean_SourceInfo_fromRef(v_a_3194_, v___y_3138_);
lean_dec(v_a_3194_);
v___x_3196_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_3130_);
if (lean_obj_tag(v___x_3196_) == 0)
{
lean_object* v_quotContext_x3f_3197_; 
lean_dec_ref_known(v___x_3196_, 1);
v_quotContext_x3f_3197_ = lean_ctor_get(v___y_3130_, 5);
if (lean_obj_tag(v_quotContext_x3f_3197_) == 0)
{
lean_object* v___x_3198_; 
v___x_3198_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabElabRulesAux_spec__1___redArg(v___y_3142_);
lean_dec_ref(v___x_3198_);
v___y_3109_ = v___y_3129_;
v___y_3110_ = v___y_3130_;
v___y_3111_ = v___y_3131_;
v___y_3112_ = v___y_3134_;
v___y_3113_ = v___y_3136_;
v___y_3114_ = v___x_3195_;
v___y_3115_ = v___y_3142_;
v___y_3116_ = v___x_3192_;
v___y_3117_ = v___x_3174_;
v___y_3118_ = v___x_3164_;
v___y_3119_ = v___y_3144_;
v___y_3120_ = v___y_3145_;
v___y_3121_ = v___y_3143_;
v___y_3122_ = v___y_3150_;
goto v___jp_3108_;
}
else
{
v___y_3109_ = v___y_3129_;
v___y_3110_ = v___y_3130_;
v___y_3111_ = v___y_3131_;
v___y_3112_ = v___y_3134_;
v___y_3113_ = v___y_3136_;
v___y_3114_ = v___x_3195_;
v___y_3115_ = v___y_3142_;
v___y_3116_ = v___x_3192_;
v___y_3117_ = v___x_3174_;
v___y_3118_ = v___x_3164_;
v___y_3119_ = v___y_3144_;
v___y_3120_ = v___y_3145_;
v___y_3121_ = v___y_3143_;
v___y_3122_ = v___y_3150_;
goto v___jp_3108_;
}
}
else
{
lean_object* v_a_3199_; lean_object* v___x_3201_; uint8_t v_isShared_3202_; uint8_t v_isSharedCheck_3206_; 
lean_dec(v___x_3195_);
lean_dec_ref_known(v___x_3192_, 3);
lean_dec(v___y_3150_);
lean_dec(v___y_3144_);
lean_dec(v___y_3134_);
lean_dec(v___y_3129_);
v_a_3199_ = lean_ctor_get(v___x_3196_, 0);
v_isSharedCheck_3206_ = !lean_is_exclusive(v___x_3196_);
if (v_isSharedCheck_3206_ == 0)
{
v___x_3201_ = v___x_3196_;
v_isShared_3202_ = v_isSharedCheck_3206_;
goto v_resetjp_3200_;
}
else
{
lean_inc(v_a_3199_);
lean_dec(v___x_3196_);
v___x_3201_ = lean_box(0);
v_isShared_3202_ = v_isSharedCheck_3206_;
goto v_resetjp_3200_;
}
v_resetjp_3200_:
{
lean_object* v___x_3204_; 
if (v_isShared_3202_ == 0)
{
v___x_3204_ = v___x_3201_;
goto v_reusejp_3203_;
}
else
{
lean_object* v_reuseFailAlloc_3205_; 
v_reuseFailAlloc_3205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3205_, 0, v_a_3199_);
v___x_3204_ = v_reuseFailAlloc_3205_;
goto v_reusejp_3203_;
}
v_reusejp_3203_:
{
return v___x_3204_;
}
}
}
}
else
{
lean_object* v_a_3207_; lean_object* v___x_3209_; uint8_t v_isShared_3210_; uint8_t v_isSharedCheck_3214_; 
lean_dec_ref_known(v___x_3192_, 3);
lean_dec(v___y_3150_);
lean_dec(v___y_3144_);
lean_dec(v___y_3134_);
lean_dec(v___y_3129_);
v_a_3207_ = lean_ctor_get(v___x_3193_, 0);
v_isSharedCheck_3214_ = !lean_is_exclusive(v___x_3193_);
if (v_isSharedCheck_3214_ == 0)
{
v___x_3209_ = v___x_3193_;
v_isShared_3210_ = v_isSharedCheck_3214_;
goto v_resetjp_3208_;
}
else
{
lean_inc(v_a_3207_);
lean_dec(v___x_3193_);
v___x_3209_ = lean_box(0);
v_isShared_3210_ = v_isSharedCheck_3214_;
goto v_resetjp_3208_;
}
v_resetjp_3208_:
{
lean_object* v___x_3212_; 
if (v_isShared_3210_ == 0)
{
v___x_3212_ = v___x_3209_;
goto v_reusejp_3211_;
}
else
{
lean_object* v_reuseFailAlloc_3213_; 
v_reuseFailAlloc_3213_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3213_, 0, v_a_3207_);
v___x_3212_ = v_reuseFailAlloc_3213_;
goto v_reusejp_3211_;
}
v_reusejp_3211_:
{
return v___x_3212_;
}
}
}
}
else
{
lean_object* v_a_3215_; lean_object* v___x_3217_; uint8_t v_isShared_3218_; uint8_t v_isSharedCheck_3222_; 
lean_dec(v___y_3150_);
lean_dec(v___y_3144_);
lean_dec_ref(v___y_3137_);
lean_dec(v___y_3134_);
lean_dec(v___y_3129_);
v_a_3215_ = lean_ctor_get(v___x_3189_, 0);
v_isSharedCheck_3222_ = !lean_is_exclusive(v___x_3189_);
if (v_isSharedCheck_3222_ == 0)
{
v___x_3217_ = v___x_3189_;
v_isShared_3218_ = v_isSharedCheck_3222_;
goto v_resetjp_3216_;
}
else
{
lean_inc(v_a_3215_);
lean_dec(v___x_3189_);
v___x_3217_ = lean_box(0);
v_isShared_3218_ = v_isSharedCheck_3222_;
goto v_resetjp_3216_;
}
v_resetjp_3216_:
{
lean_object* v___x_3220_; 
if (v_isShared_3218_ == 0)
{
v___x_3220_ = v___x_3217_;
goto v_reusejp_3219_;
}
else
{
lean_object* v_reuseFailAlloc_3221_; 
v_reuseFailAlloc_3221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3221_, 0, v_a_3215_);
v___x_3220_ = v_reuseFailAlloc_3221_;
goto v_reusejp_3219_;
}
v_reusejp_3219_:
{
return v___x_3220_;
}
}
}
}
v___jp_3223_:
{
lean_object* v___x_3247_; lean_object* v___x_3248_; 
lean_inc_ref(v___y_3240_);
v___x_3247_ = l_Array_append___redArg(v___y_3240_, v___y_3246_);
lean_dec_ref(v___y_3246_);
lean_inc(v___y_3232_);
lean_inc(v___y_3244_);
v___x_3248_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3248_, 0, v___y_3244_);
lean_ctor_set(v___x_3248_, 1, v___y_3232_);
lean_ctor_set(v___x_3248_, 2, v___x_3247_);
if (lean_obj_tag(v___y_3225_) == 1)
{
lean_object* v_val_3249_; lean_object* v___x_3250_; lean_object* v___x_3251_; lean_object* v___x_3252_; lean_object* v___x_3253_; lean_object* v___x_3254_; lean_object* v___x_3255_; lean_object* v___x_3256_; lean_object* v___x_3257_; lean_object* v___x_3258_; lean_object* v___x_3259_; lean_object* v___x_3260_; 
v_val_3249_ = lean_ctor_get(v___y_3225_, 0);
lean_inc(v_val_3249_);
lean_dec_ref_known(v___y_3225_, 1);
v___x_3250_ = ((lean_object*)(l_Lean_Elab_Command_elabElab___closed__8));
v___x_3251_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRules___lam__1___closed__1));
lean_inc_n(v___y_3244_, 5);
v___x_3252_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3252_, 0, v___y_3244_);
lean_ctor_set(v___x_3252_, 1, v___x_3251_);
v___x_3253_ = ((lean_object*)(l_Lean_Elab_Command_elabElab___closed__9));
v___x_3254_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3254_, 0, v___y_3244_);
lean_ctor_set(v___x_3254_, 1, v___x_3253_);
v___x_3255_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__12));
v___x_3256_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3256_, 0, v___y_3244_);
lean_ctor_set(v___x_3256_, 1, v___x_3255_);
v___x_3257_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRules___lam__1___closed__3));
v___x_3258_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3258_, 0, v___y_3244_);
lean_ctor_set(v___x_3258_, 1, v___x_3257_);
v___x_3259_ = l_Lean_Syntax_node5(v___y_3244_, v___x_3250_, v___x_3252_, v___x_3254_, v___x_3256_, v_val_3249_, v___x_3258_);
v___x_3260_ = l_Array_mkArray1___redArg(v___x_3259_);
v___y_3129_ = v___y_3224_;
v___y_3130_ = v___y_3226_;
v___y_3131_ = v___y_3227_;
v___y_3132_ = v___y_3228_;
v___y_3133_ = v___y_3229_;
v___y_3134_ = v___y_3230_;
v___y_3135_ = v___y_3231_;
v___y_3136_ = v___y_3232_;
v___y_3137_ = v___y_3233_;
v___y_3138_ = v___y_3234_;
v___y_3139_ = v___x_3248_;
v___y_3140_ = v___y_3235_;
v___y_3141_ = v___y_3236_;
v___y_3142_ = v___y_3237_;
v___y_3143_ = v___y_3239_;
v___y_3144_ = v___y_3238_;
v___y_3145_ = v___y_3240_;
v___y_3146_ = v___y_3241_;
v___y_3147_ = v___y_3243_;
v___y_3148_ = v___y_3242_;
v___y_3149_ = v___y_3244_;
v___y_3150_ = v___y_3245_;
v___y_3151_ = v___x_3260_;
goto v___jp_3128_;
}
else
{
lean_object* v___x_3261_; 
lean_dec(v___y_3225_);
v___x_3261_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__33));
v___y_3129_ = v___y_3224_;
v___y_3130_ = v___y_3226_;
v___y_3131_ = v___y_3227_;
v___y_3132_ = v___y_3228_;
v___y_3133_ = v___y_3229_;
v___y_3134_ = v___y_3230_;
v___y_3135_ = v___y_3231_;
v___y_3136_ = v___y_3232_;
v___y_3137_ = v___y_3233_;
v___y_3138_ = v___y_3234_;
v___y_3139_ = v___x_3248_;
v___y_3140_ = v___y_3235_;
v___y_3141_ = v___y_3236_;
v___y_3142_ = v___y_3237_;
v___y_3143_ = v___y_3239_;
v___y_3144_ = v___y_3238_;
v___y_3145_ = v___y_3240_;
v___y_3146_ = v___y_3241_;
v___y_3147_ = v___y_3243_;
v___y_3148_ = v___y_3242_;
v___y_3149_ = v___y_3244_;
v___y_3150_ = v___y_3245_;
v___y_3151_ = v___x_3261_;
goto v___jp_3128_;
}
}
v___jp_3262_:
{
lean_object* v___x_3287_; lean_object* v___x_3288_; lean_object* v___x_3289_; lean_object* v___x_3290_; 
lean_inc_ref(v___y_3282_);
v___x_3287_ = l_Array_append___redArg(v___y_3282_, v___y_3286_);
lean_dec_ref(v___y_3286_);
lean_inc(v___y_3271_);
lean_inc(v___y_3284_);
v___x_3288_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3288_, 0, v___y_3284_);
lean_ctor_set(v___x_3288_, 1, v___y_3271_);
lean_ctor_set(v___x_3288_, 2, v___x_3287_);
v___x_3289_ = l_Lean_SourceInfo_fromRef(v___y_3276_, v___x_3076_);
lean_dec(v___y_3276_);
lean_inc_ref(v___y_3279_);
v___x_3290_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3290_, 0, v___x_3289_);
lean_ctor_set(v___x_3290_, 1, v___y_3279_);
if (lean_obj_tag(v___y_3277_) == 1)
{
lean_object* v_val_3291_; lean_object* v___x_3292_; lean_object* v___x_3293_; lean_object* v___x_3294_; lean_object* v___x_3295_; lean_object* v___x_3296_; 
v_val_3291_ = lean_ctor_get(v___y_3277_, 0);
lean_inc(v_val_3291_);
lean_dec_ref_known(v___y_3277_, 1);
v___x_3292_ = ((lean_object*)(l_Lean_Elab_Command_elabElab___closed__11));
v___x_3293_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__7));
lean_inc_n(v___y_3284_, 2);
v___x_3294_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3294_, 0, v___y_3284_);
lean_ctor_set(v___x_3294_, 1, v___x_3293_);
v___x_3295_ = l_Lean_Syntax_node2(v___y_3284_, v___x_3292_, v___x_3294_, v_val_3291_);
v___x_3296_ = l_Array_mkArray1___redArg(v___x_3295_);
v___y_3224_ = v___y_3263_;
v___y_3225_ = v___y_3264_;
v___y_3226_ = v___y_3265_;
v___y_3227_ = v___y_3266_;
v___y_3228_ = v___y_3267_;
v___y_3229_ = v___y_3268_;
v___y_3230_ = v___y_3269_;
v___y_3231_ = v___y_3270_;
v___y_3232_ = v___y_3271_;
v___y_3233_ = v___y_3272_;
v___y_3234_ = v___y_3274_;
v___y_3235_ = v___y_3273_;
v___y_3236_ = v___y_3275_;
v___y_3237_ = v___y_3278_;
v___y_3238_ = v___y_3281_;
v___y_3239_ = v___y_3280_;
v___y_3240_ = v___y_3282_;
v___y_3241_ = v___x_3290_;
v___y_3242_ = v___x_3288_;
v___y_3243_ = v___y_3283_;
v___y_3244_ = v___y_3284_;
v___y_3245_ = v___y_3285_;
v___y_3246_ = v___x_3296_;
goto v___jp_3223_;
}
else
{
lean_object* v___x_3297_; 
lean_dec(v___y_3277_);
v___x_3297_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__33));
v___y_3224_ = v___y_3263_;
v___y_3225_ = v___y_3264_;
v___y_3226_ = v___y_3265_;
v___y_3227_ = v___y_3266_;
v___y_3228_ = v___y_3267_;
v___y_3229_ = v___y_3268_;
v___y_3230_ = v___y_3269_;
v___y_3231_ = v___y_3270_;
v___y_3232_ = v___y_3271_;
v___y_3233_ = v___y_3272_;
v___y_3234_ = v___y_3274_;
v___y_3235_ = v___y_3273_;
v___y_3236_ = v___y_3275_;
v___y_3237_ = v___y_3278_;
v___y_3238_ = v___y_3281_;
v___y_3239_ = v___y_3280_;
v___y_3240_ = v___y_3282_;
v___y_3241_ = v___x_3290_;
v___y_3242_ = v___x_3288_;
v___y_3243_ = v___y_3283_;
v___y_3244_ = v___y_3284_;
v___y_3245_ = v___y_3285_;
v___y_3246_ = v___x_3297_;
goto v___jp_3223_;
}
}
v___jp_3298_:
{
lean_object* v___x_3323_; lean_object* v___x_3324_; 
lean_inc_ref(v___y_3319_);
v___x_3323_ = l_Array_append___redArg(v___y_3319_, v___y_3322_);
lean_dec_ref(v___y_3322_);
lean_inc(v___y_3307_);
lean_inc(v___y_3320_);
v___x_3324_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3324_, 0, v___y_3320_);
lean_ctor_set(v___x_3324_, 1, v___y_3307_);
lean_ctor_set(v___x_3324_, 2, v___x_3323_);
if (lean_obj_tag(v___y_3316_) == 1)
{
lean_object* v_val_3325_; lean_object* v___x_3326_; lean_object* v___x_3327_; lean_object* v___x_3328_; lean_object* v___x_3329_; lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; lean_object* v___x_3333_; lean_object* v___x_3334_; lean_object* v___x_3335_; 
v_val_3325_ = lean_ctor_get(v___y_3316_, 0);
lean_inc(v_val_3325_);
lean_dec_ref_known(v___y_3316_, 1);
v___x_3326_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__0));
lean_inc_ref(v___y_3318_);
v___x_3327_ = l_Lean_Name_mkStr4(v___x_3033_, v___x_3034_, v___y_3318_, v___x_3326_);
v___x_3328_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__1));
lean_inc_n(v___y_3320_, 4);
v___x_3329_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3329_, 0, v___y_3320_);
lean_ctor_set(v___x_3329_, 1, v___x_3328_);
lean_inc_ref(v___y_3319_);
v___x_3330_ = l_Array_append___redArg(v___y_3319_, v_val_3325_);
lean_dec(v_val_3325_);
lean_inc(v___y_3307_);
v___x_3331_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3331_, 0, v___y_3320_);
lean_ctor_set(v___x_3331_, 1, v___y_3307_);
lean_ctor_set(v___x_3331_, 2, v___x_3330_);
v___x_3332_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__3));
v___x_3333_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3333_, 0, v___y_3320_);
lean_ctor_set(v___x_3333_, 1, v___x_3332_);
v___x_3334_ = l_Lean_Syntax_node3(v___y_3320_, v___x_3327_, v___x_3329_, v___x_3331_, v___x_3333_);
v___x_3335_ = l_Array_mkArray1___redArg(v___x_3334_);
v___y_3263_ = v___y_3299_;
v___y_3264_ = v___y_3300_;
v___y_3265_ = v___y_3301_;
v___y_3266_ = v___y_3302_;
v___y_3267_ = v___y_3303_;
v___y_3268_ = v___y_3304_;
v___y_3269_ = v___y_3305_;
v___y_3270_ = v___y_3306_;
v___y_3271_ = v___y_3307_;
v___y_3272_ = v___y_3308_;
v___y_3273_ = v___y_3310_;
v___y_3274_ = v___y_3309_;
v___y_3275_ = v___y_3311_;
v___y_3276_ = v___y_3312_;
v___y_3277_ = v___y_3313_;
v___y_3278_ = v___y_3314_;
v___y_3279_ = v___y_3315_;
v___y_3280_ = v___y_3318_;
v___y_3281_ = v___y_3317_;
v___y_3282_ = v___y_3319_;
v___y_3283_ = v___x_3324_;
v___y_3284_ = v___y_3320_;
v___y_3285_ = v___y_3321_;
v___y_3286_ = v___x_3335_;
goto v___jp_3262_;
}
else
{
lean_object* v___x_3336_; 
lean_dec(v___y_3316_);
v___x_3336_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__33));
v___y_3263_ = v___y_3299_;
v___y_3264_ = v___y_3300_;
v___y_3265_ = v___y_3301_;
v___y_3266_ = v___y_3302_;
v___y_3267_ = v___y_3303_;
v___y_3268_ = v___y_3304_;
v___y_3269_ = v___y_3305_;
v___y_3270_ = v___y_3306_;
v___y_3271_ = v___y_3307_;
v___y_3272_ = v___y_3308_;
v___y_3273_ = v___y_3310_;
v___y_3274_ = v___y_3309_;
v___y_3275_ = v___y_3311_;
v___y_3276_ = v___y_3312_;
v___y_3277_ = v___y_3313_;
v___y_3278_ = v___y_3314_;
v___y_3279_ = v___y_3315_;
v___y_3280_ = v___y_3318_;
v___y_3281_ = v___y_3317_;
v___y_3282_ = v___y_3319_;
v___y_3283_ = v___x_3324_;
v___y_3284_ = v___y_3320_;
v___y_3285_ = v___y_3321_;
v___y_3286_ = v___x_3336_;
goto v___jp_3262_;
}
}
v___jp_3337_:
{
lean_object* v___x_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; lean_object* v___x_3360_; 
v___x_3357_ = ((lean_object*)(l_Lean_Elab_Command_elabElab___closed__12));
v___x_3358_ = ((lean_object*)(l_Lean_Elab_Command_elabElab___closed__13));
v___x_3359_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__9));
v___x_3360_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__7, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__7);
if (lean_obj_tag(v___y_3356_) == 1)
{
lean_object* v_val_3361_; lean_object* v___x_3362_; 
v_val_3361_ = lean_ctor_get(v___y_3356_, 0);
lean_inc(v_val_3361_);
v___x_3362_ = l_Array_mkArray1___redArg(v_val_3361_);
v___y_3299_ = v___y_3338_;
v___y_3300_ = v___y_3339_;
v___y_3301_ = v___y_3340_;
v___y_3302_ = v___y_3341_;
v___y_3303_ = v___y_3342_;
v___y_3304_ = v___y_3343_;
v___y_3305_ = v___y_3344_;
v___y_3306_ = v___y_3345_;
v___y_3307_ = v___x_3359_;
v___y_3308_ = v___y_3346_;
v___y_3309_ = v___y_3347_;
v___y_3310_ = v___x_3358_;
v___y_3311_ = v___y_3348_;
v___y_3312_ = v___y_3349_;
v___y_3313_ = v___y_3350_;
v___y_3314_ = v___y_3351_;
v___y_3315_ = v___x_3357_;
v___y_3316_ = v___y_3354_;
v___y_3317_ = v___y_3353_;
v___y_3318_ = v___y_3352_;
v___y_3319_ = v___x_3360_;
v___y_3320_ = v___y_3355_;
v___y_3321_ = v___y_3356_;
v___y_3322_ = v___x_3362_;
goto v___jp_3298_;
}
else
{
lean_object* v___x_3363_; 
v___x_3363_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__33));
v___y_3299_ = v___y_3338_;
v___y_3300_ = v___y_3339_;
v___y_3301_ = v___y_3340_;
v___y_3302_ = v___y_3341_;
v___y_3303_ = v___y_3342_;
v___y_3304_ = v___y_3343_;
v___y_3305_ = v___y_3344_;
v___y_3306_ = v___y_3345_;
v___y_3307_ = v___x_3359_;
v___y_3308_ = v___y_3346_;
v___y_3309_ = v___y_3347_;
v___y_3310_ = v___x_3358_;
v___y_3311_ = v___y_3348_;
v___y_3312_ = v___y_3349_;
v___y_3313_ = v___y_3350_;
v___y_3314_ = v___y_3351_;
v___y_3315_ = v___x_3357_;
v___y_3316_ = v___y_3354_;
v___y_3317_ = v___y_3353_;
v___y_3318_ = v___y_3352_;
v___y_3319_ = v___x_3360_;
v___y_3320_ = v___y_3355_;
v___y_3321_ = v___y_3356_;
v___y_3322_ = v___x_3363_;
goto v___jp_3298_;
}
}
v___jp_3364_:
{
lean_object* v___x_3381_; lean_object* v___x_3382_; lean_object* v_args_3383_; lean_object* v___x_3384_; lean_object* v___x_3385_; 
v___x_3381_ = l_Lean_Syntax_getArg(v___y_3371_, v___y_3372_);
lean_dec(v___y_3371_);
v___x_3382_ = l_Lean_Syntax_getArgs(v___y_3374_);
lean_dec(v___y_3374_);
v_args_3383_ = l_unsafeCast___redArg(v___x_3382_);
lean_dec_ref(v___x_3382_);
v___x_3384_ = lean_alloc_closure((void*)(l_Lean_evalOptPrio___boxed), 3, 1);
lean_closure_set(v___x_3384_, 0, v___y_3369_);
v___x_3385_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0___redArg(v___x_3384_, v___y_3379_, v___y_3380_);
if (lean_obj_tag(v___x_3385_) == 0)
{
lean_object* v_a_3386_; size_t v_sz_3387_; size_t v___x_3388_; lean_object* v___x_3389_; lean_object* v___x_3390_; lean_object* v___x_3391_; lean_object* v___x_3392_; lean_object* v___x_16138__overap_3393_; lean_object* v___x_3394_; 
v_a_3386_ = lean_ctor_get(v___x_3385_, 0);
lean_inc(v_a_3386_);
lean_dec_ref_known(v___x_3385_, 1);
v_sz_3387_ = lean_array_size(v_args_3383_);
v___x_3388_ = ((size_t)0ULL);
v___x_3389_ = l_unsafeCast___redArg(v_args_3383_);
lean_dec(v_args_3383_);
v___x_3390_ = lean_box_usize(v_sz_3387_);
v___x_3391_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___boxed__const__1));
v___x_3392_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElab_spec__1___boxed), 6, 3);
lean_closure_set(v___x_3392_, 0, v___x_3390_);
lean_closure_set(v___x_3392_, 1, v___x_3391_);
lean_closure_set(v___x_3392_, 2, v___x_3389_);
v___x_16138__overap_3393_ = l_unsafeCast___redArg(v___x_3392_);
lean_dec_ref(v___x_3392_);
lean_inc(v___y_3380_);
lean_inc_ref(v___y_3379_);
v___x_3394_ = lean_apply_3(v___x_16138__overap_3393_, v___y_3379_, v___y_3380_, lean_box(0));
if (lean_obj_tag(v___x_3394_) == 0)
{
lean_object* v_a_3395_; lean_object* v___x_3396_; lean_object* v_fst_3397_; lean_object* v_snd_3398_; lean_object* v___x_3399_; 
v_a_3395_ = lean_ctor_get(v___x_3394_, 0);
lean_inc(v_a_3395_);
lean_dec_ref_known(v___x_3394_, 1);
v___x_3396_ = l_Array_unzip___redArg(v_a_3395_);
lean_dec(v_a_3395_);
v_fst_3397_ = lean_ctor_get(v___x_3396_, 0);
lean_inc(v_fst_3397_);
v_snd_3398_ = lean_ctor_get(v___x_3396_, 1);
lean_inc(v_snd_3398_);
lean_dec_ref(v___x_3396_);
v___x_3399_ = l_Lean_Elab_Command_getRef___redArg(v___y_3379_);
if (lean_obj_tag(v___x_3399_) == 0)
{
lean_object* v_a_3400_; uint8_t v___x_3401_; lean_object* v___x_3402_; lean_object* v___x_3403_; 
v_a_3400_ = lean_ctor_get(v___x_3399_, 0);
lean_inc(v_a_3400_);
lean_dec_ref_known(v___x_3399_, 1);
v___x_3401_ = 0;
v___x_3402_ = l_Lean_SourceInfo_fromRef(v_a_3400_, v___x_3401_);
lean_dec(v_a_3400_);
v___x_3403_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_3379_);
if (lean_obj_tag(v___x_3403_) == 0)
{
lean_object* v_quotContext_x3f_3404_; 
lean_dec_ref_known(v___x_3403_, 1);
v_quotContext_x3f_3404_ = lean_ctor_get(v___y_3379_, 5);
if (lean_obj_tag(v_quotContext_x3f_3404_) == 0)
{
lean_object* v___x_3405_; 
v___x_3405_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabElabRulesAux_spec__1___redArg(v___y_3380_);
lean_dec_ref(v___x_3405_);
v___y_3338_ = v___y_3365_;
v___y_3339_ = v___y_3366_;
v___y_3340_ = v___y_3379_;
v___y_3341_ = v___y_3367_;
v___y_3342_ = v_a_3386_;
v___y_3343_ = v___y_3368_;
v___y_3344_ = v_expectedType_x3f_3378_;
v___y_3345_ = v_fst_3397_;
v___y_3346_ = v_snd_3398_;
v___y_3347_ = v___x_3401_;
v___y_3348_ = v___x_3388_;
v___y_3349_ = v___y_3370_;
v___y_3350_ = v___y_3373_;
v___y_3351_ = v___y_3380_;
v___y_3352_ = v___y_3375_;
v___y_3353_ = v___x_3381_;
v___y_3354_ = v___y_3376_;
v___y_3355_ = v___x_3402_;
v___y_3356_ = v___y_3377_;
goto v___jp_3337_;
}
else
{
v___y_3338_ = v___y_3365_;
v___y_3339_ = v___y_3366_;
v___y_3340_ = v___y_3379_;
v___y_3341_ = v___y_3367_;
v___y_3342_ = v_a_3386_;
v___y_3343_ = v___y_3368_;
v___y_3344_ = v_expectedType_x3f_3378_;
v___y_3345_ = v_fst_3397_;
v___y_3346_ = v_snd_3398_;
v___y_3347_ = v___x_3401_;
v___y_3348_ = v___x_3388_;
v___y_3349_ = v___y_3370_;
v___y_3350_ = v___y_3373_;
v___y_3351_ = v___y_3380_;
v___y_3352_ = v___y_3375_;
v___y_3353_ = v___x_3381_;
v___y_3354_ = v___y_3376_;
v___y_3355_ = v___x_3402_;
v___y_3356_ = v___y_3377_;
goto v___jp_3337_;
}
}
else
{
lean_object* v_a_3406_; lean_object* v___x_3408_; uint8_t v_isShared_3409_; uint8_t v_isSharedCheck_3413_; 
lean_dec(v___x_3402_);
lean_dec(v_snd_3398_);
lean_dec(v_fst_3397_);
lean_dec(v_a_3386_);
lean_dec(v___x_3381_);
lean_dec(v_expectedType_x3f_3378_);
lean_dec(v___y_3377_);
lean_dec(v___y_3376_);
lean_dec(v___y_3373_);
lean_dec(v___y_3370_);
lean_dec(v___y_3368_);
lean_dec(v___y_3366_);
lean_dec(v___y_3365_);
v_a_3406_ = lean_ctor_get(v___x_3403_, 0);
v_isSharedCheck_3413_ = !lean_is_exclusive(v___x_3403_);
if (v_isSharedCheck_3413_ == 0)
{
v___x_3408_ = v___x_3403_;
v_isShared_3409_ = v_isSharedCheck_3413_;
goto v_resetjp_3407_;
}
else
{
lean_inc(v_a_3406_);
lean_dec(v___x_3403_);
v___x_3408_ = lean_box(0);
v_isShared_3409_ = v_isSharedCheck_3413_;
goto v_resetjp_3407_;
}
v_resetjp_3407_:
{
lean_object* v___x_3411_; 
if (v_isShared_3409_ == 0)
{
v___x_3411_ = v___x_3408_;
goto v_reusejp_3410_;
}
else
{
lean_object* v_reuseFailAlloc_3412_; 
v_reuseFailAlloc_3412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3412_, 0, v_a_3406_);
v___x_3411_ = v_reuseFailAlloc_3412_;
goto v_reusejp_3410_;
}
v_reusejp_3410_:
{
return v___x_3411_;
}
}
}
}
else
{
lean_object* v_a_3414_; lean_object* v___x_3416_; uint8_t v_isShared_3417_; uint8_t v_isSharedCheck_3421_; 
lean_dec(v_snd_3398_);
lean_dec(v_fst_3397_);
lean_dec(v_a_3386_);
lean_dec(v___x_3381_);
lean_dec(v_expectedType_x3f_3378_);
lean_dec(v___y_3377_);
lean_dec(v___y_3376_);
lean_dec(v___y_3373_);
lean_dec(v___y_3370_);
lean_dec(v___y_3368_);
lean_dec(v___y_3366_);
lean_dec(v___y_3365_);
v_a_3414_ = lean_ctor_get(v___x_3399_, 0);
v_isSharedCheck_3421_ = !lean_is_exclusive(v___x_3399_);
if (v_isSharedCheck_3421_ == 0)
{
v___x_3416_ = v___x_3399_;
v_isShared_3417_ = v_isSharedCheck_3421_;
goto v_resetjp_3415_;
}
else
{
lean_inc(v_a_3414_);
lean_dec(v___x_3399_);
v___x_3416_ = lean_box(0);
v_isShared_3417_ = v_isSharedCheck_3421_;
goto v_resetjp_3415_;
}
v_resetjp_3415_:
{
lean_object* v___x_3419_; 
if (v_isShared_3417_ == 0)
{
v___x_3419_ = v___x_3416_;
goto v_reusejp_3418_;
}
else
{
lean_object* v_reuseFailAlloc_3420_; 
v_reuseFailAlloc_3420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3420_, 0, v_a_3414_);
v___x_3419_ = v_reuseFailAlloc_3420_;
goto v_reusejp_3418_;
}
v_reusejp_3418_:
{
return v___x_3419_;
}
}
}
}
else
{
lean_object* v_a_3422_; lean_object* v___x_3424_; uint8_t v_isShared_3425_; uint8_t v_isSharedCheck_3429_; 
lean_dec(v_a_3386_);
lean_dec(v___x_3381_);
lean_dec(v_expectedType_x3f_3378_);
lean_dec(v___y_3377_);
lean_dec(v___y_3376_);
lean_dec(v___y_3373_);
lean_dec(v___y_3370_);
lean_dec(v___y_3368_);
lean_dec(v___y_3366_);
lean_dec(v___y_3365_);
v_a_3422_ = lean_ctor_get(v___x_3394_, 0);
v_isSharedCheck_3429_ = !lean_is_exclusive(v___x_3394_);
if (v_isSharedCheck_3429_ == 0)
{
v___x_3424_ = v___x_3394_;
v_isShared_3425_ = v_isSharedCheck_3429_;
goto v_resetjp_3423_;
}
else
{
lean_inc(v_a_3422_);
lean_dec(v___x_3394_);
v___x_3424_ = lean_box(0);
v_isShared_3425_ = v_isSharedCheck_3429_;
goto v_resetjp_3423_;
}
v_resetjp_3423_:
{
lean_object* v___x_3427_; 
if (v_isShared_3425_ == 0)
{
v___x_3427_ = v___x_3424_;
goto v_reusejp_3426_;
}
else
{
lean_object* v_reuseFailAlloc_3428_; 
v_reuseFailAlloc_3428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3428_, 0, v_a_3422_);
v___x_3427_ = v_reuseFailAlloc_3428_;
goto v_reusejp_3426_;
}
v_reusejp_3426_:
{
return v___x_3427_;
}
}
}
}
else
{
lean_object* v_a_3430_; lean_object* v___x_3432_; uint8_t v_isShared_3433_; uint8_t v_isSharedCheck_3437_; 
lean_dec(v_args_3383_);
lean_dec(v___x_3381_);
lean_dec(v_expectedType_x3f_3378_);
lean_dec(v___y_3377_);
lean_dec(v___y_3376_);
lean_dec(v___y_3373_);
lean_dec(v___y_3370_);
lean_dec(v___y_3368_);
lean_dec(v___y_3366_);
lean_dec(v___y_3365_);
v_a_3430_ = lean_ctor_get(v___x_3385_, 0);
v_isSharedCheck_3437_ = !lean_is_exclusive(v___x_3385_);
if (v_isSharedCheck_3437_ == 0)
{
v___x_3432_ = v___x_3385_;
v_isShared_3433_ = v_isSharedCheck_3437_;
goto v_resetjp_3431_;
}
else
{
lean_inc(v_a_3430_);
lean_dec(v___x_3385_);
v___x_3432_ = lean_box(0);
v_isShared_3433_ = v_isSharedCheck_3437_;
goto v_resetjp_3431_;
}
v_resetjp_3431_:
{
lean_object* v___x_3435_; 
if (v_isShared_3433_ == 0)
{
v___x_3435_ = v___x_3432_;
goto v_reusejp_3434_;
}
else
{
lean_object* v_reuseFailAlloc_3436_; 
v_reuseFailAlloc_3436_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3436_, 0, v_a_3430_);
v___x_3435_ = v_reuseFailAlloc_3436_;
goto v_reusejp_3434_;
}
v_reusejp_3434_:
{
return v___x_3435_;
}
}
}
}
v___jp_3438_:
{
lean_object* v___x_3453_; lean_object* v___x_3454_; lean_object* v___x_3455_; uint8_t v___x_3456_; 
v___x_3453_ = lean_unsigned_to_nat(8u);
v___x_3454_ = l_Lean_Syntax_getArg(v_x_3029_, v___x_3453_);
v___x_3455_ = ((lean_object*)(l_Lean_Elab_Command_elabElab___closed__15));
lean_inc(v___x_3454_);
v___x_3456_ = l_Lean_Syntax_isOfKind(v___x_3454_, v___x_3455_);
if (v___x_3456_ == 0)
{
lean_object* v___x_3457_; 
lean_dec(v___x_3454_);
lean_dec(v_prio_x3f_3450_);
lean_dec(v___y_3449_);
lean_dec(v___y_3447_);
lean_dec(v___y_3444_);
lean_dec(v___y_3442_);
lean_dec(v___y_3440_);
lean_dec(v___y_3439_);
lean_dec(v_x_3029_);
v___x_3457_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabElabRulesAux_spec__2___redArg();
return v___x_3457_;
}
else
{
lean_object* v___x_3458_; lean_object* v___x_3459_; lean_object* v___x_3460_; lean_object* v___x_3461_; uint8_t v___x_3462_; 
v___x_3458_ = lean_unsigned_to_nat(7u);
v___x_3459_ = l_Lean_Syntax_getArg(v_x_3029_, v___x_3458_);
lean_dec(v_x_3029_);
v___x_3460_ = l_Lean_Syntax_getArg(v___x_3454_, v___y_3446_);
v___x_3461_ = l_Lean_Syntax_getArg(v___x_3454_, v___y_3443_);
v___x_3462_ = l_Lean_Syntax_isNone(v___x_3461_);
if (v___x_3462_ == 0)
{
uint8_t v___x_3463_; 
lean_inc(v___x_3461_);
v___x_3463_ = l_Lean_Syntax_matchesNull(v___x_3461_, v___y_3443_);
if (v___x_3463_ == 0)
{
lean_object* v___x_3464_; 
lean_dec(v___x_3461_);
lean_dec(v___x_3460_);
lean_dec(v___x_3459_);
lean_dec(v___x_3454_);
lean_dec(v_prio_x3f_3450_);
lean_dec(v___y_3449_);
lean_dec(v___y_3447_);
lean_dec(v___y_3444_);
lean_dec(v___y_3442_);
lean_dec(v___y_3440_);
lean_dec(v___y_3439_);
v___x_3464_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabElabRulesAux_spec__2___redArg();
return v___x_3464_;
}
else
{
lean_object* v_expectedType_x3f_3465_; lean_object* v___x_3466_; 
v_expectedType_x3f_3465_ = l_Lean_Syntax_getArg(v___x_3461_, v___y_3446_);
lean_dec(v___x_3461_);
v___x_3466_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3466_, 0, v_expectedType_x3f_3465_);
v___y_3365_ = v___x_3460_;
v___y_3366_ = v___y_3442_;
v___y_3367_ = v___y_3445_;
v___y_3368_ = v___y_3444_;
v___y_3369_ = v_prio_x3f_3450_;
v___y_3370_ = v___y_3439_;
v___y_3371_ = v___x_3454_;
v___y_3372_ = v___y_3441_;
v___y_3373_ = v___y_3440_;
v___y_3374_ = v___x_3459_;
v___y_3375_ = v___y_3448_;
v___y_3376_ = v___y_3447_;
v___y_3377_ = v___y_3449_;
v_expectedType_x3f_3378_ = v___x_3466_;
v___y_3379_ = v___y_3451_;
v___y_3380_ = v___y_3452_;
goto v___jp_3364_;
}
}
else
{
lean_object* v___x_3467_; 
lean_dec(v___x_3461_);
v___x_3467_ = lean_box(0);
v___y_3365_ = v___x_3460_;
v___y_3366_ = v___y_3442_;
v___y_3367_ = v___y_3445_;
v___y_3368_ = v___y_3444_;
v___y_3369_ = v_prio_x3f_3450_;
v___y_3370_ = v___y_3439_;
v___y_3371_ = v___x_3454_;
v___y_3372_ = v___y_3441_;
v___y_3373_ = v___y_3440_;
v___y_3374_ = v___x_3459_;
v___y_3375_ = v___y_3448_;
v___y_3376_ = v___y_3447_;
v___y_3377_ = v___y_3449_;
v_expectedType_x3f_3378_ = v___x_3467_;
v___y_3379_ = v___y_3451_;
v___y_3380_ = v___y_3452_;
goto v___jp_3364_;
}
}
}
v___jp_3468_:
{
lean_object* v___x_3483_; lean_object* v___x_3484_; uint8_t v___x_3485_; 
v___x_3483_ = lean_unsigned_to_nat(6u);
v___x_3484_ = l_Lean_Syntax_getArg(v_x_3029_, v___x_3483_);
v___x_3485_ = l_Lean_Syntax_isNone(v___x_3484_);
if (v___x_3485_ == 0)
{
uint8_t v___x_3486_; 
lean_inc(v___x_3484_);
v___x_3486_ = l_Lean_Syntax_matchesNull(v___x_3484_, v___y_3472_);
if (v___x_3486_ == 0)
{
lean_object* v___x_3487_; 
lean_dec(v___x_3484_);
lean_dec(v_name_x3f_3480_);
lean_dec(v___y_3479_);
lean_dec(v___y_3478_);
lean_dec(v___y_3474_);
lean_dec(v___y_3471_);
lean_dec(v___y_3469_);
lean_dec(v_x_3029_);
v___x_3487_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabElabRulesAux_spec__2___redArg();
return v___x_3487_;
}
else
{
lean_object* v___x_3488_; lean_object* v___x_3489_; uint8_t v___x_3490_; 
v___x_3488_ = l_Lean_Syntax_getArg(v___x_3484_, v___x_3078_);
lean_dec(v___x_3484_);
v___x_3489_ = ((lean_object*)(l_Lean_Elab_Command_elabElab___closed__5));
lean_inc(v___x_3488_);
v___x_3490_ = l_Lean_Syntax_isOfKind(v___x_3488_, v___x_3489_);
if (v___x_3490_ == 0)
{
lean_object* v___x_3491_; 
lean_dec(v___x_3488_);
lean_dec(v_name_x3f_3480_);
lean_dec(v___y_3479_);
lean_dec(v___y_3478_);
lean_dec(v___y_3474_);
lean_dec(v___y_3471_);
lean_dec(v___y_3469_);
lean_dec(v_x_3029_);
v___x_3491_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabElabRulesAux_spec__2___redArg();
return v___x_3491_;
}
else
{
lean_object* v_prio_x3f_3492_; lean_object* v___x_3493_; 
v_prio_x3f_3492_ = l_Lean_Syntax_getArg(v___x_3488_, v___y_3476_);
lean_dec(v___x_3488_);
v___x_3493_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3493_, 0, v_prio_x3f_3492_);
v___y_3439_ = v___y_3469_;
v___y_3440_ = v___y_3471_;
v___y_3441_ = v___y_3470_;
v___y_3442_ = v_name_x3f_3480_;
v___y_3443_ = v___y_3475_;
v___y_3444_ = v___y_3474_;
v___y_3445_ = v___y_3473_;
v___y_3446_ = v___y_3472_;
v___y_3447_ = v___y_3478_;
v___y_3448_ = v___y_3477_;
v___y_3449_ = v___y_3479_;
v_prio_x3f_3450_ = v___x_3493_;
v___y_3451_ = v___y_3481_;
v___y_3452_ = v___y_3482_;
goto v___jp_3438_;
}
}
}
else
{
lean_object* v___x_3494_; 
lean_dec(v___x_3484_);
v___x_3494_ = lean_box(0);
v___y_3439_ = v___y_3469_;
v___y_3440_ = v___y_3471_;
v___y_3441_ = v___y_3470_;
v___y_3442_ = v_name_x3f_3480_;
v___y_3443_ = v___y_3475_;
v___y_3444_ = v___y_3474_;
v___y_3445_ = v___y_3473_;
v___y_3446_ = v___y_3472_;
v___y_3447_ = v___y_3478_;
v___y_3448_ = v___y_3477_;
v___y_3449_ = v___y_3479_;
v_prio_x3f_3450_ = v___x_3494_;
v___y_3451_ = v___y_3481_;
v___y_3452_ = v___y_3482_;
goto v___jp_3438_;
}
}
v___jp_3495_:
{
lean_object* v___x_3509_; lean_object* v___x_3510_; uint8_t v___x_3511_; 
v___x_3509_ = lean_unsigned_to_nat(5u);
v___x_3510_ = l_Lean_Syntax_getArg(v_x_3029_, v___x_3509_);
v___x_3511_ = l_Lean_Syntax_isNone(v___x_3510_);
if (v___x_3511_ == 0)
{
uint8_t v___x_3512_; 
lean_inc(v___x_3510_);
v___x_3512_ = l_Lean_Syntax_matchesNull(v___x_3510_, v___y_3501_);
if (v___x_3512_ == 0)
{
lean_object* v___x_3513_; 
lean_dec(v___x_3510_);
lean_dec(v_prec_x3f_3506_);
lean_dec(v___y_3505_);
lean_dec(v___y_3503_);
lean_dec(v___y_3499_);
lean_dec(v___y_3496_);
lean_dec(v_x_3029_);
v___x_3513_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabElabRulesAux_spec__2___redArg();
return v___x_3513_;
}
else
{
lean_object* v___x_3514_; lean_object* v___x_3515_; uint8_t v___x_3516_; 
v___x_3514_ = l_Lean_Syntax_getArg(v___x_3510_, v___x_3078_);
lean_dec(v___x_3510_);
v___x_3515_ = ((lean_object*)(l_Lean_Elab_Command_elabElab___closed__8));
lean_inc(v___x_3514_);
v___x_3516_ = l_Lean_Syntax_isOfKind(v___x_3514_, v___x_3515_);
if (v___x_3516_ == 0)
{
lean_object* v___x_3517_; 
lean_dec(v___x_3514_);
lean_dec(v_prec_x3f_3506_);
lean_dec(v___y_3505_);
lean_dec(v___y_3503_);
lean_dec(v___y_3499_);
lean_dec(v___y_3496_);
lean_dec(v_x_3029_);
v___x_3517_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabElabRulesAux_spec__2___redArg();
return v___x_3517_;
}
else
{
lean_object* v_name_x3f_3518_; lean_object* v___x_3519_; 
v_name_x3f_3518_ = l_Lean_Syntax_getArg(v___x_3514_, v___y_3502_);
lean_dec(v___x_3514_);
v___x_3519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3519_, 0, v_name_x3f_3518_);
v___y_3469_ = v___y_3496_;
v___y_3470_ = v___y_3497_;
v___y_3471_ = v_prec_x3f_3506_;
v___y_3472_ = v___y_3501_;
v___y_3473_ = v___y_3500_;
v___y_3474_ = v___y_3499_;
v___y_3475_ = v___y_3498_;
v___y_3476_ = v___y_3502_;
v___y_3477_ = v___y_3504_;
v___y_3478_ = v___y_3503_;
v___y_3479_ = v___y_3505_;
v_name_x3f_3480_ = v___x_3519_;
v___y_3481_ = v___y_3507_;
v___y_3482_ = v___y_3508_;
goto v___jp_3468_;
}
}
}
else
{
lean_object* v___x_3520_; 
lean_dec(v___x_3510_);
v___x_3520_ = lean_box(0);
v___y_3469_ = v___y_3496_;
v___y_3470_ = v___y_3497_;
v___y_3471_ = v_prec_x3f_3506_;
v___y_3472_ = v___y_3501_;
v___y_3473_ = v___y_3500_;
v___y_3474_ = v___y_3499_;
v___y_3475_ = v___y_3498_;
v___y_3476_ = v___y_3502_;
v___y_3477_ = v___y_3504_;
v___y_3478_ = v___y_3503_;
v___y_3479_ = v___y_3505_;
v_name_x3f_3480_ = v___x_3520_;
v___y_3481_ = v___y_3507_;
v___y_3482_ = v___y_3508_;
goto v___jp_3468_;
}
}
v___jp_3521_:
{
lean_object* v___x_3527_; lean_object* v___x_3528_; lean_object* v___x_3529_; lean_object* v___x_3530_; uint8_t v___x_3531_; 
v___x_3527_ = lean_unsigned_to_nat(2u);
v___x_3528_ = l_Lean_Syntax_getArg(v_x_3029_, v___x_3527_);
v___x_3529_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___lam__0___closed__2));
v___x_3530_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRules___lam__2___closed__4));
lean_inc(v___x_3528_);
v___x_3531_ = l_Lean_Syntax_isOfKind(v___x_3528_, v___x_3530_);
if (v___x_3531_ == 0)
{
lean_object* v___x_3532_; 
lean_dec(v___x_3528_);
lean_dec(v_attrs_x3f_3524_);
lean_dec(v___y_3523_);
lean_dec(v_x_3029_);
v___x_3532_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabElabRulesAux_spec__2___redArg();
return v___x_3532_;
}
else
{
lean_object* v___x_3533_; lean_object* v_tk_3534_; lean_object* v___x_3535_; lean_object* v___x_3536_; uint8_t v___x_3537_; 
v___x_3533_ = lean_unsigned_to_nat(3u);
v_tk_3534_ = l_Lean_Syntax_getArg(v_x_3029_, v___x_3533_);
v___x_3535_ = lean_unsigned_to_nat(4u);
v___x_3536_ = l_Lean_Syntax_getArg(v_x_3029_, v___x_3535_);
v___x_3537_ = l_Lean_Syntax_isNone(v___x_3536_);
if (v___x_3537_ == 0)
{
uint8_t v___x_3538_; 
lean_inc(v___x_3536_);
v___x_3538_ = l_Lean_Syntax_matchesNull(v___x_3536_, v___y_3522_);
if (v___x_3538_ == 0)
{
lean_object* v___x_3539_; 
lean_dec(v___x_3536_);
lean_dec(v_tk_3534_);
lean_dec(v___x_3528_);
lean_dec(v_attrs_x3f_3524_);
lean_dec(v___y_3523_);
lean_dec(v_x_3029_);
v___x_3539_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabElabRulesAux_spec__2___redArg();
return v___x_3539_;
}
else
{
lean_object* v___x_3540_; lean_object* v___x_3541_; uint8_t v___x_3542_; 
v___x_3540_ = l_Lean_Syntax_getArg(v___x_3536_, v___x_3078_);
lean_dec(v___x_3536_);
v___x_3541_ = ((lean_object*)(l_Lean_Elab_Command_elabElab___closed__11));
lean_inc(v___x_3540_);
v___x_3542_ = l_Lean_Syntax_isOfKind(v___x_3540_, v___x_3541_);
if (v___x_3542_ == 0)
{
lean_object* v___x_3543_; 
lean_dec(v___x_3540_);
lean_dec(v_tk_3534_);
lean_dec(v___x_3528_);
lean_dec(v_attrs_x3f_3524_);
lean_dec(v___y_3523_);
lean_dec(v_x_3029_);
v___x_3543_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabElabRulesAux_spec__2___redArg();
return v___x_3543_;
}
else
{
lean_object* v_prec_x3f_3544_; lean_object* v___x_3545_; 
v_prec_x3f_3544_ = l_Lean_Syntax_getArg(v___x_3540_, v___y_3522_);
lean_dec(v___x_3540_);
v___x_3545_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3545_, 0, v_prec_x3f_3544_);
v___y_3496_ = v_tk_3534_;
v___y_3497_ = v___x_3535_;
v___y_3498_ = v___x_3527_;
v___y_3499_ = v___x_3528_;
v___y_3500_ = v___x_3530_;
v___y_3501_ = v___y_3522_;
v___y_3502_ = v___x_3533_;
v___y_3503_ = v_attrs_x3f_3524_;
v___y_3504_ = v___x_3529_;
v___y_3505_ = v___y_3523_;
v_prec_x3f_3506_ = v___x_3545_;
v___y_3507_ = v___y_3525_;
v___y_3508_ = v___y_3526_;
goto v___jp_3495_;
}
}
}
else
{
lean_object* v___x_3546_; 
lean_dec(v___x_3536_);
v___x_3546_ = lean_box(0);
v___y_3496_ = v_tk_3534_;
v___y_3497_ = v___x_3535_;
v___y_3498_ = v___x_3527_;
v___y_3499_ = v___x_3528_;
v___y_3500_ = v___x_3530_;
v___y_3501_ = v___y_3522_;
v___y_3502_ = v___x_3533_;
v___y_3503_ = v_attrs_x3f_3524_;
v___y_3504_ = v___x_3529_;
v___y_3505_ = v___y_3523_;
v_prec_x3f_3506_ = v___x_3546_;
v___y_3507_ = v___y_3525_;
v___y_3508_ = v___y_3526_;
goto v___jp_3495_;
}
}
}
v___jp_3547_:
{
lean_object* v___x_3551_; lean_object* v___x_3552_; uint8_t v___x_3553_; 
v___x_3551_ = lean_unsigned_to_nat(1u);
v___x_3552_ = l_Lean_Syntax_getArg(v_x_3029_, v___x_3551_);
v___x_3553_ = l_Lean_Syntax_isNone(v___x_3552_);
if (v___x_3553_ == 0)
{
uint8_t v___x_3554_; 
lean_inc(v___x_3552_);
v___x_3554_ = l_Lean_Syntax_matchesNull(v___x_3552_, v___x_3551_);
if (v___x_3554_ == 0)
{
lean_object* v___x_3555_; 
lean_dec(v___x_3552_);
lean_dec(v_doc_x3f_3548_);
lean_dec(v_x_3029_);
v___x_3555_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabElabRulesAux_spec__2___redArg();
return v___x_3555_;
}
else
{
lean_object* v___x_3556_; lean_object* v___x_3557_; uint8_t v___x_3558_; 
v___x_3556_ = l_Lean_Syntax_getArg(v___x_3552_, v___x_3078_);
lean_dec(v___x_3552_);
v___x_3557_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRules___lam__2___closed__5));
lean_inc(v___x_3556_);
v___x_3558_ = l_Lean_Syntax_isOfKind(v___x_3556_, v___x_3557_);
if (v___x_3558_ == 0)
{
lean_object* v___x_3559_; 
lean_dec(v___x_3556_);
lean_dec(v_doc_x3f_3548_);
lean_dec(v_x_3029_);
v___x_3559_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabElabRulesAux_spec__2___redArg();
return v___x_3559_;
}
else
{
lean_object* v___x_3560_; lean_object* v_attrs_x3f_3561_; lean_object* v___x_3562_; 
v___x_3560_ = l_Lean_Syntax_getArg(v___x_3556_, v___x_3551_);
lean_dec(v___x_3556_);
v_attrs_x3f_3561_ = l_Lean_Syntax_getArgs(v___x_3560_);
lean_dec(v___x_3560_);
v___x_3562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3562_, 0, v_attrs_x3f_3561_);
v___y_3522_ = v___x_3551_;
v___y_3523_ = v_doc_x3f_3548_;
v_attrs_x3f_3524_ = v___x_3562_;
v___y_3525_ = v___y_3549_;
v___y_3526_ = v___y_3550_;
goto v___jp_3521_;
}
}
}
else
{
lean_object* v___x_3563_; 
lean_dec(v___x_3552_);
v___x_3563_ = lean_box(0);
v___y_3522_ = v___x_3551_;
v___y_3523_ = v_doc_x3f_3548_;
v_attrs_x3f_3524_ = v___x_3563_;
v___y_3525_ = v___y_3549_;
v___y_3526_ = v___y_3550_;
goto v___jp_3521_;
}
}
}
v___jp_3035_:
{
lean_object* v___x_3052_; lean_object* v___x_3053_; lean_object* v___x_3054_; lean_object* v___x_3055_; lean_object* v___x_3056_; lean_object* v___x_3057_; lean_object* v___x_3058_; lean_object* v___x_3059_; lean_object* v___x_3060_; lean_object* v___x_3061_; lean_object* v___x_3062_; lean_object* v___x_3063_; lean_object* v___x_3064_; lean_object* v___x_3065_; lean_object* v___x_3066_; lean_object* v___x_3067_; lean_object* v___x_3068_; lean_object* v___x_3069_; lean_object* v___x_3070_; lean_object* v___x_3071_; lean_object* v___x_3072_; lean_object* v___x_3073_; lean_object* v___x_3074_; 
lean_inc_ref(v___y_3048_);
v___x_3052_ = l_Array_append___redArg(v___y_3048_, v___y_3051_);
lean_dec_ref(v___y_3051_);
lean_inc_n(v___y_3040_, 4);
lean_inc_n(v___y_3041_, 11);
v___x_3053_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3053_, 0, v___y_3041_);
lean_ctor_set(v___x_3053_, 1, v___y_3040_);
lean_ctor_set(v___x_3053_, 2, v___x_3052_);
v___x_3054_ = ((lean_object*)(l_Lean_Elab_Command_elabElabRulesAux___closed__21));
lean_inc_ref_n(v___y_3049_, 3);
v___x_3055_ = l_Lean_Name_mkStr4(v___x_3033_, v___x_3034_, v___y_3049_, v___x_3054_);
v___x_3056_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__4));
v___x_3057_ = l_Lean_Name_mkStr4(v___x_3033_, v___x_3034_, v___y_3049_, v___x_3056_);
v___x_3058_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__6));
v___x_3059_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3059_, 0, v___y_3041_);
lean_ctor_set(v___x_3059_, 1, v___x_3058_);
v___x_3060_ = ((lean_object*)(l_Lean_Elab_Command_elabElab___closed__0));
v___x_3061_ = l_Lean_Name_mkStr4(v___x_3033_, v___x_3034_, v___y_3049_, v___x_3060_);
v___x_3062_ = ((lean_object*)(l_Lean_Elab_Command_elabElab___closed__1));
v___x_3063_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3063_, 0, v___y_3041_);
lean_ctor_set(v___x_3063_, 1, v___x_3062_);
lean_inc_ref(v___y_3047_);
v___x_3064_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3064_, 0, v___y_3041_);
lean_ctor_set(v___x_3064_, 1, v___y_3047_);
v___x_3065_ = l_Lean_Syntax_node3(v___y_3041_, v___x_3061_, v___x_3063_, v___y_3045_, v___x_3064_);
v___x_3066_ = l_Lean_Syntax_node1(v___y_3041_, v___y_3040_, v___x_3065_);
v___x_3067_ = l_Lean_Syntax_node1(v___y_3041_, v___y_3040_, v___x_3066_);
v___x_3068_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabElabRulesAux_spec__5___closed__8));
v___x_3069_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3069_, 0, v___y_3041_);
lean_ctor_set(v___x_3069_, 1, v___x_3068_);
v___x_3070_ = l_Lean_Syntax_node4(v___y_3041_, v___x_3057_, v___x_3059_, v___x_3067_, v___x_3069_, v___y_3050_);
v___x_3071_ = l_Lean_Syntax_node1(v___y_3041_, v___y_3040_, v___x_3070_);
v___x_3072_ = l_Lean_Syntax_node1(v___y_3041_, v___x_3055_, v___x_3071_);
lean_inc(v___y_3037_);
lean_inc(v___y_3036_);
v___x_3073_ = l_Lean_Syntax_node8(v___y_3041_, v___y_3036_, v___y_3046_, v___y_3037_, v___y_3042_, v___y_3039_, v___y_3037_, v___y_3044_, v___x_3053_, v___x_3072_);
v___x_3074_ = l_Lean_Elab_Command_elabCommand(v___x_3073_, v___y_3038_, v___y_3043_);
return v___x_3074_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabElab___boxed(lean_object* v_x_3576_, lean_object* v_a_3577_, lean_object* v_a_3578_, lean_object* v_a_3579_){
_start:
{
lean_object* v_res_3580_; 
v_res_3580_ = l_Lean_Elab_Command_elabElab(v_x_3576_, v_a_3577_, v_a_3578_);
lean_dec(v_a_3578_);
lean_dec_ref(v_a_3577_);
return v_res_3580_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__1(lean_object* v_00_u03b1_3581_, lean_object* v_x_3582_, lean_object* v___y_3583_, lean_object* v___y_3584_){
_start:
{
lean_object* v___x_3585_; 
v___x_3585_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__1___redArg(v_x_3582_, v___y_3584_);
return v___x_3585_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__1___boxed(lean_object* v_00_u03b1_3586_, lean_object* v_x_3587_, lean_object* v___y_3588_, lean_object* v___y_3589_){
_start:
{
lean_object* v_res_3590_; 
v_res_3590_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__1(v_00_u03b1_3586_, v_x_3587_, v___y_3588_, v___y_3589_);
lean_dec_ref(v___y_3588_);
lean_dec_ref(v_x_3587_);
return v_res_3590_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__5(lean_object* v_00_u03b1_3591_, lean_object* v_ref_3592_, lean_object* v___y_3593_, lean_object* v___y_3594_){
_start:
{
lean_object* v___x_3596_; 
v___x_3596_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__5___redArg(v_ref_3592_);
return v___x_3596_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__5___boxed(lean_object* v_00_u03b1_3597_, lean_object* v_ref_3598_, lean_object* v___y_3599_, lean_object* v___y_3600_, lean_object* v___y_3601_){
_start:
{
lean_object* v_res_3602_; 
v_res_3602_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__5(v_00_u03b1_3597_, v_ref_3598_, v___y_3599_, v___y_3600_);
lean_dec(v___y_3600_);
lean_dec_ref(v___y_3599_);
return v_res_3602_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0(lean_object* v_00_u03b1_3603_, lean_object* v_x_3604_, lean_object* v___y_3605_, lean_object* v___y_3606_){
_start:
{
lean_object* v___x_3608_; 
v___x_3608_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0___redArg(v_x_3604_, v___y_3605_, v___y_3606_);
return v___x_3608_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0___boxed(lean_object* v_00_u03b1_3609_, lean_object* v_x_3610_, lean_object* v___y_3611_, lean_object* v___y_3612_, lean_object* v___y_3613_){
_start:
{
lean_object* v_res_3614_; 
v_res_3614_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0(v_00_u03b1_3609_, v_x_3610_, v___y_3611_, v___y_3612_);
lean_dec(v___y_3612_);
lean_dec_ref(v___y_3611_);
return v_res_3614_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__3(lean_object* v_as_3615_, lean_object* v_as_x27_3616_, lean_object* v_b_3617_, lean_object* v_a_3618_, lean_object* v___y_3619_, lean_object* v___y_3620_){
_start:
{
lean_object* v___x_3622_; 
v___x_3622_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__3___redArg(v_as_x27_3616_, v_b_3617_, v___y_3619_, v___y_3620_);
return v___x_3622_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__3___boxed(lean_object* v_as_3623_, lean_object* v_as_x27_3624_, lean_object* v_b_3625_, lean_object* v_a_3626_, lean_object* v___y_3627_, lean_object* v___y_3628_, lean_object* v___y_3629_){
_start:
{
lean_object* v_res_3630_; 
v_res_3630_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__3(v_as_3623_, v_as_x27_3624_, v_b_3625_, v_a_3626_, v___y_3627_, v___y_3628_);
lean_dec(v___y_3628_);
lean_dec_ref(v___y_3627_);
lean_dec(v_as_x27_3624_);
lean_dec(v_as_3623_);
return v_res_3630_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__5(lean_object* v_00_u03b2_3631_, lean_object* v_m_3632_, lean_object* v_a_3633_){
_start:
{
lean_object* v___x_3634_; 
v___x_3634_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__5___redArg(v_m_3632_, v_a_3633_);
return v___x_3634_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__5___boxed(lean_object* v_00_u03b2_3635_, lean_object* v_m_3636_, lean_object* v_a_3637_){
_start:
{
lean_object* v_res_3638_; 
v_res_3638_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__5(v_00_u03b2_3635_, v_m_3636_, v_a_3637_);
lean_dec(v_a_3637_);
lean_dec_ref(v_m_3636_);
return v_res_3638_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3_spec__7(lean_object* v_00_u03b2_3639_, lean_object* v_x_3640_, lean_object* v_x_3641_){
_start:
{
uint8_t v___x_3642_; 
v___x_3642_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3_spec__7___redArg(v_x_3640_, v_x_3641_);
return v___x_3642_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3_spec__7___boxed(lean_object* v_00_u03b2_3643_, lean_object* v_x_3644_, lean_object* v_x_3645_){
_start:
{
uint8_t v_res_3646_; lean_object* v_r_3647_; 
v_res_3646_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3_spec__7(v_00_u03b2_3643_, v_x_3644_, v_x_3645_);
lean_dec_ref(v_x_3645_);
lean_dec_ref(v_x_3644_);
v_r_3647_ = lean_box(v_res_3646_);
return v_r_3647_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__5_spec__10(lean_object* v_00_u03b2_3648_, lean_object* v_a_3649_, lean_object* v_x_3650_){
_start:
{
lean_object* v___x_3651_; 
v___x_3651_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__5_spec__10___redArg(v_a_3649_, v_x_3650_);
return v___x_3651_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__5_spec__10___boxed(lean_object* v_00_u03b2_3652_, lean_object* v_a_3653_, lean_object* v_x_3654_){
_start:
{
lean_object* v_res_3655_; 
v_res_3655_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__5_spec__10(v_00_u03b2_3652_, v_a_3653_, v_x_3654_);
lean_dec(v_x_3654_);
lean_dec(v_a_3653_);
return v_res_3655_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3_spec__7_spec__10(lean_object* v_00_u03b2_3656_, lean_object* v_x_3657_, size_t v_x_3658_, lean_object* v_x_3659_){
_start:
{
uint8_t v___x_3660_; 
v___x_3660_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3_spec__7_spec__10___redArg(v_x_3657_, v_x_3658_, v_x_3659_);
return v___x_3660_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3_spec__7_spec__10___boxed(lean_object* v_00_u03b2_3661_, lean_object* v_x_3662_, lean_object* v_x_3663_, lean_object* v_x_3664_){
_start:
{
size_t v_x_19026__boxed_3665_; uint8_t v_res_3666_; lean_object* v_r_3667_; 
v_x_19026__boxed_3665_ = lean_unbox_usize(v_x_3663_);
lean_dec(v_x_3663_);
v_res_3666_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3_spec__7_spec__10(v_00_u03b2_3661_, v_x_3662_, v_x_19026__boxed_3665_, v_x_3664_);
lean_dec_ref(v_x_3664_);
lean_dec_ref(v_x_3662_);
v_r_3667_ = lean_box(v_res_3666_);
return v_r_3667_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3_spec__7_spec__10_spec__13(lean_object* v_00_u03b2_3668_, lean_object* v_keys_3669_, lean_object* v_vals_3670_, lean_object* v_heq_3671_, lean_object* v_i_3672_, lean_object* v_k_3673_){
_start:
{
uint8_t v___x_3674_; 
v___x_3674_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3_spec__7_spec__10_spec__13___redArg(v_keys_3669_, v_i_3672_, v_k_3673_);
return v___x_3674_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3_spec__7_spec__10_spec__13___boxed(lean_object* v_00_u03b2_3675_, lean_object* v_keys_3676_, lean_object* v_vals_3677_, lean_object* v_heq_3678_, lean_object* v_i_3679_, lean_object* v_k_3680_){
_start:
{
uint8_t v_res_3681_; lean_object* v_r_3682_; 
v_res_3681_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabElab_spec__0_spec__2_spec__3_spec__7_spec__10_spec__13(v_00_u03b2_3675_, v_keys_3676_, v_vals_3677_, v_heq_3678_, v_i_3679_, v_k_3680_);
lean_dec_ref(v_k_3680_);
lean_dec_ref(v_vals_3677_);
lean_dec_ref(v_keys_3676_);
v_r_3682_ = lean_box(v_res_3681_);
return v_r_3682_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElab___regBuiltin_Lean_Elab_Command_elabElab__1(){
_start:
{
lean_object* v___x_3690_; lean_object* v___x_3691_; lean_object* v___x_3692_; lean_object* v___x_3693_; lean_object* v___x_3694_; 
v___x_3690_ = l_Lean_Elab_Command_commandElabAttribute;
v___x_3691_ = ((lean_object*)(l_Lean_Elab_Command_elabElab___closed__3));
v___x_3692_ = ((lean_object*)(l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElab___regBuiltin_Lean_Elab_Command_elabElab__1___closed__1));
v___x_3693_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabElab___boxed), 4, 0);
v___x_3694_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_3690_, v___x_3691_, v___x_3692_, v___x_3693_);
return v___x_3694_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElab___regBuiltin_Lean_Elab_Command_elabElab__1___boxed(lean_object* v_a_3695_){
_start:
{
lean_object* v_res_3696_; 
v_res_3696_ = l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElab___regBuiltin_Lean_Elab_Command_elabElab__1();
return v_res_3696_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElab___regBuiltin_Lean_Elab_Command_elabElab_declRange__3(){
_start:
{
lean_object* v___x_3723_; lean_object* v___x_3724_; lean_object* v___x_3725_; 
v___x_3723_ = ((lean_object*)(l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElab___regBuiltin_Lean_Elab_Command_elabElab__1___closed__1));
v___x_3724_ = ((lean_object*)(l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElab___regBuiltin_Lean_Elab_Command_elabElab_declRange__3___closed__6));
v___x_3725_ = l_Lean_addBuiltinDeclarationRanges(v___x_3723_, v___x_3724_);
return v___x_3725_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElab___regBuiltin_Lean_Elab_Command_elabElab_declRange__3___boxed(lean_object* v_a_3726_){
_start:
{
lean_object* v_res_3727_; 
v_res_3727_ = l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElab___regBuiltin_Lean_Elab_Command_elabElab_declRange__3();
return v_res_3727_;
}
}
lean_object* runtime_initialize_Lean_Elab_MacroArgUtil(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_AuxDef(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Do_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_ElabRules(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_MacroArgUtil(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_AuxDef(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Do_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElabRules___regBuiltin_Lean_Elab_Command_elabElabRules__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElabRules___regBuiltin_Lean_Elab_Command_elabElabRules_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElab___regBuiltin_Lean_Elab_Command_elabElab__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_ElabRules_0__Lean_Elab_Command_elabElab___regBuiltin_Lean_Elab_Command_elabElab_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_ElabRules(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_MacroArgUtil(uint8_t builtin);
lean_object* initialize_Lean_Elab_AuxDef(uint8_t builtin);
lean_object* initialize_Lean_Elab_Do_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_ElabRules(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_MacroArgUtil(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_AuxDef(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Do_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_ElabRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_ElabRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_ElabRules(builtin);
}
#ifdef __cplusplus
}
#endif

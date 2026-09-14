// Lean compiler output
// Module: Lean.Elab.Notation
// Imports: public import Lean.Elab.Syntax public import Lean.Elab.AuxDef public import Lean.Elab.BuiltinNotation
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
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_getRef___redArg(lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
extern lean_object* l_Lean_Elab_Command_instInhabitedScope_default;
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_instInhabited___redArg();
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Environment_header(lean_object*);
extern lean_object* l_Lean_instInhabitedEffectiveImport_default;
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_empty___redArg();
extern lean_object* l___private_Lean_ExtraModUses_0__Lean_extraModUses;
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
uint8_t l_Lean_isMarkedMeta(lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lean_Syntax_mkAntiquotNode(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_strLitToPattern___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l_Lean_Macro_throwUnsupported___redArg(lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* l_Lean_Elab_expandMacroImpl_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getHygieneInfo(lean_object*);
lean_object* l_Lean_Elab_Term_expandCDot_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getHeadInfo(lean_object*);
lean_object* l_Lean_Syntax_getTailInfo(lean_object*);
lean_object* l_Lean_Syntax_setHeadInfo(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_setTailInfo(lean_object*, lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_Name_eraseMacroScopes(lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_topDown(lean_object*, uint8_t);
uint8_t l_Lean_Syntax_isAntiquot(lean_object*);
lean_object* l_Lean_Syntax_getAntiquotTerm(lean_object*);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* l_Lean_mkPrivateName(lean_object*, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_privateToUserName(lean_object*);
lean_object* l_Lean_Elab_Command_getScope___redArg(lean_object*);
lean_object* l_Lean_ResolveName_resolveNamespace(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ResolveName_resolveGlobalName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_getCurrMacroScope___redArg(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray1___redArg(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_Elab_Command_commandElabAttribute;
lean_object* l_Lean_Macro_resolveGlobalName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_mkApp(lean_object*, lean_object*);
lean_object* l_Lean_Parser_Command_visibility_ofAttrKind(lean_object*);
lean_object* l_Lean_mkIdent(lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_Elab_Command_elabCommand(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_Command_isLocalAttrKind(lean_object*);
extern lean_object* l_Lean_Elab_Term_Quotation_quotPrecheck_allowSectionVars;
lean_object* l_Lean_Elab_Command_elabCommand___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_withScope___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_Syntax_mkNumLit(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabSyntax(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_TSepArray_getElems___redArg(lean_object*);
lean_object* l_Lean_Syntax_TSepArray_ofElems___redArg(lean_object*, lean_object*);
lean_object* l_Lean_evalOptPrio___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkIdentFrom(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote_spec__1(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__0 = (const lean_object*)&l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__1 = (const lean_object*)&l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__2 = (const lean_object*)&l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__2_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__3 = (const lean_object*)&l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "attrInstance"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__4_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__4_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__4_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(241, 75, 242, 110, 47, 5, 20, 104)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "attrKind"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__5_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__6_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__6_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__6_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__5_value),LEAN_SCALAR_PTR_LITERAL(32, 164, 20, 104, 12, 221, 204, 110)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__6_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Attr"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__7_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "simple"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__8_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__9_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__9_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__9_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__8_value),LEAN_SCALAR_PTR_LITERAL(107, 67, 254, 234, 65, 174, 209, 53)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__9_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "inherit_doc"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__10_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__10_value),LEAN_SCALAR_PTR_LITERAL(83, 8, 69, 42, 53, 230, 51, 166)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__11 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__11_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__12 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__12_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__12_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__13 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__13_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__14;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0(uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__1;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__2;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Command_addInheritDocDefault___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_Lean_Elab_Command_addInheritDocDefault___closed__0 = (const lean_object*)&l_Lean_Elab_Command_addInheritDocDefault___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Command_addInheritDocDefault___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_addInheritDocDefault___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_addInheritDocDefault___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_addInheritDocDefault___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_addInheritDocDefault___closed__1_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Command_addInheritDocDefault___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_addInheritDocDefault___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Command_addInheritDocDefault___closed__0_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l_Lean_Elab_Command_addInheritDocDefault___closed__1 = (const lean_object*)&l_Lean_Elab_Command_addInheritDocDefault___closed__1_value;
static const lean_string_object l_Lean_Elab_Command_addInheritDocDefault___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lean_Elab_Command_addInheritDocDefault___closed__2 = (const lean_object*)&l_Lean_Elab_Command_addInheritDocDefault___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_addInheritDocDefault(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Syntax"};
static const lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__0 = (const lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__0_value;
static const lean_string_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "cat"};
static const lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__1 = (const lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__2_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__2_value_aux_1),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__0_value),LEAN_SCALAR_PTR_LITERAL(248, 112, 238, 38, 106, 122, 129, 24)}};
static const lean_ctor_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__2_value_aux_2),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__1_value),LEAN_SCALAR_PTR_LITERAL(95, 91, 11, 245, 227, 176, 7, 196)}};
static const lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__2 = (const lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__3;
static const lean_string_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "precedence"};
static const lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__4 = (const lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__5_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__5_value_aux_1),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__4_value),LEAN_SCALAR_PTR_LITERAL(69, 243, 176, 51, 48, 112, 202, 160)}};
static const lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__5 = (const lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__5_value;
static const lean_string_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__6 = (const lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__6_value;
static const lean_array_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__7 = (const lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__7_value;
static const lean_string_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__8 = (const lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__8_value;
static const lean_string_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "identPrec"};
static const lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__9 = (const lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__9_value;
static const lean_ctor_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__10_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__10_value_aux_1),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__8_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__10_value_aux_2),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__9_value),LEAN_SCALAR_PTR_LITERAL(251, 25, 252, 182, 120, 175, 78, 126)}};
static const lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__10 = (const lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__10_value;
static const lean_string_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "atom"};
static const lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__11 = (const lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__11_value;
static const lean_ctor_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__12_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__12_value_aux_1),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__0_value),LEAN_SCALAR_PTR_LITERAL(248, 112, 238, 38, 106, 122, 129, 24)}};
static const lean_ctor_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__12_value_aux_2),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__11_value),LEAN_SCALAR_PTR_LITERAL(144, 22, 146, 169, 39, 242, 124, 88)}};
static const lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__12 = (const lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__12_value;
static const lean_string_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "str"};
static const lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__13 = (const lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__13_value;
static const lean_ctor_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__13_value),LEAN_SCALAR_PTR_LITERAL(255, 188, 142, 1, 190, 33, 34, 128)}};
static const lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__14 = (const lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__14_value;
static const lean_string_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "unicodeAtom"};
static const lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__15 = (const lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__15_value;
static const lean_ctor_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__16_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__16_value_aux_1),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__0_value),LEAN_SCALAR_PTR_LITERAL(248, 112, 238, 38, 106, 122, 129, 24)}};
static const lean_ctor_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__16_value_aux_2),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__15_value),LEAN_SCALAR_PTR_LITERAL(29, 147, 94, 13, 45, 35, 101, 109)}};
static const lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__16 = (const lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__16_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_expandNotationItemIntoPattern___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_expandNotationItemIntoPattern(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_expandNotationItemIntoPattern___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_removeParenthesesAux(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_removeParenthesesAux___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Command_removeParentheses___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l_Lean_Elab_Command_removeParentheses___closed__0 = (const lean_object*)&l_Lean_Elab_Command_removeParentheses___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Command_removeParentheses___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_removeParentheses___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_removeParentheses___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_removeParentheses___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_removeParentheses___closed__1_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Command_removeParentheses___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_removeParentheses___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Command_removeParentheses___closed__0_value),LEAN_SCALAR_PTR_LITERAL(124, 9, 161, 194, 227, 100, 20, 110)}};
static const lean_object* l_Lean_Elab_Command_removeParentheses___closed__1 = (const lean_object*)&l_Lean_Elab_Command_removeParentheses___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Command_removeParentheses___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_Elab_Command_removeParentheses___boxed__const__1 = (const lean_object*)&l_Lean_Elab_Command_removeParentheses___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_removeParentheses_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Command_removeParentheses___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l_Lean_Elab_Command_removeParentheses___closed__2 = (const lean_object*)&l_Lean_Elab_Command_removeParentheses___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Command_removeParentheses___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_removeParentheses___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_removeParentheses___closed__3_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_removeParentheses___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_removeParentheses___closed__3_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Command_removeParentheses___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_removeParentheses___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_Command_removeParentheses___closed__2_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l_Lean_Elab_Command_removeParentheses___closed__3 = (const lean_object*)&l_Lean_Elab_Command_removeParentheses___closed__3_value;
static const lean_string_object l_Lean_Elab_Command_removeParentheses___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l_Lean_Elab_Command_removeParentheses___closed__4 = (const lean_object*)&l_Lean_Elab_Command_removeParentheses___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Command_removeParentheses___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_removeParentheses___closed__4_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l_Lean_Elab_Command_removeParentheses___closed__5 = (const lean_object*)&l_Lean_Elab_Command_removeParentheses___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_removeParentheses(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_removeParentheses_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_removeParentheses___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "choice"};
static const lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0___closed__0 = (const lean_object*)&l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0___closed__0_value;
static const lean_ctor_object l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(59, 66, 148, 42, 181, 100, 85, 166)}};
static const lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0___closed__1 = (const lean_object*)&l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0_spec__0(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Command_hasDuplicateAntiquot___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_hasDuplicateAntiquot___closed__0;
LEAN_EXPORT uint8_t l_Lean_Elab_Command_hasDuplicateAntiquot(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_hasDuplicateAntiquot___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "antiquot"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__0 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__0_value),LEAN_SCALAR_PTR_LITERAL(234, 107, 218, 203, 20, 35, 251, 156)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__1 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__1_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "$"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__2 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__2_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "f"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__3 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__3_value;
static lean_once_cell_t l_Lean_Elab_Command_mkUnexpander___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_mkUnexpander___closed__4;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__3_value),LEAN_SCALAR_PTR_LITERAL(29, 68, 183, 24, 128, 148, 178, 23)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__5 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__5_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "antiquotName"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__6 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__6_value),LEAN_SCALAR_PTR_LITERAL(67, 48, 35, 197, 163, 216, 250, 79)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__7 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__7_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__8 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__8_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "aux_def"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__9 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__9_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__10_value_aux_0),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__8_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__10_value_aux_1),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__8_value),LEAN_SCALAR_PTR_LITERAL(177, 181, 244, 12, 1, 14, 170, 235)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__10_value_aux_2),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__9_value),LEAN_SCALAR_PTR_LITERAL(83, 33, 36, 212, 17, 187, 86, 94)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__10 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__10_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "attributes"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__11 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__11_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__12_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__12_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__12_value_aux_2),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__11_value),LEAN_SCALAR_PTR_LITERAL(66, 184, 196, 169, 25, 125, 40, 35)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__12 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__12_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "@["};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__13 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__13_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "app_unexpander"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__14 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__14_value;
static lean_once_cell_t l_Lean_Elab_Command_mkUnexpander___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_mkUnexpander___closed__15;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__14_value),LEAN_SCALAR_PTR_LITERAL(173, 94, 177, 152, 198, 163, 81, 20)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__16 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__16_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__17 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__17_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "unexpand"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__18 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__18_value;
static lean_once_cell_t l_Lean_Elab_Command_mkUnexpander___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_mkUnexpander___closed__19;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__18_value),LEAN_SCALAR_PTR_LITERAL(42, 154, 37, 229, 99, 64, 199, 76)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__20 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__20_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lean.PrettyPrinter.Unexpander"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__21 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__21_value;
static lean_once_cell_t l_Lean_Elab_Command_mkUnexpander___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_mkUnexpander___closed__22;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "PrettyPrinter"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__23 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__23_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Unexpander"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__24 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__24_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__25_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__25_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__25_value_aux_0),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__23_value),LEAN_SCALAR_PTR_LITERAL(120, 167, 117, 148, 131, 202, 42, 4)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__25_value_aux_1),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__24_value),LEAN_SCALAR_PTR_LITERAL(127, 37, 73, 100, 13, 145, 76, 255)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__25 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__25_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__26 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__26_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "fun"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__27 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__27_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__28_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__28_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__28_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__28_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__28_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__28_value_aux_2),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__27_value),LEAN_SCALAR_PTR_LITERAL(249, 155, 133, 242, 71, 132, 191, 97)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__28 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__28_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "matchAlts"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__29 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__29_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__30_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__30_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__30_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__30_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__30_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__30_value_aux_2),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__29_value),LEAN_SCALAR_PTR_LITERAL(193, 186, 26, 109, 82, 172, 197, 183)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__30 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__30_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "matchAlt"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__31 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__31_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__32_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__32_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__32_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__32_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__32_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__32_value_aux_2),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__31_value),LEAN_SCALAR_PTR_LITERAL(178, 0, 203, 112, 215, 49, 100, 229)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__32 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__32_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "|"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__33 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__33_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "quot"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__34 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__34_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__35_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__35_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__35_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__35_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__35_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__35_value_aux_2),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__34_value),LEAN_SCALAR_PTR_LITERAL(145, 163, 173, 41, 168, 168, 65, 81)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__35 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__35_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`("};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__36 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__36_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__37 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__37_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "=>"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__38 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__38_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "withRef"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__39 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__39_value;
static lean_once_cell_t l_Lean_Elab_Command_mkUnexpander___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_mkUnexpander___closed__40;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__39_value),LEAN_SCALAR_PTR_LITERAL(193, 74, 233, 14, 30, 198, 157, 185)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__41 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__41_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__42_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__42_value_aux_0),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__39_value),LEAN_SCALAR_PTR_LITERAL(128, 176, 237, 189, 54, 129, 101, 238)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__42 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__42_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hole"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__43 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__43_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__44_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__44_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__44_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__44_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__44_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__44_value_aux_2),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__43_value),LEAN_SCALAR_PTR_LITERAL(135, 134, 219, 115, 97, 130, 74, 55)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__44 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__44_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__45 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__45_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "throw"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__46 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__46_value;
static lean_once_cell_t l_Lean_Elab_Command_mkUnexpander___closed__47_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_mkUnexpander___closed__47;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__46_value),LEAN_SCALAR_PTR_LITERAL(60, 81, 80, 209, 187, 239, 255, 113)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__48 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__48_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "MonadExcept"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__49 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__49_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__50_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__49_value),LEAN_SCALAR_PTR_LITERAL(162, 154, 253, 120, 110, 153, 103, 113)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__50_value_aux_0),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__46_value),LEAN_SCALAR_PTR_LITERAL(121, 11, 61, 69, 62, 207, 229, 53)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__50 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__50_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "tuple"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__51 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__51_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__52_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__52_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__52_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__52_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__52_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__52_value_aux_2),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__51_value),LEAN_SCALAR_PTR_LITERAL(191, 24, 88, 245, 200, 250, 27, 217)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__52 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__52_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__53 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__53_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__54 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__54_value;
static lean_once_cell_t l_Lean_Elab_Command_mkUnexpander___closed__55_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_mkUnexpander___closed__55;
static lean_once_cell_t l_Lean_Elab_Command_mkUnexpander___closed__56_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_mkUnexpander___closed__56;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__57_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__57_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__57_value_aux_0),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__8_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__57_value_aux_1),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__8_value),LEAN_SCALAR_PTR_LITERAL(177, 181, 244, 12, 1, 14, 170, 235)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__57 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__57_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__57_value)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__58 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__58_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__59_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__59_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__59_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__59_value_aux_1),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__8_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__59 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__59_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__59_value)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__60 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__60_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__61_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__61_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__61_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__61_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__61 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__61_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__61_value)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__62 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__62_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__63_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__63_value_aux_0),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__0_value),LEAN_SCALAR_PTR_LITERAL(45, 144, 98, 72, 115, 31, 20, 74)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__63 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__63_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__63_value)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__64 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__64_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__64_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__65 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__65_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__62_value),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__65_value)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__66 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__66_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__60_value),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__66_value)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__67 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__67_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__58_value),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__67_value)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__68 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__68_value;
static const lean_array_object l_Lean_Elab_Command_mkUnexpander___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__69 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__69_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_mkUnexpander(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_mkUnexpander___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNotation_spec__7___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNotation_spec__7___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNotation_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNotation_spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNotation___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6_spec__13___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6_spec__13___closed__0 = (const lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6_spec__13___closed__0_value;
static const lean_ctor_object l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6_spec__13___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6_spec__13___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6_spec__13___closed__1 = (const lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6_spec__13___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6_spec__13(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6_spec__13___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__2(size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__5___redArg(size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__5(size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1___closed__0;
static const lean_array_object l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__26___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__26___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__26___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__26___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__26___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__26___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__26___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__26___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__26___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__26___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__26___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__26(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__25(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__25___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19_spec__23___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19_spec__23___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__0;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "extraModUses"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__1 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__1_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(27, 95, 70, 98, 97, 66, 56, 109)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__2 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__2_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " extra mod use "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__3 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__3_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__4;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " of "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__5 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__5_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__6;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__7;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__8;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "recording "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__9 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__9_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__10;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__11 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__11_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__12;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "regular"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__13 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__13_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__14 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__14_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__15 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__15_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__16 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__16_value;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__7(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8_spec__18___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8_spec__18___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3___closed__0;
static const lean_array_object l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3___closed__1 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 158, .m_capacity = 158, .m_length = 157, .m_data = "maximum recursion depth has been reached\nuse `set_option maxRecDepth <num>` to increase limit\nuse `set_option diagnostics true` to get diagnostic information"};
static const lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_elabNotation_spec__8(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_elabNotation_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Command_elabNotation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "notation"};
static const lean_object* l_Lean_Elab_Command_elabNotation___closed__0 = (const lean_object*)&l_Lean_Elab_Command_elabNotation___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__8_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__0_value),LEAN_SCALAR_PTR_LITERAL(13, 34, 53, 7, 182, 20, 8, 182)}};
static const lean_object* l_Lean_Elab_Command_elabNotation___closed__1 = (const lean_object*)&l_Lean_Elab_Command_elabNotation___closed__1_value;
static const lean_string_object l_Lean_Elab_Command_elabNotation___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "macro_rules"};
static const lean_object* l_Lean_Elab_Command_elabNotation___closed__2 = (const lean_object*)&l_Lean_Elab_Command_elabNotation___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__3_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__8_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__2_value),LEAN_SCALAR_PTR_LITERAL(125, 80, 75, 5, 165, 87, 197, 1)}};
static const lean_object* l_Lean_Elab_Command_elabNotation___closed__3 = (const lean_object*)&l_Lean_Elab_Command_elabNotation___closed__3_value;
static const lean_string_object l_Lean_Elab_Command_elabNotation___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "precheckedQuot"};
static const lean_object* l_Lean_Elab_Command_elabNotation___closed__4 = (const lean_object*)&l_Lean_Elab_Command_elabNotation___closed__4_value;
static const lean_string_object l_Lean_Elab_Command_elabNotation___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_Elab_Command_elabNotation___closed__5 = (const lean_object*)&l_Lean_Elab_Command_elabNotation___closed__5_value;
static const lean_string_object l_Lean_Elab_Command_elabNotation___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "namedPrio"};
static const lean_object* l_Lean_Elab_Command_elabNotation___closed__6 = (const lean_object*)&l_Lean_Elab_Command_elabNotation___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__7_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__7_value_aux_1),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__8_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__7_value_aux_2),((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__6_value),LEAN_SCALAR_PTR_LITERAL(171, 32, 2, 102, 118, 75, 64, 185)}};
static const lean_object* l_Lean_Elab_Command_elabNotation___closed__7 = (const lean_object*)&l_Lean_Elab_Command_elabNotation___closed__7_value;
static const lean_string_object l_Lean_Elab_Command_elabNotation___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "priority"};
static const lean_object* l_Lean_Elab_Command_elabNotation___closed__8 = (const lean_object*)&l_Lean_Elab_Command_elabNotation___closed__8_value;
static const lean_string_object l_Lean_Elab_Command_elabNotation___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "namedName"};
static const lean_object* l_Lean_Elab_Command_elabNotation___closed__9 = (const lean_object*)&l_Lean_Elab_Command_elabNotation___closed__9_value;
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__10_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__10_value_aux_1),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__8_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__10_value_aux_2),((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__9_value),LEAN_SCALAR_PTR_LITERAL(73, 173, 122, 11, 5, 195, 101, 245)}};
static const lean_object* l_Lean_Elab_Command_elabNotation___closed__10 = (const lean_object*)&l_Lean_Elab_Command_elabNotation___closed__10_value;
static const lean_string_object l_Lean_Elab_Command_elabNotation___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l_Lean_Elab_Command_elabNotation___closed__11 = (const lean_object*)&l_Lean_Elab_Command_elabNotation___closed__11_value;
static const lean_string_object l_Lean_Elab_Command_elabNotation___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "syntax"};
static const lean_object* l_Lean_Elab_Command_elabNotation___closed__12 = (const lean_object*)&l_Lean_Elab_Command_elabNotation___closed__12_value;
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__13_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__13_value_aux_1),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__8_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__13_value_aux_2),((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__12_value),LEAN_SCALAR_PTR_LITERAL(39, 60, 146, 133, 142, 21, 8, 39)}};
static const lean_object* l_Lean_Elab_Command_elabNotation___closed__13 = (const lean_object*)&l_Lean_Elab_Command_elabNotation___closed__13_value;
static const lean_string_object l_Lean_Elab_Command_elabNotation___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "docComment"};
static const lean_object* l_Lean_Elab_Command_elabNotation___closed__14 = (const lean_object*)&l_Lean_Elab_Command_elabNotation___closed__14_value;
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__15_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__15_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__15_value_aux_1),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__8_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__15_value_aux_2),((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__14_value),LEAN_SCALAR_PTR_LITERAL(44, 76, 179, 33, 27, 4, 201, 125)}};
static const lean_object* l_Lean_Elab_Command_elabNotation___closed__15 = (const lean_object*)&l_Lean_Elab_Command_elabNotation___closed__15_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNotation(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNotation___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8_spec__18(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8_spec__18___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19_spec__23(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19_spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Notation_0__Lean_Elab_Command_elabNotation___regBuiltin_Lean_Elab_Command_elabNotation__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "elabNotation"};
static const lean_object* l___private_Lean_Elab_Notation_0__Lean_Elab_Command_elabNotation___regBuiltin_Lean_Elab_Command_elabNotation__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Notation_0__Lean_Elab_Command_elabNotation___regBuiltin_Lean_Elab_Command_elabNotation__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Notation_0__Lean_Elab_Command_elabNotation___regBuiltin_Lean_Elab_Command_elabNotation__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Notation_0__Lean_Elab_Command_elabNotation___regBuiltin_Lean_Elab_Command_elabNotation__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Notation_0__Lean_Elab_Command_elabNotation___regBuiltin_Lean_Elab_Command_elabNotation__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__8_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Notation_0__Lean_Elab_Command_elabNotation___regBuiltin_Lean_Elab_Command_elabNotation__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Notation_0__Lean_Elab_Command_elabNotation___regBuiltin_Lean_Elab_Command_elabNotation__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__8_value),LEAN_SCALAR_PTR_LITERAL(177, 181, 244, 12, 1, 14, 170, 235)}};
static const lean_ctor_object l___private_Lean_Elab_Notation_0__Lean_Elab_Command_elabNotation___regBuiltin_Lean_Elab_Command_elabNotation__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Notation_0__Lean_Elab_Command_elabNotation___regBuiltin_Lean_Elab_Command_elabNotation__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Notation_0__Lean_Elab_Command_elabNotation___regBuiltin_Lean_Elab_Command_elabNotation__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(87, 81, 117, 114, 113, 220, 215, 248)}};
static const lean_object* l___private_Lean_Elab_Notation_0__Lean_Elab_Command_elabNotation___regBuiltin_Lean_Elab_Command_elabNotation__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Notation_0__Lean_Elab_Command_elabNotation___regBuiltin_Lean_Elab_Command_elabNotation__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Notation_0__Lean_Elab_Command_elabNotation___regBuiltin_Lean_Elab_Command_elabNotation__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Notation_0__Lean_Elab_Command_elabNotation___regBuiltin_Lean_Elab_Command_elabNotation__1___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote_spec__1(lean_object* v_id_1_, lean_object* v_as_2_, size_t v_i_3_, size_t v_stop_4_){
_start:
{
uint8_t v___x_5_; 
v___x_5_ = lean_usize_dec_eq(v_i_3_, v_stop_4_);
if (v___x_5_ == 0)
{
lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; uint8_t v___x_9_; 
v___x_6_ = lean_array_uget_borrowed(v_as_2_, v_i_3_);
v___x_7_ = l_Lean_Syntax_getId(v___x_6_);
v___x_8_ = l_Lean_TSyntax_getId(v_id_1_);
v___x_9_ = lean_name_eq(v___x_7_, v___x_8_);
lean_dec(v___x_8_);
lean_dec(v___x_7_);
if (v___x_9_ == 0)
{
size_t v___x_10_; size_t v___x_11_; 
v___x_10_ = ((size_t)1ULL);
v___x_11_ = lean_usize_add(v_i_3_, v___x_10_);
v_i_3_ = v___x_11_;
goto _start;
}
else
{
return v___x_9_;
}
}
else
{
uint8_t v___x_13_; 
v___x_13_ = 0;
return v___x_13_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote_spec__1___boxed(lean_object* v_id_14_, lean_object* v_as_15_, lean_object* v_i_16_, lean_object* v_stop_17_){
_start:
{
size_t v_i_boxed_18_; size_t v_stop_boxed_19_; uint8_t v_res_20_; lean_object* v_r_21_; 
v_i_boxed_18_ = lean_unbox_usize(v_i_16_);
lean_dec(v_i_16_);
v_stop_boxed_19_ = lean_unbox_usize(v_stop_17_);
lean_dec(v_stop_17_);
v_res_20_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote_spec__1(v_id_14_, v_as_15_, v_i_boxed_18_, v_stop_boxed_19_);
lean_dec_ref(v_as_15_);
lean_dec(v_id_14_);
v_r_21_ = lean_box(v_res_20_);
return v_r_21_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote(lean_object* v_vars_28_, lean_object* v_x_29_){
_start:
{
lean_object* v___x_30_; uint8_t v___x_31_; 
v___x_30_ = ((lean_object*)(l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__1));
lean_inc(v_x_29_);
v___x_31_ = l_Lean_Syntax_isOfKind(v_x_29_, v___x_30_);
if (v___x_31_ == 0)
{
if (lean_obj_tag(v_x_29_) == 1)
{
lean_object* v_info_32_; lean_object* v_kind_33_; lean_object* v_args_34_; lean_object* v___x_36_; uint8_t v_isShared_37_; uint8_t v_isSharedCheck_46_; 
v_info_32_ = lean_ctor_get(v_x_29_, 0);
v_kind_33_ = lean_ctor_get(v_x_29_, 1);
v_args_34_ = lean_ctor_get(v_x_29_, 2);
v_isSharedCheck_46_ = !lean_is_exclusive(v_x_29_);
if (v_isSharedCheck_46_ == 0)
{
v___x_36_ = v_x_29_;
v_isShared_37_ = v_isSharedCheck_46_;
goto v_resetjp_35_;
}
else
{
lean_inc(v_args_34_);
lean_inc(v_kind_33_);
lean_inc(v_info_32_);
lean_dec(v_x_29_);
v___x_36_ = lean_box(0);
v_isShared_37_ = v_isSharedCheck_46_;
goto v_resetjp_35_;
}
v_resetjp_35_:
{
size_t v_sz_38_; size_t v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_44_; 
v_sz_38_ = lean_array_size(v_args_34_);
v___x_39_ = ((size_t)0ULL);
v___x_40_ = l_unsafeCast___redArg(v_args_34_);
lean_dec_ref(v_args_34_);
v___x_41_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote_spec__0(v_vars_28_, v_sz_38_, v___x_39_, v___x_40_);
v___x_42_ = l_unsafeCast___redArg(v___x_41_);
lean_dec_ref(v___x_41_);
if (v_isShared_37_ == 0)
{
lean_ctor_set(v___x_36_, 2, v___x_42_);
v___x_44_ = v___x_36_;
goto v_reusejp_43_;
}
else
{
lean_object* v_reuseFailAlloc_45_; 
v_reuseFailAlloc_45_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_45_, 0, v_info_32_);
lean_ctor_set(v_reuseFailAlloc_45_, 1, v_kind_33_);
lean_ctor_set(v_reuseFailAlloc_45_, 2, v___x_42_);
v___x_44_ = v_reuseFailAlloc_45_;
goto v_reusejp_43_;
}
v_reusejp_43_:
{
return v___x_44_;
}
}
}
else
{
return v_x_29_;
}
}
else
{
lean_object* v___x_47_; lean_object* v___x_48_; uint8_t v___x_49_; 
v___x_47_ = lean_unsigned_to_nat(0u);
v___x_48_ = lean_array_get_size(v_vars_28_);
v___x_49_ = lean_nat_dec_lt(v___x_47_, v___x_48_);
if (v___x_49_ == 0)
{
return v_x_29_;
}
else
{
if (v___x_49_ == 0)
{
return v_x_29_;
}
else
{
size_t v___x_50_; size_t v___x_51_; uint8_t v___x_52_; 
v___x_50_ = ((size_t)0ULL);
v___x_51_ = lean_usize_of_nat(v___x_48_);
v___x_52_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote_spec__1(v_x_29_, v_vars_28_, v___x_50_, v___x_51_);
if (v___x_52_ == 0)
{
return v_x_29_;
}
else
{
lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_53_ = ((lean_object*)(l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__3));
v___x_54_ = lean_box(0);
v___x_55_ = l_Lean_Syntax_mkAntiquotNode(v___x_53_, v_x_29_, v___x_47_, v___x_54_, v___x_31_);
return v___x_55_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote_spec__0(lean_object* v_vars_56_, size_t v_sz_57_, size_t v_i_58_, lean_object* v_bs_59_){
_start:
{
uint8_t v___x_60_; 
v___x_60_ = lean_usize_dec_lt(v_i_58_, v_sz_57_);
if (v___x_60_ == 0)
{
lean_object* v___x_61_; 
v___x_61_ = l_unsafeCast___redArg(v_bs_59_);
lean_dec_ref(v_bs_59_);
return v___x_61_;
}
else
{
lean_object* v_v_62_; lean_object* v___x_63_; lean_object* v_bs_x27_64_; lean_object* v___x_65_; lean_object* v___x_66_; size_t v___x_67_; size_t v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; 
v_v_62_ = lean_array_uget(v_bs_59_, v_i_58_);
v___x_63_ = lean_unsigned_to_nat(0u);
v_bs_x27_64_ = lean_array_uset(v_bs_59_, v_i_58_, v___x_63_);
v___x_65_ = l_unsafeCast___redArg(v_v_62_);
lean_dec(v_v_62_);
v___x_66_ = l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote(v_vars_56_, v___x_65_);
v___x_67_ = ((size_t)1ULL);
v___x_68_ = lean_usize_add(v_i_58_, v___x_67_);
v___x_69_ = l_unsafeCast___redArg(v___x_66_);
lean_dec(v___x_66_);
v___x_70_ = lean_array_uset(v_bs_x27_64_, v_i_58_, v___x_69_);
v_i_58_ = v___x_68_;
v_bs_59_ = v___x_70_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote_spec__0___boxed(lean_object* v_vars_72_, lean_object* v_sz_73_, lean_object* v_i_74_, lean_object* v_bs_75_){
_start:
{
size_t v_sz_boxed_76_; size_t v_i_boxed_77_; lean_object* v_res_78_; 
v_sz_boxed_76_ = lean_unbox_usize(v_sz_73_);
lean_dec(v_sz_73_);
v_i_boxed_77_ = lean_unbox_usize(v_i_74_);
lean_dec(v_i_74_);
v_res_78_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote_spec__0(v_vars_72_, v_sz_boxed_76_, v_i_boxed_77_, v_bs_75_);
lean_dec_ref(v_vars_72_);
return v_res_78_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___boxed(lean_object* v_vars_79_, lean_object* v_x_80_){
_start:
{
lean_object* v_res_81_; 
v_res_81_ = l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote(v_vars_79_, v_x_80_);
lean_dec_ref(v_vars_79_);
return v_res_81_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__14(void){
_start:
{
lean_object* v___x_110_; 
v___x_110_ = l_Array_mkArray0___redArg();
return v___x_110_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0(uint8_t v___x_111_, lean_object* v___x_112_, size_t v_sz_113_, size_t v_i_114_, lean_object* v_bs_115_){
_start:
{
uint8_t v___x_116_; 
v___x_116_ = lean_usize_dec_lt(v_i_114_, v_sz_113_);
if (v___x_116_ == 0)
{
lean_object* v___x_117_; 
lean_dec(v___x_112_);
v___x_117_ = l_unsafeCast___redArg(v_bs_115_);
lean_dec_ref(v_bs_115_);
return v___x_117_;
}
else
{
lean_object* v___x_118_; lean_object* v_v_119_; lean_object* v___x_120_; lean_object* v_bs_x27_121_; lean_object* v___y_123_; lean_object* v___x_129_; uint8_t v___x_130_; 
v___x_118_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__4));
v_v_119_ = lean_array_uget(v_bs_115_, v_i_114_);
v___x_120_ = lean_unsigned_to_nat(0u);
v_bs_x27_121_ = lean_array_uset(v_bs_115_, v_i_114_, v___x_120_);
v___x_129_ = l_unsafeCast___redArg(v_v_119_);
lean_dec(v_v_119_);
lean_inc(v___x_129_);
v___x_130_ = l_Lean_Syntax_isOfKind(v___x_129_, v___x_118_);
if (v___x_130_ == 0)
{
v___y_123_ = v___x_129_;
goto v___jp_122_;
}
else
{
lean_object* v___x_131_; lean_object* v___x_132_; uint8_t v___x_133_; 
v___x_131_ = l_Lean_Syntax_getArg(v___x_129_, v___x_120_);
v___x_132_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__6));
lean_inc(v___x_131_);
v___x_133_ = l_Lean_Syntax_isOfKind(v___x_131_, v___x_132_);
if (v___x_133_ == 0)
{
lean_dec(v___x_131_);
v___y_123_ = v___x_129_;
goto v___jp_122_;
}
else
{
lean_object* v___x_134_; uint8_t v___x_135_; 
v___x_134_ = l_Lean_Syntax_getArg(v___x_131_, v___x_120_);
lean_dec(v___x_131_);
v___x_135_ = l_Lean_Syntax_matchesNull(v___x_134_, v___x_120_);
if (v___x_135_ == 0)
{
v___y_123_ = v___x_129_;
goto v___jp_122_;
}
else
{
lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; uint8_t v___x_139_; 
v___x_136_ = lean_unsigned_to_nat(1u);
v___x_137_ = l_Lean_Syntax_getArg(v___x_129_, v___x_136_);
v___x_138_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__9));
lean_inc(v___x_137_);
v___x_139_ = l_Lean_Syntax_isOfKind(v___x_137_, v___x_138_);
if (v___x_139_ == 0)
{
lean_dec(v___x_137_);
v___y_123_ = v___x_129_;
goto v___jp_122_;
}
else
{
lean_object* v___x_140_; lean_object* v_attr_141_; 
v___x_140_ = lean_box(0);
v_attr_141_ = l_Lean_Syntax_getArg(v___x_137_, v___x_120_);
if (v___x_111_ == 0)
{
lean_object* v___x_157_; uint8_t v___x_158_; 
v___x_157_ = ((lean_object*)(l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__1));
lean_inc(v_attr_141_);
v___x_158_ = l_Lean_Syntax_isOfKind(v_attr_141_, v___x_157_);
if (v___x_158_ == 0)
{
lean_dec(v_attr_141_);
lean_dec(v___x_137_);
v___y_123_ = v___x_129_;
goto v___jp_122_;
}
else
{
goto v___jp_142_;
}
}
else
{
goto v___jp_142_;
}
v___jp_142_:
{
lean_object* v___x_143_; uint8_t v___x_144_; 
v___x_143_ = l_Lean_Syntax_getArg(v___x_137_, v___x_136_);
lean_dec(v___x_137_);
v___x_144_ = l_Lean_Syntax_matchesNull(v___x_143_, v___x_120_);
if (v___x_144_ == 0)
{
lean_dec(v_attr_141_);
v___y_123_ = v___x_129_;
goto v___jp_122_;
}
else
{
lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; uint8_t v___x_148_; 
v___x_145_ = l_Lean_TSyntax_getId(v_attr_141_);
v___x_146_ = l_Lean_Name_eraseMacroScopes(v___x_145_);
lean_dec(v___x_145_);
v___x_147_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__11));
v___x_148_ = lean_name_eq(v___x_146_, v___x_147_);
lean_dec(v___x_146_);
if (v___x_148_ == 0)
{
lean_dec(v_attr_141_);
v___y_123_ = v___x_129_;
goto v___jp_122_;
}
else
{
lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; 
lean_dec(v___x_129_);
v___x_149_ = l_Lean_SourceInfo_fromRef(v___x_140_, v___x_111_);
v___x_150_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__13));
v___x_151_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__14, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__14_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__14);
lean_inc_n(v___x_149_, 4);
v___x_152_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_152_, 0, v___x_149_);
lean_ctor_set(v___x_152_, 1, v___x_150_);
lean_ctor_set(v___x_152_, 2, v___x_151_);
v___x_153_ = l_Lean_Syntax_node1(v___x_149_, v___x_132_, v___x_152_);
lean_inc(v___x_112_);
v___x_154_ = l_Lean_Syntax_node1(v___x_149_, v___x_150_, v___x_112_);
v___x_155_ = l_Lean_Syntax_node2(v___x_149_, v___x_138_, v_attr_141_, v___x_154_);
v___x_156_ = l_Lean_Syntax_node2(v___x_149_, v___x_118_, v___x_153_, v___x_155_);
v___y_123_ = v___x_156_;
goto v___jp_122_;
}
}
}
}
}
}
}
v___jp_122_:
{
size_t v___x_124_; size_t v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; 
v___x_124_ = ((size_t)1ULL);
v___x_125_ = lean_usize_add(v_i_114_, v___x_124_);
v___x_126_ = l_unsafeCast___redArg(v___y_123_);
lean_dec(v___y_123_);
v___x_127_ = lean_array_uset(v_bs_x27_121_, v_i_114_, v___x_126_);
v_i_114_ = v___x_125_;
v_bs_115_ = v___x_127_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___boxed(lean_object* v___x_159_, lean_object* v___x_160_, lean_object* v_sz_161_, lean_object* v_i_162_, lean_object* v_bs_163_){
_start:
{
uint8_t v___x_7340__boxed_164_; size_t v_sz_boxed_165_; size_t v_i_boxed_166_; lean_object* v_res_167_; 
v___x_7340__boxed_164_ = lean_unbox(v___x_159_);
v_sz_boxed_165_ = lean_unbox_usize(v_sz_161_);
lean_dec(v_sz_161_);
v_i_boxed_166_ = lean_unbox_usize(v_i_162_);
lean_dec(v_i_162_);
v_res_167_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0(v___x_7340__boxed_164_, v___x_160_, v_sz_boxed_165_, v_i_boxed_166_, v_bs_163_);
return v_res_167_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__0(void){
_start:
{
uint8_t v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; 
v___x_168_ = 0;
v___x_169_ = lean_box(0);
v___x_170_ = l_Lean_SourceInfo_fromRef(v___x_169_, v___x_168_);
return v___x_170_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__1(void){
_start:
{
lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; 
v___x_171_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__14, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__14_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__14);
v___x_172_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__13));
v___x_173_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__0);
v___x_174_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_174_, 0, v___x_173_);
lean_ctor_set(v___x_174_, 1, v___x_172_);
lean_ctor_set(v___x_174_, 2, v___x_171_);
return v___x_174_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__2(void){
_start:
{
lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; 
v___x_175_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__1);
v___x_176_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__6));
v___x_177_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__0);
v___x_178_ = l_Lean_Syntax_node1(v___x_177_, v___x_176_, v___x_175_);
return v___x_178_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1(lean_object* v___x_179_, size_t v_sz_180_, size_t v_i_181_, lean_object* v_bs_182_){
_start:
{
uint8_t v___x_183_; 
v___x_183_ = lean_usize_dec_lt(v_i_181_, v_sz_180_);
if (v___x_183_ == 0)
{
lean_object* v___x_184_; 
lean_dec(v___x_179_);
v___x_184_ = l_unsafeCast___redArg(v_bs_182_);
lean_dec_ref(v_bs_182_);
return v___x_184_;
}
else
{
lean_object* v___x_185_; lean_object* v_v_186_; lean_object* v___x_187_; lean_object* v_bs_x27_188_; lean_object* v___y_190_; lean_object* v___x_196_; uint8_t v___x_197_; 
v___x_185_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__4));
v_v_186_ = lean_array_uget(v_bs_182_, v_i_181_);
v___x_187_ = lean_unsigned_to_nat(0u);
v_bs_x27_188_ = lean_array_uset(v_bs_182_, v_i_181_, v___x_187_);
v___x_196_ = l_unsafeCast___redArg(v_v_186_);
lean_dec(v_v_186_);
lean_inc(v___x_196_);
v___x_197_ = l_Lean_Syntax_isOfKind(v___x_196_, v___x_185_);
if (v___x_197_ == 0)
{
v___y_190_ = v___x_196_;
goto v___jp_189_;
}
else
{
lean_object* v___x_198_; lean_object* v___x_199_; uint8_t v___x_200_; 
v___x_198_ = l_Lean_Syntax_getArg(v___x_196_, v___x_187_);
v___x_199_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__6));
lean_inc(v___x_198_);
v___x_200_ = l_Lean_Syntax_isOfKind(v___x_198_, v___x_199_);
if (v___x_200_ == 0)
{
lean_dec(v___x_198_);
v___y_190_ = v___x_196_;
goto v___jp_189_;
}
else
{
lean_object* v___x_201_; uint8_t v___x_202_; 
v___x_201_ = l_Lean_Syntax_getArg(v___x_198_, v___x_187_);
lean_dec(v___x_198_);
v___x_202_ = l_Lean_Syntax_matchesNull(v___x_201_, v___x_187_);
if (v___x_202_ == 0)
{
v___y_190_ = v___x_196_;
goto v___jp_189_;
}
else
{
lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; uint8_t v___x_206_; 
v___x_203_ = lean_unsigned_to_nat(1u);
v___x_204_ = l_Lean_Syntax_getArg(v___x_196_, v___x_203_);
v___x_205_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__9));
lean_inc(v___x_204_);
v___x_206_ = l_Lean_Syntax_isOfKind(v___x_204_, v___x_205_);
if (v___x_206_ == 0)
{
lean_dec(v___x_204_);
v___y_190_ = v___x_196_;
goto v___jp_189_;
}
else
{
lean_object* v___x_207_; lean_object* v_attr_208_; uint8_t v___x_209_; 
v___x_207_ = ((lean_object*)(l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__1));
v_attr_208_ = l_Lean_Syntax_getArg(v___x_204_, v___x_187_);
lean_inc(v_attr_208_);
v___x_209_ = l_Lean_Syntax_isOfKind(v_attr_208_, v___x_207_);
if (v___x_209_ == 0)
{
lean_dec(v_attr_208_);
lean_dec(v___x_204_);
v___y_190_ = v___x_196_;
goto v___jp_189_;
}
else
{
lean_object* v___x_210_; uint8_t v___x_211_; 
v___x_210_ = l_Lean_Syntax_getArg(v___x_204_, v___x_203_);
lean_dec(v___x_204_);
v___x_211_ = l_Lean_Syntax_matchesNull(v___x_210_, v___x_187_);
if (v___x_211_ == 0)
{
lean_dec(v_attr_208_);
v___y_190_ = v___x_196_;
goto v___jp_189_;
}
else
{
lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; uint8_t v___x_215_; 
v___x_212_ = l_Lean_TSyntax_getId(v_attr_208_);
v___x_213_ = l_Lean_Name_eraseMacroScopes(v___x_212_);
lean_dec(v___x_212_);
v___x_214_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__11));
v___x_215_ = lean_name_eq(v___x_213_, v___x_214_);
lean_dec(v___x_213_);
if (v___x_215_ == 0)
{
lean_dec(v_attr_208_);
v___y_190_ = v___x_196_;
goto v___jp_189_;
}
else
{
lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; 
lean_dec(v___x_196_);
v___x_216_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__0);
v___x_217_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__13));
v___x_218_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__2, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__2);
lean_inc(v___x_179_);
v___x_219_ = l_Lean_Syntax_node1(v___x_216_, v___x_217_, v___x_179_);
v___x_220_ = l_Lean_Syntax_node2(v___x_216_, v___x_205_, v_attr_208_, v___x_219_);
v___x_221_ = l_Lean_Syntax_node2(v___x_216_, v___x_185_, v___x_218_, v___x_220_);
v___y_190_ = v___x_221_;
goto v___jp_189_;
}
}
}
}
}
}
}
v___jp_189_:
{
size_t v___x_191_; size_t v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; 
v___x_191_ = ((size_t)1ULL);
v___x_192_ = lean_usize_add(v_i_181_, v___x_191_);
v___x_193_ = l_unsafeCast___redArg(v___y_190_);
lean_dec(v___y_190_);
v___x_194_ = lean_array_uset(v_bs_x27_188_, v_i_181_, v___x_193_);
v_i_181_ = v___x_192_;
v_bs_182_ = v___x_194_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___boxed(lean_object* v___x_222_, lean_object* v_sz_223_, lean_object* v_i_224_, lean_object* v_bs_225_){
_start:
{
size_t v_sz_boxed_226_; size_t v_i_boxed_227_; lean_object* v_res_228_; 
v_sz_boxed_226_ = lean_unbox_usize(v_sz_223_);
lean_dec(v_sz_223_);
v_i_boxed_227_ = lean_unbox_usize(v_i_224_);
lean_dec(v_i_224_);
v_res_228_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1(v___x_222_, v_sz_boxed_226_, v_i_boxed_227_, v_bs_225_);
return v_res_228_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_addInheritDocDefault(lean_object* v_rhs_236_, lean_object* v_attrs_x3f_237_){
_start:
{
if (lean_obj_tag(v_attrs_x3f_237_) == 0)
{
lean_dec(v_rhs_236_);
return v_attrs_x3f_237_;
}
else
{
lean_object* v_val_238_; lean_object* v___x_239_; uint8_t v___x_240_; 
v_val_238_ = lean_ctor_get(v_attrs_x3f_237_, 0);
v___x_239_ = ((lean_object*)(l_Lean_Elab_Command_addInheritDocDefault___closed__1));
lean_inc(v_rhs_236_);
v___x_240_ = l_Lean_Syntax_isOfKind(v_rhs_236_, v___x_239_);
if (v___x_240_ == 0)
{
if (v___x_240_ == 0)
{
lean_object* v___x_252_; uint8_t v___x_253_; 
v___x_252_ = ((lean_object*)(l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__1));
lean_inc(v_rhs_236_);
v___x_253_ = l_Lean_Syntax_isOfKind(v_rhs_236_, v___x_252_);
if (v___x_253_ == 0)
{
lean_dec(v_rhs_236_);
return v_attrs_x3f_237_;
}
else
{
lean_inc(v_val_238_);
lean_dec_ref_known(v_attrs_x3f_237_, 1);
goto v___jp_241_;
}
}
else
{
lean_inc(v_val_238_);
lean_dec_ref_known(v_attrs_x3f_237_, 1);
goto v___jp_241_;
}
}
else
{
lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; uint8_t v___x_257_; 
v___x_254_ = lean_unsigned_to_nat(0u);
v___x_255_ = l_Lean_Syntax_getArg(v_rhs_236_, v___x_254_);
lean_dec(v_rhs_236_);
v___x_256_ = ((lean_object*)(l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__1));
lean_inc(v___x_255_);
v___x_257_ = l_Lean_Syntax_isOfKind(v___x_255_, v___x_256_);
if (v___x_257_ == 0)
{
lean_dec(v___x_255_);
return v_attrs_x3f_237_;
}
else
{
lean_object* v___x_259_; uint8_t v_isShared_260_; uint8_t v_isSharedCheck_273_; 
lean_inc(v_val_238_);
v_isSharedCheck_273_ = !lean_is_exclusive(v_attrs_x3f_237_);
if (v_isSharedCheck_273_ == 0)
{
lean_object* v_unused_274_; 
v_unused_274_ = lean_ctor_get(v_attrs_x3f_237_, 0);
lean_dec(v_unused_274_);
v___x_259_ = v_attrs_x3f_237_;
v_isShared_260_ = v_isSharedCheck_273_;
goto v_resetjp_258_;
}
else
{
lean_dec(v_attrs_x3f_237_);
v___x_259_ = lean_box(0);
v_isShared_260_ = v_isSharedCheck_273_;
goto v_resetjp_258_;
}
v_resetjp_258_:
{
lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; size_t v_sz_264_; size_t v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_271_; 
v___x_261_ = ((lean_object*)(l_Lean_Elab_Command_addInheritDocDefault___closed__2));
v___x_262_ = l_Lean_Syntax_TSepArray_getElems___redArg(v_val_238_);
lean_dec(v_val_238_);
v___x_263_ = l_unsafeCast___redArg(v___x_262_);
lean_dec_ref(v___x_262_);
v_sz_264_ = lean_array_size(v___x_263_);
v___x_265_ = ((size_t)0ULL);
v___x_266_ = l_unsafeCast___redArg(v___x_263_);
lean_dec(v___x_263_);
v___x_267_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1(v___x_255_, v_sz_264_, v___x_265_, v___x_266_);
v___x_268_ = l_unsafeCast___redArg(v___x_267_);
lean_dec_ref(v___x_267_);
v___x_269_ = l_Lean_Syntax_TSepArray_ofElems___redArg(v___x_261_, v___x_268_);
lean_dec(v___x_268_);
if (v_isShared_260_ == 0)
{
lean_ctor_set(v___x_259_, 0, v___x_269_);
v___x_271_ = v___x_259_;
goto v_reusejp_270_;
}
else
{
lean_object* v_reuseFailAlloc_272_; 
v_reuseFailAlloc_272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_272_, 0, v___x_269_);
v___x_271_ = v_reuseFailAlloc_272_;
goto v_reusejp_270_;
}
v_reusejp_270_:
{
return v___x_271_;
}
}
}
}
v___jp_241_:
{
lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; size_t v_sz_245_; size_t v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; 
v___x_242_ = ((lean_object*)(l_Lean_Elab_Command_addInheritDocDefault___closed__2));
v___x_243_ = l_Lean_Syntax_TSepArray_getElems___redArg(v_val_238_);
lean_dec(v_val_238_);
v___x_244_ = l_unsafeCast___redArg(v___x_243_);
lean_dec_ref(v___x_243_);
v_sz_245_ = lean_array_size(v___x_244_);
v___x_246_ = ((size_t)0ULL);
v___x_247_ = l_unsafeCast___redArg(v___x_244_);
lean_dec(v___x_244_);
v___x_248_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0(v___x_240_, v_rhs_236_, v_sz_245_, v___x_246_, v___x_247_);
v___x_249_ = l_unsafeCast___redArg(v___x_248_);
lean_dec_ref(v___x_248_);
v___x_250_ = l_Lean_Syntax_TSepArray_ofElems___redArg(v___x_242_, v___x_249_);
lean_dec(v___x_249_);
v___x_251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_251_, 0, v___x_250_);
return v___x_251_;
}
}
}
}
static lean_object* _init_l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__3(void){
_start:
{
lean_object* v___x_282_; lean_object* v___x_283_; 
v___x_282_ = ((lean_object*)(l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__2));
v___x_283_ = l_String_toRawSubstring_x27(v___x_282_);
return v___x_283_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem(lean_object* v_x_314_, lean_object* v_a_315_, lean_object* v_a_316_){
_start:
{
lean_object* v___y_318_; lean_object* v___y_319_; lean_object* v___y_320_; lean_object* v___y_321_; lean_object* v___y_322_; lean_object* v___y_323_; lean_object* v___y_324_; lean_object* v_prec_x3f_330_; lean_object* v___y_331_; lean_object* v___y_332_; lean_object* v___x_353_; uint8_t v___x_354_; 
v___x_353_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__10));
lean_inc(v_x_314_);
v___x_354_ = l_Lean_Syntax_isOfKind(v_x_314_, v___x_353_);
if (v___x_354_ == 0)
{
if (v___x_354_ == 0)
{
lean_object* v___x_361_; uint8_t v___x_362_; 
v___x_361_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__14));
lean_inc(v_x_314_);
v___x_362_ = l_Lean_Syntax_isOfKind(v_x_314_, v___x_361_);
if (v___x_362_ == 0)
{
lean_object* v___x_363_; uint8_t v___x_364_; 
v___x_363_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__16));
lean_inc(v_x_314_);
v___x_364_ = l_Lean_Syntax_isOfKind(v_x_314_, v___x_363_);
if (v___x_364_ == 0)
{
lean_object* v___x_365_; 
lean_dec(v_x_314_);
v___x_365_ = l_Lean_Macro_throwUnsupported___redArg(v_a_316_);
return v___x_365_;
}
else
{
lean_object* v___x_366_; 
v___x_366_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_366_, 0, v_x_314_);
lean_ctor_set(v___x_366_, 1, v_a_316_);
return v___x_366_;
}
}
else
{
goto v___jp_355_;
}
}
else
{
goto v___jp_355_;
}
}
else
{
lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; uint8_t v___x_370_; 
v___x_367_ = lean_unsigned_to_nat(0u);
v___x_368_ = l_Lean_Syntax_getArg(v_x_314_, v___x_367_);
v___x_369_ = ((lean_object*)(l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__1));
v___x_370_ = l_Lean_Syntax_isOfKind(v___x_368_, v___x_369_);
if (v___x_370_ == 0)
{
lean_object* v___x_371_; uint8_t v___x_372_; 
v___x_371_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__16));
lean_inc(v_x_314_);
v___x_372_ = l_Lean_Syntax_isOfKind(v_x_314_, v___x_371_);
if (v___x_372_ == 0)
{
lean_object* v___x_373_; 
lean_dec(v_x_314_);
v___x_373_ = l_Lean_Macro_throwUnsupported___redArg(v_a_316_);
return v___x_373_;
}
else
{
lean_object* v___x_374_; 
v___x_374_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_374_, 0, v_x_314_);
lean_ctor_set(v___x_374_, 1, v_a_316_);
return v___x_374_;
}
}
else
{
lean_object* v___x_375_; lean_object* v___x_376_; uint8_t v___x_377_; 
v___x_375_ = lean_unsigned_to_nat(1u);
v___x_376_ = l_Lean_Syntax_getArg(v_x_314_, v___x_375_);
v___x_377_ = l_Lean_Syntax_isNone(v___x_376_);
if (v___x_377_ == 0)
{
uint8_t v___x_378_; 
lean_inc(v___x_376_);
v___x_378_ = l_Lean_Syntax_matchesNull(v___x_376_, v___x_375_);
if (v___x_378_ == 0)
{
lean_object* v___x_379_; uint8_t v___x_380_; 
lean_dec(v___x_376_);
v___x_379_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__16));
lean_inc(v_x_314_);
v___x_380_ = l_Lean_Syntax_isOfKind(v_x_314_, v___x_379_);
if (v___x_380_ == 0)
{
lean_object* v___x_381_; 
lean_dec(v_x_314_);
v___x_381_ = l_Lean_Macro_throwUnsupported___redArg(v_a_316_);
return v___x_381_;
}
else
{
lean_object* v___x_382_; 
v___x_382_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_382_, 0, v_x_314_);
lean_ctor_set(v___x_382_, 1, v_a_316_);
return v___x_382_;
}
}
else
{
lean_object* v___x_383_; lean_object* v___x_384_; uint8_t v___x_385_; 
v___x_383_ = l_Lean_Syntax_getArg(v___x_376_, v___x_367_);
lean_dec(v___x_376_);
v___x_384_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__5));
lean_inc(v___x_383_);
v___x_385_ = l_Lean_Syntax_isOfKind(v___x_383_, v___x_384_);
if (v___x_385_ == 0)
{
lean_object* v___x_386_; uint8_t v___x_387_; 
lean_dec(v___x_383_);
v___x_386_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__16));
lean_inc(v_x_314_);
v___x_387_ = l_Lean_Syntax_isOfKind(v_x_314_, v___x_386_);
if (v___x_387_ == 0)
{
lean_object* v___x_388_; 
lean_dec(v_x_314_);
v___x_388_ = l_Lean_Macro_throwUnsupported___redArg(v_a_316_);
return v___x_388_;
}
else
{
lean_object* v___x_389_; 
v___x_389_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_389_, 0, v_x_314_);
lean_ctor_set(v___x_389_, 1, v_a_316_);
return v___x_389_;
}
}
else
{
lean_object* v_prec_x3f_390_; lean_object* v___x_391_; 
lean_dec(v_x_314_);
v_prec_x3f_390_ = l_Lean_Syntax_getArg(v___x_383_, v___x_375_);
lean_dec(v___x_383_);
v___x_391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_391_, 0, v_prec_x3f_390_);
v_prec_x3f_330_ = v___x_391_;
v___y_331_ = v_a_315_;
v___y_332_ = v_a_316_;
goto v___jp_329_;
}
}
}
else
{
lean_object* v___x_392_; 
lean_dec(v___x_376_);
lean_dec(v_x_314_);
v___x_392_ = lean_box(0);
v_prec_x3f_330_ = v___x_392_;
v___y_331_ = v_a_315_;
v___y_332_ = v_a_316_;
goto v___jp_329_;
}
}
}
v___jp_317_:
{
lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; 
lean_inc_ref(v___y_323_);
v___x_325_ = l_Array_append___redArg(v___y_323_, v___y_324_);
lean_dec_ref(v___y_324_);
lean_inc(v___y_318_);
lean_inc(v___y_320_);
v___x_326_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_326_, 0, v___y_320_);
lean_ctor_set(v___x_326_, 1, v___y_318_);
lean_ctor_set(v___x_326_, 2, v___x_325_);
lean_inc(v___y_322_);
v___x_327_ = l_Lean_Syntax_node2(v___y_320_, v___y_322_, v___y_319_, v___x_326_);
v___x_328_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_328_, 0, v___x_327_);
lean_ctor_set(v___x_328_, 1, v___y_321_);
return v___x_328_;
}
v___jp_329_:
{
lean_object* v_quotContext_333_; lean_object* v_currMacroScope_334_; lean_object* v_ref_335_; uint8_t v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; 
v_quotContext_333_ = lean_ctor_get(v___y_331_, 1);
v_currMacroScope_334_ = lean_ctor_get(v___y_331_, 2);
v_ref_335_ = lean_ctor_get(v___y_331_, 5);
v___x_336_ = 0;
v___x_337_ = l_Lean_SourceInfo_fromRef(v_ref_335_, v___x_336_);
v___x_338_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__2));
v___x_339_ = lean_obj_once(&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__3, &l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__3_once, _init_l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__3);
v___x_340_ = ((lean_object*)(l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__3));
lean_inc(v_currMacroScope_334_);
lean_inc(v_quotContext_333_);
v___x_341_ = l_Lean_addMacroScope(v_quotContext_333_, v___x_340_, v_currMacroScope_334_);
v___x_342_ = lean_box(0);
lean_inc(v___x_337_);
v___x_343_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_343_, 0, v___x_337_);
lean_ctor_set(v___x_343_, 1, v___x_339_);
lean_ctor_set(v___x_343_, 2, v___x_341_);
lean_ctor_set(v___x_343_, 3, v___x_342_);
v___x_344_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__13));
v___x_345_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__14, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__14_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__14);
if (lean_obj_tag(v_prec_x3f_330_) == 1)
{
lean_object* v_val_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; 
v_val_346_ = lean_ctor_get(v_prec_x3f_330_, 0);
lean_inc(v_val_346_);
lean_dec_ref_known(v_prec_x3f_330_, 1);
v___x_347_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__5));
v___x_348_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__6));
lean_inc_n(v___x_337_, 2);
v___x_349_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_349_, 0, v___x_337_);
lean_ctor_set(v___x_349_, 1, v___x_348_);
v___x_350_ = l_Lean_Syntax_node2(v___x_337_, v___x_347_, v___x_349_, v_val_346_);
v___x_351_ = l_Array_mkArray1___redArg(v___x_350_);
v___y_318_ = v___x_344_;
v___y_319_ = v___x_343_;
v___y_320_ = v___x_337_;
v___y_321_ = v___y_332_;
v___y_322_ = v___x_338_;
v___y_323_ = v___x_345_;
v___y_324_ = v___x_351_;
goto v___jp_317_;
}
else
{
lean_object* v___x_352_; 
lean_dec(v_prec_x3f_330_);
v___x_352_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__7));
v___y_318_ = v___x_344_;
v___y_319_ = v___x_343_;
v___y_320_ = v___x_337_;
v___y_321_ = v___y_332_;
v___y_322_ = v___x_338_;
v___y_323_ = v___x_345_;
v___y_324_ = v___x_352_;
goto v___jp_317_;
}
}
v___jp_355_:
{
lean_object* v_ref_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; 
v_ref_356_ = lean_ctor_get(v_a_315_, 5);
v___x_357_ = l_Lean_SourceInfo_fromRef(v_ref_356_, v___x_354_);
v___x_358_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__12));
v___x_359_ = l_Lean_Syntax_node1(v___x_357_, v___x_358_, v_x_314_);
v___x_360_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_360_, 0, v___x_359_);
lean_ctor_set(v___x_360_, 1, v_a_316_);
return v___x_360_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___boxed(lean_object* v_x_393_, lean_object* v_a_394_, lean_object* v_a_395_){
_start:
{
lean_object* v_res_396_; 
v_res_396_ = l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem(v_x_393_, v_a_394_, v_a_395_);
lean_dec_ref(v_a_394_);
return v_res_396_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_expandNotationItemIntoPattern___redArg(lean_object* v_stx_397_, lean_object* v_a_398_){
_start:
{
uint8_t v___y_400_; lean_object* v_k_407_; lean_object* v___x_408_; uint8_t v___x_409_; 
lean_inc(v_stx_397_);
v_k_407_ = l_Lean_Syntax_getKind(v_stx_397_);
v___x_408_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__10));
v___x_409_ = lean_name_eq(v_k_407_, v___x_408_);
if (v___x_409_ == 0)
{
lean_object* v___x_410_; uint8_t v___x_411_; 
v___x_410_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__14));
v___x_411_ = lean_name_eq(v_k_407_, v___x_410_);
if (v___x_411_ == 0)
{
lean_object* v___x_412_; uint8_t v___x_413_; 
v___x_412_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__16));
v___x_413_ = lean_name_eq(v_k_407_, v___x_412_);
lean_dec(v_k_407_);
if (v___x_413_ == 0)
{
lean_object* v___x_414_; 
lean_dec(v_stx_397_);
v___x_414_ = l_Lean_Macro_throwUnsupported___redArg(v_a_398_);
return v___x_414_;
}
else
{
lean_object* v___x_415_; lean_object* v___x_416_; uint8_t v___x_417_; 
v___x_415_ = lean_unsigned_to_nat(4u);
v___x_416_ = l_Lean_Syntax_getArg(v_stx_397_, v___x_415_);
v___x_417_ = l_Lean_Syntax_isNone(v___x_416_);
lean_dec(v___x_416_);
if (v___x_417_ == 0)
{
v___y_400_ = v___x_413_;
goto v___jp_399_;
}
else
{
v___y_400_ = v___x_411_;
goto v___jp_399_;
}
}
}
else
{
lean_object* v___x_418_; 
lean_dec(v_k_407_);
v___x_418_ = l_Lean_Elab_Command_strLitToPattern___redArg(v_stx_397_, v_a_398_);
lean_dec(v_stx_397_);
return v___x_418_;
}
}
else
{
lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; 
lean_dec(v_k_407_);
v___x_419_ = ((lean_object*)(l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__3));
v___x_420_ = lean_unsigned_to_nat(0u);
v___x_421_ = l_Lean_Syntax_getArg(v_stx_397_, v___x_420_);
lean_dec(v_stx_397_);
v___x_422_ = lean_box(0);
v___x_423_ = l_Lean_Syntax_mkAntiquotNode(v___x_419_, v___x_421_, v___x_420_, v___x_422_, v___x_409_);
v___x_424_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_424_, 0, v___x_423_);
lean_ctor_set(v___x_424_, 1, v_a_398_);
return v___x_424_;
}
v___jp_399_:
{
if (v___y_400_ == 0)
{
lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; 
v___x_401_ = lean_unsigned_to_nat(1u);
v___x_402_ = l_Lean_Syntax_getArg(v_stx_397_, v___x_401_);
lean_dec(v_stx_397_);
v___x_403_ = l_Lean_Elab_Command_strLitToPattern___redArg(v___x_402_, v_a_398_);
lean_dec(v___x_402_);
return v___x_403_;
}
else
{
lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; 
v___x_404_ = lean_unsigned_to_nat(3u);
v___x_405_ = l_Lean_Syntax_getArg(v_stx_397_, v___x_404_);
lean_dec(v_stx_397_);
v___x_406_ = l_Lean_Elab_Command_strLitToPattern___redArg(v___x_405_, v_a_398_);
lean_dec(v___x_405_);
return v___x_406_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_expandNotationItemIntoPattern(lean_object* v_stx_425_, lean_object* v_a_426_, lean_object* v_a_427_){
_start:
{
lean_object* v___x_428_; 
v___x_428_ = l_Lean_Elab_Command_expandNotationItemIntoPattern___redArg(v_stx_425_, v_a_427_);
return v___x_428_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_expandNotationItemIntoPattern___boxed(lean_object* v_stx_429_, lean_object* v_a_430_, lean_object* v_a_431_){
_start:
{
lean_object* v_res_432_; 
v_res_432_ = l_Lean_Elab_Command_expandNotationItemIntoPattern(v_stx_429_, v_a_430_, v_a_431_);
lean_dec_ref(v_a_430_);
return v_res_432_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_removeParenthesesAux(lean_object* v_parens_433_, lean_object* v_body_434_){
_start:
{
lean_object* v___x_435_; 
v___x_435_ = l_Lean_Syntax_getHeadInfo(v_parens_433_);
if (lean_obj_tag(v___x_435_) == 0)
{
lean_object* v_leading_436_; lean_object* v___x_437_; 
v_leading_436_ = lean_ctor_get(v___x_435_, 0);
lean_inc_ref(v_leading_436_);
lean_dec_ref_known(v___x_435_, 4);
v___x_437_ = l_Lean_Syntax_getHeadInfo(v_body_434_);
if (lean_obj_tag(v___x_437_) == 0)
{
lean_object* v_pos_438_; lean_object* v_trailing_439_; lean_object* v_endPos_440_; lean_object* v___x_441_; 
v_pos_438_ = lean_ctor_get(v___x_437_, 1);
lean_inc(v_pos_438_);
v_trailing_439_ = lean_ctor_get(v___x_437_, 2);
lean_inc_ref(v_trailing_439_);
v_endPos_440_ = lean_ctor_get(v___x_437_, 3);
lean_inc(v_endPos_440_);
lean_dec_ref_known(v___x_437_, 4);
v___x_441_ = l_Lean_Syntax_getTailInfo(v_body_434_);
if (lean_obj_tag(v___x_441_) == 0)
{
lean_object* v_leading_442_; lean_object* v_pos_443_; lean_object* v_endPos_444_; lean_object* v___x_446_; uint8_t v_isShared_447_; uint8_t v_isSharedCheck_465_; 
v_leading_442_ = lean_ctor_get(v___x_441_, 0);
v_pos_443_ = lean_ctor_get(v___x_441_, 1);
v_endPos_444_ = lean_ctor_get(v___x_441_, 3);
v_isSharedCheck_465_ = !lean_is_exclusive(v___x_441_);
if (v_isSharedCheck_465_ == 0)
{
lean_object* v_unused_466_; 
v_unused_466_ = lean_ctor_get(v___x_441_, 2);
lean_dec(v_unused_466_);
v___x_446_ = v___x_441_;
v_isShared_447_ = v_isSharedCheck_465_;
goto v_resetjp_445_;
}
else
{
lean_inc(v_endPos_444_);
lean_inc(v_pos_443_);
lean_inc(v_leading_442_);
lean_dec(v___x_441_);
v___x_446_ = lean_box(0);
v_isShared_447_ = v_isSharedCheck_465_;
goto v_resetjp_445_;
}
v_resetjp_445_:
{
lean_object* v___x_448_; 
v___x_448_ = l_Lean_Syntax_getTailInfo(v_parens_433_);
if (lean_obj_tag(v___x_448_) == 0)
{
lean_object* v_trailing_449_; lean_object* v___x_451_; uint8_t v_isShared_452_; uint8_t v_isSharedCheck_461_; 
v_trailing_449_ = lean_ctor_get(v___x_448_, 2);
v_isSharedCheck_461_ = !lean_is_exclusive(v___x_448_);
if (v_isSharedCheck_461_ == 0)
{
lean_object* v_unused_462_; lean_object* v_unused_463_; lean_object* v_unused_464_; 
v_unused_462_ = lean_ctor_get(v___x_448_, 3);
lean_dec(v_unused_462_);
v_unused_463_ = lean_ctor_get(v___x_448_, 1);
lean_dec(v_unused_463_);
v_unused_464_ = lean_ctor_get(v___x_448_, 0);
lean_dec(v_unused_464_);
v___x_451_ = v___x_448_;
v_isShared_452_ = v_isSharedCheck_461_;
goto v_resetjp_450_;
}
else
{
lean_inc(v_trailing_449_);
lean_dec(v___x_448_);
v___x_451_ = lean_box(0);
v_isShared_452_ = v_isSharedCheck_461_;
goto v_resetjp_450_;
}
v_resetjp_450_:
{
lean_object* v___x_454_; 
if (v_isShared_452_ == 0)
{
lean_ctor_set(v___x_451_, 3, v_endPos_440_);
lean_ctor_set(v___x_451_, 2, v_trailing_439_);
lean_ctor_set(v___x_451_, 1, v_pos_438_);
lean_ctor_set(v___x_451_, 0, v_leading_436_);
v___x_454_ = v___x_451_;
goto v_reusejp_453_;
}
else
{
lean_object* v_reuseFailAlloc_460_; 
v_reuseFailAlloc_460_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_460_, 0, v_leading_436_);
lean_ctor_set(v_reuseFailAlloc_460_, 1, v_pos_438_);
lean_ctor_set(v_reuseFailAlloc_460_, 2, v_trailing_439_);
lean_ctor_set(v_reuseFailAlloc_460_, 3, v_endPos_440_);
v___x_454_ = v_reuseFailAlloc_460_;
goto v_reusejp_453_;
}
v_reusejp_453_:
{
lean_object* v___x_455_; lean_object* v___x_457_; 
v___x_455_ = l_Lean_Syntax_setHeadInfo(v_body_434_, v___x_454_);
if (v_isShared_447_ == 0)
{
lean_ctor_set(v___x_446_, 2, v_trailing_449_);
v___x_457_ = v___x_446_;
goto v_reusejp_456_;
}
else
{
lean_object* v_reuseFailAlloc_459_; 
v_reuseFailAlloc_459_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_459_, 0, v_leading_442_);
lean_ctor_set(v_reuseFailAlloc_459_, 1, v_pos_443_);
lean_ctor_set(v_reuseFailAlloc_459_, 2, v_trailing_449_);
lean_ctor_set(v_reuseFailAlloc_459_, 3, v_endPos_444_);
v___x_457_ = v_reuseFailAlloc_459_;
goto v_reusejp_456_;
}
v_reusejp_456_:
{
lean_object* v___x_458_; 
v___x_458_ = l_Lean_Syntax_setTailInfo(v___x_455_, v___x_457_);
return v___x_458_;
}
}
}
}
else
{
lean_dec(v___x_448_);
lean_del_object(v___x_446_);
lean_dec(v_endPos_444_);
lean_dec(v_pos_443_);
lean_dec_ref(v_leading_442_);
lean_dec(v_endPos_440_);
lean_dec_ref(v_trailing_439_);
lean_dec(v_pos_438_);
lean_dec_ref(v_leading_436_);
return v_body_434_;
}
}
}
else
{
lean_dec(v___x_441_);
lean_dec(v_endPos_440_);
lean_dec_ref(v_trailing_439_);
lean_dec(v_pos_438_);
lean_dec_ref(v_leading_436_);
return v_body_434_;
}
}
else
{
lean_dec(v___x_437_);
lean_dec_ref(v_leading_436_);
return v_body_434_;
}
}
else
{
lean_dec(v___x_435_);
return v_body_434_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_removeParenthesesAux___boxed(lean_object* v_parens_467_, lean_object* v_body_468_){
_start:
{
lean_object* v_res_469_; 
v_res_469_ = l_Lean_Elab_Command_removeParenthesesAux(v_parens_467_, v_body_468_);
lean_dec(v_parens_467_);
return v_res_469_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_removeParentheses_spec__0___boxed(lean_object* v_sz_478_, lean_object* v_i_479_, lean_object* v_bs_480_, lean_object* v___y_481_, lean_object* v___y_482_){
_start:
{
size_t v_sz_boxed_483_; size_t v_i_boxed_484_; lean_object* v_res_485_; 
v_sz_boxed_483_ = lean_unbox_usize(v_sz_478_);
lean_dec(v_sz_478_);
v_i_boxed_484_ = lean_unbox_usize(v_i_479_);
lean_dec(v_i_479_);
v_res_485_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_removeParentheses_spec__0(v_sz_boxed_483_, v_i_boxed_484_, v_bs_480_, v___y_481_, v___y_482_);
lean_dec_ref(v___y_481_);
return v_res_485_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_removeParentheses(lean_object* v_stx_495_, lean_object* v_a_496_, lean_object* v_a_497_){
_start:
{
lean_object* v___x_498_; uint8_t v___x_499_; 
v___x_498_ = ((lean_object*)(l_Lean_Elab_Command_removeParentheses___closed__1));
lean_inc(v_stx_495_);
v___x_499_ = l_Lean_Syntax_isOfKind(v_stx_495_, v___x_498_);
if (v___x_499_ == 0)
{
if (lean_obj_tag(v_stx_495_) == 1)
{
lean_object* v_info_500_; lean_object* v_kind_501_; lean_object* v_args_502_; lean_object* v___x_504_; uint8_t v_isShared_505_; uint8_t v_isSharedCheck_534_; 
v_info_500_ = lean_ctor_get(v_stx_495_, 0);
v_kind_501_ = lean_ctor_get(v_stx_495_, 1);
v_args_502_ = lean_ctor_get(v_stx_495_, 2);
v_isSharedCheck_534_ = !lean_is_exclusive(v_stx_495_);
if (v_isSharedCheck_534_ == 0)
{
v___x_504_ = v_stx_495_;
v_isShared_505_ = v_isSharedCheck_534_;
goto v_resetjp_503_;
}
else
{
lean_inc(v_args_502_);
lean_inc(v_kind_501_);
lean_inc(v_info_500_);
lean_dec(v_stx_495_);
v___x_504_ = lean_box(0);
v_isShared_505_ = v_isSharedCheck_534_;
goto v_resetjp_503_;
}
v_resetjp_503_:
{
size_t v_sz_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_2192__overap_511_; lean_object* v___x_512_; 
v_sz_506_ = lean_array_size(v_args_502_);
v___x_507_ = l_unsafeCast___redArg(v_args_502_);
lean_dec_ref(v_args_502_);
v___x_508_ = lean_box_usize(v_sz_506_);
v___x_509_ = ((lean_object*)(l_Lean_Elab_Command_removeParentheses___boxed__const__1));
v___x_510_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_removeParentheses_spec__0___boxed), 5, 3);
lean_closure_set(v___x_510_, 0, v___x_508_);
lean_closure_set(v___x_510_, 1, v___x_509_);
lean_closure_set(v___x_510_, 2, v___x_507_);
v___x_2192__overap_511_ = l_unsafeCast___redArg(v___x_510_);
lean_dec_ref(v___x_510_);
lean_inc_ref(v_a_496_);
v___x_512_ = lean_apply_2(v___x_2192__overap_511_, v_a_496_, v_a_497_);
if (lean_obj_tag(v___x_512_) == 0)
{
lean_object* v_a_513_; lean_object* v_a_514_; lean_object* v___x_516_; uint8_t v_isShared_517_; uint8_t v_isSharedCheck_524_; 
v_a_513_ = lean_ctor_get(v___x_512_, 0);
v_a_514_ = lean_ctor_get(v___x_512_, 1);
v_isSharedCheck_524_ = !lean_is_exclusive(v___x_512_);
if (v_isSharedCheck_524_ == 0)
{
v___x_516_ = v___x_512_;
v_isShared_517_ = v_isSharedCheck_524_;
goto v_resetjp_515_;
}
else
{
lean_inc(v_a_514_);
lean_inc(v_a_513_);
lean_dec(v___x_512_);
v___x_516_ = lean_box(0);
v_isShared_517_ = v_isSharedCheck_524_;
goto v_resetjp_515_;
}
v_resetjp_515_:
{
lean_object* v___x_519_; 
if (v_isShared_505_ == 0)
{
lean_ctor_set(v___x_504_, 2, v_a_513_);
v___x_519_ = v___x_504_;
goto v_reusejp_518_;
}
else
{
lean_object* v_reuseFailAlloc_523_; 
v_reuseFailAlloc_523_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_523_, 0, v_info_500_);
lean_ctor_set(v_reuseFailAlloc_523_, 1, v_kind_501_);
lean_ctor_set(v_reuseFailAlloc_523_, 2, v_a_513_);
v___x_519_ = v_reuseFailAlloc_523_;
goto v_reusejp_518_;
}
v_reusejp_518_:
{
lean_object* v___x_521_; 
if (v_isShared_517_ == 0)
{
lean_ctor_set(v___x_516_, 0, v___x_519_);
v___x_521_ = v___x_516_;
goto v_reusejp_520_;
}
else
{
lean_object* v_reuseFailAlloc_522_; 
v_reuseFailAlloc_522_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_522_, 0, v___x_519_);
lean_ctor_set(v_reuseFailAlloc_522_, 1, v_a_514_);
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
lean_object* v_a_525_; lean_object* v_a_526_; lean_object* v___x_528_; uint8_t v_isShared_529_; uint8_t v_isSharedCheck_533_; 
lean_del_object(v___x_504_);
lean_dec(v_kind_501_);
lean_dec(v_info_500_);
v_a_525_ = lean_ctor_get(v___x_512_, 0);
v_a_526_ = lean_ctor_get(v___x_512_, 1);
v_isSharedCheck_533_ = !lean_is_exclusive(v___x_512_);
if (v_isSharedCheck_533_ == 0)
{
v___x_528_ = v___x_512_;
v_isShared_529_ = v_isSharedCheck_533_;
goto v_resetjp_527_;
}
else
{
lean_inc(v_a_526_);
lean_inc(v_a_525_);
lean_dec(v___x_512_);
v___x_528_ = lean_box(0);
v_isShared_529_ = v_isSharedCheck_533_;
goto v_resetjp_527_;
}
v_resetjp_527_:
{
lean_object* v___x_531_; 
if (v_isShared_529_ == 0)
{
v___x_531_ = v___x_528_;
goto v_reusejp_530_;
}
else
{
lean_object* v_reuseFailAlloc_532_; 
v_reuseFailAlloc_532_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_532_, 0, v_a_525_);
lean_ctor_set(v_reuseFailAlloc_532_, 1, v_a_526_);
v___x_531_ = v_reuseFailAlloc_532_;
goto v_reusejp_530_;
}
v_reusejp_530_:
{
return v___x_531_;
}
}
}
}
}
else
{
lean_object* v___x_535_; 
v___x_535_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_535_, 0, v_stx_495_);
lean_ctor_set(v___x_535_, 1, v_a_497_);
return v___x_535_;
}
}
else
{
lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; uint8_t v___x_539_; 
v___x_536_ = lean_unsigned_to_nat(0u);
v___x_537_ = l_Lean_Syntax_getArg(v_stx_495_, v___x_536_);
v___x_538_ = ((lean_object*)(l_Lean_Elab_Command_removeParentheses___closed__3));
lean_inc(v___x_537_);
v___x_539_ = l_Lean_Syntax_isOfKind(v___x_537_, v___x_538_);
if (v___x_539_ == 0)
{
lean_dec(v___x_537_);
if (lean_obj_tag(v_stx_495_) == 1)
{
lean_object* v_info_540_; lean_object* v_kind_541_; lean_object* v_args_542_; lean_object* v___x_544_; uint8_t v_isShared_545_; uint8_t v_isSharedCheck_574_; 
v_info_540_ = lean_ctor_get(v_stx_495_, 0);
v_kind_541_ = lean_ctor_get(v_stx_495_, 1);
v_args_542_ = lean_ctor_get(v_stx_495_, 2);
v_isSharedCheck_574_ = !lean_is_exclusive(v_stx_495_);
if (v_isSharedCheck_574_ == 0)
{
v___x_544_ = v_stx_495_;
v_isShared_545_ = v_isSharedCheck_574_;
goto v_resetjp_543_;
}
else
{
lean_inc(v_args_542_);
lean_inc(v_kind_541_);
lean_inc(v_info_540_);
lean_dec(v_stx_495_);
v___x_544_ = lean_box(0);
v_isShared_545_ = v_isSharedCheck_574_;
goto v_resetjp_543_;
}
v_resetjp_543_:
{
size_t v_sz_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_2195__overap_551_; lean_object* v___x_552_; 
v_sz_546_ = lean_array_size(v_args_542_);
v___x_547_ = l_unsafeCast___redArg(v_args_542_);
lean_dec_ref(v_args_542_);
v___x_548_ = lean_box_usize(v_sz_546_);
v___x_549_ = ((lean_object*)(l_Lean_Elab_Command_removeParentheses___boxed__const__1));
v___x_550_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_removeParentheses_spec__0___boxed), 5, 3);
lean_closure_set(v___x_550_, 0, v___x_548_);
lean_closure_set(v___x_550_, 1, v___x_549_);
lean_closure_set(v___x_550_, 2, v___x_547_);
v___x_2195__overap_551_ = l_unsafeCast___redArg(v___x_550_);
lean_dec_ref(v___x_550_);
lean_inc_ref(v_a_496_);
v___x_552_ = lean_apply_2(v___x_2195__overap_551_, v_a_496_, v_a_497_);
if (lean_obj_tag(v___x_552_) == 0)
{
lean_object* v_a_553_; lean_object* v_a_554_; lean_object* v___x_556_; uint8_t v_isShared_557_; uint8_t v_isSharedCheck_564_; 
v_a_553_ = lean_ctor_get(v___x_552_, 0);
v_a_554_ = lean_ctor_get(v___x_552_, 1);
v_isSharedCheck_564_ = !lean_is_exclusive(v___x_552_);
if (v_isSharedCheck_564_ == 0)
{
v___x_556_ = v___x_552_;
v_isShared_557_ = v_isSharedCheck_564_;
goto v_resetjp_555_;
}
else
{
lean_inc(v_a_554_);
lean_inc(v_a_553_);
lean_dec(v___x_552_);
v___x_556_ = lean_box(0);
v_isShared_557_ = v_isSharedCheck_564_;
goto v_resetjp_555_;
}
v_resetjp_555_:
{
lean_object* v___x_559_; 
if (v_isShared_545_ == 0)
{
lean_ctor_set(v___x_544_, 2, v_a_553_);
v___x_559_ = v___x_544_;
goto v_reusejp_558_;
}
else
{
lean_object* v_reuseFailAlloc_563_; 
v_reuseFailAlloc_563_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_563_, 0, v_info_540_);
lean_ctor_set(v_reuseFailAlloc_563_, 1, v_kind_541_);
lean_ctor_set(v_reuseFailAlloc_563_, 2, v_a_553_);
v___x_559_ = v_reuseFailAlloc_563_;
goto v_reusejp_558_;
}
v_reusejp_558_:
{
lean_object* v___x_561_; 
if (v_isShared_557_ == 0)
{
lean_ctor_set(v___x_556_, 0, v___x_559_);
v___x_561_ = v___x_556_;
goto v_reusejp_560_;
}
else
{
lean_object* v_reuseFailAlloc_562_; 
v_reuseFailAlloc_562_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_562_, 0, v___x_559_);
lean_ctor_set(v_reuseFailAlloc_562_, 1, v_a_554_);
v___x_561_ = v_reuseFailAlloc_562_;
goto v_reusejp_560_;
}
v_reusejp_560_:
{
return v___x_561_;
}
}
}
}
else
{
lean_object* v_a_565_; lean_object* v_a_566_; lean_object* v___x_568_; uint8_t v_isShared_569_; uint8_t v_isSharedCheck_573_; 
lean_del_object(v___x_544_);
lean_dec(v_kind_541_);
lean_dec(v_info_540_);
v_a_565_ = lean_ctor_get(v___x_552_, 0);
v_a_566_ = lean_ctor_get(v___x_552_, 1);
v_isSharedCheck_573_ = !lean_is_exclusive(v___x_552_);
if (v_isSharedCheck_573_ == 0)
{
v___x_568_ = v___x_552_;
v_isShared_569_ = v_isSharedCheck_573_;
goto v_resetjp_567_;
}
else
{
lean_inc(v_a_566_);
lean_inc(v_a_565_);
lean_dec(v___x_552_);
v___x_568_ = lean_box(0);
v_isShared_569_ = v_isSharedCheck_573_;
goto v_resetjp_567_;
}
v_resetjp_567_:
{
lean_object* v___x_571_; 
if (v_isShared_569_ == 0)
{
v___x_571_ = v___x_568_;
goto v_reusejp_570_;
}
else
{
lean_object* v_reuseFailAlloc_572_; 
v_reuseFailAlloc_572_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_572_, 0, v_a_565_);
lean_ctor_set(v_reuseFailAlloc_572_, 1, v_a_566_);
v___x_571_ = v_reuseFailAlloc_572_;
goto v_reusejp_570_;
}
v_reusejp_570_:
{
return v___x_571_;
}
}
}
}
}
else
{
lean_object* v___x_575_; 
v___x_575_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_575_, 0, v_stx_495_);
lean_ctor_set(v___x_575_, 1, v_a_497_);
return v___x_575_;
}
}
else
{
lean_object* v___x_576_; lean_object* v_h_577_; lean_object* v___x_578_; uint8_t v___x_579_; 
v___x_576_ = lean_unsigned_to_nat(1u);
v_h_577_ = l_Lean_Syntax_getArg(v___x_537_, v___x_576_);
lean_dec(v___x_537_);
v___x_578_ = ((lean_object*)(l_Lean_Elab_Command_removeParentheses___closed__5));
lean_inc(v_h_577_);
v___x_579_ = l_Lean_Syntax_isOfKind(v_h_577_, v___x_578_);
if (v___x_579_ == 0)
{
lean_dec(v_h_577_);
if (lean_obj_tag(v_stx_495_) == 1)
{
lean_object* v_info_580_; lean_object* v_kind_581_; lean_object* v_args_582_; lean_object* v___x_584_; uint8_t v_isShared_585_; uint8_t v_isSharedCheck_614_; 
v_info_580_ = lean_ctor_get(v_stx_495_, 0);
v_kind_581_ = lean_ctor_get(v_stx_495_, 1);
v_args_582_ = lean_ctor_get(v_stx_495_, 2);
v_isSharedCheck_614_ = !lean_is_exclusive(v_stx_495_);
if (v_isSharedCheck_614_ == 0)
{
v___x_584_ = v_stx_495_;
v_isShared_585_ = v_isSharedCheck_614_;
goto v_resetjp_583_;
}
else
{
lean_inc(v_args_582_);
lean_inc(v_kind_581_);
lean_inc(v_info_580_);
lean_dec(v_stx_495_);
v___x_584_ = lean_box(0);
v_isShared_585_ = v_isSharedCheck_614_;
goto v_resetjp_583_;
}
v_resetjp_583_:
{
size_t v_sz_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_2198__overap_591_; lean_object* v___x_592_; 
v_sz_586_ = lean_array_size(v_args_582_);
v___x_587_ = l_unsafeCast___redArg(v_args_582_);
lean_dec_ref(v_args_582_);
v___x_588_ = lean_box_usize(v_sz_586_);
v___x_589_ = ((lean_object*)(l_Lean_Elab_Command_removeParentheses___boxed__const__1));
v___x_590_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_removeParentheses_spec__0___boxed), 5, 3);
lean_closure_set(v___x_590_, 0, v___x_588_);
lean_closure_set(v___x_590_, 1, v___x_589_);
lean_closure_set(v___x_590_, 2, v___x_587_);
v___x_2198__overap_591_ = l_unsafeCast___redArg(v___x_590_);
lean_dec_ref(v___x_590_);
lean_inc_ref(v_a_496_);
v___x_592_ = lean_apply_2(v___x_2198__overap_591_, v_a_496_, v_a_497_);
if (lean_obj_tag(v___x_592_) == 0)
{
lean_object* v_a_593_; lean_object* v_a_594_; lean_object* v___x_596_; uint8_t v_isShared_597_; uint8_t v_isSharedCheck_604_; 
v_a_593_ = lean_ctor_get(v___x_592_, 0);
v_a_594_ = lean_ctor_get(v___x_592_, 1);
v_isSharedCheck_604_ = !lean_is_exclusive(v___x_592_);
if (v_isSharedCheck_604_ == 0)
{
v___x_596_ = v___x_592_;
v_isShared_597_ = v_isSharedCheck_604_;
goto v_resetjp_595_;
}
else
{
lean_inc(v_a_594_);
lean_inc(v_a_593_);
lean_dec(v___x_592_);
v___x_596_ = lean_box(0);
v_isShared_597_ = v_isSharedCheck_604_;
goto v_resetjp_595_;
}
v_resetjp_595_:
{
lean_object* v___x_599_; 
if (v_isShared_585_ == 0)
{
lean_ctor_set(v___x_584_, 2, v_a_593_);
v___x_599_ = v___x_584_;
goto v_reusejp_598_;
}
else
{
lean_object* v_reuseFailAlloc_603_; 
v_reuseFailAlloc_603_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_603_, 0, v_info_580_);
lean_ctor_set(v_reuseFailAlloc_603_, 1, v_kind_581_);
lean_ctor_set(v_reuseFailAlloc_603_, 2, v_a_593_);
v___x_599_ = v_reuseFailAlloc_603_;
goto v_reusejp_598_;
}
v_reusejp_598_:
{
lean_object* v___x_601_; 
if (v_isShared_597_ == 0)
{
lean_ctor_set(v___x_596_, 0, v___x_599_);
v___x_601_ = v___x_596_;
goto v_reusejp_600_;
}
else
{
lean_object* v_reuseFailAlloc_602_; 
v_reuseFailAlloc_602_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_602_, 0, v___x_599_);
lean_ctor_set(v_reuseFailAlloc_602_, 1, v_a_594_);
v___x_601_ = v_reuseFailAlloc_602_;
goto v_reusejp_600_;
}
v_reusejp_600_:
{
return v___x_601_;
}
}
}
}
else
{
lean_object* v_a_605_; lean_object* v_a_606_; lean_object* v___x_608_; uint8_t v_isShared_609_; uint8_t v_isSharedCheck_613_; 
lean_del_object(v___x_584_);
lean_dec(v_kind_581_);
lean_dec(v_info_580_);
v_a_605_ = lean_ctor_get(v___x_592_, 0);
v_a_606_ = lean_ctor_get(v___x_592_, 1);
v_isSharedCheck_613_ = !lean_is_exclusive(v___x_592_);
if (v_isSharedCheck_613_ == 0)
{
v___x_608_ = v___x_592_;
v_isShared_609_ = v_isSharedCheck_613_;
goto v_resetjp_607_;
}
else
{
lean_inc(v_a_606_);
lean_inc(v_a_605_);
lean_dec(v___x_592_);
v___x_608_ = lean_box(0);
v_isShared_609_ = v_isSharedCheck_613_;
goto v_resetjp_607_;
}
v_resetjp_607_:
{
lean_object* v___x_611_; 
if (v_isShared_609_ == 0)
{
v___x_611_ = v___x_608_;
goto v_reusejp_610_;
}
else
{
lean_object* v_reuseFailAlloc_612_; 
v_reuseFailAlloc_612_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_612_, 0, v_a_605_);
lean_ctor_set(v_reuseFailAlloc_612_, 1, v_a_606_);
v___x_611_ = v_reuseFailAlloc_612_;
goto v_reusejp_610_;
}
v_reusejp_610_:
{
return v___x_611_;
}
}
}
}
}
else
{
lean_object* v___x_615_; 
v___x_615_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_615_, 0, v_stx_495_);
lean_ctor_set(v___x_615_, 1, v_a_497_);
return v___x_615_;
}
}
else
{
lean_object* v_e_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; 
v_e_616_ = l_Lean_Syntax_getArg(v_stx_495_, v___x_576_);
v___x_617_ = l_Lean_TSyntax_getHygieneInfo(v_h_577_);
lean_dec(v_h_577_);
v___x_618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_618_, 0, v___x_617_);
lean_inc(v_e_616_);
v___x_619_ = l_Lean_Elab_Term_expandCDot_x3f(v_e_616_, v___x_618_, v_a_496_, v_a_497_);
if (lean_obj_tag(v___x_619_) == 0)
{
lean_object* v_a_620_; lean_object* v_a_621_; lean_object* v___y_623_; 
v_a_620_ = lean_ctor_get(v___x_619_, 0);
lean_inc(v_a_620_);
v_a_621_ = lean_ctor_get(v___x_619_, 1);
lean_inc(v_a_621_);
lean_dec_ref_known(v___x_619_, 2);
if (lean_obj_tag(v_a_620_) == 0)
{
v___y_623_ = v_e_616_;
goto v___jp_622_;
}
else
{
lean_object* v_val_635_; 
lean_dec(v_e_616_);
v_val_635_ = lean_ctor_get(v_a_620_, 0);
lean_inc(v_val_635_);
lean_dec_ref_known(v_a_620_, 1);
v___y_623_ = v_val_635_;
goto v___jp_622_;
}
v___jp_622_:
{
lean_object* v___x_624_; 
v___x_624_ = l_Lean_Elab_Command_removeParentheses(v___y_623_, v_a_496_, v_a_621_);
if (lean_obj_tag(v___x_624_) == 0)
{
lean_object* v_a_625_; lean_object* v_a_626_; lean_object* v___x_628_; uint8_t v_isShared_629_; uint8_t v_isSharedCheck_634_; 
v_a_625_ = lean_ctor_get(v___x_624_, 0);
v_a_626_ = lean_ctor_get(v___x_624_, 1);
v_isSharedCheck_634_ = !lean_is_exclusive(v___x_624_);
if (v_isSharedCheck_634_ == 0)
{
v___x_628_ = v___x_624_;
v_isShared_629_ = v_isSharedCheck_634_;
goto v_resetjp_627_;
}
else
{
lean_inc(v_a_626_);
lean_inc(v_a_625_);
lean_dec(v___x_624_);
v___x_628_ = lean_box(0);
v_isShared_629_ = v_isSharedCheck_634_;
goto v_resetjp_627_;
}
v_resetjp_627_:
{
lean_object* v___x_630_; lean_object* v___x_632_; 
v___x_630_ = l_Lean_Elab_Command_removeParenthesesAux(v_stx_495_, v_a_625_);
lean_dec(v_stx_495_);
if (v_isShared_629_ == 0)
{
lean_ctor_set(v___x_628_, 0, v___x_630_);
v___x_632_ = v___x_628_;
goto v_reusejp_631_;
}
else
{
lean_object* v_reuseFailAlloc_633_; 
v_reuseFailAlloc_633_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_633_, 0, v___x_630_);
lean_ctor_set(v_reuseFailAlloc_633_, 1, v_a_626_);
v___x_632_ = v_reuseFailAlloc_633_;
goto v_reusejp_631_;
}
v_reusejp_631_:
{
return v___x_632_;
}
}
}
else
{
lean_dec(v_stx_495_);
return v___x_624_;
}
}
}
else
{
lean_object* v_a_636_; lean_object* v_a_637_; lean_object* v___x_639_; uint8_t v_isShared_640_; uint8_t v_isSharedCheck_644_; 
lean_dec(v_e_616_);
lean_dec(v_stx_495_);
v_a_636_ = lean_ctor_get(v___x_619_, 0);
v_a_637_ = lean_ctor_get(v___x_619_, 1);
v_isSharedCheck_644_ = !lean_is_exclusive(v___x_619_);
if (v_isSharedCheck_644_ == 0)
{
v___x_639_ = v___x_619_;
v_isShared_640_ = v_isSharedCheck_644_;
goto v_resetjp_638_;
}
else
{
lean_inc(v_a_637_);
lean_inc(v_a_636_);
lean_dec(v___x_619_);
v___x_639_ = lean_box(0);
v_isShared_640_ = v_isSharedCheck_644_;
goto v_resetjp_638_;
}
v_resetjp_638_:
{
lean_object* v___x_642_; 
if (v_isShared_640_ == 0)
{
v___x_642_ = v___x_639_;
goto v_reusejp_641_;
}
else
{
lean_object* v_reuseFailAlloc_643_; 
v_reuseFailAlloc_643_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_643_, 0, v_a_636_);
lean_ctor_set(v_reuseFailAlloc_643_, 1, v_a_637_);
v___x_642_ = v_reuseFailAlloc_643_;
goto v_reusejp_641_;
}
v_reusejp_641_:
{
return v___x_642_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_removeParentheses_spec__0(size_t v_sz_645_, size_t v_i_646_, lean_object* v_bs_647_, lean_object* v___y_648_, lean_object* v___y_649_){
_start:
{
uint8_t v___x_650_; 
v___x_650_ = lean_usize_dec_lt(v_i_646_, v_sz_645_);
if (v___x_650_ == 0)
{
lean_object* v___x_651_; lean_object* v___x_652_; 
v___x_651_ = l_unsafeCast___redArg(v_bs_647_);
lean_dec_ref(v_bs_647_);
v___x_652_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_652_, 0, v___x_651_);
lean_ctor_set(v___x_652_, 1, v___y_649_);
return v___x_652_;
}
else
{
lean_object* v_v_653_; lean_object* v___x_654_; lean_object* v___x_655_; 
v_v_653_ = lean_array_uget_borrowed(v_bs_647_, v_i_646_);
v___x_654_ = l_unsafeCast___redArg(v_v_653_);
v___x_655_ = l_Lean_Elab_Command_removeParentheses(v___x_654_, v___y_648_, v___y_649_);
if (lean_obj_tag(v___x_655_) == 0)
{
lean_object* v_a_656_; lean_object* v_a_657_; lean_object* v___x_658_; lean_object* v_bs_x27_659_; size_t v___x_660_; size_t v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; 
v_a_656_ = lean_ctor_get(v___x_655_, 0);
lean_inc(v_a_656_);
v_a_657_ = lean_ctor_get(v___x_655_, 1);
lean_inc(v_a_657_);
lean_dec_ref_known(v___x_655_, 2);
v___x_658_ = lean_unsigned_to_nat(0u);
v_bs_x27_659_ = lean_array_uset(v_bs_647_, v_i_646_, v___x_658_);
v___x_660_ = ((size_t)1ULL);
v___x_661_ = lean_usize_add(v_i_646_, v___x_660_);
v___x_662_ = l_unsafeCast___redArg(v_a_656_);
lean_dec(v_a_656_);
v___x_663_ = lean_array_uset(v_bs_x27_659_, v_i_646_, v___x_662_);
v_i_646_ = v___x_661_;
v_bs_647_ = v___x_663_;
v___y_649_ = v_a_657_;
goto _start;
}
else
{
lean_object* v_a_665_; lean_object* v_a_666_; lean_object* v___x_668_; uint8_t v_isShared_669_; uint8_t v_isSharedCheck_673_; 
lean_dec_ref(v_bs_647_);
v_a_665_ = lean_ctor_get(v___x_655_, 0);
v_a_666_ = lean_ctor_get(v___x_655_, 1);
v_isSharedCheck_673_ = !lean_is_exclusive(v___x_655_);
if (v_isSharedCheck_673_ == 0)
{
v___x_668_ = v___x_655_;
v_isShared_669_ = v_isSharedCheck_673_;
goto v_resetjp_667_;
}
else
{
lean_inc(v_a_666_);
lean_inc(v_a_665_);
lean_dec(v___x_655_);
v___x_668_ = lean_box(0);
v_isShared_669_ = v_isSharedCheck_673_;
goto v_resetjp_667_;
}
v_resetjp_667_:
{
lean_object* v___x_671_; 
if (v_isShared_669_ == 0)
{
v___x_671_ = v___x_668_;
goto v_reusejp_670_;
}
else
{
lean_object* v_reuseFailAlloc_672_; 
v_reuseFailAlloc_672_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_672_, 0, v_a_665_);
lean_ctor_set(v_reuseFailAlloc_672_, 1, v_a_666_);
v___x_671_ = v_reuseFailAlloc_672_;
goto v_reusejp_670_;
}
v_reusejp_670_:
{
return v___x_671_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_removeParentheses___boxed(lean_object* v_stx_674_, lean_object* v_a_675_, lean_object* v_a_676_){
_start:
{
lean_object* v_res_677_; 
v_res_677_ = l_Lean_Elab_Command_removeParentheses(v_stx_674_, v_a_675_, v_a_676_);
lean_dec_ref(v_a_675_);
return v_res_677_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0(lean_object* v___x_681_, uint8_t v_firstChoiceOnly_682_, lean_object* v_stx_683_, lean_object* v_b_684_){
_start:
{
lean_object* v___y_686_; lean_object* v___y_687_; lean_object* v_snd_697_; lean_object* v___x_699_; uint8_t v_isShared_700_; uint8_t v_isSharedCheck_733_; 
v_snd_697_ = lean_ctor_get(v_b_684_, 1);
v_isSharedCheck_733_ = !lean_is_exclusive(v_b_684_);
if (v_isSharedCheck_733_ == 0)
{
lean_object* v_unused_734_; 
v_unused_734_ = lean_ctor_get(v_b_684_, 0);
lean_dec(v_unused_734_);
v___x_699_ = v_b_684_;
v_isShared_700_ = v_isSharedCheck_733_;
goto v_resetjp_698_;
}
else
{
lean_inc(v_snd_697_);
lean_dec(v_b_684_);
v___x_699_ = lean_box(0);
v_isShared_700_ = v_isSharedCheck_733_;
goto v_resetjp_698_;
}
v___jp_685_:
{
lean_object* v___x_688_; lean_object* v___x_689_; size_t v_sz_690_; size_t v___x_691_; lean_object* v___x_692_; lean_object* v_fst_693_; 
v___x_688_ = lean_box(0);
v___x_689_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_689_, 0, v___x_688_);
lean_ctor_set(v___x_689_, 1, v___y_686_);
v_sz_690_ = lean_array_size(v___y_687_);
v___x_691_ = ((size_t)0ULL);
v___x_692_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0_spec__0(v___x_681_, v_firstChoiceOnly_682_, v___y_687_, v_sz_690_, v___x_691_, v___x_689_);
v_fst_693_ = lean_ctor_get(v___x_692_, 0);
lean_inc(v_fst_693_);
if (lean_obj_tag(v_fst_693_) == 0)
{
lean_object* v_snd_694_; lean_object* v___x_695_; 
v_snd_694_ = lean_ctor_get(v___x_692_, 1);
lean_inc(v_snd_694_);
lean_dec_ref(v___x_692_);
v___x_695_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_695_, 0, v_snd_694_);
return v___x_695_;
}
else
{
lean_object* v_val_696_; 
lean_dec_ref(v___x_692_);
v_val_696_ = lean_ctor_get(v_fst_693_, 0);
lean_inc(v_val_696_);
lean_dec_ref_known(v_fst_693_, 1);
return v_val_696_;
}
}
v_resetjp_698_:
{
lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___y_704_; lean_object* v_a_705_; uint8_t v___x_714_; 
v___x_701_ = lean_box(0);
v___x_702_ = lean_box(0);
v___x_714_ = l_Lean_Syntax_isAntiquot(v_stx_683_);
if (v___x_714_ == 0)
{
lean_object* v___x_716_; 
if (v_isShared_700_ == 0)
{
lean_ctor_set(v___x_699_, 0, v___x_701_);
v___x_716_ = v___x_699_;
goto v_reusejp_715_;
}
else
{
lean_object* v_reuseFailAlloc_718_; 
v_reuseFailAlloc_718_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_718_, 0, v___x_701_);
lean_ctor_set(v_reuseFailAlloc_718_, 1, v_snd_697_);
v___x_716_ = v_reuseFailAlloc_718_;
goto v_reusejp_715_;
}
v_reusejp_715_:
{
lean_object* v___x_717_; 
lean_inc_ref(v___x_716_);
v___x_717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_717_, 0, v___x_716_);
v___y_704_ = v___x_717_;
v_a_705_ = v___x_716_;
goto v___jp_703_;
}
}
else
{
lean_object* v___x_719_; lean_object* v___x_720_; uint8_t v___x_721_; 
v___x_719_ = l_Lean_Syntax_getAntiquotTerm(v_stx_683_);
v___x_720_ = l_Lean_Syntax_getId(v___x_719_);
lean_dec(v___x_719_);
v___x_721_ = l_Lean_NameSet_contains(v_snd_697_, v___x_720_);
if (v___x_721_ == 0)
{
lean_object* v___x_722_; lean_object* v___x_724_; 
v___x_722_ = l_Lean_NameSet_insert(v_snd_697_, v___x_720_);
if (v_isShared_700_ == 0)
{
lean_ctor_set(v___x_699_, 1, v___x_722_);
lean_ctor_set(v___x_699_, 0, v___x_701_);
v___x_724_ = v___x_699_;
goto v_reusejp_723_;
}
else
{
lean_object* v_reuseFailAlloc_726_; 
v_reuseFailAlloc_726_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_726_, 0, v___x_701_);
lean_ctor_set(v_reuseFailAlloc_726_, 1, v___x_722_);
v___x_724_ = v_reuseFailAlloc_726_;
goto v_reusejp_723_;
}
v_reusejp_723_:
{
lean_object* v___x_725_; 
lean_inc_ref(v___x_724_);
v___x_725_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_725_, 0, v___x_724_);
v___y_704_ = v___x_725_;
v_a_705_ = v___x_724_;
goto v___jp_703_;
}
}
else
{
lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_730_; 
lean_dec(v___x_720_);
v___x_727_ = lean_box(v___x_721_);
v___x_728_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_728_, 0, v___x_727_);
if (v_isShared_700_ == 0)
{
lean_ctor_set(v___x_699_, 0, v___x_728_);
v___x_730_ = v___x_699_;
goto v_reusejp_729_;
}
else
{
lean_object* v_reuseFailAlloc_732_; 
v_reuseFailAlloc_732_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_732_, 0, v___x_728_);
lean_ctor_set(v_reuseFailAlloc_732_, 1, v_snd_697_);
v___x_730_ = v_reuseFailAlloc_732_;
goto v_reusejp_729_;
}
v_reusejp_729_:
{
lean_object* v___x_731_; 
v___x_731_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_731_, 0, v___x_730_);
return v___x_731_;
}
}
}
v___jp_703_:
{
if (lean_obj_tag(v_stx_683_) == 1)
{
lean_dec_ref(v___y_704_);
if (v_firstChoiceOnly_682_ == 0)
{
lean_object* v_args_706_; 
v_args_706_ = lean_ctor_get(v_stx_683_, 2);
v___y_686_ = v_a_705_;
v___y_687_ = v_args_706_;
goto v___jp_685_;
}
else
{
lean_object* v_kind_707_; lean_object* v_args_708_; lean_object* v___x_709_; uint8_t v___x_710_; 
v_kind_707_ = lean_ctor_get(v_stx_683_, 1);
v_args_708_ = lean_ctor_get(v_stx_683_, 2);
v___x_709_ = ((lean_object*)(l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0___closed__1));
v___x_710_ = lean_name_eq(v_kind_707_, v___x_709_);
if (v___x_710_ == 0)
{
v___y_686_ = v_a_705_;
v___y_687_ = v_args_708_;
goto v___jp_685_;
}
else
{
lean_object* v___x_711_; lean_object* v___x_712_; 
v___x_711_ = lean_unsigned_to_nat(0u);
v___x_712_ = lean_array_get_borrowed(v___x_702_, v_args_708_, v___x_711_);
v_stx_683_ = v___x_712_;
v_b_684_ = v_a_705_;
goto _start;
}
}
}
else
{
lean_dec_ref(v_a_705_);
return v___y_704_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0_spec__0(lean_object* v___x_735_, uint8_t v_firstChoiceOnly_736_, lean_object* v_as_737_, size_t v_sz_738_, size_t v_i_739_, lean_object* v_b_740_){
_start:
{
uint8_t v___x_741_; 
v___x_741_ = lean_usize_dec_lt(v_i_739_, v_sz_738_);
if (v___x_741_ == 0)
{
return v_b_740_;
}
else
{
lean_object* v_snd_742_; lean_object* v___x_744_; uint8_t v_isShared_745_; uint8_t v_isSharedCheck_760_; 
v_snd_742_ = lean_ctor_get(v_b_740_, 1);
v_isSharedCheck_760_ = !lean_is_exclusive(v_b_740_);
if (v_isSharedCheck_760_ == 0)
{
lean_object* v_unused_761_; 
v_unused_761_ = lean_ctor_get(v_b_740_, 0);
lean_dec(v_unused_761_);
v___x_744_ = v_b_740_;
v_isShared_745_ = v_isSharedCheck_760_;
goto v_resetjp_743_;
}
else
{
lean_inc(v_snd_742_);
lean_dec(v_b_740_);
v___x_744_ = lean_box(0);
v_isShared_745_ = v_isSharedCheck_760_;
goto v_resetjp_743_;
}
v_resetjp_743_:
{
lean_object* v_a_746_; lean_object* v___x_747_; 
v_a_746_ = lean_array_uget_borrowed(v_as_737_, v_i_739_);
lean_inc(v_snd_742_);
v___x_747_ = l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0(v___x_735_, v_firstChoiceOnly_736_, v_a_746_, v_snd_742_);
if (lean_obj_tag(v___x_747_) == 0)
{
lean_object* v___x_748_; lean_object* v___x_750_; 
v___x_748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_748_, 0, v___x_747_);
if (v_isShared_745_ == 0)
{
lean_ctor_set(v___x_744_, 0, v___x_748_);
v___x_750_ = v___x_744_;
goto v_reusejp_749_;
}
else
{
lean_object* v_reuseFailAlloc_751_; 
v_reuseFailAlloc_751_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_751_, 0, v___x_748_);
lean_ctor_set(v_reuseFailAlloc_751_, 1, v_snd_742_);
v___x_750_ = v_reuseFailAlloc_751_;
goto v_reusejp_749_;
}
v_reusejp_749_:
{
return v___x_750_;
}
}
else
{
lean_object* v_a_752_; lean_object* v___x_753_; lean_object* v___x_755_; 
lean_dec(v_snd_742_);
v_a_752_ = lean_ctor_get(v___x_747_, 0);
lean_inc(v_a_752_);
lean_dec_ref_known(v___x_747_, 1);
v___x_753_ = lean_box(0);
if (v_isShared_745_ == 0)
{
lean_ctor_set(v___x_744_, 1, v_a_752_);
lean_ctor_set(v___x_744_, 0, v___x_753_);
v___x_755_ = v___x_744_;
goto v_reusejp_754_;
}
else
{
lean_object* v_reuseFailAlloc_759_; 
v_reuseFailAlloc_759_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_759_, 0, v___x_753_);
lean_ctor_set(v_reuseFailAlloc_759_, 1, v_a_752_);
v___x_755_ = v_reuseFailAlloc_759_;
goto v_reusejp_754_;
}
v_reusejp_754_:
{
size_t v___x_756_; size_t v___x_757_; 
v___x_756_ = ((size_t)1ULL);
v___x_757_ = lean_usize_add(v_i_739_, v___x_756_);
v_i_739_ = v___x_757_;
v_b_740_ = v___x_755_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0_spec__0___boxed(lean_object* v___x_762_, lean_object* v_firstChoiceOnly_763_, lean_object* v_as_764_, lean_object* v_sz_765_, lean_object* v_i_766_, lean_object* v_b_767_){
_start:
{
uint8_t v_firstChoiceOnly_boxed_768_; size_t v_sz_boxed_769_; size_t v_i_boxed_770_; lean_object* v_res_771_; 
v_firstChoiceOnly_boxed_768_ = lean_unbox(v_firstChoiceOnly_763_);
v_sz_boxed_769_ = lean_unbox_usize(v_sz_765_);
lean_dec(v_sz_765_);
v_i_boxed_770_ = lean_unbox_usize(v_i_766_);
lean_dec(v_i_766_);
v_res_771_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0_spec__0(v___x_762_, v_firstChoiceOnly_boxed_768_, v_as_764_, v_sz_boxed_769_, v_i_boxed_770_, v_b_767_);
lean_dec_ref(v_as_764_);
lean_dec_ref(v___x_762_);
return v_res_771_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0___boxed(lean_object* v___x_772_, lean_object* v_firstChoiceOnly_773_, lean_object* v_stx_774_, lean_object* v_b_775_){
_start:
{
uint8_t v_firstChoiceOnly_boxed_776_; lean_object* v_res_777_; 
v_firstChoiceOnly_boxed_776_ = lean_unbox(v_firstChoiceOnly_773_);
v_res_777_ = l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0(v___x_772_, v_firstChoiceOnly_boxed_776_, v_stx_774_, v_b_775_);
lean_dec(v_stx_774_);
lean_dec_ref(v___x_772_);
return v_res_777_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__1(lean_object* v_as_778_, size_t v_sz_779_, size_t v_i_780_, lean_object* v_b_781_){
_start:
{
uint8_t v___x_782_; 
v___x_782_ = lean_usize_dec_lt(v_i_780_, v_sz_779_);
if (v___x_782_ == 0)
{
return v_b_781_;
}
else
{
lean_object* v_snd_783_; lean_object* v___x_785_; uint8_t v_isShared_786_; uint8_t v_isSharedCheck_821_; 
v_snd_783_ = lean_ctor_get(v_b_781_, 1);
v_isSharedCheck_821_ = !lean_is_exclusive(v_b_781_);
if (v_isSharedCheck_821_ == 0)
{
lean_object* v_unused_822_; 
v_unused_822_ = lean_ctor_get(v_b_781_, 0);
lean_dec(v_unused_822_);
v___x_785_ = v_b_781_;
v_isShared_786_ = v_isSharedCheck_821_;
goto v_resetjp_784_;
}
else
{
lean_inc(v_snd_783_);
lean_dec(v_b_781_);
v___x_785_ = lean_box(0);
v_isShared_786_ = v_isSharedCheck_821_;
goto v_resetjp_784_;
}
v_resetjp_784_:
{
lean_object* v_a_787_; lean_object* v___x_788_; uint8_t v_firstChoiceOnly_789_; lean_object* v_stx_790_; lean_object* v___x_791_; lean_object* v___y_793_; lean_object* v___x_817_; 
v_a_787_ = lean_array_uget_borrowed(v_as_778_, v_i_780_);
lean_inc(v_a_787_);
v___x_788_ = l_Lean_Syntax_topDown(v_a_787_, v___x_782_);
v_firstChoiceOnly_789_ = lean_ctor_get_uint8(v___x_788_, sizeof(void*)*1);
v_stx_790_ = lean_ctor_get(v___x_788_, 0);
lean_inc(v_stx_790_);
lean_dec_ref(v___x_788_);
v___x_791_ = lean_box(0);
if (v_isShared_786_ == 0)
{
lean_ctor_set(v___x_785_, 0, v___x_791_);
v___x_817_ = v___x_785_;
goto v_reusejp_816_;
}
else
{
lean_object* v_reuseFailAlloc_820_; 
v_reuseFailAlloc_820_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_820_, 0, v___x_791_);
lean_ctor_set(v_reuseFailAlloc_820_, 1, v_snd_783_);
v___x_817_ = v_reuseFailAlloc_820_;
goto v_reusejp_816_;
}
v___jp_792_:
{
lean_object* v_fst_794_; 
v_fst_794_ = lean_ctor_get(v___y_793_, 0);
if (lean_obj_tag(v_fst_794_) == 0)
{
lean_object* v_snd_795_; lean_object* v___x_797_; uint8_t v_isShared_798_; uint8_t v_isSharedCheck_805_; 
v_snd_795_ = lean_ctor_get(v___y_793_, 1);
v_isSharedCheck_805_ = !lean_is_exclusive(v___y_793_);
if (v_isSharedCheck_805_ == 0)
{
lean_object* v_unused_806_; 
v_unused_806_ = lean_ctor_get(v___y_793_, 0);
lean_dec(v_unused_806_);
v___x_797_ = v___y_793_;
v_isShared_798_ = v_isSharedCheck_805_;
goto v_resetjp_796_;
}
else
{
lean_inc(v_snd_795_);
lean_dec(v___y_793_);
v___x_797_ = lean_box(0);
v_isShared_798_ = v_isSharedCheck_805_;
goto v_resetjp_796_;
}
v_resetjp_796_:
{
lean_object* v___x_800_; 
if (v_isShared_798_ == 0)
{
lean_ctor_set(v___x_797_, 0, v___x_791_);
v___x_800_ = v___x_797_;
goto v_reusejp_799_;
}
else
{
lean_object* v_reuseFailAlloc_804_; 
v_reuseFailAlloc_804_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_804_, 0, v___x_791_);
lean_ctor_set(v_reuseFailAlloc_804_, 1, v_snd_795_);
v___x_800_ = v_reuseFailAlloc_804_;
goto v_reusejp_799_;
}
v_reusejp_799_:
{
size_t v___x_801_; size_t v___x_802_; 
v___x_801_ = ((size_t)1ULL);
v___x_802_ = lean_usize_add(v_i_780_, v___x_801_);
v_i_780_ = v___x_802_;
v_b_781_ = v___x_800_;
goto _start;
}
}
}
else
{
lean_object* v_snd_807_; lean_object* v___x_809_; uint8_t v_isShared_810_; uint8_t v_isSharedCheck_814_; 
lean_inc_ref(v_fst_794_);
v_snd_807_ = lean_ctor_get(v___y_793_, 1);
v_isSharedCheck_814_ = !lean_is_exclusive(v___y_793_);
if (v_isSharedCheck_814_ == 0)
{
lean_object* v_unused_815_; 
v_unused_815_ = lean_ctor_get(v___y_793_, 0);
lean_dec(v_unused_815_);
v___x_809_ = v___y_793_;
v_isShared_810_ = v_isSharedCheck_814_;
goto v_resetjp_808_;
}
else
{
lean_inc(v_snd_807_);
lean_dec(v___y_793_);
v___x_809_ = lean_box(0);
v_isShared_810_ = v_isSharedCheck_814_;
goto v_resetjp_808_;
}
v_resetjp_808_:
{
lean_object* v___x_812_; 
if (v_isShared_810_ == 0)
{
v___x_812_ = v___x_809_;
goto v_reusejp_811_;
}
else
{
lean_object* v_reuseFailAlloc_813_; 
v_reuseFailAlloc_813_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_813_, 0, v_fst_794_);
lean_ctor_set(v_reuseFailAlloc_813_, 1, v_snd_807_);
v___x_812_ = v_reuseFailAlloc_813_;
goto v_reusejp_811_;
}
v_reusejp_811_:
{
return v___x_812_;
}
}
}
}
v_reusejp_816_:
{
lean_object* v___x_818_; lean_object* v_a_819_; 
lean_inc_ref(v___x_817_);
v___x_818_ = l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0(v___x_817_, v_firstChoiceOnly_789_, v_stx_790_, v___x_817_);
lean_dec(v_stx_790_);
lean_dec_ref(v___x_817_);
v_a_819_ = lean_ctor_get(v___x_818_, 0);
lean_inc(v_a_819_);
lean_dec_ref(v___x_818_);
v___y_793_ = v_a_819_;
goto v___jp_792_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__1___boxed(lean_object* v_as_823_, lean_object* v_sz_824_, lean_object* v_i_825_, lean_object* v_b_826_){
_start:
{
size_t v_sz_boxed_827_; size_t v_i_boxed_828_; lean_object* v_res_829_; 
v_sz_boxed_827_ = lean_unbox_usize(v_sz_824_);
lean_dec(v_sz_824_);
v_i_boxed_828_ = lean_unbox_usize(v_i_825_);
lean_dec(v_i_825_);
v_res_829_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__1(v_as_823_, v_sz_boxed_827_, v_i_boxed_828_, v_b_826_);
lean_dec_ref(v_as_823_);
return v_res_829_;
}
}
static lean_object* _init_l_Lean_Elab_Command_hasDuplicateAntiquot___closed__0(void){
_start:
{
lean_object* v_seen_830_; lean_object* v___x_831_; lean_object* v___x_832_; 
v_seen_830_ = l_Lean_NameSet_empty;
v___x_831_ = lean_box(0);
v___x_832_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_832_, 0, v___x_831_);
lean_ctor_set(v___x_832_, 1, v_seen_830_);
return v___x_832_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Command_hasDuplicateAntiquot(lean_object* v_stxs_833_){
_start:
{
lean_object* v___x_834_; size_t v_sz_835_; size_t v___x_836_; lean_object* v___x_837_; lean_object* v_fst_838_; 
v___x_834_ = lean_obj_once(&l_Lean_Elab_Command_hasDuplicateAntiquot___closed__0, &l_Lean_Elab_Command_hasDuplicateAntiquot___closed__0_once, _init_l_Lean_Elab_Command_hasDuplicateAntiquot___closed__0);
v_sz_835_ = lean_array_size(v_stxs_833_);
v___x_836_ = ((size_t)0ULL);
v___x_837_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__1(v_stxs_833_, v_sz_835_, v___x_836_, v___x_834_);
v_fst_838_ = lean_ctor_get(v___x_837_, 0);
lean_inc(v_fst_838_);
lean_dec_ref(v___x_837_);
if (lean_obj_tag(v_fst_838_) == 0)
{
uint8_t v___x_839_; 
v___x_839_ = 0;
return v___x_839_;
}
else
{
lean_object* v_val_840_; uint8_t v___x_841_; 
v_val_840_ = lean_ctor_get(v_fst_838_, 0);
lean_inc(v_val_840_);
lean_dec_ref_known(v_fst_838_, 1);
v___x_841_ = lean_unbox(v_val_840_);
lean_dec(v_val_840_);
return v___x_841_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_hasDuplicateAntiquot___boxed(lean_object* v_stxs_842_){
_start:
{
uint8_t v_res_843_; lean_object* v_r_844_; 
v_res_843_ = l_Lean_Elab_Command_hasDuplicateAntiquot(v_stxs_842_);
lean_dec_ref(v_stxs_842_);
v_r_844_ = lean_box(v_res_843_);
return v_r_844_;
}
}
static lean_object* _init_l_Lean_Elab_Command_mkUnexpander___closed__4(void){
_start:
{
lean_object* v___x_851_; lean_object* v___x_852_; 
v___x_851_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__3));
v___x_852_ = l_String_toRawSubstring_x27(v___x_851_);
return v___x_852_;
}
}
static lean_object* _init_l_Lean_Elab_Command_mkUnexpander___closed__15(void){
_start:
{
lean_object* v___x_873_; lean_object* v___x_874_; 
v___x_873_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__14));
v___x_874_ = l_String_toRawSubstring_x27(v___x_873_);
return v___x_874_;
}
}
static lean_object* _init_l_Lean_Elab_Command_mkUnexpander___closed__19(void){
_start:
{
lean_object* v___x_879_; lean_object* v___x_880_; 
v___x_879_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__18));
v___x_880_ = l_String_toRawSubstring_x27(v___x_879_);
return v___x_880_;
}
}
static lean_object* _init_l_Lean_Elab_Command_mkUnexpander___closed__22(void){
_start:
{
lean_object* v___x_884_; lean_object* v___x_885_; 
v___x_884_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__21));
v___x_885_ = l_String_toRawSubstring_x27(v___x_884_);
return v___x_885_;
}
}
static lean_object* _init_l_Lean_Elab_Command_mkUnexpander___closed__40(void){
_start:
{
lean_object* v___x_922_; lean_object* v___x_923_; 
v___x_922_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__39));
v___x_923_ = l_String_toRawSubstring_x27(v___x_922_);
return v___x_923_;
}
}
static lean_object* _init_l_Lean_Elab_Command_mkUnexpander___closed__47(void){
_start:
{
lean_object* v___x_937_; lean_object* v___x_938_; 
v___x_937_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__46));
v___x_938_ = l_String_toRawSubstring_x27(v___x_937_);
return v___x_938_;
}
}
static lean_object* _init_l_Lean_Elab_Command_mkUnexpander___closed__55(void){
_start:
{
lean_object* v___x_953_; lean_object* v___x_954_; 
v___x_953_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__54));
v___x_954_ = l_String_toRawSubstring_x27(v___x_953_);
return v___x_954_;
}
}
static lean_object* _init_l_Lean_Elab_Command_mkUnexpander___closed__56(void){
_start:
{
lean_object* v___x_955_; lean_object* v___x_956_; 
v___x_955_ = lean_box(0);
v___x_956_ = l_unsafeCast___redArg(v___x_955_);
return v___x_956_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_mkUnexpander(lean_object* v_attrKind_994_, lean_object* v_pat_995_, lean_object* v_qrhs_996_, lean_object* v_a_997_, lean_object* v_a_998_){
_start:
{
lean_object* v___y_1000_; lean_object* v_fst_1004_; lean_object* v_snd_1005_; lean_object* v___y_1006_; lean_object* v___y_1007_; lean_object* v___x_1208_; uint8_t v___x_1209_; 
v___x_1208_ = ((lean_object*)(l_Lean_Elab_Command_addInheritDocDefault___closed__1));
lean_inc(v_qrhs_996_);
v___x_1209_ = l_Lean_Syntax_isOfKind(v_qrhs_996_, v___x_1208_);
if (v___x_1209_ == 0)
{
if (v___x_1209_ == 0)
{
lean_object* v___x_1210_; uint8_t v___x_1211_; 
v___x_1210_ = ((lean_object*)(l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__1));
lean_inc(v_qrhs_996_);
v___x_1211_ = l_Lean_Syntax_isOfKind(v_qrhs_996_, v___x_1210_);
if (v___x_1211_ == 0)
{
lean_object* v___x_1212_; lean_object* v___x_1213_; 
lean_dec(v_qrhs_996_);
lean_dec(v_pat_995_);
lean_dec(v_attrKind_994_);
v___x_1212_ = lean_box(0);
v___x_1213_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1213_, 0, v___x_1212_);
lean_ctor_set(v___x_1213_, 1, v_a_998_);
return v___x_1213_;
}
else
{
goto v___jp_1206_;
}
}
else
{
goto v___jp_1206_;
}
}
else
{
lean_object* v___x_1214_; lean_object* v_c_1215_; lean_object* v___x_1216_; uint8_t v___x_1217_; 
v___x_1214_ = lean_unsigned_to_nat(0u);
v_c_1215_ = l_Lean_Syntax_getArg(v_qrhs_996_, v___x_1214_);
v___x_1216_ = ((lean_object*)(l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__1));
lean_inc(v_c_1215_);
v___x_1217_ = l_Lean_Syntax_isOfKind(v_c_1215_, v___x_1216_);
if (v___x_1217_ == 0)
{
lean_object* v___x_1218_; lean_object* v___x_1219_; 
lean_dec(v_c_1215_);
lean_dec(v_qrhs_996_);
lean_dec(v_pat_995_);
lean_dec(v_attrKind_994_);
v___x_1218_ = lean_box(0);
v___x_1219_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1219_, 0, v___x_1218_);
lean_ctor_set(v___x_1219_, 1, v_a_998_);
return v___x_1219_;
}
else
{
lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v_args_1223_; 
v___x_1220_ = lean_unsigned_to_nat(1u);
v___x_1221_ = l_Lean_Syntax_getArg(v_qrhs_996_, v___x_1220_);
lean_dec(v_qrhs_996_);
v___x_1222_ = l_Lean_Syntax_getArgs(v___x_1221_);
lean_dec(v___x_1221_);
v_args_1223_ = l_unsafeCast___redArg(v___x_1222_);
lean_dec_ref(v___x_1222_);
v_fst_1004_ = v_c_1215_;
v_snd_1005_ = v_args_1223_;
v___y_1006_ = v_a_997_;
v___y_1007_ = v_a_998_;
goto v___jp_1003_;
}
}
v___jp_999_:
{
lean_object* v___x_1001_; lean_object* v___x_1002_; 
v___x_1001_ = lean_box(0);
v___x_1002_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1002_, 0, v___x_1001_);
lean_ctor_set(v___x_1002_, 1, v___y_1000_);
return v___x_1002_;
}
v___jp_1003_:
{
lean_object* v___x_1008_; lean_object* v___x_1009_; 
v___x_1008_ = l_Lean_TSyntax_getId(v_fst_1004_);
lean_dec(v_fst_1004_);
v___x_1009_ = l_Lean_Macro_resolveGlobalName(v___x_1008_, v___y_1006_, v___y_1007_);
if (lean_obj_tag(v___x_1009_) == 0)
{
lean_object* v_a_1010_; 
v_a_1010_ = lean_ctor_get(v___x_1009_, 0);
lean_inc(v_a_1010_);
if (lean_obj_tag(v_a_1010_) == 1)
{
lean_object* v_head_1011_; lean_object* v_snd_1012_; 
v_head_1011_ = lean_ctor_get(v_a_1010_, 0);
lean_inc(v_head_1011_);
v_snd_1012_ = lean_ctor_get(v_head_1011_, 1);
lean_inc(v_snd_1012_);
if (lean_obj_tag(v_snd_1012_) == 0)
{
lean_object* v_tail_1013_; lean_object* v___x_1015_; uint8_t v_isShared_1016_; uint8_t v_isSharedCheck_1193_; 
v_tail_1013_ = lean_ctor_get(v_a_1010_, 1);
v_isSharedCheck_1193_ = !lean_is_exclusive(v_a_1010_);
if (v_isSharedCheck_1193_ == 0)
{
lean_object* v_unused_1194_; 
v_unused_1194_ = lean_ctor_get(v_a_1010_, 0);
lean_dec(v_unused_1194_);
v___x_1015_ = v_a_1010_;
v_isShared_1016_ = v_isSharedCheck_1193_;
goto v_resetjp_1014_;
}
else
{
lean_inc(v_tail_1013_);
lean_dec(v_a_1010_);
v___x_1015_ = lean_box(0);
v_isShared_1016_ = v_isSharedCheck_1193_;
goto v_resetjp_1014_;
}
v_resetjp_1014_:
{
if (lean_obj_tag(v_tail_1013_) == 0)
{
lean_object* v_a_1017_; lean_object* v_fst_1018_; lean_object* v___x_1020_; uint8_t v_isShared_1021_; uint8_t v_isSharedCheck_1190_; 
v_a_1017_ = lean_ctor_get(v___x_1009_, 1);
lean_inc(v_a_1017_);
lean_dec_ref_known(v___x_1009_, 2);
v_fst_1018_ = lean_ctor_get(v_head_1011_, 0);
v_isSharedCheck_1190_ = !lean_is_exclusive(v_head_1011_);
if (v_isSharedCheck_1190_ == 0)
{
lean_object* v_unused_1191_; 
v_unused_1191_ = lean_ctor_get(v_head_1011_, 1);
lean_dec(v_unused_1191_);
v___x_1020_ = v_head_1011_;
v_isShared_1021_ = v_isSharedCheck_1190_;
goto v_resetjp_1019_;
}
else
{
lean_inc(v_fst_1018_);
lean_dec(v_head_1011_);
v___x_1020_ = lean_box(0);
v_isShared_1021_ = v_isSharedCheck_1190_;
goto v_resetjp_1019_;
}
v_resetjp_1019_:
{
lean_object* v___x_1022_; size_t v_sz_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_32606__overap_1028_; lean_object* v___x_1029_; 
v___x_1022_ = l_unsafeCast___redArg(v_snd_1005_);
lean_dec_ref(v_snd_1005_);
v_sz_1023_ = lean_array_size(v___x_1022_);
v___x_1024_ = l_unsafeCast___redArg(v___x_1022_);
lean_dec(v___x_1022_);
v___x_1025_ = lean_box_usize(v_sz_1023_);
v___x_1026_ = ((lean_object*)(l_Lean_Elab_Command_removeParentheses___boxed__const__1));
v___x_1027_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_removeParentheses_spec__0___boxed), 5, 3);
lean_closure_set(v___x_1027_, 0, v___x_1025_);
lean_closure_set(v___x_1027_, 1, v___x_1026_);
lean_closure_set(v___x_1027_, 2, v___x_1024_);
v___x_32606__overap_1028_ = l_unsafeCast___redArg(v___x_1027_);
lean_dec_ref(v___x_1027_);
lean_inc_ref(v___y_1006_);
v___x_1029_ = lean_apply_2(v___x_32606__overap_1028_, v___y_1006_, v_a_1017_);
if (lean_obj_tag(v___x_1029_) == 0)
{
lean_object* v_a_1030_; lean_object* v_a_1031_; lean_object* v___x_1033_; uint8_t v_isShared_1034_; uint8_t v_isSharedCheck_1180_; 
v_a_1030_ = lean_ctor_get(v___x_1029_, 0);
v_a_1031_ = lean_ctor_get(v___x_1029_, 1);
v_isSharedCheck_1180_ = !lean_is_exclusive(v___x_1029_);
if (v_isSharedCheck_1180_ == 0)
{
v___x_1033_ = v___x_1029_;
v_isShared_1034_ = v_isSharedCheck_1180_;
goto v_resetjp_1032_;
}
else
{
lean_inc(v_a_1031_);
lean_inc(v_a_1030_);
lean_dec(v___x_1029_);
v___x_1033_ = lean_box(0);
v_isShared_1034_ = v_isSharedCheck_1180_;
goto v_resetjp_1032_;
}
v_resetjp_1032_:
{
uint8_t v___x_1035_; 
v___x_1035_ = l_Lean_Elab_Command_hasDuplicateAntiquot(v_a_1030_);
if (v___x_1035_ == 0)
{
lean_object* v_quotContext_1036_; lean_object* v_currMacroScope_1037_; lean_object* v_ref_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1044_; 
v_quotContext_1036_ = lean_ctor_get(v___y_1006_, 1);
v_currMacroScope_1037_ = lean_ctor_get(v___y_1006_, 2);
v_ref_1038_ = lean_ctor_get(v___y_1006_, 5);
v___x_1039_ = l_Lean_SourceInfo_fromRef(v_ref_1038_, v___x_1035_);
v___x_1040_ = ((lean_object*)(l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__0));
v___x_1041_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__1));
v___x_1042_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__2));
lean_inc(v___x_1039_);
if (v_isShared_1021_ == 0)
{
lean_ctor_set_tag(v___x_1020_, 2);
lean_ctor_set(v___x_1020_, 1, v___x_1042_);
lean_ctor_set(v___x_1020_, 0, v___x_1039_);
v___x_1044_ = v___x_1020_;
goto v_reusejp_1043_;
}
else
{
lean_object* v_reuseFailAlloc_1175_; 
v_reuseFailAlloc_1175_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1175_, 0, v___x_1039_);
lean_ctor_set(v_reuseFailAlloc_1175_, 1, v___x_1042_);
v___x_1044_ = v_reuseFailAlloc_1175_;
goto v_reusejp_1043_;
}
v_reusejp_1043_:
{
lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1093_; 
v___x_1045_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__13));
v___x_1046_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__14, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__14_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__14);
lean_inc_n(v___x_1039_, 18);
v___x_1047_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1047_, 0, v___x_1039_);
lean_ctor_set(v___x_1047_, 1, v___x_1045_);
lean_ctor_set(v___x_1047_, 2, v___x_1046_);
v___x_1048_ = lean_obj_once(&l_Lean_Elab_Command_mkUnexpander___closed__4, &l_Lean_Elab_Command_mkUnexpander___closed__4_once, _init_l_Lean_Elab_Command_mkUnexpander___closed__4);
v___x_1049_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__5));
lean_inc_n(v_currMacroScope_1037_, 4);
lean_inc_n(v_quotContext_1036_, 4);
v___x_1050_ = l_Lean_addMacroScope(v_quotContext_1036_, v___x_1049_, v_currMacroScope_1037_);
v___x_1051_ = lean_box(0);
v___x_1052_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1052_, 0, v___x_1039_);
lean_ctor_set(v___x_1052_, 1, v___x_1048_);
lean_ctor_set(v___x_1052_, 2, v___x_1050_);
lean_ctor_set(v___x_1052_, 3, v___x_1051_);
v___x_1053_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__7));
v___x_1054_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__6));
v___x_1055_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1055_, 0, v___x_1039_);
lean_ctor_set(v___x_1055_, 1, v___x_1054_);
v___x_1056_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1056_, 0, v___x_1039_);
lean_ctor_set(v___x_1056_, 1, v___x_1040_);
lean_inc_ref(v___x_1055_);
v___x_1057_ = l_Lean_Syntax_node2(v___x_1039_, v___x_1053_, v___x_1055_, v___x_1056_);
lean_inc_ref(v___x_1052_);
lean_inc_ref(v___x_1047_);
v___x_1058_ = l_Lean_Syntax_node4(v___x_1039_, v___x_1041_, v___x_1044_, v___x_1047_, v___x_1052_, v___x_1057_);
v___x_1059_ = l_unsafeCast___redArg(v_a_1030_);
lean_dec(v_a_1030_);
v___x_1060_ = l_Lean_Syntax_mkApp(v___x_1058_, v___x_1059_);
lean_dec(v___x_1059_);
lean_inc(v_attrKind_994_);
v___x_1061_ = l_Lean_Parser_Command_visibility_ofAttrKind(v_attrKind_994_);
v___x_1062_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__9));
v___x_1063_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__10));
v___x_1064_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__12));
v___x_1065_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__13));
v___x_1066_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1066_, 0, v___x_1039_);
lean_ctor_set(v___x_1066_, 1, v___x_1065_);
v___x_1067_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__4));
v___x_1068_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__9));
v___x_1069_ = lean_obj_once(&l_Lean_Elab_Command_mkUnexpander___closed__15, &l_Lean_Elab_Command_mkUnexpander___closed__15_once, _init_l_Lean_Elab_Command_mkUnexpander___closed__15);
v___x_1070_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__16));
v___x_1071_ = l_Lean_addMacroScope(v_quotContext_1036_, v___x_1070_, v_currMacroScope_1037_);
v___x_1072_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1072_, 0, v___x_1039_);
lean_ctor_set(v___x_1072_, 1, v___x_1069_);
lean_ctor_set(v___x_1072_, 2, v___x_1071_);
lean_ctor_set(v___x_1072_, 3, v___x_1051_);
v___x_1073_ = l_Lean_mkIdent(v_fst_1018_);
lean_inc(v___x_1073_);
v___x_1074_ = l_Lean_Syntax_node1(v___x_1039_, v___x_1045_, v___x_1073_);
v___x_1075_ = l_Lean_Syntax_node2(v___x_1039_, v___x_1068_, v___x_1072_, v___x_1074_);
v___x_1076_ = l_Lean_Syntax_node2(v___x_1039_, v___x_1067_, v_attrKind_994_, v___x_1075_);
v___x_1077_ = l_Lean_Syntax_node1(v___x_1039_, v___x_1045_, v___x_1076_);
v___x_1078_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__17));
v___x_1079_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1079_, 0, v___x_1039_);
lean_ctor_set(v___x_1079_, 1, v___x_1078_);
v___x_1080_ = l_Lean_Syntax_node3(v___x_1039_, v___x_1064_, v___x_1066_, v___x_1077_, v___x_1079_);
v___x_1081_ = l_Lean_Syntax_node1(v___x_1039_, v___x_1045_, v___x_1080_);
v___x_1082_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1082_, 0, v___x_1039_);
lean_ctor_set(v___x_1082_, 1, v___x_1062_);
v___x_1083_ = lean_obj_once(&l_Lean_Elab_Command_mkUnexpander___closed__19, &l_Lean_Elab_Command_mkUnexpander___closed__19_once, _init_l_Lean_Elab_Command_mkUnexpander___closed__19);
v___x_1084_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__20));
v___x_1085_ = l_Lean_addMacroScope(v_quotContext_1036_, v___x_1084_, v_currMacroScope_1037_);
v___x_1086_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1086_, 0, v___x_1039_);
lean_ctor_set(v___x_1086_, 1, v___x_1083_);
lean_ctor_set(v___x_1086_, 2, v___x_1085_);
lean_ctor_set(v___x_1086_, 3, v___x_1051_);
v___x_1087_ = l_Lean_Syntax_node2(v___x_1039_, v___x_1045_, v___x_1086_, v___x_1073_);
v___x_1088_ = lean_obj_once(&l_Lean_Elab_Command_mkUnexpander___closed__22, &l_Lean_Elab_Command_mkUnexpander___closed__22_once, _init_l_Lean_Elab_Command_mkUnexpander___closed__22);
v___x_1089_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__25));
v___x_1090_ = l_Lean_addMacroScope(v_quotContext_1036_, v___x_1089_, v_currMacroScope_1037_);
v___x_1091_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1091_, 0, v___x_1089_);
lean_ctor_set(v___x_1091_, 1, v_snd_1012_);
if (v_isShared_1016_ == 0)
{
lean_ctor_set(v___x_1015_, 1, v___x_1051_);
lean_ctor_set(v___x_1015_, 0, v___x_1091_);
v___x_1093_ = v___x_1015_;
goto v_reusejp_1092_;
}
else
{
lean_object* v_reuseFailAlloc_1174_; 
v_reuseFailAlloc_1174_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1174_, 0, v___x_1091_);
lean_ctor_set(v_reuseFailAlloc_1174_, 1, v___x_1051_);
v___x_1093_ = v_reuseFailAlloc_1174_;
goto v_reusejp_1092_;
}
v_reusejp_1092_:
{
lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1172_; 
lean_inc_n(v___x_1039_, 31);
v___x_1094_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1094_, 0, v___x_1039_);
lean_ctor_set(v___x_1094_, 1, v___x_1088_);
lean_ctor_set(v___x_1094_, 2, v___x_1090_);
lean_ctor_set(v___x_1094_, 3, v___x_1093_);
v___x_1095_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__26));
v___x_1096_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1096_, 0, v___x_1039_);
lean_ctor_set(v___x_1096_, 1, v___x_1095_);
v___x_1097_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__27));
v___x_1098_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__28));
v___x_1099_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1099_, 0, v___x_1039_);
lean_ctor_set(v___x_1099_, 1, v___x_1097_);
v___x_1100_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__30));
v___x_1101_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__32));
v___x_1102_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__33));
v___x_1103_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1103_, 0, v___x_1039_);
lean_ctor_set(v___x_1103_, 1, v___x_1102_);
v___x_1104_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__35));
v___x_1105_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__36));
v___x_1106_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1106_, 0, v___x_1039_);
lean_ctor_set(v___x_1106_, 1, v___x_1105_);
v___x_1107_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__37));
v___x_1108_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1108_, 0, v___x_1039_);
lean_ctor_set(v___x_1108_, 1, v___x_1107_);
lean_inc_ref_n(v___x_1108_, 2);
lean_inc_ref(v___x_1106_);
v___x_1109_ = l_Lean_Syntax_node3(v___x_1039_, v___x_1104_, v___x_1106_, v___x_1060_, v___x_1108_);
v___x_1110_ = l_Lean_Syntax_node1(v___x_1039_, v___x_1045_, v___x_1109_);
v___x_1111_ = l_Lean_Syntax_node1(v___x_1039_, v___x_1045_, v___x_1110_);
v___x_1112_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__38));
v___x_1113_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1113_, 0, v___x_1039_);
lean_ctor_set(v___x_1113_, 1, v___x_1112_);
v___x_1114_ = ((lean_object*)(l_Lean_Elab_Command_addInheritDocDefault___closed__1));
v___x_1115_ = lean_obj_once(&l_Lean_Elab_Command_mkUnexpander___closed__40, &l_Lean_Elab_Command_mkUnexpander___closed__40_once, _init_l_Lean_Elab_Command_mkUnexpander___closed__40);
v___x_1116_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__41));
lean_inc_n(v_currMacroScope_1037_, 3);
lean_inc_n(v_quotContext_1036_, 3);
v___x_1117_ = l_Lean_addMacroScope(v_quotContext_1036_, v___x_1116_, v_currMacroScope_1037_);
v___x_1118_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__42));
v___x_1119_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1119_, 0, v___x_1118_);
lean_ctor_set(v___x_1119_, 1, v_snd_1012_);
v___x_1120_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1120_, 0, v___x_1119_);
lean_ctor_set(v___x_1120_, 1, v___x_1051_);
v___x_1121_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1121_, 0, v___x_1039_);
lean_ctor_set(v___x_1121_, 1, v___x_1115_);
lean_ctor_set(v___x_1121_, 2, v___x_1117_);
lean_ctor_set(v___x_1121_, 3, v___x_1120_);
v___x_1122_ = l_Lean_Syntax_node3(v___x_1039_, v___x_1104_, v___x_1106_, v_pat_995_, v___x_1108_);
v___x_1123_ = l_Lean_Syntax_node2(v___x_1039_, v___x_1045_, v___x_1052_, v___x_1122_);
v___x_1124_ = l_Lean_Syntax_node2(v___x_1039_, v___x_1114_, v___x_1121_, v___x_1123_);
lean_inc_ref(v___x_1113_);
lean_inc_ref(v___x_1103_);
v___x_1125_ = l_Lean_Syntax_node4(v___x_1039_, v___x_1101_, v___x_1103_, v___x_1111_, v___x_1113_, v___x_1124_);
v___x_1126_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__44));
v___x_1127_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__45));
v___x_1128_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1128_, 0, v___x_1039_);
lean_ctor_set(v___x_1128_, 1, v___x_1127_);
v___x_1129_ = l_Lean_Syntax_node1(v___x_1039_, v___x_1126_, v___x_1128_);
v___x_1130_ = l_Lean_Syntax_node1(v___x_1039_, v___x_1045_, v___x_1129_);
v___x_1131_ = l_Lean_Syntax_node1(v___x_1039_, v___x_1045_, v___x_1130_);
v___x_1132_ = lean_obj_once(&l_Lean_Elab_Command_mkUnexpander___closed__47, &l_Lean_Elab_Command_mkUnexpander___closed__47_once, _init_l_Lean_Elab_Command_mkUnexpander___closed__47);
v___x_1133_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__48));
v___x_1134_ = l_Lean_addMacroScope(v_quotContext_1036_, v___x_1133_, v_currMacroScope_1037_);
v___x_1135_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__50));
v___x_1136_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1136_, 0, v___x_1135_);
lean_ctor_set(v___x_1136_, 1, v_snd_1012_);
v___x_1137_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1137_, 0, v___x_1136_);
lean_ctor_set(v___x_1137_, 1, v___x_1051_);
v___x_1138_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1138_, 0, v___x_1039_);
lean_ctor_set(v___x_1138_, 1, v___x_1132_);
lean_ctor_set(v___x_1138_, 2, v___x_1134_);
lean_ctor_set(v___x_1138_, 3, v___x_1137_);
v___x_1139_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__52));
v___x_1140_ = ((lean_object*)(l_Lean_Elab_Command_removeParentheses___closed__3));
v___x_1141_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__53));
v___x_1142_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1142_, 0, v___x_1039_);
lean_ctor_set(v___x_1142_, 1, v___x_1141_);
v___x_1143_ = ((lean_object*)(l_Lean_Elab_Command_removeParentheses___closed__5));
v___x_1144_ = lean_obj_once(&l_Lean_Elab_Command_mkUnexpander___closed__55, &l_Lean_Elab_Command_mkUnexpander___closed__55_once, _init_l_Lean_Elab_Command_mkUnexpander___closed__55);
v___x_1145_ = lean_obj_once(&l_Lean_Elab_Command_mkUnexpander___closed__56, &l_Lean_Elab_Command_mkUnexpander___closed__56_once, _init_l_Lean_Elab_Command_mkUnexpander___closed__56);
v___x_1146_ = l_Lean_addMacroScope(v_quotContext_1036_, v___x_1145_, v_currMacroScope_1037_);
v___x_1147_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__68));
v___x_1148_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1148_, 0, v___x_1039_);
lean_ctor_set(v___x_1148_, 1, v___x_1144_);
lean_ctor_set(v___x_1148_, 2, v___x_1146_);
lean_ctor_set(v___x_1148_, 3, v___x_1147_);
v___x_1149_ = l_Lean_Syntax_node1(v___x_1039_, v___x_1143_, v___x_1148_);
v___x_1150_ = l_Lean_Syntax_node2(v___x_1039_, v___x_1140_, v___x_1142_, v___x_1149_);
lean_inc_ref(v___x_1047_);
v___x_1151_ = l_Lean_Syntax_node3(v___x_1039_, v___x_1139_, v___x_1150_, v___x_1047_, v___x_1108_);
v___x_1152_ = l_Lean_Syntax_node1(v___x_1039_, v___x_1045_, v___x_1151_);
v___x_1153_ = l_Lean_Syntax_node2(v___x_1039_, v___x_1114_, v___x_1138_, v___x_1152_);
v___x_1154_ = l_Lean_Syntax_node4(v___x_1039_, v___x_1101_, v___x_1103_, v___x_1131_, v___x_1113_, v___x_1153_);
v___x_1155_ = l_Lean_Syntax_node2(v___x_1039_, v___x_1045_, v___x_1125_, v___x_1154_);
v___x_1156_ = l_Lean_Syntax_node1(v___x_1039_, v___x_1100_, v___x_1155_);
v___x_1157_ = l_Lean_Syntax_node2(v___x_1039_, v___x_1098_, v___x_1099_, v___x_1156_);
v___x_1158_ = lean_unsigned_to_nat(9u);
v___x_1159_ = lean_mk_empty_array_with_capacity(v___x_1158_);
v___x_1160_ = lean_array_push(v___x_1159_, v___x_1047_);
v___x_1161_ = lean_array_push(v___x_1160_, v___x_1081_);
v___x_1162_ = lean_array_push(v___x_1161_, v___x_1061_);
v___x_1163_ = lean_array_push(v___x_1162_, v___x_1082_);
v___x_1164_ = lean_array_push(v___x_1163_, v___x_1087_);
v___x_1165_ = lean_array_push(v___x_1164_, v___x_1055_);
v___x_1166_ = lean_array_push(v___x_1165_, v___x_1094_);
v___x_1167_ = lean_array_push(v___x_1166_, v___x_1096_);
v___x_1168_ = lean_array_push(v___x_1167_, v___x_1157_);
v___x_1169_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1169_, 0, v___x_1039_);
lean_ctor_set(v___x_1169_, 1, v___x_1063_);
lean_ctor_set(v___x_1169_, 2, v___x_1168_);
v___x_1170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1170_, 0, v___x_1169_);
if (v_isShared_1034_ == 0)
{
lean_ctor_set(v___x_1033_, 0, v___x_1170_);
v___x_1172_ = v___x_1033_;
goto v_reusejp_1171_;
}
else
{
lean_object* v_reuseFailAlloc_1173_; 
v_reuseFailAlloc_1173_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1173_, 0, v___x_1170_);
lean_ctor_set(v_reuseFailAlloc_1173_, 1, v_a_1031_);
v___x_1172_ = v_reuseFailAlloc_1173_;
goto v_reusejp_1171_;
}
v_reusejp_1171_:
{
return v___x_1172_;
}
}
}
}
else
{
lean_object* v___x_1176_; lean_object* v___x_1178_; 
lean_dec(v_a_1030_);
lean_del_object(v___x_1020_);
lean_dec(v_fst_1018_);
lean_del_object(v___x_1015_);
lean_dec(v_pat_995_);
lean_dec(v_attrKind_994_);
v___x_1176_ = lean_box(0);
if (v_isShared_1034_ == 0)
{
lean_ctor_set(v___x_1033_, 0, v___x_1176_);
v___x_1178_ = v___x_1033_;
goto v_reusejp_1177_;
}
else
{
lean_object* v_reuseFailAlloc_1179_; 
v_reuseFailAlloc_1179_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1179_, 0, v___x_1176_);
lean_ctor_set(v_reuseFailAlloc_1179_, 1, v_a_1031_);
v___x_1178_ = v_reuseFailAlloc_1179_;
goto v_reusejp_1177_;
}
v_reusejp_1177_:
{
return v___x_1178_;
}
}
}
}
else
{
lean_object* v_a_1181_; lean_object* v_a_1182_; lean_object* v___x_1184_; uint8_t v_isShared_1185_; uint8_t v_isSharedCheck_1189_; 
lean_del_object(v___x_1020_);
lean_dec(v_fst_1018_);
lean_del_object(v___x_1015_);
lean_dec(v_pat_995_);
lean_dec(v_attrKind_994_);
v_a_1181_ = lean_ctor_get(v___x_1029_, 0);
v_a_1182_ = lean_ctor_get(v___x_1029_, 1);
v_isSharedCheck_1189_ = !lean_is_exclusive(v___x_1029_);
if (v_isSharedCheck_1189_ == 0)
{
v___x_1184_ = v___x_1029_;
v_isShared_1185_ = v_isSharedCheck_1189_;
goto v_resetjp_1183_;
}
else
{
lean_inc(v_a_1182_);
lean_inc(v_a_1181_);
lean_dec(v___x_1029_);
v___x_1184_ = lean_box(0);
v_isShared_1185_ = v_isSharedCheck_1189_;
goto v_resetjp_1183_;
}
v_resetjp_1183_:
{
lean_object* v___x_1187_; 
if (v_isShared_1185_ == 0)
{
v___x_1187_ = v___x_1184_;
goto v_reusejp_1186_;
}
else
{
lean_object* v_reuseFailAlloc_1188_; 
v_reuseFailAlloc_1188_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1188_, 0, v_a_1181_);
lean_ctor_set(v_reuseFailAlloc_1188_, 1, v_a_1182_);
v___x_1187_ = v_reuseFailAlloc_1188_;
goto v_reusejp_1186_;
}
v_reusejp_1186_:
{
return v___x_1187_;
}
}
}
}
}
else
{
lean_object* v_a_1192_; 
lean_del_object(v___x_1015_);
lean_dec(v_tail_1013_);
lean_dec(v_head_1011_);
lean_dec_ref(v_snd_1005_);
lean_dec(v_pat_995_);
lean_dec(v_attrKind_994_);
v_a_1192_ = lean_ctor_get(v___x_1009_, 1);
lean_inc(v_a_1192_);
lean_dec_ref_known(v___x_1009_, 2);
v___y_1000_ = v_a_1192_;
goto v___jp_999_;
}
}
}
else
{
lean_object* v_a_1195_; 
lean_dec(v_snd_1012_);
lean_dec(v_head_1011_);
lean_dec_ref_known(v_a_1010_, 2);
lean_dec_ref(v_snd_1005_);
lean_dec(v_pat_995_);
lean_dec(v_attrKind_994_);
v_a_1195_ = lean_ctor_get(v___x_1009_, 1);
lean_inc(v_a_1195_);
lean_dec_ref_known(v___x_1009_, 2);
v___y_1000_ = v_a_1195_;
goto v___jp_999_;
}
}
else
{
lean_object* v_a_1196_; 
lean_dec(v_a_1010_);
lean_dec_ref(v_snd_1005_);
lean_dec(v_pat_995_);
lean_dec(v_attrKind_994_);
v_a_1196_ = lean_ctor_get(v___x_1009_, 1);
lean_inc(v_a_1196_);
lean_dec_ref_known(v___x_1009_, 2);
v___y_1000_ = v_a_1196_;
goto v___jp_999_;
}
}
else
{
lean_object* v_a_1197_; lean_object* v_a_1198_; lean_object* v___x_1200_; uint8_t v_isShared_1201_; uint8_t v_isSharedCheck_1205_; 
lean_dec_ref(v_snd_1005_);
lean_dec(v_pat_995_);
lean_dec(v_attrKind_994_);
v_a_1197_ = lean_ctor_get(v___x_1009_, 0);
v_a_1198_ = lean_ctor_get(v___x_1009_, 1);
v_isSharedCheck_1205_ = !lean_is_exclusive(v___x_1009_);
if (v_isSharedCheck_1205_ == 0)
{
v___x_1200_ = v___x_1009_;
v_isShared_1201_ = v_isSharedCheck_1205_;
goto v_resetjp_1199_;
}
else
{
lean_inc(v_a_1198_);
lean_inc(v_a_1197_);
lean_dec(v___x_1009_);
v___x_1200_ = lean_box(0);
v_isShared_1201_ = v_isSharedCheck_1205_;
goto v_resetjp_1199_;
}
v_resetjp_1199_:
{
lean_object* v___x_1203_; 
if (v_isShared_1201_ == 0)
{
v___x_1203_ = v___x_1200_;
goto v_reusejp_1202_;
}
else
{
lean_object* v_reuseFailAlloc_1204_; 
v_reuseFailAlloc_1204_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1204_, 0, v_a_1197_);
lean_ctor_set(v_reuseFailAlloc_1204_, 1, v_a_1198_);
v___x_1203_ = v_reuseFailAlloc_1204_;
goto v_reusejp_1202_;
}
v_reusejp_1202_:
{
return v___x_1203_;
}
}
}
}
v___jp_1206_:
{
lean_object* v___x_1207_; 
v___x_1207_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__69));
v_fst_1004_ = v_qrhs_996_;
v_snd_1005_ = v___x_1207_;
v___y_1006_ = v_a_997_;
v___y_1007_ = v_a_998_;
goto v___jp_1003_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_mkUnexpander___boxed(lean_object* v_attrKind_1224_, lean_object* v_pat_1225_, lean_object* v_qrhs_1226_, lean_object* v_a_1227_, lean_object* v_a_1228_){
_start:
{
lean_object* v_res_1229_; 
v_res_1229_ = l_Lean_Elab_Command_mkUnexpander(v_attrKind_1224_, v_pat_1225_, v_qrhs_1226_, v_a_1227_, v_a_1228_);
lean_dec_ref(v_a_1227_);
return v_res_1229_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; 
v___x_1230_ = lean_box(0);
v___x_1231_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_1232_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1232_, 0, v___x_1231_);
lean_ctor_set(v___x_1232_, 1, v___x_1230_);
return v___x_1232_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg(){
_start:
{
lean_object* v___x_1234_; lean_object* v___x_1235_; 
v___x_1234_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg___closed__0);
v___x_1235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1235_, 0, v___x_1234_);
return v___x_1235_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg___boxed(lean_object* v___y_1236_){
_start:
{
lean_object* v_res_1237_; 
v_res_1237_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg();
return v_res_1237_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0(lean_object* v_00_u03b1_1238_, lean_object* v___y_1239_, lean_object* v___y_1240_){
_start:
{
lean_object* v___x_1242_; 
v___x_1242_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg();
return v___x_1242_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___boxed(lean_object* v_00_u03b1_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_, lean_object* v___y_1246_){
_start:
{
lean_object* v_res_1247_; 
v_res_1247_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0(v_00_u03b1_1243_, v___y_1244_, v___y_1245_);
lean_dec(v___y_1245_);
lean_dec_ref(v___y_1244_);
return v_res_1247_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNotation_spec__7___redArg(lean_object* v___y_1248_){
_start:
{
lean_object* v___x_1250_; lean_object* v_env_1251_; lean_object* v___x_1252_; lean_object* v_mainModule_1253_; lean_object* v___x_1254_; 
v___x_1250_ = lean_st_ref_get(v___y_1248_);
v_env_1251_ = lean_ctor_get(v___x_1250_, 0);
lean_inc_ref(v_env_1251_);
lean_dec(v___x_1250_);
v___x_1252_ = l_Lean_Environment_header(v_env_1251_);
lean_dec_ref(v_env_1251_);
v_mainModule_1253_ = lean_ctor_get(v___x_1252_, 0);
lean_inc(v_mainModule_1253_);
lean_dec_ref(v___x_1252_);
v___x_1254_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1254_, 0, v_mainModule_1253_);
return v___x_1254_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNotation_spec__7___redArg___boxed(lean_object* v___y_1255_, lean_object* v___y_1256_){
_start:
{
lean_object* v_res_1257_; 
v_res_1257_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabNotation_spec__7___redArg(v___y_1255_);
lean_dec(v___y_1255_);
return v_res_1257_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNotation_spec__7(lean_object* v___y_1258_, lean_object* v___y_1259_){
_start:
{
lean_object* v___x_1261_; 
v___x_1261_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabNotation_spec__7___redArg(v___y_1259_);
return v___x_1261_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNotation_spec__7___boxed(lean_object* v___y_1262_, lean_object* v___y_1263_, lean_object* v___y_1264_){
_start:
{
lean_object* v_res_1265_; 
v_res_1265_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabNotation_spec__7(v___y_1262_, v___y_1263_);
lean_dec(v___y_1263_);
lean_dec_ref(v___y_1262_);
return v_res_1265_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNotation___lam__0(lean_object* v___x_1266_, lean_object* v_sc_1267_){
_start:
{
lean_object* v_header_1268_; lean_object* v_currNamespace_1269_; lean_object* v_openDecls_1270_; lean_object* v_levelNames_1271_; lean_object* v_varDecls_1272_; lean_object* v_varUIds_1273_; lean_object* v_includedVars_1274_; lean_object* v_omittedVars_1275_; uint8_t v_isNoncomputable_1276_; uint8_t v_isPublic_1277_; uint8_t v_isMeta_1278_; lean_object* v_attrs_1279_; lean_object* v___x_1281_; uint8_t v_isShared_1282_; uint8_t v_isSharedCheck_1286_; 
v_header_1268_ = lean_ctor_get(v_sc_1267_, 0);
v_currNamespace_1269_ = lean_ctor_get(v_sc_1267_, 2);
v_openDecls_1270_ = lean_ctor_get(v_sc_1267_, 3);
v_levelNames_1271_ = lean_ctor_get(v_sc_1267_, 4);
v_varDecls_1272_ = lean_ctor_get(v_sc_1267_, 5);
v_varUIds_1273_ = lean_ctor_get(v_sc_1267_, 6);
v_includedVars_1274_ = lean_ctor_get(v_sc_1267_, 7);
v_omittedVars_1275_ = lean_ctor_get(v_sc_1267_, 8);
v_isNoncomputable_1276_ = lean_ctor_get_uint8(v_sc_1267_, sizeof(void*)*10);
v_isPublic_1277_ = lean_ctor_get_uint8(v_sc_1267_, sizeof(void*)*10 + 1);
v_isMeta_1278_ = lean_ctor_get_uint8(v_sc_1267_, sizeof(void*)*10 + 2);
v_attrs_1279_ = lean_ctor_get(v_sc_1267_, 9);
v_isSharedCheck_1286_ = !lean_is_exclusive(v_sc_1267_);
if (v_isSharedCheck_1286_ == 0)
{
lean_object* v_unused_1287_; 
v_unused_1287_ = lean_ctor_get(v_sc_1267_, 1);
lean_dec(v_unused_1287_);
v___x_1281_ = v_sc_1267_;
v_isShared_1282_ = v_isSharedCheck_1286_;
goto v_resetjp_1280_;
}
else
{
lean_inc(v_attrs_1279_);
lean_inc(v_omittedVars_1275_);
lean_inc(v_includedVars_1274_);
lean_inc(v_varUIds_1273_);
lean_inc(v_varDecls_1272_);
lean_inc(v_levelNames_1271_);
lean_inc(v_openDecls_1270_);
lean_inc(v_currNamespace_1269_);
lean_inc(v_header_1268_);
lean_dec(v_sc_1267_);
v___x_1281_ = lean_box(0);
v_isShared_1282_ = v_isSharedCheck_1286_;
goto v_resetjp_1280_;
}
v_resetjp_1280_:
{
lean_object* v___x_1284_; 
if (v_isShared_1282_ == 0)
{
lean_ctor_set(v___x_1281_, 1, v___x_1266_);
v___x_1284_ = v___x_1281_;
goto v_reusejp_1283_;
}
else
{
lean_object* v_reuseFailAlloc_1285_; 
v_reuseFailAlloc_1285_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_1285_, 0, v_header_1268_);
lean_ctor_set(v_reuseFailAlloc_1285_, 1, v___x_1266_);
lean_ctor_set(v_reuseFailAlloc_1285_, 2, v_currNamespace_1269_);
lean_ctor_set(v_reuseFailAlloc_1285_, 3, v_openDecls_1270_);
lean_ctor_set(v_reuseFailAlloc_1285_, 4, v_levelNames_1271_);
lean_ctor_set(v_reuseFailAlloc_1285_, 5, v_varDecls_1272_);
lean_ctor_set(v_reuseFailAlloc_1285_, 6, v_varUIds_1273_);
lean_ctor_set(v_reuseFailAlloc_1285_, 7, v_includedVars_1274_);
lean_ctor_set(v_reuseFailAlloc_1285_, 8, v_omittedVars_1275_);
lean_ctor_set(v_reuseFailAlloc_1285_, 9, v_attrs_1279_);
lean_ctor_set_uint8(v_reuseFailAlloc_1285_, sizeof(void*)*10, v_isNoncomputable_1276_);
lean_ctor_set_uint8(v_reuseFailAlloc_1285_, sizeof(void*)*10 + 1, v_isPublic_1277_);
lean_ctor_set_uint8(v_reuseFailAlloc_1285_, sizeof(void*)*10 + 2, v_isMeta_1278_);
v___x_1284_ = v_reuseFailAlloc_1285_;
goto v_reusejp_1283_;
}
v_reusejp_1283_:
{
return v___x_1284_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__3(size_t v_sz_1288_, size_t v_i_1289_, lean_object* v_bs_1290_){
_start:
{
uint8_t v___x_1291_; 
v___x_1291_ = lean_usize_dec_lt(v_i_1289_, v_sz_1288_);
if (v___x_1291_ == 0)
{
lean_object* v___x_1292_; 
v___x_1292_ = l_unsafeCast___redArg(v_bs_1290_);
lean_dec_ref(v_bs_1290_);
return v___x_1292_;
}
else
{
lean_object* v_v_1293_; lean_object* v___x_1294_; lean_object* v_bs_x27_1295_; lean_object* v___x_1296_; size_t v___x_1297_; size_t v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; 
v_v_1293_ = lean_array_uget(v_bs_1290_, v_i_1289_);
v___x_1294_ = lean_unsigned_to_nat(0u);
v_bs_x27_1295_ = lean_array_uset(v_bs_1290_, v_i_1289_, v___x_1294_);
v___x_1296_ = l_unsafeCast___redArg(v_v_1293_);
lean_dec(v_v_1293_);
v___x_1297_ = ((size_t)1ULL);
v___x_1298_ = lean_usize_add(v_i_1289_, v___x_1297_);
v___x_1299_ = l_unsafeCast___redArg(v___x_1296_);
lean_dec(v___x_1296_);
v___x_1300_ = lean_array_uset(v_bs_x27_1295_, v_i_1289_, v___x_1299_);
v_i_1289_ = v___x_1298_;
v_bs_1290_ = v___x_1300_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__3___boxed(lean_object* v_sz_1302_, lean_object* v_i_1303_, lean_object* v_bs_1304_){
_start:
{
size_t v_sz_boxed_1305_; size_t v_i_boxed_1306_; lean_object* v_res_1307_; 
v_sz_boxed_1305_ = lean_unbox_usize(v_sz_1302_);
lean_dec(v_sz_1302_);
v_i_boxed_1306_ = lean_unbox_usize(v_i_1303_);
lean_dec(v_i_1303_);
v_res_1307_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__3(v_sz_boxed_1305_, v_i_boxed_1306_, v_bs_1304_);
return v_res_1307_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6_spec__13(lean_object* v_o_1311_, lean_object* v_k_1312_, uint8_t v_v_1313_){
_start:
{
lean_object* v_map_1314_; uint8_t v_hasTrace_1315_; lean_object* v___x_1317_; uint8_t v_isShared_1318_; uint8_t v_isSharedCheck_1329_; 
v_map_1314_ = lean_ctor_get(v_o_1311_, 0);
v_hasTrace_1315_ = lean_ctor_get_uint8(v_o_1311_, sizeof(void*)*1);
v_isSharedCheck_1329_ = !lean_is_exclusive(v_o_1311_);
if (v_isSharedCheck_1329_ == 0)
{
v___x_1317_ = v_o_1311_;
v_isShared_1318_ = v_isSharedCheck_1329_;
goto v_resetjp_1316_;
}
else
{
lean_inc(v_map_1314_);
lean_dec(v_o_1311_);
v___x_1317_ = lean_box(0);
v_isShared_1318_ = v_isSharedCheck_1329_;
goto v_resetjp_1316_;
}
v_resetjp_1316_:
{
lean_object* v___x_1319_; lean_object* v___x_1320_; 
v___x_1319_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_1319_, 0, v_v_1313_);
lean_inc(v_k_1312_);
v___x_1320_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_1312_, v___x_1319_, v_map_1314_);
if (v_hasTrace_1315_ == 0)
{
lean_object* v___x_1321_; uint8_t v___x_1322_; lean_object* v___x_1324_; 
v___x_1321_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6_spec__13___closed__1));
v___x_1322_ = l_Lean_Name_isPrefixOf(v___x_1321_, v_k_1312_);
lean_dec(v_k_1312_);
if (v_isShared_1318_ == 0)
{
lean_ctor_set(v___x_1317_, 0, v___x_1320_);
v___x_1324_ = v___x_1317_;
goto v_reusejp_1323_;
}
else
{
lean_object* v_reuseFailAlloc_1325_; 
v_reuseFailAlloc_1325_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1325_, 0, v___x_1320_);
v___x_1324_ = v_reuseFailAlloc_1325_;
goto v_reusejp_1323_;
}
v_reusejp_1323_:
{
lean_ctor_set_uint8(v___x_1324_, sizeof(void*)*1, v___x_1322_);
return v___x_1324_;
}
}
else
{
lean_object* v___x_1327_; 
lean_dec(v_k_1312_);
if (v_isShared_1318_ == 0)
{
lean_ctor_set(v___x_1317_, 0, v___x_1320_);
v___x_1327_ = v___x_1317_;
goto v_reusejp_1326_;
}
else
{
lean_object* v_reuseFailAlloc_1328_; 
v_reuseFailAlloc_1328_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1328_, 0, v___x_1320_);
lean_ctor_set_uint8(v_reuseFailAlloc_1328_, sizeof(void*)*1, v_hasTrace_1315_);
v___x_1327_ = v_reuseFailAlloc_1328_;
goto v_reusejp_1326_;
}
v_reusejp_1326_:
{
return v___x_1327_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6_spec__13___boxed(lean_object* v_o_1330_, lean_object* v_k_1331_, lean_object* v_v_1332_){
_start:
{
uint8_t v_v_boxed_1333_; lean_object* v_res_1334_; 
v_v_boxed_1333_ = lean_unbox(v_v_1332_);
v_res_1334_ = l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6_spec__13(v_o_1330_, v_k_1331_, v_v_boxed_1333_);
return v_res_1334_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6(lean_object* v_opts_1335_, lean_object* v_opt_1336_, uint8_t v_val_1337_){
_start:
{
lean_object* v_name_1338_; lean_object* v___x_1339_; 
v_name_1338_ = lean_ctor_get(v_opt_1336_, 0);
lean_inc(v_name_1338_);
lean_dec_ref(v_opt_1336_);
v___x_1339_ = l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6_spec__13(v_opts_1335_, v_name_1338_, v_val_1337_);
return v___x_1339_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6___boxed(lean_object* v_opts_1340_, lean_object* v_opt_1341_, lean_object* v_val_1342_){
_start:
{
uint8_t v_val_boxed_1343_; lean_object* v_res_1344_; 
v_val_boxed_1343_ = lean_unbox(v_val_1342_);
v_res_1344_ = l_Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6(v_opts_1340_, v_opt_1341_, v_val_boxed_1343_);
return v_res_1344_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__2(size_t v_sz_1345_, size_t v_i_1346_, lean_object* v_bs_1347_, lean_object* v___y_1348_, lean_object* v___y_1349_){
_start:
{
uint8_t v___x_1350_; 
v___x_1350_ = lean_usize_dec_lt(v_i_1346_, v_sz_1345_);
if (v___x_1350_ == 0)
{
lean_object* v___x_1351_; lean_object* v___x_1352_; 
v___x_1351_ = l_unsafeCast___redArg(v_bs_1347_);
lean_dec_ref(v_bs_1347_);
v___x_1352_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1352_, 0, v___x_1351_);
lean_ctor_set(v___x_1352_, 1, v___y_1349_);
return v___x_1352_;
}
else
{
lean_object* v_v_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; 
v_v_1353_ = lean_array_uget_borrowed(v_bs_1347_, v_i_1346_);
v___x_1354_ = l_unsafeCast___redArg(v_v_1353_);
v___x_1355_ = l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem(v___x_1354_, v___y_1348_, v___y_1349_);
if (lean_obj_tag(v___x_1355_) == 0)
{
lean_object* v_a_1356_; lean_object* v_a_1357_; lean_object* v___x_1358_; lean_object* v_bs_x27_1359_; size_t v___x_1360_; size_t v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; 
v_a_1356_ = lean_ctor_get(v___x_1355_, 0);
lean_inc(v_a_1356_);
v_a_1357_ = lean_ctor_get(v___x_1355_, 1);
lean_inc(v_a_1357_);
lean_dec_ref_known(v___x_1355_, 2);
v___x_1358_ = lean_unsigned_to_nat(0u);
v_bs_x27_1359_ = lean_array_uset(v_bs_1347_, v_i_1346_, v___x_1358_);
v___x_1360_ = ((size_t)1ULL);
v___x_1361_ = lean_usize_add(v_i_1346_, v___x_1360_);
v___x_1362_ = l_unsafeCast___redArg(v_a_1356_);
lean_dec(v_a_1356_);
v___x_1363_ = lean_array_uset(v_bs_x27_1359_, v_i_1346_, v___x_1362_);
v_i_1346_ = v___x_1361_;
v_bs_1347_ = v___x_1363_;
v___y_1349_ = v_a_1357_;
goto _start;
}
else
{
lean_object* v_a_1365_; lean_object* v_a_1366_; lean_object* v___x_1368_; uint8_t v_isShared_1369_; uint8_t v_isSharedCheck_1373_; 
lean_dec_ref(v_bs_1347_);
v_a_1365_ = lean_ctor_get(v___x_1355_, 0);
v_a_1366_ = lean_ctor_get(v___x_1355_, 1);
v_isSharedCheck_1373_ = !lean_is_exclusive(v___x_1355_);
if (v_isSharedCheck_1373_ == 0)
{
v___x_1368_ = v___x_1355_;
v_isShared_1369_ = v_isSharedCheck_1373_;
goto v_resetjp_1367_;
}
else
{
lean_inc(v_a_1366_);
lean_inc(v_a_1365_);
lean_dec(v___x_1355_);
v___x_1368_ = lean_box(0);
v_isShared_1369_ = v_isSharedCheck_1373_;
goto v_resetjp_1367_;
}
v_resetjp_1367_:
{
lean_object* v___x_1371_; 
if (v_isShared_1369_ == 0)
{
v___x_1371_ = v___x_1368_;
goto v_reusejp_1370_;
}
else
{
lean_object* v_reuseFailAlloc_1372_; 
v_reuseFailAlloc_1372_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1372_, 0, v_a_1365_);
lean_ctor_set(v_reuseFailAlloc_1372_, 1, v_a_1366_);
v___x_1371_ = v_reuseFailAlloc_1372_;
goto v_reusejp_1370_;
}
v_reusejp_1370_:
{
return v___x_1371_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__2___boxed(lean_object* v_sz_1374_, lean_object* v_i_1375_, lean_object* v_bs_1376_, lean_object* v___y_1377_, lean_object* v___y_1378_){
_start:
{
size_t v_sz_boxed_1379_; size_t v_i_boxed_1380_; lean_object* v_res_1381_; 
v_sz_boxed_1379_ = lean_unbox_usize(v_sz_1374_);
lean_dec(v_sz_1374_);
v_i_boxed_1380_ = lean_unbox_usize(v_i_1375_);
lean_dec(v_i_1375_);
v_res_1381_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__2(v_sz_boxed_1379_, v_i_boxed_1380_, v_bs_1376_, v___y_1377_, v___y_1378_);
lean_dec_ref(v___y_1377_);
return v_res_1381_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__5___redArg(size_t v_sz_1382_, size_t v_i_1383_, lean_object* v_bs_1384_, lean_object* v___y_1385_){
_start:
{
uint8_t v___x_1386_; 
v___x_1386_ = lean_usize_dec_lt(v_i_1383_, v_sz_1382_);
if (v___x_1386_ == 0)
{
lean_object* v___x_1387_; lean_object* v___x_1388_; 
v___x_1387_ = l_unsafeCast___redArg(v_bs_1384_);
lean_dec_ref(v_bs_1384_);
v___x_1388_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1388_, 0, v___x_1387_);
lean_ctor_set(v___x_1388_, 1, v___y_1385_);
return v___x_1388_;
}
else
{
lean_object* v_v_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; 
v_v_1389_ = lean_array_uget_borrowed(v_bs_1384_, v_i_1383_);
v___x_1390_ = l_unsafeCast___redArg(v_v_1389_);
v___x_1391_ = l_Lean_Elab_Command_expandNotationItemIntoPattern___redArg(v___x_1390_, v___y_1385_);
if (lean_obj_tag(v___x_1391_) == 0)
{
lean_object* v_a_1392_; lean_object* v_a_1393_; lean_object* v___x_1394_; lean_object* v_bs_x27_1395_; size_t v___x_1396_; size_t v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; 
v_a_1392_ = lean_ctor_get(v___x_1391_, 0);
lean_inc(v_a_1392_);
v_a_1393_ = lean_ctor_get(v___x_1391_, 1);
lean_inc(v_a_1393_);
lean_dec_ref_known(v___x_1391_, 2);
v___x_1394_ = lean_unsigned_to_nat(0u);
v_bs_x27_1395_ = lean_array_uset(v_bs_1384_, v_i_1383_, v___x_1394_);
v___x_1396_ = ((size_t)1ULL);
v___x_1397_ = lean_usize_add(v_i_1383_, v___x_1396_);
v___x_1398_ = l_unsafeCast___redArg(v_a_1392_);
lean_dec(v_a_1392_);
v___x_1399_ = lean_array_uset(v_bs_x27_1395_, v_i_1383_, v___x_1398_);
v_i_1383_ = v___x_1397_;
v_bs_1384_ = v___x_1399_;
v___y_1385_ = v_a_1393_;
goto _start;
}
else
{
lean_object* v_a_1401_; lean_object* v_a_1402_; lean_object* v___x_1404_; uint8_t v_isShared_1405_; uint8_t v_isSharedCheck_1409_; 
lean_dec_ref(v_bs_1384_);
v_a_1401_ = lean_ctor_get(v___x_1391_, 0);
v_a_1402_ = lean_ctor_get(v___x_1391_, 1);
v_isSharedCheck_1409_ = !lean_is_exclusive(v___x_1391_);
if (v_isSharedCheck_1409_ == 0)
{
v___x_1404_ = v___x_1391_;
v_isShared_1405_ = v_isSharedCheck_1409_;
goto v_resetjp_1403_;
}
else
{
lean_inc(v_a_1402_);
lean_inc(v_a_1401_);
lean_dec(v___x_1391_);
v___x_1404_ = lean_box(0);
v_isShared_1405_ = v_isSharedCheck_1409_;
goto v_resetjp_1403_;
}
v_resetjp_1403_:
{
lean_object* v___x_1407_; 
if (v_isShared_1405_ == 0)
{
v___x_1407_ = v___x_1404_;
goto v_reusejp_1406_;
}
else
{
lean_object* v_reuseFailAlloc_1408_; 
v_reuseFailAlloc_1408_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1408_, 0, v_a_1401_);
lean_ctor_set(v_reuseFailAlloc_1408_, 1, v_a_1402_);
v___x_1407_ = v_reuseFailAlloc_1408_;
goto v_reusejp_1406_;
}
v_reusejp_1406_:
{
return v___x_1407_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__5___redArg___boxed(lean_object* v_sz_1410_, lean_object* v_i_1411_, lean_object* v_bs_1412_, lean_object* v___y_1413_){
_start:
{
size_t v_sz_boxed_1414_; size_t v_i_boxed_1415_; lean_object* v_res_1416_; 
v_sz_boxed_1414_ = lean_unbox_usize(v_sz_1410_);
lean_dec(v_sz_1410_);
v_i_boxed_1415_ = lean_unbox_usize(v_i_1411_);
lean_dec(v_i_1411_);
v_res_1416_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__5___redArg(v_sz_boxed_1414_, v_i_boxed_1415_, v_bs_1412_, v___y_1413_);
return v_res_1416_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__5(size_t v_sz_1417_, size_t v_i_1418_, lean_object* v_bs_1419_, lean_object* v___y_1420_, lean_object* v___y_1421_){
_start:
{
lean_object* v___x_1422_; 
v___x_1422_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__5___redArg(v_sz_1417_, v_i_1418_, v_bs_1419_, v___y_1421_);
return v___x_1422_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__5___boxed(lean_object* v_sz_1423_, lean_object* v_i_1424_, lean_object* v_bs_1425_, lean_object* v___y_1426_, lean_object* v___y_1427_){
_start:
{
size_t v_sz_boxed_1428_; size_t v_i_boxed_1429_; lean_object* v_res_1430_; 
v_sz_boxed_1428_ = lean_unbox_usize(v_sz_1423_);
lean_dec(v_sz_1423_);
v_i_boxed_1429_ = lean_unbox_usize(v_i_1424_);
lean_dec(v_i_1424_);
v_res_1430_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__5(v_sz_boxed_1428_, v_i_boxed_1429_, v_bs_1425_, v___y_1426_, v___y_1427_);
lean_dec_ref(v___y_1426_);
return v_res_1430_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__4(size_t v_sz_1431_, size_t v_i_1432_, lean_object* v_bs_1433_){
_start:
{
uint8_t v___x_1434_; 
v___x_1434_ = lean_usize_dec_lt(v_i_1432_, v_sz_1431_);
if (v___x_1434_ == 0)
{
lean_object* v___x_1435_; 
v___x_1435_ = l_unsafeCast___redArg(v_bs_1433_);
lean_dec_ref(v_bs_1433_);
return v___x_1435_;
}
else
{
lean_object* v___x_1436_; lean_object* v_v_1437_; lean_object* v_bs_x27_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; size_t v___x_1441_; size_t v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; 
v___x_1436_ = lean_unsigned_to_nat(0u);
v_v_1437_ = lean_array_uget(v_bs_1433_, v_i_1432_);
v_bs_x27_1438_ = lean_array_uset(v_bs_1433_, v_i_1432_, v___x_1436_);
v___x_1439_ = l_unsafeCast___redArg(v_v_1437_);
lean_dec(v_v_1437_);
v___x_1440_ = l_Lean_Syntax_getArg(v___x_1439_, v___x_1436_);
lean_dec(v___x_1439_);
v___x_1441_ = ((size_t)1ULL);
v___x_1442_ = lean_usize_add(v_i_1432_, v___x_1441_);
v___x_1443_ = l_unsafeCast___redArg(v___x_1440_);
lean_dec(v___x_1440_);
v___x_1444_ = lean_array_uset(v_bs_x27_1438_, v_i_1432_, v___x_1443_);
v_i_1432_ = v___x_1442_;
v_bs_1433_ = v___x_1444_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__4___boxed(lean_object* v_sz_1446_, lean_object* v_i_1447_, lean_object* v_bs_1448_){
_start:
{
size_t v_sz_boxed_1449_; size_t v_i_boxed_1450_; lean_object* v_res_1451_; 
v_sz_boxed_1449_ = lean_unbox_usize(v_sz_1446_);
lean_dec(v_sz_1446_);
v_i_boxed_1450_ = lean_unbox_usize(v_i_1447_);
lean_dec(v_i_1447_);
v_res_1451_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__4(v_sz_boxed_1449_, v_i_boxed_1450_, v_bs_1448_);
return v_res_1451_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__3(lean_object* v_env_1452_, lean_object* v_currNamespace_1453_, lean_object* v_openDecls_1454_, lean_object* v_n_1455_, lean_object* v___y_1456_, lean_object* v___y_1457_){
_start:
{
lean_object* v___x_1458_; lean_object* v___x_1459_; 
v___x_1458_ = l_Lean_ResolveName_resolveNamespace(v_env_1452_, v_currNamespace_1453_, v_openDecls_1454_, v_n_1455_);
v___x_1459_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1459_, 0, v___x_1458_);
lean_ctor_set(v___x_1459_, 1, v___y_1457_);
return v___x_1459_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__3___boxed(lean_object* v_env_1460_, lean_object* v_currNamespace_1461_, lean_object* v_openDecls_1462_, lean_object* v_n_1463_, lean_object* v___y_1464_, lean_object* v___y_1465_){
_start:
{
lean_object* v_res_1466_; 
v_res_1466_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__3(v_env_1460_, v_currNamespace_1461_, v_openDecls_1462_, v_n_1463_, v___y_1464_, v___y_1465_);
lean_dec_ref(v___y_1464_);
return v_res_1466_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_1467_; 
v___x_1467_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1467_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__1(void){
_start:
{
lean_object* v___x_1468_; lean_object* v___x_1469_; 
v___x_1468_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__0);
v___x_1469_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1469_, 0, v___x_1468_);
return v___x_1469_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__2(void){
_start:
{
lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; 
v___x_1470_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__1);
v___x_1471_ = lean_unsigned_to_nat(0u);
v___x_1472_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1472_, 0, v___x_1471_);
lean_ctor_set(v___x_1472_, 1, v___x_1471_);
lean_ctor_set(v___x_1472_, 2, v___x_1471_);
lean_ctor_set(v___x_1472_, 3, v___x_1471_);
lean_ctor_set(v___x_1472_, 4, v___x_1470_);
lean_ctor_set(v___x_1472_, 5, v___x_1470_);
lean_ctor_set(v___x_1472_, 6, v___x_1470_);
lean_ctor_set(v___x_1472_, 7, v___x_1470_);
lean_ctor_set(v___x_1472_, 8, v___x_1470_);
lean_ctor_set(v___x_1472_, 9, v___x_1470_);
lean_ctor_set(v___x_1472_, 10, v___x_1470_);
return v___x_1472_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__3(void){
_start:
{
lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; 
v___x_1473_ = lean_unsigned_to_nat(32u);
v___x_1474_ = lean_mk_empty_array_with_capacity(v___x_1473_);
v___x_1475_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1475_, 0, v___x_1474_);
return v___x_1475_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__4(void){
_start:
{
size_t v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; 
v___x_1476_ = ((size_t)5ULL);
v___x_1477_ = lean_unsigned_to_nat(0u);
v___x_1478_ = lean_unsigned_to_nat(32u);
v___x_1479_ = lean_mk_empty_array_with_capacity(v___x_1478_);
v___x_1480_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__3);
v___x_1481_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1481_, 0, v___x_1480_);
lean_ctor_set(v___x_1481_, 1, v___x_1479_);
lean_ctor_set(v___x_1481_, 2, v___x_1477_);
lean_ctor_set(v___x_1481_, 3, v___x_1477_);
lean_ctor_set_usize(v___x_1481_, 4, v___x_1476_);
return v___x_1481_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__5(void){
_start:
{
lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; 
v___x_1482_ = lean_box(1);
v___x_1483_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__4);
v___x_1484_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__1);
v___x_1485_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1485_, 0, v___x_1484_);
lean_ctor_set(v___x_1485_, 1, v___x_1483_);
lean_ctor_set(v___x_1485_, 2, v___x_1482_);
return v___x_1485_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg(lean_object* v_msgData_1486_, lean_object* v___y_1487_){
_start:
{
lean_object* v___x_1489_; lean_object* v_env_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v_scopes_1493_; lean_object* v___x_1494_; lean_object* v_opts_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; 
v___x_1489_ = lean_st_ref_get(v___y_1487_);
v_env_1490_ = lean_ctor_get(v___x_1489_, 0);
lean_inc_ref(v_env_1490_);
lean_dec(v___x_1489_);
v___x_1491_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1492_ = lean_st_ref_get(v___y_1487_);
v_scopes_1493_ = lean_ctor_get(v___x_1492_, 2);
lean_inc(v_scopes_1493_);
lean_dec(v___x_1492_);
v___x_1494_ = l_List_head_x21___redArg(v___x_1491_, v_scopes_1493_);
lean_dec(v_scopes_1493_);
v_opts_1495_ = lean_ctor_get(v___x_1494_, 1);
lean_inc_ref(v_opts_1495_);
lean_dec(v___x_1494_);
v___x_1496_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__2);
v___x_1497_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__5);
v___x_1498_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1498_, 0, v_env_1490_);
lean_ctor_set(v___x_1498_, 1, v___x_1496_);
lean_ctor_set(v___x_1498_, 2, v___x_1497_);
lean_ctor_set(v___x_1498_, 3, v_opts_1495_);
v___x_1499_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1499_, 0, v___x_1498_);
lean_ctor_set(v___x_1499_, 1, v_msgData_1486_);
v___x_1500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1500_, 0, v___x_1499_);
return v___x_1500_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___boxed(lean_object* v_msgData_1501_, lean_object* v___y_1502_, lean_object* v___y_1503_){
_start:
{
lean_object* v_res_1504_; 
v_res_1504_ = l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg(v_msgData_1501_, v___y_1502_);
lean_dec(v___y_1502_);
return v_res_1504_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1___closed__0(void){
_start:
{
lean_object* v___x_1505_; double v___x_1506_; 
v___x_1505_ = lean_unsigned_to_nat(0u);
v___x_1506_ = lean_float_of_nat(v___x_1505_);
return v___x_1506_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1(lean_object* v_cls_1509_, lean_object* v_msg_1510_, lean_object* v___y_1511_, lean_object* v___y_1512_){
_start:
{
lean_object* v___x_1514_; 
v___x_1514_ = l_Lean_Elab_Command_getRef___redArg(v___y_1511_);
if (lean_obj_tag(v___x_1514_) == 0)
{
lean_object* v_a_1515_; lean_object* v___x_1516_; lean_object* v_a_1517_; lean_object* v___x_1519_; uint8_t v_isShared_1520_; uint8_t v_isSharedCheck_1565_; 
v_a_1515_ = lean_ctor_get(v___x_1514_, 0);
lean_inc(v_a_1515_);
lean_dec_ref_known(v___x_1514_, 1);
v___x_1516_ = l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg(v_msg_1510_, v___y_1512_);
v_a_1517_ = lean_ctor_get(v___x_1516_, 0);
v_isSharedCheck_1565_ = !lean_is_exclusive(v___x_1516_);
if (v_isSharedCheck_1565_ == 0)
{
v___x_1519_ = v___x_1516_;
v_isShared_1520_ = v_isSharedCheck_1565_;
goto v_resetjp_1518_;
}
else
{
lean_inc(v_a_1517_);
lean_dec(v___x_1516_);
v___x_1519_ = lean_box(0);
v_isShared_1520_ = v_isSharedCheck_1565_;
goto v_resetjp_1518_;
}
v_resetjp_1518_:
{
lean_object* v___x_1521_; lean_object* v_traceState_1522_; lean_object* v_env_1523_; lean_object* v_messages_1524_; lean_object* v_scopes_1525_; lean_object* v_usedQuotCtxts_1526_; lean_object* v_nextMacroScope_1527_; lean_object* v_maxRecDepth_1528_; lean_object* v_ngen_1529_; lean_object* v_auxDeclNGen_1530_; lean_object* v_infoState_1531_; lean_object* v_snapshotTasks_1532_; lean_object* v_prevLinterStates_1533_; lean_object* v_codeQualityEntryTasks_1534_; lean_object* v___x_1536_; uint8_t v_isShared_1537_; uint8_t v_isSharedCheck_1564_; 
v___x_1521_ = lean_st_ref_take(v___y_1512_);
v_traceState_1522_ = lean_ctor_get(v___x_1521_, 9);
v_env_1523_ = lean_ctor_get(v___x_1521_, 0);
v_messages_1524_ = lean_ctor_get(v___x_1521_, 1);
v_scopes_1525_ = lean_ctor_get(v___x_1521_, 2);
v_usedQuotCtxts_1526_ = lean_ctor_get(v___x_1521_, 3);
v_nextMacroScope_1527_ = lean_ctor_get(v___x_1521_, 4);
v_maxRecDepth_1528_ = lean_ctor_get(v___x_1521_, 5);
v_ngen_1529_ = lean_ctor_get(v___x_1521_, 6);
v_auxDeclNGen_1530_ = lean_ctor_get(v___x_1521_, 7);
v_infoState_1531_ = lean_ctor_get(v___x_1521_, 8);
v_snapshotTasks_1532_ = lean_ctor_get(v___x_1521_, 10);
v_prevLinterStates_1533_ = lean_ctor_get(v___x_1521_, 11);
v_codeQualityEntryTasks_1534_ = lean_ctor_get(v___x_1521_, 12);
v_isSharedCheck_1564_ = !lean_is_exclusive(v___x_1521_);
if (v_isSharedCheck_1564_ == 0)
{
v___x_1536_ = v___x_1521_;
v_isShared_1537_ = v_isSharedCheck_1564_;
goto v_resetjp_1535_;
}
else
{
lean_inc(v_codeQualityEntryTasks_1534_);
lean_inc(v_prevLinterStates_1533_);
lean_inc(v_snapshotTasks_1532_);
lean_inc(v_traceState_1522_);
lean_inc(v_infoState_1531_);
lean_inc(v_auxDeclNGen_1530_);
lean_inc(v_ngen_1529_);
lean_inc(v_maxRecDepth_1528_);
lean_inc(v_nextMacroScope_1527_);
lean_inc(v_usedQuotCtxts_1526_);
lean_inc(v_scopes_1525_);
lean_inc(v_messages_1524_);
lean_inc(v_env_1523_);
lean_dec(v___x_1521_);
v___x_1536_ = lean_box(0);
v_isShared_1537_ = v_isSharedCheck_1564_;
goto v_resetjp_1535_;
}
v_resetjp_1535_:
{
uint64_t v_tid_1538_; lean_object* v_traces_1539_; lean_object* v___x_1541_; uint8_t v_isShared_1542_; uint8_t v_isSharedCheck_1563_; 
v_tid_1538_ = lean_ctor_get_uint64(v_traceState_1522_, sizeof(void*)*1);
v_traces_1539_ = lean_ctor_get(v_traceState_1522_, 0);
v_isSharedCheck_1563_ = !lean_is_exclusive(v_traceState_1522_);
if (v_isSharedCheck_1563_ == 0)
{
v___x_1541_ = v_traceState_1522_;
v_isShared_1542_ = v_isSharedCheck_1563_;
goto v_resetjp_1540_;
}
else
{
lean_inc(v_traces_1539_);
lean_dec(v_traceState_1522_);
v___x_1541_ = lean_box(0);
v_isShared_1542_ = v_isSharedCheck_1563_;
goto v_resetjp_1540_;
}
v_resetjp_1540_:
{
lean_object* v___x_1543_; lean_object* v___x_1544_; double v___x_1545_; uint8_t v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1554_; 
v___x_1543_ = lean_box(0);
v___x_1544_ = lean_box(0);
v___x_1545_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1___closed__0, &l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1___closed__0);
v___x_1546_ = 0;
v___x_1547_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__54));
v___x_1548_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1548_, 0, v_cls_1509_);
lean_ctor_set(v___x_1548_, 1, v___x_1544_);
lean_ctor_set(v___x_1548_, 2, v___x_1547_);
lean_ctor_set_float(v___x_1548_, sizeof(void*)*3, v___x_1545_);
lean_ctor_set_float(v___x_1548_, sizeof(void*)*3 + 8, v___x_1545_);
lean_ctor_set_uint8(v___x_1548_, sizeof(void*)*3 + 16, v___x_1546_);
v___x_1549_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1___closed__1));
v___x_1550_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1550_, 0, v___x_1548_);
lean_ctor_set(v___x_1550_, 1, v_a_1517_);
lean_ctor_set(v___x_1550_, 2, v___x_1549_);
v___x_1551_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1551_, 0, v_a_1515_);
lean_ctor_set(v___x_1551_, 1, v___x_1550_);
v___x_1552_ = l_Lean_PersistentArray_push___redArg(v_traces_1539_, v___x_1551_);
if (v_isShared_1542_ == 0)
{
lean_ctor_set(v___x_1541_, 0, v___x_1552_);
v___x_1554_ = v___x_1541_;
goto v_reusejp_1553_;
}
else
{
lean_object* v_reuseFailAlloc_1562_; 
v_reuseFailAlloc_1562_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1562_, 0, v___x_1552_);
lean_ctor_set_uint64(v_reuseFailAlloc_1562_, sizeof(void*)*1, v_tid_1538_);
v___x_1554_ = v_reuseFailAlloc_1562_;
goto v_reusejp_1553_;
}
v_reusejp_1553_:
{
lean_object* v___x_1556_; 
if (v_isShared_1537_ == 0)
{
lean_ctor_set(v___x_1536_, 9, v___x_1554_);
v___x_1556_ = v___x_1536_;
goto v_reusejp_1555_;
}
else
{
lean_object* v_reuseFailAlloc_1561_; 
v_reuseFailAlloc_1561_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_1561_, 0, v_env_1523_);
lean_ctor_set(v_reuseFailAlloc_1561_, 1, v_messages_1524_);
lean_ctor_set(v_reuseFailAlloc_1561_, 2, v_scopes_1525_);
lean_ctor_set(v_reuseFailAlloc_1561_, 3, v_usedQuotCtxts_1526_);
lean_ctor_set(v_reuseFailAlloc_1561_, 4, v_nextMacroScope_1527_);
lean_ctor_set(v_reuseFailAlloc_1561_, 5, v_maxRecDepth_1528_);
lean_ctor_set(v_reuseFailAlloc_1561_, 6, v_ngen_1529_);
lean_ctor_set(v_reuseFailAlloc_1561_, 7, v_auxDeclNGen_1530_);
lean_ctor_set(v_reuseFailAlloc_1561_, 8, v_infoState_1531_);
lean_ctor_set(v_reuseFailAlloc_1561_, 9, v___x_1554_);
lean_ctor_set(v_reuseFailAlloc_1561_, 10, v_snapshotTasks_1532_);
lean_ctor_set(v_reuseFailAlloc_1561_, 11, v_prevLinterStates_1533_);
lean_ctor_set(v_reuseFailAlloc_1561_, 12, v_codeQualityEntryTasks_1534_);
v___x_1556_ = v_reuseFailAlloc_1561_;
goto v_reusejp_1555_;
}
v_reusejp_1555_:
{
lean_object* v___x_1557_; lean_object* v___x_1559_; 
v___x_1557_ = lean_st_ref_put(v___y_1512_, v___x_1556_);
if (v_isShared_1520_ == 0)
{
lean_ctor_set(v___x_1519_, 0, v___x_1543_);
v___x_1559_ = v___x_1519_;
goto v_reusejp_1558_;
}
else
{
lean_object* v_reuseFailAlloc_1560_; 
v_reuseFailAlloc_1560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1560_, 0, v___x_1543_);
v___x_1559_ = v_reuseFailAlloc_1560_;
goto v_reusejp_1558_;
}
v_reusejp_1558_:
{
return v___x_1559_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1566_; lean_object* v___x_1568_; uint8_t v_isShared_1569_; uint8_t v_isSharedCheck_1573_; 
lean_dec_ref(v_msg_1510_);
lean_dec(v_cls_1509_);
v_a_1566_ = lean_ctor_get(v___x_1514_, 0);
v_isSharedCheck_1573_ = !lean_is_exclusive(v___x_1514_);
if (v_isSharedCheck_1573_ == 0)
{
v___x_1568_ = v___x_1514_;
v_isShared_1569_ = v_isSharedCheck_1573_;
goto v_resetjp_1567_;
}
else
{
lean_inc(v_a_1566_);
lean_dec(v___x_1514_);
v___x_1568_ = lean_box(0);
v_isShared_1569_ = v_isSharedCheck_1573_;
goto v_resetjp_1567_;
}
v_resetjp_1567_:
{
lean_object* v___x_1571_; 
if (v_isShared_1569_ == 0)
{
v___x_1571_ = v___x_1568_;
goto v_reusejp_1570_;
}
else
{
lean_object* v_reuseFailAlloc_1572_; 
v_reuseFailAlloc_1572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1572_, 0, v_a_1566_);
v___x_1571_ = v_reuseFailAlloc_1572_;
goto v_reusejp_1570_;
}
v_reusejp_1570_:
{
return v___x_1571_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1___boxed(lean_object* v_cls_1574_, lean_object* v_msg_1575_, lean_object* v___y_1576_, lean_object* v___y_1577_, lean_object* v___y_1578_){
_start:
{
lean_object* v_res_1579_; 
v_res_1579_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1(v_cls_1574_, v_msg_1575_, v___y_1576_, v___y_1577_);
lean_dec(v___y_1577_);
lean_dec_ref(v___y_1576_);
return v_res_1579_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__5(lean_object* v_as_1580_, lean_object* v___y_1581_, lean_object* v___y_1582_){
_start:
{
if (lean_obj_tag(v_as_1580_) == 0)
{
lean_object* v___x_1584_; lean_object* v___x_1585_; 
v___x_1584_ = lean_box(0);
v___x_1585_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1585_, 0, v___x_1584_);
return v___x_1585_;
}
else
{
lean_object* v_head_1586_; lean_object* v_tail_1587_; lean_object* v_fst_1588_; lean_object* v_snd_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v_scopes_1594_; lean_object* v___x_1595_; lean_object* v_opts_1596_; uint8_t v_hasTrace_1597_; 
v_head_1586_ = lean_ctor_get(v_as_1580_, 0);
lean_inc(v_head_1586_);
v_tail_1587_ = lean_ctor_get(v_as_1580_, 1);
lean_inc(v_tail_1587_);
lean_dec_ref_known(v_as_1580_, 2);
v_fst_1588_ = lean_ctor_get(v_head_1586_, 0);
lean_inc(v_fst_1588_);
v_snd_1589_ = lean_ctor_get(v_head_1586_, 1);
lean_inc(v_snd_1589_);
lean_dec(v_head_1586_);
v___x_1590_ = l_Lean_inheritedTraceOptions;
v___x_1591_ = lean_st_ref_get(v___x_1590_);
v___x_1592_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1593_ = lean_st_ref_get(v___y_1582_);
v_scopes_1594_ = lean_ctor_get(v___x_1593_, 2);
lean_inc(v_scopes_1594_);
lean_dec(v___x_1593_);
v___x_1595_ = l_List_head_x21___redArg(v___x_1592_, v_scopes_1594_);
lean_dec(v_scopes_1594_);
v_opts_1596_ = lean_ctor_get(v___x_1595_, 1);
lean_inc_ref(v_opts_1596_);
lean_dec(v___x_1595_);
v_hasTrace_1597_ = lean_ctor_get_uint8(v_opts_1596_, sizeof(void*)*1);
if (v_hasTrace_1597_ == 0)
{
lean_dec_ref(v_opts_1596_);
lean_dec(v___x_1591_);
lean_dec(v_snd_1589_);
lean_dec(v_fst_1588_);
v_as_1580_ = v_tail_1587_;
goto _start;
}
else
{
lean_object* v___x_1599_; lean_object* v___x_1600_; uint8_t v___x_1601_; 
v___x_1599_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6_spec__13___closed__1));
lean_inc(v_fst_1588_);
v___x_1600_ = l_Lean_Name_append(v___x_1599_, v_fst_1588_);
v___x_1601_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_1591_, v_opts_1596_, v___x_1600_);
lean_dec(v___x_1600_);
lean_dec_ref(v_opts_1596_);
lean_dec(v___x_1591_);
if (v___x_1601_ == 0)
{
lean_dec(v_snd_1589_);
lean_dec(v_fst_1588_);
v_as_1580_ = v_tail_1587_;
goto _start;
}
else
{
lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; 
v___x_1603_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1603_, 0, v_snd_1589_);
v___x_1604_ = l_Lean_MessageData_ofFormat(v___x_1603_);
v___x_1605_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1(v_fst_1588_, v___x_1604_, v___y_1581_, v___y_1582_);
if (lean_obj_tag(v___x_1605_) == 0)
{
lean_dec_ref_known(v___x_1605_, 1);
v_as_1580_ = v_tail_1587_;
goto _start;
}
else
{
lean_dec(v_tail_1587_);
return v___x_1605_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__5___boxed(lean_object* v_as_1607_, lean_object* v___y_1608_, lean_object* v___y_1609_, lean_object* v___y_1610_){
_start:
{
lean_object* v_res_1611_; 
v_res_1611_ = l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__5(v_as_1607_, v___y_1608_, v___y_1609_);
lean_dec(v___y_1609_);
lean_dec_ref(v___y_1608_);
return v_res_1611_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__2(lean_object* v_currNamespace_1612_, lean_object* v___y_1613_, lean_object* v___y_1614_){
_start:
{
lean_object* v___x_1615_; 
v___x_1615_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1615_, 0, v_currNamespace_1612_);
lean_ctor_set(v___x_1615_, 1, v___y_1614_);
return v___x_1615_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__2___boxed(lean_object* v_currNamespace_1616_, lean_object* v___y_1617_, lean_object* v___y_1618_){
_start:
{
lean_object* v_res_1619_; 
v_res_1619_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__2(v_currNamespace_1616_, v___y_1617_, v___y_1618_);
lean_dec_ref(v___y_1617_);
return v_res_1619_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__4(lean_object* v_env_1620_, lean_object* v_opts_1621_, lean_object* v_currNamespace_1622_, lean_object* v_openDecls_1623_, lean_object* v_n_1624_, lean_object* v___y_1625_, lean_object* v___y_1626_){
_start:
{
lean_object* v___x_1627_; lean_object* v___x_1628_; 
v___x_1627_ = l_Lean_ResolveName_resolveGlobalName(v_env_1620_, v_opts_1621_, v_currNamespace_1622_, v_openDecls_1623_, v_n_1624_);
v___x_1628_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1628_, 0, v___x_1627_);
lean_ctor_set(v___x_1628_, 1, v___y_1626_);
return v___x_1628_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__4___boxed(lean_object* v_env_1629_, lean_object* v_opts_1630_, lean_object* v_currNamespace_1631_, lean_object* v_openDecls_1632_, lean_object* v_n_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_){
_start:
{
lean_object* v_res_1636_; 
v_res_1636_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__4(v_env_1629_, v_opts_1630_, v_currNamespace_1631_, v_openDecls_1632_, v_n_1633_, v___y_1634_, v___y_1635_);
lean_dec_ref(v___y_1634_);
lean_dec_ref(v_opts_1630_);
return v_res_1636_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__26___closed__0(void){
_start:
{
lean_object* v___x_1637_; lean_object* v___x_1638_; 
v___x_1637_ = lean_box(1);
v___x_1638_ = l_Lean_MessageData_ofFormat(v___x_1637_);
return v___x_1638_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__26___closed__3(void){
_start:
{
lean_object* v___x_1642_; lean_object* v___x_1643_; 
v___x_1642_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__26___closed__2));
v___x_1643_ = l_Lean_MessageData_ofFormat(v___x_1642_);
return v___x_1643_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__26(lean_object* v_x_1644_, lean_object* v_x_1645_){
_start:
{
if (lean_obj_tag(v_x_1645_) == 0)
{
return v_x_1644_;
}
else
{
lean_object* v_head_1646_; lean_object* v_tail_1647_; lean_object* v___x_1649_; uint8_t v_isShared_1650_; uint8_t v_isSharedCheck_1669_; 
v_head_1646_ = lean_ctor_get(v_x_1645_, 0);
v_tail_1647_ = lean_ctor_get(v_x_1645_, 1);
v_isSharedCheck_1669_ = !lean_is_exclusive(v_x_1645_);
if (v_isSharedCheck_1669_ == 0)
{
v___x_1649_ = v_x_1645_;
v_isShared_1650_ = v_isSharedCheck_1669_;
goto v_resetjp_1648_;
}
else
{
lean_inc(v_tail_1647_);
lean_inc(v_head_1646_);
lean_dec(v_x_1645_);
v___x_1649_ = lean_box(0);
v_isShared_1650_ = v_isSharedCheck_1669_;
goto v_resetjp_1648_;
}
v_resetjp_1648_:
{
lean_object* v_before_1651_; lean_object* v___x_1653_; uint8_t v_isShared_1654_; uint8_t v_isSharedCheck_1667_; 
v_before_1651_ = lean_ctor_get(v_head_1646_, 0);
v_isSharedCheck_1667_ = !lean_is_exclusive(v_head_1646_);
if (v_isSharedCheck_1667_ == 0)
{
lean_object* v_unused_1668_; 
v_unused_1668_ = lean_ctor_get(v_head_1646_, 1);
lean_dec(v_unused_1668_);
v___x_1653_ = v_head_1646_;
v_isShared_1654_ = v_isSharedCheck_1667_;
goto v_resetjp_1652_;
}
else
{
lean_inc(v_before_1651_);
lean_dec(v_head_1646_);
v___x_1653_ = lean_box(0);
v_isShared_1654_ = v_isSharedCheck_1667_;
goto v_resetjp_1652_;
}
v_resetjp_1652_:
{
lean_object* v___x_1655_; lean_object* v___x_1657_; 
v___x_1655_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__26___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__26___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__26___closed__0);
if (v_isShared_1654_ == 0)
{
lean_ctor_set_tag(v___x_1653_, 7);
lean_ctor_set(v___x_1653_, 1, v___x_1655_);
lean_ctor_set(v___x_1653_, 0, v_x_1644_);
v___x_1657_ = v___x_1653_;
goto v_reusejp_1656_;
}
else
{
lean_object* v_reuseFailAlloc_1666_; 
v_reuseFailAlloc_1666_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1666_, 0, v_x_1644_);
lean_ctor_set(v_reuseFailAlloc_1666_, 1, v___x_1655_);
v___x_1657_ = v_reuseFailAlloc_1666_;
goto v_reusejp_1656_;
}
v_reusejp_1656_:
{
lean_object* v___x_1658_; lean_object* v___x_1660_; 
v___x_1658_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__26___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__26___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__26___closed__3);
if (v_isShared_1650_ == 0)
{
lean_ctor_set_tag(v___x_1649_, 7);
lean_ctor_set(v___x_1649_, 1, v___x_1658_);
lean_ctor_set(v___x_1649_, 0, v___x_1657_);
v___x_1660_ = v___x_1649_;
goto v_reusejp_1659_;
}
else
{
lean_object* v_reuseFailAlloc_1665_; 
v_reuseFailAlloc_1665_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1665_, 0, v___x_1657_);
lean_ctor_set(v_reuseFailAlloc_1665_, 1, v___x_1658_);
v___x_1660_ = v_reuseFailAlloc_1665_;
goto v_reusejp_1659_;
}
v_reusejp_1659_:
{
lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; 
v___x_1661_ = l_Lean_MessageData_ofSyntax(v_before_1651_);
v___x_1662_ = l_Lean_indentD(v___x_1661_);
v___x_1663_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1663_, 0, v___x_1660_);
lean_ctor_set(v___x_1663_, 1, v___x_1662_);
v_x_1644_ = v___x_1663_;
v_x_1645_ = v_tail_1647_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__25(lean_object* v_opts_1670_, lean_object* v_opt_1671_){
_start:
{
lean_object* v_name_1672_; lean_object* v_defValue_1673_; lean_object* v_map_1674_; lean_object* v___x_1675_; 
v_name_1672_ = lean_ctor_get(v_opt_1671_, 0);
v_defValue_1673_ = lean_ctor_get(v_opt_1671_, 1);
v_map_1674_ = lean_ctor_get(v_opts_1670_, 0);
v___x_1675_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1674_, v_name_1672_);
if (lean_obj_tag(v___x_1675_) == 0)
{
uint8_t v___x_1676_; 
v___x_1676_ = lean_unbox(v_defValue_1673_);
return v___x_1676_;
}
else
{
lean_object* v_val_1677_; 
v_val_1677_ = lean_ctor_get(v___x_1675_, 0);
lean_inc(v_val_1677_);
lean_dec_ref_known(v___x_1675_, 1);
if (lean_obj_tag(v_val_1677_) == 1)
{
uint8_t v_v_1678_; 
v_v_1678_ = lean_ctor_get_uint8(v_val_1677_, 0);
lean_dec_ref_known(v_val_1677_, 0);
return v_v_1678_;
}
else
{
uint8_t v___x_1679_; 
lean_dec(v_val_1677_);
v___x_1679_ = lean_unbox(v_defValue_1673_);
return v___x_1679_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__25___boxed(lean_object* v_opts_1680_, lean_object* v_opt_1681_){
_start:
{
uint8_t v_res_1682_; lean_object* v_r_1683_; 
v_res_1682_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__25(v_opts_1680_, v_opt_1681_);
lean_dec_ref(v_opt_1681_);
lean_dec_ref(v_opts_1680_);
v_r_1683_ = lean_box(v_res_1682_);
return v_r_1683_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23___redArg___closed__2(void){
_start:
{
lean_object* v___x_1687_; lean_object* v___x_1688_; 
v___x_1687_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23___redArg___closed__1));
v___x_1688_ = l_Lean_MessageData_ofFormat(v___x_1687_);
return v___x_1688_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23___redArg(lean_object* v_msgData_1689_, lean_object* v_macroStack_1690_, lean_object* v___y_1691_){
_start:
{
lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v_scopes_1695_; lean_object* v___x_1696_; lean_object* v_opts_1697_; lean_object* v___x_1698_; uint8_t v___x_1699_; 
v___x_1693_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1694_ = lean_st_ref_get(v___y_1691_);
v_scopes_1695_ = lean_ctor_get(v___x_1694_, 2);
lean_inc(v_scopes_1695_);
lean_dec(v___x_1694_);
v___x_1696_ = l_List_head_x21___redArg(v___x_1693_, v_scopes_1695_);
lean_dec(v_scopes_1695_);
v_opts_1697_ = lean_ctor_get(v___x_1696_, 1);
lean_inc_ref(v_opts_1697_);
lean_dec(v___x_1696_);
v___x_1698_ = l_Lean_Elab_pp_macroStack;
v___x_1699_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__25(v_opts_1697_, v___x_1698_);
lean_dec_ref(v_opts_1697_);
if (v___x_1699_ == 0)
{
lean_object* v___x_1700_; 
lean_dec(v_macroStack_1690_);
v___x_1700_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1700_, 0, v_msgData_1689_);
return v___x_1700_;
}
else
{
if (lean_obj_tag(v_macroStack_1690_) == 0)
{
lean_object* v___x_1701_; 
v___x_1701_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1701_, 0, v_msgData_1689_);
return v___x_1701_;
}
else
{
lean_object* v_head_1702_; lean_object* v_after_1703_; lean_object* v___x_1705_; uint8_t v_isShared_1706_; uint8_t v_isSharedCheck_1718_; 
v_head_1702_ = lean_ctor_get(v_macroStack_1690_, 0);
lean_inc(v_head_1702_);
v_after_1703_ = lean_ctor_get(v_head_1702_, 1);
v_isSharedCheck_1718_ = !lean_is_exclusive(v_head_1702_);
if (v_isSharedCheck_1718_ == 0)
{
lean_object* v_unused_1719_; 
v_unused_1719_ = lean_ctor_get(v_head_1702_, 0);
lean_dec(v_unused_1719_);
v___x_1705_ = v_head_1702_;
v_isShared_1706_ = v_isSharedCheck_1718_;
goto v_resetjp_1704_;
}
else
{
lean_inc(v_after_1703_);
lean_dec(v_head_1702_);
v___x_1705_ = lean_box(0);
v_isShared_1706_ = v_isSharedCheck_1718_;
goto v_resetjp_1704_;
}
v_resetjp_1704_:
{
lean_object* v___x_1707_; lean_object* v___x_1709_; 
v___x_1707_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__26___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__26___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__26___closed__0);
if (v_isShared_1706_ == 0)
{
lean_ctor_set_tag(v___x_1705_, 7);
lean_ctor_set(v___x_1705_, 1, v___x_1707_);
lean_ctor_set(v___x_1705_, 0, v_msgData_1689_);
v___x_1709_ = v___x_1705_;
goto v_reusejp_1708_;
}
else
{
lean_object* v_reuseFailAlloc_1717_; 
v_reuseFailAlloc_1717_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1717_, 0, v_msgData_1689_);
lean_ctor_set(v_reuseFailAlloc_1717_, 1, v___x_1707_);
v___x_1709_ = v_reuseFailAlloc_1717_;
goto v_reusejp_1708_;
}
v_reusejp_1708_:
{
lean_object* v___x_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v_msgData_1714_; lean_object* v___x_1715_; lean_object* v___x_1716_; 
v___x_1710_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23___redArg___closed__2);
v___x_1711_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1711_, 0, v___x_1709_);
lean_ctor_set(v___x_1711_, 1, v___x_1710_);
v___x_1712_ = l_Lean_MessageData_ofSyntax(v_after_1703_);
v___x_1713_ = l_Lean_indentD(v___x_1712_);
v_msgData_1714_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_1714_, 0, v___x_1711_);
lean_ctor_set(v_msgData_1714_, 1, v___x_1713_);
v___x_1715_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__26(v_msgData_1714_, v_macroStack_1690_);
v___x_1716_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1716_, 0, v___x_1715_);
return v___x_1716_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23___redArg___boxed(lean_object* v_msgData_1720_, lean_object* v_macroStack_1721_, lean_object* v___y_1722_, lean_object* v___y_1723_){
_start:
{
lean_object* v_res_1724_; 
v_res_1724_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23___redArg(v_msgData_1720_, v_macroStack_1721_, v___y_1722_);
lean_dec(v___y_1722_);
return v_res_1724_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12___redArg(lean_object* v_msg_1725_, lean_object* v___y_1726_, lean_object* v___y_1727_){
_start:
{
lean_object* v___x_1729_; 
v___x_1729_ = l_Lean_Elab_Command_getRef___redArg(v___y_1726_);
if (lean_obj_tag(v___x_1729_) == 0)
{
lean_object* v_a_1730_; lean_object* v_macroStack_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v_a_1734_; lean_object* v___x_1735_; lean_object* v_a_1736_; lean_object* v___x_1738_; uint8_t v_isShared_1739_; uint8_t v_isSharedCheck_1744_; 
v_a_1730_ = lean_ctor_get(v___x_1729_, 0);
lean_inc(v_a_1730_);
lean_dec_ref_known(v___x_1729_, 1);
v_macroStack_1731_ = lean_ctor_get(v___y_1726_, 4);
v___x_1732_ = l_Lean_Elab_getBetterRef(v_a_1730_, v_macroStack_1731_);
lean_dec(v_a_1730_);
v___x_1733_ = l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg(v_msg_1725_, v___y_1727_);
v_a_1734_ = lean_ctor_get(v___x_1733_, 0);
lean_inc(v_a_1734_);
lean_dec_ref(v___x_1733_);
lean_inc(v_macroStack_1731_);
v___x_1735_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23___redArg(v_a_1734_, v_macroStack_1731_, v___y_1727_);
v_a_1736_ = lean_ctor_get(v___x_1735_, 0);
v_isSharedCheck_1744_ = !lean_is_exclusive(v___x_1735_);
if (v_isSharedCheck_1744_ == 0)
{
v___x_1738_ = v___x_1735_;
v_isShared_1739_ = v_isSharedCheck_1744_;
goto v_resetjp_1737_;
}
else
{
lean_inc(v_a_1736_);
lean_dec(v___x_1735_);
v___x_1738_ = lean_box(0);
v_isShared_1739_ = v_isSharedCheck_1744_;
goto v_resetjp_1737_;
}
v_resetjp_1737_:
{
lean_object* v___x_1740_; lean_object* v___x_1742_; 
v___x_1740_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1740_, 0, v___x_1732_);
lean_ctor_set(v___x_1740_, 1, v_a_1736_);
if (v_isShared_1739_ == 0)
{
lean_ctor_set_tag(v___x_1738_, 1);
lean_ctor_set(v___x_1738_, 0, v___x_1740_);
v___x_1742_ = v___x_1738_;
goto v_reusejp_1741_;
}
else
{
lean_object* v_reuseFailAlloc_1743_; 
v_reuseFailAlloc_1743_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1743_, 0, v___x_1740_);
v___x_1742_ = v_reuseFailAlloc_1743_;
goto v_reusejp_1741_;
}
v_reusejp_1741_:
{
return v___x_1742_;
}
}
}
else
{
lean_object* v_a_1745_; lean_object* v___x_1747_; uint8_t v_isShared_1748_; uint8_t v_isSharedCheck_1752_; 
lean_dec_ref(v_msg_1725_);
v_a_1745_ = lean_ctor_get(v___x_1729_, 0);
v_isSharedCheck_1752_ = !lean_is_exclusive(v___x_1729_);
if (v_isSharedCheck_1752_ == 0)
{
v___x_1747_ = v___x_1729_;
v_isShared_1748_ = v_isSharedCheck_1752_;
goto v_resetjp_1746_;
}
else
{
lean_inc(v_a_1745_);
lean_dec(v___x_1729_);
v___x_1747_ = lean_box(0);
v_isShared_1748_ = v_isSharedCheck_1752_;
goto v_resetjp_1746_;
}
v_resetjp_1746_:
{
lean_object* v___x_1750_; 
if (v_isShared_1748_ == 0)
{
v___x_1750_ = v___x_1747_;
goto v_reusejp_1749_;
}
else
{
lean_object* v_reuseFailAlloc_1751_; 
v_reuseFailAlloc_1751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1751_, 0, v_a_1745_);
v___x_1750_ = v_reuseFailAlloc_1751_;
goto v_reusejp_1749_;
}
v_reusejp_1749_:
{
return v___x_1750_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12___redArg___boxed(lean_object* v_msg_1753_, lean_object* v___y_1754_, lean_object* v___y_1755_, lean_object* v___y_1756_){
_start:
{
lean_object* v_res_1757_; 
v_res_1757_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12___redArg(v_msg_1753_, v___y_1754_, v___y_1755_);
lean_dec(v___y_1755_);
lean_dec_ref(v___y_1754_);
return v_res_1757_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6___redArg(lean_object* v_ref_1758_, lean_object* v_msg_1759_, lean_object* v___y_1760_, lean_object* v___y_1761_){
_start:
{
lean_object* v___x_1763_; 
v___x_1763_ = l_Lean_Elab_Command_getRef___redArg(v___y_1760_);
if (lean_obj_tag(v___x_1763_) == 0)
{
lean_object* v_a_1764_; lean_object* v_fileName_1765_; lean_object* v_fileMap_1766_; lean_object* v_currRecDepth_1767_; lean_object* v_cmdPos_1768_; lean_object* v_macroStack_1769_; lean_object* v_quotContext_x3f_1770_; lean_object* v_currMacroScope_1771_; lean_object* v_snap_x3f_1772_; lean_object* v_cancelTk_x3f_1773_; uint8_t v_suppressElabErrors_1774_; lean_object* v_ref_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; 
v_a_1764_ = lean_ctor_get(v___x_1763_, 0);
lean_inc(v_a_1764_);
lean_dec_ref_known(v___x_1763_, 1);
v_fileName_1765_ = lean_ctor_get(v___y_1760_, 0);
v_fileMap_1766_ = lean_ctor_get(v___y_1760_, 1);
v_currRecDepth_1767_ = lean_ctor_get(v___y_1760_, 2);
v_cmdPos_1768_ = lean_ctor_get(v___y_1760_, 3);
v_macroStack_1769_ = lean_ctor_get(v___y_1760_, 4);
v_quotContext_x3f_1770_ = lean_ctor_get(v___y_1760_, 5);
v_currMacroScope_1771_ = lean_ctor_get(v___y_1760_, 6);
v_snap_x3f_1772_ = lean_ctor_get(v___y_1760_, 8);
v_cancelTk_x3f_1773_ = lean_ctor_get(v___y_1760_, 9);
v_suppressElabErrors_1774_ = lean_ctor_get_uint8(v___y_1760_, sizeof(void*)*10);
v_ref_1775_ = l_Lean_replaceRef(v_ref_1758_, v_a_1764_);
lean_dec(v_a_1764_);
lean_inc(v_cancelTk_x3f_1773_);
lean_inc(v_snap_x3f_1772_);
lean_inc(v_currMacroScope_1771_);
lean_inc(v_quotContext_x3f_1770_);
lean_inc(v_macroStack_1769_);
lean_inc(v_cmdPos_1768_);
lean_inc(v_currRecDepth_1767_);
lean_inc_ref(v_fileMap_1766_);
lean_inc_ref(v_fileName_1765_);
v___x_1776_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v___x_1776_, 0, v_fileName_1765_);
lean_ctor_set(v___x_1776_, 1, v_fileMap_1766_);
lean_ctor_set(v___x_1776_, 2, v_currRecDepth_1767_);
lean_ctor_set(v___x_1776_, 3, v_cmdPos_1768_);
lean_ctor_set(v___x_1776_, 4, v_macroStack_1769_);
lean_ctor_set(v___x_1776_, 5, v_quotContext_x3f_1770_);
lean_ctor_set(v___x_1776_, 6, v_currMacroScope_1771_);
lean_ctor_set(v___x_1776_, 7, v_ref_1775_);
lean_ctor_set(v___x_1776_, 8, v_snap_x3f_1772_);
lean_ctor_set(v___x_1776_, 9, v_cancelTk_x3f_1773_);
lean_ctor_set_uint8(v___x_1776_, sizeof(void*)*10, v_suppressElabErrors_1774_);
v___x_1777_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12___redArg(v_msg_1759_, v___x_1776_, v___y_1761_);
lean_dec_ref_known(v___x_1776_, 10);
return v___x_1777_;
}
else
{
lean_object* v_a_1778_; lean_object* v___x_1780_; uint8_t v_isShared_1781_; uint8_t v_isSharedCheck_1785_; 
lean_dec_ref(v_msg_1759_);
v_a_1778_ = lean_ctor_get(v___x_1763_, 0);
v_isSharedCheck_1785_ = !lean_is_exclusive(v___x_1763_);
if (v_isSharedCheck_1785_ == 0)
{
v___x_1780_ = v___x_1763_;
v_isShared_1781_ = v_isSharedCheck_1785_;
goto v_resetjp_1779_;
}
else
{
lean_inc(v_a_1778_);
lean_dec(v___x_1763_);
v___x_1780_ = lean_box(0);
v_isShared_1781_ = v_isSharedCheck_1785_;
goto v_resetjp_1779_;
}
v_resetjp_1779_:
{
lean_object* v___x_1783_; 
if (v_isShared_1781_ == 0)
{
v___x_1783_ = v___x_1780_;
goto v_reusejp_1782_;
}
else
{
lean_object* v_reuseFailAlloc_1784_; 
v_reuseFailAlloc_1784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1784_, 0, v_a_1778_);
v___x_1783_ = v_reuseFailAlloc_1784_;
goto v_reusejp_1782_;
}
v_reusejp_1782_:
{
return v___x_1783_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6___redArg___boxed(lean_object* v_ref_1786_, lean_object* v_msg_1787_, lean_object* v___y_1788_, lean_object* v___y_1789_, lean_object* v___y_1790_){
_start:
{
lean_object* v_res_1791_; 
v_res_1791_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6___redArg(v_ref_1786_, v_msg_1787_, v___y_1788_, v___y_1789_);
lean_dec(v___y_1789_);
lean_dec_ref(v___y_1788_);
lean_dec(v_ref_1786_);
return v_res_1791_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__0(lean_object* v_env_1792_, lean_object* v_declName_1793_, lean_object* v___y_1794_, lean_object* v___y_1795_){
_start:
{
uint8_t v___x_1796_; lean_object* v_env_1797_; lean_object* v___x_1798_; uint8_t v___x_1799_; uint8_t v___x_1800_; 
v___x_1796_ = 0;
v_env_1797_ = l_Lean_Environment_setExporting(v_env_1792_, v___x_1796_);
lean_inc(v_declName_1793_);
v___x_1798_ = l_Lean_mkPrivateName(v_env_1797_, v_declName_1793_);
v___x_1799_ = 1;
lean_inc_ref(v_env_1797_);
v___x_1800_ = l_Lean_Environment_contains(v_env_1797_, v___x_1798_, v___x_1799_);
if (v___x_1800_ == 0)
{
lean_object* v___x_1801_; uint8_t v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; 
v___x_1801_ = l_Lean_privateToUserName(v_declName_1793_);
v___x_1802_ = l_Lean_Environment_contains(v_env_1797_, v___x_1801_, v___x_1799_);
v___x_1803_ = lean_box(v___x_1802_);
v___x_1804_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1804_, 0, v___x_1803_);
lean_ctor_set(v___x_1804_, 1, v___y_1795_);
return v___x_1804_;
}
else
{
lean_object* v___x_1805_; lean_object* v___x_1806_; 
lean_dec_ref(v_env_1797_);
lean_dec(v_declName_1793_);
v___x_1805_ = lean_box(v___x_1800_);
v___x_1806_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1806_, 0, v___x_1805_);
lean_ctor_set(v___x_1806_, 1, v___y_1795_);
return v___x_1806_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__0___boxed(lean_object* v_env_1807_, lean_object* v_declName_1808_, lean_object* v___y_1809_, lean_object* v___y_1810_){
_start:
{
lean_object* v_res_1811_; 
v_res_1811_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__0(v_env_1807_, v_declName_1808_, v___y_1809_, v___y_1810_);
lean_dec_ref(v___y_1809_);
return v_res_1811_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__2___redArg(lean_object* v_x_1812_, lean_object* v___y_1813_){
_start:
{
if (lean_obj_tag(v_x_1812_) == 0)
{
lean_object* v_a_1814_; lean_object* v___x_1815_; 
v_a_1814_ = lean_ctor_get(v_x_1812_, 0);
lean_inc(v_a_1814_);
v___x_1815_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1815_, 0, v_a_1814_);
lean_ctor_set(v___x_1815_, 1, v___y_1813_);
return v___x_1815_;
}
else
{
lean_object* v_a_1816_; lean_object* v___x_1817_; 
v_a_1816_ = lean_ctor_get(v_x_1812_, 0);
lean_inc(v_a_1816_);
v___x_1817_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1817_, 0, v_a_1816_);
lean_ctor_set(v___x_1817_, 1, v___y_1813_);
return v___x_1817_;
}
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__2___redArg___boxed(lean_object* v_x_1818_, lean_object* v___y_1819_){
_start:
{
lean_object* v_res_1820_; 
v_res_1820_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__2___redArg(v_x_1818_, v___y_1819_);
lean_dec_ref(v_x_1818_);
return v_res_1820_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__1(lean_object* v_env_1821_, lean_object* v_stx_1822_, lean_object* v___y_1823_, lean_object* v___y_1824_){
_start:
{
lean_object* v___x_1825_; 
v___x_1825_ = l_Lean_Elab_expandMacroImpl_x3f(v_env_1821_, v_stx_1822_, v___y_1823_, v___y_1824_);
if (lean_obj_tag(v___x_1825_) == 0)
{
lean_object* v_a_1826_; 
v_a_1826_ = lean_ctor_get(v___x_1825_, 0);
lean_inc(v_a_1826_);
if (lean_obj_tag(v_a_1826_) == 0)
{
lean_object* v_a_1827_; lean_object* v___x_1829_; uint8_t v_isShared_1830_; uint8_t v_isSharedCheck_1835_; 
v_a_1827_ = lean_ctor_get(v___x_1825_, 1);
v_isSharedCheck_1835_ = !lean_is_exclusive(v___x_1825_);
if (v_isSharedCheck_1835_ == 0)
{
lean_object* v_unused_1836_; 
v_unused_1836_ = lean_ctor_get(v___x_1825_, 0);
lean_dec(v_unused_1836_);
v___x_1829_ = v___x_1825_;
v_isShared_1830_ = v_isSharedCheck_1835_;
goto v_resetjp_1828_;
}
else
{
lean_inc(v_a_1827_);
lean_dec(v___x_1825_);
v___x_1829_ = lean_box(0);
v_isShared_1830_ = v_isSharedCheck_1835_;
goto v_resetjp_1828_;
}
v_resetjp_1828_:
{
lean_object* v___x_1831_; lean_object* v___x_1833_; 
v___x_1831_ = lean_box(0);
if (v_isShared_1830_ == 0)
{
lean_ctor_set(v___x_1829_, 0, v___x_1831_);
v___x_1833_ = v___x_1829_;
goto v_reusejp_1832_;
}
else
{
lean_object* v_reuseFailAlloc_1834_; 
v_reuseFailAlloc_1834_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1834_, 0, v___x_1831_);
lean_ctor_set(v_reuseFailAlloc_1834_, 1, v_a_1827_);
v___x_1833_ = v_reuseFailAlloc_1834_;
goto v_reusejp_1832_;
}
v_reusejp_1832_:
{
return v___x_1833_;
}
}
}
else
{
lean_object* v_val_1837_; lean_object* v___x_1839_; uint8_t v_isShared_1840_; uint8_t v_isSharedCheck_1865_; 
v_val_1837_ = lean_ctor_get(v_a_1826_, 0);
v_isSharedCheck_1865_ = !lean_is_exclusive(v_a_1826_);
if (v_isSharedCheck_1865_ == 0)
{
v___x_1839_ = v_a_1826_;
v_isShared_1840_ = v_isSharedCheck_1865_;
goto v_resetjp_1838_;
}
else
{
lean_inc(v_val_1837_);
lean_dec(v_a_1826_);
v___x_1839_ = lean_box(0);
v_isShared_1840_ = v_isSharedCheck_1865_;
goto v_resetjp_1838_;
}
v_resetjp_1838_:
{
lean_object* v_snd_1841_; 
v_snd_1841_ = lean_ctor_get(v_val_1837_, 1);
lean_inc(v_snd_1841_);
lean_dec(v_val_1837_);
if (lean_obj_tag(v_snd_1841_) == 0)
{
lean_object* v_a_1842_; lean_object* v_a_1843_; lean_object* v___x_1845_; uint8_t v_isShared_1846_; uint8_t v_isSharedCheck_1851_; 
lean_del_object(v___x_1839_);
v_a_1842_ = lean_ctor_get(v___x_1825_, 1);
lean_inc(v_a_1842_);
lean_dec_ref_known(v___x_1825_, 2);
v_a_1843_ = lean_ctor_get(v_snd_1841_, 0);
v_isSharedCheck_1851_ = !lean_is_exclusive(v_snd_1841_);
if (v_isSharedCheck_1851_ == 0)
{
v___x_1845_ = v_snd_1841_;
v_isShared_1846_ = v_isSharedCheck_1851_;
goto v_resetjp_1844_;
}
else
{
lean_inc(v_a_1843_);
lean_dec(v_snd_1841_);
v___x_1845_ = lean_box(0);
v_isShared_1846_ = v_isSharedCheck_1851_;
goto v_resetjp_1844_;
}
v_resetjp_1844_:
{
lean_object* v___x_1848_; 
if (v_isShared_1846_ == 0)
{
v___x_1848_ = v___x_1845_;
goto v_reusejp_1847_;
}
else
{
lean_object* v_reuseFailAlloc_1850_; 
v_reuseFailAlloc_1850_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1850_, 0, v_a_1843_);
v___x_1848_ = v_reuseFailAlloc_1850_;
goto v_reusejp_1847_;
}
v_reusejp_1847_:
{
lean_object* v___x_1849_; 
v___x_1849_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__2___redArg(v___x_1848_, v_a_1842_);
lean_dec_ref(v___x_1848_);
return v___x_1849_;
}
}
}
else
{
lean_object* v_a_1852_; lean_object* v_a_1853_; lean_object* v___x_1855_; uint8_t v_isShared_1856_; uint8_t v_isSharedCheck_1864_; 
v_a_1852_ = lean_ctor_get(v___x_1825_, 1);
lean_inc(v_a_1852_);
lean_dec_ref_known(v___x_1825_, 2);
v_a_1853_ = lean_ctor_get(v_snd_1841_, 0);
v_isSharedCheck_1864_ = !lean_is_exclusive(v_snd_1841_);
if (v_isSharedCheck_1864_ == 0)
{
v___x_1855_ = v_snd_1841_;
v_isShared_1856_ = v_isSharedCheck_1864_;
goto v_resetjp_1854_;
}
else
{
lean_inc(v_a_1853_);
lean_dec(v_snd_1841_);
v___x_1855_ = lean_box(0);
v_isShared_1856_ = v_isSharedCheck_1864_;
goto v_resetjp_1854_;
}
v_resetjp_1854_:
{
lean_object* v___x_1858_; 
if (v_isShared_1840_ == 0)
{
lean_ctor_set(v___x_1839_, 0, v_a_1853_);
v___x_1858_ = v___x_1839_;
goto v_reusejp_1857_;
}
else
{
lean_object* v_reuseFailAlloc_1863_; 
v_reuseFailAlloc_1863_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1863_, 0, v_a_1853_);
v___x_1858_ = v_reuseFailAlloc_1863_;
goto v_reusejp_1857_;
}
v_reusejp_1857_:
{
lean_object* v___x_1860_; 
if (v_isShared_1856_ == 0)
{
lean_ctor_set(v___x_1855_, 0, v___x_1858_);
v___x_1860_ = v___x_1855_;
goto v_reusejp_1859_;
}
else
{
lean_object* v_reuseFailAlloc_1862_; 
v_reuseFailAlloc_1862_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1862_, 0, v___x_1858_);
v___x_1860_ = v_reuseFailAlloc_1862_;
goto v_reusejp_1859_;
}
v_reusejp_1859_:
{
lean_object* v___x_1861_; 
v___x_1861_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__2___redArg(v___x_1860_, v_a_1852_);
lean_dec_ref(v___x_1860_);
return v___x_1861_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1866_; lean_object* v_a_1867_; lean_object* v___x_1869_; uint8_t v_isShared_1870_; uint8_t v_isSharedCheck_1874_; 
v_a_1866_ = lean_ctor_get(v___x_1825_, 0);
v_a_1867_ = lean_ctor_get(v___x_1825_, 1);
v_isSharedCheck_1874_ = !lean_is_exclusive(v___x_1825_);
if (v_isSharedCheck_1874_ == 0)
{
v___x_1869_ = v___x_1825_;
v_isShared_1870_ = v_isSharedCheck_1874_;
goto v_resetjp_1868_;
}
else
{
lean_inc(v_a_1867_);
lean_inc(v_a_1866_);
lean_dec(v___x_1825_);
v___x_1869_ = lean_box(0);
v_isShared_1870_ = v_isSharedCheck_1874_;
goto v_resetjp_1868_;
}
v_resetjp_1868_:
{
lean_object* v___x_1872_; 
if (v_isShared_1870_ == 0)
{
v___x_1872_ = v___x_1869_;
goto v_reusejp_1871_;
}
else
{
lean_object* v_reuseFailAlloc_1873_; 
v_reuseFailAlloc_1873_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1873_, 0, v_a_1866_);
lean_ctor_set(v_reuseFailAlloc_1873_, 1, v_a_1867_);
v___x_1872_ = v_reuseFailAlloc_1873_;
goto v_reusejp_1871_;
}
v_reusejp_1871_:
{
return v___x_1872_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__1___boxed(lean_object* v_env_1875_, lean_object* v_stx_1876_, lean_object* v___y_1877_, lean_object* v___y_1878_){
_start:
{
lean_object* v_res_1879_; 
v_res_1879_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__1(v_env_1875_, v_stx_1876_, v___y_1877_, v___y_1878_);
lean_dec_ref(v___y_1877_);
return v_res_1879_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__3(void){
_start:
{
lean_object* v___x_1885_; lean_object* v___x_1886_; 
v___x_1885_ = l_Lean_maxRecDepthErrorMessage;
v___x_1886_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1886_, 0, v___x_1885_);
return v___x_1886_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__4(void){
_start:
{
lean_object* v___x_1887_; lean_object* v___x_1888_; 
v___x_1887_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__3);
v___x_1888_ = l_Lean_MessageData_ofFormat(v___x_1887_);
return v___x_1888_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__5(void){
_start:
{
lean_object* v___x_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; 
v___x_1889_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__4);
v___x_1890_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__2));
v___x_1891_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1891_, 0, v___x_1890_);
lean_ctor_set(v___x_1891_, 1, v___x_1889_);
return v___x_1891_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg(lean_object* v_ref_1892_){
_start:
{
lean_object* v___x_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; 
v___x_1894_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__5);
v___x_1895_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1895_, 0, v_ref_1892_);
lean_ctor_set(v___x_1895_, 1, v___x_1894_);
v___x_1896_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1896_, 0, v___x_1895_);
return v___x_1896_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___boxed(lean_object* v_ref_1897_, lean_object* v___y_1898_){
_start:
{
lean_object* v_res_1899_; 
v_res_1899_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg(v_ref_1897_);
return v_res_1899_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19_spec__23___redArg(lean_object* v_keys_1900_, lean_object* v_i_1901_, lean_object* v_k_1902_){
_start:
{
lean_object* v___x_1903_; uint8_t v___x_1904_; 
v___x_1903_ = lean_array_get_size(v_keys_1900_);
v___x_1904_ = lean_nat_dec_lt(v_i_1901_, v___x_1903_);
if (v___x_1904_ == 0)
{
lean_dec(v_i_1901_);
return v___x_1904_;
}
else
{
lean_object* v_k_x27_1905_; uint8_t v___x_1906_; 
v_k_x27_1905_ = lean_array_fget_borrowed(v_keys_1900_, v_i_1901_);
v___x_1906_ = l_Lean_instBEqExtraModUse_beq(v_k_1902_, v_k_x27_1905_);
if (v___x_1906_ == 0)
{
lean_object* v___x_1907_; lean_object* v___x_1908_; 
v___x_1907_ = lean_unsigned_to_nat(1u);
v___x_1908_ = lean_nat_add(v_i_1901_, v___x_1907_);
lean_dec(v_i_1901_);
v_i_1901_ = v___x_1908_;
goto _start;
}
else
{
lean_dec(v_i_1901_);
return v___x_1904_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19_spec__23___redArg___boxed(lean_object* v_keys_1910_, lean_object* v_i_1911_, lean_object* v_k_1912_){
_start:
{
uint8_t v_res_1913_; lean_object* v_r_1914_; 
v_res_1913_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19_spec__23___redArg(v_keys_1910_, v_i_1911_, v_k_1912_);
lean_dec_ref(v_k_1912_);
lean_dec_ref(v_keys_1910_);
v_r_1914_ = lean_box(v_res_1913_);
return v_r_1914_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19___redArg(lean_object* v_x_1915_, size_t v_x_1916_, lean_object* v_x_1917_){
_start:
{
if (lean_obj_tag(v_x_1915_) == 0)
{
lean_object* v_es_1918_; lean_object* v___x_1919_; size_t v___x_1920_; size_t v___x_1921_; lean_object* v_j_1922_; lean_object* v___x_1923_; 
v_es_1918_ = lean_ctor_get(v_x_1915_, 0);
v___x_1919_ = lean_box(2);
v___x_1920_ = ((size_t)31ULL);
v___x_1921_ = lean_usize_land(v_x_1916_, v___x_1920_);
v_j_1922_ = lean_usize_to_nat(v___x_1921_);
v___x_1923_ = lean_array_get_borrowed(v___x_1919_, v_es_1918_, v_j_1922_);
lean_dec(v_j_1922_);
switch(lean_obj_tag(v___x_1923_))
{
case 0:
{
lean_object* v_key_1924_; uint8_t v___x_1925_; 
v_key_1924_ = lean_ctor_get(v___x_1923_, 0);
v___x_1925_ = l_Lean_instBEqExtraModUse_beq(v_x_1917_, v_key_1924_);
return v___x_1925_;
}
case 1:
{
lean_object* v_node_1926_; size_t v___x_1927_; size_t v___x_1928_; 
v_node_1926_ = lean_ctor_get(v___x_1923_, 0);
v___x_1927_ = ((size_t)5ULL);
v___x_1928_ = lean_usize_shift_right(v_x_1916_, v___x_1927_);
v_x_1915_ = v_node_1926_;
v_x_1916_ = v___x_1928_;
goto _start;
}
default: 
{
uint8_t v___x_1930_; 
v___x_1930_ = 0;
return v___x_1930_;
}
}
}
else
{
lean_object* v_ks_1931_; lean_object* v___x_1932_; uint8_t v___x_1933_; 
v_ks_1931_ = lean_ctor_get(v_x_1915_, 0);
v___x_1932_ = lean_unsigned_to_nat(0u);
v___x_1933_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19_spec__23___redArg(v_ks_1931_, v___x_1932_, v_x_1917_);
return v___x_1933_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19___redArg___boxed(lean_object* v_x_1934_, lean_object* v_x_1935_, lean_object* v_x_1936_){
_start:
{
size_t v_x_21201__boxed_1937_; uint8_t v_res_1938_; lean_object* v_r_1939_; 
v_x_21201__boxed_1937_ = lean_unbox_usize(v_x_1935_);
lean_dec(v_x_1935_);
v_res_1938_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19___redArg(v_x_1934_, v_x_21201__boxed_1937_, v_x_1936_);
lean_dec_ref(v_x_1936_);
lean_dec_ref(v_x_1934_);
v_r_1939_ = lean_box(v_res_1938_);
return v_r_1939_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15___redArg(lean_object* v_x_1940_, lean_object* v_x_1941_){
_start:
{
uint64_t v___x_1942_; size_t v___x_1943_; uint8_t v___x_1944_; 
v___x_1942_ = l_Lean_instHashableExtraModUse_hash(v_x_1941_);
v___x_1943_ = lean_uint64_to_usize(v___x_1942_);
v___x_1944_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19___redArg(v_x_1940_, v___x_1943_, v_x_1941_);
return v___x_1944_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15___redArg___boxed(lean_object* v_x_1945_, lean_object* v_x_1946_){
_start:
{
uint8_t v_res_1947_; lean_object* v_r_1948_; 
v_res_1947_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15___redArg(v_x_1945_, v_x_1946_);
lean_dec_ref(v_x_1946_);
lean_dec_ref(v_x_1945_);
v_r_1948_ = lean_box(v_res_1947_);
return v_r_1948_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__0(void){
_start:
{
lean_object* v___x_1949_; 
v___x_1949_ = l_Lean_PersistentHashMap_empty___redArg();
return v___x_1949_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__4(void){
_start:
{
lean_object* v___x_1954_; lean_object* v___x_1955_; 
v___x_1954_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__3));
v___x_1955_ = l_Lean_stringToMessageData(v___x_1954_);
return v___x_1955_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__6(void){
_start:
{
lean_object* v___x_1957_; lean_object* v___x_1958_; 
v___x_1957_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__5));
v___x_1958_ = l_Lean_stringToMessageData(v___x_1957_);
return v___x_1958_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__7(void){
_start:
{
lean_object* v___x_1959_; lean_object* v___x_1960_; 
v___x_1959_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__54));
v___x_1960_ = l_Lean_stringToMessageData(v___x_1959_);
return v___x_1960_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__8(void){
_start:
{
lean_object* v_cls_1961_; lean_object* v___x_1962_; lean_object* v___x_1963_; 
v_cls_1961_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__2));
v___x_1962_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6_spec__13___closed__1));
v___x_1963_ = l_Lean_Name_append(v___x_1962_, v_cls_1961_);
return v___x_1963_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__10(void){
_start:
{
lean_object* v___x_1965_; lean_object* v___x_1966_; 
v___x_1965_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__9));
v___x_1966_ = l_Lean_stringToMessageData(v___x_1965_);
return v___x_1966_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__12(void){
_start:
{
lean_object* v___x_1968_; lean_object* v___x_1969_; 
v___x_1968_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__11));
v___x_1969_ = l_Lean_stringToMessageData(v___x_1968_);
return v___x_1969_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6(lean_object* v_mod_1974_, uint8_t v_isMeta_1975_, lean_object* v_hint_1976_, lean_object* v___y_1977_, lean_object* v___y_1978_){
_start:
{
lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v_env_1982_; uint8_t v_isExporting_1983_; lean_object* v_entry_1984_; lean_object* v___x_1985_; lean_object* v_env_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; lean_object* v___y_1991_; lean_object* v___x_2019_; uint8_t v___x_2020_; 
v___x_1980_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__0);
v___x_1981_ = lean_st_ref_get(v___y_1978_);
v_env_1982_ = lean_ctor_get(v___x_1981_, 0);
lean_inc_ref(v_env_1982_);
lean_dec(v___x_1981_);
v_isExporting_1983_ = lean_ctor_get_uint8(v_env_1982_, sizeof(void*)*8);
lean_dec_ref(v_env_1982_);
lean_inc(v_mod_1974_);
v_entry_1984_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_1984_, 0, v_mod_1974_);
lean_ctor_set_uint8(v_entry_1984_, sizeof(void*)*1, v_isExporting_1983_);
lean_ctor_set_uint8(v_entry_1984_, sizeof(void*)*1 + 1, v_isMeta_1975_);
v___x_1985_ = lean_st_ref_get(v___y_1978_);
v_env_1986_ = lean_ctor_get(v___x_1985_, 0);
lean_inc_ref(v_env_1986_);
lean_dec(v___x_1985_);
v___x_1987_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_1988_ = lean_box(1);
v___x_1989_ = lean_obj_once(&l_Lean_Elab_Command_mkUnexpander___closed__56, &l_Lean_Elab_Command_mkUnexpander___closed__56_once, _init_l_Lean_Elab_Command_mkUnexpander___closed__56);
v___x_2019_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1980_, v___x_1987_, v_env_1986_, v___x_1988_, v___x_1989_);
v___x_2020_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15___redArg(v___x_2019_, v_entry_1984_);
lean_dec(v___x_2019_);
if (v___x_2020_ == 0)
{
lean_object* v_cls_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; lean_object* v___y_2027_; lean_object* v___y_2028_; lean_object* v___y_2032_; lean_object* v___y_2033_; lean_object* v_scopes_2045_; lean_object* v___x_2046_; lean_object* v_opts_2047_; uint8_t v_hasTrace_2048_; 
v_cls_2021_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__2));
v___x_2022_ = l_Lean_inheritedTraceOptions;
v___x_2023_ = lean_st_ref_get(v___x_2022_);
v___x_2024_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_2025_ = lean_st_ref_get(v___y_1978_);
v_scopes_2045_ = lean_ctor_get(v___x_2025_, 2);
lean_inc(v_scopes_2045_);
lean_dec(v___x_2025_);
v___x_2046_ = l_List_head_x21___redArg(v___x_2024_, v_scopes_2045_);
lean_dec(v_scopes_2045_);
v_opts_2047_ = lean_ctor_get(v___x_2046_, 1);
lean_inc_ref(v_opts_2047_);
lean_dec(v___x_2046_);
v_hasTrace_2048_ = lean_ctor_get_uint8(v_opts_2047_, sizeof(void*)*1);
if (v_hasTrace_2048_ == 0)
{
lean_dec_ref(v_opts_2047_);
lean_dec(v___x_2023_);
lean_dec(v_hint_1976_);
lean_dec(v_mod_1974_);
v___y_1991_ = v___y_1978_;
goto v___jp_1990_;
}
else
{
lean_object* v___x_2049_; uint8_t v___x_2050_; 
v___x_2049_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__8, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__8_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__8);
v___x_2050_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_2023_, v_opts_2047_, v___x_2049_);
lean_dec_ref(v_opts_2047_);
lean_dec(v___x_2023_);
if (v___x_2050_ == 0)
{
lean_dec(v_hint_1976_);
lean_dec(v_mod_1974_);
v___y_1991_ = v___y_1978_;
goto v___jp_1990_;
}
else
{
lean_object* v___x_2051_; lean_object* v___y_2053_; 
v___x_2051_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__10, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__10_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__10);
if (v_isExporting_1983_ == 0)
{
lean_object* v___x_2060_; 
v___x_2060_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__15));
v___y_2053_ = v___x_2060_;
goto v___jp_2052_;
}
else
{
lean_object* v___x_2061_; 
v___x_2061_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__16));
v___y_2053_ = v___x_2061_;
goto v___jp_2052_;
}
v___jp_2052_:
{
lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; 
lean_inc_ref(v___y_2053_);
v___x_2054_ = l_Lean_stringToMessageData(v___y_2053_);
v___x_2055_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2055_, 0, v___x_2051_);
lean_ctor_set(v___x_2055_, 1, v___x_2054_);
v___x_2056_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__12, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__12_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__12);
v___x_2057_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2057_, 0, v___x_2055_);
lean_ctor_set(v___x_2057_, 1, v___x_2056_);
if (v_isMeta_1975_ == 0)
{
lean_object* v___x_2058_; 
v___x_2058_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__13));
v___y_2032_ = v___x_2057_;
v___y_2033_ = v___x_2058_;
goto v___jp_2031_;
}
else
{
lean_object* v___x_2059_; 
v___x_2059_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__14));
v___y_2032_ = v___x_2057_;
v___y_2033_ = v___x_2059_;
goto v___jp_2031_;
}
}
}
}
v___jp_2026_:
{
lean_object* v___x_2029_; lean_object* v___x_2030_; 
v___x_2029_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2029_, 0, v___y_2027_);
lean_ctor_set(v___x_2029_, 1, v___y_2028_);
v___x_2030_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1(v_cls_2021_, v___x_2029_, v___y_1977_, v___y_1978_);
if (lean_obj_tag(v___x_2030_) == 0)
{
lean_dec_ref_known(v___x_2030_, 1);
v___y_1991_ = v___y_1978_;
goto v___jp_1990_;
}
else
{
lean_dec_ref_known(v_entry_1984_, 1);
return v___x_2030_;
}
}
v___jp_2031_:
{
lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; uint8_t v___x_2040_; 
lean_inc_ref(v___y_2033_);
v___x_2034_ = l_Lean_stringToMessageData(v___y_2033_);
v___x_2035_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2035_, 0, v___y_2032_);
lean_ctor_set(v___x_2035_, 1, v___x_2034_);
v___x_2036_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__4, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__4_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__4);
v___x_2037_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2037_, 0, v___x_2035_);
lean_ctor_set(v___x_2037_, 1, v___x_2036_);
v___x_2038_ = l_Lean_MessageData_ofName(v_mod_1974_);
v___x_2039_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2039_, 0, v___x_2037_);
lean_ctor_set(v___x_2039_, 1, v___x_2038_);
v___x_2040_ = l_Lean_Name_isAnonymous(v_hint_1976_);
if (v___x_2040_ == 0)
{
lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; 
v___x_2041_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__6, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__6_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__6);
v___x_2042_ = l_Lean_MessageData_ofName(v_hint_1976_);
v___x_2043_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2043_, 0, v___x_2041_);
lean_ctor_set(v___x_2043_, 1, v___x_2042_);
v___y_2027_ = v___x_2039_;
v___y_2028_ = v___x_2043_;
goto v___jp_2026_;
}
else
{
lean_object* v___x_2044_; 
lean_dec(v_hint_1976_);
v___x_2044_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__7, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__7_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__7);
v___y_2027_ = v___x_2039_;
v___y_2028_ = v___x_2044_;
goto v___jp_2026_;
}
}
}
else
{
lean_object* v___x_2062_; lean_object* v___x_2063_; 
lean_dec_ref_known(v_entry_1984_, 1);
lean_dec(v_hint_1976_);
lean_dec(v_mod_1974_);
v___x_2062_ = lean_box(0);
v___x_2063_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2063_, 0, v___x_2062_);
return v___x_2063_;
}
v___jp_1990_:
{
lean_object* v___x_1992_; lean_object* v_toEnvExtension_1993_; lean_object* v_env_1994_; lean_object* v_messages_1995_; lean_object* v_scopes_1996_; lean_object* v_usedQuotCtxts_1997_; lean_object* v_nextMacroScope_1998_; lean_object* v_maxRecDepth_1999_; lean_object* v_ngen_2000_; lean_object* v_auxDeclNGen_2001_; lean_object* v_infoState_2002_; lean_object* v_traceState_2003_; lean_object* v_snapshotTasks_2004_; lean_object* v_prevLinterStates_2005_; lean_object* v_codeQualityEntryTasks_2006_; lean_object* v___x_2008_; uint8_t v_isShared_2009_; uint8_t v_isSharedCheck_2018_; 
v___x_1992_ = lean_st_ref_take(v___y_1991_);
v_toEnvExtension_1993_ = lean_ctor_get(v___x_1987_, 0);
v_env_1994_ = lean_ctor_get(v___x_1992_, 0);
v_messages_1995_ = lean_ctor_get(v___x_1992_, 1);
v_scopes_1996_ = lean_ctor_get(v___x_1992_, 2);
v_usedQuotCtxts_1997_ = lean_ctor_get(v___x_1992_, 3);
v_nextMacroScope_1998_ = lean_ctor_get(v___x_1992_, 4);
v_maxRecDepth_1999_ = lean_ctor_get(v___x_1992_, 5);
v_ngen_2000_ = lean_ctor_get(v___x_1992_, 6);
v_auxDeclNGen_2001_ = lean_ctor_get(v___x_1992_, 7);
v_infoState_2002_ = lean_ctor_get(v___x_1992_, 8);
v_traceState_2003_ = lean_ctor_get(v___x_1992_, 9);
v_snapshotTasks_2004_ = lean_ctor_get(v___x_1992_, 10);
v_prevLinterStates_2005_ = lean_ctor_get(v___x_1992_, 11);
v_codeQualityEntryTasks_2006_ = lean_ctor_get(v___x_1992_, 12);
v_isSharedCheck_2018_ = !lean_is_exclusive(v___x_1992_);
if (v_isSharedCheck_2018_ == 0)
{
v___x_2008_ = v___x_1992_;
v_isShared_2009_ = v_isSharedCheck_2018_;
goto v_resetjp_2007_;
}
else
{
lean_inc(v_codeQualityEntryTasks_2006_);
lean_inc(v_prevLinterStates_2005_);
lean_inc(v_snapshotTasks_2004_);
lean_inc(v_traceState_2003_);
lean_inc(v_infoState_2002_);
lean_inc(v_auxDeclNGen_2001_);
lean_inc(v_ngen_2000_);
lean_inc(v_maxRecDepth_1999_);
lean_inc(v_nextMacroScope_1998_);
lean_inc(v_usedQuotCtxts_1997_);
lean_inc(v_scopes_1996_);
lean_inc(v_messages_1995_);
lean_inc(v_env_1994_);
lean_dec(v___x_1992_);
v___x_2008_ = lean_box(0);
v_isShared_2009_ = v_isSharedCheck_2018_;
goto v_resetjp_2007_;
}
v_resetjp_2007_:
{
lean_object* v_asyncMode_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; lean_object* v___x_2014_; 
v_asyncMode_2010_ = lean_ctor_get(v_toEnvExtension_1993_, 2);
v___x_2011_ = lean_box(0);
v___x_2012_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_1987_, v_env_1994_, v_entry_1984_, v_asyncMode_2010_, v___x_1989_);
if (v_isShared_2009_ == 0)
{
lean_ctor_set(v___x_2008_, 0, v___x_2012_);
v___x_2014_ = v___x_2008_;
goto v_reusejp_2013_;
}
else
{
lean_object* v_reuseFailAlloc_2017_; 
v_reuseFailAlloc_2017_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_2017_, 0, v___x_2012_);
lean_ctor_set(v_reuseFailAlloc_2017_, 1, v_messages_1995_);
lean_ctor_set(v_reuseFailAlloc_2017_, 2, v_scopes_1996_);
lean_ctor_set(v_reuseFailAlloc_2017_, 3, v_usedQuotCtxts_1997_);
lean_ctor_set(v_reuseFailAlloc_2017_, 4, v_nextMacroScope_1998_);
lean_ctor_set(v_reuseFailAlloc_2017_, 5, v_maxRecDepth_1999_);
lean_ctor_set(v_reuseFailAlloc_2017_, 6, v_ngen_2000_);
lean_ctor_set(v_reuseFailAlloc_2017_, 7, v_auxDeclNGen_2001_);
lean_ctor_set(v_reuseFailAlloc_2017_, 8, v_infoState_2002_);
lean_ctor_set(v_reuseFailAlloc_2017_, 9, v_traceState_2003_);
lean_ctor_set(v_reuseFailAlloc_2017_, 10, v_snapshotTasks_2004_);
lean_ctor_set(v_reuseFailAlloc_2017_, 11, v_prevLinterStates_2005_);
lean_ctor_set(v_reuseFailAlloc_2017_, 12, v_codeQualityEntryTasks_2006_);
v___x_2014_ = v_reuseFailAlloc_2017_;
goto v_reusejp_2013_;
}
v_reusejp_2013_:
{
lean_object* v___x_2015_; lean_object* v___x_2016_; 
v___x_2015_ = lean_st_ref_put(v___y_1991_, v___x_2014_);
v___x_2016_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2016_, 0, v___x_2011_);
return v___x_2016_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___boxed(lean_object* v_mod_2064_, lean_object* v_isMeta_2065_, lean_object* v_hint_2066_, lean_object* v___y_2067_, lean_object* v___y_2068_, lean_object* v___y_2069_){
_start:
{
uint8_t v_isMeta_boxed_2070_; lean_object* v_res_2071_; 
v_isMeta_boxed_2070_ = lean_unbox(v_isMeta_2065_);
v_res_2071_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6(v_mod_2064_, v_isMeta_boxed_2070_, v_hint_2066_, v___y_2067_, v___y_2068_);
lean_dec(v___y_2068_);
lean_dec_ref(v___y_2067_);
return v_res_2071_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__7(lean_object* v___x_2072_, lean_object* v_declName_2073_, lean_object* v_as_2074_, size_t v_sz_2075_, size_t v_i_2076_, lean_object* v_b_2077_, lean_object* v___y_2078_, lean_object* v___y_2079_){
_start:
{
uint8_t v___x_2081_; 
v___x_2081_ = lean_usize_dec_lt(v_i_2076_, v_sz_2075_);
if (v___x_2081_ == 0)
{
lean_object* v___x_2082_; 
lean_dec(v_declName_2073_);
v___x_2082_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2082_, 0, v_b_2077_);
return v___x_2082_;
}
else
{
lean_object* v___x_2083_; lean_object* v_modules_2084_; lean_object* v___x_2085_; lean_object* v_a_2086_; lean_object* v___x_2087_; lean_object* v_toImport_2088_; lean_object* v_module_2089_; lean_object* v___x_2090_; uint8_t v___x_2091_; lean_object* v___x_2092_; 
v___x_2083_ = l_Lean_Environment_header(v___x_2072_);
v_modules_2084_ = lean_ctor_get(v___x_2083_, 3);
lean_inc_ref(v_modules_2084_);
lean_dec_ref(v___x_2083_);
v___x_2085_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_2086_ = lean_array_uget_borrowed(v_as_2074_, v_i_2076_);
v___x_2087_ = lean_array_get(v___x_2085_, v_modules_2084_, v_a_2086_);
lean_dec_ref(v_modules_2084_);
v_toImport_2088_ = lean_ctor_get(v___x_2087_, 0);
lean_inc_ref(v_toImport_2088_);
lean_dec(v___x_2087_);
v_module_2089_ = lean_ctor_get(v_toImport_2088_, 0);
lean_inc(v_module_2089_);
lean_dec_ref(v_toImport_2088_);
v___x_2090_ = lean_box(0);
v___x_2091_ = 0;
lean_inc(v_declName_2073_);
v___x_2092_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6(v_module_2089_, v___x_2091_, v_declName_2073_, v___y_2078_, v___y_2079_);
if (lean_obj_tag(v___x_2092_) == 0)
{
size_t v___x_2093_; size_t v___x_2094_; 
lean_dec_ref_known(v___x_2092_, 1);
v___x_2093_ = ((size_t)1ULL);
v___x_2094_ = lean_usize_add(v_i_2076_, v___x_2093_);
v_i_2076_ = v___x_2094_;
v_b_2077_ = v___x_2090_;
goto _start;
}
else
{
lean_dec(v_declName_2073_);
return v___x_2092_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__7___boxed(lean_object* v___x_2096_, lean_object* v_declName_2097_, lean_object* v_as_2098_, lean_object* v_sz_2099_, lean_object* v_i_2100_, lean_object* v_b_2101_, lean_object* v___y_2102_, lean_object* v___y_2103_, lean_object* v___y_2104_){
_start:
{
size_t v_sz_boxed_2105_; size_t v_i_boxed_2106_; lean_object* v_res_2107_; 
v_sz_boxed_2105_ = lean_unbox_usize(v_sz_2099_);
lean_dec(v_sz_2099_);
v_i_boxed_2106_ = lean_unbox_usize(v_i_2100_);
lean_dec(v_i_2100_);
v_res_2107_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__7(v___x_2096_, v_declName_2097_, v_as_2098_, v_sz_boxed_2105_, v_i_boxed_2106_, v_b_2101_, v___y_2102_, v___y_2103_);
lean_dec(v___y_2103_);
lean_dec_ref(v___y_2102_);
lean_dec_ref(v_as_2098_);
lean_dec_ref(v___x_2096_);
return v_res_2107_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8_spec__18___redArg(lean_object* v_a_2108_, lean_object* v_x_2109_){
_start:
{
if (lean_obj_tag(v_x_2109_) == 0)
{
lean_object* v___x_2110_; 
v___x_2110_ = lean_box(0);
return v___x_2110_;
}
else
{
lean_object* v_key_2111_; lean_object* v_value_2112_; lean_object* v_tail_2113_; uint8_t v___x_2114_; 
v_key_2111_ = lean_ctor_get(v_x_2109_, 0);
v_value_2112_ = lean_ctor_get(v_x_2109_, 1);
v_tail_2113_ = lean_ctor_get(v_x_2109_, 2);
v___x_2114_ = lean_name_eq(v_key_2111_, v_a_2108_);
if (v___x_2114_ == 0)
{
v_x_2109_ = v_tail_2113_;
goto _start;
}
else
{
lean_object* v___x_2116_; 
lean_inc(v_value_2112_);
v___x_2116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2116_, 0, v_value_2112_);
return v___x_2116_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8_spec__18___redArg___boxed(lean_object* v_a_2117_, lean_object* v_x_2118_){
_start:
{
lean_object* v_res_2119_; 
v_res_2119_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8_spec__18___redArg(v_a_2117_, v_x_2118_);
lean_dec(v_x_2118_);
lean_dec(v_a_2117_);
return v_res_2119_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8___redArg(lean_object* v_m_2120_, lean_object* v_a_2121_){
_start:
{
lean_object* v_buckets_2122_; lean_object* v___x_2123_; uint64_t v___y_2125_; lean_object* v___x_2139_; 
v_buckets_2122_ = lean_ctor_get(v_m_2120_, 1);
v___x_2123_ = lean_array_get_size(v_buckets_2122_);
v___x_2139_ = l_unsafeCast___redArg(v_a_2121_);
if (lean_obj_tag(v___x_2139_) == 0)
{
uint64_t v___x_2140_; 
v___x_2140_ = 1723ULL;
v___y_2125_ = v___x_2140_;
goto v___jp_2124_;
}
else
{
uint64_t v_hash_2141_; 
v_hash_2141_ = lean_ctor_get_uint64(v___x_2139_, sizeof(void*)*2);
lean_dec(v___x_2139_);
v___y_2125_ = v_hash_2141_;
goto v___jp_2124_;
}
v___jp_2124_:
{
uint64_t v___x_2126_; uint64_t v___x_2127_; uint64_t v_fold_2128_; uint64_t v___x_2129_; uint64_t v___x_2130_; uint64_t v___x_2131_; size_t v___x_2132_; size_t v___x_2133_; size_t v___x_2134_; size_t v___x_2135_; size_t v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; 
v___x_2126_ = 32ULL;
v___x_2127_ = lean_uint64_shift_right(v___y_2125_, v___x_2126_);
v_fold_2128_ = lean_uint64_xor(v___y_2125_, v___x_2127_);
v___x_2129_ = 16ULL;
v___x_2130_ = lean_uint64_shift_right(v_fold_2128_, v___x_2129_);
v___x_2131_ = lean_uint64_xor(v_fold_2128_, v___x_2130_);
v___x_2132_ = lean_uint64_to_usize(v___x_2131_);
v___x_2133_ = lean_usize_of_nat(v___x_2123_);
v___x_2134_ = ((size_t)1ULL);
v___x_2135_ = lean_usize_sub(v___x_2133_, v___x_2134_);
v___x_2136_ = lean_usize_land(v___x_2132_, v___x_2135_);
v___x_2137_ = lean_array_uget_borrowed(v_buckets_2122_, v___x_2136_);
v___x_2138_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8_spec__18___redArg(v_a_2121_, v___x_2137_);
return v___x_2138_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8___redArg___boxed(lean_object* v_m_2142_, lean_object* v_a_2143_){
_start:
{
lean_object* v_res_2144_; 
v_res_2144_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8___redArg(v_m_2142_, v_a_2143_);
lean_dec(v_a_2143_);
lean_dec_ref(v_m_2142_);
return v_res_2144_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3___closed__0(void){
_start:
{
lean_object* v___x_2145_; 
v___x_2145_ = l_Std_HashMap_instInhabited___redArg();
return v___x_2145_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3(lean_object* v_declName_2148_, uint8_t v_isMeta_2149_, lean_object* v___y_2150_, lean_object* v___y_2151_){
_start:
{
lean_object* v___x_2153_; lean_object* v___x_2154_; lean_object* v_env_2158_; lean_object* v___y_2160_; lean_object* v___x_2173_; 
v___x_2153_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3___closed__0, &l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3___closed__0_once, _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3___closed__0);
v___x_2154_ = lean_st_ref_get(v___y_2151_);
v_env_2158_ = lean_ctor_get(v___x_2154_, 0);
lean_inc_ref(v_env_2158_);
lean_dec(v___x_2154_);
v___x_2173_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2158_, v_declName_2148_);
if (lean_obj_tag(v___x_2173_) == 0)
{
lean_dec_ref(v_env_2158_);
lean_dec(v_declName_2148_);
goto v___jp_2155_;
}
else
{
lean_object* v_val_2174_; lean_object* v___x_2175_; lean_object* v_modules_2176_; lean_object* v___x_2177_; uint8_t v___x_2178_; 
v_val_2174_ = lean_ctor_get(v___x_2173_, 0);
lean_inc(v_val_2174_);
lean_dec_ref_known(v___x_2173_, 1);
v___x_2175_ = l_Lean_Environment_header(v_env_2158_);
v_modules_2176_ = lean_ctor_get(v___x_2175_, 3);
lean_inc_ref(v_modules_2176_);
lean_dec_ref(v___x_2175_);
v___x_2177_ = lean_array_get_size(v_modules_2176_);
v___x_2178_ = lean_nat_dec_lt(v_val_2174_, v___x_2177_);
if (v___x_2178_ == 0)
{
lean_dec_ref(v_modules_2176_);
lean_dec(v_val_2174_);
lean_dec_ref(v_env_2158_);
lean_dec(v_declName_2148_);
goto v___jp_2155_;
}
else
{
lean_object* v___x_2179_; lean_object* v___x_2180_; uint8_t v___y_2182_; 
v___x_2179_ = lean_array_fget(v_modules_2176_, v_val_2174_);
lean_dec(v_val_2174_);
lean_dec_ref(v_modules_2176_);
v___x_2180_ = lean_st_ref_get(v___y_2151_);
if (v_isMeta_2149_ == 0)
{
lean_dec(v___x_2180_);
v___y_2182_ = v_isMeta_2149_;
goto v___jp_2181_;
}
else
{
lean_object* v_env_2193_; uint8_t v___x_2194_; 
v_env_2193_ = lean_ctor_get(v___x_2180_, 0);
lean_inc_ref(v_env_2193_);
lean_dec(v___x_2180_);
lean_inc(v_declName_2148_);
v___x_2194_ = l_Lean_isMarkedMeta(v_env_2193_, v_declName_2148_);
if (v___x_2194_ == 0)
{
v___y_2182_ = v_isMeta_2149_;
goto v___jp_2181_;
}
else
{
uint8_t v___x_2195_; 
v___x_2195_ = 0;
v___y_2182_ = v___x_2195_;
goto v___jp_2181_;
}
}
v___jp_2181_:
{
lean_object* v_toImport_2183_; lean_object* v_module_2184_; lean_object* v___x_2185_; 
v_toImport_2183_ = lean_ctor_get(v___x_2179_, 0);
lean_inc_ref(v_toImport_2183_);
lean_dec(v___x_2179_);
v_module_2184_ = lean_ctor_get(v_toImport_2183_, 0);
lean_inc(v_module_2184_);
lean_dec_ref(v_toImport_2183_);
lean_inc(v_declName_2148_);
v___x_2185_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6(v_module_2184_, v___y_2182_, v_declName_2148_, v___y_2150_, v___y_2151_);
if (lean_obj_tag(v___x_2185_) == 0)
{
lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; 
lean_dec_ref_known(v___x_2185_, 1);
v___x_2186_ = l_Lean_indirectModUseExt;
v___x_2187_ = lean_box(1);
v___x_2188_ = lean_obj_once(&l_Lean_Elab_Command_mkUnexpander___closed__56, &l_Lean_Elab_Command_mkUnexpander___closed__56_once, _init_l_Lean_Elab_Command_mkUnexpander___closed__56);
lean_inc_ref(v_env_2158_);
v___x_2189_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_2153_, v___x_2186_, v_env_2158_, v___x_2187_, v___x_2188_);
v___x_2190_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8___redArg(v___x_2189_, v_declName_2148_);
lean_dec(v___x_2189_);
if (lean_obj_tag(v___x_2190_) == 0)
{
lean_object* v___x_2191_; 
v___x_2191_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3___closed__1));
v___y_2160_ = v___x_2191_;
goto v___jp_2159_;
}
else
{
lean_object* v_val_2192_; 
v_val_2192_ = lean_ctor_get(v___x_2190_, 0);
lean_inc(v_val_2192_);
lean_dec_ref_known(v___x_2190_, 1);
v___y_2160_ = v_val_2192_;
goto v___jp_2159_;
}
}
else
{
lean_dec_ref(v_env_2158_);
lean_dec(v_declName_2148_);
return v___x_2185_;
}
}
}
}
v___jp_2155_:
{
lean_object* v___x_2156_; lean_object* v___x_2157_; 
v___x_2156_ = lean_box(0);
v___x_2157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2157_, 0, v___x_2156_);
return v___x_2157_;
}
v___jp_2159_:
{
lean_object* v___x_2161_; size_t v_sz_2162_; size_t v___x_2163_; lean_object* v___x_2164_; 
v___x_2161_ = lean_box(0);
v_sz_2162_ = lean_array_size(v___y_2160_);
v___x_2163_ = ((size_t)0ULL);
v___x_2164_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__7(v_env_2158_, v_declName_2148_, v___y_2160_, v_sz_2162_, v___x_2163_, v___x_2161_, v___y_2150_, v___y_2151_);
lean_dec_ref(v___y_2160_);
lean_dec_ref(v_env_2158_);
if (lean_obj_tag(v___x_2164_) == 0)
{
lean_object* v___x_2166_; uint8_t v_isShared_2167_; uint8_t v_isSharedCheck_2171_; 
v_isSharedCheck_2171_ = !lean_is_exclusive(v___x_2164_);
if (v_isSharedCheck_2171_ == 0)
{
lean_object* v_unused_2172_; 
v_unused_2172_ = lean_ctor_get(v___x_2164_, 0);
lean_dec(v_unused_2172_);
v___x_2166_ = v___x_2164_;
v_isShared_2167_ = v_isSharedCheck_2171_;
goto v_resetjp_2165_;
}
else
{
lean_dec(v___x_2164_);
v___x_2166_ = lean_box(0);
v_isShared_2167_ = v_isSharedCheck_2171_;
goto v_resetjp_2165_;
}
v_resetjp_2165_:
{
lean_object* v___x_2169_; 
if (v_isShared_2167_ == 0)
{
lean_ctor_set(v___x_2166_, 0, v___x_2161_);
v___x_2169_ = v___x_2166_;
goto v_reusejp_2168_;
}
else
{
lean_object* v_reuseFailAlloc_2170_; 
v_reuseFailAlloc_2170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2170_, 0, v___x_2161_);
v___x_2169_ = v_reuseFailAlloc_2170_;
goto v_reusejp_2168_;
}
v_reusejp_2168_:
{
return v___x_2169_;
}
}
}
else
{
return v___x_2164_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3___boxed(lean_object* v_declName_2196_, lean_object* v_isMeta_2197_, lean_object* v___y_2198_, lean_object* v___y_2199_, lean_object* v___y_2200_){
_start:
{
uint8_t v_isMeta_boxed_2201_; lean_object* v_res_2202_; 
v_isMeta_boxed_2201_ = lean_unbox(v_isMeta_2197_);
v_res_2202_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3(v_declName_2196_, v_isMeta_boxed_2201_, v___y_2198_, v___y_2199_);
lean_dec(v___y_2199_);
lean_dec_ref(v___y_2198_);
return v_res_2202_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__4___redArg(lean_object* v_as_x27_2203_, lean_object* v_b_2204_, lean_object* v___y_2205_, lean_object* v___y_2206_){
_start:
{
if (lean_obj_tag(v_as_x27_2203_) == 0)
{
lean_object* v___x_2208_; 
v___x_2208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2208_, 0, v_b_2204_);
return v___x_2208_;
}
else
{
lean_object* v_head_2209_; lean_object* v_tail_2210_; lean_object* v___x_2211_; uint8_t v___x_2212_; lean_object* v___x_2213_; 
v_head_2209_ = lean_ctor_get(v_as_x27_2203_, 0);
v_tail_2210_ = lean_ctor_get(v_as_x27_2203_, 1);
v___x_2211_ = lean_box(0);
v___x_2212_ = 1;
lean_inc(v_head_2209_);
v___x_2213_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3(v_head_2209_, v___x_2212_, v___y_2205_, v___y_2206_);
if (lean_obj_tag(v___x_2213_) == 0)
{
lean_dec_ref_known(v___x_2213_, 1);
v_as_x27_2203_ = v_tail_2210_;
v_b_2204_ = v___x_2211_;
goto _start;
}
else
{
return v___x_2213_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__4___redArg___boxed(lean_object* v_as_x27_2215_, lean_object* v_b_2216_, lean_object* v___y_2217_, lean_object* v___y_2218_, lean_object* v___y_2219_){
_start:
{
lean_object* v_res_2220_; 
v_res_2220_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__4___redArg(v_as_x27_2215_, v_b_2216_, v___y_2217_, v___y_2218_);
lean_dec(v___y_2218_);
lean_dec_ref(v___y_2217_);
lean_dec(v_as_x27_2215_);
return v_res_2220_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg(lean_object* v_x_2222_, lean_object* v___y_2223_, lean_object* v___y_2224_){
_start:
{
lean_object* v___x_2226_; lean_object* v_env_2227_; lean_object* v___f_2228_; lean_object* v___f_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v_scopes_2232_; lean_object* v___x_2233_; lean_object* v_opts_2234_; lean_object* v___x_2235_; 
v___x_2226_ = lean_st_ref_get(v___y_2224_);
v_env_2227_ = lean_ctor_get(v___x_2226_, 0);
lean_inc_ref_n(v_env_2227_, 3);
lean_dec(v___x_2226_);
v___f_2228_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_2228_, 0, v_env_2227_);
v___f_2229_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__1___boxed), 4, 1);
lean_closure_set(v___f_2229_, 0, v_env_2227_);
v___x_2230_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_2231_ = lean_st_ref_get(v___y_2224_);
v_scopes_2232_ = lean_ctor_get(v___x_2231_, 2);
lean_inc(v_scopes_2232_);
lean_dec(v___x_2231_);
v___x_2233_ = l_List_head_x21___redArg(v___x_2230_, v_scopes_2232_);
lean_dec(v_scopes_2232_);
v_opts_2234_ = lean_ctor_get(v___x_2233_, 1);
lean_inc_ref(v_opts_2234_);
lean_dec(v___x_2233_);
v___x_2235_ = l_Lean_Elab_Command_getScope___redArg(v___y_2224_);
if (lean_obj_tag(v___x_2235_) == 0)
{
lean_object* v_a_2236_; lean_object* v_currNamespace_2237_; lean_object* v___f_2238_; lean_object* v___x_2239_; 
v_a_2236_ = lean_ctor_get(v___x_2235_, 0);
lean_inc(v_a_2236_);
lean_dec_ref_known(v___x_2235_, 1);
v_currNamespace_2237_ = lean_ctor_get(v_a_2236_, 2);
lean_inc_n(v_currNamespace_2237_, 2);
lean_dec(v_a_2236_);
v___f_2238_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_2238_, 0, v_currNamespace_2237_);
v___x_2239_ = l_Lean_Elab_Command_getScope___redArg(v___y_2224_);
if (lean_obj_tag(v___x_2239_) == 0)
{
lean_object* v_a_2240_; lean_object* v_openDecls_2241_; lean_object* v___f_2242_; lean_object* v___f_2243_; lean_object* v___x_2244_; lean_object* v_methods_2245_; lean_object* v___x_2246_; 
v_a_2240_ = lean_ctor_get(v___x_2239_, 0);
lean_inc(v_a_2240_);
lean_dec_ref_known(v___x_2239_, 1);
v_openDecls_2241_ = lean_ctor_get(v_a_2240_, 3);
lean_inc_n(v_openDecls_2241_, 2);
lean_dec(v_a_2240_);
lean_inc(v_currNamespace_2237_);
lean_inc_ref(v_env_2227_);
v___f_2242_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__3___boxed), 6, 3);
lean_closure_set(v___f_2242_, 0, v_env_2227_);
lean_closure_set(v___f_2242_, 1, v_currNamespace_2237_);
lean_closure_set(v___f_2242_, 2, v_openDecls_2241_);
v___f_2243_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__4___boxed), 7, 4);
lean_closure_set(v___f_2243_, 0, v_env_2227_);
lean_closure_set(v___f_2243_, 1, v_opts_2234_);
lean_closure_set(v___f_2243_, 2, v_currNamespace_2237_);
lean_closure_set(v___f_2243_, 3, v_openDecls_2241_);
v___x_2244_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2244_, 0, v___f_2229_);
lean_ctor_set(v___x_2244_, 1, v___f_2238_);
lean_ctor_set(v___x_2244_, 2, v___f_2228_);
lean_ctor_set(v___x_2244_, 3, v___f_2242_);
lean_ctor_set(v___x_2244_, 4, v___f_2243_);
v_methods_2245_ = l_unsafeCast___redArg(v___x_2244_);
lean_dec_ref_known(v___x_2244_, 5);
v___x_2246_ = l_Lean_Elab_Command_getRef___redArg(v___y_2223_);
if (lean_obj_tag(v___x_2246_) == 0)
{
lean_object* v_a_2247_; lean_object* v___x_2248_; 
v_a_2247_ = lean_ctor_get(v___x_2246_, 0);
lean_inc(v_a_2247_);
lean_dec_ref_known(v___x_2246_, 1);
v___x_2248_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_2223_);
if (lean_obj_tag(v___x_2248_) == 0)
{
lean_object* v_a_2249_; lean_object* v_currRecDepth_2250_; lean_object* v_quotContext_x3f_2251_; lean_object* v_a_2253_; 
v_a_2249_ = lean_ctor_get(v___x_2248_, 0);
lean_inc(v_a_2249_);
lean_dec_ref_known(v___x_2248_, 1);
v_currRecDepth_2250_ = lean_ctor_get(v___y_2223_, 2);
v_quotContext_x3f_2251_ = lean_ctor_get(v___y_2223_, 5);
if (lean_obj_tag(v_quotContext_x3f_2251_) == 0)
{
lean_object* v___x_2327_; lean_object* v_a_2328_; 
v___x_2327_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabNotation_spec__7___redArg(v___y_2224_);
v_a_2328_ = lean_ctor_get(v___x_2327_, 0);
lean_inc(v_a_2328_);
lean_dec_ref(v___x_2327_);
v_a_2253_ = v_a_2328_;
goto v___jp_2252_;
}
else
{
lean_object* v_val_2329_; 
v_val_2329_ = lean_ctor_get(v_quotContext_x3f_2251_, 0);
lean_inc(v_val_2329_);
v_a_2253_ = v_val_2329_;
goto v___jp_2252_;
}
v___jp_2252_:
{
lean_object* v___x_2254_; lean_object* v_maxRecDepth_2255_; lean_object* v___x_2256_; lean_object* v_nextMacroScope_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; 
v___x_2254_ = lean_st_ref_get(v___y_2224_);
v_maxRecDepth_2255_ = lean_ctor_get(v___x_2254_, 5);
lean_inc(v_maxRecDepth_2255_);
lean_dec(v___x_2254_);
v___x_2256_ = lean_st_ref_get(v___y_2224_);
v_nextMacroScope_2257_ = lean_ctor_get(v___x_2256_, 4);
lean_inc(v_nextMacroScope_2257_);
lean_dec(v___x_2256_);
lean_inc(v_currRecDepth_2250_);
v___x_2258_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2258_, 0, v_methods_2245_);
lean_ctor_set(v___x_2258_, 1, v_a_2253_);
lean_ctor_set(v___x_2258_, 2, v_a_2249_);
lean_ctor_set(v___x_2258_, 3, v_currRecDepth_2250_);
lean_ctor_set(v___x_2258_, 4, v_maxRecDepth_2255_);
lean_ctor_set(v___x_2258_, 5, v_a_2247_);
v___x_2259_ = lean_box(0);
v___x_2260_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2260_, 0, v_nextMacroScope_2257_);
lean_ctor_set(v___x_2260_, 1, v___x_2259_);
lean_ctor_set(v___x_2260_, 2, v___x_2259_);
v___x_2261_ = lean_apply_2(v_x_2222_, v___x_2258_, v___x_2260_);
if (lean_obj_tag(v___x_2261_) == 0)
{
lean_object* v_a_2262_; lean_object* v_a_2263_; lean_object* v_macroScope_2264_; lean_object* v_traceMsgs_2265_; lean_object* v_expandedMacroDecls_2266_; lean_object* v___x_2267_; lean_object* v___x_2268_; 
v_a_2262_ = lean_ctor_get(v___x_2261_, 1);
lean_inc(v_a_2262_);
v_a_2263_ = lean_ctor_get(v___x_2261_, 0);
lean_inc(v_a_2263_);
lean_dec_ref_known(v___x_2261_, 2);
v_macroScope_2264_ = lean_ctor_get(v_a_2262_, 0);
lean_inc(v_macroScope_2264_);
v_traceMsgs_2265_ = lean_ctor_get(v_a_2262_, 1);
lean_inc(v_traceMsgs_2265_);
v_expandedMacroDecls_2266_ = lean_ctor_get(v_a_2262_, 2);
lean_inc(v_expandedMacroDecls_2266_);
lean_dec(v_a_2262_);
v___x_2267_ = lean_box(0);
v___x_2268_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__4___redArg(v_expandedMacroDecls_2266_, v___x_2267_, v___y_2223_, v___y_2224_);
lean_dec(v_expandedMacroDecls_2266_);
if (lean_obj_tag(v___x_2268_) == 0)
{
lean_object* v___x_2269_; lean_object* v_env_2270_; lean_object* v_messages_2271_; lean_object* v_scopes_2272_; lean_object* v_usedQuotCtxts_2273_; lean_object* v_maxRecDepth_2274_; lean_object* v_ngen_2275_; lean_object* v_auxDeclNGen_2276_; lean_object* v_infoState_2277_; lean_object* v_traceState_2278_; lean_object* v_snapshotTasks_2279_; lean_object* v_prevLinterStates_2280_; lean_object* v_codeQualityEntryTasks_2281_; lean_object* v___x_2283_; uint8_t v_isShared_2284_; uint8_t v_isSharedCheck_2307_; 
lean_dec_ref_known(v___x_2268_, 1);
v___x_2269_ = lean_st_ref_take(v___y_2224_);
v_env_2270_ = lean_ctor_get(v___x_2269_, 0);
v_messages_2271_ = lean_ctor_get(v___x_2269_, 1);
v_scopes_2272_ = lean_ctor_get(v___x_2269_, 2);
v_usedQuotCtxts_2273_ = lean_ctor_get(v___x_2269_, 3);
v_maxRecDepth_2274_ = lean_ctor_get(v___x_2269_, 5);
v_ngen_2275_ = lean_ctor_get(v___x_2269_, 6);
v_auxDeclNGen_2276_ = lean_ctor_get(v___x_2269_, 7);
v_infoState_2277_ = lean_ctor_get(v___x_2269_, 8);
v_traceState_2278_ = lean_ctor_get(v___x_2269_, 9);
v_snapshotTasks_2279_ = lean_ctor_get(v___x_2269_, 10);
v_prevLinterStates_2280_ = lean_ctor_get(v___x_2269_, 11);
v_codeQualityEntryTasks_2281_ = lean_ctor_get(v___x_2269_, 12);
v_isSharedCheck_2307_ = !lean_is_exclusive(v___x_2269_);
if (v_isSharedCheck_2307_ == 0)
{
lean_object* v_unused_2308_; 
v_unused_2308_ = lean_ctor_get(v___x_2269_, 4);
lean_dec(v_unused_2308_);
v___x_2283_ = v___x_2269_;
v_isShared_2284_ = v_isSharedCheck_2307_;
goto v_resetjp_2282_;
}
else
{
lean_inc(v_codeQualityEntryTasks_2281_);
lean_inc(v_prevLinterStates_2280_);
lean_inc(v_snapshotTasks_2279_);
lean_inc(v_traceState_2278_);
lean_inc(v_infoState_2277_);
lean_inc(v_auxDeclNGen_2276_);
lean_inc(v_ngen_2275_);
lean_inc(v_maxRecDepth_2274_);
lean_inc(v_usedQuotCtxts_2273_);
lean_inc(v_scopes_2272_);
lean_inc(v_messages_2271_);
lean_inc(v_env_2270_);
lean_dec(v___x_2269_);
v___x_2283_ = lean_box(0);
v_isShared_2284_ = v_isSharedCheck_2307_;
goto v_resetjp_2282_;
}
v_resetjp_2282_:
{
lean_object* v___x_2286_; 
if (v_isShared_2284_ == 0)
{
lean_ctor_set(v___x_2283_, 4, v_macroScope_2264_);
v___x_2286_ = v___x_2283_;
goto v_reusejp_2285_;
}
else
{
lean_object* v_reuseFailAlloc_2306_; 
v_reuseFailAlloc_2306_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_2306_, 0, v_env_2270_);
lean_ctor_set(v_reuseFailAlloc_2306_, 1, v_messages_2271_);
lean_ctor_set(v_reuseFailAlloc_2306_, 2, v_scopes_2272_);
lean_ctor_set(v_reuseFailAlloc_2306_, 3, v_usedQuotCtxts_2273_);
lean_ctor_set(v_reuseFailAlloc_2306_, 4, v_macroScope_2264_);
lean_ctor_set(v_reuseFailAlloc_2306_, 5, v_maxRecDepth_2274_);
lean_ctor_set(v_reuseFailAlloc_2306_, 6, v_ngen_2275_);
lean_ctor_set(v_reuseFailAlloc_2306_, 7, v_auxDeclNGen_2276_);
lean_ctor_set(v_reuseFailAlloc_2306_, 8, v_infoState_2277_);
lean_ctor_set(v_reuseFailAlloc_2306_, 9, v_traceState_2278_);
lean_ctor_set(v_reuseFailAlloc_2306_, 10, v_snapshotTasks_2279_);
lean_ctor_set(v_reuseFailAlloc_2306_, 11, v_prevLinterStates_2280_);
lean_ctor_set(v_reuseFailAlloc_2306_, 12, v_codeQualityEntryTasks_2281_);
v___x_2286_ = v_reuseFailAlloc_2306_;
goto v_reusejp_2285_;
}
v_reusejp_2285_:
{
lean_object* v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2289_; 
v___x_2287_ = lean_st_ref_put(v___y_2224_, v___x_2286_);
v___x_2288_ = l_List_reverse___redArg(v_traceMsgs_2265_);
v___x_2289_ = l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__5(v___x_2288_, v___y_2223_, v___y_2224_);
if (lean_obj_tag(v___x_2289_) == 0)
{
lean_object* v___x_2291_; uint8_t v_isShared_2292_; uint8_t v_isSharedCheck_2296_; 
v_isSharedCheck_2296_ = !lean_is_exclusive(v___x_2289_);
if (v_isSharedCheck_2296_ == 0)
{
lean_object* v_unused_2297_; 
v_unused_2297_ = lean_ctor_get(v___x_2289_, 0);
lean_dec(v_unused_2297_);
v___x_2291_ = v___x_2289_;
v_isShared_2292_ = v_isSharedCheck_2296_;
goto v_resetjp_2290_;
}
else
{
lean_dec(v___x_2289_);
v___x_2291_ = lean_box(0);
v_isShared_2292_ = v_isSharedCheck_2296_;
goto v_resetjp_2290_;
}
v_resetjp_2290_:
{
lean_object* v___x_2294_; 
if (v_isShared_2292_ == 0)
{
lean_ctor_set(v___x_2291_, 0, v_a_2263_);
v___x_2294_ = v___x_2291_;
goto v_reusejp_2293_;
}
else
{
lean_object* v_reuseFailAlloc_2295_; 
v_reuseFailAlloc_2295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2295_, 0, v_a_2263_);
v___x_2294_ = v_reuseFailAlloc_2295_;
goto v_reusejp_2293_;
}
v_reusejp_2293_:
{
return v___x_2294_;
}
}
}
else
{
lean_object* v_a_2298_; lean_object* v___x_2300_; uint8_t v_isShared_2301_; uint8_t v_isSharedCheck_2305_; 
lean_dec(v_a_2263_);
v_a_2298_ = lean_ctor_get(v___x_2289_, 0);
v_isSharedCheck_2305_ = !lean_is_exclusive(v___x_2289_);
if (v_isSharedCheck_2305_ == 0)
{
v___x_2300_ = v___x_2289_;
v_isShared_2301_ = v_isSharedCheck_2305_;
goto v_resetjp_2299_;
}
else
{
lean_inc(v_a_2298_);
lean_dec(v___x_2289_);
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
}
}
else
{
lean_object* v_a_2309_; lean_object* v___x_2311_; uint8_t v_isShared_2312_; uint8_t v_isSharedCheck_2316_; 
lean_dec(v_traceMsgs_2265_);
lean_dec(v_macroScope_2264_);
lean_dec(v_a_2263_);
v_a_2309_ = lean_ctor_get(v___x_2268_, 0);
v_isSharedCheck_2316_ = !lean_is_exclusive(v___x_2268_);
if (v_isSharedCheck_2316_ == 0)
{
v___x_2311_ = v___x_2268_;
v_isShared_2312_ = v_isSharedCheck_2316_;
goto v_resetjp_2310_;
}
else
{
lean_inc(v_a_2309_);
lean_dec(v___x_2268_);
v___x_2311_ = lean_box(0);
v_isShared_2312_ = v_isSharedCheck_2316_;
goto v_resetjp_2310_;
}
v_resetjp_2310_:
{
lean_object* v___x_2314_; 
if (v_isShared_2312_ == 0)
{
v___x_2314_ = v___x_2311_;
goto v_reusejp_2313_;
}
else
{
lean_object* v_reuseFailAlloc_2315_; 
v_reuseFailAlloc_2315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2315_, 0, v_a_2309_);
v___x_2314_ = v_reuseFailAlloc_2315_;
goto v_reusejp_2313_;
}
v_reusejp_2313_:
{
return v___x_2314_;
}
}
}
}
else
{
lean_object* v_a_2317_; 
v_a_2317_ = lean_ctor_get(v___x_2261_, 0);
lean_inc(v_a_2317_);
lean_dec_ref_known(v___x_2261_, 2);
if (lean_obj_tag(v_a_2317_) == 0)
{
lean_object* v_a_2318_; lean_object* v_a_2319_; lean_object* v___x_2320_; uint8_t v___x_2321_; 
v_a_2318_ = lean_ctor_get(v_a_2317_, 0);
lean_inc(v_a_2318_);
v_a_2319_ = lean_ctor_get(v_a_2317_, 1);
lean_inc_ref(v_a_2319_);
lean_dec_ref_known(v_a_2317_, 2);
v___x_2320_ = ((lean_object*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___closed__0));
v___x_2321_ = lean_string_dec_eq(v_a_2319_, v___x_2320_);
if (v___x_2321_ == 0)
{
lean_object* v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; 
v___x_2322_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2322_, 0, v_a_2319_);
v___x_2323_ = l_Lean_MessageData_ofFormat(v___x_2322_);
v___x_2324_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6___redArg(v_a_2318_, v___x_2323_, v___y_2223_, v___y_2224_);
lean_dec(v_a_2318_);
return v___x_2324_;
}
else
{
lean_object* v___x_2325_; 
lean_dec_ref(v_a_2319_);
v___x_2325_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg(v_a_2318_);
return v___x_2325_;
}
}
else
{
lean_object* v___x_2326_; 
v___x_2326_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg();
return v___x_2326_;
}
}
}
}
else
{
lean_object* v_a_2330_; lean_object* v___x_2332_; uint8_t v_isShared_2333_; uint8_t v_isSharedCheck_2337_; 
lean_dec(v_a_2247_);
lean_dec(v_methods_2245_);
lean_dec_ref(v_x_2222_);
v_a_2330_ = lean_ctor_get(v___x_2248_, 0);
v_isSharedCheck_2337_ = !lean_is_exclusive(v___x_2248_);
if (v_isSharedCheck_2337_ == 0)
{
v___x_2332_ = v___x_2248_;
v_isShared_2333_ = v_isSharedCheck_2337_;
goto v_resetjp_2331_;
}
else
{
lean_inc(v_a_2330_);
lean_dec(v___x_2248_);
v___x_2332_ = lean_box(0);
v_isShared_2333_ = v_isSharedCheck_2337_;
goto v_resetjp_2331_;
}
v_resetjp_2331_:
{
lean_object* v___x_2335_; 
if (v_isShared_2333_ == 0)
{
v___x_2335_ = v___x_2332_;
goto v_reusejp_2334_;
}
else
{
lean_object* v_reuseFailAlloc_2336_; 
v_reuseFailAlloc_2336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2336_, 0, v_a_2330_);
v___x_2335_ = v_reuseFailAlloc_2336_;
goto v_reusejp_2334_;
}
v_reusejp_2334_:
{
return v___x_2335_;
}
}
}
}
else
{
lean_object* v_a_2338_; lean_object* v___x_2340_; uint8_t v_isShared_2341_; uint8_t v_isSharedCheck_2345_; 
lean_dec(v_methods_2245_);
lean_dec_ref(v_x_2222_);
v_a_2338_ = lean_ctor_get(v___x_2246_, 0);
v_isSharedCheck_2345_ = !lean_is_exclusive(v___x_2246_);
if (v_isSharedCheck_2345_ == 0)
{
v___x_2340_ = v___x_2246_;
v_isShared_2341_ = v_isSharedCheck_2345_;
goto v_resetjp_2339_;
}
else
{
lean_inc(v_a_2338_);
lean_dec(v___x_2246_);
v___x_2340_ = lean_box(0);
v_isShared_2341_ = v_isSharedCheck_2345_;
goto v_resetjp_2339_;
}
v_resetjp_2339_:
{
lean_object* v___x_2343_; 
if (v_isShared_2341_ == 0)
{
v___x_2343_ = v___x_2340_;
goto v_reusejp_2342_;
}
else
{
lean_object* v_reuseFailAlloc_2344_; 
v_reuseFailAlloc_2344_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2344_, 0, v_a_2338_);
v___x_2343_ = v_reuseFailAlloc_2344_;
goto v_reusejp_2342_;
}
v_reusejp_2342_:
{
return v___x_2343_;
}
}
}
}
else
{
lean_object* v_a_2346_; lean_object* v___x_2348_; uint8_t v_isShared_2349_; uint8_t v_isSharedCheck_2353_; 
lean_dec_ref(v___f_2238_);
lean_dec(v_currNamespace_2237_);
lean_dec_ref(v_opts_2234_);
lean_dec_ref(v___f_2229_);
lean_dec_ref(v___f_2228_);
lean_dec_ref(v_env_2227_);
lean_dec_ref(v_x_2222_);
v_a_2346_ = lean_ctor_get(v___x_2239_, 0);
v_isSharedCheck_2353_ = !lean_is_exclusive(v___x_2239_);
if (v_isSharedCheck_2353_ == 0)
{
v___x_2348_ = v___x_2239_;
v_isShared_2349_ = v_isSharedCheck_2353_;
goto v_resetjp_2347_;
}
else
{
lean_inc(v_a_2346_);
lean_dec(v___x_2239_);
v___x_2348_ = lean_box(0);
v_isShared_2349_ = v_isSharedCheck_2353_;
goto v_resetjp_2347_;
}
v_resetjp_2347_:
{
lean_object* v___x_2351_; 
if (v_isShared_2349_ == 0)
{
v___x_2351_ = v___x_2348_;
goto v_reusejp_2350_;
}
else
{
lean_object* v_reuseFailAlloc_2352_; 
v_reuseFailAlloc_2352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2352_, 0, v_a_2346_);
v___x_2351_ = v_reuseFailAlloc_2352_;
goto v_reusejp_2350_;
}
v_reusejp_2350_:
{
return v___x_2351_;
}
}
}
}
else
{
lean_object* v_a_2354_; lean_object* v___x_2356_; uint8_t v_isShared_2357_; uint8_t v_isSharedCheck_2361_; 
lean_dec_ref(v_opts_2234_);
lean_dec_ref(v___f_2229_);
lean_dec_ref(v___f_2228_);
lean_dec_ref(v_env_2227_);
lean_dec_ref(v_x_2222_);
v_a_2354_ = lean_ctor_get(v___x_2235_, 0);
v_isSharedCheck_2361_ = !lean_is_exclusive(v___x_2235_);
if (v_isSharedCheck_2361_ == 0)
{
v___x_2356_ = v___x_2235_;
v_isShared_2357_ = v_isSharedCheck_2361_;
goto v_resetjp_2355_;
}
else
{
lean_inc(v_a_2354_);
lean_dec(v___x_2235_);
v___x_2356_ = lean_box(0);
v_isShared_2357_ = v_isSharedCheck_2361_;
goto v_resetjp_2355_;
}
v_resetjp_2355_:
{
lean_object* v___x_2359_; 
if (v_isShared_2357_ == 0)
{
v___x_2359_ = v___x_2356_;
goto v_reusejp_2358_;
}
else
{
lean_object* v_reuseFailAlloc_2360_; 
v_reuseFailAlloc_2360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2360_, 0, v_a_2354_);
v___x_2359_ = v_reuseFailAlloc_2360_;
goto v_reusejp_2358_;
}
v_reusejp_2358_:
{
return v___x_2359_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___boxed(lean_object* v_x_2362_, lean_object* v___y_2363_, lean_object* v___y_2364_, lean_object* v___y_2365_){
_start:
{
lean_object* v_res_2366_; 
v_res_2366_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg(v_x_2362_, v___y_2363_, v___y_2364_);
lean_dec(v___y_2364_);
lean_dec_ref(v___y_2363_);
return v_res_2366_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_elabNotation_spec__8(lean_object* v_as_2367_, size_t v_i_2368_, size_t v_stop_2369_, lean_object* v_b_2370_){
_start:
{
lean_object* v___y_2372_; uint8_t v___x_2376_; 
v___x_2376_ = lean_usize_dec_eq(v_i_2368_, v_stop_2369_);
if (v___x_2376_ == 0)
{
lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; uint8_t v___x_2380_; 
v___x_2377_ = lean_array_uget_borrowed(v_as_2367_, v_i_2368_);
lean_inc(v___x_2377_);
v___x_2378_ = l_Lean_Syntax_getKind(v___x_2377_);
v___x_2379_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__10));
v___x_2380_ = lean_name_eq(v___x_2378_, v___x_2379_);
lean_dec(v___x_2378_);
if (v___x_2380_ == 0)
{
v___y_2372_ = v_b_2370_;
goto v___jp_2371_;
}
else
{
lean_object* v___x_2381_; 
lean_inc(v___x_2377_);
v___x_2381_ = lean_array_push(v_b_2370_, v___x_2377_);
v___y_2372_ = v___x_2381_;
goto v___jp_2371_;
}
}
else
{
return v_b_2370_;
}
v___jp_2371_:
{
size_t v___x_2373_; size_t v___x_2374_; 
v___x_2373_ = ((size_t)1ULL);
v___x_2374_ = lean_usize_add(v_i_2368_, v___x_2373_);
v_i_2368_ = v___x_2374_;
v_b_2370_ = v___y_2372_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_elabNotation_spec__8___boxed(lean_object* v_as_2382_, lean_object* v_i_2383_, lean_object* v_stop_2384_, lean_object* v_b_2385_){
_start:
{
size_t v_i_boxed_2386_; size_t v_stop_boxed_2387_; lean_object* v_res_2388_; 
v_i_boxed_2386_ = lean_unbox_usize(v_i_2383_);
lean_dec(v_i_2383_);
v_stop_boxed_2387_ = lean_unbox_usize(v_stop_2384_);
lean_dec(v_stop_2384_);
v_res_2388_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_elabNotation_spec__8(v_as_2382_, v_i_boxed_2386_, v_stop_boxed_2387_, v_b_2385_);
lean_dec_ref(v_as_2382_);
return v_res_2388_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNotation(lean_object* v_x_2429_, lean_object* v_a_2430_, lean_object* v_a_2431_){
_start:
{
lean_object* v___y_2434_; lean_object* v___y_2435_; lean_object* v___y_2436_; lean_object* v___y_2437_; lean_object* v___y_2438_; lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v___x_2462_; uint8_t v___x_2463_; lean_object* v___y_2465_; lean_object* v___y_2466_; lean_object* v___y_2467_; lean_object* v___y_2468_; lean_object* v___y_2469_; lean_object* v___y_2470_; lean_object* v___y_2471_; lean_object* v___y_2472_; lean_object* v___y_2473_; lean_object* v___y_2474_; lean_object* v___y_2518_; lean_object* v___y_2519_; lean_object* v___y_2520_; uint8_t v___y_2521_; size_t v___y_2522_; lean_object* v___y_2523_; lean_object* v___y_2524_; lean_object* v___y_2525_; lean_object* v___y_2526_; lean_object* v___y_2527_; lean_object* v___y_2528_; lean_object* v___y_2529_; lean_object* v___y_2530_; lean_object* v___y_2531_; 
v___x_2460_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0));
v___x_2461_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1));
v___x_2462_ = ((lean_object*)(l_Lean_Elab_Command_elabNotation___closed__1));
lean_inc(v_x_2429_);
v___x_2463_ = l_Lean_Syntax_isOfKind(v_x_2429_, v___x_2462_);
if (v___x_2463_ == 0)
{
lean_object* v___x_2577_; 
lean_dec(v_x_2429_);
v___x_2577_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg();
return v___x_2577_;
}
else
{
lean_object* v___x_2578_; lean_object* v___y_2580_; lean_object* v___y_2581_; uint8_t v___y_2582_; lean_object* v___y_2583_; lean_object* v___y_2584_; lean_object* v___y_2585_; size_t v___y_2586_; lean_object* v___y_2587_; lean_object* v___y_2588_; lean_object* v___y_2589_; lean_object* v___y_2590_; lean_object* v___y_2591_; lean_object* v___y_2592_; lean_object* v___y_2593_; lean_object* v___y_2594_; lean_object* v___y_2595_; lean_object* v___y_2596_; lean_object* v___y_2597_; lean_object* v___y_2598_; lean_object* v___y_2599_; lean_object* v___y_2656_; lean_object* v___y_2657_; lean_object* v___y_2658_; uint8_t v___y_2659_; lean_object* v___y_2660_; lean_object* v___y_2661_; lean_object* v___y_2662_; size_t v___y_2663_; lean_object* v___y_2664_; lean_object* v___y_2665_; lean_object* v___y_2666_; lean_object* v___y_2667_; lean_object* v___y_2668_; lean_object* v___y_2669_; lean_object* v___y_2670_; lean_object* v___y_2671_; lean_object* v___y_2672_; lean_object* v___y_2673_; lean_object* v___y_2674_; lean_object* v___y_2675_; lean_object* v___y_2692_; lean_object* v___y_2693_; lean_object* v___y_2694_; lean_object* v___y_2695_; uint8_t v___y_2696_; lean_object* v___y_2697_; size_t v___y_2698_; lean_object* v___y_2699_; lean_object* v___y_2700_; lean_object* v___y_2701_; lean_object* v___y_2702_; lean_object* v___y_2703_; lean_object* v___y_2704_; lean_object* v___y_2705_; lean_object* v___y_2706_; lean_object* v___y_2707_; lean_object* v___y_2708_; lean_object* v___y_2709_; lean_object* v___y_2710_; lean_object* v___y_2711_; lean_object* v___y_2723_; lean_object* v___y_2724_; lean_object* v___y_2725_; lean_object* v___y_2726_; uint8_t v___y_2727_; lean_object* v___y_2728_; lean_object* v___y_2729_; size_t v___y_2730_; lean_object* v___y_2731_; lean_object* v___y_2732_; lean_object* v___y_2733_; lean_object* v___y_2734_; lean_object* v___y_2735_; lean_object* v___y_2736_; lean_object* v___y_2737_; lean_object* v___y_2738_; lean_object* v___y_2739_; lean_object* v___y_2740_; lean_object* v___y_2741_; lean_object* v___y_2742_; lean_object* v___y_2758_; lean_object* v___y_2759_; lean_object* v___y_2760_; lean_object* v___y_2761_; lean_object* v___y_2762_; uint8_t v___y_2763_; lean_object* v___y_2764_; lean_object* v___y_2765_; size_t v___y_2766_; lean_object* v___y_2767_; lean_object* v___y_2768_; lean_object* v___y_2769_; lean_object* v___y_2770_; lean_object* v___y_2771_; lean_object* v___y_2772_; lean_object* v___y_2773_; lean_object* v___y_2782_; lean_object* v___y_2783_; lean_object* v___y_2784_; lean_object* v___y_2785_; lean_object* v___y_2786_; lean_object* v___y_2787_; lean_object* v_prio_x3f_2788_; lean_object* v___y_2789_; lean_object* v___y_2790_; lean_object* v___y_2852_; lean_object* v___y_2853_; lean_object* v___y_2854_; lean_object* v___y_2855_; lean_object* v___y_2856_; lean_object* v___y_2857_; lean_object* v___y_2858_; lean_object* v_name_x3f_2859_; lean_object* v___y_2860_; lean_object* v___y_2861_; lean_object* v___y_2875_; lean_object* v___y_2876_; lean_object* v___y_2877_; lean_object* v___y_2878_; lean_object* v___y_2879_; lean_object* v___y_2880_; lean_object* v_prec_x3f_2881_; lean_object* v___y_2882_; lean_object* v___y_2883_; lean_object* v___y_2897_; lean_object* v___y_2898_; lean_object* v_attrs_x3f_2899_; lean_object* v___y_2900_; lean_object* v___y_2901_; lean_object* v_doc_x3f_2922_; lean_object* v___y_2923_; lean_object* v___y_2924_; lean_object* v___x_2938_; uint8_t v___x_2939_; 
v___x_2578_ = lean_unsigned_to_nat(0u);
v___x_2938_ = l_Lean_Syntax_getArg(v_x_2429_, v___x_2578_);
v___x_2939_ = l_Lean_Syntax_isNone(v___x_2938_);
if (v___x_2939_ == 0)
{
lean_object* v___x_2940_; uint8_t v___x_2941_; 
v___x_2940_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_2938_);
v___x_2941_ = l_Lean_Syntax_matchesNull(v___x_2938_, v___x_2940_);
if (v___x_2941_ == 0)
{
lean_object* v___x_2942_; 
lean_dec(v___x_2938_);
lean_dec(v_x_2429_);
v___x_2942_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg();
return v___x_2942_;
}
else
{
lean_object* v_doc_x3f_2943_; 
v_doc_x3f_2943_ = l_Lean_Syntax_getArg(v___x_2938_, v___x_2578_);
lean_dec(v___x_2938_);
if (v___x_2939_ == 0)
{
lean_object* v___x_2946_; uint8_t v___x_2947_; 
v___x_2946_ = ((lean_object*)(l_Lean_Elab_Command_elabNotation___closed__15));
lean_inc(v_doc_x3f_2943_);
v___x_2947_ = l_Lean_Syntax_isOfKind(v_doc_x3f_2943_, v___x_2946_);
if (v___x_2947_ == 0)
{
lean_object* v___x_2948_; 
lean_dec(v_doc_x3f_2943_);
lean_dec(v_x_2429_);
v___x_2948_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg();
return v___x_2948_;
}
else
{
goto v___jp_2944_;
}
}
else
{
goto v___jp_2944_;
}
v___jp_2944_:
{
lean_object* v___x_2945_; 
v___x_2945_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2945_, 0, v_doc_x3f_2943_);
v_doc_x3f_2922_ = v___x_2945_;
v___y_2923_ = v_a_2430_;
v___y_2924_ = v_a_2431_;
goto v___jp_2921_;
}
}
}
else
{
lean_object* v___x_2949_; 
lean_dec(v___x_2938_);
v___x_2949_ = lean_box(0);
v_doc_x3f_2922_ = v___x_2949_;
v___y_2923_ = v_a_2430_;
v___y_2924_ = v_a_2431_;
goto v___jp_2921_;
}
v___jp_2579_:
{
lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; lean_object* v___x_2609_; lean_object* v___x_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; lean_object* v___x_2615_; size_t v_sz_2616_; lean_object* v___x_2617_; lean_object* v___x_2618_; lean_object* v___x_2619_; lean_object* v___x_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; lean_object* v___x_2628_; lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; lean_object* v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; lean_object* v___x_2637_; 
lean_inc_ref_n(v___y_2595_, 2);
v___x_2600_ = l_Array_append___redArg(v___y_2595_, v___y_2599_);
lean_dec_ref(v___y_2599_);
lean_inc_n(v___y_2593_, 3);
lean_inc_n(v___y_2598_, 9);
v___x_2601_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2601_, 0, v___y_2598_);
lean_ctor_set(v___x_2601_, 1, v___y_2593_);
lean_ctor_set(v___x_2601_, 2, v___x_2600_);
v___x_2602_ = ((lean_object*)(l_Lean_Elab_Command_elabNotation___closed__7));
v___x_2603_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__53));
v___x_2604_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2604_, 0, v___y_2598_);
lean_ctor_set(v___x_2604_, 1, v___x_2603_);
v___x_2605_ = ((lean_object*)(l_Lean_Elab_Command_elabNotation___closed__8));
v___x_2606_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2606_, 0, v___y_2598_);
lean_ctor_set(v___x_2606_, 1, v___x_2605_);
v___x_2607_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__26));
v___x_2608_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2608_, 0, v___y_2598_);
lean_ctor_set(v___x_2608_, 1, v___x_2607_);
v___x_2609_ = l_Nat_reprFast(v___y_2585_);
v___x_2610_ = lean_box(2);
v___x_2611_ = l_Lean_Syntax_mkNumLit(v___x_2609_, v___x_2610_);
v___x_2612_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__37));
v___x_2613_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2613_, 0, v___y_2598_);
lean_ctor_set(v___x_2613_, 1, v___x_2612_);
v___x_2614_ = l_Lean_Syntax_node5(v___y_2598_, v___x_2602_, v___x_2604_, v___x_2606_, v___x_2608_, v___x_2611_, v___x_2613_);
v___x_2615_ = l_Lean_Syntax_node1(v___y_2598_, v___y_2593_, v___x_2614_);
v_sz_2616_ = lean_array_size(v___y_2580_);
v___x_2617_ = l_unsafeCast___redArg(v___y_2580_);
lean_dec_ref(v___y_2580_);
v___x_2618_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__3(v_sz_2616_, v___y_2586_, v___x_2617_);
v___x_2619_ = l_unsafeCast___redArg(v___x_2618_);
lean_dec_ref(v___x_2618_);
v___x_2620_ = l_Array_append___redArg(v___y_2595_, v___x_2619_);
lean_dec(v___x_2619_);
v___x_2621_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2621_, 0, v___y_2598_);
lean_ctor_set(v___x_2621_, 1, v___y_2593_);
lean_ctor_set(v___x_2621_, 2, v___x_2620_);
v___x_2622_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__6));
v___x_2623_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2623_, 0, v___y_2598_);
lean_ctor_set(v___x_2623_, 1, v___x_2622_);
v___x_2624_ = lean_unsigned_to_nat(10u);
v___x_2625_ = lean_mk_empty_array_with_capacity(v___x_2624_);
v___x_2626_ = lean_array_push(v___x_2625_, v___y_2591_);
v___x_2627_ = lean_array_push(v___x_2626_, v___y_2584_);
lean_inc(v___y_2596_);
v___x_2628_ = lean_array_push(v___x_2627_, v___y_2596_);
v___x_2629_ = lean_array_push(v___x_2628_, v___y_2583_);
v___x_2630_ = lean_array_push(v___x_2629_, v___y_2597_);
v___x_2631_ = lean_array_push(v___x_2630_, v___x_2601_);
v___x_2632_ = lean_array_push(v___x_2631_, v___x_2615_);
v___x_2633_ = lean_array_push(v___x_2632_, v___x_2621_);
v___x_2634_ = lean_array_push(v___x_2633_, v___x_2623_);
v___x_2635_ = lean_array_push(v___x_2634_, v___y_2594_);
lean_inc(v___y_2592_);
v___x_2636_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2636_, 0, v___y_2598_);
lean_ctor_set(v___x_2636_, 1, v___y_2592_);
lean_ctor_set(v___x_2636_, 2, v___x_2635_);
v___x_2637_ = l_Lean_Elab_Command_elabSyntax(v___x_2636_, v___y_2589_, v___y_2581_);
if (lean_obj_tag(v___x_2637_) == 0)
{
lean_object* v_a_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; uint8_t v___x_2641_; 
v_a_2638_ = lean_ctor_get(v___x_2637_, 0);
lean_inc(v_a_2638_);
lean_dec_ref_known(v___x_2637_, 1);
v___x_2639_ = lean_array_get_size(v___y_2587_);
v___x_2640_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__69));
v___x_2641_ = lean_nat_dec_lt(v___x_2578_, v___x_2639_);
if (v___x_2641_ == 0)
{
v___y_2518_ = v___x_2610_;
v___y_2519_ = v_a_2638_;
v___y_2520_ = v___y_2581_;
v___y_2521_ = v___y_2582_;
v___y_2522_ = v___y_2586_;
v___y_2523_ = v___y_2588_;
v___y_2524_ = v___y_2587_;
v___y_2525_ = v___y_2589_;
v___y_2526_ = v___y_2590_;
v___y_2527_ = v___y_2593_;
v___y_2528_ = v___y_2595_;
v___y_2529_ = v___x_2612_;
v___y_2530_ = v___y_2596_;
v___y_2531_ = v___x_2640_;
goto v___jp_2517_;
}
else
{
uint8_t v___x_2642_; 
v___x_2642_ = lean_nat_dec_le(v___x_2639_, v___x_2639_);
if (v___x_2642_ == 0)
{
if (v___x_2641_ == 0)
{
v___y_2518_ = v___x_2610_;
v___y_2519_ = v_a_2638_;
v___y_2520_ = v___y_2581_;
v___y_2521_ = v___y_2582_;
v___y_2522_ = v___y_2586_;
v___y_2523_ = v___y_2588_;
v___y_2524_ = v___y_2587_;
v___y_2525_ = v___y_2589_;
v___y_2526_ = v___y_2590_;
v___y_2527_ = v___y_2593_;
v___y_2528_ = v___y_2595_;
v___y_2529_ = v___x_2612_;
v___y_2530_ = v___y_2596_;
v___y_2531_ = v___x_2640_;
goto v___jp_2517_;
}
else
{
size_t v___x_2643_; lean_object* v___x_2644_; 
v___x_2643_ = lean_usize_of_nat(v___x_2639_);
v___x_2644_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_elabNotation_spec__8(v___y_2587_, v___y_2586_, v___x_2643_, v___x_2640_);
v___y_2518_ = v___x_2610_;
v___y_2519_ = v_a_2638_;
v___y_2520_ = v___y_2581_;
v___y_2521_ = v___y_2582_;
v___y_2522_ = v___y_2586_;
v___y_2523_ = v___y_2588_;
v___y_2524_ = v___y_2587_;
v___y_2525_ = v___y_2589_;
v___y_2526_ = v___y_2590_;
v___y_2527_ = v___y_2593_;
v___y_2528_ = v___y_2595_;
v___y_2529_ = v___x_2612_;
v___y_2530_ = v___y_2596_;
v___y_2531_ = v___x_2644_;
goto v___jp_2517_;
}
}
else
{
size_t v___x_2645_; lean_object* v___x_2646_; 
v___x_2645_ = lean_usize_of_nat(v___x_2639_);
v___x_2646_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_elabNotation_spec__8(v___y_2587_, v___y_2586_, v___x_2645_, v___x_2640_);
v___y_2518_ = v___x_2610_;
v___y_2519_ = v_a_2638_;
v___y_2520_ = v___y_2581_;
v___y_2521_ = v___y_2582_;
v___y_2522_ = v___y_2586_;
v___y_2523_ = v___y_2588_;
v___y_2524_ = v___y_2587_;
v___y_2525_ = v___y_2589_;
v___y_2526_ = v___y_2590_;
v___y_2527_ = v___y_2593_;
v___y_2528_ = v___y_2595_;
v___y_2529_ = v___x_2612_;
v___y_2530_ = v___y_2596_;
v___y_2531_ = v___x_2646_;
goto v___jp_2517_;
}
}
}
else
{
lean_object* v_a_2647_; lean_object* v___x_2649_; uint8_t v_isShared_2650_; uint8_t v_isSharedCheck_2654_; 
lean_dec(v___y_2596_);
lean_dec(v___y_2588_);
lean_dec(v___y_2587_);
v_a_2647_ = lean_ctor_get(v___x_2637_, 0);
v_isSharedCheck_2654_ = !lean_is_exclusive(v___x_2637_);
if (v_isSharedCheck_2654_ == 0)
{
v___x_2649_ = v___x_2637_;
v_isShared_2650_ = v_isSharedCheck_2654_;
goto v_resetjp_2648_;
}
else
{
lean_inc(v_a_2647_);
lean_dec(v___x_2637_);
v___x_2649_ = lean_box(0);
v_isShared_2650_ = v_isSharedCheck_2654_;
goto v_resetjp_2648_;
}
v_resetjp_2648_:
{
lean_object* v___x_2652_; 
if (v_isShared_2650_ == 0)
{
v___x_2652_ = v___x_2649_;
goto v_reusejp_2651_;
}
else
{
lean_object* v_reuseFailAlloc_2653_; 
v_reuseFailAlloc_2653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2653_, 0, v_a_2647_);
v___x_2652_ = v_reuseFailAlloc_2653_;
goto v_reusejp_2651_;
}
v_reusejp_2651_:
{
return v___x_2652_;
}
}
}
}
v___jp_2655_:
{
lean_object* v___x_2676_; lean_object* v___x_2677_; 
lean_inc_ref(v___y_2672_);
v___x_2676_ = l_Array_append___redArg(v___y_2672_, v___y_2675_);
lean_dec_ref(v___y_2675_);
lean_inc(v___y_2671_);
lean_inc(v___y_2674_);
v___x_2677_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2677_, 0, v___y_2674_);
lean_ctor_set(v___x_2677_, 1, v___y_2671_);
lean_ctor_set(v___x_2677_, 2, v___x_2676_);
if (lean_obj_tag(v___y_2658_) == 1)
{
lean_object* v_val_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; 
v_val_2678_ = lean_ctor_get(v___y_2658_, 0);
lean_inc(v_val_2678_);
lean_dec_ref_known(v___y_2658_, 1);
v___x_2679_ = ((lean_object*)(l_Lean_Elab_Command_elabNotation___closed__10));
v___x_2680_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__53));
lean_inc_n(v___y_2674_, 5);
v___x_2681_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2681_, 0, v___y_2674_);
lean_ctor_set(v___x_2681_, 1, v___x_2680_);
v___x_2682_ = ((lean_object*)(l_Lean_Elab_Command_elabNotation___closed__11));
v___x_2683_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2683_, 0, v___y_2674_);
lean_ctor_set(v___x_2683_, 1, v___x_2682_);
v___x_2684_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__26));
v___x_2685_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2685_, 0, v___y_2674_);
lean_ctor_set(v___x_2685_, 1, v___x_2684_);
v___x_2686_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__37));
v___x_2687_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2687_, 0, v___y_2674_);
lean_ctor_set(v___x_2687_, 1, v___x_2686_);
v___x_2688_ = l_Lean_Syntax_node5(v___y_2674_, v___x_2679_, v___x_2681_, v___x_2683_, v___x_2685_, v_val_2678_, v___x_2687_);
v___x_2689_ = l_Array_mkArray1___redArg(v___x_2688_);
v___y_2580_ = v___y_2656_;
v___y_2581_ = v___y_2657_;
v___y_2582_ = v___y_2659_;
v___y_2583_ = v___y_2660_;
v___y_2584_ = v___y_2661_;
v___y_2585_ = v___y_2662_;
v___y_2586_ = v___y_2663_;
v___y_2587_ = v___y_2664_;
v___y_2588_ = v___y_2665_;
v___y_2589_ = v___y_2666_;
v___y_2590_ = v___y_2667_;
v___y_2591_ = v___y_2669_;
v___y_2592_ = v___y_2668_;
v___y_2593_ = v___y_2671_;
v___y_2594_ = v___y_2670_;
v___y_2595_ = v___y_2672_;
v___y_2596_ = v___y_2673_;
v___y_2597_ = v___x_2677_;
v___y_2598_ = v___y_2674_;
v___y_2599_ = v___x_2689_;
goto v___jp_2579_;
}
else
{
lean_object* v___x_2690_; 
lean_dec(v___y_2658_);
v___x_2690_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__7));
v___y_2580_ = v___y_2656_;
v___y_2581_ = v___y_2657_;
v___y_2582_ = v___y_2659_;
v___y_2583_ = v___y_2660_;
v___y_2584_ = v___y_2661_;
v___y_2585_ = v___y_2662_;
v___y_2586_ = v___y_2663_;
v___y_2587_ = v___y_2664_;
v___y_2588_ = v___y_2665_;
v___y_2589_ = v___y_2666_;
v___y_2590_ = v___y_2667_;
v___y_2591_ = v___y_2669_;
v___y_2592_ = v___y_2668_;
v___y_2593_ = v___y_2671_;
v___y_2594_ = v___y_2670_;
v___y_2595_ = v___y_2672_;
v___y_2596_ = v___y_2673_;
v___y_2597_ = v___x_2677_;
v___y_2598_ = v___y_2674_;
v___y_2599_ = v___x_2690_;
goto v___jp_2579_;
}
}
v___jp_2691_:
{
lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2714_; 
lean_inc_ref(v___y_2707_);
v___x_2712_ = l_Array_append___redArg(v___y_2707_, v___y_2711_);
lean_dec_ref(v___y_2711_);
lean_inc(v___y_2706_);
lean_inc_n(v___y_2709_, 2);
v___x_2713_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2713_, 0, v___y_2709_);
lean_ctor_set(v___x_2713_, 1, v___y_2706_);
lean_ctor_set(v___x_2713_, 2, v___x_2712_);
lean_inc_ref(v___y_2710_);
v___x_2714_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2714_, 0, v___y_2709_);
lean_ctor_set(v___x_2714_, 1, v___y_2710_);
if (lean_obj_tag(v___y_2694_) == 1)
{
lean_object* v_val_2715_; lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; 
v_val_2715_ = lean_ctor_get(v___y_2694_, 0);
lean_inc(v_val_2715_);
lean_dec_ref_known(v___y_2694_, 1);
v___x_2716_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__5));
v___x_2717_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__6));
lean_inc_n(v___y_2709_, 2);
v___x_2718_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2718_, 0, v___y_2709_);
lean_ctor_set(v___x_2718_, 1, v___x_2717_);
v___x_2719_ = l_Lean_Syntax_node2(v___y_2709_, v___x_2716_, v___x_2718_, v_val_2715_);
v___x_2720_ = l_Array_mkArray1___redArg(v___x_2719_);
v___y_2656_ = v___y_2692_;
v___y_2657_ = v___y_2693_;
v___y_2658_ = v___y_2695_;
v___y_2659_ = v___y_2696_;
v___y_2660_ = v___x_2714_;
v___y_2661_ = v___x_2713_;
v___y_2662_ = v___y_2697_;
v___y_2663_ = v___y_2698_;
v___y_2664_ = v___y_2699_;
v___y_2665_ = v___y_2700_;
v___y_2666_ = v___y_2701_;
v___y_2667_ = v___y_2702_;
v___y_2668_ = v___y_2704_;
v___y_2669_ = v___y_2703_;
v___y_2670_ = v___y_2705_;
v___y_2671_ = v___y_2706_;
v___y_2672_ = v___y_2707_;
v___y_2673_ = v___y_2708_;
v___y_2674_ = v___y_2709_;
v___y_2675_ = v___x_2720_;
goto v___jp_2655_;
}
else
{
lean_object* v___x_2721_; 
lean_dec(v___y_2694_);
v___x_2721_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__7));
v___y_2656_ = v___y_2692_;
v___y_2657_ = v___y_2693_;
v___y_2658_ = v___y_2695_;
v___y_2659_ = v___y_2696_;
v___y_2660_ = v___x_2714_;
v___y_2661_ = v___x_2713_;
v___y_2662_ = v___y_2697_;
v___y_2663_ = v___y_2698_;
v___y_2664_ = v___y_2699_;
v___y_2665_ = v___y_2700_;
v___y_2666_ = v___y_2701_;
v___y_2667_ = v___y_2702_;
v___y_2668_ = v___y_2704_;
v___y_2669_ = v___y_2703_;
v___y_2670_ = v___y_2705_;
v___y_2671_ = v___y_2706_;
v___y_2672_ = v___y_2707_;
v___y_2673_ = v___y_2708_;
v___y_2674_ = v___y_2709_;
v___y_2675_ = v___x_2721_;
goto v___jp_2655_;
}
}
v___jp_2722_:
{
lean_object* v___x_2743_; lean_object* v___x_2744_; 
lean_inc_ref(v___y_2738_);
v___x_2743_ = l_Array_append___redArg(v___y_2738_, v___y_2742_);
lean_dec_ref(v___y_2742_);
lean_inc(v___y_2737_);
lean_inc(v___y_2741_);
v___x_2744_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2744_, 0, v___y_2741_);
lean_ctor_set(v___x_2744_, 1, v___y_2737_);
lean_ctor_set(v___x_2744_, 2, v___x_2743_);
if (lean_obj_tag(v___y_2729_) == 1)
{
lean_object* v_val_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; lean_object* v___x_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; 
v_val_2745_ = lean_ctor_get(v___y_2729_, 0);
lean_inc(v_val_2745_);
lean_dec_ref_known(v___y_2729_, 1);
v___x_2746_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__11));
lean_inc_ref(v___y_2734_);
v___x_2747_ = l_Lean_Name_mkStr4(v___x_2460_, v___x_2461_, v___y_2734_, v___x_2746_);
v___x_2748_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__13));
lean_inc_n(v___y_2741_, 4);
v___x_2749_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2749_, 0, v___y_2741_);
lean_ctor_set(v___x_2749_, 1, v___x_2748_);
lean_inc_ref(v___y_2738_);
v___x_2750_ = l_Array_append___redArg(v___y_2738_, v_val_2745_);
lean_dec(v_val_2745_);
lean_inc(v___y_2737_);
v___x_2751_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2751_, 0, v___y_2741_);
lean_ctor_set(v___x_2751_, 1, v___y_2737_);
lean_ctor_set(v___x_2751_, 2, v___x_2750_);
v___x_2752_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__17));
v___x_2753_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2753_, 0, v___y_2741_);
lean_ctor_set(v___x_2753_, 1, v___x_2752_);
v___x_2754_ = l_Lean_Syntax_node3(v___y_2741_, v___x_2747_, v___x_2749_, v___x_2751_, v___x_2753_);
v___x_2755_ = l_Array_mkArray1___redArg(v___x_2754_);
v___y_2692_ = v___y_2723_;
v___y_2693_ = v___y_2724_;
v___y_2694_ = v___y_2725_;
v___y_2695_ = v___y_2726_;
v___y_2696_ = v___y_2727_;
v___y_2697_ = v___y_2728_;
v___y_2698_ = v___y_2730_;
v___y_2699_ = v___y_2731_;
v___y_2700_ = v___y_2732_;
v___y_2701_ = v___y_2733_;
v___y_2702_ = v___y_2734_;
v___y_2703_ = v___x_2744_;
v___y_2704_ = v___y_2735_;
v___y_2705_ = v___y_2736_;
v___y_2706_ = v___y_2737_;
v___y_2707_ = v___y_2738_;
v___y_2708_ = v___y_2739_;
v___y_2709_ = v___y_2741_;
v___y_2710_ = v___y_2740_;
v___y_2711_ = v___x_2755_;
goto v___jp_2691_;
}
else
{
lean_object* v___x_2756_; 
lean_dec(v___y_2729_);
v___x_2756_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__7));
v___y_2692_ = v___y_2723_;
v___y_2693_ = v___y_2724_;
v___y_2694_ = v___y_2725_;
v___y_2695_ = v___y_2726_;
v___y_2696_ = v___y_2727_;
v___y_2697_ = v___y_2728_;
v___y_2698_ = v___y_2730_;
v___y_2699_ = v___y_2731_;
v___y_2700_ = v___y_2732_;
v___y_2701_ = v___y_2733_;
v___y_2702_ = v___y_2734_;
v___y_2703_ = v___x_2744_;
v___y_2704_ = v___y_2735_;
v___y_2705_ = v___y_2736_;
v___y_2706_ = v___y_2737_;
v___y_2707_ = v___y_2738_;
v___y_2708_ = v___y_2739_;
v___y_2709_ = v___y_2741_;
v___y_2710_ = v___y_2740_;
v___y_2711_ = v___x_2756_;
goto v___jp_2691_;
}
}
v___jp_2757_:
{
lean_object* v___x_2774_; lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; 
v___x_2774_ = ((lean_object*)(l_Lean_Elab_Command_elabNotation___closed__12));
v___x_2775_ = ((lean_object*)(l_Lean_Elab_Command_elabNotation___closed__13));
v___x_2776_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__13));
v___x_2777_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__14, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__14_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__14);
if (lean_obj_tag(v___y_2758_) == 1)
{
lean_object* v_val_2778_; lean_object* v___x_2779_; 
v_val_2778_ = lean_ctor_get(v___y_2758_, 0);
lean_inc(v_val_2778_);
lean_dec_ref_known(v___y_2758_, 1);
v___x_2779_ = l_Array_mkArray1___redArg(v_val_2778_);
v___y_2723_ = v___y_2759_;
v___y_2724_ = v___y_2760_;
v___y_2725_ = v___y_2761_;
v___y_2726_ = v___y_2762_;
v___y_2727_ = v___y_2763_;
v___y_2728_ = v___y_2764_;
v___y_2729_ = v___y_2765_;
v___y_2730_ = v___y_2766_;
v___y_2731_ = v___y_2767_;
v___y_2732_ = v___y_2768_;
v___y_2733_ = v___y_2769_;
v___y_2734_ = v___y_2770_;
v___y_2735_ = v___x_2775_;
v___y_2736_ = v___y_2771_;
v___y_2737_ = v___x_2776_;
v___y_2738_ = v___x_2777_;
v___y_2739_ = v___y_2772_;
v___y_2740_ = v___x_2774_;
v___y_2741_ = v___y_2773_;
v___y_2742_ = v___x_2779_;
goto v___jp_2722_;
}
else
{
lean_object* v___x_2780_; 
lean_dec(v___y_2758_);
v___x_2780_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__7));
v___y_2723_ = v___y_2759_;
v___y_2724_ = v___y_2760_;
v___y_2725_ = v___y_2761_;
v___y_2726_ = v___y_2762_;
v___y_2727_ = v___y_2763_;
v___y_2728_ = v___y_2764_;
v___y_2729_ = v___y_2765_;
v___y_2730_ = v___y_2766_;
v___y_2731_ = v___y_2767_;
v___y_2732_ = v___y_2768_;
v___y_2733_ = v___y_2769_;
v___y_2734_ = v___y_2770_;
v___y_2735_ = v___x_2775_;
v___y_2736_ = v___y_2771_;
v___y_2737_ = v___x_2776_;
v___y_2738_ = v___x_2777_;
v___y_2739_ = v___y_2772_;
v___y_2740_ = v___x_2774_;
v___y_2741_ = v___y_2773_;
v___y_2742_ = v___x_2780_;
goto v___jp_2722_;
}
}
v___jp_2781_:
{
lean_object* v___x_2791_; lean_object* v___x_2792_; lean_object* v___x_2793_; lean_object* v_rhs_2794_; lean_object* v___x_2795_; lean_object* v___x_2796_; lean_object* v_items_2797_; lean_object* v_attrs_x3f_2798_; lean_object* v___x_2799_; lean_object* v___x_2800_; 
v___x_2791_ = lean_unsigned_to_nat(7u);
v___x_2792_ = l_Lean_Syntax_getArg(v_x_2429_, v___x_2791_);
v___x_2793_ = lean_unsigned_to_nat(9u);
v_rhs_2794_ = l_Lean_Syntax_getArg(v_x_2429_, v___x_2793_);
v___x_2795_ = ((lean_object*)(l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__3));
v___x_2796_ = l_Lean_Syntax_getArgs(v___x_2792_);
lean_dec(v___x_2792_);
v_items_2797_ = l_unsafeCast___redArg(v___x_2796_);
lean_dec_ref(v___x_2796_);
lean_inc(v_rhs_2794_);
v_attrs_x3f_2798_ = l_Lean_Elab_Command_addInheritDocDefault(v_rhs_2794_, v___y_2786_);
v___x_2799_ = lean_alloc_closure((void*)(l_Lean_evalOptPrio___boxed), 3, 1);
lean_closure_set(v___x_2799_, 0, v_prio_x3f_2788_);
v___x_2800_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg(v___x_2799_, v___y_2789_, v___y_2790_);
if (lean_obj_tag(v___x_2800_) == 0)
{
lean_object* v_a_2801_; size_t v_sz_2802_; size_t v___x_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; lean_object* v___x_2808_; lean_object* v___x_2809_; 
v_a_2801_ = lean_ctor_get(v___x_2800_, 0);
lean_inc(v_a_2801_);
lean_dec_ref_known(v___x_2800_, 1);
v_sz_2802_ = lean_array_size(v_items_2797_);
v___x_2803_ = ((size_t)0ULL);
v___x_2804_ = l_unsafeCast___redArg(v_items_2797_);
v___x_2805_ = lean_box_usize(v_sz_2802_);
v___x_2806_ = ((lean_object*)(l_Lean_Elab_Command_removeParentheses___boxed__const__1));
v___x_2807_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__2___boxed), 5, 3);
lean_closure_set(v___x_2807_, 0, v___x_2805_);
lean_closure_set(v___x_2807_, 1, v___x_2806_);
lean_closure_set(v___x_2807_, 2, v___x_2804_);
v___x_2808_ = l_unsafeCast___redArg(v___x_2807_);
lean_dec_ref(v___x_2807_);
v___x_2809_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg(v___x_2808_, v___y_2789_, v___y_2790_);
if (lean_obj_tag(v___x_2809_) == 0)
{
lean_object* v_a_2810_; uint8_t v___x_2811_; lean_object* v___x_2812_; lean_object* v___x_2813_; 
v_a_2810_ = lean_ctor_get(v___x_2809_, 0);
lean_inc(v_a_2810_);
lean_dec_ref_known(v___x_2809_, 1);
v___x_2811_ = 0;
v___x_2812_ = l_Lean_mkIdentFrom(v_x_2429_, v___x_2795_, v___x_2811_);
lean_dec(v_x_2429_);
v___x_2813_ = l_Lean_Elab_Command_getRef___redArg(v___y_2789_);
if (lean_obj_tag(v___x_2813_) == 0)
{
lean_object* v_a_2814_; lean_object* v___x_2815_; lean_object* v___x_2816_; 
v_a_2814_ = lean_ctor_get(v___x_2813_, 0);
lean_inc(v_a_2814_);
lean_dec_ref_known(v___x_2813_, 1);
v___x_2815_ = l_Lean_SourceInfo_fromRef(v_a_2814_, v___x_2811_);
lean_dec(v_a_2814_);
v___x_2816_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_2789_);
if (lean_obj_tag(v___x_2816_) == 0)
{
lean_object* v_quotContext_x3f_2817_; 
lean_dec_ref_known(v___x_2816_, 1);
v_quotContext_x3f_2817_ = lean_ctor_get(v___y_2789_, 5);
if (lean_obj_tag(v_quotContext_x3f_2817_) == 0)
{
lean_object* v___x_2818_; 
v___x_2818_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabNotation_spec__7___redArg(v___y_2790_);
lean_dec_ref(v___x_2818_);
v___y_2758_ = v___y_2782_;
v___y_2759_ = v_a_2810_;
v___y_2760_ = v___y_2790_;
v___y_2761_ = v___y_2784_;
v___y_2762_ = v___y_2785_;
v___y_2763_ = v___x_2811_;
v___y_2764_ = v_a_2801_;
v___y_2765_ = v_attrs_x3f_2798_;
v___y_2766_ = v___x_2803_;
v___y_2767_ = v_items_2797_;
v___y_2768_ = v_rhs_2794_;
v___y_2769_ = v___y_2789_;
v___y_2770_ = v___y_2783_;
v___y_2771_ = v___x_2812_;
v___y_2772_ = v___y_2787_;
v___y_2773_ = v___x_2815_;
goto v___jp_2757_;
}
else
{
v___y_2758_ = v___y_2782_;
v___y_2759_ = v_a_2810_;
v___y_2760_ = v___y_2790_;
v___y_2761_ = v___y_2784_;
v___y_2762_ = v___y_2785_;
v___y_2763_ = v___x_2811_;
v___y_2764_ = v_a_2801_;
v___y_2765_ = v_attrs_x3f_2798_;
v___y_2766_ = v___x_2803_;
v___y_2767_ = v_items_2797_;
v___y_2768_ = v_rhs_2794_;
v___y_2769_ = v___y_2789_;
v___y_2770_ = v___y_2783_;
v___y_2771_ = v___x_2812_;
v___y_2772_ = v___y_2787_;
v___y_2773_ = v___x_2815_;
goto v___jp_2757_;
}
}
else
{
lean_object* v_a_2819_; lean_object* v___x_2821_; uint8_t v_isShared_2822_; uint8_t v_isSharedCheck_2826_; 
lean_dec(v___x_2815_);
lean_dec(v___x_2812_);
lean_dec(v_a_2810_);
lean_dec(v_a_2801_);
lean_dec(v_attrs_x3f_2798_);
lean_dec(v_items_2797_);
lean_dec(v_rhs_2794_);
lean_dec(v___y_2787_);
lean_dec(v___y_2785_);
lean_dec(v___y_2784_);
lean_dec(v___y_2782_);
v_a_2819_ = lean_ctor_get(v___x_2816_, 0);
v_isSharedCheck_2826_ = !lean_is_exclusive(v___x_2816_);
if (v_isSharedCheck_2826_ == 0)
{
v___x_2821_ = v___x_2816_;
v_isShared_2822_ = v_isSharedCheck_2826_;
goto v_resetjp_2820_;
}
else
{
lean_inc(v_a_2819_);
lean_dec(v___x_2816_);
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
else
{
lean_object* v_a_2827_; lean_object* v___x_2829_; uint8_t v_isShared_2830_; uint8_t v_isSharedCheck_2834_; 
lean_dec(v___x_2812_);
lean_dec(v_a_2810_);
lean_dec(v_a_2801_);
lean_dec(v_attrs_x3f_2798_);
lean_dec(v_items_2797_);
lean_dec(v_rhs_2794_);
lean_dec(v___y_2787_);
lean_dec(v___y_2785_);
lean_dec(v___y_2784_);
lean_dec(v___y_2782_);
v_a_2827_ = lean_ctor_get(v___x_2813_, 0);
v_isSharedCheck_2834_ = !lean_is_exclusive(v___x_2813_);
if (v_isSharedCheck_2834_ == 0)
{
v___x_2829_ = v___x_2813_;
v_isShared_2830_ = v_isSharedCheck_2834_;
goto v_resetjp_2828_;
}
else
{
lean_inc(v_a_2827_);
lean_dec(v___x_2813_);
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
lean_dec(v_a_2801_);
lean_dec(v_attrs_x3f_2798_);
lean_dec(v_items_2797_);
lean_dec(v_rhs_2794_);
lean_dec(v___y_2787_);
lean_dec(v___y_2785_);
lean_dec(v___y_2784_);
lean_dec(v___y_2782_);
lean_dec(v_x_2429_);
v_a_2835_ = lean_ctor_get(v___x_2809_, 0);
v_isSharedCheck_2842_ = !lean_is_exclusive(v___x_2809_);
if (v_isSharedCheck_2842_ == 0)
{
v___x_2837_ = v___x_2809_;
v_isShared_2838_ = v_isSharedCheck_2842_;
goto v_resetjp_2836_;
}
else
{
lean_inc(v_a_2835_);
lean_dec(v___x_2809_);
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
lean_dec(v_attrs_x3f_2798_);
lean_dec(v_items_2797_);
lean_dec(v_rhs_2794_);
lean_dec(v___y_2787_);
lean_dec(v___y_2785_);
lean_dec(v___y_2784_);
lean_dec(v___y_2782_);
lean_dec(v_x_2429_);
v_a_2843_ = lean_ctor_get(v___x_2800_, 0);
v_isSharedCheck_2850_ = !lean_is_exclusive(v___x_2800_);
if (v_isSharedCheck_2850_ == 0)
{
v___x_2845_ = v___x_2800_;
v_isShared_2846_ = v_isSharedCheck_2850_;
goto v_resetjp_2844_;
}
else
{
lean_inc(v_a_2843_);
lean_dec(v___x_2800_);
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
lean_object* v___x_2862_; lean_object* v___x_2863_; uint8_t v___x_2864_; 
v___x_2862_ = lean_unsigned_to_nat(6u);
v___x_2863_ = l_Lean_Syntax_getArg(v_x_2429_, v___x_2862_);
v___x_2864_ = l_Lean_Syntax_isNone(v___x_2863_);
if (v___x_2864_ == 0)
{
uint8_t v___x_2865_; 
lean_inc(v___x_2863_);
v___x_2865_ = l_Lean_Syntax_matchesNull(v___x_2863_, v___y_2858_);
if (v___x_2865_ == 0)
{
lean_object* v___x_2866_; 
lean_dec(v___x_2863_);
lean_dec(v_name_x3f_2859_);
lean_dec(v___y_2857_);
lean_dec(v___y_2856_);
lean_dec(v___y_2855_);
lean_dec(v___y_2853_);
lean_dec(v_x_2429_);
v___x_2866_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg();
return v___x_2866_;
}
else
{
lean_object* v___x_2867_; lean_object* v___x_2868_; uint8_t v___x_2869_; 
v___x_2867_ = l_Lean_Syntax_getArg(v___x_2863_, v___x_2578_);
lean_dec(v___x_2863_);
v___x_2868_ = ((lean_object*)(l_Lean_Elab_Command_elabNotation___closed__7));
lean_inc(v___x_2867_);
v___x_2869_ = l_Lean_Syntax_isOfKind(v___x_2867_, v___x_2868_);
if (v___x_2869_ == 0)
{
lean_object* v___x_2870_; 
lean_dec(v___x_2867_);
lean_dec(v_name_x3f_2859_);
lean_dec(v___y_2857_);
lean_dec(v___y_2856_);
lean_dec(v___y_2855_);
lean_dec(v___y_2853_);
lean_dec(v_x_2429_);
v___x_2870_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg();
return v___x_2870_;
}
else
{
lean_object* v_prio_x3f_2871_; lean_object* v___x_2872_; 
v_prio_x3f_2871_ = l_Lean_Syntax_getArg(v___x_2867_, v___y_2852_);
lean_dec(v___x_2867_);
v___x_2872_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2872_, 0, v_prio_x3f_2871_);
v___y_2782_ = v___y_2853_;
v___y_2783_ = v___y_2854_;
v___y_2784_ = v___y_2855_;
v___y_2785_ = v_name_x3f_2859_;
v___y_2786_ = v___y_2856_;
v___y_2787_ = v___y_2857_;
v_prio_x3f_2788_ = v___x_2872_;
v___y_2789_ = v___y_2860_;
v___y_2790_ = v___y_2861_;
goto v___jp_2781_;
}
}
}
else
{
lean_object* v___x_2873_; 
lean_dec(v___x_2863_);
v___x_2873_ = lean_box(0);
v___y_2782_ = v___y_2853_;
v___y_2783_ = v___y_2854_;
v___y_2784_ = v___y_2855_;
v___y_2785_ = v_name_x3f_2859_;
v___y_2786_ = v___y_2856_;
v___y_2787_ = v___y_2857_;
v_prio_x3f_2788_ = v___x_2873_;
v___y_2789_ = v___y_2860_;
v___y_2790_ = v___y_2861_;
goto v___jp_2781_;
}
}
v___jp_2874_:
{
lean_object* v___x_2884_; lean_object* v___x_2885_; uint8_t v___x_2886_; 
v___x_2884_ = lean_unsigned_to_nat(5u);
v___x_2885_ = l_Lean_Syntax_getArg(v_x_2429_, v___x_2884_);
v___x_2886_ = l_Lean_Syntax_isNone(v___x_2885_);
if (v___x_2886_ == 0)
{
uint8_t v___x_2887_; 
lean_inc(v___x_2885_);
v___x_2887_ = l_Lean_Syntax_matchesNull(v___x_2885_, v___y_2880_);
if (v___x_2887_ == 0)
{
lean_object* v___x_2888_; 
lean_dec(v___x_2885_);
lean_dec(v_prec_x3f_2881_);
lean_dec(v___y_2879_);
lean_dec(v___y_2878_);
lean_dec(v___y_2875_);
lean_dec(v_x_2429_);
v___x_2888_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg();
return v___x_2888_;
}
else
{
lean_object* v___x_2889_; lean_object* v___x_2890_; uint8_t v___x_2891_; 
v___x_2889_ = l_Lean_Syntax_getArg(v___x_2885_, v___x_2578_);
lean_dec(v___x_2885_);
v___x_2890_ = ((lean_object*)(l_Lean_Elab_Command_elabNotation___closed__10));
lean_inc(v___x_2889_);
v___x_2891_ = l_Lean_Syntax_isOfKind(v___x_2889_, v___x_2890_);
if (v___x_2891_ == 0)
{
lean_object* v___x_2892_; 
lean_dec(v___x_2889_);
lean_dec(v_prec_x3f_2881_);
lean_dec(v___y_2879_);
lean_dec(v___y_2878_);
lean_dec(v___y_2875_);
lean_dec(v_x_2429_);
v___x_2892_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg();
return v___x_2892_;
}
else
{
lean_object* v_name_x3f_2893_; lean_object* v___x_2894_; 
v_name_x3f_2893_ = l_Lean_Syntax_getArg(v___x_2889_, v___y_2876_);
lean_dec(v___x_2889_);
v___x_2894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2894_, 0, v_name_x3f_2893_);
v___y_2852_ = v___y_2876_;
v___y_2853_ = v___y_2875_;
v___y_2854_ = v___y_2877_;
v___y_2855_ = v_prec_x3f_2881_;
v___y_2856_ = v___y_2878_;
v___y_2857_ = v___y_2879_;
v___y_2858_ = v___y_2880_;
v_name_x3f_2859_ = v___x_2894_;
v___y_2860_ = v___y_2882_;
v___y_2861_ = v___y_2883_;
goto v___jp_2851_;
}
}
}
else
{
lean_object* v___x_2895_; 
lean_dec(v___x_2885_);
v___x_2895_ = lean_box(0);
v___y_2852_ = v___y_2876_;
v___y_2853_ = v___y_2875_;
v___y_2854_ = v___y_2877_;
v___y_2855_ = v_prec_x3f_2881_;
v___y_2856_ = v___y_2878_;
v___y_2857_ = v___y_2879_;
v___y_2858_ = v___y_2880_;
v_name_x3f_2859_ = v___x_2895_;
v___y_2860_ = v___y_2882_;
v___y_2861_ = v___y_2883_;
goto v___jp_2851_;
}
}
v___jp_2896_:
{
lean_object* v___x_2902_; lean_object* v_attrKind_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; uint8_t v___x_2906_; 
v___x_2902_ = lean_unsigned_to_nat(2u);
v_attrKind_2903_ = l_Lean_Syntax_getArg(v_x_2429_, v___x_2902_);
v___x_2904_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__2));
v___x_2905_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__6));
lean_inc(v_attrKind_2903_);
v___x_2906_ = l_Lean_Syntax_isOfKind(v_attrKind_2903_, v___x_2905_);
if (v___x_2906_ == 0)
{
lean_object* v___x_2907_; 
lean_dec(v_attrKind_2903_);
lean_dec(v_attrs_x3f_2899_);
lean_dec(v___y_2897_);
lean_dec(v_x_2429_);
v___x_2907_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg();
return v___x_2907_;
}
else
{
lean_object* v___x_2908_; lean_object* v___x_2909_; lean_object* v___x_2910_; uint8_t v___x_2911_; 
v___x_2908_ = lean_unsigned_to_nat(3u);
v___x_2909_ = lean_unsigned_to_nat(4u);
v___x_2910_ = l_Lean_Syntax_getArg(v_x_2429_, v___x_2909_);
v___x_2911_ = l_Lean_Syntax_isNone(v___x_2910_);
if (v___x_2911_ == 0)
{
uint8_t v___x_2912_; 
lean_inc(v___x_2910_);
v___x_2912_ = l_Lean_Syntax_matchesNull(v___x_2910_, v___y_2898_);
if (v___x_2912_ == 0)
{
lean_object* v___x_2913_; 
lean_dec(v___x_2910_);
lean_dec(v_attrKind_2903_);
lean_dec(v_attrs_x3f_2899_);
lean_dec(v___y_2897_);
lean_dec(v_x_2429_);
v___x_2913_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg();
return v___x_2913_;
}
else
{
lean_object* v___x_2914_; lean_object* v___x_2915_; uint8_t v___x_2916_; 
v___x_2914_ = l_Lean_Syntax_getArg(v___x_2910_, v___x_2578_);
lean_dec(v___x_2910_);
v___x_2915_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__5));
lean_inc(v___x_2914_);
v___x_2916_ = l_Lean_Syntax_isOfKind(v___x_2914_, v___x_2915_);
if (v___x_2916_ == 0)
{
lean_object* v___x_2917_; 
lean_dec(v___x_2914_);
lean_dec(v_attrKind_2903_);
lean_dec(v_attrs_x3f_2899_);
lean_dec(v___y_2897_);
lean_dec(v_x_2429_);
v___x_2917_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg();
return v___x_2917_;
}
else
{
lean_object* v_prec_x3f_2918_; lean_object* v___x_2919_; 
v_prec_x3f_2918_ = l_Lean_Syntax_getArg(v___x_2914_, v___y_2898_);
lean_dec(v___x_2914_);
v___x_2919_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2919_, 0, v_prec_x3f_2918_);
v___y_2875_ = v___y_2897_;
v___y_2876_ = v___x_2908_;
v___y_2877_ = v___x_2904_;
v___y_2878_ = v_attrs_x3f_2899_;
v___y_2879_ = v_attrKind_2903_;
v___y_2880_ = v___y_2898_;
v_prec_x3f_2881_ = v___x_2919_;
v___y_2882_ = v___y_2900_;
v___y_2883_ = v___y_2901_;
goto v___jp_2874_;
}
}
}
else
{
lean_object* v___x_2920_; 
lean_dec(v___x_2910_);
v___x_2920_ = lean_box(0);
v___y_2875_ = v___y_2897_;
v___y_2876_ = v___x_2908_;
v___y_2877_ = v___x_2904_;
v___y_2878_ = v_attrs_x3f_2899_;
v___y_2879_ = v_attrKind_2903_;
v___y_2880_ = v___y_2898_;
v_prec_x3f_2881_ = v___x_2920_;
v___y_2882_ = v___y_2900_;
v___y_2883_ = v___y_2901_;
goto v___jp_2874_;
}
}
}
v___jp_2921_:
{
lean_object* v___x_2925_; lean_object* v___x_2926_; uint8_t v___x_2927_; 
v___x_2925_ = lean_unsigned_to_nat(1u);
v___x_2926_ = l_Lean_Syntax_getArg(v_x_2429_, v___x_2925_);
v___x_2927_ = l_Lean_Syntax_isNone(v___x_2926_);
if (v___x_2927_ == 0)
{
uint8_t v___x_2928_; 
lean_inc(v___x_2926_);
v___x_2928_ = l_Lean_Syntax_matchesNull(v___x_2926_, v___x_2925_);
if (v___x_2928_ == 0)
{
lean_object* v___x_2929_; 
lean_dec(v___x_2926_);
lean_dec(v_doc_x3f_2922_);
lean_dec(v_x_2429_);
v___x_2929_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg();
return v___x_2929_;
}
else
{
lean_object* v___x_2930_; lean_object* v___x_2931_; uint8_t v___x_2932_; 
v___x_2930_ = l_Lean_Syntax_getArg(v___x_2926_, v___x_2578_);
lean_dec(v___x_2926_);
v___x_2931_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__12));
lean_inc(v___x_2930_);
v___x_2932_ = l_Lean_Syntax_isOfKind(v___x_2930_, v___x_2931_);
if (v___x_2932_ == 0)
{
lean_object* v___x_2933_; 
lean_dec(v___x_2930_);
lean_dec(v_doc_x3f_2922_);
lean_dec(v_x_2429_);
v___x_2933_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg();
return v___x_2933_;
}
else
{
lean_object* v___x_2934_; lean_object* v_attrs_x3f_2935_; lean_object* v___x_2936_; 
v___x_2934_ = l_Lean_Syntax_getArg(v___x_2930_, v___x_2925_);
lean_dec(v___x_2930_);
v_attrs_x3f_2935_ = l_Lean_Syntax_getArgs(v___x_2934_);
lean_dec(v___x_2934_);
v___x_2936_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2936_, 0, v_attrs_x3f_2935_);
v___y_2897_ = v_doc_x3f_2922_;
v___y_2898_ = v___x_2925_;
v_attrs_x3f_2899_ = v___x_2936_;
v___y_2900_ = v___y_2923_;
v___y_2901_ = v___y_2924_;
goto v___jp_2896_;
}
}
}
else
{
lean_object* v___x_2937_; 
lean_dec(v___x_2926_);
v___x_2937_ = lean_box(0);
v___y_2897_ = v_doc_x3f_2922_;
v___y_2898_ = v___x_2925_;
v_attrs_x3f_2899_ = v___x_2937_;
v___y_2900_ = v___y_2923_;
v___y_2901_ = v___y_2924_;
goto v___jp_2896_;
}
}
}
v___jp_2433_:
{
lean_object* v___x_2439_; lean_object* v___x_2440_; 
v___x_2439_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_mkUnexpander___boxed), 5, 3);
lean_closure_set(v___x_2439_, 0, v___y_2435_);
lean_closure_set(v___x_2439_, 1, v___y_2434_);
lean_closure_set(v___x_2439_, 2, v___y_2436_);
v___x_2440_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg(v___x_2439_, v___y_2437_, v___y_2438_);
if (lean_obj_tag(v___x_2440_) == 0)
{
lean_object* v_a_2441_; lean_object* v___x_2443_; uint8_t v_isShared_2444_; uint8_t v_isSharedCheck_2451_; 
v_a_2441_ = lean_ctor_get(v___x_2440_, 0);
v_isSharedCheck_2451_ = !lean_is_exclusive(v___x_2440_);
if (v_isSharedCheck_2451_ == 0)
{
v___x_2443_ = v___x_2440_;
v_isShared_2444_ = v_isSharedCheck_2451_;
goto v_resetjp_2442_;
}
else
{
lean_inc(v_a_2441_);
lean_dec(v___x_2440_);
v___x_2443_ = lean_box(0);
v_isShared_2444_ = v_isSharedCheck_2451_;
goto v_resetjp_2442_;
}
v_resetjp_2442_:
{
if (lean_obj_tag(v_a_2441_) == 1)
{
lean_object* v_val_2445_; lean_object* v___x_2446_; 
lean_del_object(v___x_2443_);
v_val_2445_ = lean_ctor_get(v_a_2441_, 0);
lean_inc(v_val_2445_);
lean_dec_ref_known(v_a_2441_, 1);
v___x_2446_ = l_Lean_Elab_Command_elabCommand(v_val_2445_, v___y_2437_, v___y_2438_);
return v___x_2446_;
}
else
{
lean_object* v___x_2447_; lean_object* v___x_2449_; 
lean_dec(v_a_2441_);
v___x_2447_ = lean_box(0);
if (v_isShared_2444_ == 0)
{
lean_ctor_set(v___x_2443_, 0, v___x_2447_);
v___x_2449_ = v___x_2443_;
goto v_reusejp_2448_;
}
else
{
lean_object* v_reuseFailAlloc_2450_; 
v_reuseFailAlloc_2450_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2450_, 0, v___x_2447_);
v___x_2449_ = v_reuseFailAlloc_2450_;
goto v_reusejp_2448_;
}
v_reusejp_2448_:
{
return v___x_2449_;
}
}
}
}
else
{
lean_object* v_a_2452_; lean_object* v___x_2454_; uint8_t v_isShared_2455_; uint8_t v_isSharedCheck_2459_; 
v_a_2452_ = lean_ctor_get(v___x_2440_, 0);
v_isSharedCheck_2459_ = !lean_is_exclusive(v___x_2440_);
if (v_isSharedCheck_2459_ == 0)
{
v___x_2454_ = v___x_2440_;
v_isShared_2455_ = v_isSharedCheck_2459_;
goto v_resetjp_2453_;
}
else
{
lean_inc(v_a_2452_);
lean_dec(v___x_2440_);
v___x_2454_ = lean_box(0);
v_isShared_2455_ = v_isSharedCheck_2459_;
goto v_resetjp_2453_;
}
v_resetjp_2453_:
{
lean_object* v___x_2457_; 
if (v_isShared_2455_ == 0)
{
v___x_2457_ = v___x_2454_;
goto v_reusejp_2456_;
}
else
{
lean_object* v_reuseFailAlloc_2458_; 
v_reuseFailAlloc_2458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2458_, 0, v_a_2452_);
v___x_2457_ = v_reuseFailAlloc_2458_;
goto v_reusejp_2456_;
}
v_reusejp_2456_:
{
return v___x_2457_;
}
}
}
}
v___jp_2464_:
{
lean_object* v___x_2475_; lean_object* v___x_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; lean_object* v___x_2489_; lean_object* v___x_2490_; lean_object* v___x_2491_; lean_object* v___x_2492_; lean_object* v___x_2493_; lean_object* v___x_2494_; lean_object* v___x_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; lean_object* v___x_2502_; lean_object* v___x_2503_; lean_object* v___x_2504_; uint8_t v___x_2505_; 
v___x_2475_ = ((lean_object*)(l_Lean_Elab_Command_elabNotation___closed__2));
v___x_2476_ = ((lean_object*)(l_Lean_Elab_Command_elabNotation___closed__3));
lean_inc_ref(v___y_2470_);
lean_inc_n(v___y_2468_, 4);
lean_inc_n(v___y_2471_, 15);
v___x_2477_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2477_, 0, v___y_2471_);
lean_ctor_set(v___x_2477_, 1, v___y_2468_);
lean_ctor_set(v___x_2477_, 2, v___y_2470_);
v___x_2478_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2478_, 0, v___y_2471_);
lean_ctor_set(v___x_2478_, 1, v___x_2475_);
v___x_2479_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__29));
lean_inc_ref_n(v___y_2466_, 4);
v___x_2480_ = l_Lean_Name_mkStr4(v___x_2460_, v___x_2461_, v___y_2466_, v___x_2479_);
v___x_2481_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__31));
v___x_2482_ = l_Lean_Name_mkStr4(v___x_2460_, v___x_2461_, v___y_2466_, v___x_2481_);
v___x_2483_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__33));
v___x_2484_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2484_, 0, v___y_2471_);
lean_ctor_set(v___x_2484_, 1, v___x_2483_);
v___x_2485_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__34));
v___x_2486_ = l_Lean_Name_mkStr4(v___x_2460_, v___x_2461_, v___y_2466_, v___x_2485_);
v___x_2487_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__36));
v___x_2488_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2488_, 0, v___y_2471_);
lean_ctor_set(v___x_2488_, 1, v___x_2487_);
lean_inc_ref(v___y_2472_);
v___x_2489_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2489_, 0, v___y_2471_);
lean_ctor_set(v___x_2489_, 1, v___y_2472_);
lean_inc_ref(v___x_2489_);
lean_inc(v___y_2469_);
lean_inc_ref(v___x_2488_);
lean_inc(v___x_2486_);
v___x_2490_ = l_Lean_Syntax_node3(v___y_2471_, v___x_2486_, v___x_2488_, v___y_2469_, v___x_2489_);
v___x_2491_ = l_Lean_Syntax_node1(v___y_2471_, v___y_2468_, v___x_2490_);
v___x_2492_ = l_Lean_Syntax_node1(v___y_2471_, v___y_2468_, v___x_2491_);
v___x_2493_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__38));
v___x_2494_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2494_, 0, v___y_2471_);
lean_ctor_set(v___x_2494_, 1, v___x_2493_);
v___x_2495_ = ((lean_object*)(l_Lean_Elab_Command_elabNotation___closed__4));
v___x_2496_ = l_Lean_Name_mkStr4(v___x_2460_, v___x_2461_, v___y_2466_, v___x_2495_);
v___x_2497_ = ((lean_object*)(l_Lean_Elab_Command_elabNotation___closed__5));
v___x_2498_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2498_, 0, v___y_2471_);
lean_ctor_set(v___x_2498_, 1, v___x_2497_);
lean_inc(v___y_2474_);
v___x_2499_ = l_Lean_Syntax_node3(v___y_2471_, v___x_2486_, v___x_2488_, v___y_2474_, v___x_2489_);
v___x_2500_ = l_Lean_Syntax_node2(v___y_2471_, v___x_2496_, v___x_2498_, v___x_2499_);
v___x_2501_ = l_Lean_Syntax_node4(v___y_2471_, v___x_2482_, v___x_2484_, v___x_2492_, v___x_2494_, v___x_2500_);
v___x_2502_ = l_Lean_Syntax_node1(v___y_2471_, v___y_2468_, v___x_2501_);
v___x_2503_ = l_Lean_Syntax_node1(v___y_2471_, v___x_2480_, v___x_2502_);
lean_inc_n(v___y_2473_, 2);
lean_inc_ref_n(v___x_2477_, 2);
v___x_2504_ = l_Lean_Syntax_node6(v___y_2471_, v___x_2476_, v___x_2477_, v___x_2477_, v___y_2473_, v___x_2478_, v___x_2477_, v___x_2503_);
v___x_2505_ = l_Lean_Elab_Command_isLocalAttrKind(v___y_2473_);
if (v___x_2505_ == 0)
{
lean_object* v___x_2506_; 
v___x_2506_ = l_Lean_Elab_Command_elabCommand(v___x_2504_, v___y_2465_, v___y_2467_);
if (lean_obj_tag(v___x_2506_) == 0)
{
lean_dec_ref_known(v___x_2506_, 1);
v___y_2434_ = v___y_2469_;
v___y_2435_ = v___y_2473_;
v___y_2436_ = v___y_2474_;
v___y_2437_ = v___y_2465_;
v___y_2438_ = v___y_2467_;
goto v___jp_2433_;
}
else
{
lean_dec(v___y_2474_);
lean_dec(v___y_2473_);
lean_dec(v___y_2469_);
return v___x_2506_;
}
}
else
{
lean_object* v___x_2507_; lean_object* v___x_2508_; lean_object* v_scopes_2509_; lean_object* v___x_2510_; lean_object* v_opts_2511_; lean_object* v___x_2512_; lean_object* v___x_2513_; lean_object* v___f_2514_; lean_object* v___x_2515_; lean_object* v___x_2516_; 
v___x_2507_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_2508_ = lean_st_ref_get(v___y_2467_);
v_scopes_2509_ = lean_ctor_get(v___x_2508_, 2);
lean_inc(v_scopes_2509_);
lean_dec(v___x_2508_);
v___x_2510_ = l_List_head_x21___redArg(v___x_2507_, v_scopes_2509_);
lean_dec(v_scopes_2509_);
v_opts_2511_ = lean_ctor_get(v___x_2510_, 1);
lean_inc_ref(v_opts_2511_);
lean_dec(v___x_2510_);
v___x_2512_ = l_Lean_Elab_Term_Quotation_quotPrecheck_allowSectionVars;
v___x_2513_ = l_Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6(v_opts_2511_, v___x_2512_, v___x_2463_);
v___f_2514_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabNotation___lam__0), 2, 1);
lean_closure_set(v___f_2514_, 0, v___x_2513_);
v___x_2515_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabCommand___boxed), 4, 1);
lean_closure_set(v___x_2515_, 0, v___x_2504_);
v___x_2516_ = l_Lean_Elab_Command_withScope___redArg(v___f_2514_, v___x_2515_, v___y_2465_, v___y_2467_);
if (lean_obj_tag(v___x_2516_) == 0)
{
lean_dec_ref_known(v___x_2516_, 1);
v___y_2434_ = v___y_2469_;
v___y_2435_ = v___y_2473_;
v___y_2436_ = v___y_2474_;
v___y_2437_ = v___y_2465_;
v___y_2438_ = v___y_2467_;
goto v___jp_2433_;
}
else
{
lean_dec(v___y_2474_);
lean_dec(v___y_2473_);
lean_dec(v___y_2469_);
return v___x_2516_;
}
}
}
v___jp_2517_:
{
size_t v_sz_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; lean_object* v___x_2537_; size_t v_sz_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; lean_object* v___x_2542_; lean_object* v___x_2543_; lean_object* v___x_2544_; 
v_sz_2532_ = lean_array_size(v___y_2531_);
v___x_2533_ = l_unsafeCast___redArg(v___y_2531_);
lean_dec_ref(v___y_2531_);
v___x_2534_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__4(v_sz_2532_, v___y_2522_, v___x_2533_);
v___x_2535_ = l_unsafeCast___redArg(v___x_2534_);
lean_dec_ref(v___x_2534_);
v___x_2536_ = l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote(v___x_2535_, v___y_2523_);
lean_dec(v___x_2535_);
v___x_2537_ = l_unsafeCast___redArg(v___y_2524_);
lean_dec(v___y_2524_);
v_sz_2538_ = lean_array_size(v___x_2537_);
v___x_2539_ = l_unsafeCast___redArg(v___x_2537_);
lean_dec(v___x_2537_);
v___x_2540_ = lean_box_usize(v_sz_2538_);
v___x_2541_ = lean_box_usize(v___y_2522_);
v___x_2542_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__5___boxed), 5, 3);
lean_closure_set(v___x_2542_, 0, v___x_2540_);
lean_closure_set(v___x_2542_, 1, v___x_2541_);
lean_closure_set(v___x_2542_, 2, v___x_2539_);
v___x_2543_ = l_unsafeCast___redArg(v___x_2542_);
lean_dec_ref(v___x_2542_);
v___x_2544_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg(v___x_2543_, v___y_2525_, v___y_2520_);
if (lean_obj_tag(v___x_2544_) == 0)
{
lean_object* v_a_2545_; lean_object* v___x_2546_; lean_object* v___x_2547_; 
v_a_2545_ = lean_ctor_get(v___x_2544_, 0);
lean_inc(v_a_2545_);
lean_dec_ref_known(v___x_2544_, 1);
v___x_2546_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2546_, 0, v___y_2518_);
lean_ctor_set(v___x_2546_, 1, v___y_2519_);
lean_ctor_set(v___x_2546_, 2, v_a_2545_);
v___x_2547_ = l_Lean_Elab_Command_getRef___redArg(v___y_2525_);
if (lean_obj_tag(v___x_2547_) == 0)
{
lean_object* v_a_2548_; lean_object* v___x_2549_; lean_object* v___x_2550_; 
v_a_2548_ = lean_ctor_get(v___x_2547_, 0);
lean_inc(v_a_2548_);
lean_dec_ref_known(v___x_2547_, 1);
v___x_2549_ = l_Lean_SourceInfo_fromRef(v_a_2548_, v___y_2521_);
lean_dec(v_a_2548_);
v___x_2550_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_2525_);
if (lean_obj_tag(v___x_2550_) == 0)
{
lean_object* v_quotContext_x3f_2551_; 
lean_dec_ref_known(v___x_2550_, 1);
v_quotContext_x3f_2551_ = lean_ctor_get(v___y_2525_, 5);
if (lean_obj_tag(v_quotContext_x3f_2551_) == 0)
{
lean_object* v___x_2552_; 
v___x_2552_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabNotation_spec__7___redArg(v___y_2520_);
lean_dec_ref(v___x_2552_);
v___y_2465_ = v___y_2525_;
v___y_2466_ = v___y_2526_;
v___y_2467_ = v___y_2520_;
v___y_2468_ = v___y_2527_;
v___y_2469_ = v___x_2546_;
v___y_2470_ = v___y_2528_;
v___y_2471_ = v___x_2549_;
v___y_2472_ = v___y_2529_;
v___y_2473_ = v___y_2530_;
v___y_2474_ = v___x_2536_;
goto v___jp_2464_;
}
else
{
v___y_2465_ = v___y_2525_;
v___y_2466_ = v___y_2526_;
v___y_2467_ = v___y_2520_;
v___y_2468_ = v___y_2527_;
v___y_2469_ = v___x_2546_;
v___y_2470_ = v___y_2528_;
v___y_2471_ = v___x_2549_;
v___y_2472_ = v___y_2529_;
v___y_2473_ = v___y_2530_;
v___y_2474_ = v___x_2536_;
goto v___jp_2464_;
}
}
else
{
lean_object* v_a_2553_; lean_object* v___x_2555_; uint8_t v_isShared_2556_; uint8_t v_isSharedCheck_2560_; 
lean_dec(v___x_2549_);
lean_dec_ref_known(v___x_2546_, 3);
lean_dec(v___x_2536_);
lean_dec(v___y_2530_);
v_a_2553_ = lean_ctor_get(v___x_2550_, 0);
v_isSharedCheck_2560_ = !lean_is_exclusive(v___x_2550_);
if (v_isSharedCheck_2560_ == 0)
{
v___x_2555_ = v___x_2550_;
v_isShared_2556_ = v_isSharedCheck_2560_;
goto v_resetjp_2554_;
}
else
{
lean_inc(v_a_2553_);
lean_dec(v___x_2550_);
v___x_2555_ = lean_box(0);
v_isShared_2556_ = v_isSharedCheck_2560_;
goto v_resetjp_2554_;
}
v_resetjp_2554_:
{
lean_object* v___x_2558_; 
if (v_isShared_2556_ == 0)
{
v___x_2558_ = v___x_2555_;
goto v_reusejp_2557_;
}
else
{
lean_object* v_reuseFailAlloc_2559_; 
v_reuseFailAlloc_2559_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2559_, 0, v_a_2553_);
v___x_2558_ = v_reuseFailAlloc_2559_;
goto v_reusejp_2557_;
}
v_reusejp_2557_:
{
return v___x_2558_;
}
}
}
}
else
{
lean_object* v_a_2561_; lean_object* v___x_2563_; uint8_t v_isShared_2564_; uint8_t v_isSharedCheck_2568_; 
lean_dec_ref_known(v___x_2546_, 3);
lean_dec(v___x_2536_);
lean_dec(v___y_2530_);
v_a_2561_ = lean_ctor_get(v___x_2547_, 0);
v_isSharedCheck_2568_ = !lean_is_exclusive(v___x_2547_);
if (v_isSharedCheck_2568_ == 0)
{
v___x_2563_ = v___x_2547_;
v_isShared_2564_ = v_isSharedCheck_2568_;
goto v_resetjp_2562_;
}
else
{
lean_inc(v_a_2561_);
lean_dec(v___x_2547_);
v___x_2563_ = lean_box(0);
v_isShared_2564_ = v_isSharedCheck_2568_;
goto v_resetjp_2562_;
}
v_resetjp_2562_:
{
lean_object* v___x_2566_; 
if (v_isShared_2564_ == 0)
{
v___x_2566_ = v___x_2563_;
goto v_reusejp_2565_;
}
else
{
lean_object* v_reuseFailAlloc_2567_; 
v_reuseFailAlloc_2567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2567_, 0, v_a_2561_);
v___x_2566_ = v_reuseFailAlloc_2567_;
goto v_reusejp_2565_;
}
v_reusejp_2565_:
{
return v___x_2566_;
}
}
}
}
else
{
lean_object* v_a_2569_; lean_object* v___x_2571_; uint8_t v_isShared_2572_; uint8_t v_isSharedCheck_2576_; 
lean_dec(v___x_2536_);
lean_dec(v___y_2530_);
lean_dec(v___y_2519_);
lean_dec(v___y_2518_);
v_a_2569_ = lean_ctor_get(v___x_2544_, 0);
v_isSharedCheck_2576_ = !lean_is_exclusive(v___x_2544_);
if (v_isSharedCheck_2576_ == 0)
{
v___x_2571_ = v___x_2544_;
v_isShared_2572_ = v_isSharedCheck_2576_;
goto v_resetjp_2570_;
}
else
{
lean_inc(v_a_2569_);
lean_dec(v___x_2544_);
v___x_2571_ = lean_box(0);
v_isShared_2572_ = v_isSharedCheck_2576_;
goto v_resetjp_2570_;
}
v_resetjp_2570_:
{
lean_object* v___x_2574_; 
if (v_isShared_2572_ == 0)
{
v___x_2574_ = v___x_2571_;
goto v_reusejp_2573_;
}
else
{
lean_object* v_reuseFailAlloc_2575_; 
v_reuseFailAlloc_2575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2575_, 0, v_a_2569_);
v___x_2574_ = v_reuseFailAlloc_2575_;
goto v_reusejp_2573_;
}
v_reusejp_2573_:
{
return v___x_2574_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNotation___boxed(lean_object* v_x_2950_, lean_object* v_a_2951_, lean_object* v_a_2952_, lean_object* v_a_2953_){
_start:
{
lean_object* v_res_2954_; 
v_res_2954_ = l_Lean_Elab_Command_elabNotation(v_x_2950_, v_a_2951_, v_a_2952_);
lean_dec(v_a_2952_);
lean_dec_ref(v_a_2951_);
return v_res_2954_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__2(lean_object* v_00_u03b1_2955_, lean_object* v_x_2956_, lean_object* v___y_2957_, lean_object* v___y_2958_){
_start:
{
lean_object* v___x_2959_; 
v___x_2959_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__2___redArg(v_x_2956_, v___y_2958_);
return v___x_2959_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__2___boxed(lean_object* v_00_u03b1_2960_, lean_object* v_x_2961_, lean_object* v___y_2962_, lean_object* v___y_2963_){
_start:
{
lean_object* v_res_2964_; 
v_res_2964_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__2(v_00_u03b1_2960_, v_x_2961_, v___y_2962_, v___y_2963_);
lean_dec_ref(v___y_2962_);
lean_dec_ref(v_x_2961_);
return v_res_2964_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7(lean_object* v_00_u03b1_2965_, lean_object* v_ref_2966_, lean_object* v___y_2967_, lean_object* v___y_2968_){
_start:
{
lean_object* v___x_2970_; 
v___x_2970_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg(v_ref_2966_);
return v___x_2970_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___boxed(lean_object* v_00_u03b1_2971_, lean_object* v_ref_2972_, lean_object* v___y_2973_, lean_object* v___y_2974_, lean_object* v___y_2975_){
_start:
{
lean_object* v_res_2976_; 
v_res_2976_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7(v_00_u03b1_2971_, v_ref_2972_, v___y_2973_, v___y_2974_);
lean_dec(v___y_2974_);
lean_dec_ref(v___y_2973_);
return v_res_2976_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1(lean_object* v_00_u03b1_2977_, lean_object* v_x_2978_, lean_object* v___y_2979_, lean_object* v___y_2980_){
_start:
{
lean_object* v___x_2982_; 
v___x_2982_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg(v_x_2978_, v___y_2979_, v___y_2980_);
return v___x_2982_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___boxed(lean_object* v_00_u03b1_2983_, lean_object* v_x_2984_, lean_object* v___y_2985_, lean_object* v___y_2986_, lean_object* v___y_2987_){
_start:
{
lean_object* v_res_2988_; 
v_res_2988_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1(v_00_u03b1_2983_, v_x_2984_, v___y_2985_, v___y_2986_);
lean_dec(v___y_2986_);
lean_dec_ref(v___y_2985_);
return v_res_2988_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3(lean_object* v_msgData_2989_, lean_object* v___y_2990_, lean_object* v___y_2991_){
_start:
{
lean_object* v___x_2993_; 
v___x_2993_ = l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg(v_msgData_2989_, v___y_2991_);
return v___x_2993_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___boxed(lean_object* v_msgData_2994_, lean_object* v___y_2995_, lean_object* v___y_2996_, lean_object* v___y_2997_){
_start:
{
lean_object* v_res_2998_; 
v_res_2998_ = l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3(v_msgData_2994_, v___y_2995_, v___y_2996_);
lean_dec(v___y_2996_);
lean_dec_ref(v___y_2995_);
return v_res_2998_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__4(lean_object* v_as_2999_, lean_object* v_as_x27_3000_, lean_object* v_b_3001_, lean_object* v_a_3002_, lean_object* v___y_3003_, lean_object* v___y_3004_){
_start:
{
lean_object* v___x_3006_; 
v___x_3006_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__4___redArg(v_as_x27_3000_, v_b_3001_, v___y_3003_, v___y_3004_);
return v___x_3006_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__4___boxed(lean_object* v_as_3007_, lean_object* v_as_x27_3008_, lean_object* v_b_3009_, lean_object* v_a_3010_, lean_object* v___y_3011_, lean_object* v___y_3012_, lean_object* v___y_3013_){
_start:
{
lean_object* v_res_3014_; 
v_res_3014_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__4(v_as_3007_, v_as_x27_3008_, v_b_3009_, v_a_3010_, v___y_3011_, v___y_3012_);
lean_dec(v___y_3012_);
lean_dec_ref(v___y_3011_);
lean_dec(v_as_x27_3008_);
lean_dec(v_as_3007_);
return v_res_3014_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6(lean_object* v_00_u03b1_3015_, lean_object* v_ref_3016_, lean_object* v_msg_3017_, lean_object* v___y_3018_, lean_object* v___y_3019_){
_start:
{
lean_object* v___x_3021_; 
v___x_3021_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6___redArg(v_ref_3016_, v_msg_3017_, v___y_3018_, v___y_3019_);
return v___x_3021_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6___boxed(lean_object* v_00_u03b1_3022_, lean_object* v_ref_3023_, lean_object* v_msg_3024_, lean_object* v___y_3025_, lean_object* v___y_3026_, lean_object* v___y_3027_){
_start:
{
lean_object* v_res_3028_; 
v_res_3028_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6(v_00_u03b1_3022_, v_ref_3023_, v_msg_3024_, v___y_3025_, v___y_3026_);
lean_dec(v___y_3026_);
lean_dec_ref(v___y_3025_);
lean_dec(v_ref_3023_);
return v_res_3028_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8(lean_object* v_00_u03b2_3029_, lean_object* v_m_3030_, lean_object* v_a_3031_){
_start:
{
lean_object* v___x_3032_; 
v___x_3032_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8___redArg(v_m_3030_, v_a_3031_);
return v___x_3032_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8___boxed(lean_object* v_00_u03b2_3033_, lean_object* v_m_3034_, lean_object* v_a_3035_){
_start:
{
lean_object* v_res_3036_; 
v_res_3036_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8(v_00_u03b2_3033_, v_m_3034_, v_a_3035_);
lean_dec(v_a_3035_);
lean_dec_ref(v_m_3034_);
return v_res_3036_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12(lean_object* v_00_u03b1_3037_, lean_object* v_msg_3038_, lean_object* v___y_3039_, lean_object* v___y_3040_){
_start:
{
lean_object* v___x_3042_; 
v___x_3042_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12___redArg(v_msg_3038_, v___y_3039_, v___y_3040_);
return v___x_3042_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12___boxed(lean_object* v_00_u03b1_3043_, lean_object* v_msg_3044_, lean_object* v___y_3045_, lean_object* v___y_3046_, lean_object* v___y_3047_){
_start:
{
lean_object* v_res_3048_; 
v_res_3048_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12(v_00_u03b1_3043_, v_msg_3044_, v___y_3045_, v___y_3046_);
lean_dec(v___y_3046_);
lean_dec_ref(v___y_3045_);
return v_res_3048_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15(lean_object* v_00_u03b2_3049_, lean_object* v_x_3050_, lean_object* v_x_3051_){
_start:
{
uint8_t v___x_3052_; 
v___x_3052_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15___redArg(v_x_3050_, v_x_3051_);
return v___x_3052_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15___boxed(lean_object* v_00_u03b2_3053_, lean_object* v_x_3054_, lean_object* v_x_3055_){
_start:
{
uint8_t v_res_3056_; lean_object* v_r_3057_; 
v_res_3056_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15(v_00_u03b2_3053_, v_x_3054_, v_x_3055_);
lean_dec_ref(v_x_3055_);
lean_dec_ref(v_x_3054_);
v_r_3057_ = lean_box(v_res_3056_);
return v_r_3057_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8_spec__18(lean_object* v_00_u03b2_3058_, lean_object* v_a_3059_, lean_object* v_x_3060_){
_start:
{
lean_object* v___x_3061_; 
v___x_3061_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8_spec__18___redArg(v_a_3059_, v_x_3060_);
return v___x_3061_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8_spec__18___boxed(lean_object* v_00_u03b2_3062_, lean_object* v_a_3063_, lean_object* v_x_3064_){
_start:
{
lean_object* v_res_3065_; 
v_res_3065_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8_spec__18(v_00_u03b2_3062_, v_a_3063_, v_x_3064_);
lean_dec(v_x_3064_);
lean_dec(v_a_3063_);
return v_res_3065_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23(lean_object* v_msgData_3066_, lean_object* v_macroStack_3067_, lean_object* v___y_3068_, lean_object* v___y_3069_){
_start:
{
lean_object* v___x_3071_; 
v___x_3071_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23___redArg(v_msgData_3066_, v_macroStack_3067_, v___y_3069_);
return v___x_3071_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23___boxed(lean_object* v_msgData_3072_, lean_object* v_macroStack_3073_, lean_object* v___y_3074_, lean_object* v___y_3075_, lean_object* v___y_3076_){
_start:
{
lean_object* v_res_3077_; 
v_res_3077_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23(v_msgData_3072_, v_macroStack_3073_, v___y_3074_, v___y_3075_);
lean_dec(v___y_3075_);
lean_dec_ref(v___y_3074_);
return v_res_3077_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19(lean_object* v_00_u03b2_3078_, lean_object* v_x_3079_, size_t v_x_3080_, lean_object* v_x_3081_){
_start:
{
uint8_t v___x_3082_; 
v___x_3082_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19___redArg(v_x_3079_, v_x_3080_, v_x_3081_);
return v___x_3082_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19___boxed(lean_object* v_00_u03b2_3083_, lean_object* v_x_3084_, lean_object* v_x_3085_, lean_object* v_x_3086_){
_start:
{
size_t v_x_23262__boxed_3087_; uint8_t v_res_3088_; lean_object* v_r_3089_; 
v_x_23262__boxed_3087_ = lean_unbox_usize(v_x_3085_);
lean_dec(v_x_3085_);
v_res_3088_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19(v_00_u03b2_3083_, v_x_3084_, v_x_23262__boxed_3087_, v_x_3086_);
lean_dec_ref(v_x_3086_);
lean_dec_ref(v_x_3084_);
v_r_3089_ = lean_box(v_res_3088_);
return v_r_3089_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19_spec__23(lean_object* v_00_u03b2_3090_, lean_object* v_keys_3091_, lean_object* v_vals_3092_, lean_object* v_heq_3093_, lean_object* v_i_3094_, lean_object* v_k_3095_){
_start:
{
uint8_t v___x_3096_; 
v___x_3096_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19_spec__23___redArg(v_keys_3091_, v_i_3094_, v_k_3095_);
return v___x_3096_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19_spec__23___boxed(lean_object* v_00_u03b2_3097_, lean_object* v_keys_3098_, lean_object* v_vals_3099_, lean_object* v_heq_3100_, lean_object* v_i_3101_, lean_object* v_k_3102_){
_start:
{
uint8_t v_res_3103_; lean_object* v_r_3104_; 
v_res_3103_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19_spec__23(v_00_u03b2_3097_, v_keys_3098_, v_vals_3099_, v_heq_3100_, v_i_3101_, v_k_3102_);
lean_dec_ref(v_k_3102_);
lean_dec_ref(v_vals_3099_);
lean_dec_ref(v_keys_3098_);
v_r_3104_ = lean_box(v_res_3103_);
return v_r_3104_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Notation_0__Lean_Elab_Command_elabNotation___regBuiltin_Lean_Elab_Command_elabNotation__1(){
_start:
{
lean_object* v___x_3112_; lean_object* v___x_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; lean_object* v___x_3116_; 
v___x_3112_ = l_Lean_Elab_Command_commandElabAttribute;
v___x_3113_ = ((lean_object*)(l_Lean_Elab_Command_elabNotation___closed__1));
v___x_3114_ = ((lean_object*)(l___private_Lean_Elab_Notation_0__Lean_Elab_Command_elabNotation___regBuiltin_Lean_Elab_Command_elabNotation__1___closed__1));
v___x_3115_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabNotation___boxed), 4, 0);
v___x_3116_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_3112_, v___x_3113_, v___x_3114_, v___x_3115_);
return v___x_3116_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Notation_0__Lean_Elab_Command_elabNotation___regBuiltin_Lean_Elab_Command_elabNotation__1___boxed(lean_object* v_a_3117_){
_start:
{
lean_object* v_res_3118_; 
v_res_3118_ = l___private_Lean_Elab_Notation_0__Lean_Elab_Command_elabNotation___regBuiltin_Lean_Elab_Command_elabNotation__1();
return v_res_3118_;
}
}
lean_object* runtime_initialize_Lean_Elab_Syntax(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_AuxDef(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_BuiltinNotation(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Notation(uint8_t builtin) {
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
res = runtime_initialize_Lean_Elab_BuiltinNotation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Notation_0__Lean_Elab_Command_elabNotation___regBuiltin_Lean_Elab_Command_elabNotation__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Notation(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Syntax(uint8_t builtin);
lean_object* initialize_Lean_Elab_AuxDef(uint8_t builtin);
lean_object* initialize_Lean_Elab_BuiltinNotation(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Notation(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_AuxDef(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_BuiltinNotation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Notation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Notation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Notation(builtin);
}
#ifdef __cplusplus
}
#endif

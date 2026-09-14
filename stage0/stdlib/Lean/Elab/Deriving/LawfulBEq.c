// Lean compiler output
// Module: Lean.Elab.Deriving.LawfulBEq
// Imports: import Lean.Elab.Deriving.Basic import Lean.Elab.Deriving.Util import Init.LawfulBEqTactics
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
lean_object* l_Lean_stringToMessageData(lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Elab_Command_elabCommand(lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_isInductiveCore_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkInductArgNames(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkImplicitBinders(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkInstImplicitBinders(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkInductiveApp___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkCIdent(lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Lean_Syntax_node7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
uint8_t l_Lean_InductiveVal_isNested(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_liftTermElabM___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isInductiveCore(lean_object*, lean_object*);
lean_object* l_Lean_Elab_registerDerivingHandler(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__1(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3_spec__4_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3_spec__4_spec__5___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3_spec__4_spec__6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3_spec__4_spec__6___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3_spec__4_spec__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3_spec__4_spec__6___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3_spec__4_spec__6___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3_spec__4_spec__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3_spec__4_spec__6___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3_spec__4_spec__6___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3_spec__4_spec__6___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3_spec__4_spec__6___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3_spec__4_spec__6___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3_spec__4_spec__6(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3_spec__4___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3_spec__4___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3_spec__4___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3_spec__4___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3_spec__4___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3_spec__4___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3_spec__4___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3_spec__4___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__0___closed__0 = (const lean_object*)&l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__0___closed__1;
static const lean_string_object l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "` is not an inductive type"};
static const lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__0___closed__2 = (const lean_object*)&l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__0___closed__2_value;
static lean_once_cell_t l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__2___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__2___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__2___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__2___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__2___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "BEq"};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__0 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(195, 188, 39, 55, 57, 152, 88, 223)}};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__1 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__2 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__3 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__3_value;
static const lean_string_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__4 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__4_value;
static const lean_string_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "LawfulBEq"};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__5 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__5_value),LEAN_SCALAR_PTR_LITERAL(198, 131, 20, 143, 70, 69, 65, 69)}};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__6 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__6_value;
static const lean_string_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__7 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__7_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__7_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__8 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__8_value;
static const lean_string_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__9 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__9_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__10_value_aux_0),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__10_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__4_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__10_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__9_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__10 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__10_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__11;
static const lean_string_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__12 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__12_value;
static const lean_string_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "declaration"};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__13 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__13_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__14_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__14_value_aux_0),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__14_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__14_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__12_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__14_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__13_value),LEAN_SCALAR_PTR_LITERAL(157, 246, 223, 221, 242, 35, 238, 117)}};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__14 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__14_value;
static const lean_string_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declModifiers"};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__15 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__15_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__16_value_aux_0),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__16_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__12_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__16_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__15_value),LEAN_SCALAR_PTR_LITERAL(0, 165, 146, 53, 36, 89, 7, 202)}};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__16 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__16_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__17;
static const lean_string_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "instance"};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__18 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__18_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__19_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__19_value_aux_0),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__19_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__19_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__12_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__19_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__18_value),LEAN_SCALAR_PTR_LITERAL(37, 156, 84, 218, 244, 57, 142, 153)}};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__19 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__19_value;
static const lean_string_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "attrKind"};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__20 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__20_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__21_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__21_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__21_value_aux_0),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__21_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__21_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__4_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__21_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__20_value),LEAN_SCALAR_PTR_LITERAL(32, 164, 20, 104, 12, 221, 204, 110)}};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__21 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__21_value;
static const lean_string_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "declSig"};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__22 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__22_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__23_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__23_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__23_value_aux_0),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__23_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__23_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__12_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__23_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__22_value),LEAN_SCALAR_PTR_LITERAL(22, 101, 130, 251, 183, 19, 113, 82)}};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__23 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__23_value;
static const lean_string_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "typeSpec"};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__24 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__24_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__25_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__25_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__25_value_aux_0),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__25_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__25_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__4_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__25_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__24_value),LEAN_SCALAR_PTR_LITERAL(77, 126, 241, 117, 174, 189, 108, 62)}};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__25 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__25_value;
static const lean_string_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__26 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__26_value;
static const lean_string_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declValSimple"};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__27 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__27_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__28_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__28_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__28_value_aux_0),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__28_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__28_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__12_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__28_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__27_value),LEAN_SCALAR_PTR_LITERAL(228, 117, 47, 248, 145, 185, 135, 188)}};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__28 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__28_value;
static const lean_string_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__29 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__29_value;
static const lean_string_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "LawfulBEq.mk"};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__30 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__30_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__31;
static const lean_string_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__32 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__32_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__33_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__5_value),LEAN_SCALAR_PTR_LITERAL(198, 131, 20, 143, 70, 69, 65, 69)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__33_value_aux_0),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__32_value),LEAN_SCALAR_PTR_LITERAL(54, 235, 227, 222, 64, 229, 226, 161)}};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__33 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__33_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__33_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__34 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__34_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__34_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__35 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__35_value;
static const lean_string_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__36 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__36_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__37_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__37_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__37_value_aux_0),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__37_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__37_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__4_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__37_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__36_value),LEAN_SCALAR_PTR_LITERAL(124, 9, 161, 194, 227, 100, 20, 110)}};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__37 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__37_value;
static const lean_string_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__38 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__38_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__39_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__39_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__39_value_aux_0),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__39_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__39_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__4_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__39_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__38_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__39 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__39_value;
static const lean_string_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__40 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__40_value;
static const lean_string_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__41 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__41_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__41_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__42 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__42_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__43_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__43;
static lean_once_cell_t l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__44_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__44;
static const lean_string_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__45 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__45_value;
static const lean_string_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Deriving"};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__46 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__46_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__47_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__47_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__47_value_aux_0),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__45_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__47_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__47_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__46_value),LEAN_SCALAR_PTR_LITERAL(230, 230, 99, 85, 138, 169, 166, 218)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__47_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__5_value),LEAN_SCALAR_PTR_LITERAL(239, 216, 42, 178, 87, 188, 183, 65)}};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__47 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__47_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__47_value)}};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__48 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__48_value;
static const lean_string_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__49 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__49_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__50_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__50_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__50_value_aux_0),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__50_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__49_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__50 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__50_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__50_value)}};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__51 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__51_value;
static const lean_string_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "TSyntax"};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__52 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__52_value;
static const lean_string_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Compat"};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__53 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__53_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__54_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__54_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__54_value_aux_0),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__52_value),LEAN_SCALAR_PTR_LITERAL(208, 86, 51, 178, 37, 75, 0, 6)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__54_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__53_value),LEAN_SCALAR_PTR_LITERAL(233, 134, 124, 217, 96, 118, 79, 86)}};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__54 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__54_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__54_value)}};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__55 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__55_value;
static const lean_string_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__56 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__56_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__57_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__57_value_aux_0),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__56_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__57 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__57_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__57_value)}};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__58 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__58_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__59_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__59_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__59_value_aux_0),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__59_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__4_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__59 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__59_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__59_value)}};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__60 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__60_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__60_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__61 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__61_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__58_value),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__61_value)}};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__62 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__62_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__55_value),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__62_value)}};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__63 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__63_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__51_value),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__63_value)}};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__64 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__64_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__48_value),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__64_value)}};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__65 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__65_value;
static const lean_string_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "byTactic"};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__66 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__66_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__67_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__67_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__67_value_aux_0),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__67_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__67_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__4_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__67_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__66_value),LEAN_SCALAR_PTR_LITERAL(187, 150, 238, 148, 228, 221, 116, 224)}};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__67 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__67_value;
static const lean_string_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "by"};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__68 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__68_value;
static const lean_string_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__69 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__69_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__70_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__70_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__70_value_aux_0),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__70_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__70_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__49_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__70_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__69_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__70 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__70_value;
static const lean_string_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__71_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__71 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__71_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__72_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__72_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__72_value_aux_0),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__72_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__72_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__49_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__72_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__72_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__71_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__72 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__72_value;
static const lean_string_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "tacticDeriving_LawfulEq_tactic"};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__73 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__73_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__74_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__73_value),LEAN_SCALAR_PTR_LITERAL(223, 236, 164, 161, 104, 237, 167, 171)}};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__74 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__74_value;
static const lean_string_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__75_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "deriving_LawfulEq_tactic"};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__75 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__75_value;
static const lean_string_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__76_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__76 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__76_value;
static const lean_string_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__77_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Termination"};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__77 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__77_value;
static const lean_string_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__78_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "suffix"};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__78 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__78_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__79_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__79_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__79_value_aux_0),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__79_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__79_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__77_value),LEAN_SCALAR_PTR_LITERAL(128, 225, 226, 49, 186, 161, 212, 105)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__79_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__79_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__78_value),LEAN_SCALAR_PTR_LITERAL(245, 187, 99, 45, 217, 244, 244, 120)}};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__79 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__79_value;
static const lean_string_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__80_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "lawfulBEq"};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__80 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__80_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__81_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__45_value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__81_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__81_value_aux_0),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__46_value),LEAN_SCALAR_PTR_LITERAL(195, 196, 35, 37, 101, 57, 52, 43)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__81_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__81_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__80_value),LEAN_SCALAR_PTR_LITERAL(105, 144, 65, 135, 21, 116, 188, 189)}};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__81 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__81_value;
static const lean_string_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__82_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__82 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__82_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__83_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__82_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__83 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__83_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__84_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__84;
static const lean_string_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__85_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__85 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__85_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__86_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__86;
static const lean_string_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__87_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 59, .m_data = "Deriving `LawfulBEq` for nested inductives is not supported"};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__87 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__87_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__88_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__88;
static const lean_string_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__89_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 59, .m_data = "Deriving `LawfulBEq` for mutual inductives is not supported"};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__89 = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__89_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__90_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__90;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstance_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstance_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstance___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstance___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstance(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInductive___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceHandler_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInductive___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceHandler_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInductive___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceHandler_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInductive___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceHandler_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceHandler___lam__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceHandler___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceHandler_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceHandler_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceHandler_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceHandler_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceHandler(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceHandler___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__0_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceHandler___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__0_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__0_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__1_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__1_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__1_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__2_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__2_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__3_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__3_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__4_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__4_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__5_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__5_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__6_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__6_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__7_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__7_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__9_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__9_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__10_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__10_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__11_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__11_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__12_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__12_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__12_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__13_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__13_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__14_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__14_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__14_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__15_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__15_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__16_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__16_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__17_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__17_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__18_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__18_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__19_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__19_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__20_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__20_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__21_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__21_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__21_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__22_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__22_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__23_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__23_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__23_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__24_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__24_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__25_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__25_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__1(lean_object* v_a_1_, lean_object* v_a_2_){
_start:
{
if (lean_obj_tag(v_a_1_) == 0)
{
lean_object* v___x_3_; 
v___x_3_ = l_List_reverse___redArg(v_a_2_);
return v___x_3_;
}
else
{
lean_object* v_head_4_; lean_object* v_tail_5_; lean_object* v___x_7_; uint8_t v_isShared_8_; uint8_t v_isSharedCheck_14_; 
v_head_4_ = lean_ctor_get(v_a_1_, 0);
v_tail_5_ = lean_ctor_get(v_a_1_, 1);
v_isSharedCheck_14_ = !lean_is_exclusive(v_a_1_);
if (v_isSharedCheck_14_ == 0)
{
v___x_7_ = v_a_1_;
v_isShared_8_ = v_isSharedCheck_14_;
goto v_resetjp_6_;
}
else
{
lean_inc(v_tail_5_);
lean_inc(v_head_4_);
lean_dec(v_a_1_);
v___x_7_ = lean_box(0);
v_isShared_8_ = v_isSharedCheck_14_;
goto v_resetjp_6_;
}
v_resetjp_6_:
{
lean_object* v___x_9_; lean_object* v___x_11_; 
v___x_9_ = l_Lean_MessageData_ofSyntax(v_head_4_);
if (v_isShared_8_ == 0)
{
lean_ctor_set(v___x_7_, 1, v_a_2_);
lean_ctor_set(v___x_7_, 0, v___x_9_);
v___x_11_ = v___x_7_;
goto v_reusejp_10_;
}
else
{
lean_object* v_reuseFailAlloc_13_; 
v_reuseFailAlloc_13_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_13_, 0, v___x_9_);
lean_ctor_set(v_reuseFailAlloc_13_, 1, v_a_2_);
v___x_11_ = v_reuseFailAlloc_13_;
goto v_reusejp_10_;
}
v_reusejp_10_:
{
v_a_1_ = v_tail_5_;
v_a_2_ = v___x_11_;
goto _start;
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3_spec__4_spec__5(lean_object* v_opts_15_, lean_object* v_opt_16_){
_start:
{
lean_object* v_name_17_; lean_object* v_defValue_18_; lean_object* v_map_19_; lean_object* v___x_20_; 
v_name_17_ = lean_ctor_get(v_opt_16_, 0);
v_defValue_18_ = lean_ctor_get(v_opt_16_, 1);
v_map_19_ = lean_ctor_get(v_opts_15_, 0);
v___x_20_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_19_, v_name_17_);
if (lean_obj_tag(v___x_20_) == 0)
{
uint8_t v___x_21_; 
v___x_21_ = lean_unbox(v_defValue_18_);
return v___x_21_;
}
else
{
lean_object* v_val_22_; 
v_val_22_ = lean_ctor_get(v___x_20_, 0);
lean_inc(v_val_22_);
lean_dec_ref_known(v___x_20_, 1);
if (lean_obj_tag(v_val_22_) == 1)
{
uint8_t v_v_23_; 
v_v_23_ = lean_ctor_get_uint8(v_val_22_, 0);
lean_dec_ref_known(v_val_22_, 0);
return v_v_23_;
}
else
{
uint8_t v___x_24_; 
lean_dec(v_val_22_);
v___x_24_ = lean_unbox(v_defValue_18_);
return v___x_24_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3_spec__4_spec__5___boxed(lean_object* v_opts_25_, lean_object* v_opt_26_){
_start:
{
uint8_t v_res_27_; lean_object* v_r_28_; 
v_res_27_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3_spec__4_spec__5(v_opts_25_, v_opt_26_);
lean_dec_ref(v_opt_26_);
lean_dec_ref(v_opts_25_);
v_r_28_ = lean_box(v_res_27_);
return v_r_28_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3_spec__4_spec__6___closed__0(void){
_start:
{
lean_object* v___x_29_; lean_object* v___x_30_; 
v___x_29_ = lean_box(1);
v___x_30_ = l_Lean_MessageData_ofFormat(v___x_29_);
return v___x_30_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3_spec__4_spec__6___closed__3(void){
_start:
{
lean_object* v___x_34_; lean_object* v___x_35_; 
v___x_34_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3_spec__4_spec__6___closed__2));
v___x_35_ = l_Lean_MessageData_ofFormat(v___x_34_);
return v___x_35_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3_spec__4_spec__6(lean_object* v_x_36_, lean_object* v_x_37_){
_start:
{
if (lean_obj_tag(v_x_37_) == 0)
{
return v_x_36_;
}
else
{
lean_object* v_head_38_; lean_object* v_tail_39_; lean_object* v___x_41_; uint8_t v_isShared_42_; uint8_t v_isSharedCheck_61_; 
v_head_38_ = lean_ctor_get(v_x_37_, 0);
v_tail_39_ = lean_ctor_get(v_x_37_, 1);
v_isSharedCheck_61_ = !lean_is_exclusive(v_x_37_);
if (v_isSharedCheck_61_ == 0)
{
v___x_41_ = v_x_37_;
v_isShared_42_ = v_isSharedCheck_61_;
goto v_resetjp_40_;
}
else
{
lean_inc(v_tail_39_);
lean_inc(v_head_38_);
lean_dec(v_x_37_);
v___x_41_ = lean_box(0);
v_isShared_42_ = v_isSharedCheck_61_;
goto v_resetjp_40_;
}
v_resetjp_40_:
{
lean_object* v_before_43_; lean_object* v___x_45_; uint8_t v_isShared_46_; uint8_t v_isSharedCheck_59_; 
v_before_43_ = lean_ctor_get(v_head_38_, 0);
v_isSharedCheck_59_ = !lean_is_exclusive(v_head_38_);
if (v_isSharedCheck_59_ == 0)
{
lean_object* v_unused_60_; 
v_unused_60_ = lean_ctor_get(v_head_38_, 1);
lean_dec(v_unused_60_);
v___x_45_ = v_head_38_;
v_isShared_46_ = v_isSharedCheck_59_;
goto v_resetjp_44_;
}
else
{
lean_inc(v_before_43_);
lean_dec(v_head_38_);
v___x_45_ = lean_box(0);
v_isShared_46_ = v_isSharedCheck_59_;
goto v_resetjp_44_;
}
v_resetjp_44_:
{
lean_object* v___x_47_; lean_object* v___x_49_; 
v___x_47_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3_spec__4_spec__6___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3_spec__4_spec__6___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3_spec__4_spec__6___closed__0);
if (v_isShared_46_ == 0)
{
lean_ctor_set_tag(v___x_45_, 7);
lean_ctor_set(v___x_45_, 1, v___x_47_);
lean_ctor_set(v___x_45_, 0, v_x_36_);
v___x_49_ = v___x_45_;
goto v_reusejp_48_;
}
else
{
lean_object* v_reuseFailAlloc_58_; 
v_reuseFailAlloc_58_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_58_, 0, v_x_36_);
lean_ctor_set(v_reuseFailAlloc_58_, 1, v___x_47_);
v___x_49_ = v_reuseFailAlloc_58_;
goto v_reusejp_48_;
}
v_reusejp_48_:
{
lean_object* v___x_50_; lean_object* v___x_52_; 
v___x_50_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3_spec__4_spec__6___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3_spec__4_spec__6___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3_spec__4_spec__6___closed__3);
if (v_isShared_42_ == 0)
{
lean_ctor_set_tag(v___x_41_, 7);
lean_ctor_set(v___x_41_, 1, v___x_50_);
lean_ctor_set(v___x_41_, 0, v___x_49_);
v___x_52_ = v___x_41_;
goto v_reusejp_51_;
}
else
{
lean_object* v_reuseFailAlloc_57_; 
v_reuseFailAlloc_57_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_57_, 0, v___x_49_);
lean_ctor_set(v_reuseFailAlloc_57_, 1, v___x_50_);
v___x_52_ = v_reuseFailAlloc_57_;
goto v_reusejp_51_;
}
v_reusejp_51_:
{
lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_53_ = l_Lean_MessageData_ofSyntax(v_before_43_);
v___x_54_ = l_Lean_indentD(v___x_53_);
v___x_55_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_55_, 0, v___x_52_);
lean_ctor_set(v___x_55_, 1, v___x_54_);
v_x_36_ = v___x_55_;
v_x_37_ = v_tail_39_;
goto _start;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3_spec__4___redArg___closed__2(void){
_start:
{
lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_65_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3_spec__4___redArg___closed__1));
v___x_66_ = l_Lean_MessageData_ofFormat(v___x_65_);
return v___x_66_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3_spec__4___redArg(lean_object* v_msgData_67_, lean_object* v_macroStack_68_, lean_object* v___y_69_){
_start:
{
lean_object* v_toCold_71_; lean_object* v_options_72_; lean_object* v___x_73_; uint8_t v___x_74_; 
v_toCold_71_ = lean_ctor_get(v___y_69_, 0);
v_options_72_ = lean_ctor_get(v_toCold_71_, 2);
v___x_73_ = l_Lean_Elab_pp_macroStack;
v___x_74_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3_spec__4_spec__5(v_options_72_, v___x_73_);
if (v___x_74_ == 0)
{
lean_object* v___x_75_; 
lean_dec(v_macroStack_68_);
v___x_75_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_75_, 0, v_msgData_67_);
return v___x_75_;
}
else
{
if (lean_obj_tag(v_macroStack_68_) == 0)
{
lean_object* v___x_76_; 
v___x_76_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_76_, 0, v_msgData_67_);
return v___x_76_;
}
else
{
lean_object* v_head_77_; lean_object* v_after_78_; lean_object* v___x_80_; uint8_t v_isShared_81_; uint8_t v_isSharedCheck_93_; 
v_head_77_ = lean_ctor_get(v_macroStack_68_, 0);
lean_inc(v_head_77_);
v_after_78_ = lean_ctor_get(v_head_77_, 1);
v_isSharedCheck_93_ = !lean_is_exclusive(v_head_77_);
if (v_isSharedCheck_93_ == 0)
{
lean_object* v_unused_94_; 
v_unused_94_ = lean_ctor_get(v_head_77_, 0);
lean_dec(v_unused_94_);
v___x_80_ = v_head_77_;
v_isShared_81_ = v_isSharedCheck_93_;
goto v_resetjp_79_;
}
else
{
lean_inc(v_after_78_);
lean_dec(v_head_77_);
v___x_80_ = lean_box(0);
v_isShared_81_ = v_isSharedCheck_93_;
goto v_resetjp_79_;
}
v_resetjp_79_:
{
lean_object* v___x_82_; lean_object* v___x_84_; 
v___x_82_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3_spec__4_spec__6___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3_spec__4_spec__6___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3_spec__4_spec__6___closed__0);
if (v_isShared_81_ == 0)
{
lean_ctor_set_tag(v___x_80_, 7);
lean_ctor_set(v___x_80_, 1, v___x_82_);
lean_ctor_set(v___x_80_, 0, v_msgData_67_);
v___x_84_ = v___x_80_;
goto v_reusejp_83_;
}
else
{
lean_object* v_reuseFailAlloc_92_; 
v_reuseFailAlloc_92_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_92_, 0, v_msgData_67_);
lean_ctor_set(v_reuseFailAlloc_92_, 1, v___x_82_);
v___x_84_ = v_reuseFailAlloc_92_;
goto v_reusejp_83_;
}
v_reusejp_83_:
{
lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v_msgData_89_; lean_object* v___x_90_; lean_object* v___x_91_; 
v___x_85_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3_spec__4___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3_spec__4___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3_spec__4___redArg___closed__2);
v___x_86_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_86_, 0, v___x_84_);
lean_ctor_set(v___x_86_, 1, v___x_85_);
v___x_87_ = l_Lean_MessageData_ofSyntax(v_after_78_);
v___x_88_ = l_Lean_indentD(v___x_87_);
v_msgData_89_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_89_, 0, v___x_86_);
lean_ctor_set(v_msgData_89_, 1, v___x_88_);
v___x_90_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3_spec__4_spec__6(v_msgData_89_, v_macroStack_68_);
v___x_91_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_91_, 0, v___x_90_);
return v___x_91_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3_spec__4___redArg___boxed(lean_object* v_msgData_95_, lean_object* v_macroStack_96_, lean_object* v___y_97_, lean_object* v___y_98_){
_start:
{
lean_object* v_res_99_; 
v_res_99_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3_spec__4___redArg(v_msgData_95_, v_macroStack_96_, v___y_97_);
lean_dec_ref(v___y_97_);
return v_res_99_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__2_spec__2(lean_object* v_msgData_100_, lean_object* v___y_101_, lean_object* v___y_102_, lean_object* v___y_103_, lean_object* v___y_104_){
_start:
{
lean_object* v___x_106_; lean_object* v_env_107_; lean_object* v___x_108_; lean_object* v_toCold_109_; lean_object* v_mctx_110_; lean_object* v_lctx_111_; lean_object* v_options_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; 
v___x_106_ = lean_st_ref_get(v___y_104_);
v_env_107_ = lean_ctor_get(v___x_106_, 0);
lean_inc_ref(v_env_107_);
lean_dec(v___x_106_);
v___x_108_ = lean_st_ref_get(v___y_102_);
v_toCold_109_ = lean_ctor_get(v___y_103_, 0);
v_mctx_110_ = lean_ctor_get(v___x_108_, 0);
lean_inc_ref(v_mctx_110_);
lean_dec(v___x_108_);
v_lctx_111_ = lean_ctor_get(v___y_101_, 2);
v_options_112_ = lean_ctor_get(v_toCold_109_, 2);
lean_inc_ref(v_options_112_);
lean_inc_ref(v_lctx_111_);
v___x_113_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_113_, 0, v_env_107_);
lean_ctor_set(v___x_113_, 1, v_mctx_110_);
lean_ctor_set(v___x_113_, 2, v_lctx_111_);
lean_ctor_set(v___x_113_, 3, v_options_112_);
v___x_114_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_114_, 0, v___x_113_);
lean_ctor_set(v___x_114_, 1, v_msgData_100_);
v___x_115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_115_, 0, v___x_114_);
return v___x_115_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__2_spec__2___boxed(lean_object* v_msgData_116_, lean_object* v___y_117_, lean_object* v___y_118_, lean_object* v___y_119_, lean_object* v___y_120_, lean_object* v___y_121_){
_start:
{
lean_object* v_res_122_; 
v_res_122_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__2_spec__2(v_msgData_116_, v___y_117_, v___y_118_, v___y_119_, v___y_120_);
lean_dec(v___y_120_);
lean_dec_ref(v___y_119_);
lean_dec(v___y_118_);
lean_dec_ref(v___y_117_);
return v_res_122_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3___redArg(lean_object* v_msg_123_, lean_object* v___y_124_, lean_object* v___y_125_, lean_object* v___y_126_, lean_object* v___y_127_, lean_object* v___y_128_, lean_object* v___y_129_){
_start:
{
lean_object* v_ref_131_; lean_object* v_macroStack_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v_a_135_; lean_object* v___x_136_; lean_object* v_a_137_; lean_object* v___x_139_; uint8_t v_isShared_140_; uint8_t v_isSharedCheck_145_; 
v_ref_131_ = lean_ctor_get(v___y_128_, 2);
v_macroStack_132_ = lean_ctor_get(v___y_124_, 1);
v___x_133_ = l_Lean_Elab_getBetterRef(v_ref_131_, v_macroStack_132_);
v___x_134_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__2_spec__2(v_msg_123_, v___y_126_, v___y_127_, v___y_128_, v___y_129_);
v_a_135_ = lean_ctor_get(v___x_134_, 0);
lean_inc(v_a_135_);
lean_dec_ref(v___x_134_);
lean_inc(v_macroStack_132_);
v___x_136_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3_spec__4___redArg(v_a_135_, v_macroStack_132_, v___y_128_);
v_a_137_ = lean_ctor_get(v___x_136_, 0);
v_isSharedCheck_145_ = !lean_is_exclusive(v___x_136_);
if (v_isSharedCheck_145_ == 0)
{
v___x_139_ = v___x_136_;
v_isShared_140_ = v_isSharedCheck_145_;
goto v_resetjp_138_;
}
else
{
lean_inc(v_a_137_);
lean_dec(v___x_136_);
v___x_139_ = lean_box(0);
v_isShared_140_ = v_isSharedCheck_145_;
goto v_resetjp_138_;
}
v_resetjp_138_:
{
lean_object* v___x_141_; lean_object* v___x_143_; 
v___x_141_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_141_, 0, v___x_133_);
lean_ctor_set(v___x_141_, 1, v_a_137_);
if (v_isShared_140_ == 0)
{
lean_ctor_set_tag(v___x_139_, 1);
lean_ctor_set(v___x_139_, 0, v___x_141_);
v___x_143_ = v___x_139_;
goto v_reusejp_142_;
}
else
{
lean_object* v_reuseFailAlloc_144_; 
v_reuseFailAlloc_144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_144_, 0, v___x_141_);
v___x_143_ = v_reuseFailAlloc_144_;
goto v_reusejp_142_;
}
v_reusejp_142_:
{
return v___x_143_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3___redArg___boxed(lean_object* v_msg_146_, lean_object* v___y_147_, lean_object* v___y_148_, lean_object* v___y_149_, lean_object* v___y_150_, lean_object* v___y_151_, lean_object* v___y_152_, lean_object* v___y_153_){
_start:
{
lean_object* v_res_154_; 
v_res_154_ = l_Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3___redArg(v_msg_146_, v___y_147_, v___y_148_, v___y_149_, v___y_150_, v___y_151_, v___y_152_);
lean_dec(v___y_152_);
lean_dec_ref(v___y_151_);
lean_dec(v___y_150_);
lean_dec_ref(v___y_149_);
lean_dec(v___y_148_);
lean_dec_ref(v___y_147_);
return v_res_154_;
}
}
static lean_object* _init_l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__0___closed__1(void){
_start:
{
lean_object* v___x_156_; lean_object* v___x_157_; 
v___x_156_ = ((lean_object*)(l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__0___closed__0));
v___x_157_ = l_Lean_stringToMessageData(v___x_156_);
return v___x_157_;
}
}
static lean_object* _init_l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__0___closed__3(void){
_start:
{
lean_object* v___x_159_; lean_object* v___x_160_; 
v___x_159_ = ((lean_object*)(l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__0___closed__2));
v___x_160_ = l_Lean_stringToMessageData(v___x_159_);
return v___x_160_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__0(lean_object* v_constName_161_, lean_object* v___y_162_, lean_object* v___y_163_, lean_object* v___y_164_, lean_object* v___y_165_, lean_object* v___y_166_, lean_object* v___y_167_){
_start:
{
lean_object* v___x_169_; lean_object* v_env_170_; lean_object* v___x_171_; 
v___x_169_ = lean_st_ref_get(v___y_167_);
v_env_170_ = lean_ctor_get(v___x_169_, 0);
lean_inc_ref(v_env_170_);
lean_dec(v___x_169_);
lean_inc(v_constName_161_);
v___x_171_ = l_Lean_isInductiveCore_x3f(v_env_170_, v_constName_161_);
if (lean_obj_tag(v___x_171_) == 0)
{
lean_object* v___x_172_; uint8_t v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; 
v___x_172_ = lean_obj_once(&l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__0___closed__1, &l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__0___closed__1_once, _init_l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__0___closed__1);
v___x_173_ = 0;
v___x_174_ = l_Lean_MessageData_ofConstName(v_constName_161_, v___x_173_);
v___x_175_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_175_, 0, v___x_172_);
lean_ctor_set(v___x_175_, 1, v___x_174_);
v___x_176_ = lean_obj_once(&l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__0___closed__3, &l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__0___closed__3_once, _init_l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__0___closed__3);
v___x_177_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_177_, 0, v___x_175_);
lean_ctor_set(v___x_177_, 1, v___x_176_);
v___x_178_ = l_Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3___redArg(v___x_177_, v___y_162_, v___y_163_, v___y_164_, v___y_165_, v___y_166_, v___y_167_);
return v___x_178_;
}
else
{
lean_object* v_val_179_; lean_object* v___x_181_; uint8_t v_isShared_182_; uint8_t v_isSharedCheck_186_; 
lean_dec(v_constName_161_);
v_val_179_ = lean_ctor_get(v___x_171_, 0);
v_isSharedCheck_186_ = !lean_is_exclusive(v___x_171_);
if (v_isSharedCheck_186_ == 0)
{
v___x_181_ = v___x_171_;
v_isShared_182_ = v_isSharedCheck_186_;
goto v_resetjp_180_;
}
else
{
lean_inc(v_val_179_);
lean_dec(v___x_171_);
v___x_181_ = lean_box(0);
v_isShared_182_ = v_isSharedCheck_186_;
goto v_resetjp_180_;
}
v_resetjp_180_:
{
lean_object* v___x_184_; 
if (v_isShared_182_ == 0)
{
lean_ctor_set_tag(v___x_181_, 0);
v___x_184_ = v___x_181_;
goto v_reusejp_183_;
}
else
{
lean_object* v_reuseFailAlloc_185_; 
v_reuseFailAlloc_185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_185_, 0, v_val_179_);
v___x_184_ = v_reuseFailAlloc_185_;
goto v_reusejp_183_;
}
v_reusejp_183_:
{
return v___x_184_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__0___boxed(lean_object* v_constName_187_, lean_object* v___y_188_, lean_object* v___y_189_, lean_object* v___y_190_, lean_object* v___y_191_, lean_object* v___y_192_, lean_object* v___y_193_, lean_object* v___y_194_){
_start:
{
lean_object* v_res_195_; 
v_res_195_ = l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__0(v_constName_187_, v___y_188_, v___y_189_, v___y_190_, v___y_191_, v___y_192_, v___y_193_);
lean_dec(v___y_193_);
lean_dec_ref(v___y_192_);
lean_dec(v___y_191_);
lean_dec_ref(v___y_190_);
lean_dec(v___y_189_);
lean_dec_ref(v___y_188_);
return v_res_195_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_196_; double v___x_197_; 
v___x_196_ = lean_unsigned_to_nat(0u);
v___x_197_ = lean_float_of_nat(v___x_196_);
return v___x_197_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__2___redArg(lean_object* v_cls_201_, lean_object* v_msg_202_, lean_object* v___y_203_, lean_object* v___y_204_, lean_object* v___y_205_, lean_object* v___y_206_){
_start:
{
lean_object* v_ref_208_; lean_object* v___x_209_; lean_object* v_a_210_; lean_object* v___x_212_; uint8_t v_isShared_213_; uint8_t v_isSharedCheck_254_; 
v_ref_208_ = lean_ctor_get(v___y_205_, 2);
v___x_209_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__2_spec__2(v_msg_202_, v___y_203_, v___y_204_, v___y_205_, v___y_206_);
v_a_210_ = lean_ctor_get(v___x_209_, 0);
v_isSharedCheck_254_ = !lean_is_exclusive(v___x_209_);
if (v_isSharedCheck_254_ == 0)
{
v___x_212_ = v___x_209_;
v_isShared_213_ = v_isSharedCheck_254_;
goto v_resetjp_211_;
}
else
{
lean_inc(v_a_210_);
lean_dec(v___x_209_);
v___x_212_ = lean_box(0);
v_isShared_213_ = v_isSharedCheck_254_;
goto v_resetjp_211_;
}
v_resetjp_211_:
{
lean_object* v___x_214_; lean_object* v_traceState_215_; lean_object* v_env_216_; lean_object* v_nextMacroScope_217_; lean_object* v_ngen_218_; lean_object* v_auxDeclNGen_219_; lean_object* v_cache_220_; lean_object* v_messages_221_; lean_object* v_infoState_222_; lean_object* v_snapshotTasks_223_; lean_object* v___x_225_; uint8_t v_isShared_226_; uint8_t v_isSharedCheck_253_; 
v___x_214_ = lean_st_ref_take(v___y_206_);
v_traceState_215_ = lean_ctor_get(v___x_214_, 4);
v_env_216_ = lean_ctor_get(v___x_214_, 0);
v_nextMacroScope_217_ = lean_ctor_get(v___x_214_, 1);
v_ngen_218_ = lean_ctor_get(v___x_214_, 2);
v_auxDeclNGen_219_ = lean_ctor_get(v___x_214_, 3);
v_cache_220_ = lean_ctor_get(v___x_214_, 5);
v_messages_221_ = lean_ctor_get(v___x_214_, 6);
v_infoState_222_ = lean_ctor_get(v___x_214_, 7);
v_snapshotTasks_223_ = lean_ctor_get(v___x_214_, 8);
v_isSharedCheck_253_ = !lean_is_exclusive(v___x_214_);
if (v_isSharedCheck_253_ == 0)
{
v___x_225_ = v___x_214_;
v_isShared_226_ = v_isSharedCheck_253_;
goto v_resetjp_224_;
}
else
{
lean_inc(v_snapshotTasks_223_);
lean_inc(v_infoState_222_);
lean_inc(v_messages_221_);
lean_inc(v_cache_220_);
lean_inc(v_traceState_215_);
lean_inc(v_auxDeclNGen_219_);
lean_inc(v_ngen_218_);
lean_inc(v_nextMacroScope_217_);
lean_inc(v_env_216_);
lean_dec(v___x_214_);
v___x_225_ = lean_box(0);
v_isShared_226_ = v_isSharedCheck_253_;
goto v_resetjp_224_;
}
v_resetjp_224_:
{
uint64_t v_tid_227_; lean_object* v_traces_228_; lean_object* v___x_230_; uint8_t v_isShared_231_; uint8_t v_isSharedCheck_252_; 
v_tid_227_ = lean_ctor_get_uint64(v_traceState_215_, sizeof(void*)*1);
v_traces_228_ = lean_ctor_get(v_traceState_215_, 0);
v_isSharedCheck_252_ = !lean_is_exclusive(v_traceState_215_);
if (v_isSharedCheck_252_ == 0)
{
v___x_230_ = v_traceState_215_;
v_isShared_231_ = v_isSharedCheck_252_;
goto v_resetjp_229_;
}
else
{
lean_inc(v_traces_228_);
lean_dec(v_traceState_215_);
v___x_230_ = lean_box(0);
v_isShared_231_ = v_isSharedCheck_252_;
goto v_resetjp_229_;
}
v_resetjp_229_:
{
lean_object* v___x_232_; lean_object* v___x_233_; double v___x_234_; uint8_t v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_243_; 
v___x_232_ = lean_box(0);
v___x_233_ = lean_box(0);
v___x_234_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__2___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__2___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__2___redArg___closed__0);
v___x_235_ = 0;
v___x_236_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__2___redArg___closed__1));
v___x_237_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_237_, 0, v_cls_201_);
lean_ctor_set(v___x_237_, 1, v___x_233_);
lean_ctor_set(v___x_237_, 2, v___x_236_);
lean_ctor_set_float(v___x_237_, sizeof(void*)*3, v___x_234_);
lean_ctor_set_float(v___x_237_, sizeof(void*)*3 + 8, v___x_234_);
lean_ctor_set_uint8(v___x_237_, sizeof(void*)*3 + 16, v___x_235_);
v___x_238_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__2___redArg___closed__2));
v___x_239_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_239_, 0, v___x_237_);
lean_ctor_set(v___x_239_, 1, v_a_210_);
lean_ctor_set(v___x_239_, 2, v___x_238_);
lean_inc(v_ref_208_);
v___x_240_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_240_, 0, v_ref_208_);
lean_ctor_set(v___x_240_, 1, v___x_239_);
v___x_241_ = l_Lean_PersistentArray_push___redArg(v_traces_228_, v___x_240_);
if (v_isShared_231_ == 0)
{
lean_ctor_set(v___x_230_, 0, v___x_241_);
v___x_243_ = v___x_230_;
goto v_reusejp_242_;
}
else
{
lean_object* v_reuseFailAlloc_251_; 
v_reuseFailAlloc_251_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_251_, 0, v___x_241_);
lean_ctor_set_uint64(v_reuseFailAlloc_251_, sizeof(void*)*1, v_tid_227_);
v___x_243_ = v_reuseFailAlloc_251_;
goto v_reusejp_242_;
}
v_reusejp_242_:
{
lean_object* v___x_245_; 
if (v_isShared_226_ == 0)
{
lean_ctor_set(v___x_225_, 4, v___x_243_);
v___x_245_ = v___x_225_;
goto v_reusejp_244_;
}
else
{
lean_object* v_reuseFailAlloc_250_; 
v_reuseFailAlloc_250_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_250_, 0, v_env_216_);
lean_ctor_set(v_reuseFailAlloc_250_, 1, v_nextMacroScope_217_);
lean_ctor_set(v_reuseFailAlloc_250_, 2, v_ngen_218_);
lean_ctor_set(v_reuseFailAlloc_250_, 3, v_auxDeclNGen_219_);
lean_ctor_set(v_reuseFailAlloc_250_, 4, v___x_243_);
lean_ctor_set(v_reuseFailAlloc_250_, 5, v_cache_220_);
lean_ctor_set(v_reuseFailAlloc_250_, 6, v_messages_221_);
lean_ctor_set(v_reuseFailAlloc_250_, 7, v_infoState_222_);
lean_ctor_set(v_reuseFailAlloc_250_, 8, v_snapshotTasks_223_);
v___x_245_ = v_reuseFailAlloc_250_;
goto v_reusejp_244_;
}
v_reusejp_244_:
{
lean_object* v___x_246_; lean_object* v___x_248_; 
v___x_246_ = lean_st_ref_put(v___y_206_, v___x_245_);
if (v_isShared_213_ == 0)
{
lean_ctor_set(v___x_212_, 0, v___x_232_);
v___x_248_ = v___x_212_;
goto v_reusejp_247_;
}
else
{
lean_object* v_reuseFailAlloc_249_; 
v_reuseFailAlloc_249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_249_, 0, v___x_232_);
v___x_248_ = v_reuseFailAlloc_249_;
goto v_reusejp_247_;
}
v_reusejp_247_:
{
return v___x_248_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__2___redArg___boxed(lean_object* v_cls_255_, lean_object* v_msg_256_, lean_object* v___y_257_, lean_object* v___y_258_, lean_object* v___y_259_, lean_object* v___y_260_, lean_object* v___y_261_){
_start:
{
lean_object* v_res_262_; 
v_res_262_ = l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__2___redArg(v_cls_255_, v_msg_256_, v___y_257_, v___y_258_, v___y_259_, v___y_260_);
lean_dec(v___y_260_);
lean_dec_ref(v___y_259_);
lean_dec(v___y_258_);
lean_dec_ref(v___y_257_);
return v_res_262_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__11(void){
_start:
{
lean_object* v___x_281_; lean_object* v___x_282_; 
v___x_281_ = ((lean_object*)(l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__6));
v___x_282_ = l_Lean_mkCIdent(v___x_281_);
return v___x_282_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__17(void){
_start:
{
lean_object* v___x_296_; 
v___x_296_ = l_Array_mkArray0___redArg();
return v___x_296_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__31(void){
_start:
{
lean_object* v___x_330_; lean_object* v___x_331_; 
v___x_330_ = ((lean_object*)(l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__30));
v___x_331_ = l_String_toRawSubstring_x27(v___x_330_);
return v___x_331_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__43(void){
_start:
{
lean_object* v___x_358_; lean_object* v___x_359_; 
v___x_358_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__2___redArg___closed__1));
v___x_359_ = l_String_toRawSubstring_x27(v___x_358_);
return v___x_359_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__44(void){
_start:
{
lean_object* v___x_360_; lean_object* v___x_361_; 
v___x_360_ = lean_box(0);
v___x_361_ = l_unsafeCast___redArg(v___x_360_);
return v___x_361_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__84(void){
_start:
{
lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; 
v___x_452_ = ((lean_object*)(l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__81));
v___x_453_ = ((lean_object*)(l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__83));
v___x_454_ = l_Lean_Name_append(v___x_453_, v___x_452_);
return v___x_454_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__86(void){
_start:
{
lean_object* v___x_456_; lean_object* v___x_457_; 
v___x_456_ = ((lean_object*)(l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__85));
v___x_457_ = l_Lean_stringToMessageData(v___x_456_);
return v___x_457_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__88(void){
_start:
{
lean_object* v___x_459_; lean_object* v___x_460_; 
v___x_459_ = ((lean_object*)(l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__87));
v___x_460_ = l_Lean_stringToMessageData(v___x_459_);
return v___x_460_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__90(void){
_start:
{
lean_object* v___x_462_; lean_object* v___x_463_; 
v___x_462_ = ((lean_object*)(l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__89));
v___x_463_ = l_Lean_stringToMessageData(v___x_462_);
return v___x_463_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds(lean_object* v_declName_464_, lean_object* v_a_465_, lean_object* v_a_466_, lean_object* v_a_467_, lean_object* v_a_468_, lean_object* v_a_469_, lean_object* v_a_470_){
_start:
{
lean_object* v___y_473_; lean_object* v___x_476_; 
v___x_476_ = l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__0(v_declName_464_, v_a_465_, v_a_466_, v_a_467_, v_a_468_, v_a_469_, v_a_470_);
if (lean_obj_tag(v___x_476_) == 0)
{
lean_object* v_a_477_; lean_object* v___y_479_; lean_object* v___y_480_; lean_object* v___y_481_; lean_object* v___y_482_; lean_object* v___y_483_; lean_object* v___y_484_; lean_object* v___y_623_; lean_object* v___y_624_; lean_object* v___y_625_; lean_object* v___y_626_; lean_object* v___y_627_; lean_object* v___y_628_; lean_object* v_all_640_; lean_object* v___x_641_; lean_object* v___x_642_; uint8_t v___x_643_; 
v_a_477_ = lean_ctor_get(v___x_476_, 0);
lean_inc(v_a_477_);
lean_dec_ref_known(v___x_476_, 1);
v_all_640_ = lean_ctor_get(v_a_477_, 3);
v___x_641_ = lean_unsigned_to_nat(1u);
v___x_642_ = l_List_lengthTR___redArg(v_all_640_);
v___x_643_ = lean_nat_dec_lt(v___x_641_, v___x_642_);
lean_dec(v___x_642_);
if (v___x_643_ == 0)
{
v___y_623_ = v_a_465_;
v___y_624_ = v_a_466_;
v___y_625_ = v_a_467_;
v___y_626_ = v_a_468_;
v___y_627_ = v_a_469_;
v___y_628_ = v_a_470_;
goto v___jp_622_;
}
else
{
lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v_a_646_; lean_object* v___x_648_; uint8_t v_isShared_649_; uint8_t v_isSharedCheck_653_; 
lean_dec(v_a_477_);
v___x_644_ = lean_obj_once(&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__90, &l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__90_once, _init_l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__90);
v___x_645_ = l_Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3___redArg(v___x_644_, v_a_465_, v_a_466_, v_a_467_, v_a_468_, v_a_469_, v_a_470_);
v_a_646_ = lean_ctor_get(v___x_645_, 0);
v_isSharedCheck_653_ = !lean_is_exclusive(v___x_645_);
if (v_isSharedCheck_653_ == 0)
{
v___x_648_ = v___x_645_;
v_isShared_649_ = v_isSharedCheck_653_;
goto v_resetjp_647_;
}
else
{
lean_inc(v_a_646_);
lean_dec(v___x_645_);
v___x_648_ = lean_box(0);
v_isShared_649_ = v_isSharedCheck_653_;
goto v_resetjp_647_;
}
v_resetjp_647_:
{
lean_object* v___x_651_; 
if (v_isShared_649_ == 0)
{
v___x_651_ = v___x_648_;
goto v_reusejp_650_;
}
else
{
lean_object* v_reuseFailAlloc_652_; 
v_reuseFailAlloc_652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_652_, 0, v_a_646_);
v___x_651_ = v_reuseFailAlloc_652_;
goto v_reusejp_650_;
}
v_reusejp_650_:
{
return v___x_651_;
}
}
}
v___jp_478_:
{
lean_object* v___x_485_; 
lean_inc(v_a_477_);
v___x_485_ = l_Lean_Elab_Deriving_mkInductArgNames(v_a_477_, v___y_479_, v___y_480_, v___y_481_, v___y_482_, v___y_483_, v___y_484_);
if (lean_obj_tag(v___x_485_) == 0)
{
lean_object* v_a_486_; lean_object* v___x_487_; 
v_a_486_ = lean_ctor_get(v___x_485_, 0);
lean_inc(v_a_486_);
lean_dec_ref_known(v___x_485_, 1);
v___x_487_ = l_Lean_Elab_Deriving_mkImplicitBinders(v_a_486_, v___y_479_, v___y_480_, v___y_481_, v___y_482_, v___y_483_, v___y_484_);
if (lean_obj_tag(v___x_487_) == 0)
{
lean_object* v_a_488_; lean_object* v___x_489_; lean_object* v___x_490_; 
v_a_488_ = lean_ctor_get(v___x_487_, 0);
lean_inc(v_a_488_);
lean_dec_ref_known(v___x_487_, 1);
v___x_489_ = ((lean_object*)(l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__1));
lean_inc(v_a_486_);
lean_inc(v_a_477_);
v___x_490_ = l_Lean_Elab_Deriving_mkInstImplicitBinders(v___x_489_, v_a_477_, v_a_486_, v___y_479_, v___y_480_, v___y_481_, v___y_482_, v___y_483_, v___y_484_);
if (lean_obj_tag(v___x_490_) == 0)
{
lean_object* v_a_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; 
v_a_491_ = lean_ctor_get(v___x_490_, 0);
lean_inc(v_a_491_);
lean_dec_ref_known(v___x_490_, 1);
v___x_492_ = l_unsafeCast___redArg(v_a_491_);
lean_dec(v_a_491_);
v___x_493_ = l_Array_append___redArg(v_a_488_, v___x_492_);
lean_dec(v___x_492_);
v___x_494_ = ((lean_object*)(l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__6));
lean_inc(v_a_486_);
lean_inc(v_a_477_);
v___x_495_ = l_Lean_Elab_Deriving_mkInstImplicitBinders(v___x_494_, v_a_477_, v_a_486_, v___y_479_, v___y_480_, v___y_481_, v___y_482_, v___y_483_, v___y_484_);
if (lean_obj_tag(v___x_495_) == 0)
{
lean_object* v_a_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; 
v_a_496_ = lean_ctor_get(v___x_495_, 0);
lean_inc(v_a_496_);
lean_dec_ref_known(v___x_495_, 1);
v___x_497_ = l_unsafeCast___redArg(v_a_496_);
lean_dec(v_a_496_);
v___x_498_ = l_Array_append___redArg(v___x_493_, v___x_497_);
lean_dec(v___x_497_);
v___x_499_ = l_Lean_Elab_Deriving_mkInductiveApp___redArg(v_a_477_, v_a_486_, v___y_483_);
lean_dec(v_a_486_);
if (lean_obj_tag(v___x_499_) == 0)
{
lean_object* v_toCold_500_; lean_object* v_a_501_; lean_object* v_ref_502_; lean_object* v_options_503_; lean_object* v_quotContext_504_; lean_object* v_currMacroScope_505_; lean_object* v_inheritedTraceOptions_506_; uint8_t v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; uint8_t v_hasTrace_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; 
v_toCold_500_ = lean_ctor_get(v___y_483_, 0);
v_a_501_ = lean_ctor_get(v___x_499_, 0);
lean_inc(v_a_501_);
lean_dec_ref_known(v___x_499_, 1);
v_ref_502_ = lean_ctor_get(v___y_483_, 2);
v_options_503_ = lean_ctor_get(v_toCold_500_, 2);
v_quotContext_504_ = lean_ctor_get(v_toCold_500_, 8);
v_currMacroScope_505_ = lean_ctor_get(v_toCold_500_, 9);
v_inheritedTraceOptions_506_ = lean_ctor_get(v_toCold_500_, 11);
v___x_507_ = 0;
v___x_508_ = l_Lean_SourceInfo_fromRef(v_ref_502_, v___x_507_);
v___x_509_ = ((lean_object*)(l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__8));
lean_inc_n(v___x_508_, 30);
v___x_510_ = l_Lean_Syntax_node1(v___x_508_, v___x_509_, v_a_501_);
v___x_511_ = ((lean_object*)(l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__10));
v___x_512_ = lean_obj_once(&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__11, &l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__11_once, _init_l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__11);
v___x_513_ = l_Lean_Syntax_node2(v___x_508_, v___x_511_, v___x_512_, v___x_510_);
v___x_514_ = ((lean_object*)(l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__14));
v___x_515_ = ((lean_object*)(l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__16));
v___x_516_ = lean_obj_once(&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__17, &l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__17_once, _init_l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__17);
v___x_517_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_517_, 0, v___x_508_);
lean_ctor_set(v___x_517_, 1, v___x_509_);
lean_ctor_set(v___x_517_, 2, v___x_516_);
lean_inc_ref_n(v___x_517_, 12);
v___x_518_ = l_Lean_Syntax_node7(v___x_508_, v___x_515_, v___x_517_, v___x_517_, v___x_517_, v___x_517_, v___x_517_, v___x_517_, v___x_517_);
v___x_519_ = ((lean_object*)(l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__18));
v___x_520_ = ((lean_object*)(l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__19));
v___x_521_ = ((lean_object*)(l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__21));
v___x_522_ = l_Lean_Syntax_node1(v___x_508_, v___x_521_, v___x_517_);
v___x_523_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_523_, 0, v___x_508_);
lean_ctor_set(v___x_523_, 1, v___x_519_);
v___x_524_ = ((lean_object*)(l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__23));
v___x_525_ = l_unsafeCast___redArg(v___x_498_);
lean_dec_ref(v___x_498_);
v___x_526_ = l_Array_append___redArg(v___x_516_, v___x_525_);
lean_dec(v___x_525_);
v___x_527_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_527_, 0, v___x_508_);
lean_ctor_set(v___x_527_, 1, v___x_509_);
lean_ctor_set(v___x_527_, 2, v___x_526_);
v___x_528_ = ((lean_object*)(l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__25));
v___x_529_ = ((lean_object*)(l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__26));
v___x_530_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_530_, 0, v___x_508_);
lean_ctor_set(v___x_530_, 1, v___x_529_);
v___x_531_ = l_Lean_Syntax_node2(v___x_508_, v___x_528_, v___x_530_, v___x_513_);
v___x_532_ = l_Lean_Syntax_node2(v___x_508_, v___x_524_, v___x_527_, v___x_531_);
v___x_533_ = ((lean_object*)(l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__28));
v___x_534_ = ((lean_object*)(l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__29));
v___x_535_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_535_, 0, v___x_508_);
lean_ctor_set(v___x_535_, 1, v___x_534_);
v___x_536_ = lean_obj_once(&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__31, &l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__31_once, _init_l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__31);
v___x_537_ = ((lean_object*)(l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__33));
lean_inc_n(v_currMacroScope_505_, 2);
lean_inc_n(v_quotContext_504_, 2);
v___x_538_ = l_Lean_addMacroScope(v_quotContext_504_, v___x_537_, v_currMacroScope_505_);
v___x_539_ = lean_box(0);
v___x_540_ = ((lean_object*)(l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__35));
v___x_541_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_541_, 0, v___x_508_);
lean_ctor_set(v___x_541_, 1, v___x_536_);
lean_ctor_set(v___x_541_, 2, v___x_538_);
lean_ctor_set(v___x_541_, 3, v___x_540_);
v___x_542_ = ((lean_object*)(l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__37));
v___x_543_ = ((lean_object*)(l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__39));
v___x_544_ = ((lean_object*)(l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__40));
v___x_545_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_545_, 0, v___x_508_);
lean_ctor_set(v___x_545_, 1, v___x_544_);
v___x_546_ = ((lean_object*)(l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__42));
v___x_547_ = lean_obj_once(&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__43, &l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__43_once, _init_l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__43);
v___x_548_ = lean_obj_once(&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__44, &l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__44_once, _init_l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__44);
v___x_549_ = l_Lean_addMacroScope(v_quotContext_504_, v___x_548_, v_currMacroScope_505_);
v___x_550_ = ((lean_object*)(l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__65));
v___x_551_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_551_, 0, v___x_508_);
lean_ctor_set(v___x_551_, 1, v___x_547_);
lean_ctor_set(v___x_551_, 2, v___x_549_);
lean_ctor_set(v___x_551_, 3, v___x_550_);
v___x_552_ = l_Lean_Syntax_node1(v___x_508_, v___x_546_, v___x_551_);
v___x_553_ = l_Lean_Syntax_node2(v___x_508_, v___x_543_, v___x_545_, v___x_552_);
v___x_554_ = ((lean_object*)(l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__67));
v___x_555_ = ((lean_object*)(l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__68));
v___x_556_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_556_, 0, v___x_508_);
lean_ctor_set(v___x_556_, 1, v___x_555_);
v___x_557_ = ((lean_object*)(l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__70));
v___x_558_ = ((lean_object*)(l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__72));
v___x_559_ = ((lean_object*)(l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__74));
v___x_560_ = ((lean_object*)(l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__75));
v___x_561_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_561_, 0, v___x_508_);
lean_ctor_set(v___x_561_, 1, v___x_560_);
v___x_562_ = l_Lean_Syntax_node1(v___x_508_, v___x_559_, v___x_561_);
v___x_563_ = l_Lean_Syntax_node1(v___x_508_, v___x_509_, v___x_562_);
v___x_564_ = l_Lean_Syntax_node1(v___x_508_, v___x_558_, v___x_563_);
v___x_565_ = l_Lean_Syntax_node1(v___x_508_, v___x_557_, v___x_564_);
v___x_566_ = l_Lean_Syntax_node2(v___x_508_, v___x_554_, v___x_556_, v___x_565_);
v___x_567_ = ((lean_object*)(l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__76));
v___x_568_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_568_, 0, v___x_508_);
lean_ctor_set(v___x_568_, 1, v___x_567_);
v___x_569_ = l_Lean_Syntax_node3(v___x_508_, v___x_542_, v___x_553_, v___x_566_, v___x_568_);
v___x_570_ = l_Lean_Syntax_node1(v___x_508_, v___x_509_, v___x_569_);
v___x_571_ = l_Lean_Syntax_node2(v___x_508_, v___x_511_, v___x_541_, v___x_570_);
v___x_572_ = ((lean_object*)(l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__79));
v___x_573_ = l_Lean_Syntax_node2(v___x_508_, v___x_572_, v___x_517_, v___x_517_);
v___x_574_ = l_Lean_Syntax_node4(v___x_508_, v___x_533_, v___x_535_, v___x_571_, v___x_573_, v___x_517_);
v___x_575_ = l_Lean_Syntax_node6(v___x_508_, v___x_520_, v___x_522_, v___x_523_, v___x_517_, v___x_517_, v___x_532_, v___x_574_);
v_hasTrace_576_ = lean_ctor_get_uint8(v_options_503_, sizeof(void*)*1);
v___x_577_ = l_Lean_Syntax_node2(v___x_508_, v___x_514_, v___x_518_, v___x_575_);
v___x_578_ = lean_unsigned_to_nat(1u);
v___x_579_ = lean_mk_empty_array_with_capacity(v___x_578_);
v___x_580_ = lean_array_push(v___x_579_, v___x_577_);
if (v_hasTrace_576_ == 0)
{
v___y_473_ = v___x_580_;
goto v___jp_472_;
}
else
{
lean_object* v___x_581_; lean_object* v___x_582_; uint8_t v___x_583_; 
v___x_581_ = ((lean_object*)(l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__81));
v___x_582_ = lean_obj_once(&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__84, &l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__84_once, _init_l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__84);
v___x_583_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_506_, v_options_503_, v___x_582_);
if (v___x_583_ == 0)
{
v___y_473_ = v___x_580_;
goto v___jp_472_;
}
else
{
lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; 
v___x_584_ = lean_obj_once(&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__86, &l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__86_once, _init_l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__86);
lean_inc_ref(v___x_580_);
v___x_585_ = lean_array_to_list(v___x_580_);
v___x_586_ = l_List_mapTR_loop___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__1(v___x_585_, v___x_539_);
v___x_587_ = l_Lean_MessageData_ofList(v___x_586_);
v___x_588_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_588_, 0, v___x_584_);
lean_ctor_set(v___x_588_, 1, v___x_587_);
v___x_589_ = l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__2___redArg(v___x_581_, v___x_588_, v___y_481_, v___y_482_, v___y_483_, v___y_484_);
if (lean_obj_tag(v___x_589_) == 0)
{
lean_dec_ref_known(v___x_589_, 1);
v___y_473_ = v___x_580_;
goto v___jp_472_;
}
else
{
lean_object* v_a_590_; lean_object* v___x_592_; uint8_t v_isShared_593_; uint8_t v_isSharedCheck_597_; 
lean_dec_ref(v___x_580_);
v_a_590_ = lean_ctor_get(v___x_589_, 0);
v_isSharedCheck_597_ = !lean_is_exclusive(v___x_589_);
if (v_isSharedCheck_597_ == 0)
{
v___x_592_ = v___x_589_;
v_isShared_593_ = v_isSharedCheck_597_;
goto v_resetjp_591_;
}
else
{
lean_inc(v_a_590_);
lean_dec(v___x_589_);
v___x_592_ = lean_box(0);
v_isShared_593_ = v_isSharedCheck_597_;
goto v_resetjp_591_;
}
v_resetjp_591_:
{
lean_object* v___x_595_; 
if (v_isShared_593_ == 0)
{
v___x_595_ = v___x_592_;
goto v_reusejp_594_;
}
else
{
lean_object* v_reuseFailAlloc_596_; 
v_reuseFailAlloc_596_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_596_, 0, v_a_590_);
v___x_595_ = v_reuseFailAlloc_596_;
goto v_reusejp_594_;
}
v_reusejp_594_:
{
return v___x_595_;
}
}
}
}
}
}
else
{
lean_object* v_a_598_; lean_object* v___x_600_; uint8_t v_isShared_601_; uint8_t v_isSharedCheck_605_; 
lean_dec_ref(v___x_498_);
v_a_598_ = lean_ctor_get(v___x_499_, 0);
v_isSharedCheck_605_ = !lean_is_exclusive(v___x_499_);
if (v_isSharedCheck_605_ == 0)
{
v___x_600_ = v___x_499_;
v_isShared_601_ = v_isSharedCheck_605_;
goto v_resetjp_599_;
}
else
{
lean_inc(v_a_598_);
lean_dec(v___x_499_);
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
else
{
lean_dec_ref(v___x_493_);
lean_dec(v_a_486_);
lean_dec(v_a_477_);
return v___x_495_;
}
}
else
{
lean_dec(v_a_488_);
lean_dec(v_a_486_);
lean_dec(v_a_477_);
return v___x_490_;
}
}
else
{
lean_object* v_a_606_; lean_object* v___x_608_; uint8_t v_isShared_609_; uint8_t v_isSharedCheck_613_; 
lean_dec(v_a_486_);
lean_dec(v_a_477_);
v_a_606_ = lean_ctor_get(v___x_487_, 0);
v_isSharedCheck_613_ = !lean_is_exclusive(v___x_487_);
if (v_isSharedCheck_613_ == 0)
{
v___x_608_ = v___x_487_;
v_isShared_609_ = v_isSharedCheck_613_;
goto v_resetjp_607_;
}
else
{
lean_inc(v_a_606_);
lean_dec(v___x_487_);
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
v_reuseFailAlloc_612_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_612_, 0, v_a_606_);
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
else
{
lean_object* v_a_614_; lean_object* v___x_616_; uint8_t v_isShared_617_; uint8_t v_isSharedCheck_621_; 
lean_dec(v_a_477_);
v_a_614_ = lean_ctor_get(v___x_485_, 0);
v_isSharedCheck_621_ = !lean_is_exclusive(v___x_485_);
if (v_isSharedCheck_621_ == 0)
{
v___x_616_ = v___x_485_;
v_isShared_617_ = v_isSharedCheck_621_;
goto v_resetjp_615_;
}
else
{
lean_inc(v_a_614_);
lean_dec(v___x_485_);
v___x_616_ = lean_box(0);
v_isShared_617_ = v_isSharedCheck_621_;
goto v_resetjp_615_;
}
v_resetjp_615_:
{
lean_object* v___x_619_; 
if (v_isShared_617_ == 0)
{
v___x_619_ = v___x_616_;
goto v_reusejp_618_;
}
else
{
lean_object* v_reuseFailAlloc_620_; 
v_reuseFailAlloc_620_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_620_, 0, v_a_614_);
v___x_619_ = v_reuseFailAlloc_620_;
goto v_reusejp_618_;
}
v_reusejp_618_:
{
return v___x_619_;
}
}
}
}
v___jp_622_:
{
uint8_t v___x_629_; 
v___x_629_ = l_Lean_InductiveVal_isNested(v_a_477_);
if (v___x_629_ == 0)
{
v___y_479_ = v___y_623_;
v___y_480_ = v___y_624_;
v___y_481_ = v___y_625_;
v___y_482_ = v___y_626_;
v___y_483_ = v___y_627_;
v___y_484_ = v___y_628_;
goto v___jp_478_;
}
else
{
lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v_a_632_; lean_object* v___x_634_; uint8_t v_isShared_635_; uint8_t v_isSharedCheck_639_; 
lean_dec(v_a_477_);
v___x_630_ = lean_obj_once(&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__88, &l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__88_once, _init_l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__88);
v___x_631_ = l_Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3___redArg(v___x_630_, v___y_623_, v___y_624_, v___y_625_, v___y_626_, v___y_627_, v___y_628_);
v_a_632_ = lean_ctor_get(v___x_631_, 0);
v_isSharedCheck_639_ = !lean_is_exclusive(v___x_631_);
if (v_isSharedCheck_639_ == 0)
{
v___x_634_ = v___x_631_;
v_isShared_635_ = v_isSharedCheck_639_;
goto v_resetjp_633_;
}
else
{
lean_inc(v_a_632_);
lean_dec(v___x_631_);
v___x_634_ = lean_box(0);
v_isShared_635_ = v_isSharedCheck_639_;
goto v_resetjp_633_;
}
v_resetjp_633_:
{
lean_object* v___x_637_; 
if (v_isShared_635_ == 0)
{
v___x_637_ = v___x_634_;
goto v_reusejp_636_;
}
else
{
lean_object* v_reuseFailAlloc_638_; 
v_reuseFailAlloc_638_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_638_, 0, v_a_632_);
v___x_637_ = v_reuseFailAlloc_638_;
goto v_reusejp_636_;
}
v_reusejp_636_:
{
return v___x_637_;
}
}
}
}
}
else
{
lean_object* v_a_654_; lean_object* v___x_656_; uint8_t v_isShared_657_; uint8_t v_isSharedCheck_661_; 
v_a_654_ = lean_ctor_get(v___x_476_, 0);
v_isSharedCheck_661_ = !lean_is_exclusive(v___x_476_);
if (v_isSharedCheck_661_ == 0)
{
v___x_656_ = v___x_476_;
v_isShared_657_ = v_isSharedCheck_661_;
goto v_resetjp_655_;
}
else
{
lean_inc(v_a_654_);
lean_dec(v___x_476_);
v___x_656_ = lean_box(0);
v_isShared_657_ = v_isSharedCheck_661_;
goto v_resetjp_655_;
}
v_resetjp_655_:
{
lean_object* v___x_659_; 
if (v_isShared_657_ == 0)
{
v___x_659_ = v___x_656_;
goto v_reusejp_658_;
}
else
{
lean_object* v_reuseFailAlloc_660_; 
v_reuseFailAlloc_660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_660_, 0, v_a_654_);
v___x_659_ = v_reuseFailAlloc_660_;
goto v_reusejp_658_;
}
v_reusejp_658_:
{
return v___x_659_;
}
}
}
v___jp_472_:
{
lean_object* v___x_474_; lean_object* v___x_475_; 
v___x_474_ = l_unsafeCast___redArg(v___y_473_);
lean_dec_ref(v___y_473_);
v___x_475_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_475_, 0, v___x_474_);
return v___x_475_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___boxed(lean_object* v_declName_662_, lean_object* v_a_663_, lean_object* v_a_664_, lean_object* v_a_665_, lean_object* v_a_666_, lean_object* v_a_667_, lean_object* v_a_668_, lean_object* v_a_669_){
_start:
{
lean_object* v_res_670_; 
v_res_670_ = l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds(v_declName_662_, v_a_663_, v_a_664_, v_a_665_, v_a_666_, v_a_667_, v_a_668_);
lean_dec(v_a_668_);
lean_dec_ref(v_a_667_);
lean_dec(v_a_666_);
lean_dec_ref(v_a_665_);
lean_dec(v_a_664_);
lean_dec_ref(v_a_663_);
return v_res_670_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__2(lean_object* v_cls_671_, lean_object* v_msg_672_, lean_object* v___y_673_, lean_object* v___y_674_, lean_object* v___y_675_, lean_object* v___y_676_, lean_object* v___y_677_, lean_object* v___y_678_){
_start:
{
lean_object* v___x_680_; 
v___x_680_ = l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__2___redArg(v_cls_671_, v_msg_672_, v___y_675_, v___y_676_, v___y_677_, v___y_678_);
return v___x_680_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__2___boxed(lean_object* v_cls_681_, lean_object* v_msg_682_, lean_object* v___y_683_, lean_object* v___y_684_, lean_object* v___y_685_, lean_object* v___y_686_, lean_object* v___y_687_, lean_object* v___y_688_, lean_object* v___y_689_){
_start:
{
lean_object* v_res_690_; 
v_res_690_ = l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__2(v_cls_681_, v_msg_682_, v___y_683_, v___y_684_, v___y_685_, v___y_686_, v___y_687_, v___y_688_);
lean_dec(v___y_688_);
lean_dec_ref(v___y_687_);
lean_dec(v___y_686_);
lean_dec_ref(v___y_685_);
lean_dec(v___y_684_);
lean_dec_ref(v___y_683_);
return v_res_690_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3(lean_object* v_00_u03b1_691_, lean_object* v_msg_692_, lean_object* v___y_693_, lean_object* v___y_694_, lean_object* v___y_695_, lean_object* v___y_696_, lean_object* v___y_697_, lean_object* v___y_698_){
_start:
{
lean_object* v___x_700_; 
v___x_700_ = l_Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3___redArg(v_msg_692_, v___y_693_, v___y_694_, v___y_695_, v___y_696_, v___y_697_, v___y_698_);
return v___x_700_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3___boxed(lean_object* v_00_u03b1_701_, lean_object* v_msg_702_, lean_object* v___y_703_, lean_object* v___y_704_, lean_object* v___y_705_, lean_object* v___y_706_, lean_object* v___y_707_, lean_object* v___y_708_, lean_object* v___y_709_){
_start:
{
lean_object* v_res_710_; 
v_res_710_ = l_Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3(v_00_u03b1_701_, v_msg_702_, v___y_703_, v___y_704_, v___y_705_, v___y_706_, v___y_707_, v___y_708_);
lean_dec(v___y_708_);
lean_dec_ref(v___y_707_);
lean_dec(v___y_706_);
lean_dec_ref(v___y_705_);
lean_dec(v___y_704_);
lean_dec_ref(v___y_703_);
return v_res_710_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3_spec__4(lean_object* v_msgData_711_, lean_object* v_macroStack_712_, lean_object* v___y_713_, lean_object* v___y_714_, lean_object* v___y_715_, lean_object* v___y_716_, lean_object* v___y_717_, lean_object* v___y_718_){
_start:
{
lean_object* v___x_720_; 
v___x_720_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3_spec__4___redArg(v_msgData_711_, v_macroStack_712_, v___y_717_);
return v___x_720_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3_spec__4___boxed(lean_object* v_msgData_721_, lean_object* v_macroStack_722_, lean_object* v___y_723_, lean_object* v___y_724_, lean_object* v___y_725_, lean_object* v___y_726_, lean_object* v___y_727_, lean_object* v___y_728_, lean_object* v___y_729_){
_start:
{
lean_object* v_res_730_; 
v_res_730_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds_spec__3_spec__4(v_msgData_721_, v_macroStack_722_, v___y_723_, v___y_724_, v___y_725_, v___y_726_, v___y_727_, v___y_728_);
lean_dec(v___y_728_);
lean_dec_ref(v___y_727_);
lean_dec(v___y_726_);
lean_dec_ref(v___y_725_);
lean_dec(v___y_724_);
lean_dec_ref(v___y_723_);
return v_res_730_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstance_spec__0(lean_object* v_as_731_, size_t v_i_732_, size_t v_stop_733_, lean_object* v_b_734_, lean_object* v___y_735_, lean_object* v___y_736_){
_start:
{
uint8_t v___x_738_; 
v___x_738_ = lean_usize_dec_eq(v_i_732_, v_stop_733_);
if (v___x_738_ == 0)
{
lean_object* v___x_739_; lean_object* v___x_740_; 
v___x_739_ = lean_array_uget_borrowed(v_as_731_, v_i_732_);
lean_inc(v___x_739_);
v___x_740_ = l_Lean_Elab_Command_elabCommand(v___x_739_, v___y_735_, v___y_736_);
if (lean_obj_tag(v___x_740_) == 0)
{
lean_object* v_a_741_; size_t v___x_742_; size_t v___x_743_; 
v_a_741_ = lean_ctor_get(v___x_740_, 0);
lean_inc(v_a_741_);
lean_dec_ref_known(v___x_740_, 1);
v___x_742_ = ((size_t)1ULL);
v___x_743_ = lean_usize_add(v_i_732_, v___x_742_);
v_i_732_ = v___x_743_;
v_b_734_ = v_a_741_;
goto _start;
}
else
{
return v___x_740_;
}
}
else
{
lean_object* v___x_745_; 
v___x_745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_745_, 0, v_b_734_);
return v___x_745_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstance_spec__0___boxed(lean_object* v_as_746_, lean_object* v_i_747_, lean_object* v_stop_748_, lean_object* v_b_749_, lean_object* v___y_750_, lean_object* v___y_751_, lean_object* v___y_752_){
_start:
{
size_t v_i_boxed_753_; size_t v_stop_boxed_754_; lean_object* v_res_755_; 
v_i_boxed_753_ = lean_unbox_usize(v_i_747_);
lean_dec(v_i_747_);
v_stop_boxed_754_ = lean_unbox_usize(v_stop_748_);
lean_dec(v_stop_748_);
v_res_755_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstance_spec__0(v_as_746_, v_i_boxed_753_, v_stop_boxed_754_, v_b_749_, v___y_750_, v___y_751_);
lean_dec(v___y_751_);
lean_dec_ref(v___y_750_);
lean_dec_ref(v_as_746_);
return v_res_755_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstance___lam__0(lean_object* v___x_756_, lean_object* v___y_757_, lean_object* v___y_758_){
_start:
{
lean_object* v___x_760_; 
v___x_760_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___x_756_, v___y_757_, v___y_758_);
if (lean_obj_tag(v___x_760_) == 0)
{
lean_object* v_a_761_; lean_object* v___x_763_; uint8_t v_isShared_764_; uint8_t v_isSharedCheck_782_; 
v_a_761_ = lean_ctor_get(v___x_760_, 0);
v_isSharedCheck_782_ = !lean_is_exclusive(v___x_760_);
if (v_isSharedCheck_782_ == 0)
{
v___x_763_ = v___x_760_;
v_isShared_764_ = v_isSharedCheck_782_;
goto v_resetjp_762_;
}
else
{
lean_inc(v_a_761_);
lean_dec(v___x_760_);
v___x_763_ = lean_box(0);
v_isShared_764_ = v_isSharedCheck_782_;
goto v_resetjp_762_;
}
v_resetjp_762_:
{
lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; uint8_t v___x_768_; 
v___x_765_ = lean_unsigned_to_nat(0u);
v___x_766_ = lean_array_get_size(v_a_761_);
v___x_767_ = lean_box(0);
v___x_768_ = lean_nat_dec_lt(v___x_765_, v___x_766_);
if (v___x_768_ == 0)
{
lean_object* v___x_770_; 
lean_dec(v_a_761_);
if (v_isShared_764_ == 0)
{
lean_ctor_set(v___x_763_, 0, v___x_767_);
v___x_770_ = v___x_763_;
goto v_reusejp_769_;
}
else
{
lean_object* v_reuseFailAlloc_771_; 
v_reuseFailAlloc_771_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_771_, 0, v___x_767_);
v___x_770_ = v_reuseFailAlloc_771_;
goto v_reusejp_769_;
}
v_reusejp_769_:
{
return v___x_770_;
}
}
else
{
uint8_t v___x_772_; 
v___x_772_ = lean_nat_dec_le(v___x_766_, v___x_766_);
if (v___x_772_ == 0)
{
if (v___x_768_ == 0)
{
lean_object* v___x_774_; 
lean_dec(v_a_761_);
if (v_isShared_764_ == 0)
{
lean_ctor_set(v___x_763_, 0, v___x_767_);
v___x_774_ = v___x_763_;
goto v_reusejp_773_;
}
else
{
lean_object* v_reuseFailAlloc_775_; 
v_reuseFailAlloc_775_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_775_, 0, v___x_767_);
v___x_774_ = v_reuseFailAlloc_775_;
goto v_reusejp_773_;
}
v_reusejp_773_:
{
return v___x_774_;
}
}
else
{
size_t v___x_776_; size_t v___x_777_; lean_object* v___x_778_; 
lean_del_object(v___x_763_);
v___x_776_ = ((size_t)0ULL);
v___x_777_ = lean_usize_of_nat(v___x_766_);
v___x_778_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstance_spec__0(v_a_761_, v___x_776_, v___x_777_, v___x_767_, v___y_757_, v___y_758_);
lean_dec(v_a_761_);
return v___x_778_;
}
}
else
{
size_t v___x_779_; size_t v___x_780_; lean_object* v___x_781_; 
lean_del_object(v___x_763_);
v___x_779_ = ((size_t)0ULL);
v___x_780_ = lean_usize_of_nat(v___x_766_);
v___x_781_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstance_spec__0(v_a_761_, v___x_779_, v___x_780_, v___x_767_, v___y_757_, v___y_758_);
lean_dec(v_a_761_);
return v___x_781_;
}
}
}
}
else
{
lean_object* v_a_783_; lean_object* v___x_785_; uint8_t v_isShared_786_; uint8_t v_isSharedCheck_790_; 
v_a_783_ = lean_ctor_get(v___x_760_, 0);
v_isSharedCheck_790_ = !lean_is_exclusive(v___x_760_);
if (v_isSharedCheck_790_ == 0)
{
v___x_785_ = v___x_760_;
v_isShared_786_ = v_isSharedCheck_790_;
goto v_resetjp_784_;
}
else
{
lean_inc(v_a_783_);
lean_dec(v___x_760_);
v___x_785_ = lean_box(0);
v_isShared_786_ = v_isSharedCheck_790_;
goto v_resetjp_784_;
}
v_resetjp_784_:
{
lean_object* v___x_788_; 
if (v_isShared_786_ == 0)
{
v___x_788_ = v___x_785_;
goto v_reusejp_787_;
}
else
{
lean_object* v_reuseFailAlloc_789_; 
v_reuseFailAlloc_789_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_789_, 0, v_a_783_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstance___lam__0___boxed(lean_object* v___x_791_, lean_object* v___y_792_, lean_object* v___y_793_, lean_object* v___y_794_){
_start:
{
lean_object* v_res_795_; 
v_res_795_ = l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstance___lam__0(v___x_791_, v___y_792_, v___y_793_);
lean_dec(v___y_793_);
lean_dec_ref(v___y_792_);
return v_res_795_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstance(lean_object* v_declName_796_, lean_object* v_a_797_, lean_object* v_a_798_){
_start:
{
lean_object* v___x_800_; lean_object* v___f_801_; lean_object* v___x_802_; 
lean_inc(v_declName_796_);
v___x_800_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___boxed), 8, 1);
lean_closure_set(v___x_800_, 0, v_declName_796_);
v___f_801_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstance___lam__0___boxed), 4, 1);
lean_closure_set(v___f_801_, 0, v___x_800_);
v___x_802_ = l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg(v_declName_796_, v___f_801_, v_a_797_, v_a_798_);
return v___x_802_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstance___boxed(lean_object* v_declName_803_, lean_object* v_a_804_, lean_object* v_a_805_, lean_object* v_a_806_){
_start:
{
lean_object* v_res_807_; 
v_res_807_ = l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstance(v_declName_803_, v_a_804_, v_a_805_);
lean_dec(v_a_805_);
lean_dec_ref(v_a_804_);
return v_res_807_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInductive___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceHandler_spec__1___redArg(lean_object* v_declName_808_, lean_object* v___y_809_){
_start:
{
lean_object* v___x_811_; lean_object* v_env_812_; uint8_t v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; 
v___x_811_ = lean_st_ref_get(v___y_809_);
v_env_812_ = lean_ctor_get(v___x_811_, 0);
lean_inc_ref(v_env_812_);
lean_dec(v___x_811_);
v___x_813_ = l_Lean_isInductiveCore(v_env_812_, v_declName_808_);
v___x_814_ = lean_box(v___x_813_);
v___x_815_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_815_, 0, v___x_814_);
return v___x_815_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInductive___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceHandler_spec__1___redArg___boxed(lean_object* v_declName_816_, lean_object* v___y_817_, lean_object* v___y_818_){
_start:
{
lean_object* v_res_819_; 
v_res_819_ = l_Lean_isInductive___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceHandler_spec__1___redArg(v_declName_816_, v___y_817_);
lean_dec(v___y_817_);
return v_res_819_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInductive___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceHandler_spec__1(lean_object* v_declName_820_, lean_object* v___y_821_, lean_object* v___y_822_){
_start:
{
lean_object* v___x_824_; 
v___x_824_ = l_Lean_isInductive___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceHandler_spec__1___redArg(v_declName_820_, v___y_822_);
return v___x_824_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInductive___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceHandler_spec__1___boxed(lean_object* v_declName_825_, lean_object* v___y_826_, lean_object* v___y_827_, lean_object* v___y_828_){
_start:
{
lean_object* v_res_829_; 
v_res_829_ = l_Lean_isInductive___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceHandler_spec__1(v_declName_825_, v___y_826_, v___y_827_);
lean_dec(v___y_827_);
lean_dec_ref(v___y_826_);
return v_res_829_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceHandler___lam__0(uint8_t v_____do__lift_830_, lean_object* v___y_831_, lean_object* v___y_832_){
_start:
{
if (v_____do__lift_830_ == 0)
{
uint8_t v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; 
v___x_834_ = 1;
v___x_835_ = lean_box(v___x_834_);
v___x_836_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_836_, 0, v___x_835_);
return v___x_836_;
}
else
{
uint8_t v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; 
v___x_837_ = 0;
v___x_838_ = lean_box(v___x_837_);
v___x_839_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_839_, 0, v___x_838_);
return v___x_839_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceHandler___lam__0___boxed(lean_object* v_____do__lift_840_, lean_object* v___y_841_, lean_object* v___y_842_, lean_object* v___y_843_){
_start:
{
uint8_t v_____do__lift_1654__boxed_844_; lean_object* v_res_845_; 
v_____do__lift_1654__boxed_844_ = lean_unbox(v_____do__lift_840_);
v_res_845_ = l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceHandler___lam__0(v_____do__lift_1654__boxed_844_, v___y_841_, v___y_842_);
lean_dec(v___y_842_);
lean_dec_ref(v___y_841_);
return v_res_845_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceHandler_spec__2(lean_object* v_as_846_, size_t v_i_847_, size_t v_stop_848_, lean_object* v___y_849_, lean_object* v___y_850_){
_start:
{
uint8_t v___x_856_; 
v___x_856_ = lean_usize_dec_eq(v_i_847_, v_stop_848_);
if (v___x_856_ == 0)
{
uint8_t v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; 
v___x_857_ = 1;
v___x_858_ = lean_array_uget_borrowed(v_as_846_, v_i_847_);
lean_inc(v___x_858_);
v___x_859_ = l_Lean_isInductive___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceHandler_spec__1___redArg(v___x_858_, v___y_850_);
if (lean_obj_tag(v___x_859_) == 0)
{
lean_object* v_a_860_; lean_object* v___x_862_; uint8_t v_isShared_863_; uint8_t v_isSharedCheck_869_; 
v_a_860_ = lean_ctor_get(v___x_859_, 0);
v_isSharedCheck_869_ = !lean_is_exclusive(v___x_859_);
if (v_isSharedCheck_869_ == 0)
{
v___x_862_ = v___x_859_;
v_isShared_863_ = v_isSharedCheck_869_;
goto v_resetjp_861_;
}
else
{
lean_inc(v_a_860_);
lean_dec(v___x_859_);
v___x_862_ = lean_box(0);
v_isShared_863_ = v_isSharedCheck_869_;
goto v_resetjp_861_;
}
v_resetjp_861_:
{
uint8_t v___x_864_; 
v___x_864_ = lean_unbox(v_a_860_);
lean_dec(v_a_860_);
if (v___x_864_ == 0)
{
lean_object* v___x_865_; lean_object* v___x_867_; 
v___x_865_ = lean_box(v___x_857_);
if (v_isShared_863_ == 0)
{
lean_ctor_set(v___x_862_, 0, v___x_865_);
v___x_867_ = v___x_862_;
goto v_reusejp_866_;
}
else
{
lean_object* v_reuseFailAlloc_868_; 
v_reuseFailAlloc_868_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_868_, 0, v___x_865_);
v___x_867_ = v_reuseFailAlloc_868_;
goto v_reusejp_866_;
}
v_reusejp_866_:
{
return v___x_867_;
}
}
else
{
lean_del_object(v___x_862_);
goto v___jp_852_;
}
}
}
else
{
if (lean_obj_tag(v___x_859_) == 0)
{
lean_object* v_a_870_; lean_object* v___x_872_; uint8_t v_isShared_873_; uint8_t v_isSharedCheck_879_; 
v_a_870_ = lean_ctor_get(v___x_859_, 0);
v_isSharedCheck_879_ = !lean_is_exclusive(v___x_859_);
if (v_isSharedCheck_879_ == 0)
{
v___x_872_ = v___x_859_;
v_isShared_873_ = v_isSharedCheck_879_;
goto v_resetjp_871_;
}
else
{
lean_inc(v_a_870_);
lean_dec(v___x_859_);
v___x_872_ = lean_box(0);
v_isShared_873_ = v_isSharedCheck_879_;
goto v_resetjp_871_;
}
v_resetjp_871_:
{
uint8_t v___x_874_; 
v___x_874_ = lean_unbox(v_a_870_);
lean_dec(v_a_870_);
if (v___x_874_ == 0)
{
lean_del_object(v___x_872_);
goto v___jp_852_;
}
else
{
lean_object* v___x_875_; lean_object* v___x_877_; 
v___x_875_ = lean_box(v___x_857_);
if (v_isShared_873_ == 0)
{
lean_ctor_set_tag(v___x_872_, 0);
lean_ctor_set(v___x_872_, 0, v___x_875_);
v___x_877_ = v___x_872_;
goto v_reusejp_876_;
}
else
{
lean_object* v_reuseFailAlloc_878_; 
v_reuseFailAlloc_878_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_878_, 0, v___x_875_);
v___x_877_ = v_reuseFailAlloc_878_;
goto v_reusejp_876_;
}
v_reusejp_876_:
{
return v___x_877_;
}
}
}
}
else
{
return v___x_859_;
}
}
}
else
{
uint8_t v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; 
v___x_880_ = 0;
v___x_881_ = lean_box(v___x_880_);
v___x_882_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_882_, 0, v___x_881_);
return v___x_882_;
}
v___jp_852_:
{
size_t v___x_853_; size_t v___x_854_; 
v___x_853_ = ((size_t)1ULL);
v___x_854_ = lean_usize_add(v_i_847_, v___x_853_);
v_i_847_ = v___x_854_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceHandler_spec__2___boxed(lean_object* v_as_883_, lean_object* v_i_884_, lean_object* v_stop_885_, lean_object* v___y_886_, lean_object* v___y_887_, lean_object* v___y_888_){
_start:
{
size_t v_i_boxed_889_; size_t v_stop_boxed_890_; lean_object* v_res_891_; 
v_i_boxed_889_ = lean_unbox_usize(v_i_884_);
lean_dec(v_i_884_);
v_stop_boxed_890_ = lean_unbox_usize(v_stop_885_);
lean_dec(v_stop_885_);
v_res_891_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceHandler_spec__2(v_as_883_, v_i_boxed_889_, v_stop_boxed_890_, v___y_886_, v___y_887_);
lean_dec(v___y_887_);
lean_dec_ref(v___y_886_);
lean_dec_ref(v_as_883_);
return v_res_891_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceHandler_spec__0(lean_object* v_as_892_, size_t v_sz_893_, size_t v_i_894_, lean_object* v_b_895_, lean_object* v___y_896_, lean_object* v___y_897_){
_start:
{
uint8_t v___x_899_; 
v___x_899_ = lean_usize_dec_lt(v_i_894_, v_sz_893_);
if (v___x_899_ == 0)
{
lean_object* v___x_900_; 
v___x_900_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_900_, 0, v_b_895_);
return v___x_900_;
}
else
{
lean_object* v___x_901_; lean_object* v_a_902_; lean_object* v___x_903_; 
v___x_901_ = lean_box(0);
v_a_902_ = lean_array_uget_borrowed(v_as_892_, v_i_894_);
lean_inc(v_a_902_);
v___x_903_ = l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstance(v_a_902_, v___y_896_, v___y_897_);
if (lean_obj_tag(v___x_903_) == 0)
{
size_t v___x_904_; size_t v___x_905_; 
lean_dec_ref_known(v___x_903_, 1);
v___x_904_ = ((size_t)1ULL);
v___x_905_ = lean_usize_add(v_i_894_, v___x_904_);
v_i_894_ = v___x_905_;
v_b_895_ = v___x_901_;
goto _start;
}
else
{
return v___x_903_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceHandler_spec__0___boxed(lean_object* v_as_907_, lean_object* v_sz_908_, lean_object* v_i_909_, lean_object* v_b_910_, lean_object* v___y_911_, lean_object* v___y_912_, lean_object* v___y_913_){
_start:
{
size_t v_sz_boxed_914_; size_t v_i_boxed_915_; lean_object* v_res_916_; 
v_sz_boxed_914_ = lean_unbox_usize(v_sz_908_);
lean_dec(v_sz_908_);
v_i_boxed_915_ = lean_unbox_usize(v_i_909_);
lean_dec(v_i_909_);
v_res_916_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceHandler_spec__0(v_as_907_, v_sz_boxed_914_, v_i_boxed_915_, v_b_910_, v___y_911_, v___y_912_);
lean_dec(v___y_912_);
lean_dec_ref(v___y_911_);
lean_dec_ref(v_as_907_);
return v_res_916_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceHandler(lean_object* v_declNames_917_, lean_object* v_a_918_, lean_object* v_a_919_){
_start:
{
lean_object* v___y_945_; lean_object* v___x_948_; lean_object* v___x_949_; uint8_t v___x_950_; 
v___x_948_ = lean_unsigned_to_nat(0u);
v___x_949_ = lean_array_get_size(v_declNames_917_);
v___x_950_ = lean_nat_dec_lt(v___x_948_, v___x_949_);
if (v___x_950_ == 0)
{
lean_object* v___x_951_; 
v___x_951_ = l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceHandler___lam__0(v___x_950_, v_a_918_, v_a_919_);
v___y_945_ = v___x_951_;
goto v___jp_944_;
}
else
{
if (v___x_950_ == 0)
{
goto v___jp_921_;
}
else
{
size_t v___x_952_; size_t v___x_953_; lean_object* v___x_954_; 
v___x_952_ = ((size_t)0ULL);
v___x_953_ = lean_usize_of_nat(v___x_949_);
v___x_954_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceHandler_spec__2(v_declNames_917_, v___x_952_, v___x_953_, v_a_918_, v_a_919_);
if (lean_obj_tag(v___x_954_) == 0)
{
lean_object* v_a_955_; uint8_t v___x_956_; lean_object* v___x_957_; 
v_a_955_ = lean_ctor_get(v___x_954_, 0);
lean_inc(v_a_955_);
lean_dec_ref_known(v___x_954_, 1);
v___x_956_ = lean_unbox(v_a_955_);
lean_dec(v_a_955_);
v___x_957_ = l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceHandler___lam__0(v___x_956_, v_a_918_, v_a_919_);
v___y_945_ = v___x_957_;
goto v___jp_944_;
}
else
{
v___y_945_ = v___x_954_;
goto v___jp_944_;
}
}
}
v___jp_921_:
{
uint8_t v___x_922_; lean_object* v___x_923_; size_t v_sz_924_; size_t v___x_925_; lean_object* v___x_926_; 
v___x_922_ = 1;
v___x_923_ = lean_box(0);
v_sz_924_ = lean_array_size(v_declNames_917_);
v___x_925_ = ((size_t)0ULL);
v___x_926_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceHandler_spec__0(v_declNames_917_, v_sz_924_, v___x_925_, v___x_923_, v_a_918_, v_a_919_);
if (lean_obj_tag(v___x_926_) == 0)
{
lean_object* v___x_928_; uint8_t v_isShared_929_; uint8_t v_isSharedCheck_934_; 
v_isSharedCheck_934_ = !lean_is_exclusive(v___x_926_);
if (v_isSharedCheck_934_ == 0)
{
lean_object* v_unused_935_; 
v_unused_935_ = lean_ctor_get(v___x_926_, 0);
lean_dec(v_unused_935_);
v___x_928_ = v___x_926_;
v_isShared_929_ = v_isSharedCheck_934_;
goto v_resetjp_927_;
}
else
{
lean_dec(v___x_926_);
v___x_928_ = lean_box(0);
v_isShared_929_ = v_isSharedCheck_934_;
goto v_resetjp_927_;
}
v_resetjp_927_:
{
lean_object* v___x_930_; lean_object* v___x_932_; 
v___x_930_ = lean_box(v___x_922_);
if (v_isShared_929_ == 0)
{
lean_ctor_set(v___x_928_, 0, v___x_930_);
v___x_932_ = v___x_928_;
goto v_reusejp_931_;
}
else
{
lean_object* v_reuseFailAlloc_933_; 
v_reuseFailAlloc_933_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_933_, 0, v___x_930_);
v___x_932_ = v_reuseFailAlloc_933_;
goto v_reusejp_931_;
}
v_reusejp_931_:
{
return v___x_932_;
}
}
}
else
{
lean_object* v_a_936_; lean_object* v___x_938_; uint8_t v_isShared_939_; uint8_t v_isSharedCheck_943_; 
v_a_936_ = lean_ctor_get(v___x_926_, 0);
v_isSharedCheck_943_ = !lean_is_exclusive(v___x_926_);
if (v_isSharedCheck_943_ == 0)
{
v___x_938_ = v___x_926_;
v_isShared_939_ = v_isSharedCheck_943_;
goto v_resetjp_937_;
}
else
{
lean_inc(v_a_936_);
lean_dec(v___x_926_);
v___x_938_ = lean_box(0);
v_isShared_939_ = v_isSharedCheck_943_;
goto v_resetjp_937_;
}
v_resetjp_937_:
{
lean_object* v___x_941_; 
if (v_isShared_939_ == 0)
{
v___x_941_ = v___x_938_;
goto v_reusejp_940_;
}
else
{
lean_object* v_reuseFailAlloc_942_; 
v_reuseFailAlloc_942_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_942_, 0, v_a_936_);
v___x_941_ = v_reuseFailAlloc_942_;
goto v_reusejp_940_;
}
v_reusejp_940_:
{
return v___x_941_;
}
}
}
}
v___jp_944_:
{
if (lean_obj_tag(v___y_945_) == 0)
{
lean_object* v_a_946_; uint8_t v___x_947_; 
v_a_946_ = lean_ctor_get(v___y_945_, 0);
v___x_947_ = lean_unbox(v_a_946_);
if (v___x_947_ == 0)
{
return v___y_945_;
}
else
{
lean_dec_ref_known(v___y_945_, 1);
goto v___jp_921_;
}
}
else
{
return v___y_945_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceHandler___boxed(lean_object* v_declNames_958_, lean_object* v_a_959_, lean_object* v_a_960_, lean_object* v_a_961_){
_start:
{
lean_object* v_res_962_; 
v_res_962_ = l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceHandler(v_declNames_958_, v_a_959_, v_a_960_);
lean_dec(v_a_960_);
lean_dec_ref(v_a_959_);
lean_dec_ref(v_declNames_958_);
return v_res_962_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__2_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; 
v___x_965_ = ((lean_object*)(l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__1_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_));
v___x_966_ = lean_obj_once(&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__44, &l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__44_once, _init_l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__44);
v___x_967_ = l_Lean_Name_str___override(v___x_966_, v___x_965_);
return v___x_967_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__3_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; 
v___x_968_ = ((lean_object*)(l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__2));
v___x_969_ = lean_obj_once(&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__2_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_, &l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__2_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__2_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_);
v___x_970_ = l_Lean_Name_str___override(v___x_969_, v___x_968_);
return v___x_970_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__4_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; 
v___x_971_ = ((lean_object*)(l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__45));
v___x_972_ = lean_obj_once(&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__3_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_, &l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__3_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__3_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_);
v___x_973_ = l_Lean_Name_str___override(v___x_972_, v___x_971_);
return v___x_973_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__5_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; 
v___x_974_ = ((lean_object*)(l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__46));
v___x_975_ = lean_obj_once(&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__4_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_, &l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__4_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__4_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_);
v___x_976_ = l_Lean_Name_str___override(v___x_975_, v___x_974_);
return v___x_976_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__6_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; 
v___x_977_ = ((lean_object*)(l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__5));
v___x_978_ = lean_obj_once(&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__5_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_, &l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__5_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__5_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_);
v___x_979_ = l_Lean_Name_str___override(v___x_978_, v___x_977_);
return v___x_979_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__7_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; 
v___x_980_ = lean_unsigned_to_nat(0u);
v___x_981_ = lean_obj_once(&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__6_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_, &l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__6_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__6_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_);
v___x_982_ = l_Lean_Name_num___override(v___x_981_, v___x_980_);
return v___x_982_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; 
v___x_983_ = ((lean_object*)(l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__2));
v___x_984_ = lean_obj_once(&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__7_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_, &l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__7_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__7_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_);
v___x_985_ = l_Lean_Name_str___override(v___x_984_, v___x_983_);
return v___x_985_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__9_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; 
v___x_986_ = ((lean_object*)(l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__45));
v___x_987_ = lean_obj_once(&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_, &l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_);
v___x_988_ = l_Lean_Name_str___override(v___x_987_, v___x_986_);
return v___x_988_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__10_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; 
v___x_989_ = ((lean_object*)(l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__46));
v___x_990_ = lean_obj_once(&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__9_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_, &l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__9_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__9_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_);
v___x_991_ = l_Lean_Name_str___override(v___x_990_, v___x_989_);
return v___x_991_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__11_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; 
v___x_992_ = ((lean_object*)(l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__5));
v___x_993_ = lean_obj_once(&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__10_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_, &l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__10_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__10_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_);
v___x_994_ = l_Lean_Name_str___override(v___x_993_, v___x_992_);
return v___x_994_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__13_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; 
v___x_996_ = ((lean_object*)(l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__12_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_));
v___x_997_ = lean_obj_once(&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__11_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_, &l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__11_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__11_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_);
v___x_998_ = l_Lean_Name_str___override(v___x_997_, v___x_996_);
return v___x_998_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__15_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; 
v___x_1000_ = ((lean_object*)(l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__14_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_));
v___x_1001_ = lean_obj_once(&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__13_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_, &l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__13_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__13_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_);
v___x_1002_ = l_Lean_Name_str___override(v___x_1001_, v___x_1000_);
return v___x_1002_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__16_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; 
v___x_1003_ = ((lean_object*)(l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__2));
v___x_1004_ = lean_obj_once(&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__15_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_, &l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__15_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__15_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_);
v___x_1005_ = l_Lean_Name_str___override(v___x_1004_, v___x_1003_);
return v___x_1005_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__17_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; 
v___x_1006_ = ((lean_object*)(l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__45));
v___x_1007_ = lean_obj_once(&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__16_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_, &l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__16_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__16_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_);
v___x_1008_ = l_Lean_Name_str___override(v___x_1007_, v___x_1006_);
return v___x_1008_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__18_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; 
v___x_1009_ = ((lean_object*)(l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__46));
v___x_1010_ = lean_obj_once(&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__17_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_, &l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__17_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__17_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_);
v___x_1011_ = l_Lean_Name_str___override(v___x_1010_, v___x_1009_);
return v___x_1011_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__19_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; 
v___x_1012_ = ((lean_object*)(l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__5));
v___x_1013_ = lean_obj_once(&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__18_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_, &l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__18_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__18_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_);
v___x_1014_ = l_Lean_Name_str___override(v___x_1013_, v___x_1012_);
return v___x_1014_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__20_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; 
v___x_1015_ = lean_unsigned_to_nat(3244286355u);
v___x_1016_ = lean_obj_once(&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__19_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_, &l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__19_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__19_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_);
v___x_1017_ = l_Lean_Name_num___override(v___x_1016_, v___x_1015_);
return v___x_1017_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__22_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; 
v___x_1019_ = ((lean_object*)(l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__21_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_));
v___x_1020_ = lean_obj_once(&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__20_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_, &l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__20_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__20_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_);
v___x_1021_ = l_Lean_Name_str___override(v___x_1020_, v___x_1019_);
return v___x_1021_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__24_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; 
v___x_1023_ = ((lean_object*)(l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__23_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_));
v___x_1024_ = lean_obj_once(&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__22_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_, &l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__22_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__22_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_);
v___x_1025_ = l_Lean_Name_str___override(v___x_1024_, v___x_1023_);
return v___x_1025_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__25_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; 
v___x_1026_ = lean_unsigned_to_nat(2u);
v___x_1027_ = lean_obj_once(&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__24_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_, &l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__24_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__24_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_);
v___x_1028_ = l_Lean_Name_num___override(v___x_1027_, v___x_1026_);
return v___x_1028_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; 
v___x_1030_ = ((lean_object*)(l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__6));
v___x_1031_ = ((lean_object*)(l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__0_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_));
v___x_1032_ = l_Lean_Elab_registerDerivingHandler(v___x_1030_, v___x_1031_);
if (lean_obj_tag(v___x_1032_) == 0)
{
lean_object* v___x_1033_; uint8_t v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; 
lean_dec_ref_known(v___x_1032_, 1);
v___x_1033_ = ((lean_object*)(l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_mkLawfulBEqInstanceCmds___closed__81));
v___x_1034_ = 0;
v___x_1035_ = lean_obj_once(&l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__25_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_, &l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__25_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn___closed__25_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_);
v___x_1036_ = l_Lean_registerTraceClass(v___x_1033_, v___x_1034_, v___x_1035_);
return v___x_1036_;
}
else
{
return v___x_1032_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2____boxed(lean_object* v_a_1037_){
_start:
{
lean_object* v_res_1038_; 
v_res_1038_ = l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_();
return v_res_1038_;
}
}
lean_object* runtime_initialize_Lean_Elab_Deriving_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Deriving_Util(uint8_t builtin);
lean_object* runtime_initialize_Init_LawfulBEqTactics(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Deriving_LawfulBEq(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Deriving_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Deriving_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_LawfulBEqTactics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Deriving_LawfulBEq_0__Lean_Elab_Deriving_LawfulBEq_initFn_00___x40_Lean_Elab_Deriving_LawfulBEq_3244286355____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Deriving_LawfulBEq(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Deriving_Basic(uint8_t builtin);
lean_object* initialize_Lean_Elab_Deriving_Util(uint8_t builtin);
lean_object* initialize_Init_LawfulBEqTactics(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Deriving_LawfulBEq(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Deriving_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Deriving_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_LawfulBEqTactics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Deriving_LawfulBEq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Deriving_LawfulBEq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Deriving_LawfulBEq(builtin);
}
#ifdef __cplusplus
}
#endif

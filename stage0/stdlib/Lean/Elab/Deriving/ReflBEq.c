// Lean compiler output
// Module: Lean.Elab.Deriving.ReflBEq
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
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_isInductiveCore_x3f(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_Elab_Deriving_mkInductArgNames(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkImplicitBinders(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
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
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t l_Lean_InductiveVal_isNested(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_liftTermElabM___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Elab_Command_elabCommand(lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
uint8_t l_Lean_isInductiveCore(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Elab_registerDerivingHandler(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__2___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__2___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__2___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__2___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__2___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__1(lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3_spec__4_spec__6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3_spec__4_spec__6___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3_spec__4_spec__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3_spec__4_spec__6___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3_spec__4_spec__6___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3_spec__4_spec__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3_spec__4_spec__6___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3_spec__4_spec__6___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3_spec__4_spec__6___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3_spec__4_spec__6___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3_spec__4_spec__6___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3_spec__4_spec__6(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3_spec__4_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3_spec__4_spec__5___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3_spec__4___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3_spec__4___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3_spec__4___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3_spec__4___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3_spec__4___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3_spec__4___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3_spec__4___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3_spec__4___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__0___closed__0 = (const lean_object*)&l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__0___closed__1;
static const lean_string_object l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "` is not an inductive type"};
static const lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__0___closed__2 = (const lean_object*)&l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__0___closed__2_value;
static lean_once_cell_t l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "BEq"};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__0 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(195, 188, 39, 55, 57, 152, 88, 223)}};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__1 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__2 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__3 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__3_value;
static const lean_string_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__4 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__4_value;
static const lean_string_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "ReflBEq"};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__5 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__5_value),LEAN_SCALAR_PTR_LITERAL(120, 198, 190, 36, 14, 95, 233, 158)}};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__6 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__6_value;
static const lean_string_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__7 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__7_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__7_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__8 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__8_value;
static const lean_string_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__9 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__9_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__10_value_aux_0),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__10_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__4_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__10_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__9_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__10 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__10_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__11;
static const lean_string_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__12 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__12_value;
static const lean_string_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "declaration"};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__13 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__13_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__14_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__14_value_aux_0),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__14_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__14_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__12_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__14_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__13_value),LEAN_SCALAR_PTR_LITERAL(157, 246, 223, 221, 242, 35, 238, 117)}};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__14 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__14_value;
static const lean_string_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declModifiers"};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__15 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__15_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__16_value_aux_0),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__16_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__12_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__16_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__15_value),LEAN_SCALAR_PTR_LITERAL(0, 165, 146, 53, 36, 89, 7, 202)}};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__16 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__16_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__17;
static const lean_string_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "instance"};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__18 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__18_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__19_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__19_value_aux_0),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__19_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__19_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__12_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__19_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__18_value),LEAN_SCALAR_PTR_LITERAL(37, 156, 84, 218, 244, 57, 142, 153)}};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__19 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__19_value;
static const lean_string_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "attrKind"};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__20 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__20_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__21_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__21_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__21_value_aux_0),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__21_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__21_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__4_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__21_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__20_value),LEAN_SCALAR_PTR_LITERAL(32, 164, 20, 104, 12, 221, 204, 110)}};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__21 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__21_value;
static const lean_string_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "declSig"};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__22 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__22_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__23_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__23_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__23_value_aux_0),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__23_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__23_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__12_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__23_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__22_value),LEAN_SCALAR_PTR_LITERAL(22, 101, 130, 251, 183, 19, 113, 82)}};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__23 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__23_value;
static const lean_string_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "typeSpec"};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__24 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__24_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__25_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__25_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__25_value_aux_0),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__25_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__25_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__4_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__25_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__24_value),LEAN_SCALAR_PTR_LITERAL(77, 126, 241, 117, 174, 189, 108, 62)}};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__25 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__25_value;
static const lean_string_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__26 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__26_value;
static const lean_string_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "whereStructInst"};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__27 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__27_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__28_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__28_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__28_value_aux_0),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__28_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__28_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__12_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__28_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__27_value),LEAN_SCALAR_PTR_LITERAL(164, 171, 248, 18, 201, 160, 43, 108)}};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__28 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__28_value;
static const lean_string_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "where"};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__29 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__29_value;
static const lean_string_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "structInstFields"};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__30 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__30_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__31_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__31_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__31_value_aux_0),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__31_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__31_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__4_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__31_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__30_value),LEAN_SCALAR_PTR_LITERAL(0, 82, 141, 43, 62, 171, 163, 69)}};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__31 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__31_value;
static const lean_string_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "structInstField"};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__32 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__32_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__33_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__33_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__33_value_aux_0),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__33_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__33_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__4_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__33_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__32_value),LEAN_SCALAR_PTR_LITERAL(50, 77, 20, 88, 28, 210, 230, 84)}};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__33 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__33_value;
static const lean_string_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "structInstLVal"};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__34 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__34_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__35_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__35_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__35_value_aux_0),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__35_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__35_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__4_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__35_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__34_value),LEAN_SCALAR_PTR_LITERAL(185, 133, 6, 147, 6, 183, 100, 198)}};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__35 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__35_value;
static const lean_string_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "rfl"};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__36 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__36_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__37;
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__36_value),LEAN_SCALAR_PTR_LITERAL(77, 42, 253, 71, 61, 132, 173, 240)}};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__38 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__38_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__38_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__39 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__39_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__39_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__40 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__40_value;
static const lean_string_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "structInstFieldDef"};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__41 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__41_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__42_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__42_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__42_value_aux_0),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__42_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__42_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__4_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__42_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__41_value),LEAN_SCALAR_PTR_LITERAL(81, 102, 39, 227, 176, 252, 65, 103)}};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__42 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__42_value;
static const lean_string_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__43 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__43_value;
static const lean_string_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "byTactic"};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__44 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__44_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__45_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__45_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__45_value_aux_0),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__45_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__45_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__4_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__45_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__44_value),LEAN_SCALAR_PTR_LITERAL(187, 150, 238, 148, 228, 221, 116, 224)}};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__45 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__45_value;
static const lean_string_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "by"};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__46 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__46_value;
static const lean_string_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__47 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__47_value;
static const lean_string_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__48 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__48_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__49_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__49_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__49_value_aux_0),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__49_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__49_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__47_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__49_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__48_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__49 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__49_value;
static const lean_string_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__50 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__50_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__51_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__51_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__51_value_aux_0),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__51_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__51_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__47_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__51_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__50_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__51 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__51_value;
static const lean_string_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "DerivingHelpers"};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__52 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__52_value;
static const lean_string_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "tacticDeriving_ReflEq_tactic"};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__53 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__53_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__54_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__52_value),LEAN_SCALAR_PTR_LITERAL(20, 45, 30, 199, 86, 148, 73, 212)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__54_value_aux_0),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__53_value),LEAN_SCALAR_PTR_LITERAL(59, 102, 201, 20, 211, 124, 83, 120)}};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__54 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__54_value;
static const lean_string_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "deriving_ReflEq_tactic"};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__55 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__55_value;
static const lean_string_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__56 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__56_value;
static const lean_string_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Deriving"};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__57 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__57_value;
static const lean_string_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "reflBEq"};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__58 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__58_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__59_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__56_value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__59_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__59_value_aux_0),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__57_value),LEAN_SCALAR_PTR_LITERAL(195, 196, 35, 37, 101, 57, 52, 43)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__59_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__58_value),LEAN_SCALAR_PTR_LITERAL(244, 86, 89, 238, 156, 100, 153, 72)}};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__59 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__59_value;
static const lean_string_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__60 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__60_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__60_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__61 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__61_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__62_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__62;
static const lean_string_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__63 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__63_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__64_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__64;
static const lean_string_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "Deriving `ReflBEq` for nested inductives is not supported"};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__65 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__65_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__66_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__66;
static const lean_string_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "Deriving `ReflBEq` for mutual inductives is not supported"};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__67 = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__67_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__68_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__68;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstance_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstance_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstance___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstance___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstance(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInductive___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceHandler_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInductive___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceHandler_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInductive___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceHandler_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInductive___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceHandler_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceHandler___lam__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceHandler___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceHandler_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceHandler_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceHandler_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceHandler_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceHandler(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceHandler___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__0_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceHandler___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__0_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__0_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__1_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__1_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__2_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__2_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__2_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__3_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__3_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__4_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__4_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__5_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__5_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__6_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__6_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__7_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__7_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__9_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__9_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__10_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__10_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__11_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__11_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__12_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__12_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__13_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__13_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__13_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__14_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__14_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__15_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__15_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__15_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__16_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__16_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__17_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__17_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__18_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__18_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__19_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__19_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__20_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__20_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__21_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__21_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__22_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__22_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__22_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__23_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__23_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__24_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__24_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__24_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__25_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__25_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__26_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__26_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__2_spec__2(lean_object* v_msgData_1_, lean_object* v___y_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_){
_start:
{
lean_object* v___x_7_; lean_object* v_env_8_; lean_object* v___x_9_; lean_object* v_toCold_10_; lean_object* v_mctx_11_; lean_object* v_lctx_12_; lean_object* v_options_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; 
v___x_7_ = lean_st_ref_get(v___y_5_);
v_env_8_ = lean_ctor_get(v___x_7_, 0);
lean_inc_ref(v_env_8_);
lean_dec(v___x_7_);
v___x_9_ = lean_st_ref_get(v___y_3_);
v_toCold_10_ = lean_ctor_get(v___y_4_, 0);
v_mctx_11_ = lean_ctor_get(v___x_9_, 0);
lean_inc_ref(v_mctx_11_);
lean_dec(v___x_9_);
v_lctx_12_ = lean_ctor_get(v___y_2_, 2);
v_options_13_ = lean_ctor_get(v_toCold_10_, 2);
lean_inc_ref(v_options_13_);
lean_inc_ref(v_lctx_12_);
v___x_14_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_14_, 0, v_env_8_);
lean_ctor_set(v___x_14_, 1, v_mctx_11_);
lean_ctor_set(v___x_14_, 2, v_lctx_12_);
lean_ctor_set(v___x_14_, 3, v_options_13_);
v___x_15_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_15_, 0, v___x_14_);
lean_ctor_set(v___x_15_, 1, v_msgData_1_);
v___x_16_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_16_, 0, v___x_15_);
return v___x_16_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__2_spec__2___boxed(lean_object* v_msgData_17_, lean_object* v___y_18_, lean_object* v___y_19_, lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v___y_22_){
_start:
{
lean_object* v_res_23_; 
v_res_23_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__2_spec__2(v_msgData_17_, v___y_18_, v___y_19_, v___y_20_, v___y_21_);
lean_dec(v___y_21_);
lean_dec_ref(v___y_20_);
lean_dec(v___y_19_);
lean_dec_ref(v___y_18_);
return v_res_23_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_24_; double v___x_25_; 
v___x_24_ = lean_unsigned_to_nat(0u);
v___x_25_ = lean_float_of_nat(v___x_24_);
return v___x_25_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__2___redArg(lean_object* v_cls_29_, lean_object* v_msg_30_, lean_object* v___y_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_){
_start:
{
lean_object* v_ref_36_; lean_object* v___x_37_; lean_object* v_a_38_; lean_object* v___x_40_; uint8_t v_isShared_41_; uint8_t v_isSharedCheck_82_; 
v_ref_36_ = lean_ctor_get(v___y_33_, 2);
v___x_37_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__2_spec__2(v_msg_30_, v___y_31_, v___y_32_, v___y_33_, v___y_34_);
v_a_38_ = lean_ctor_get(v___x_37_, 0);
v_isSharedCheck_82_ = !lean_is_exclusive(v___x_37_);
if (v_isSharedCheck_82_ == 0)
{
v___x_40_ = v___x_37_;
v_isShared_41_ = v_isSharedCheck_82_;
goto v_resetjp_39_;
}
else
{
lean_inc(v_a_38_);
lean_dec(v___x_37_);
v___x_40_ = lean_box(0);
v_isShared_41_ = v_isSharedCheck_82_;
goto v_resetjp_39_;
}
v_resetjp_39_:
{
lean_object* v___x_42_; lean_object* v_traceState_43_; lean_object* v_env_44_; lean_object* v_nextMacroScope_45_; lean_object* v_ngen_46_; lean_object* v_auxDeclNGen_47_; lean_object* v_cache_48_; lean_object* v_messages_49_; lean_object* v_infoState_50_; lean_object* v_snapshotTasks_51_; lean_object* v___x_53_; uint8_t v_isShared_54_; uint8_t v_isSharedCheck_81_; 
v___x_42_ = lean_st_ref_take(v___y_34_);
v_traceState_43_ = lean_ctor_get(v___x_42_, 4);
v_env_44_ = lean_ctor_get(v___x_42_, 0);
v_nextMacroScope_45_ = lean_ctor_get(v___x_42_, 1);
v_ngen_46_ = lean_ctor_get(v___x_42_, 2);
v_auxDeclNGen_47_ = lean_ctor_get(v___x_42_, 3);
v_cache_48_ = lean_ctor_get(v___x_42_, 5);
v_messages_49_ = lean_ctor_get(v___x_42_, 6);
v_infoState_50_ = lean_ctor_get(v___x_42_, 7);
v_snapshotTasks_51_ = lean_ctor_get(v___x_42_, 8);
v_isSharedCheck_81_ = !lean_is_exclusive(v___x_42_);
if (v_isSharedCheck_81_ == 0)
{
v___x_53_ = v___x_42_;
v_isShared_54_ = v_isSharedCheck_81_;
goto v_resetjp_52_;
}
else
{
lean_inc(v_snapshotTasks_51_);
lean_inc(v_infoState_50_);
lean_inc(v_messages_49_);
lean_inc(v_cache_48_);
lean_inc(v_traceState_43_);
lean_inc(v_auxDeclNGen_47_);
lean_inc(v_ngen_46_);
lean_inc(v_nextMacroScope_45_);
lean_inc(v_env_44_);
lean_dec(v___x_42_);
v___x_53_ = lean_box(0);
v_isShared_54_ = v_isSharedCheck_81_;
goto v_resetjp_52_;
}
v_resetjp_52_:
{
uint64_t v_tid_55_; lean_object* v_traces_56_; lean_object* v___x_58_; uint8_t v_isShared_59_; uint8_t v_isSharedCheck_80_; 
v_tid_55_ = lean_ctor_get_uint64(v_traceState_43_, sizeof(void*)*1);
v_traces_56_ = lean_ctor_get(v_traceState_43_, 0);
v_isSharedCheck_80_ = !lean_is_exclusive(v_traceState_43_);
if (v_isSharedCheck_80_ == 0)
{
v___x_58_ = v_traceState_43_;
v_isShared_59_ = v_isSharedCheck_80_;
goto v_resetjp_57_;
}
else
{
lean_inc(v_traces_56_);
lean_dec(v_traceState_43_);
v___x_58_ = lean_box(0);
v_isShared_59_ = v_isSharedCheck_80_;
goto v_resetjp_57_;
}
v_resetjp_57_:
{
lean_object* v___x_60_; lean_object* v___x_61_; double v___x_62_; uint8_t v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_71_; 
v___x_60_ = lean_box(0);
v___x_61_ = lean_box(0);
v___x_62_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__2___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__2___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__2___redArg___closed__0);
v___x_63_ = 0;
v___x_64_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__2___redArg___closed__1));
v___x_65_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_65_, 0, v_cls_29_);
lean_ctor_set(v___x_65_, 1, v___x_61_);
lean_ctor_set(v___x_65_, 2, v___x_64_);
lean_ctor_set_float(v___x_65_, sizeof(void*)*3, v___x_62_);
lean_ctor_set_float(v___x_65_, sizeof(void*)*3 + 8, v___x_62_);
lean_ctor_set_uint8(v___x_65_, sizeof(void*)*3 + 16, v___x_63_);
v___x_66_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__2___redArg___closed__2));
v___x_67_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_67_, 0, v___x_65_);
lean_ctor_set(v___x_67_, 1, v_a_38_);
lean_ctor_set(v___x_67_, 2, v___x_66_);
lean_inc(v_ref_36_);
v___x_68_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_68_, 0, v_ref_36_);
lean_ctor_set(v___x_68_, 1, v___x_67_);
v___x_69_ = l_Lean_PersistentArray_push___redArg(v_traces_56_, v___x_68_);
if (v_isShared_59_ == 0)
{
lean_ctor_set(v___x_58_, 0, v___x_69_);
v___x_71_ = v___x_58_;
goto v_reusejp_70_;
}
else
{
lean_object* v_reuseFailAlloc_79_; 
v_reuseFailAlloc_79_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_79_, 0, v___x_69_);
lean_ctor_set_uint64(v_reuseFailAlloc_79_, sizeof(void*)*1, v_tid_55_);
v___x_71_ = v_reuseFailAlloc_79_;
goto v_reusejp_70_;
}
v_reusejp_70_:
{
lean_object* v___x_73_; 
if (v_isShared_54_ == 0)
{
lean_ctor_set(v___x_53_, 4, v___x_71_);
v___x_73_ = v___x_53_;
goto v_reusejp_72_;
}
else
{
lean_object* v_reuseFailAlloc_78_; 
v_reuseFailAlloc_78_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_78_, 0, v_env_44_);
lean_ctor_set(v_reuseFailAlloc_78_, 1, v_nextMacroScope_45_);
lean_ctor_set(v_reuseFailAlloc_78_, 2, v_ngen_46_);
lean_ctor_set(v_reuseFailAlloc_78_, 3, v_auxDeclNGen_47_);
lean_ctor_set(v_reuseFailAlloc_78_, 4, v___x_71_);
lean_ctor_set(v_reuseFailAlloc_78_, 5, v_cache_48_);
lean_ctor_set(v_reuseFailAlloc_78_, 6, v_messages_49_);
lean_ctor_set(v_reuseFailAlloc_78_, 7, v_infoState_50_);
lean_ctor_set(v_reuseFailAlloc_78_, 8, v_snapshotTasks_51_);
v___x_73_ = v_reuseFailAlloc_78_;
goto v_reusejp_72_;
}
v_reusejp_72_:
{
lean_object* v___x_74_; lean_object* v___x_76_; 
v___x_74_ = lean_st_ref_put(v___y_34_, v___x_73_);
if (v_isShared_41_ == 0)
{
lean_ctor_set(v___x_40_, 0, v___x_60_);
v___x_76_ = v___x_40_;
goto v_reusejp_75_;
}
else
{
lean_object* v_reuseFailAlloc_77_; 
v_reuseFailAlloc_77_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_77_, 0, v___x_60_);
v___x_76_ = v_reuseFailAlloc_77_;
goto v_reusejp_75_;
}
v_reusejp_75_:
{
return v___x_76_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__2___redArg___boxed(lean_object* v_cls_83_, lean_object* v_msg_84_, lean_object* v___y_85_, lean_object* v___y_86_, lean_object* v___y_87_, lean_object* v___y_88_, lean_object* v___y_89_){
_start:
{
lean_object* v_res_90_; 
v_res_90_ = l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__2___redArg(v_cls_83_, v_msg_84_, v___y_85_, v___y_86_, v___y_87_, v___y_88_);
lean_dec(v___y_88_);
lean_dec_ref(v___y_87_);
lean_dec(v___y_86_);
lean_dec_ref(v___y_85_);
return v_res_90_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__1(lean_object* v_a_91_, lean_object* v_a_92_){
_start:
{
if (lean_obj_tag(v_a_91_) == 0)
{
lean_object* v___x_93_; 
v___x_93_ = l_List_reverse___redArg(v_a_92_);
return v___x_93_;
}
else
{
lean_object* v_head_94_; lean_object* v_tail_95_; lean_object* v___x_97_; uint8_t v_isShared_98_; uint8_t v_isSharedCheck_104_; 
v_head_94_ = lean_ctor_get(v_a_91_, 0);
v_tail_95_ = lean_ctor_get(v_a_91_, 1);
v_isSharedCheck_104_ = !lean_is_exclusive(v_a_91_);
if (v_isSharedCheck_104_ == 0)
{
v___x_97_ = v_a_91_;
v_isShared_98_ = v_isSharedCheck_104_;
goto v_resetjp_96_;
}
else
{
lean_inc(v_tail_95_);
lean_inc(v_head_94_);
lean_dec(v_a_91_);
v___x_97_ = lean_box(0);
v_isShared_98_ = v_isSharedCheck_104_;
goto v_resetjp_96_;
}
v_resetjp_96_:
{
lean_object* v___x_99_; lean_object* v___x_101_; 
v___x_99_ = l_Lean_MessageData_ofSyntax(v_head_94_);
if (v_isShared_98_ == 0)
{
lean_ctor_set(v___x_97_, 1, v_a_92_);
lean_ctor_set(v___x_97_, 0, v___x_99_);
v___x_101_ = v___x_97_;
goto v_reusejp_100_;
}
else
{
lean_object* v_reuseFailAlloc_103_; 
v_reuseFailAlloc_103_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_103_, 0, v___x_99_);
lean_ctor_set(v_reuseFailAlloc_103_, 1, v_a_92_);
v___x_101_ = v_reuseFailAlloc_103_;
goto v_reusejp_100_;
}
v_reusejp_100_:
{
v_a_91_ = v_tail_95_;
v_a_92_ = v___x_101_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3_spec__4_spec__6___closed__0(void){
_start:
{
lean_object* v___x_105_; lean_object* v___x_106_; 
v___x_105_ = lean_box(1);
v___x_106_ = l_Lean_MessageData_ofFormat(v___x_105_);
return v___x_106_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3_spec__4_spec__6___closed__3(void){
_start:
{
lean_object* v___x_110_; lean_object* v___x_111_; 
v___x_110_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3_spec__4_spec__6___closed__2));
v___x_111_ = l_Lean_MessageData_ofFormat(v___x_110_);
return v___x_111_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3_spec__4_spec__6(lean_object* v_x_112_, lean_object* v_x_113_){
_start:
{
if (lean_obj_tag(v_x_113_) == 0)
{
return v_x_112_;
}
else
{
lean_object* v_head_114_; lean_object* v_tail_115_; lean_object* v___x_117_; uint8_t v_isShared_118_; uint8_t v_isSharedCheck_137_; 
v_head_114_ = lean_ctor_get(v_x_113_, 0);
v_tail_115_ = lean_ctor_get(v_x_113_, 1);
v_isSharedCheck_137_ = !lean_is_exclusive(v_x_113_);
if (v_isSharedCheck_137_ == 0)
{
v___x_117_ = v_x_113_;
v_isShared_118_ = v_isSharedCheck_137_;
goto v_resetjp_116_;
}
else
{
lean_inc(v_tail_115_);
lean_inc(v_head_114_);
lean_dec(v_x_113_);
v___x_117_ = lean_box(0);
v_isShared_118_ = v_isSharedCheck_137_;
goto v_resetjp_116_;
}
v_resetjp_116_:
{
lean_object* v_before_119_; lean_object* v___x_121_; uint8_t v_isShared_122_; uint8_t v_isSharedCheck_135_; 
v_before_119_ = lean_ctor_get(v_head_114_, 0);
v_isSharedCheck_135_ = !lean_is_exclusive(v_head_114_);
if (v_isSharedCheck_135_ == 0)
{
lean_object* v_unused_136_; 
v_unused_136_ = lean_ctor_get(v_head_114_, 1);
lean_dec(v_unused_136_);
v___x_121_ = v_head_114_;
v_isShared_122_ = v_isSharedCheck_135_;
goto v_resetjp_120_;
}
else
{
lean_inc(v_before_119_);
lean_dec(v_head_114_);
v___x_121_ = lean_box(0);
v_isShared_122_ = v_isSharedCheck_135_;
goto v_resetjp_120_;
}
v_resetjp_120_:
{
lean_object* v___x_123_; lean_object* v___x_125_; 
v___x_123_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3_spec__4_spec__6___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3_spec__4_spec__6___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3_spec__4_spec__6___closed__0);
if (v_isShared_122_ == 0)
{
lean_ctor_set_tag(v___x_121_, 7);
lean_ctor_set(v___x_121_, 1, v___x_123_);
lean_ctor_set(v___x_121_, 0, v_x_112_);
v___x_125_ = v___x_121_;
goto v_reusejp_124_;
}
else
{
lean_object* v_reuseFailAlloc_134_; 
v_reuseFailAlloc_134_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_134_, 0, v_x_112_);
lean_ctor_set(v_reuseFailAlloc_134_, 1, v___x_123_);
v___x_125_ = v_reuseFailAlloc_134_;
goto v_reusejp_124_;
}
v_reusejp_124_:
{
lean_object* v___x_126_; lean_object* v___x_128_; 
v___x_126_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3_spec__4_spec__6___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3_spec__4_spec__6___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3_spec__4_spec__6___closed__3);
if (v_isShared_118_ == 0)
{
lean_ctor_set_tag(v___x_117_, 7);
lean_ctor_set(v___x_117_, 1, v___x_126_);
lean_ctor_set(v___x_117_, 0, v___x_125_);
v___x_128_ = v___x_117_;
goto v_reusejp_127_;
}
else
{
lean_object* v_reuseFailAlloc_133_; 
v_reuseFailAlloc_133_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_133_, 0, v___x_125_);
lean_ctor_set(v_reuseFailAlloc_133_, 1, v___x_126_);
v___x_128_ = v_reuseFailAlloc_133_;
goto v_reusejp_127_;
}
v_reusejp_127_:
{
lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; 
v___x_129_ = l_Lean_MessageData_ofSyntax(v_before_119_);
v___x_130_ = l_Lean_indentD(v___x_129_);
v___x_131_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_131_, 0, v___x_128_);
lean_ctor_set(v___x_131_, 1, v___x_130_);
v_x_112_ = v___x_131_;
v_x_113_ = v_tail_115_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3_spec__4_spec__5(lean_object* v_opts_138_, lean_object* v_opt_139_){
_start:
{
lean_object* v_name_140_; lean_object* v_defValue_141_; lean_object* v_map_142_; lean_object* v___x_143_; 
v_name_140_ = lean_ctor_get(v_opt_139_, 0);
v_defValue_141_ = lean_ctor_get(v_opt_139_, 1);
v_map_142_ = lean_ctor_get(v_opts_138_, 0);
v___x_143_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_142_, v_name_140_);
if (lean_obj_tag(v___x_143_) == 0)
{
uint8_t v___x_144_; 
v___x_144_ = lean_unbox(v_defValue_141_);
return v___x_144_;
}
else
{
lean_object* v_val_145_; 
v_val_145_ = lean_ctor_get(v___x_143_, 0);
lean_inc(v_val_145_);
lean_dec_ref_known(v___x_143_, 1);
if (lean_obj_tag(v_val_145_) == 1)
{
uint8_t v_v_146_; 
v_v_146_ = lean_ctor_get_uint8(v_val_145_, 0);
lean_dec_ref_known(v_val_145_, 0);
return v_v_146_;
}
else
{
uint8_t v___x_147_; 
lean_dec(v_val_145_);
v___x_147_ = lean_unbox(v_defValue_141_);
return v___x_147_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3_spec__4_spec__5___boxed(lean_object* v_opts_148_, lean_object* v_opt_149_){
_start:
{
uint8_t v_res_150_; lean_object* v_r_151_; 
v_res_150_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3_spec__4_spec__5(v_opts_148_, v_opt_149_);
lean_dec_ref(v_opt_149_);
lean_dec_ref(v_opts_148_);
v_r_151_ = lean_box(v_res_150_);
return v_r_151_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3_spec__4___redArg___closed__2(void){
_start:
{
lean_object* v___x_155_; lean_object* v___x_156_; 
v___x_155_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3_spec__4___redArg___closed__1));
v___x_156_ = l_Lean_MessageData_ofFormat(v___x_155_);
return v___x_156_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3_spec__4___redArg(lean_object* v_msgData_157_, lean_object* v_macroStack_158_, lean_object* v___y_159_){
_start:
{
lean_object* v_toCold_161_; lean_object* v_options_162_; lean_object* v___x_163_; uint8_t v___x_164_; 
v_toCold_161_ = lean_ctor_get(v___y_159_, 0);
v_options_162_ = lean_ctor_get(v_toCold_161_, 2);
v___x_163_ = l_Lean_Elab_pp_macroStack;
v___x_164_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3_spec__4_spec__5(v_options_162_, v___x_163_);
if (v___x_164_ == 0)
{
lean_object* v___x_165_; 
lean_dec(v_macroStack_158_);
v___x_165_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_165_, 0, v_msgData_157_);
return v___x_165_;
}
else
{
if (lean_obj_tag(v_macroStack_158_) == 0)
{
lean_object* v___x_166_; 
v___x_166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_166_, 0, v_msgData_157_);
return v___x_166_;
}
else
{
lean_object* v_head_167_; lean_object* v_after_168_; lean_object* v___x_170_; uint8_t v_isShared_171_; uint8_t v_isSharedCheck_183_; 
v_head_167_ = lean_ctor_get(v_macroStack_158_, 0);
lean_inc(v_head_167_);
v_after_168_ = lean_ctor_get(v_head_167_, 1);
v_isSharedCheck_183_ = !lean_is_exclusive(v_head_167_);
if (v_isSharedCheck_183_ == 0)
{
lean_object* v_unused_184_; 
v_unused_184_ = lean_ctor_get(v_head_167_, 0);
lean_dec(v_unused_184_);
v___x_170_ = v_head_167_;
v_isShared_171_ = v_isSharedCheck_183_;
goto v_resetjp_169_;
}
else
{
lean_inc(v_after_168_);
lean_dec(v_head_167_);
v___x_170_ = lean_box(0);
v_isShared_171_ = v_isSharedCheck_183_;
goto v_resetjp_169_;
}
v_resetjp_169_:
{
lean_object* v___x_172_; lean_object* v___x_174_; 
v___x_172_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3_spec__4_spec__6___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3_spec__4_spec__6___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3_spec__4_spec__6___closed__0);
if (v_isShared_171_ == 0)
{
lean_ctor_set_tag(v___x_170_, 7);
lean_ctor_set(v___x_170_, 1, v___x_172_);
lean_ctor_set(v___x_170_, 0, v_msgData_157_);
v___x_174_ = v___x_170_;
goto v_reusejp_173_;
}
else
{
lean_object* v_reuseFailAlloc_182_; 
v_reuseFailAlloc_182_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_182_, 0, v_msgData_157_);
lean_ctor_set(v_reuseFailAlloc_182_, 1, v___x_172_);
v___x_174_ = v_reuseFailAlloc_182_;
goto v_reusejp_173_;
}
v_reusejp_173_:
{
lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v_msgData_179_; lean_object* v___x_180_; lean_object* v___x_181_; 
v___x_175_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3_spec__4___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3_spec__4___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3_spec__4___redArg___closed__2);
v___x_176_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_176_, 0, v___x_174_);
lean_ctor_set(v___x_176_, 1, v___x_175_);
v___x_177_ = l_Lean_MessageData_ofSyntax(v_after_168_);
v___x_178_ = l_Lean_indentD(v___x_177_);
v_msgData_179_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_179_, 0, v___x_176_);
lean_ctor_set(v_msgData_179_, 1, v___x_178_);
v___x_180_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3_spec__4_spec__6(v_msgData_179_, v_macroStack_158_);
v___x_181_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_181_, 0, v___x_180_);
return v___x_181_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3_spec__4___redArg___boxed(lean_object* v_msgData_185_, lean_object* v_macroStack_186_, lean_object* v___y_187_, lean_object* v___y_188_){
_start:
{
lean_object* v_res_189_; 
v_res_189_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3_spec__4___redArg(v_msgData_185_, v_macroStack_186_, v___y_187_);
lean_dec_ref(v___y_187_);
return v_res_189_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3___redArg(lean_object* v_msg_190_, lean_object* v___y_191_, lean_object* v___y_192_, lean_object* v___y_193_, lean_object* v___y_194_, lean_object* v___y_195_, lean_object* v___y_196_){
_start:
{
lean_object* v_ref_198_; lean_object* v_macroStack_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v_a_202_; lean_object* v___x_203_; lean_object* v_a_204_; lean_object* v___x_206_; uint8_t v_isShared_207_; uint8_t v_isSharedCheck_212_; 
v_ref_198_ = lean_ctor_get(v___y_195_, 2);
v_macroStack_199_ = lean_ctor_get(v___y_191_, 1);
v___x_200_ = l_Lean_Elab_getBetterRef(v_ref_198_, v_macroStack_199_);
v___x_201_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__2_spec__2(v_msg_190_, v___y_193_, v___y_194_, v___y_195_, v___y_196_);
v_a_202_ = lean_ctor_get(v___x_201_, 0);
lean_inc(v_a_202_);
lean_dec_ref(v___x_201_);
lean_inc(v_macroStack_199_);
v___x_203_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3_spec__4___redArg(v_a_202_, v_macroStack_199_, v___y_195_);
v_a_204_ = lean_ctor_get(v___x_203_, 0);
v_isSharedCheck_212_ = !lean_is_exclusive(v___x_203_);
if (v_isSharedCheck_212_ == 0)
{
v___x_206_ = v___x_203_;
v_isShared_207_ = v_isSharedCheck_212_;
goto v_resetjp_205_;
}
else
{
lean_inc(v_a_204_);
lean_dec(v___x_203_);
v___x_206_ = lean_box(0);
v_isShared_207_ = v_isSharedCheck_212_;
goto v_resetjp_205_;
}
v_resetjp_205_:
{
lean_object* v___x_208_; lean_object* v___x_210_; 
v___x_208_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_208_, 0, v___x_200_);
lean_ctor_set(v___x_208_, 1, v_a_204_);
if (v_isShared_207_ == 0)
{
lean_ctor_set_tag(v___x_206_, 1);
lean_ctor_set(v___x_206_, 0, v___x_208_);
v___x_210_ = v___x_206_;
goto v_reusejp_209_;
}
else
{
lean_object* v_reuseFailAlloc_211_; 
v_reuseFailAlloc_211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_211_, 0, v___x_208_);
v___x_210_ = v_reuseFailAlloc_211_;
goto v_reusejp_209_;
}
v_reusejp_209_:
{
return v___x_210_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3___redArg___boxed(lean_object* v_msg_213_, lean_object* v___y_214_, lean_object* v___y_215_, lean_object* v___y_216_, lean_object* v___y_217_, lean_object* v___y_218_, lean_object* v___y_219_, lean_object* v___y_220_){
_start:
{
lean_object* v_res_221_; 
v_res_221_ = l_Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3___redArg(v_msg_213_, v___y_214_, v___y_215_, v___y_216_, v___y_217_, v___y_218_, v___y_219_);
lean_dec(v___y_219_);
lean_dec_ref(v___y_218_);
lean_dec(v___y_217_);
lean_dec_ref(v___y_216_);
lean_dec(v___y_215_);
lean_dec_ref(v___y_214_);
return v_res_221_;
}
}
static lean_object* _init_l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__0___closed__1(void){
_start:
{
lean_object* v___x_223_; lean_object* v___x_224_; 
v___x_223_ = ((lean_object*)(l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__0___closed__0));
v___x_224_ = l_Lean_stringToMessageData(v___x_223_);
return v___x_224_;
}
}
static lean_object* _init_l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__0___closed__3(void){
_start:
{
lean_object* v___x_226_; lean_object* v___x_227_; 
v___x_226_ = ((lean_object*)(l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__0___closed__2));
v___x_227_ = l_Lean_stringToMessageData(v___x_226_);
return v___x_227_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__0(lean_object* v_constName_228_, lean_object* v___y_229_, lean_object* v___y_230_, lean_object* v___y_231_, lean_object* v___y_232_, lean_object* v___y_233_, lean_object* v___y_234_){
_start:
{
lean_object* v___x_236_; lean_object* v_env_237_; lean_object* v___x_238_; 
v___x_236_ = lean_st_ref_get(v___y_234_);
v_env_237_ = lean_ctor_get(v___x_236_, 0);
lean_inc_ref(v_env_237_);
lean_dec(v___x_236_);
lean_inc(v_constName_228_);
v___x_238_ = l_Lean_isInductiveCore_x3f(v_env_237_, v_constName_228_);
if (lean_obj_tag(v___x_238_) == 0)
{
lean_object* v___x_239_; uint8_t v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; 
v___x_239_ = lean_obj_once(&l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__0___closed__1, &l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__0___closed__1_once, _init_l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__0___closed__1);
v___x_240_ = 0;
v___x_241_ = l_Lean_MessageData_ofConstName(v_constName_228_, v___x_240_);
v___x_242_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_242_, 0, v___x_239_);
lean_ctor_set(v___x_242_, 1, v___x_241_);
v___x_243_ = lean_obj_once(&l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__0___closed__3, &l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__0___closed__3_once, _init_l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__0___closed__3);
v___x_244_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_244_, 0, v___x_242_);
lean_ctor_set(v___x_244_, 1, v___x_243_);
v___x_245_ = l_Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3___redArg(v___x_244_, v___y_229_, v___y_230_, v___y_231_, v___y_232_, v___y_233_, v___y_234_);
return v___x_245_;
}
else
{
lean_object* v_val_246_; lean_object* v___x_248_; uint8_t v_isShared_249_; uint8_t v_isSharedCheck_253_; 
lean_dec(v_constName_228_);
v_val_246_ = lean_ctor_get(v___x_238_, 0);
v_isSharedCheck_253_ = !lean_is_exclusive(v___x_238_);
if (v_isSharedCheck_253_ == 0)
{
v___x_248_ = v___x_238_;
v_isShared_249_ = v_isSharedCheck_253_;
goto v_resetjp_247_;
}
else
{
lean_inc(v_val_246_);
lean_dec(v___x_238_);
v___x_248_ = lean_box(0);
v_isShared_249_ = v_isSharedCheck_253_;
goto v_resetjp_247_;
}
v_resetjp_247_:
{
lean_object* v___x_251_; 
if (v_isShared_249_ == 0)
{
lean_ctor_set_tag(v___x_248_, 0);
v___x_251_ = v___x_248_;
goto v_reusejp_250_;
}
else
{
lean_object* v_reuseFailAlloc_252_; 
v_reuseFailAlloc_252_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_252_, 0, v_val_246_);
v___x_251_ = v_reuseFailAlloc_252_;
goto v_reusejp_250_;
}
v_reusejp_250_:
{
return v___x_251_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__0___boxed(lean_object* v_constName_254_, lean_object* v___y_255_, lean_object* v___y_256_, lean_object* v___y_257_, lean_object* v___y_258_, lean_object* v___y_259_, lean_object* v___y_260_, lean_object* v___y_261_){
_start:
{
lean_object* v_res_262_; 
v_res_262_ = l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__0(v_constName_254_, v___y_255_, v___y_256_, v___y_257_, v___y_258_, v___y_259_, v___y_260_);
lean_dec(v___y_260_);
lean_dec_ref(v___y_259_);
lean_dec(v___y_258_);
lean_dec_ref(v___y_257_);
lean_dec(v___y_256_);
lean_dec_ref(v___y_255_);
return v_res_262_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__11(void){
_start:
{
lean_object* v___x_281_; lean_object* v___x_282_; 
v___x_281_ = ((lean_object*)(l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__6));
v___x_282_ = l_Lean_mkCIdent(v___x_281_);
return v___x_282_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__17(void){
_start:
{
lean_object* v___x_296_; 
v___x_296_ = l_Array_mkArray0___redArg();
return v___x_296_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__37(void){
_start:
{
lean_object* v___x_348_; lean_object* v___x_349_; 
v___x_348_ = ((lean_object*)(l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__36));
v___x_349_ = l_String_toRawSubstring_x27(v___x_348_);
return v___x_349_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__62(void){
_start:
{
lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; 
v___x_401_ = ((lean_object*)(l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__59));
v___x_402_ = ((lean_object*)(l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__61));
v___x_403_ = l_Lean_Name_append(v___x_402_, v___x_401_);
return v___x_403_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__64(void){
_start:
{
lean_object* v___x_405_; lean_object* v___x_406_; 
v___x_405_ = ((lean_object*)(l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__63));
v___x_406_ = l_Lean_stringToMessageData(v___x_405_);
return v___x_406_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__66(void){
_start:
{
lean_object* v___x_408_; lean_object* v___x_409_; 
v___x_408_ = ((lean_object*)(l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__65));
v___x_409_ = l_Lean_stringToMessageData(v___x_408_);
return v___x_409_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__68(void){
_start:
{
lean_object* v___x_411_; lean_object* v___x_412_; 
v___x_411_ = ((lean_object*)(l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__67));
v___x_412_ = l_Lean_stringToMessageData(v___x_411_);
return v___x_412_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds(lean_object* v_declName_413_, lean_object* v_a_414_, lean_object* v_a_415_, lean_object* v_a_416_, lean_object* v_a_417_, lean_object* v_a_418_, lean_object* v_a_419_){
_start:
{
lean_object* v___y_422_; lean_object* v___x_425_; 
v___x_425_ = l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__0(v_declName_413_, v_a_414_, v_a_415_, v_a_416_, v_a_417_, v_a_418_, v_a_419_);
if (lean_obj_tag(v___x_425_) == 0)
{
lean_object* v_a_426_; lean_object* v___y_428_; lean_object* v___y_429_; lean_object* v___y_430_; lean_object* v___y_431_; lean_object* v___y_432_; lean_object* v___y_433_; lean_object* v___y_565_; lean_object* v___y_566_; lean_object* v___y_567_; lean_object* v___y_568_; lean_object* v___y_569_; lean_object* v___y_570_; lean_object* v_all_582_; lean_object* v___x_583_; lean_object* v___x_584_; uint8_t v___x_585_; 
v_a_426_ = lean_ctor_get(v___x_425_, 0);
lean_inc(v_a_426_);
lean_dec_ref_known(v___x_425_, 1);
v_all_582_ = lean_ctor_get(v_a_426_, 3);
v___x_583_ = lean_unsigned_to_nat(1u);
v___x_584_ = l_List_lengthTR___redArg(v_all_582_);
v___x_585_ = lean_nat_dec_lt(v___x_583_, v___x_584_);
lean_dec(v___x_584_);
if (v___x_585_ == 0)
{
v___y_565_ = v_a_414_;
v___y_566_ = v_a_415_;
v___y_567_ = v_a_416_;
v___y_568_ = v_a_417_;
v___y_569_ = v_a_418_;
v___y_570_ = v_a_419_;
goto v___jp_564_;
}
else
{
lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v_a_588_; lean_object* v___x_590_; uint8_t v_isShared_591_; uint8_t v_isSharedCheck_595_; 
lean_dec(v_a_426_);
v___x_586_ = lean_obj_once(&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__68, &l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__68_once, _init_l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__68);
v___x_587_ = l_Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3___redArg(v___x_586_, v_a_414_, v_a_415_, v_a_416_, v_a_417_, v_a_418_, v_a_419_);
v_a_588_ = lean_ctor_get(v___x_587_, 0);
v_isSharedCheck_595_ = !lean_is_exclusive(v___x_587_);
if (v_isSharedCheck_595_ == 0)
{
v___x_590_ = v___x_587_;
v_isShared_591_ = v_isSharedCheck_595_;
goto v_resetjp_589_;
}
else
{
lean_inc(v_a_588_);
lean_dec(v___x_587_);
v___x_590_ = lean_box(0);
v_isShared_591_ = v_isSharedCheck_595_;
goto v_resetjp_589_;
}
v_resetjp_589_:
{
lean_object* v___x_593_; 
if (v_isShared_591_ == 0)
{
v___x_593_ = v___x_590_;
goto v_reusejp_592_;
}
else
{
lean_object* v_reuseFailAlloc_594_; 
v_reuseFailAlloc_594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_594_, 0, v_a_588_);
v___x_593_ = v_reuseFailAlloc_594_;
goto v_reusejp_592_;
}
v_reusejp_592_:
{
return v___x_593_;
}
}
}
v___jp_427_:
{
lean_object* v___x_434_; 
lean_inc(v_a_426_);
v___x_434_ = l_Lean_Elab_Deriving_mkInductArgNames(v_a_426_, v___y_428_, v___y_429_, v___y_430_, v___y_431_, v___y_432_, v___y_433_);
if (lean_obj_tag(v___x_434_) == 0)
{
lean_object* v_a_435_; lean_object* v___x_436_; 
v_a_435_ = lean_ctor_get(v___x_434_, 0);
lean_inc(v_a_435_);
lean_dec_ref_known(v___x_434_, 1);
v___x_436_ = l_Lean_Elab_Deriving_mkImplicitBinders(v_a_435_, v___y_428_, v___y_429_, v___y_430_, v___y_431_, v___y_432_, v___y_433_);
if (lean_obj_tag(v___x_436_) == 0)
{
lean_object* v_a_437_; lean_object* v___x_438_; lean_object* v___x_439_; 
v_a_437_ = lean_ctor_get(v___x_436_, 0);
lean_inc(v_a_437_);
lean_dec_ref_known(v___x_436_, 1);
v___x_438_ = ((lean_object*)(l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__1));
lean_inc(v_a_435_);
lean_inc(v_a_426_);
v___x_439_ = l_Lean_Elab_Deriving_mkInstImplicitBinders(v___x_438_, v_a_426_, v_a_435_, v___y_428_, v___y_429_, v___y_430_, v___y_431_, v___y_432_, v___y_433_);
if (lean_obj_tag(v___x_439_) == 0)
{
lean_object* v_a_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; 
v_a_440_ = lean_ctor_get(v___x_439_, 0);
lean_inc(v_a_440_);
lean_dec_ref_known(v___x_439_, 1);
v___x_441_ = l_unsafeCast___redArg(v_a_440_);
lean_dec(v_a_440_);
v___x_442_ = l_Array_append___redArg(v_a_437_, v___x_441_);
lean_dec(v___x_441_);
v___x_443_ = ((lean_object*)(l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__6));
lean_inc(v_a_435_);
lean_inc(v_a_426_);
v___x_444_ = l_Lean_Elab_Deriving_mkInstImplicitBinders(v___x_443_, v_a_426_, v_a_435_, v___y_428_, v___y_429_, v___y_430_, v___y_431_, v___y_432_, v___y_433_);
if (lean_obj_tag(v___x_444_) == 0)
{
lean_object* v_a_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; 
v_a_445_ = lean_ctor_get(v___x_444_, 0);
lean_inc(v_a_445_);
lean_dec_ref_known(v___x_444_, 1);
v___x_446_ = l_unsafeCast___redArg(v_a_445_);
lean_dec(v_a_445_);
v___x_447_ = l_Array_append___redArg(v___x_442_, v___x_446_);
lean_dec(v___x_446_);
v___x_448_ = l_Lean_Elab_Deriving_mkInductiveApp___redArg(v_a_426_, v_a_435_, v___y_432_);
lean_dec(v_a_435_);
if (lean_obj_tag(v___x_448_) == 0)
{
lean_object* v_toCold_449_; lean_object* v_a_450_; lean_object* v_ref_451_; lean_object* v_options_452_; lean_object* v_quotContext_453_; lean_object* v_currMacroScope_454_; lean_object* v_inheritedTraceOptions_455_; uint8_t v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; uint8_t v_hasTrace_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; 
v_toCold_449_ = lean_ctor_get(v___y_432_, 0);
v_a_450_ = lean_ctor_get(v___x_448_, 0);
lean_inc(v_a_450_);
lean_dec_ref_known(v___x_448_, 1);
v_ref_451_ = lean_ctor_get(v___y_432_, 2);
v_options_452_ = lean_ctor_get(v_toCold_449_, 2);
v_quotContext_453_ = lean_ctor_get(v_toCold_449_, 8);
v_currMacroScope_454_ = lean_ctor_get(v_toCold_449_, 9);
v_inheritedTraceOptions_455_ = lean_ctor_get(v_toCold_449_, 11);
v___x_456_ = 0;
v___x_457_ = l_Lean_SourceInfo_fromRef(v_ref_451_, v___x_456_);
v___x_458_ = ((lean_object*)(l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__8));
lean_inc_n(v___x_457_, 28);
v___x_459_ = l_Lean_Syntax_node1(v___x_457_, v___x_458_, v_a_450_);
v___x_460_ = ((lean_object*)(l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__10));
v___x_461_ = lean_obj_once(&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__11, &l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__11_once, _init_l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__11);
v___x_462_ = l_Lean_Syntax_node2(v___x_457_, v___x_460_, v___x_461_, v___x_459_);
v___x_463_ = ((lean_object*)(l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__14));
v___x_464_ = ((lean_object*)(l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__16));
v___x_465_ = lean_obj_once(&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__17, &l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__17_once, _init_l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__17);
v___x_466_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_466_, 0, v___x_457_);
lean_ctor_set(v___x_466_, 1, v___x_458_);
lean_ctor_set(v___x_466_, 2, v___x_465_);
lean_inc_ref_n(v___x_466_, 14);
v___x_467_ = l_Lean_Syntax_node7(v___x_457_, v___x_464_, v___x_466_, v___x_466_, v___x_466_, v___x_466_, v___x_466_, v___x_466_, v___x_466_);
v___x_468_ = ((lean_object*)(l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__18));
v___x_469_ = ((lean_object*)(l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__19));
v___x_470_ = ((lean_object*)(l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__21));
v___x_471_ = l_Lean_Syntax_node1(v___x_457_, v___x_470_, v___x_466_);
v___x_472_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_472_, 0, v___x_457_);
lean_ctor_set(v___x_472_, 1, v___x_468_);
v___x_473_ = ((lean_object*)(l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__23));
v___x_474_ = l_unsafeCast___redArg(v___x_447_);
lean_dec_ref(v___x_447_);
v___x_475_ = l_Array_append___redArg(v___x_465_, v___x_474_);
lean_dec(v___x_474_);
v___x_476_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_476_, 0, v___x_457_);
lean_ctor_set(v___x_476_, 1, v___x_458_);
lean_ctor_set(v___x_476_, 2, v___x_475_);
v___x_477_ = ((lean_object*)(l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__25));
v___x_478_ = ((lean_object*)(l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__26));
v___x_479_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_479_, 0, v___x_457_);
lean_ctor_set(v___x_479_, 1, v___x_478_);
v___x_480_ = l_Lean_Syntax_node2(v___x_457_, v___x_477_, v___x_479_, v___x_462_);
v___x_481_ = l_Lean_Syntax_node2(v___x_457_, v___x_473_, v___x_476_, v___x_480_);
v___x_482_ = ((lean_object*)(l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__28));
v___x_483_ = ((lean_object*)(l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__29));
v___x_484_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_484_, 0, v___x_457_);
lean_ctor_set(v___x_484_, 1, v___x_483_);
v___x_485_ = ((lean_object*)(l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__31));
v___x_486_ = ((lean_object*)(l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__33));
v___x_487_ = ((lean_object*)(l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__35));
v___x_488_ = lean_obj_once(&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__37, &l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__37_once, _init_l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__37);
v___x_489_ = ((lean_object*)(l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__38));
lean_inc(v_currMacroScope_454_);
lean_inc(v_quotContext_453_);
v___x_490_ = l_Lean_addMacroScope(v_quotContext_453_, v___x_489_, v_currMacroScope_454_);
v___x_491_ = lean_box(0);
v___x_492_ = ((lean_object*)(l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__40));
v___x_493_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_493_, 0, v___x_457_);
lean_ctor_set(v___x_493_, 1, v___x_488_);
lean_ctor_set(v___x_493_, 2, v___x_490_);
lean_ctor_set(v___x_493_, 3, v___x_492_);
v___x_494_ = l_Lean_Syntax_node2(v___x_457_, v___x_487_, v___x_493_, v___x_466_);
v___x_495_ = ((lean_object*)(l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__42));
v___x_496_ = ((lean_object*)(l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__43));
v___x_497_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_497_, 0, v___x_457_);
lean_ctor_set(v___x_497_, 1, v___x_496_);
v___x_498_ = ((lean_object*)(l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__45));
v___x_499_ = ((lean_object*)(l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__46));
v___x_500_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_500_, 0, v___x_457_);
lean_ctor_set(v___x_500_, 1, v___x_499_);
v___x_501_ = ((lean_object*)(l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__49));
v___x_502_ = ((lean_object*)(l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__51));
v___x_503_ = ((lean_object*)(l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__54));
v___x_504_ = ((lean_object*)(l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__55));
v___x_505_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_505_, 0, v___x_457_);
lean_ctor_set(v___x_505_, 1, v___x_504_);
v___x_506_ = l_Lean_Syntax_node1(v___x_457_, v___x_503_, v___x_505_);
v___x_507_ = l_Lean_Syntax_node1(v___x_457_, v___x_458_, v___x_506_);
v___x_508_ = l_Lean_Syntax_node1(v___x_457_, v___x_502_, v___x_507_);
v___x_509_ = l_Lean_Syntax_node1(v___x_457_, v___x_501_, v___x_508_);
v___x_510_ = l_Lean_Syntax_node2(v___x_457_, v___x_498_, v___x_500_, v___x_509_);
v___x_511_ = l_Lean_Syntax_node3(v___x_457_, v___x_495_, v___x_497_, v___x_466_, v___x_510_);
v___x_512_ = l_Lean_Syntax_node3(v___x_457_, v___x_458_, v___x_466_, v___x_466_, v___x_511_);
v___x_513_ = l_Lean_Syntax_node2(v___x_457_, v___x_486_, v___x_494_, v___x_512_);
v___x_514_ = l_Lean_Syntax_node1(v___x_457_, v___x_458_, v___x_513_);
v___x_515_ = l_Lean_Syntax_node1(v___x_457_, v___x_485_, v___x_514_);
v___x_516_ = l_Lean_Syntax_node3(v___x_457_, v___x_482_, v___x_484_, v___x_515_, v___x_466_);
v___x_517_ = l_Lean_Syntax_node6(v___x_457_, v___x_469_, v___x_471_, v___x_472_, v___x_466_, v___x_466_, v___x_481_, v___x_516_);
v_hasTrace_518_ = lean_ctor_get_uint8(v_options_452_, sizeof(void*)*1);
v___x_519_ = l_Lean_Syntax_node2(v___x_457_, v___x_463_, v___x_467_, v___x_517_);
v___x_520_ = lean_unsigned_to_nat(1u);
v___x_521_ = lean_mk_empty_array_with_capacity(v___x_520_);
v___x_522_ = lean_array_push(v___x_521_, v___x_519_);
if (v_hasTrace_518_ == 0)
{
v___y_422_ = v___x_522_;
goto v___jp_421_;
}
else
{
lean_object* v___x_523_; lean_object* v___x_524_; uint8_t v___x_525_; 
v___x_523_ = ((lean_object*)(l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__59));
v___x_524_ = lean_obj_once(&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__62, &l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__62_once, _init_l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__62);
v___x_525_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_455_, v_options_452_, v___x_524_);
if (v___x_525_ == 0)
{
v___y_422_ = v___x_522_;
goto v___jp_421_;
}
else
{
lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; 
v___x_526_ = lean_obj_once(&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__64, &l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__64_once, _init_l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__64);
lean_inc_ref(v___x_522_);
v___x_527_ = lean_array_to_list(v___x_522_);
v___x_528_ = l_List_mapTR_loop___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__1(v___x_527_, v___x_491_);
v___x_529_ = l_Lean_MessageData_ofList(v___x_528_);
v___x_530_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_530_, 0, v___x_526_);
lean_ctor_set(v___x_530_, 1, v___x_529_);
v___x_531_ = l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__2___redArg(v___x_523_, v___x_530_, v___y_430_, v___y_431_, v___y_432_, v___y_433_);
if (lean_obj_tag(v___x_531_) == 0)
{
lean_dec_ref_known(v___x_531_, 1);
v___y_422_ = v___x_522_;
goto v___jp_421_;
}
else
{
lean_object* v_a_532_; lean_object* v___x_534_; uint8_t v_isShared_535_; uint8_t v_isSharedCheck_539_; 
lean_dec_ref(v___x_522_);
v_a_532_ = lean_ctor_get(v___x_531_, 0);
v_isSharedCheck_539_ = !lean_is_exclusive(v___x_531_);
if (v_isSharedCheck_539_ == 0)
{
v___x_534_ = v___x_531_;
v_isShared_535_ = v_isSharedCheck_539_;
goto v_resetjp_533_;
}
else
{
lean_inc(v_a_532_);
lean_dec(v___x_531_);
v___x_534_ = lean_box(0);
v_isShared_535_ = v_isSharedCheck_539_;
goto v_resetjp_533_;
}
v_resetjp_533_:
{
lean_object* v___x_537_; 
if (v_isShared_535_ == 0)
{
v___x_537_ = v___x_534_;
goto v_reusejp_536_;
}
else
{
lean_object* v_reuseFailAlloc_538_; 
v_reuseFailAlloc_538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_538_, 0, v_a_532_);
v___x_537_ = v_reuseFailAlloc_538_;
goto v_reusejp_536_;
}
v_reusejp_536_:
{
return v___x_537_;
}
}
}
}
}
}
else
{
lean_object* v_a_540_; lean_object* v___x_542_; uint8_t v_isShared_543_; uint8_t v_isSharedCheck_547_; 
lean_dec_ref(v___x_447_);
v_a_540_ = lean_ctor_get(v___x_448_, 0);
v_isSharedCheck_547_ = !lean_is_exclusive(v___x_448_);
if (v_isSharedCheck_547_ == 0)
{
v___x_542_ = v___x_448_;
v_isShared_543_ = v_isSharedCheck_547_;
goto v_resetjp_541_;
}
else
{
lean_inc(v_a_540_);
lean_dec(v___x_448_);
v___x_542_ = lean_box(0);
v_isShared_543_ = v_isSharedCheck_547_;
goto v_resetjp_541_;
}
v_resetjp_541_:
{
lean_object* v___x_545_; 
if (v_isShared_543_ == 0)
{
v___x_545_ = v___x_542_;
goto v_reusejp_544_;
}
else
{
lean_object* v_reuseFailAlloc_546_; 
v_reuseFailAlloc_546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_546_, 0, v_a_540_);
v___x_545_ = v_reuseFailAlloc_546_;
goto v_reusejp_544_;
}
v_reusejp_544_:
{
return v___x_545_;
}
}
}
}
else
{
lean_dec_ref(v___x_442_);
lean_dec(v_a_435_);
lean_dec(v_a_426_);
return v___x_444_;
}
}
else
{
lean_dec(v_a_437_);
lean_dec(v_a_435_);
lean_dec(v_a_426_);
return v___x_439_;
}
}
else
{
lean_object* v_a_548_; lean_object* v___x_550_; uint8_t v_isShared_551_; uint8_t v_isSharedCheck_555_; 
lean_dec(v_a_435_);
lean_dec(v_a_426_);
v_a_548_ = lean_ctor_get(v___x_436_, 0);
v_isSharedCheck_555_ = !lean_is_exclusive(v___x_436_);
if (v_isSharedCheck_555_ == 0)
{
v___x_550_ = v___x_436_;
v_isShared_551_ = v_isSharedCheck_555_;
goto v_resetjp_549_;
}
else
{
lean_inc(v_a_548_);
lean_dec(v___x_436_);
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
else
{
lean_object* v_a_556_; lean_object* v___x_558_; uint8_t v_isShared_559_; uint8_t v_isSharedCheck_563_; 
lean_dec(v_a_426_);
v_a_556_ = lean_ctor_get(v___x_434_, 0);
v_isSharedCheck_563_ = !lean_is_exclusive(v___x_434_);
if (v_isSharedCheck_563_ == 0)
{
v___x_558_ = v___x_434_;
v_isShared_559_ = v_isSharedCheck_563_;
goto v_resetjp_557_;
}
else
{
lean_inc(v_a_556_);
lean_dec(v___x_434_);
v___x_558_ = lean_box(0);
v_isShared_559_ = v_isSharedCheck_563_;
goto v_resetjp_557_;
}
v_resetjp_557_:
{
lean_object* v___x_561_; 
if (v_isShared_559_ == 0)
{
v___x_561_ = v___x_558_;
goto v_reusejp_560_;
}
else
{
lean_object* v_reuseFailAlloc_562_; 
v_reuseFailAlloc_562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_562_, 0, v_a_556_);
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
v___jp_564_:
{
uint8_t v___x_571_; 
v___x_571_ = l_Lean_InductiveVal_isNested(v_a_426_);
if (v___x_571_ == 0)
{
v___y_428_ = v___y_565_;
v___y_429_ = v___y_566_;
v___y_430_ = v___y_567_;
v___y_431_ = v___y_568_;
v___y_432_ = v___y_569_;
v___y_433_ = v___y_570_;
goto v___jp_427_;
}
else
{
lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v_a_574_; lean_object* v___x_576_; uint8_t v_isShared_577_; uint8_t v_isSharedCheck_581_; 
lean_dec(v_a_426_);
v___x_572_ = lean_obj_once(&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__66, &l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__66_once, _init_l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__66);
v___x_573_ = l_Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3___redArg(v___x_572_, v___y_565_, v___y_566_, v___y_567_, v___y_568_, v___y_569_, v___y_570_);
v_a_574_ = lean_ctor_get(v___x_573_, 0);
v_isSharedCheck_581_ = !lean_is_exclusive(v___x_573_);
if (v_isSharedCheck_581_ == 0)
{
v___x_576_ = v___x_573_;
v_isShared_577_ = v_isSharedCheck_581_;
goto v_resetjp_575_;
}
else
{
lean_inc(v_a_574_);
lean_dec(v___x_573_);
v___x_576_ = lean_box(0);
v_isShared_577_ = v_isSharedCheck_581_;
goto v_resetjp_575_;
}
v_resetjp_575_:
{
lean_object* v___x_579_; 
if (v_isShared_577_ == 0)
{
v___x_579_ = v___x_576_;
goto v_reusejp_578_;
}
else
{
lean_object* v_reuseFailAlloc_580_; 
v_reuseFailAlloc_580_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_580_, 0, v_a_574_);
v___x_579_ = v_reuseFailAlloc_580_;
goto v_reusejp_578_;
}
v_reusejp_578_:
{
return v___x_579_;
}
}
}
}
}
else
{
lean_object* v_a_596_; lean_object* v___x_598_; uint8_t v_isShared_599_; uint8_t v_isSharedCheck_603_; 
v_a_596_ = lean_ctor_get(v___x_425_, 0);
v_isSharedCheck_603_ = !lean_is_exclusive(v___x_425_);
if (v_isSharedCheck_603_ == 0)
{
v___x_598_ = v___x_425_;
v_isShared_599_ = v_isSharedCheck_603_;
goto v_resetjp_597_;
}
else
{
lean_inc(v_a_596_);
lean_dec(v___x_425_);
v___x_598_ = lean_box(0);
v_isShared_599_ = v_isSharedCheck_603_;
goto v_resetjp_597_;
}
v_resetjp_597_:
{
lean_object* v___x_601_; 
if (v_isShared_599_ == 0)
{
v___x_601_ = v___x_598_;
goto v_reusejp_600_;
}
else
{
lean_object* v_reuseFailAlloc_602_; 
v_reuseFailAlloc_602_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_602_, 0, v_a_596_);
v___x_601_ = v_reuseFailAlloc_602_;
goto v_reusejp_600_;
}
v_reusejp_600_:
{
return v___x_601_;
}
}
}
v___jp_421_:
{
lean_object* v___x_423_; lean_object* v___x_424_; 
v___x_423_ = l_unsafeCast___redArg(v___y_422_);
lean_dec_ref(v___y_422_);
v___x_424_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_424_, 0, v___x_423_);
return v___x_424_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___boxed(lean_object* v_declName_604_, lean_object* v_a_605_, lean_object* v_a_606_, lean_object* v_a_607_, lean_object* v_a_608_, lean_object* v_a_609_, lean_object* v_a_610_, lean_object* v_a_611_){
_start:
{
lean_object* v_res_612_; 
v_res_612_ = l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds(v_declName_604_, v_a_605_, v_a_606_, v_a_607_, v_a_608_, v_a_609_, v_a_610_);
lean_dec(v_a_610_);
lean_dec_ref(v_a_609_);
lean_dec(v_a_608_);
lean_dec_ref(v_a_607_);
lean_dec(v_a_606_);
lean_dec_ref(v_a_605_);
return v_res_612_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__2(lean_object* v_cls_613_, lean_object* v_msg_614_, lean_object* v___y_615_, lean_object* v___y_616_, lean_object* v___y_617_, lean_object* v___y_618_, lean_object* v___y_619_, lean_object* v___y_620_){
_start:
{
lean_object* v___x_622_; 
v___x_622_ = l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__2___redArg(v_cls_613_, v_msg_614_, v___y_617_, v___y_618_, v___y_619_, v___y_620_);
return v___x_622_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__2___boxed(lean_object* v_cls_623_, lean_object* v_msg_624_, lean_object* v___y_625_, lean_object* v___y_626_, lean_object* v___y_627_, lean_object* v___y_628_, lean_object* v___y_629_, lean_object* v___y_630_, lean_object* v___y_631_){
_start:
{
lean_object* v_res_632_; 
v_res_632_ = l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__2(v_cls_623_, v_msg_624_, v___y_625_, v___y_626_, v___y_627_, v___y_628_, v___y_629_, v___y_630_);
lean_dec(v___y_630_);
lean_dec_ref(v___y_629_);
lean_dec(v___y_628_);
lean_dec_ref(v___y_627_);
lean_dec(v___y_626_);
lean_dec_ref(v___y_625_);
return v_res_632_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3(lean_object* v_00_u03b1_633_, lean_object* v_msg_634_, lean_object* v___y_635_, lean_object* v___y_636_, lean_object* v___y_637_, lean_object* v___y_638_, lean_object* v___y_639_, lean_object* v___y_640_){
_start:
{
lean_object* v___x_642_; 
v___x_642_ = l_Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3___redArg(v_msg_634_, v___y_635_, v___y_636_, v___y_637_, v___y_638_, v___y_639_, v___y_640_);
return v___x_642_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3___boxed(lean_object* v_00_u03b1_643_, lean_object* v_msg_644_, lean_object* v___y_645_, lean_object* v___y_646_, lean_object* v___y_647_, lean_object* v___y_648_, lean_object* v___y_649_, lean_object* v___y_650_, lean_object* v___y_651_){
_start:
{
lean_object* v_res_652_; 
v_res_652_ = l_Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3(v_00_u03b1_643_, v_msg_644_, v___y_645_, v___y_646_, v___y_647_, v___y_648_, v___y_649_, v___y_650_);
lean_dec(v___y_650_);
lean_dec_ref(v___y_649_);
lean_dec(v___y_648_);
lean_dec_ref(v___y_647_);
lean_dec(v___y_646_);
lean_dec_ref(v___y_645_);
return v_res_652_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3_spec__4(lean_object* v_msgData_653_, lean_object* v_macroStack_654_, lean_object* v___y_655_, lean_object* v___y_656_, lean_object* v___y_657_, lean_object* v___y_658_, lean_object* v___y_659_, lean_object* v___y_660_){
_start:
{
lean_object* v___x_662_; 
v___x_662_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3_spec__4___redArg(v_msgData_653_, v_macroStack_654_, v___y_659_);
return v___x_662_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3_spec__4___boxed(lean_object* v_msgData_663_, lean_object* v_macroStack_664_, lean_object* v___y_665_, lean_object* v___y_666_, lean_object* v___y_667_, lean_object* v___y_668_, lean_object* v___y_669_, lean_object* v___y_670_, lean_object* v___y_671_){
_start:
{
lean_object* v_res_672_; 
v_res_672_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds_spec__3_spec__4(v_msgData_663_, v_macroStack_664_, v___y_665_, v___y_666_, v___y_667_, v___y_668_, v___y_669_, v___y_670_);
lean_dec(v___y_670_);
lean_dec_ref(v___y_669_);
lean_dec(v___y_668_);
lean_dec_ref(v___y_667_);
lean_dec(v___y_666_);
lean_dec_ref(v___y_665_);
return v_res_672_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstance_spec__0(lean_object* v_as_673_, size_t v_i_674_, size_t v_stop_675_, lean_object* v_b_676_, lean_object* v___y_677_, lean_object* v___y_678_){
_start:
{
uint8_t v___x_680_; 
v___x_680_ = lean_usize_dec_eq(v_i_674_, v_stop_675_);
if (v___x_680_ == 0)
{
lean_object* v___x_681_; lean_object* v___x_682_; 
v___x_681_ = lean_array_uget_borrowed(v_as_673_, v_i_674_);
lean_inc(v___x_681_);
v___x_682_ = l_Lean_Elab_Command_elabCommand(v___x_681_, v___y_677_, v___y_678_);
if (lean_obj_tag(v___x_682_) == 0)
{
lean_object* v_a_683_; size_t v___x_684_; size_t v___x_685_; 
v_a_683_ = lean_ctor_get(v___x_682_, 0);
lean_inc(v_a_683_);
lean_dec_ref_known(v___x_682_, 1);
v___x_684_ = ((size_t)1ULL);
v___x_685_ = lean_usize_add(v_i_674_, v___x_684_);
v_i_674_ = v___x_685_;
v_b_676_ = v_a_683_;
goto _start;
}
else
{
return v___x_682_;
}
}
else
{
lean_object* v___x_687_; 
v___x_687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_687_, 0, v_b_676_);
return v___x_687_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstance_spec__0___boxed(lean_object* v_as_688_, lean_object* v_i_689_, lean_object* v_stop_690_, lean_object* v_b_691_, lean_object* v___y_692_, lean_object* v___y_693_, lean_object* v___y_694_){
_start:
{
size_t v_i_boxed_695_; size_t v_stop_boxed_696_; lean_object* v_res_697_; 
v_i_boxed_695_ = lean_unbox_usize(v_i_689_);
lean_dec(v_i_689_);
v_stop_boxed_696_ = lean_unbox_usize(v_stop_690_);
lean_dec(v_stop_690_);
v_res_697_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstance_spec__0(v_as_688_, v_i_boxed_695_, v_stop_boxed_696_, v_b_691_, v___y_692_, v___y_693_);
lean_dec(v___y_693_);
lean_dec_ref(v___y_692_);
lean_dec_ref(v_as_688_);
return v_res_697_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstance___lam__0(lean_object* v___x_698_, lean_object* v___y_699_, lean_object* v___y_700_){
_start:
{
lean_object* v___x_702_; 
v___x_702_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___x_698_, v___y_699_, v___y_700_);
if (lean_obj_tag(v___x_702_) == 0)
{
lean_object* v_a_703_; lean_object* v___x_705_; uint8_t v_isShared_706_; uint8_t v_isSharedCheck_724_; 
v_a_703_ = lean_ctor_get(v___x_702_, 0);
v_isSharedCheck_724_ = !lean_is_exclusive(v___x_702_);
if (v_isSharedCheck_724_ == 0)
{
v___x_705_ = v___x_702_;
v_isShared_706_ = v_isSharedCheck_724_;
goto v_resetjp_704_;
}
else
{
lean_inc(v_a_703_);
lean_dec(v___x_702_);
v___x_705_ = lean_box(0);
v_isShared_706_ = v_isSharedCheck_724_;
goto v_resetjp_704_;
}
v_resetjp_704_:
{
lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; uint8_t v___x_710_; 
v___x_707_ = lean_unsigned_to_nat(0u);
v___x_708_ = lean_array_get_size(v_a_703_);
v___x_709_ = lean_box(0);
v___x_710_ = lean_nat_dec_lt(v___x_707_, v___x_708_);
if (v___x_710_ == 0)
{
lean_object* v___x_712_; 
lean_dec(v_a_703_);
if (v_isShared_706_ == 0)
{
lean_ctor_set(v___x_705_, 0, v___x_709_);
v___x_712_ = v___x_705_;
goto v_reusejp_711_;
}
else
{
lean_object* v_reuseFailAlloc_713_; 
v_reuseFailAlloc_713_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_713_, 0, v___x_709_);
v___x_712_ = v_reuseFailAlloc_713_;
goto v_reusejp_711_;
}
v_reusejp_711_:
{
return v___x_712_;
}
}
else
{
uint8_t v___x_714_; 
v___x_714_ = lean_nat_dec_le(v___x_708_, v___x_708_);
if (v___x_714_ == 0)
{
if (v___x_710_ == 0)
{
lean_object* v___x_716_; 
lean_dec(v_a_703_);
if (v_isShared_706_ == 0)
{
lean_ctor_set(v___x_705_, 0, v___x_709_);
v___x_716_ = v___x_705_;
goto v_reusejp_715_;
}
else
{
lean_object* v_reuseFailAlloc_717_; 
v_reuseFailAlloc_717_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_717_, 0, v___x_709_);
v___x_716_ = v_reuseFailAlloc_717_;
goto v_reusejp_715_;
}
v_reusejp_715_:
{
return v___x_716_;
}
}
else
{
size_t v___x_718_; size_t v___x_719_; lean_object* v___x_720_; 
lean_del_object(v___x_705_);
v___x_718_ = ((size_t)0ULL);
v___x_719_ = lean_usize_of_nat(v___x_708_);
v___x_720_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstance_spec__0(v_a_703_, v___x_718_, v___x_719_, v___x_709_, v___y_699_, v___y_700_);
lean_dec(v_a_703_);
return v___x_720_;
}
}
else
{
size_t v___x_721_; size_t v___x_722_; lean_object* v___x_723_; 
lean_del_object(v___x_705_);
v___x_721_ = ((size_t)0ULL);
v___x_722_ = lean_usize_of_nat(v___x_708_);
v___x_723_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstance_spec__0(v_a_703_, v___x_721_, v___x_722_, v___x_709_, v___y_699_, v___y_700_);
lean_dec(v_a_703_);
return v___x_723_;
}
}
}
}
else
{
lean_object* v_a_725_; lean_object* v___x_727_; uint8_t v_isShared_728_; uint8_t v_isSharedCheck_732_; 
v_a_725_ = lean_ctor_get(v___x_702_, 0);
v_isSharedCheck_732_ = !lean_is_exclusive(v___x_702_);
if (v_isSharedCheck_732_ == 0)
{
v___x_727_ = v___x_702_;
v_isShared_728_ = v_isSharedCheck_732_;
goto v_resetjp_726_;
}
else
{
lean_inc(v_a_725_);
lean_dec(v___x_702_);
v___x_727_ = lean_box(0);
v_isShared_728_ = v_isSharedCheck_732_;
goto v_resetjp_726_;
}
v_resetjp_726_:
{
lean_object* v___x_730_; 
if (v_isShared_728_ == 0)
{
v___x_730_ = v___x_727_;
goto v_reusejp_729_;
}
else
{
lean_object* v_reuseFailAlloc_731_; 
v_reuseFailAlloc_731_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_731_, 0, v_a_725_);
v___x_730_ = v_reuseFailAlloc_731_;
goto v_reusejp_729_;
}
v_reusejp_729_:
{
return v___x_730_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstance___lam__0___boxed(lean_object* v___x_733_, lean_object* v___y_734_, lean_object* v___y_735_, lean_object* v___y_736_){
_start:
{
lean_object* v_res_737_; 
v_res_737_ = l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstance___lam__0(v___x_733_, v___y_734_, v___y_735_);
lean_dec(v___y_735_);
lean_dec_ref(v___y_734_);
return v_res_737_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstance(lean_object* v_declName_738_, lean_object* v_a_739_, lean_object* v_a_740_){
_start:
{
lean_object* v___x_742_; lean_object* v___f_743_; lean_object* v___x_744_; 
lean_inc(v_declName_738_);
v___x_742_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___boxed), 8, 1);
lean_closure_set(v___x_742_, 0, v_declName_738_);
v___f_743_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstance___lam__0___boxed), 4, 1);
lean_closure_set(v___f_743_, 0, v___x_742_);
v___x_744_ = l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg(v_declName_738_, v___f_743_, v_a_739_, v_a_740_);
return v___x_744_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstance___boxed(lean_object* v_declName_745_, lean_object* v_a_746_, lean_object* v_a_747_, lean_object* v_a_748_){
_start:
{
lean_object* v_res_749_; 
v_res_749_ = l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstance(v_declName_745_, v_a_746_, v_a_747_);
lean_dec(v_a_747_);
lean_dec_ref(v_a_746_);
return v_res_749_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInductive___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceHandler_spec__1___redArg(lean_object* v_declName_750_, lean_object* v___y_751_){
_start:
{
lean_object* v___x_753_; lean_object* v_env_754_; uint8_t v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; 
v___x_753_ = lean_st_ref_get(v___y_751_);
v_env_754_ = lean_ctor_get(v___x_753_, 0);
lean_inc_ref(v_env_754_);
lean_dec(v___x_753_);
v___x_755_ = l_Lean_isInductiveCore(v_env_754_, v_declName_750_);
v___x_756_ = lean_box(v___x_755_);
v___x_757_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_757_, 0, v___x_756_);
return v___x_757_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInductive___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceHandler_spec__1___redArg___boxed(lean_object* v_declName_758_, lean_object* v___y_759_, lean_object* v___y_760_){
_start:
{
lean_object* v_res_761_; 
v_res_761_ = l_Lean_isInductive___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceHandler_spec__1___redArg(v_declName_758_, v___y_759_);
lean_dec(v___y_759_);
return v_res_761_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInductive___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceHandler_spec__1(lean_object* v_declName_762_, lean_object* v___y_763_, lean_object* v___y_764_){
_start:
{
lean_object* v___x_766_; 
v___x_766_ = l_Lean_isInductive___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceHandler_spec__1___redArg(v_declName_762_, v___y_764_);
return v___x_766_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInductive___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceHandler_spec__1___boxed(lean_object* v_declName_767_, lean_object* v___y_768_, lean_object* v___y_769_, lean_object* v___y_770_){
_start:
{
lean_object* v_res_771_; 
v_res_771_ = l_Lean_isInductive___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceHandler_spec__1(v_declName_767_, v___y_768_, v___y_769_);
lean_dec(v___y_769_);
lean_dec_ref(v___y_768_);
return v_res_771_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceHandler___lam__0(uint8_t v_____do__lift_772_, lean_object* v___y_773_, lean_object* v___y_774_){
_start:
{
if (v_____do__lift_772_ == 0)
{
uint8_t v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; 
v___x_776_ = 1;
v___x_777_ = lean_box(v___x_776_);
v___x_778_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_778_, 0, v___x_777_);
return v___x_778_;
}
else
{
uint8_t v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; 
v___x_779_ = 0;
v___x_780_ = lean_box(v___x_779_);
v___x_781_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_781_, 0, v___x_780_);
return v___x_781_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceHandler___lam__0___boxed(lean_object* v_____do__lift_782_, lean_object* v___y_783_, lean_object* v___y_784_, lean_object* v___y_785_){
_start:
{
uint8_t v_____do__lift_1654__boxed_786_; lean_object* v_res_787_; 
v_____do__lift_1654__boxed_786_ = lean_unbox(v_____do__lift_782_);
v_res_787_ = l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceHandler___lam__0(v_____do__lift_1654__boxed_786_, v___y_783_, v___y_784_);
lean_dec(v___y_784_);
lean_dec_ref(v___y_783_);
return v_res_787_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceHandler_spec__2(lean_object* v_as_788_, size_t v_i_789_, size_t v_stop_790_, lean_object* v___y_791_, lean_object* v___y_792_){
_start:
{
uint8_t v___x_798_; 
v___x_798_ = lean_usize_dec_eq(v_i_789_, v_stop_790_);
if (v___x_798_ == 0)
{
uint8_t v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; 
v___x_799_ = 1;
v___x_800_ = lean_array_uget_borrowed(v_as_788_, v_i_789_);
lean_inc(v___x_800_);
v___x_801_ = l_Lean_isInductive___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceHandler_spec__1___redArg(v___x_800_, v___y_792_);
if (lean_obj_tag(v___x_801_) == 0)
{
lean_object* v_a_802_; lean_object* v___x_804_; uint8_t v_isShared_805_; uint8_t v_isSharedCheck_811_; 
v_a_802_ = lean_ctor_get(v___x_801_, 0);
v_isSharedCheck_811_ = !lean_is_exclusive(v___x_801_);
if (v_isSharedCheck_811_ == 0)
{
v___x_804_ = v___x_801_;
v_isShared_805_ = v_isSharedCheck_811_;
goto v_resetjp_803_;
}
else
{
lean_inc(v_a_802_);
lean_dec(v___x_801_);
v___x_804_ = lean_box(0);
v_isShared_805_ = v_isSharedCheck_811_;
goto v_resetjp_803_;
}
v_resetjp_803_:
{
uint8_t v___x_806_; 
v___x_806_ = lean_unbox(v_a_802_);
lean_dec(v_a_802_);
if (v___x_806_ == 0)
{
lean_object* v___x_807_; lean_object* v___x_809_; 
v___x_807_ = lean_box(v___x_799_);
if (v_isShared_805_ == 0)
{
lean_ctor_set(v___x_804_, 0, v___x_807_);
v___x_809_ = v___x_804_;
goto v_reusejp_808_;
}
else
{
lean_object* v_reuseFailAlloc_810_; 
v_reuseFailAlloc_810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_810_, 0, v___x_807_);
v___x_809_ = v_reuseFailAlloc_810_;
goto v_reusejp_808_;
}
v_reusejp_808_:
{
return v___x_809_;
}
}
else
{
lean_del_object(v___x_804_);
goto v___jp_794_;
}
}
}
else
{
if (lean_obj_tag(v___x_801_) == 0)
{
lean_object* v_a_812_; lean_object* v___x_814_; uint8_t v_isShared_815_; uint8_t v_isSharedCheck_821_; 
v_a_812_ = lean_ctor_get(v___x_801_, 0);
v_isSharedCheck_821_ = !lean_is_exclusive(v___x_801_);
if (v_isSharedCheck_821_ == 0)
{
v___x_814_ = v___x_801_;
v_isShared_815_ = v_isSharedCheck_821_;
goto v_resetjp_813_;
}
else
{
lean_inc(v_a_812_);
lean_dec(v___x_801_);
v___x_814_ = lean_box(0);
v_isShared_815_ = v_isSharedCheck_821_;
goto v_resetjp_813_;
}
v_resetjp_813_:
{
uint8_t v___x_816_; 
v___x_816_ = lean_unbox(v_a_812_);
lean_dec(v_a_812_);
if (v___x_816_ == 0)
{
lean_del_object(v___x_814_);
goto v___jp_794_;
}
else
{
lean_object* v___x_817_; lean_object* v___x_819_; 
v___x_817_ = lean_box(v___x_799_);
if (v_isShared_815_ == 0)
{
lean_ctor_set_tag(v___x_814_, 0);
lean_ctor_set(v___x_814_, 0, v___x_817_);
v___x_819_ = v___x_814_;
goto v_reusejp_818_;
}
else
{
lean_object* v_reuseFailAlloc_820_; 
v_reuseFailAlloc_820_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_820_, 0, v___x_817_);
v___x_819_ = v_reuseFailAlloc_820_;
goto v_reusejp_818_;
}
v_reusejp_818_:
{
return v___x_819_;
}
}
}
}
else
{
return v___x_801_;
}
}
}
else
{
uint8_t v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; 
v___x_822_ = 0;
v___x_823_ = lean_box(v___x_822_);
v___x_824_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_824_, 0, v___x_823_);
return v___x_824_;
}
v___jp_794_:
{
size_t v___x_795_; size_t v___x_796_; 
v___x_795_ = ((size_t)1ULL);
v___x_796_ = lean_usize_add(v_i_789_, v___x_795_);
v_i_789_ = v___x_796_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceHandler_spec__2___boxed(lean_object* v_as_825_, lean_object* v_i_826_, lean_object* v_stop_827_, lean_object* v___y_828_, lean_object* v___y_829_, lean_object* v___y_830_){
_start:
{
size_t v_i_boxed_831_; size_t v_stop_boxed_832_; lean_object* v_res_833_; 
v_i_boxed_831_ = lean_unbox_usize(v_i_826_);
lean_dec(v_i_826_);
v_stop_boxed_832_ = lean_unbox_usize(v_stop_827_);
lean_dec(v_stop_827_);
v_res_833_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceHandler_spec__2(v_as_825_, v_i_boxed_831_, v_stop_boxed_832_, v___y_828_, v___y_829_);
lean_dec(v___y_829_);
lean_dec_ref(v___y_828_);
lean_dec_ref(v_as_825_);
return v_res_833_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceHandler_spec__0(lean_object* v_as_834_, size_t v_sz_835_, size_t v_i_836_, lean_object* v_b_837_, lean_object* v___y_838_, lean_object* v___y_839_){
_start:
{
uint8_t v___x_841_; 
v___x_841_ = lean_usize_dec_lt(v_i_836_, v_sz_835_);
if (v___x_841_ == 0)
{
lean_object* v___x_842_; 
v___x_842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_842_, 0, v_b_837_);
return v___x_842_;
}
else
{
lean_object* v___x_843_; lean_object* v_a_844_; lean_object* v___x_845_; 
v___x_843_ = lean_box(0);
v_a_844_ = lean_array_uget_borrowed(v_as_834_, v_i_836_);
lean_inc(v_a_844_);
v___x_845_ = l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstance(v_a_844_, v___y_838_, v___y_839_);
if (lean_obj_tag(v___x_845_) == 0)
{
size_t v___x_846_; size_t v___x_847_; 
lean_dec_ref_known(v___x_845_, 1);
v___x_846_ = ((size_t)1ULL);
v___x_847_ = lean_usize_add(v_i_836_, v___x_846_);
v_i_836_ = v___x_847_;
v_b_837_ = v___x_843_;
goto _start;
}
else
{
return v___x_845_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceHandler_spec__0___boxed(lean_object* v_as_849_, lean_object* v_sz_850_, lean_object* v_i_851_, lean_object* v_b_852_, lean_object* v___y_853_, lean_object* v___y_854_, lean_object* v___y_855_){
_start:
{
size_t v_sz_boxed_856_; size_t v_i_boxed_857_; lean_object* v_res_858_; 
v_sz_boxed_856_ = lean_unbox_usize(v_sz_850_);
lean_dec(v_sz_850_);
v_i_boxed_857_ = lean_unbox_usize(v_i_851_);
lean_dec(v_i_851_);
v_res_858_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceHandler_spec__0(v_as_849_, v_sz_boxed_856_, v_i_boxed_857_, v_b_852_, v___y_853_, v___y_854_);
lean_dec(v___y_854_);
lean_dec_ref(v___y_853_);
lean_dec_ref(v_as_849_);
return v_res_858_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceHandler(lean_object* v_declNames_859_, lean_object* v_a_860_, lean_object* v_a_861_){
_start:
{
lean_object* v___y_887_; lean_object* v___x_890_; lean_object* v___x_891_; uint8_t v___x_892_; 
v___x_890_ = lean_unsigned_to_nat(0u);
v___x_891_ = lean_array_get_size(v_declNames_859_);
v___x_892_ = lean_nat_dec_lt(v___x_890_, v___x_891_);
if (v___x_892_ == 0)
{
lean_object* v___x_893_; 
v___x_893_ = l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceHandler___lam__0(v___x_892_, v_a_860_, v_a_861_);
v___y_887_ = v___x_893_;
goto v___jp_886_;
}
else
{
if (v___x_892_ == 0)
{
goto v___jp_863_;
}
else
{
size_t v___x_894_; size_t v___x_895_; lean_object* v___x_896_; 
v___x_894_ = ((size_t)0ULL);
v___x_895_ = lean_usize_of_nat(v___x_891_);
v___x_896_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceHandler_spec__2(v_declNames_859_, v___x_894_, v___x_895_, v_a_860_, v_a_861_);
if (lean_obj_tag(v___x_896_) == 0)
{
lean_object* v_a_897_; uint8_t v___x_898_; lean_object* v___x_899_; 
v_a_897_ = lean_ctor_get(v___x_896_, 0);
lean_inc(v_a_897_);
lean_dec_ref_known(v___x_896_, 1);
v___x_898_ = lean_unbox(v_a_897_);
lean_dec(v_a_897_);
v___x_899_ = l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceHandler___lam__0(v___x_898_, v_a_860_, v_a_861_);
v___y_887_ = v___x_899_;
goto v___jp_886_;
}
else
{
v___y_887_ = v___x_896_;
goto v___jp_886_;
}
}
}
v___jp_863_:
{
uint8_t v___x_864_; lean_object* v___x_865_; size_t v_sz_866_; size_t v___x_867_; lean_object* v___x_868_; 
v___x_864_ = 1;
v___x_865_ = lean_box(0);
v_sz_866_ = lean_array_size(v_declNames_859_);
v___x_867_ = ((size_t)0ULL);
v___x_868_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceHandler_spec__0(v_declNames_859_, v_sz_866_, v___x_867_, v___x_865_, v_a_860_, v_a_861_);
if (lean_obj_tag(v___x_868_) == 0)
{
lean_object* v___x_870_; uint8_t v_isShared_871_; uint8_t v_isSharedCheck_876_; 
v_isSharedCheck_876_ = !lean_is_exclusive(v___x_868_);
if (v_isSharedCheck_876_ == 0)
{
lean_object* v_unused_877_; 
v_unused_877_ = lean_ctor_get(v___x_868_, 0);
lean_dec(v_unused_877_);
v___x_870_ = v___x_868_;
v_isShared_871_ = v_isSharedCheck_876_;
goto v_resetjp_869_;
}
else
{
lean_dec(v___x_868_);
v___x_870_ = lean_box(0);
v_isShared_871_ = v_isSharedCheck_876_;
goto v_resetjp_869_;
}
v_resetjp_869_:
{
lean_object* v___x_872_; lean_object* v___x_874_; 
v___x_872_ = lean_box(v___x_864_);
if (v_isShared_871_ == 0)
{
lean_ctor_set(v___x_870_, 0, v___x_872_);
v___x_874_ = v___x_870_;
goto v_reusejp_873_;
}
else
{
lean_object* v_reuseFailAlloc_875_; 
v_reuseFailAlloc_875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_875_, 0, v___x_872_);
v___x_874_ = v_reuseFailAlloc_875_;
goto v_reusejp_873_;
}
v_reusejp_873_:
{
return v___x_874_;
}
}
}
else
{
lean_object* v_a_878_; lean_object* v___x_880_; uint8_t v_isShared_881_; uint8_t v_isSharedCheck_885_; 
v_a_878_ = lean_ctor_get(v___x_868_, 0);
v_isSharedCheck_885_ = !lean_is_exclusive(v___x_868_);
if (v_isSharedCheck_885_ == 0)
{
v___x_880_ = v___x_868_;
v_isShared_881_ = v_isSharedCheck_885_;
goto v_resetjp_879_;
}
else
{
lean_inc(v_a_878_);
lean_dec(v___x_868_);
v___x_880_ = lean_box(0);
v_isShared_881_ = v_isSharedCheck_885_;
goto v_resetjp_879_;
}
v_resetjp_879_:
{
lean_object* v___x_883_; 
if (v_isShared_881_ == 0)
{
v___x_883_ = v___x_880_;
goto v_reusejp_882_;
}
else
{
lean_object* v_reuseFailAlloc_884_; 
v_reuseFailAlloc_884_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_884_, 0, v_a_878_);
v___x_883_ = v_reuseFailAlloc_884_;
goto v_reusejp_882_;
}
v_reusejp_882_:
{
return v___x_883_;
}
}
}
}
v___jp_886_:
{
if (lean_obj_tag(v___y_887_) == 0)
{
lean_object* v_a_888_; uint8_t v___x_889_; 
v_a_888_ = lean_ctor_get(v___y_887_, 0);
v___x_889_ = lean_unbox(v_a_888_);
if (v___x_889_ == 0)
{
return v___y_887_;
}
else
{
lean_dec_ref_known(v___y_887_, 1);
goto v___jp_863_;
}
}
else
{
return v___y_887_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceHandler___boxed(lean_object* v_declNames_900_, lean_object* v_a_901_, lean_object* v_a_902_, lean_object* v_a_903_){
_start:
{
lean_object* v_res_904_; 
v_res_904_ = l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceHandler(v_declNames_900_, v_a_901_, v_a_902_);
lean_dec(v_a_902_);
lean_dec_ref(v_a_901_);
lean_dec_ref(v_declNames_900_);
return v_res_904_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__1_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_906_; lean_object* v___x_907_; 
v___x_906_ = lean_box(0);
v___x_907_ = l_unsafeCast___redArg(v___x_906_);
return v___x_907_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__3_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; 
v___x_909_ = ((lean_object*)(l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__2_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_));
v___x_910_ = lean_obj_once(&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__1_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_, &l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__1_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__1_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_);
v___x_911_ = l_Lean_Name_str___override(v___x_910_, v___x_909_);
return v___x_911_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__4_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; 
v___x_912_ = ((lean_object*)(l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__2));
v___x_913_ = lean_obj_once(&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__3_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_, &l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__3_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__3_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_);
v___x_914_ = l_Lean_Name_str___override(v___x_913_, v___x_912_);
return v___x_914_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__5_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; 
v___x_915_ = ((lean_object*)(l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__56));
v___x_916_ = lean_obj_once(&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__4_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_, &l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__4_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__4_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_);
v___x_917_ = l_Lean_Name_str___override(v___x_916_, v___x_915_);
return v___x_917_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__6_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; 
v___x_918_ = ((lean_object*)(l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__57));
v___x_919_ = lean_obj_once(&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__5_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_, &l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__5_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__5_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_);
v___x_920_ = l_Lean_Name_str___override(v___x_919_, v___x_918_);
return v___x_920_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__7_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; 
v___x_921_ = ((lean_object*)(l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__5));
v___x_922_ = lean_obj_once(&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__6_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_, &l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__6_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__6_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_);
v___x_923_ = l_Lean_Name_str___override(v___x_922_, v___x_921_);
return v___x_923_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; 
v___x_924_ = lean_unsigned_to_nat(0u);
v___x_925_ = lean_obj_once(&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__7_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_, &l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__7_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__7_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_);
v___x_926_ = l_Lean_Name_num___override(v___x_925_, v___x_924_);
return v___x_926_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__9_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; 
v___x_927_ = ((lean_object*)(l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__2));
v___x_928_ = lean_obj_once(&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_, &l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_);
v___x_929_ = l_Lean_Name_str___override(v___x_928_, v___x_927_);
return v___x_929_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__10_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; 
v___x_930_ = ((lean_object*)(l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__56));
v___x_931_ = lean_obj_once(&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__9_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_, &l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__9_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__9_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_);
v___x_932_ = l_Lean_Name_str___override(v___x_931_, v___x_930_);
return v___x_932_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__11_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; 
v___x_933_ = ((lean_object*)(l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__57));
v___x_934_ = lean_obj_once(&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__10_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_, &l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__10_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__10_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_);
v___x_935_ = l_Lean_Name_str___override(v___x_934_, v___x_933_);
return v___x_935_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__12_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; 
v___x_936_ = ((lean_object*)(l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__5));
v___x_937_ = lean_obj_once(&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__11_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_, &l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__11_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__11_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_);
v___x_938_ = l_Lean_Name_str___override(v___x_937_, v___x_936_);
return v___x_938_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__14_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; 
v___x_940_ = ((lean_object*)(l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__13_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_));
v___x_941_ = lean_obj_once(&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__12_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_, &l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__12_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__12_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_);
v___x_942_ = l_Lean_Name_str___override(v___x_941_, v___x_940_);
return v___x_942_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__16_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; 
v___x_944_ = ((lean_object*)(l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__15_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_));
v___x_945_ = lean_obj_once(&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__14_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_, &l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__14_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__14_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_);
v___x_946_ = l_Lean_Name_str___override(v___x_945_, v___x_944_);
return v___x_946_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__17_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; 
v___x_947_ = ((lean_object*)(l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__2));
v___x_948_ = lean_obj_once(&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__16_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_, &l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__16_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__16_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_);
v___x_949_ = l_Lean_Name_str___override(v___x_948_, v___x_947_);
return v___x_949_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__18_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; 
v___x_950_ = ((lean_object*)(l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__56));
v___x_951_ = lean_obj_once(&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__17_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_, &l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__17_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__17_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_);
v___x_952_ = l_Lean_Name_str___override(v___x_951_, v___x_950_);
return v___x_952_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__19_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; 
v___x_953_ = ((lean_object*)(l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__57));
v___x_954_ = lean_obj_once(&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__18_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_, &l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__18_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__18_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_);
v___x_955_ = l_Lean_Name_str___override(v___x_954_, v___x_953_);
return v___x_955_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__20_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; 
v___x_956_ = ((lean_object*)(l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__5));
v___x_957_ = lean_obj_once(&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__19_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_, &l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__19_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__19_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_);
v___x_958_ = l_Lean_Name_str___override(v___x_957_, v___x_956_);
return v___x_958_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__21_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; 
v___x_959_ = lean_unsigned_to_nat(333339820u);
v___x_960_ = lean_obj_once(&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__20_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_, &l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__20_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__20_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_);
v___x_961_ = l_Lean_Name_num___override(v___x_960_, v___x_959_);
return v___x_961_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__23_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; 
v___x_963_ = ((lean_object*)(l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__22_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_));
v___x_964_ = lean_obj_once(&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__21_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_, &l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__21_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__21_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_);
v___x_965_ = l_Lean_Name_str___override(v___x_964_, v___x_963_);
return v___x_965_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__25_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; 
v___x_967_ = ((lean_object*)(l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__24_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_));
v___x_968_ = lean_obj_once(&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__23_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_, &l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__23_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__23_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_);
v___x_969_ = l_Lean_Name_str___override(v___x_968_, v___x_967_);
return v___x_969_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__26_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; 
v___x_970_ = lean_unsigned_to_nat(2u);
v___x_971_ = lean_obj_once(&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__25_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_, &l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__25_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__25_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_);
v___x_972_ = l_Lean_Name_num___override(v___x_971_, v___x_970_);
return v___x_972_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; 
v___x_974_ = ((lean_object*)(l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__6));
v___x_975_ = ((lean_object*)(l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__0_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_));
v___x_976_ = l_Lean_Elab_registerDerivingHandler(v___x_974_, v___x_975_);
if (lean_obj_tag(v___x_976_) == 0)
{
lean_object* v___x_977_; uint8_t v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; 
lean_dec_ref_known(v___x_976_, 1);
v___x_977_ = ((lean_object*)(l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_mkReflBEqInstanceCmds___closed__59));
v___x_978_ = 0;
v___x_979_ = lean_obj_once(&l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__26_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_, &l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__26_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn___closed__26_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_);
v___x_980_ = l_Lean_registerTraceClass(v___x_977_, v___x_978_, v___x_979_);
return v___x_980_;
}
else
{
return v___x_976_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2____boxed(lean_object* v_a_981_){
_start:
{
lean_object* v_res_982_; 
v_res_982_ = l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_();
return v_res_982_;
}
}
lean_object* runtime_initialize_Lean_Elab_Deriving_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Deriving_Util(uint8_t builtin);
lean_object* runtime_initialize_Init_LawfulBEqTactics(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Deriving_ReflBEq(uint8_t builtin) {
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
res = l___private_Lean_Elab_Deriving_ReflBEq_0__Lean_Elab_Deriving_ReflBEq_initFn_00___x40_Lean_Elab_Deriving_ReflBEq_333339820____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Deriving_ReflBEq(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Deriving_Basic(uint8_t builtin);
lean_object* initialize_Lean_Elab_Deriving_Util(uint8_t builtin);
lean_object* initialize_Init_LawfulBEqTactics(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Deriving_ReflBEq(uint8_t builtin) {
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
res = runtime_initialize_Lean_Elab_Deriving_ReflBEq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Deriving_ReflBEq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Deriving_ReflBEq(builtin);
}
#ifdef __cplusplus
}
#endif

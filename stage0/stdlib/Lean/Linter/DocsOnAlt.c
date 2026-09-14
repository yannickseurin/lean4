// Lean compiler output
// Module: Lean.Linter.DocsOnAlt
// Imports: import Lean.Parser.Syntax public import Lean.Data.Options import Lean.Elab.Command import Lean.Linter.Init import Lean.Server.InfoUtils
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
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_Syntax_structEq(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_findInternalDocString_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
extern lean_object* l_Lean_Linter_linterMessageTag;
lean_object* l_Lean_Elab_Command_getScope___redArg(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
extern lean_object* l_Lean_Elab_Command_instInhabitedScope_default;
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Elab_Command_getRef___redArg(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Elab_Command_instMonadCommandElabM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_instMonadCommandElabM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_PartialContextInfo_mergeIntoOuter_x3f(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Info_updateContext_x3f(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toList___redArg(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
extern lean_object* l_Lean_Linter_instInhabitedLinterSetsState_default;
extern lean_object* l_Lean_Linter_linterSetsExt;
lean_object* l_Lean_PersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
uint8_t l_Lean_Linter_getLinterValue(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_find_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Elab_Command_addLinter(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "linter"};
static const lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "tactic"};
static const lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "docsOnAlt"};
static const lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(186, 218, 113, 226, 101, 176, 32, 79)}};
static const lean_ctor_object l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(206, 206, 61, 199, 208, 244, 88, 253)}};
static const lean_ctor_object l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(130, 179, 177, 23, 55, 162, 149, 215)}};
static const lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "enable the 'documentation on tactic alternatives' linter"};
static const lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Linter"};
static const lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__8_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__8_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__8_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(200, 24, 215, 162, 183, 90, 3, 112)}};
static const lean_ctor_object l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__8_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__8_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(53, 243, 121, 207, 53, 172, 203, 87)}};
static const lean_ctor_object l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__8_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__8_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(13, 227, 207, 47, 218, 2, 231, 228)}};
static const lean_ctor_object l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__8_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__8_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4__value_aux_3),((lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(45, 59, 71, 172, 106, 21, 26, 4)}};
static const lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__8_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__8_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_linter_tactic_docsOnAlt;
LEAN_EXPORT uint8_t l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_getLinterDocsOnAlt(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_getLinterDocsOnAlt___boxed(lean_object*);
static const lean_string_object l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_isAltAttr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_isAltAttr___closed__0 = (const lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_isAltAttr___closed__0_value;
static const lean_string_object l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_isAltAttr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Attr"};
static const lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_isAltAttr___closed__1 = (const lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_isAltAttr___closed__1_value;
static const lean_string_object l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_isAltAttr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "tactic_alt"};
static const lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_isAltAttr___closed__2 = (const lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_isAltAttr___closed__2_value;
static const lean_ctor_object l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_isAltAttr___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_isAltAttr___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_isAltAttr___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_isAltAttr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_isAltAttr___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_isAltAttr___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_isAltAttr___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_isAltAttr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_isAltAttr___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_isAltAttr___closed__2_value),LEAN_SCALAR_PTR_LITERAL(221, 239, 168, 96, 206, 229, 58, 101)}};
static const lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_isAltAttr___closed__3 = (const lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_isAltAttr___closed__3_value;
LEAN_EXPORT uint8_t l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_isAltAttr(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_isAltAttr___boxed(lean_object*);
static const lean_string_object l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "docComment"};
static const lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__0___closed__1_value;
static const lean_ctor_object l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__0___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__0___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__0___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_isAltAttr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__0___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__0___closed__2_value_aux_1),((lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__0___closed__2_value_aux_2),((lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(44, 76, 179, 33, 27, 4, 201, 125)}};
static const lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__0___closed__2_value;
LEAN_EXPORT uint8_t l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__0___boxed(lean_object*);
static const lean_string_object l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "attribute"};
static const lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_isAltAttr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(79, 30, 18, 84, 71, 173, 185, 159)}};
static const lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__1___closed__1 = (const lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__1___closed__1_value;
LEAN_EXPORT uint8_t l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__1___boxed(lean_object*);
LEAN_EXPORT uint8_t l_List_elem___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_elem___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declModifiers"};
static const lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__2___closed__0 = (const lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__2___closed__0_value;
static const lean_ctor_object l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__2___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__2___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__2___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_isAltAttr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__2___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__2___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__2___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 165, 146, 53, 36, 89, 7, 202)}};
static const lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__2___closed__1 = (const lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__2___closed__1_value;
static const lean_string_object l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "syntax"};
static const lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__2___closed__2 = (const lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__2___closed__2_value;
static const lean_ctor_object l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__2___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__2___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__2___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_isAltAttr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__2___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__2___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__2___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(39, 60, 146, 133, 142, 21, 8, 39)}};
static const lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__2___closed__3 = (const lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__2___closed__3_value;
static const lean_ctor_object l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__2___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__2___closed__4 = (const lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__2___closed__4_value;
static const lean_ctor_object l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__2___closed__1_value),((lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__2___closed__4_value)}};
static const lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__2___closed__5 = (const lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__2___closed__5_value;
LEAN_EXPORT uint8_t l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__2(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__2___boxed(lean_object*);
static lean_once_cell_t l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__1_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__1_spec__1___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__1_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7_spec__9___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7_spec__9___redArg___closed__0;
static const lean_closure_object l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7_spec__9___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Command_instMonadCommandElabM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7_spec__9___redArg___closed__1 = (const lean_object*)&l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7_spec__9___redArg___closed__1_value;
static const lean_closure_object l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7_spec__9___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Command_instMonadCommandElabM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7_spec__9___redArg___closed__2 = (const lean_object*)&l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7_spec__9___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7_spec__9___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "unexpected context-free info tree node"};
static const lean_object* l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7___redArg___closed__2 = (const lean_object*)&l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7___redArg___closed__2_value;
static const lean_string_object l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "_private.Lean.Server.InfoUtils.0.Lean.Elab.InfoTree.visitM.go"};
static const lean_object* l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7___redArg___closed__1 = (const lean_object*)&l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7___redArg___closed__1_value;
static const lean_string_object l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lean.Server.InfoUtils"};
static const lean_object* l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7___redArg___closed__0 = (const lean_object*)&l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7___redArg___closed__0_value;
static lean_once_cell_t l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7___redArg___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__3_spec__5(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4_spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4_spec__9___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4_spec__8___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4_spec__8___redArg___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4_spec__8___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4_spec__8___redArg___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4_spec__8___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4_spec__8___redArg___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4_spec__8___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4_spec__8___redArg___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4_spec__8___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4_spec__8___redArg___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4_spec__8___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4_spec__8___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4_spec__8___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4___lam__0___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "This linter can be disabled with `set_option "};
static const lean_object* l_Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2___closed__0 = (const lean_object*)&l_Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2___closed__0_value;
static lean_once_cell_t l_Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2___closed__1;
static const lean_string_object l_Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = " false`"};
static const lean_object* l_Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2___closed__2 = (const lean_object*)&l_Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2___closed__2_value;
static lean_once_cell_t l_Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2___closed__3;
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__5___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Documentation for `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__5___lam__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__5___lam__1___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__5___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__5___lam__1___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__5___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "` is ignored because it is a tactic alternative."};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__5___lam__1___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__5___lam__1___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__5___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__5___lam__1___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__5___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__5___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__5___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__5___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__5(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_isAltAttr___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__3___closed__0 = (const lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__3___closed__0_value;
static const lean_string_object l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "Documentation is ignored on a tactic alternative."};
static const lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__3___closed__1 = (const lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__3___closed__1_value;
static lean_once_cell_t l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__3___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__0 = (const lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__0_value;
static const lean_closure_object l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__1 = (const lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__1_value;
static const lean_closure_object l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__2___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__2 = (const lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__2_value;
static const lean_closure_object l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__3___boxed, .m_arity = 7, .m_num_fixed = 3, .m_objs = {((lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__2_value),((lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__0_value),((lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__1_value)} };
static const lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__3 = (const lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__3_value;
static const lean_string_object l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__4 = (const lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__4_value;
static lean_once_cell_t l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__5;
static lean_once_cell_t l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__6;
static lean_once_cell_t l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__7;
static const lean_string_object l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "DocsOnAlt"};
static const lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__8 = (const lean_object*)&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__8_value;
static lean_once_cell_t l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__9;
static lean_once_cell_t l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__10;
static lean_once_cell_t l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__11;
static lean_once_cell_t l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__12;
static lean_once_cell_t l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__13;
static lean_once_cell_t l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__14;
static lean_once_cell_t l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__15;
LEAN_EXPORT lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt;
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7_spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_initFn_00___x40_Lean_Linter_DocsOnAlt_3556210182____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_initFn_00___x40_Lean_Linter_DocsOnAlt_3556210182____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4__spec__0(lean_object* v_name_1_, lean_object* v_decl_2_, lean_object* v_ref_3_){
_start:
{
lean_object* v_defValue_5_; lean_object* v_descr_6_; lean_object* v_deprecation_x3f_7_; lean_object* v___x_8_; uint8_t v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v_defValue_5_ = lean_ctor_get(v_decl_2_, 0);
v_descr_6_ = lean_ctor_get(v_decl_2_, 1);
v_deprecation_x3f_7_ = lean_ctor_get(v_decl_2_, 2);
v___x_8_ = lean_alloc_ctor(1, 0, 1);
v___x_9_ = lean_unbox(v_defValue_5_);
lean_ctor_set_uint8(v___x_8_, 0, v___x_9_);
lean_inc(v_deprecation_x3f_7_);
lean_inc_ref(v_descr_6_);
lean_inc_n(v_name_1_, 2);
v___x_10_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_10_, 0, v_name_1_);
lean_ctor_set(v___x_10_, 1, v_ref_3_);
lean_ctor_set(v___x_10_, 2, v___x_8_);
lean_ctor_set(v___x_10_, 3, v_descr_6_);
lean_ctor_set(v___x_10_, 4, v_deprecation_x3f_7_);
v___x_11_ = lean_register_option(v_name_1_, v___x_10_);
if (lean_obj_tag(v___x_11_) == 0)
{
lean_object* v___x_13_; uint8_t v_isShared_14_; uint8_t v_isSharedCheck_19_; 
v_isSharedCheck_19_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_19_ == 0)
{
lean_object* v_unused_20_; 
v_unused_20_ = lean_ctor_get(v___x_11_, 0);
lean_dec(v_unused_20_);
v___x_13_ = v___x_11_;
v_isShared_14_ = v_isSharedCheck_19_;
goto v_resetjp_12_;
}
else
{
lean_dec(v___x_11_);
v___x_13_ = lean_box(0);
v_isShared_14_ = v_isSharedCheck_19_;
goto v_resetjp_12_;
}
v_resetjp_12_:
{
lean_object* v___x_15_; lean_object* v___x_17_; 
lean_inc(v_defValue_5_);
v___x_15_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_15_, 0, v_name_1_);
lean_ctor_set(v___x_15_, 1, v_defValue_5_);
if (v_isShared_14_ == 0)
{
lean_ctor_set(v___x_13_, 0, v___x_15_);
v___x_17_ = v___x_13_;
goto v_reusejp_16_;
}
else
{
lean_object* v_reuseFailAlloc_18_; 
v_reuseFailAlloc_18_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_18_, 0, v___x_15_);
v___x_17_ = v_reuseFailAlloc_18_;
goto v_reusejp_16_;
}
v_reusejp_16_:
{
return v___x_17_;
}
}
}
else
{
lean_object* v_a_21_; lean_object* v___x_23_; uint8_t v_isShared_24_; uint8_t v_isSharedCheck_28_; 
lean_dec(v_name_1_);
v_a_21_ = lean_ctor_get(v___x_11_, 0);
v_isSharedCheck_28_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_28_ == 0)
{
v___x_23_ = v___x_11_;
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
else
{
lean_inc(v_a_21_);
lean_dec(v___x_11_);
v___x_23_ = lean_box(0);
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
v_resetjp_22_:
{
lean_object* v___x_26_; 
if (v_isShared_24_ == 0)
{
v___x_26_ = v___x_23_;
goto v_reusejp_25_;
}
else
{
lean_object* v_reuseFailAlloc_27_; 
v_reuseFailAlloc_27_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_27_, 0, v_a_21_);
v___x_26_ = v_reuseFailAlloc_27_;
goto v_reusejp_25_;
}
v_reusejp_25_:
{
return v___x_26_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_29_, lean_object* v_decl_30_, lean_object* v_ref_31_, lean_object* v_a_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_Option_register___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4__spec__0(v_name_29_, v_decl_30_, v_ref_31_);
lean_dec_ref(v_decl_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_56_ = ((lean_object*)(l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4_));
v___x_57_ = ((lean_object*)(l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4_));
v___x_58_ = ((lean_object*)(l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__8_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4_));
v___x_59_ = l_Lean_Option_register___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4__spec__0(v___x_56_, v___x_57_, v___x_58_);
return v___x_59_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4____boxed(lean_object* v_a_60_){
_start:
{
lean_object* v_res_61_; 
v_res_61_ = l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4_();
return v_res_61_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_getLinterDocsOnAlt(lean_object* v_o_62_){
_start:
{
lean_object* v___x_63_; uint8_t v___x_64_; 
v___x_63_ = l_Lean_Linter_linter_tactic_docsOnAlt;
v___x_64_ = l_Lean_Linter_getLinterValue(v___x_63_, v_o_62_);
return v___x_64_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_getLinterDocsOnAlt___boxed(lean_object* v_o_65_){
_start:
{
uint8_t v_res_66_; lean_object* v_r_67_; 
v_res_66_ = l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_getLinterDocsOnAlt(v_o_65_);
lean_dec_ref(v_o_65_);
v_r_67_ = lean_box(v_res_66_);
return v_r_67_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_isAltAttr(lean_object* v_a_76_){
_start:
{
lean_object* v___x_77_; uint8_t v___x_78_; 
v___x_77_ = ((lean_object*)(l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_isAltAttr___closed__3));
v___x_78_ = l_Lean_Syntax_isOfKind(v_a_76_, v___x_77_);
return v___x_78_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_isAltAttr___boxed(lean_object* v_a_79_){
_start:
{
uint8_t v_res_80_; lean_object* v_r_81_; 
v_res_80_ = l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_isAltAttr(v_a_79_);
v_r_81_ = lean_box(v_res_80_);
return v_r_81_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__0(lean_object* v_x_89_){
_start:
{
lean_object* v___x_90_; lean_object* v___x_91_; uint8_t v___x_92_; 
v___x_90_ = l_Lean_Syntax_getKind(v_x_89_);
v___x_91_ = ((lean_object*)(l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__0___closed__2));
v___x_92_ = lean_name_eq(v___x_90_, v___x_91_);
lean_dec(v___x_90_);
return v___x_92_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__0___boxed(lean_object* v_x_93_){
_start:
{
uint8_t v_res_94_; lean_object* v_r_95_; 
v_res_94_ = l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__0(v_x_93_);
v_r_95_ = lean_box(v_res_94_);
return v_r_95_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__1(lean_object* v_x_102_){
_start:
{
lean_object* v___x_103_; lean_object* v___x_104_; uint8_t v___x_105_; 
v___x_103_ = l_Lean_Syntax_getKind(v_x_102_);
v___x_104_ = ((lean_object*)(l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__1___closed__1));
v___x_105_ = lean_name_eq(v___x_103_, v___x_104_);
lean_dec(v___x_103_);
return v___x_105_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__1___boxed(lean_object* v_x_106_){
_start:
{
uint8_t v_res_107_; lean_object* v_r_108_; 
v_res_107_ = l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__1(v_x_106_);
v_r_108_ = lean_box(v_res_107_);
return v_r_108_;
}
}
LEAN_EXPORT uint8_t l_List_elem___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__0(lean_object* v_a_109_, lean_object* v_x_110_){
_start:
{
if (lean_obj_tag(v_x_110_) == 0)
{
uint8_t v___x_111_; 
v___x_111_ = 0;
return v___x_111_;
}
else
{
lean_object* v_head_112_; lean_object* v_tail_113_; uint8_t v___x_114_; 
v_head_112_ = lean_ctor_get(v_x_110_, 0);
v_tail_113_ = lean_ctor_get(v_x_110_, 1);
v___x_114_ = lean_name_eq(v_a_109_, v_head_112_);
if (v___x_114_ == 0)
{
v_x_110_ = v_tail_113_;
goto _start;
}
else
{
return v___x_114_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_elem___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__0___boxed(lean_object* v_a_116_, lean_object* v_x_117_){
_start:
{
uint8_t v_res_118_; lean_object* v_r_119_; 
v_res_118_ = l_List_elem___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__0(v_a_116_, v_x_117_);
lean_dec(v_x_117_);
lean_dec(v_a_116_);
v_r_119_ = lean_box(v_res_118_);
return v_r_119_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__2(lean_object* v_x_138_){
_start:
{
lean_object* v___x_139_; lean_object* v___x_140_; uint8_t v___x_141_; 
v___x_139_ = l_Lean_Syntax_getKind(v_x_138_);
v___x_140_ = ((lean_object*)(l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__2___closed__5));
v___x_141_ = l_List_elem___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__0(v___x_139_, v___x_140_);
lean_dec(v___x_139_);
return v___x_141_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__2___boxed(lean_object* v_x_142_){
_start:
{
uint8_t v_res_143_; lean_object* v_r_144_; 
v_res_143_ = l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__2(v_x_142_);
v_r_144_ = lean_box(v_res_143_);
return v_r_144_;
}
}
static lean_object* _init_l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__1_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_145_; lean_object* v___x_146_; 
v___x_145_ = lean_box(0);
v___x_146_ = l_unsafeCast___redArg(v___x_145_);
return v___x_146_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__1_spec__1___redArg(lean_object* v_o_147_, lean_object* v___y_148_){
_start:
{
lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v_env_152_; lean_object* v___x_153_; lean_object* v_toEnvExtension_154_; lean_object* v_asyncMode_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v_merged_158_; lean_object* v___x_160_; uint8_t v_isShared_161_; uint8_t v_isSharedCheck_166_; 
v___x_150_ = l_Lean_Linter_instInhabitedLinterSetsState_default;
v___x_151_ = lean_st_ref_get(v___y_148_);
v_env_152_ = lean_ctor_get(v___x_151_, 0);
lean_inc_ref(v_env_152_);
lean_dec(v___x_151_);
v___x_153_ = l_Lean_Linter_linterSetsExt;
v_toEnvExtension_154_ = lean_ctor_get(v___x_153_, 0);
v_asyncMode_155_ = lean_ctor_get(v_toEnvExtension_154_, 2);
v___x_156_ = lean_obj_once(&l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__1_spec__1___redArg___closed__0, &l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__1_spec__1___redArg___closed__0_once, _init_l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__1_spec__1___redArg___closed__0);
v___x_157_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_150_, v___x_153_, v_env_152_, v_asyncMode_155_, v___x_156_);
v_merged_158_ = lean_ctor_get(v___x_157_, 0);
v_isSharedCheck_166_ = !lean_is_exclusive(v___x_157_);
if (v_isSharedCheck_166_ == 0)
{
lean_object* v_unused_167_; 
v_unused_167_ = lean_ctor_get(v___x_157_, 1);
lean_dec(v_unused_167_);
v___x_160_ = v___x_157_;
v_isShared_161_ = v_isSharedCheck_166_;
goto v_resetjp_159_;
}
else
{
lean_inc(v_merged_158_);
lean_dec(v___x_157_);
v___x_160_ = lean_box(0);
v_isShared_161_ = v_isSharedCheck_166_;
goto v_resetjp_159_;
}
v_resetjp_159_:
{
lean_object* v___x_163_; 
if (v_isShared_161_ == 0)
{
lean_ctor_set(v___x_160_, 1, v_merged_158_);
lean_ctor_set(v___x_160_, 0, v_o_147_);
v___x_163_ = v___x_160_;
goto v_reusejp_162_;
}
else
{
lean_object* v_reuseFailAlloc_165_; 
v_reuseFailAlloc_165_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_165_, 0, v_o_147_);
lean_ctor_set(v_reuseFailAlloc_165_, 1, v_merged_158_);
v___x_163_ = v_reuseFailAlloc_165_;
goto v_reusejp_162_;
}
v_reusejp_162_:
{
lean_object* v___x_164_; 
v___x_164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_164_, 0, v___x_163_);
return v___x_164_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__1_spec__1___redArg___boxed(lean_object* v_o_168_, lean_object* v___y_169_, lean_object* v___y_170_){
_start:
{
lean_object* v_res_171_; 
v_res_171_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__1_spec__1___redArg(v_o_168_, v___y_169_);
lean_dec(v___y_169_);
return v_res_171_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__1(lean_object* v___y_172_, lean_object* v___y_173_){
_start:
{
lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v_scopes_177_; lean_object* v___x_178_; lean_object* v_opts_179_; lean_object* v___x_180_; 
v___x_175_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_176_ = lean_st_ref_get(v___y_173_);
v_scopes_177_ = lean_ctor_get(v___x_176_, 2);
lean_inc(v_scopes_177_);
lean_dec(v___x_176_);
v___x_178_ = l_List_head_x21___redArg(v___x_175_, v_scopes_177_);
lean_dec(v_scopes_177_);
v_opts_179_ = lean_ctor_get(v___x_178_, 1);
lean_inc_ref(v_opts_179_);
lean_dec(v___x_178_);
v___x_180_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__1_spec__1___redArg(v_opts_179_, v___y_173_);
return v___x_180_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__1___boxed(lean_object* v___y_181_, lean_object* v___y_182_, lean_object* v___y_183_){
_start:
{
lean_object* v_res_184_; 
v_res_184_ = l_Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__1(v___y_181_, v___y_182_);
lean_dec(v___y_182_);
lean_dec_ref(v___y_181_);
return v_res_184_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7_spec__9___redArg___closed__0(void){
_start:
{
lean_object* v___x_185_; 
v___x_185_ = l_instMonadEIO___redArg();
return v___x_185_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7_spec__9___redArg(lean_object* v_msg_188_, lean_object* v___y_189_, lean_object* v___y_190_){
_start:
{
lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v_toApplicative_194_; lean_object* v___x_196_; uint8_t v_isShared_197_; uint8_t v_isSharedCheck_225_; 
v___x_192_ = lean_obj_once(&l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7_spec__9___redArg___closed__0, &l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7_spec__9___redArg___closed__0_once, _init_l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7_spec__9___redArg___closed__0);
v___x_193_ = l_StateRefT_x27_instMonad___redArg(v___x_192_);
v_toApplicative_194_ = lean_ctor_get(v___x_193_, 0);
v_isSharedCheck_225_ = !lean_is_exclusive(v___x_193_);
if (v_isSharedCheck_225_ == 0)
{
lean_object* v_unused_226_; 
v_unused_226_ = lean_ctor_get(v___x_193_, 1);
lean_dec(v_unused_226_);
v___x_196_ = v___x_193_;
v_isShared_197_ = v_isSharedCheck_225_;
goto v_resetjp_195_;
}
else
{
lean_inc(v_toApplicative_194_);
lean_dec(v___x_193_);
v___x_196_ = lean_box(0);
v_isShared_197_ = v_isSharedCheck_225_;
goto v_resetjp_195_;
}
v_resetjp_195_:
{
lean_object* v_toFunctor_198_; lean_object* v_toSeq_199_; lean_object* v_toSeqLeft_200_; lean_object* v_toSeqRight_201_; lean_object* v___x_203_; uint8_t v_isShared_204_; uint8_t v_isSharedCheck_223_; 
v_toFunctor_198_ = lean_ctor_get(v_toApplicative_194_, 0);
v_toSeq_199_ = lean_ctor_get(v_toApplicative_194_, 2);
v_toSeqLeft_200_ = lean_ctor_get(v_toApplicative_194_, 3);
v_toSeqRight_201_ = lean_ctor_get(v_toApplicative_194_, 4);
v_isSharedCheck_223_ = !lean_is_exclusive(v_toApplicative_194_);
if (v_isSharedCheck_223_ == 0)
{
lean_object* v_unused_224_; 
v_unused_224_ = lean_ctor_get(v_toApplicative_194_, 1);
lean_dec(v_unused_224_);
v___x_203_ = v_toApplicative_194_;
v_isShared_204_ = v_isSharedCheck_223_;
goto v_resetjp_202_;
}
else
{
lean_inc(v_toSeqRight_201_);
lean_inc(v_toSeqLeft_200_);
lean_inc(v_toSeq_199_);
lean_inc(v_toFunctor_198_);
lean_dec(v_toApplicative_194_);
v___x_203_ = lean_box(0);
v_isShared_204_ = v_isSharedCheck_223_;
goto v_resetjp_202_;
}
v_resetjp_202_:
{
lean_object* v___f_205_; lean_object* v___f_206_; lean_object* v___f_207_; lean_object* v___f_208_; lean_object* v___x_209_; lean_object* v___f_210_; lean_object* v___f_211_; lean_object* v___f_212_; lean_object* v___x_214_; 
v___f_205_ = ((lean_object*)(l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7_spec__9___redArg___closed__1));
v___f_206_ = ((lean_object*)(l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7_spec__9___redArg___closed__2));
lean_inc_ref(v_toFunctor_198_);
v___f_207_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_207_, 0, v_toFunctor_198_);
v___f_208_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_208_, 0, v_toFunctor_198_);
v___x_209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_209_, 0, v___f_207_);
lean_ctor_set(v___x_209_, 1, v___f_208_);
v___f_210_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_210_, 0, v_toSeqRight_201_);
v___f_211_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_211_, 0, v_toSeqLeft_200_);
v___f_212_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_212_, 0, v_toSeq_199_);
if (v_isShared_204_ == 0)
{
lean_ctor_set(v___x_203_, 4, v___f_210_);
lean_ctor_set(v___x_203_, 3, v___f_211_);
lean_ctor_set(v___x_203_, 2, v___f_212_);
lean_ctor_set(v___x_203_, 1, v___f_205_);
lean_ctor_set(v___x_203_, 0, v___x_209_);
v___x_214_ = v___x_203_;
goto v_reusejp_213_;
}
else
{
lean_object* v_reuseFailAlloc_222_; 
v_reuseFailAlloc_222_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_222_, 0, v___x_209_);
lean_ctor_set(v_reuseFailAlloc_222_, 1, v___f_205_);
lean_ctor_set(v_reuseFailAlloc_222_, 2, v___f_212_);
lean_ctor_set(v_reuseFailAlloc_222_, 3, v___f_211_);
lean_ctor_set(v_reuseFailAlloc_222_, 4, v___f_210_);
v___x_214_ = v_reuseFailAlloc_222_;
goto v_reusejp_213_;
}
v_reusejp_213_:
{
lean_object* v___x_216_; 
if (v_isShared_197_ == 0)
{
lean_ctor_set(v___x_196_, 1, v___f_206_);
lean_ctor_set(v___x_196_, 0, v___x_214_);
v___x_216_ = v___x_196_;
goto v_reusejp_215_;
}
else
{
lean_object* v_reuseFailAlloc_221_; 
v_reuseFailAlloc_221_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_221_, 0, v___x_214_);
lean_ctor_set(v_reuseFailAlloc_221_, 1, v___f_206_);
v___x_216_ = v_reuseFailAlloc_221_;
goto v_reusejp_215_;
}
v_reusejp_215_:
{
lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_6419__overap_219_; lean_object* v___x_220_; 
v___x_217_ = lean_box(0);
v___x_218_ = l_instInhabitedOfMonad___redArg(v___x_216_, v___x_217_);
v___x_6419__overap_219_ = lean_panic_fn_borrowed(v___x_218_, v_msg_188_);
lean_dec(v___x_218_);
lean_inc(v___y_190_);
lean_inc_ref(v___y_189_);
v___x_220_ = lean_apply_3(v___x_6419__overap_219_, v___y_189_, v___y_190_, lean_box(0));
return v___x_220_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7_spec__9___redArg___boxed(lean_object* v_msg_227_, lean_object* v___y_228_, lean_object* v___y_229_, lean_object* v___y_230_){
_start:
{
lean_object* v_res_231_; 
v_res_231_ = l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7_spec__9___redArg(v_msg_227_, v___y_228_, v___y_229_);
lean_dec(v___y_229_);
lean_dec_ref(v___y_228_);
return v_res_231_;
}
}
static lean_object* _init_l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7___redArg___closed__3(void){
_start:
{
lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; 
v___x_235_ = ((lean_object*)(l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7___redArg___closed__2));
v___x_236_ = lean_unsigned_to_nat(21u);
v___x_237_ = lean_unsigned_to_nat(65u);
v___x_238_ = ((lean_object*)(l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7___redArg___closed__1));
v___x_239_ = ((lean_object*)(l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7___redArg___closed__0));
v___x_240_ = l_mkPanicMessageWithDecl(v___x_239_, v___x_238_, v___x_237_, v___x_236_, v___x_235_);
return v___x_240_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7___redArg(lean_object* v_preNode_241_, lean_object* v_postNode_242_, lean_object* v_x_243_, lean_object* v_x_244_, lean_object* v___y_245_, lean_object* v___y_246_){
_start:
{
switch(lean_obj_tag(v_x_244_))
{
case 0:
{
lean_object* v_i_248_; lean_object* v_t_249_; lean_object* v___x_250_; 
v_i_248_ = lean_ctor_get(v_x_244_, 0);
lean_inc_ref(v_i_248_);
v_t_249_ = lean_ctor_get(v_x_244_, 1);
lean_inc_ref(v_t_249_);
lean_dec_ref_known(v_x_244_, 2);
v___x_250_ = l_Lean_Elab_PartialContextInfo_mergeIntoOuter_x3f(v_i_248_, v_x_243_);
v_x_243_ = v___x_250_;
v_x_244_ = v_t_249_;
goto _start;
}
case 1:
{
if (lean_obj_tag(v_x_243_) == 0)
{
lean_object* v___x_252_; lean_object* v___x_253_; 
lean_dec_ref_known(v_x_244_, 2);
lean_dec_ref(v_postNode_242_);
lean_dec_ref(v_preNode_241_);
v___x_252_ = lean_obj_once(&l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7___redArg___closed__3, &l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7___redArg___closed__3_once, _init_l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7___redArg___closed__3);
v___x_253_ = l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7_spec__9___redArg(v___x_252_, v___y_245_, v___y_246_);
return v___x_253_;
}
else
{
lean_object* v_i_254_; lean_object* v_children_255_; lean_object* v_val_256_; lean_object* v___x_257_; 
v_i_254_ = lean_ctor_get(v_x_244_, 0);
lean_inc_ref_n(v_i_254_, 2);
v_children_255_ = lean_ctor_get(v_x_244_, 1);
lean_inc_ref_n(v_children_255_, 2);
lean_dec_ref_known(v_x_244_, 2);
v_val_256_ = lean_ctor_get(v_x_243_, 0);
lean_inc_n(v_val_256_, 2);
lean_inc_ref(v_preNode_241_);
lean_inc(v___y_246_);
lean_inc_ref(v___y_245_);
v___x_257_ = lean_apply_6(v_preNode_241_, v_val_256_, v_i_254_, v_children_255_, v___y_245_, v___y_246_, lean_box(0));
if (lean_obj_tag(v___x_257_) == 0)
{
lean_object* v_a_258_; uint8_t v___x_259_; 
v_a_258_ = lean_ctor_get(v___x_257_, 0);
lean_inc(v_a_258_);
lean_dec_ref_known(v___x_257_, 1);
v___x_259_ = lean_unbox(v_a_258_);
lean_dec(v_a_258_);
if (v___x_259_ == 0)
{
lean_object* v___x_261_; uint8_t v_isShared_262_; uint8_t v_isSharedCheck_284_; 
lean_dec_ref(v_preNode_241_);
v_isSharedCheck_284_ = !lean_is_exclusive(v_x_243_);
if (v_isSharedCheck_284_ == 0)
{
lean_object* v_unused_285_; 
v_unused_285_ = lean_ctor_get(v_x_243_, 0);
lean_dec(v_unused_285_);
v___x_261_ = v_x_243_;
v_isShared_262_ = v_isSharedCheck_284_;
goto v_resetjp_260_;
}
else
{
lean_dec(v_x_243_);
v___x_261_ = lean_box(0);
v_isShared_262_ = v_isSharedCheck_284_;
goto v_resetjp_260_;
}
v_resetjp_260_:
{
lean_object* v___x_263_; lean_object* v___x_264_; 
v___x_263_ = lean_box(0);
lean_inc(v___y_246_);
lean_inc_ref(v___y_245_);
v___x_264_ = lean_apply_7(v_postNode_242_, v_val_256_, v_i_254_, v_children_255_, v___x_263_, v___y_245_, v___y_246_, lean_box(0));
if (lean_obj_tag(v___x_264_) == 0)
{
lean_object* v_a_265_; lean_object* v___x_267_; uint8_t v_isShared_268_; uint8_t v_isSharedCheck_275_; 
v_a_265_ = lean_ctor_get(v___x_264_, 0);
v_isSharedCheck_275_ = !lean_is_exclusive(v___x_264_);
if (v_isSharedCheck_275_ == 0)
{
v___x_267_ = v___x_264_;
v_isShared_268_ = v_isSharedCheck_275_;
goto v_resetjp_266_;
}
else
{
lean_inc(v_a_265_);
lean_dec(v___x_264_);
v___x_267_ = lean_box(0);
v_isShared_268_ = v_isSharedCheck_275_;
goto v_resetjp_266_;
}
v_resetjp_266_:
{
lean_object* v___x_270_; 
if (v_isShared_262_ == 0)
{
lean_ctor_set(v___x_261_, 0, v_a_265_);
v___x_270_ = v___x_261_;
goto v_reusejp_269_;
}
else
{
lean_object* v_reuseFailAlloc_274_; 
v_reuseFailAlloc_274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_274_, 0, v_a_265_);
v___x_270_ = v_reuseFailAlloc_274_;
goto v_reusejp_269_;
}
v_reusejp_269_:
{
lean_object* v___x_272_; 
if (v_isShared_268_ == 0)
{
lean_ctor_set(v___x_267_, 0, v___x_270_);
v___x_272_ = v___x_267_;
goto v_reusejp_271_;
}
else
{
lean_object* v_reuseFailAlloc_273_; 
v_reuseFailAlloc_273_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_273_, 0, v___x_270_);
v___x_272_ = v_reuseFailAlloc_273_;
goto v_reusejp_271_;
}
v_reusejp_271_:
{
return v___x_272_;
}
}
}
}
else
{
lean_object* v_a_276_; lean_object* v___x_278_; uint8_t v_isShared_279_; uint8_t v_isSharedCheck_283_; 
lean_del_object(v___x_261_);
v_a_276_ = lean_ctor_get(v___x_264_, 0);
v_isSharedCheck_283_ = !lean_is_exclusive(v___x_264_);
if (v_isSharedCheck_283_ == 0)
{
v___x_278_ = v___x_264_;
v_isShared_279_ = v_isSharedCheck_283_;
goto v_resetjp_277_;
}
else
{
lean_inc(v_a_276_);
lean_dec(v___x_264_);
v___x_278_ = lean_box(0);
v_isShared_279_ = v_isSharedCheck_283_;
goto v_resetjp_277_;
}
v_resetjp_277_:
{
lean_object* v___x_281_; 
if (v_isShared_279_ == 0)
{
v___x_281_ = v___x_278_;
goto v_reusejp_280_;
}
else
{
lean_object* v_reuseFailAlloc_282_; 
v_reuseFailAlloc_282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_282_, 0, v_a_276_);
v___x_281_ = v_reuseFailAlloc_282_;
goto v_reusejp_280_;
}
v_reusejp_280_:
{
return v___x_281_;
}
}
}
}
}
else
{
lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; 
v___x_286_ = l_Lean_Elab_Info_updateContext_x3f(v_x_243_, v_i_254_);
v___x_287_ = l_Lean_PersistentArray_toList___redArg(v_children_255_);
v___x_288_ = lean_box(0);
lean_inc_ref(v_postNode_242_);
v___x_289_ = l_List_mapM_loop___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7_spec__10___redArg(v_preNode_241_, v_postNode_242_, v___x_286_, v___x_287_, v___x_288_, v___y_245_, v___y_246_);
if (lean_obj_tag(v___x_289_) == 0)
{
lean_object* v_a_290_; lean_object* v___x_291_; 
v_a_290_ = lean_ctor_get(v___x_289_, 0);
lean_inc(v_a_290_);
lean_dec_ref_known(v___x_289_, 1);
lean_inc(v___y_246_);
lean_inc_ref(v___y_245_);
v___x_291_ = lean_apply_7(v_postNode_242_, v_val_256_, v_i_254_, v_children_255_, v_a_290_, v___y_245_, v___y_246_, lean_box(0));
if (lean_obj_tag(v___x_291_) == 0)
{
lean_object* v_a_292_; lean_object* v___x_294_; uint8_t v_isShared_295_; uint8_t v_isSharedCheck_300_; 
v_a_292_ = lean_ctor_get(v___x_291_, 0);
v_isSharedCheck_300_ = !lean_is_exclusive(v___x_291_);
if (v_isSharedCheck_300_ == 0)
{
v___x_294_ = v___x_291_;
v_isShared_295_ = v_isSharedCheck_300_;
goto v_resetjp_293_;
}
else
{
lean_inc(v_a_292_);
lean_dec(v___x_291_);
v___x_294_ = lean_box(0);
v_isShared_295_ = v_isSharedCheck_300_;
goto v_resetjp_293_;
}
v_resetjp_293_:
{
lean_object* v___x_296_; lean_object* v___x_298_; 
v___x_296_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_296_, 0, v_a_292_);
if (v_isShared_295_ == 0)
{
lean_ctor_set(v___x_294_, 0, v___x_296_);
v___x_298_ = v___x_294_;
goto v_reusejp_297_;
}
else
{
lean_object* v_reuseFailAlloc_299_; 
v_reuseFailAlloc_299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_299_, 0, v___x_296_);
v___x_298_ = v_reuseFailAlloc_299_;
goto v_reusejp_297_;
}
v_reusejp_297_:
{
return v___x_298_;
}
}
}
else
{
lean_object* v_a_301_; lean_object* v___x_303_; uint8_t v_isShared_304_; uint8_t v_isSharedCheck_308_; 
v_a_301_ = lean_ctor_get(v___x_291_, 0);
v_isSharedCheck_308_ = !lean_is_exclusive(v___x_291_);
if (v_isSharedCheck_308_ == 0)
{
v___x_303_ = v___x_291_;
v_isShared_304_ = v_isSharedCheck_308_;
goto v_resetjp_302_;
}
else
{
lean_inc(v_a_301_);
lean_dec(v___x_291_);
v___x_303_ = lean_box(0);
v_isShared_304_ = v_isSharedCheck_308_;
goto v_resetjp_302_;
}
v_resetjp_302_:
{
lean_object* v___x_306_; 
if (v_isShared_304_ == 0)
{
v___x_306_ = v___x_303_;
goto v_reusejp_305_;
}
else
{
lean_object* v_reuseFailAlloc_307_; 
v_reuseFailAlloc_307_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_307_, 0, v_a_301_);
v___x_306_ = v_reuseFailAlloc_307_;
goto v_reusejp_305_;
}
v_reusejp_305_:
{
return v___x_306_;
}
}
}
}
else
{
lean_object* v_a_309_; lean_object* v___x_311_; uint8_t v_isShared_312_; uint8_t v_isSharedCheck_316_; 
lean_dec(v_val_256_);
lean_dec_ref(v_children_255_);
lean_dec_ref(v_i_254_);
lean_dec_ref(v_postNode_242_);
v_a_309_ = lean_ctor_get(v___x_289_, 0);
v_isSharedCheck_316_ = !lean_is_exclusive(v___x_289_);
if (v_isSharedCheck_316_ == 0)
{
v___x_311_ = v___x_289_;
v_isShared_312_ = v_isSharedCheck_316_;
goto v_resetjp_310_;
}
else
{
lean_inc(v_a_309_);
lean_dec(v___x_289_);
v___x_311_ = lean_box(0);
v_isShared_312_ = v_isSharedCheck_316_;
goto v_resetjp_310_;
}
v_resetjp_310_:
{
lean_object* v___x_314_; 
if (v_isShared_312_ == 0)
{
v___x_314_ = v___x_311_;
goto v_reusejp_313_;
}
else
{
lean_object* v_reuseFailAlloc_315_; 
v_reuseFailAlloc_315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_315_, 0, v_a_309_);
v___x_314_ = v_reuseFailAlloc_315_;
goto v_reusejp_313_;
}
v_reusejp_313_:
{
return v___x_314_;
}
}
}
}
}
else
{
lean_object* v_a_317_; lean_object* v___x_319_; uint8_t v_isShared_320_; uint8_t v_isSharedCheck_324_; 
lean_dec(v_val_256_);
lean_dec_ref(v_children_255_);
lean_dec_ref_known(v_x_243_, 1);
lean_dec_ref(v_i_254_);
lean_dec_ref(v_postNode_242_);
lean_dec_ref(v_preNode_241_);
v_a_317_ = lean_ctor_get(v___x_257_, 0);
v_isSharedCheck_324_ = !lean_is_exclusive(v___x_257_);
if (v_isSharedCheck_324_ == 0)
{
v___x_319_ = v___x_257_;
v_isShared_320_ = v_isSharedCheck_324_;
goto v_resetjp_318_;
}
else
{
lean_inc(v_a_317_);
lean_dec(v___x_257_);
v___x_319_ = lean_box(0);
v_isShared_320_ = v_isSharedCheck_324_;
goto v_resetjp_318_;
}
v_resetjp_318_:
{
lean_object* v___x_322_; 
if (v_isShared_320_ == 0)
{
v___x_322_ = v___x_319_;
goto v_reusejp_321_;
}
else
{
lean_object* v_reuseFailAlloc_323_; 
v_reuseFailAlloc_323_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_323_, 0, v_a_317_);
v___x_322_ = v_reuseFailAlloc_323_;
goto v_reusejp_321_;
}
v_reusejp_321_:
{
return v___x_322_;
}
}
}
}
}
default: 
{
lean_object* v___x_326_; uint8_t v_isShared_327_; uint8_t v_isSharedCheck_332_; 
lean_dec(v_x_243_);
lean_dec_ref(v_postNode_242_);
lean_dec_ref(v_preNode_241_);
v_isSharedCheck_332_ = !lean_is_exclusive(v_x_244_);
if (v_isSharedCheck_332_ == 0)
{
lean_object* v_unused_333_; 
v_unused_333_ = lean_ctor_get(v_x_244_, 0);
lean_dec(v_unused_333_);
v___x_326_ = v_x_244_;
v_isShared_327_ = v_isSharedCheck_332_;
goto v_resetjp_325_;
}
else
{
lean_dec(v_x_244_);
v___x_326_ = lean_box(0);
v_isShared_327_ = v_isSharedCheck_332_;
goto v_resetjp_325_;
}
v_resetjp_325_:
{
lean_object* v___x_328_; lean_object* v___x_330_; 
v___x_328_ = lean_box(0);
if (v_isShared_327_ == 0)
{
lean_ctor_set_tag(v___x_326_, 0);
lean_ctor_set(v___x_326_, 0, v___x_328_);
v___x_330_ = v___x_326_;
goto v_reusejp_329_;
}
else
{
lean_object* v_reuseFailAlloc_331_; 
v_reuseFailAlloc_331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_331_, 0, v___x_328_);
v___x_330_ = v_reuseFailAlloc_331_;
goto v_reusejp_329_;
}
v_reusejp_329_:
{
return v___x_330_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7_spec__10___redArg(lean_object* v_preNode_334_, lean_object* v_postNode_335_, lean_object* v___x_336_, lean_object* v_x_337_, lean_object* v_x_338_, lean_object* v___y_339_, lean_object* v___y_340_){
_start:
{
if (lean_obj_tag(v_x_337_) == 0)
{
lean_object* v___x_342_; lean_object* v___x_343_; 
lean_dec(v___x_336_);
lean_dec_ref(v_postNode_335_);
lean_dec_ref(v_preNode_334_);
v___x_342_ = l_List_reverse___redArg(v_x_338_);
v___x_343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_343_, 0, v___x_342_);
return v___x_343_;
}
else
{
lean_object* v_head_344_; lean_object* v_tail_345_; lean_object* v___x_347_; uint8_t v_isShared_348_; uint8_t v_isSharedCheck_363_; 
v_head_344_ = lean_ctor_get(v_x_337_, 0);
v_tail_345_ = lean_ctor_get(v_x_337_, 1);
v_isSharedCheck_363_ = !lean_is_exclusive(v_x_337_);
if (v_isSharedCheck_363_ == 0)
{
v___x_347_ = v_x_337_;
v_isShared_348_ = v_isSharedCheck_363_;
goto v_resetjp_346_;
}
else
{
lean_inc(v_tail_345_);
lean_inc(v_head_344_);
lean_dec(v_x_337_);
v___x_347_ = lean_box(0);
v_isShared_348_ = v_isSharedCheck_363_;
goto v_resetjp_346_;
}
v_resetjp_346_:
{
lean_object* v___x_349_; 
lean_inc(v___x_336_);
lean_inc_ref(v_postNode_335_);
lean_inc_ref(v_preNode_334_);
v___x_349_ = l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7___redArg(v_preNode_334_, v_postNode_335_, v___x_336_, v_head_344_, v___y_339_, v___y_340_);
if (lean_obj_tag(v___x_349_) == 0)
{
lean_object* v_a_350_; lean_object* v___x_352_; 
v_a_350_ = lean_ctor_get(v___x_349_, 0);
lean_inc(v_a_350_);
lean_dec_ref_known(v___x_349_, 1);
if (v_isShared_348_ == 0)
{
lean_ctor_set(v___x_347_, 1, v_x_338_);
lean_ctor_set(v___x_347_, 0, v_a_350_);
v___x_352_ = v___x_347_;
goto v_reusejp_351_;
}
else
{
lean_object* v_reuseFailAlloc_354_; 
v_reuseFailAlloc_354_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_354_, 0, v_a_350_);
lean_ctor_set(v_reuseFailAlloc_354_, 1, v_x_338_);
v___x_352_ = v_reuseFailAlloc_354_;
goto v_reusejp_351_;
}
v_reusejp_351_:
{
v_x_337_ = v_tail_345_;
v_x_338_ = v___x_352_;
goto _start;
}
}
else
{
lean_object* v_a_355_; lean_object* v___x_357_; uint8_t v_isShared_358_; uint8_t v_isSharedCheck_362_; 
lean_del_object(v___x_347_);
lean_dec(v_tail_345_);
lean_dec(v_x_338_);
lean_dec(v___x_336_);
lean_dec_ref(v_postNode_335_);
lean_dec_ref(v_preNode_334_);
v_a_355_ = lean_ctor_get(v___x_349_, 0);
v_isSharedCheck_362_ = !lean_is_exclusive(v___x_349_);
if (v_isSharedCheck_362_ == 0)
{
v___x_357_ = v___x_349_;
v_isShared_358_ = v_isSharedCheck_362_;
goto v_resetjp_356_;
}
else
{
lean_inc(v_a_355_);
lean_dec(v___x_349_);
v___x_357_ = lean_box(0);
v_isShared_358_ = v_isSharedCheck_362_;
goto v_resetjp_356_;
}
v_resetjp_356_:
{
lean_object* v___x_360_; 
if (v_isShared_358_ == 0)
{
v___x_360_ = v___x_357_;
goto v_reusejp_359_;
}
else
{
lean_object* v_reuseFailAlloc_361_; 
v_reuseFailAlloc_361_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_361_, 0, v_a_355_);
v___x_360_ = v_reuseFailAlloc_361_;
goto v_reusejp_359_;
}
v_reusejp_359_:
{
return v___x_360_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7_spec__10___redArg___boxed(lean_object* v_preNode_364_, lean_object* v_postNode_365_, lean_object* v___x_366_, lean_object* v_x_367_, lean_object* v_x_368_, lean_object* v___y_369_, lean_object* v___y_370_, lean_object* v___y_371_){
_start:
{
lean_object* v_res_372_; 
v_res_372_ = l_List_mapM_loop___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7_spec__10___redArg(v_preNode_364_, v_postNode_365_, v___x_366_, v_x_367_, v_x_368_, v___y_369_, v___y_370_);
lean_dec(v___y_370_);
lean_dec_ref(v___y_369_);
return v_res_372_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7___redArg___boxed(lean_object* v_preNode_373_, lean_object* v_postNode_374_, lean_object* v_x_375_, lean_object* v_x_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_){
_start:
{
lean_object* v_res_380_; 
v_res_380_ = l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7___redArg(v_preNode_373_, v_postNode_374_, v_x_375_, v_x_376_, v___y_377_, v___y_378_);
lean_dec(v___y_378_);
lean_dec_ref(v___y_377_);
return v_res_380_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4___lam__0(lean_object* v_postNode_381_, lean_object* v_ci_382_, lean_object* v_i_383_, lean_object* v_cs_384_, lean_object* v_x_385_, lean_object* v___y_386_, lean_object* v___y_387_){
_start:
{
lean_object* v___x_389_; 
lean_inc(v___y_387_);
lean_inc_ref(v___y_386_);
v___x_389_ = lean_apply_6(v_postNode_381_, v_ci_382_, v_i_383_, v_cs_384_, v___y_386_, v___y_387_, lean_box(0));
return v___x_389_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4___lam__0___boxed(lean_object* v_postNode_390_, lean_object* v_ci_391_, lean_object* v_i_392_, lean_object* v_cs_393_, lean_object* v_x_394_, lean_object* v___y_395_, lean_object* v___y_396_, lean_object* v___y_397_){
_start:
{
lean_object* v_res_398_; 
v_res_398_ = l_Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4___lam__0(v_postNode_390_, v_ci_391_, v_i_392_, v_cs_393_, v_x_394_, v___y_395_, v___y_396_);
lean_dec(v___y_396_);
lean_dec_ref(v___y_395_);
lean_dec(v_x_394_);
return v_res_398_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4(lean_object* v_preNode_399_, lean_object* v_postNode_400_, lean_object* v_ctx_x3f_401_, lean_object* v_t_402_, lean_object* v___y_403_, lean_object* v___y_404_){
_start:
{
lean_object* v___f_406_; lean_object* v___x_407_; lean_object* v___x_408_; 
v___f_406_ = lean_alloc_closure((void*)(l_Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4___lam__0___boxed), 8, 1);
lean_closure_set(v___f_406_, 0, v_postNode_400_);
v___x_407_ = lean_box(0);
v___x_408_ = l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7___redArg(v_preNode_399_, v___f_406_, v_ctx_x3f_401_, v_t_402_, v___y_403_, v___y_404_);
if (lean_obj_tag(v___x_408_) == 0)
{
lean_object* v___x_410_; uint8_t v_isShared_411_; uint8_t v_isSharedCheck_415_; 
v_isSharedCheck_415_ = !lean_is_exclusive(v___x_408_);
if (v_isSharedCheck_415_ == 0)
{
lean_object* v_unused_416_; 
v_unused_416_ = lean_ctor_get(v___x_408_, 0);
lean_dec(v_unused_416_);
v___x_410_ = v___x_408_;
v_isShared_411_ = v_isSharedCheck_415_;
goto v_resetjp_409_;
}
else
{
lean_dec(v___x_408_);
v___x_410_ = lean_box(0);
v_isShared_411_ = v_isSharedCheck_415_;
goto v_resetjp_409_;
}
v_resetjp_409_:
{
lean_object* v___x_413_; 
if (v_isShared_411_ == 0)
{
lean_ctor_set(v___x_410_, 0, v___x_407_);
v___x_413_ = v___x_410_;
goto v_reusejp_412_;
}
else
{
lean_object* v_reuseFailAlloc_414_; 
v_reuseFailAlloc_414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_414_, 0, v___x_407_);
v___x_413_ = v_reuseFailAlloc_414_;
goto v_reusejp_412_;
}
v_reusejp_412_:
{
return v___x_413_;
}
}
}
else
{
lean_object* v_a_417_; lean_object* v___x_419_; uint8_t v_isShared_420_; uint8_t v_isSharedCheck_424_; 
v_a_417_ = lean_ctor_get(v___x_408_, 0);
v_isSharedCheck_424_ = !lean_is_exclusive(v___x_408_);
if (v_isSharedCheck_424_ == 0)
{
v___x_419_ = v___x_408_;
v_isShared_420_ = v_isSharedCheck_424_;
goto v_resetjp_418_;
}
else
{
lean_inc(v_a_417_);
lean_dec(v___x_408_);
v___x_419_ = lean_box(0);
v_isShared_420_ = v_isSharedCheck_424_;
goto v_resetjp_418_;
}
v_resetjp_418_:
{
lean_object* v___x_422_; 
if (v_isShared_420_ == 0)
{
v___x_422_ = v___x_419_;
goto v_reusejp_421_;
}
else
{
lean_object* v_reuseFailAlloc_423_; 
v_reuseFailAlloc_423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_423_, 0, v_a_417_);
v___x_422_ = v_reuseFailAlloc_423_;
goto v_reusejp_421_;
}
v_reusejp_421_:
{
return v___x_422_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4___boxed(lean_object* v_preNode_425_, lean_object* v_postNode_426_, lean_object* v_ctx_x3f_427_, lean_object* v_t_428_, lean_object* v___y_429_, lean_object* v___y_430_, lean_object* v___y_431_){
_start:
{
lean_object* v_res_432_; 
v_res_432_ = l_Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4(v_preNode_425_, v_postNode_426_, v_ctx_x3f_427_, v_t_428_, v___y_429_, v___y_430_);
lean_dec(v___y_430_);
lean_dec_ref(v___y_429_);
return v_res_432_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__3_spec__5(lean_object* v_a_433_, lean_object* v_as_434_, size_t v_i_435_, size_t v_stop_436_){
_start:
{
uint8_t v___x_437_; 
v___x_437_ = lean_usize_dec_eq(v_i_435_, v_stop_436_);
if (v___x_437_ == 0)
{
lean_object* v___x_438_; uint8_t v___x_439_; 
v___x_438_ = lean_array_uget_borrowed(v_as_434_, v_i_435_);
v___x_439_ = l_Lean_Syntax_structEq(v_a_433_, v___x_438_);
if (v___x_439_ == 0)
{
size_t v___x_440_; size_t v___x_441_; 
v___x_440_ = ((size_t)1ULL);
v___x_441_ = lean_usize_add(v_i_435_, v___x_440_);
v_i_435_ = v___x_441_;
goto _start;
}
else
{
return v___x_439_;
}
}
else
{
uint8_t v___x_443_; 
v___x_443_ = 0;
return v___x_443_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__3_spec__5___boxed(lean_object* v_a_444_, lean_object* v_as_445_, lean_object* v_i_446_, lean_object* v_stop_447_){
_start:
{
size_t v_i_boxed_448_; size_t v_stop_boxed_449_; uint8_t v_res_450_; lean_object* v_r_451_; 
v_i_boxed_448_ = lean_unbox_usize(v_i_446_);
lean_dec(v_i_446_);
v_stop_boxed_449_ = lean_unbox_usize(v_stop_447_);
lean_dec(v_stop_447_);
v_res_450_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__3_spec__5(v_a_444_, v_as_445_, v_i_boxed_448_, v_stop_boxed_449_);
lean_dec_ref(v_as_445_);
lean_dec(v_a_444_);
v_r_451_ = lean_box(v_res_450_);
return v_r_451_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__3(lean_object* v_as_452_, lean_object* v_a_453_){
_start:
{
lean_object* v___x_454_; lean_object* v___x_455_; uint8_t v___x_456_; 
v___x_454_ = lean_unsigned_to_nat(0u);
v___x_455_ = lean_array_get_size(v_as_452_);
v___x_456_ = lean_nat_dec_lt(v___x_454_, v___x_455_);
if (v___x_456_ == 0)
{
return v___x_456_;
}
else
{
if (v___x_456_ == 0)
{
return v___x_456_;
}
else
{
size_t v___x_457_; size_t v___x_458_; uint8_t v___x_459_; 
v___x_457_ = ((size_t)0ULL);
v___x_458_ = lean_usize_of_nat(v___x_455_);
v___x_459_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__3_spec__5(v_a_453_, v_as_452_, v___x_457_, v___x_458_);
return v___x_459_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__3___boxed(lean_object* v_as_460_, lean_object* v_a_461_){
_start:
{
uint8_t v_res_462_; lean_object* v_r_463_; 
v_res_462_ = l_Array_contains___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__3(v_as_460_, v_a_461_);
lean_dec(v_a_461_);
lean_dec_ref(v_as_460_);
v_r_463_ = lean_box(v_res_462_);
return v_r_463_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4_spec__9(lean_object* v_opts_464_, lean_object* v_opt_465_){
_start:
{
lean_object* v_name_466_; lean_object* v_defValue_467_; lean_object* v_map_468_; lean_object* v___x_469_; 
v_name_466_ = lean_ctor_get(v_opt_465_, 0);
v_defValue_467_ = lean_ctor_get(v_opt_465_, 1);
v_map_468_ = lean_ctor_get(v_opts_464_, 0);
v___x_469_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_468_, v_name_466_);
if (lean_obj_tag(v___x_469_) == 0)
{
uint8_t v___x_470_; 
v___x_470_ = lean_unbox(v_defValue_467_);
return v___x_470_;
}
else
{
lean_object* v_val_471_; 
v_val_471_ = lean_ctor_get(v___x_469_, 0);
lean_inc(v_val_471_);
lean_dec_ref_known(v___x_469_, 1);
if (lean_obj_tag(v_val_471_) == 1)
{
uint8_t v_v_472_; 
v_v_472_ = lean_ctor_get_uint8(v_val_471_, 0);
lean_dec_ref_known(v_val_471_, 0);
return v_v_472_;
}
else
{
uint8_t v___x_473_; 
lean_dec(v_val_471_);
v___x_473_ = lean_unbox(v_defValue_467_);
return v___x_473_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4_spec__9___boxed(lean_object* v_opts_474_, lean_object* v_opt_475_){
_start:
{
uint8_t v_res_476_; lean_object* v_r_477_; 
v_res_476_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4_spec__9(v_opts_474_, v_opt_475_);
lean_dec_ref(v_opt_475_);
lean_dec_ref(v_opts_474_);
v_r_477_ = lean_box(v_res_476_);
return v_r_477_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4_spec__8___redArg___closed__0(void){
_start:
{
lean_object* v___x_478_; 
v___x_478_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_478_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4_spec__8___redArg___closed__1(void){
_start:
{
lean_object* v___x_479_; lean_object* v___x_480_; 
v___x_479_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4_spec__8___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4_spec__8___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4_spec__8___redArg___closed__0);
v___x_480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_480_, 0, v___x_479_);
return v___x_480_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4_spec__8___redArg___closed__2(void){
_start:
{
lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; 
v___x_481_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4_spec__8___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4_spec__8___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4_spec__8___redArg___closed__1);
v___x_482_ = lean_unsigned_to_nat(0u);
v___x_483_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_483_, 0, v___x_482_);
lean_ctor_set(v___x_483_, 1, v___x_482_);
lean_ctor_set(v___x_483_, 2, v___x_482_);
lean_ctor_set(v___x_483_, 3, v___x_482_);
lean_ctor_set(v___x_483_, 4, v___x_481_);
lean_ctor_set(v___x_483_, 5, v___x_481_);
lean_ctor_set(v___x_483_, 6, v___x_481_);
lean_ctor_set(v___x_483_, 7, v___x_481_);
lean_ctor_set(v___x_483_, 8, v___x_481_);
lean_ctor_set(v___x_483_, 9, v___x_481_);
lean_ctor_set(v___x_483_, 10, v___x_481_);
return v___x_483_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4_spec__8___redArg___closed__3(void){
_start:
{
lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; 
v___x_484_ = lean_unsigned_to_nat(32u);
v___x_485_ = lean_mk_empty_array_with_capacity(v___x_484_);
v___x_486_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_486_, 0, v___x_485_);
return v___x_486_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4_spec__8___redArg___closed__4(void){
_start:
{
size_t v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; 
v___x_487_ = ((size_t)5ULL);
v___x_488_ = lean_unsigned_to_nat(0u);
v___x_489_ = lean_unsigned_to_nat(32u);
v___x_490_ = lean_mk_empty_array_with_capacity(v___x_489_);
v___x_491_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4_spec__8___redArg___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4_spec__8___redArg___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4_spec__8___redArg___closed__3);
v___x_492_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_492_, 0, v___x_491_);
lean_ctor_set(v___x_492_, 1, v___x_490_);
lean_ctor_set(v___x_492_, 2, v___x_488_);
lean_ctor_set(v___x_492_, 3, v___x_488_);
lean_ctor_set_usize(v___x_492_, 4, v___x_487_);
return v___x_492_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4_spec__8___redArg___closed__5(void){
_start:
{
lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; 
v___x_493_ = lean_box(1);
v___x_494_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4_spec__8___redArg___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4_spec__8___redArg___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4_spec__8___redArg___closed__4);
v___x_495_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4_spec__8___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4_spec__8___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4_spec__8___redArg___closed__1);
v___x_496_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_496_, 0, v___x_495_);
lean_ctor_set(v___x_496_, 1, v___x_494_);
lean_ctor_set(v___x_496_, 2, v___x_493_);
return v___x_496_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4_spec__8___redArg(lean_object* v_msgData_497_, lean_object* v___y_498_){
_start:
{
lean_object* v___x_500_; lean_object* v_env_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v_scopes_504_; lean_object* v___x_505_; lean_object* v_opts_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; 
v___x_500_ = lean_st_ref_get(v___y_498_);
v_env_501_ = lean_ctor_get(v___x_500_, 0);
lean_inc_ref(v_env_501_);
lean_dec(v___x_500_);
v___x_502_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_503_ = lean_st_ref_get(v___y_498_);
v_scopes_504_ = lean_ctor_get(v___x_503_, 2);
lean_inc(v_scopes_504_);
lean_dec(v___x_503_);
v___x_505_ = l_List_head_x21___redArg(v___x_502_, v_scopes_504_);
lean_dec(v_scopes_504_);
v_opts_506_ = lean_ctor_get(v___x_505_, 1);
lean_inc_ref(v_opts_506_);
lean_dec(v___x_505_);
v___x_507_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4_spec__8___redArg___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4_spec__8___redArg___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4_spec__8___redArg___closed__2);
v___x_508_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4_spec__8___redArg___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4_spec__8___redArg___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4_spec__8___redArg___closed__5);
v___x_509_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_509_, 0, v_env_501_);
lean_ctor_set(v___x_509_, 1, v___x_507_);
lean_ctor_set(v___x_509_, 2, v___x_508_);
lean_ctor_set(v___x_509_, 3, v_opts_506_);
v___x_510_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_510_, 0, v___x_509_);
lean_ctor_set(v___x_510_, 1, v_msgData_497_);
v___x_511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_511_, 0, v___x_510_);
return v___x_511_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4_spec__8___redArg___boxed(lean_object* v_msgData_512_, lean_object* v___y_513_, lean_object* v___y_514_){
_start:
{
lean_object* v_res_515_; 
v_res_515_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4_spec__8___redArg(v_msgData_512_, v___y_513_);
lean_dec(v___y_513_);
return v_res_515_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4___lam__0(uint8_t v_suppressElabErrors_517_, uint8_t v___y_518_, lean_object* v_x_519_){
_start:
{
if (lean_obj_tag(v_x_519_) == 1)
{
lean_object* v_pre_520_; 
v_pre_520_ = lean_ctor_get(v_x_519_, 0);
if (lean_obj_tag(v_pre_520_) == 0)
{
lean_object* v_str_521_; lean_object* v___x_522_; uint8_t v___x_523_; 
v_str_521_ = lean_ctor_get(v_x_519_, 1);
v___x_522_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4___lam__0___closed__0));
v___x_523_ = lean_string_dec_eq(v_str_521_, v___x_522_);
if (v___x_523_ == 0)
{
return v___x_523_;
}
else
{
return v_suppressElabErrors_517_;
}
}
else
{
return v___y_518_;
}
}
else
{
return v___y_518_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4___lam__0___boxed(lean_object* v_suppressElabErrors_524_, lean_object* v___y_525_, lean_object* v_x_526_){
_start:
{
uint8_t v_suppressElabErrors_boxed_527_; uint8_t v___y_8087__boxed_528_; uint8_t v_res_529_; lean_object* v_r_530_; 
v_suppressElabErrors_boxed_527_ = lean_unbox(v_suppressElabErrors_524_);
v___y_8087__boxed_528_ = lean_unbox(v___y_525_);
v_res_529_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4___lam__0(v_suppressElabErrors_boxed_527_, v___y_8087__boxed_528_, v_x_526_);
lean_dec(v_x_526_);
v_r_530_ = lean_box(v_res_529_);
return v_r_530_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4(lean_object* v_ref_532_, lean_object* v_msgData_533_, uint8_t v_severity_534_, uint8_t v_isSilent_535_, lean_object* v___y_536_, lean_object* v___y_537_){
_start:
{
uint8_t v___y_540_; lean_object* v___y_541_; uint8_t v___y_542_; lean_object* v___y_543_; lean_object* v___y_544_; lean_object* v___y_545_; lean_object* v___y_546_; lean_object* v___y_547_; uint8_t v___y_605_; lean_object* v___y_606_; uint8_t v___y_607_; uint8_t v___y_608_; lean_object* v___y_609_; uint8_t v___y_633_; uint8_t v___y_634_; uint8_t v___y_635_; lean_object* v___y_636_; lean_object* v___y_637_; uint8_t v___y_641_; uint8_t v___y_642_; uint8_t v___y_643_; uint8_t v___x_658_; uint8_t v___y_660_; uint8_t v___y_661_; uint8_t v___y_662_; uint8_t v___y_664_; uint8_t v___x_676_; 
v___x_658_ = 2;
v___x_676_ = l_Lean_instBEqMessageSeverity_beq(v_severity_534_, v___x_658_);
if (v___x_676_ == 0)
{
v___y_664_ = v___x_676_;
goto v___jp_663_;
}
else
{
uint8_t v___x_677_; 
lean_inc_ref(v_msgData_533_);
v___x_677_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_533_);
v___y_664_ = v___x_677_;
goto v___jp_663_;
}
v___jp_539_:
{
lean_object* v___x_548_; 
v___x_548_ = l_Lean_Elab_Command_getScope___redArg(v___y_547_);
if (lean_obj_tag(v___x_548_) == 0)
{
lean_object* v_a_549_; lean_object* v_currNamespace_550_; lean_object* v___x_551_; 
v_a_549_ = lean_ctor_get(v___x_548_, 0);
lean_inc(v_a_549_);
lean_dec_ref_known(v___x_548_, 1);
v_currNamespace_550_ = lean_ctor_get(v_a_549_, 2);
lean_inc(v_currNamespace_550_);
lean_dec(v_a_549_);
v___x_551_ = l_Lean_Elab_Command_getScope___redArg(v___y_547_);
if (lean_obj_tag(v___x_551_) == 0)
{
lean_object* v_a_552_; lean_object* v___x_554_; uint8_t v_isShared_555_; uint8_t v_isSharedCheck_587_; 
v_a_552_ = lean_ctor_get(v___x_551_, 0);
v_isSharedCheck_587_ = !lean_is_exclusive(v___x_551_);
if (v_isSharedCheck_587_ == 0)
{
v___x_554_ = v___x_551_;
v_isShared_555_ = v_isSharedCheck_587_;
goto v_resetjp_553_;
}
else
{
lean_inc(v_a_552_);
lean_dec(v___x_551_);
v___x_554_ = lean_box(0);
v_isShared_555_ = v_isSharedCheck_587_;
goto v_resetjp_553_;
}
v_resetjp_553_:
{
lean_object* v_openDecls_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v_env_561_; lean_object* v_messages_562_; lean_object* v_scopes_563_; lean_object* v_usedQuotCtxts_564_; lean_object* v_nextMacroScope_565_; lean_object* v_maxRecDepth_566_; lean_object* v_ngen_567_; lean_object* v_auxDeclNGen_568_; lean_object* v_infoState_569_; lean_object* v_traceState_570_; lean_object* v_snapshotTasks_571_; lean_object* v_prevLinterStates_572_; lean_object* v_codeQualityEntryTasks_573_; lean_object* v___x_575_; uint8_t v_isShared_576_; uint8_t v_isSharedCheck_586_; 
v_openDecls_556_ = lean_ctor_get(v_a_552_, 3);
lean_inc(v_openDecls_556_);
lean_dec(v_a_552_);
v___x_557_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_557_, 0, v_currNamespace_550_);
lean_ctor_set(v___x_557_, 1, v_openDecls_556_);
v___x_558_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_558_, 0, v___x_557_);
lean_ctor_set(v___x_558_, 1, v___y_544_);
lean_inc_ref(v___y_545_);
lean_inc_ref(v___y_543_);
v___x_559_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_559_, 0, v___y_543_);
lean_ctor_set(v___x_559_, 1, v___y_546_);
lean_ctor_set(v___x_559_, 2, v___y_541_);
lean_ctor_set(v___x_559_, 3, v___y_545_);
lean_ctor_set(v___x_559_, 4, v___x_558_);
lean_ctor_set_uint8(v___x_559_, sizeof(void*)*5, v___y_540_);
lean_ctor_set_uint8(v___x_559_, sizeof(void*)*5 + 1, v___y_542_);
lean_ctor_set_uint8(v___x_559_, sizeof(void*)*5 + 2, v_isSilent_535_);
v___x_560_ = lean_st_ref_take(v___y_547_);
v_env_561_ = lean_ctor_get(v___x_560_, 0);
v_messages_562_ = lean_ctor_get(v___x_560_, 1);
v_scopes_563_ = lean_ctor_get(v___x_560_, 2);
v_usedQuotCtxts_564_ = lean_ctor_get(v___x_560_, 3);
v_nextMacroScope_565_ = lean_ctor_get(v___x_560_, 4);
v_maxRecDepth_566_ = lean_ctor_get(v___x_560_, 5);
v_ngen_567_ = lean_ctor_get(v___x_560_, 6);
v_auxDeclNGen_568_ = lean_ctor_get(v___x_560_, 7);
v_infoState_569_ = lean_ctor_get(v___x_560_, 8);
v_traceState_570_ = lean_ctor_get(v___x_560_, 9);
v_snapshotTasks_571_ = lean_ctor_get(v___x_560_, 10);
v_prevLinterStates_572_ = lean_ctor_get(v___x_560_, 11);
v_codeQualityEntryTasks_573_ = lean_ctor_get(v___x_560_, 12);
v_isSharedCheck_586_ = !lean_is_exclusive(v___x_560_);
if (v_isSharedCheck_586_ == 0)
{
v___x_575_ = v___x_560_;
v_isShared_576_ = v_isSharedCheck_586_;
goto v_resetjp_574_;
}
else
{
lean_inc(v_codeQualityEntryTasks_573_);
lean_inc(v_prevLinterStates_572_);
lean_inc(v_snapshotTasks_571_);
lean_inc(v_traceState_570_);
lean_inc(v_infoState_569_);
lean_inc(v_auxDeclNGen_568_);
lean_inc(v_ngen_567_);
lean_inc(v_maxRecDepth_566_);
lean_inc(v_nextMacroScope_565_);
lean_inc(v_usedQuotCtxts_564_);
lean_inc(v_scopes_563_);
lean_inc(v_messages_562_);
lean_inc(v_env_561_);
lean_dec(v___x_560_);
v___x_575_ = lean_box(0);
v_isShared_576_ = v_isSharedCheck_586_;
goto v_resetjp_574_;
}
v_resetjp_574_:
{
lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_580_; 
v___x_577_ = lean_box(0);
v___x_578_ = l_Lean_MessageLog_add(v___x_559_, v_messages_562_);
if (v_isShared_576_ == 0)
{
lean_ctor_set(v___x_575_, 1, v___x_578_);
v___x_580_ = v___x_575_;
goto v_reusejp_579_;
}
else
{
lean_object* v_reuseFailAlloc_585_; 
v_reuseFailAlloc_585_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_585_, 0, v_env_561_);
lean_ctor_set(v_reuseFailAlloc_585_, 1, v___x_578_);
lean_ctor_set(v_reuseFailAlloc_585_, 2, v_scopes_563_);
lean_ctor_set(v_reuseFailAlloc_585_, 3, v_usedQuotCtxts_564_);
lean_ctor_set(v_reuseFailAlloc_585_, 4, v_nextMacroScope_565_);
lean_ctor_set(v_reuseFailAlloc_585_, 5, v_maxRecDepth_566_);
lean_ctor_set(v_reuseFailAlloc_585_, 6, v_ngen_567_);
lean_ctor_set(v_reuseFailAlloc_585_, 7, v_auxDeclNGen_568_);
lean_ctor_set(v_reuseFailAlloc_585_, 8, v_infoState_569_);
lean_ctor_set(v_reuseFailAlloc_585_, 9, v_traceState_570_);
lean_ctor_set(v_reuseFailAlloc_585_, 10, v_snapshotTasks_571_);
lean_ctor_set(v_reuseFailAlloc_585_, 11, v_prevLinterStates_572_);
lean_ctor_set(v_reuseFailAlloc_585_, 12, v_codeQualityEntryTasks_573_);
v___x_580_ = v_reuseFailAlloc_585_;
goto v_reusejp_579_;
}
v_reusejp_579_:
{
lean_object* v___x_581_; lean_object* v___x_583_; 
v___x_581_ = lean_st_ref_put(v___y_547_, v___x_580_);
if (v_isShared_555_ == 0)
{
lean_ctor_set(v___x_554_, 0, v___x_577_);
v___x_583_ = v___x_554_;
goto v_reusejp_582_;
}
else
{
lean_object* v_reuseFailAlloc_584_; 
v_reuseFailAlloc_584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_584_, 0, v___x_577_);
v___x_583_ = v_reuseFailAlloc_584_;
goto v_reusejp_582_;
}
v_reusejp_582_:
{
return v___x_583_;
}
}
}
}
}
else
{
lean_object* v_a_588_; lean_object* v___x_590_; uint8_t v_isShared_591_; uint8_t v_isSharedCheck_595_; 
lean_dec(v_currNamespace_550_);
lean_dec_ref(v___y_546_);
lean_dec_ref(v___y_544_);
lean_dec(v___y_541_);
v_a_588_ = lean_ctor_get(v___x_551_, 0);
v_isSharedCheck_595_ = !lean_is_exclusive(v___x_551_);
if (v_isSharedCheck_595_ == 0)
{
v___x_590_ = v___x_551_;
v_isShared_591_ = v_isSharedCheck_595_;
goto v_resetjp_589_;
}
else
{
lean_inc(v_a_588_);
lean_dec(v___x_551_);
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
}
else
{
lean_object* v_a_596_; lean_object* v___x_598_; uint8_t v_isShared_599_; uint8_t v_isSharedCheck_603_; 
lean_dec_ref(v___y_546_);
lean_dec_ref(v___y_544_);
lean_dec(v___y_541_);
v_a_596_ = lean_ctor_get(v___x_548_, 0);
v_isSharedCheck_603_ = !lean_is_exclusive(v___x_548_);
if (v_isSharedCheck_603_ == 0)
{
v___x_598_ = v___x_548_;
v_isShared_599_ = v_isSharedCheck_603_;
goto v_resetjp_597_;
}
else
{
lean_inc(v_a_596_);
lean_dec(v___x_548_);
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
}
v___jp_604_:
{
lean_object* v_fileName_610_; lean_object* v_fileMap_611_; uint8_t v_suppressElabErrors_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___f_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v_a_618_; lean_object* v___x_620_; uint8_t v_isShared_621_; uint8_t v_isSharedCheck_631_; 
v_fileName_610_ = lean_ctor_get(v___y_536_, 0);
v_fileMap_611_ = lean_ctor_get(v___y_536_, 1);
v_suppressElabErrors_612_ = lean_ctor_get_uint8(v___y_536_, sizeof(void*)*10);
v___x_613_ = lean_box(v_suppressElabErrors_612_);
v___x_614_ = lean_box(v___y_605_);
v___f_615_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4___lam__0___boxed), 3, 2);
lean_closure_set(v___f_615_, 0, v___x_613_);
lean_closure_set(v___f_615_, 1, v___x_614_);
v___x_616_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_533_);
v___x_617_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4_spec__8___redArg(v___x_616_, v___y_537_);
v_a_618_ = lean_ctor_get(v___x_617_, 0);
v_isSharedCheck_631_ = !lean_is_exclusive(v___x_617_);
if (v_isSharedCheck_631_ == 0)
{
v___x_620_ = v___x_617_;
v_isShared_621_ = v_isSharedCheck_631_;
goto v_resetjp_619_;
}
else
{
lean_inc(v_a_618_);
lean_dec(v___x_617_);
v___x_620_ = lean_box(0);
v_isShared_621_ = v_isSharedCheck_631_;
goto v_resetjp_619_;
}
v_resetjp_619_:
{
lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; 
lean_inc_ref_n(v_fileMap_611_, 2);
v___x_622_ = l_Lean_FileMap_toPosition(v_fileMap_611_, v___y_606_);
lean_dec(v___y_606_);
v___x_623_ = l_Lean_FileMap_toPosition(v_fileMap_611_, v___y_609_);
lean_dec(v___y_609_);
v___x_624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_624_, 0, v___x_623_);
v___x_625_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4___closed__0));
if (v_suppressElabErrors_612_ == 0)
{
lean_del_object(v___x_620_);
lean_dec_ref(v___f_615_);
v___y_540_ = v___y_607_;
v___y_541_ = v___x_624_;
v___y_542_ = v___y_608_;
v___y_543_ = v_fileName_610_;
v___y_544_ = v_a_618_;
v___y_545_ = v___x_625_;
v___y_546_ = v___x_622_;
v___y_547_ = v___y_537_;
goto v___jp_539_;
}
else
{
uint8_t v___x_626_; 
lean_inc(v_a_618_);
v___x_626_ = l_Lean_MessageData_hasTag(v___f_615_, v_a_618_);
if (v___x_626_ == 0)
{
lean_object* v___x_627_; lean_object* v___x_629_; 
lean_dec_ref_known(v___x_624_, 1);
lean_dec_ref(v___x_622_);
lean_dec(v_a_618_);
v___x_627_ = lean_box(0);
if (v_isShared_621_ == 0)
{
lean_ctor_set(v___x_620_, 0, v___x_627_);
v___x_629_ = v___x_620_;
goto v_reusejp_628_;
}
else
{
lean_object* v_reuseFailAlloc_630_; 
v_reuseFailAlloc_630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_630_, 0, v___x_627_);
v___x_629_ = v_reuseFailAlloc_630_;
goto v_reusejp_628_;
}
v_reusejp_628_:
{
return v___x_629_;
}
}
else
{
lean_del_object(v___x_620_);
v___y_540_ = v___y_607_;
v___y_541_ = v___x_624_;
v___y_542_ = v___y_608_;
v___y_543_ = v_fileName_610_;
v___y_544_ = v_a_618_;
v___y_545_ = v___x_625_;
v___y_546_ = v___x_622_;
v___y_547_ = v___y_537_;
goto v___jp_539_;
}
}
}
}
v___jp_632_:
{
lean_object* v___x_638_; 
v___x_638_ = l_Lean_Syntax_getTailPos_x3f(v___y_636_, v___y_634_);
lean_dec(v___y_636_);
if (lean_obj_tag(v___x_638_) == 0)
{
lean_inc(v___y_637_);
v___y_605_ = v___y_633_;
v___y_606_ = v___y_637_;
v___y_607_ = v___y_634_;
v___y_608_ = v___y_635_;
v___y_609_ = v___y_637_;
goto v___jp_604_;
}
else
{
lean_object* v_val_639_; 
v_val_639_ = lean_ctor_get(v___x_638_, 0);
lean_inc(v_val_639_);
lean_dec_ref_known(v___x_638_, 1);
v___y_605_ = v___y_633_;
v___y_606_ = v___y_637_;
v___y_607_ = v___y_634_;
v___y_608_ = v___y_635_;
v___y_609_ = v_val_639_;
goto v___jp_604_;
}
}
v___jp_640_:
{
lean_object* v___x_644_; 
v___x_644_ = l_Lean_Elab_Command_getRef___redArg(v___y_536_);
if (lean_obj_tag(v___x_644_) == 0)
{
lean_object* v_a_645_; lean_object* v_ref_646_; lean_object* v___x_647_; 
v_a_645_ = lean_ctor_get(v___x_644_, 0);
lean_inc(v_a_645_);
lean_dec_ref_known(v___x_644_, 1);
v_ref_646_ = l_Lean_replaceRef(v_ref_532_, v_a_645_);
lean_dec(v_a_645_);
v___x_647_ = l_Lean_Syntax_getPos_x3f(v_ref_646_, v___y_642_);
if (lean_obj_tag(v___x_647_) == 0)
{
lean_object* v___x_648_; 
v___x_648_ = lean_unsigned_to_nat(0u);
v___y_633_ = v___y_641_;
v___y_634_ = v___y_642_;
v___y_635_ = v___y_643_;
v___y_636_ = v_ref_646_;
v___y_637_ = v___x_648_;
goto v___jp_632_;
}
else
{
lean_object* v_val_649_; 
v_val_649_ = lean_ctor_get(v___x_647_, 0);
lean_inc(v_val_649_);
lean_dec_ref_known(v___x_647_, 1);
v___y_633_ = v___y_641_;
v___y_634_ = v___y_642_;
v___y_635_ = v___y_643_;
v___y_636_ = v_ref_646_;
v___y_637_ = v_val_649_;
goto v___jp_632_;
}
}
else
{
lean_object* v_a_650_; lean_object* v___x_652_; uint8_t v_isShared_653_; uint8_t v_isSharedCheck_657_; 
lean_dec_ref(v_msgData_533_);
v_a_650_ = lean_ctor_get(v___x_644_, 0);
v_isSharedCheck_657_ = !lean_is_exclusive(v___x_644_);
if (v_isSharedCheck_657_ == 0)
{
v___x_652_ = v___x_644_;
v_isShared_653_ = v_isSharedCheck_657_;
goto v_resetjp_651_;
}
else
{
lean_inc(v_a_650_);
lean_dec(v___x_644_);
v___x_652_ = lean_box(0);
v_isShared_653_ = v_isSharedCheck_657_;
goto v_resetjp_651_;
}
v_resetjp_651_:
{
lean_object* v___x_655_; 
if (v_isShared_653_ == 0)
{
v___x_655_ = v___x_652_;
goto v_reusejp_654_;
}
else
{
lean_object* v_reuseFailAlloc_656_; 
v_reuseFailAlloc_656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_656_, 0, v_a_650_);
v___x_655_ = v_reuseFailAlloc_656_;
goto v_reusejp_654_;
}
v_reusejp_654_:
{
return v___x_655_;
}
}
}
}
v___jp_659_:
{
if (v___y_662_ == 0)
{
v___y_641_ = v___y_660_;
v___y_642_ = v___y_661_;
v___y_643_ = v_severity_534_;
goto v___jp_640_;
}
else
{
v___y_641_ = v___y_660_;
v___y_642_ = v___y_661_;
v___y_643_ = v___x_658_;
goto v___jp_640_;
}
}
v___jp_663_:
{
if (v___y_664_ == 0)
{
lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v_scopes_667_; lean_object* v___x_668_; lean_object* v_opts_669_; uint8_t v___x_670_; uint8_t v___x_671_; 
v___x_665_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_666_ = lean_st_ref_get(v___y_537_);
v_scopes_667_ = lean_ctor_get(v___x_666_, 2);
lean_inc(v_scopes_667_);
lean_dec(v___x_666_);
v___x_668_ = l_List_head_x21___redArg(v___x_665_, v_scopes_667_);
lean_dec(v_scopes_667_);
v_opts_669_ = lean_ctor_get(v___x_668_, 1);
lean_inc_ref(v_opts_669_);
lean_dec(v___x_668_);
v___x_670_ = 1;
v___x_671_ = l_Lean_instBEqMessageSeverity_beq(v_severity_534_, v___x_670_);
if (v___x_671_ == 0)
{
lean_dec_ref(v_opts_669_);
v___y_660_ = v___y_664_;
v___y_661_ = v___y_664_;
v___y_662_ = v___x_671_;
goto v___jp_659_;
}
else
{
lean_object* v___x_672_; uint8_t v___x_673_; 
v___x_672_ = l_Lean_warningAsError;
v___x_673_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4_spec__9(v_opts_669_, v___x_672_);
lean_dec_ref(v_opts_669_);
v___y_660_ = v___y_664_;
v___y_661_ = v___y_664_;
v___y_662_ = v___x_673_;
goto v___jp_659_;
}
}
else
{
lean_object* v___x_674_; lean_object* v___x_675_; 
lean_dec_ref(v_msgData_533_);
v___x_674_ = lean_box(0);
v___x_675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_675_, 0, v___x_674_);
return v___x_675_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4___boxed(lean_object* v_ref_678_, lean_object* v_msgData_679_, lean_object* v_severity_680_, lean_object* v_isSilent_681_, lean_object* v___y_682_, lean_object* v___y_683_, lean_object* v___y_684_){
_start:
{
uint8_t v_severity_boxed_685_; uint8_t v_isSilent_boxed_686_; lean_object* v_res_687_; 
v_severity_boxed_685_ = lean_unbox(v_severity_680_);
v_isSilent_boxed_686_ = lean_unbox(v_isSilent_681_);
v_res_687_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4(v_ref_678_, v_msgData_679_, v_severity_boxed_685_, v_isSilent_boxed_686_, v___y_682_, v___y_683_);
lean_dec(v___y_683_);
lean_dec_ref(v___y_682_);
lean_dec(v_ref_678_);
return v_res_687_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3(lean_object* v_ref_688_, lean_object* v_msgData_689_, lean_object* v___y_690_, lean_object* v___y_691_){
_start:
{
uint8_t v___x_693_; uint8_t v___x_694_; lean_object* v___x_695_; 
v___x_693_ = 1;
v___x_694_ = 0;
v___x_695_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4(v_ref_688_, v_msgData_689_, v___x_693_, v___x_694_, v___y_690_, v___y_691_);
return v___x_695_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3___boxed(lean_object* v_ref_696_, lean_object* v_msgData_697_, lean_object* v___y_698_, lean_object* v___y_699_, lean_object* v___y_700_){
_start:
{
lean_object* v_res_701_; 
v_res_701_ = l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3(v_ref_696_, v_msgData_697_, v___y_698_, v___y_699_);
lean_dec(v___y_699_);
lean_dec_ref(v___y_698_);
lean_dec(v_ref_696_);
return v_res_701_;
}
}
static lean_object* _init_l_Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2___closed__1(void){
_start:
{
lean_object* v___x_703_; lean_object* v___x_704_; 
v___x_703_ = ((lean_object*)(l_Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2___closed__0));
v___x_704_ = l_Lean_stringToMessageData(v___x_703_);
return v___x_704_;
}
}
static lean_object* _init_l_Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2___closed__3(void){
_start:
{
lean_object* v___x_706_; lean_object* v___x_707_; 
v___x_706_ = ((lean_object*)(l_Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2___closed__2));
v___x_707_ = l_Lean_stringToMessageData(v___x_706_);
return v___x_707_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2(lean_object* v_linterOption_708_, lean_object* v_stx_709_, lean_object* v_msg_710_, lean_object* v___y_711_, lean_object* v___y_712_){
_start:
{
lean_object* v_name_714_; lean_object* v___x_716_; uint8_t v_isShared_717_; uint8_t v_isSharedCheck_732_; 
v_name_714_ = lean_ctor_get(v_linterOption_708_, 0);
v_isSharedCheck_732_ = !lean_is_exclusive(v_linterOption_708_);
if (v_isSharedCheck_732_ == 0)
{
lean_object* v_unused_733_; 
v_unused_733_ = lean_ctor_get(v_linterOption_708_, 1);
lean_dec(v_unused_733_);
v___x_716_ = v_linterOption_708_;
v_isShared_717_ = v_isSharedCheck_732_;
goto v_resetjp_715_;
}
else
{
lean_inc(v_name_714_);
lean_dec(v_linterOption_708_);
v___x_716_ = lean_box(0);
v_isShared_717_ = v_isSharedCheck_732_;
goto v_resetjp_715_;
}
v_resetjp_715_:
{
lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_721_; 
v___x_718_ = lean_obj_once(&l_Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2___closed__1, &l_Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2___closed__1_once, _init_l_Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2___closed__1);
lean_inc(v_name_714_);
v___x_719_ = l_Lean_MessageData_ofName(v_name_714_);
if (v_isShared_717_ == 0)
{
lean_ctor_set_tag(v___x_716_, 7);
lean_ctor_set(v___x_716_, 1, v___x_719_);
lean_ctor_set(v___x_716_, 0, v___x_718_);
v___x_721_ = v___x_716_;
goto v_reusejp_720_;
}
else
{
lean_object* v_reuseFailAlloc_731_; 
v_reuseFailAlloc_731_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_731_, 0, v___x_718_);
lean_ctor_set(v_reuseFailAlloc_731_, 1, v___x_719_);
v___x_721_ = v_reuseFailAlloc_731_;
goto v_reusejp_720_;
}
v_reusejp_720_:
{
lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v_disable_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; 
v___x_722_ = lean_obj_once(&l_Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2___closed__3, &l_Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2___closed__3_once, _init_l_Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2___closed__3);
v___x_723_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_723_, 0, v___x_721_);
lean_ctor_set(v___x_723_, 1, v___x_722_);
v_disable_724_ = l_Lean_MessageData_note(v___x_723_);
v___x_725_ = l_Lean_Linter_linterMessageTag;
v___x_726_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_726_, 0, v_msg_710_);
lean_ctor_set(v___x_726_, 1, v_disable_724_);
v___x_727_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_727_, 0, v___x_725_);
lean_ctor_set(v___x_727_, 1, v___x_726_);
v___x_728_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_728_, 0, v_name_714_);
lean_ctor_set(v___x_728_, 1, v___x_727_);
lean_inc(v_stx_709_);
v___x_729_ = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(v___x_729_, 0, v_stx_709_);
lean_ctor_set(v___x_729_, 1, v___x_728_);
v___x_730_ = l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3(v_stx_709_, v___x_729_, v___y_711_, v___y_712_);
lean_dec(v_stx_709_);
return v___x_730_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2___boxed(lean_object* v_linterOption_734_, lean_object* v_stx_735_, lean_object* v_msg_736_, lean_object* v___y_737_, lean_object* v___y_738_, lean_object* v___y_739_){
_start:
{
lean_object* v_res_740_; 
v_res_740_ = l_Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2(v_linterOption_734_, v_stx_735_, v_msg_736_, v___y_737_, v___y_738_);
lean_dec(v___y_738_);
lean_dec_ref(v___y_737_);
return v_res_740_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__5___lam__1___closed__1(void){
_start:
{
lean_object* v___x_742_; lean_object* v___x_743_; 
v___x_742_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__5___lam__1___closed__0));
v___x_743_ = l_Lean_stringToMessageData(v___x_742_);
return v___x_743_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__5___lam__1___closed__3(void){
_start:
{
lean_object* v___x_745_; lean_object* v___x_746_; 
v___x_745_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__5___lam__1___closed__2));
v___x_746_ = l_Lean_stringToMessageData(v___x_745_);
return v___x_746_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__5___lam__1(lean_object* v___x_747_, uint8_t v___x_748_, lean_object* v_ci_749_, lean_object* v_info_750_, lean_object* v_x_751_, lean_object* v___y_752_, lean_object* v___y_753_){
_start:
{
if (lean_obj_tag(v_info_750_) == 1)
{
lean_object* v_i_755_; lean_object* v___x_757_; uint8_t v_isShared_758_; uint8_t v_isSharedCheck_817_; 
v_i_755_ = lean_ctor_get(v_info_750_, 0);
v_isSharedCheck_817_ = !lean_is_exclusive(v_info_750_);
if (v_isSharedCheck_817_ == 0)
{
v___x_757_ = v_info_750_;
v_isShared_758_ = v_isSharedCheck_817_;
goto v_resetjp_756_;
}
else
{
lean_inc(v_i_755_);
lean_dec(v_info_750_);
v___x_757_ = lean_box(0);
v_isShared_758_ = v_isSharedCheck_817_;
goto v_resetjp_756_;
}
v_resetjp_756_:
{
lean_object* v_toElabInfo_759_; lean_object* v_expr_760_; lean_object* v_stx_761_; lean_object* v___x_763_; uint8_t v_isShared_764_; uint8_t v_isSharedCheck_815_; 
v_toElabInfo_759_ = lean_ctor_get(v_i_755_, 0);
lean_inc_ref(v_toElabInfo_759_);
v_expr_760_ = lean_ctor_get(v_i_755_, 3);
lean_inc_ref(v_expr_760_);
lean_dec_ref(v_i_755_);
v_stx_761_ = lean_ctor_get(v_toElabInfo_759_, 1);
v_isSharedCheck_815_ = !lean_is_exclusive(v_toElabInfo_759_);
if (v_isSharedCheck_815_ == 0)
{
lean_object* v_unused_816_; 
v_unused_816_ = lean_ctor_get(v_toElabInfo_759_, 0);
lean_dec(v_unused_816_);
v___x_763_ = v_toElabInfo_759_;
v_isShared_764_ = v_isSharedCheck_815_;
goto v_resetjp_762_;
}
else
{
lean_inc(v_stx_761_);
lean_dec(v_toElabInfo_759_);
v___x_763_ = lean_box(0);
v_isShared_764_ = v_isSharedCheck_815_;
goto v_resetjp_762_;
}
v_resetjp_762_:
{
uint8_t v___x_765_; 
v___x_765_ = l_Array_contains___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__3(v___x_747_, v_stx_761_);
if (v___x_765_ == 0)
{
lean_object* v___x_766_; lean_object* v___x_768_; 
lean_del_object(v___x_763_);
lean_dec(v_stx_761_);
lean_dec_ref(v_expr_760_);
lean_dec_ref(v_ci_749_);
v___x_766_ = lean_box(0);
if (v_isShared_758_ == 0)
{
lean_ctor_set_tag(v___x_757_, 0);
lean_ctor_set(v___x_757_, 0, v___x_766_);
v___x_768_ = v___x_757_;
goto v_reusejp_767_;
}
else
{
lean_object* v_reuseFailAlloc_769_; 
v_reuseFailAlloc_769_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_769_, 0, v___x_766_);
v___x_768_ = v_reuseFailAlloc_769_;
goto v_reusejp_767_;
}
v_reusejp_767_:
{
return v___x_768_;
}
}
else
{
if (lean_obj_tag(v_expr_760_) == 4)
{
lean_object* v_toCommandContextInfo_770_; lean_object* v_declName_771_; lean_object* v_env_772_; lean_object* v___x_773_; 
v_toCommandContextInfo_770_ = lean_ctor_get(v_ci_749_, 0);
lean_inc_ref(v_toCommandContextInfo_770_);
lean_dec_ref(v_ci_749_);
v_declName_771_ = lean_ctor_get(v_expr_760_, 0);
lean_inc_n(v_declName_771_, 2);
lean_dec_ref_known(v_expr_760_, 2);
v_env_772_ = lean_ctor_get(v_toCommandContextInfo_770_, 0);
lean_inc_ref(v_env_772_);
lean_dec_ref(v_toCommandContextInfo_770_);
v___x_773_ = l_Lean_findInternalDocString_x3f(v_env_772_, v_declName_771_, v___x_748_);
if (lean_obj_tag(v___x_773_) == 0)
{
lean_object* v_a_774_; lean_object* v___x_776_; uint8_t v_isShared_777_; uint8_t v_isSharedCheck_793_; 
lean_del_object(v___x_757_);
v_a_774_ = lean_ctor_get(v___x_773_, 0);
v_isSharedCheck_793_ = !lean_is_exclusive(v___x_773_);
if (v_isSharedCheck_793_ == 0)
{
v___x_776_ = v___x_773_;
v_isShared_777_ = v_isSharedCheck_793_;
goto v_resetjp_775_;
}
else
{
lean_inc(v_a_774_);
lean_dec(v___x_773_);
v___x_776_ = lean_box(0);
v_isShared_777_ = v_isSharedCheck_793_;
goto v_resetjp_775_;
}
v_resetjp_775_:
{
if (lean_obj_tag(v_a_774_) == 0)
{
lean_dec(v_declName_771_);
lean_del_object(v___x_763_);
lean_dec(v_stx_761_);
goto v___jp_778_;
}
else
{
lean_dec_ref_known(v_a_774_, 1);
if (v___x_765_ == 0)
{
lean_dec(v_declName_771_);
lean_del_object(v___x_763_);
lean_dec(v_stx_761_);
goto v___jp_778_;
}
else
{
lean_object* v___x_783_; uint8_t v___x_784_; lean_object* v___x_785_; lean_object* v___x_787_; 
lean_del_object(v___x_776_);
v___x_783_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__5___lam__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__5___lam__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__5___lam__1___closed__1);
v___x_784_ = 0;
v___x_785_ = l_Lean_MessageData_ofConstName(v_declName_771_, v___x_784_);
if (v_isShared_764_ == 0)
{
lean_ctor_set_tag(v___x_763_, 7);
lean_ctor_set(v___x_763_, 1, v___x_785_);
lean_ctor_set(v___x_763_, 0, v___x_783_);
v___x_787_ = v___x_763_;
goto v_reusejp_786_;
}
else
{
lean_object* v_reuseFailAlloc_792_; 
v_reuseFailAlloc_792_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_792_, 0, v___x_783_);
lean_ctor_set(v_reuseFailAlloc_792_, 1, v___x_785_);
v___x_787_ = v_reuseFailAlloc_792_;
goto v_reusejp_786_;
}
v_reusejp_786_:
{
lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; 
v___x_788_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__5___lam__1___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__5___lam__1___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__5___lam__1___closed__3);
v___x_789_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_789_, 0, v___x_787_);
lean_ctor_set(v___x_789_, 1, v___x_788_);
v___x_790_ = l_Lean_Linter_linter_tactic_docsOnAlt;
v___x_791_ = l_Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2(v___x_790_, v_stx_761_, v___x_789_, v___y_752_, v___y_753_);
return v___x_791_;
}
}
}
v___jp_778_:
{
lean_object* v___x_779_; lean_object* v___x_781_; 
v___x_779_ = lean_box(0);
if (v_isShared_777_ == 0)
{
lean_ctor_set(v___x_776_, 0, v___x_779_);
v___x_781_ = v___x_776_;
goto v_reusejp_780_;
}
else
{
lean_object* v_reuseFailAlloc_782_; 
v_reuseFailAlloc_782_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_782_, 0, v___x_779_);
v___x_781_ = v_reuseFailAlloc_782_;
goto v_reusejp_780_;
}
v_reusejp_780_:
{
return v___x_781_;
}
}
}
}
else
{
lean_object* v_a_794_; lean_object* v___x_796_; uint8_t v_isShared_797_; uint8_t v_isSharedCheck_810_; 
lean_dec(v_declName_771_);
lean_dec(v_stx_761_);
v_a_794_ = lean_ctor_get(v___x_773_, 0);
v_isSharedCheck_810_ = !lean_is_exclusive(v___x_773_);
if (v_isSharedCheck_810_ == 0)
{
v___x_796_ = v___x_773_;
v_isShared_797_ = v_isSharedCheck_810_;
goto v_resetjp_795_;
}
else
{
lean_inc(v_a_794_);
lean_dec(v___x_773_);
v___x_796_ = lean_box(0);
v_isShared_797_ = v_isSharedCheck_810_;
goto v_resetjp_795_;
}
v_resetjp_795_:
{
lean_object* v_ref_798_; lean_object* v___x_799_; lean_object* v___x_801_; 
v_ref_798_ = lean_ctor_get(v___y_752_, 7);
v___x_799_ = lean_io_error_to_string(v_a_794_);
if (v_isShared_758_ == 0)
{
lean_ctor_set_tag(v___x_757_, 3);
lean_ctor_set(v___x_757_, 0, v___x_799_);
v___x_801_ = v___x_757_;
goto v_reusejp_800_;
}
else
{
lean_object* v_reuseFailAlloc_809_; 
v_reuseFailAlloc_809_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_809_, 0, v___x_799_);
v___x_801_ = v_reuseFailAlloc_809_;
goto v_reusejp_800_;
}
v_reusejp_800_:
{
lean_object* v___x_802_; lean_object* v___x_804_; 
v___x_802_ = l_Lean_MessageData_ofFormat(v___x_801_);
lean_inc(v_ref_798_);
if (v_isShared_764_ == 0)
{
lean_ctor_set(v___x_763_, 1, v___x_802_);
lean_ctor_set(v___x_763_, 0, v_ref_798_);
v___x_804_ = v___x_763_;
goto v_reusejp_803_;
}
else
{
lean_object* v_reuseFailAlloc_808_; 
v_reuseFailAlloc_808_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_808_, 0, v_ref_798_);
lean_ctor_set(v_reuseFailAlloc_808_, 1, v___x_802_);
v___x_804_ = v_reuseFailAlloc_808_;
goto v_reusejp_803_;
}
v_reusejp_803_:
{
lean_object* v___x_806_; 
if (v_isShared_797_ == 0)
{
lean_ctor_set(v___x_796_, 0, v___x_804_);
v___x_806_ = v___x_796_;
goto v_reusejp_805_;
}
else
{
lean_object* v_reuseFailAlloc_807_; 
v_reuseFailAlloc_807_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_807_, 0, v___x_804_);
v___x_806_ = v_reuseFailAlloc_807_;
goto v_reusejp_805_;
}
v_reusejp_805_:
{
return v___x_806_;
}
}
}
}
}
}
else
{
lean_object* v___x_811_; lean_object* v___x_813_; 
lean_del_object(v___x_763_);
lean_dec(v_stx_761_);
lean_dec_ref(v_expr_760_);
lean_dec_ref(v_ci_749_);
v___x_811_ = lean_box(0);
if (v_isShared_758_ == 0)
{
lean_ctor_set_tag(v___x_757_, 0);
lean_ctor_set(v___x_757_, 0, v___x_811_);
v___x_813_ = v___x_757_;
goto v_reusejp_812_;
}
else
{
lean_object* v_reuseFailAlloc_814_; 
v_reuseFailAlloc_814_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_814_, 0, v___x_811_);
v___x_813_ = v_reuseFailAlloc_814_;
goto v_reusejp_812_;
}
v_reusejp_812_:
{
return v___x_813_;
}
}
}
}
}
}
else
{
lean_object* v___x_818_; lean_object* v___x_819_; 
lean_dec_ref(v_info_750_);
lean_dec_ref(v_ci_749_);
v___x_818_ = lean_box(0);
v___x_819_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_819_, 0, v___x_818_);
return v___x_819_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__5___lam__1___boxed(lean_object* v___x_820_, lean_object* v___x_821_, lean_object* v_ci_822_, lean_object* v_info_823_, lean_object* v_x_824_, lean_object* v___y_825_, lean_object* v___y_826_, lean_object* v___y_827_){
_start:
{
uint8_t v___x_8446__boxed_828_; lean_object* v_res_829_; 
v___x_8446__boxed_828_ = lean_unbox(v___x_821_);
v_res_829_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__5___lam__1(v___x_820_, v___x_8446__boxed_828_, v_ci_822_, v_info_823_, v_x_824_, v___y_825_, v___y_826_);
lean_dec(v___y_826_);
lean_dec_ref(v___y_825_);
lean_dec_ref(v_x_824_);
lean_dec_ref(v___x_820_);
return v_res_829_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__5___lam__0(uint8_t v___x_830_, lean_object* v_x_831_, lean_object* v_x_832_, lean_object* v_x_833_, lean_object* v___y_834_, lean_object* v___y_835_){
_start:
{
lean_object* v___x_837_; lean_object* v___x_838_; 
v___x_837_ = lean_box(v___x_830_);
v___x_838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_838_, 0, v___x_837_);
return v___x_838_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__5___lam__0___boxed(lean_object* v___x_839_, lean_object* v_x_840_, lean_object* v_x_841_, lean_object* v_x_842_, lean_object* v___y_843_, lean_object* v___y_844_, lean_object* v___y_845_){
_start:
{
uint8_t v___x_8587__boxed_846_; lean_object* v_res_847_; 
v___x_8587__boxed_846_ = lean_unbox(v___x_839_);
v_res_847_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__5___lam__0(v___x_8587__boxed_846_, v_x_840_, v_x_841_, v_x_842_, v___y_843_, v___y_844_);
lean_dec(v___y_844_);
lean_dec_ref(v___y_843_);
lean_dec_ref(v_x_842_);
lean_dec_ref(v_x_841_);
lean_dec_ref(v_x_840_);
return v_res_847_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__5(uint8_t v___x_848_, lean_object* v___x_849_, lean_object* v_as_850_, size_t v_sz_851_, size_t v_i_852_, lean_object* v_b_853_, lean_object* v___y_854_, lean_object* v___y_855_){
_start:
{
uint8_t v___x_857_; 
v___x_857_ = lean_usize_dec_lt(v_i_852_, v_sz_851_);
if (v___x_857_ == 0)
{
lean_object* v___x_858_; 
lean_dec_ref(v___x_849_);
v___x_858_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_858_, 0, v_b_853_);
return v___x_858_;
}
else
{
lean_object* v___x_859_; lean_object* v___f_860_; lean_object* v___x_861_; lean_object* v___f_862_; lean_object* v___x_863_; lean_object* v_a_864_; lean_object* v___x_865_; lean_object* v___x_866_; 
v___x_859_ = lean_box(v___x_848_);
v___f_860_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__5___lam__0___boxed), 7, 1);
lean_closure_set(v___f_860_, 0, v___x_859_);
v___x_861_ = lean_box(v___x_848_);
lean_inc_ref(v___x_849_);
v___f_862_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__5___lam__1___boxed), 8, 2);
lean_closure_set(v___f_862_, 0, v___x_849_);
lean_closure_set(v___f_862_, 1, v___x_861_);
v___x_863_ = lean_box(0);
v_a_864_ = lean_array_uget_borrowed(v_as_850_, v_i_852_);
v___x_865_ = lean_box(0);
lean_inc(v_a_864_);
v___x_866_ = l_Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4(v___f_860_, v___f_862_, v___x_865_, v_a_864_, v___y_854_, v___y_855_);
if (lean_obj_tag(v___x_866_) == 0)
{
size_t v___x_867_; size_t v___x_868_; 
lean_dec_ref_known(v___x_866_, 1);
v___x_867_ = ((size_t)1ULL);
v___x_868_ = lean_usize_add(v_i_852_, v___x_867_);
v_i_852_ = v___x_868_;
v_b_853_ = v___x_863_;
goto _start;
}
else
{
lean_dec_ref(v___x_849_);
return v___x_866_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__5___boxed(lean_object* v___x_870_, lean_object* v___x_871_, lean_object* v_as_872_, lean_object* v_sz_873_, lean_object* v_i_874_, lean_object* v_b_875_, lean_object* v___y_876_, lean_object* v___y_877_, lean_object* v___y_878_){
_start:
{
uint8_t v___x_8612__boxed_879_; size_t v_sz_boxed_880_; size_t v_i_boxed_881_; lean_object* v_res_882_; 
v___x_8612__boxed_879_ = lean_unbox(v___x_870_);
v_sz_boxed_880_ = lean_unbox_usize(v_sz_873_);
lean_dec(v_sz_873_);
v_i_boxed_881_ = lean_unbox_usize(v_i_874_);
lean_dec(v_i_874_);
v_res_882_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__5(v___x_8612__boxed_879_, v___x_871_, v_as_872_, v_sz_boxed_880_, v_i_boxed_881_, v_b_875_, v___y_876_, v___y_877_);
lean_dec(v___y_877_);
lean_dec_ref(v___y_876_);
lean_dec_ref(v_as_872_);
return v_res_882_;
}
}
static lean_object* _init_l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__3___closed__2(void){
_start:
{
lean_object* v___x_885_; lean_object* v___x_886_; 
v___x_885_ = ((lean_object*)(l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__3___closed__1));
v___x_886_ = l_Lean_stringToMessageData(v___x_885_);
return v___x_886_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__3(lean_object* v___f_887_, lean_object* v___f_888_, lean_object* v___f_889_, lean_object* v_stx_890_, lean_object* v___y_891_, lean_object* v___y_892_){
_start:
{
lean_object* v___x_894_; lean_object* v_a_895_; lean_object* v___x_897_; uint8_t v_isShared_898_; uint8_t v_isSharedCheck_955_; 
v___x_894_ = l_Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__1(v___y_891_, v___y_892_);
v_a_895_ = lean_ctor_get(v___x_894_, 0);
v_isSharedCheck_955_ = !lean_is_exclusive(v___x_894_);
if (v_isSharedCheck_955_ == 0)
{
v___x_897_ = v___x_894_;
v_isShared_898_ = v_isSharedCheck_955_;
goto v_resetjp_896_;
}
else
{
lean_inc(v_a_895_);
lean_dec(v___x_894_);
v___x_897_ = lean_box(0);
v_isShared_898_ = v_isSharedCheck_955_;
goto v_resetjp_896_;
}
v_resetjp_896_:
{
uint8_t v___x_907_; 
v___x_907_ = l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_getLinterDocsOnAlt(v_a_895_);
lean_dec(v_a_895_);
if (v___x_907_ == 0)
{
lean_object* v___x_908_; lean_object* v___x_909_; 
lean_del_object(v___x_897_);
lean_dec(v_stx_890_);
lean_dec_ref(v___f_889_);
lean_dec_ref(v___f_888_);
lean_dec_ref(v___f_887_);
v___x_908_ = lean_box(0);
v___x_909_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_909_, 0, v___x_908_);
return v___x_909_;
}
else
{
lean_object* v___x_910_; 
lean_inc(v_stx_890_);
v___x_910_ = l_Lean_Syntax_find_x3f(v_stx_890_, v___f_887_);
if (lean_obj_tag(v___x_910_) == 1)
{
lean_object* v_val_911_; lean_object* v___x_912_; lean_object* v___x_913_; 
lean_del_object(v___x_897_);
lean_dec(v_stx_890_);
lean_dec_ref(v___f_889_);
v_val_911_ = lean_ctor_get(v___x_910_, 0);
lean_inc_n(v_val_911_, 2);
lean_dec_ref_known(v___x_910_, 1);
v___x_912_ = ((lean_object*)(l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__3___closed__0));
v___x_913_ = l_Lean_Syntax_find_x3f(v_val_911_, v___x_912_);
if (lean_obj_tag(v___x_913_) == 0)
{
lean_dec(v_val_911_);
lean_dec_ref(v___f_888_);
goto v___jp_904_;
}
else
{
lean_object* v___x_915_; uint8_t v_isShared_916_; uint8_t v_isSharedCheck_926_; 
v_isSharedCheck_926_ = !lean_is_exclusive(v___x_913_);
if (v_isSharedCheck_926_ == 0)
{
lean_object* v_unused_927_; 
v_unused_927_ = lean_ctor_get(v___x_913_, 0);
lean_dec(v_unused_927_);
v___x_915_ = v___x_913_;
v_isShared_916_ = v_isSharedCheck_926_;
goto v_resetjp_914_;
}
else
{
lean_dec(v___x_913_);
v___x_915_ = lean_box(0);
v_isShared_916_ = v_isSharedCheck_926_;
goto v_resetjp_914_;
}
v_resetjp_914_:
{
if (v___x_907_ == 0)
{
lean_del_object(v___x_915_);
lean_dec(v_val_911_);
lean_dec_ref(v___f_888_);
goto v___jp_904_;
}
else
{
lean_object* v___x_917_; 
v___x_917_ = l_Lean_Syntax_find_x3f(v_val_911_, v___f_888_);
if (lean_obj_tag(v___x_917_) == 1)
{
lean_object* v_val_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; 
lean_del_object(v___x_915_);
v_val_918_ = lean_ctor_get(v___x_917_, 0);
lean_inc(v_val_918_);
lean_dec_ref_known(v___x_917_, 1);
v___x_919_ = lean_obj_once(&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__3___closed__2, &l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__3___closed__2_once, _init_l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__3___closed__2);
v___x_920_ = l_Lean_Linter_linter_tactic_docsOnAlt;
v___x_921_ = l_Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2(v___x_920_, v_val_918_, v___x_919_, v___y_891_, v___y_892_);
return v___x_921_;
}
else
{
lean_object* v___x_922_; lean_object* v___x_924_; 
lean_dec(v___x_917_);
v___x_922_ = lean_box(0);
if (v_isShared_916_ == 0)
{
lean_ctor_set_tag(v___x_915_, 0);
lean_ctor_set(v___x_915_, 0, v___x_922_);
v___x_924_ = v___x_915_;
goto v_reusejp_923_;
}
else
{
lean_object* v_reuseFailAlloc_925_; 
v_reuseFailAlloc_925_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_925_, 0, v___x_922_);
v___x_924_ = v_reuseFailAlloc_925_;
goto v_reusejp_923_;
}
v_reusejp_923_:
{
return v___x_924_;
}
}
}
}
}
}
else
{
lean_object* v___x_928_; 
lean_dec(v___x_910_);
lean_dec_ref(v___f_888_);
v___x_928_ = l_Lean_Syntax_find_x3f(v_stx_890_, v___f_889_);
if (lean_obj_tag(v___x_928_) == 1)
{
lean_object* v_val_929_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; 
v_val_929_ = lean_ctor_get(v___x_928_, 0);
lean_inc(v_val_929_);
lean_dec_ref_known(v___x_928_, 1);
v___x_930_ = lean_unsigned_to_nat(2u);
v___x_931_ = l_Lean_Syntax_getArg(v_val_929_, v___x_930_);
v___x_932_ = ((lean_object*)(l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__3___closed__0));
v___x_933_ = l_Lean_Syntax_find_x3f(v___x_931_, v___x_932_);
if (lean_obj_tag(v___x_933_) == 0)
{
lean_dec(v_val_929_);
goto v___jp_899_;
}
else
{
lean_dec_ref_known(v___x_933_, 1);
if (v___x_907_ == 0)
{
lean_dec(v_val_929_);
goto v___jp_899_;
}
else
{
lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v_infoState_938_; lean_object* v_trees_939_; lean_object* v___x_940_; lean_object* v___x_941_; size_t v_sz_942_; size_t v___x_943_; lean_object* v___x_944_; 
lean_del_object(v___x_897_);
v___x_934_ = lean_unsigned_to_nat(4u);
v___x_935_ = l_Lean_Syntax_getArg(v_val_929_, v___x_934_);
lean_dec(v_val_929_);
v___x_936_ = l_Lean_Syntax_getArgs(v___x_935_);
lean_dec(v___x_935_);
v___x_937_ = lean_st_ref_get(v___y_892_);
v_infoState_938_ = lean_ctor_get(v___x_937_, 8);
lean_inc_ref(v_infoState_938_);
lean_dec(v___x_937_);
v_trees_939_ = lean_ctor_get(v_infoState_938_, 2);
lean_inc_ref(v_trees_939_);
lean_dec_ref(v_infoState_938_);
v___x_940_ = l_Lean_PersistentArray_toArray___redArg(v_trees_939_);
lean_dec_ref(v_trees_939_);
v___x_941_ = lean_box(0);
v_sz_942_ = lean_array_size(v___x_940_);
v___x_943_ = ((size_t)0ULL);
v___x_944_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__5(v___x_907_, v___x_936_, v___x_940_, v_sz_942_, v___x_943_, v___x_941_, v___y_891_, v___y_892_);
lean_dec_ref(v___x_940_);
if (lean_obj_tag(v___x_944_) == 0)
{
lean_object* v___x_946_; uint8_t v_isShared_947_; uint8_t v_isSharedCheck_951_; 
v_isSharedCheck_951_ = !lean_is_exclusive(v___x_944_);
if (v_isSharedCheck_951_ == 0)
{
lean_object* v_unused_952_; 
v_unused_952_ = lean_ctor_get(v___x_944_, 0);
lean_dec(v_unused_952_);
v___x_946_ = v___x_944_;
v_isShared_947_ = v_isSharedCheck_951_;
goto v_resetjp_945_;
}
else
{
lean_dec(v___x_944_);
v___x_946_ = lean_box(0);
v_isShared_947_ = v_isSharedCheck_951_;
goto v_resetjp_945_;
}
v_resetjp_945_:
{
lean_object* v___x_949_; 
if (v_isShared_947_ == 0)
{
lean_ctor_set(v___x_946_, 0, v___x_941_);
v___x_949_ = v___x_946_;
goto v_reusejp_948_;
}
else
{
lean_object* v_reuseFailAlloc_950_; 
v_reuseFailAlloc_950_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_950_, 0, v___x_941_);
v___x_949_ = v_reuseFailAlloc_950_;
goto v_reusejp_948_;
}
v_reusejp_948_:
{
return v___x_949_;
}
}
}
else
{
return v___x_944_;
}
}
}
}
else
{
lean_object* v___x_953_; lean_object* v___x_954_; 
lean_dec(v___x_928_);
lean_del_object(v___x_897_);
v___x_953_ = lean_box(0);
v___x_954_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_954_, 0, v___x_953_);
return v___x_954_;
}
}
}
v___jp_899_:
{
lean_object* v___x_900_; lean_object* v___x_902_; 
v___x_900_ = lean_box(0);
if (v_isShared_898_ == 0)
{
lean_ctor_set(v___x_897_, 0, v___x_900_);
v___x_902_ = v___x_897_;
goto v_reusejp_901_;
}
else
{
lean_object* v_reuseFailAlloc_903_; 
v_reuseFailAlloc_903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_903_, 0, v___x_900_);
v___x_902_ = v_reuseFailAlloc_903_;
goto v_reusejp_901_;
}
v_reusejp_901_:
{
return v___x_902_;
}
}
v___jp_904_:
{
lean_object* v___x_905_; lean_object* v___x_906_; 
v___x_905_ = lean_box(0);
v___x_906_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_906_, 0, v___x_905_);
return v___x_906_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__3___boxed(lean_object* v___f_956_, lean_object* v___f_957_, lean_object* v___f_958_, lean_object* v_stx_959_, lean_object* v___y_960_, lean_object* v___y_961_, lean_object* v___y_962_){
_start:
{
lean_object* v_res_963_; 
v_res_963_ = l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___lam__3(v___f_956_, v___f_957_, v___f_958_, v_stx_959_, v___y_960_, v___y_961_);
lean_dec(v___y_961_);
lean_dec_ref(v___y_960_);
return v_res_963_;
}
}
static lean_object* _init_l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__5(void){
_start:
{
lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; 
v___x_972_ = ((lean_object*)(l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__4));
v___x_973_ = lean_obj_once(&l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__1_spec__1___redArg___closed__0, &l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__1_spec__1___redArg___closed__0_once, _init_l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__1_spec__1___redArg___closed__0);
v___x_974_ = l_Lean_Name_str___override(v___x_973_, v___x_972_);
return v___x_974_;
}
}
static lean_object* _init_l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__6(void){
_start:
{
lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; 
v___x_975_ = ((lean_object*)(l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4_));
v___x_976_ = lean_obj_once(&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__5, &l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__5_once, _init_l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__5);
v___x_977_ = l_Lean_Name_str___override(v___x_976_, v___x_975_);
return v___x_977_;
}
}
static lean_object* _init_l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__7(void){
_start:
{
lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; 
v___x_978_ = ((lean_object*)(l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4_));
v___x_979_ = lean_obj_once(&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__6, &l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__6_once, _init_l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__6);
v___x_980_ = l_Lean_Name_str___override(v___x_979_, v___x_978_);
return v___x_980_;
}
}
static lean_object* _init_l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__9(void){
_start:
{
lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; 
v___x_982_ = ((lean_object*)(l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__8));
v___x_983_ = lean_obj_once(&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__7, &l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__7_once, _init_l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__7);
v___x_984_ = l_Lean_Name_str___override(v___x_983_, v___x_982_);
return v___x_984_;
}
}
static lean_object* _init_l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__10(void){
_start:
{
lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; 
v___x_985_ = lean_unsigned_to_nat(0u);
v___x_986_ = lean_obj_once(&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__9, &l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__9_once, _init_l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__9);
v___x_987_ = l_Lean_Name_num___override(v___x_986_, v___x_985_);
return v___x_987_;
}
}
static lean_object* _init_l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__11(void){
_start:
{
lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; 
v___x_988_ = ((lean_object*)(l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4_));
v___x_989_ = lean_obj_once(&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__10, &l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__10_once, _init_l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__10);
v___x_990_ = l_Lean_Name_str___override(v___x_989_, v___x_988_);
return v___x_990_;
}
}
static lean_object* _init_l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__12(void){
_start:
{
lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; 
v___x_991_ = ((lean_object*)(l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4_));
v___x_992_ = lean_obj_once(&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__11, &l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__11_once, _init_l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__11);
v___x_993_ = l_Lean_Name_str___override(v___x_992_, v___x_991_);
return v___x_993_;
}
}
static lean_object* _init_l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__13(void){
_start:
{
lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; 
v___x_994_ = ((lean_object*)(l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__8));
v___x_995_ = lean_obj_once(&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__12, &l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__12_once, _init_l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__12);
v___x_996_ = l_Lean_Name_str___override(v___x_995_, v___x_994_);
return v___x_996_;
}
}
static lean_object* _init_l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__14(void){
_start:
{
lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; 
v___x_997_ = ((lean_object*)(l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4_));
v___x_998_ = lean_obj_once(&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__13, &l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__13_once, _init_l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__13);
v___x_999_ = l_Lean_Name_str___override(v___x_998_, v___x_997_);
return v___x_999_;
}
}
static lean_object* _init_l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__15(void){
_start:
{
lean_object* v___x_1000_; lean_object* v___f_1001_; lean_object* v___x_1002_; 
v___x_1000_ = lean_obj_once(&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__14, &l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__14_once, _init_l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__14);
v___f_1001_ = ((lean_object*)(l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__3));
v___x_1002_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1002_, 0, v___f_1001_);
lean_ctor_set(v___x_1002_, 1, v___x_1000_);
return v___x_1002_;
}
}
static lean_object* _init_l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt(void){
_start:
{
lean_object* v___x_1003_; 
v___x_1003_ = lean_obj_once(&l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__15, &l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__15_once, _init_l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt___closed__15);
return v___x_1003_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__1_spec__1(lean_object* v_o_1004_, lean_object* v___y_1005_, lean_object* v___y_1006_){
_start:
{
lean_object* v___x_1008_; 
v___x_1008_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__1_spec__1___redArg(v_o_1004_, v___y_1006_);
return v___x_1008_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__1_spec__1___boxed(lean_object* v_o_1009_, lean_object* v___y_1010_, lean_object* v___y_1011_, lean_object* v___y_1012_){
_start:
{
lean_object* v_res_1013_; 
v_res_1013_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__1_spec__1(v_o_1009_, v___y_1010_, v___y_1011_);
lean_dec(v___y_1011_);
lean_dec_ref(v___y_1010_);
return v_res_1013_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7_spec__9(lean_object* v_00_u03b1_1014_, lean_object* v_msg_1015_, lean_object* v___y_1016_, lean_object* v___y_1017_){
_start:
{
lean_object* v___x_1019_; 
v___x_1019_ = l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7_spec__9___redArg(v_msg_1015_, v___y_1016_, v___y_1017_);
return v___x_1019_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7_spec__9___boxed(lean_object* v_00_u03b1_1020_, lean_object* v_msg_1021_, lean_object* v___y_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_){
_start:
{
lean_object* v_res_1025_; 
v_res_1025_ = l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7_spec__9(v_00_u03b1_1020_, v_msg_1021_, v___y_1022_, v___y_1023_);
lean_dec(v___y_1023_);
lean_dec_ref(v___y_1022_);
return v_res_1025_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7(lean_object* v_00_u03b1_1026_, lean_object* v_preNode_1027_, lean_object* v_postNode_1028_, lean_object* v_x_1029_, lean_object* v_x_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_){
_start:
{
lean_object* v___x_1034_; 
v___x_1034_ = l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7___redArg(v_preNode_1027_, v_postNode_1028_, v_x_1029_, v_x_1030_, v___y_1031_, v___y_1032_);
return v___x_1034_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7___boxed(lean_object* v_00_u03b1_1035_, lean_object* v_preNode_1036_, lean_object* v_postNode_1037_, lean_object* v_x_1038_, lean_object* v_x_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_){
_start:
{
lean_object* v_res_1043_; 
v_res_1043_ = l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7(v_00_u03b1_1035_, v_preNode_1036_, v_postNode_1037_, v_x_1038_, v_x_1039_, v___y_1040_, v___y_1041_);
lean_dec(v___y_1041_);
lean_dec_ref(v___y_1040_);
return v_res_1043_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4_spec__8(lean_object* v_msgData_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_){
_start:
{
lean_object* v___x_1048_; 
v___x_1048_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4_spec__8___redArg(v_msgData_1044_, v___y_1046_);
return v___x_1048_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4_spec__8___boxed(lean_object* v_msgData_1049_, lean_object* v___y_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_){
_start:
{
lean_object* v_res_1053_; 
v_res_1053_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__2_spec__3_spec__4_spec__8(v_msgData_1049_, v___y_1050_, v___y_1051_);
lean_dec(v___y_1051_);
lean_dec_ref(v___y_1050_);
return v_res_1053_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7_spec__10(lean_object* v_00_u03b1_1054_, lean_object* v_preNode_1055_, lean_object* v_postNode_1056_, lean_object* v___x_1057_, lean_object* v_x_1058_, lean_object* v_x_1059_, lean_object* v___y_1060_, lean_object* v___y_1061_){
_start:
{
lean_object* v___x_1063_; 
v___x_1063_ = l_List_mapM_loop___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7_spec__10___redArg(v_preNode_1055_, v_postNode_1056_, v___x_1057_, v_x_1058_, v_x_1059_, v___y_1060_, v___y_1061_);
return v___x_1063_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7_spec__10___boxed(lean_object* v_00_u03b1_1064_, lean_object* v_preNode_1065_, lean_object* v_postNode_1066_, lean_object* v___x_1067_, lean_object* v_x_1068_, lean_object* v_x_1069_, lean_object* v___y_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_){
_start:
{
lean_object* v_res_1073_; 
v_res_1073_ = l_List_mapM_loop___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt_spec__4_spec__7_spec__10(v_00_u03b1_1064_, v_preNode_1065_, v_postNode_1066_, v___x_1067_, v_x_1068_, v_x_1069_, v___y_1070_, v___y_1071_);
lean_dec(v___y_1071_);
lean_dec_ref(v___y_1070_);
return v_res_1073_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_initFn_00___x40_Lean_Linter_DocsOnAlt_3556210182____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1075_; lean_object* v___x_1076_; 
v___x_1075_ = l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt;
v___x_1076_ = l_Lean_Elab_Command_addLinter(v___x_1075_);
return v___x_1076_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_initFn_00___x40_Lean_Linter_DocsOnAlt_3556210182____hygCtx___hyg_2____boxed(lean_object* v_a_1077_){
_start:
{
lean_object* v_res_1078_; 
v_res_1078_ = l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_initFn_00___x40_Lean_Linter_DocsOnAlt_3556210182____hygCtx___hyg_2_();
return v_res_1078_;
}
}
lean_object* runtime_initialize_Lean_Parser_Syntax(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_Options(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Command(uint8_t builtin);
lean_object* runtime_initialize_Lean_Linter_Init(uint8_t builtin);
lean_object* runtime_initialize_Lean_Server_InfoUtils(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Linter_DocsOnAlt(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Parser_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Options(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Linter_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_InfoUtils(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_initFn_00___x40_Lean_Linter_DocsOnAlt_861232146____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Linter_linter_tactic_docsOnAlt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Linter_linter_tactic_docsOnAlt);
lean_dec_ref(res);
l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt = _init_l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt();
lean_mark_persistent(l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_docsOnAlt);
res = l___private_Lean_Linter_DocsOnAlt_0__Lean_Linter_DocsOnAlt_initFn_00___x40_Lean_Linter_DocsOnAlt_3556210182____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Linter_DocsOnAlt(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Parser_Syntax(uint8_t builtin);
lean_object* initialize_Lean_Data_Options(uint8_t builtin);
lean_object* initialize_Lean_Elab_Command(uint8_t builtin);
lean_object* initialize_Lean_Linter_Init(uint8_t builtin);
lean_object* initialize_Lean_Server_InfoUtils(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Linter_DocsOnAlt(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Parser_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Options(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Linter_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Server_InfoUtils(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Linter_DocsOnAlt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Linter_DocsOnAlt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Linter_DocsOnAlt(builtin);
}
#ifdef __cplusplus
}
#endif

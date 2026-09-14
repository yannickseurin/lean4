// Lean compiler output
// Module: Lean.DocString.Markdown
// Imports: public import Lean.DocString.Types public import Lean.DocString.Extension public import Lean.CoreM public import Init.Data.String.TakeDrop public import Init.Data.String.Search public import Init.Data.String.Length import Init.Data.ToString.Macro import Init.While
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
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_String_Slice_posLE(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* l_Lean_Doc_Inline_empty___redArg();
lean_object* lean_array_mk(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_String_Slice_subslice_x21(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Dynamic_0__Dynamic_typeNameImpl(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
uint8_t lean_has_compile_error(lean_object*, lean_object*);
lean_object* l_Lean_Environment_evalConst___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_stringToMessageData(lean_object*);
extern lean_object* l_Lean_Elab_abortCommandExceptionId;
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___redArg(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_get_num_heartbeats();
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
lean_object* lean_st_ref_swap(lean_object*, lean_object*);
lean_object* l_ReaderT_bind___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_findInternalDocString_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
extern lean_object* l_Lean_instInhabitedFileMap_default;
lean_object* l_Lean_Core_getMaxHeartbeats(lean_object*);
extern lean_object* l_Lean_firstFrontendMacroScope;
lean_object* l_Lean_Name_mkStr1(lean_object*);
extern lean_object* l_Lean_NameSet_empty;
extern lean_object* l_Lean_inheritedTraceOptions;
extern lean_object* l_Lean_diagnostics;
extern lean_object* l_Lean_maxRecDepth;
lean_object* l_Lean_MessageData_toString(lean_object*);
lean_object* l_Lean_InternalExceptionId_getName(lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
lean_object* l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_MarkdownM_addFootnote___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_MarkdownM_addFootnote___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_MarkdownM_addFootnote(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_MarkdownM_addFootnote___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Doc_MarkdownM_instInhabitedInlineCtx_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Doc_MarkdownM_instInhabitedInlineCtx_default___closed__0 = (const lean_object*)&l_Lean_Doc_MarkdownM_instInhabitedInlineCtx_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_MarkdownM_instInhabitedInlineCtx_default = (const lean_object*)&l_Lean_Doc_MarkdownM_instInhabitedInlineCtx_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_MarkdownM_instInhabitedInlineCtx = (const lean_object*)&l_Lean_Doc_MarkdownM_instInhabitedInlineCtx_default___closed__0_value;
static const lean_string_object l_List_mapTR_loop___at___00Lean_Doc_MarkdownM_run_x27_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[^"};
static const lean_object* l_List_mapTR_loop___at___00Lean_Doc_MarkdownM_run_x27_spec__0___closed__0 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Doc_MarkdownM_run_x27_spec__0___closed__0_value;
static const lean_string_object l_List_mapTR_loop___at___00Lean_Doc_MarkdownM_run_x27_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "]:"};
static const lean_object* l_List_mapTR_loop___at___00Lean_Doc_MarkdownM_run_x27_spec__0___closed__1 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Doc_MarkdownM_run_x27_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Doc_MarkdownM_run_x27_spec__0(lean_object*, lean_object*);
static const lean_array_object l_Lean_Doc_MarkdownM_run_x27___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Doc_MarkdownM_run_x27___closed__0 = (const lean_object*)&l_Lean_Doc_MarkdownM_run_x27___closed__0_value;
static const lean_string_object l_Lean_Doc_MarkdownM_run_x27___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l_Lean_Doc_MarkdownM_run_x27___closed__1 = (const lean_object*)&l_Lean_Doc_MarkdownM_run_x27___closed__1_value;
static const lean_string_object l_Lean_Doc_MarkdownM_run_x27___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\n\n"};
static const lean_object* l_Lean_Doc_MarkdownM_run_x27___closed__2 = (const lean_object*)&l_Lean_Doc_MarkdownM_run_x27___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Doc_MarkdownM_run_x27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_MarkdownM_run_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_trimEndSpaces_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_trimEndSpaces_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_trimEndSpaces(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_prefixLines_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_prefixLines_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_prefixLines(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_prefixLines___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Doc_prefixListLines_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Doc_prefixListLines_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_prefixListLines(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_prefixListLines___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Doc_prefixListLines_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Doc_prefixListLines_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinBlocks_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinBlocks_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinBlocks_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinBlocks_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinBlocks_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Doc_joinBlocks___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Doc_joinBlocks___closed__0 = (const lean_object*)&l_Lean_Doc_joinBlocks___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Doc_joinBlocks(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_joinBlocks___boxed(lean_object*);
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "​"};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary___closed__0 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary___closed__0_value;
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary___closed__1 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary___closed__1_value;
static lean_once_cell_t l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinInlines_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinInlines_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_joinInlines(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_joinInlines___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownInlineEmpty___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownInlineEmpty___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Doc_instMarkdownInlineEmpty___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Doc_instMarkdownInlineEmpty___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_instMarkdownInlineEmpty___closed__0 = (const lean_object*)&l_Lean_Doc_instMarkdownInlineEmpty___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_instMarkdownInlineEmpty = (const lean_object*)&l_Lean_Doc_instMarkdownInlineEmpty___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownBlockEmpty___redArg___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownBlockEmpty___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Doc_instMarkdownBlockEmpty___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Doc_instMarkdownBlockEmpty___redArg___lam__0___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_instMarkdownBlockEmpty___redArg___closed__0 = (const lean_object*)&l_Lean_Doc_instMarkdownBlockEmpty___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownBlockEmpty___redArg();
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownBlockEmpty___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownBlockEmpty(lean_object*);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial_spec__0_spec__0___redArg(lean_object*, uint32_t, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial_spec__0(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "*_`<[]{}()#"};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___closed__0 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___closed__0_value;
static lean_once_cell_t l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___closed__1;
static lean_once_cell_t l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___closed__3___boxed__const__1;
static lean_once_cell_t l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___closed__3;
LEAN_EXPORT uint8_t l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial_spec__0_spec__0(lean_object*, uint32_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_markerPrefixSpecial___closed__0___boxed__const__1;
static lean_once_cell_t l___private_Lean_DocString_Markdown_0__Lean_Doc_markerPrefixSpecial___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_markerPrefixSpecial___closed__0;
LEAN_EXPORT uint8_t l___private_Lean_DocString_Markdown_0__Lean_Doc_markerPrefixSpecial(lean_object*, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_markerPrefixSpecial___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "> -+. \t"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___redArg___lam__0___closed__0_value;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___redArg___lam__0___closed__1;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___redArg___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___redArg___lam__0___closed__2;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___redArg___lam__0(uint32_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__1___redArg___lam__0(uint32_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__1___redArg___boxed(lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_DocString_Markdown_0__Lean_Doc_escape___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_escape___closed__0 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_escape___closed__0_value;
static const lean_ctor_object l___private_Lean_DocString_Markdown_0__Lean_Doc_escape___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinBlocks_spec__0___closed__0_value),((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_escape___closed__0_value)}};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_escape___closed__1 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_escape___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_escape(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_escape___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_longestBacktickRun_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_longestBacktickRun_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_DocString_Markdown_0__Lean_Doc_longestBacktickRun___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_longestBacktickRun___closed__0 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_longestBacktickRun___closed__0_value;
static const lean_ctor_object l___private_Lean_DocString_Markdown_0__Lean_Doc_longestBacktickRun___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_longestBacktickRun___closed__0_value)}};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_longestBacktickRun___closed__1 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_longestBacktickRun___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_longestBacktickRun(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_longestBacktickRun___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_longestBacktickRun_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_longestBacktickRun_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_fenceFor_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_fenceFor(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_fenceFor___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_quoteCode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_quoteCode___closed__0 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_quoteCode___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_quoteCode(lean_object*);
static const lean_ctor_object l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__0___redArg___closed__0 = (const lean_object*)&l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__0___redArg();
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__0___redArg___boxed(lean_object*);
static lean_once_cell_t l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__0___closed__0;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_codeBlockLines(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft_go_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft_go_spec__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft_go___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft_go___redArg___closed__0;
static lean_once_cell_t l___private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft_go___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft_go___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft_go___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_trimRight_go_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_trimRight_go_spec__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_DocString_Markdown_0__Lean_Doc_trimRight_go___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_trimRight_go___redArg___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_trimRight_go___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_trimRight_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_trimRight___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_trimRight(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_trim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_trim(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__0;
static lean_once_cell_t l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__1;
static const lean_closure_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__2 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__2_value;
static const lean_closure_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__3 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__3_value;
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "*"};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__4 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__4_value;
static const lean_array_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__4_value)}};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__5 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__5_value;
static const lean_array_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__6 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__6_value;
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "**"};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__7 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__7_value;
static const lean_array_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__7_value)}};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__8 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__8_value;
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "$"};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__9 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__9_value;
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "$$"};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__10 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__10_value;
static const lean_array_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 246}, .m_size = 2, .m_capacity = 2, .m_data = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinBlocks_spec__0___closed__0_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinBlocks_spec__0___closed__0_value)}};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__11 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__11_value;
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__12 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__12_value;
static const lean_array_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__12_value)}};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__13 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__13_value;
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "]("};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__14 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__14_value;
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__15 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__15_value;
static lean_once_cell_t l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__16;
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__17 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__17_value;
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "!["};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__18 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__18_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownInlineOfMarkdownInline___private__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownInlineOfMarkdownInline___private__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownInlineOfMarkdownInline___private__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownInlineOfMarkdownInline___private__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownInlineOfMarkdownInline___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownInlineOfMarkdownInline(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__1(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__1___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "* "};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "  "};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__0___closed__1 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ". "};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__2___closed__0 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__2___closed__0_value;
static lean_once_cell_t l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__2___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__3___closed__0 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__3___closed__0_value;
static const lean_array_object l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__3___closed__0_value)}};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__3___closed__1 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__3___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "> "};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___closed__0 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownBlockOfMarkdownInlineOfMarkdownBlock___private__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownBlockOfMarkdownInlineOfMarkdownBlock___private__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownBlockOfMarkdownInlineOfMarkdownBlock___private__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownBlockOfMarkdownInlineOfMarkdownBlock___private__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownBlockOfMarkdownInlineOfMarkdownBlock___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownBlockOfMarkdownInlineOfMarkdownBlock(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_partMarkdown___redArg___closed__0___boxed__const__1;
static lean_once_cell_t l_Lean_Doc_partMarkdown___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_partMarkdown___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Doc_partMarkdown___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_partMarkdown___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_partMarkdown(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_partMarkdown___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownPartOfMarkdownInlineOfMarkdownBlock___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownPartOfMarkdownInlineOfMarkdownBlock___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownPartOfMarkdownInlineOfMarkdownBlock___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownPartOfMarkdownInlineOfMarkdownBlock(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_mkInlineMdRenderer___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_mkInlineMdRenderer___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_mkInlineMdRenderer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_mkInlineMdRenderer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_mkBlockMdRenderer___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_mkBlockMdRenderer___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_mkBlockMdRenderer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_mkBlockMdRenderer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Doc_instInhabitedMdRendererState_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_instInhabitedMdRendererState_default___closed__0 = (const lean_object*)&l_Lean_Doc_instInhabitedMdRendererState_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_instInhabitedMdRendererState_default = (const lean_object*)&l_Lean_Doc_instInhabitedMdRendererState_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_instInhabitedMdRendererState = (const lean_object*)&l_Lean_Doc_instInhabitedMdRendererState_default___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_foldEntries_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_foldEntries_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_foldEntries_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_foldEntries_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_foldEntries(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_foldEntries___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_array_object l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__0___closed__0_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__0___closed__0_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__0___closed__0_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__0_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__0_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__1_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__1_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__2_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__2_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__3_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__4_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__4_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__5_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__5_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__0_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__0_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__0_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__0_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__1_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__1_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__1_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__1_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__2_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__2_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__2_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__2_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__3_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__3_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__3_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__3_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__4_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__4_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__4_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__5_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Doc"};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__5_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__5_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__6_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "docInlineMdExt"};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__6_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__6_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__7_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__4_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__7_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__7_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__5_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__7_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__7_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__6_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(120, 166, 70, 241, 45, 192, 139, 120)}};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__7_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__7_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__8_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__4_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2____boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__8_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__8_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__9_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__5_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Doc_instInhabitedMdRendererState_default___closed__0_value)} };
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__9_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__9_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__10_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*8 + 0, .m_other = 8, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__7_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__9_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__8_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__3_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__2_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__1_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__10_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__10_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__11_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__10_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__0_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__11_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__11_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_docInlineMdExt;
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__0_00___x40_Lean_DocString_Markdown_1277071390____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "docBlockMdExt"};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__0_00___x40_Lean_DocString_Markdown_1277071390____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__0_00___x40_Lean_DocString_Markdown_1277071390____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__1_00___x40_Lean_DocString_Markdown_1277071390____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__4_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__1_00___x40_Lean_DocString_Markdown_1277071390____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__1_00___x40_Lean_DocString_Markdown_1277071390____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__5_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__1_00___x40_Lean_DocString_Markdown_1277071390____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__1_00___x40_Lean_DocString_Markdown_1277071390____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__0_00___x40_Lean_DocString_Markdown_1277071390____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(110, 223, 229, 192, 185, 199, 58, 226)}};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__1_00___x40_Lean_DocString_Markdown_1277071390____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__1_00___x40_Lean_DocString_Markdown_1277071390____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__2_00___x40_Lean_DocString_Markdown_1277071390____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*8 + 0, .m_other = 8, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__1_00___x40_Lean_DocString_Markdown_1277071390____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__9_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__8_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__3_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__2_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__1_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__2_00___x40_Lean_DocString_Markdown_1277071390____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__2_00___x40_Lean_DocString_Markdown_1277071390____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__3_00___x40_Lean_DocString_Markdown_1277071390____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__2_00___x40_Lean_DocString_Markdown_1277071390____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__0_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__3_00___x40_Lean_DocString_Markdown_1277071390____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__3_00___x40_Lean_DocString_Markdown_1277071390____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_1277071390____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_1277071390____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_docBlockMdExt;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_2917630591____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_2917630591____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_builtinInlineMdRenderers;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_2639420957____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_2639420957____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_builtinBlockMdRenderers;
LEAN_EXPORT lean_object* l_Lean_Doc_addBuiltinInlineMdRenderer(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_addBuiltinInlineMdRenderer___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_addBuiltinBlockMdRenderer(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_addBuiltinBlockMdRenderer___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__1___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__1___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__1___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockRendererForUnsafe(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockRendererForUnsafe___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_mdRendererHeartbeats;
LEAN_EXPORT lean_object* l_Lean_Doc_withMdRendererBudget___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_withMdRendererBudget___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_withMdRendererBudget(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_withMdRendererBudget___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_withRendererFallback(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_withRendererFallback___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownInlineElabInline___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownInlineElabInline___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownInlineElabInline___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownInlineElabInline___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Doc_instMarkdownInlineElabInline___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Doc_instMarkdownInlineElabInline___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_instMarkdownInlineElabInline___closed__0 = (const lean_object*)&l_Lean_Doc_instMarkdownInlineElabInline___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownInlineElabInline;
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownBlockElabInlineElabBlock___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownBlockElabInlineElabBlock___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownBlockElabInlineElabBlock___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownBlockElabInlineElabBlock___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Doc_instMarkdownBlockElabInlineElabBlock___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Doc_instMarkdownBlockElabInlineElabBlock___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_instMarkdownBlockElabInlineElabBlock___closed__0 = (const lean_object*)&l_Lean_Doc_instMarkdownBlockElabInlineElabBlock___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownBlockElabInlineElabBlock;
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownVersoDocString___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownVersoDocString___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownVersoDocString___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownVersoDocString___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Doc_instToMarkdownVersoDocString___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instToMarkdownVersoDocString___closed__0;
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownVersoDocString;
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownSnippet___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownSnippet___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownSnippet___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownSnippet___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Doc_instToMarkdownSnippet___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instToMarkdownSnippet___closed__0;
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownSnippet;
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Doc_runMarkdown_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Doc_runMarkdown_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Doc_runMarkdown_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Doc_runMarkdown_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Doc_runMarkdown___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "<docstring>"};
static const lean_object* l_Lean_Doc_runMarkdown___redArg___closed__0 = (const lean_object*)&l_Lean_Doc_runMarkdown___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Doc_runMarkdown___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_runMarkdown___redArg___closed__1;
static const lean_string_object l_Lean_Doc_runMarkdown___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "_uniq"};
static const lean_object* l_Lean_Doc_runMarkdown___redArg___closed__2 = (const lean_object*)&l_Lean_Doc_runMarkdown___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Doc_runMarkdown___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_runMarkdown___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(237, 141, 162, 170, 202, 74, 55, 55)}};
static const lean_object* l_Lean_Doc_runMarkdown___redArg___closed__3 = (const lean_object*)&l_Lean_Doc_runMarkdown___redArg___closed__3_value;
static const lean_ctor_object l_Lean_Doc_runMarkdown___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_runMarkdown___redArg___closed__3_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_runMarkdown___redArg___closed__4 = (const lean_object*)&l_Lean_Doc_runMarkdown___redArg___closed__4_value;
static lean_once_cell_t l_Lean_Doc_runMarkdown___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_runMarkdown___redArg___closed__5;
static lean_once_cell_t l_Lean_Doc_runMarkdown___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_runMarkdown___redArg___closed__6;
static lean_once_cell_t l_Lean_Doc_runMarkdown___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_runMarkdown___redArg___closed__7;
static lean_once_cell_t l_Lean_Doc_runMarkdown___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_runMarkdown___redArg___closed__8;
static lean_once_cell_t l_Lean_Doc_runMarkdown___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_runMarkdown___redArg___closed__9;
static lean_once_cell_t l_Lean_Doc_runMarkdown___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_runMarkdown___redArg___closed__10;
static lean_once_cell_t l_Lean_Doc_runMarkdown___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_runMarkdown___redArg___closed__11;
static lean_once_cell_t l_Lean_Doc_runMarkdown___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_runMarkdown___redArg___closed__12;
static const lean_array_object l_Lean_Doc_runMarkdown___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Doc_runMarkdown___redArg___closed__13 = (const lean_object*)&l_Lean_Doc_runMarkdown___redArg___closed__13_value;
static const lean_string_object l_Lean_Doc_runMarkdown___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "internal exception "};
static const lean_object* l_Lean_Doc_runMarkdown___redArg___closed__14 = (const lean_object*)&l_Lean_Doc_runMarkdown___redArg___closed__14_value;
static const lean_string_object l_Lean_Doc_runMarkdown___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "internal exception #"};
static const lean_object* l_Lean_Doc_runMarkdown___redArg___closed__15 = (const lean_object*)&l_Lean_Doc_runMarkdown___redArg___closed__15_value;
static const lean_string_object l_Lean_Doc_runMarkdown___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = " (unknown)"};
static const lean_object* l_Lean_Doc_runMarkdown___redArg___closed__16 = (const lean_object*)&l_Lean_Doc_runMarkdown___redArg___closed__16_value;
LEAN_EXPORT lean_object* l_Lean_Doc_runMarkdown___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_runMarkdown___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_runMarkdown(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_runMarkdown___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0___boxed__const__1 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_findSimpleDocString_x3f_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1_spec__5(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1_spec__7(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1_spec__8(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1___lam__0___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Doc_MarkdownM_instInhabitedInlineCtx_default___closed__0_value)} };
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1___closed__0 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_findSimpleDocString_x3f_spec__2(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__3___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_findSimpleDocString_x3f_spec__3(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_findSimpleDocString_x3f_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findSimpleDocString_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findSimpleDocString_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findSimpleDocString_x3f(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findSimpleDocString_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_MarkdownM_addFootnote___redArg(lean_object* v_name_1_, lean_object* v_body_2_, lean_object* v_a_3_){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; 
v___x_5_ = lean_st_ref_take(v_a_3_);
v___x_6_ = lean_box(0);
v___x_7_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7_, 0, v_name_1_);
lean_ctor_set(v___x_7_, 1, v_body_2_);
v___x_8_ = lean_array_push(v___x_5_, v___x_7_);
v___x_9_ = lean_st_ref_put(v_a_3_, v___x_8_);
v___x_10_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_10_, 0, v___x_6_);
return v___x_10_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_MarkdownM_addFootnote___redArg___boxed(lean_object* v_name_11_, lean_object* v_body_12_, lean_object* v_a_13_, lean_object* v_a_14_){
_start:
{
lean_object* v_res_15_; 
v_res_15_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_MarkdownM_addFootnote___redArg(v_name_11_, v_body_12_, v_a_13_);
lean_dec(v_a_13_);
return v_res_15_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_MarkdownM_addFootnote(lean_object* v_name_16_, lean_object* v_body_17_, lean_object* v_a_18_, lean_object* v_a_19_, lean_object* v_a_20_){
_start:
{
lean_object* v___x_22_; 
v___x_22_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_MarkdownM_addFootnote___redArg(v_name_16_, v_body_17_, v_a_18_);
return v___x_22_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_MarkdownM_addFootnote___boxed(lean_object* v_name_23_, lean_object* v_body_24_, lean_object* v_a_25_, lean_object* v_a_26_, lean_object* v_a_27_, lean_object* v_a_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_MarkdownM_addFootnote(v_name_23_, v_body_24_, v_a_25_, v_a_26_, v_a_27_);
lean_dec(v_a_27_);
lean_dec_ref(v_a_26_);
lean_dec(v_a_25_);
return v_res_29_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Doc_MarkdownM_run_x27_spec__0(lean_object* v_a_36_, lean_object* v_a_37_){
_start:
{
if (lean_obj_tag(v_a_36_) == 0)
{
lean_object* v___x_38_; 
v___x_38_ = l_List_reverse___redArg(v_a_37_);
return v___x_38_;
}
else
{
lean_object* v_head_39_; lean_object* v_tail_40_; lean_object* v___x_42_; uint8_t v_isShared_43_; uint8_t v_isSharedCheck_55_; 
v_head_39_ = lean_ctor_get(v_a_36_, 0);
v_tail_40_ = lean_ctor_get(v_a_36_, 1);
v_isSharedCheck_55_ = !lean_is_exclusive(v_a_36_);
if (v_isSharedCheck_55_ == 0)
{
v___x_42_ = v_a_36_;
v_isShared_43_ = v_isSharedCheck_55_;
goto v_resetjp_41_;
}
else
{
lean_inc(v_tail_40_);
lean_inc(v_head_39_);
lean_dec(v_a_36_);
v___x_42_ = lean_box(0);
v_isShared_43_ = v_isSharedCheck_55_;
goto v_resetjp_41_;
}
v_resetjp_41_:
{
lean_object* v_fst_44_; lean_object* v_snd_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_52_; 
v_fst_44_ = lean_ctor_get(v_head_39_, 0);
lean_inc(v_fst_44_);
v_snd_45_ = lean_ctor_get(v_head_39_, 1);
lean_inc(v_snd_45_);
lean_dec(v_head_39_);
v___x_46_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Doc_MarkdownM_run_x27_spec__0___closed__0));
v___x_47_ = lean_string_append(v___x_46_, v_fst_44_);
lean_dec(v_fst_44_);
v___x_48_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Doc_MarkdownM_run_x27_spec__0___closed__1));
v___x_49_ = lean_string_append(v___x_47_, v___x_48_);
v___x_50_ = lean_string_append(v___x_49_, v_snd_45_);
lean_dec(v_snd_45_);
if (v_isShared_43_ == 0)
{
lean_ctor_set(v___x_42_, 1, v_a_37_);
lean_ctor_set(v___x_42_, 0, v___x_50_);
v___x_52_ = v___x_42_;
goto v_reusejp_51_;
}
else
{
lean_object* v_reuseFailAlloc_54_; 
v_reuseFailAlloc_54_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_54_, 0, v___x_50_);
lean_ctor_set(v_reuseFailAlloc_54_, 1, v_a_37_);
v___x_52_ = v_reuseFailAlloc_54_;
goto v_reusejp_51_;
}
v_reusejp_51_:
{
v_a_36_ = v_tail_40_;
v_a_37_ = v___x_52_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_MarkdownM_run_x27(lean_object* v_act_60_, lean_object* v_a_61_, lean_object* v_a_62_){
_start:
{
lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; 
v___x_64_ = lean_unsigned_to_nat(0u);
v___x_65_ = ((lean_object*)(l_Lean_Doc_MarkdownM_run_x27___closed__0));
v___x_66_ = lean_st_mk_ref(v___x_65_);
lean_inc(v_a_62_);
lean_inc_ref(v_a_61_);
lean_inc(v___x_66_);
v___x_67_ = lean_apply_4(v_act_60_, v___x_66_, v_a_61_, v_a_62_, lean_box(0));
if (lean_obj_tag(v___x_67_) == 0)
{
lean_object* v_a_68_; lean_object* v___x_70_; uint8_t v_isShared_71_; uint8_t v_isSharedCheck_91_; 
v_a_68_ = lean_ctor_get(v___x_67_, 0);
v_isSharedCheck_91_ = !lean_is_exclusive(v___x_67_);
if (v_isSharedCheck_91_ == 0)
{
v___x_70_ = v___x_67_;
v_isShared_71_ = v_isSharedCheck_91_;
goto v_resetjp_69_;
}
else
{
lean_inc(v_a_68_);
lean_dec(v___x_67_);
v___x_70_ = lean_box(0);
v_isShared_71_ = v_isSharedCheck_91_;
goto v_resetjp_69_;
}
v_resetjp_69_:
{
lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; uint8_t v___x_77_; 
v___x_72_ = lean_st_ref_get(v___x_66_);
lean_dec(v___x_66_);
v___x_73_ = ((lean_object*)(l_Lean_Doc_MarkdownM_run_x27___closed__1));
v___x_74_ = lean_array_to_list(v_a_68_);
v___x_75_ = l_String_intercalate(v___x_73_, v___x_74_);
v___x_76_ = lean_array_get_size(v___x_72_);
v___x_77_ = lean_nat_dec_eq(v___x_76_, v___x_64_);
if (v___x_77_ == 0)
{
lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_86_; 
v___x_78_ = lean_array_to_list(v___x_72_);
v___x_79_ = lean_box(0);
v___x_80_ = l_List_mapTR_loop___at___00Lean_Doc_MarkdownM_run_x27_spec__0(v___x_78_, v___x_79_);
v___x_81_ = ((lean_object*)(l_Lean_Doc_MarkdownM_run_x27___closed__2));
v___x_82_ = lean_string_append(v___x_75_, v___x_81_);
v___x_83_ = l_String_intercalate(v___x_81_, v___x_80_);
v___x_84_ = lean_string_append(v___x_82_, v___x_83_);
lean_dec_ref(v___x_83_);
if (v_isShared_71_ == 0)
{
lean_ctor_set(v___x_70_, 0, v___x_84_);
v___x_86_ = v___x_70_;
goto v_reusejp_85_;
}
else
{
lean_object* v_reuseFailAlloc_87_; 
v_reuseFailAlloc_87_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_87_, 0, v___x_84_);
v___x_86_ = v_reuseFailAlloc_87_;
goto v_reusejp_85_;
}
v_reusejp_85_:
{
return v___x_86_;
}
}
else
{
lean_object* v___x_89_; 
lean_dec(v___x_72_);
if (v_isShared_71_ == 0)
{
lean_ctor_set(v___x_70_, 0, v___x_75_);
v___x_89_ = v___x_70_;
goto v_reusejp_88_;
}
else
{
lean_object* v_reuseFailAlloc_90_; 
v_reuseFailAlloc_90_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_90_, 0, v___x_75_);
v___x_89_ = v_reuseFailAlloc_90_;
goto v_reusejp_88_;
}
v_reusejp_88_:
{
return v___x_89_;
}
}
}
}
else
{
lean_object* v_a_92_; lean_object* v___x_94_; uint8_t v_isShared_95_; uint8_t v_isSharedCheck_99_; 
lean_dec(v___x_66_);
v_a_92_ = lean_ctor_get(v___x_67_, 0);
v_isSharedCheck_99_ = !lean_is_exclusive(v___x_67_);
if (v_isSharedCheck_99_ == 0)
{
v___x_94_ = v___x_67_;
v_isShared_95_ = v_isSharedCheck_99_;
goto v_resetjp_93_;
}
else
{
lean_inc(v_a_92_);
lean_dec(v___x_67_);
v___x_94_ = lean_box(0);
v_isShared_95_ = v_isSharedCheck_99_;
goto v_resetjp_93_;
}
v_resetjp_93_:
{
lean_object* v___x_97_; 
if (v_isShared_95_ == 0)
{
v___x_97_ = v___x_94_;
goto v_reusejp_96_;
}
else
{
lean_object* v_reuseFailAlloc_98_; 
v_reuseFailAlloc_98_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_98_, 0, v_a_92_);
v___x_97_ = v_reuseFailAlloc_98_;
goto v_reusejp_96_;
}
v_reusejp_96_:
{
return v___x_97_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_MarkdownM_run_x27___boxed(lean_object* v_act_100_, lean_object* v_a_101_, lean_object* v_a_102_, lean_object* v_a_103_){
_start:
{
lean_object* v_res_104_; 
v_res_104_ = l_Lean_Doc_MarkdownM_run_x27(v_act_100_, v_a_101_, v_a_102_);
lean_dec(v_a_102_);
lean_dec_ref(v_a_101_);
return v_res_104_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_trimEndSpaces_spec__0(lean_object* v_s_105_, lean_object* v_pos_106_){
_start:
{
lean_object* v_str_107_; lean_object* v_startInclusive_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; uint8_t v_decide_112_; 
v_str_107_ = lean_ctor_get(v_s_105_, 0);
v_startInclusive_108_ = lean_ctor_get(v_s_105_, 1);
v___x_109_ = lean_nat_add(v_startInclusive_108_, v_pos_106_);
v___x_110_ = lean_nat_sub(v___x_109_, v_startInclusive_108_);
v___x_111_ = lean_unsigned_to_nat(0u);
v_decide_112_ = lean_nat_dec_eq(v___x_110_, v___x_111_);
if (v_decide_112_ == 0)
{
uint32_t v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; uint32_t v___x_119_; uint8_t v___x_120_; 
v___x_113_ = 32;
lean_inc(v_startInclusive_108_);
lean_inc_ref(v_str_107_);
v___x_114_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_114_, 0, v_str_107_);
lean_ctor_set(v___x_114_, 1, v_startInclusive_108_);
lean_ctor_set(v___x_114_, 2, v___x_109_);
v___x_115_ = lean_unsigned_to_nat(1u);
v___x_116_ = lean_nat_sub(v___x_110_, v___x_115_);
lean_dec(v___x_110_);
v___x_117_ = l_String_Slice_posLE(v___x_114_, v___x_116_);
lean_dec_ref_known(v___x_114_, 3);
v___x_118_ = lean_nat_add(v_startInclusive_108_, v___x_117_);
v___x_119_ = lean_string_utf8_get_fast(v_str_107_, v___x_118_);
lean_dec(v___x_118_);
v___x_120_ = lean_uint32_dec_eq(v___x_119_, v___x_113_);
if (v___x_120_ == 0)
{
lean_dec(v___x_117_);
return v_pos_106_;
}
else
{
lean_object* v___x_121_; uint8_t v___x_122_; 
v___x_121_ = lean_nat_add(v___x_117_, v___x_115_);
v___x_122_ = lean_nat_dec_le(v___x_121_, v_pos_106_);
lean_dec(v___x_121_);
if (v___x_122_ == 0)
{
lean_dec(v___x_117_);
return v_pos_106_;
}
else
{
lean_dec(v_pos_106_);
v_pos_106_ = v___x_117_;
goto _start;
}
}
}
else
{
lean_dec(v___x_110_);
lean_dec(v___x_109_);
return v_pos_106_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_trimEndSpaces_spec__0___boxed(lean_object* v_s_124_, lean_object* v_pos_125_){
_start:
{
lean_object* v_res_126_; 
v_res_126_ = l_String_Slice_Pos_revSkipWhile___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_trimEndSpaces_spec__0(v_s_124_, v_pos_125_);
lean_dec_ref(v_s_124_);
return v_res_126_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_trimEndSpaces(lean_object* v_s_127_){
_start:
{
lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; 
v___x_128_ = lean_unsigned_to_nat(0u);
v___x_129_ = lean_string_utf8_byte_size(v_s_127_);
lean_inc_ref(v_s_127_);
v___x_130_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_130_, 0, v_s_127_);
lean_ctor_set(v___x_130_, 1, v___x_128_);
lean_ctor_set(v___x_130_, 2, v___x_129_);
v___x_131_ = l_String_Slice_Pos_revSkipWhile___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_trimEndSpaces_spec__0(v___x_130_, v___x_129_);
lean_dec_ref_known(v___x_130_, 3);
v___x_132_ = lean_string_utf8_extract_fast(v_s_127_, v___x_128_, v___x_131_);
lean_dec(v___x_131_);
lean_dec_ref(v_s_127_);
return v___x_132_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_prefixLines_spec__0(lean_object* v_p_133_, lean_object* v_pTrim_134_, size_t v_sz_135_, size_t v_i_136_, lean_object* v_bs_137_){
_start:
{
uint8_t v___x_138_; 
v___x_138_ = lean_usize_dec_lt(v_i_136_, v_sz_135_);
if (v___x_138_ == 0)
{
lean_object* v___x_139_; 
lean_dec_ref(v_pTrim_134_);
lean_dec_ref(v_p_133_);
v___x_139_ = l_unsafeCast___redArg(v_bs_137_);
lean_dec_ref(v_bs_137_);
return v___x_139_;
}
else
{
lean_object* v_v_140_; lean_object* v___x_141_; lean_object* v_bs_x27_142_; lean_object* v___y_144_; lean_object* v___x_150_; lean_object* v___x_151_; uint8_t v___x_152_; 
v_v_140_ = lean_array_uget(v_bs_137_, v_i_136_);
v___x_141_ = lean_unsigned_to_nat(0u);
v_bs_x27_142_ = lean_array_uset(v_bs_137_, v_i_136_, v___x_141_);
v___x_150_ = l_unsafeCast___redArg(v_v_140_);
lean_dec(v_v_140_);
v___x_151_ = lean_string_utf8_byte_size(v___x_150_);
v___x_152_ = lean_nat_dec_eq(v___x_151_, v___x_141_);
if (v___x_152_ == 0)
{
lean_object* v___x_153_; 
lean_inc_ref(v_p_133_);
v___x_153_ = lean_string_append(v_p_133_, v___x_150_);
lean_dec(v___x_150_);
v___y_144_ = v___x_153_;
goto v___jp_143_;
}
else
{
lean_dec(v___x_150_);
lean_inc_ref(v_pTrim_134_);
v___y_144_ = v_pTrim_134_;
goto v___jp_143_;
}
v___jp_143_:
{
size_t v___x_145_; size_t v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; 
v___x_145_ = ((size_t)1ULL);
v___x_146_ = lean_usize_add(v_i_136_, v___x_145_);
v___x_147_ = l_unsafeCast___redArg(v___y_144_);
lean_dec_ref(v___y_144_);
v___x_148_ = lean_array_uset(v_bs_x27_142_, v_i_136_, v___x_147_);
v_i_136_ = v___x_146_;
v_bs_137_ = v___x_148_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_prefixLines_spec__0___boxed(lean_object* v_p_154_, lean_object* v_pTrim_155_, lean_object* v_sz_156_, lean_object* v_i_157_, lean_object* v_bs_158_){
_start:
{
size_t v_sz_boxed_159_; size_t v_i_boxed_160_; lean_object* v_res_161_; 
v_sz_boxed_159_ = lean_unbox_usize(v_sz_156_);
lean_dec(v_sz_156_);
v_i_boxed_160_ = lean_unbox_usize(v_i_157_);
lean_dec(v_i_157_);
v_res_161_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_prefixLines_spec__0(v_p_154_, v_pTrim_155_, v_sz_boxed_159_, v_i_boxed_160_, v_bs_158_);
return v_res_161_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_prefixLines(lean_object* v_p_162_, lean_object* v_lines_163_){
_start:
{
lean_object* v_pTrim_164_; size_t v_sz_165_; size_t v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; 
lean_inc_ref(v_p_162_);
v_pTrim_164_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_trimEndSpaces(v_p_162_);
v_sz_165_ = lean_array_size(v_lines_163_);
v___x_166_ = ((size_t)0ULL);
v___x_167_ = l_unsafeCast___redArg(v_lines_163_);
v___x_168_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_prefixLines_spec__0(v_p_162_, v_pTrim_164_, v_sz_165_, v___x_166_, v___x_167_);
v___x_169_ = l_unsafeCast___redArg(v___x_168_);
lean_dec_ref(v___x_168_);
return v___x_169_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_prefixLines___boxed(lean_object* v_p_170_, lean_object* v_lines_171_){
_start:
{
lean_object* v_res_172_; 
v_res_172_ = l_Lean_Doc_prefixLines(v_p_170_, v_lines_171_);
lean_dec_ref(v_lines_171_);
return v_res_172_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Doc_prefixListLines_spec__0___redArg(lean_object* v_rest_173_, lean_object* v_restTrim_174_, lean_object* v_head_175_, lean_object* v_headTrim_176_, size_t v_sz_177_, size_t v_i_178_, lean_object* v_bs_179_){
_start:
{
uint8_t v___x_180_; 
v___x_180_ = lean_usize_dec_lt(v_i_178_, v_sz_177_);
if (v___x_180_ == 0)
{
lean_object* v___x_181_; 
lean_dec_ref(v_headTrim_176_);
lean_dec_ref(v_head_175_);
lean_dec_ref(v_restTrim_174_);
lean_dec_ref(v_rest_173_);
v___x_181_ = l_unsafeCast___redArg(v_bs_179_);
lean_dec_ref(v_bs_179_);
return v___x_181_;
}
else
{
lean_object* v_v_182_; lean_object* v___x_183_; lean_object* v_bs_x27_184_; lean_object* v___y_186_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v_fst_195_; lean_object* v_snd_196_; uint8_t v___x_200_; 
v_v_182_ = lean_array_uget(v_bs_179_, v_i_178_);
v___x_183_ = lean_unsigned_to_nat(0u);
v_bs_x27_184_ = lean_array_uset(v_bs_179_, v_i_178_, v___x_183_);
v___x_192_ = lean_usize_to_nat(v_i_178_);
v___x_193_ = l_unsafeCast___redArg(v_v_182_);
lean_dec(v_v_182_);
v___x_200_ = lean_nat_dec_eq(v___x_192_, v___x_183_);
lean_dec(v___x_192_);
if (v___x_200_ == 0)
{
lean_inc_ref(v_restTrim_174_);
lean_inc_ref(v_rest_173_);
v_fst_195_ = v_rest_173_;
v_snd_196_ = v_restTrim_174_;
goto v___jp_194_;
}
else
{
lean_inc_ref(v_headTrim_176_);
lean_inc_ref(v_head_175_);
v_fst_195_ = v_head_175_;
v_snd_196_ = v_headTrim_176_;
goto v___jp_194_;
}
v___jp_185_:
{
size_t v___x_187_; size_t v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; 
v___x_187_ = ((size_t)1ULL);
v___x_188_ = lean_usize_add(v_i_178_, v___x_187_);
v___x_189_ = l_unsafeCast___redArg(v___y_186_);
lean_dec_ref(v___y_186_);
v___x_190_ = lean_array_uset(v_bs_x27_184_, v_i_178_, v___x_189_);
v_i_178_ = v___x_188_;
v_bs_179_ = v___x_190_;
goto _start;
}
v___jp_194_:
{
lean_object* v___x_197_; uint8_t v___x_198_; 
v___x_197_ = lean_string_utf8_byte_size(v___x_193_);
v___x_198_ = lean_nat_dec_eq(v___x_197_, v___x_183_);
if (v___x_198_ == 0)
{
lean_object* v___x_199_; 
lean_dec_ref(v_snd_196_);
v___x_199_ = lean_string_append(v_fst_195_, v___x_193_);
lean_dec(v___x_193_);
v___y_186_ = v___x_199_;
goto v___jp_185_;
}
else
{
lean_dec_ref(v_fst_195_);
lean_dec(v___x_193_);
v___y_186_ = v_snd_196_;
goto v___jp_185_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Doc_prefixListLines_spec__0___redArg___boxed(lean_object* v_rest_201_, lean_object* v_restTrim_202_, lean_object* v_head_203_, lean_object* v_headTrim_204_, lean_object* v_sz_205_, lean_object* v_i_206_, lean_object* v_bs_207_){
_start:
{
size_t v_sz_boxed_208_; size_t v_i_boxed_209_; lean_object* v_res_210_; 
v_sz_boxed_208_ = lean_unbox_usize(v_sz_205_);
lean_dec(v_sz_205_);
v_i_boxed_209_ = lean_unbox_usize(v_i_206_);
lean_dec(v_i_206_);
v_res_210_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Doc_prefixListLines_spec__0___redArg(v_rest_201_, v_restTrim_202_, v_head_203_, v_headTrim_204_, v_sz_boxed_208_, v_i_boxed_209_, v_bs_207_);
return v_res_210_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_prefixListLines(lean_object* v_head_211_, lean_object* v_rest_212_, lean_object* v_lines_213_){
_start:
{
lean_object* v_headTrim_214_; lean_object* v_restTrim_215_; size_t v_sz_216_; size_t v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; 
lean_inc_ref(v_head_211_);
v_headTrim_214_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_trimEndSpaces(v_head_211_);
lean_inc_ref(v_rest_212_);
v_restTrim_215_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_trimEndSpaces(v_rest_212_);
v_sz_216_ = lean_array_size(v_lines_213_);
v___x_217_ = ((size_t)0ULL);
v___x_218_ = l_unsafeCast___redArg(v_lines_213_);
v___x_219_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Doc_prefixListLines_spec__0___redArg(v_rest_212_, v_restTrim_215_, v_head_211_, v_headTrim_214_, v_sz_216_, v___x_217_, v___x_218_);
v___x_220_ = l_unsafeCast___redArg(v___x_219_);
lean_dec_ref(v___x_219_);
return v___x_220_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_prefixListLines___boxed(lean_object* v_head_221_, lean_object* v_rest_222_, lean_object* v_lines_223_){
_start:
{
lean_object* v_res_224_; 
v_res_224_ = l_Lean_Doc_prefixListLines(v_head_221_, v_rest_222_, v_lines_223_);
lean_dec_ref(v_lines_223_);
return v_res_224_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Doc_prefixListLines_spec__0(lean_object* v_rest_225_, lean_object* v_restTrim_226_, lean_object* v_head_227_, lean_object* v_headTrim_228_, lean_object* v_as_229_, size_t v_sz_230_, size_t v_i_231_, lean_object* v_bs_232_){
_start:
{
lean_object* v___x_233_; 
v___x_233_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Doc_prefixListLines_spec__0___redArg(v_rest_225_, v_restTrim_226_, v_head_227_, v_headTrim_228_, v_sz_230_, v_i_231_, v_bs_232_);
return v___x_233_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Doc_prefixListLines_spec__0___boxed(lean_object* v_rest_234_, lean_object* v_restTrim_235_, lean_object* v_head_236_, lean_object* v_headTrim_237_, lean_object* v_as_238_, lean_object* v_sz_239_, lean_object* v_i_240_, lean_object* v_bs_241_){
_start:
{
size_t v_sz_boxed_242_; size_t v_i_boxed_243_; lean_object* v_res_244_; 
v_sz_boxed_242_ = lean_unbox_usize(v_sz_239_);
lean_dec(v_sz_239_);
v_i_boxed_243_ = lean_unbox_usize(v_i_240_);
lean_dec(v_i_240_);
v_res_244_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Doc_prefixListLines_spec__0(v_rest_234_, v_restTrim_235_, v_head_236_, v_headTrim_237_, v_as_238_, v_sz_boxed_242_, v_i_boxed_243_, v_bs_241_);
lean_dec_ref(v_as_238_);
return v_res_244_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinBlocks_spec__0(lean_object* v_as_246_, size_t v_i_247_, size_t v_stop_248_, lean_object* v_b_249_){
_start:
{
lean_object* v___y_251_; uint8_t v___x_255_; 
v___x_255_ = lean_usize_dec_eq(v_i_247_, v_stop_248_);
if (v___x_255_ == 0)
{
lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; uint8_t v___x_259_; 
v___x_256_ = lean_array_uget_borrowed(v_as_246_, v_i_247_);
v___x_257_ = lean_array_get_size(v___x_256_);
v___x_258_ = lean_unsigned_to_nat(0u);
v___x_259_ = lean_nat_dec_eq(v___x_257_, v___x_258_);
if (v___x_259_ == 0)
{
lean_object* v___x_260_; uint8_t v___x_261_; 
v___x_260_ = lean_array_get_size(v_b_249_);
v___x_261_ = lean_nat_dec_eq(v___x_260_, v___x_258_);
if (v___x_261_ == 0)
{
lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; 
v___x_262_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinBlocks_spec__0___closed__0));
v___x_263_ = lean_array_push(v_b_249_, v___x_262_);
v___x_264_ = l_Array_append___redArg(v___x_263_, v___x_256_);
v___y_251_ = v___x_264_;
goto v___jp_250_;
}
else
{
lean_dec_ref(v_b_249_);
lean_inc(v___x_256_);
v___y_251_ = v___x_256_;
goto v___jp_250_;
}
}
else
{
v___y_251_ = v_b_249_;
goto v___jp_250_;
}
}
else
{
return v_b_249_;
}
v___jp_250_:
{
size_t v___x_252_; size_t v___x_253_; 
v___x_252_ = ((size_t)1ULL);
v___x_253_ = lean_usize_add(v_i_247_, v___x_252_);
v_i_247_ = v___x_253_;
v_b_249_ = v___y_251_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinBlocks_spec__0___boxed(lean_object* v_as_265_, lean_object* v_i_266_, lean_object* v_stop_267_, lean_object* v_b_268_){
_start:
{
size_t v_i_boxed_269_; size_t v_stop_boxed_270_; lean_object* v_res_271_; 
v_i_boxed_269_ = lean_unbox_usize(v_i_266_);
lean_dec(v_i_266_);
v_stop_boxed_270_ = lean_unbox_usize(v_stop_267_);
lean_dec(v_stop_267_);
v_res_271_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinBlocks_spec__0(v_as_265_, v_i_boxed_269_, v_stop_boxed_270_, v_b_268_);
lean_dec_ref(v_as_265_);
return v_res_271_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_joinBlocks(lean_object* v_blocks_274_){
_start:
{
lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; uint8_t v___x_278_; 
v___x_275_ = lean_unsigned_to_nat(0u);
v___x_276_ = ((lean_object*)(l_Lean_Doc_joinBlocks___closed__0));
v___x_277_ = lean_array_get_size(v_blocks_274_);
v___x_278_ = lean_nat_dec_lt(v___x_275_, v___x_277_);
if (v___x_278_ == 0)
{
return v___x_276_;
}
else
{
uint8_t v___x_279_; 
v___x_279_ = lean_nat_dec_le(v___x_277_, v___x_277_);
if (v___x_279_ == 0)
{
if (v___x_278_ == 0)
{
return v___x_276_;
}
else
{
size_t v___x_280_; size_t v___x_281_; lean_object* v___x_282_; 
v___x_280_ = ((size_t)0ULL);
v___x_281_ = lean_usize_of_nat(v___x_277_);
v___x_282_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinBlocks_spec__0(v_blocks_274_, v___x_280_, v___x_281_, v___x_276_);
return v___x_282_;
}
}
else
{
size_t v___x_283_; size_t v___x_284_; lean_object* v___x_285_; 
v___x_283_ = ((size_t)0ULL);
v___x_284_ = lean_usize_of_nat(v___x_277_);
v___x_285_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinBlocks_spec__0(v_blocks_274_, v___x_283_, v___x_284_, v___x_276_);
return v___x_285_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_joinBlocks___boxed(lean_object* v_blocks_286_){
_start:
{
lean_object* v_res_287_; 
v_res_287_ = l_Lean_Doc_joinBlocks(v_blocks_286_);
lean_dec_ref(v_blocks_286_);
return v_res_287_;
}
}
static lean_object* _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary___closed__2(void){
_start:
{
lean_object* v___x_290_; lean_object* v___x_291_; 
v___x_290_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary___closed__1));
v___x_291_ = lean_string_utf8_byte_size(v___x_290_);
return v___x_291_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary(lean_object* v_l_292_, lean_object* v_r_293_){
_start:
{
uint8_t v___y_295_; uint8_t v___y_296_; lean_object* v___x_302_; uint8_t v___y_304_; lean_object* v___x_310_; lean_object* v___x_311_; uint8_t v___x_312_; 
v___x_302_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary___closed__1));
v___x_310_ = lean_string_utf8_byte_size(v_l_292_);
v___x_311_ = lean_obj_once(&l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary___closed__2, &l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary___closed__2_once, _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary___closed__2);
v___x_312_ = lean_nat_dec_le(v___x_311_, v___x_310_);
if (v___x_312_ == 0)
{
v___y_304_ = v___x_312_;
goto v___jp_303_;
}
else
{
lean_object* v___x_313_; lean_object* v___x_314_; uint8_t v___x_315_; 
v___x_313_ = lean_unsigned_to_nat(0u);
v___x_314_ = lean_nat_sub(v___x_310_, v___x_311_);
v___x_315_ = lean_string_memcmp(v_l_292_, v___x_302_, v___x_314_, v___x_313_, v___x_311_);
lean_dec(v___x_314_);
v___y_304_ = v___x_315_;
goto v___jp_303_;
}
v___jp_294_:
{
if (v___y_295_ == 0)
{
lean_object* v___x_297_; 
v___x_297_ = lean_string_append(v_l_292_, v_r_293_);
return v___x_297_;
}
else
{
if (v___y_296_ == 0)
{
lean_object* v___x_298_; 
v___x_298_ = lean_string_append(v_l_292_, v_r_293_);
return v___x_298_;
}
else
{
lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; 
v___x_299_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary___closed__0));
v___x_300_ = lean_string_append(v_l_292_, v___x_299_);
v___x_301_ = lean_string_append(v___x_300_, v_r_293_);
return v___x_301_;
}
}
}
v___jp_303_:
{
lean_object* v___x_305_; lean_object* v___x_306_; uint8_t v___x_307_; 
v___x_305_ = lean_string_utf8_byte_size(v_r_293_);
v___x_306_ = lean_obj_once(&l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary___closed__2, &l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary___closed__2_once, _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary___closed__2);
v___x_307_ = lean_nat_dec_le(v___x_306_, v___x_305_);
if (v___x_307_ == 0)
{
v___y_295_ = v___y_304_;
v___y_296_ = v___x_307_;
goto v___jp_294_;
}
else
{
lean_object* v___x_308_; uint8_t v___x_309_; 
v___x_308_ = lean_unsigned_to_nat(0u);
v___x_309_ = lean_string_memcmp(v_r_293_, v___x_302_, v___x_308_, v___x_308_, v___x_306_);
v___y_295_ = v___y_304_;
v___y_296_ = v___x_309_;
goto v___jp_294_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary___boxed(lean_object* v_l_316_, lean_object* v_r_317_){
_start:
{
lean_object* v_res_318_; 
v_res_318_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary(v_l_316_, v_r_317_);
lean_dec_ref(v_r_317_);
return v_res_318_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinInlines_spec__0(lean_object* v_as_319_, size_t v_i_320_, size_t v_stop_321_, lean_object* v_b_322_){
_start:
{
lean_object* v___y_324_; uint8_t v___x_328_; 
v___x_328_ = lean_usize_dec_eq(v_i_320_, v_stop_321_);
if (v___x_328_ == 0)
{
lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; uint8_t v___x_332_; 
v___x_329_ = lean_array_uget_borrowed(v_as_319_, v_i_320_);
v___x_330_ = lean_array_get_size(v___x_329_);
v___x_331_ = lean_unsigned_to_nat(0u);
v___x_332_ = lean_nat_dec_eq(v___x_330_, v___x_331_);
if (v___x_332_ == 0)
{
lean_object* v___x_333_; uint8_t v___x_334_; 
v___x_333_ = lean_array_get_size(v_b_322_);
v___x_334_ = lean_nat_dec_eq(v___x_333_, v___x_331_);
if (v___x_334_ == 0)
{
lean_object* v___x_335_; lean_object* v_lastIdx_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v_glued_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; 
v___x_335_ = lean_unsigned_to_nat(1u);
v_lastIdx_336_ = lean_nat_sub(v___x_333_, v___x_335_);
v___x_337_ = lean_array_fget_borrowed(v_b_322_, v_lastIdx_336_);
v___x_338_ = lean_array_fget_borrowed(v___x_329_, v___x_331_);
lean_inc(v___x_337_);
v_glued_339_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary(v___x_337_, v___x_338_);
v___x_340_ = lean_array_fset(v_b_322_, v_lastIdx_336_, v_glued_339_);
lean_dec(v_lastIdx_336_);
v___x_341_ = l_Array_extract___redArg(v___x_329_, v___x_335_, v___x_330_);
v___x_342_ = l_Array_append___redArg(v___x_340_, v___x_341_);
lean_dec_ref(v___x_341_);
v___y_324_ = v___x_342_;
goto v___jp_323_;
}
else
{
lean_dec_ref(v_b_322_);
lean_inc(v___x_329_);
v___y_324_ = v___x_329_;
goto v___jp_323_;
}
}
else
{
v___y_324_ = v_b_322_;
goto v___jp_323_;
}
}
else
{
return v_b_322_;
}
v___jp_323_:
{
size_t v___x_325_; size_t v___x_326_; 
v___x_325_ = ((size_t)1ULL);
v___x_326_ = lean_usize_add(v_i_320_, v___x_325_);
v_i_320_ = v___x_326_;
v_b_322_ = v___y_324_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinInlines_spec__0___boxed(lean_object* v_as_343_, lean_object* v_i_344_, lean_object* v_stop_345_, lean_object* v_b_346_){
_start:
{
size_t v_i_boxed_347_; size_t v_stop_boxed_348_; lean_object* v_res_349_; 
v_i_boxed_347_ = lean_unbox_usize(v_i_344_);
lean_dec(v_i_344_);
v_stop_boxed_348_ = lean_unbox_usize(v_stop_345_);
lean_dec(v_stop_345_);
v_res_349_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinInlines_spec__0(v_as_343_, v_i_boxed_347_, v_stop_boxed_348_, v_b_346_);
lean_dec_ref(v_as_343_);
return v_res_349_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_joinInlines(lean_object* v_parts_350_){
_start:
{
lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; uint8_t v___x_354_; 
v___x_351_ = lean_unsigned_to_nat(0u);
v___x_352_ = ((lean_object*)(l_Lean_Doc_joinBlocks___closed__0));
v___x_353_ = lean_array_get_size(v_parts_350_);
v___x_354_ = lean_nat_dec_lt(v___x_351_, v___x_353_);
if (v___x_354_ == 0)
{
return v___x_352_;
}
else
{
uint8_t v___x_355_; 
v___x_355_ = lean_nat_dec_le(v___x_353_, v___x_353_);
if (v___x_355_ == 0)
{
if (v___x_354_ == 0)
{
return v___x_352_;
}
else
{
size_t v___x_356_; size_t v___x_357_; lean_object* v___x_358_; 
v___x_356_ = ((size_t)0ULL);
v___x_357_ = lean_usize_of_nat(v___x_353_);
v___x_358_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinInlines_spec__0(v_parts_350_, v___x_356_, v___x_357_, v___x_352_);
return v___x_358_;
}
}
else
{
size_t v___x_359_; size_t v___x_360_; lean_object* v___x_361_; 
v___x_359_ = ((size_t)0ULL);
v___x_360_ = lean_usize_of_nat(v___x_353_);
v___x_361_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinInlines_spec__0(v_parts_350_, v___x_359_, v___x_360_, v___x_352_);
return v___x_361_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_joinInlines___boxed(lean_object* v_parts_362_){
_start:
{
lean_object* v_res_363_; 
v_res_363_ = l_Lean_Doc_joinInlines(v_parts_362_);
lean_dec_ref(v_parts_362_);
return v_res_363_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownInlineEmpty___lam__0(lean_object* v_a_364_, uint8_t v_a_365_, lean_object* v_a_366_, lean_object* v_a_367_, lean_object* v_a_368_, lean_object* v_a_369_){
_start:
{
lean_internal_panic_unreachable();
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownInlineEmpty___lam__0___boxed(lean_object* v_a_371_, lean_object* v_a_372_, lean_object* v_a_373_, lean_object* v_a_374_, lean_object* v_a_375_, lean_object* v_a_376_, lean_object* v_a_377_){
_start:
{
uint8_t v_a_19__boxed_378_; lean_object* v_res_379_; 
v_a_19__boxed_378_ = lean_unbox(v_a_372_);
v_res_379_ = l_Lean_Doc_instMarkdownInlineEmpty___lam__0(v_a_371_, v_a_19__boxed_378_, v_a_373_, v_a_374_, v_a_375_, v_a_376_);
lean_dec(v_a_376_);
lean_dec_ref(v_a_375_);
lean_dec(v_a_374_);
lean_dec_ref(v_a_373_);
lean_dec_ref(v_a_371_);
return v_res_379_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownBlockEmpty___redArg___lam__0(lean_object* v_a_382_, lean_object* v_a_383_, uint8_t v_a_384_, lean_object* v_a_385_, lean_object* v_a_386_, lean_object* v_a_387_, lean_object* v_a_388_){
_start:
{
lean_internal_panic_unreachable();
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownBlockEmpty___redArg___lam__0___boxed(lean_object* v_a_390_, lean_object* v_a_391_, lean_object* v_a_392_, lean_object* v_a_393_, lean_object* v_a_394_, lean_object* v_a_395_, lean_object* v_a_396_, lean_object* v_a_397_){
_start:
{
uint8_t v_a_41__boxed_398_; lean_object* v_res_399_; 
v_a_41__boxed_398_ = lean_unbox(v_a_392_);
v_res_399_ = l_Lean_Doc_instMarkdownBlockEmpty___redArg___lam__0(v_a_390_, v_a_391_, v_a_41__boxed_398_, v_a_393_, v_a_394_, v_a_395_, v_a_396_);
lean_dec(v_a_396_);
lean_dec_ref(v_a_395_);
lean_dec(v_a_394_);
lean_dec_ref(v_a_393_);
lean_dec_ref(v_a_391_);
lean_dec_ref(v_a_390_);
return v_res_399_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownBlockEmpty___redArg(){
_start:
{
lean_object* v___f_402_; 
v___f_402_ = ((lean_object*)(l_Lean_Doc_instMarkdownBlockEmpty___redArg___closed__0));
return v___f_402_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownBlockEmpty___redArg___boxed(lean_object* v___dummy_403_){
_start:
{
lean_object* v_res_404_; 
v_res_404_ = l_Lean_Doc_instMarkdownBlockEmpty___redArg();
return v_res_404_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownBlockEmpty(lean_object* v_i_405_){
_start:
{
lean_object* v___f_406_; 
v___f_406_ = ((lean_object*)(l_Lean_Doc_instMarkdownBlockEmpty___redArg___closed__0));
return v___f_406_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial_spec__1(lean_object* v_x_407_, lean_object* v_x_408_){
_start:
{
if (lean_obj_tag(v_x_407_) == 0)
{
if (lean_obj_tag(v_x_408_) == 0)
{
uint8_t v___x_409_; 
v___x_409_ = 1;
return v___x_409_;
}
else
{
uint8_t v___x_410_; 
v___x_410_ = 0;
return v___x_410_;
}
}
else
{
if (lean_obj_tag(v_x_408_) == 0)
{
uint8_t v___x_411_; 
v___x_411_ = 0;
return v___x_411_;
}
else
{
lean_object* v_val_412_; lean_object* v_val_413_; uint32_t v___x_414_; uint32_t v___x_415_; uint8_t v___x_416_; 
v_val_412_ = lean_ctor_get(v_x_407_, 0);
v_val_413_ = lean_ctor_get(v_x_408_, 0);
v___x_414_ = lean_unbox_uint32(v_val_412_);
v___x_415_ = lean_unbox_uint32(v_val_413_);
v___x_416_ = lean_uint32_dec_eq(v___x_414_, v___x_415_);
return v___x_416_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial_spec__1___boxed(lean_object* v_x_417_, lean_object* v_x_418_){
_start:
{
uint8_t v_res_419_; lean_object* v_r_420_; 
v_res_419_ = l_Option_instBEq_beq___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial_spec__1(v_x_417_, v_x_418_);
lean_dec(v_x_418_);
lean_dec(v_x_417_);
v_r_420_ = lean_box(v_res_419_);
return v_r_420_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial_spec__0_spec__0___redArg(lean_object* v_s_421_, uint32_t v_c_422_, lean_object* v_a_423_, uint8_t v_b_424_){
_start:
{
lean_object* v_str_425_; lean_object* v_startInclusive_426_; lean_object* v_endExclusive_427_; lean_object* v___x_428_; uint8_t v_decide_429_; 
v_str_425_ = lean_ctor_get(v_s_421_, 0);
v_startInclusive_426_ = lean_ctor_get(v_s_421_, 1);
v_endExclusive_427_ = lean_ctor_get(v_s_421_, 2);
v___x_428_ = lean_nat_sub(v_endExclusive_427_, v_startInclusive_426_);
v_decide_429_ = lean_nat_dec_eq(v_a_423_, v___x_428_);
lean_dec(v___x_428_);
if (v_decide_429_ == 0)
{
lean_object* v___x_430_; uint32_t v___x_431_; uint8_t v___x_432_; 
v___x_430_ = lean_nat_add(v_startInclusive_426_, v_a_423_);
lean_dec(v_a_423_);
v___x_431_ = lean_string_utf8_get_fast(v_str_425_, v___x_430_);
v___x_432_ = lean_uint32_dec_eq(v___x_431_, v_c_422_);
if (v___x_432_ == 0)
{
lean_object* v___x_433_; lean_object* v___x_434_; 
v___x_433_ = lean_string_utf8_next_fast(v_str_425_, v___x_430_);
lean_dec(v___x_430_);
v___x_434_ = lean_nat_sub(v___x_433_, v_startInclusive_426_);
v_a_423_ = v___x_434_;
v_b_424_ = v___x_432_;
goto _start;
}
else
{
lean_dec(v___x_430_);
return v___x_432_;
}
}
else
{
lean_dec(v_a_423_);
return v_b_424_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial_spec__0_spec__0___redArg___boxed(lean_object* v_s_436_, lean_object* v_c_437_, lean_object* v_a_438_, lean_object* v_b_439_){
_start:
{
uint32_t v_c_boxed_440_; uint8_t v_b_boxed_441_; uint8_t v_res_442_; lean_object* v_r_443_; 
v_c_boxed_440_ = lean_unbox_uint32(v_c_437_);
lean_dec(v_c_437_);
v_b_boxed_441_ = lean_unbox(v_b_439_);
v_res_442_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial_spec__0_spec__0___redArg(v_s_436_, v_c_boxed_440_, v_a_438_, v_b_boxed_441_);
lean_dec_ref(v_s_436_);
v_r_443_ = lean_box(v_res_442_);
return v_r_443_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial_spec__0(uint32_t v_c_444_, lean_object* v_s_445_){
_start:
{
lean_object* v_searcher_446_; uint8_t v___x_447_; uint8_t v___x_448_; 
v_searcher_446_ = lean_unsigned_to_nat(0u);
v___x_447_ = 0;
v___x_448_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial_spec__0_spec__0___redArg(v_s_445_, v_c_444_, v_searcher_446_, v___x_447_);
return v___x_448_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial_spec__0___boxed(lean_object* v_c_449_, lean_object* v_s_450_){
_start:
{
uint32_t v_c_boxed_451_; uint8_t v_res_452_; lean_object* v_r_453_; 
v_c_boxed_451_ = lean_unbox_uint32(v_c_449_);
lean_dec(v_c_449_);
v_res_452_ = l_String_Slice_contains___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial_spec__0(v_c_boxed_451_, v_s_450_);
lean_dec_ref(v_s_450_);
v_r_453_ = lean_box(v_res_452_);
return v_r_453_;
}
}
static lean_object* _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___closed__1(void){
_start:
{
lean_object* v___x_455_; lean_object* v___x_456_; 
v___x_455_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___closed__0));
v___x_456_ = lean_string_utf8_byte_size(v___x_455_);
return v___x_456_;
}
}
static lean_object* _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___closed__2(void){
_start:
{
lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; 
v___x_457_ = lean_obj_once(&l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___closed__1, &l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___closed__1_once, _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___closed__1);
v___x_458_ = lean_unsigned_to_nat(0u);
v___x_459_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___closed__0));
v___x_460_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_460_, 0, v___x_459_);
lean_ctor_set(v___x_460_, 1, v___x_458_);
lean_ctor_set(v___x_460_, 2, v___x_457_);
return v___x_460_;
}
}
static lean_object* _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___closed__3___boxed__const__1(void){
_start:
{
uint32_t v___x_461_; lean_object* v___x_462_; 
v___x_461_ = 91;
v___x_462_ = lean_box_uint32(v___x_461_);
return v___x_462_;
}
}
static lean_object* _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___closed__3(void){
_start:
{
lean_object* v___x_463_; lean_object* v___x_464_; 
v___x_463_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___closed__3___boxed__const__1;
v___x_464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_464_, 0, v___x_463_);
return v___x_464_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial(uint32_t v_c_465_, lean_object* v_next_x3f_466_){
_start:
{
uint32_t v___x_467_; uint8_t v___x_468_; 
v___x_467_ = 33;
v___x_468_ = lean_uint32_dec_eq(v_c_465_, v___x_467_);
if (v___x_468_ == 0)
{
lean_object* v___x_469_; uint8_t v___x_470_; 
v___x_469_ = lean_obj_once(&l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___closed__2, &l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___closed__2_once, _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___closed__2);
v___x_470_ = l_String_Slice_contains___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial_spec__0(v_c_465_, v___x_469_);
return v___x_470_;
}
else
{
lean_object* v___x_471_; uint8_t v___x_472_; 
v___x_471_ = lean_obj_once(&l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___closed__3, &l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___closed__3_once, _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___closed__3);
v___x_472_ = l_Option_instBEq_beq___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial_spec__1(v_next_x3f_466_, v___x_471_);
return v___x_472_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___boxed(lean_object* v_c_473_, lean_object* v_next_x3f_474_){
_start:
{
uint32_t v_c_boxed_475_; uint8_t v_res_476_; lean_object* v_r_477_; 
v_c_boxed_475_ = lean_unbox_uint32(v_c_473_);
lean_dec(v_c_473_);
v_res_476_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial(v_c_boxed_475_, v_next_x3f_474_);
lean_dec(v_next_x3f_474_);
v_r_477_ = lean_box(v_res_476_);
return v_r_477_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial_spec__0_spec__0(lean_object* v_s_478_, uint32_t v_c_479_, lean_object* v_inst_480_, lean_object* v_R_481_, lean_object* v_a_482_, uint8_t v_b_483_, lean_object* v_c_484_){
_start:
{
uint8_t v___x_485_; 
v___x_485_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial_spec__0_spec__0___redArg(v_s_478_, v_c_479_, v_a_482_, v_b_483_);
return v___x_485_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial_spec__0_spec__0___boxed(lean_object* v_s_486_, lean_object* v_c_487_, lean_object* v_inst_488_, lean_object* v_R_489_, lean_object* v_a_490_, lean_object* v_b_491_, lean_object* v_c_492_){
_start:
{
uint32_t v_c_boxed_493_; uint8_t v_b_boxed_494_; uint8_t v_res_495_; lean_object* v_r_496_; 
v_c_boxed_493_ = lean_unbox_uint32(v_c_487_);
lean_dec(v_c_487_);
v_b_boxed_494_ = lean_unbox(v_b_491_);
v_res_495_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial_spec__0_spec__0(v_s_486_, v_c_boxed_493_, v_inst_488_, v_R_489_, v_a_490_, v_b_boxed_494_, v_c_492_);
lean_dec_ref(v_s_486_);
v_r_496_ = lean_box(v_res_495_);
return v_r_496_;
}
}
static lean_object* _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_markerPrefixSpecial___closed__0___boxed__const__1(void){
_start:
{
uint32_t v___x_497_; lean_object* v___x_498_; 
v___x_497_ = 32;
v___x_498_ = lean_box_uint32(v___x_497_);
return v___x_498_;
}
}
static lean_object* _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_markerPrefixSpecial___closed__0(void){
_start:
{
lean_object* v___x_499_; lean_object* v___x_500_; 
v___x_499_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_markerPrefixSpecial___closed__0___boxed__const__1;
v___x_500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_500_, 0, v___x_499_);
return v___x_500_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_DocString_Markdown_0__Lean_Doc_markerPrefixSpecial(lean_object* v_prev_x3f_501_, uint32_t v_c_502_, lean_object* v_next_x3f_503_){
_start:
{
uint8_t v___y_505_; lean_object* v___x_522_; uint8_t v___x_523_; 
v___x_522_ = lean_obj_once(&l___private_Lean_DocString_Markdown_0__Lean_Doc_markerPrefixSpecial___closed__0, &l___private_Lean_DocString_Markdown_0__Lean_Doc_markerPrefixSpecial___closed__0_once, _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_markerPrefixSpecial___closed__0);
v___x_523_ = l_Option_instBEq_beq___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial_spec__1(v_next_x3f_503_, v___x_522_);
if (v___x_523_ == 0)
{
if (lean_obj_tag(v_next_x3f_503_) == 0)
{
uint8_t v___x_524_; 
v___x_524_ = 1;
v___y_505_ = v___x_524_;
goto v___jp_504_;
}
else
{
v___y_505_ = v___x_523_;
goto v___jp_504_;
}
}
else
{
v___y_505_ = v___x_523_;
goto v___jp_504_;
}
v___jp_504_:
{
uint32_t v___x_506_; uint8_t v___x_507_; 
v___x_506_ = 62;
v___x_507_ = lean_uint32_dec_eq(v_c_502_, v___x_506_);
if (v___x_507_ == 0)
{
uint32_t v___x_508_; uint8_t v___x_509_; 
v___x_508_ = 45;
v___x_509_ = lean_uint32_dec_eq(v_c_502_, v___x_508_);
if (v___x_509_ == 0)
{
uint32_t v___x_510_; uint8_t v___x_511_; 
v___x_510_ = 43;
v___x_511_ = lean_uint32_dec_eq(v_c_502_, v___x_510_);
if (v___x_511_ == 0)
{
uint32_t v___x_512_; uint8_t v___x_513_; 
v___x_512_ = 46;
v___x_513_ = lean_uint32_dec_eq(v_c_502_, v___x_512_);
if (v___x_513_ == 0)
{
uint8_t v___x_514_; 
v___x_514_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial(v_c_502_, v_next_x3f_503_);
return v___x_514_;
}
else
{
if (lean_obj_tag(v_prev_x3f_501_) == 0)
{
return v___x_511_;
}
else
{
lean_object* v_val_515_; uint32_t v___x_516_; uint32_t v___x_517_; uint8_t v___x_518_; 
v_val_515_ = lean_ctor_get(v_prev_x3f_501_, 0);
v___x_516_ = 48;
v___x_517_ = lean_unbox_uint32(v_val_515_);
v___x_518_ = lean_uint32_dec_le(v___x_516_, v___x_517_);
if (v___x_518_ == 0)
{
return v___x_518_;
}
else
{
uint32_t v___x_519_; uint32_t v___x_520_; uint8_t v___x_521_; 
v___x_519_ = 57;
v___x_520_ = lean_unbox_uint32(v_val_515_);
v___x_521_ = lean_uint32_dec_le(v___x_520_, v___x_519_);
if (v___x_521_ == 0)
{
return v___x_521_;
}
else
{
return v___y_505_;
}
}
}
}
}
else
{
return v___y_505_;
}
}
else
{
return v___y_505_;
}
}
else
{
return v___x_507_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_markerPrefixSpecial___boxed(lean_object* v_prev_x3f_525_, lean_object* v_c_526_, lean_object* v_next_x3f_527_){
_start:
{
uint32_t v_c_boxed_528_; uint8_t v_res_529_; lean_object* v_r_530_; 
v_c_boxed_528_ = lean_unbox_uint32(v_c_526_);
lean_dec(v_c_526_);
v_res_529_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_markerPrefixSpecial(v_prev_x3f_525_, v_c_boxed_528_, v_next_x3f_527_);
lean_dec(v_next_x3f_527_);
lean_dec(v_prev_x3f_525_);
v_r_530_ = lean_box(v_res_529_);
return v_r_530_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_532_; lean_object* v___x_533_; 
v___x_532_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___redArg___lam__0___closed__0));
v___x_533_ = lean_string_utf8_byte_size(v___x_532_);
return v___x_533_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___redArg___lam__0___closed__2(void){
_start:
{
lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; 
v___x_534_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___redArg___lam__0___closed__1, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___redArg___lam__0___closed__1_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___redArg___lam__0___closed__1);
v___x_535_ = lean_unsigned_to_nat(0u);
v___x_536_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___redArg___lam__0___closed__0));
v___x_537_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_537_, 0, v___x_536_);
lean_ctor_set(v___x_537_, 1, v___x_535_);
lean_ctor_set(v___x_537_, 2, v___x_534_);
return v___x_537_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___redArg___lam__0(uint32_t v___x_538_, lean_object* v___x_539_, lean_object* v_____r_540_, lean_object* v_s_x27_541_){
_start:
{
lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; uint32_t v___x_555_; uint8_t v___x_556_; 
v___x_542_ = lean_string_push(v_s_x27_541_, v___x_538_);
v___x_543_ = lean_box_uint32(v___x_538_);
v___x_544_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_544_, 0, v___x_543_);
v___x_555_ = 48;
v___x_556_ = lean_uint32_dec_le(v___x_555_, v___x_538_);
if (v___x_556_ == 0)
{
goto v___jp_549_;
}
else
{
uint32_t v___x_557_; uint8_t v___x_558_; 
v___x_557_ = 57;
v___x_558_ = lean_uint32_dec_le(v___x_538_, v___x_557_);
if (v___x_558_ == 0)
{
goto v___jp_549_;
}
else
{
goto v___jp_545_;
}
}
v___jp_545_:
{
lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; 
v___x_546_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_546_, 0, v___x_539_);
lean_ctor_set(v___x_546_, 1, v___x_544_);
v___x_547_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_547_, 0, v___x_542_);
lean_ctor_set(v___x_547_, 1, v___x_546_);
v___x_548_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_548_, 0, v___x_547_);
return v___x_548_;
}
v___jp_549_:
{
lean_object* v___x_550_; uint8_t v___x_551_; 
v___x_550_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___redArg___lam__0___closed__2, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___redArg___lam__0___closed__2_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___redArg___lam__0___closed__2);
v___x_551_ = l_String_Slice_contains___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial_spec__0(v___x_538_, v___x_550_);
if (v___x_551_ == 0)
{
lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; 
v___x_552_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_552_, 0, v___x_539_);
lean_ctor_set(v___x_552_, 1, v___x_544_);
v___x_553_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_553_, 0, v___x_542_);
lean_ctor_set(v___x_553_, 1, v___x_552_);
v___x_554_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_554_, 0, v___x_553_);
return v___x_554_;
}
else
{
goto v___jp_545_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___redArg___lam__0___boxed(lean_object* v___x_559_, lean_object* v___x_560_, lean_object* v_____r_561_, lean_object* v_s_x27_562_){
_start:
{
uint32_t v___x_2058__boxed_563_; lean_object* v_res_564_; 
v___x_2058__boxed_563_ = lean_unbox_uint32(v___x_559_);
lean_dec(v___x_559_);
v_res_564_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___redArg___lam__0(v___x_2058__boxed_563_, v___x_560_, v_____r_561_, v_s_x27_562_);
return v_res_564_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___redArg(lean_object* v_s_565_, lean_object* v_a_566_){
_start:
{
lean_object* v___y_568_; lean_object* v_snd_572_; lean_object* v_fst_573_; lean_object* v___x_575_; uint8_t v_isShared_576_; uint8_t v_isSharedCheck_611_; 
v_snd_572_ = lean_ctor_get(v_a_566_, 1);
v_fst_573_ = lean_ctor_get(v_a_566_, 0);
v_isSharedCheck_611_ = !lean_is_exclusive(v_a_566_);
if (v_isSharedCheck_611_ == 0)
{
v___x_575_ = v_a_566_;
v_isShared_576_ = v_isSharedCheck_611_;
goto v_resetjp_574_;
}
else
{
lean_inc(v_snd_572_);
lean_inc(v_fst_573_);
lean_dec(v_a_566_);
v___x_575_ = lean_box(0);
v_isShared_576_ = v_isSharedCheck_611_;
goto v_resetjp_574_;
}
v___jp_567_:
{
if (lean_obj_tag(v___y_568_) == 0)
{
lean_object* v_a_569_; 
v_a_569_ = lean_ctor_get(v___y_568_, 0);
lean_inc(v_a_569_);
lean_dec_ref_known(v___y_568_, 1);
return v_a_569_;
}
else
{
lean_object* v_a_570_; 
v_a_570_ = lean_ctor_get(v___y_568_, 0);
lean_inc(v_a_570_);
lean_dec_ref_known(v___y_568_, 1);
v_a_566_ = v_a_570_;
goto _start;
}
}
v_resetjp_574_:
{
lean_object* v_fst_577_; lean_object* v_snd_578_; lean_object* v___x_580_; uint8_t v_isShared_581_; uint8_t v_isSharedCheck_610_; 
v_fst_577_ = lean_ctor_get(v_snd_572_, 0);
v_snd_578_ = lean_ctor_get(v_snd_572_, 1);
v_isSharedCheck_610_ = !lean_is_exclusive(v_snd_572_);
if (v_isSharedCheck_610_ == 0)
{
v___x_580_ = v_snd_572_;
v_isShared_581_ = v_isSharedCheck_610_;
goto v_resetjp_579_;
}
else
{
lean_inc(v_snd_578_);
lean_inc(v_fst_577_);
lean_dec(v_snd_572_);
v___x_580_ = lean_box(0);
v_isShared_581_ = v_isSharedCheck_610_;
goto v_resetjp_579_;
}
v_resetjp_579_:
{
lean_object* v___x_582_; uint8_t v_decide_583_; 
v___x_582_ = lean_string_utf8_byte_size(v_s_565_);
v_decide_583_ = lean_nat_dec_eq(v_fst_577_, v___x_582_);
if (v_decide_583_ == 0)
{
uint32_t v___x_584_; lean_object* v___y_586_; lean_object* v___y_587_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___f_597_; uint8_t v_decide_602_; 
lean_del_object(v___x_580_);
lean_del_object(v___x_575_);
v___x_584_ = lean_string_utf8_get_fast(v_s_565_, v_fst_577_);
v___x_595_ = lean_string_utf8_next_fast(v_s_565_, v_fst_577_);
lean_dec(v_fst_577_);
v___x_596_ = lean_box_uint32(v___x_584_);
v___f_597_ = lean_alloc_closure((void*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_597_, 0, v___x_596_);
lean_closure_set(v___f_597_, 1, v___x_595_);
v_decide_602_ = lean_nat_dec_eq(v___x_595_, v___x_582_);
if (v_decide_602_ == 0)
{
goto v___jp_598_;
}
else
{
if (v_decide_583_ == 0)
{
lean_object* v_prev_x3f_603_; 
v_prev_x3f_603_ = lean_box(0);
v___y_586_ = v___f_597_;
v___y_587_ = v_prev_x3f_603_;
goto v___jp_585_;
}
else
{
goto v___jp_598_;
}
}
v___jp_585_:
{
uint8_t v___x_588_; 
v___x_588_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_markerPrefixSpecial(v_snd_578_, v___x_584_, v___y_587_);
lean_dec(v___y_587_);
lean_dec(v_snd_578_);
if (v___x_588_ == 0)
{
lean_object* v___x_589_; lean_object* v___x_590_; 
v___x_589_ = lean_box(0);
v___x_590_ = lean_apply_2(v___y_586_, v___x_589_, v_fst_573_);
v___y_568_ = v___x_590_;
goto v___jp_567_;
}
else
{
uint32_t v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; 
v___x_591_ = 92;
v___x_592_ = lean_string_push(v_fst_573_, v___x_591_);
v___x_593_ = lean_box(0);
v___x_594_ = lean_apply_2(v___y_586_, v___x_593_, v___x_592_);
v___y_568_ = v___x_594_;
goto v___jp_567_;
}
}
v___jp_598_:
{
uint32_t v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; 
v___x_599_ = lean_string_utf8_get_fast(v_s_565_, v___x_595_);
v___x_600_ = lean_box_uint32(v___x_599_);
v___x_601_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_601_, 0, v___x_600_);
v___y_586_ = v___f_597_;
v___y_587_ = v___x_601_;
goto v___jp_585_;
}
}
else
{
lean_object* v___x_605_; 
if (v_isShared_581_ == 0)
{
v___x_605_ = v___x_580_;
goto v_reusejp_604_;
}
else
{
lean_object* v_reuseFailAlloc_609_; 
v_reuseFailAlloc_609_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_609_, 0, v_fst_577_);
lean_ctor_set(v_reuseFailAlloc_609_, 1, v_snd_578_);
v___x_605_ = v_reuseFailAlloc_609_;
goto v_reusejp_604_;
}
v_reusejp_604_:
{
lean_object* v___x_607_; 
if (v_isShared_576_ == 0)
{
lean_ctor_set(v___x_575_, 1, v___x_605_);
v___x_607_ = v___x_575_;
goto v_reusejp_606_;
}
else
{
lean_object* v_reuseFailAlloc_608_; 
v_reuseFailAlloc_608_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_608_, 0, v_fst_573_);
lean_ctor_set(v_reuseFailAlloc_608_, 1, v___x_605_);
v___x_607_ = v_reuseFailAlloc_608_;
goto v_reusejp_606_;
}
v_reusejp_606_:
{
return v___x_607_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___redArg___boxed(lean_object* v_s_612_, lean_object* v_a_613_){
_start:
{
lean_object* v_res_614_; 
v_res_614_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___redArg(v_s_612_, v_a_613_);
lean_dec_ref(v_s_612_);
return v_res_614_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__1___redArg___lam__0(uint32_t v___x_615_, lean_object* v___x_616_, lean_object* v_____r_617_, lean_object* v_s_x27_618_){
_start:
{
lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; 
v___x_619_ = lean_string_push(v_s_x27_618_, v___x_615_);
v___x_620_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_620_, 0, v___x_619_);
lean_ctor_set(v___x_620_, 1, v___x_616_);
v___x_621_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_621_, 0, v___x_620_);
return v___x_621_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__1___redArg___lam__0___boxed(lean_object* v___x_622_, lean_object* v___x_623_, lean_object* v_____r_624_, lean_object* v_s_x27_625_){
_start:
{
uint32_t v___x_2188__boxed_626_; lean_object* v_res_627_; 
v___x_2188__boxed_626_ = lean_unbox_uint32(v___x_622_);
lean_dec(v___x_622_);
v_res_627_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__1___redArg___lam__0(v___x_2188__boxed_626_, v___x_623_, v_____r_624_, v_s_x27_625_);
return v_res_627_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__1___redArg(lean_object* v_s_628_, lean_object* v_a_629_){
_start:
{
lean_object* v___y_631_; lean_object* v_fst_635_; lean_object* v_snd_636_; lean_object* v___x_638_; uint8_t v_isShared_639_; uint8_t v_isSharedCheck_661_; 
v_fst_635_ = lean_ctor_get(v_a_629_, 0);
v_snd_636_ = lean_ctor_get(v_a_629_, 1);
v_isSharedCheck_661_ = !lean_is_exclusive(v_a_629_);
if (v_isSharedCheck_661_ == 0)
{
v___x_638_ = v_a_629_;
v_isShared_639_ = v_isSharedCheck_661_;
goto v_resetjp_637_;
}
else
{
lean_inc(v_snd_636_);
lean_inc(v_fst_635_);
lean_dec(v_a_629_);
v___x_638_ = lean_box(0);
v_isShared_639_ = v_isSharedCheck_661_;
goto v_resetjp_637_;
}
v___jp_630_:
{
if (lean_obj_tag(v___y_631_) == 0)
{
lean_object* v_a_632_; 
v_a_632_ = lean_ctor_get(v___y_631_, 0);
lean_inc(v_a_632_);
lean_dec_ref_known(v___y_631_, 1);
return v_a_632_;
}
else
{
lean_object* v_a_633_; 
v_a_633_ = lean_ctor_get(v___y_631_, 0);
lean_inc(v_a_633_);
lean_dec_ref_known(v___y_631_, 1);
v_a_629_ = v_a_633_;
goto _start;
}
}
v_resetjp_637_:
{
lean_object* v___x_640_; uint8_t v_decide_641_; 
v___x_640_ = lean_string_utf8_byte_size(v_s_628_);
v_decide_641_ = lean_nat_dec_eq(v_snd_636_, v___x_640_);
if (v_decide_641_ == 0)
{
uint32_t v___x_642_; lean_object* v___x_643_; lean_object* v___y_645_; uint8_t v_decide_653_; 
lean_del_object(v___x_638_);
v___x_642_ = lean_string_utf8_get_fast(v_s_628_, v_snd_636_);
v___x_643_ = lean_string_utf8_next_fast(v_s_628_, v_snd_636_);
lean_dec(v_snd_636_);
v_decide_653_ = lean_nat_dec_eq(v___x_643_, v___x_640_);
if (v_decide_653_ == 0)
{
uint32_t v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; 
v___x_654_ = lean_string_utf8_get_fast(v_s_628_, v___x_643_);
v___x_655_ = lean_box_uint32(v___x_654_);
v___x_656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_656_, 0, v___x_655_);
v___y_645_ = v___x_656_;
goto v___jp_644_;
}
else
{
lean_object* v_prev_x3f_657_; 
v_prev_x3f_657_ = lean_box(0);
v___y_645_ = v_prev_x3f_657_;
goto v___jp_644_;
}
v___jp_644_:
{
uint8_t v___x_646_; 
v___x_646_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial(v___x_642_, v___y_645_);
lean_dec(v___y_645_);
if (v___x_646_ == 0)
{
lean_object* v___x_647_; lean_object* v___x_648_; 
v___x_647_ = lean_box(0);
v___x_648_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__1___redArg___lam__0(v___x_642_, v___x_643_, v___x_647_, v_fst_635_);
v___y_631_ = v___x_648_;
goto v___jp_630_;
}
else
{
uint32_t v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; 
v___x_649_ = 92;
v___x_650_ = lean_string_push(v_fst_635_, v___x_649_);
v___x_651_ = lean_box(0);
v___x_652_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__1___redArg___lam__0(v___x_642_, v___x_643_, v___x_651_, v___x_650_);
v___y_631_ = v___x_652_;
goto v___jp_630_;
}
}
}
else
{
lean_object* v___x_659_; 
if (v_isShared_639_ == 0)
{
v___x_659_ = v___x_638_;
goto v_reusejp_658_;
}
else
{
lean_object* v_reuseFailAlloc_660_; 
v_reuseFailAlloc_660_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_660_, 0, v_fst_635_);
lean_ctor_set(v_reuseFailAlloc_660_, 1, v_snd_636_);
v___x_659_ = v_reuseFailAlloc_660_;
goto v_reusejp_658_;
}
v_reusejp_658_:
{
return v___x_659_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__1___redArg___boxed(lean_object* v_s_662_, lean_object* v_a_663_){
_start:
{
lean_object* v_res_664_; 
v_res_664_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__1___redArg(v_s_662_, v_a_663_);
lean_dec_ref(v_s_662_);
return v_res_664_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_escape(lean_object* v_s_671_){
_start:
{
lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v_snd_674_; lean_object* v_fst_675_; lean_object* v_fst_676_; lean_object* v___x_678_; uint8_t v_isShared_679_; uint8_t v_isSharedCheck_685_; 
v___x_672_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_escape___closed__1));
v___x_673_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___redArg(v_s_671_, v___x_672_);
v_snd_674_ = lean_ctor_get(v___x_673_, 1);
lean_inc(v_snd_674_);
v_fst_675_ = lean_ctor_get(v___x_673_, 0);
lean_inc(v_fst_675_);
lean_dec_ref(v___x_673_);
v_fst_676_ = lean_ctor_get(v_snd_674_, 0);
v_isSharedCheck_685_ = !lean_is_exclusive(v_snd_674_);
if (v_isSharedCheck_685_ == 0)
{
lean_object* v_unused_686_; 
v_unused_686_ = lean_ctor_get(v_snd_674_, 1);
lean_dec(v_unused_686_);
v___x_678_ = v_snd_674_;
v_isShared_679_ = v_isSharedCheck_685_;
goto v_resetjp_677_;
}
else
{
lean_inc(v_fst_676_);
lean_dec(v_snd_674_);
v___x_678_ = lean_box(0);
v_isShared_679_ = v_isSharedCheck_685_;
goto v_resetjp_677_;
}
v_resetjp_677_:
{
lean_object* v___x_681_; 
if (v_isShared_679_ == 0)
{
lean_ctor_set(v___x_678_, 1, v_fst_676_);
lean_ctor_set(v___x_678_, 0, v_fst_675_);
v___x_681_ = v___x_678_;
goto v_reusejp_680_;
}
else
{
lean_object* v_reuseFailAlloc_684_; 
v_reuseFailAlloc_684_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_684_, 0, v_fst_675_);
lean_ctor_set(v_reuseFailAlloc_684_, 1, v_fst_676_);
v___x_681_ = v_reuseFailAlloc_684_;
goto v_reusejp_680_;
}
v_reusejp_680_:
{
lean_object* v___x_682_; lean_object* v_fst_683_; 
v___x_682_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__1___redArg(v_s_671_, v___x_681_);
v_fst_683_ = lean_ctor_get(v___x_682_, 0);
lean_inc(v_fst_683_);
lean_dec_ref(v___x_682_);
return v_fst_683_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_escape___boxed(lean_object* v_s_687_){
_start:
{
lean_object* v_res_688_; 
v_res_688_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_escape(v_s_687_);
lean_dec_ref(v_s_687_);
return v_res_688_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0(lean_object* v_s_689_, lean_object* v_inst_690_, lean_object* v_a_691_){
_start:
{
lean_object* v___x_692_; 
v___x_692_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___redArg(v_s_689_, v_a_691_);
return v___x_692_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___boxed(lean_object* v_s_693_, lean_object* v_inst_694_, lean_object* v_a_695_){
_start:
{
lean_object* v_res_696_; 
v_res_696_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0(v_s_693_, v_inst_694_, v_a_695_);
lean_dec_ref(v_s_693_);
return v_res_696_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__1(lean_object* v_s_697_, lean_object* v_inst_698_, lean_object* v_a_699_){
_start:
{
lean_object* v___x_700_; 
v___x_700_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__1___redArg(v_s_697_, v_a_699_);
return v___x_700_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__1___boxed(lean_object* v_s_701_, lean_object* v_inst_702_, lean_object* v_a_703_){
_start:
{
lean_object* v_res_704_; 
v_res_704_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__1(v_s_701_, v_inst_702_, v_a_703_);
lean_dec_ref(v_s_701_);
return v_res_704_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_longestBacktickRun_spec__0___redArg(lean_object* v_str_705_, lean_object* v_a_706_){
_start:
{
lean_object* v_snd_707_; lean_object* v_fst_708_; lean_object* v___x_710_; uint8_t v_isShared_711_; uint8_t v_isSharedCheck_750_; 
v_snd_707_ = lean_ctor_get(v_a_706_, 1);
v_fst_708_ = lean_ctor_get(v_a_706_, 0);
v_isSharedCheck_750_ = !lean_is_exclusive(v_a_706_);
if (v_isSharedCheck_750_ == 0)
{
v___x_710_ = v_a_706_;
v_isShared_711_ = v_isSharedCheck_750_;
goto v_resetjp_709_;
}
else
{
lean_inc(v_snd_707_);
lean_inc(v_fst_708_);
lean_dec(v_a_706_);
v___x_710_ = lean_box(0);
v_isShared_711_ = v_isSharedCheck_750_;
goto v_resetjp_709_;
}
v_resetjp_709_:
{
lean_object* v_fst_712_; lean_object* v_snd_713_; lean_object* v___x_715_; uint8_t v_isShared_716_; uint8_t v_isSharedCheck_749_; 
v_fst_712_ = lean_ctor_get(v_snd_707_, 0);
v_snd_713_ = lean_ctor_get(v_snd_707_, 1);
v_isSharedCheck_749_ = !lean_is_exclusive(v_snd_707_);
if (v_isSharedCheck_749_ == 0)
{
v___x_715_ = v_snd_707_;
v_isShared_716_ = v_isSharedCheck_749_;
goto v_resetjp_714_;
}
else
{
lean_inc(v_snd_713_);
lean_inc(v_fst_712_);
lean_dec(v_snd_707_);
v___x_715_ = lean_box(0);
v_isShared_716_ = v_isSharedCheck_749_;
goto v_resetjp_714_;
}
v_resetjp_714_:
{
lean_object* v___x_717_; uint8_t v_decide_718_; 
v___x_717_ = lean_string_utf8_byte_size(v_str_705_);
v_decide_718_ = lean_nat_dec_eq(v_snd_713_, v___x_717_);
if (v_decide_718_ == 0)
{
uint32_t v___x_719_; lean_object* v___x_720_; uint32_t v___x_721_; uint8_t v___x_722_; 
v___x_719_ = lean_string_utf8_get_fast(v_str_705_, v_snd_713_);
v___x_720_ = lean_string_utf8_next_fast(v_str_705_, v_snd_713_);
lean_dec(v_snd_713_);
v___x_721_ = 96;
v___x_722_ = lean_uint32_dec_eq(v___x_719_, v___x_721_);
if (v___x_722_ == 0)
{
lean_object* v_longest_723_; lean_object* v___y_725_; uint8_t v___x_733_; 
v_longest_723_ = lean_unsigned_to_nat(0u);
v___x_733_ = lean_nat_dec_le(v_fst_708_, v_fst_712_);
if (v___x_733_ == 0)
{
lean_dec(v_fst_712_);
v___y_725_ = v_fst_708_;
goto v___jp_724_;
}
else
{
lean_dec(v_fst_708_);
v___y_725_ = v_fst_712_;
goto v___jp_724_;
}
v___jp_724_:
{
lean_object* v___x_727_; 
if (v_isShared_716_ == 0)
{
lean_ctor_set(v___x_715_, 1, v___x_720_);
lean_ctor_set(v___x_715_, 0, v_longest_723_);
v___x_727_ = v___x_715_;
goto v_reusejp_726_;
}
else
{
lean_object* v_reuseFailAlloc_732_; 
v_reuseFailAlloc_732_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_732_, 0, v_longest_723_);
lean_ctor_set(v_reuseFailAlloc_732_, 1, v___x_720_);
v___x_727_ = v_reuseFailAlloc_732_;
goto v_reusejp_726_;
}
v_reusejp_726_:
{
lean_object* v___x_729_; 
if (v_isShared_711_ == 0)
{
lean_ctor_set(v___x_710_, 1, v___x_727_);
lean_ctor_set(v___x_710_, 0, v___y_725_);
v___x_729_ = v___x_710_;
goto v_reusejp_728_;
}
else
{
lean_object* v_reuseFailAlloc_731_; 
v_reuseFailAlloc_731_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_731_, 0, v___y_725_);
lean_ctor_set(v_reuseFailAlloc_731_, 1, v___x_727_);
v___x_729_ = v_reuseFailAlloc_731_;
goto v_reusejp_728_;
}
v_reusejp_728_:
{
v_a_706_ = v___x_729_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_737_; 
v___x_734_ = lean_unsigned_to_nat(1u);
v___x_735_ = lean_nat_add(v_fst_712_, v___x_734_);
lean_dec(v_fst_712_);
if (v_isShared_716_ == 0)
{
lean_ctor_set(v___x_715_, 1, v___x_720_);
lean_ctor_set(v___x_715_, 0, v___x_735_);
v___x_737_ = v___x_715_;
goto v_reusejp_736_;
}
else
{
lean_object* v_reuseFailAlloc_742_; 
v_reuseFailAlloc_742_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_742_, 0, v___x_735_);
lean_ctor_set(v_reuseFailAlloc_742_, 1, v___x_720_);
v___x_737_ = v_reuseFailAlloc_742_;
goto v_reusejp_736_;
}
v_reusejp_736_:
{
lean_object* v___x_739_; 
if (v_isShared_711_ == 0)
{
lean_ctor_set(v___x_710_, 1, v___x_737_);
v___x_739_ = v___x_710_;
goto v_reusejp_738_;
}
else
{
lean_object* v_reuseFailAlloc_741_; 
v_reuseFailAlloc_741_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_741_, 0, v_fst_708_);
lean_ctor_set(v_reuseFailAlloc_741_, 1, v___x_737_);
v___x_739_ = v_reuseFailAlloc_741_;
goto v_reusejp_738_;
}
v_reusejp_738_:
{
v_a_706_ = v___x_739_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_744_; 
if (v_isShared_716_ == 0)
{
v___x_744_ = v___x_715_;
goto v_reusejp_743_;
}
else
{
lean_object* v_reuseFailAlloc_748_; 
v_reuseFailAlloc_748_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_748_, 0, v_fst_712_);
lean_ctor_set(v_reuseFailAlloc_748_, 1, v_snd_713_);
v___x_744_ = v_reuseFailAlloc_748_;
goto v_reusejp_743_;
}
v_reusejp_743_:
{
lean_object* v___x_746_; 
if (v_isShared_711_ == 0)
{
lean_ctor_set(v___x_710_, 1, v___x_744_);
v___x_746_ = v___x_710_;
goto v_reusejp_745_;
}
else
{
lean_object* v_reuseFailAlloc_747_; 
v_reuseFailAlloc_747_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_747_, 0, v_fst_708_);
lean_ctor_set(v_reuseFailAlloc_747_, 1, v___x_744_);
v___x_746_ = v_reuseFailAlloc_747_;
goto v_reusejp_745_;
}
v_reusejp_745_:
{
return v___x_746_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_longestBacktickRun_spec__0___redArg___boxed(lean_object* v_str_751_, lean_object* v_a_752_){
_start:
{
lean_object* v_res_753_; 
v_res_753_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_longestBacktickRun_spec__0___redArg(v_str_751_, v_a_752_);
lean_dec_ref(v_str_751_);
return v_res_753_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_longestBacktickRun(lean_object* v_str_759_){
_start:
{
lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v_snd_762_; lean_object* v_fst_763_; lean_object* v_fst_764_; uint8_t v___x_765_; 
v___x_760_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_longestBacktickRun___closed__1));
v___x_761_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_longestBacktickRun_spec__0___redArg(v_str_759_, v___x_760_);
v_snd_762_ = lean_ctor_get(v___x_761_, 1);
lean_inc(v_snd_762_);
v_fst_763_ = lean_ctor_get(v___x_761_, 0);
lean_inc(v_fst_763_);
lean_dec_ref(v___x_761_);
v_fst_764_ = lean_ctor_get(v_snd_762_, 0);
lean_inc(v_fst_764_);
lean_dec(v_snd_762_);
v___x_765_ = lean_nat_dec_le(v_fst_763_, v_fst_764_);
if (v___x_765_ == 0)
{
lean_dec(v_fst_764_);
return v_fst_763_;
}
else
{
lean_dec(v_fst_763_);
return v_fst_764_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_longestBacktickRun___boxed(lean_object* v_str_766_){
_start:
{
lean_object* v_res_767_; 
v_res_767_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_longestBacktickRun(v_str_766_);
lean_dec_ref(v_str_766_);
return v_res_767_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_longestBacktickRun_spec__0(lean_object* v_str_768_, lean_object* v_inst_769_, lean_object* v_a_770_){
_start:
{
lean_object* v___x_771_; 
v___x_771_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_longestBacktickRun_spec__0___redArg(v_str_768_, v_a_770_);
return v___x_771_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_longestBacktickRun_spec__0___boxed(lean_object* v_str_772_, lean_object* v_inst_773_, lean_object* v_a_774_){
_start:
{
lean_object* v_res_775_; 
v_res_775_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_longestBacktickRun_spec__0(v_str_772_, v_inst_773_, v_a_774_);
lean_dec_ref(v_str_772_);
return v_res_775_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_fenceFor_spec__0(lean_object* v_x_776_, lean_object* v_x_777_){
_start:
{
lean_object* v_zero_778_; uint8_t v_isZero_779_; 
v_zero_778_ = lean_unsigned_to_nat(0u);
v_isZero_779_ = lean_nat_dec_eq(v_x_776_, v_zero_778_);
if (v_isZero_779_ == 1)
{
lean_dec(v_x_776_);
return v_x_777_;
}
else
{
uint32_t v___x_780_; lean_object* v_one_781_; lean_object* v_n_782_; lean_object* v___x_783_; 
v___x_780_ = 96;
v_one_781_ = lean_unsigned_to_nat(1u);
v_n_782_ = lean_nat_sub(v_x_776_, v_one_781_);
lean_dec(v_x_776_);
v___x_783_ = lean_string_push(v_x_777_, v___x_780_);
v_x_776_ = v_n_782_;
v_x_777_ = v___x_783_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_fenceFor(lean_object* v_atLeast_785_, lean_object* v_str_786_){
_start:
{
lean_object* v___x_787_; lean_object* v___y_789_; lean_object* v___x_793_; uint8_t v___x_794_; 
v___x_787_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinBlocks_spec__0___closed__0));
v___x_793_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_longestBacktickRun(v_str_786_);
v___x_794_ = lean_nat_dec_le(v_atLeast_785_, v___x_793_);
if (v___x_794_ == 0)
{
lean_dec(v___x_793_);
v___y_789_ = v_atLeast_785_;
goto v___jp_788_;
}
else
{
lean_dec(v_atLeast_785_);
v___y_789_ = v___x_793_;
goto v___jp_788_;
}
v___jp_788_:
{
lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; 
v___x_790_ = lean_unsigned_to_nat(1u);
v___x_791_ = lean_nat_add(v___y_789_, v___x_790_);
lean_dec(v___y_789_);
v___x_792_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_fenceFor_spec__0(v___x_791_, v___x_787_);
return v___x_792_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_fenceFor___boxed(lean_object* v_atLeast_795_, lean_object* v_str_796_){
_start:
{
lean_object* v_res_797_; 
v_res_797_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_fenceFor(v_atLeast_795_, v_str_796_);
lean_dec_ref(v_str_796_);
return v_res_797_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_quoteCode(lean_object* v_str_799_){
_start:
{
lean_object* v___x_800_; lean_object* v_backticks_801_; lean_object* v___y_803_; lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; uint8_t v___x_820_; 
v___x_800_ = lean_unsigned_to_nat(0u);
v_backticks_801_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_fenceFor(v___x_800_, v_str_799_);
v___x_817_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary___closed__1));
v___x_818_ = lean_string_utf8_byte_size(v_str_799_);
v___x_819_ = lean_obj_once(&l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary___closed__2, &l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary___closed__2_once, _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary___closed__2);
v___x_820_ = lean_nat_dec_le(v___x_819_, v___x_818_);
if (v___x_820_ == 0)
{
goto v___jp_810_;
}
else
{
uint8_t v___x_821_; 
v___x_821_ = lean_string_memcmp(v_str_799_, v___x_817_, v___x_800_, v___x_800_, v___x_819_);
if (v___x_821_ == 0)
{
goto v___jp_810_;
}
else
{
goto v___jp_806_;
}
}
v___jp_802_:
{
lean_object* v___x_804_; lean_object* v___x_805_; 
lean_inc_ref(v_backticks_801_);
v___x_804_ = lean_string_append(v_backticks_801_, v___y_803_);
lean_dec_ref(v___y_803_);
v___x_805_ = lean_string_append(v___x_804_, v_backticks_801_);
lean_dec_ref(v_backticks_801_);
return v___x_805_;
}
v___jp_806_:
{
lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; 
v___x_807_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_quoteCode___closed__0));
v___x_808_ = lean_string_append(v___x_807_, v_str_799_);
lean_dec_ref(v_str_799_);
v___x_809_ = lean_string_append(v___x_808_, v___x_807_);
v___y_803_ = v___x_809_;
goto v___jp_802_;
}
v___jp_810_:
{
lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; uint8_t v___x_814_; 
v___x_811_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary___closed__1));
v___x_812_ = lean_string_utf8_byte_size(v_str_799_);
v___x_813_ = lean_obj_once(&l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary___closed__2, &l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary___closed__2_once, _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary___closed__2);
v___x_814_ = lean_nat_dec_le(v___x_813_, v___x_812_);
if (v___x_814_ == 0)
{
v___y_803_ = v_str_799_;
goto v___jp_802_;
}
else
{
lean_object* v___x_815_; uint8_t v___x_816_; 
v___x_815_ = lean_nat_sub(v___x_812_, v___x_813_);
v___x_816_ = lean_string_memcmp(v_str_799_, v___x_811_, v___x_815_, v___x_800_, v___x_813_);
lean_dec(v___x_815_);
if (v___x_816_ == 0)
{
v___y_803_ = v_str_799_;
goto v___jp_802_;
}
else
{
goto v___jp_806_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__0___redArg(){
_start:
{
lean_object* v___x_825_; 
v___x_825_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__0___redArg___closed__0));
return v___x_825_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__0___redArg___boxed(lean_object* v___dummy_826_){
_start:
{
lean_object* v_res_827_; 
v_res_827_ = l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__0___redArg();
return v_res_827_;
}
}
static lean_object* _init_l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__0___closed__0(void){
_start:
{
lean_object* v___x_828_; 
v___x_828_ = l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__0___redArg();
return v___x_828_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__0(lean_object* v_s_829_){
_start:
{
lean_object* v___x_830_; 
v___x_830_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__0___closed__0);
return v___x_830_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__0___boxed(lean_object* v_s_831_){
_start:
{
lean_object* v_res_832_; 
v_res_832_ = l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__0(v_s_831_);
lean_dec_ref(v_s_831_);
return v_res_832_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__1___redArg(lean_object* v_str_833_, lean_object* v___x_834_, lean_object* v___x_835_, lean_object* v_a_836_, lean_object* v_b_837_){
_start:
{
lean_object* v_it_839_; lean_object* v_startInclusive_840_; lean_object* v_endExclusive_841_; 
if (lean_obj_tag(v_a_836_) == 0)
{
lean_object* v_currPos_845_; lean_object* v_searcher_846_; lean_object* v___x_848_; uint8_t v_isShared_849_; uint8_t v_isSharedCheck_869_; 
v_currPos_845_ = lean_ctor_get(v_a_836_, 0);
v_searcher_846_ = lean_ctor_get(v_a_836_, 1);
v_isSharedCheck_869_ = !lean_is_exclusive(v_a_836_);
if (v_isSharedCheck_869_ == 0)
{
v___x_848_ = v_a_836_;
v_isShared_849_ = v_isSharedCheck_869_;
goto v_resetjp_847_;
}
else
{
lean_inc(v_searcher_846_);
lean_inc(v_currPos_845_);
lean_dec(v_a_836_);
v___x_848_ = lean_box(0);
v_isShared_849_ = v_isSharedCheck_869_;
goto v_resetjp_847_;
}
v_resetjp_847_:
{
uint8_t v_decide_850_; 
v_decide_850_ = lean_nat_dec_eq(v_searcher_846_, v___x_835_);
if (v_decide_850_ == 0)
{
uint32_t v___x_851_; uint32_t v___x_852_; uint8_t v___x_853_; 
v___x_851_ = 10;
v___x_852_ = lean_string_utf8_get_fast(v_str_833_, v_searcher_846_);
v___x_853_ = lean_uint32_dec_eq(v___x_852_, v___x_851_);
if (v___x_853_ == 0)
{
lean_object* v___x_854_; lean_object* v___x_856_; 
v___x_854_ = lean_string_utf8_next_fast(v_str_833_, v_searcher_846_);
lean_dec(v_searcher_846_);
if (v_isShared_849_ == 0)
{
lean_ctor_set(v___x_848_, 1, v___x_854_);
v___x_856_ = v___x_848_;
goto v_reusejp_855_;
}
else
{
lean_object* v_reuseFailAlloc_858_; 
v_reuseFailAlloc_858_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_858_, 0, v_currPos_845_);
lean_ctor_set(v_reuseFailAlloc_858_, 1, v___x_854_);
v___x_856_ = v_reuseFailAlloc_858_;
goto v_reusejp_855_;
}
v_reusejp_855_:
{
v_a_836_ = v___x_856_;
goto _start;
}
}
else
{
lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v_slice_862_; lean_object* v_nextIt_864_; 
v___x_859_ = lean_string_utf8_next_fast(v_str_833_, v_searcher_846_);
v___x_860_ = lean_nat_sub(v___x_859_, v_searcher_846_);
v___x_861_ = lean_nat_add(v_searcher_846_, v___x_860_);
lean_dec(v___x_860_);
v_slice_862_ = l_String_Slice_subslice_x21(v___x_834_, v_currPos_845_, v_searcher_846_);
lean_inc(v___x_861_);
if (v_isShared_849_ == 0)
{
lean_ctor_set(v___x_848_, 1, v___x_861_);
lean_ctor_set(v___x_848_, 0, v___x_861_);
v_nextIt_864_ = v___x_848_;
goto v_reusejp_863_;
}
else
{
lean_object* v_reuseFailAlloc_867_; 
v_reuseFailAlloc_867_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_867_, 0, v___x_861_);
lean_ctor_set(v_reuseFailAlloc_867_, 1, v___x_861_);
v_nextIt_864_ = v_reuseFailAlloc_867_;
goto v_reusejp_863_;
}
v_reusejp_863_:
{
lean_object* v_startInclusive_865_; lean_object* v_endExclusive_866_; 
v_startInclusive_865_ = lean_ctor_get(v_slice_862_, 0);
lean_inc(v_startInclusive_865_);
v_endExclusive_866_ = lean_ctor_get(v_slice_862_, 1);
lean_inc(v_endExclusive_866_);
lean_dec_ref(v_slice_862_);
v_it_839_ = v_nextIt_864_;
v_startInclusive_840_ = v_startInclusive_865_;
v_endExclusive_841_ = v_endExclusive_866_;
goto v___jp_838_;
}
}
}
else
{
lean_object* v___x_868_; 
lean_del_object(v___x_848_);
lean_dec(v_searcher_846_);
v___x_868_ = lean_box(1);
lean_inc(v___x_835_);
v_it_839_ = v___x_868_;
v_startInclusive_840_ = v_currPos_845_;
v_endExclusive_841_ = v___x_835_;
goto v___jp_838_;
}
}
}
else
{
lean_dec(v___x_835_);
return v_b_837_;
}
v___jp_838_:
{
lean_object* v___x_842_; lean_object* v___x_843_; 
v___x_842_ = lean_string_utf8_extract_fast(v_str_833_, v_startInclusive_840_, v_endExclusive_841_);
lean_dec(v_endExclusive_841_);
lean_dec(v_startInclusive_840_);
v___x_843_ = lean_array_push(v_b_837_, v___x_842_);
v_a_836_ = v_it_839_;
v_b_837_ = v___x_843_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__1___redArg___boxed(lean_object* v_str_870_, lean_object* v___x_871_, lean_object* v___x_872_, lean_object* v_a_873_, lean_object* v_b_874_){
_start:
{
lean_object* v_res_875_; 
v_res_875_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__1___redArg(v_str_870_, v___x_871_, v___x_872_, v_a_873_, v_b_874_);
lean_dec_ref(v___x_871_);
lean_dec_ref(v_str_870_);
return v_res_875_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines(lean_object* v_str_876_){
_start:
{
lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; 
v___x_877_ = lean_unsigned_to_nat(0u);
v___x_878_ = lean_string_utf8_byte_size(v_str_876_);
lean_inc_ref(v_str_876_);
v___x_879_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_879_, 0, v_str_876_);
lean_ctor_set(v___x_879_, 1, v___x_877_);
lean_ctor_set(v___x_879_, 2, v___x_878_);
v___x_880_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__0___closed__0);
v___x_881_ = ((lean_object*)(l_Lean_Doc_joinBlocks___closed__0));
v___x_882_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__1___redArg(v_str_876_, v___x_879_, v___x_878_, v___x_880_, v___x_881_);
lean_dec_ref_known(v___x_879_, 3);
lean_dec_ref(v_str_876_);
return v___x_882_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__1(lean_object* v_str_883_, lean_object* v___x_884_, lean_object* v___x_885_, lean_object* v_inst_886_, lean_object* v_R_887_, lean_object* v_a_888_, lean_object* v_b_889_){
_start:
{
lean_object* v___x_890_; 
v___x_890_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__1___redArg(v_str_883_, v___x_884_, v___x_885_, v_a_888_, v_b_889_);
return v___x_890_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__1___boxed(lean_object* v_str_891_, lean_object* v___x_892_, lean_object* v___x_893_, lean_object* v_inst_894_, lean_object* v_R_895_, lean_object* v_a_896_, lean_object* v_b_897_){
_start:
{
lean_object* v_res_898_; 
v_res_898_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__1(v_str_891_, v___x_892_, v___x_893_, v_inst_894_, v_R_895_, v_a_896_, v_b_897_);
lean_dec_ref(v___x_892_);
lean_dec_ref(v_str_891_);
return v_res_898_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_codeBlockLines(lean_object* v_str_899_){
_start:
{
lean_object* v___x_900_; lean_object* v_fence_901_; lean_object* v___y_903_; lean_object* v_body_909_; lean_object* v___x_910_; lean_object* v___x_911_; uint8_t v___x_912_; 
v___x_900_ = lean_unsigned_to_nat(2u);
v_fence_901_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_fenceFor(v___x_900_, v_str_899_);
v_body_909_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines(v_str_899_);
v___x_910_ = lean_unsigned_to_nat(0u);
v___x_911_ = lean_array_get_size(v_body_909_);
v___x_912_ = lean_nat_dec_lt(v___x_910_, v___x_911_);
if (v___x_912_ == 0)
{
v___y_903_ = v_body_909_;
goto v___jp_902_;
}
else
{
lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; uint8_t v___x_918_; 
v___x_913_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinBlocks_spec__0___closed__0));
v___x_914_ = lean_unsigned_to_nat(1u);
v___x_915_ = lean_nat_sub(v___x_911_, v___x_914_);
v___x_916_ = lean_array_get(v___x_913_, v_body_909_, v___x_915_);
lean_dec(v___x_915_);
v___x_917_ = lean_string_utf8_byte_size(v___x_916_);
lean_dec(v___x_916_);
v___x_918_ = lean_nat_dec_eq(v___x_917_, v___x_910_);
if (v___x_918_ == 0)
{
v___y_903_ = v_body_909_;
goto v___jp_902_;
}
else
{
lean_object* v___x_919_; 
v___x_919_ = lean_array_pop(v_body_909_);
v___y_903_ = v___x_919_;
goto v___jp_902_;
}
}
v___jp_902_:
{
lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; 
v___x_904_ = lean_unsigned_to_nat(1u);
v___x_905_ = lean_mk_empty_array_with_capacity(v___x_904_);
v___x_906_ = lean_array_push(v___x_905_, v_fence_901_);
lean_inc_ref(v___x_906_);
v___x_907_ = l_Array_append___redArg(v___x_906_, v___y_903_);
lean_dec_ref(v___y_903_);
v___x_908_ = l_Array_append___redArg(v___x_907_, v___x_906_);
lean_dec_ref(v___x_906_);
return v___x_908_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft_go_spec__0(lean_object* v_s_920_, lean_object* v_pos_921_){
_start:
{
lean_object* v_str_922_; lean_object* v_startInclusive_923_; lean_object* v_endExclusive_924_; lean_object* v___x_925_; lean_object* v___x_934_; lean_object* v___x_935_; uint8_t v_decide_936_; 
v_str_922_ = lean_ctor_get(v_s_920_, 0);
v_startInclusive_923_ = lean_ctor_get(v_s_920_, 1);
v_endExclusive_924_ = lean_ctor_get(v_s_920_, 2);
v___x_925_ = lean_nat_add(v_startInclusive_923_, v_pos_921_);
v___x_934_ = lean_unsigned_to_nat(0u);
v___x_935_ = lean_nat_sub(v_endExclusive_924_, v___x_925_);
v_decide_936_ = lean_nat_dec_eq(v___x_934_, v___x_935_);
lean_dec(v___x_935_);
if (v_decide_936_ == 0)
{
uint32_t v___x_937_; uint32_t v___x_938_; uint8_t v___x_939_; 
v___x_937_ = lean_string_utf8_get_fast(v_str_922_, v___x_925_);
v___x_938_ = 32;
v___x_939_ = lean_uint32_dec_eq(v___x_937_, v___x_938_);
if (v___x_939_ == 0)
{
uint32_t v___x_940_; uint8_t v___x_941_; 
v___x_940_ = 9;
v___x_941_ = lean_uint32_dec_eq(v___x_937_, v___x_940_);
if (v___x_941_ == 0)
{
uint32_t v___x_942_; uint8_t v___x_943_; 
v___x_942_ = 13;
v___x_943_ = lean_uint32_dec_eq(v___x_937_, v___x_942_);
if (v___x_943_ == 0)
{
uint32_t v___x_944_; uint8_t v___x_945_; 
v___x_944_ = 10;
v___x_945_ = lean_uint32_dec_eq(v___x_937_, v___x_944_);
if (v___x_945_ == 0)
{
lean_dec(v___x_925_);
return v_pos_921_;
}
else
{
goto v___jp_926_;
}
}
else
{
goto v___jp_926_;
}
}
else
{
goto v___jp_926_;
}
}
else
{
goto v___jp_926_;
}
}
else
{
lean_dec(v___x_925_);
return v_pos_921_;
}
v___jp_926_:
{
lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; uint8_t v___x_932_; 
v___x_927_ = lean_string_utf8_next_fast(v_str_922_, v___x_925_);
v___x_928_ = lean_nat_sub(v___x_927_, v___x_925_);
lean_dec(v___x_925_);
v___x_929_ = lean_nat_add(v_pos_921_, v___x_928_);
lean_dec(v___x_928_);
v___x_930_ = lean_unsigned_to_nat(1u);
v___x_931_ = lean_nat_add(v_pos_921_, v___x_930_);
v___x_932_ = lean_nat_dec_le(v___x_931_, v___x_929_);
lean_dec(v___x_931_);
if (v___x_932_ == 0)
{
lean_dec(v___x_929_);
return v_pos_921_;
}
else
{
lean_dec(v_pos_921_);
v_pos_921_ = v___x_929_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft_go_spec__0___boxed(lean_object* v_s_946_, lean_object* v_pos_947_){
_start:
{
lean_object* v_res_948_; 
v_res_948_ = l_String_Slice_Pos_skipWhile___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft_go_spec__0(v_s_946_, v_pos_947_);
lean_dec_ref(v_s_946_);
return v_res_948_;
}
}
static lean_object* _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft_go___redArg___closed__0(void){
_start:
{
lean_object* v___x_949_; 
v___x_949_ = l_Lean_Doc_Inline_empty___redArg();
return v___x_949_;
}
}
static lean_object* _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft_go___redArg___closed__1(void){
_start:
{
lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; 
v___x_950_ = lean_obj_once(&l___private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft_go___redArg___closed__0, &l___private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft_go___redArg___closed__0_once, _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft_go___redArg___closed__0);
v___x_951_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinBlocks_spec__0___closed__0));
v___x_952_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_952_, 0, v___x_951_);
lean_ctor_set(v___x_952_, 1, v___x_950_);
return v___x_952_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft_go___redArg(lean_object* v_a_953_){
_start:
{
if (lean_obj_tag(v_a_953_) == 0)
{
lean_object* v___x_954_; 
v___x_954_ = lean_obj_once(&l___private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft_go___redArg___closed__1, &l___private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft_go___redArg___closed__1_once, _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft_go___redArg___closed__1);
return v___x_954_;
}
else
{
lean_object* v_head_955_; 
v_head_955_ = lean_ctor_get(v_a_953_, 0);
lean_inc(v_head_955_);
switch(lean_obj_tag(v_head_955_))
{
case 0:
{
lean_object* v_tail_956_; lean_object* v___x_958_; uint8_t v_isShared_959_; uint8_t v_isSharedCheck_1000_; 
v_tail_956_ = lean_ctor_get(v_a_953_, 1);
v_isSharedCheck_1000_ = !lean_is_exclusive(v_a_953_);
if (v_isSharedCheck_1000_ == 0)
{
lean_object* v_unused_1001_; 
v_unused_1001_ = lean_ctor_get(v_a_953_, 0);
lean_dec(v_unused_1001_);
v___x_958_ = v_a_953_;
v_isShared_959_ = v_isSharedCheck_1000_;
goto v_resetjp_957_;
}
else
{
lean_inc(v_tail_956_);
lean_dec(v_a_953_);
v___x_958_ = lean_box(0);
v_isShared_959_ = v_isSharedCheck_1000_;
goto v_resetjp_957_;
}
v_resetjp_957_:
{
lean_object* v_string_960_; lean_object* v___x_962_; uint8_t v_isShared_963_; uint8_t v_isSharedCheck_999_; 
v_string_960_ = lean_ctor_get(v_head_955_, 0);
v_isSharedCheck_999_ = !lean_is_exclusive(v_head_955_);
if (v_isSharedCheck_999_ == 0)
{
v___x_962_ = v_head_955_;
v_isShared_963_ = v_isSharedCheck_999_;
goto v_resetjp_961_;
}
else
{
lean_inc(v_string_960_);
lean_dec(v_head_955_);
v___x_962_ = lean_box(0);
v_isShared_963_ = v_isSharedCheck_999_;
goto v_resetjp_961_;
}
v_resetjp_961_:
{
lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; uint8_t v_decide_968_; 
v___x_964_ = lean_unsigned_to_nat(0u);
v___x_965_ = lean_string_utf8_byte_size(v_string_960_);
lean_inc_ref(v_string_960_);
v___x_966_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_966_, 0, v_string_960_);
lean_ctor_set(v___x_966_, 1, v___x_964_);
lean_ctor_set(v___x_966_, 2, v___x_965_);
v___x_967_ = l_String_Slice_Pos_skipWhile___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft_go_spec__0(v___x_966_, v___x_964_);
lean_dec_ref_known(v___x_966_, 3);
v_decide_968_ = lean_nat_dec_eq(v___x_967_, v___x_965_);
if (v_decide_968_ == 0)
{
lean_object* v_s1_969_; lean_object* v_s2_970_; lean_object* v___x_972_; 
v_s1_969_ = lean_string_utf8_extract_fast(v_string_960_, v___x_964_, v___x_967_);
v_s2_970_ = lean_string_utf8_extract_fast(v_string_960_, v___x_967_, v___x_965_);
lean_dec(v___x_967_);
lean_dec_ref(v_string_960_);
if (v_isShared_963_ == 0)
{
lean_ctor_set(v___x_962_, 0, v_s2_970_);
v___x_972_ = v___x_962_;
goto v_reusejp_971_;
}
else
{
lean_object* v_reuseFailAlloc_987_; 
v_reuseFailAlloc_987_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_987_, 0, v_s2_970_);
v___x_972_ = v_reuseFailAlloc_987_;
goto v_reusejp_971_;
}
v_reusejp_971_:
{
lean_object* v___x_973_; lean_object* v___x_974_; uint8_t v___x_975_; 
v___x_973_ = lean_array_mk(v_tail_956_);
v___x_974_ = lean_array_get_size(v___x_973_);
v___x_975_ = lean_nat_dec_eq(v___x_974_, v___x_964_);
if (v___x_975_ == 0)
{
lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_982_; 
v___x_976_ = lean_unsigned_to_nat(1u);
v___x_977_ = lean_mk_empty_array_with_capacity(v___x_976_);
v___x_978_ = lean_array_push(v___x_977_, v___x_972_);
v___x_979_ = l_Array_append___redArg(v___x_978_, v___x_973_);
lean_dec_ref(v___x_973_);
v___x_980_ = lean_alloc_ctor(9, 1, 0);
lean_ctor_set(v___x_980_, 0, v___x_979_);
if (v_isShared_959_ == 0)
{
lean_ctor_set_tag(v___x_958_, 0);
lean_ctor_set(v___x_958_, 1, v___x_980_);
lean_ctor_set(v___x_958_, 0, v_s1_969_);
v___x_982_ = v___x_958_;
goto v_reusejp_981_;
}
else
{
lean_object* v_reuseFailAlloc_983_; 
v_reuseFailAlloc_983_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_983_, 0, v_s1_969_);
lean_ctor_set(v_reuseFailAlloc_983_, 1, v___x_980_);
v___x_982_ = v_reuseFailAlloc_983_;
goto v_reusejp_981_;
}
v_reusejp_981_:
{
return v___x_982_;
}
}
else
{
lean_object* v___x_985_; 
lean_dec_ref(v___x_973_);
if (v_isShared_959_ == 0)
{
lean_ctor_set_tag(v___x_958_, 0);
lean_ctor_set(v___x_958_, 1, v___x_972_);
lean_ctor_set(v___x_958_, 0, v_s1_969_);
v___x_985_ = v___x_958_;
goto v_reusejp_984_;
}
else
{
lean_object* v_reuseFailAlloc_986_; 
v_reuseFailAlloc_986_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_986_, 0, v_s1_969_);
lean_ctor_set(v_reuseFailAlloc_986_, 1, v___x_972_);
v___x_985_ = v_reuseFailAlloc_986_;
goto v_reusejp_984_;
}
v_reusejp_984_:
{
return v___x_985_;
}
}
}
}
else
{
lean_object* v___x_988_; lean_object* v_fst_989_; lean_object* v_snd_990_; lean_object* v___x_992_; uint8_t v_isShared_993_; uint8_t v_isSharedCheck_998_; 
lean_dec(v___x_967_);
lean_del_object(v___x_962_);
lean_del_object(v___x_958_);
v___x_988_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft_go___redArg(v_tail_956_);
v_fst_989_ = lean_ctor_get(v___x_988_, 0);
v_snd_990_ = lean_ctor_get(v___x_988_, 1);
v_isSharedCheck_998_ = !lean_is_exclusive(v___x_988_);
if (v_isSharedCheck_998_ == 0)
{
v___x_992_ = v___x_988_;
v_isShared_993_ = v_isSharedCheck_998_;
goto v_resetjp_991_;
}
else
{
lean_inc(v_snd_990_);
lean_inc(v_fst_989_);
lean_dec(v___x_988_);
v___x_992_ = lean_box(0);
v_isShared_993_ = v_isSharedCheck_998_;
goto v_resetjp_991_;
}
v_resetjp_991_:
{
lean_object* v___x_994_; lean_object* v___x_996_; 
v___x_994_ = lean_string_append(v_string_960_, v_fst_989_);
lean_dec(v_fst_989_);
if (v_isShared_993_ == 0)
{
lean_ctor_set(v___x_992_, 0, v___x_994_);
v___x_996_ = v___x_992_;
goto v_reusejp_995_;
}
else
{
lean_object* v_reuseFailAlloc_997_; 
v_reuseFailAlloc_997_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_997_, 0, v___x_994_);
lean_ctor_set(v_reuseFailAlloc_997_, 1, v_snd_990_);
v___x_996_ = v_reuseFailAlloc_997_;
goto v_reusejp_995_;
}
v_reusejp_995_:
{
return v___x_996_;
}
}
}
}
}
}
case 9:
{
lean_object* v_tail_1002_; lean_object* v_content_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; 
v_tail_1002_ = lean_ctor_get(v_a_953_, 1);
lean_inc(v_tail_1002_);
lean_dec_ref_known(v_a_953_, 2);
v_content_1003_ = lean_ctor_get(v_head_955_, 0);
lean_inc_ref(v_content_1003_);
lean_dec_ref_known(v_head_955_, 1);
v___x_1004_ = lean_array_to_list(v_content_1003_);
v___x_1005_ = l_List_appendTR___redArg(v___x_1004_, v_tail_1002_);
v_a_953_ = v___x_1005_;
goto _start;
}
default: 
{
lean_object* v_tail_1007_; lean_object* v___x_1009_; uint8_t v_isShared_1010_; uint8_t v_isSharedCheck_1045_; 
v_tail_1007_ = lean_ctor_get(v_a_953_, 1);
v_isSharedCheck_1045_ = !lean_is_exclusive(v_a_953_);
if (v_isSharedCheck_1045_ == 0)
{
lean_object* v_unused_1046_; 
v_unused_1046_ = lean_ctor_get(v_a_953_, 0);
lean_dec(v_unused_1046_);
v___x_1009_ = v_a_953_;
v_isShared_1010_ = v_isSharedCheck_1045_;
goto v_resetjp_1008_;
}
else
{
lean_inc(v_tail_1007_);
lean_dec(v_a_953_);
v___x_1009_ = lean_box(0);
v_isShared_1010_ = v_isSharedCheck_1045_;
goto v_resetjp_1008_;
}
v_resetjp_1008_:
{
lean_object* v___x_1011_; lean_object* v___x_1012_; 
v___x_1011_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinBlocks_spec__0___closed__0));
v___x_1012_ = lean_array_mk(v_tail_1007_);
if (lean_obj_tag(v_head_955_) == 9)
{
lean_object* v_content_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; uint8_t v___x_1016_; 
v_content_1013_ = lean_ctor_get(v_head_955_, 0);
v___x_1014_ = lean_array_get_size(v_content_1013_);
v___x_1015_ = lean_unsigned_to_nat(0u);
v___x_1016_ = lean_nat_dec_eq(v___x_1014_, v___x_1015_);
if (v___x_1016_ == 0)
{
lean_object* v___x_1017_; uint8_t v___x_1018_; 
v___x_1017_ = lean_array_get_size(v___x_1012_);
v___x_1018_ = lean_nat_dec_eq(v___x_1017_, v___x_1015_);
if (v___x_1018_ == 0)
{
lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1022_; 
lean_inc_ref(v_content_1013_);
lean_dec_ref_known(v_head_955_, 1);
v___x_1019_ = l_Array_append___redArg(v_content_1013_, v___x_1012_);
lean_dec_ref(v___x_1012_);
v___x_1020_ = lean_alloc_ctor(9, 1, 0);
lean_ctor_set(v___x_1020_, 0, v___x_1019_);
if (v_isShared_1010_ == 0)
{
lean_ctor_set_tag(v___x_1009_, 0);
lean_ctor_set(v___x_1009_, 1, v___x_1020_);
lean_ctor_set(v___x_1009_, 0, v___x_1011_);
v___x_1022_ = v___x_1009_;
goto v_reusejp_1021_;
}
else
{
lean_object* v_reuseFailAlloc_1023_; 
v_reuseFailAlloc_1023_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1023_, 0, v___x_1011_);
lean_ctor_set(v_reuseFailAlloc_1023_, 1, v___x_1020_);
v___x_1022_ = v_reuseFailAlloc_1023_;
goto v_reusejp_1021_;
}
v_reusejp_1021_:
{
return v___x_1022_;
}
}
else
{
lean_object* v___x_1025_; 
lean_dec_ref(v___x_1012_);
if (v_isShared_1010_ == 0)
{
lean_ctor_set_tag(v___x_1009_, 0);
lean_ctor_set(v___x_1009_, 1, v_head_955_);
lean_ctor_set(v___x_1009_, 0, v___x_1011_);
v___x_1025_ = v___x_1009_;
goto v_reusejp_1024_;
}
else
{
lean_object* v_reuseFailAlloc_1026_; 
v_reuseFailAlloc_1026_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1026_, 0, v___x_1011_);
lean_ctor_set(v_reuseFailAlloc_1026_, 1, v_head_955_);
v___x_1025_ = v_reuseFailAlloc_1026_;
goto v_reusejp_1024_;
}
v_reusejp_1024_:
{
return v___x_1025_;
}
}
}
else
{
lean_object* v___x_1027_; lean_object* v___x_1029_; 
lean_dec_ref_known(v_head_955_, 1);
v___x_1027_ = lean_alloc_ctor(9, 1, 0);
lean_ctor_set(v___x_1027_, 0, v___x_1012_);
if (v_isShared_1010_ == 0)
{
lean_ctor_set_tag(v___x_1009_, 0);
lean_ctor_set(v___x_1009_, 1, v___x_1027_);
lean_ctor_set(v___x_1009_, 0, v___x_1011_);
v___x_1029_ = v___x_1009_;
goto v_reusejp_1028_;
}
else
{
lean_object* v_reuseFailAlloc_1030_; 
v_reuseFailAlloc_1030_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1030_, 0, v___x_1011_);
lean_ctor_set(v_reuseFailAlloc_1030_, 1, v___x_1027_);
v___x_1029_ = v_reuseFailAlloc_1030_;
goto v_reusejp_1028_;
}
v_reusejp_1028_:
{
return v___x_1029_;
}
}
}
else
{
lean_object* v___x_1031_; lean_object* v___x_1032_; uint8_t v___x_1033_; 
v___x_1031_ = lean_array_get_size(v___x_1012_);
v___x_1032_ = lean_unsigned_to_nat(0u);
v___x_1033_ = lean_nat_dec_eq(v___x_1031_, v___x_1032_);
if (v___x_1033_ == 0)
{
lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1040_; 
v___x_1034_ = lean_unsigned_to_nat(1u);
v___x_1035_ = lean_mk_empty_array_with_capacity(v___x_1034_);
v___x_1036_ = lean_array_push(v___x_1035_, v_head_955_);
v___x_1037_ = l_Array_append___redArg(v___x_1036_, v___x_1012_);
lean_dec_ref(v___x_1012_);
v___x_1038_ = lean_alloc_ctor(9, 1, 0);
lean_ctor_set(v___x_1038_, 0, v___x_1037_);
if (v_isShared_1010_ == 0)
{
lean_ctor_set_tag(v___x_1009_, 0);
lean_ctor_set(v___x_1009_, 1, v___x_1038_);
lean_ctor_set(v___x_1009_, 0, v___x_1011_);
v___x_1040_ = v___x_1009_;
goto v_reusejp_1039_;
}
else
{
lean_object* v_reuseFailAlloc_1041_; 
v_reuseFailAlloc_1041_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1041_, 0, v___x_1011_);
lean_ctor_set(v_reuseFailAlloc_1041_, 1, v___x_1038_);
v___x_1040_ = v_reuseFailAlloc_1041_;
goto v_reusejp_1039_;
}
v_reusejp_1039_:
{
return v___x_1040_;
}
}
else
{
lean_object* v___x_1043_; 
lean_dec_ref(v___x_1012_);
if (v_isShared_1010_ == 0)
{
lean_ctor_set_tag(v___x_1009_, 0);
lean_ctor_set(v___x_1009_, 1, v_head_955_);
lean_ctor_set(v___x_1009_, 0, v___x_1011_);
v___x_1043_ = v___x_1009_;
goto v_reusejp_1042_;
}
else
{
lean_object* v_reuseFailAlloc_1044_; 
v_reuseFailAlloc_1044_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1044_, 0, v___x_1011_);
lean_ctor_set(v_reuseFailAlloc_1044_, 1, v_head_955_);
v___x_1043_ = v_reuseFailAlloc_1044_;
goto v_reusejp_1042_;
}
v_reusejp_1042_:
{
return v___x_1043_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft_go(lean_object* v_i_1047_, lean_object* v_a_1048_){
_start:
{
lean_object* v___x_1049_; 
v___x_1049_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft_go___redArg(v_a_1048_);
return v___x_1049_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft___redArg(lean_object* v_inline_1050_){
_start:
{
lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; 
v___x_1051_ = lean_box(0);
v___x_1052_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1052_, 0, v_inline_1050_);
lean_ctor_set(v___x_1052_, 1, v___x_1051_);
v___x_1053_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft_go___redArg(v___x_1052_);
return v___x_1053_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft(lean_object* v_i_1054_, lean_object* v_inline_1055_){
_start:
{
lean_object* v___x_1056_; 
v___x_1056_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft___redArg(v_inline_1055_);
return v___x_1056_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_trimRight_go_spec__0(lean_object* v_s_1057_, lean_object* v_pos_1058_){
_start:
{
lean_object* v_str_1059_; lean_object* v_startInclusive_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; uint8_t v_decide_1064_; 
v_str_1059_ = lean_ctor_get(v_s_1057_, 0);
v_startInclusive_1060_ = lean_ctor_get(v_s_1057_, 1);
v___x_1061_ = lean_nat_add(v_startInclusive_1060_, v_pos_1058_);
v___x_1062_ = lean_nat_sub(v___x_1061_, v_startInclusive_1060_);
v___x_1063_ = lean_unsigned_to_nat(0u);
v_decide_1064_ = lean_nat_dec_eq(v___x_1062_, v___x_1063_);
if (v_decide_1064_ == 0)
{
lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1073_; uint32_t v___x_1074_; uint32_t v___x_1075_; uint8_t v___x_1076_; 
lean_inc(v_startInclusive_1060_);
lean_inc_ref(v_str_1059_);
v___x_1065_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1065_, 0, v_str_1059_);
lean_ctor_set(v___x_1065_, 1, v_startInclusive_1060_);
lean_ctor_set(v___x_1065_, 2, v___x_1061_);
v___x_1066_ = lean_unsigned_to_nat(1u);
v___x_1067_ = lean_nat_sub(v___x_1062_, v___x_1066_);
lean_dec(v___x_1062_);
v___x_1068_ = l_String_Slice_posLE(v___x_1065_, v___x_1067_);
lean_dec_ref_known(v___x_1065_, 3);
v___x_1073_ = lean_nat_add(v_startInclusive_1060_, v___x_1068_);
v___x_1074_ = lean_string_utf8_get_fast(v_str_1059_, v___x_1073_);
lean_dec(v___x_1073_);
v___x_1075_ = 32;
v___x_1076_ = lean_uint32_dec_eq(v___x_1074_, v___x_1075_);
if (v___x_1076_ == 0)
{
uint32_t v___x_1077_; uint8_t v___x_1078_; 
v___x_1077_ = 9;
v___x_1078_ = lean_uint32_dec_eq(v___x_1074_, v___x_1077_);
if (v___x_1078_ == 0)
{
uint32_t v___x_1079_; uint8_t v___x_1080_; 
v___x_1079_ = 13;
v___x_1080_ = lean_uint32_dec_eq(v___x_1074_, v___x_1079_);
if (v___x_1080_ == 0)
{
uint32_t v___x_1081_; uint8_t v___x_1082_; 
v___x_1081_ = 10;
v___x_1082_ = lean_uint32_dec_eq(v___x_1074_, v___x_1081_);
if (v___x_1082_ == 0)
{
lean_dec(v___x_1068_);
return v_pos_1058_;
}
else
{
goto v___jp_1069_;
}
}
else
{
goto v___jp_1069_;
}
}
else
{
goto v___jp_1069_;
}
}
else
{
goto v___jp_1069_;
}
v___jp_1069_:
{
lean_object* v___x_1070_; uint8_t v___x_1071_; 
v___x_1070_ = lean_nat_add(v___x_1068_, v___x_1066_);
v___x_1071_ = lean_nat_dec_le(v___x_1070_, v_pos_1058_);
lean_dec(v___x_1070_);
if (v___x_1071_ == 0)
{
lean_dec(v___x_1068_);
return v_pos_1058_;
}
else
{
lean_dec(v_pos_1058_);
v_pos_1058_ = v___x_1068_;
goto _start;
}
}
}
else
{
lean_dec(v___x_1062_);
lean_dec(v___x_1061_);
return v_pos_1058_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_trimRight_go_spec__0___boxed(lean_object* v_s_1083_, lean_object* v_pos_1084_){
_start:
{
lean_object* v_res_1085_; 
v_res_1085_ = l_String_Slice_Pos_revSkipWhile___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_trimRight_go_spec__0(v_s_1083_, v_pos_1084_);
lean_dec_ref(v_s_1083_);
return v_res_1085_;
}
}
static lean_object* _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_trimRight_go___redArg___closed__0(void){
_start:
{
lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; 
v___x_1086_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinBlocks_spec__0___closed__0));
v___x_1087_ = lean_obj_once(&l___private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft_go___redArg___closed__0, &l___private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft_go___redArg___closed__0_once, _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft_go___redArg___closed__0);
v___x_1088_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1088_, 0, v___x_1087_);
lean_ctor_set(v___x_1088_, 1, v___x_1086_);
return v___x_1088_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_trimRight_go___redArg(lean_object* v_xs_1089_){
_start:
{
lean_object* v___x_1090_; lean_object* v___x_1091_; uint8_t v___x_1092_; 
v___x_1090_ = lean_array_get_size(v_xs_1089_);
v___x_1091_ = lean_unsigned_to_nat(0u);
v___x_1092_ = lean_nat_dec_eq(v___x_1090_, v___x_1091_);
if (v___x_1092_ == 0)
{
lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; 
v___x_1093_ = lean_unsigned_to_nat(1u);
v___x_1094_ = lean_nat_sub(v___x_1090_, v___x_1093_);
v___x_1095_ = lean_array_fget(v_xs_1089_, v___x_1094_);
lean_dec(v___x_1094_);
switch(lean_obj_tag(v___x_1095_))
{
case 0:
{
lean_object* v_string_1096_; lean_object* v___x_1098_; uint8_t v_isShared_1099_; uint8_t v_isSharedCheck_1126_; 
v_string_1096_ = lean_ctor_get(v___x_1095_, 0);
v_isSharedCheck_1126_ = !lean_is_exclusive(v___x_1095_);
if (v_isSharedCheck_1126_ == 0)
{
v___x_1098_ = v___x_1095_;
v_isShared_1099_ = v_isSharedCheck_1126_;
goto v_resetjp_1097_;
}
else
{
lean_inc(v_string_1096_);
lean_dec(v___x_1095_);
v___x_1098_ = lean_box(0);
v_isShared_1099_ = v_isSharedCheck_1126_;
goto v_resetjp_1097_;
}
v_resetjp_1097_:
{
lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; uint8_t v_decide_1103_; 
v___x_1100_ = lean_string_utf8_byte_size(v_string_1096_);
lean_inc_ref(v_string_1096_);
v___x_1101_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1101_, 0, v_string_1096_);
lean_ctor_set(v___x_1101_, 1, v___x_1091_);
lean_ctor_set(v___x_1101_, 2, v___x_1100_);
v___x_1102_ = l_String_Slice_Pos_skipWhile___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft_go_spec__0(v___x_1101_, v___x_1091_);
v_decide_1103_ = lean_nat_dec_eq(v___x_1102_, v___x_1100_);
lean_dec(v___x_1102_);
if (v_decide_1103_ == 0)
{
lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1108_; 
v___x_1104_ = l_String_Slice_Pos_revSkipWhile___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_trimRight_go_spec__0(v___x_1101_, v___x_1100_);
lean_dec_ref_known(v___x_1101_, 3);
v___x_1105_ = lean_array_pop(v_xs_1089_);
v___x_1106_ = lean_string_utf8_extract_fast(v_string_1096_, v___x_1091_, v___x_1104_);
if (v_isShared_1099_ == 0)
{
lean_ctor_set(v___x_1098_, 0, v___x_1106_);
v___x_1108_ = v___x_1098_;
goto v_reusejp_1107_;
}
else
{
lean_object* v_reuseFailAlloc_1113_; 
v_reuseFailAlloc_1113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1113_, 0, v___x_1106_);
v___x_1108_ = v_reuseFailAlloc_1113_;
goto v_reusejp_1107_;
}
v_reusejp_1107_:
{
lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; 
v___x_1109_ = lean_array_push(v___x_1105_, v___x_1108_);
v___x_1110_ = lean_alloc_ctor(9, 1, 0);
lean_ctor_set(v___x_1110_, 0, v___x_1109_);
v___x_1111_ = lean_string_utf8_extract_fast(v_string_1096_, v___x_1104_, v___x_1100_);
lean_dec(v___x_1104_);
lean_dec_ref(v_string_1096_);
v___x_1112_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1112_, 0, v___x_1110_);
lean_ctor_set(v___x_1112_, 1, v___x_1111_);
return v___x_1112_;
}
}
else
{
lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v_fst_1116_; lean_object* v_snd_1117_; lean_object* v___x_1119_; uint8_t v_isShared_1120_; uint8_t v_isSharedCheck_1125_; 
lean_dec_ref_known(v___x_1101_, 3);
lean_del_object(v___x_1098_);
v___x_1114_ = lean_array_pop(v_xs_1089_);
v___x_1115_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_trimRight_go___redArg(v___x_1114_);
v_fst_1116_ = lean_ctor_get(v___x_1115_, 0);
v_snd_1117_ = lean_ctor_get(v___x_1115_, 1);
v_isSharedCheck_1125_ = !lean_is_exclusive(v___x_1115_);
if (v_isSharedCheck_1125_ == 0)
{
v___x_1119_ = v___x_1115_;
v_isShared_1120_ = v_isSharedCheck_1125_;
goto v_resetjp_1118_;
}
else
{
lean_inc(v_snd_1117_);
lean_inc(v_fst_1116_);
lean_dec(v___x_1115_);
v___x_1119_ = lean_box(0);
v_isShared_1120_ = v_isSharedCheck_1125_;
goto v_resetjp_1118_;
}
v_resetjp_1118_:
{
lean_object* v___x_1121_; lean_object* v___x_1123_; 
v___x_1121_ = lean_string_append(v_snd_1117_, v_string_1096_);
lean_dec_ref(v_string_1096_);
if (v_isShared_1120_ == 0)
{
lean_ctor_set(v___x_1119_, 1, v___x_1121_);
v___x_1123_ = v___x_1119_;
goto v_reusejp_1122_;
}
else
{
lean_object* v_reuseFailAlloc_1124_; 
v_reuseFailAlloc_1124_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1124_, 0, v_fst_1116_);
lean_ctor_set(v_reuseFailAlloc_1124_, 1, v___x_1121_);
v___x_1123_ = v_reuseFailAlloc_1124_;
goto v_reusejp_1122_;
}
v_reusejp_1122_:
{
return v___x_1123_;
}
}
}
}
}
case 9:
{
lean_object* v_content_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; 
v_content_1127_ = lean_ctor_get(v___x_1095_, 0);
lean_inc_ref(v_content_1127_);
lean_dec_ref_known(v___x_1095_, 1);
v___x_1128_ = lean_array_pop(v_xs_1089_);
v___x_1129_ = l_Array_append___redArg(v___x_1128_, v_content_1127_);
lean_dec_ref(v_content_1127_);
v_xs_1089_ = v___x_1129_;
goto _start;
}
default: 
{
lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; 
lean_dec(v___x_1095_);
v___x_1131_ = lean_alloc_ctor(9, 1, 0);
lean_ctor_set(v___x_1131_, 0, v_xs_1089_);
v___x_1132_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinBlocks_spec__0___closed__0));
v___x_1133_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1133_, 0, v___x_1131_);
lean_ctor_set(v___x_1133_, 1, v___x_1132_);
return v___x_1133_;
}
}
}
else
{
lean_object* v___x_1134_; 
lean_dec_ref(v_xs_1089_);
v___x_1134_ = lean_obj_once(&l___private_Lean_DocString_Markdown_0__Lean_Doc_trimRight_go___redArg___closed__0, &l___private_Lean_DocString_Markdown_0__Lean_Doc_trimRight_go___redArg___closed__0_once, _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_trimRight_go___redArg___closed__0);
return v___x_1134_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_trimRight_go(lean_object* v_i_1135_, lean_object* v_xs_1136_){
_start:
{
lean_object* v___x_1137_; 
v___x_1137_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_trimRight_go___redArg(v_xs_1136_);
return v___x_1137_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_trimRight___redArg(lean_object* v_inline_1138_){
_start:
{
lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; 
v___x_1139_ = lean_unsigned_to_nat(1u);
v___x_1140_ = lean_mk_empty_array_with_capacity(v___x_1139_);
v___x_1141_ = lean_array_push(v___x_1140_, v_inline_1138_);
v___x_1142_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_trimRight_go___redArg(v___x_1141_);
return v___x_1142_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_trimRight(lean_object* v_i_1143_, lean_object* v_inline_1144_){
_start:
{
lean_object* v___x_1145_; 
v___x_1145_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_trimRight___redArg(v_inline_1144_);
return v___x_1145_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_trim___redArg(lean_object* v_inline_1146_){
_start:
{
lean_object* v___x_1147_; lean_object* v_fst_1148_; lean_object* v_snd_1149_; lean_object* v___x_1151_; uint8_t v_isShared_1152_; uint8_t v_isSharedCheck_1157_; 
v___x_1147_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft___redArg(v_inline_1146_);
v_fst_1148_ = lean_ctor_get(v___x_1147_, 0);
v_snd_1149_ = lean_ctor_get(v___x_1147_, 1);
v_isSharedCheck_1157_ = !lean_is_exclusive(v___x_1147_);
if (v_isSharedCheck_1157_ == 0)
{
v___x_1151_ = v___x_1147_;
v_isShared_1152_ = v_isSharedCheck_1157_;
goto v_resetjp_1150_;
}
else
{
lean_inc(v_snd_1149_);
lean_inc(v_fst_1148_);
lean_dec(v___x_1147_);
v___x_1151_ = lean_box(0);
v_isShared_1152_ = v_isSharedCheck_1157_;
goto v_resetjp_1150_;
}
v_resetjp_1150_:
{
lean_object* v___x_1153_; lean_object* v___x_1155_; 
v___x_1153_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_trimRight___redArg(v_snd_1149_);
if (v_isShared_1152_ == 0)
{
lean_ctor_set(v___x_1151_, 1, v___x_1153_);
v___x_1155_ = v___x_1151_;
goto v_reusejp_1154_;
}
else
{
lean_object* v_reuseFailAlloc_1156_; 
v_reuseFailAlloc_1156_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1156_, 0, v_fst_1148_);
lean_ctor_set(v_reuseFailAlloc_1156_, 1, v___x_1153_);
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
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_trim(lean_object* v_i_1158_, lean_object* v_inline_1159_){
_start:
{
lean_object* v___x_1160_; 
v___x_1160_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_trim___redArg(v_inline_1159_);
return v___x_1160_;
}
}
static lean_object* _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__0(void){
_start:
{
lean_object* v___x_1161_; 
v___x_1161_ = l_instMonadEIO___redArg();
return v___x_1161_;
}
}
static lean_object* _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__1(void){
_start:
{
lean_object* v___x_1162_; lean_object* v___x_1163_; 
v___x_1162_ = lean_obj_once(&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__0, &l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__0_once, _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__0);
v___x_1163_ = l_StateRefT_x27_instMonad___redArg(v___x_1162_);
return v___x_1163_;
}
}
static lean_object* _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__16(void){
_start:
{
lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; 
v___x_1192_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__13));
v___x_1193_ = lean_unsigned_to_nat(3u);
v___x_1194_ = lean_mk_empty_array_with_capacity(v___x_1193_);
v___x_1195_ = lean_array_push(v___x_1194_, v___x_1192_);
return v___x_1195_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___boxed(lean_object* v_inst_1198_, lean_object* v_x_1199_, lean_object* v_x_1200_, lean_object* v_a_1201_, lean_object* v_a_1202_, lean_object* v_a_1203_, lean_object* v_a_1204_){
_start:
{
lean_object* v_res_1205_; 
v_res_1205_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg(v_inst_1198_, v_x_1199_, v_x_1200_, v_a_1201_, v_a_1202_, v_a_1203_);
lean_dec(v_a_1203_);
lean_dec_ref(v_a_1202_);
lean_dec(v_a_1201_);
return v_res_1205_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg(lean_object* v_inst_1206_, lean_object* v_x_1207_, lean_object* v_x_1208_, lean_object* v_a_1209_, lean_object* v_a_1210_, lean_object* v_a_1211_){
_start:
{
lean_object* v_pieces_1214_; lean_object* v_pieces_1218_; lean_object* v___x_1221_; lean_object* v_toApplicative_1222_; lean_object* v_toFunctor_1223_; lean_object* v_toSeq_1224_; lean_object* v_toSeqLeft_1225_; lean_object* v_toSeqRight_1226_; lean_object* v___f_1227_; lean_object* v___f_1228_; lean_object* v___f_1229_; lean_object* v___f_1230_; lean_object* v___x_1231_; lean_object* v___f_1232_; lean_object* v___f_1233_; lean_object* v___f_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; 
v___x_1221_ = lean_obj_once(&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__1, &l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__1_once, _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__1);
v_toApplicative_1222_ = lean_ctor_get(v___x_1221_, 0);
v_toFunctor_1223_ = lean_ctor_get(v_toApplicative_1222_, 0);
v_toSeq_1224_ = lean_ctor_get(v_toApplicative_1222_, 2);
v_toSeqLeft_1225_ = lean_ctor_get(v_toApplicative_1222_, 3);
v_toSeqRight_1226_ = lean_ctor_get(v_toApplicative_1222_, 4);
v___f_1227_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__2));
v___f_1228_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_1223_, 2);
v___f_1229_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1229_, 0, v_toFunctor_1223_);
v___f_1230_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1230_, 0, v_toFunctor_1223_);
v___x_1231_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1231_, 0, v___f_1229_);
lean_ctor_set(v___x_1231_, 1, v___f_1230_);
lean_inc(v_toSeqRight_1226_);
v___f_1232_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1232_, 0, v_toSeqRight_1226_);
lean_inc(v_toSeqLeft_1225_);
v___f_1233_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1233_, 0, v_toSeqLeft_1225_);
lean_inc(v_toSeq_1224_);
v___f_1234_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1234_, 0, v_toSeq_1224_);
v___x_1235_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1235_, 0, v___x_1231_);
lean_ctor_set(v___x_1235_, 1, v___f_1227_);
lean_ctor_set(v___x_1235_, 2, v___f_1234_);
lean_ctor_set(v___x_1235_, 3, v___f_1233_);
lean_ctor_set(v___x_1235_, 4, v___f_1232_);
v___x_1236_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1236_, 0, v___x_1235_);
lean_ctor_set(v___x_1236_, 1, v___f_1228_);
v___x_1237_ = l_StateRefT_x27_instMonad___redArg(v___x_1236_);
switch(lean_obj_tag(v_x_1208_))
{
case 0:
{
lean_object* v_string_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; 
lean_dec_ref(v___x_1237_);
lean_dec_ref(v_x_1207_);
lean_dec_ref(v_inst_1206_);
v_string_1238_ = lean_ctor_get(v_x_1208_, 0);
lean_inc_ref(v_string_1238_);
lean_dec_ref_known(v_x_1208_, 1);
v___x_1239_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_escape(v_string_1238_);
lean_dec_ref(v_string_1238_);
v___x_1240_ = lean_unsigned_to_nat(1u);
v___x_1241_ = lean_mk_empty_array_with_capacity(v___x_1240_);
v___x_1242_ = lean_array_push(v___x_1241_, v___x_1239_);
v___x_1243_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1243_, 0, v___x_1242_);
return v___x_1243_;
}
case 1:
{
lean_object* v_content_1244_; lean_object* v___x_1246_; uint8_t v_isShared_1247_; uint8_t v_isSharedCheck_1295_; 
lean_dec_ref(v___x_1237_);
v_content_1244_ = lean_ctor_get(v_x_1208_, 0);
v_isSharedCheck_1295_ = !lean_is_exclusive(v_x_1208_);
if (v_isSharedCheck_1295_ == 0)
{
v___x_1246_ = v_x_1208_;
v_isShared_1247_ = v_isSharedCheck_1295_;
goto v_resetjp_1245_;
}
else
{
lean_inc(v_content_1244_);
lean_dec(v_x_1208_);
v___x_1246_ = lean_box(0);
v_isShared_1247_ = v_isSharedCheck_1295_;
goto v_resetjp_1245_;
}
v_resetjp_1245_:
{
lean_object* v___x_1249_; 
if (v_isShared_1247_ == 0)
{
lean_ctor_set_tag(v___x_1246_, 9);
v___x_1249_ = v___x_1246_;
goto v_reusejp_1248_;
}
else
{
lean_object* v_reuseFailAlloc_1294_; 
v_reuseFailAlloc_1294_ = lean_alloc_ctor(9, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1294_, 0, v_content_1244_);
v___x_1249_ = v_reuseFailAlloc_1294_;
goto v_reusejp_1248_;
}
v_reusejp_1248_:
{
lean_object* v___x_1250_; lean_object* v_snd_1251_; lean_object* v_fst_1252_; lean_object* v_fst_1253_; lean_object* v_snd_1254_; lean_object* v_pieces_1256_; uint8_t v_inEmph_1264_; uint8_t v_inBold_1265_; uint8_t v_inLink_1266_; lean_object* v___x_1268_; uint8_t v_isShared_1269_; uint8_t v_isSharedCheck_1293_; 
v___x_1250_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_trim___redArg(v___x_1249_);
v_snd_1251_ = lean_ctor_get(v___x_1250_, 1);
lean_inc(v_snd_1251_);
v_fst_1252_ = lean_ctor_get(v___x_1250_, 0);
lean_inc(v_fst_1252_);
lean_dec_ref(v___x_1250_);
v_fst_1253_ = lean_ctor_get(v_snd_1251_, 0);
lean_inc(v_fst_1253_);
v_snd_1254_ = lean_ctor_get(v_snd_1251_, 1);
lean_inc(v_snd_1254_);
lean_dec(v_snd_1251_);
v_inEmph_1264_ = lean_ctor_get_uint8(v_x_1207_, 0);
v_inBold_1265_ = lean_ctor_get_uint8(v_x_1207_, 1);
v_inLink_1266_ = lean_ctor_get_uint8(v_x_1207_, 2);
v_isSharedCheck_1293_ = !lean_is_exclusive(v_x_1207_);
if (v_isSharedCheck_1293_ == 0)
{
v___x_1268_ = v_x_1207_;
v_isShared_1269_ = v_isSharedCheck_1293_;
goto v_resetjp_1267_;
}
else
{
lean_dec(v_x_1207_);
v___x_1268_ = lean_box(0);
v_isShared_1269_ = v_isSharedCheck_1293_;
goto v_resetjp_1267_;
}
v___jp_1255_:
{
lean_object* v___x_1257_; lean_object* v___x_1258_; uint8_t v___x_1259_; 
v___x_1257_ = lean_string_utf8_byte_size(v_snd_1254_);
v___x_1258_ = lean_unsigned_to_nat(0u);
v___x_1259_ = lean_nat_dec_eq(v___x_1257_, v___x_1258_);
if (v___x_1259_ == 0)
{
lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; 
v___x_1260_ = lean_unsigned_to_nat(1u);
v___x_1261_ = lean_mk_empty_array_with_capacity(v___x_1260_);
v___x_1262_ = lean_array_push(v___x_1261_, v_snd_1254_);
v___x_1263_ = lean_array_push(v_pieces_1256_, v___x_1262_);
v_pieces_1218_ = v___x_1263_;
goto v___jp_1217_;
}
else
{
lean_dec(v_snd_1254_);
v_pieces_1218_ = v_pieces_1256_;
goto v___jp_1217_;
}
}
v_resetjp_1267_:
{
uint8_t v___x_1270_; lean_object* v___x_1272_; 
v___x_1270_ = 1;
if (v_isShared_1269_ == 0)
{
v___x_1272_ = v___x_1268_;
goto v_reusejp_1271_;
}
else
{
lean_object* v_reuseFailAlloc_1292_; 
v_reuseFailAlloc_1292_ = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(v_reuseFailAlloc_1292_, 1, v_inBold_1265_);
lean_ctor_set_uint8(v_reuseFailAlloc_1292_, 2, v_inLink_1266_);
v___x_1272_ = v_reuseFailAlloc_1292_;
goto v_reusejp_1271_;
}
v_reusejp_1271_:
{
lean_object* v___x_1273_; 
lean_ctor_set_uint8(v___x_1272_, 0, v___x_1270_);
v___x_1273_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg(v_inst_1206_, v___x_1272_, v_fst_1253_, v_a_1209_, v_a_1210_, v_a_1211_);
if (lean_obj_tag(v___x_1273_) == 0)
{
lean_object* v_a_1274_; lean_object* v_pieces_1276_; lean_object* v_pieces_1281_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; uint8_t v___x_1287_; 
v_a_1274_ = lean_ctor_get(v___x_1273_, 0);
lean_inc(v_a_1274_);
lean_dec_ref_known(v___x_1273_, 1);
v___x_1284_ = lean_unsigned_to_nat(0u);
v___x_1285_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__6));
v___x_1286_ = lean_string_utf8_byte_size(v_fst_1252_);
v___x_1287_ = lean_nat_dec_eq(v___x_1286_, v___x_1284_);
if (v___x_1287_ == 0)
{
lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; 
v___x_1288_ = lean_unsigned_to_nat(1u);
v___x_1289_ = lean_mk_empty_array_with_capacity(v___x_1288_);
v___x_1290_ = lean_array_push(v___x_1289_, v_fst_1252_);
v___x_1291_ = lean_array_push(v___x_1285_, v___x_1290_);
v_pieces_1281_ = v___x_1291_;
goto v___jp_1280_;
}
else
{
lean_dec(v_fst_1252_);
v_pieces_1281_ = v___x_1285_;
goto v___jp_1280_;
}
v___jp_1275_:
{
lean_object* v___x_1277_; 
v___x_1277_ = lean_array_push(v_pieces_1276_, v_a_1274_);
if (v_inEmph_1264_ == 0)
{
lean_object* v___x_1278_; lean_object* v___x_1279_; 
v___x_1278_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__5));
v___x_1279_ = lean_array_push(v___x_1277_, v___x_1278_);
v_pieces_1256_ = v___x_1279_;
goto v___jp_1255_;
}
else
{
v_pieces_1256_ = v___x_1277_;
goto v___jp_1255_;
}
}
v___jp_1280_:
{
if (v_inEmph_1264_ == 0)
{
lean_object* v___x_1282_; lean_object* v___x_1283_; 
v___x_1282_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__5));
v___x_1283_ = lean_array_push(v_pieces_1281_, v___x_1282_);
v_pieces_1276_ = v___x_1283_;
goto v___jp_1275_;
}
else
{
v_pieces_1276_ = v_pieces_1281_;
goto v___jp_1275_;
}
}
}
else
{
lean_dec(v_snd_1254_);
lean_dec(v_fst_1252_);
return v___x_1273_;
}
}
}
}
}
}
case 2:
{
lean_object* v_content_1296_; lean_object* v___x_1298_; uint8_t v_isShared_1299_; uint8_t v_isSharedCheck_1347_; 
lean_dec_ref(v___x_1237_);
v_content_1296_ = lean_ctor_get(v_x_1208_, 0);
v_isSharedCheck_1347_ = !lean_is_exclusive(v_x_1208_);
if (v_isSharedCheck_1347_ == 0)
{
v___x_1298_ = v_x_1208_;
v_isShared_1299_ = v_isSharedCheck_1347_;
goto v_resetjp_1297_;
}
else
{
lean_inc(v_content_1296_);
lean_dec(v_x_1208_);
v___x_1298_ = lean_box(0);
v_isShared_1299_ = v_isSharedCheck_1347_;
goto v_resetjp_1297_;
}
v_resetjp_1297_:
{
lean_object* v___x_1301_; 
if (v_isShared_1299_ == 0)
{
lean_ctor_set_tag(v___x_1298_, 9);
v___x_1301_ = v___x_1298_;
goto v_reusejp_1300_;
}
else
{
lean_object* v_reuseFailAlloc_1346_; 
v_reuseFailAlloc_1346_ = lean_alloc_ctor(9, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1346_, 0, v_content_1296_);
v___x_1301_ = v_reuseFailAlloc_1346_;
goto v_reusejp_1300_;
}
v_reusejp_1300_:
{
lean_object* v___x_1302_; lean_object* v_snd_1303_; lean_object* v_fst_1304_; lean_object* v_fst_1305_; lean_object* v_snd_1306_; lean_object* v_pieces_1308_; uint8_t v_inEmph_1316_; uint8_t v_inBold_1317_; uint8_t v_inLink_1318_; lean_object* v___x_1320_; uint8_t v_isShared_1321_; uint8_t v_isSharedCheck_1345_; 
v___x_1302_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_trim___redArg(v___x_1301_);
v_snd_1303_ = lean_ctor_get(v___x_1302_, 1);
lean_inc(v_snd_1303_);
v_fst_1304_ = lean_ctor_get(v___x_1302_, 0);
lean_inc(v_fst_1304_);
lean_dec_ref(v___x_1302_);
v_fst_1305_ = lean_ctor_get(v_snd_1303_, 0);
lean_inc(v_fst_1305_);
v_snd_1306_ = lean_ctor_get(v_snd_1303_, 1);
lean_inc(v_snd_1306_);
lean_dec(v_snd_1303_);
v_inEmph_1316_ = lean_ctor_get_uint8(v_x_1207_, 0);
v_inBold_1317_ = lean_ctor_get_uint8(v_x_1207_, 1);
v_inLink_1318_ = lean_ctor_get_uint8(v_x_1207_, 2);
v_isSharedCheck_1345_ = !lean_is_exclusive(v_x_1207_);
if (v_isSharedCheck_1345_ == 0)
{
v___x_1320_ = v_x_1207_;
v_isShared_1321_ = v_isSharedCheck_1345_;
goto v_resetjp_1319_;
}
else
{
lean_dec(v_x_1207_);
v___x_1320_ = lean_box(0);
v_isShared_1321_ = v_isSharedCheck_1345_;
goto v_resetjp_1319_;
}
v___jp_1307_:
{
lean_object* v___x_1309_; lean_object* v___x_1310_; uint8_t v___x_1311_; 
v___x_1309_ = lean_string_utf8_byte_size(v_snd_1306_);
v___x_1310_ = lean_unsigned_to_nat(0u);
v___x_1311_ = lean_nat_dec_eq(v___x_1309_, v___x_1310_);
if (v___x_1311_ == 0)
{
lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; 
v___x_1312_ = lean_unsigned_to_nat(1u);
v___x_1313_ = lean_mk_empty_array_with_capacity(v___x_1312_);
v___x_1314_ = lean_array_push(v___x_1313_, v_snd_1306_);
v___x_1315_ = lean_array_push(v_pieces_1308_, v___x_1314_);
v_pieces_1214_ = v___x_1315_;
goto v___jp_1213_;
}
else
{
lean_dec(v_snd_1306_);
v_pieces_1214_ = v_pieces_1308_;
goto v___jp_1213_;
}
}
v_resetjp_1319_:
{
uint8_t v___x_1322_; lean_object* v___x_1324_; 
v___x_1322_ = 1;
if (v_isShared_1321_ == 0)
{
v___x_1324_ = v___x_1320_;
goto v_reusejp_1323_;
}
else
{
lean_object* v_reuseFailAlloc_1344_; 
v_reuseFailAlloc_1344_ = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(v_reuseFailAlloc_1344_, 0, v_inEmph_1316_);
lean_ctor_set_uint8(v_reuseFailAlloc_1344_, 2, v_inLink_1318_);
v___x_1324_ = v_reuseFailAlloc_1344_;
goto v_reusejp_1323_;
}
v_reusejp_1323_:
{
lean_object* v___x_1325_; 
lean_ctor_set_uint8(v___x_1324_, 1, v___x_1322_);
v___x_1325_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg(v_inst_1206_, v___x_1324_, v_fst_1305_, v_a_1209_, v_a_1210_, v_a_1211_);
if (lean_obj_tag(v___x_1325_) == 0)
{
lean_object* v_a_1326_; lean_object* v_pieces_1328_; lean_object* v_pieces_1333_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; uint8_t v___x_1339_; 
v_a_1326_ = lean_ctor_get(v___x_1325_, 0);
lean_inc(v_a_1326_);
lean_dec_ref_known(v___x_1325_, 1);
v___x_1336_ = lean_unsigned_to_nat(0u);
v___x_1337_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__6));
v___x_1338_ = lean_string_utf8_byte_size(v_fst_1304_);
v___x_1339_ = lean_nat_dec_eq(v___x_1338_, v___x_1336_);
if (v___x_1339_ == 0)
{
lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; 
v___x_1340_ = lean_unsigned_to_nat(1u);
v___x_1341_ = lean_mk_empty_array_with_capacity(v___x_1340_);
v___x_1342_ = lean_array_push(v___x_1341_, v_fst_1304_);
v___x_1343_ = lean_array_push(v___x_1337_, v___x_1342_);
v_pieces_1333_ = v___x_1343_;
goto v___jp_1332_;
}
else
{
lean_dec(v_fst_1304_);
v_pieces_1333_ = v___x_1337_;
goto v___jp_1332_;
}
v___jp_1327_:
{
lean_object* v___x_1329_; 
v___x_1329_ = lean_array_push(v_pieces_1328_, v_a_1326_);
if (v_inBold_1317_ == 0)
{
lean_object* v___x_1330_; lean_object* v___x_1331_; 
v___x_1330_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__8));
v___x_1331_ = lean_array_push(v___x_1329_, v___x_1330_);
v_pieces_1308_ = v___x_1331_;
goto v___jp_1307_;
}
else
{
v_pieces_1308_ = v___x_1329_;
goto v___jp_1307_;
}
}
v___jp_1332_:
{
if (v_inBold_1317_ == 0)
{
lean_object* v___x_1334_; lean_object* v___x_1335_; 
v___x_1334_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__8));
v___x_1335_ = lean_array_push(v_pieces_1333_, v___x_1334_);
v_pieces_1328_ = v___x_1335_;
goto v___jp_1327_;
}
else
{
v_pieces_1328_ = v_pieces_1333_;
goto v___jp_1327_;
}
}
}
else
{
lean_dec(v_snd_1306_);
lean_dec(v_fst_1304_);
return v___x_1325_;
}
}
}
}
}
}
case 3:
{
lean_object* v_string_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; 
lean_dec_ref(v___x_1237_);
lean_dec_ref(v_x_1207_);
lean_dec_ref(v_inst_1206_);
v_string_1348_ = lean_ctor_get(v_x_1208_, 0);
lean_inc_ref(v_string_1348_);
lean_dec_ref_known(v_x_1208_, 1);
v___x_1349_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_quoteCode(v_string_1348_);
v___x_1350_ = lean_unsigned_to_nat(1u);
v___x_1351_ = lean_mk_empty_array_with_capacity(v___x_1350_);
v___x_1352_ = lean_array_push(v___x_1351_, v___x_1349_);
v___x_1353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1353_, 0, v___x_1352_);
return v___x_1353_;
}
case 4:
{
uint8_t v_mode_1354_; 
lean_dec_ref(v___x_1237_);
lean_dec_ref(v_x_1207_);
lean_dec_ref(v_inst_1206_);
v_mode_1354_ = lean_ctor_get_uint8(v_x_1208_, sizeof(void*)*1);
if (v_mode_1354_ == 0)
{
lean_object* v_string_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; 
v_string_1355_ = lean_ctor_get(v_x_1208_, 0);
lean_inc_ref(v_string_1355_);
lean_dec_ref_known(v_x_1208_, 1);
v___x_1356_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__9));
v___x_1357_ = lean_string_append(v___x_1356_, v_string_1355_);
lean_dec_ref(v_string_1355_);
v___x_1358_ = lean_string_append(v___x_1357_, v___x_1356_);
v___x_1359_ = lean_unsigned_to_nat(1u);
v___x_1360_ = lean_mk_empty_array_with_capacity(v___x_1359_);
v___x_1361_ = lean_array_push(v___x_1360_, v___x_1358_);
v___x_1362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1362_, 0, v___x_1361_);
return v___x_1362_;
}
else
{
lean_object* v_string_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; 
v_string_1363_ = lean_ctor_get(v_x_1208_, 0);
lean_inc_ref(v_string_1363_);
lean_dec_ref_known(v_x_1208_, 1);
v___x_1364_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__10));
v___x_1365_ = lean_string_append(v___x_1364_, v_string_1363_);
lean_dec_ref(v_string_1363_);
v___x_1366_ = lean_string_append(v___x_1365_, v___x_1364_);
v___x_1367_ = lean_unsigned_to_nat(1u);
v___x_1368_ = lean_mk_empty_array_with_capacity(v___x_1367_);
v___x_1369_ = lean_array_push(v___x_1368_, v___x_1366_);
v___x_1370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1370_, 0, v___x_1369_);
return v___x_1370_;
}
}
case 5:
{
lean_object* v___x_1371_; lean_object* v___x_1372_; 
lean_dec_ref_known(v_x_1208_, 1);
lean_dec_ref(v___x_1237_);
lean_dec_ref(v_x_1207_);
lean_dec_ref(v_inst_1206_);
v___x_1371_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__11));
v___x_1372_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1372_, 0, v___x_1371_);
return v___x_1372_;
}
case 6:
{
uint8_t v_inLink_1373_; 
v_inLink_1373_ = lean_ctor_get_uint8(v_x_1207_, 2);
if (v_inLink_1373_ == 0)
{
lean_object* v_content_1374_; lean_object* v_url_1375_; uint8_t v_inEmph_1376_; uint8_t v_inBold_1377_; lean_object* v___x_1379_; uint8_t v_isShared_1380_; uint8_t v_isSharedCheck_1406_; 
lean_dec_ref(v___x_1237_);
v_content_1374_ = lean_ctor_get(v_x_1208_, 0);
lean_inc_ref(v_content_1374_);
v_url_1375_ = lean_ctor_get(v_x_1208_, 1);
lean_inc_ref(v_url_1375_);
lean_dec_ref_known(v_x_1208_, 2);
v_inEmph_1376_ = lean_ctor_get_uint8(v_x_1207_, 0);
v_inBold_1377_ = lean_ctor_get_uint8(v_x_1207_, 1);
v_isSharedCheck_1406_ = !lean_is_exclusive(v_x_1207_);
if (v_isSharedCheck_1406_ == 0)
{
v___x_1379_ = v_x_1207_;
v_isShared_1380_ = v_isSharedCheck_1406_;
goto v_resetjp_1378_;
}
else
{
lean_dec(v_x_1207_);
v___x_1379_ = lean_box(0);
v_isShared_1380_ = v_isSharedCheck_1406_;
goto v_resetjp_1378_;
}
v_resetjp_1378_:
{
uint8_t v___x_1381_; lean_object* v___x_1383_; 
v___x_1381_ = 1;
if (v_isShared_1380_ == 0)
{
v___x_1383_ = v___x_1379_;
goto v_reusejp_1382_;
}
else
{
lean_object* v_reuseFailAlloc_1405_; 
v_reuseFailAlloc_1405_ = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(v_reuseFailAlloc_1405_, 0, v_inEmph_1376_);
lean_ctor_set_uint8(v_reuseFailAlloc_1405_, 1, v_inBold_1377_);
v___x_1383_ = v_reuseFailAlloc_1405_;
goto v_reusejp_1382_;
}
v_reusejp_1382_:
{
lean_object* v___x_1384_; lean_object* v___x_1385_; 
lean_ctor_set_uint8(v___x_1383_, 2, v___x_1381_);
v___x_1384_ = lean_alloc_ctor(9, 1, 0);
lean_ctor_set(v___x_1384_, 0, v_content_1374_);
v___x_1385_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg(v_inst_1206_, v___x_1383_, v___x_1384_, v_a_1209_, v_a_1210_, v_a_1211_);
if (lean_obj_tag(v___x_1385_) == 0)
{
lean_object* v_a_1386_; lean_object* v___x_1388_; uint8_t v_isShared_1389_; uint8_t v_isSharedCheck_1404_; 
v_a_1386_ = lean_ctor_get(v___x_1385_, 0);
v_isSharedCheck_1404_ = !lean_is_exclusive(v___x_1385_);
if (v_isSharedCheck_1404_ == 0)
{
v___x_1388_ = v___x_1385_;
v_isShared_1389_ = v_isSharedCheck_1404_;
goto v_resetjp_1387_;
}
else
{
lean_inc(v_a_1386_);
lean_dec(v___x_1385_);
v___x_1388_ = lean_box(0);
v_isShared_1389_ = v_isSharedCheck_1404_;
goto v_resetjp_1387_;
}
v_resetjp_1387_:
{
lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1402_; 
v___x_1390_ = lean_unsigned_to_nat(1u);
v___x_1391_ = lean_mk_empty_array_with_capacity(v___x_1390_);
v___x_1392_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__14));
v___x_1393_ = lean_string_append(v___x_1392_, v_url_1375_);
lean_dec_ref(v_url_1375_);
v___x_1394_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__15));
v___x_1395_ = lean_string_append(v___x_1393_, v___x_1394_);
v___x_1396_ = lean_array_push(v___x_1391_, v___x_1395_);
v___x_1397_ = lean_obj_once(&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__16, &l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__16_once, _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__16);
v___x_1398_ = lean_array_push(v___x_1397_, v_a_1386_);
v___x_1399_ = lean_array_push(v___x_1398_, v___x_1396_);
v___x_1400_ = l_Lean_Doc_joinInlines(v___x_1399_);
lean_dec_ref(v___x_1399_);
if (v_isShared_1389_ == 0)
{
lean_ctor_set(v___x_1388_, 0, v___x_1400_);
v___x_1402_ = v___x_1388_;
goto v_reusejp_1401_;
}
else
{
lean_object* v_reuseFailAlloc_1403_; 
v_reuseFailAlloc_1403_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1403_, 0, v___x_1400_);
v___x_1402_ = v_reuseFailAlloc_1403_;
goto v_reusejp_1401_;
}
v_reusejp_1401_:
{
return v___x_1402_;
}
}
}
else
{
lean_dec_ref(v_url_1375_);
return v___x_1385_;
}
}
}
}
else
{
lean_object* v_content_1407_; lean_object* v___x_1408_; size_t v_sz_1409_; size_t v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_4381__overap_1413_; lean_object* v___x_1414_; 
v_content_1407_ = lean_ctor_get(v_x_1208_, 0);
lean_inc_ref(v_content_1407_);
lean_dec_ref_known(v_x_1208_, 2);
v___x_1408_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___boxed), 7, 2);
lean_closure_set(v___x_1408_, 0, v_inst_1206_);
lean_closure_set(v___x_1408_, 1, v_x_1207_);
v_sz_1409_ = lean_array_size(v_content_1407_);
v___x_1410_ = ((size_t)0ULL);
v___x_1411_ = l_unsafeCast___redArg(v_content_1407_);
lean_dec_ref(v_content_1407_);
v___x_1412_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1237_, v___x_1408_, v_sz_1409_, v___x_1410_, v___x_1411_);
v___x_4381__overap_1413_ = l_unsafeCast___redArg(v___x_1412_);
lean_dec(v___x_1412_);
lean_inc(v_a_1211_);
lean_inc_ref(v_a_1210_);
lean_inc(v_a_1209_);
v___x_1414_ = lean_apply_4(v___x_4381__overap_1413_, v_a_1209_, v_a_1210_, v_a_1211_, lean_box(0));
if (lean_obj_tag(v___x_1414_) == 0)
{
lean_object* v_a_1415_; lean_object* v___x_1417_; uint8_t v_isShared_1418_; uint8_t v_isSharedCheck_1423_; 
v_a_1415_ = lean_ctor_get(v___x_1414_, 0);
v_isSharedCheck_1423_ = !lean_is_exclusive(v___x_1414_);
if (v_isSharedCheck_1423_ == 0)
{
v___x_1417_ = v___x_1414_;
v_isShared_1418_ = v_isSharedCheck_1423_;
goto v_resetjp_1416_;
}
else
{
lean_inc(v_a_1415_);
lean_dec(v___x_1414_);
v___x_1417_ = lean_box(0);
v_isShared_1418_ = v_isSharedCheck_1423_;
goto v_resetjp_1416_;
}
v_resetjp_1416_:
{
lean_object* v___x_1419_; lean_object* v___x_1421_; 
v___x_1419_ = l_Lean_Doc_joinInlines(v_a_1415_);
lean_dec(v_a_1415_);
if (v_isShared_1418_ == 0)
{
lean_ctor_set(v___x_1417_, 0, v___x_1419_);
v___x_1421_ = v___x_1417_;
goto v_reusejp_1420_;
}
else
{
lean_object* v_reuseFailAlloc_1422_; 
v_reuseFailAlloc_1422_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1422_, 0, v___x_1419_);
v___x_1421_ = v_reuseFailAlloc_1422_;
goto v_reusejp_1420_;
}
v_reusejp_1420_:
{
return v___x_1421_;
}
}
}
else
{
lean_object* v_a_1424_; lean_object* v___x_1426_; uint8_t v_isShared_1427_; uint8_t v_isSharedCheck_1431_; 
v_a_1424_ = lean_ctor_get(v___x_1414_, 0);
v_isSharedCheck_1431_ = !lean_is_exclusive(v___x_1414_);
if (v_isSharedCheck_1431_ == 0)
{
v___x_1426_ = v___x_1414_;
v_isShared_1427_ = v_isSharedCheck_1431_;
goto v_resetjp_1425_;
}
else
{
lean_inc(v_a_1424_);
lean_dec(v___x_1414_);
v___x_1426_ = lean_box(0);
v_isShared_1427_ = v_isSharedCheck_1431_;
goto v_resetjp_1425_;
}
v_resetjp_1425_:
{
lean_object* v___x_1429_; 
if (v_isShared_1427_ == 0)
{
v___x_1429_ = v___x_1426_;
goto v_reusejp_1428_;
}
else
{
lean_object* v_reuseFailAlloc_1430_; 
v_reuseFailAlloc_1430_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1430_, 0, v_a_1424_);
v___x_1429_ = v_reuseFailAlloc_1430_;
goto v_reusejp_1428_;
}
v_reusejp_1428_:
{
return v___x_1429_;
}
}
}
}
}
case 7:
{
lean_object* v_name_1432_; lean_object* v_content_1433_; lean_object* v___x_1434_; size_t v_sz_1435_; size_t v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_4384__overap_1439_; lean_object* v___x_1440_; 
v_name_1432_ = lean_ctor_get(v_x_1208_, 0);
lean_inc_ref(v_name_1432_);
v_content_1433_ = lean_ctor_get(v_x_1208_, 1);
lean_inc_ref(v_content_1433_);
lean_dec_ref_known(v_x_1208_, 2);
v___x_1434_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___boxed), 7, 2);
lean_closure_set(v___x_1434_, 0, v_inst_1206_);
lean_closure_set(v___x_1434_, 1, v_x_1207_);
v_sz_1435_ = lean_array_size(v_content_1433_);
v___x_1436_ = ((size_t)0ULL);
v___x_1437_ = l_unsafeCast___redArg(v_content_1433_);
lean_dec_ref(v_content_1433_);
v___x_1438_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1237_, v___x_1434_, v_sz_1435_, v___x_1436_, v___x_1437_);
v___x_4384__overap_1439_ = l_unsafeCast___redArg(v___x_1438_);
lean_dec(v___x_1438_);
lean_inc(v_a_1211_);
lean_inc_ref(v_a_1210_);
lean_inc(v_a_1209_);
v___x_1440_ = lean_apply_4(v___x_4384__overap_1439_, v_a_1209_, v_a_1210_, v_a_1211_, lean_box(0));
if (lean_obj_tag(v___x_1440_) == 0)
{
lean_object* v_a_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; 
v_a_1441_ = lean_ctor_get(v___x_1440_, 0);
lean_inc(v_a_1441_);
lean_dec_ref_known(v___x_1440_, 1);
v___x_1442_ = ((lean_object*)(l_Lean_Doc_MarkdownM_run_x27___closed__1));
v___x_1443_ = l_Lean_Doc_joinInlines(v_a_1441_);
lean_dec(v_a_1441_);
v___x_1444_ = lean_array_to_list(v___x_1443_);
v___x_1445_ = l_String_intercalate(v___x_1442_, v___x_1444_);
lean_inc_ref(v_name_1432_);
v___x_1446_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_MarkdownM_addFootnote___redArg(v_name_1432_, v___x_1445_, v_a_1209_);
if (lean_obj_tag(v___x_1446_) == 0)
{
lean_object* v___x_1448_; uint8_t v_isShared_1449_; uint8_t v_isSharedCheck_1460_; 
v_isSharedCheck_1460_ = !lean_is_exclusive(v___x_1446_);
if (v_isSharedCheck_1460_ == 0)
{
lean_object* v_unused_1461_; 
v_unused_1461_ = lean_ctor_get(v___x_1446_, 0);
lean_dec(v_unused_1461_);
v___x_1448_ = v___x_1446_;
v_isShared_1449_ = v_isSharedCheck_1460_;
goto v_resetjp_1447_;
}
else
{
lean_dec(v___x_1446_);
v___x_1448_ = lean_box(0);
v_isShared_1449_ = v_isSharedCheck_1460_;
goto v_resetjp_1447_;
}
v_resetjp_1447_:
{
lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1458_; 
v___x_1450_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Doc_MarkdownM_run_x27_spec__0___closed__0));
v___x_1451_ = lean_string_append(v___x_1450_, v_name_1432_);
lean_dec_ref(v_name_1432_);
v___x_1452_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__17));
v___x_1453_ = lean_string_append(v___x_1451_, v___x_1452_);
v___x_1454_ = lean_unsigned_to_nat(1u);
v___x_1455_ = lean_mk_empty_array_with_capacity(v___x_1454_);
v___x_1456_ = lean_array_push(v___x_1455_, v___x_1453_);
if (v_isShared_1449_ == 0)
{
lean_ctor_set(v___x_1448_, 0, v___x_1456_);
v___x_1458_ = v___x_1448_;
goto v_reusejp_1457_;
}
else
{
lean_object* v_reuseFailAlloc_1459_; 
v_reuseFailAlloc_1459_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1459_, 0, v___x_1456_);
v___x_1458_ = v_reuseFailAlloc_1459_;
goto v_reusejp_1457_;
}
v_reusejp_1457_:
{
return v___x_1458_;
}
}
}
else
{
lean_object* v_a_1462_; lean_object* v___x_1464_; uint8_t v_isShared_1465_; uint8_t v_isSharedCheck_1469_; 
lean_dec_ref(v_name_1432_);
v_a_1462_ = lean_ctor_get(v___x_1446_, 0);
v_isSharedCheck_1469_ = !lean_is_exclusive(v___x_1446_);
if (v_isSharedCheck_1469_ == 0)
{
v___x_1464_ = v___x_1446_;
v_isShared_1465_ = v_isSharedCheck_1469_;
goto v_resetjp_1463_;
}
else
{
lean_inc(v_a_1462_);
lean_dec(v___x_1446_);
v___x_1464_ = lean_box(0);
v_isShared_1465_ = v_isSharedCheck_1469_;
goto v_resetjp_1463_;
}
v_resetjp_1463_:
{
lean_object* v___x_1467_; 
if (v_isShared_1465_ == 0)
{
v___x_1467_ = v___x_1464_;
goto v_reusejp_1466_;
}
else
{
lean_object* v_reuseFailAlloc_1468_; 
v_reuseFailAlloc_1468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1468_, 0, v_a_1462_);
v___x_1467_ = v_reuseFailAlloc_1468_;
goto v_reusejp_1466_;
}
v_reusejp_1466_:
{
return v___x_1467_;
}
}
}
}
else
{
lean_object* v_a_1470_; lean_object* v___x_1472_; uint8_t v_isShared_1473_; uint8_t v_isSharedCheck_1477_; 
lean_dec_ref(v_name_1432_);
v_a_1470_ = lean_ctor_get(v___x_1440_, 0);
v_isSharedCheck_1477_ = !lean_is_exclusive(v___x_1440_);
if (v_isSharedCheck_1477_ == 0)
{
v___x_1472_ = v___x_1440_;
v_isShared_1473_ = v_isSharedCheck_1477_;
goto v_resetjp_1471_;
}
else
{
lean_inc(v_a_1470_);
lean_dec(v___x_1440_);
v___x_1472_ = lean_box(0);
v_isShared_1473_ = v_isSharedCheck_1477_;
goto v_resetjp_1471_;
}
v_resetjp_1471_:
{
lean_object* v___x_1475_; 
if (v_isShared_1473_ == 0)
{
v___x_1475_ = v___x_1472_;
goto v_reusejp_1474_;
}
else
{
lean_object* v_reuseFailAlloc_1476_; 
v_reuseFailAlloc_1476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1476_, 0, v_a_1470_);
v___x_1475_ = v_reuseFailAlloc_1476_;
goto v_reusejp_1474_;
}
v_reusejp_1474_:
{
return v___x_1475_;
}
}
}
}
case 8:
{
lean_object* v_alt_1478_; lean_object* v_url_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; 
lean_dec_ref(v___x_1237_);
lean_dec_ref(v_x_1207_);
lean_dec_ref(v_inst_1206_);
v_alt_1478_ = lean_ctor_get(v_x_1208_, 0);
lean_inc_ref(v_alt_1478_);
v_url_1479_ = lean_ctor_get(v_x_1208_, 1);
lean_inc_ref(v_url_1479_);
lean_dec_ref_known(v_x_1208_, 2);
v___x_1480_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__18));
v___x_1481_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_escape(v_alt_1478_);
lean_dec_ref(v_alt_1478_);
v___x_1482_ = lean_string_append(v___x_1480_, v___x_1481_);
lean_dec_ref(v___x_1481_);
v___x_1483_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__14));
v___x_1484_ = lean_string_append(v___x_1482_, v___x_1483_);
v___x_1485_ = lean_string_append(v___x_1484_, v_url_1479_);
lean_dec_ref(v_url_1479_);
v___x_1486_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__15));
v___x_1487_ = lean_string_append(v___x_1485_, v___x_1486_);
v___x_1488_ = lean_unsigned_to_nat(1u);
v___x_1489_ = lean_mk_empty_array_with_capacity(v___x_1488_);
v___x_1490_ = lean_array_push(v___x_1489_, v___x_1487_);
v___x_1491_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1491_, 0, v___x_1490_);
return v___x_1491_;
}
case 9:
{
lean_object* v_content_1492_; lean_object* v___x_1493_; size_t v_sz_1494_; size_t v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_4388__overap_1498_; lean_object* v___x_1499_; 
v_content_1492_ = lean_ctor_get(v_x_1208_, 0);
lean_inc_ref(v_content_1492_);
lean_dec_ref_known(v_x_1208_, 1);
v___x_1493_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___boxed), 7, 2);
lean_closure_set(v___x_1493_, 0, v_inst_1206_);
lean_closure_set(v___x_1493_, 1, v_x_1207_);
v_sz_1494_ = lean_array_size(v_content_1492_);
v___x_1495_ = ((size_t)0ULL);
v___x_1496_ = l_unsafeCast___redArg(v_content_1492_);
lean_dec_ref(v_content_1492_);
v___x_1497_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1237_, v___x_1493_, v_sz_1494_, v___x_1495_, v___x_1496_);
v___x_4388__overap_1498_ = l_unsafeCast___redArg(v___x_1497_);
lean_dec(v___x_1497_);
lean_inc(v_a_1211_);
lean_inc_ref(v_a_1210_);
lean_inc(v_a_1209_);
v___x_1499_ = lean_apply_4(v___x_4388__overap_1498_, v_a_1209_, v_a_1210_, v_a_1211_, lean_box(0));
if (lean_obj_tag(v___x_1499_) == 0)
{
lean_object* v_a_1500_; lean_object* v___x_1502_; uint8_t v_isShared_1503_; uint8_t v_isSharedCheck_1508_; 
v_a_1500_ = lean_ctor_get(v___x_1499_, 0);
v_isSharedCheck_1508_ = !lean_is_exclusive(v___x_1499_);
if (v_isSharedCheck_1508_ == 0)
{
v___x_1502_ = v___x_1499_;
v_isShared_1503_ = v_isSharedCheck_1508_;
goto v_resetjp_1501_;
}
else
{
lean_inc(v_a_1500_);
lean_dec(v___x_1499_);
v___x_1502_ = lean_box(0);
v_isShared_1503_ = v_isSharedCheck_1508_;
goto v_resetjp_1501_;
}
v_resetjp_1501_:
{
lean_object* v___x_1504_; lean_object* v___x_1506_; 
v___x_1504_ = l_Lean_Doc_joinInlines(v_a_1500_);
lean_dec(v_a_1500_);
if (v_isShared_1503_ == 0)
{
lean_ctor_set(v___x_1502_, 0, v___x_1504_);
v___x_1506_ = v___x_1502_;
goto v_reusejp_1505_;
}
else
{
lean_object* v_reuseFailAlloc_1507_; 
v_reuseFailAlloc_1507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1507_, 0, v___x_1504_);
v___x_1506_ = v_reuseFailAlloc_1507_;
goto v_reusejp_1505_;
}
v_reusejp_1505_:
{
return v___x_1506_;
}
}
}
else
{
lean_object* v_a_1509_; lean_object* v___x_1511_; uint8_t v_isShared_1512_; uint8_t v_isSharedCheck_1516_; 
v_a_1509_ = lean_ctor_get(v___x_1499_, 0);
v_isSharedCheck_1516_ = !lean_is_exclusive(v___x_1499_);
if (v_isSharedCheck_1516_ == 0)
{
v___x_1511_ = v___x_1499_;
v_isShared_1512_ = v_isSharedCheck_1516_;
goto v_resetjp_1510_;
}
else
{
lean_inc(v_a_1509_);
lean_dec(v___x_1499_);
v___x_1511_ = lean_box(0);
v_isShared_1512_ = v_isSharedCheck_1516_;
goto v_resetjp_1510_;
}
v_resetjp_1510_:
{
lean_object* v___x_1514_; 
if (v_isShared_1512_ == 0)
{
v___x_1514_ = v___x_1511_;
goto v_reusejp_1513_;
}
else
{
lean_object* v_reuseFailAlloc_1515_; 
v_reuseFailAlloc_1515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1515_, 0, v_a_1509_);
v___x_1514_ = v_reuseFailAlloc_1515_;
goto v_reusejp_1513_;
}
v_reusejp_1513_:
{
return v___x_1514_;
}
}
}
}
default: 
{
lean_object* v_container_1517_; lean_object* v_content_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; 
lean_dec_ref(v___x_1237_);
v_container_1517_ = lean_ctor_get(v_x_1208_, 0);
lean_inc(v_container_1517_);
v_content_1518_ = lean_ctor_get(v_x_1208_, 1);
lean_inc_ref(v_content_1518_);
lean_dec_ref_known(v_x_1208_, 2);
lean_inc_ref(v_inst_1206_);
v___x_1519_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___boxed), 7, 2);
lean_closure_set(v___x_1519_, 0, v_inst_1206_);
lean_closure_set(v___x_1519_, 1, v_x_1207_);
lean_inc(v_a_1211_);
lean_inc_ref(v_a_1210_);
lean_inc(v_a_1209_);
v___x_1520_ = lean_apply_7(v_inst_1206_, v___x_1519_, v_container_1517_, v_content_1518_, v_a_1209_, v_a_1210_, v_a_1211_, lean_box(0));
return v___x_1520_;
}
}
v___jp_1213_:
{
lean_object* v___x_1215_; lean_object* v___x_1216_; 
v___x_1215_ = l_Lean_Doc_joinInlines(v_pieces_1214_);
lean_dec_ref(v_pieces_1214_);
v___x_1216_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1216_, 0, v___x_1215_);
return v___x_1216_;
}
v___jp_1217_:
{
lean_object* v___x_1219_; lean_object* v___x_1220_; 
v___x_1219_ = l_Lean_Doc_joinInlines(v_pieces_1218_);
lean_dec_ref(v_pieces_1218_);
v___x_1220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1220_, 0, v___x_1219_);
return v___x_1220_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown(lean_object* v_i_1521_, lean_object* v_inst_1522_, lean_object* v_x_1523_, lean_object* v_x_1524_, lean_object* v_a_1525_, lean_object* v_a_1526_, lean_object* v_a_1527_){
_start:
{
lean_object* v___x_1529_; 
v___x_1529_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg(v_inst_1522_, v_x_1523_, v_x_1524_, v_a_1525_, v_a_1526_, v_a_1527_);
return v___x_1529_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___boxed(lean_object* v_i_1530_, lean_object* v_inst_1531_, lean_object* v_x_1532_, lean_object* v_x_1533_, lean_object* v_a_1534_, lean_object* v_a_1535_, lean_object* v_a_1536_, lean_object* v_a_1537_){
_start:
{
lean_object* v_res_1538_; 
v_res_1538_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown(v_i_1530_, v_inst_1531_, v_x_1532_, v_x_1533_, v_a_1534_, v_a_1535_, v_a_1536_);
lean_dec(v_a_1536_);
lean_dec_ref(v_a_1535_);
lean_dec(v_a_1534_);
return v_res_1538_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownInlineOfMarkdownInline___private__1___redArg(lean_object* v_inst_1539_, lean_object* v_a_1540_, lean_object* v_a_1541_, lean_object* v_a_1542_, lean_object* v_a_1543_){
_start:
{
lean_object* v___x_1545_; lean_object* v___x_1546_; 
v___x_1545_ = ((lean_object*)(l_Lean_Doc_MarkdownM_instInhabitedInlineCtx_default___closed__0));
v___x_1546_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg(v_inst_1539_, v___x_1545_, v_a_1540_, v_a_1541_, v_a_1542_, v_a_1543_);
return v___x_1546_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownInlineOfMarkdownInline___private__1___redArg___boxed(lean_object* v_inst_1547_, lean_object* v_a_1548_, lean_object* v_a_1549_, lean_object* v_a_1550_, lean_object* v_a_1551_, lean_object* v_a_1552_){
_start:
{
lean_object* v_res_1553_; 
v_res_1553_ = l_Lean_Doc_instToMarkdownInlineOfMarkdownInline___private__1___redArg(v_inst_1547_, v_a_1548_, v_a_1549_, v_a_1550_, v_a_1551_);
lean_dec(v_a_1551_);
lean_dec_ref(v_a_1550_);
lean_dec(v_a_1549_);
return v_res_1553_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownInlineOfMarkdownInline___private__1(lean_object* v_i_1554_, lean_object* v_inst_1555_, lean_object* v_a_1556_, lean_object* v_a_1557_, lean_object* v_a_1558_, lean_object* v_a_1559_){
_start:
{
lean_object* v___x_1561_; lean_object* v___x_1562_; 
v___x_1561_ = ((lean_object*)(l_Lean_Doc_MarkdownM_instInhabitedInlineCtx_default___closed__0));
v___x_1562_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg(v_inst_1555_, v___x_1561_, v_a_1556_, v_a_1557_, v_a_1558_, v_a_1559_);
return v___x_1562_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownInlineOfMarkdownInline___private__1___boxed(lean_object* v_i_1563_, lean_object* v_inst_1564_, lean_object* v_a_1565_, lean_object* v_a_1566_, lean_object* v_a_1567_, lean_object* v_a_1568_, lean_object* v_a_1569_){
_start:
{
lean_object* v_res_1570_; 
v_res_1570_ = l_Lean_Doc_instToMarkdownInlineOfMarkdownInline___private__1(v_i_1563_, v_inst_1564_, v_a_1565_, v_a_1566_, v_a_1567_, v_a_1568_);
lean_dec(v_a_1568_);
lean_dec_ref(v_a_1567_);
lean_dec(v_a_1566_);
return v_res_1570_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownInlineOfMarkdownInline___redArg(lean_object* v_inst_1571_){
_start:
{
lean_object* v___x_1572_; 
v___x_1572_ = lean_alloc_closure((void*)(l_Lean_Doc_instToMarkdownInlineOfMarkdownInline___private__1___boxed), 7, 2);
lean_closure_set(v___x_1572_, 0, lean_box(0));
lean_closure_set(v___x_1572_, 1, v_inst_1571_);
return v___x_1572_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownInlineOfMarkdownInline(lean_object* v_i_1573_, lean_object* v_inst_1574_){
_start:
{
lean_object* v___x_1575_; 
v___x_1575_ = lean_alloc_closure((void*)(l_Lean_Doc_instToMarkdownInlineOfMarkdownInline___private__1___boxed), 7, 2);
lean_closure_set(v___x_1575_, 0, lean_box(0));
lean_closure_set(v___x_1575_, 1, v_inst_1574_);
return v___x_1575_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__1(uint32_t v___x_1576_, lean_object* v_s_1577_){
_start:
{
lean_object* v___x_1578_; 
v___x_1578_ = lean_string_push(v_s_1577_, v___x_1576_);
return v___x_1578_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__1___boxed(lean_object* v___x_1579_, lean_object* v_s_1580_){
_start:
{
uint32_t v___x_2756__boxed_1581_; lean_object* v_res_1582_; 
v___x_2756__boxed_1581_ = lean_unbox_uint32(v___x_1579_);
lean_dec(v___x_1579_);
v_res_1582_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__1(v___x_2756__boxed_1581_, v_s_1580_);
return v_res_1582_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__0___boxed(lean_object* v_inst_1585_, lean_object* v_inst_1586_, lean_object* v___x_1587_, lean_object* v_item_1588_, lean_object* v___y_1589_, lean_object* v___y_1590_, lean_object* v___y_1591_, lean_object* v___y_1592_){
_start:
{
lean_object* v_res_1593_; 
v_res_1593_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__0(v_inst_1585_, v_inst_1586_, v___x_1587_, v_item_1588_, v___y_1589_, v___y_1590_, v___y_1591_);
lean_dec(v___y_1591_);
lean_dec_ref(v___y_1590_);
lean_dec(v___y_1589_);
lean_dec_ref(v_item_1588_);
return v_res_1593_;
}
}
static lean_object* _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__2___closed__1(void){
_start:
{
lean_object* v___x_1595_; lean_object* v___f_1596_; 
v___x_1595_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_markerPrefixSpecial___closed__0___boxed__const__1;
v___f_1596_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_1596_, 0, v___x_1595_);
return v___f_1596_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__2(lean_object* v_inst_1597_, lean_object* v_inst_1598_, lean_object* v___x_1599_, lean_object* v___x_1600_, lean_object* v_a_1601_, lean_object* v_x_1602_, lean_object* v___y_1603_, lean_object* v___y_1604_, lean_object* v___y_1605_, lean_object* v___y_1606_){
_start:
{
lean_object* v_fst_1608_; lean_object* v_snd_1609_; lean_object* v___x_1611_; uint8_t v_isShared_1612_; uint8_t v_isSharedCheck_1651_; 
v_fst_1608_ = lean_ctor_get(v___y_1603_, 0);
v_snd_1609_ = lean_ctor_get(v___y_1603_, 1);
v_isSharedCheck_1651_ = !lean_is_exclusive(v___y_1603_);
if (v_isSharedCheck_1651_ == 0)
{
v___x_1611_ = v___y_1603_;
v_isShared_1612_ = v_isSharedCheck_1651_;
goto v_resetjp_1610_;
}
else
{
lean_inc(v_snd_1609_);
lean_inc(v_fst_1608_);
lean_dec(v___y_1603_);
v___x_1611_ = lean_box(0);
v_isShared_1612_ = v_isSharedCheck_1651_;
goto v_resetjp_1610_;
}
v_resetjp_1610_:
{
lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___f_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; size_t v_sz_1621_; size_t v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_2695__overap_1625_; lean_object* v___x_1626_; 
lean_inc(v_snd_1609_);
v___x_1613_ = l_Nat_reprFast(v_snd_1609_);
v___x_1614_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__2___closed__0));
v___x_1615_ = lean_string_append(v___x_1613_, v___x_1614_);
v___x_1616_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinBlocks_spec__0___closed__0));
v___f_1617_ = lean_obj_once(&l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__2___closed__1, &l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__2___closed__1_once, _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__2___closed__1);
v___x_1618_ = lean_string_utf8_byte_size(v___x_1615_);
v___x_1619_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop(lean_box(0), v___f_1617_, v___x_1618_, v___x_1616_);
v___x_1620_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___boxed), 7, 2);
lean_closure_set(v___x_1620_, 0, v_inst_1597_);
lean_closure_set(v___x_1620_, 1, v_inst_1598_);
v_sz_1621_ = lean_array_size(v_a_1601_);
v___x_1622_ = ((size_t)0ULL);
v___x_1623_ = l_unsafeCast___redArg(v_a_1601_);
v___x_1624_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1599_, v___x_1620_, v_sz_1621_, v___x_1622_, v___x_1623_);
v___x_2695__overap_1625_ = l_unsafeCast___redArg(v___x_1624_);
lean_dec(v___x_1624_);
lean_inc(v___y_1606_);
lean_inc_ref(v___y_1605_);
lean_inc(v___y_1604_);
v___x_1626_ = lean_apply_4(v___x_2695__overap_1625_, v___y_1604_, v___y_1605_, v___y_1606_, lean_box(0));
if (lean_obj_tag(v___x_1626_) == 0)
{
lean_object* v_a_1627_; lean_object* v___x_1629_; uint8_t v_isShared_1630_; uint8_t v_isSharedCheck_1642_; 
v_a_1627_ = lean_ctor_get(v___x_1626_, 0);
v_isSharedCheck_1642_ = !lean_is_exclusive(v___x_1626_);
if (v_isSharedCheck_1642_ == 0)
{
v___x_1629_ = v___x_1626_;
v_isShared_1630_ = v_isSharedCheck_1642_;
goto v_resetjp_1628_;
}
else
{
lean_inc(v_a_1627_);
lean_dec(v___x_1626_);
v___x_1629_ = lean_box(0);
v_isShared_1630_ = v_isSharedCheck_1642_;
goto v_resetjp_1628_;
}
v_resetjp_1628_:
{
lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1636_; 
v___x_1631_ = l_Lean_Doc_joinBlocks(v_a_1627_);
lean_dec(v_a_1627_);
v___x_1632_ = l_Lean_Doc_prefixListLines(v___x_1615_, v___x_1619_, v___x_1631_);
lean_dec_ref(v___x_1631_);
v___x_1633_ = lean_array_push(v_fst_1608_, v___x_1632_);
v___x_1634_ = lean_nat_add(v_snd_1609_, v___x_1600_);
lean_dec(v_snd_1609_);
if (v_isShared_1612_ == 0)
{
lean_ctor_set(v___x_1611_, 1, v___x_1634_);
lean_ctor_set(v___x_1611_, 0, v___x_1633_);
v___x_1636_ = v___x_1611_;
goto v_reusejp_1635_;
}
else
{
lean_object* v_reuseFailAlloc_1641_; 
v_reuseFailAlloc_1641_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1641_, 0, v___x_1633_);
lean_ctor_set(v_reuseFailAlloc_1641_, 1, v___x_1634_);
v___x_1636_ = v_reuseFailAlloc_1641_;
goto v_reusejp_1635_;
}
v_reusejp_1635_:
{
lean_object* v___x_1637_; lean_object* v___x_1639_; 
v___x_1637_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1637_, 0, v___x_1636_);
if (v_isShared_1630_ == 0)
{
lean_ctor_set(v___x_1629_, 0, v___x_1637_);
v___x_1639_ = v___x_1629_;
goto v_reusejp_1638_;
}
else
{
lean_object* v_reuseFailAlloc_1640_; 
v_reuseFailAlloc_1640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1640_, 0, v___x_1637_);
v___x_1639_ = v_reuseFailAlloc_1640_;
goto v_reusejp_1638_;
}
v_reusejp_1638_:
{
return v___x_1639_;
}
}
}
}
else
{
lean_object* v_a_1643_; lean_object* v___x_1645_; uint8_t v_isShared_1646_; uint8_t v_isSharedCheck_1650_; 
lean_dec(v___x_1619_);
lean_dec_ref(v___x_1615_);
lean_del_object(v___x_1611_);
lean_dec(v_snd_1609_);
lean_dec(v_fst_1608_);
v_a_1643_ = lean_ctor_get(v___x_1626_, 0);
v_isSharedCheck_1650_ = !lean_is_exclusive(v___x_1626_);
if (v_isSharedCheck_1650_ == 0)
{
v___x_1645_ = v___x_1626_;
v_isShared_1646_ = v_isSharedCheck_1650_;
goto v_resetjp_1644_;
}
else
{
lean_inc(v_a_1643_);
lean_dec(v___x_1626_);
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
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__2___boxed(lean_object* v_inst_1652_, lean_object* v_inst_1653_, lean_object* v___x_1654_, lean_object* v___x_1655_, lean_object* v_a_1656_, lean_object* v_x_1657_, lean_object* v___y_1658_, lean_object* v___y_1659_, lean_object* v___y_1660_, lean_object* v___y_1661_, lean_object* v___y_1662_){
_start:
{
lean_object* v_res_1663_; 
v_res_1663_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__2(v_inst_1652_, v_inst_1653_, v___x_1654_, v___x_1655_, v_a_1656_, v_x_1657_, v___y_1658_, v___y_1659_, v___y_1660_, v___y_1661_);
lean_dec(v___y_1661_);
lean_dec_ref(v___y_1660_);
lean_dec(v___y_1659_);
lean_dec_ref(v_a_1656_);
lean_dec(v___x_1655_);
return v_res_1663_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__3(lean_object* v_inst_1669_, lean_object* v_inst_1670_, lean_object* v___x_1671_, lean_object* v_item_1672_, lean_object* v___y_1673_, lean_object* v___y_1674_, lean_object* v___y_1675_){
_start:
{
lean_object* v___x_1677_; lean_object* v_term_1678_; lean_object* v_desc_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; 
v___x_1677_ = ((lean_object*)(l_Lean_Doc_MarkdownM_instInhabitedInlineCtx_default___closed__0));
v_term_1678_ = lean_ctor_get(v_item_1672_, 0);
v_desc_1679_ = lean_ctor_get(v_item_1672_, 1);
lean_inc_ref(v_term_1678_);
v___x_1680_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1680_, 0, v_term_1678_);
lean_inc_ref(v_inst_1669_);
v___x_1681_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg(v_inst_1669_, v___x_1677_, v___x_1680_, v___y_1673_, v___y_1674_, v___y_1675_);
if (lean_obj_tag(v___x_1681_) == 0)
{
lean_object* v_a_1682_; lean_object* v___x_1683_; size_t v_sz_1684_; size_t v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_2725__overap_1688_; lean_object* v___x_1689_; 
v_a_1682_ = lean_ctor_get(v___x_1681_, 0);
lean_inc(v_a_1682_);
lean_dec_ref_known(v___x_1681_, 1);
v___x_1683_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___boxed), 7, 2);
lean_closure_set(v___x_1683_, 0, v_inst_1669_);
lean_closure_set(v___x_1683_, 1, v_inst_1670_);
v_sz_1684_ = lean_array_size(v_desc_1679_);
v___x_1685_ = ((size_t)0ULL);
v___x_1686_ = l_unsafeCast___redArg(v_desc_1679_);
v___x_1687_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1671_, v___x_1683_, v_sz_1684_, v___x_1685_, v___x_1686_);
v___x_2725__overap_1688_ = l_unsafeCast___redArg(v___x_1687_);
lean_dec(v___x_1687_);
lean_inc(v___y_1675_);
lean_inc_ref(v___y_1674_);
lean_inc(v___y_1673_);
v___x_1689_ = lean_apply_4(v___x_2725__overap_1688_, v___y_1673_, v___y_1674_, v___y_1675_, lean_box(0));
if (lean_obj_tag(v___x_1689_) == 0)
{
lean_object* v_a_1690_; lean_object* v___x_1692_; uint8_t v_isShared_1693_; uint8_t v_isSharedCheck_1717_; 
v_a_1690_ = lean_ctor_get(v___x_1689_, 0);
v_isSharedCheck_1717_ = !lean_is_exclusive(v___x_1689_);
if (v_isSharedCheck_1717_ == 0)
{
v___x_1692_ = v___x_1689_;
v_isShared_1693_ = v_isSharedCheck_1717_;
goto v_resetjp_1691_;
}
else
{
lean_inc(v_a_1690_);
lean_dec(v___x_1689_);
v___x_1692_ = lean_box(0);
v_isShared_1693_ = v_isSharedCheck_1717_;
goto v_resetjp_1691_;
}
v_resetjp_1691_:
{
lean_object* v___y_1695_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; uint8_t v___x_1711_; 
v___x_1702_ = lean_unsigned_to_nat(1u);
v___x_1703_ = lean_mk_empty_array_with_capacity(v___x_1702_);
v___x_1704_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__3___closed__1));
v___x_1705_ = lean_unsigned_to_nat(2u);
v___x_1706_ = lean_mk_empty_array_with_capacity(v___x_1705_);
v___x_1707_ = lean_array_push(v___x_1706_, v_a_1682_);
v___x_1708_ = lean_array_push(v___x_1707_, v___x_1704_);
v___x_1709_ = l_Lean_Doc_joinInlines(v___x_1708_);
lean_dec_ref(v___x_1708_);
v___x_1710_ = lean_array_get_size(v_desc_1679_);
v___x_1711_ = lean_nat_dec_le(v___x_1710_, v___x_1702_);
if (v___x_1711_ == 0)
{
lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; 
v___x_1712_ = lean_array_push(v___x_1703_, v___x_1709_);
v___x_1713_ = l_Array_append___redArg(v___x_1712_, v_a_1690_);
lean_dec(v_a_1690_);
v___x_1714_ = l_Lean_Doc_joinBlocks(v___x_1713_);
lean_dec_ref(v___x_1713_);
v___y_1695_ = v___x_1714_;
goto v___jp_1694_;
}
else
{
lean_object* v___x_1715_; lean_object* v___x_1716_; 
lean_dec_ref(v___x_1703_);
v___x_1715_ = l_Lean_Doc_joinBlocks(v_a_1690_);
lean_dec(v_a_1690_);
v___x_1716_ = l_Array_append___redArg(v___x_1709_, v___x_1715_);
lean_dec_ref(v___x_1715_);
v___y_1695_ = v___x_1716_;
goto v___jp_1694_;
}
v___jp_1694_:
{
lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; lean_object* v___x_1700_; 
v___x_1696_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__0___closed__0));
v___x_1697_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__0___closed__1));
v___x_1698_ = l_Lean_Doc_prefixListLines(v___x_1696_, v___x_1697_, v___y_1695_);
lean_dec_ref(v___y_1695_);
if (v_isShared_1693_ == 0)
{
lean_ctor_set(v___x_1692_, 0, v___x_1698_);
v___x_1700_ = v___x_1692_;
goto v_reusejp_1699_;
}
else
{
lean_object* v_reuseFailAlloc_1701_; 
v_reuseFailAlloc_1701_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1701_, 0, v___x_1698_);
v___x_1700_ = v_reuseFailAlloc_1701_;
goto v_reusejp_1699_;
}
v_reusejp_1699_:
{
return v___x_1700_;
}
}
}
}
else
{
lean_object* v_a_1718_; lean_object* v___x_1720_; uint8_t v_isShared_1721_; uint8_t v_isSharedCheck_1725_; 
lean_dec(v_a_1682_);
v_a_1718_ = lean_ctor_get(v___x_1689_, 0);
v_isSharedCheck_1725_ = !lean_is_exclusive(v___x_1689_);
if (v_isSharedCheck_1725_ == 0)
{
v___x_1720_ = v___x_1689_;
v_isShared_1721_ = v_isSharedCheck_1725_;
goto v_resetjp_1719_;
}
else
{
lean_inc(v_a_1718_);
lean_dec(v___x_1689_);
v___x_1720_ = lean_box(0);
v_isShared_1721_ = v_isSharedCheck_1725_;
goto v_resetjp_1719_;
}
v_resetjp_1719_:
{
lean_object* v___x_1723_; 
if (v_isShared_1721_ == 0)
{
v___x_1723_ = v___x_1720_;
goto v_reusejp_1722_;
}
else
{
lean_object* v_reuseFailAlloc_1724_; 
v_reuseFailAlloc_1724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1724_, 0, v_a_1718_);
v___x_1723_ = v_reuseFailAlloc_1724_;
goto v_reusejp_1722_;
}
v_reusejp_1722_:
{
return v___x_1723_;
}
}
}
}
else
{
lean_dec_ref(v___x_1671_);
lean_dec_ref(v_inst_1670_);
lean_dec_ref(v_inst_1669_);
return v___x_1681_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__3___boxed(lean_object* v_inst_1726_, lean_object* v_inst_1727_, lean_object* v___x_1728_, lean_object* v_item_1729_, lean_object* v___y_1730_, lean_object* v___y_1731_, lean_object* v___y_1732_, lean_object* v___y_1733_){
_start:
{
lean_object* v_res_1734_; 
v_res_1734_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__3(v_inst_1726_, v_inst_1727_, v___x_1728_, v_item_1729_, v___y_1730_, v___y_1731_, v___y_1732_);
lean_dec(v___y_1732_);
lean_dec_ref(v___y_1731_);
lean_dec(v___y_1730_);
lean_dec_ref(v_item_1729_);
return v_res_1734_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg(lean_object* v_inst_1736_, lean_object* v_inst_1737_, lean_object* v_x_1738_, lean_object* v_a_1739_, lean_object* v_a_1740_, lean_object* v_a_1741_){
_start:
{
lean_object* v___x_1743_; lean_object* v_toApplicative_1744_; lean_object* v_toFunctor_1745_; lean_object* v_toSeq_1746_; lean_object* v_toSeqLeft_1747_; lean_object* v_toSeqRight_1748_; lean_object* v___f_1749_; lean_object* v___f_1750_; lean_object* v___f_1751_; lean_object* v___f_1752_; lean_object* v___x_1753_; lean_object* v___f_1754_; lean_object* v___f_1755_; lean_object* v___f_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; lean_object* v___x_1759_; 
v___x_1743_ = lean_obj_once(&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__1, &l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__1_once, _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__1);
v_toApplicative_1744_ = lean_ctor_get(v___x_1743_, 0);
v_toFunctor_1745_ = lean_ctor_get(v_toApplicative_1744_, 0);
v_toSeq_1746_ = lean_ctor_get(v_toApplicative_1744_, 2);
v_toSeqLeft_1747_ = lean_ctor_get(v_toApplicative_1744_, 3);
v_toSeqRight_1748_ = lean_ctor_get(v_toApplicative_1744_, 4);
v___f_1749_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__2));
v___f_1750_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_1745_, 2);
v___f_1751_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1751_, 0, v_toFunctor_1745_);
v___f_1752_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1752_, 0, v_toFunctor_1745_);
v___x_1753_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1753_, 0, v___f_1751_);
lean_ctor_set(v___x_1753_, 1, v___f_1752_);
lean_inc(v_toSeqRight_1748_);
v___f_1754_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1754_, 0, v_toSeqRight_1748_);
lean_inc(v_toSeqLeft_1747_);
v___f_1755_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1755_, 0, v_toSeqLeft_1747_);
lean_inc(v_toSeq_1746_);
v___f_1756_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1756_, 0, v_toSeq_1746_);
v___x_1757_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1757_, 0, v___x_1753_);
lean_ctor_set(v___x_1757_, 1, v___f_1749_);
lean_ctor_set(v___x_1757_, 2, v___f_1756_);
lean_ctor_set(v___x_1757_, 3, v___f_1755_);
lean_ctor_set(v___x_1757_, 4, v___f_1754_);
v___x_1758_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1758_, 0, v___x_1757_);
lean_ctor_set(v___x_1758_, 1, v___f_1750_);
v___x_1759_ = l_StateRefT_x27_instMonad___redArg(v___x_1758_);
switch(lean_obj_tag(v_x_1738_))
{
case 0:
{
lean_object* v_contents_1760_; lean_object* v___x_1762_; uint8_t v_isShared_1763_; uint8_t v_isSharedCheck_1769_; 
lean_dec_ref(v___x_1759_);
lean_dec_ref(v_inst_1737_);
v_contents_1760_ = lean_ctor_get(v_x_1738_, 0);
v_isSharedCheck_1769_ = !lean_is_exclusive(v_x_1738_);
if (v_isSharedCheck_1769_ == 0)
{
v___x_1762_ = v_x_1738_;
v_isShared_1763_ = v_isSharedCheck_1769_;
goto v_resetjp_1761_;
}
else
{
lean_inc(v_contents_1760_);
lean_dec(v_x_1738_);
v___x_1762_ = lean_box(0);
v_isShared_1763_ = v_isSharedCheck_1769_;
goto v_resetjp_1761_;
}
v_resetjp_1761_:
{
lean_object* v___x_1764_; lean_object* v___x_1766_; 
v___x_1764_ = ((lean_object*)(l_Lean_Doc_MarkdownM_instInhabitedInlineCtx_default___closed__0));
if (v_isShared_1763_ == 0)
{
lean_ctor_set_tag(v___x_1762_, 9);
v___x_1766_ = v___x_1762_;
goto v_reusejp_1765_;
}
else
{
lean_object* v_reuseFailAlloc_1768_; 
v_reuseFailAlloc_1768_ = lean_alloc_ctor(9, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1768_, 0, v_contents_1760_);
v___x_1766_ = v_reuseFailAlloc_1768_;
goto v_reusejp_1765_;
}
v_reusejp_1765_:
{
lean_object* v___x_1767_; 
v___x_1767_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg(v_inst_1736_, v___x_1764_, v___x_1766_, v_a_1739_, v_a_1740_, v_a_1741_);
return v___x_1767_;
}
}
}
case 1:
{
lean_object* v_content_1770_; lean_object* v___x_1772_; uint8_t v_isShared_1773_; uint8_t v_isSharedCheck_1778_; 
lean_dec_ref(v___x_1759_);
lean_dec_ref(v_inst_1737_);
lean_dec_ref(v_inst_1736_);
v_content_1770_ = lean_ctor_get(v_x_1738_, 0);
v_isSharedCheck_1778_ = !lean_is_exclusive(v_x_1738_);
if (v_isSharedCheck_1778_ == 0)
{
v___x_1772_ = v_x_1738_;
v_isShared_1773_ = v_isSharedCheck_1778_;
goto v_resetjp_1771_;
}
else
{
lean_inc(v_content_1770_);
lean_dec(v_x_1738_);
v___x_1772_ = lean_box(0);
v_isShared_1773_ = v_isSharedCheck_1778_;
goto v_resetjp_1771_;
}
v_resetjp_1771_:
{
lean_object* v___x_1774_; lean_object* v___x_1776_; 
v___x_1774_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_codeBlockLines(v_content_1770_);
if (v_isShared_1773_ == 0)
{
lean_ctor_set_tag(v___x_1772_, 0);
lean_ctor_set(v___x_1772_, 0, v___x_1774_);
v___x_1776_ = v___x_1772_;
goto v_reusejp_1775_;
}
else
{
lean_object* v_reuseFailAlloc_1777_; 
v_reuseFailAlloc_1777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1777_, 0, v___x_1774_);
v___x_1776_ = v_reuseFailAlloc_1777_;
goto v_reusejp_1775_;
}
v_reusejp_1775_:
{
return v___x_1776_;
}
}
}
case 2:
{
lean_object* v_items_1779_; lean_object* v___f_1780_; size_t v_sz_1781_; size_t v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_2631__overap_1785_; lean_object* v___x_1786_; 
v_items_1779_ = lean_ctor_get(v_x_1738_, 0);
lean_inc_ref(v_items_1779_);
lean_dec_ref_known(v_x_1738_, 1);
lean_inc_ref(v___x_1759_);
v___f_1780_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__0___boxed), 8, 3);
lean_closure_set(v___f_1780_, 0, v_inst_1736_);
lean_closure_set(v___f_1780_, 1, v_inst_1737_);
lean_closure_set(v___f_1780_, 2, v___x_1759_);
v_sz_1781_ = lean_array_size(v_items_1779_);
v___x_1782_ = ((size_t)0ULL);
v___x_1783_ = l_unsafeCast___redArg(v_items_1779_);
lean_dec_ref(v_items_1779_);
v___x_1784_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1759_, v___f_1780_, v_sz_1781_, v___x_1782_, v___x_1783_);
v___x_2631__overap_1785_ = l_unsafeCast___redArg(v___x_1784_);
lean_dec(v___x_1784_);
lean_inc(v_a_1741_);
lean_inc_ref(v_a_1740_);
lean_inc(v_a_1739_);
v___x_1786_ = lean_apply_4(v___x_2631__overap_1785_, v_a_1739_, v_a_1740_, v_a_1741_, lean_box(0));
if (lean_obj_tag(v___x_1786_) == 0)
{
lean_object* v_a_1787_; lean_object* v___x_1789_; uint8_t v_isShared_1790_; uint8_t v_isSharedCheck_1795_; 
v_a_1787_ = lean_ctor_get(v___x_1786_, 0);
v_isSharedCheck_1795_ = !lean_is_exclusive(v___x_1786_);
if (v_isSharedCheck_1795_ == 0)
{
v___x_1789_ = v___x_1786_;
v_isShared_1790_ = v_isSharedCheck_1795_;
goto v_resetjp_1788_;
}
else
{
lean_inc(v_a_1787_);
lean_dec(v___x_1786_);
v___x_1789_ = lean_box(0);
v_isShared_1790_ = v_isSharedCheck_1795_;
goto v_resetjp_1788_;
}
v_resetjp_1788_:
{
lean_object* v___x_1791_; lean_object* v___x_1793_; 
v___x_1791_ = l_Lean_Doc_joinBlocks(v_a_1787_);
lean_dec(v_a_1787_);
if (v_isShared_1790_ == 0)
{
lean_ctor_set(v___x_1789_, 0, v___x_1791_);
v___x_1793_ = v___x_1789_;
goto v_reusejp_1792_;
}
else
{
lean_object* v_reuseFailAlloc_1794_; 
v_reuseFailAlloc_1794_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1794_, 0, v___x_1791_);
v___x_1793_ = v_reuseFailAlloc_1794_;
goto v_reusejp_1792_;
}
v_reusejp_1792_:
{
return v___x_1793_;
}
}
}
else
{
lean_object* v_a_1796_; lean_object* v___x_1798_; uint8_t v_isShared_1799_; uint8_t v_isSharedCheck_1803_; 
v_a_1796_ = lean_ctor_get(v___x_1786_, 0);
v_isSharedCheck_1803_ = !lean_is_exclusive(v___x_1786_);
if (v_isSharedCheck_1803_ == 0)
{
v___x_1798_ = v___x_1786_;
v_isShared_1799_ = v_isSharedCheck_1803_;
goto v_resetjp_1797_;
}
else
{
lean_inc(v_a_1796_);
lean_dec(v___x_1786_);
v___x_1798_ = lean_box(0);
v_isShared_1799_ = v_isSharedCheck_1803_;
goto v_resetjp_1797_;
}
v_resetjp_1797_:
{
lean_object* v___x_1801_; 
if (v_isShared_1799_ == 0)
{
v___x_1801_ = v___x_1798_;
goto v_reusejp_1800_;
}
else
{
lean_object* v_reuseFailAlloc_1802_; 
v_reuseFailAlloc_1802_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1802_, 0, v_a_1796_);
v___x_1801_ = v_reuseFailAlloc_1802_;
goto v_reusejp_1800_;
}
v_reusejp_1800_:
{
return v___x_1801_;
}
}
}
}
case 3:
{
lean_object* v_start_1804_; lean_object* v_items_1805_; lean_object* v___x_1807_; uint8_t v_isShared_1808_; uint8_t v_isSharedCheck_1841_; 
v_start_1804_ = lean_ctor_get(v_x_1738_, 0);
v_items_1805_ = lean_ctor_get(v_x_1738_, 1);
v_isSharedCheck_1841_ = !lean_is_exclusive(v_x_1738_);
if (v_isSharedCheck_1841_ == 0)
{
v___x_1807_ = v_x_1738_;
v_isShared_1808_ = v_isSharedCheck_1841_;
goto v_resetjp_1806_;
}
else
{
lean_inc(v_items_1805_);
lean_inc(v_start_1804_);
lean_dec(v_x_1738_);
v___x_1807_ = lean_box(0);
v_isShared_1808_ = v_isSharedCheck_1841_;
goto v_resetjp_1806_;
}
v_resetjp_1806_:
{
lean_object* v_out_1809_; lean_object* v___x_1810_; lean_object* v___f_1811_; lean_object* v___y_1813_; lean_object* v___x_1839_; uint8_t v___x_1840_; 
v_out_1809_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__6));
v___x_1810_ = lean_unsigned_to_nat(1u);
lean_inc_ref(v___x_1759_);
v___f_1811_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__2___boxed), 11, 4);
lean_closure_set(v___f_1811_, 0, v_inst_1736_);
lean_closure_set(v___f_1811_, 1, v_inst_1737_);
lean_closure_set(v___f_1811_, 2, v___x_1759_);
lean_closure_set(v___f_1811_, 3, v___x_1810_);
v___x_1839_ = l_Int_toNat(v_start_1804_);
lean_dec(v_start_1804_);
v___x_1840_ = lean_nat_dec_le(v___x_1810_, v___x_1839_);
if (v___x_1840_ == 0)
{
lean_dec(v___x_1839_);
v___y_1813_ = v___x_1810_;
goto v___jp_1812_;
}
else
{
v___y_1813_ = v___x_1839_;
goto v___jp_1812_;
}
v___jp_1812_:
{
lean_object* v___x_1815_; 
if (v_isShared_1808_ == 0)
{
lean_ctor_set_tag(v___x_1807_, 0);
lean_ctor_set(v___x_1807_, 1, v___y_1813_);
lean_ctor_set(v___x_1807_, 0, v_out_1809_);
v___x_1815_ = v___x_1807_;
goto v_reusejp_1814_;
}
else
{
lean_object* v_reuseFailAlloc_1838_; 
v_reuseFailAlloc_1838_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1838_, 0, v_out_1809_);
lean_ctor_set(v_reuseFailAlloc_1838_, 1, v___y_1813_);
v___x_1815_ = v_reuseFailAlloc_1838_;
goto v_reusejp_1814_;
}
v_reusejp_1814_:
{
size_t v_sz_1816_; size_t v___x_1817_; lean_object* v___x_2395__overap_1818_; lean_object* v___x_1819_; 
v_sz_1816_ = lean_array_size(v_items_1805_);
v___x_1817_ = ((size_t)0ULL);
v___x_2395__overap_1818_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_1759_, v_items_1805_, v___f_1811_, v_sz_1816_, v___x_1817_, v___x_1815_);
lean_inc(v_a_1741_);
lean_inc_ref(v_a_1740_);
lean_inc(v_a_1739_);
v___x_1819_ = lean_apply_4(v___x_2395__overap_1818_, v_a_1739_, v_a_1740_, v_a_1741_, lean_box(0));
if (lean_obj_tag(v___x_1819_) == 0)
{
lean_object* v_a_1820_; lean_object* v___x_1822_; uint8_t v_isShared_1823_; uint8_t v_isSharedCheck_1829_; 
v_a_1820_ = lean_ctor_get(v___x_1819_, 0);
v_isSharedCheck_1829_ = !lean_is_exclusive(v___x_1819_);
if (v_isSharedCheck_1829_ == 0)
{
v___x_1822_ = v___x_1819_;
v_isShared_1823_ = v_isSharedCheck_1829_;
goto v_resetjp_1821_;
}
else
{
lean_inc(v_a_1820_);
lean_dec(v___x_1819_);
v___x_1822_ = lean_box(0);
v_isShared_1823_ = v_isSharedCheck_1829_;
goto v_resetjp_1821_;
}
v_resetjp_1821_:
{
lean_object* v_fst_1824_; lean_object* v___x_1825_; lean_object* v___x_1827_; 
v_fst_1824_ = lean_ctor_get(v_a_1820_, 0);
lean_inc(v_fst_1824_);
lean_dec(v_a_1820_);
v___x_1825_ = l_Lean_Doc_joinBlocks(v_fst_1824_);
lean_dec(v_fst_1824_);
if (v_isShared_1823_ == 0)
{
lean_ctor_set(v___x_1822_, 0, v___x_1825_);
v___x_1827_ = v___x_1822_;
goto v_reusejp_1826_;
}
else
{
lean_object* v_reuseFailAlloc_1828_; 
v_reuseFailAlloc_1828_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1828_, 0, v___x_1825_);
v___x_1827_ = v_reuseFailAlloc_1828_;
goto v_reusejp_1826_;
}
v_reusejp_1826_:
{
return v___x_1827_;
}
}
}
else
{
lean_object* v_a_1830_; lean_object* v___x_1832_; uint8_t v_isShared_1833_; uint8_t v_isSharedCheck_1837_; 
v_a_1830_ = lean_ctor_get(v___x_1819_, 0);
v_isSharedCheck_1837_ = !lean_is_exclusive(v___x_1819_);
if (v_isSharedCheck_1837_ == 0)
{
v___x_1832_ = v___x_1819_;
v_isShared_1833_ = v_isSharedCheck_1837_;
goto v_resetjp_1831_;
}
else
{
lean_inc(v_a_1830_);
lean_dec(v___x_1819_);
v___x_1832_ = lean_box(0);
v_isShared_1833_ = v_isSharedCheck_1837_;
goto v_resetjp_1831_;
}
v_resetjp_1831_:
{
lean_object* v___x_1835_; 
if (v_isShared_1833_ == 0)
{
v___x_1835_ = v___x_1832_;
goto v_reusejp_1834_;
}
else
{
lean_object* v_reuseFailAlloc_1836_; 
v_reuseFailAlloc_1836_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1836_, 0, v_a_1830_);
v___x_1835_ = v_reuseFailAlloc_1836_;
goto v_reusejp_1834_;
}
v_reusejp_1834_:
{
return v___x_1835_;
}
}
}
}
}
}
}
case 4:
{
lean_object* v_items_1842_; lean_object* v___f_1843_; size_t v_sz_1844_; size_t v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_2637__overap_1848_; lean_object* v___x_1849_; 
v_items_1842_ = lean_ctor_get(v_x_1738_, 0);
lean_inc_ref(v_items_1842_);
lean_dec_ref_known(v_x_1738_, 1);
lean_inc_ref(v___x_1759_);
v___f_1843_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__3___boxed), 8, 3);
lean_closure_set(v___f_1843_, 0, v_inst_1736_);
lean_closure_set(v___f_1843_, 1, v_inst_1737_);
lean_closure_set(v___f_1843_, 2, v___x_1759_);
v_sz_1844_ = lean_array_size(v_items_1842_);
v___x_1845_ = ((size_t)0ULL);
v___x_1846_ = l_unsafeCast___redArg(v_items_1842_);
lean_dec_ref(v_items_1842_);
v___x_1847_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1759_, v___f_1843_, v_sz_1844_, v___x_1845_, v___x_1846_);
v___x_2637__overap_1848_ = l_unsafeCast___redArg(v___x_1847_);
lean_dec(v___x_1847_);
lean_inc(v_a_1741_);
lean_inc_ref(v_a_1740_);
lean_inc(v_a_1739_);
v___x_1849_ = lean_apply_4(v___x_2637__overap_1848_, v_a_1739_, v_a_1740_, v_a_1741_, lean_box(0));
if (lean_obj_tag(v___x_1849_) == 0)
{
lean_object* v_a_1850_; lean_object* v___x_1852_; uint8_t v_isShared_1853_; uint8_t v_isSharedCheck_1858_; 
v_a_1850_ = lean_ctor_get(v___x_1849_, 0);
v_isSharedCheck_1858_ = !lean_is_exclusive(v___x_1849_);
if (v_isSharedCheck_1858_ == 0)
{
v___x_1852_ = v___x_1849_;
v_isShared_1853_ = v_isSharedCheck_1858_;
goto v_resetjp_1851_;
}
else
{
lean_inc(v_a_1850_);
lean_dec(v___x_1849_);
v___x_1852_ = lean_box(0);
v_isShared_1853_ = v_isSharedCheck_1858_;
goto v_resetjp_1851_;
}
v_resetjp_1851_:
{
lean_object* v___x_1854_; lean_object* v___x_1856_; 
v___x_1854_ = l_Lean_Doc_joinBlocks(v_a_1850_);
lean_dec(v_a_1850_);
if (v_isShared_1853_ == 0)
{
lean_ctor_set(v___x_1852_, 0, v___x_1854_);
v___x_1856_ = v___x_1852_;
goto v_reusejp_1855_;
}
else
{
lean_object* v_reuseFailAlloc_1857_; 
v_reuseFailAlloc_1857_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1857_, 0, v___x_1854_);
v___x_1856_ = v_reuseFailAlloc_1857_;
goto v_reusejp_1855_;
}
v_reusejp_1855_:
{
return v___x_1856_;
}
}
}
else
{
lean_object* v_a_1859_; lean_object* v___x_1861_; uint8_t v_isShared_1862_; uint8_t v_isSharedCheck_1866_; 
v_a_1859_ = lean_ctor_get(v___x_1849_, 0);
v_isSharedCheck_1866_ = !lean_is_exclusive(v___x_1849_);
if (v_isSharedCheck_1866_ == 0)
{
v___x_1861_ = v___x_1849_;
v_isShared_1862_ = v_isSharedCheck_1866_;
goto v_resetjp_1860_;
}
else
{
lean_inc(v_a_1859_);
lean_dec(v___x_1849_);
v___x_1861_ = lean_box(0);
v_isShared_1862_ = v_isSharedCheck_1866_;
goto v_resetjp_1860_;
}
v_resetjp_1860_:
{
lean_object* v___x_1864_; 
if (v_isShared_1862_ == 0)
{
v___x_1864_ = v___x_1861_;
goto v_reusejp_1863_;
}
else
{
lean_object* v_reuseFailAlloc_1865_; 
v_reuseFailAlloc_1865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1865_, 0, v_a_1859_);
v___x_1864_ = v_reuseFailAlloc_1865_;
goto v_reusejp_1863_;
}
v_reusejp_1863_:
{
return v___x_1864_;
}
}
}
}
case 5:
{
lean_object* v_items_1867_; lean_object* v___x_1868_; size_t v_sz_1869_; size_t v___x_1870_; lean_object* v___x_1871_; lean_object* v___x_1872_; lean_object* v___x_2640__overap_1873_; lean_object* v___x_1874_; 
v_items_1867_ = lean_ctor_get(v_x_1738_, 0);
lean_inc_ref(v_items_1867_);
lean_dec_ref_known(v_x_1738_, 1);
v___x_1868_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___boxed), 7, 2);
lean_closure_set(v___x_1868_, 0, v_inst_1736_);
lean_closure_set(v___x_1868_, 1, v_inst_1737_);
v_sz_1869_ = lean_array_size(v_items_1867_);
v___x_1870_ = ((size_t)0ULL);
v___x_1871_ = l_unsafeCast___redArg(v_items_1867_);
lean_dec_ref(v_items_1867_);
v___x_1872_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1759_, v___x_1868_, v_sz_1869_, v___x_1870_, v___x_1871_);
v___x_2640__overap_1873_ = l_unsafeCast___redArg(v___x_1872_);
lean_dec(v___x_1872_);
lean_inc(v_a_1741_);
lean_inc_ref(v_a_1740_);
lean_inc(v_a_1739_);
v___x_1874_ = lean_apply_4(v___x_2640__overap_1873_, v_a_1739_, v_a_1740_, v_a_1741_, lean_box(0));
if (lean_obj_tag(v___x_1874_) == 0)
{
lean_object* v_a_1875_; lean_object* v___x_1877_; uint8_t v_isShared_1878_; uint8_t v_isSharedCheck_1885_; 
v_a_1875_ = lean_ctor_get(v___x_1874_, 0);
v_isSharedCheck_1885_ = !lean_is_exclusive(v___x_1874_);
if (v_isSharedCheck_1885_ == 0)
{
v___x_1877_ = v___x_1874_;
v_isShared_1878_ = v_isSharedCheck_1885_;
goto v_resetjp_1876_;
}
else
{
lean_inc(v_a_1875_);
lean_dec(v___x_1874_);
v___x_1877_ = lean_box(0);
v_isShared_1878_ = v_isSharedCheck_1885_;
goto v_resetjp_1876_;
}
v_resetjp_1876_:
{
lean_object* v___x_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; lean_object* v___x_1883_; 
v___x_1879_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___closed__0));
v___x_1880_ = l_Lean_Doc_joinBlocks(v_a_1875_);
lean_dec(v_a_1875_);
v___x_1881_ = l_Lean_Doc_prefixLines(v___x_1879_, v___x_1880_);
lean_dec_ref(v___x_1880_);
if (v_isShared_1878_ == 0)
{
lean_ctor_set(v___x_1877_, 0, v___x_1881_);
v___x_1883_ = v___x_1877_;
goto v_reusejp_1882_;
}
else
{
lean_object* v_reuseFailAlloc_1884_; 
v_reuseFailAlloc_1884_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1884_, 0, v___x_1881_);
v___x_1883_ = v_reuseFailAlloc_1884_;
goto v_reusejp_1882_;
}
v_reusejp_1882_:
{
return v___x_1883_;
}
}
}
else
{
lean_object* v_a_1886_; lean_object* v___x_1888_; uint8_t v_isShared_1889_; uint8_t v_isSharedCheck_1893_; 
v_a_1886_ = lean_ctor_get(v___x_1874_, 0);
v_isSharedCheck_1893_ = !lean_is_exclusive(v___x_1874_);
if (v_isSharedCheck_1893_ == 0)
{
v___x_1888_ = v___x_1874_;
v_isShared_1889_ = v_isSharedCheck_1893_;
goto v_resetjp_1887_;
}
else
{
lean_inc(v_a_1886_);
lean_dec(v___x_1874_);
v___x_1888_ = lean_box(0);
v_isShared_1889_ = v_isSharedCheck_1893_;
goto v_resetjp_1887_;
}
v_resetjp_1887_:
{
lean_object* v___x_1891_; 
if (v_isShared_1889_ == 0)
{
v___x_1891_ = v___x_1888_;
goto v_reusejp_1890_;
}
else
{
lean_object* v_reuseFailAlloc_1892_; 
v_reuseFailAlloc_1892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1892_, 0, v_a_1886_);
v___x_1891_ = v_reuseFailAlloc_1892_;
goto v_reusejp_1890_;
}
v_reusejp_1890_:
{
return v___x_1891_;
}
}
}
}
case 6:
{
lean_object* v_content_1894_; lean_object* v___x_1895_; size_t v_sz_1896_; size_t v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_2643__overap_1900_; lean_object* v___x_1901_; 
v_content_1894_ = lean_ctor_get(v_x_1738_, 0);
lean_inc_ref(v_content_1894_);
lean_dec_ref_known(v_x_1738_, 1);
v___x_1895_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___boxed), 7, 2);
lean_closure_set(v___x_1895_, 0, v_inst_1736_);
lean_closure_set(v___x_1895_, 1, v_inst_1737_);
v_sz_1896_ = lean_array_size(v_content_1894_);
v___x_1897_ = ((size_t)0ULL);
v___x_1898_ = l_unsafeCast___redArg(v_content_1894_);
lean_dec_ref(v_content_1894_);
v___x_1899_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1759_, v___x_1895_, v_sz_1896_, v___x_1897_, v___x_1898_);
v___x_2643__overap_1900_ = l_unsafeCast___redArg(v___x_1899_);
lean_dec(v___x_1899_);
lean_inc(v_a_1741_);
lean_inc_ref(v_a_1740_);
lean_inc(v_a_1739_);
v___x_1901_ = lean_apply_4(v___x_2643__overap_1900_, v_a_1739_, v_a_1740_, v_a_1741_, lean_box(0));
if (lean_obj_tag(v___x_1901_) == 0)
{
lean_object* v_a_1902_; lean_object* v___x_1904_; uint8_t v_isShared_1905_; uint8_t v_isSharedCheck_1910_; 
v_a_1902_ = lean_ctor_get(v___x_1901_, 0);
v_isSharedCheck_1910_ = !lean_is_exclusive(v___x_1901_);
if (v_isSharedCheck_1910_ == 0)
{
v___x_1904_ = v___x_1901_;
v_isShared_1905_ = v_isSharedCheck_1910_;
goto v_resetjp_1903_;
}
else
{
lean_inc(v_a_1902_);
lean_dec(v___x_1901_);
v___x_1904_ = lean_box(0);
v_isShared_1905_ = v_isSharedCheck_1910_;
goto v_resetjp_1903_;
}
v_resetjp_1903_:
{
lean_object* v___x_1906_; lean_object* v___x_1908_; 
v___x_1906_ = l_Lean_Doc_joinBlocks(v_a_1902_);
lean_dec(v_a_1902_);
if (v_isShared_1905_ == 0)
{
lean_ctor_set(v___x_1904_, 0, v___x_1906_);
v___x_1908_ = v___x_1904_;
goto v_reusejp_1907_;
}
else
{
lean_object* v_reuseFailAlloc_1909_; 
v_reuseFailAlloc_1909_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1909_, 0, v___x_1906_);
v___x_1908_ = v_reuseFailAlloc_1909_;
goto v_reusejp_1907_;
}
v_reusejp_1907_:
{
return v___x_1908_;
}
}
}
else
{
lean_object* v_a_1911_; lean_object* v___x_1913_; uint8_t v_isShared_1914_; uint8_t v_isSharedCheck_1918_; 
v_a_1911_ = lean_ctor_get(v___x_1901_, 0);
v_isSharedCheck_1918_ = !lean_is_exclusive(v___x_1901_);
if (v_isSharedCheck_1918_ == 0)
{
v___x_1913_ = v___x_1901_;
v_isShared_1914_ = v_isSharedCheck_1918_;
goto v_resetjp_1912_;
}
else
{
lean_inc(v_a_1911_);
lean_dec(v___x_1901_);
v___x_1913_ = lean_box(0);
v_isShared_1914_ = v_isSharedCheck_1918_;
goto v_resetjp_1912_;
}
v_resetjp_1912_:
{
lean_object* v___x_1916_; 
if (v_isShared_1914_ == 0)
{
v___x_1916_ = v___x_1913_;
goto v_reusejp_1915_;
}
else
{
lean_object* v_reuseFailAlloc_1917_; 
v_reuseFailAlloc_1917_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1917_, 0, v_a_1911_);
v___x_1916_ = v_reuseFailAlloc_1917_;
goto v_reusejp_1915_;
}
v_reusejp_1915_:
{
return v___x_1916_;
}
}
}
}
default: 
{
lean_object* v_container_1919_; lean_object* v_content_1920_; lean_object* v___x_1921_; lean_object* v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; 
lean_dec_ref(v___x_1759_);
v_container_1919_ = lean_ctor_get(v_x_1738_, 0);
lean_inc(v_container_1919_);
v_content_1920_ = lean_ctor_get(v_x_1738_, 1);
lean_inc_ref(v_content_1920_);
lean_dec_ref_known(v_x_1738_, 2);
v___x_1921_ = ((lean_object*)(l_Lean_Doc_MarkdownM_instInhabitedInlineCtx_default___closed__0));
lean_inc_ref(v_inst_1736_);
v___x_1922_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___boxed), 8, 3);
lean_closure_set(v___x_1922_, 0, lean_box(0));
lean_closure_set(v___x_1922_, 1, v_inst_1736_);
lean_closure_set(v___x_1922_, 2, v___x_1921_);
lean_inc_ref(v_inst_1737_);
v___x_1923_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___boxed), 7, 2);
lean_closure_set(v___x_1923_, 0, v_inst_1736_);
lean_closure_set(v___x_1923_, 1, v_inst_1737_);
lean_inc(v_a_1741_);
lean_inc_ref(v_a_1740_);
lean_inc(v_a_1739_);
v___x_1924_ = lean_apply_8(v_inst_1737_, v___x_1922_, v___x_1923_, v_container_1919_, v_content_1920_, v_a_1739_, v_a_1740_, v_a_1741_, lean_box(0));
return v___x_1924_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___boxed(lean_object* v_inst_1925_, lean_object* v_inst_1926_, lean_object* v_x_1927_, lean_object* v_a_1928_, lean_object* v_a_1929_, lean_object* v_a_1930_, lean_object* v_a_1931_){
_start:
{
lean_object* v_res_1932_; 
v_res_1932_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg(v_inst_1925_, v_inst_1926_, v_x_1927_, v_a_1928_, v_a_1929_, v_a_1930_);
lean_dec(v_a_1930_);
lean_dec_ref(v_a_1929_);
lean_dec(v_a_1928_);
return v_res_1932_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__0(lean_object* v_inst_1933_, lean_object* v_inst_1934_, lean_object* v___x_1935_, lean_object* v_item_1936_, lean_object* v___y_1937_, lean_object* v___y_1938_, lean_object* v___y_1939_){
_start:
{
lean_object* v___x_1941_; size_t v_sz_1942_; size_t v___x_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_2660__overap_1946_; lean_object* v___x_1947_; 
v___x_1941_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___boxed), 7, 2);
lean_closure_set(v___x_1941_, 0, v_inst_1933_);
lean_closure_set(v___x_1941_, 1, v_inst_1934_);
v_sz_1942_ = lean_array_size(v_item_1936_);
v___x_1943_ = ((size_t)0ULL);
v___x_1944_ = l_unsafeCast___redArg(v_item_1936_);
v___x_1945_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1935_, v___x_1941_, v_sz_1942_, v___x_1943_, v___x_1944_);
v___x_2660__overap_1946_ = l_unsafeCast___redArg(v___x_1945_);
lean_dec(v___x_1945_);
lean_inc(v___y_1939_);
lean_inc_ref(v___y_1938_);
lean_inc(v___y_1937_);
v___x_1947_ = lean_apply_4(v___x_2660__overap_1946_, v___y_1937_, v___y_1938_, v___y_1939_, lean_box(0));
if (lean_obj_tag(v___x_1947_) == 0)
{
lean_object* v_a_1948_; lean_object* v___x_1950_; uint8_t v_isShared_1951_; uint8_t v_isSharedCheck_1959_; 
v_a_1948_ = lean_ctor_get(v___x_1947_, 0);
v_isSharedCheck_1959_ = !lean_is_exclusive(v___x_1947_);
if (v_isSharedCheck_1959_ == 0)
{
v___x_1950_ = v___x_1947_;
v_isShared_1951_ = v_isSharedCheck_1959_;
goto v_resetjp_1949_;
}
else
{
lean_inc(v_a_1948_);
lean_dec(v___x_1947_);
v___x_1950_ = lean_box(0);
v_isShared_1951_ = v_isSharedCheck_1959_;
goto v_resetjp_1949_;
}
v_resetjp_1949_:
{
lean_object* v___x_1952_; lean_object* v___x_1953_; lean_object* v___x_1954_; lean_object* v___x_1955_; lean_object* v___x_1957_; 
v___x_1952_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__0___closed__0));
v___x_1953_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__0___closed__1));
v___x_1954_ = l_Lean_Doc_joinBlocks(v_a_1948_);
lean_dec(v_a_1948_);
v___x_1955_ = l_Lean_Doc_prefixListLines(v___x_1952_, v___x_1953_, v___x_1954_);
lean_dec_ref(v___x_1954_);
if (v_isShared_1951_ == 0)
{
lean_ctor_set(v___x_1950_, 0, v___x_1955_);
v___x_1957_ = v___x_1950_;
goto v_reusejp_1956_;
}
else
{
lean_object* v_reuseFailAlloc_1958_; 
v_reuseFailAlloc_1958_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1958_, 0, v___x_1955_);
v___x_1957_ = v_reuseFailAlloc_1958_;
goto v_reusejp_1956_;
}
v_reusejp_1956_:
{
return v___x_1957_;
}
}
}
else
{
lean_object* v_a_1960_; lean_object* v___x_1962_; uint8_t v_isShared_1963_; uint8_t v_isSharedCheck_1967_; 
v_a_1960_ = lean_ctor_get(v___x_1947_, 0);
v_isSharedCheck_1967_ = !lean_is_exclusive(v___x_1947_);
if (v_isSharedCheck_1967_ == 0)
{
v___x_1962_ = v___x_1947_;
v_isShared_1963_ = v_isSharedCheck_1967_;
goto v_resetjp_1961_;
}
else
{
lean_inc(v_a_1960_);
lean_dec(v___x_1947_);
v___x_1962_ = lean_box(0);
v_isShared_1963_ = v_isSharedCheck_1967_;
goto v_resetjp_1961_;
}
v_resetjp_1961_:
{
lean_object* v___x_1965_; 
if (v_isShared_1963_ == 0)
{
v___x_1965_ = v___x_1962_;
goto v_reusejp_1964_;
}
else
{
lean_object* v_reuseFailAlloc_1966_; 
v_reuseFailAlloc_1966_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1966_, 0, v_a_1960_);
v___x_1965_ = v_reuseFailAlloc_1966_;
goto v_reusejp_1964_;
}
v_reusejp_1964_:
{
return v___x_1965_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown(lean_object* v_i_1968_, lean_object* v_b_1969_, lean_object* v_inst_1970_, lean_object* v_inst_1971_, lean_object* v_x_1972_, lean_object* v_a_1973_, lean_object* v_a_1974_, lean_object* v_a_1975_){
_start:
{
lean_object* v___x_1977_; 
v___x_1977_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg(v_inst_1970_, v_inst_1971_, v_x_1972_, v_a_1973_, v_a_1974_, v_a_1975_);
return v___x_1977_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___boxed(lean_object* v_i_1978_, lean_object* v_b_1979_, lean_object* v_inst_1980_, lean_object* v_inst_1981_, lean_object* v_x_1982_, lean_object* v_a_1983_, lean_object* v_a_1984_, lean_object* v_a_1985_, lean_object* v_a_1986_){
_start:
{
lean_object* v_res_1987_; 
v_res_1987_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown(v_i_1978_, v_b_1979_, v_inst_1980_, v_inst_1981_, v_x_1982_, v_a_1983_, v_a_1984_, v_a_1985_);
lean_dec(v_a_1985_);
lean_dec_ref(v_a_1984_);
lean_dec(v_a_1983_);
return v_res_1987_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownBlockOfMarkdownInlineOfMarkdownBlock___private__1___redArg(lean_object* v_inst_1988_, lean_object* v_inst_1989_, lean_object* v_a_1990_, lean_object* v_a_1991_, lean_object* v_a_1992_, lean_object* v_a_1993_){
_start:
{
lean_object* v___x_1995_; 
v___x_1995_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg(v_inst_1988_, v_inst_1989_, v_a_1990_, v_a_1991_, v_a_1992_, v_a_1993_);
return v___x_1995_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownBlockOfMarkdownInlineOfMarkdownBlock___private__1___redArg___boxed(lean_object* v_inst_1996_, lean_object* v_inst_1997_, lean_object* v_a_1998_, lean_object* v_a_1999_, lean_object* v_a_2000_, lean_object* v_a_2001_, lean_object* v_a_2002_){
_start:
{
lean_object* v_res_2003_; 
v_res_2003_ = l_Lean_Doc_instToMarkdownBlockOfMarkdownInlineOfMarkdownBlock___private__1___redArg(v_inst_1996_, v_inst_1997_, v_a_1998_, v_a_1999_, v_a_2000_, v_a_2001_);
lean_dec(v_a_2001_);
lean_dec_ref(v_a_2000_);
lean_dec(v_a_1999_);
return v_res_2003_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownBlockOfMarkdownInlineOfMarkdownBlock___private__1(lean_object* v_i_2004_, lean_object* v_b_2005_, lean_object* v_inst_2006_, lean_object* v_inst_2007_, lean_object* v_a_2008_, lean_object* v_a_2009_, lean_object* v_a_2010_, lean_object* v_a_2011_){
_start:
{
lean_object* v___x_2013_; 
v___x_2013_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg(v_inst_2006_, v_inst_2007_, v_a_2008_, v_a_2009_, v_a_2010_, v_a_2011_);
return v___x_2013_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownBlockOfMarkdownInlineOfMarkdownBlock___private__1___boxed(lean_object* v_i_2014_, lean_object* v_b_2015_, lean_object* v_inst_2016_, lean_object* v_inst_2017_, lean_object* v_a_2018_, lean_object* v_a_2019_, lean_object* v_a_2020_, lean_object* v_a_2021_, lean_object* v_a_2022_){
_start:
{
lean_object* v_res_2023_; 
v_res_2023_ = l_Lean_Doc_instToMarkdownBlockOfMarkdownInlineOfMarkdownBlock___private__1(v_i_2014_, v_b_2015_, v_inst_2016_, v_inst_2017_, v_a_2018_, v_a_2019_, v_a_2020_, v_a_2021_);
lean_dec(v_a_2021_);
lean_dec_ref(v_a_2020_);
lean_dec(v_a_2019_);
return v_res_2023_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownBlockOfMarkdownInlineOfMarkdownBlock___redArg(lean_object* v_inst_2024_, lean_object* v_inst_2025_){
_start:
{
lean_object* v___x_2026_; 
v___x_2026_ = lean_alloc_closure((void*)(l_Lean_Doc_instToMarkdownBlockOfMarkdownInlineOfMarkdownBlock___private__1___boxed), 9, 4);
lean_closure_set(v___x_2026_, 0, lean_box(0));
lean_closure_set(v___x_2026_, 1, lean_box(0));
lean_closure_set(v___x_2026_, 2, v_inst_2024_);
lean_closure_set(v___x_2026_, 3, v_inst_2025_);
return v___x_2026_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownBlockOfMarkdownInlineOfMarkdownBlock(lean_object* v_i_2027_, lean_object* v_b_2028_, lean_object* v_inst_2029_, lean_object* v_inst_2030_){
_start:
{
lean_object* v___x_2031_; 
v___x_2031_ = lean_alloc_closure((void*)(l_Lean_Doc_instToMarkdownBlockOfMarkdownInlineOfMarkdownBlock___private__1___boxed), 9, 4);
lean_closure_set(v___x_2031_, 0, lean_box(0));
lean_closure_set(v___x_2031_, 1, lean_box(0));
lean_closure_set(v___x_2031_, 2, v_inst_2029_);
lean_closure_set(v___x_2031_, 3, v_inst_2030_);
return v___x_2031_;
}
}
static lean_object* _init_l_Lean_Doc_partMarkdown___redArg___closed__0___boxed__const__1(void){
_start:
{
uint32_t v___x_2032_; lean_object* v___x_2033_; 
v___x_2032_ = 35;
v___x_2033_ = lean_box_uint32(v___x_2032_);
return v___x_2033_;
}
}
static lean_object* _init_l_Lean_Doc_partMarkdown___redArg___closed__0(void){
_start:
{
lean_object* v___x_2034_; lean_object* v___f_2035_; 
v___x_2034_ = l_Lean_Doc_partMarkdown___redArg___closed__0___boxed__const__1;
v___f_2035_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_2035_, 0, v___x_2034_);
return v___f_2035_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_partMarkdown___redArg___boxed(lean_object* v_inst_2036_, lean_object* v_inst_2037_, lean_object* v_level_2038_, lean_object* v_part_2039_, lean_object* v_a_2040_, lean_object* v_a_2041_, lean_object* v_a_2042_, lean_object* v_a_2043_){
_start:
{
lean_object* v_res_2044_; 
v_res_2044_ = l_Lean_Doc_partMarkdown___redArg(v_inst_2036_, v_inst_2037_, v_level_2038_, v_part_2039_, v_a_2040_, v_a_2041_, v_a_2042_);
lean_dec(v_a_2042_);
lean_dec_ref(v_a_2041_);
lean_dec(v_a_2040_);
lean_dec_ref(v_part_2039_);
lean_dec(v_level_2038_);
return v_res_2044_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_partMarkdown___redArg(lean_object* v_inst_2045_, lean_object* v_inst_2046_, lean_object* v_level_2047_, lean_object* v_part_2048_, lean_object* v_a_2049_, lean_object* v_a_2050_, lean_object* v_a_2051_){
_start:
{
lean_object* v___x_2053_; lean_object* v_toApplicative_2054_; lean_object* v_toFunctor_2055_; lean_object* v_toSeq_2056_; lean_object* v_toSeqLeft_2057_; lean_object* v_toSeqRight_2058_; lean_object* v___f_2059_; lean_object* v___f_2060_; lean_object* v___f_2061_; lean_object* v___f_2062_; lean_object* v___x_2063_; lean_object* v___f_2064_; lean_object* v___f_2065_; lean_object* v___f_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2069_; lean_object* v_title_2070_; lean_object* v_content_2071_; lean_object* v_subParts_2072_; lean_object* v___x_2073_; size_t v_sz_2074_; size_t v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_708__overap_2078_; lean_object* v___x_2079_; 
v___x_2053_ = lean_obj_once(&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__1, &l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__1_once, _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__1);
v_toApplicative_2054_ = lean_ctor_get(v___x_2053_, 0);
v_toFunctor_2055_ = lean_ctor_get(v_toApplicative_2054_, 0);
v_toSeq_2056_ = lean_ctor_get(v_toApplicative_2054_, 2);
v_toSeqLeft_2057_ = lean_ctor_get(v_toApplicative_2054_, 3);
v_toSeqRight_2058_ = lean_ctor_get(v_toApplicative_2054_, 4);
v___f_2059_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__2));
v___f_2060_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_2055_, 2);
v___f_2061_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2061_, 0, v_toFunctor_2055_);
v___f_2062_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2062_, 0, v_toFunctor_2055_);
v___x_2063_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2063_, 0, v___f_2061_);
lean_ctor_set(v___x_2063_, 1, v___f_2062_);
lean_inc(v_toSeqRight_2058_);
v___f_2064_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2064_, 0, v_toSeqRight_2058_);
lean_inc(v_toSeqLeft_2057_);
v___f_2065_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2065_, 0, v_toSeqLeft_2057_);
lean_inc(v_toSeq_2056_);
v___f_2066_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2066_, 0, v_toSeq_2056_);
v___x_2067_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2067_, 0, v___x_2063_);
lean_ctor_set(v___x_2067_, 1, v___f_2059_);
lean_ctor_set(v___x_2067_, 2, v___f_2066_);
lean_ctor_set(v___x_2067_, 3, v___f_2065_);
lean_ctor_set(v___x_2067_, 4, v___f_2064_);
v___x_2068_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2068_, 0, v___x_2067_);
lean_ctor_set(v___x_2068_, 1, v___f_2060_);
v___x_2069_ = l_StateRefT_x27_instMonad___redArg(v___x_2068_);
v_title_2070_ = lean_ctor_get(v_part_2048_, 0);
v_content_2071_ = lean_ctor_get(v_part_2048_, 3);
v_subParts_2072_ = lean_ctor_get(v_part_2048_, 4);
lean_inc_ref(v_inst_2045_);
v___x_2073_ = lean_alloc_closure((void*)(l_Lean_Doc_instToMarkdownInlineOfMarkdownInline___private__1___boxed), 7, 2);
lean_closure_set(v___x_2073_, 0, lean_box(0));
lean_closure_set(v___x_2073_, 1, v_inst_2045_);
v_sz_2074_ = lean_array_size(v_title_2070_);
v___x_2075_ = ((size_t)0ULL);
v___x_2076_ = l_unsafeCast___redArg(v_title_2070_);
lean_inc_ref(v___x_2069_);
v___x_2077_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_2069_, v___x_2073_, v_sz_2074_, v___x_2075_, v___x_2076_);
v___x_708__overap_2078_ = l_unsafeCast___redArg(v___x_2077_);
lean_dec(v___x_2077_);
lean_inc(v_a_2051_);
lean_inc_ref(v_a_2050_);
lean_inc(v_a_2049_);
v___x_2079_ = lean_apply_4(v___x_708__overap_2078_, v_a_2049_, v_a_2050_, v_a_2051_, lean_box(0));
if (lean_obj_tag(v___x_2079_) == 0)
{
lean_object* v_a_2080_; lean_object* v___x_2081_; lean_object* v___f_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; size_t v_sz_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; lean_object* v___x_712__overap_2097_; lean_object* v___x_2098_; 
v_a_2080_ = lean_ctor_get(v___x_2079_, 0);
lean_inc(v_a_2080_);
lean_dec_ref_known(v___x_2079_, 1);
v___x_2081_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinBlocks_spec__0___closed__0));
v___f_2082_ = lean_obj_once(&l_Lean_Doc_partMarkdown___redArg___closed__0, &l_Lean_Doc_partMarkdown___redArg___closed__0_once, _init_l_Lean_Doc_partMarkdown___redArg___closed__0);
v___x_2083_ = lean_unsigned_to_nat(1u);
v___x_2084_ = lean_nat_add(v_level_2047_, v___x_2083_);
lean_inc(v___x_2084_);
v___x_2085_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop(lean_box(0), v___f_2082_, v___x_2084_, v___x_2081_);
v___x_2086_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_quoteCode___closed__0));
v___x_2087_ = lean_string_append(v___x_2085_, v___x_2086_);
v___x_2088_ = lean_mk_empty_array_with_capacity(v___x_2083_);
lean_inc_ref_n(v___x_2088_, 2);
v___x_2089_ = lean_array_push(v___x_2088_, v___x_2087_);
v___x_2090_ = lean_array_push(v___x_2088_, v___x_2089_);
v___x_2091_ = l_Array_append___redArg(v___x_2090_, v_a_2080_);
lean_dec(v_a_2080_);
v___x_2092_ = l_Lean_Doc_joinInlines(v___x_2091_);
lean_dec_ref(v___x_2091_);
lean_inc_ref(v_inst_2046_);
lean_inc_ref(v_inst_2045_);
v___x_2093_ = lean_alloc_closure((void*)(l_Lean_Doc_instToMarkdownBlockOfMarkdownInlineOfMarkdownBlock___private__1___boxed), 9, 4);
lean_closure_set(v___x_2093_, 0, lean_box(0));
lean_closure_set(v___x_2093_, 1, lean_box(0));
lean_closure_set(v___x_2093_, 2, v_inst_2045_);
lean_closure_set(v___x_2093_, 3, v_inst_2046_);
v_sz_2094_ = lean_array_size(v_content_2071_);
v___x_2095_ = l_unsafeCast___redArg(v_content_2071_);
lean_inc_ref(v___x_2069_);
v___x_2096_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_2069_, v___x_2093_, v_sz_2094_, v___x_2075_, v___x_2095_);
v___x_712__overap_2097_ = l_unsafeCast___redArg(v___x_2096_);
lean_dec(v___x_2096_);
lean_inc(v_a_2051_);
lean_inc_ref(v_a_2050_);
lean_inc(v_a_2049_);
v___x_2098_ = lean_apply_4(v___x_712__overap_2097_, v_a_2049_, v_a_2050_, v_a_2051_, lean_box(0));
if (lean_obj_tag(v___x_2098_) == 0)
{
lean_object* v_a_2099_; lean_object* v___x_2100_; size_t v_sz_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_715__overap_2104_; lean_object* v___x_2105_; 
v_a_2099_ = lean_ctor_get(v___x_2098_, 0);
lean_inc(v_a_2099_);
lean_dec_ref_known(v___x_2098_, 1);
v___x_2100_ = lean_alloc_closure((void*)(l_Lean_Doc_partMarkdown___redArg___boxed), 8, 3);
lean_closure_set(v___x_2100_, 0, v_inst_2045_);
lean_closure_set(v___x_2100_, 1, v_inst_2046_);
lean_closure_set(v___x_2100_, 2, v___x_2084_);
v_sz_2101_ = lean_array_size(v_subParts_2072_);
v___x_2102_ = l_unsafeCast___redArg(v_subParts_2072_);
v___x_2103_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_2069_, v___x_2100_, v_sz_2101_, v___x_2075_, v___x_2102_);
v___x_715__overap_2104_ = l_unsafeCast___redArg(v___x_2103_);
lean_dec(v___x_2103_);
lean_inc(v_a_2051_);
lean_inc_ref(v_a_2050_);
lean_inc(v_a_2049_);
v___x_2105_ = lean_apply_4(v___x_715__overap_2104_, v_a_2049_, v_a_2050_, v_a_2051_, lean_box(0));
if (lean_obj_tag(v___x_2105_) == 0)
{
lean_object* v_a_2106_; lean_object* v___x_2108_; uint8_t v_isShared_2109_; uint8_t v_isSharedCheck_2117_; 
v_a_2106_ = lean_ctor_get(v___x_2105_, 0);
v_isSharedCheck_2117_ = !lean_is_exclusive(v___x_2105_);
if (v_isSharedCheck_2117_ == 0)
{
v___x_2108_ = v___x_2105_;
v_isShared_2109_ = v_isSharedCheck_2117_;
goto v_resetjp_2107_;
}
else
{
lean_inc(v_a_2106_);
lean_dec(v___x_2105_);
v___x_2108_ = lean_box(0);
v_isShared_2109_ = v_isSharedCheck_2117_;
goto v_resetjp_2107_;
}
v_resetjp_2107_:
{
lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2115_; 
v___x_2110_ = lean_array_push(v___x_2088_, v___x_2092_);
v___x_2111_ = l_Array_append___redArg(v___x_2110_, v_a_2099_);
lean_dec(v_a_2099_);
v___x_2112_ = l_Array_append___redArg(v___x_2111_, v_a_2106_);
lean_dec(v_a_2106_);
v___x_2113_ = l_Lean_Doc_joinBlocks(v___x_2112_);
lean_dec_ref(v___x_2112_);
if (v_isShared_2109_ == 0)
{
lean_ctor_set(v___x_2108_, 0, v___x_2113_);
v___x_2115_ = v___x_2108_;
goto v_reusejp_2114_;
}
else
{
lean_object* v_reuseFailAlloc_2116_; 
v_reuseFailAlloc_2116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2116_, 0, v___x_2113_);
v___x_2115_ = v_reuseFailAlloc_2116_;
goto v_reusejp_2114_;
}
v_reusejp_2114_:
{
return v___x_2115_;
}
}
}
else
{
lean_object* v_a_2118_; lean_object* v___x_2120_; uint8_t v_isShared_2121_; uint8_t v_isSharedCheck_2125_; 
lean_dec(v_a_2099_);
lean_dec_ref(v___x_2092_);
lean_dec_ref(v___x_2088_);
v_a_2118_ = lean_ctor_get(v___x_2105_, 0);
v_isSharedCheck_2125_ = !lean_is_exclusive(v___x_2105_);
if (v_isSharedCheck_2125_ == 0)
{
v___x_2120_ = v___x_2105_;
v_isShared_2121_ = v_isSharedCheck_2125_;
goto v_resetjp_2119_;
}
else
{
lean_inc(v_a_2118_);
lean_dec(v___x_2105_);
v___x_2120_ = lean_box(0);
v_isShared_2121_ = v_isSharedCheck_2125_;
goto v_resetjp_2119_;
}
v_resetjp_2119_:
{
lean_object* v___x_2123_; 
if (v_isShared_2121_ == 0)
{
v___x_2123_ = v___x_2120_;
goto v_reusejp_2122_;
}
else
{
lean_object* v_reuseFailAlloc_2124_; 
v_reuseFailAlloc_2124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2124_, 0, v_a_2118_);
v___x_2123_ = v_reuseFailAlloc_2124_;
goto v_reusejp_2122_;
}
v_reusejp_2122_:
{
return v___x_2123_;
}
}
}
}
else
{
lean_object* v_a_2126_; lean_object* v___x_2128_; uint8_t v_isShared_2129_; uint8_t v_isSharedCheck_2133_; 
lean_dec_ref(v___x_2092_);
lean_dec_ref(v___x_2088_);
lean_dec(v___x_2084_);
lean_dec_ref(v___x_2069_);
lean_dec_ref(v_inst_2046_);
lean_dec_ref(v_inst_2045_);
v_a_2126_ = lean_ctor_get(v___x_2098_, 0);
v_isSharedCheck_2133_ = !lean_is_exclusive(v___x_2098_);
if (v_isSharedCheck_2133_ == 0)
{
v___x_2128_ = v___x_2098_;
v_isShared_2129_ = v_isSharedCheck_2133_;
goto v_resetjp_2127_;
}
else
{
lean_inc(v_a_2126_);
lean_dec(v___x_2098_);
v___x_2128_ = lean_box(0);
v_isShared_2129_ = v_isSharedCheck_2133_;
goto v_resetjp_2127_;
}
v_resetjp_2127_:
{
lean_object* v___x_2131_; 
if (v_isShared_2129_ == 0)
{
v___x_2131_ = v___x_2128_;
goto v_reusejp_2130_;
}
else
{
lean_object* v_reuseFailAlloc_2132_; 
v_reuseFailAlloc_2132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2132_, 0, v_a_2126_);
v___x_2131_ = v_reuseFailAlloc_2132_;
goto v_reusejp_2130_;
}
v_reusejp_2130_:
{
return v___x_2131_;
}
}
}
}
else
{
lean_object* v_a_2134_; lean_object* v___x_2136_; uint8_t v_isShared_2137_; uint8_t v_isSharedCheck_2141_; 
lean_dec_ref(v___x_2069_);
lean_dec_ref(v_inst_2046_);
lean_dec_ref(v_inst_2045_);
v_a_2134_ = lean_ctor_get(v___x_2079_, 0);
v_isSharedCheck_2141_ = !lean_is_exclusive(v___x_2079_);
if (v_isSharedCheck_2141_ == 0)
{
v___x_2136_ = v___x_2079_;
v_isShared_2137_ = v_isSharedCheck_2141_;
goto v_resetjp_2135_;
}
else
{
lean_inc(v_a_2134_);
lean_dec(v___x_2079_);
v___x_2136_ = lean_box(0);
v_isShared_2137_ = v_isSharedCheck_2141_;
goto v_resetjp_2135_;
}
v_resetjp_2135_:
{
lean_object* v___x_2139_; 
if (v_isShared_2137_ == 0)
{
v___x_2139_ = v___x_2136_;
goto v_reusejp_2138_;
}
else
{
lean_object* v_reuseFailAlloc_2140_; 
v_reuseFailAlloc_2140_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2140_, 0, v_a_2134_);
v___x_2139_ = v_reuseFailAlloc_2140_;
goto v_reusejp_2138_;
}
v_reusejp_2138_:
{
return v___x_2139_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_partMarkdown(lean_object* v_i_2142_, lean_object* v_b_2143_, lean_object* v_p_2144_, lean_object* v_inst_2145_, lean_object* v_inst_2146_, lean_object* v_level_2147_, lean_object* v_part_2148_, lean_object* v_a_2149_, lean_object* v_a_2150_, lean_object* v_a_2151_){
_start:
{
lean_object* v___x_2153_; 
v___x_2153_ = l_Lean_Doc_partMarkdown___redArg(v_inst_2145_, v_inst_2146_, v_level_2147_, v_part_2148_, v_a_2149_, v_a_2150_, v_a_2151_);
return v___x_2153_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_partMarkdown___boxed(lean_object* v_i_2154_, lean_object* v_b_2155_, lean_object* v_p_2156_, lean_object* v_inst_2157_, lean_object* v_inst_2158_, lean_object* v_level_2159_, lean_object* v_part_2160_, lean_object* v_a_2161_, lean_object* v_a_2162_, lean_object* v_a_2163_, lean_object* v_a_2164_){
_start:
{
lean_object* v_res_2165_; 
v_res_2165_ = l_Lean_Doc_partMarkdown(v_i_2154_, v_b_2155_, v_p_2156_, v_inst_2157_, v_inst_2158_, v_level_2159_, v_part_2160_, v_a_2161_, v_a_2162_, v_a_2163_);
lean_dec(v_a_2163_);
lean_dec_ref(v_a_2162_);
lean_dec(v_a_2161_);
lean_dec_ref(v_part_2160_);
lean_dec(v_level_2159_);
return v_res_2165_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownPartOfMarkdownInlineOfMarkdownBlock___redArg___lam__0(lean_object* v_inst_2166_, lean_object* v_inst_2167_, lean_object* v_part_2168_, lean_object* v___y_2169_, lean_object* v___y_2170_, lean_object* v___y_2171_){
_start:
{
lean_object* v___x_2173_; lean_object* v___x_2174_; 
v___x_2173_ = lean_unsigned_to_nat(0u);
v___x_2174_ = l_Lean_Doc_partMarkdown___redArg(v_inst_2166_, v_inst_2167_, v___x_2173_, v_part_2168_, v___y_2169_, v___y_2170_, v___y_2171_);
return v___x_2174_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownPartOfMarkdownInlineOfMarkdownBlock___redArg___lam__0___boxed(lean_object* v_inst_2175_, lean_object* v_inst_2176_, lean_object* v_part_2177_, lean_object* v___y_2178_, lean_object* v___y_2179_, lean_object* v___y_2180_, lean_object* v___y_2181_){
_start:
{
lean_object* v_res_2182_; 
v_res_2182_ = l_Lean_Doc_instToMarkdownPartOfMarkdownInlineOfMarkdownBlock___redArg___lam__0(v_inst_2175_, v_inst_2176_, v_part_2177_, v___y_2178_, v___y_2179_, v___y_2180_);
lean_dec(v___y_2180_);
lean_dec_ref(v___y_2179_);
lean_dec(v___y_2178_);
lean_dec_ref(v_part_2177_);
return v_res_2182_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownPartOfMarkdownInlineOfMarkdownBlock___redArg(lean_object* v_inst_2183_, lean_object* v_inst_2184_){
_start:
{
lean_object* v___f_2185_; 
v___f_2185_ = lean_alloc_closure((void*)(l_Lean_Doc_instToMarkdownPartOfMarkdownInlineOfMarkdownBlock___redArg___lam__0___boxed), 7, 2);
lean_closure_set(v___f_2185_, 0, v_inst_2183_);
lean_closure_set(v___f_2185_, 1, v_inst_2184_);
return v___f_2185_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownPartOfMarkdownInlineOfMarkdownBlock(lean_object* v_i_2186_, lean_object* v_b_2187_, lean_object* v_p_2188_, lean_object* v_inst_2189_, lean_object* v_inst_2190_){
_start:
{
lean_object* v___f_2191_; 
v___f_2191_ = lean_alloc_closure((void*)(l_Lean_Doc_instToMarkdownPartOfMarkdownInlineOfMarkdownBlock___redArg___lam__0___boxed), 7, 2);
lean_closure_set(v___f_2191_, 0, v_inst_2189_);
lean_closure_set(v___f_2191_, 1, v_inst_2190_);
return v___f_2191_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_mkInlineMdRenderer___redArg(lean_object* v_inst_2192_, lean_object* v_f_2193_, lean_object* v_go_2194_, lean_object* v_val_2195_, lean_object* v_content_2196_, lean_object* v_a_2197_, lean_object* v_a_2198_, lean_object* v_a_2199_){
_start:
{
lean_object* v___x_2201_; lean_object* v_toApplicative_2202_; lean_object* v_toFunctor_2203_; lean_object* v_toSeq_2204_; lean_object* v_toSeqLeft_2205_; lean_object* v_toSeqRight_2206_; lean_object* v___f_2207_; lean_object* v___f_2208_; lean_object* v___f_2209_; lean_object* v___f_2210_; lean_object* v___x_2211_; lean_object* v___f_2212_; lean_object* v___f_2213_; lean_object* v___f_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; 
v___x_2201_ = lean_obj_once(&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__1, &l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__1_once, _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__1);
v_toApplicative_2202_ = lean_ctor_get(v___x_2201_, 0);
v_toFunctor_2203_ = lean_ctor_get(v_toApplicative_2202_, 0);
v_toSeq_2204_ = lean_ctor_get(v_toApplicative_2202_, 2);
v_toSeqLeft_2205_ = lean_ctor_get(v_toApplicative_2202_, 3);
v_toSeqRight_2206_ = lean_ctor_get(v_toApplicative_2202_, 4);
v___f_2207_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__2));
v___f_2208_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_2203_, 2);
v___f_2209_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2209_, 0, v_toFunctor_2203_);
v___f_2210_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2210_, 0, v_toFunctor_2203_);
v___x_2211_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2211_, 0, v___f_2209_);
lean_ctor_set(v___x_2211_, 1, v___f_2210_);
lean_inc(v_toSeqRight_2206_);
v___f_2212_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2212_, 0, v_toSeqRight_2206_);
lean_inc(v_toSeqLeft_2205_);
v___f_2213_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2213_, 0, v_toSeqLeft_2205_);
lean_inc(v_toSeq_2204_);
v___f_2214_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2214_, 0, v_toSeq_2204_);
v___x_2215_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2215_, 0, v___x_2211_);
lean_ctor_set(v___x_2215_, 1, v___f_2207_);
lean_ctor_set(v___x_2215_, 2, v___f_2214_);
lean_ctor_set(v___x_2215_, 3, v___f_2213_);
lean_ctor_set(v___x_2215_, 4, v___f_2212_);
v___x_2216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2216_, 0, v___x_2215_);
lean_ctor_set(v___x_2216_, 1, v___f_2208_);
v___x_2217_ = l_StateRefT_x27_instMonad___redArg(v___x_2216_);
v___x_2218_ = l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___redArg(v_val_2195_, v_inst_2192_);
if (lean_obj_tag(v___x_2218_) == 0)
{
size_t v_sz_2219_; size_t v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_307__overap_2223_; lean_object* v___x_2224_; 
lean_dec_ref(v_f_2193_);
v_sz_2219_ = lean_array_size(v_content_2196_);
v___x_2220_ = ((size_t)0ULL);
v___x_2221_ = l_unsafeCast___redArg(v_content_2196_);
lean_dec_ref(v_content_2196_);
v___x_2222_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_2217_, v_go_2194_, v_sz_2219_, v___x_2220_, v___x_2221_);
v___x_307__overap_2223_ = l_unsafeCast___redArg(v___x_2222_);
lean_dec(v___x_2222_);
lean_inc(v_a_2199_);
lean_inc_ref(v_a_2198_);
lean_inc(v_a_2197_);
v___x_2224_ = lean_apply_4(v___x_307__overap_2223_, v_a_2197_, v_a_2198_, v_a_2199_, lean_box(0));
if (lean_obj_tag(v___x_2224_) == 0)
{
lean_object* v_a_2225_; lean_object* v___x_2227_; uint8_t v_isShared_2228_; uint8_t v_isSharedCheck_2233_; 
v_a_2225_ = lean_ctor_get(v___x_2224_, 0);
v_isSharedCheck_2233_ = !lean_is_exclusive(v___x_2224_);
if (v_isSharedCheck_2233_ == 0)
{
v___x_2227_ = v___x_2224_;
v_isShared_2228_ = v_isSharedCheck_2233_;
goto v_resetjp_2226_;
}
else
{
lean_inc(v_a_2225_);
lean_dec(v___x_2224_);
v___x_2227_ = lean_box(0);
v_isShared_2228_ = v_isSharedCheck_2233_;
goto v_resetjp_2226_;
}
v_resetjp_2226_:
{
lean_object* v___x_2229_; lean_object* v___x_2231_; 
v___x_2229_ = l_Lean_Doc_joinInlines(v_a_2225_);
lean_dec(v_a_2225_);
if (v_isShared_2228_ == 0)
{
lean_ctor_set(v___x_2227_, 0, v___x_2229_);
v___x_2231_ = v___x_2227_;
goto v_reusejp_2230_;
}
else
{
lean_object* v_reuseFailAlloc_2232_; 
v_reuseFailAlloc_2232_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2232_, 0, v___x_2229_);
v___x_2231_ = v_reuseFailAlloc_2232_;
goto v_reusejp_2230_;
}
v_reusejp_2230_:
{
return v___x_2231_;
}
}
}
else
{
lean_object* v_a_2234_; lean_object* v___x_2236_; uint8_t v_isShared_2237_; uint8_t v_isSharedCheck_2241_; 
v_a_2234_ = lean_ctor_get(v___x_2224_, 0);
v_isSharedCheck_2241_ = !lean_is_exclusive(v___x_2224_);
if (v_isSharedCheck_2241_ == 0)
{
v___x_2236_ = v___x_2224_;
v_isShared_2237_ = v_isSharedCheck_2241_;
goto v_resetjp_2235_;
}
else
{
lean_inc(v_a_2234_);
lean_dec(v___x_2224_);
v___x_2236_ = lean_box(0);
v_isShared_2237_ = v_isSharedCheck_2241_;
goto v_resetjp_2235_;
}
v_resetjp_2235_:
{
lean_object* v___x_2239_; 
if (v_isShared_2237_ == 0)
{
v___x_2239_ = v___x_2236_;
goto v_reusejp_2238_;
}
else
{
lean_object* v_reuseFailAlloc_2240_; 
v_reuseFailAlloc_2240_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2240_, 0, v_a_2234_);
v___x_2239_ = v_reuseFailAlloc_2240_;
goto v_reusejp_2238_;
}
v_reusejp_2238_:
{
return v___x_2239_;
}
}
}
}
else
{
lean_object* v_val_2242_; lean_object* v___x_2243_; 
lean_dec_ref(v___x_2217_);
v_val_2242_ = lean_ctor_get(v___x_2218_, 0);
lean_inc(v_val_2242_);
lean_dec_ref_known(v___x_2218_, 1);
lean_inc(v_a_2199_);
lean_inc_ref(v_a_2198_);
lean_inc(v_a_2197_);
v___x_2243_ = lean_apply_7(v_f_2193_, v_go_2194_, v_val_2242_, v_content_2196_, v_a_2197_, v_a_2198_, v_a_2199_, lean_box(0));
return v___x_2243_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_mkInlineMdRenderer___redArg___boxed(lean_object* v_inst_2244_, lean_object* v_f_2245_, lean_object* v_go_2246_, lean_object* v_val_2247_, lean_object* v_content_2248_, lean_object* v_a_2249_, lean_object* v_a_2250_, lean_object* v_a_2251_, lean_object* v_a_2252_){
_start:
{
lean_object* v_res_2253_; 
v_res_2253_ = l_Lean_Doc_mkInlineMdRenderer___redArg(v_inst_2244_, v_f_2245_, v_go_2246_, v_val_2247_, v_content_2248_, v_a_2249_, v_a_2250_, v_a_2251_);
lean_dec(v_a_2251_);
lean_dec_ref(v_a_2250_);
lean_dec(v_a_2249_);
lean_dec(v_val_2247_);
lean_dec(v_inst_2244_);
return v_res_2253_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_mkInlineMdRenderer(lean_object* v_00_u03b1_2254_, lean_object* v_inst_2255_, lean_object* v_f_2256_, lean_object* v_go_2257_, lean_object* v_val_2258_, lean_object* v_content_2259_, lean_object* v_a_2260_, lean_object* v_a_2261_, lean_object* v_a_2262_){
_start:
{
lean_object* v___x_2264_; 
v___x_2264_ = l_Lean_Doc_mkInlineMdRenderer___redArg(v_inst_2255_, v_f_2256_, v_go_2257_, v_val_2258_, v_content_2259_, v_a_2260_, v_a_2261_, v_a_2262_);
return v___x_2264_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_mkInlineMdRenderer___boxed(lean_object* v_00_u03b1_2265_, lean_object* v_inst_2266_, lean_object* v_f_2267_, lean_object* v_go_2268_, lean_object* v_val_2269_, lean_object* v_content_2270_, lean_object* v_a_2271_, lean_object* v_a_2272_, lean_object* v_a_2273_, lean_object* v_a_2274_){
_start:
{
lean_object* v_res_2275_; 
v_res_2275_ = l_Lean_Doc_mkInlineMdRenderer(v_00_u03b1_2265_, v_inst_2266_, v_f_2267_, v_go_2268_, v_val_2269_, v_content_2270_, v_a_2271_, v_a_2272_, v_a_2273_);
lean_dec(v_a_2273_);
lean_dec_ref(v_a_2272_);
lean_dec(v_a_2271_);
lean_dec(v_val_2269_);
lean_dec(v_inst_2266_);
return v_res_2275_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_mkBlockMdRenderer___redArg(lean_object* v_inst_2276_, lean_object* v_f_2277_, lean_object* v_goI_2278_, lean_object* v_goB_2279_, lean_object* v_val_2280_, lean_object* v_content_2281_, lean_object* v_a_2282_, lean_object* v_a_2283_, lean_object* v_a_2284_){
_start:
{
lean_object* v___x_2286_; lean_object* v_toApplicative_2287_; lean_object* v_toFunctor_2288_; lean_object* v_toSeq_2289_; lean_object* v_toSeqLeft_2290_; lean_object* v_toSeqRight_2291_; lean_object* v___f_2292_; lean_object* v___f_2293_; lean_object* v___f_2294_; lean_object* v___f_2295_; lean_object* v___x_2296_; lean_object* v___f_2297_; lean_object* v___f_2298_; lean_object* v___f_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; 
v___x_2286_ = lean_obj_once(&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__1, &l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__1_once, _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__1);
v_toApplicative_2287_ = lean_ctor_get(v___x_2286_, 0);
v_toFunctor_2288_ = lean_ctor_get(v_toApplicative_2287_, 0);
v_toSeq_2289_ = lean_ctor_get(v_toApplicative_2287_, 2);
v_toSeqLeft_2290_ = lean_ctor_get(v_toApplicative_2287_, 3);
v_toSeqRight_2291_ = lean_ctor_get(v_toApplicative_2287_, 4);
v___f_2292_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__2));
v___f_2293_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_2288_, 2);
v___f_2294_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2294_, 0, v_toFunctor_2288_);
v___f_2295_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2295_, 0, v_toFunctor_2288_);
v___x_2296_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2296_, 0, v___f_2294_);
lean_ctor_set(v___x_2296_, 1, v___f_2295_);
lean_inc(v_toSeqRight_2291_);
v___f_2297_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2297_, 0, v_toSeqRight_2291_);
lean_inc(v_toSeqLeft_2290_);
v___f_2298_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2298_, 0, v_toSeqLeft_2290_);
lean_inc(v_toSeq_2289_);
v___f_2299_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2299_, 0, v_toSeq_2289_);
v___x_2300_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2300_, 0, v___x_2296_);
lean_ctor_set(v___x_2300_, 1, v___f_2292_);
lean_ctor_set(v___x_2300_, 2, v___f_2299_);
lean_ctor_set(v___x_2300_, 3, v___f_2298_);
lean_ctor_set(v___x_2300_, 4, v___f_2297_);
v___x_2301_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2301_, 0, v___x_2300_);
lean_ctor_set(v___x_2301_, 1, v___f_2293_);
v___x_2302_ = l_StateRefT_x27_instMonad___redArg(v___x_2301_);
v___x_2303_ = l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___redArg(v_val_2280_, v_inst_2276_);
if (lean_obj_tag(v___x_2303_) == 0)
{
size_t v_sz_2304_; size_t v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_307__overap_2308_; lean_object* v___x_2309_; 
lean_dec_ref(v_goI_2278_);
lean_dec_ref(v_f_2277_);
v_sz_2304_ = lean_array_size(v_content_2281_);
v___x_2305_ = ((size_t)0ULL);
v___x_2306_ = l_unsafeCast___redArg(v_content_2281_);
lean_dec_ref(v_content_2281_);
v___x_2307_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_2302_, v_goB_2279_, v_sz_2304_, v___x_2305_, v___x_2306_);
v___x_307__overap_2308_ = l_unsafeCast___redArg(v___x_2307_);
lean_dec(v___x_2307_);
lean_inc(v_a_2284_);
lean_inc_ref(v_a_2283_);
lean_inc(v_a_2282_);
v___x_2309_ = lean_apply_4(v___x_307__overap_2308_, v_a_2282_, v_a_2283_, v_a_2284_, lean_box(0));
if (lean_obj_tag(v___x_2309_) == 0)
{
lean_object* v_a_2310_; lean_object* v___x_2312_; uint8_t v_isShared_2313_; uint8_t v_isSharedCheck_2318_; 
v_a_2310_ = lean_ctor_get(v___x_2309_, 0);
v_isSharedCheck_2318_ = !lean_is_exclusive(v___x_2309_);
if (v_isSharedCheck_2318_ == 0)
{
v___x_2312_ = v___x_2309_;
v_isShared_2313_ = v_isSharedCheck_2318_;
goto v_resetjp_2311_;
}
else
{
lean_inc(v_a_2310_);
lean_dec(v___x_2309_);
v___x_2312_ = lean_box(0);
v_isShared_2313_ = v_isSharedCheck_2318_;
goto v_resetjp_2311_;
}
v_resetjp_2311_:
{
lean_object* v___x_2314_; lean_object* v___x_2316_; 
v___x_2314_ = l_Lean_Doc_joinBlocks(v_a_2310_);
lean_dec(v_a_2310_);
if (v_isShared_2313_ == 0)
{
lean_ctor_set(v___x_2312_, 0, v___x_2314_);
v___x_2316_ = v___x_2312_;
goto v_reusejp_2315_;
}
else
{
lean_object* v_reuseFailAlloc_2317_; 
v_reuseFailAlloc_2317_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2317_, 0, v___x_2314_);
v___x_2316_ = v_reuseFailAlloc_2317_;
goto v_reusejp_2315_;
}
v_reusejp_2315_:
{
return v___x_2316_;
}
}
}
else
{
lean_object* v_a_2319_; lean_object* v___x_2321_; uint8_t v_isShared_2322_; uint8_t v_isSharedCheck_2326_; 
v_a_2319_ = lean_ctor_get(v___x_2309_, 0);
v_isSharedCheck_2326_ = !lean_is_exclusive(v___x_2309_);
if (v_isSharedCheck_2326_ == 0)
{
v___x_2321_ = v___x_2309_;
v_isShared_2322_ = v_isSharedCheck_2326_;
goto v_resetjp_2320_;
}
else
{
lean_inc(v_a_2319_);
lean_dec(v___x_2309_);
v___x_2321_ = lean_box(0);
v_isShared_2322_ = v_isSharedCheck_2326_;
goto v_resetjp_2320_;
}
v_resetjp_2320_:
{
lean_object* v___x_2324_; 
if (v_isShared_2322_ == 0)
{
v___x_2324_ = v___x_2321_;
goto v_reusejp_2323_;
}
else
{
lean_object* v_reuseFailAlloc_2325_; 
v_reuseFailAlloc_2325_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2325_, 0, v_a_2319_);
v___x_2324_ = v_reuseFailAlloc_2325_;
goto v_reusejp_2323_;
}
v_reusejp_2323_:
{
return v___x_2324_;
}
}
}
}
else
{
lean_object* v_val_2327_; lean_object* v___x_2328_; 
lean_dec_ref(v___x_2302_);
v_val_2327_ = lean_ctor_get(v___x_2303_, 0);
lean_inc(v_val_2327_);
lean_dec_ref_known(v___x_2303_, 1);
lean_inc(v_a_2284_);
lean_inc_ref(v_a_2283_);
lean_inc(v_a_2282_);
v___x_2328_ = lean_apply_8(v_f_2277_, v_goI_2278_, v_goB_2279_, v_val_2327_, v_content_2281_, v_a_2282_, v_a_2283_, v_a_2284_, lean_box(0));
return v___x_2328_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_mkBlockMdRenderer___redArg___boxed(lean_object* v_inst_2329_, lean_object* v_f_2330_, lean_object* v_goI_2331_, lean_object* v_goB_2332_, lean_object* v_val_2333_, lean_object* v_content_2334_, lean_object* v_a_2335_, lean_object* v_a_2336_, lean_object* v_a_2337_, lean_object* v_a_2338_){
_start:
{
lean_object* v_res_2339_; 
v_res_2339_ = l_Lean_Doc_mkBlockMdRenderer___redArg(v_inst_2329_, v_f_2330_, v_goI_2331_, v_goB_2332_, v_val_2333_, v_content_2334_, v_a_2335_, v_a_2336_, v_a_2337_);
lean_dec(v_a_2337_);
lean_dec_ref(v_a_2336_);
lean_dec(v_a_2335_);
lean_dec(v_val_2333_);
lean_dec(v_inst_2329_);
return v_res_2339_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_mkBlockMdRenderer(lean_object* v_00_u03b1_2340_, lean_object* v_inst_2341_, lean_object* v_f_2342_, lean_object* v_goI_2343_, lean_object* v_goB_2344_, lean_object* v_val_2345_, lean_object* v_content_2346_, lean_object* v_a_2347_, lean_object* v_a_2348_, lean_object* v_a_2349_){
_start:
{
lean_object* v___x_2351_; 
v___x_2351_ = l_Lean_Doc_mkBlockMdRenderer___redArg(v_inst_2341_, v_f_2342_, v_goI_2343_, v_goB_2344_, v_val_2345_, v_content_2346_, v_a_2347_, v_a_2348_, v_a_2349_);
return v___x_2351_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_mkBlockMdRenderer___boxed(lean_object* v_00_u03b1_2352_, lean_object* v_inst_2353_, lean_object* v_f_2354_, lean_object* v_goI_2355_, lean_object* v_goB_2356_, lean_object* v_val_2357_, lean_object* v_content_2358_, lean_object* v_a_2359_, lean_object* v_a_2360_, lean_object* v_a_2361_, lean_object* v_a_2362_){
_start:
{
lean_object* v_res_2363_; 
v_res_2363_ = l_Lean_Doc_mkBlockMdRenderer(v_00_u03b1_2352_, v_inst_2353_, v_f_2354_, v_goI_2355_, v_goB_2356_, v_val_2357_, v_content_2358_, v_a_2359_, v_a_2360_, v_a_2361_);
lean_dec(v_a_2361_);
lean_dec_ref(v_a_2360_);
lean_dec(v_a_2359_);
lean_dec(v_val_2357_);
lean_dec(v_inst_2353_);
return v_res_2363_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_foldEntries_spec__0(lean_object* v_as_2368_, size_t v_i_2369_, size_t v_stop_2370_, lean_object* v_b_2371_){
_start:
{
uint8_t v___x_2372_; 
v___x_2372_ = lean_usize_dec_eq(v_i_2369_, v_stop_2370_);
if (v___x_2372_ == 0)
{
lean_object* v___x_2373_; lean_object* v_fst_2374_; lean_object* v_snd_2375_; lean_object* v___x_2376_; size_t v___x_2377_; size_t v___x_2378_; 
v___x_2373_ = lean_array_uget_borrowed(v_as_2368_, v_i_2369_);
v_fst_2374_ = lean_ctor_get(v___x_2373_, 0);
v_snd_2375_ = lean_ctor_get(v___x_2373_, 1);
lean_inc(v_snd_2375_);
lean_inc(v_fst_2374_);
v___x_2376_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_2374_, v_snd_2375_, v_b_2371_);
v___x_2377_ = ((size_t)1ULL);
v___x_2378_ = lean_usize_add(v_i_2369_, v___x_2377_);
v_i_2369_ = v___x_2378_;
v_b_2371_ = v___x_2376_;
goto _start;
}
else
{
return v_b_2371_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_foldEntries_spec__0___boxed(lean_object* v_as_2380_, lean_object* v_i_2381_, lean_object* v_stop_2382_, lean_object* v_b_2383_){
_start:
{
size_t v_i_boxed_2384_; size_t v_stop_boxed_2385_; lean_object* v_res_2386_; 
v_i_boxed_2384_ = lean_unbox_usize(v_i_2381_);
lean_dec(v_i_2381_);
v_stop_boxed_2385_ = lean_unbox_usize(v_stop_2382_);
lean_dec(v_stop_2382_);
v_res_2386_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_foldEntries_spec__0(v_as_2380_, v_i_boxed_2384_, v_stop_boxed_2385_, v_b_2383_);
lean_dec_ref(v_as_2380_);
return v_res_2386_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_foldEntries_spec__1(lean_object* v_as_2387_, size_t v_i_2388_, size_t v_stop_2389_, lean_object* v_b_2390_){
_start:
{
lean_object* v___y_2392_; uint8_t v___x_2396_; 
v___x_2396_ = lean_usize_dec_eq(v_i_2388_, v_stop_2389_);
if (v___x_2396_ == 0)
{
lean_object* v___x_2397_; lean_object* v___x_2398_; lean_object* v___x_2399_; uint8_t v___x_2400_; 
v___x_2397_ = lean_array_uget_borrowed(v_as_2387_, v_i_2388_);
v___x_2398_ = lean_unsigned_to_nat(0u);
v___x_2399_ = lean_array_get_size(v___x_2397_);
v___x_2400_ = lean_nat_dec_lt(v___x_2398_, v___x_2399_);
if (v___x_2400_ == 0)
{
v___y_2392_ = v_b_2390_;
goto v___jp_2391_;
}
else
{
uint8_t v___x_2401_; 
v___x_2401_ = lean_nat_dec_le(v___x_2399_, v___x_2399_);
if (v___x_2401_ == 0)
{
if (v___x_2400_ == 0)
{
v___y_2392_ = v_b_2390_;
goto v___jp_2391_;
}
else
{
size_t v___x_2402_; size_t v___x_2403_; lean_object* v___x_2404_; 
v___x_2402_ = ((size_t)0ULL);
v___x_2403_ = lean_usize_of_nat(v___x_2399_);
v___x_2404_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_foldEntries_spec__0(v___x_2397_, v___x_2402_, v___x_2403_, v_b_2390_);
v___y_2392_ = v___x_2404_;
goto v___jp_2391_;
}
}
else
{
size_t v___x_2405_; size_t v___x_2406_; lean_object* v___x_2407_; 
v___x_2405_ = ((size_t)0ULL);
v___x_2406_ = lean_usize_of_nat(v___x_2399_);
v___x_2407_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_foldEntries_spec__0(v___x_2397_, v___x_2405_, v___x_2406_, v_b_2390_);
v___y_2392_ = v___x_2407_;
goto v___jp_2391_;
}
}
}
else
{
return v_b_2390_;
}
v___jp_2391_:
{
size_t v___x_2393_; size_t v___x_2394_; 
v___x_2393_ = ((size_t)1ULL);
v___x_2394_ = lean_usize_add(v_i_2388_, v___x_2393_);
v_i_2388_ = v___x_2394_;
v_b_2390_ = v___y_2392_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_foldEntries_spec__1___boxed(lean_object* v_as_2408_, lean_object* v_i_2409_, lean_object* v_stop_2410_, lean_object* v_b_2411_){
_start:
{
size_t v_i_boxed_2412_; size_t v_stop_boxed_2413_; lean_object* v_res_2414_; 
v_i_boxed_2412_ = lean_unbox_usize(v_i_2409_);
lean_dec(v_i_2409_);
v_stop_boxed_2413_ = lean_unbox_usize(v_stop_2410_);
lean_dec(v_stop_2410_);
v_res_2414_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_foldEntries_spec__1(v_as_2408_, v_i_boxed_2412_, v_stop_boxed_2413_, v_b_2411_);
lean_dec_ref(v_as_2408_);
return v_res_2414_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_foldEntries(lean_object* v_init_2415_, lean_object* v_es_2416_){
_start:
{
lean_object* v___x_2417_; lean_object* v___x_2418_; uint8_t v___x_2419_; 
v___x_2417_ = lean_unsigned_to_nat(0u);
v___x_2418_ = lean_array_get_size(v_es_2416_);
v___x_2419_ = lean_nat_dec_lt(v___x_2417_, v___x_2418_);
if (v___x_2419_ == 0)
{
return v_init_2415_;
}
else
{
uint8_t v___x_2420_; 
v___x_2420_ = lean_nat_dec_le(v___x_2418_, v___x_2418_);
if (v___x_2420_ == 0)
{
if (v___x_2419_ == 0)
{
return v_init_2415_;
}
else
{
size_t v___x_2421_; size_t v___x_2422_; lean_object* v___x_2423_; 
v___x_2421_ = ((size_t)0ULL);
v___x_2422_ = lean_usize_of_nat(v___x_2418_);
v___x_2423_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_foldEntries_spec__1(v_es_2416_, v___x_2421_, v___x_2422_, v_init_2415_);
return v___x_2423_;
}
}
else
{
size_t v___x_2424_; size_t v___x_2425_; lean_object* v___x_2426_; 
v___x_2424_ = ((size_t)0ULL);
v___x_2425_ = lean_usize_of_nat(v___x_2418_);
v___x_2426_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_foldEntries_spec__1(v_es_2416_, v___x_2424_, v___x_2425_, v_init_2415_);
return v___x_2426_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_foldEntries___boxed(lean_object* v_init_2427_, lean_object* v_es_2428_){
_start:
{
lean_object* v_res_2429_; 
v_res_2429_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_foldEntries(v_init_2427_, v_es_2428_);
lean_dec_ref(v_es_2428_);
return v_res_2429_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_init_2430_, lean_object* v_x_2431_){
_start:
{
if (lean_obj_tag(v_x_2431_) == 0)
{
lean_object* v_k_2432_; lean_object* v_v_2433_; lean_object* v_l_2434_; lean_object* v_r_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; lean_object* v___x_2438_; 
v_k_2432_ = lean_ctor_get(v_x_2431_, 1);
v_v_2433_ = lean_ctor_get(v_x_2431_, 2);
v_l_2434_ = lean_ctor_get(v_x_2431_, 3);
v_r_2435_ = lean_ctor_get(v_x_2431_, 4);
v___x_2436_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__spec__0_spec__0(v_init_2430_, v_l_2434_);
lean_inc(v_v_2433_);
lean_inc(v_k_2432_);
v___x_2437_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2437_, 0, v_k_2432_);
lean_ctor_set(v___x_2437_, 1, v_v_2433_);
v___x_2438_ = lean_array_push(v___x_2436_, v___x_2437_);
v_init_2430_ = v___x_2438_;
v_x_2431_ = v_r_2435_;
goto _start;
}
else
{
return v_init_2430_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_init_2440_, lean_object* v_x_2441_){
_start:
{
lean_object* v_res_2442_; 
v_res_2442_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__spec__0_spec__0(v_init_2440_, v_x_2441_);
lean_dec(v_x_2441_);
return v_res_2442_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__0_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_(lean_object* v_s_2445_){
_start:
{
lean_object* v_current_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; 
v_current_2446_ = lean_ctor_get(v_s_2445_, 1);
v___x_2447_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__0___closed__0_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_));
v___x_2448_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__spec__0_spec__0(v___x_2447_, v_current_2446_);
return v___x_2448_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__0_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2____boxed(lean_object* v_s_2449_){
_start:
{
lean_object* v_res_2450_; 
v_res_2450_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__0_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_(v_s_2449_);
lean_dec_ref(v_s_2449_);
return v_res_2450_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__1_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_(lean_object* v_x_2451_){
_start:
{
lean_object* v___x_2452_; 
v___x_2452_ = lean_box(0);
return v___x_2452_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__1_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2____boxed(lean_object* v_x_2453_){
_start:
{
lean_object* v_res_2454_; 
v_res_2454_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__1_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_(v_x_2453_);
lean_dec_ref(v_x_2453_);
return v_res_2454_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__2_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_(lean_object* v_x_2455_, lean_object* v_s_2456_){
_start:
{
lean_object* v_current_2457_; lean_object* v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; 
v_current_2457_ = lean_ctor_get(v_s_2456_, 1);
v___x_2458_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__0___closed__0_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_));
v___x_2459_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__spec__0_spec__0(v___x_2458_, v_current_2457_);
lean_inc_ref_n(v___x_2459_, 2);
v___x_2460_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2460_, 0, v___x_2459_);
lean_ctor_set(v___x_2460_, 1, v___x_2459_);
lean_ctor_set(v___x_2460_, 2, v___x_2459_);
return v___x_2460_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__2_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2____boxed(lean_object* v_x_2461_, lean_object* v_s_2462_){
_start:
{
lean_object* v_res_2463_; 
v_res_2463_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__2_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_(v_x_2461_, v_s_2462_);
lean_dec_ref(v_s_2462_);
lean_dec_ref(v_x_2461_);
return v_res_2463_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__3_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_(lean_object* v_s_2464_, lean_object* v_x_2465_){
_start:
{
lean_object* v_fst_2466_; lean_object* v_snd_2467_; lean_object* v_imported_2468_; lean_object* v_current_2469_; lean_object* v___x_2471_; uint8_t v_isShared_2472_; uint8_t v_isSharedCheck_2477_; 
v_fst_2466_ = lean_ctor_get(v_x_2465_, 0);
lean_inc(v_fst_2466_);
v_snd_2467_ = lean_ctor_get(v_x_2465_, 1);
lean_inc(v_snd_2467_);
lean_dec_ref(v_x_2465_);
v_imported_2468_ = lean_ctor_get(v_s_2464_, 0);
v_current_2469_ = lean_ctor_get(v_s_2464_, 1);
v_isSharedCheck_2477_ = !lean_is_exclusive(v_s_2464_);
if (v_isSharedCheck_2477_ == 0)
{
v___x_2471_ = v_s_2464_;
v_isShared_2472_ = v_isSharedCheck_2477_;
goto v_resetjp_2470_;
}
else
{
lean_inc(v_current_2469_);
lean_inc(v_imported_2468_);
lean_dec(v_s_2464_);
v___x_2471_ = lean_box(0);
v_isShared_2472_ = v_isSharedCheck_2477_;
goto v_resetjp_2470_;
}
v_resetjp_2470_:
{
lean_object* v___x_2473_; lean_object* v___x_2475_; 
v___x_2473_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_2466_, v_snd_2467_, v_current_2469_);
if (v_isShared_2472_ == 0)
{
lean_ctor_set(v___x_2471_, 1, v___x_2473_);
v___x_2475_ = v___x_2471_;
goto v_reusejp_2474_;
}
else
{
lean_object* v_reuseFailAlloc_2476_; 
v_reuseFailAlloc_2476_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2476_, 0, v_imported_2468_);
lean_ctor_set(v_reuseFailAlloc_2476_, 1, v___x_2473_);
v___x_2475_ = v_reuseFailAlloc_2476_;
goto v_reusejp_2474_;
}
v_reusejp_2474_:
{
return v___x_2475_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__4_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_(lean_object* v___x_2478_, lean_object* v_es_2479_, lean_object* v___y_2480_){
_start:
{
lean_object* v___x_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; 
lean_inc(v___x_2478_);
v___x_2482_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_foldEntries(v___x_2478_, v_es_2479_);
v___x_2483_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2483_, 0, v___x_2482_);
lean_ctor_set(v___x_2483_, 1, v___x_2478_);
v___x_2484_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2484_, 0, v___x_2483_);
return v___x_2484_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__4_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2____boxed(lean_object* v___x_2485_, lean_object* v_es_2486_, lean_object* v___y_2487_, lean_object* v___y_2488_){
_start:
{
lean_object* v_res_2489_; 
v_res_2489_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__4_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_(v___x_2485_, v_es_2486_, v___y_2487_);
lean_dec_ref(v___y_2487_);
lean_dec_ref(v_es_2486_);
return v_res_2489_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__5_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_(lean_object* v___x_2490_){
_start:
{
lean_object* v___x_2492_; 
v___x_2492_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2492_, 0, v___x_2490_);
return v___x_2492_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__5_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2____boxed(lean_object* v___x_2493_, lean_object* v___y_2494_){
_start:
{
lean_object* v_res_2495_; 
v_res_2495_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__5_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_(v___x_2493_);
return v_res_2495_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2524_; lean_object* v___x_2525_; 
v___x_2524_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__11_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_));
v___x_2525_ = l_Lean_registerPersistentEnvExtensionUnsafe___redArg(v___x_2524_);
return v___x_2525_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2____boxed(lean_object* v_a_2526_){
_start:
{
lean_object* v_res_2527_; 
v_res_2527_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_();
return v_res_2527_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__spec__0(lean_object* v_init_2528_, lean_object* v_t_2529_){
_start:
{
lean_object* v___x_2530_; 
v___x_2530_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__spec__0_spec__0(v_init_2528_, v_t_2529_);
return v___x_2530_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__spec__0___boxed(lean_object* v_init_2531_, lean_object* v_t_2532_){
_start:
{
lean_object* v_res_2533_; 
v_res_2533_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__spec__0(v_init_2531_, v_t_2532_);
lean_dec(v_t_2532_);
return v_res_2533_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_1277071390____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2552_; lean_object* v___x_2553_; 
v___x_2552_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__3_00___x40_Lean_DocString_Markdown_1277071390____hygCtx___hyg_2_));
v___x_2553_ = l_Lean_registerPersistentEnvExtensionUnsafe___redArg(v___x_2552_);
return v___x_2553_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_1277071390____hygCtx___hyg_2____boxed(lean_object* v_a_2554_){
_start:
{
lean_object* v_res_2555_; 
v_res_2555_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_1277071390____hygCtx___hyg_2_();
return v_res_2555_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_2917630591____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2557_; lean_object* v___x_2558_; lean_object* v___x_2559_; 
v___x_2557_ = lean_box(1);
v___x_2558_ = lean_st_mk_ref(v___x_2557_);
v___x_2559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2559_, 0, v___x_2558_);
return v___x_2559_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_2917630591____hygCtx___hyg_2____boxed(lean_object* v_a_2560_){
_start:
{
lean_object* v_res_2561_; 
v_res_2561_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_2917630591____hygCtx___hyg_2_();
return v_res_2561_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_2639420957____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; 
v___x_2563_ = lean_box(1);
v___x_2564_ = lean_st_mk_ref(v___x_2563_);
v___x_2565_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2565_, 0, v___x_2564_);
return v___x_2565_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_2639420957____hygCtx___hyg_2____boxed(lean_object* v_a_2566_){
_start:
{
lean_object* v_res_2567_; 
v_res_2567_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_2639420957____hygCtx___hyg_2_();
return v_res_2567_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_addBuiltinInlineMdRenderer(lean_object* v_type_2568_, lean_object* v_r_2569_){
_start:
{
lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; 
v___x_2571_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_builtinInlineMdRenderers;
v___x_2572_ = lean_st_ref_take(v___x_2571_);
v___x_2573_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_type_2568_, v_r_2569_, v___x_2572_);
v___x_2574_ = lean_st_ref_put(v___x_2571_, v___x_2573_);
v___x_2575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2575_, 0, v___x_2574_);
return v___x_2575_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_addBuiltinInlineMdRenderer___boxed(lean_object* v_type_2576_, lean_object* v_r_2577_, lean_object* v_a_2578_){
_start:
{
lean_object* v_res_2579_; 
v_res_2579_ = l_Lean_Doc_addBuiltinInlineMdRenderer(v_type_2576_, v_r_2577_);
return v_res_2579_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_addBuiltinBlockMdRenderer(lean_object* v_type_2580_, lean_object* v_r_2581_){
_start:
{
lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; 
v___x_2583_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_builtinBlockMdRenderers;
v___x_2584_ = lean_st_ref_take(v___x_2583_);
v___x_2585_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_type_2580_, v_r_2581_, v___x_2584_);
v___x_2586_ = lean_st_ref_put(v___x_2583_, v___x_2585_);
v___x_2587_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2587_, 0, v___x_2586_);
return v___x_2587_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_addBuiltinBlockMdRenderer___boxed(lean_object* v_type_2588_, lean_object* v_r_2589_, lean_object* v_a_2590_){
_start:
{
lean_object* v_res_2591_; 
v_res_2591_ = l_Lean_Doc_addBuiltinBlockMdRenderer(v_type_2588_, v_r_2589_);
return v_res_2591_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__0(void){
_start:
{
lean_object* v___x_2592_; 
v___x_2592_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_2592_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__1(void){
_start:
{
lean_object* v___x_2593_; lean_object* v___x_2594_; 
v___x_2593_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__0);
v___x_2594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2594_, 0, v___x_2593_);
return v___x_2594_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__2(void){
_start:
{
lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; 
v___x_2595_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__1);
v___x_2596_ = lean_unsigned_to_nat(0u);
v___x_2597_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_2597_, 0, v___x_2596_);
lean_ctor_set(v___x_2597_, 1, v___x_2596_);
lean_ctor_set(v___x_2597_, 2, v___x_2596_);
lean_ctor_set(v___x_2597_, 3, v___x_2596_);
lean_ctor_set(v___x_2597_, 4, v___x_2595_);
lean_ctor_set(v___x_2597_, 5, v___x_2595_);
lean_ctor_set(v___x_2597_, 6, v___x_2595_);
lean_ctor_set(v___x_2597_, 7, v___x_2595_);
lean_ctor_set(v___x_2597_, 8, v___x_2595_);
lean_ctor_set(v___x_2597_, 9, v___x_2595_);
lean_ctor_set(v___x_2597_, 10, v___x_2595_);
return v___x_2597_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__3(void){
_start:
{
lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; 
v___x_2598_ = lean_unsigned_to_nat(32u);
v___x_2599_ = lean_mk_empty_array_with_capacity(v___x_2598_);
v___x_2600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2600_, 0, v___x_2599_);
return v___x_2600_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__4(void){
_start:
{
size_t v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; 
v___x_2601_ = ((size_t)5ULL);
v___x_2602_ = lean_unsigned_to_nat(0u);
v___x_2603_ = lean_unsigned_to_nat(32u);
v___x_2604_ = lean_mk_empty_array_with_capacity(v___x_2603_);
v___x_2605_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__3);
v___x_2606_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2606_, 0, v___x_2605_);
lean_ctor_set(v___x_2606_, 1, v___x_2604_);
lean_ctor_set(v___x_2606_, 2, v___x_2602_);
lean_ctor_set(v___x_2606_, 3, v___x_2602_);
lean_ctor_set_usize(v___x_2606_, 4, v___x_2601_);
return v___x_2606_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__5(void){
_start:
{
lean_object* v___x_2607_; lean_object* v___x_2608_; lean_object* v___x_2609_; lean_object* v___x_2610_; 
v___x_2607_ = lean_box(1);
v___x_2608_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__4);
v___x_2609_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__1);
v___x_2610_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2610_, 0, v___x_2609_);
lean_ctor_set(v___x_2610_, 1, v___x_2608_);
lean_ctor_set(v___x_2610_, 2, v___x_2607_);
return v___x_2610_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3(lean_object* v_msgData_2611_, lean_object* v___y_2612_, lean_object* v___y_2613_){
_start:
{
lean_object* v___x_2615_; lean_object* v_toCold_2616_; lean_object* v_env_2617_; lean_object* v_options_2618_; lean_object* v___x_2619_; lean_object* v___x_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; 
v___x_2615_ = lean_st_ref_get(v___y_2613_);
v_toCold_2616_ = lean_ctor_get(v___y_2612_, 0);
v_env_2617_ = lean_ctor_get(v___x_2615_, 0);
lean_inc_ref(v_env_2617_);
lean_dec(v___x_2615_);
v_options_2618_ = lean_ctor_get(v_toCold_2616_, 2);
v___x_2619_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__2);
v___x_2620_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__5);
lean_inc_ref(v_options_2618_);
v___x_2621_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2621_, 0, v_env_2617_);
lean_ctor_set(v___x_2621_, 1, v___x_2619_);
lean_ctor_set(v___x_2621_, 2, v___x_2620_);
lean_ctor_set(v___x_2621_, 3, v_options_2618_);
v___x_2622_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2622_, 0, v___x_2621_);
lean_ctor_set(v___x_2622_, 1, v_msgData_2611_);
v___x_2623_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2623_, 0, v___x_2622_);
return v___x_2623_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_msgData_2624_, lean_object* v___y_2625_, lean_object* v___y_2626_, lean_object* v___y_2627_){
_start:
{
lean_object* v_res_2628_; 
v_res_2628_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3(v_msgData_2624_, v___y_2625_, v___y_2626_);
lean_dec(v___y_2626_);
lean_dec_ref(v___y_2625_);
return v_res_2628_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1___redArg(lean_object* v_msg_2629_, lean_object* v___y_2630_, lean_object* v___y_2631_){
_start:
{
lean_object* v_ref_2633_; lean_object* v___x_2634_; lean_object* v_a_2635_; lean_object* v___x_2637_; uint8_t v_isShared_2638_; uint8_t v_isSharedCheck_2643_; 
v_ref_2633_ = lean_ctor_get(v___y_2630_, 2);
v___x_2634_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3(v_msg_2629_, v___y_2630_, v___y_2631_);
v_a_2635_ = lean_ctor_get(v___x_2634_, 0);
v_isSharedCheck_2643_ = !lean_is_exclusive(v___x_2634_);
if (v_isSharedCheck_2643_ == 0)
{
v___x_2637_ = v___x_2634_;
v_isShared_2638_ = v_isSharedCheck_2643_;
goto v_resetjp_2636_;
}
else
{
lean_inc(v_a_2635_);
lean_dec(v___x_2634_);
v___x_2637_ = lean_box(0);
v_isShared_2638_ = v_isSharedCheck_2643_;
goto v_resetjp_2636_;
}
v_resetjp_2636_:
{
lean_object* v___x_2639_; lean_object* v___x_2641_; 
lean_inc(v_ref_2633_);
v___x_2639_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2639_, 0, v_ref_2633_);
lean_ctor_set(v___x_2639_, 1, v_a_2635_);
if (v_isShared_2638_ == 0)
{
lean_ctor_set_tag(v___x_2637_, 1);
lean_ctor_set(v___x_2637_, 0, v___x_2639_);
v___x_2641_ = v___x_2637_;
goto v_reusejp_2640_;
}
else
{
lean_object* v_reuseFailAlloc_2642_; 
v_reuseFailAlloc_2642_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2642_, 0, v___x_2639_);
v___x_2641_ = v_reuseFailAlloc_2642_;
goto v_reusejp_2640_;
}
v_reusejp_2640_:
{
return v___x_2641_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_msg_2644_, lean_object* v___y_2645_, lean_object* v___y_2646_, lean_object* v___y_2647_){
_start:
{
lean_object* v_res_2648_; 
v_res_2648_ = l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1___redArg(v_msg_2644_, v___y_2645_, v___y_2646_);
lean_dec(v___y_2646_);
lean_dec_ref(v___y_2645_);
return v_res_2648_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0___redArg(lean_object* v_x_2649_, lean_object* v___y_2650_, lean_object* v___y_2651_){
_start:
{
if (lean_obj_tag(v_x_2649_) == 0)
{
lean_object* v_a_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; 
v_a_2653_ = lean_ctor_get(v_x_2649_, 0);
lean_inc(v_a_2653_);
lean_dec_ref_known(v_x_2649_, 1);
v___x_2654_ = l_Lean_stringToMessageData(v_a_2653_);
v___x_2655_ = l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1___redArg(v___x_2654_, v___y_2650_, v___y_2651_);
return v___x_2655_;
}
else
{
lean_object* v_a_2656_; lean_object* v___x_2658_; uint8_t v_isShared_2659_; uint8_t v_isSharedCheck_2663_; 
v_a_2656_ = lean_ctor_get(v_x_2649_, 0);
v_isSharedCheck_2663_ = !lean_is_exclusive(v_x_2649_);
if (v_isSharedCheck_2663_ == 0)
{
v___x_2658_ = v_x_2649_;
v_isShared_2659_ = v_isSharedCheck_2663_;
goto v_resetjp_2657_;
}
else
{
lean_inc(v_a_2656_);
lean_dec(v_x_2649_);
v___x_2658_ = lean_box(0);
v_isShared_2659_ = v_isSharedCheck_2663_;
goto v_resetjp_2657_;
}
v_resetjp_2657_:
{
lean_object* v___x_2661_; 
if (v_isShared_2659_ == 0)
{
lean_ctor_set_tag(v___x_2658_, 0);
v___x_2661_ = v___x_2658_;
goto v_reusejp_2660_;
}
else
{
lean_object* v_reuseFailAlloc_2662_; 
v_reuseFailAlloc_2662_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2662_, 0, v_a_2656_);
v___x_2661_ = v_reuseFailAlloc_2662_;
goto v_reusejp_2660_;
}
v_reusejp_2660_:
{
return v___x_2661_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0___redArg___boxed(lean_object* v_x_2664_, lean_object* v___y_2665_, lean_object* v___y_2666_, lean_object* v___y_2667_){
_start:
{
lean_object* v_res_2668_; 
v_res_2668_ = l_Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0___redArg(v_x_2664_, v___y_2665_, v___y_2666_);
lean_dec(v___y_2666_);
lean_dec_ref(v___y_2665_);
return v_res_2668_;
}
}
static lean_object* _init_l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; 
v___x_2669_ = lean_box(0);
v___x_2670_ = l_Lean_Elab_abortCommandExceptionId;
v___x_2671_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2671_, 0, v___x_2670_);
lean_ctor_set(v___x_2671_, 1, v___x_2669_);
return v___x_2671_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__1___redArg(){
_start:
{
lean_object* v___x_2673_; lean_object* v___x_2674_; 
v___x_2673_ = lean_obj_once(&l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__1___redArg___closed__0, &l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__1___redArg___closed__0);
v___x_2674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2674_, 0, v___x_2673_);
return v___x_2674_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__1___redArg___boxed(lean_object* v___y_2675_){
_start:
{
lean_object* v_res_2676_; 
v_res_2676_ = l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__1___redArg();
return v_res_2676_;
}
}
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0___redArg(lean_object* v_constName_2677_, uint8_t v_checkMeta_2678_, lean_object* v___y_2679_, lean_object* v___y_2680_){
_start:
{
lean_object* v___x_2682_; lean_object* v_env_2683_; uint8_t v___x_2684_; 
v___x_2682_ = lean_st_ref_get(v___y_2680_);
v_env_2683_ = lean_ctor_get(v___x_2682_, 0);
lean_inc_ref(v_env_2683_);
lean_dec(v___x_2682_);
lean_inc(v_constName_2677_);
v___x_2684_ = lean_has_compile_error(v_env_2683_, v_constName_2677_);
if (v___x_2684_ == 0)
{
lean_object* v___x_2685_; lean_object* v_toCold_2686_; lean_object* v_env_2687_; lean_object* v_options_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; 
v___x_2685_ = lean_st_ref_get(v___y_2680_);
v_toCold_2686_ = lean_ctor_get(v___y_2679_, 0);
v_env_2687_ = lean_ctor_get(v___x_2685_, 0);
lean_inc_ref(v_env_2687_);
lean_dec(v___x_2685_);
v_options_2688_ = lean_ctor_get(v_toCold_2686_, 2);
v___x_2689_ = l_Lean_Environment_evalConst___redArg(v_env_2687_, v_options_2688_, v_constName_2677_, v_checkMeta_2678_);
lean_dec(v_constName_2677_);
lean_dec_ref(v_env_2687_);
v___x_2690_ = l_Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0___redArg(v___x_2689_, v___y_2679_, v___y_2680_);
return v___x_2690_;
}
else
{
lean_object* v___x_2691_; 
v___x_2691_ = l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__1___redArg();
if (lean_obj_tag(v___x_2691_) == 0)
{
lean_object* v___x_2692_; lean_object* v_toCold_2693_; lean_object* v_env_2694_; lean_object* v_options_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; 
lean_dec_ref_known(v___x_2691_, 1);
v___x_2692_ = lean_st_ref_get(v___y_2680_);
v_toCold_2693_ = lean_ctor_get(v___y_2679_, 0);
v_env_2694_ = lean_ctor_get(v___x_2692_, 0);
lean_inc_ref(v_env_2694_);
lean_dec(v___x_2692_);
v_options_2695_ = lean_ctor_get(v_toCold_2693_, 2);
v___x_2696_ = l_Lean_Environment_evalConst___redArg(v_env_2694_, v_options_2695_, v_constName_2677_, v_checkMeta_2678_);
lean_dec(v_constName_2677_);
lean_dec_ref(v_env_2694_);
v___x_2697_ = l_Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0___redArg(v___x_2696_, v___y_2679_, v___y_2680_);
return v___x_2697_;
}
else
{
lean_object* v_a_2698_; lean_object* v___x_2700_; uint8_t v_isShared_2701_; uint8_t v_isSharedCheck_2705_; 
lean_dec(v_constName_2677_);
v_a_2698_ = lean_ctor_get(v___x_2691_, 0);
v_isSharedCheck_2705_ = !lean_is_exclusive(v___x_2691_);
if (v_isSharedCheck_2705_ == 0)
{
v___x_2700_ = v___x_2691_;
v_isShared_2701_ = v_isSharedCheck_2705_;
goto v_resetjp_2699_;
}
else
{
lean_inc(v_a_2698_);
lean_dec(v___x_2691_);
v___x_2700_ = lean_box(0);
v_isShared_2701_ = v_isSharedCheck_2705_;
goto v_resetjp_2699_;
}
v_resetjp_2699_:
{
lean_object* v___x_2703_; 
if (v_isShared_2701_ == 0)
{
v___x_2703_ = v___x_2700_;
goto v_reusejp_2702_;
}
else
{
lean_object* v_reuseFailAlloc_2704_; 
v_reuseFailAlloc_2704_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2704_, 0, v_a_2698_);
v___x_2703_ = v_reuseFailAlloc_2704_;
goto v_reusejp_2702_;
}
v_reusejp_2702_:
{
return v___x_2703_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0___redArg___boxed(lean_object* v_constName_2706_, lean_object* v_checkMeta_2707_, lean_object* v___y_2708_, lean_object* v___y_2709_, lean_object* v___y_2710_){
_start:
{
uint8_t v_checkMeta_boxed_2711_; lean_object* v_res_2712_; 
v_checkMeta_boxed_2711_ = lean_unbox(v_checkMeta_2707_);
v_res_2712_ = l_Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0___redArg(v_constName_2706_, v_checkMeta_boxed_2711_, v___y_2708_, v___y_2709_);
lean_dec(v___y_2709_);
lean_dec_ref(v___y_2708_);
return v_res_2712_;
}
}
static lean_object* _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe___closed__0(void){
_start:
{
lean_object* v___x_2713_; lean_object* v___x_2714_; 
v___x_2713_ = lean_box(0);
v___x_2714_ = l_unsafeCast___redArg(v___x_2713_);
return v___x_2714_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe(lean_object* v_type_2715_, lean_object* v_a_2716_, lean_object* v_a_2717_){
_start:
{
lean_object* v___x_2719_; lean_object* v___x_2720_; lean_object* v___y_2722_; lean_object* v_env_2753_; lean_object* v___x_2754_; lean_object* v_toEnvExtension_2755_; lean_object* v_asyncMode_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; lean_object* v_imported_2759_; lean_object* v_current_2760_; lean_object* v___x_2761_; 
v___x_2719_ = ((lean_object*)(l_Lean_Doc_instInhabitedMdRendererState_default));
v___x_2720_ = lean_st_ref_get(v_a_2717_);
v_env_2753_ = lean_ctor_get(v___x_2720_, 0);
lean_inc_ref(v_env_2753_);
lean_dec(v___x_2720_);
v___x_2754_ = l_Lean_Doc_docInlineMdExt;
v_toEnvExtension_2755_ = lean_ctor_get(v___x_2754_, 0);
v_asyncMode_2756_ = lean_ctor_get(v_toEnvExtension_2755_, 2);
v___x_2757_ = lean_obj_once(&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe___closed__0, &l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe___closed__0_once, _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe___closed__0);
v___x_2758_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_2719_, v___x_2754_, v_env_2753_, v_asyncMode_2756_, v___x_2757_);
v_imported_2759_ = lean_ctor_get(v___x_2758_, 0);
lean_inc(v_imported_2759_);
v_current_2760_ = lean_ctor_get(v___x_2758_, 1);
lean_inc(v_current_2760_);
lean_dec(v___x_2758_);
v___x_2761_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_current_2760_, v_type_2715_);
lean_dec(v_current_2760_);
if (lean_obj_tag(v___x_2761_) == 0)
{
lean_object* v___x_2762_; 
v___x_2762_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_imported_2759_, v_type_2715_);
lean_dec(v_imported_2759_);
v___y_2722_ = v___x_2762_;
goto v___jp_2721_;
}
else
{
lean_dec(v_imported_2759_);
v___y_2722_ = v___x_2761_;
goto v___jp_2721_;
}
v___jp_2721_:
{
if (lean_obj_tag(v___y_2722_) == 0)
{
lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; 
v___x_2723_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_builtinInlineMdRenderers;
v___x_2724_ = lean_st_ref_get(v___x_2723_);
v___x_2725_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_2724_, v_type_2715_);
lean_dec(v___x_2724_);
v___x_2726_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2726_, 0, v___x_2725_);
return v___x_2726_;
}
else
{
lean_object* v_val_2727_; lean_object* v___x_2729_; uint8_t v_isShared_2730_; uint8_t v_isSharedCheck_2752_; 
v_val_2727_ = lean_ctor_get(v___y_2722_, 0);
v_isSharedCheck_2752_ = !lean_is_exclusive(v___y_2722_);
if (v_isSharedCheck_2752_ == 0)
{
v___x_2729_ = v___y_2722_;
v_isShared_2730_ = v_isSharedCheck_2752_;
goto v_resetjp_2728_;
}
else
{
lean_inc(v_val_2727_);
lean_dec(v___y_2722_);
v___x_2729_ = lean_box(0);
v_isShared_2730_ = v_isSharedCheck_2752_;
goto v_resetjp_2728_;
}
v_resetjp_2728_:
{
uint8_t v___x_2731_; lean_object* v___x_2732_; 
v___x_2731_ = 1;
v___x_2732_ = l_Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0___redArg(v_val_2727_, v___x_2731_, v_a_2716_, v_a_2717_);
if (lean_obj_tag(v___x_2732_) == 0)
{
lean_object* v_a_2733_; lean_object* v___x_2735_; uint8_t v_isShared_2736_; uint8_t v_isSharedCheck_2743_; 
v_a_2733_ = lean_ctor_get(v___x_2732_, 0);
v_isSharedCheck_2743_ = !lean_is_exclusive(v___x_2732_);
if (v_isSharedCheck_2743_ == 0)
{
v___x_2735_ = v___x_2732_;
v_isShared_2736_ = v_isSharedCheck_2743_;
goto v_resetjp_2734_;
}
else
{
lean_inc(v_a_2733_);
lean_dec(v___x_2732_);
v___x_2735_ = lean_box(0);
v_isShared_2736_ = v_isSharedCheck_2743_;
goto v_resetjp_2734_;
}
v_resetjp_2734_:
{
lean_object* v___x_2738_; 
if (v_isShared_2730_ == 0)
{
lean_ctor_set(v___x_2729_, 0, v_a_2733_);
v___x_2738_ = v___x_2729_;
goto v_reusejp_2737_;
}
else
{
lean_object* v_reuseFailAlloc_2742_; 
v_reuseFailAlloc_2742_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2742_, 0, v_a_2733_);
v___x_2738_ = v_reuseFailAlloc_2742_;
goto v_reusejp_2737_;
}
v_reusejp_2737_:
{
lean_object* v___x_2740_; 
if (v_isShared_2736_ == 0)
{
lean_ctor_set(v___x_2735_, 0, v___x_2738_);
v___x_2740_ = v___x_2735_;
goto v_reusejp_2739_;
}
else
{
lean_object* v_reuseFailAlloc_2741_; 
v_reuseFailAlloc_2741_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2741_, 0, v___x_2738_);
v___x_2740_ = v_reuseFailAlloc_2741_;
goto v_reusejp_2739_;
}
v_reusejp_2739_:
{
return v___x_2740_;
}
}
}
}
else
{
lean_object* v_a_2744_; lean_object* v___x_2746_; uint8_t v_isShared_2747_; uint8_t v_isSharedCheck_2751_; 
lean_del_object(v___x_2729_);
v_a_2744_ = lean_ctor_get(v___x_2732_, 0);
v_isSharedCheck_2751_ = !lean_is_exclusive(v___x_2732_);
if (v_isSharedCheck_2751_ == 0)
{
v___x_2746_ = v___x_2732_;
v_isShared_2747_ = v_isSharedCheck_2751_;
goto v_resetjp_2745_;
}
else
{
lean_inc(v_a_2744_);
lean_dec(v___x_2732_);
v___x_2746_ = lean_box(0);
v_isShared_2747_ = v_isSharedCheck_2751_;
goto v_resetjp_2745_;
}
v_resetjp_2745_:
{
lean_object* v___x_2749_; 
if (v_isShared_2747_ == 0)
{
v___x_2749_ = v___x_2746_;
goto v_reusejp_2748_;
}
else
{
lean_object* v_reuseFailAlloc_2750_; 
v_reuseFailAlloc_2750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2750_, 0, v_a_2744_);
v___x_2749_ = v_reuseFailAlloc_2750_;
goto v_reusejp_2748_;
}
v_reusejp_2748_:
{
return v___x_2749_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe___boxed(lean_object* v_type_2763_, lean_object* v_a_2764_, lean_object* v_a_2765_, lean_object* v_a_2766_){
_start:
{
lean_object* v_res_2767_; 
v_res_2767_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe(v_type_2763_, v_a_2764_, v_a_2765_);
lean_dec(v_a_2765_);
lean_dec_ref(v_a_2764_);
lean_dec(v_type_2763_);
return v_res_2767_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__1(lean_object* v_00_u03b1_2768_, lean_object* v___y_2769_, lean_object* v___y_2770_){
_start:
{
lean_object* v___x_2772_; 
v___x_2772_ = l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__1___redArg();
return v___x_2772_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__1___boxed(lean_object* v_00_u03b1_2773_, lean_object* v___y_2774_, lean_object* v___y_2775_, lean_object* v___y_2776_){
_start:
{
lean_object* v_res_2777_; 
v_res_2777_ = l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__1(v_00_u03b1_2773_, v___y_2774_, v___y_2775_);
lean_dec(v___y_2775_);
lean_dec_ref(v___y_2774_);
return v_res_2777_;
}
}
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0(lean_object* v_00_u03b1_2778_, lean_object* v_constName_2779_, uint8_t v_checkMeta_2780_, lean_object* v___y_2781_, lean_object* v___y_2782_){
_start:
{
lean_object* v___x_2784_; 
v___x_2784_ = l_Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0___redArg(v_constName_2779_, v_checkMeta_2780_, v___y_2781_, v___y_2782_);
return v___x_2784_;
}
}
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0___boxed(lean_object* v_00_u03b1_2785_, lean_object* v_constName_2786_, lean_object* v_checkMeta_2787_, lean_object* v___y_2788_, lean_object* v___y_2789_, lean_object* v___y_2790_){
_start:
{
uint8_t v_checkMeta_boxed_2791_; lean_object* v_res_2792_; 
v_checkMeta_boxed_2791_ = lean_unbox(v_checkMeta_2787_);
v_res_2792_ = l_Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0(v_00_u03b1_2785_, v_constName_2786_, v_checkMeta_boxed_2791_, v___y_2788_, v___y_2789_);
lean_dec(v___y_2789_);
lean_dec_ref(v___y_2788_);
return v_res_2792_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0(lean_object* v_00_u03b1_2793_, lean_object* v_x_2794_, lean_object* v___y_2795_, lean_object* v___y_2796_){
_start:
{
lean_object* v___x_2798_; 
v___x_2798_ = l_Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0___redArg(v_x_2794_, v___y_2795_, v___y_2796_);
return v___x_2798_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0___boxed(lean_object* v_00_u03b1_2799_, lean_object* v_x_2800_, lean_object* v___y_2801_, lean_object* v___y_2802_, lean_object* v___y_2803_){
_start:
{
lean_object* v_res_2804_; 
v_res_2804_ = l_Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0(v_00_u03b1_2799_, v_x_2800_, v___y_2801_, v___y_2802_);
lean_dec(v___y_2802_);
lean_dec_ref(v___y_2801_);
return v_res_2804_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_2805_, lean_object* v_msg_2806_, lean_object* v___y_2807_, lean_object* v___y_2808_){
_start:
{
lean_object* v___x_2810_; 
v___x_2810_ = l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1___redArg(v_msg_2806_, v___y_2807_, v___y_2808_);
return v___x_2810_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_2811_, lean_object* v_msg_2812_, lean_object* v___y_2813_, lean_object* v___y_2814_, lean_object* v___y_2815_){
_start:
{
lean_object* v_res_2816_; 
v_res_2816_ = l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1(v_00_u03b1_2811_, v_msg_2812_, v___y_2813_, v___y_2814_);
lean_dec(v___y_2814_);
lean_dec_ref(v___y_2813_);
return v_res_2816_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockRendererForUnsafe(lean_object* v_typeName_2817_, lean_object* v_a_2818_, lean_object* v_a_2819_){
_start:
{
lean_object* v___x_2821_; lean_object* v___x_2822_; lean_object* v___y_2824_; lean_object* v_env_2855_; lean_object* v___x_2856_; lean_object* v_toEnvExtension_2857_; lean_object* v_asyncMode_2858_; lean_object* v___x_2859_; lean_object* v___x_2860_; lean_object* v_imported_2861_; lean_object* v_current_2862_; lean_object* v___x_2863_; 
v___x_2821_ = ((lean_object*)(l_Lean_Doc_instInhabitedMdRendererState_default));
v___x_2822_ = lean_st_ref_get(v_a_2819_);
v_env_2855_ = lean_ctor_get(v___x_2822_, 0);
lean_inc_ref(v_env_2855_);
lean_dec(v___x_2822_);
v___x_2856_ = l_Lean_Doc_docBlockMdExt;
v_toEnvExtension_2857_ = lean_ctor_get(v___x_2856_, 0);
v_asyncMode_2858_ = lean_ctor_get(v_toEnvExtension_2857_, 2);
v___x_2859_ = lean_obj_once(&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe___closed__0, &l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe___closed__0_once, _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe___closed__0);
v___x_2860_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_2821_, v___x_2856_, v_env_2855_, v_asyncMode_2858_, v___x_2859_);
v_imported_2861_ = lean_ctor_get(v___x_2860_, 0);
lean_inc(v_imported_2861_);
v_current_2862_ = lean_ctor_get(v___x_2860_, 1);
lean_inc(v_current_2862_);
lean_dec(v___x_2860_);
v___x_2863_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_current_2862_, v_typeName_2817_);
lean_dec(v_current_2862_);
if (lean_obj_tag(v___x_2863_) == 0)
{
lean_object* v___x_2864_; 
v___x_2864_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_imported_2861_, v_typeName_2817_);
lean_dec(v_imported_2861_);
v___y_2824_ = v___x_2864_;
goto v___jp_2823_;
}
else
{
lean_dec(v_imported_2861_);
v___y_2824_ = v___x_2863_;
goto v___jp_2823_;
}
v___jp_2823_:
{
if (lean_obj_tag(v___y_2824_) == 0)
{
lean_object* v___x_2825_; lean_object* v___x_2826_; lean_object* v___x_2827_; lean_object* v___x_2828_; 
v___x_2825_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_builtinBlockMdRenderers;
v___x_2826_ = lean_st_ref_get(v___x_2825_);
v___x_2827_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_2826_, v_typeName_2817_);
lean_dec(v___x_2826_);
v___x_2828_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2828_, 0, v___x_2827_);
return v___x_2828_;
}
else
{
lean_object* v_val_2829_; lean_object* v___x_2831_; uint8_t v_isShared_2832_; uint8_t v_isSharedCheck_2854_; 
v_val_2829_ = lean_ctor_get(v___y_2824_, 0);
v_isSharedCheck_2854_ = !lean_is_exclusive(v___y_2824_);
if (v_isSharedCheck_2854_ == 0)
{
v___x_2831_ = v___y_2824_;
v_isShared_2832_ = v_isSharedCheck_2854_;
goto v_resetjp_2830_;
}
else
{
lean_inc(v_val_2829_);
lean_dec(v___y_2824_);
v___x_2831_ = lean_box(0);
v_isShared_2832_ = v_isSharedCheck_2854_;
goto v_resetjp_2830_;
}
v_resetjp_2830_:
{
uint8_t v___x_2833_; lean_object* v___x_2834_; 
v___x_2833_ = 1;
v___x_2834_ = l_Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0___redArg(v_val_2829_, v___x_2833_, v_a_2818_, v_a_2819_);
if (lean_obj_tag(v___x_2834_) == 0)
{
lean_object* v_a_2835_; lean_object* v___x_2837_; uint8_t v_isShared_2838_; uint8_t v_isSharedCheck_2845_; 
v_a_2835_ = lean_ctor_get(v___x_2834_, 0);
v_isSharedCheck_2845_ = !lean_is_exclusive(v___x_2834_);
if (v_isSharedCheck_2845_ == 0)
{
v___x_2837_ = v___x_2834_;
v_isShared_2838_ = v_isSharedCheck_2845_;
goto v_resetjp_2836_;
}
else
{
lean_inc(v_a_2835_);
lean_dec(v___x_2834_);
v___x_2837_ = lean_box(0);
v_isShared_2838_ = v_isSharedCheck_2845_;
goto v_resetjp_2836_;
}
v_resetjp_2836_:
{
lean_object* v___x_2840_; 
if (v_isShared_2832_ == 0)
{
lean_ctor_set(v___x_2831_, 0, v_a_2835_);
v___x_2840_ = v___x_2831_;
goto v_reusejp_2839_;
}
else
{
lean_object* v_reuseFailAlloc_2844_; 
v_reuseFailAlloc_2844_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2844_, 0, v_a_2835_);
v___x_2840_ = v_reuseFailAlloc_2844_;
goto v_reusejp_2839_;
}
v_reusejp_2839_:
{
lean_object* v___x_2842_; 
if (v_isShared_2838_ == 0)
{
lean_ctor_set(v___x_2837_, 0, v___x_2840_);
v___x_2842_ = v___x_2837_;
goto v_reusejp_2841_;
}
else
{
lean_object* v_reuseFailAlloc_2843_; 
v_reuseFailAlloc_2843_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2843_, 0, v___x_2840_);
v___x_2842_ = v_reuseFailAlloc_2843_;
goto v_reusejp_2841_;
}
v_reusejp_2841_:
{
return v___x_2842_;
}
}
}
}
else
{
lean_object* v_a_2846_; lean_object* v___x_2848_; uint8_t v_isShared_2849_; uint8_t v_isSharedCheck_2853_; 
lean_del_object(v___x_2831_);
v_a_2846_ = lean_ctor_get(v___x_2834_, 0);
v_isSharedCheck_2853_ = !lean_is_exclusive(v___x_2834_);
if (v_isSharedCheck_2853_ == 0)
{
v___x_2848_ = v___x_2834_;
v_isShared_2849_ = v_isSharedCheck_2853_;
goto v_resetjp_2847_;
}
else
{
lean_inc(v_a_2846_);
lean_dec(v___x_2834_);
v___x_2848_ = lean_box(0);
v_isShared_2849_ = v_isSharedCheck_2853_;
goto v_resetjp_2847_;
}
v_resetjp_2847_:
{
lean_object* v___x_2851_; 
if (v_isShared_2849_ == 0)
{
v___x_2851_ = v___x_2848_;
goto v_reusejp_2850_;
}
else
{
lean_object* v_reuseFailAlloc_2852_; 
v_reuseFailAlloc_2852_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2852_, 0, v_a_2846_);
v___x_2851_ = v_reuseFailAlloc_2852_;
goto v_reusejp_2850_;
}
v_reusejp_2850_:
{
return v___x_2851_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockRendererForUnsafe___boxed(lean_object* v_typeName_2865_, lean_object* v_a_2866_, lean_object* v_a_2867_, lean_object* v_a_2868_){
_start:
{
lean_object* v_res_2869_; 
v_res_2869_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_blockRendererForUnsafe(v_typeName_2865_, v_a_2866_, v_a_2867_);
lean_dec(v_a_2867_);
lean_dec_ref(v_a_2866_);
lean_dec(v_typeName_2865_);
return v_res_2869_;
}
}
static lean_object* _init_l_Lean_Doc_mdRendererHeartbeats(void){
_start:
{
lean_object* v___x_2870_; 
v___x_2870_ = lean_unsigned_to_nat(200000u);
return v___x_2870_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_withMdRendererBudget___redArg(lean_object* v_x_2871_, lean_object* v_a_2872_, lean_object* v_a_2873_, lean_object* v_a_2874_){
_start:
{
lean_object* v___x_2876_; lean_object* v_toCold_2877_; lean_object* v_currRecDepth_2878_; lean_object* v_ref_2879_; uint8_t v_diag_2880_; uint8_t v_suppressElabErrors_2881_; lean_object* v_fileName_2882_; lean_object* v_fileMap_2883_; lean_object* v_options_2884_; lean_object* v_maxRecDepth_2885_; lean_object* v_currNamespace_2886_; lean_object* v_openDecls_2887_; lean_object* v_quotContext_2888_; lean_object* v_currMacroScope_2889_; lean_object* v_cancelTk_x3f_2890_; lean_object* v_inheritedTraceOptions_2891_; lean_object* v___x_2892_; lean_object* v___x_2893_; lean_object* v___x_2894_; lean_object* v___x_2895_; 
v___x_2876_ = lean_io_get_num_heartbeats();
v_toCold_2877_ = lean_ctor_get(v_a_2873_, 0);
v_currRecDepth_2878_ = lean_ctor_get(v_a_2873_, 1);
v_ref_2879_ = lean_ctor_get(v_a_2873_, 2);
v_diag_2880_ = lean_ctor_get_uint8(v_a_2873_, sizeof(void*)*3);
v_suppressElabErrors_2881_ = lean_ctor_get_uint8(v_a_2873_, sizeof(void*)*3 + 1);
v_fileName_2882_ = lean_ctor_get(v_toCold_2877_, 0);
v_fileMap_2883_ = lean_ctor_get(v_toCold_2877_, 1);
v_options_2884_ = lean_ctor_get(v_toCold_2877_, 2);
v_maxRecDepth_2885_ = lean_ctor_get(v_toCold_2877_, 3);
v_currNamespace_2886_ = lean_ctor_get(v_toCold_2877_, 4);
v_openDecls_2887_ = lean_ctor_get(v_toCold_2877_, 5);
v_quotContext_2888_ = lean_ctor_get(v_toCold_2877_, 8);
v_currMacroScope_2889_ = lean_ctor_get(v_toCold_2877_, 9);
v_cancelTk_x3f_2890_ = lean_ctor_get(v_toCold_2877_, 10);
v_inheritedTraceOptions_2891_ = lean_ctor_get(v_toCold_2877_, 11);
v___x_2892_ = lean_unsigned_to_nat(200000u);
lean_inc_ref(v_inheritedTraceOptions_2891_);
lean_inc(v_cancelTk_x3f_2890_);
lean_inc(v_currMacroScope_2889_);
lean_inc(v_quotContext_2888_);
lean_inc(v_openDecls_2887_);
lean_inc(v_currNamespace_2886_);
lean_inc(v_maxRecDepth_2885_);
lean_inc_ref(v_options_2884_);
lean_inc_ref(v_fileMap_2883_);
lean_inc_ref(v_fileName_2882_);
v___x_2893_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_2893_, 0, v_fileName_2882_);
lean_ctor_set(v___x_2893_, 1, v_fileMap_2883_);
lean_ctor_set(v___x_2893_, 2, v_options_2884_);
lean_ctor_set(v___x_2893_, 3, v_maxRecDepth_2885_);
lean_ctor_set(v___x_2893_, 4, v_currNamespace_2886_);
lean_ctor_set(v___x_2893_, 5, v_openDecls_2887_);
lean_ctor_set(v___x_2893_, 6, v___x_2876_);
lean_ctor_set(v___x_2893_, 7, v___x_2892_);
lean_ctor_set(v___x_2893_, 8, v_quotContext_2888_);
lean_ctor_set(v___x_2893_, 9, v_currMacroScope_2889_);
lean_ctor_set(v___x_2893_, 10, v_cancelTk_x3f_2890_);
lean_ctor_set(v___x_2893_, 11, v_inheritedTraceOptions_2891_);
lean_inc(v_ref_2879_);
lean_inc(v_currRecDepth_2878_);
v___x_2894_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2894_, 0, v___x_2893_);
lean_ctor_set(v___x_2894_, 1, v_currRecDepth_2878_);
lean_ctor_set(v___x_2894_, 2, v_ref_2879_);
lean_ctor_set_uint8(v___x_2894_, sizeof(void*)*3, v_diag_2880_);
lean_ctor_set_uint8(v___x_2894_, sizeof(void*)*3 + 1, v_suppressElabErrors_2881_);
lean_inc(v_a_2874_);
lean_inc(v_a_2872_);
v___x_2895_ = lean_apply_4(v_x_2871_, v_a_2872_, v___x_2894_, v_a_2874_, lean_box(0));
return v___x_2895_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_withMdRendererBudget___redArg___boxed(lean_object* v_x_2896_, lean_object* v_a_2897_, lean_object* v_a_2898_, lean_object* v_a_2899_, lean_object* v_a_2900_){
_start:
{
lean_object* v_res_2901_; 
v_res_2901_ = l_Lean_Doc_withMdRendererBudget___redArg(v_x_2896_, v_a_2897_, v_a_2898_, v_a_2899_);
lean_dec(v_a_2899_);
lean_dec_ref(v_a_2898_);
lean_dec(v_a_2897_);
return v_res_2901_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_withMdRendererBudget(lean_object* v_00_u03b1_2902_, lean_object* v_x_2903_, lean_object* v_a_2904_, lean_object* v_a_2905_, lean_object* v_a_2906_){
_start:
{
lean_object* v___x_2908_; 
v___x_2908_ = l_Lean_Doc_withMdRendererBudget___redArg(v_x_2903_, v_a_2904_, v_a_2905_, v_a_2906_);
return v___x_2908_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_withMdRendererBudget___boxed(lean_object* v_00_u03b1_2909_, lean_object* v_x_2910_, lean_object* v_a_2911_, lean_object* v_a_2912_, lean_object* v_a_2913_, lean_object* v_a_2914_){
_start:
{
lean_object* v_res_2915_; 
v_res_2915_ = l_Lean_Doc_withMdRendererBudget(v_00_u03b1_2909_, v_x_2910_, v_a_2911_, v_a_2912_, v_a_2913_);
lean_dec(v_a_2913_);
lean_dec_ref(v_a_2912_);
lean_dec(v_a_2911_);
return v_res_2915_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_withRendererFallback(lean_object* v_fallback_2916_, lean_object* v_act_2917_, lean_object* v_a_2918_, lean_object* v_a_2919_, lean_object* v_a_2920_){
_start:
{
lean_object* v___x_2922_; lean_object* v___x_2923_; 
v___x_2922_ = lean_st_ref_get(v_a_2918_);
v___x_2923_ = l_Lean_Doc_withMdRendererBudget___redArg(v_act_2917_, v_a_2918_, v_a_2919_, v_a_2920_);
if (lean_obj_tag(v___x_2923_) == 0)
{
lean_dec(v___x_2922_);
lean_dec_ref(v_fallback_2916_);
return v___x_2923_;
}
else
{
lean_object* v_a_2924_; uint8_t v___x_2925_; 
v_a_2924_ = lean_ctor_get(v___x_2923_, 0);
lean_inc(v_a_2924_);
v___x_2925_ = l_Lean_Exception_isInterrupt(v_a_2924_);
lean_dec(v_a_2924_);
if (v___x_2925_ == 0)
{
lean_object* v___x_2926_; lean_object* v___x_2927_; 
lean_dec_ref_known(v___x_2923_, 1);
v___x_2926_ = lean_st_ref_swap(v_a_2918_, v___x_2922_);
lean_dec(v___x_2926_);
lean_inc(v_a_2920_);
lean_inc_ref(v_a_2919_);
lean_inc(v_a_2918_);
v___x_2927_ = lean_apply_4(v_fallback_2916_, v_a_2918_, v_a_2919_, v_a_2920_, lean_box(0));
return v___x_2927_;
}
else
{
lean_dec(v___x_2922_);
lean_dec_ref(v_fallback_2916_);
return v___x_2923_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_withRendererFallback___boxed(lean_object* v_fallback_2928_, lean_object* v_act_2929_, lean_object* v_a_2930_, lean_object* v_a_2931_, lean_object* v_a_2932_, lean_object* v_a_2933_){
_start:
{
lean_object* v_res_2934_; 
v_res_2934_ = l_Lean_Doc_withRendererFallback(v_fallback_2928_, v_act_2929_, v_a_2930_, v_a_2931_, v_a_2932_);
lean_dec(v_a_2932_);
lean_dec_ref(v_a_2931_);
lean_dec(v_a_2930_);
return v_res_2934_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownInlineElabInline___lam__0(lean_object* v_____do__lift_2935_, lean_object* v___y_2936_, lean_object* v___y_2937_, lean_object* v___y_2938_){
_start:
{
lean_object* v___x_2940_; lean_object* v___x_2941_; 
v___x_2940_ = l_Lean_Doc_joinInlines(v_____do__lift_2935_);
v___x_2941_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2941_, 0, v___x_2940_);
return v___x_2941_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownInlineElabInline___lam__0___boxed(lean_object* v_____do__lift_2942_, lean_object* v___y_2943_, lean_object* v___y_2944_, lean_object* v___y_2945_, lean_object* v___y_2946_){
_start:
{
lean_object* v_res_2947_; 
v_res_2947_ = l_Lean_Doc_instMarkdownInlineElabInline___lam__0(v_____do__lift_2942_, v___y_2943_, v___y_2944_, v___y_2945_);
lean_dec(v___y_2945_);
lean_dec_ref(v___y_2944_);
lean_dec(v___y_2943_);
lean_dec_ref(v_____do__lift_2942_);
return v_res_2947_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownInlineElabInline___lam__1(lean_object* v___x_2948_, lean_object* v___x_2949_, lean_object* v___f_2950_, lean_object* v_go_2951_, lean_object* v_container_2952_, lean_object* v_content_2953_, lean_object* v___y_2954_, lean_object* v___y_2955_, lean_object* v___y_2956_){
_start:
{
if (lean_obj_tag(v_container_2952_) == 0)
{
lean_object* v_val_2958_; size_t v_sz_2959_; size_t v___x_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; lean_object* v___x_2963_; lean_object* v_fallback_2964_; lean_object* v___x_2965_; lean_object* v___x_2966_; 
v_val_2958_ = lean_ctor_get(v_container_2952_, 0);
lean_inc(v_val_2958_);
lean_dec_ref_known(v_container_2952_, 1);
v_sz_2959_ = lean_array_size(v_content_2953_);
v___x_2960_ = ((size_t)0ULL);
v___x_2961_ = l_unsafeCast___redArg(v_content_2953_);
lean_inc_ref(v_go_2951_);
v___x_2962_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_2948_, v_go_2951_, v_sz_2959_, v___x_2960_, v___x_2961_);
v___x_2963_ = l_unsafeCast___redArg(v___x_2962_);
lean_inc_ref(v___f_2950_);
v_fallback_2964_ = lean_alloc_closure((void*)(l_ReaderT_bind___boxed), 8, 7);
lean_closure_set(v_fallback_2964_, 0, lean_box(0));
lean_closure_set(v_fallback_2964_, 1, lean_box(0));
lean_closure_set(v_fallback_2964_, 2, v___x_2949_);
lean_closure_set(v_fallback_2964_, 3, lean_box(0));
lean_closure_set(v_fallback_2964_, 4, lean_box(0));
lean_closure_set(v_fallback_2964_, 5, v___x_2963_);
lean_closure_set(v_fallback_2964_, 6, v___f_2950_);
v___x_2965_ = l___private_Init_Dynamic_0__Dynamic_typeNameImpl(v_val_2958_);
v___x_2966_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe(v___x_2965_, v___y_2955_, v___y_2956_);
lean_dec(v___x_2965_);
if (lean_obj_tag(v___x_2966_) == 0)
{
lean_object* v_a_2967_; 
v_a_2967_ = lean_ctor_get(v___x_2966_, 0);
lean_inc(v_a_2967_);
lean_dec_ref_known(v___x_2966_, 1);
if (lean_obj_tag(v_a_2967_) == 0)
{
lean_object* v___x_558__overap_2968_; lean_object* v___x_2969_; 
lean_dec_ref(v_fallback_2964_);
lean_dec(v_val_2958_);
lean_dec_ref(v_content_2953_);
lean_dec_ref(v_go_2951_);
v___x_558__overap_2968_ = l_unsafeCast___redArg(v___x_2962_);
lean_dec(v___x_2962_);
lean_inc(v___y_2956_);
lean_inc_ref(v___y_2955_);
lean_inc(v___y_2954_);
v___x_2969_ = lean_apply_4(v___x_558__overap_2968_, v___y_2954_, v___y_2955_, v___y_2956_, lean_box(0));
if (lean_obj_tag(v___x_2969_) == 0)
{
lean_object* v_a_2970_; lean_object* v___x_2971_; 
v_a_2970_ = lean_ctor_get(v___x_2969_, 0);
lean_inc(v_a_2970_);
lean_dec_ref_known(v___x_2969_, 1);
lean_inc(v___y_2956_);
lean_inc_ref(v___y_2955_);
lean_inc(v___y_2954_);
v___x_2971_ = lean_apply_5(v___f_2950_, v_a_2970_, v___y_2954_, v___y_2955_, v___y_2956_, lean_box(0));
return v___x_2971_;
}
else
{
lean_object* v_a_2972_; lean_object* v___x_2974_; uint8_t v_isShared_2975_; uint8_t v_isSharedCheck_2979_; 
lean_dec_ref(v___f_2950_);
v_a_2972_ = lean_ctor_get(v___x_2969_, 0);
v_isSharedCheck_2979_ = !lean_is_exclusive(v___x_2969_);
if (v_isSharedCheck_2979_ == 0)
{
v___x_2974_ = v___x_2969_;
v_isShared_2975_ = v_isSharedCheck_2979_;
goto v_resetjp_2973_;
}
else
{
lean_inc(v_a_2972_);
lean_dec(v___x_2969_);
v___x_2974_ = lean_box(0);
v_isShared_2975_ = v_isSharedCheck_2979_;
goto v_resetjp_2973_;
}
v_resetjp_2973_:
{
lean_object* v___x_2977_; 
if (v_isShared_2975_ == 0)
{
v___x_2977_ = v___x_2974_;
goto v_reusejp_2976_;
}
else
{
lean_object* v_reuseFailAlloc_2978_; 
v_reuseFailAlloc_2978_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2978_, 0, v_a_2972_);
v___x_2977_ = v_reuseFailAlloc_2978_;
goto v_reusejp_2976_;
}
v_reusejp_2976_:
{
return v___x_2977_;
}
}
}
}
else
{
lean_object* v_val_2980_; lean_object* v___x_2981_; lean_object* v___x_2982_; 
lean_dec(v___x_2962_);
lean_dec_ref(v___f_2950_);
v_val_2980_ = lean_ctor_get(v_a_2967_, 0);
lean_inc(v_val_2980_);
lean_dec_ref_known(v_a_2967_, 1);
v___x_2981_ = lean_apply_3(v_val_2980_, v_go_2951_, v_val_2958_, v_content_2953_);
v___x_2982_ = l_Lean_Doc_withRendererFallback(v_fallback_2964_, v___x_2981_, v___y_2954_, v___y_2955_, v___y_2956_);
return v___x_2982_;
}
}
else
{
lean_object* v_a_2983_; lean_object* v___x_2985_; uint8_t v_isShared_2986_; uint8_t v_isSharedCheck_2990_; 
lean_dec_ref(v_fallback_2964_);
lean_dec(v___x_2962_);
lean_dec(v_val_2958_);
lean_dec_ref(v_content_2953_);
lean_dec_ref(v_go_2951_);
lean_dec_ref(v___f_2950_);
v_a_2983_ = lean_ctor_get(v___x_2966_, 0);
v_isSharedCheck_2990_ = !lean_is_exclusive(v___x_2966_);
if (v_isSharedCheck_2990_ == 0)
{
v___x_2985_ = v___x_2966_;
v_isShared_2986_ = v_isSharedCheck_2990_;
goto v_resetjp_2984_;
}
else
{
lean_inc(v_a_2983_);
lean_dec(v___x_2966_);
v___x_2985_ = lean_box(0);
v_isShared_2986_ = v_isSharedCheck_2990_;
goto v_resetjp_2984_;
}
v_resetjp_2984_:
{
lean_object* v___x_2988_; 
if (v_isShared_2986_ == 0)
{
v___x_2988_ = v___x_2985_;
goto v_reusejp_2987_;
}
else
{
lean_object* v_reuseFailAlloc_2989_; 
v_reuseFailAlloc_2989_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2989_, 0, v_a_2983_);
v___x_2988_ = v_reuseFailAlloc_2989_;
goto v_reusejp_2987_;
}
v_reusejp_2987_:
{
return v___x_2988_;
}
}
}
}
else
{
size_t v_sz_2991_; size_t v___x_2992_; lean_object* v___x_2993_; lean_object* v___x_2994_; lean_object* v___x_575__overap_2995_; lean_object* v___x_2996_; 
lean_dec_ref_known(v_container_2952_, 1);
lean_dec_ref(v___f_2950_);
lean_dec_ref(v___x_2949_);
v_sz_2991_ = lean_array_size(v_content_2953_);
v___x_2992_ = ((size_t)0ULL);
v___x_2993_ = l_unsafeCast___redArg(v_content_2953_);
lean_dec_ref(v_content_2953_);
v___x_2994_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_2948_, v_go_2951_, v_sz_2991_, v___x_2992_, v___x_2993_);
v___x_575__overap_2995_ = l_unsafeCast___redArg(v___x_2994_);
lean_dec(v___x_2994_);
lean_inc(v___y_2956_);
lean_inc_ref(v___y_2955_);
lean_inc(v___y_2954_);
v___x_2996_ = lean_apply_4(v___x_575__overap_2995_, v___y_2954_, v___y_2955_, v___y_2956_, lean_box(0));
if (lean_obj_tag(v___x_2996_) == 0)
{
lean_object* v_a_2997_; lean_object* v___x_2999_; uint8_t v_isShared_3000_; uint8_t v_isSharedCheck_3005_; 
v_a_2997_ = lean_ctor_get(v___x_2996_, 0);
v_isSharedCheck_3005_ = !lean_is_exclusive(v___x_2996_);
if (v_isSharedCheck_3005_ == 0)
{
v___x_2999_ = v___x_2996_;
v_isShared_3000_ = v_isSharedCheck_3005_;
goto v_resetjp_2998_;
}
else
{
lean_inc(v_a_2997_);
lean_dec(v___x_2996_);
v___x_2999_ = lean_box(0);
v_isShared_3000_ = v_isSharedCheck_3005_;
goto v_resetjp_2998_;
}
v_resetjp_2998_:
{
lean_object* v___x_3001_; lean_object* v___x_3003_; 
v___x_3001_ = l_Lean_Doc_joinInlines(v_a_2997_);
lean_dec(v_a_2997_);
if (v_isShared_3000_ == 0)
{
lean_ctor_set(v___x_2999_, 0, v___x_3001_);
v___x_3003_ = v___x_2999_;
goto v_reusejp_3002_;
}
else
{
lean_object* v_reuseFailAlloc_3004_; 
v_reuseFailAlloc_3004_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3004_, 0, v___x_3001_);
v___x_3003_ = v_reuseFailAlloc_3004_;
goto v_reusejp_3002_;
}
v_reusejp_3002_:
{
return v___x_3003_;
}
}
}
else
{
lean_object* v_a_3006_; lean_object* v___x_3008_; uint8_t v_isShared_3009_; uint8_t v_isSharedCheck_3013_; 
v_a_3006_ = lean_ctor_get(v___x_2996_, 0);
v_isSharedCheck_3013_ = !lean_is_exclusive(v___x_2996_);
if (v_isSharedCheck_3013_ == 0)
{
v___x_3008_ = v___x_2996_;
v_isShared_3009_ = v_isSharedCheck_3013_;
goto v_resetjp_3007_;
}
else
{
lean_inc(v_a_3006_);
lean_dec(v___x_2996_);
v___x_3008_ = lean_box(0);
v_isShared_3009_ = v_isSharedCheck_3013_;
goto v_resetjp_3007_;
}
v_resetjp_3007_:
{
lean_object* v___x_3011_; 
if (v_isShared_3009_ == 0)
{
v___x_3011_ = v___x_3008_;
goto v_reusejp_3010_;
}
else
{
lean_object* v_reuseFailAlloc_3012_; 
v_reuseFailAlloc_3012_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3012_, 0, v_a_3006_);
v___x_3011_ = v_reuseFailAlloc_3012_;
goto v_reusejp_3010_;
}
v_reusejp_3010_:
{
return v___x_3011_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownInlineElabInline___lam__1___boxed(lean_object* v___x_3014_, lean_object* v___x_3015_, lean_object* v___f_3016_, lean_object* v_go_3017_, lean_object* v_container_3018_, lean_object* v_content_3019_, lean_object* v___y_3020_, lean_object* v___y_3021_, lean_object* v___y_3022_, lean_object* v___y_3023_){
_start:
{
lean_object* v_res_3024_; 
v_res_3024_ = l_Lean_Doc_instMarkdownInlineElabInline___lam__1(v___x_3014_, v___x_3015_, v___f_3016_, v_go_3017_, v_container_3018_, v_content_3019_, v___y_3020_, v___y_3021_, v___y_3022_);
lean_dec(v___y_3022_);
lean_dec_ref(v___y_3021_);
lean_dec(v___y_3020_);
return v_res_3024_;
}
}
static lean_object* _init_l_Lean_Doc_instMarkdownInlineElabInline(void){
_start:
{
lean_object* v___x_3026_; lean_object* v_toApplicative_3027_; lean_object* v_toFunctor_3028_; lean_object* v_toSeq_3029_; lean_object* v_toSeqLeft_3030_; lean_object* v_toSeqRight_3031_; lean_object* v___f_3032_; lean_object* v___f_3033_; lean_object* v___f_3034_; lean_object* v___f_3035_; lean_object* v___f_3036_; lean_object* v___x_3037_; lean_object* v___f_3038_; lean_object* v___f_3039_; lean_object* v___f_3040_; lean_object* v___x_3041_; lean_object* v___x_3042_; lean_object* v___x_3043_; lean_object* v___f_3044_; 
v___x_3026_ = lean_obj_once(&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__1, &l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__1_once, _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__1);
v_toApplicative_3027_ = lean_ctor_get(v___x_3026_, 0);
v_toFunctor_3028_ = lean_ctor_get(v_toApplicative_3027_, 0);
v_toSeq_3029_ = lean_ctor_get(v_toApplicative_3027_, 2);
v_toSeqLeft_3030_ = lean_ctor_get(v_toApplicative_3027_, 3);
v_toSeqRight_3031_ = lean_ctor_get(v_toApplicative_3027_, 4);
v___f_3032_ = ((lean_object*)(l_Lean_Doc_instMarkdownInlineElabInline___closed__0));
v___f_3033_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__2));
v___f_3034_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_3028_, 2);
v___f_3035_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_3035_, 0, v_toFunctor_3028_);
v___f_3036_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3036_, 0, v_toFunctor_3028_);
v___x_3037_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3037_, 0, v___f_3035_);
lean_ctor_set(v___x_3037_, 1, v___f_3036_);
lean_inc(v_toSeqRight_3031_);
v___f_3038_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3038_, 0, v_toSeqRight_3031_);
lean_inc(v_toSeqLeft_3030_);
v___f_3039_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_3039_, 0, v_toSeqLeft_3030_);
lean_inc(v_toSeq_3029_);
v___f_3040_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_3040_, 0, v_toSeq_3029_);
v___x_3041_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3041_, 0, v___x_3037_);
lean_ctor_set(v___x_3041_, 1, v___f_3033_);
lean_ctor_set(v___x_3041_, 2, v___f_3040_);
lean_ctor_set(v___x_3041_, 3, v___f_3039_);
lean_ctor_set(v___x_3041_, 4, v___f_3038_);
v___x_3042_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3042_, 0, v___x_3041_);
lean_ctor_set(v___x_3042_, 1, v___f_3034_);
lean_inc_ref(v___x_3042_);
v___x_3043_ = l_StateRefT_x27_instMonad___redArg(v___x_3042_);
v___f_3044_ = lean_alloc_closure((void*)(l_Lean_Doc_instMarkdownInlineElabInline___lam__1___boxed), 10, 3);
lean_closure_set(v___f_3044_, 0, v___x_3043_);
lean_closure_set(v___f_3044_, 1, v___x_3042_);
lean_closure_set(v___f_3044_, 2, v___f_3032_);
return v___f_3044_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownBlockElabInlineElabBlock___lam__0(lean_object* v_____do__lift_3045_, lean_object* v___y_3046_, lean_object* v___y_3047_, lean_object* v___y_3048_){
_start:
{
lean_object* v___x_3050_; lean_object* v___x_3051_; 
v___x_3050_ = l_Lean_Doc_joinBlocks(v_____do__lift_3045_);
v___x_3051_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3051_, 0, v___x_3050_);
return v___x_3051_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownBlockElabInlineElabBlock___lam__0___boxed(lean_object* v_____do__lift_3052_, lean_object* v___y_3053_, lean_object* v___y_3054_, lean_object* v___y_3055_, lean_object* v___y_3056_){
_start:
{
lean_object* v_res_3057_; 
v_res_3057_ = l_Lean_Doc_instMarkdownBlockElabInlineElabBlock___lam__0(v_____do__lift_3052_, v___y_3053_, v___y_3054_, v___y_3055_);
lean_dec(v___y_3055_);
lean_dec_ref(v___y_3054_);
lean_dec(v___y_3053_);
lean_dec_ref(v_____do__lift_3052_);
return v_res_3057_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownBlockElabInlineElabBlock___lam__1(lean_object* v___x_3058_, lean_object* v___x_3059_, lean_object* v___f_3060_, lean_object* v_goI_3061_, lean_object* v_goB_3062_, lean_object* v_container_3063_, lean_object* v_content_3064_, lean_object* v___y_3065_, lean_object* v___y_3066_, lean_object* v___y_3067_){
_start:
{
if (lean_obj_tag(v_container_3063_) == 0)
{
lean_object* v_val_3069_; size_t v_sz_3070_; size_t v___x_3071_; lean_object* v___x_3072_; lean_object* v___x_3073_; lean_object* v___x_3074_; lean_object* v_fallback_3075_; lean_object* v___x_3076_; lean_object* v___x_3077_; 
v_val_3069_ = lean_ctor_get(v_container_3063_, 0);
lean_inc(v_val_3069_);
lean_dec_ref_known(v_container_3063_, 1);
v_sz_3070_ = lean_array_size(v_content_3064_);
v___x_3071_ = ((size_t)0ULL);
v___x_3072_ = l_unsafeCast___redArg(v_content_3064_);
lean_inc_ref(v_goB_3062_);
v___x_3073_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_3058_, v_goB_3062_, v_sz_3070_, v___x_3071_, v___x_3072_);
v___x_3074_ = l_unsafeCast___redArg(v___x_3073_);
lean_inc_ref(v___f_3060_);
v_fallback_3075_ = lean_alloc_closure((void*)(l_ReaderT_bind___boxed), 8, 7);
lean_closure_set(v_fallback_3075_, 0, lean_box(0));
lean_closure_set(v_fallback_3075_, 1, lean_box(0));
lean_closure_set(v_fallback_3075_, 2, v___x_3059_);
lean_closure_set(v_fallback_3075_, 3, lean_box(0));
lean_closure_set(v_fallback_3075_, 4, lean_box(0));
lean_closure_set(v_fallback_3075_, 5, v___x_3074_);
lean_closure_set(v_fallback_3075_, 6, v___f_3060_);
v___x_3076_ = l___private_Init_Dynamic_0__Dynamic_typeNameImpl(v_val_3069_);
v___x_3077_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_blockRendererForUnsafe(v___x_3076_, v___y_3066_, v___y_3067_);
lean_dec(v___x_3076_);
if (lean_obj_tag(v___x_3077_) == 0)
{
lean_object* v_a_3078_; 
v_a_3078_ = lean_ctor_get(v___x_3077_, 0);
lean_inc(v_a_3078_);
lean_dec_ref_known(v___x_3077_, 1);
if (lean_obj_tag(v_a_3078_) == 0)
{
lean_object* v___x_558__overap_3079_; lean_object* v___x_3080_; 
lean_dec_ref(v_fallback_3075_);
lean_dec(v_val_3069_);
lean_dec_ref(v_content_3064_);
lean_dec_ref(v_goB_3062_);
lean_dec_ref(v_goI_3061_);
v___x_558__overap_3079_ = l_unsafeCast___redArg(v___x_3073_);
lean_dec(v___x_3073_);
lean_inc(v___y_3067_);
lean_inc_ref(v___y_3066_);
lean_inc(v___y_3065_);
v___x_3080_ = lean_apply_4(v___x_558__overap_3079_, v___y_3065_, v___y_3066_, v___y_3067_, lean_box(0));
if (lean_obj_tag(v___x_3080_) == 0)
{
lean_object* v_a_3081_; lean_object* v___x_3082_; 
v_a_3081_ = lean_ctor_get(v___x_3080_, 0);
lean_inc(v_a_3081_);
lean_dec_ref_known(v___x_3080_, 1);
lean_inc(v___y_3067_);
lean_inc_ref(v___y_3066_);
lean_inc(v___y_3065_);
v___x_3082_ = lean_apply_5(v___f_3060_, v_a_3081_, v___y_3065_, v___y_3066_, v___y_3067_, lean_box(0));
return v___x_3082_;
}
else
{
lean_object* v_a_3083_; lean_object* v___x_3085_; uint8_t v_isShared_3086_; uint8_t v_isSharedCheck_3090_; 
lean_dec_ref(v___f_3060_);
v_a_3083_ = lean_ctor_get(v___x_3080_, 0);
v_isSharedCheck_3090_ = !lean_is_exclusive(v___x_3080_);
if (v_isSharedCheck_3090_ == 0)
{
v___x_3085_ = v___x_3080_;
v_isShared_3086_ = v_isSharedCheck_3090_;
goto v_resetjp_3084_;
}
else
{
lean_inc(v_a_3083_);
lean_dec(v___x_3080_);
v___x_3085_ = lean_box(0);
v_isShared_3086_ = v_isSharedCheck_3090_;
goto v_resetjp_3084_;
}
v_resetjp_3084_:
{
lean_object* v___x_3088_; 
if (v_isShared_3086_ == 0)
{
v___x_3088_ = v___x_3085_;
goto v_reusejp_3087_;
}
else
{
lean_object* v_reuseFailAlloc_3089_; 
v_reuseFailAlloc_3089_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3089_, 0, v_a_3083_);
v___x_3088_ = v_reuseFailAlloc_3089_;
goto v_reusejp_3087_;
}
v_reusejp_3087_:
{
return v___x_3088_;
}
}
}
}
else
{
lean_object* v_val_3091_; lean_object* v___x_3092_; lean_object* v___x_3093_; 
lean_dec(v___x_3073_);
lean_dec_ref(v___f_3060_);
v_val_3091_ = lean_ctor_get(v_a_3078_, 0);
lean_inc(v_val_3091_);
lean_dec_ref_known(v_a_3078_, 1);
v___x_3092_ = lean_apply_4(v_val_3091_, v_goI_3061_, v_goB_3062_, v_val_3069_, v_content_3064_);
v___x_3093_ = l_Lean_Doc_withRendererFallback(v_fallback_3075_, v___x_3092_, v___y_3065_, v___y_3066_, v___y_3067_);
return v___x_3093_;
}
}
else
{
lean_object* v_a_3094_; lean_object* v___x_3096_; uint8_t v_isShared_3097_; uint8_t v_isSharedCheck_3101_; 
lean_dec_ref(v_fallback_3075_);
lean_dec(v___x_3073_);
lean_dec(v_val_3069_);
lean_dec_ref(v_content_3064_);
lean_dec_ref(v_goB_3062_);
lean_dec_ref(v_goI_3061_);
lean_dec_ref(v___f_3060_);
v_a_3094_ = lean_ctor_get(v___x_3077_, 0);
v_isSharedCheck_3101_ = !lean_is_exclusive(v___x_3077_);
if (v_isSharedCheck_3101_ == 0)
{
v___x_3096_ = v___x_3077_;
v_isShared_3097_ = v_isSharedCheck_3101_;
goto v_resetjp_3095_;
}
else
{
lean_inc(v_a_3094_);
lean_dec(v___x_3077_);
v___x_3096_ = lean_box(0);
v_isShared_3097_ = v_isSharedCheck_3101_;
goto v_resetjp_3095_;
}
v_resetjp_3095_:
{
lean_object* v___x_3099_; 
if (v_isShared_3097_ == 0)
{
v___x_3099_ = v___x_3096_;
goto v_reusejp_3098_;
}
else
{
lean_object* v_reuseFailAlloc_3100_; 
v_reuseFailAlloc_3100_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3100_, 0, v_a_3094_);
v___x_3099_ = v_reuseFailAlloc_3100_;
goto v_reusejp_3098_;
}
v_reusejp_3098_:
{
return v___x_3099_;
}
}
}
}
else
{
size_t v_sz_3102_; size_t v___x_3103_; lean_object* v___x_3104_; lean_object* v___x_3105_; lean_object* v___x_575__overap_3106_; lean_object* v___x_3107_; 
lean_dec_ref_known(v_container_3063_, 1);
lean_dec_ref(v_goI_3061_);
lean_dec_ref(v___f_3060_);
lean_dec_ref(v___x_3059_);
v_sz_3102_ = lean_array_size(v_content_3064_);
v___x_3103_ = ((size_t)0ULL);
v___x_3104_ = l_unsafeCast___redArg(v_content_3064_);
lean_dec_ref(v_content_3064_);
v___x_3105_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_3058_, v_goB_3062_, v_sz_3102_, v___x_3103_, v___x_3104_);
v___x_575__overap_3106_ = l_unsafeCast___redArg(v___x_3105_);
lean_dec(v___x_3105_);
lean_inc(v___y_3067_);
lean_inc_ref(v___y_3066_);
lean_inc(v___y_3065_);
v___x_3107_ = lean_apply_4(v___x_575__overap_3106_, v___y_3065_, v___y_3066_, v___y_3067_, lean_box(0));
if (lean_obj_tag(v___x_3107_) == 0)
{
lean_object* v_a_3108_; lean_object* v___x_3110_; uint8_t v_isShared_3111_; uint8_t v_isSharedCheck_3116_; 
v_a_3108_ = lean_ctor_get(v___x_3107_, 0);
v_isSharedCheck_3116_ = !lean_is_exclusive(v___x_3107_);
if (v_isSharedCheck_3116_ == 0)
{
v___x_3110_ = v___x_3107_;
v_isShared_3111_ = v_isSharedCheck_3116_;
goto v_resetjp_3109_;
}
else
{
lean_inc(v_a_3108_);
lean_dec(v___x_3107_);
v___x_3110_ = lean_box(0);
v_isShared_3111_ = v_isSharedCheck_3116_;
goto v_resetjp_3109_;
}
v_resetjp_3109_:
{
lean_object* v___x_3112_; lean_object* v___x_3114_; 
v___x_3112_ = l_Lean_Doc_joinBlocks(v_a_3108_);
lean_dec(v_a_3108_);
if (v_isShared_3111_ == 0)
{
lean_ctor_set(v___x_3110_, 0, v___x_3112_);
v___x_3114_ = v___x_3110_;
goto v_reusejp_3113_;
}
else
{
lean_object* v_reuseFailAlloc_3115_; 
v_reuseFailAlloc_3115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3115_, 0, v___x_3112_);
v___x_3114_ = v_reuseFailAlloc_3115_;
goto v_reusejp_3113_;
}
v_reusejp_3113_:
{
return v___x_3114_;
}
}
}
else
{
lean_object* v_a_3117_; lean_object* v___x_3119_; uint8_t v_isShared_3120_; uint8_t v_isSharedCheck_3124_; 
v_a_3117_ = lean_ctor_get(v___x_3107_, 0);
v_isSharedCheck_3124_ = !lean_is_exclusive(v___x_3107_);
if (v_isSharedCheck_3124_ == 0)
{
v___x_3119_ = v___x_3107_;
v_isShared_3120_ = v_isSharedCheck_3124_;
goto v_resetjp_3118_;
}
else
{
lean_inc(v_a_3117_);
lean_dec(v___x_3107_);
v___x_3119_ = lean_box(0);
v_isShared_3120_ = v_isSharedCheck_3124_;
goto v_resetjp_3118_;
}
v_resetjp_3118_:
{
lean_object* v___x_3122_; 
if (v_isShared_3120_ == 0)
{
v___x_3122_ = v___x_3119_;
goto v_reusejp_3121_;
}
else
{
lean_object* v_reuseFailAlloc_3123_; 
v_reuseFailAlloc_3123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3123_, 0, v_a_3117_);
v___x_3122_ = v_reuseFailAlloc_3123_;
goto v_reusejp_3121_;
}
v_reusejp_3121_:
{
return v___x_3122_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownBlockElabInlineElabBlock___lam__1___boxed(lean_object* v___x_3125_, lean_object* v___x_3126_, lean_object* v___f_3127_, lean_object* v_goI_3128_, lean_object* v_goB_3129_, lean_object* v_container_3130_, lean_object* v_content_3131_, lean_object* v___y_3132_, lean_object* v___y_3133_, lean_object* v___y_3134_, lean_object* v___y_3135_){
_start:
{
lean_object* v_res_3136_; 
v_res_3136_ = l_Lean_Doc_instMarkdownBlockElabInlineElabBlock___lam__1(v___x_3125_, v___x_3126_, v___f_3127_, v_goI_3128_, v_goB_3129_, v_container_3130_, v_content_3131_, v___y_3132_, v___y_3133_, v___y_3134_);
lean_dec(v___y_3134_);
lean_dec_ref(v___y_3133_);
lean_dec(v___y_3132_);
return v_res_3136_;
}
}
static lean_object* _init_l_Lean_Doc_instMarkdownBlockElabInlineElabBlock(void){
_start:
{
lean_object* v___x_3138_; lean_object* v_toApplicative_3139_; lean_object* v_toFunctor_3140_; lean_object* v_toSeq_3141_; lean_object* v_toSeqLeft_3142_; lean_object* v_toSeqRight_3143_; lean_object* v___f_3144_; lean_object* v___f_3145_; lean_object* v___f_3146_; lean_object* v___f_3147_; lean_object* v___f_3148_; lean_object* v___x_3149_; lean_object* v___f_3150_; lean_object* v___f_3151_; lean_object* v___f_3152_; lean_object* v___x_3153_; lean_object* v___x_3154_; lean_object* v___x_3155_; lean_object* v___f_3156_; 
v___x_3138_ = lean_obj_once(&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__1, &l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__1_once, _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__1);
v_toApplicative_3139_ = lean_ctor_get(v___x_3138_, 0);
v_toFunctor_3140_ = lean_ctor_get(v_toApplicative_3139_, 0);
v_toSeq_3141_ = lean_ctor_get(v_toApplicative_3139_, 2);
v_toSeqLeft_3142_ = lean_ctor_get(v_toApplicative_3139_, 3);
v_toSeqRight_3143_ = lean_ctor_get(v_toApplicative_3139_, 4);
v___f_3144_ = ((lean_object*)(l_Lean_Doc_instMarkdownBlockElabInlineElabBlock___closed__0));
v___f_3145_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__2));
v___f_3146_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_3140_, 2);
v___f_3147_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_3147_, 0, v_toFunctor_3140_);
v___f_3148_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3148_, 0, v_toFunctor_3140_);
v___x_3149_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3149_, 0, v___f_3147_);
lean_ctor_set(v___x_3149_, 1, v___f_3148_);
lean_inc(v_toSeqRight_3143_);
v___f_3150_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3150_, 0, v_toSeqRight_3143_);
lean_inc(v_toSeqLeft_3142_);
v___f_3151_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_3151_, 0, v_toSeqLeft_3142_);
lean_inc(v_toSeq_3141_);
v___f_3152_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_3152_, 0, v_toSeq_3141_);
v___x_3153_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3153_, 0, v___x_3149_);
lean_ctor_set(v___x_3153_, 1, v___f_3145_);
lean_ctor_set(v___x_3153_, 2, v___f_3152_);
lean_ctor_set(v___x_3153_, 3, v___f_3151_);
lean_ctor_set(v___x_3153_, 4, v___f_3150_);
v___x_3154_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3154_, 0, v___x_3153_);
lean_ctor_set(v___x_3154_, 1, v___f_3146_);
lean_inc_ref(v___x_3154_);
v___x_3155_ = l_StateRefT_x27_instMonad___redArg(v___x_3154_);
v___f_3156_ = lean_alloc_closure((void*)(l_Lean_Doc_instMarkdownBlockElabInlineElabBlock___lam__1___boxed), 11, 3);
lean_closure_set(v___f_3156_, 0, v___x_3155_);
lean_closure_set(v___f_3156_, 1, v___x_3154_);
lean_closure_set(v___f_3156_, 2, v___f_3144_);
return v___f_3156_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownVersoDocString___lam__0(lean_object* v___x_3157_, lean_object* v___x_3158_, lean_object* v_part_3159_, lean_object* v___y_3160_, lean_object* v___y_3161_, lean_object* v___y_3162_){
_start:
{
lean_object* v___x_3164_; lean_object* v___x_3165_; 
v___x_3164_ = lean_unsigned_to_nat(0u);
v___x_3165_ = l_Lean_Doc_partMarkdown___redArg(v___x_3157_, v___x_3158_, v___x_3164_, v_part_3159_, v___y_3160_, v___y_3161_, v___y_3162_);
return v___x_3165_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownVersoDocString___lam__0___boxed(lean_object* v___x_3166_, lean_object* v___x_3167_, lean_object* v_part_3168_, lean_object* v___y_3169_, lean_object* v___y_3170_, lean_object* v___y_3171_, lean_object* v___y_3172_){
_start:
{
lean_object* v_res_3173_; 
v_res_3173_ = l_Lean_Doc_instToMarkdownVersoDocString___lam__0(v___x_3166_, v___x_3167_, v_part_3168_, v___y_3169_, v___y_3170_, v___y_3171_);
lean_dec(v___y_3171_);
lean_dec_ref(v___y_3170_);
lean_dec(v___y_3169_);
lean_dec_ref(v_part_3168_);
return v_res_3173_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownVersoDocString___lam__1(lean_object* v___x_3174_, lean_object* v___x_3175_, lean_object* v___x_3176_, lean_object* v___f_3177_, lean_object* v_x_3178_, lean_object* v___y_3179_, lean_object* v___y_3180_, lean_object* v___y_3181_){
_start:
{
lean_object* v_text_3183_; lean_object* v_subsections_3184_; lean_object* v___x_3185_; size_t v_sz_3186_; size_t v___x_3187_; lean_object* v___x_3188_; lean_object* v___x_3189_; lean_object* v___x_455__overap_3190_; lean_object* v___x_3191_; 
v_text_3183_ = lean_ctor_get(v_x_3178_, 0);
v_subsections_3184_ = lean_ctor_get(v_x_3178_, 1);
v___x_3185_ = lean_alloc_closure((void*)(l_Lean_Doc_instToMarkdownBlockOfMarkdownInlineOfMarkdownBlock___private__1___boxed), 9, 4);
lean_closure_set(v___x_3185_, 0, lean_box(0));
lean_closure_set(v___x_3185_, 1, lean_box(0));
lean_closure_set(v___x_3185_, 2, v___x_3174_);
lean_closure_set(v___x_3185_, 3, v___x_3175_);
v_sz_3186_ = lean_array_size(v_text_3183_);
v___x_3187_ = ((size_t)0ULL);
v___x_3188_ = l_unsafeCast___redArg(v_text_3183_);
lean_inc_ref(v___x_3176_);
v___x_3189_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_3176_, v___x_3185_, v_sz_3186_, v___x_3187_, v___x_3188_);
v___x_455__overap_3190_ = l_unsafeCast___redArg(v___x_3189_);
lean_dec(v___x_3189_);
lean_inc(v___y_3181_);
lean_inc_ref(v___y_3180_);
lean_inc(v___y_3179_);
v___x_3191_ = lean_apply_4(v___x_455__overap_3190_, v___y_3179_, v___y_3180_, v___y_3181_, lean_box(0));
if (lean_obj_tag(v___x_3191_) == 0)
{
lean_object* v_a_3192_; size_t v_sz_3193_; lean_object* v___x_3194_; lean_object* v___x_3195_; lean_object* v___x_460__overap_3196_; lean_object* v___x_3197_; 
v_a_3192_ = lean_ctor_get(v___x_3191_, 0);
lean_inc(v_a_3192_);
lean_dec_ref_known(v___x_3191_, 1);
v_sz_3193_ = lean_array_size(v_subsections_3184_);
v___x_3194_ = l_unsafeCast___redArg(v_subsections_3184_);
v___x_3195_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_3176_, v___f_3177_, v_sz_3193_, v___x_3187_, v___x_3194_);
v___x_460__overap_3196_ = l_unsafeCast___redArg(v___x_3195_);
lean_dec(v___x_3195_);
lean_inc(v___y_3181_);
lean_inc_ref(v___y_3180_);
lean_inc(v___y_3179_);
v___x_3197_ = lean_apply_4(v___x_460__overap_3196_, v___y_3179_, v___y_3180_, v___y_3181_, lean_box(0));
if (lean_obj_tag(v___x_3197_) == 0)
{
lean_object* v_a_3198_; lean_object* v___x_3200_; uint8_t v_isShared_3201_; uint8_t v_isSharedCheck_3207_; 
v_a_3198_ = lean_ctor_get(v___x_3197_, 0);
v_isSharedCheck_3207_ = !lean_is_exclusive(v___x_3197_);
if (v_isSharedCheck_3207_ == 0)
{
v___x_3200_ = v___x_3197_;
v_isShared_3201_ = v_isSharedCheck_3207_;
goto v_resetjp_3199_;
}
else
{
lean_inc(v_a_3198_);
lean_dec(v___x_3197_);
v___x_3200_ = lean_box(0);
v_isShared_3201_ = v_isSharedCheck_3207_;
goto v_resetjp_3199_;
}
v_resetjp_3199_:
{
lean_object* v___x_3202_; lean_object* v___x_3203_; lean_object* v___x_3205_; 
v___x_3202_ = l_Array_append___redArg(v_a_3192_, v_a_3198_);
lean_dec(v_a_3198_);
v___x_3203_ = l_Lean_Doc_joinBlocks(v___x_3202_);
lean_dec_ref(v___x_3202_);
if (v_isShared_3201_ == 0)
{
lean_ctor_set(v___x_3200_, 0, v___x_3203_);
v___x_3205_ = v___x_3200_;
goto v_reusejp_3204_;
}
else
{
lean_object* v_reuseFailAlloc_3206_; 
v_reuseFailAlloc_3206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3206_, 0, v___x_3203_);
v___x_3205_ = v_reuseFailAlloc_3206_;
goto v_reusejp_3204_;
}
v_reusejp_3204_:
{
return v___x_3205_;
}
}
}
else
{
lean_object* v_a_3208_; lean_object* v___x_3210_; uint8_t v_isShared_3211_; uint8_t v_isSharedCheck_3215_; 
lean_dec(v_a_3192_);
v_a_3208_ = lean_ctor_get(v___x_3197_, 0);
v_isSharedCheck_3215_ = !lean_is_exclusive(v___x_3197_);
if (v_isSharedCheck_3215_ == 0)
{
v___x_3210_ = v___x_3197_;
v_isShared_3211_ = v_isSharedCheck_3215_;
goto v_resetjp_3209_;
}
else
{
lean_inc(v_a_3208_);
lean_dec(v___x_3197_);
v___x_3210_ = lean_box(0);
v_isShared_3211_ = v_isSharedCheck_3215_;
goto v_resetjp_3209_;
}
v_resetjp_3209_:
{
lean_object* v___x_3213_; 
if (v_isShared_3211_ == 0)
{
v___x_3213_ = v___x_3210_;
goto v_reusejp_3212_;
}
else
{
lean_object* v_reuseFailAlloc_3214_; 
v_reuseFailAlloc_3214_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3214_, 0, v_a_3208_);
v___x_3213_ = v_reuseFailAlloc_3214_;
goto v_reusejp_3212_;
}
v_reusejp_3212_:
{
return v___x_3213_;
}
}
}
}
else
{
lean_object* v_a_3216_; lean_object* v___x_3218_; uint8_t v_isShared_3219_; uint8_t v_isSharedCheck_3223_; 
lean_dec_ref(v___f_3177_);
lean_dec_ref(v___x_3176_);
v_a_3216_ = lean_ctor_get(v___x_3191_, 0);
v_isSharedCheck_3223_ = !lean_is_exclusive(v___x_3191_);
if (v_isSharedCheck_3223_ == 0)
{
v___x_3218_ = v___x_3191_;
v_isShared_3219_ = v_isSharedCheck_3223_;
goto v_resetjp_3217_;
}
else
{
lean_inc(v_a_3216_);
lean_dec(v___x_3191_);
v___x_3218_ = lean_box(0);
v_isShared_3219_ = v_isSharedCheck_3223_;
goto v_resetjp_3217_;
}
v_resetjp_3217_:
{
lean_object* v___x_3221_; 
if (v_isShared_3219_ == 0)
{
v___x_3221_ = v___x_3218_;
goto v_reusejp_3220_;
}
else
{
lean_object* v_reuseFailAlloc_3222_; 
v_reuseFailAlloc_3222_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3222_, 0, v_a_3216_);
v___x_3221_ = v_reuseFailAlloc_3222_;
goto v_reusejp_3220_;
}
v_reusejp_3220_:
{
return v___x_3221_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownVersoDocString___lam__1___boxed(lean_object* v___x_3224_, lean_object* v___x_3225_, lean_object* v___x_3226_, lean_object* v___f_3227_, lean_object* v_x_3228_, lean_object* v___y_3229_, lean_object* v___y_3230_, lean_object* v___y_3231_, lean_object* v___y_3232_){
_start:
{
lean_object* v_res_3233_; 
v_res_3233_ = l_Lean_Doc_instToMarkdownVersoDocString___lam__1(v___x_3224_, v___x_3225_, v___x_3226_, v___f_3227_, v_x_3228_, v___y_3229_, v___y_3230_, v___y_3231_);
lean_dec(v___y_3231_);
lean_dec_ref(v___y_3230_);
lean_dec(v___y_3229_);
lean_dec_ref(v_x_3228_);
return v_res_3233_;
}
}
static lean_object* _init_l_Lean_Doc_instToMarkdownVersoDocString___closed__0(void){
_start:
{
lean_object* v___x_3234_; lean_object* v___x_3235_; lean_object* v___f_3236_; 
v___x_3234_ = l_Lean_Doc_instMarkdownBlockElabInlineElabBlock;
v___x_3235_ = l_Lean_Doc_instMarkdownInlineElabInline;
v___f_3236_ = lean_alloc_closure((void*)(l_Lean_Doc_instToMarkdownVersoDocString___lam__0___boxed), 7, 2);
lean_closure_set(v___f_3236_, 0, v___x_3235_);
lean_closure_set(v___f_3236_, 1, v___x_3234_);
return v___f_3236_;
}
}
static lean_object* _init_l_Lean_Doc_instToMarkdownVersoDocString(void){
_start:
{
lean_object* v___x_3237_; lean_object* v_toApplicative_3238_; lean_object* v_toFunctor_3239_; lean_object* v_toSeq_3240_; lean_object* v_toSeqLeft_3241_; lean_object* v_toSeqRight_3242_; lean_object* v___f_3243_; lean_object* v___f_3244_; lean_object* v___f_3245_; lean_object* v___f_3246_; lean_object* v___x_3247_; lean_object* v___f_3248_; lean_object* v___f_3249_; lean_object* v___f_3250_; lean_object* v___x_3251_; lean_object* v___x_3252_; lean_object* v___x_3253_; lean_object* v___x_3254_; lean_object* v___x_3255_; lean_object* v___f_3256_; lean_object* v___f_3257_; 
v___x_3237_ = lean_obj_once(&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__1, &l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__1_once, _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__1);
v_toApplicative_3238_ = lean_ctor_get(v___x_3237_, 0);
v_toFunctor_3239_ = lean_ctor_get(v_toApplicative_3238_, 0);
v_toSeq_3240_ = lean_ctor_get(v_toApplicative_3238_, 2);
v_toSeqLeft_3241_ = lean_ctor_get(v_toApplicative_3238_, 3);
v_toSeqRight_3242_ = lean_ctor_get(v_toApplicative_3238_, 4);
v___f_3243_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__2));
v___f_3244_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_3239_, 2);
v___f_3245_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_3245_, 0, v_toFunctor_3239_);
v___f_3246_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3246_, 0, v_toFunctor_3239_);
v___x_3247_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3247_, 0, v___f_3245_);
lean_ctor_set(v___x_3247_, 1, v___f_3246_);
lean_inc(v_toSeqRight_3242_);
v___f_3248_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3248_, 0, v_toSeqRight_3242_);
lean_inc(v_toSeqLeft_3241_);
v___f_3249_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_3249_, 0, v_toSeqLeft_3241_);
lean_inc(v_toSeq_3240_);
v___f_3250_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_3250_, 0, v_toSeq_3240_);
v___x_3251_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3251_, 0, v___x_3247_);
lean_ctor_set(v___x_3251_, 1, v___f_3243_);
lean_ctor_set(v___x_3251_, 2, v___f_3250_);
lean_ctor_set(v___x_3251_, 3, v___f_3249_);
lean_ctor_set(v___x_3251_, 4, v___f_3248_);
v___x_3252_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3252_, 0, v___x_3251_);
lean_ctor_set(v___x_3252_, 1, v___f_3244_);
v___x_3253_ = l_StateRefT_x27_instMonad___redArg(v___x_3252_);
v___x_3254_ = l_Lean_Doc_instMarkdownInlineElabInline;
v___x_3255_ = l_Lean_Doc_instMarkdownBlockElabInlineElabBlock;
v___f_3256_ = lean_obj_once(&l_Lean_Doc_instToMarkdownVersoDocString___closed__0, &l_Lean_Doc_instToMarkdownVersoDocString___closed__0_once, _init_l_Lean_Doc_instToMarkdownVersoDocString___closed__0);
v___f_3257_ = lean_alloc_closure((void*)(l_Lean_Doc_instToMarkdownVersoDocString___lam__1___boxed), 9, 4);
lean_closure_set(v___f_3257_, 0, v___x_3254_);
lean_closure_set(v___f_3257_, 1, v___x_3255_);
lean_closure_set(v___f_3257_, 2, v___x_3253_);
lean_closure_set(v___f_3257_, 3, v___f_3256_);
return v___f_3257_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownSnippet___lam__0(lean_object* v___x_3258_, lean_object* v___x_3259_, lean_object* v_x_3260_, lean_object* v___y_3261_, lean_object* v___y_3262_, lean_object* v___y_3263_){
_start:
{
lean_object* v_snd_3265_; lean_object* v_fst_3266_; lean_object* v_snd_3267_; lean_object* v___x_3268_; 
v_snd_3265_ = lean_ctor_get(v_x_3260_, 1);
v_fst_3266_ = lean_ctor_get(v_x_3260_, 0);
v_snd_3267_ = lean_ctor_get(v_snd_3265_, 1);
v___x_3268_ = l_Lean_Doc_partMarkdown___redArg(v___x_3258_, v___x_3259_, v_fst_3266_, v_snd_3267_, v___y_3261_, v___y_3262_, v___y_3263_);
return v___x_3268_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownSnippet___lam__0___boxed(lean_object* v___x_3269_, lean_object* v___x_3270_, lean_object* v_x_3271_, lean_object* v___y_3272_, lean_object* v___y_3273_, lean_object* v___y_3274_, lean_object* v___y_3275_){
_start:
{
lean_object* v_res_3276_; 
v_res_3276_ = l_Lean_Doc_instToMarkdownSnippet___lam__0(v___x_3269_, v___x_3270_, v_x_3271_, v___y_3272_, v___y_3273_, v___y_3274_);
lean_dec(v___y_3274_);
lean_dec_ref(v___y_3273_);
lean_dec(v___y_3272_);
lean_dec_ref(v_x_3271_);
return v_res_3276_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownSnippet___lam__1(lean_object* v___x_3277_, lean_object* v___x_3278_, lean_object* v___x_3279_, lean_object* v___f_3280_, lean_object* v_x_3281_, lean_object* v___y_3282_, lean_object* v___y_3283_, lean_object* v___y_3284_){
_start:
{
lean_object* v_text_3286_; lean_object* v_sections_3287_; lean_object* v___x_3288_; size_t v_sz_3289_; size_t v___x_3290_; lean_object* v___x_3291_; lean_object* v___x_3292_; lean_object* v___x_502__overap_3293_; lean_object* v___x_3294_; 
v_text_3286_ = lean_ctor_get(v_x_3281_, 0);
v_sections_3287_ = lean_ctor_get(v_x_3281_, 1);
v___x_3288_ = lean_alloc_closure((void*)(l_Lean_Doc_instToMarkdownBlockOfMarkdownInlineOfMarkdownBlock___private__1___boxed), 9, 4);
lean_closure_set(v___x_3288_, 0, lean_box(0));
lean_closure_set(v___x_3288_, 1, lean_box(0));
lean_closure_set(v___x_3288_, 2, v___x_3277_);
lean_closure_set(v___x_3288_, 3, v___x_3278_);
v_sz_3289_ = lean_array_size(v_text_3286_);
v___x_3290_ = ((size_t)0ULL);
v___x_3291_ = l_unsafeCast___redArg(v_text_3286_);
lean_inc_ref(v___x_3279_);
v___x_3292_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_3279_, v___x_3288_, v_sz_3289_, v___x_3290_, v___x_3291_);
v___x_502__overap_3293_ = l_unsafeCast___redArg(v___x_3292_);
lean_dec(v___x_3292_);
lean_inc(v___y_3284_);
lean_inc_ref(v___y_3283_);
lean_inc(v___y_3282_);
v___x_3294_ = lean_apply_4(v___x_502__overap_3293_, v___y_3282_, v___y_3283_, v___y_3284_, lean_box(0));
if (lean_obj_tag(v___x_3294_) == 0)
{
lean_object* v_a_3295_; size_t v_sz_3296_; lean_object* v___x_3297_; lean_object* v___x_3298_; lean_object* v___x_507__overap_3299_; lean_object* v___x_3300_; 
v_a_3295_ = lean_ctor_get(v___x_3294_, 0);
lean_inc(v_a_3295_);
lean_dec_ref_known(v___x_3294_, 1);
v_sz_3296_ = lean_array_size(v_sections_3287_);
v___x_3297_ = l_unsafeCast___redArg(v_sections_3287_);
v___x_3298_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_3279_, v___f_3280_, v_sz_3296_, v___x_3290_, v___x_3297_);
v___x_507__overap_3299_ = l_unsafeCast___redArg(v___x_3298_);
lean_dec(v___x_3298_);
lean_inc(v___y_3284_);
lean_inc_ref(v___y_3283_);
lean_inc(v___y_3282_);
v___x_3300_ = lean_apply_4(v___x_507__overap_3299_, v___y_3282_, v___y_3283_, v___y_3284_, lean_box(0));
if (lean_obj_tag(v___x_3300_) == 0)
{
lean_object* v_a_3301_; lean_object* v___x_3303_; uint8_t v_isShared_3304_; uint8_t v_isSharedCheck_3310_; 
v_a_3301_ = lean_ctor_get(v___x_3300_, 0);
v_isSharedCheck_3310_ = !lean_is_exclusive(v___x_3300_);
if (v_isSharedCheck_3310_ == 0)
{
v___x_3303_ = v___x_3300_;
v_isShared_3304_ = v_isSharedCheck_3310_;
goto v_resetjp_3302_;
}
else
{
lean_inc(v_a_3301_);
lean_dec(v___x_3300_);
v___x_3303_ = lean_box(0);
v_isShared_3304_ = v_isSharedCheck_3310_;
goto v_resetjp_3302_;
}
v_resetjp_3302_:
{
lean_object* v___x_3305_; lean_object* v___x_3306_; lean_object* v___x_3308_; 
v___x_3305_ = l_Array_append___redArg(v_a_3295_, v_a_3301_);
lean_dec(v_a_3301_);
v___x_3306_ = l_Lean_Doc_joinBlocks(v___x_3305_);
lean_dec_ref(v___x_3305_);
if (v_isShared_3304_ == 0)
{
lean_ctor_set(v___x_3303_, 0, v___x_3306_);
v___x_3308_ = v___x_3303_;
goto v_reusejp_3307_;
}
else
{
lean_object* v_reuseFailAlloc_3309_; 
v_reuseFailAlloc_3309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3309_, 0, v___x_3306_);
v___x_3308_ = v_reuseFailAlloc_3309_;
goto v_reusejp_3307_;
}
v_reusejp_3307_:
{
return v___x_3308_;
}
}
}
else
{
lean_object* v_a_3311_; lean_object* v___x_3313_; uint8_t v_isShared_3314_; uint8_t v_isSharedCheck_3318_; 
lean_dec(v_a_3295_);
v_a_3311_ = lean_ctor_get(v___x_3300_, 0);
v_isSharedCheck_3318_ = !lean_is_exclusive(v___x_3300_);
if (v_isSharedCheck_3318_ == 0)
{
v___x_3313_ = v___x_3300_;
v_isShared_3314_ = v_isSharedCheck_3318_;
goto v_resetjp_3312_;
}
else
{
lean_inc(v_a_3311_);
lean_dec(v___x_3300_);
v___x_3313_ = lean_box(0);
v_isShared_3314_ = v_isSharedCheck_3318_;
goto v_resetjp_3312_;
}
v_resetjp_3312_:
{
lean_object* v___x_3316_; 
if (v_isShared_3314_ == 0)
{
v___x_3316_ = v___x_3313_;
goto v_reusejp_3315_;
}
else
{
lean_object* v_reuseFailAlloc_3317_; 
v_reuseFailAlloc_3317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3317_, 0, v_a_3311_);
v___x_3316_ = v_reuseFailAlloc_3317_;
goto v_reusejp_3315_;
}
v_reusejp_3315_:
{
return v___x_3316_;
}
}
}
}
else
{
lean_object* v_a_3319_; lean_object* v___x_3321_; uint8_t v_isShared_3322_; uint8_t v_isSharedCheck_3326_; 
lean_dec_ref(v___f_3280_);
lean_dec_ref(v___x_3279_);
v_a_3319_ = lean_ctor_get(v___x_3294_, 0);
v_isSharedCheck_3326_ = !lean_is_exclusive(v___x_3294_);
if (v_isSharedCheck_3326_ == 0)
{
v___x_3321_ = v___x_3294_;
v_isShared_3322_ = v_isSharedCheck_3326_;
goto v_resetjp_3320_;
}
else
{
lean_inc(v_a_3319_);
lean_dec(v___x_3294_);
v___x_3321_ = lean_box(0);
v_isShared_3322_ = v_isSharedCheck_3326_;
goto v_resetjp_3320_;
}
v_resetjp_3320_:
{
lean_object* v___x_3324_; 
if (v_isShared_3322_ == 0)
{
v___x_3324_ = v___x_3321_;
goto v_reusejp_3323_;
}
else
{
lean_object* v_reuseFailAlloc_3325_; 
v_reuseFailAlloc_3325_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3325_, 0, v_a_3319_);
v___x_3324_ = v_reuseFailAlloc_3325_;
goto v_reusejp_3323_;
}
v_reusejp_3323_:
{
return v___x_3324_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownSnippet___lam__1___boxed(lean_object* v___x_3327_, lean_object* v___x_3328_, lean_object* v___x_3329_, lean_object* v___f_3330_, lean_object* v_x_3331_, lean_object* v___y_3332_, lean_object* v___y_3333_, lean_object* v___y_3334_, lean_object* v___y_3335_){
_start:
{
lean_object* v_res_3336_; 
v_res_3336_ = l_Lean_Doc_instToMarkdownSnippet___lam__1(v___x_3327_, v___x_3328_, v___x_3329_, v___f_3330_, v_x_3331_, v___y_3332_, v___y_3333_, v___y_3334_);
lean_dec(v___y_3334_);
lean_dec_ref(v___y_3333_);
lean_dec(v___y_3332_);
lean_dec_ref(v_x_3331_);
return v_res_3336_;
}
}
static lean_object* _init_l_Lean_Doc_instToMarkdownSnippet___closed__0(void){
_start:
{
lean_object* v___x_3337_; lean_object* v___x_3338_; lean_object* v___f_3339_; 
v___x_3337_ = l_Lean_Doc_instMarkdownBlockElabInlineElabBlock;
v___x_3338_ = l_Lean_Doc_instMarkdownInlineElabInline;
v___f_3339_ = lean_alloc_closure((void*)(l_Lean_Doc_instToMarkdownSnippet___lam__0___boxed), 7, 2);
lean_closure_set(v___f_3339_, 0, v___x_3338_);
lean_closure_set(v___f_3339_, 1, v___x_3337_);
return v___f_3339_;
}
}
static lean_object* _init_l_Lean_Doc_instToMarkdownSnippet(void){
_start:
{
lean_object* v___x_3340_; lean_object* v_toApplicative_3341_; lean_object* v_toFunctor_3342_; lean_object* v_toSeq_3343_; lean_object* v_toSeqLeft_3344_; lean_object* v_toSeqRight_3345_; lean_object* v___f_3346_; lean_object* v___f_3347_; lean_object* v___f_3348_; lean_object* v___f_3349_; lean_object* v___x_3350_; lean_object* v___f_3351_; lean_object* v___f_3352_; lean_object* v___f_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; lean_object* v___f_3359_; lean_object* v___f_3360_; 
v___x_3340_ = lean_obj_once(&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__1, &l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__1_once, _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__1);
v_toApplicative_3341_ = lean_ctor_get(v___x_3340_, 0);
v_toFunctor_3342_ = lean_ctor_get(v_toApplicative_3341_, 0);
v_toSeq_3343_ = lean_ctor_get(v_toApplicative_3341_, 2);
v_toSeqLeft_3344_ = lean_ctor_get(v_toApplicative_3341_, 3);
v_toSeqRight_3345_ = lean_ctor_get(v_toApplicative_3341_, 4);
v___f_3346_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__2));
v___f_3347_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_3342_, 2);
v___f_3348_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_3348_, 0, v_toFunctor_3342_);
v___f_3349_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3349_, 0, v_toFunctor_3342_);
v___x_3350_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3350_, 0, v___f_3348_);
lean_ctor_set(v___x_3350_, 1, v___f_3349_);
lean_inc(v_toSeqRight_3345_);
v___f_3351_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3351_, 0, v_toSeqRight_3345_);
lean_inc(v_toSeqLeft_3344_);
v___f_3352_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_3352_, 0, v_toSeqLeft_3344_);
lean_inc(v_toSeq_3343_);
v___f_3353_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_3353_, 0, v_toSeq_3343_);
v___x_3354_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3354_, 0, v___x_3350_);
lean_ctor_set(v___x_3354_, 1, v___f_3346_);
lean_ctor_set(v___x_3354_, 2, v___f_3353_);
lean_ctor_set(v___x_3354_, 3, v___f_3352_);
lean_ctor_set(v___x_3354_, 4, v___f_3351_);
v___x_3355_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3355_, 0, v___x_3354_);
lean_ctor_set(v___x_3355_, 1, v___f_3347_);
v___x_3356_ = l_StateRefT_x27_instMonad___redArg(v___x_3355_);
v___x_3357_ = l_Lean_Doc_instMarkdownInlineElabInline;
v___x_3358_ = l_Lean_Doc_instMarkdownBlockElabInlineElabBlock;
v___f_3359_ = lean_obj_once(&l_Lean_Doc_instToMarkdownSnippet___closed__0, &l_Lean_Doc_instToMarkdownSnippet___closed__0_once, _init_l_Lean_Doc_instToMarkdownSnippet___closed__0);
v___f_3360_ = lean_alloc_closure((void*)(l_Lean_Doc_instToMarkdownSnippet___lam__1___boxed), 9, 4);
lean_closure_set(v___f_3360_, 0, v___x_3357_);
lean_closure_set(v___f_3360_, 1, v___x_3358_);
lean_closure_set(v___f_3360_, 2, v___x_3356_);
lean_closure_set(v___f_3360_, 3, v___f_3359_);
return v___f_3360_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Doc_runMarkdown_spec__0(lean_object* v_opts_3361_, lean_object* v_opt_3362_){
_start:
{
lean_object* v_name_3363_; lean_object* v_defValue_3364_; lean_object* v_map_3365_; lean_object* v___x_3366_; 
v_name_3363_ = lean_ctor_get(v_opt_3362_, 0);
v_defValue_3364_ = lean_ctor_get(v_opt_3362_, 1);
v_map_3365_ = lean_ctor_get(v_opts_3361_, 0);
v___x_3366_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_3365_, v_name_3363_);
if (lean_obj_tag(v___x_3366_) == 0)
{
uint8_t v___x_3367_; 
v___x_3367_ = lean_unbox(v_defValue_3364_);
return v___x_3367_;
}
else
{
lean_object* v_val_3368_; 
v_val_3368_ = lean_ctor_get(v___x_3366_, 0);
lean_inc(v_val_3368_);
lean_dec_ref_known(v___x_3366_, 1);
if (lean_obj_tag(v_val_3368_) == 1)
{
uint8_t v_v_3369_; 
v_v_3369_ = lean_ctor_get_uint8(v_val_3368_, 0);
lean_dec_ref_known(v_val_3368_, 0);
return v_v_3369_;
}
else
{
uint8_t v___x_3370_; 
lean_dec(v_val_3368_);
v___x_3370_ = lean_unbox(v_defValue_3364_);
return v___x_3370_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Doc_runMarkdown_spec__0___boxed(lean_object* v_opts_3371_, lean_object* v_opt_3372_){
_start:
{
uint8_t v_res_3373_; lean_object* v_r_3374_; 
v_res_3373_ = l_Lean_Option_get___at___00Lean_Doc_runMarkdown_spec__0(v_opts_3371_, v_opt_3372_);
lean_dec_ref(v_opt_3372_);
lean_dec_ref(v_opts_3371_);
v_r_3374_ = lean_box(v_res_3373_);
return v_r_3374_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Doc_runMarkdown_spec__1(lean_object* v_opts_3375_, lean_object* v_opt_3376_){
_start:
{
lean_object* v_name_3377_; lean_object* v_defValue_3378_; lean_object* v_map_3379_; lean_object* v___x_3380_; 
v_name_3377_ = lean_ctor_get(v_opt_3376_, 0);
v_defValue_3378_ = lean_ctor_get(v_opt_3376_, 1);
v_map_3379_ = lean_ctor_get(v_opts_3375_, 0);
v___x_3380_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_3379_, v_name_3377_);
if (lean_obj_tag(v___x_3380_) == 0)
{
lean_inc(v_defValue_3378_);
return v_defValue_3378_;
}
else
{
lean_object* v_val_3381_; 
v_val_3381_ = lean_ctor_get(v___x_3380_, 0);
lean_inc(v_val_3381_);
lean_dec_ref_known(v___x_3380_, 1);
if (lean_obj_tag(v_val_3381_) == 3)
{
lean_object* v_v_3382_; 
v_v_3382_ = lean_ctor_get(v_val_3381_, 0);
lean_inc(v_v_3382_);
lean_dec_ref_known(v_val_3381_, 1);
return v_v_3382_;
}
else
{
lean_dec(v_val_3381_);
lean_inc(v_defValue_3378_);
return v_defValue_3378_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Doc_runMarkdown_spec__1___boxed(lean_object* v_opts_3383_, lean_object* v_opt_3384_){
_start:
{
lean_object* v_res_3385_; 
v_res_3385_ = l_Lean_Option_get___at___00Lean_Doc_runMarkdown_spec__1(v_opts_3383_, v_opt_3384_);
lean_dec_ref(v_opt_3384_);
lean_dec_ref(v_opts_3383_);
return v_res_3385_;
}
}
static lean_object* _init_l_Lean_Doc_runMarkdown___redArg___closed__1(void){
_start:
{
lean_object* v___x_3387_; lean_object* v___x_3388_; lean_object* v___x_3389_; 
v___x_3387_ = lean_unsigned_to_nat(1u);
v___x_3388_ = l_Lean_firstFrontendMacroScope;
v___x_3389_ = lean_nat_add(v___x_3388_, v___x_3387_);
return v___x_3389_;
}
}
static lean_object* _init_l_Lean_Doc_runMarkdown___redArg___closed__5(void){
_start:
{
lean_object* v___x_3396_; lean_object* v___x_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; 
v___x_3396_ = lean_box(0);
v___x_3397_ = lean_unsigned_to_nat(1u);
v___x_3398_ = lean_obj_once(&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe___closed__0, &l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe___closed__0_once, _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe___closed__0);
v___x_3399_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3399_, 0, v___x_3398_);
lean_ctor_set(v___x_3399_, 1, v___x_3397_);
lean_ctor_set(v___x_3399_, 2, v___x_3396_);
return v___x_3399_;
}
}
static lean_object* _init_l_Lean_Doc_runMarkdown___redArg___closed__6(void){
_start:
{
lean_object* v___x_3400_; lean_object* v___x_3401_; lean_object* v___x_3402_; 
v___x_3400_ = lean_unsigned_to_nat(32u);
v___x_3401_ = lean_mk_empty_array_with_capacity(v___x_3400_);
v___x_3402_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3402_, 0, v___x_3401_);
return v___x_3402_;
}
}
static lean_object* _init_l_Lean_Doc_runMarkdown___redArg___closed__7(void){
_start:
{
size_t v___x_3403_; lean_object* v___x_3404_; lean_object* v___x_3405_; lean_object* v___x_3406_; lean_object* v___x_3407_; lean_object* v___x_3408_; 
v___x_3403_ = ((size_t)5ULL);
v___x_3404_ = lean_unsigned_to_nat(0u);
v___x_3405_ = lean_unsigned_to_nat(32u);
v___x_3406_ = lean_mk_empty_array_with_capacity(v___x_3405_);
v___x_3407_ = lean_obj_once(&l_Lean_Doc_runMarkdown___redArg___closed__6, &l_Lean_Doc_runMarkdown___redArg___closed__6_once, _init_l_Lean_Doc_runMarkdown___redArg___closed__6);
v___x_3408_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_3408_, 0, v___x_3407_);
lean_ctor_set(v___x_3408_, 1, v___x_3406_);
lean_ctor_set(v___x_3408_, 2, v___x_3404_);
lean_ctor_set(v___x_3408_, 3, v___x_3404_);
lean_ctor_set_usize(v___x_3408_, 4, v___x_3403_);
return v___x_3408_;
}
}
static lean_object* _init_l_Lean_Doc_runMarkdown___redArg___closed__8(void){
_start:
{
lean_object* v___x_3409_; uint64_t v___x_3410_; lean_object* v___x_3411_; 
v___x_3409_ = lean_obj_once(&l_Lean_Doc_runMarkdown___redArg___closed__7, &l_Lean_Doc_runMarkdown___redArg___closed__7_once, _init_l_Lean_Doc_runMarkdown___redArg___closed__7);
v___x_3410_ = 0ULL;
v___x_3411_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3411_, 0, v___x_3409_);
lean_ctor_set_uint64(v___x_3411_, sizeof(void*)*1, v___x_3410_);
return v___x_3411_;
}
}
static lean_object* _init_l_Lean_Doc_runMarkdown___redArg___closed__9(void){
_start:
{
lean_object* v___x_3412_; lean_object* v___x_3413_; 
v___x_3412_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__0);
v___x_3413_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3413_, 0, v___x_3412_);
return v___x_3413_;
}
}
static lean_object* _init_l_Lean_Doc_runMarkdown___redArg___closed__10(void){
_start:
{
lean_object* v___x_3414_; lean_object* v___x_3415_; 
v___x_3414_ = lean_obj_once(&l_Lean_Doc_runMarkdown___redArg___closed__9, &l_Lean_Doc_runMarkdown___redArg___closed__9_once, _init_l_Lean_Doc_runMarkdown___redArg___closed__9);
v___x_3415_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3415_, 0, v___x_3414_);
lean_ctor_set(v___x_3415_, 1, v___x_3414_);
return v___x_3415_;
}
}
static lean_object* _init_l_Lean_Doc_runMarkdown___redArg___closed__11(void){
_start:
{
lean_object* v___x_3416_; lean_object* v___x_3417_; lean_object* v___x_3418_; 
v___x_3416_ = l_Lean_NameSet_empty;
v___x_3417_ = lean_obj_once(&l_Lean_Doc_runMarkdown___redArg___closed__7, &l_Lean_Doc_runMarkdown___redArg___closed__7_once, _init_l_Lean_Doc_runMarkdown___redArg___closed__7);
v___x_3418_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3418_, 0, v___x_3417_);
lean_ctor_set(v___x_3418_, 1, v___x_3417_);
lean_ctor_set(v___x_3418_, 2, v___x_3416_);
return v___x_3418_;
}
}
static lean_object* _init_l_Lean_Doc_runMarkdown___redArg___closed__12(void){
_start:
{
lean_object* v___x_3419_; lean_object* v___x_3420_; uint8_t v___x_3421_; lean_object* v___x_3422_; 
v___x_3419_ = lean_obj_once(&l_Lean_Doc_runMarkdown___redArg___closed__7, &l_Lean_Doc_runMarkdown___redArg___closed__7_once, _init_l_Lean_Doc_runMarkdown___redArg___closed__7);
v___x_3420_ = lean_obj_once(&l_Lean_Doc_runMarkdown___redArg___closed__9, &l_Lean_Doc_runMarkdown___redArg___closed__9_once, _init_l_Lean_Doc_runMarkdown___redArg___closed__9);
v___x_3421_ = 1;
v___x_3422_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_3422_, 0, v___x_3420_);
lean_ctor_set(v___x_3422_, 1, v___x_3420_);
lean_ctor_set(v___x_3422_, 2, v___x_3419_);
lean_ctor_set_uint8(v___x_3422_, sizeof(void*)*3, v___x_3421_);
return v___x_3422_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_runMarkdown___redArg(lean_object* v_env_3428_, lean_object* v_act_3429_, lean_object* v_options_3430_, lean_object* v_currNamespace_3431_, lean_object* v_openDecls_3432_, lean_object* v_cancelTk_x3f_3433_){
_start:
{
lean_object* v_a_3436_; lean_object* v___x_3439_; lean_object* v___x_3440_; lean_object* v___x_3441_; lean_object* v___x_3442_; lean_object* v___x_3443_; lean_object* v___x_3444_; lean_object* v___x_3445_; uint8_t v___x_3446_; lean_object* v___x_3447_; lean_object* v___x_3448_; lean_object* v___x_3449_; lean_object* v___x_3450_; lean_object* v___x_3451_; lean_object* v___x_3452_; uint8_t v___x_3453_; lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; lean_object* v___x_3457_; lean_object* v___x_3458_; lean_object* v___x_3459_; lean_object* v___x_3460_; lean_object* v___x_3461_; uint8_t v___x_3462_; lean_object* v___y_3464_; lean_object* v___x_3501_; uint8_t v___y_3503_; lean_object* v_env_3523_; uint8_t v___x_3524_; 
v___x_3439_ = ((lean_object*)(l_Lean_Doc_runMarkdown___redArg___closed__0));
v___x_3440_ = l_Lean_instInhabitedFileMap_default;
v___x_3441_ = lean_unsigned_to_nat(0u);
v___x_3442_ = l_Lean_Core_getMaxHeartbeats(v_options_3430_);
v___x_3443_ = lean_obj_once(&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe___closed__0, &l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe___closed__0_once, _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe___closed__0);
v___x_3444_ = l_Lean_firstFrontendMacroScope;
v___x_3445_ = lean_box(0);
v___x_3446_ = 0;
v___x_3447_ = lean_obj_once(&l_Lean_Doc_runMarkdown___redArg___closed__1, &l_Lean_Doc_runMarkdown___redArg___closed__1_once, _init_l_Lean_Doc_runMarkdown___redArg___closed__1);
v___x_3448_ = ((lean_object*)(l_Lean_Doc_runMarkdown___redArg___closed__4));
v___x_3449_ = lean_obj_once(&l_Lean_Doc_runMarkdown___redArg___closed__5, &l_Lean_Doc_runMarkdown___redArg___closed__5_once, _init_l_Lean_Doc_runMarkdown___redArg___closed__5);
v___x_3450_ = lean_obj_once(&l_Lean_Doc_runMarkdown___redArg___closed__8, &l_Lean_Doc_runMarkdown___redArg___closed__8_once, _init_l_Lean_Doc_runMarkdown___redArg___closed__8);
v___x_3451_ = lean_obj_once(&l_Lean_Doc_runMarkdown___redArg___closed__10, &l_Lean_Doc_runMarkdown___redArg___closed__10_once, _init_l_Lean_Doc_runMarkdown___redArg___closed__10);
v___x_3452_ = lean_obj_once(&l_Lean_Doc_runMarkdown___redArg___closed__11, &l_Lean_Doc_runMarkdown___redArg___closed__11_once, _init_l_Lean_Doc_runMarkdown___redArg___closed__11);
v___x_3453_ = 1;
v___x_3454_ = lean_obj_once(&l_Lean_Doc_runMarkdown___redArg___closed__12, &l_Lean_Doc_runMarkdown___redArg___closed__12_once, _init_l_Lean_Doc_runMarkdown___redArg___closed__12);
v___x_3455_ = ((lean_object*)(l_Lean_Doc_runMarkdown___redArg___closed__13));
v___x_3456_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_3456_, 0, v_env_3428_);
lean_ctor_set(v___x_3456_, 1, v___x_3447_);
lean_ctor_set(v___x_3456_, 2, v___x_3448_);
lean_ctor_set(v___x_3456_, 3, v___x_3449_);
lean_ctor_set(v___x_3456_, 4, v___x_3450_);
lean_ctor_set(v___x_3456_, 5, v___x_3451_);
lean_ctor_set(v___x_3456_, 6, v___x_3452_);
lean_ctor_set(v___x_3456_, 7, v___x_3454_);
lean_ctor_set(v___x_3456_, 8, v___x_3455_);
v___x_3457_ = lean_io_get_num_heartbeats();
v___x_3458_ = lean_st_mk_ref(v___x_3456_);
v___x_3459_ = l_Lean_inheritedTraceOptions;
v___x_3460_ = lean_st_ref_get(v___x_3459_);
v___x_3461_ = l_Lean_diagnostics;
v___x_3462_ = l_Lean_Option_get___at___00Lean_Doc_runMarkdown_spec__0(v_options_3430_, v___x_3461_);
v___x_3501_ = lean_st_ref_get(v___x_3458_);
v_env_3523_ = lean_ctor_get(v___x_3501_, 0);
lean_inc_ref(v_env_3523_);
lean_dec(v___x_3501_);
v___x_3524_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_3523_);
lean_dec_ref(v_env_3523_);
if (v___x_3462_ == 0)
{
if (v___x_3524_ == 0)
{
lean_inc(v___x_3458_);
v___y_3464_ = v___x_3458_;
goto v___jp_3463_;
}
else
{
v___y_3503_ = v___x_3462_;
goto v___jp_3502_;
}
}
else
{
v___y_3503_ = v___x_3524_;
goto v___jp_3502_;
}
v___jp_3435_:
{
lean_object* v___x_3437_; lean_object* v___x_3438_; 
v___x_3437_ = lean_mk_io_user_error(v_a_3436_);
v___x_3438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3438_, 0, v___x_3437_);
return v___x_3438_;
}
v___jp_3463_:
{
lean_object* v___x_3465_; lean_object* v___x_3466_; lean_object* v___x_3467_; lean_object* v___x_3468_; lean_object* v___x_3469_; 
v___x_3465_ = l_Lean_maxRecDepth;
v___x_3466_ = l_Lean_Option_get___at___00Lean_Doc_runMarkdown_spec__1(v_options_3430_, v___x_3465_);
v___x_3467_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_3467_, 0, v___x_3439_);
lean_ctor_set(v___x_3467_, 1, v___x_3440_);
lean_ctor_set(v___x_3467_, 2, v_options_3430_);
lean_ctor_set(v___x_3467_, 3, v___x_3466_);
lean_ctor_set(v___x_3467_, 4, v_currNamespace_3431_);
lean_ctor_set(v___x_3467_, 5, v_openDecls_3432_);
lean_ctor_set(v___x_3467_, 6, v___x_3457_);
lean_ctor_set(v___x_3467_, 7, v___x_3442_);
lean_ctor_set(v___x_3467_, 8, v___x_3443_);
lean_ctor_set(v___x_3467_, 9, v___x_3444_);
lean_ctor_set(v___x_3467_, 10, v_cancelTk_x3f_3433_);
lean_ctor_set(v___x_3467_, 11, v___x_3460_);
v___x_3468_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_3468_, 0, v___x_3467_);
lean_ctor_set(v___x_3468_, 1, v___x_3441_);
lean_ctor_set(v___x_3468_, 2, v___x_3445_);
lean_ctor_set_uint8(v___x_3468_, sizeof(void*)*3, v___x_3462_);
lean_ctor_set_uint8(v___x_3468_, sizeof(void*)*3 + 1, v___x_3446_);
v___x_3469_ = lean_apply_3(v_act_3429_, v___x_3468_, v___y_3464_, lean_box(0));
if (lean_obj_tag(v___x_3469_) == 0)
{
lean_object* v_a_3470_; lean_object* v___x_3472_; uint8_t v_isShared_3473_; uint8_t v_isSharedCheck_3478_; 
v_a_3470_ = lean_ctor_get(v___x_3469_, 0);
v_isSharedCheck_3478_ = !lean_is_exclusive(v___x_3469_);
if (v_isSharedCheck_3478_ == 0)
{
v___x_3472_ = v___x_3469_;
v_isShared_3473_ = v_isSharedCheck_3478_;
goto v_resetjp_3471_;
}
else
{
lean_inc(v_a_3470_);
lean_dec(v___x_3469_);
v___x_3472_ = lean_box(0);
v_isShared_3473_ = v_isSharedCheck_3478_;
goto v_resetjp_3471_;
}
v_resetjp_3471_:
{
lean_object* v___x_3474_; lean_object* v___x_3476_; 
v___x_3474_ = lean_st_ref_get(v___x_3458_);
lean_dec(v___x_3458_);
lean_dec(v___x_3474_);
if (v_isShared_3473_ == 0)
{
v___x_3476_ = v___x_3472_;
goto v_reusejp_3475_;
}
else
{
lean_object* v_reuseFailAlloc_3477_; 
v_reuseFailAlloc_3477_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3477_, 0, v_a_3470_);
v___x_3476_ = v_reuseFailAlloc_3477_;
goto v_reusejp_3475_;
}
v_reusejp_3475_:
{
return v___x_3476_;
}
}
}
else
{
lean_object* v_a_3479_; lean_object* v___x_3481_; uint8_t v_isShared_3482_; uint8_t v_isSharedCheck_3500_; 
lean_dec(v___x_3458_);
v_a_3479_ = lean_ctor_get(v___x_3469_, 0);
v_isSharedCheck_3500_ = !lean_is_exclusive(v___x_3469_);
if (v_isSharedCheck_3500_ == 0)
{
v___x_3481_ = v___x_3469_;
v_isShared_3482_ = v_isSharedCheck_3500_;
goto v_resetjp_3480_;
}
else
{
lean_inc(v_a_3479_);
lean_dec(v___x_3469_);
v___x_3481_ = lean_box(0);
v_isShared_3482_ = v_isSharedCheck_3500_;
goto v_resetjp_3480_;
}
v_resetjp_3480_:
{
if (lean_obj_tag(v_a_3479_) == 0)
{
lean_object* v_msg_3483_; lean_object* v___x_3484_; lean_object* v___x_3485_; lean_object* v___x_3487_; 
v_msg_3483_ = lean_ctor_get(v_a_3479_, 1);
lean_inc_ref(v_msg_3483_);
lean_dec_ref_known(v_a_3479_, 2);
v___x_3484_ = l_Lean_MessageData_toString(v_msg_3483_);
v___x_3485_ = lean_mk_io_user_error(v___x_3484_);
if (v_isShared_3482_ == 0)
{
lean_ctor_set(v___x_3481_, 0, v___x_3485_);
v___x_3487_ = v___x_3481_;
goto v_reusejp_3486_;
}
else
{
lean_object* v_reuseFailAlloc_3488_; 
v_reuseFailAlloc_3488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3488_, 0, v___x_3485_);
v___x_3487_ = v_reuseFailAlloc_3488_;
goto v_reusejp_3486_;
}
v_reusejp_3486_:
{
return v___x_3487_;
}
}
else
{
lean_object* v_id_3489_; lean_object* v___x_3490_; 
lean_del_object(v___x_3481_);
v_id_3489_ = lean_ctor_get(v_a_3479_, 0);
lean_inc(v_id_3489_);
lean_dec_ref_known(v_a_3479_, 2);
v___x_3490_ = l_Lean_InternalExceptionId_getName(v_id_3489_);
if (lean_obj_tag(v___x_3490_) == 0)
{
lean_object* v_a_3491_; lean_object* v___x_3492_; lean_object* v___x_3493_; lean_object* v___x_3494_; 
lean_dec(v_id_3489_);
v_a_3491_ = lean_ctor_get(v___x_3490_, 0);
lean_inc(v_a_3491_);
lean_dec_ref_known(v___x_3490_, 1);
v___x_3492_ = ((lean_object*)(l_Lean_Doc_runMarkdown___redArg___closed__14));
v___x_3493_ = l_Lean_Name_toString(v_a_3491_, v___x_3453_);
v___x_3494_ = lean_string_append(v___x_3492_, v___x_3493_);
lean_dec_ref(v___x_3493_);
v_a_3436_ = v___x_3494_;
goto v___jp_3435_;
}
else
{
lean_object* v___x_3495_; lean_object* v___x_3496_; lean_object* v___x_3497_; lean_object* v___x_3498_; lean_object* v___x_3499_; 
lean_dec_ref_known(v___x_3490_, 1);
v___x_3495_ = ((lean_object*)(l_Lean_Doc_runMarkdown___redArg___closed__15));
v___x_3496_ = l_Nat_reprFast(v_id_3489_);
v___x_3497_ = lean_string_append(v___x_3495_, v___x_3496_);
lean_dec_ref(v___x_3496_);
v___x_3498_ = ((lean_object*)(l_Lean_Doc_runMarkdown___redArg___closed__16));
v___x_3499_ = lean_string_append(v___x_3497_, v___x_3498_);
v_a_3436_ = v___x_3499_;
goto v___jp_3435_;
}
}
}
}
}
v___jp_3502_:
{
if (v___y_3503_ == 0)
{
lean_object* v___x_3504_; lean_object* v_env_3505_; lean_object* v_nextMacroScope_3506_; lean_object* v_ngen_3507_; lean_object* v_auxDeclNGen_3508_; lean_object* v_traceState_3509_; lean_object* v_messages_3510_; lean_object* v_infoState_3511_; lean_object* v_snapshotTasks_3512_; lean_object* v___x_3514_; uint8_t v_isShared_3515_; uint8_t v_isSharedCheck_3521_; 
v___x_3504_ = lean_st_ref_take(v___x_3458_);
v_env_3505_ = lean_ctor_get(v___x_3504_, 0);
v_nextMacroScope_3506_ = lean_ctor_get(v___x_3504_, 1);
v_ngen_3507_ = lean_ctor_get(v___x_3504_, 2);
v_auxDeclNGen_3508_ = lean_ctor_get(v___x_3504_, 3);
v_traceState_3509_ = lean_ctor_get(v___x_3504_, 4);
v_messages_3510_ = lean_ctor_get(v___x_3504_, 6);
v_infoState_3511_ = lean_ctor_get(v___x_3504_, 7);
v_snapshotTasks_3512_ = lean_ctor_get(v___x_3504_, 8);
v_isSharedCheck_3521_ = !lean_is_exclusive(v___x_3504_);
if (v_isSharedCheck_3521_ == 0)
{
lean_object* v_unused_3522_; 
v_unused_3522_ = lean_ctor_get(v___x_3504_, 5);
lean_dec(v_unused_3522_);
v___x_3514_ = v___x_3504_;
v_isShared_3515_ = v_isSharedCheck_3521_;
goto v_resetjp_3513_;
}
else
{
lean_inc(v_snapshotTasks_3512_);
lean_inc(v_infoState_3511_);
lean_inc(v_messages_3510_);
lean_inc(v_traceState_3509_);
lean_inc(v_auxDeclNGen_3508_);
lean_inc(v_ngen_3507_);
lean_inc(v_nextMacroScope_3506_);
lean_inc(v_env_3505_);
lean_dec(v___x_3504_);
v___x_3514_ = lean_box(0);
v_isShared_3515_ = v_isSharedCheck_3521_;
goto v_resetjp_3513_;
}
v_resetjp_3513_:
{
lean_object* v___x_3516_; lean_object* v___x_3518_; 
v___x_3516_ = l_Lean_Kernel_enableDiag(v_env_3505_, v___x_3462_);
if (v_isShared_3515_ == 0)
{
lean_ctor_set(v___x_3514_, 5, v___x_3451_);
lean_ctor_set(v___x_3514_, 0, v___x_3516_);
v___x_3518_ = v___x_3514_;
goto v_reusejp_3517_;
}
else
{
lean_object* v_reuseFailAlloc_3520_; 
v_reuseFailAlloc_3520_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3520_, 0, v___x_3516_);
lean_ctor_set(v_reuseFailAlloc_3520_, 1, v_nextMacroScope_3506_);
lean_ctor_set(v_reuseFailAlloc_3520_, 2, v_ngen_3507_);
lean_ctor_set(v_reuseFailAlloc_3520_, 3, v_auxDeclNGen_3508_);
lean_ctor_set(v_reuseFailAlloc_3520_, 4, v_traceState_3509_);
lean_ctor_set(v_reuseFailAlloc_3520_, 5, v___x_3451_);
lean_ctor_set(v_reuseFailAlloc_3520_, 6, v_messages_3510_);
lean_ctor_set(v_reuseFailAlloc_3520_, 7, v_infoState_3511_);
lean_ctor_set(v_reuseFailAlloc_3520_, 8, v_snapshotTasks_3512_);
v___x_3518_ = v_reuseFailAlloc_3520_;
goto v_reusejp_3517_;
}
v_reusejp_3517_:
{
lean_object* v___x_3519_; 
v___x_3519_ = lean_st_ref_put(v___x_3458_, v___x_3518_);
lean_inc(v___x_3458_);
v___y_3464_ = v___x_3458_;
goto v___jp_3463_;
}
}
}
else
{
lean_inc(v___x_3458_);
v___y_3464_ = v___x_3458_;
goto v___jp_3463_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_runMarkdown___redArg___boxed(lean_object* v_env_3525_, lean_object* v_act_3526_, lean_object* v_options_3527_, lean_object* v_currNamespace_3528_, lean_object* v_openDecls_3529_, lean_object* v_cancelTk_x3f_3530_, lean_object* v_a_3531_){
_start:
{
lean_object* v_res_3532_; 
v_res_3532_ = l_Lean_Doc_runMarkdown___redArg(v_env_3525_, v_act_3526_, v_options_3527_, v_currNamespace_3528_, v_openDecls_3529_, v_cancelTk_x3f_3530_);
return v_res_3532_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_runMarkdown(lean_object* v_00_u03b1_3533_, lean_object* v_env_3534_, lean_object* v_act_3535_, lean_object* v_options_3536_, lean_object* v_currNamespace_3537_, lean_object* v_openDecls_3538_, lean_object* v_cancelTk_x3f_3539_){
_start:
{
lean_object* v___x_3541_; 
v___x_3541_ = l_Lean_Doc_runMarkdown___redArg(v_env_3534_, v_act_3535_, v_options_3536_, v_currNamespace_3537_, v_openDecls_3538_, v_cancelTk_x3f_3539_);
return v___x_3541_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_runMarkdown___boxed(lean_object* v_00_u03b1_3542_, lean_object* v_env_3543_, lean_object* v_act_3544_, lean_object* v_options_3545_, lean_object* v_currNamespace_3546_, lean_object* v_openDecls_3547_, lean_object* v_cancelTk_x3f_3548_, lean_object* v_a_3549_){
_start:
{
lean_object* v_res_3550_; 
v_res_3550_ = l_Lean_Doc_runMarkdown(v_00_u03b1_3542_, v_env_3543_, v_act_3544_, v_options_3545_, v_currNamespace_3546_, v_openDecls_3547_, v_cancelTk_x3f_3548_);
return v_res_3550_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0___lam__1(lean_object* v___x_3551_, lean_object* v___y_3552_, lean_object* v___y_3553_, lean_object* v___y_3554_){
_start:
{
lean_object* v___x_4162__overap_3556_; lean_object* v___x_3557_; 
v___x_4162__overap_3556_ = l_unsafeCast___redArg(v___x_3551_);
lean_inc(v___y_3554_);
lean_inc_ref(v___y_3553_);
lean_inc(v___y_3552_);
v___x_3557_ = lean_apply_4(v___x_4162__overap_3556_, v___y_3552_, v___y_3553_, v___y_3554_, lean_box(0));
if (lean_obj_tag(v___x_3557_) == 0)
{
lean_object* v_a_3558_; lean_object* v___x_3560_; uint8_t v_isShared_3561_; uint8_t v_isSharedCheck_3566_; 
v_a_3558_ = lean_ctor_get(v___x_3557_, 0);
v_isSharedCheck_3566_ = !lean_is_exclusive(v___x_3557_);
if (v_isSharedCheck_3566_ == 0)
{
v___x_3560_ = v___x_3557_;
v_isShared_3561_ = v_isSharedCheck_3566_;
goto v_resetjp_3559_;
}
else
{
lean_inc(v_a_3558_);
lean_dec(v___x_3557_);
v___x_3560_ = lean_box(0);
v_isShared_3561_ = v_isSharedCheck_3566_;
goto v_resetjp_3559_;
}
v_resetjp_3559_:
{
lean_object* v___x_3562_; lean_object* v___x_3564_; 
v___x_3562_ = l_Lean_Doc_joinInlines(v_a_3558_);
lean_dec(v_a_3558_);
if (v_isShared_3561_ == 0)
{
lean_ctor_set(v___x_3560_, 0, v___x_3562_);
v___x_3564_ = v___x_3560_;
goto v_reusejp_3563_;
}
else
{
lean_object* v_reuseFailAlloc_3565_; 
v_reuseFailAlloc_3565_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3565_, 0, v___x_3562_);
v___x_3564_ = v_reuseFailAlloc_3565_;
goto v_reusejp_3563_;
}
v_reusejp_3563_:
{
return v___x_3564_;
}
}
}
else
{
lean_object* v_a_3567_; lean_object* v___x_3569_; uint8_t v_isShared_3570_; uint8_t v_isSharedCheck_3574_; 
v_a_3567_ = lean_ctor_get(v___x_3557_, 0);
v_isSharedCheck_3574_ = !lean_is_exclusive(v___x_3557_);
if (v_isSharedCheck_3574_ == 0)
{
v___x_3569_ = v___x_3557_;
v_isShared_3570_ = v_isSharedCheck_3574_;
goto v_resetjp_3568_;
}
else
{
lean_inc(v_a_3567_);
lean_dec(v___x_3557_);
v___x_3569_ = lean_box(0);
v_isShared_3570_ = v_isSharedCheck_3574_;
goto v_resetjp_3568_;
}
v_resetjp_3568_:
{
lean_object* v___x_3572_; 
if (v_isShared_3570_ == 0)
{
v___x_3572_ = v___x_3569_;
goto v_reusejp_3571_;
}
else
{
lean_object* v_reuseFailAlloc_3573_; 
v_reuseFailAlloc_3573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3573_, 0, v_a_3567_);
v___x_3572_ = v_reuseFailAlloc_3573_;
goto v_reusejp_3571_;
}
v_reusejp_3571_:
{
return v___x_3572_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0___lam__1___boxed(lean_object* v___x_3575_, lean_object* v___y_3576_, lean_object* v___y_3577_, lean_object* v___y_3578_, lean_object* v___y_3579_){
_start:
{
lean_object* v_res_3580_; 
v_res_3580_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0___lam__1(v___x_3575_, v___y_3576_, v___y_3577_, v___y_3578_);
lean_dec(v___y_3578_);
lean_dec_ref(v___y_3577_);
lean_dec(v___y_3576_);
lean_dec_ref(v___x_3575_);
return v_res_3580_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0_spec__1(lean_object* v_x_3583_, size_t v_sz_3584_, size_t v_i_3585_, lean_object* v_bs_3586_, lean_object* v___y_3587_, lean_object* v___y_3588_, lean_object* v___y_3589_){
_start:
{
uint8_t v___x_3591_; 
v___x_3591_ = lean_usize_dec_lt(v_i_3585_, v_sz_3584_);
if (v___x_3591_ == 0)
{
lean_object* v___x_3592_; lean_object* v___x_3593_; 
lean_dec_ref(v_x_3583_);
v___x_3592_ = l_unsafeCast___redArg(v_bs_3586_);
lean_dec_ref(v_bs_3586_);
v___x_3593_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3593_, 0, v___x_3592_);
return v___x_3593_;
}
else
{
lean_object* v_v_3594_; lean_object* v___x_3595_; lean_object* v_bs_x27_3596_; lean_object* v___x_3597_; lean_object* v___x_3598_; 
v_v_3594_ = lean_array_uget(v_bs_3586_, v_i_3585_);
v___x_3595_ = lean_unsigned_to_nat(0u);
v_bs_x27_3596_ = lean_array_uset(v_bs_3586_, v_i_3585_, v___x_3595_);
v___x_3597_ = l_unsafeCast___redArg(v_v_3594_);
lean_dec(v_v_3594_);
lean_inc_ref(v_x_3583_);
v___x_3598_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0(v_x_3583_, v___x_3597_, v___y_3587_, v___y_3588_, v___y_3589_);
if (lean_obj_tag(v___x_3598_) == 0)
{
lean_object* v_a_3599_; size_t v___x_3600_; size_t v___x_3601_; lean_object* v___x_3602_; lean_object* v___x_3603_; 
v_a_3599_ = lean_ctor_get(v___x_3598_, 0);
lean_inc(v_a_3599_);
lean_dec_ref_known(v___x_3598_, 1);
v___x_3600_ = ((size_t)1ULL);
v___x_3601_ = lean_usize_add(v_i_3585_, v___x_3600_);
v___x_3602_ = l_unsafeCast___redArg(v_a_3599_);
lean_dec(v_a_3599_);
v___x_3603_ = lean_array_uset(v_bs_x27_3596_, v_i_3585_, v___x_3602_);
v_i_3585_ = v___x_3601_;
v_bs_3586_ = v___x_3603_;
goto _start;
}
else
{
lean_object* v_a_3605_; lean_object* v___x_3607_; uint8_t v_isShared_3608_; uint8_t v_isSharedCheck_3612_; 
lean_dec_ref(v_bs_x27_3596_);
lean_dec_ref(v_x_3583_);
v_a_3605_ = lean_ctor_get(v___x_3598_, 0);
v_isSharedCheck_3612_ = !lean_is_exclusive(v___x_3598_);
if (v_isSharedCheck_3612_ == 0)
{
v___x_3607_ = v___x_3598_;
v_isShared_3608_ = v_isSharedCheck_3612_;
goto v_resetjp_3606_;
}
else
{
lean_inc(v_a_3605_);
lean_dec(v___x_3598_);
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
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_x_3613_, lean_object* v_sz_3614_, lean_object* v_i_3615_, lean_object* v_bs_3616_, lean_object* v___y_3617_, lean_object* v___y_3618_, lean_object* v___y_3619_, lean_object* v___y_3620_){
_start:
{
size_t v_sz_boxed_3621_; size_t v_i_boxed_3622_; lean_object* v_res_3623_; 
v_sz_boxed_3621_ = lean_unbox_usize(v_sz_3614_);
lean_dec(v_sz_3614_);
v_i_boxed_3622_ = lean_unbox_usize(v_i_3615_);
lean_dec(v_i_3615_);
v_res_3623_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0_spec__1(v_x_3613_, v_sz_boxed_3621_, v_i_boxed_3622_, v_bs_3616_, v___y_3617_, v___y_3618_, v___y_3619_);
lean_dec(v___y_3619_);
lean_dec_ref(v___y_3618_);
lean_dec(v___y_3617_);
return v_res_3623_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0___lam__0___boxed(lean_object* v_x_3624_, lean_object* v___y_3625_, lean_object* v___y_3626_, lean_object* v___y_3627_, lean_object* v___y_3628_, lean_object* v___y_3629_){
_start:
{
lean_object* v_res_3630_; 
v_res_3630_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0___lam__0(v_x_3624_, v___y_3625_, v___y_3626_, v___y_3627_, v___y_3628_);
lean_dec(v___y_3628_);
lean_dec_ref(v___y_3627_);
lean_dec(v___y_3626_);
return v_res_3630_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0(lean_object* v_x_3631_, lean_object* v_x_3632_, lean_object* v_a_3633_, lean_object* v_a_3634_, lean_object* v_a_3635_){
_start:
{
lean_object* v_pieces_3638_; lean_object* v_pieces_3642_; 
switch(lean_obj_tag(v_x_3632_))
{
case 0:
{
lean_object* v_string_3645_; lean_object* v___x_3646_; lean_object* v___x_3647_; lean_object* v___x_3648_; lean_object* v___x_3649_; lean_object* v___x_3650_; 
lean_dec_ref(v_x_3631_);
v_string_3645_ = lean_ctor_get(v_x_3632_, 0);
lean_inc_ref(v_string_3645_);
lean_dec_ref_known(v_x_3632_, 1);
v___x_3646_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_escape(v_string_3645_);
lean_dec_ref(v_string_3645_);
v___x_3647_ = lean_unsigned_to_nat(1u);
v___x_3648_ = lean_mk_empty_array_with_capacity(v___x_3647_);
v___x_3649_ = lean_array_push(v___x_3648_, v___x_3646_);
v___x_3650_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3650_, 0, v___x_3649_);
return v___x_3650_;
}
case 1:
{
lean_object* v_content_3651_; lean_object* v___x_3653_; uint8_t v_isShared_3654_; uint8_t v_isSharedCheck_3706_; 
v_content_3651_ = lean_ctor_get(v_x_3632_, 0);
v_isSharedCheck_3706_ = !lean_is_exclusive(v_x_3632_);
if (v_isSharedCheck_3706_ == 0)
{
v___x_3653_ = v_x_3632_;
v_isShared_3654_ = v_isSharedCheck_3706_;
goto v_resetjp_3652_;
}
else
{
lean_inc(v_content_3651_);
lean_dec(v_x_3632_);
v___x_3653_ = lean_box(0);
v_isShared_3654_ = v_isSharedCheck_3706_;
goto v_resetjp_3652_;
}
v_resetjp_3652_:
{
lean_object* v___x_3656_; 
if (v_isShared_3654_ == 0)
{
lean_ctor_set_tag(v___x_3653_, 9);
v___x_3656_ = v___x_3653_;
goto v_reusejp_3655_;
}
else
{
lean_object* v_reuseFailAlloc_3705_; 
v_reuseFailAlloc_3705_ = lean_alloc_ctor(9, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3705_, 0, v_content_3651_);
v___x_3656_ = v_reuseFailAlloc_3705_;
goto v_reusejp_3655_;
}
v_reusejp_3655_:
{
lean_object* v___x_3657_; lean_object* v_snd_3658_; lean_object* v_fst_3659_; lean_object* v_fst_3660_; lean_object* v_snd_3661_; lean_object* v_pieces_3663_; uint8_t v_inEmph_3671_; uint8_t v_inBold_3672_; uint8_t v_inLink_3673_; lean_object* v___x_3675_; uint8_t v_isShared_3676_; uint8_t v_isSharedCheck_3704_; 
v___x_3657_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_trim___redArg(v___x_3656_);
v_snd_3658_ = lean_ctor_get(v___x_3657_, 1);
lean_inc(v_snd_3658_);
v_fst_3659_ = lean_ctor_get(v___x_3657_, 0);
lean_inc(v_fst_3659_);
lean_dec_ref(v___x_3657_);
v_fst_3660_ = lean_ctor_get(v_snd_3658_, 0);
lean_inc(v_fst_3660_);
v_snd_3661_ = lean_ctor_get(v_snd_3658_, 1);
lean_inc(v_snd_3661_);
lean_dec(v_snd_3658_);
v_inEmph_3671_ = lean_ctor_get_uint8(v_x_3631_, 0);
v_inBold_3672_ = lean_ctor_get_uint8(v_x_3631_, 1);
v_inLink_3673_ = lean_ctor_get_uint8(v_x_3631_, 2);
v_isSharedCheck_3704_ = !lean_is_exclusive(v_x_3631_);
if (v_isSharedCheck_3704_ == 0)
{
v___x_3675_ = v_x_3631_;
v_isShared_3676_ = v_isSharedCheck_3704_;
goto v_resetjp_3674_;
}
else
{
lean_dec(v_x_3631_);
v___x_3675_ = lean_box(0);
v_isShared_3676_ = v_isSharedCheck_3704_;
goto v_resetjp_3674_;
}
v___jp_3662_:
{
lean_object* v___x_3664_; lean_object* v___x_3665_; uint8_t v___x_3666_; 
v___x_3664_ = lean_string_utf8_byte_size(v_snd_3661_);
v___x_3665_ = lean_unsigned_to_nat(0u);
v___x_3666_ = lean_nat_dec_eq(v___x_3664_, v___x_3665_);
if (v___x_3666_ == 0)
{
lean_object* v___x_3667_; lean_object* v___x_3668_; lean_object* v___x_3669_; lean_object* v___x_3670_; 
v___x_3667_ = lean_unsigned_to_nat(1u);
v___x_3668_ = lean_mk_empty_array_with_capacity(v___x_3667_);
v___x_3669_ = lean_array_push(v___x_3668_, v_snd_3661_);
v___x_3670_ = lean_array_push(v_pieces_3663_, v___x_3669_);
v_pieces_3642_ = v___x_3670_;
goto v___jp_3641_;
}
else
{
lean_dec(v_snd_3661_);
v_pieces_3642_ = v_pieces_3663_;
goto v___jp_3641_;
}
}
v_resetjp_3674_:
{
uint8_t v___x_3677_; lean_object* v___x_3679_; 
v___x_3677_ = 1;
if (v_isShared_3676_ == 0)
{
v___x_3679_ = v___x_3675_;
goto v_reusejp_3678_;
}
else
{
lean_object* v_reuseFailAlloc_3703_; 
v_reuseFailAlloc_3703_ = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(v_reuseFailAlloc_3703_, 1, v_inBold_3672_);
lean_ctor_set_uint8(v_reuseFailAlloc_3703_, 2, v_inLink_3673_);
v___x_3679_ = v_reuseFailAlloc_3703_;
goto v_reusejp_3678_;
}
v_reusejp_3678_:
{
lean_object* v___x_3680_; 
lean_ctor_set_uint8(v___x_3679_, 0, v___x_3677_);
v___x_3680_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0(v___x_3679_, v_fst_3660_, v_a_3633_, v_a_3634_, v_a_3635_);
if (lean_obj_tag(v___x_3680_) == 0)
{
lean_object* v_a_3681_; lean_object* v_pieces_3683_; lean_object* v_pieces_3690_; lean_object* v___x_3695_; lean_object* v___x_3696_; lean_object* v___x_3697_; uint8_t v___x_3698_; 
v_a_3681_ = lean_ctor_get(v___x_3680_, 0);
lean_inc(v_a_3681_);
lean_dec_ref_known(v___x_3680_, 1);
v___x_3695_ = lean_unsigned_to_nat(0u);
v___x_3696_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__6));
v___x_3697_ = lean_string_utf8_byte_size(v_fst_3659_);
v___x_3698_ = lean_nat_dec_eq(v___x_3697_, v___x_3695_);
if (v___x_3698_ == 0)
{
lean_object* v___x_3699_; lean_object* v___x_3700_; lean_object* v___x_3701_; lean_object* v___x_3702_; 
v___x_3699_ = lean_unsigned_to_nat(1u);
v___x_3700_ = lean_mk_empty_array_with_capacity(v___x_3699_);
v___x_3701_ = lean_array_push(v___x_3700_, v_fst_3659_);
v___x_3702_ = lean_array_push(v___x_3696_, v___x_3701_);
v_pieces_3690_ = v___x_3702_;
goto v___jp_3689_;
}
else
{
lean_dec(v_fst_3659_);
v_pieces_3690_ = v___x_3696_;
goto v___jp_3689_;
}
v___jp_3682_:
{
lean_object* v___x_3684_; 
v___x_3684_ = lean_array_push(v_pieces_3683_, v_a_3681_);
if (v_inEmph_3671_ == 0)
{
lean_object* v___x_3685_; lean_object* v___x_3686_; lean_object* v___x_3687_; lean_object* v___x_3688_; 
v___x_3685_ = lean_unsigned_to_nat(1u);
v___x_3686_ = lean_mk_empty_array_with_capacity(v___x_3685_);
lean_dec_ref(v___x_3686_);
v___x_3687_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__5));
v___x_3688_ = lean_array_push(v___x_3684_, v___x_3687_);
v_pieces_3663_ = v___x_3688_;
goto v___jp_3662_;
}
else
{
v_pieces_3663_ = v___x_3684_;
goto v___jp_3662_;
}
}
v___jp_3689_:
{
if (v_inEmph_3671_ == 0)
{
lean_object* v___x_3691_; lean_object* v___x_3692_; lean_object* v___x_3693_; lean_object* v___x_3694_; 
v___x_3691_ = lean_unsigned_to_nat(1u);
v___x_3692_ = lean_mk_empty_array_with_capacity(v___x_3691_);
lean_dec_ref(v___x_3692_);
v___x_3693_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__5));
v___x_3694_ = lean_array_push(v_pieces_3690_, v___x_3693_);
v_pieces_3683_ = v___x_3694_;
goto v___jp_3682_;
}
else
{
v_pieces_3683_ = v_pieces_3690_;
goto v___jp_3682_;
}
}
}
else
{
lean_dec(v_snd_3661_);
lean_dec(v_fst_3659_);
return v___x_3680_;
}
}
}
}
}
}
case 2:
{
lean_object* v_content_3707_; lean_object* v___x_3709_; uint8_t v_isShared_3710_; uint8_t v_isSharedCheck_3762_; 
v_content_3707_ = lean_ctor_get(v_x_3632_, 0);
v_isSharedCheck_3762_ = !lean_is_exclusive(v_x_3632_);
if (v_isSharedCheck_3762_ == 0)
{
v___x_3709_ = v_x_3632_;
v_isShared_3710_ = v_isSharedCheck_3762_;
goto v_resetjp_3708_;
}
else
{
lean_inc(v_content_3707_);
lean_dec(v_x_3632_);
v___x_3709_ = lean_box(0);
v_isShared_3710_ = v_isSharedCheck_3762_;
goto v_resetjp_3708_;
}
v_resetjp_3708_:
{
lean_object* v___x_3712_; 
if (v_isShared_3710_ == 0)
{
lean_ctor_set_tag(v___x_3709_, 9);
v___x_3712_ = v___x_3709_;
goto v_reusejp_3711_;
}
else
{
lean_object* v_reuseFailAlloc_3761_; 
v_reuseFailAlloc_3761_ = lean_alloc_ctor(9, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3761_, 0, v_content_3707_);
v___x_3712_ = v_reuseFailAlloc_3761_;
goto v_reusejp_3711_;
}
v_reusejp_3711_:
{
lean_object* v___x_3713_; lean_object* v_snd_3714_; lean_object* v_fst_3715_; lean_object* v_fst_3716_; lean_object* v_snd_3717_; lean_object* v_pieces_3719_; uint8_t v_inEmph_3727_; uint8_t v_inBold_3728_; uint8_t v_inLink_3729_; lean_object* v___x_3731_; uint8_t v_isShared_3732_; uint8_t v_isSharedCheck_3760_; 
v___x_3713_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_trim___redArg(v___x_3712_);
v_snd_3714_ = lean_ctor_get(v___x_3713_, 1);
lean_inc(v_snd_3714_);
v_fst_3715_ = lean_ctor_get(v___x_3713_, 0);
lean_inc(v_fst_3715_);
lean_dec_ref(v___x_3713_);
v_fst_3716_ = lean_ctor_get(v_snd_3714_, 0);
lean_inc(v_fst_3716_);
v_snd_3717_ = lean_ctor_get(v_snd_3714_, 1);
lean_inc(v_snd_3717_);
lean_dec(v_snd_3714_);
v_inEmph_3727_ = lean_ctor_get_uint8(v_x_3631_, 0);
v_inBold_3728_ = lean_ctor_get_uint8(v_x_3631_, 1);
v_inLink_3729_ = lean_ctor_get_uint8(v_x_3631_, 2);
v_isSharedCheck_3760_ = !lean_is_exclusive(v_x_3631_);
if (v_isSharedCheck_3760_ == 0)
{
v___x_3731_ = v_x_3631_;
v_isShared_3732_ = v_isSharedCheck_3760_;
goto v_resetjp_3730_;
}
else
{
lean_dec(v_x_3631_);
v___x_3731_ = lean_box(0);
v_isShared_3732_ = v_isSharedCheck_3760_;
goto v_resetjp_3730_;
}
v___jp_3718_:
{
lean_object* v___x_3720_; lean_object* v___x_3721_; uint8_t v___x_3722_; 
v___x_3720_ = lean_string_utf8_byte_size(v_snd_3717_);
v___x_3721_ = lean_unsigned_to_nat(0u);
v___x_3722_ = lean_nat_dec_eq(v___x_3720_, v___x_3721_);
if (v___x_3722_ == 0)
{
lean_object* v___x_3723_; lean_object* v___x_3724_; lean_object* v___x_3725_; lean_object* v___x_3726_; 
v___x_3723_ = lean_unsigned_to_nat(1u);
v___x_3724_ = lean_mk_empty_array_with_capacity(v___x_3723_);
v___x_3725_ = lean_array_push(v___x_3724_, v_snd_3717_);
v___x_3726_ = lean_array_push(v_pieces_3719_, v___x_3725_);
v_pieces_3638_ = v___x_3726_;
goto v___jp_3637_;
}
else
{
lean_dec(v_snd_3717_);
v_pieces_3638_ = v_pieces_3719_;
goto v___jp_3637_;
}
}
v_resetjp_3730_:
{
uint8_t v___x_3733_; lean_object* v___x_3735_; 
v___x_3733_ = 1;
if (v_isShared_3732_ == 0)
{
v___x_3735_ = v___x_3731_;
goto v_reusejp_3734_;
}
else
{
lean_object* v_reuseFailAlloc_3759_; 
v_reuseFailAlloc_3759_ = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(v_reuseFailAlloc_3759_, 0, v_inEmph_3727_);
lean_ctor_set_uint8(v_reuseFailAlloc_3759_, 2, v_inLink_3729_);
v___x_3735_ = v_reuseFailAlloc_3759_;
goto v_reusejp_3734_;
}
v_reusejp_3734_:
{
lean_object* v___x_3736_; 
lean_ctor_set_uint8(v___x_3735_, 1, v___x_3733_);
v___x_3736_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0(v___x_3735_, v_fst_3716_, v_a_3633_, v_a_3634_, v_a_3635_);
if (lean_obj_tag(v___x_3736_) == 0)
{
lean_object* v_a_3737_; lean_object* v_pieces_3739_; lean_object* v_pieces_3746_; lean_object* v___x_3751_; lean_object* v___x_3752_; lean_object* v___x_3753_; uint8_t v___x_3754_; 
v_a_3737_ = lean_ctor_get(v___x_3736_, 0);
lean_inc(v_a_3737_);
lean_dec_ref_known(v___x_3736_, 1);
v___x_3751_ = lean_unsigned_to_nat(0u);
v___x_3752_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__6));
v___x_3753_ = lean_string_utf8_byte_size(v_fst_3715_);
v___x_3754_ = lean_nat_dec_eq(v___x_3753_, v___x_3751_);
if (v___x_3754_ == 0)
{
lean_object* v___x_3755_; lean_object* v___x_3756_; lean_object* v___x_3757_; lean_object* v___x_3758_; 
v___x_3755_ = lean_unsigned_to_nat(1u);
v___x_3756_ = lean_mk_empty_array_with_capacity(v___x_3755_);
v___x_3757_ = lean_array_push(v___x_3756_, v_fst_3715_);
v___x_3758_ = lean_array_push(v___x_3752_, v___x_3757_);
v_pieces_3746_ = v___x_3758_;
goto v___jp_3745_;
}
else
{
lean_dec(v_fst_3715_);
v_pieces_3746_ = v___x_3752_;
goto v___jp_3745_;
}
v___jp_3738_:
{
lean_object* v___x_3740_; 
v___x_3740_ = lean_array_push(v_pieces_3739_, v_a_3737_);
if (v_inBold_3728_ == 0)
{
lean_object* v___x_3741_; lean_object* v___x_3742_; lean_object* v___x_3743_; lean_object* v___x_3744_; 
v___x_3741_ = lean_unsigned_to_nat(1u);
v___x_3742_ = lean_mk_empty_array_with_capacity(v___x_3741_);
lean_dec_ref(v___x_3742_);
v___x_3743_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__8));
v___x_3744_ = lean_array_push(v___x_3740_, v___x_3743_);
v_pieces_3719_ = v___x_3744_;
goto v___jp_3718_;
}
else
{
v_pieces_3719_ = v___x_3740_;
goto v___jp_3718_;
}
}
v___jp_3745_:
{
if (v_inBold_3728_ == 0)
{
lean_object* v___x_3747_; lean_object* v___x_3748_; lean_object* v___x_3749_; lean_object* v___x_3750_; 
v___x_3747_ = lean_unsigned_to_nat(1u);
v___x_3748_ = lean_mk_empty_array_with_capacity(v___x_3747_);
lean_dec_ref(v___x_3748_);
v___x_3749_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__8));
v___x_3750_ = lean_array_push(v_pieces_3746_, v___x_3749_);
v_pieces_3739_ = v___x_3750_;
goto v___jp_3738_;
}
else
{
v_pieces_3739_ = v_pieces_3746_;
goto v___jp_3738_;
}
}
}
else
{
lean_dec(v_snd_3717_);
lean_dec(v_fst_3715_);
return v___x_3736_;
}
}
}
}
}
}
case 3:
{
lean_object* v_string_3763_; lean_object* v___x_3764_; lean_object* v___x_3765_; lean_object* v___x_3766_; lean_object* v___x_3767_; lean_object* v___x_3768_; 
lean_dec_ref(v_x_3631_);
v_string_3763_ = lean_ctor_get(v_x_3632_, 0);
lean_inc_ref(v_string_3763_);
lean_dec_ref_known(v_x_3632_, 1);
v___x_3764_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_quoteCode(v_string_3763_);
v___x_3765_ = lean_unsigned_to_nat(1u);
v___x_3766_ = lean_mk_empty_array_with_capacity(v___x_3765_);
v___x_3767_ = lean_array_push(v___x_3766_, v___x_3764_);
v___x_3768_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3768_, 0, v___x_3767_);
return v___x_3768_;
}
case 4:
{
uint8_t v_mode_3769_; 
lean_dec_ref(v_x_3631_);
v_mode_3769_ = lean_ctor_get_uint8(v_x_3632_, sizeof(void*)*1);
if (v_mode_3769_ == 0)
{
lean_object* v_string_3770_; lean_object* v___x_3771_; lean_object* v___x_3772_; lean_object* v___x_3773_; lean_object* v___x_3774_; lean_object* v___x_3775_; lean_object* v___x_3776_; lean_object* v___x_3777_; 
v_string_3770_ = lean_ctor_get(v_x_3632_, 0);
lean_inc_ref(v_string_3770_);
lean_dec_ref_known(v_x_3632_, 1);
v___x_3771_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__9));
v___x_3772_ = lean_string_append(v___x_3771_, v_string_3770_);
lean_dec_ref(v_string_3770_);
v___x_3773_ = lean_string_append(v___x_3772_, v___x_3771_);
v___x_3774_ = lean_unsigned_to_nat(1u);
v___x_3775_ = lean_mk_empty_array_with_capacity(v___x_3774_);
v___x_3776_ = lean_array_push(v___x_3775_, v___x_3773_);
v___x_3777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3777_, 0, v___x_3776_);
return v___x_3777_;
}
else
{
lean_object* v_string_3778_; lean_object* v___x_3779_; lean_object* v___x_3780_; lean_object* v___x_3781_; lean_object* v___x_3782_; lean_object* v___x_3783_; lean_object* v___x_3784_; lean_object* v___x_3785_; 
v_string_3778_ = lean_ctor_get(v_x_3632_, 0);
lean_inc_ref(v_string_3778_);
lean_dec_ref_known(v_x_3632_, 1);
v___x_3779_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__10));
v___x_3780_ = lean_string_append(v___x_3779_, v_string_3778_);
lean_dec_ref(v_string_3778_);
v___x_3781_ = lean_string_append(v___x_3780_, v___x_3779_);
v___x_3782_ = lean_unsigned_to_nat(1u);
v___x_3783_ = lean_mk_empty_array_with_capacity(v___x_3782_);
v___x_3784_ = lean_array_push(v___x_3783_, v___x_3781_);
v___x_3785_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3785_, 0, v___x_3784_);
return v___x_3785_;
}
}
case 5:
{
lean_object* v___x_3786_; lean_object* v___x_3787_; lean_object* v___x_3788_; lean_object* v___x_3789_; 
lean_dec_ref_known(v_x_3632_, 1);
lean_dec_ref(v_x_3631_);
v___x_3786_ = lean_unsigned_to_nat(2u);
v___x_3787_ = lean_mk_empty_array_with_capacity(v___x_3786_);
lean_dec_ref(v___x_3787_);
v___x_3788_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__11));
v___x_3789_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3789_, 0, v___x_3788_);
return v___x_3789_;
}
case 6:
{
uint8_t v_inLink_3790_; 
v_inLink_3790_ = lean_ctor_get_uint8(v_x_3631_, 2);
if (v_inLink_3790_ == 0)
{
lean_object* v_content_3791_; lean_object* v_url_3792_; uint8_t v_inEmph_3793_; uint8_t v_inBold_3794_; lean_object* v___x_3796_; uint8_t v_isShared_3797_; uint8_t v_isSharedCheck_3825_; 
v_content_3791_ = lean_ctor_get(v_x_3632_, 0);
lean_inc_ref(v_content_3791_);
v_url_3792_ = lean_ctor_get(v_x_3632_, 1);
lean_inc_ref(v_url_3792_);
lean_dec_ref_known(v_x_3632_, 2);
v_inEmph_3793_ = lean_ctor_get_uint8(v_x_3631_, 0);
v_inBold_3794_ = lean_ctor_get_uint8(v_x_3631_, 1);
v_isSharedCheck_3825_ = !lean_is_exclusive(v_x_3631_);
if (v_isSharedCheck_3825_ == 0)
{
v___x_3796_ = v_x_3631_;
v_isShared_3797_ = v_isSharedCheck_3825_;
goto v_resetjp_3795_;
}
else
{
lean_dec(v_x_3631_);
v___x_3796_ = lean_box(0);
v_isShared_3797_ = v_isSharedCheck_3825_;
goto v_resetjp_3795_;
}
v_resetjp_3795_:
{
uint8_t v___x_3798_; lean_object* v___x_3800_; 
v___x_3798_ = 1;
if (v_isShared_3797_ == 0)
{
v___x_3800_ = v___x_3796_;
goto v_reusejp_3799_;
}
else
{
lean_object* v_reuseFailAlloc_3824_; 
v_reuseFailAlloc_3824_ = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(v_reuseFailAlloc_3824_, 0, v_inEmph_3793_);
lean_ctor_set_uint8(v_reuseFailAlloc_3824_, 1, v_inBold_3794_);
v___x_3800_ = v_reuseFailAlloc_3824_;
goto v_reusejp_3799_;
}
v_reusejp_3799_:
{
lean_object* v___x_3801_; lean_object* v___x_3802_; 
lean_ctor_set_uint8(v___x_3800_, 2, v___x_3798_);
v___x_3801_ = lean_alloc_ctor(9, 1, 0);
lean_ctor_set(v___x_3801_, 0, v_content_3791_);
v___x_3802_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0(v___x_3800_, v___x_3801_, v_a_3633_, v_a_3634_, v_a_3635_);
if (lean_obj_tag(v___x_3802_) == 0)
{
lean_object* v_a_3803_; lean_object* v___x_3805_; uint8_t v_isShared_3806_; uint8_t v_isSharedCheck_3823_; 
v_a_3803_ = lean_ctor_get(v___x_3802_, 0);
v_isSharedCheck_3823_ = !lean_is_exclusive(v___x_3802_);
if (v_isSharedCheck_3823_ == 0)
{
v___x_3805_ = v___x_3802_;
v_isShared_3806_ = v_isSharedCheck_3823_;
goto v_resetjp_3804_;
}
else
{
lean_inc(v_a_3803_);
lean_dec(v___x_3802_);
v___x_3805_ = lean_box(0);
v_isShared_3806_ = v_isSharedCheck_3823_;
goto v_resetjp_3804_;
}
v_resetjp_3804_:
{
lean_object* v___x_3807_; lean_object* v___x_3808_; lean_object* v___x_3809_; lean_object* v___x_3810_; lean_object* v___x_3811_; lean_object* v___x_3812_; lean_object* v___x_3813_; lean_object* v___x_3814_; lean_object* v___x_3815_; lean_object* v___x_3816_; lean_object* v___x_3817_; lean_object* v___x_3818_; lean_object* v___x_3819_; lean_object* v___x_3821_; 
v___x_3807_ = lean_unsigned_to_nat(1u);
v___x_3808_ = lean_mk_empty_array_with_capacity(v___x_3807_);
v___x_3809_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__14));
v___x_3810_ = lean_string_append(v___x_3809_, v_url_3792_);
lean_dec_ref(v_url_3792_);
v___x_3811_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__15));
v___x_3812_ = lean_string_append(v___x_3810_, v___x_3811_);
v___x_3813_ = lean_array_push(v___x_3808_, v___x_3812_);
v___x_3814_ = lean_unsigned_to_nat(3u);
v___x_3815_ = lean_mk_empty_array_with_capacity(v___x_3814_);
lean_dec_ref(v___x_3815_);
v___x_3816_ = lean_obj_once(&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__16, &l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__16_once, _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__16);
v___x_3817_ = lean_array_push(v___x_3816_, v_a_3803_);
v___x_3818_ = lean_array_push(v___x_3817_, v___x_3813_);
v___x_3819_ = l_Lean_Doc_joinInlines(v___x_3818_);
lean_dec_ref(v___x_3818_);
if (v_isShared_3806_ == 0)
{
lean_ctor_set(v___x_3805_, 0, v___x_3819_);
v___x_3821_ = v___x_3805_;
goto v_reusejp_3820_;
}
else
{
lean_object* v_reuseFailAlloc_3822_; 
v_reuseFailAlloc_3822_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3822_, 0, v___x_3819_);
v___x_3821_ = v_reuseFailAlloc_3822_;
goto v_reusejp_3820_;
}
v_reusejp_3820_:
{
return v___x_3821_;
}
}
}
else
{
lean_dec_ref(v_url_3792_);
return v___x_3802_;
}
}
}
}
else
{
lean_object* v_content_3826_; size_t v_sz_3827_; lean_object* v___x_3828_; lean_object* v___x_3829_; lean_object* v___x_3830_; lean_object* v___x_3831_; lean_object* v___x_4046__overap_3832_; lean_object* v___x_3833_; 
v_content_3826_ = lean_ctor_get(v_x_3632_, 0);
lean_inc_ref(v_content_3826_);
lean_dec_ref_known(v_x_3632_, 2);
v_sz_3827_ = lean_array_size(v_content_3826_);
v___x_3828_ = l_unsafeCast___redArg(v_content_3826_);
lean_dec_ref(v_content_3826_);
v___x_3829_ = lean_box_usize(v_sz_3827_);
v___x_3830_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0___boxed__const__1));
v___x_3831_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0_spec__1___boxed), 8, 4);
lean_closure_set(v___x_3831_, 0, v_x_3631_);
lean_closure_set(v___x_3831_, 1, v___x_3829_);
lean_closure_set(v___x_3831_, 2, v___x_3830_);
lean_closure_set(v___x_3831_, 3, v___x_3828_);
v___x_4046__overap_3832_ = l_unsafeCast___redArg(v___x_3831_);
lean_dec_ref(v___x_3831_);
lean_inc(v_a_3635_);
lean_inc_ref(v_a_3634_);
lean_inc(v_a_3633_);
v___x_3833_ = lean_apply_4(v___x_4046__overap_3832_, v_a_3633_, v_a_3634_, v_a_3635_, lean_box(0));
if (lean_obj_tag(v___x_3833_) == 0)
{
lean_object* v_a_3834_; lean_object* v___x_3836_; uint8_t v_isShared_3837_; uint8_t v_isSharedCheck_3842_; 
v_a_3834_ = lean_ctor_get(v___x_3833_, 0);
v_isSharedCheck_3842_ = !lean_is_exclusive(v___x_3833_);
if (v_isSharedCheck_3842_ == 0)
{
v___x_3836_ = v___x_3833_;
v_isShared_3837_ = v_isSharedCheck_3842_;
goto v_resetjp_3835_;
}
else
{
lean_inc(v_a_3834_);
lean_dec(v___x_3833_);
v___x_3836_ = lean_box(0);
v_isShared_3837_ = v_isSharedCheck_3842_;
goto v_resetjp_3835_;
}
v_resetjp_3835_:
{
lean_object* v___x_3838_; lean_object* v___x_3840_; 
v___x_3838_ = l_Lean_Doc_joinInlines(v_a_3834_);
lean_dec(v_a_3834_);
if (v_isShared_3837_ == 0)
{
lean_ctor_set(v___x_3836_, 0, v___x_3838_);
v___x_3840_ = v___x_3836_;
goto v_reusejp_3839_;
}
else
{
lean_object* v_reuseFailAlloc_3841_; 
v_reuseFailAlloc_3841_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3841_, 0, v___x_3838_);
v___x_3840_ = v_reuseFailAlloc_3841_;
goto v_reusejp_3839_;
}
v_reusejp_3839_:
{
return v___x_3840_;
}
}
}
else
{
lean_object* v_a_3843_; lean_object* v___x_3845_; uint8_t v_isShared_3846_; uint8_t v_isSharedCheck_3850_; 
v_a_3843_ = lean_ctor_get(v___x_3833_, 0);
v_isSharedCheck_3850_ = !lean_is_exclusive(v___x_3833_);
if (v_isSharedCheck_3850_ == 0)
{
v___x_3845_ = v___x_3833_;
v_isShared_3846_ = v_isSharedCheck_3850_;
goto v_resetjp_3844_;
}
else
{
lean_inc(v_a_3843_);
lean_dec(v___x_3833_);
v___x_3845_ = lean_box(0);
v_isShared_3846_ = v_isSharedCheck_3850_;
goto v_resetjp_3844_;
}
v_resetjp_3844_:
{
lean_object* v___x_3848_; 
if (v_isShared_3846_ == 0)
{
v___x_3848_ = v___x_3845_;
goto v_reusejp_3847_;
}
else
{
lean_object* v_reuseFailAlloc_3849_; 
v_reuseFailAlloc_3849_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3849_, 0, v_a_3843_);
v___x_3848_ = v_reuseFailAlloc_3849_;
goto v_reusejp_3847_;
}
v_reusejp_3847_:
{
return v___x_3848_;
}
}
}
}
}
case 7:
{
lean_object* v_name_3851_; lean_object* v_content_3852_; size_t v_sz_3853_; lean_object* v___x_3854_; lean_object* v___x_3855_; lean_object* v___x_3856_; lean_object* v___x_3857_; lean_object* v___x_4049__overap_3858_; lean_object* v___x_3859_; 
v_name_3851_ = lean_ctor_get(v_x_3632_, 0);
lean_inc_ref(v_name_3851_);
v_content_3852_ = lean_ctor_get(v_x_3632_, 1);
lean_inc_ref(v_content_3852_);
lean_dec_ref_known(v_x_3632_, 2);
v_sz_3853_ = lean_array_size(v_content_3852_);
v___x_3854_ = l_unsafeCast___redArg(v_content_3852_);
lean_dec_ref(v_content_3852_);
v___x_3855_ = lean_box_usize(v_sz_3853_);
v___x_3856_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0___boxed__const__1));
v___x_3857_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0_spec__1___boxed), 8, 4);
lean_closure_set(v___x_3857_, 0, v_x_3631_);
lean_closure_set(v___x_3857_, 1, v___x_3855_);
lean_closure_set(v___x_3857_, 2, v___x_3856_);
lean_closure_set(v___x_3857_, 3, v___x_3854_);
v___x_4049__overap_3858_ = l_unsafeCast___redArg(v___x_3857_);
lean_dec_ref(v___x_3857_);
lean_inc(v_a_3635_);
lean_inc_ref(v_a_3634_);
lean_inc(v_a_3633_);
v___x_3859_ = lean_apply_4(v___x_4049__overap_3858_, v_a_3633_, v_a_3634_, v_a_3635_, lean_box(0));
if (lean_obj_tag(v___x_3859_) == 0)
{
lean_object* v_a_3860_; lean_object* v___x_3861_; lean_object* v___x_3862_; lean_object* v___x_3863_; lean_object* v___x_3864_; lean_object* v___x_3865_; 
v_a_3860_ = lean_ctor_get(v___x_3859_, 0);
lean_inc(v_a_3860_);
lean_dec_ref_known(v___x_3859_, 1);
v___x_3861_ = ((lean_object*)(l_Lean_Doc_MarkdownM_run_x27___closed__1));
v___x_3862_ = l_Lean_Doc_joinInlines(v_a_3860_);
lean_dec(v_a_3860_);
v___x_3863_ = lean_array_to_list(v___x_3862_);
v___x_3864_ = l_String_intercalate(v___x_3861_, v___x_3863_);
lean_inc_ref(v_name_3851_);
v___x_3865_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_MarkdownM_addFootnote___redArg(v_name_3851_, v___x_3864_, v_a_3633_);
if (lean_obj_tag(v___x_3865_) == 0)
{
lean_object* v___x_3867_; uint8_t v_isShared_3868_; uint8_t v_isSharedCheck_3879_; 
v_isSharedCheck_3879_ = !lean_is_exclusive(v___x_3865_);
if (v_isSharedCheck_3879_ == 0)
{
lean_object* v_unused_3880_; 
v_unused_3880_ = lean_ctor_get(v___x_3865_, 0);
lean_dec(v_unused_3880_);
v___x_3867_ = v___x_3865_;
v_isShared_3868_ = v_isSharedCheck_3879_;
goto v_resetjp_3866_;
}
else
{
lean_dec(v___x_3865_);
v___x_3867_ = lean_box(0);
v_isShared_3868_ = v_isSharedCheck_3879_;
goto v_resetjp_3866_;
}
v_resetjp_3866_:
{
lean_object* v___x_3869_; lean_object* v___x_3870_; lean_object* v___x_3871_; lean_object* v___x_3872_; lean_object* v___x_3873_; lean_object* v___x_3874_; lean_object* v___x_3875_; lean_object* v___x_3877_; 
v___x_3869_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Doc_MarkdownM_run_x27_spec__0___closed__0));
v___x_3870_ = lean_string_append(v___x_3869_, v_name_3851_);
lean_dec_ref(v_name_3851_);
v___x_3871_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__17));
v___x_3872_ = lean_string_append(v___x_3870_, v___x_3871_);
v___x_3873_ = lean_unsigned_to_nat(1u);
v___x_3874_ = lean_mk_empty_array_with_capacity(v___x_3873_);
v___x_3875_ = lean_array_push(v___x_3874_, v___x_3872_);
if (v_isShared_3868_ == 0)
{
lean_ctor_set(v___x_3867_, 0, v___x_3875_);
v___x_3877_ = v___x_3867_;
goto v_reusejp_3876_;
}
else
{
lean_object* v_reuseFailAlloc_3878_; 
v_reuseFailAlloc_3878_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3878_, 0, v___x_3875_);
v___x_3877_ = v_reuseFailAlloc_3878_;
goto v_reusejp_3876_;
}
v_reusejp_3876_:
{
return v___x_3877_;
}
}
}
else
{
lean_object* v_a_3881_; lean_object* v___x_3883_; uint8_t v_isShared_3884_; uint8_t v_isSharedCheck_3888_; 
lean_dec_ref(v_name_3851_);
v_a_3881_ = lean_ctor_get(v___x_3865_, 0);
v_isSharedCheck_3888_ = !lean_is_exclusive(v___x_3865_);
if (v_isSharedCheck_3888_ == 0)
{
v___x_3883_ = v___x_3865_;
v_isShared_3884_ = v_isSharedCheck_3888_;
goto v_resetjp_3882_;
}
else
{
lean_inc(v_a_3881_);
lean_dec(v___x_3865_);
v___x_3883_ = lean_box(0);
v_isShared_3884_ = v_isSharedCheck_3888_;
goto v_resetjp_3882_;
}
v_resetjp_3882_:
{
lean_object* v___x_3886_; 
if (v_isShared_3884_ == 0)
{
v___x_3886_ = v___x_3883_;
goto v_reusejp_3885_;
}
else
{
lean_object* v_reuseFailAlloc_3887_; 
v_reuseFailAlloc_3887_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3887_, 0, v_a_3881_);
v___x_3886_ = v_reuseFailAlloc_3887_;
goto v_reusejp_3885_;
}
v_reusejp_3885_:
{
return v___x_3886_;
}
}
}
}
else
{
lean_object* v_a_3889_; lean_object* v___x_3891_; uint8_t v_isShared_3892_; uint8_t v_isSharedCheck_3896_; 
lean_dec_ref(v_name_3851_);
v_a_3889_ = lean_ctor_get(v___x_3859_, 0);
v_isSharedCheck_3896_ = !lean_is_exclusive(v___x_3859_);
if (v_isSharedCheck_3896_ == 0)
{
v___x_3891_ = v___x_3859_;
v_isShared_3892_ = v_isSharedCheck_3896_;
goto v_resetjp_3890_;
}
else
{
lean_inc(v_a_3889_);
lean_dec(v___x_3859_);
v___x_3891_ = lean_box(0);
v_isShared_3892_ = v_isSharedCheck_3896_;
goto v_resetjp_3890_;
}
v_resetjp_3890_:
{
lean_object* v___x_3894_; 
if (v_isShared_3892_ == 0)
{
v___x_3894_ = v___x_3891_;
goto v_reusejp_3893_;
}
else
{
lean_object* v_reuseFailAlloc_3895_; 
v_reuseFailAlloc_3895_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3895_, 0, v_a_3889_);
v___x_3894_ = v_reuseFailAlloc_3895_;
goto v_reusejp_3893_;
}
v_reusejp_3893_:
{
return v___x_3894_;
}
}
}
}
case 8:
{
lean_object* v_alt_3897_; lean_object* v_url_3898_; lean_object* v___x_3899_; lean_object* v___x_3900_; lean_object* v___x_3901_; lean_object* v___x_3902_; lean_object* v___x_3903_; lean_object* v___x_3904_; lean_object* v___x_3905_; lean_object* v___x_3906_; lean_object* v___x_3907_; lean_object* v___x_3908_; lean_object* v___x_3909_; lean_object* v___x_3910_; 
lean_dec_ref(v_x_3631_);
v_alt_3897_ = lean_ctor_get(v_x_3632_, 0);
lean_inc_ref(v_alt_3897_);
v_url_3898_ = lean_ctor_get(v_x_3632_, 1);
lean_inc_ref(v_url_3898_);
lean_dec_ref_known(v_x_3632_, 2);
v___x_3899_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__18));
v___x_3900_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_escape(v_alt_3897_);
lean_dec_ref(v_alt_3897_);
v___x_3901_ = lean_string_append(v___x_3899_, v___x_3900_);
lean_dec_ref(v___x_3900_);
v___x_3902_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__14));
v___x_3903_ = lean_string_append(v___x_3901_, v___x_3902_);
v___x_3904_ = lean_string_append(v___x_3903_, v_url_3898_);
lean_dec_ref(v_url_3898_);
v___x_3905_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__15));
v___x_3906_ = lean_string_append(v___x_3904_, v___x_3905_);
v___x_3907_ = lean_unsigned_to_nat(1u);
v___x_3908_ = lean_mk_empty_array_with_capacity(v___x_3907_);
v___x_3909_ = lean_array_push(v___x_3908_, v___x_3906_);
v___x_3910_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3910_, 0, v___x_3909_);
return v___x_3910_;
}
case 9:
{
lean_object* v_content_3911_; size_t v_sz_3912_; lean_object* v___x_3913_; lean_object* v___x_3914_; lean_object* v___x_3915_; lean_object* v___x_3916_; lean_object* v___x_4053__overap_3917_; lean_object* v___x_3918_; 
v_content_3911_ = lean_ctor_get(v_x_3632_, 0);
lean_inc_ref(v_content_3911_);
lean_dec_ref_known(v_x_3632_, 1);
v_sz_3912_ = lean_array_size(v_content_3911_);
v___x_3913_ = l_unsafeCast___redArg(v_content_3911_);
lean_dec_ref(v_content_3911_);
v___x_3914_ = lean_box_usize(v_sz_3912_);
v___x_3915_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0___boxed__const__1));
v___x_3916_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0_spec__1___boxed), 8, 4);
lean_closure_set(v___x_3916_, 0, v_x_3631_);
lean_closure_set(v___x_3916_, 1, v___x_3914_);
lean_closure_set(v___x_3916_, 2, v___x_3915_);
lean_closure_set(v___x_3916_, 3, v___x_3913_);
v___x_4053__overap_3917_ = l_unsafeCast___redArg(v___x_3916_);
lean_dec_ref(v___x_3916_);
lean_inc(v_a_3635_);
lean_inc_ref(v_a_3634_);
lean_inc(v_a_3633_);
v___x_3918_ = lean_apply_4(v___x_4053__overap_3917_, v_a_3633_, v_a_3634_, v_a_3635_, lean_box(0));
if (lean_obj_tag(v___x_3918_) == 0)
{
lean_object* v_a_3919_; lean_object* v___x_3921_; uint8_t v_isShared_3922_; uint8_t v_isSharedCheck_3927_; 
v_a_3919_ = lean_ctor_get(v___x_3918_, 0);
v_isSharedCheck_3927_ = !lean_is_exclusive(v___x_3918_);
if (v_isSharedCheck_3927_ == 0)
{
v___x_3921_ = v___x_3918_;
v_isShared_3922_ = v_isSharedCheck_3927_;
goto v_resetjp_3920_;
}
else
{
lean_inc(v_a_3919_);
lean_dec(v___x_3918_);
v___x_3921_ = lean_box(0);
v_isShared_3922_ = v_isSharedCheck_3927_;
goto v_resetjp_3920_;
}
v_resetjp_3920_:
{
lean_object* v___x_3923_; lean_object* v___x_3925_; 
v___x_3923_ = l_Lean_Doc_joinInlines(v_a_3919_);
lean_dec(v_a_3919_);
if (v_isShared_3922_ == 0)
{
lean_ctor_set(v___x_3921_, 0, v___x_3923_);
v___x_3925_ = v___x_3921_;
goto v_reusejp_3924_;
}
else
{
lean_object* v_reuseFailAlloc_3926_; 
v_reuseFailAlloc_3926_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3926_, 0, v___x_3923_);
v___x_3925_ = v_reuseFailAlloc_3926_;
goto v_reusejp_3924_;
}
v_reusejp_3924_:
{
return v___x_3925_;
}
}
}
else
{
lean_object* v_a_3928_; lean_object* v___x_3930_; uint8_t v_isShared_3931_; uint8_t v_isSharedCheck_3935_; 
v_a_3928_ = lean_ctor_get(v___x_3918_, 0);
v_isSharedCheck_3935_ = !lean_is_exclusive(v___x_3918_);
if (v_isSharedCheck_3935_ == 0)
{
v___x_3930_ = v___x_3918_;
v_isShared_3931_ = v_isSharedCheck_3935_;
goto v_resetjp_3929_;
}
else
{
lean_inc(v_a_3928_);
lean_dec(v___x_3918_);
v___x_3930_ = lean_box(0);
v_isShared_3931_ = v_isSharedCheck_3935_;
goto v_resetjp_3929_;
}
v_resetjp_3929_:
{
lean_object* v___x_3933_; 
if (v_isShared_3931_ == 0)
{
v___x_3933_ = v___x_3930_;
goto v_reusejp_3932_;
}
else
{
lean_object* v_reuseFailAlloc_3934_; 
v_reuseFailAlloc_3934_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3934_, 0, v_a_3928_);
v___x_3933_ = v_reuseFailAlloc_3934_;
goto v_reusejp_3932_;
}
v_reusejp_3932_:
{
return v___x_3933_;
}
}
}
}
default: 
{
lean_object* v_container_3936_; 
v_container_3936_ = lean_ctor_get(v_x_3632_, 0);
if (lean_obj_tag(v_container_3936_) == 0)
{
lean_object* v_content_3937_; lean_object* v_val_3938_; lean_object* v___f_3939_; size_t v_sz_3940_; lean_object* v___x_3941_; lean_object* v___x_3942_; lean_object* v___x_3943_; lean_object* v___x_3944_; lean_object* v_fallback_3945_; lean_object* v___x_3946_; lean_object* v___x_3947_; 
lean_inc_ref(v_container_3936_);
v_content_3937_ = lean_ctor_get(v_x_3632_, 1);
lean_inc_ref(v_content_3937_);
lean_dec_ref_known(v_x_3632_, 2);
v_val_3938_ = lean_ctor_get(v_container_3936_, 0);
lean_inc(v_val_3938_);
lean_dec_ref_known(v_container_3936_, 1);
lean_inc_ref(v_x_3631_);
v___f_3939_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0___lam__0___boxed), 6, 1);
lean_closure_set(v___f_3939_, 0, v_x_3631_);
v_sz_3940_ = lean_array_size(v_content_3937_);
v___x_3941_ = l_unsafeCast___redArg(v_content_3937_);
v___x_3942_ = lean_box_usize(v_sz_3940_);
v___x_3943_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0___boxed__const__1));
v___x_3944_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0_spec__1___boxed), 8, 4);
lean_closure_set(v___x_3944_, 0, v_x_3631_);
lean_closure_set(v___x_3944_, 1, v___x_3942_);
lean_closure_set(v___x_3944_, 2, v___x_3943_);
lean_closure_set(v___x_3944_, 3, v___x_3941_);
lean_inc_ref(v___x_3944_);
v_fallback_3945_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0___lam__1___boxed), 5, 1);
lean_closure_set(v_fallback_3945_, 0, v___x_3944_);
v___x_3946_ = l___private_Init_Dynamic_0__Dynamic_typeNameImpl(v_val_3938_);
v___x_3947_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe(v___x_3946_, v_a_3634_, v_a_3635_);
lean_dec(v___x_3946_);
if (lean_obj_tag(v___x_3947_) == 0)
{
lean_object* v_a_3948_; 
v_a_3948_ = lean_ctor_get(v___x_3947_, 0);
lean_inc(v_a_3948_);
lean_dec_ref_known(v___x_3947_, 1);
if (lean_obj_tag(v_a_3948_) == 0)
{
lean_object* v___x_4058__overap_3949_; lean_object* v___x_3950_; 
lean_dec_ref(v_fallback_3945_);
lean_dec_ref(v___f_3939_);
lean_dec(v_val_3938_);
lean_dec_ref(v_content_3937_);
v___x_4058__overap_3949_ = l_unsafeCast___redArg(v___x_3944_);
lean_dec_ref(v___x_3944_);
lean_inc(v_a_3635_);
lean_inc_ref(v_a_3634_);
lean_inc(v_a_3633_);
v___x_3950_ = lean_apply_4(v___x_4058__overap_3949_, v_a_3633_, v_a_3634_, v_a_3635_, lean_box(0));
if (lean_obj_tag(v___x_3950_) == 0)
{
lean_object* v_a_3951_; lean_object* v___x_3953_; uint8_t v_isShared_3954_; uint8_t v_isSharedCheck_3959_; 
v_a_3951_ = lean_ctor_get(v___x_3950_, 0);
v_isSharedCheck_3959_ = !lean_is_exclusive(v___x_3950_);
if (v_isSharedCheck_3959_ == 0)
{
v___x_3953_ = v___x_3950_;
v_isShared_3954_ = v_isSharedCheck_3959_;
goto v_resetjp_3952_;
}
else
{
lean_inc(v_a_3951_);
lean_dec(v___x_3950_);
v___x_3953_ = lean_box(0);
v_isShared_3954_ = v_isSharedCheck_3959_;
goto v_resetjp_3952_;
}
v_resetjp_3952_:
{
lean_object* v___x_3955_; lean_object* v___x_3957_; 
v___x_3955_ = l_Lean_Doc_joinInlines(v_a_3951_);
lean_dec(v_a_3951_);
if (v_isShared_3954_ == 0)
{
lean_ctor_set(v___x_3953_, 0, v___x_3955_);
v___x_3957_ = v___x_3953_;
goto v_reusejp_3956_;
}
else
{
lean_object* v_reuseFailAlloc_3958_; 
v_reuseFailAlloc_3958_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3958_, 0, v___x_3955_);
v___x_3957_ = v_reuseFailAlloc_3958_;
goto v_reusejp_3956_;
}
v_reusejp_3956_:
{
return v___x_3957_;
}
}
}
else
{
lean_object* v_a_3960_; lean_object* v___x_3962_; uint8_t v_isShared_3963_; uint8_t v_isSharedCheck_3967_; 
v_a_3960_ = lean_ctor_get(v___x_3950_, 0);
v_isSharedCheck_3967_ = !lean_is_exclusive(v___x_3950_);
if (v_isSharedCheck_3967_ == 0)
{
v___x_3962_ = v___x_3950_;
v_isShared_3963_ = v_isSharedCheck_3967_;
goto v_resetjp_3961_;
}
else
{
lean_inc(v_a_3960_);
lean_dec(v___x_3950_);
v___x_3962_ = lean_box(0);
v_isShared_3963_ = v_isSharedCheck_3967_;
goto v_resetjp_3961_;
}
v_resetjp_3961_:
{
lean_object* v___x_3965_; 
if (v_isShared_3963_ == 0)
{
v___x_3965_ = v___x_3962_;
goto v_reusejp_3964_;
}
else
{
lean_object* v_reuseFailAlloc_3966_; 
v_reuseFailAlloc_3966_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3966_, 0, v_a_3960_);
v___x_3965_ = v_reuseFailAlloc_3966_;
goto v_reusejp_3964_;
}
v_reusejp_3964_:
{
return v___x_3965_;
}
}
}
}
else
{
lean_object* v_val_3968_; lean_object* v___x_3969_; lean_object* v___x_3970_; 
lean_dec_ref(v___x_3944_);
v_val_3968_ = lean_ctor_get(v_a_3948_, 0);
lean_inc(v_val_3968_);
lean_dec_ref_known(v_a_3948_, 1);
v___x_3969_ = lean_apply_3(v_val_3968_, v___f_3939_, v_val_3938_, v_content_3937_);
v___x_3970_ = l_Lean_Doc_withRendererFallback(v_fallback_3945_, v___x_3969_, v_a_3633_, v_a_3634_, v_a_3635_);
return v___x_3970_;
}
}
else
{
lean_object* v_a_3971_; lean_object* v___x_3973_; uint8_t v_isShared_3974_; uint8_t v_isSharedCheck_3978_; 
lean_dec_ref(v_fallback_3945_);
lean_dec_ref(v___x_3944_);
lean_dec_ref(v___f_3939_);
lean_dec(v_val_3938_);
lean_dec_ref(v_content_3937_);
v_a_3971_ = lean_ctor_get(v___x_3947_, 0);
v_isSharedCheck_3978_ = !lean_is_exclusive(v___x_3947_);
if (v_isSharedCheck_3978_ == 0)
{
v___x_3973_ = v___x_3947_;
v_isShared_3974_ = v_isSharedCheck_3978_;
goto v_resetjp_3972_;
}
else
{
lean_inc(v_a_3971_);
lean_dec(v___x_3947_);
v___x_3973_ = lean_box(0);
v_isShared_3974_ = v_isSharedCheck_3978_;
goto v_resetjp_3972_;
}
v_resetjp_3972_:
{
lean_object* v___x_3976_; 
if (v_isShared_3974_ == 0)
{
v___x_3976_ = v___x_3973_;
goto v_reusejp_3975_;
}
else
{
lean_object* v_reuseFailAlloc_3977_; 
v_reuseFailAlloc_3977_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3977_, 0, v_a_3971_);
v___x_3976_ = v_reuseFailAlloc_3977_;
goto v_reusejp_3975_;
}
v_reusejp_3975_:
{
return v___x_3976_;
}
}
}
}
else
{
lean_object* v_content_3979_; size_t v_sz_3980_; lean_object* v___x_3981_; lean_object* v___x_3982_; lean_object* v___x_3983_; lean_object* v___x_3984_; lean_object* v___x_4061__overap_3985_; lean_object* v___x_3986_; 
v_content_3979_ = lean_ctor_get(v_x_3632_, 1);
lean_inc_ref(v_content_3979_);
lean_dec_ref_known(v_x_3632_, 2);
v_sz_3980_ = lean_array_size(v_content_3979_);
v___x_3981_ = l_unsafeCast___redArg(v_content_3979_);
lean_dec_ref(v_content_3979_);
v___x_3982_ = lean_box_usize(v_sz_3980_);
v___x_3983_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0___boxed__const__1));
v___x_3984_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0_spec__1___boxed), 8, 4);
lean_closure_set(v___x_3984_, 0, v_x_3631_);
lean_closure_set(v___x_3984_, 1, v___x_3982_);
lean_closure_set(v___x_3984_, 2, v___x_3983_);
lean_closure_set(v___x_3984_, 3, v___x_3981_);
v___x_4061__overap_3985_ = l_unsafeCast___redArg(v___x_3984_);
lean_dec_ref(v___x_3984_);
lean_inc(v_a_3635_);
lean_inc_ref(v_a_3634_);
lean_inc(v_a_3633_);
v___x_3986_ = lean_apply_4(v___x_4061__overap_3985_, v_a_3633_, v_a_3634_, v_a_3635_, lean_box(0));
if (lean_obj_tag(v___x_3986_) == 0)
{
lean_object* v_a_3987_; lean_object* v___x_3989_; uint8_t v_isShared_3990_; uint8_t v_isSharedCheck_3995_; 
v_a_3987_ = lean_ctor_get(v___x_3986_, 0);
v_isSharedCheck_3995_ = !lean_is_exclusive(v___x_3986_);
if (v_isSharedCheck_3995_ == 0)
{
v___x_3989_ = v___x_3986_;
v_isShared_3990_ = v_isSharedCheck_3995_;
goto v_resetjp_3988_;
}
else
{
lean_inc(v_a_3987_);
lean_dec(v___x_3986_);
v___x_3989_ = lean_box(0);
v_isShared_3990_ = v_isSharedCheck_3995_;
goto v_resetjp_3988_;
}
v_resetjp_3988_:
{
lean_object* v___x_3991_; lean_object* v___x_3993_; 
v___x_3991_ = l_Lean_Doc_joinInlines(v_a_3987_);
lean_dec(v_a_3987_);
if (v_isShared_3990_ == 0)
{
lean_ctor_set(v___x_3989_, 0, v___x_3991_);
v___x_3993_ = v___x_3989_;
goto v_reusejp_3992_;
}
else
{
lean_object* v_reuseFailAlloc_3994_; 
v_reuseFailAlloc_3994_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3994_, 0, v___x_3991_);
v___x_3993_ = v_reuseFailAlloc_3994_;
goto v_reusejp_3992_;
}
v_reusejp_3992_:
{
return v___x_3993_;
}
}
}
else
{
lean_object* v_a_3996_; lean_object* v___x_3998_; uint8_t v_isShared_3999_; uint8_t v_isSharedCheck_4003_; 
v_a_3996_ = lean_ctor_get(v___x_3986_, 0);
v_isSharedCheck_4003_ = !lean_is_exclusive(v___x_3986_);
if (v_isSharedCheck_4003_ == 0)
{
v___x_3998_ = v___x_3986_;
v_isShared_3999_ = v_isSharedCheck_4003_;
goto v_resetjp_3997_;
}
else
{
lean_inc(v_a_3996_);
lean_dec(v___x_3986_);
v___x_3998_ = lean_box(0);
v_isShared_3999_ = v_isSharedCheck_4003_;
goto v_resetjp_3997_;
}
v_resetjp_3997_:
{
lean_object* v___x_4001_; 
if (v_isShared_3999_ == 0)
{
v___x_4001_ = v___x_3998_;
goto v_reusejp_4000_;
}
else
{
lean_object* v_reuseFailAlloc_4002_; 
v_reuseFailAlloc_4002_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4002_, 0, v_a_3996_);
v___x_4001_ = v_reuseFailAlloc_4002_;
goto v_reusejp_4000_;
}
v_reusejp_4000_:
{
return v___x_4001_;
}
}
}
}
}
}
v___jp_3637_:
{
lean_object* v___x_3639_; lean_object* v___x_3640_; 
v___x_3639_ = l_Lean_Doc_joinInlines(v_pieces_3638_);
lean_dec_ref(v_pieces_3638_);
v___x_3640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3640_, 0, v___x_3639_);
return v___x_3640_;
}
v___jp_3641_:
{
lean_object* v___x_3643_; lean_object* v___x_3644_; 
v___x_3643_ = l_Lean_Doc_joinInlines(v_pieces_3642_);
lean_dec_ref(v_pieces_3642_);
v___x_3644_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3644_, 0, v___x_3643_);
return v___x_3644_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0___lam__0(lean_object* v_x_4004_, lean_object* v___y_4005_, lean_object* v___y_4006_, lean_object* v___y_4007_, lean_object* v___y_4008_){
_start:
{
lean_object* v___x_4010_; 
v___x_4010_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0(v_x_4004_, v___y_4005_, v___y_4006_, v___y_4007_, v___y_4008_);
return v___x_4010_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0___boxed(lean_object* v_x_4011_, lean_object* v_x_4012_, lean_object* v_a_4013_, lean_object* v_a_4014_, lean_object* v_a_4015_, lean_object* v_a_4016_){
_start:
{
lean_object* v_res_4017_; 
v_res_4017_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0(v_x_4011_, v_x_4012_, v_a_4013_, v_a_4014_, v_a_4015_);
lean_dec(v_a_4015_);
lean_dec_ref(v_a_4014_);
lean_dec(v_a_4013_);
return v_res_4017_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1___lam__1(lean_object* v___x_4018_, lean_object* v___y_4019_, lean_object* v___y_4020_, lean_object* v___y_4021_){
_start:
{
lean_object* v___x_4142__overap_4023_; lean_object* v___x_4024_; 
v___x_4142__overap_4023_ = l_unsafeCast___redArg(v___x_4018_);
lean_inc(v___y_4021_);
lean_inc_ref(v___y_4020_);
lean_inc(v___y_4019_);
v___x_4024_ = lean_apply_4(v___x_4142__overap_4023_, v___y_4019_, v___y_4020_, v___y_4021_, lean_box(0));
if (lean_obj_tag(v___x_4024_) == 0)
{
lean_object* v_a_4025_; lean_object* v___x_4027_; uint8_t v_isShared_4028_; uint8_t v_isSharedCheck_4033_; 
v_a_4025_ = lean_ctor_get(v___x_4024_, 0);
v_isSharedCheck_4033_ = !lean_is_exclusive(v___x_4024_);
if (v_isSharedCheck_4033_ == 0)
{
v___x_4027_ = v___x_4024_;
v_isShared_4028_ = v_isSharedCheck_4033_;
goto v_resetjp_4026_;
}
else
{
lean_inc(v_a_4025_);
lean_dec(v___x_4024_);
v___x_4027_ = lean_box(0);
v_isShared_4028_ = v_isSharedCheck_4033_;
goto v_resetjp_4026_;
}
v_resetjp_4026_:
{
lean_object* v___x_4029_; lean_object* v___x_4031_; 
v___x_4029_ = l_Lean_Doc_joinBlocks(v_a_4025_);
lean_dec(v_a_4025_);
if (v_isShared_4028_ == 0)
{
lean_ctor_set(v___x_4027_, 0, v___x_4029_);
v___x_4031_ = v___x_4027_;
goto v_reusejp_4030_;
}
else
{
lean_object* v_reuseFailAlloc_4032_; 
v_reuseFailAlloc_4032_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4032_, 0, v___x_4029_);
v___x_4031_ = v_reuseFailAlloc_4032_;
goto v_reusejp_4030_;
}
v_reusejp_4030_:
{
return v___x_4031_;
}
}
}
else
{
lean_object* v_a_4034_; lean_object* v___x_4036_; uint8_t v_isShared_4037_; uint8_t v_isSharedCheck_4041_; 
v_a_4034_ = lean_ctor_get(v___x_4024_, 0);
v_isSharedCheck_4041_ = !lean_is_exclusive(v___x_4024_);
if (v_isSharedCheck_4041_ == 0)
{
v___x_4036_ = v___x_4024_;
v_isShared_4037_ = v_isSharedCheck_4041_;
goto v_resetjp_4035_;
}
else
{
lean_inc(v_a_4034_);
lean_dec(v___x_4024_);
v___x_4036_ = lean_box(0);
v_isShared_4037_ = v_isSharedCheck_4041_;
goto v_resetjp_4035_;
}
v_resetjp_4035_:
{
lean_object* v___x_4039_; 
if (v_isShared_4037_ == 0)
{
v___x_4039_ = v___x_4036_;
goto v_reusejp_4038_;
}
else
{
lean_object* v_reuseFailAlloc_4040_; 
v_reuseFailAlloc_4040_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4040_, 0, v_a_4034_);
v___x_4039_ = v_reuseFailAlloc_4040_;
goto v_reusejp_4038_;
}
v_reusejp_4038_:
{
return v___x_4039_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1___lam__1___boxed(lean_object* v___x_4042_, lean_object* v___y_4043_, lean_object* v___y_4044_, lean_object* v___y_4045_, lean_object* v___y_4046_){
_start:
{
lean_object* v_res_4047_; 
v_res_4047_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1___lam__1(v___x_4042_, v___y_4043_, v___y_4044_, v___y_4045_);
lean_dec(v___y_4045_);
lean_dec_ref(v___y_4044_);
lean_dec(v___y_4043_);
lean_dec_ref(v___x_4042_);
return v_res_4047_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1___lam__0(lean_object* v___x_4048_, lean_object* v___y_4049_, lean_object* v___y_4050_, lean_object* v___y_4051_, lean_object* v___y_4052_){
_start:
{
lean_object* v___x_4054_; 
v___x_4054_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0(v___x_4048_, v___y_4049_, v___y_4050_, v___y_4051_, v___y_4052_);
return v___x_4054_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1___lam__0___boxed(lean_object* v___x_4055_, lean_object* v___y_4056_, lean_object* v___y_4057_, lean_object* v___y_4058_, lean_object* v___y_4059_, lean_object* v___y_4060_){
_start:
{
lean_object* v_res_4061_; 
v_res_4061_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1___lam__0(v___x_4055_, v___y_4056_, v___y_4057_, v___y_4058_, v___y_4059_);
lean_dec(v___y_4059_);
lean_dec_ref(v___y_4058_);
lean_dec(v___y_4057_);
return v_res_4061_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1_spec__6(lean_object* v_x_4062_, lean_object* v_x_4063_){
_start:
{
lean_object* v_zero_4064_; uint8_t v_isZero_4065_; 
v_zero_4064_ = lean_unsigned_to_nat(0u);
v_isZero_4065_ = lean_nat_dec_eq(v_x_4062_, v_zero_4064_);
if (v_isZero_4065_ == 1)
{
lean_dec(v_x_4062_);
return v_x_4063_;
}
else
{
uint32_t v___x_4066_; lean_object* v_one_4067_; lean_object* v_n_4068_; lean_object* v___x_4069_; 
v___x_4066_ = 32;
v_one_4067_ = lean_unsigned_to_nat(1u);
v_n_4068_ = lean_nat_sub(v_x_4062_, v_one_4067_);
lean_dec(v_x_4062_);
v___x_4069_ = lean_string_push(v_x_4063_, v___x_4066_);
v_x_4062_ = v_n_4068_;
v_x_4063_ = v___x_4069_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_findSimpleDocString_x3f_spec__2___boxed(lean_object* v_sz_4071_, lean_object* v_i_4072_, lean_object* v_bs_4073_, lean_object* v___y_4074_, lean_object* v___y_4075_, lean_object* v___y_4076_, lean_object* v___y_4077_){
_start:
{
size_t v_sz_boxed_4078_; size_t v_i_boxed_4079_; lean_object* v_res_4080_; 
v_sz_boxed_4078_ = lean_unbox_usize(v_sz_4071_);
lean_dec(v_sz_4071_);
v_i_boxed_4079_ = lean_unbox_usize(v_i_4072_);
lean_dec(v_i_4072_);
v_res_4080_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_findSimpleDocString_x3f_spec__2(v_sz_boxed_4078_, v_i_boxed_4079_, v_bs_4073_, v___y_4074_, v___y_4075_, v___y_4076_);
lean_dec(v___y_4076_);
lean_dec_ref(v___y_4075_);
lean_dec(v___y_4074_);
return v_res_4080_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1_spec__5(size_t v_sz_4081_, size_t v_i_4082_, lean_object* v_bs_4083_, lean_object* v___y_4084_, lean_object* v___y_4085_, lean_object* v___y_4086_){
_start:
{
uint8_t v___x_4088_; 
v___x_4088_ = lean_usize_dec_lt(v_i_4082_, v_sz_4081_);
if (v___x_4088_ == 0)
{
lean_object* v___x_4089_; lean_object* v___x_4090_; 
v___x_4089_ = l_unsafeCast___redArg(v_bs_4083_);
lean_dec_ref(v_bs_4083_);
v___x_4090_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4090_, 0, v___x_4089_);
return v___x_4090_;
}
else
{
lean_object* v_v_4091_; lean_object* v___x_4092_; lean_object* v_bs_x27_4093_; lean_object* v___x_4094_; size_t v_sz_4095_; lean_object* v___x_4096_; lean_object* v___x_4097_; lean_object* v___x_4098_; lean_object* v___x_4099_; lean_object* v___x_4075__overap_4100_; lean_object* v___x_4101_; 
v_v_4091_ = lean_array_uget(v_bs_4083_, v_i_4082_);
v___x_4092_ = lean_unsigned_to_nat(0u);
v_bs_x27_4093_ = lean_array_uset(v_bs_4083_, v_i_4082_, v___x_4092_);
v___x_4094_ = l_unsafeCast___redArg(v_v_4091_);
lean_dec(v_v_4091_);
v_sz_4095_ = lean_array_size(v___x_4094_);
v___x_4096_ = l_unsafeCast___redArg(v___x_4094_);
lean_dec(v___x_4094_);
v___x_4097_ = lean_box_usize(v_sz_4095_);
v___x_4098_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0___boxed__const__1));
v___x_4099_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_findSimpleDocString_x3f_spec__2___boxed), 7, 3);
lean_closure_set(v___x_4099_, 0, v___x_4097_);
lean_closure_set(v___x_4099_, 1, v___x_4098_);
lean_closure_set(v___x_4099_, 2, v___x_4096_);
v___x_4075__overap_4100_ = l_unsafeCast___redArg(v___x_4099_);
lean_dec_ref(v___x_4099_);
lean_inc(v___y_4086_);
lean_inc_ref(v___y_4085_);
lean_inc(v___y_4084_);
v___x_4101_ = lean_apply_4(v___x_4075__overap_4100_, v___y_4084_, v___y_4085_, v___y_4086_, lean_box(0));
if (lean_obj_tag(v___x_4101_) == 0)
{
lean_object* v_a_4102_; lean_object* v___x_4103_; lean_object* v___x_4104_; lean_object* v___x_4105_; lean_object* v___x_4106_; size_t v___x_4107_; size_t v___x_4108_; lean_object* v___x_4109_; lean_object* v___x_4110_; 
v_a_4102_ = lean_ctor_get(v___x_4101_, 0);
lean_inc(v_a_4102_);
lean_dec_ref_known(v___x_4101_, 1);
v___x_4103_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__0___closed__0));
v___x_4104_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__0___closed__1));
v___x_4105_ = l_Lean_Doc_joinBlocks(v_a_4102_);
lean_dec(v_a_4102_);
v___x_4106_ = l_Lean_Doc_prefixListLines(v___x_4103_, v___x_4104_, v___x_4105_);
lean_dec_ref(v___x_4105_);
v___x_4107_ = ((size_t)1ULL);
v___x_4108_ = lean_usize_add(v_i_4082_, v___x_4107_);
v___x_4109_ = l_unsafeCast___redArg(v___x_4106_);
lean_dec_ref(v___x_4106_);
v___x_4110_ = lean_array_uset(v_bs_x27_4093_, v_i_4082_, v___x_4109_);
v_i_4082_ = v___x_4108_;
v_bs_4083_ = v___x_4110_;
goto _start;
}
else
{
lean_object* v_a_4112_; lean_object* v___x_4114_; uint8_t v_isShared_4115_; uint8_t v_isSharedCheck_4119_; 
lean_dec_ref(v_bs_x27_4093_);
v_a_4112_ = lean_ctor_get(v___x_4101_, 0);
v_isSharedCheck_4119_ = !lean_is_exclusive(v___x_4101_);
if (v_isSharedCheck_4119_ == 0)
{
v___x_4114_ = v___x_4101_;
v_isShared_4115_ = v_isSharedCheck_4119_;
goto v_resetjp_4113_;
}
else
{
lean_inc(v_a_4112_);
lean_dec(v___x_4101_);
v___x_4114_ = lean_box(0);
v_isShared_4115_ = v_isSharedCheck_4119_;
goto v_resetjp_4113_;
}
v_resetjp_4113_:
{
lean_object* v___x_4117_; 
if (v_isShared_4115_ == 0)
{
v___x_4117_ = v___x_4114_;
goto v_reusejp_4116_;
}
else
{
lean_object* v_reuseFailAlloc_4118_; 
v_reuseFailAlloc_4118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4118_, 0, v_a_4112_);
v___x_4117_ = v_reuseFailAlloc_4118_;
goto v_reusejp_4116_;
}
v_reusejp_4116_:
{
return v___x_4117_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1_spec__5___boxed(lean_object* v_sz_4120_, lean_object* v_i_4121_, lean_object* v_bs_4122_, lean_object* v___y_4123_, lean_object* v___y_4124_, lean_object* v___y_4125_, lean_object* v___y_4126_){
_start:
{
size_t v_sz_boxed_4127_; size_t v_i_boxed_4128_; lean_object* v_res_4129_; 
v_sz_boxed_4127_ = lean_unbox_usize(v_sz_4120_);
lean_dec(v_sz_4120_);
v_i_boxed_4128_ = lean_unbox_usize(v_i_4121_);
lean_dec(v_i_4121_);
v_res_4129_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1_spec__5(v_sz_boxed_4127_, v_i_boxed_4128_, v_bs_4122_, v___y_4123_, v___y_4124_, v___y_4125_);
lean_dec(v___y_4125_);
lean_dec_ref(v___y_4124_);
lean_dec(v___y_4123_);
return v_res_4129_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1_spec__7(lean_object* v_as_4130_, size_t v_sz_4131_, size_t v_i_4132_, lean_object* v_b_4133_, lean_object* v___y_4134_, lean_object* v___y_4135_, lean_object* v___y_4136_){
_start:
{
uint8_t v___x_4138_; 
v___x_4138_ = lean_usize_dec_lt(v_i_4132_, v_sz_4131_);
if (v___x_4138_ == 0)
{
lean_object* v___x_4139_; 
v___x_4139_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4139_, 0, v_b_4133_);
return v___x_4139_;
}
else
{
lean_object* v_fst_4140_; lean_object* v_snd_4141_; lean_object* v___x_4143_; uint8_t v_isShared_4144_; uint8_t v_isSharedCheck_4179_; 
v_fst_4140_ = lean_ctor_get(v_b_4133_, 0);
v_snd_4141_ = lean_ctor_get(v_b_4133_, 1);
v_isSharedCheck_4179_ = !lean_is_exclusive(v_b_4133_);
if (v_isSharedCheck_4179_ == 0)
{
v___x_4143_ = v_b_4133_;
v_isShared_4144_ = v_isSharedCheck_4179_;
goto v_resetjp_4142_;
}
else
{
lean_inc(v_snd_4141_);
lean_inc(v_fst_4140_);
lean_dec(v_b_4133_);
v___x_4143_ = lean_box(0);
v_isShared_4144_ = v_isSharedCheck_4179_;
goto v_resetjp_4142_;
}
v_resetjp_4142_:
{
lean_object* v___x_4145_; lean_object* v_a_4146_; lean_object* v___x_4147_; lean_object* v___x_4148_; lean_object* v___x_4149_; lean_object* v___x_4150_; lean_object* v___x_4151_; lean_object* v___x_4152_; size_t v_sz_4153_; lean_object* v___x_4154_; lean_object* v___x_4155_; lean_object* v___x_4156_; lean_object* v___x_4157_; lean_object* v___x_4079__overap_4158_; lean_object* v___x_4159_; 
v___x_4145_ = lean_unsigned_to_nat(1u);
v_a_4146_ = lean_array_uget_borrowed(v_as_4130_, v_i_4132_);
lean_inc(v_snd_4141_);
v___x_4147_ = l_Nat_reprFast(v_snd_4141_);
v___x_4148_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__2___closed__0));
v___x_4149_ = lean_string_append(v___x_4147_, v___x_4148_);
v___x_4150_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinBlocks_spec__0___closed__0));
v___x_4151_ = lean_string_utf8_byte_size(v___x_4149_);
v___x_4152_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1_spec__6(v___x_4151_, v___x_4150_);
v_sz_4153_ = lean_array_size(v_a_4146_);
v___x_4154_ = l_unsafeCast___redArg(v_a_4146_);
v___x_4155_ = lean_box_usize(v_sz_4153_);
v___x_4156_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0___boxed__const__1));
v___x_4157_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_findSimpleDocString_x3f_spec__2___boxed), 7, 3);
lean_closure_set(v___x_4157_, 0, v___x_4155_);
lean_closure_set(v___x_4157_, 1, v___x_4156_);
lean_closure_set(v___x_4157_, 2, v___x_4154_);
v___x_4079__overap_4158_ = l_unsafeCast___redArg(v___x_4157_);
lean_dec_ref(v___x_4157_);
lean_inc(v___y_4136_);
lean_inc_ref(v___y_4135_);
lean_inc(v___y_4134_);
v___x_4159_ = lean_apply_4(v___x_4079__overap_4158_, v___y_4134_, v___y_4135_, v___y_4136_, lean_box(0));
if (lean_obj_tag(v___x_4159_) == 0)
{
lean_object* v_a_4160_; lean_object* v___x_4161_; lean_object* v___x_4162_; lean_object* v___x_4163_; lean_object* v___x_4164_; lean_object* v___x_4166_; 
v_a_4160_ = lean_ctor_get(v___x_4159_, 0);
lean_inc(v_a_4160_);
lean_dec_ref_known(v___x_4159_, 1);
v___x_4161_ = l_Lean_Doc_joinBlocks(v_a_4160_);
lean_dec(v_a_4160_);
v___x_4162_ = l_Lean_Doc_prefixListLines(v___x_4149_, v___x_4152_, v___x_4161_);
lean_dec_ref(v___x_4161_);
v___x_4163_ = lean_array_push(v_fst_4140_, v___x_4162_);
v___x_4164_ = lean_nat_add(v_snd_4141_, v___x_4145_);
lean_dec(v_snd_4141_);
if (v_isShared_4144_ == 0)
{
lean_ctor_set(v___x_4143_, 1, v___x_4164_);
lean_ctor_set(v___x_4143_, 0, v___x_4163_);
v___x_4166_ = v___x_4143_;
goto v_reusejp_4165_;
}
else
{
lean_object* v_reuseFailAlloc_4170_; 
v_reuseFailAlloc_4170_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4170_, 0, v___x_4163_);
lean_ctor_set(v_reuseFailAlloc_4170_, 1, v___x_4164_);
v___x_4166_ = v_reuseFailAlloc_4170_;
goto v_reusejp_4165_;
}
v_reusejp_4165_:
{
size_t v___x_4167_; size_t v___x_4168_; 
v___x_4167_ = ((size_t)1ULL);
v___x_4168_ = lean_usize_add(v_i_4132_, v___x_4167_);
v_i_4132_ = v___x_4168_;
v_b_4133_ = v___x_4166_;
goto _start;
}
}
else
{
lean_object* v_a_4171_; lean_object* v___x_4173_; uint8_t v_isShared_4174_; uint8_t v_isSharedCheck_4178_; 
lean_dec_ref(v___x_4152_);
lean_dec_ref(v___x_4149_);
lean_del_object(v___x_4143_);
lean_dec(v_snd_4141_);
lean_dec(v_fst_4140_);
v_a_4171_ = lean_ctor_get(v___x_4159_, 0);
v_isSharedCheck_4178_ = !lean_is_exclusive(v___x_4159_);
if (v_isSharedCheck_4178_ == 0)
{
v___x_4173_ = v___x_4159_;
v_isShared_4174_ = v_isSharedCheck_4178_;
goto v_resetjp_4172_;
}
else
{
lean_inc(v_a_4171_);
lean_dec(v___x_4159_);
v___x_4173_ = lean_box(0);
v_isShared_4174_ = v_isSharedCheck_4178_;
goto v_resetjp_4172_;
}
v_resetjp_4172_:
{
lean_object* v___x_4176_; 
if (v_isShared_4174_ == 0)
{
v___x_4176_ = v___x_4173_;
goto v_reusejp_4175_;
}
else
{
lean_object* v_reuseFailAlloc_4177_; 
v_reuseFailAlloc_4177_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4177_, 0, v_a_4171_);
v___x_4176_ = v_reuseFailAlloc_4177_;
goto v_reusejp_4175_;
}
v_reusejp_4175_:
{
return v___x_4176_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1_spec__8(size_t v_sz_4180_, size_t v_i_4181_, lean_object* v_bs_4182_, lean_object* v___y_4183_, lean_object* v___y_4184_, lean_object* v___y_4185_){
_start:
{
uint8_t v___x_4187_; 
v___x_4187_ = lean_usize_dec_lt(v_i_4181_, v_sz_4180_);
if (v___x_4187_ == 0)
{
lean_object* v___x_4188_; lean_object* v___x_4189_; 
v___x_4188_ = l_unsafeCast___redArg(v_bs_4182_);
lean_dec_ref(v_bs_4182_);
v___x_4189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4189_, 0, v___x_4188_);
return v___x_4189_;
}
else
{
lean_object* v_v_4190_; lean_object* v___x_4191_; lean_object* v___x_4192_; lean_object* v_term_4193_; lean_object* v_desc_4194_; lean_object* v___x_4195_; lean_object* v_bs_x27_4196_; lean_object* v_a_4198_; lean_object* v___x_4204_; lean_object* v___x_4205_; 
v_v_4190_ = lean_array_uget_borrowed(v_bs_4182_, v_i_4181_);
v___x_4191_ = l_unsafeCast___redArg(v_v_4190_);
v___x_4192_ = ((lean_object*)(l_Lean_Doc_MarkdownM_instInhabitedInlineCtx_default___closed__0));
v_term_4193_ = lean_ctor_get(v___x_4191_, 0);
lean_inc_ref(v_term_4193_);
v_desc_4194_ = lean_ctor_get(v___x_4191_, 1);
lean_inc_ref(v_desc_4194_);
lean_dec(v___x_4191_);
v___x_4195_ = lean_unsigned_to_nat(0u);
v_bs_x27_4196_ = lean_array_uset(v_bs_4182_, v_i_4181_, v___x_4195_);
v___x_4204_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4204_, 0, v_term_4193_);
v___x_4205_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0(v___x_4192_, v___x_4204_, v___y_4183_, v___y_4184_, v___y_4185_);
if (lean_obj_tag(v___x_4205_) == 0)
{
lean_object* v_a_4206_; size_t v_sz_4207_; lean_object* v___x_4208_; lean_object* v___x_4209_; lean_object* v___x_4210_; lean_object* v___x_4211_; lean_object* v___x_4086__overap_4212_; lean_object* v___x_4213_; 
v_a_4206_ = lean_ctor_get(v___x_4205_, 0);
lean_inc(v_a_4206_);
lean_dec_ref_known(v___x_4205_, 1);
v_sz_4207_ = lean_array_size(v_desc_4194_);
v___x_4208_ = l_unsafeCast___redArg(v_desc_4194_);
v___x_4209_ = lean_box_usize(v_sz_4207_);
v___x_4210_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0___boxed__const__1));
v___x_4211_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_findSimpleDocString_x3f_spec__2___boxed), 7, 3);
lean_closure_set(v___x_4211_, 0, v___x_4209_);
lean_closure_set(v___x_4211_, 1, v___x_4210_);
lean_closure_set(v___x_4211_, 2, v___x_4208_);
v___x_4086__overap_4212_ = l_unsafeCast___redArg(v___x_4211_);
lean_dec_ref(v___x_4211_);
lean_inc(v___y_4185_);
lean_inc_ref(v___y_4184_);
lean_inc(v___y_4183_);
v___x_4213_ = lean_apply_4(v___x_4086__overap_4212_, v___y_4183_, v___y_4184_, v___y_4185_, lean_box(0));
if (lean_obj_tag(v___x_4213_) == 0)
{
lean_object* v_a_4214_; lean_object* v___y_4216_; lean_object* v___x_4220_; lean_object* v___x_4221_; lean_object* v___x_4222_; lean_object* v___x_4223_; lean_object* v___x_4224_; lean_object* v___x_4225_; lean_object* v___x_4226_; lean_object* v___x_4227_; lean_object* v___x_4228_; uint8_t v___x_4229_; 
v_a_4214_ = lean_ctor_get(v___x_4213_, 0);
lean_inc(v_a_4214_);
lean_dec_ref_known(v___x_4213_, 1);
v___x_4220_ = lean_unsigned_to_nat(1u);
v___x_4221_ = lean_mk_empty_array_with_capacity(v___x_4220_);
v___x_4222_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__3___closed__1));
v___x_4223_ = lean_unsigned_to_nat(2u);
v___x_4224_ = lean_mk_empty_array_with_capacity(v___x_4223_);
v___x_4225_ = lean_array_push(v___x_4224_, v_a_4206_);
v___x_4226_ = lean_array_push(v___x_4225_, v___x_4222_);
v___x_4227_ = l_Lean_Doc_joinInlines(v___x_4226_);
lean_dec_ref(v___x_4226_);
v___x_4228_ = lean_array_get_size(v_desc_4194_);
lean_dec_ref(v_desc_4194_);
v___x_4229_ = lean_nat_dec_le(v___x_4228_, v___x_4220_);
if (v___x_4229_ == 0)
{
lean_object* v___x_4230_; lean_object* v___x_4231_; lean_object* v___x_4232_; 
v___x_4230_ = lean_array_push(v___x_4221_, v___x_4227_);
v___x_4231_ = l_Array_append___redArg(v___x_4230_, v_a_4214_);
lean_dec(v_a_4214_);
v___x_4232_ = l_Lean_Doc_joinBlocks(v___x_4231_);
lean_dec_ref(v___x_4231_);
v___y_4216_ = v___x_4232_;
goto v___jp_4215_;
}
else
{
lean_object* v___x_4233_; lean_object* v___x_4234_; 
lean_dec_ref(v___x_4221_);
v___x_4233_ = l_Lean_Doc_joinBlocks(v_a_4214_);
lean_dec(v_a_4214_);
v___x_4234_ = l_Array_append___redArg(v___x_4227_, v___x_4233_);
lean_dec_ref(v___x_4233_);
v___y_4216_ = v___x_4234_;
goto v___jp_4215_;
}
v___jp_4215_:
{
lean_object* v___x_4217_; lean_object* v___x_4218_; lean_object* v___x_4219_; 
v___x_4217_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__0___closed__0));
v___x_4218_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__0___closed__1));
v___x_4219_ = l_Lean_Doc_prefixListLines(v___x_4217_, v___x_4218_, v___y_4216_);
lean_dec_ref(v___y_4216_);
v_a_4198_ = v___x_4219_;
goto v___jp_4197_;
}
}
else
{
lean_object* v_a_4235_; lean_object* v___x_4237_; uint8_t v_isShared_4238_; uint8_t v_isSharedCheck_4242_; 
lean_dec(v_a_4206_);
lean_dec_ref(v_bs_x27_4196_);
lean_dec_ref(v_desc_4194_);
v_a_4235_ = lean_ctor_get(v___x_4213_, 0);
v_isSharedCheck_4242_ = !lean_is_exclusive(v___x_4213_);
if (v_isSharedCheck_4242_ == 0)
{
v___x_4237_ = v___x_4213_;
v_isShared_4238_ = v_isSharedCheck_4242_;
goto v_resetjp_4236_;
}
else
{
lean_inc(v_a_4235_);
lean_dec(v___x_4213_);
v___x_4237_ = lean_box(0);
v_isShared_4238_ = v_isSharedCheck_4242_;
goto v_resetjp_4236_;
}
v_resetjp_4236_:
{
lean_object* v___x_4240_; 
if (v_isShared_4238_ == 0)
{
v___x_4240_ = v___x_4237_;
goto v_reusejp_4239_;
}
else
{
lean_object* v_reuseFailAlloc_4241_; 
v_reuseFailAlloc_4241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4241_, 0, v_a_4235_);
v___x_4240_ = v_reuseFailAlloc_4241_;
goto v_reusejp_4239_;
}
v_reusejp_4239_:
{
return v___x_4240_;
}
}
}
}
else
{
lean_dec_ref(v_desc_4194_);
if (lean_obj_tag(v___x_4205_) == 0)
{
lean_object* v_a_4243_; 
v_a_4243_ = lean_ctor_get(v___x_4205_, 0);
lean_inc(v_a_4243_);
lean_dec_ref_known(v___x_4205_, 1);
v_a_4198_ = v_a_4243_;
goto v___jp_4197_;
}
else
{
lean_object* v_a_4244_; lean_object* v___x_4246_; uint8_t v_isShared_4247_; uint8_t v_isSharedCheck_4251_; 
lean_dec_ref(v_bs_x27_4196_);
v_a_4244_ = lean_ctor_get(v___x_4205_, 0);
v_isSharedCheck_4251_ = !lean_is_exclusive(v___x_4205_);
if (v_isSharedCheck_4251_ == 0)
{
v___x_4246_ = v___x_4205_;
v_isShared_4247_ = v_isSharedCheck_4251_;
goto v_resetjp_4245_;
}
else
{
lean_inc(v_a_4244_);
lean_dec(v___x_4205_);
v___x_4246_ = lean_box(0);
v_isShared_4247_ = v_isSharedCheck_4251_;
goto v_resetjp_4245_;
}
v_resetjp_4245_:
{
lean_object* v___x_4249_; 
if (v_isShared_4247_ == 0)
{
v___x_4249_ = v___x_4246_;
goto v_reusejp_4248_;
}
else
{
lean_object* v_reuseFailAlloc_4250_; 
v_reuseFailAlloc_4250_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4250_, 0, v_a_4244_);
v___x_4249_ = v_reuseFailAlloc_4250_;
goto v_reusejp_4248_;
}
v_reusejp_4248_:
{
return v___x_4249_;
}
}
}
}
v___jp_4197_:
{
size_t v___x_4199_; size_t v___x_4200_; lean_object* v___x_4201_; lean_object* v___x_4202_; 
v___x_4199_ = ((size_t)1ULL);
v___x_4200_ = lean_usize_add(v_i_4181_, v___x_4199_);
v___x_4201_ = l_unsafeCast___redArg(v_a_4198_);
lean_dec_ref(v_a_4198_);
v___x_4202_ = lean_array_uset(v_bs_x27_4196_, v_i_4181_, v___x_4201_);
v_i_4181_ = v___x_4200_;
v_bs_4182_ = v___x_4202_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1_spec__8___boxed(lean_object* v_sz_4252_, lean_object* v_i_4253_, lean_object* v_bs_4254_, lean_object* v___y_4255_, lean_object* v___y_4256_, lean_object* v___y_4257_, lean_object* v___y_4258_){
_start:
{
size_t v_sz_boxed_4259_; size_t v_i_boxed_4260_; lean_object* v_res_4261_; 
v_sz_boxed_4259_ = lean_unbox_usize(v_sz_4252_);
lean_dec(v_sz_4252_);
v_i_boxed_4260_ = lean_unbox_usize(v_i_4253_);
lean_dec(v_i_4253_);
v_res_4261_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1_spec__8(v_sz_boxed_4259_, v_i_boxed_4260_, v_bs_4254_, v___y_4255_, v___y_4256_, v___y_4257_);
lean_dec(v___y_4257_);
lean_dec_ref(v___y_4256_);
lean_dec(v___y_4255_);
return v_res_4261_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1___boxed(lean_object* v_x_4262_, lean_object* v_a_4263_, lean_object* v_a_4264_, lean_object* v_a_4265_, lean_object* v_a_4266_){
_start:
{
lean_object* v_res_4267_; 
v_res_4267_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1(v_x_4262_, v_a_4263_, v_a_4264_, v_a_4265_);
lean_dec(v_a_4265_);
lean_dec_ref(v_a_4264_);
lean_dec(v_a_4263_);
return v_res_4267_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1(lean_object* v_x_4270_, lean_object* v_a_4271_, lean_object* v_a_4272_, lean_object* v_a_4273_){
_start:
{
switch(lean_obj_tag(v_x_4270_))
{
case 0:
{
lean_object* v_contents_4275_; lean_object* v___x_4277_; uint8_t v_isShared_4278_; uint8_t v_isSharedCheck_4284_; 
v_contents_4275_ = lean_ctor_get(v_x_4270_, 0);
v_isSharedCheck_4284_ = !lean_is_exclusive(v_x_4270_);
if (v_isSharedCheck_4284_ == 0)
{
v___x_4277_ = v_x_4270_;
v_isShared_4278_ = v_isSharedCheck_4284_;
goto v_resetjp_4276_;
}
else
{
lean_inc(v_contents_4275_);
lean_dec(v_x_4270_);
v___x_4277_ = lean_box(0);
v_isShared_4278_ = v_isSharedCheck_4284_;
goto v_resetjp_4276_;
}
v_resetjp_4276_:
{
lean_object* v___x_4279_; lean_object* v___x_4281_; 
v___x_4279_ = ((lean_object*)(l_Lean_Doc_MarkdownM_instInhabitedInlineCtx_default___closed__0));
if (v_isShared_4278_ == 0)
{
lean_ctor_set_tag(v___x_4277_, 9);
v___x_4281_ = v___x_4277_;
goto v_reusejp_4280_;
}
else
{
lean_object* v_reuseFailAlloc_4283_; 
v_reuseFailAlloc_4283_ = lean_alloc_ctor(9, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4283_, 0, v_contents_4275_);
v___x_4281_ = v_reuseFailAlloc_4283_;
goto v_reusejp_4280_;
}
v_reusejp_4280_:
{
lean_object* v___x_4282_; 
v___x_4282_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0(v___x_4279_, v___x_4281_, v_a_4271_, v_a_4272_, v_a_4273_);
return v___x_4282_;
}
}
}
case 1:
{
lean_object* v_content_4285_; lean_object* v___x_4287_; uint8_t v_isShared_4288_; uint8_t v_isSharedCheck_4293_; 
v_content_4285_ = lean_ctor_get(v_x_4270_, 0);
v_isSharedCheck_4293_ = !lean_is_exclusive(v_x_4270_);
if (v_isSharedCheck_4293_ == 0)
{
v___x_4287_ = v_x_4270_;
v_isShared_4288_ = v_isSharedCheck_4293_;
goto v_resetjp_4286_;
}
else
{
lean_inc(v_content_4285_);
lean_dec(v_x_4270_);
v___x_4287_ = lean_box(0);
v_isShared_4288_ = v_isSharedCheck_4293_;
goto v_resetjp_4286_;
}
v_resetjp_4286_:
{
lean_object* v___x_4289_; lean_object* v___x_4291_; 
v___x_4289_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_codeBlockLines(v_content_4285_);
if (v_isShared_4288_ == 0)
{
lean_ctor_set_tag(v___x_4287_, 0);
lean_ctor_set(v___x_4287_, 0, v___x_4289_);
v___x_4291_ = v___x_4287_;
goto v_reusejp_4290_;
}
else
{
lean_object* v_reuseFailAlloc_4292_; 
v_reuseFailAlloc_4292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4292_, 0, v___x_4289_);
v___x_4291_ = v_reuseFailAlloc_4292_;
goto v_reusejp_4290_;
}
v_reusejp_4290_:
{
return v___x_4291_;
}
}
}
case 2:
{
lean_object* v_items_4294_; size_t v_sz_4295_; lean_object* v___x_4296_; lean_object* v___x_4297_; lean_object* v___x_4298_; lean_object* v___x_4299_; lean_object* v___x_4012__overap_4300_; lean_object* v___x_4301_; 
v_items_4294_ = lean_ctor_get(v_x_4270_, 0);
lean_inc_ref(v_items_4294_);
lean_dec_ref_known(v_x_4270_, 1);
v_sz_4295_ = lean_array_size(v_items_4294_);
v___x_4296_ = l_unsafeCast___redArg(v_items_4294_);
lean_dec_ref(v_items_4294_);
v___x_4297_ = lean_box_usize(v_sz_4295_);
v___x_4298_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0___boxed__const__1));
v___x_4299_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1_spec__5___boxed), 7, 3);
lean_closure_set(v___x_4299_, 0, v___x_4297_);
lean_closure_set(v___x_4299_, 1, v___x_4298_);
lean_closure_set(v___x_4299_, 2, v___x_4296_);
v___x_4012__overap_4300_ = l_unsafeCast___redArg(v___x_4299_);
lean_dec_ref(v___x_4299_);
lean_inc(v_a_4273_);
lean_inc_ref(v_a_4272_);
lean_inc(v_a_4271_);
v___x_4301_ = lean_apply_4(v___x_4012__overap_4300_, v_a_4271_, v_a_4272_, v_a_4273_, lean_box(0));
if (lean_obj_tag(v___x_4301_) == 0)
{
lean_object* v_a_4302_; lean_object* v___x_4304_; uint8_t v_isShared_4305_; uint8_t v_isSharedCheck_4310_; 
v_a_4302_ = lean_ctor_get(v___x_4301_, 0);
v_isSharedCheck_4310_ = !lean_is_exclusive(v___x_4301_);
if (v_isSharedCheck_4310_ == 0)
{
v___x_4304_ = v___x_4301_;
v_isShared_4305_ = v_isSharedCheck_4310_;
goto v_resetjp_4303_;
}
else
{
lean_inc(v_a_4302_);
lean_dec(v___x_4301_);
v___x_4304_ = lean_box(0);
v_isShared_4305_ = v_isSharedCheck_4310_;
goto v_resetjp_4303_;
}
v_resetjp_4303_:
{
lean_object* v___x_4306_; lean_object* v___x_4308_; 
v___x_4306_ = l_Lean_Doc_joinBlocks(v_a_4302_);
lean_dec(v_a_4302_);
if (v_isShared_4305_ == 0)
{
lean_ctor_set(v___x_4304_, 0, v___x_4306_);
v___x_4308_ = v___x_4304_;
goto v_reusejp_4307_;
}
else
{
lean_object* v_reuseFailAlloc_4309_; 
v_reuseFailAlloc_4309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4309_, 0, v___x_4306_);
v___x_4308_ = v_reuseFailAlloc_4309_;
goto v_reusejp_4307_;
}
v_reusejp_4307_:
{
return v___x_4308_;
}
}
}
else
{
lean_object* v_a_4311_; lean_object* v___x_4313_; uint8_t v_isShared_4314_; uint8_t v_isSharedCheck_4318_; 
v_a_4311_ = lean_ctor_get(v___x_4301_, 0);
v_isSharedCheck_4318_ = !lean_is_exclusive(v___x_4301_);
if (v_isSharedCheck_4318_ == 0)
{
v___x_4313_ = v___x_4301_;
v_isShared_4314_ = v_isSharedCheck_4318_;
goto v_resetjp_4312_;
}
else
{
lean_inc(v_a_4311_);
lean_dec(v___x_4301_);
v___x_4313_ = lean_box(0);
v_isShared_4314_ = v_isSharedCheck_4318_;
goto v_resetjp_4312_;
}
v_resetjp_4312_:
{
lean_object* v___x_4316_; 
if (v_isShared_4314_ == 0)
{
v___x_4316_ = v___x_4313_;
goto v_reusejp_4315_;
}
else
{
lean_object* v_reuseFailAlloc_4317_; 
v_reuseFailAlloc_4317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4317_, 0, v_a_4311_);
v___x_4316_ = v_reuseFailAlloc_4317_;
goto v_reusejp_4315_;
}
v_reusejp_4315_:
{
return v___x_4316_;
}
}
}
}
case 3:
{
lean_object* v_start_4319_; lean_object* v_items_4320_; lean_object* v___x_4322_; uint8_t v_isShared_4323_; uint8_t v_isSharedCheck_4354_; 
v_start_4319_ = lean_ctor_get(v_x_4270_, 0);
v_items_4320_ = lean_ctor_get(v_x_4270_, 1);
v_isSharedCheck_4354_ = !lean_is_exclusive(v_x_4270_);
if (v_isSharedCheck_4354_ == 0)
{
v___x_4322_ = v_x_4270_;
v_isShared_4323_ = v_isSharedCheck_4354_;
goto v_resetjp_4321_;
}
else
{
lean_inc(v_items_4320_);
lean_inc(v_start_4319_);
lean_dec(v_x_4270_);
v___x_4322_ = lean_box(0);
v_isShared_4323_ = v_isSharedCheck_4354_;
goto v_resetjp_4321_;
}
v_resetjp_4321_:
{
lean_object* v_out_4324_; lean_object* v___y_4326_; lean_object* v___x_4351_; lean_object* v___x_4352_; uint8_t v___x_4353_; 
v_out_4324_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__6));
v___x_4351_ = lean_unsigned_to_nat(1u);
v___x_4352_ = l_Int_toNat(v_start_4319_);
lean_dec(v_start_4319_);
v___x_4353_ = lean_nat_dec_le(v___x_4351_, v___x_4352_);
if (v___x_4353_ == 0)
{
lean_dec(v___x_4352_);
v___y_4326_ = v___x_4351_;
goto v___jp_4325_;
}
else
{
v___y_4326_ = v___x_4352_;
goto v___jp_4325_;
}
v___jp_4325_:
{
lean_object* v___x_4328_; 
if (v_isShared_4323_ == 0)
{
lean_ctor_set_tag(v___x_4322_, 0);
lean_ctor_set(v___x_4322_, 1, v___y_4326_);
lean_ctor_set(v___x_4322_, 0, v_out_4324_);
v___x_4328_ = v___x_4322_;
goto v_reusejp_4327_;
}
else
{
lean_object* v_reuseFailAlloc_4350_; 
v_reuseFailAlloc_4350_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4350_, 0, v_out_4324_);
lean_ctor_set(v_reuseFailAlloc_4350_, 1, v___y_4326_);
v___x_4328_ = v_reuseFailAlloc_4350_;
goto v_reusejp_4327_;
}
v_reusejp_4327_:
{
size_t v_sz_4329_; size_t v___x_4330_; lean_object* v___x_4331_; 
v_sz_4329_ = lean_array_size(v_items_4320_);
v___x_4330_ = ((size_t)0ULL);
v___x_4331_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1_spec__7(v_items_4320_, v_sz_4329_, v___x_4330_, v___x_4328_, v_a_4271_, v_a_4272_, v_a_4273_);
lean_dec_ref(v_items_4320_);
if (lean_obj_tag(v___x_4331_) == 0)
{
lean_object* v_a_4332_; lean_object* v___x_4334_; uint8_t v_isShared_4335_; uint8_t v_isSharedCheck_4341_; 
v_a_4332_ = lean_ctor_get(v___x_4331_, 0);
v_isSharedCheck_4341_ = !lean_is_exclusive(v___x_4331_);
if (v_isSharedCheck_4341_ == 0)
{
v___x_4334_ = v___x_4331_;
v_isShared_4335_ = v_isSharedCheck_4341_;
goto v_resetjp_4333_;
}
else
{
lean_inc(v_a_4332_);
lean_dec(v___x_4331_);
v___x_4334_ = lean_box(0);
v_isShared_4335_ = v_isSharedCheck_4341_;
goto v_resetjp_4333_;
}
v_resetjp_4333_:
{
lean_object* v_fst_4336_; lean_object* v___x_4337_; lean_object* v___x_4339_; 
v_fst_4336_ = lean_ctor_get(v_a_4332_, 0);
lean_inc(v_fst_4336_);
lean_dec(v_a_4332_);
v___x_4337_ = l_Lean_Doc_joinBlocks(v_fst_4336_);
lean_dec(v_fst_4336_);
if (v_isShared_4335_ == 0)
{
lean_ctor_set(v___x_4334_, 0, v___x_4337_);
v___x_4339_ = v___x_4334_;
goto v_reusejp_4338_;
}
else
{
lean_object* v_reuseFailAlloc_4340_; 
v_reuseFailAlloc_4340_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4340_, 0, v___x_4337_);
v___x_4339_ = v_reuseFailAlloc_4340_;
goto v_reusejp_4338_;
}
v_reusejp_4338_:
{
return v___x_4339_;
}
}
}
else
{
lean_object* v_a_4342_; lean_object* v___x_4344_; uint8_t v_isShared_4345_; uint8_t v_isSharedCheck_4349_; 
v_a_4342_ = lean_ctor_get(v___x_4331_, 0);
v_isSharedCheck_4349_ = !lean_is_exclusive(v___x_4331_);
if (v_isSharedCheck_4349_ == 0)
{
v___x_4344_ = v___x_4331_;
v_isShared_4345_ = v_isSharedCheck_4349_;
goto v_resetjp_4343_;
}
else
{
lean_inc(v_a_4342_);
lean_dec(v___x_4331_);
v___x_4344_ = lean_box(0);
v_isShared_4345_ = v_isSharedCheck_4349_;
goto v_resetjp_4343_;
}
v_resetjp_4343_:
{
lean_object* v___x_4347_; 
if (v_isShared_4345_ == 0)
{
v___x_4347_ = v___x_4344_;
goto v_reusejp_4346_;
}
else
{
lean_object* v_reuseFailAlloc_4348_; 
v_reuseFailAlloc_4348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4348_, 0, v_a_4342_);
v___x_4347_ = v_reuseFailAlloc_4348_;
goto v_reusejp_4346_;
}
v_reusejp_4346_:
{
return v___x_4347_;
}
}
}
}
}
}
}
case 4:
{
lean_object* v_items_4355_; size_t v_sz_4356_; lean_object* v___x_4357_; lean_object* v___x_4358_; lean_object* v___x_4359_; lean_object* v___x_4360_; lean_object* v___x_4015__overap_4361_; lean_object* v___x_4362_; 
v_items_4355_ = lean_ctor_get(v_x_4270_, 0);
lean_inc_ref(v_items_4355_);
lean_dec_ref_known(v_x_4270_, 1);
v_sz_4356_ = lean_array_size(v_items_4355_);
v___x_4357_ = l_unsafeCast___redArg(v_items_4355_);
lean_dec_ref(v_items_4355_);
v___x_4358_ = lean_box_usize(v_sz_4356_);
v___x_4359_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0___boxed__const__1));
v___x_4360_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1_spec__8___boxed), 7, 3);
lean_closure_set(v___x_4360_, 0, v___x_4358_);
lean_closure_set(v___x_4360_, 1, v___x_4359_);
lean_closure_set(v___x_4360_, 2, v___x_4357_);
v___x_4015__overap_4361_ = l_unsafeCast___redArg(v___x_4360_);
lean_dec_ref(v___x_4360_);
lean_inc(v_a_4273_);
lean_inc_ref(v_a_4272_);
lean_inc(v_a_4271_);
v___x_4362_ = lean_apply_4(v___x_4015__overap_4361_, v_a_4271_, v_a_4272_, v_a_4273_, lean_box(0));
if (lean_obj_tag(v___x_4362_) == 0)
{
lean_object* v_a_4363_; lean_object* v___x_4365_; uint8_t v_isShared_4366_; uint8_t v_isSharedCheck_4371_; 
v_a_4363_ = lean_ctor_get(v___x_4362_, 0);
v_isSharedCheck_4371_ = !lean_is_exclusive(v___x_4362_);
if (v_isSharedCheck_4371_ == 0)
{
v___x_4365_ = v___x_4362_;
v_isShared_4366_ = v_isSharedCheck_4371_;
goto v_resetjp_4364_;
}
else
{
lean_inc(v_a_4363_);
lean_dec(v___x_4362_);
v___x_4365_ = lean_box(0);
v_isShared_4366_ = v_isSharedCheck_4371_;
goto v_resetjp_4364_;
}
v_resetjp_4364_:
{
lean_object* v___x_4367_; lean_object* v___x_4369_; 
v___x_4367_ = l_Lean_Doc_joinBlocks(v_a_4363_);
lean_dec(v_a_4363_);
if (v_isShared_4366_ == 0)
{
lean_ctor_set(v___x_4365_, 0, v___x_4367_);
v___x_4369_ = v___x_4365_;
goto v_reusejp_4368_;
}
else
{
lean_object* v_reuseFailAlloc_4370_; 
v_reuseFailAlloc_4370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4370_, 0, v___x_4367_);
v___x_4369_ = v_reuseFailAlloc_4370_;
goto v_reusejp_4368_;
}
v_reusejp_4368_:
{
return v___x_4369_;
}
}
}
else
{
lean_object* v_a_4372_; lean_object* v___x_4374_; uint8_t v_isShared_4375_; uint8_t v_isSharedCheck_4379_; 
v_a_4372_ = lean_ctor_get(v___x_4362_, 0);
v_isSharedCheck_4379_ = !lean_is_exclusive(v___x_4362_);
if (v_isSharedCheck_4379_ == 0)
{
v___x_4374_ = v___x_4362_;
v_isShared_4375_ = v_isSharedCheck_4379_;
goto v_resetjp_4373_;
}
else
{
lean_inc(v_a_4372_);
lean_dec(v___x_4362_);
v___x_4374_ = lean_box(0);
v_isShared_4375_ = v_isSharedCheck_4379_;
goto v_resetjp_4373_;
}
v_resetjp_4373_:
{
lean_object* v___x_4377_; 
if (v_isShared_4375_ == 0)
{
v___x_4377_ = v___x_4374_;
goto v_reusejp_4376_;
}
else
{
lean_object* v_reuseFailAlloc_4378_; 
v_reuseFailAlloc_4378_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4378_, 0, v_a_4372_);
v___x_4377_ = v_reuseFailAlloc_4378_;
goto v_reusejp_4376_;
}
v_reusejp_4376_:
{
return v___x_4377_;
}
}
}
}
case 5:
{
lean_object* v_items_4380_; size_t v_sz_4381_; lean_object* v___x_4382_; lean_object* v___x_4383_; lean_object* v___x_4384_; lean_object* v___x_4385_; lean_object* v___x_4018__overap_4386_; lean_object* v___x_4387_; 
v_items_4380_ = lean_ctor_get(v_x_4270_, 0);
lean_inc_ref(v_items_4380_);
lean_dec_ref_known(v_x_4270_, 1);
v_sz_4381_ = lean_array_size(v_items_4380_);
v___x_4382_ = l_unsafeCast___redArg(v_items_4380_);
lean_dec_ref(v_items_4380_);
v___x_4383_ = lean_box_usize(v_sz_4381_);
v___x_4384_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0___boxed__const__1));
v___x_4385_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_findSimpleDocString_x3f_spec__2___boxed), 7, 3);
lean_closure_set(v___x_4385_, 0, v___x_4383_);
lean_closure_set(v___x_4385_, 1, v___x_4384_);
lean_closure_set(v___x_4385_, 2, v___x_4382_);
v___x_4018__overap_4386_ = l_unsafeCast___redArg(v___x_4385_);
lean_dec_ref(v___x_4385_);
lean_inc(v_a_4273_);
lean_inc_ref(v_a_4272_);
lean_inc(v_a_4271_);
v___x_4387_ = lean_apply_4(v___x_4018__overap_4386_, v_a_4271_, v_a_4272_, v_a_4273_, lean_box(0));
if (lean_obj_tag(v___x_4387_) == 0)
{
lean_object* v_a_4388_; lean_object* v___x_4390_; uint8_t v_isShared_4391_; uint8_t v_isSharedCheck_4398_; 
v_a_4388_ = lean_ctor_get(v___x_4387_, 0);
v_isSharedCheck_4398_ = !lean_is_exclusive(v___x_4387_);
if (v_isSharedCheck_4398_ == 0)
{
v___x_4390_ = v___x_4387_;
v_isShared_4391_ = v_isSharedCheck_4398_;
goto v_resetjp_4389_;
}
else
{
lean_inc(v_a_4388_);
lean_dec(v___x_4387_);
v___x_4390_ = lean_box(0);
v_isShared_4391_ = v_isSharedCheck_4398_;
goto v_resetjp_4389_;
}
v_resetjp_4389_:
{
lean_object* v___x_4392_; lean_object* v___x_4393_; lean_object* v___x_4394_; lean_object* v___x_4396_; 
v___x_4392_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___closed__0));
v___x_4393_ = l_Lean_Doc_joinBlocks(v_a_4388_);
lean_dec(v_a_4388_);
v___x_4394_ = l_Lean_Doc_prefixLines(v___x_4392_, v___x_4393_);
lean_dec_ref(v___x_4393_);
if (v_isShared_4391_ == 0)
{
lean_ctor_set(v___x_4390_, 0, v___x_4394_);
v___x_4396_ = v___x_4390_;
goto v_reusejp_4395_;
}
else
{
lean_object* v_reuseFailAlloc_4397_; 
v_reuseFailAlloc_4397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4397_, 0, v___x_4394_);
v___x_4396_ = v_reuseFailAlloc_4397_;
goto v_reusejp_4395_;
}
v_reusejp_4395_:
{
return v___x_4396_;
}
}
}
else
{
lean_object* v_a_4399_; lean_object* v___x_4401_; uint8_t v_isShared_4402_; uint8_t v_isSharedCheck_4406_; 
v_a_4399_ = lean_ctor_get(v___x_4387_, 0);
v_isSharedCheck_4406_ = !lean_is_exclusive(v___x_4387_);
if (v_isSharedCheck_4406_ == 0)
{
v___x_4401_ = v___x_4387_;
v_isShared_4402_ = v_isSharedCheck_4406_;
goto v_resetjp_4400_;
}
else
{
lean_inc(v_a_4399_);
lean_dec(v___x_4387_);
v___x_4401_ = lean_box(0);
v_isShared_4402_ = v_isSharedCheck_4406_;
goto v_resetjp_4400_;
}
v_resetjp_4400_:
{
lean_object* v___x_4404_; 
if (v_isShared_4402_ == 0)
{
v___x_4404_ = v___x_4401_;
goto v_reusejp_4403_;
}
else
{
lean_object* v_reuseFailAlloc_4405_; 
v_reuseFailAlloc_4405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4405_, 0, v_a_4399_);
v___x_4404_ = v_reuseFailAlloc_4405_;
goto v_reusejp_4403_;
}
v_reusejp_4403_:
{
return v___x_4404_;
}
}
}
}
case 6:
{
lean_object* v_content_4407_; size_t v_sz_4408_; lean_object* v___x_4409_; lean_object* v___x_4410_; lean_object* v___x_4411_; lean_object* v___x_4412_; lean_object* v___x_4021__overap_4413_; lean_object* v___x_4414_; 
v_content_4407_ = lean_ctor_get(v_x_4270_, 0);
lean_inc_ref(v_content_4407_);
lean_dec_ref_known(v_x_4270_, 1);
v_sz_4408_ = lean_array_size(v_content_4407_);
v___x_4409_ = l_unsafeCast___redArg(v_content_4407_);
lean_dec_ref(v_content_4407_);
v___x_4410_ = lean_box_usize(v_sz_4408_);
v___x_4411_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0___boxed__const__1));
v___x_4412_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_findSimpleDocString_x3f_spec__2___boxed), 7, 3);
lean_closure_set(v___x_4412_, 0, v___x_4410_);
lean_closure_set(v___x_4412_, 1, v___x_4411_);
lean_closure_set(v___x_4412_, 2, v___x_4409_);
v___x_4021__overap_4413_ = l_unsafeCast___redArg(v___x_4412_);
lean_dec_ref(v___x_4412_);
lean_inc(v_a_4273_);
lean_inc_ref(v_a_4272_);
lean_inc(v_a_4271_);
v___x_4414_ = lean_apply_4(v___x_4021__overap_4413_, v_a_4271_, v_a_4272_, v_a_4273_, lean_box(0));
if (lean_obj_tag(v___x_4414_) == 0)
{
lean_object* v_a_4415_; lean_object* v___x_4417_; uint8_t v_isShared_4418_; uint8_t v_isSharedCheck_4423_; 
v_a_4415_ = lean_ctor_get(v___x_4414_, 0);
v_isSharedCheck_4423_ = !lean_is_exclusive(v___x_4414_);
if (v_isSharedCheck_4423_ == 0)
{
v___x_4417_ = v___x_4414_;
v_isShared_4418_ = v_isSharedCheck_4423_;
goto v_resetjp_4416_;
}
else
{
lean_inc(v_a_4415_);
lean_dec(v___x_4414_);
v___x_4417_ = lean_box(0);
v_isShared_4418_ = v_isSharedCheck_4423_;
goto v_resetjp_4416_;
}
v_resetjp_4416_:
{
lean_object* v___x_4419_; lean_object* v___x_4421_; 
v___x_4419_ = l_Lean_Doc_joinBlocks(v_a_4415_);
lean_dec(v_a_4415_);
if (v_isShared_4418_ == 0)
{
lean_ctor_set(v___x_4417_, 0, v___x_4419_);
v___x_4421_ = v___x_4417_;
goto v_reusejp_4420_;
}
else
{
lean_object* v_reuseFailAlloc_4422_; 
v_reuseFailAlloc_4422_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4422_, 0, v___x_4419_);
v___x_4421_ = v_reuseFailAlloc_4422_;
goto v_reusejp_4420_;
}
v_reusejp_4420_:
{
return v___x_4421_;
}
}
}
else
{
lean_object* v_a_4424_; lean_object* v___x_4426_; uint8_t v_isShared_4427_; uint8_t v_isSharedCheck_4431_; 
v_a_4424_ = lean_ctor_get(v___x_4414_, 0);
v_isSharedCheck_4431_ = !lean_is_exclusive(v___x_4414_);
if (v_isSharedCheck_4431_ == 0)
{
v___x_4426_ = v___x_4414_;
v_isShared_4427_ = v_isSharedCheck_4431_;
goto v_resetjp_4425_;
}
else
{
lean_inc(v_a_4424_);
lean_dec(v___x_4414_);
v___x_4426_ = lean_box(0);
v_isShared_4427_ = v_isSharedCheck_4431_;
goto v_resetjp_4425_;
}
v_resetjp_4425_:
{
lean_object* v___x_4429_; 
if (v_isShared_4427_ == 0)
{
v___x_4429_ = v___x_4426_;
goto v_reusejp_4428_;
}
else
{
lean_object* v_reuseFailAlloc_4430_; 
v_reuseFailAlloc_4430_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4430_, 0, v_a_4424_);
v___x_4429_ = v_reuseFailAlloc_4430_;
goto v_reusejp_4428_;
}
v_reusejp_4428_:
{
return v___x_4429_;
}
}
}
}
default: 
{
lean_object* v_container_4432_; 
v_container_4432_ = lean_ctor_get(v_x_4270_, 0);
if (lean_obj_tag(v_container_4432_) == 0)
{
lean_object* v_content_4433_; lean_object* v_val_4434_; lean_object* v___f_4435_; lean_object* v___f_4436_; size_t v_sz_4437_; lean_object* v___x_4438_; lean_object* v___x_4439_; lean_object* v___x_4440_; lean_object* v___x_4441_; lean_object* v_fallback_4442_; lean_object* v___x_4443_; lean_object* v___x_4444_; 
lean_inc_ref(v_container_4432_);
v_content_4433_ = lean_ctor_get(v_x_4270_, 1);
lean_inc_ref(v_content_4433_);
lean_dec_ref_known(v_x_4270_, 2);
v_val_4434_ = lean_ctor_get(v_container_4432_, 0);
lean_inc(v_val_4434_);
lean_dec_ref_known(v_container_4432_, 1);
v___f_4435_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1___boxed), 5, 0);
v___f_4436_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1___closed__0));
v_sz_4437_ = lean_array_size(v_content_4433_);
v___x_4438_ = l_unsafeCast___redArg(v_content_4433_);
v___x_4439_ = lean_box_usize(v_sz_4437_);
v___x_4440_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0___boxed__const__1));
v___x_4441_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_findSimpleDocString_x3f_spec__2___boxed), 7, 3);
lean_closure_set(v___x_4441_, 0, v___x_4439_);
lean_closure_set(v___x_4441_, 1, v___x_4440_);
lean_closure_set(v___x_4441_, 2, v___x_4438_);
lean_inc_ref(v___x_4441_);
v_fallback_4442_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1___lam__1___boxed), 5, 1);
lean_closure_set(v_fallback_4442_, 0, v___x_4441_);
v___x_4443_ = l___private_Init_Dynamic_0__Dynamic_typeNameImpl(v_val_4434_);
v___x_4444_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_blockRendererForUnsafe(v___x_4443_, v_a_4272_, v_a_4273_);
lean_dec(v___x_4443_);
if (lean_obj_tag(v___x_4444_) == 0)
{
lean_object* v_a_4445_; 
v_a_4445_ = lean_ctor_get(v___x_4444_, 0);
lean_inc(v_a_4445_);
lean_dec_ref_known(v___x_4444_, 1);
if (lean_obj_tag(v_a_4445_) == 0)
{
lean_object* v___x_4026__overap_4446_; lean_object* v___x_4447_; 
lean_dec_ref(v_fallback_4442_);
lean_dec_ref(v___f_4435_);
lean_dec(v_val_4434_);
lean_dec_ref(v_content_4433_);
v___x_4026__overap_4446_ = l_unsafeCast___redArg(v___x_4441_);
lean_dec_ref(v___x_4441_);
lean_inc(v_a_4273_);
lean_inc_ref(v_a_4272_);
lean_inc(v_a_4271_);
v___x_4447_ = lean_apply_4(v___x_4026__overap_4446_, v_a_4271_, v_a_4272_, v_a_4273_, lean_box(0));
if (lean_obj_tag(v___x_4447_) == 0)
{
lean_object* v_a_4448_; lean_object* v___x_4450_; uint8_t v_isShared_4451_; uint8_t v_isSharedCheck_4456_; 
v_a_4448_ = lean_ctor_get(v___x_4447_, 0);
v_isSharedCheck_4456_ = !lean_is_exclusive(v___x_4447_);
if (v_isSharedCheck_4456_ == 0)
{
v___x_4450_ = v___x_4447_;
v_isShared_4451_ = v_isSharedCheck_4456_;
goto v_resetjp_4449_;
}
else
{
lean_inc(v_a_4448_);
lean_dec(v___x_4447_);
v___x_4450_ = lean_box(0);
v_isShared_4451_ = v_isSharedCheck_4456_;
goto v_resetjp_4449_;
}
v_resetjp_4449_:
{
lean_object* v___x_4452_; lean_object* v___x_4454_; 
v___x_4452_ = l_Lean_Doc_joinBlocks(v_a_4448_);
lean_dec(v_a_4448_);
if (v_isShared_4451_ == 0)
{
lean_ctor_set(v___x_4450_, 0, v___x_4452_);
v___x_4454_ = v___x_4450_;
goto v_reusejp_4453_;
}
else
{
lean_object* v_reuseFailAlloc_4455_; 
v_reuseFailAlloc_4455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4455_, 0, v___x_4452_);
v___x_4454_ = v_reuseFailAlloc_4455_;
goto v_reusejp_4453_;
}
v_reusejp_4453_:
{
return v___x_4454_;
}
}
}
else
{
lean_object* v_a_4457_; lean_object* v___x_4459_; uint8_t v_isShared_4460_; uint8_t v_isSharedCheck_4464_; 
v_a_4457_ = lean_ctor_get(v___x_4447_, 0);
v_isSharedCheck_4464_ = !lean_is_exclusive(v___x_4447_);
if (v_isSharedCheck_4464_ == 0)
{
v___x_4459_ = v___x_4447_;
v_isShared_4460_ = v_isSharedCheck_4464_;
goto v_resetjp_4458_;
}
else
{
lean_inc(v_a_4457_);
lean_dec(v___x_4447_);
v___x_4459_ = lean_box(0);
v_isShared_4460_ = v_isSharedCheck_4464_;
goto v_resetjp_4458_;
}
v_resetjp_4458_:
{
lean_object* v___x_4462_; 
if (v_isShared_4460_ == 0)
{
v___x_4462_ = v___x_4459_;
goto v_reusejp_4461_;
}
else
{
lean_object* v_reuseFailAlloc_4463_; 
v_reuseFailAlloc_4463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4463_, 0, v_a_4457_);
v___x_4462_ = v_reuseFailAlloc_4463_;
goto v_reusejp_4461_;
}
v_reusejp_4461_:
{
return v___x_4462_;
}
}
}
}
else
{
lean_object* v_val_4465_; lean_object* v___x_4466_; lean_object* v___x_4467_; 
lean_dec_ref(v___x_4441_);
v_val_4465_ = lean_ctor_get(v_a_4445_, 0);
lean_inc(v_val_4465_);
lean_dec_ref_known(v_a_4445_, 1);
v___x_4466_ = lean_apply_4(v_val_4465_, v___f_4436_, v___f_4435_, v_val_4434_, v_content_4433_);
v___x_4467_ = l_Lean_Doc_withRendererFallback(v_fallback_4442_, v___x_4466_, v_a_4271_, v_a_4272_, v_a_4273_);
return v___x_4467_;
}
}
else
{
lean_object* v_a_4468_; lean_object* v___x_4470_; uint8_t v_isShared_4471_; uint8_t v_isSharedCheck_4475_; 
lean_dec_ref(v_fallback_4442_);
lean_dec_ref(v___x_4441_);
lean_dec_ref(v___f_4435_);
lean_dec(v_val_4434_);
lean_dec_ref(v_content_4433_);
v_a_4468_ = lean_ctor_get(v___x_4444_, 0);
v_isSharedCheck_4475_ = !lean_is_exclusive(v___x_4444_);
if (v_isSharedCheck_4475_ == 0)
{
v___x_4470_ = v___x_4444_;
v_isShared_4471_ = v_isSharedCheck_4475_;
goto v_resetjp_4469_;
}
else
{
lean_inc(v_a_4468_);
lean_dec(v___x_4444_);
v___x_4470_ = lean_box(0);
v_isShared_4471_ = v_isSharedCheck_4475_;
goto v_resetjp_4469_;
}
v_resetjp_4469_:
{
lean_object* v___x_4473_; 
if (v_isShared_4471_ == 0)
{
v___x_4473_ = v___x_4470_;
goto v_reusejp_4472_;
}
else
{
lean_object* v_reuseFailAlloc_4474_; 
v_reuseFailAlloc_4474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4474_, 0, v_a_4468_);
v___x_4473_ = v_reuseFailAlloc_4474_;
goto v_reusejp_4472_;
}
v_reusejp_4472_:
{
return v___x_4473_;
}
}
}
}
else
{
lean_object* v_content_4476_; size_t v_sz_4477_; lean_object* v___x_4478_; lean_object* v___x_4479_; lean_object* v___x_4480_; lean_object* v___x_4481_; lean_object* v___x_4029__overap_4482_; lean_object* v___x_4483_; 
v_content_4476_ = lean_ctor_get(v_x_4270_, 1);
lean_inc_ref(v_content_4476_);
lean_dec_ref_known(v_x_4270_, 2);
v_sz_4477_ = lean_array_size(v_content_4476_);
v___x_4478_ = l_unsafeCast___redArg(v_content_4476_);
lean_dec_ref(v_content_4476_);
v___x_4479_ = lean_box_usize(v_sz_4477_);
v___x_4480_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0___boxed__const__1));
v___x_4481_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_findSimpleDocString_x3f_spec__2___boxed), 7, 3);
lean_closure_set(v___x_4481_, 0, v___x_4479_);
lean_closure_set(v___x_4481_, 1, v___x_4480_);
lean_closure_set(v___x_4481_, 2, v___x_4478_);
v___x_4029__overap_4482_ = l_unsafeCast___redArg(v___x_4481_);
lean_dec_ref(v___x_4481_);
lean_inc(v_a_4273_);
lean_inc_ref(v_a_4272_);
lean_inc(v_a_4271_);
v___x_4483_ = lean_apply_4(v___x_4029__overap_4482_, v_a_4271_, v_a_4272_, v_a_4273_, lean_box(0));
if (lean_obj_tag(v___x_4483_) == 0)
{
lean_object* v_a_4484_; lean_object* v___x_4486_; uint8_t v_isShared_4487_; uint8_t v_isSharedCheck_4492_; 
v_a_4484_ = lean_ctor_get(v___x_4483_, 0);
v_isSharedCheck_4492_ = !lean_is_exclusive(v___x_4483_);
if (v_isSharedCheck_4492_ == 0)
{
v___x_4486_ = v___x_4483_;
v_isShared_4487_ = v_isSharedCheck_4492_;
goto v_resetjp_4485_;
}
else
{
lean_inc(v_a_4484_);
lean_dec(v___x_4483_);
v___x_4486_ = lean_box(0);
v_isShared_4487_ = v_isSharedCheck_4492_;
goto v_resetjp_4485_;
}
v_resetjp_4485_:
{
lean_object* v___x_4488_; lean_object* v___x_4490_; 
v___x_4488_ = l_Lean_Doc_joinBlocks(v_a_4484_);
lean_dec(v_a_4484_);
if (v_isShared_4487_ == 0)
{
lean_ctor_set(v___x_4486_, 0, v___x_4488_);
v___x_4490_ = v___x_4486_;
goto v_reusejp_4489_;
}
else
{
lean_object* v_reuseFailAlloc_4491_; 
v_reuseFailAlloc_4491_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4491_, 0, v___x_4488_);
v___x_4490_ = v_reuseFailAlloc_4491_;
goto v_reusejp_4489_;
}
v_reusejp_4489_:
{
return v___x_4490_;
}
}
}
else
{
lean_object* v_a_4493_; lean_object* v___x_4495_; uint8_t v_isShared_4496_; uint8_t v_isSharedCheck_4500_; 
v_a_4493_ = lean_ctor_get(v___x_4483_, 0);
v_isSharedCheck_4500_ = !lean_is_exclusive(v___x_4483_);
if (v_isSharedCheck_4500_ == 0)
{
v___x_4495_ = v___x_4483_;
v_isShared_4496_ = v_isSharedCheck_4500_;
goto v_resetjp_4494_;
}
else
{
lean_inc(v_a_4493_);
lean_dec(v___x_4483_);
v___x_4495_ = lean_box(0);
v_isShared_4496_ = v_isSharedCheck_4500_;
goto v_resetjp_4494_;
}
v_resetjp_4494_:
{
lean_object* v___x_4498_; 
if (v_isShared_4496_ == 0)
{
v___x_4498_ = v___x_4495_;
goto v_reusejp_4497_;
}
else
{
lean_object* v_reuseFailAlloc_4499_; 
v_reuseFailAlloc_4499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4499_, 0, v_a_4493_);
v___x_4498_ = v_reuseFailAlloc_4499_;
goto v_reusejp_4497_;
}
v_reusejp_4497_:
{
return v___x_4498_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_findSimpleDocString_x3f_spec__2(size_t v_sz_4501_, size_t v_i_4502_, lean_object* v_bs_4503_, lean_object* v___y_4504_, lean_object* v___y_4505_, lean_object* v___y_4506_){
_start:
{
uint8_t v___x_4508_; 
v___x_4508_ = lean_usize_dec_lt(v_i_4502_, v_sz_4501_);
if (v___x_4508_ == 0)
{
lean_object* v___x_4509_; lean_object* v___x_4510_; 
v___x_4509_ = l_unsafeCast___redArg(v_bs_4503_);
lean_dec_ref(v_bs_4503_);
v___x_4510_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4510_, 0, v___x_4509_);
return v___x_4510_;
}
else
{
lean_object* v_v_4511_; lean_object* v___x_4512_; lean_object* v_bs_x27_4513_; lean_object* v___x_4514_; lean_object* v___x_4515_; 
v_v_4511_ = lean_array_uget(v_bs_4503_, v_i_4502_);
v___x_4512_ = lean_unsigned_to_nat(0u);
v_bs_x27_4513_ = lean_array_uset(v_bs_4503_, v_i_4502_, v___x_4512_);
v___x_4514_ = l_unsafeCast___redArg(v_v_4511_);
lean_dec(v_v_4511_);
v___x_4515_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1(v___x_4514_, v___y_4504_, v___y_4505_, v___y_4506_);
if (lean_obj_tag(v___x_4515_) == 0)
{
lean_object* v_a_4516_; size_t v___x_4517_; size_t v___x_4518_; lean_object* v___x_4519_; lean_object* v___x_4520_; 
v_a_4516_ = lean_ctor_get(v___x_4515_, 0);
lean_inc(v_a_4516_);
lean_dec_ref_known(v___x_4515_, 1);
v___x_4517_ = ((size_t)1ULL);
v___x_4518_ = lean_usize_add(v_i_4502_, v___x_4517_);
v___x_4519_ = l_unsafeCast___redArg(v_a_4516_);
lean_dec(v_a_4516_);
v___x_4520_ = lean_array_uset(v_bs_x27_4513_, v_i_4502_, v___x_4519_);
v_i_4502_ = v___x_4518_;
v_bs_4503_ = v___x_4520_;
goto _start;
}
else
{
lean_object* v_a_4522_; lean_object* v___x_4524_; uint8_t v_isShared_4525_; uint8_t v_isSharedCheck_4529_; 
lean_dec_ref(v_bs_x27_4513_);
v_a_4522_ = lean_ctor_get(v___x_4515_, 0);
v_isSharedCheck_4529_ = !lean_is_exclusive(v___x_4515_);
if (v_isSharedCheck_4529_ == 0)
{
v___x_4524_ = v___x_4515_;
v_isShared_4525_ = v_isSharedCheck_4529_;
goto v_resetjp_4523_;
}
else
{
lean_inc(v_a_4522_);
lean_dec(v___x_4515_);
v___x_4524_ = lean_box(0);
v_isShared_4525_ = v_isSharedCheck_4529_;
goto v_resetjp_4523_;
}
v_resetjp_4523_:
{
lean_object* v___x_4527_; 
if (v_isShared_4525_ == 0)
{
v___x_4527_ = v___x_4524_;
goto v_reusejp_4526_;
}
else
{
lean_object* v_reuseFailAlloc_4528_; 
v_reuseFailAlloc_4528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4528_, 0, v_a_4522_);
v___x_4527_ = v_reuseFailAlloc_4528_;
goto v_reusejp_4526_;
}
v_reusejp_4526_:
{
return v___x_4527_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1_spec__7___boxed(lean_object* v_as_4530_, lean_object* v_sz_4531_, lean_object* v_i_4532_, lean_object* v_b_4533_, lean_object* v___y_4534_, lean_object* v___y_4535_, lean_object* v___y_4536_, lean_object* v___y_4537_){
_start:
{
size_t v_sz_boxed_4538_; size_t v_i_boxed_4539_; lean_object* v_res_4540_; 
v_sz_boxed_4538_ = lean_unbox_usize(v_sz_4531_);
lean_dec(v_sz_4531_);
v_i_boxed_4539_ = lean_unbox_usize(v_i_4532_);
lean_dec(v_i_4532_);
v_res_4540_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1_spec__7(v_as_4530_, v_sz_boxed_4538_, v_i_boxed_4539_, v_b_4533_, v___y_4534_, v___y_4535_, v___y_4536_);
lean_dec(v___y_4536_);
lean_dec_ref(v___y_4535_);
lean_dec(v___y_4534_);
lean_dec_ref(v_as_4530_);
return v_res_4540_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__1(size_t v_sz_4541_, size_t v_i_4542_, lean_object* v_bs_4543_, lean_object* v___y_4544_, lean_object* v___y_4545_, lean_object* v___y_4546_){
_start:
{
uint8_t v___x_4548_; 
v___x_4548_ = lean_usize_dec_lt(v_i_4542_, v_sz_4541_);
if (v___x_4548_ == 0)
{
lean_object* v___x_4549_; lean_object* v___x_4550_; 
v___x_4549_ = l_unsafeCast___redArg(v_bs_4543_);
lean_dec_ref(v_bs_4543_);
v___x_4550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4550_, 0, v___x_4549_);
return v___x_4550_;
}
else
{
lean_object* v_v_4551_; lean_object* v___x_4552_; lean_object* v_bs_x27_4553_; lean_object* v___x_4554_; lean_object* v___x_4555_; lean_object* v___x_4556_; 
v_v_4551_ = lean_array_uget(v_bs_4543_, v_i_4542_);
v___x_4552_ = lean_unsigned_to_nat(0u);
v_bs_x27_4553_ = lean_array_uset(v_bs_4543_, v_i_4542_, v___x_4552_);
v___x_4554_ = l_unsafeCast___redArg(v_v_4551_);
lean_dec(v_v_4551_);
v___x_4555_ = ((lean_object*)(l_Lean_Doc_MarkdownM_instInhabitedInlineCtx_default___closed__0));
v___x_4556_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0(v___x_4555_, v___x_4554_, v___y_4544_, v___y_4545_, v___y_4546_);
if (lean_obj_tag(v___x_4556_) == 0)
{
lean_object* v_a_4557_; size_t v___x_4558_; size_t v___x_4559_; lean_object* v___x_4560_; lean_object* v___x_4561_; 
v_a_4557_ = lean_ctor_get(v___x_4556_, 0);
lean_inc(v_a_4557_);
lean_dec_ref_known(v___x_4556_, 1);
v___x_4558_ = ((size_t)1ULL);
v___x_4559_ = lean_usize_add(v_i_4542_, v___x_4558_);
v___x_4560_ = l_unsafeCast___redArg(v_a_4557_);
lean_dec(v_a_4557_);
v___x_4561_ = lean_array_uset(v_bs_x27_4553_, v_i_4542_, v___x_4560_);
v_i_4542_ = v___x_4559_;
v_bs_4543_ = v___x_4561_;
goto _start;
}
else
{
lean_object* v_a_4563_; lean_object* v___x_4565_; uint8_t v_isShared_4566_; uint8_t v_isSharedCheck_4570_; 
lean_dec_ref(v_bs_x27_4553_);
v_a_4563_ = lean_ctor_get(v___x_4556_, 0);
v_isSharedCheck_4570_ = !lean_is_exclusive(v___x_4556_);
if (v_isSharedCheck_4570_ == 0)
{
v___x_4565_ = v___x_4556_;
v_isShared_4566_ = v_isSharedCheck_4570_;
goto v_resetjp_4564_;
}
else
{
lean_inc(v_a_4563_);
lean_dec(v___x_4556_);
v___x_4565_ = lean_box(0);
v_isShared_4566_ = v_isSharedCheck_4570_;
goto v_resetjp_4564_;
}
v_resetjp_4564_:
{
lean_object* v___x_4568_; 
if (v_isShared_4566_ == 0)
{
v___x_4568_ = v___x_4565_;
goto v_reusejp_4567_;
}
else
{
lean_object* v_reuseFailAlloc_4569_; 
v_reuseFailAlloc_4569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4569_, 0, v_a_4563_);
v___x_4568_ = v_reuseFailAlloc_4569_;
goto v_reusejp_4567_;
}
v_reusejp_4567_:
{
return v___x_4568_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__1___boxed(lean_object* v_sz_4571_, lean_object* v_i_4572_, lean_object* v_bs_4573_, lean_object* v___y_4574_, lean_object* v___y_4575_, lean_object* v___y_4576_, lean_object* v___y_4577_){
_start:
{
size_t v_sz_boxed_4578_; size_t v_i_boxed_4579_; lean_object* v_res_4580_; 
v_sz_boxed_4578_ = lean_unbox_usize(v_sz_4571_);
lean_dec(v_sz_4571_);
v_i_boxed_4579_ = lean_unbox_usize(v_i_4572_);
lean_dec(v_i_4572_);
v_res_4580_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__1(v_sz_boxed_4578_, v_i_boxed_4579_, v_bs_4573_, v___y_4574_, v___y_4575_, v___y_4576_);
lean_dec(v___y_4576_);
lean_dec_ref(v___y_4575_);
lean_dec(v___y_4574_);
return v_res_4580_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__2(lean_object* v_x_4581_, lean_object* v_x_4582_){
_start:
{
lean_object* v_zero_4583_; uint8_t v_isZero_4584_; 
v_zero_4583_ = lean_unsigned_to_nat(0u);
v_isZero_4584_ = lean_nat_dec_eq(v_x_4581_, v_zero_4583_);
if (v_isZero_4584_ == 1)
{
lean_dec(v_x_4581_);
return v_x_4582_;
}
else
{
uint32_t v___x_4585_; lean_object* v_one_4586_; lean_object* v_n_4587_; lean_object* v___x_4588_; 
v___x_4585_ = 35;
v_one_4586_ = lean_unsigned_to_nat(1u);
v_n_4587_ = lean_nat_sub(v_x_4581_, v_one_4586_);
lean_dec(v_x_4581_);
v___x_4588_ = lean_string_push(v_x_4582_, v___x_4585_);
v_x_4581_ = v_n_4587_;
v_x_4582_ = v___x_4588_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__3___boxed(lean_object* v_p_4590_, lean_object* v___x_4591_, lean_object* v_sz_4592_, lean_object* v_i_4593_, lean_object* v_bs_4594_, lean_object* v___y_4595_, lean_object* v___y_4596_, lean_object* v___y_4597_, lean_object* v___y_4598_){
_start:
{
size_t v_sz_boxed_4599_; size_t v_i_boxed_4600_; lean_object* v_res_4601_; 
v_sz_boxed_4599_ = lean_unbox_usize(v_sz_4592_);
lean_dec(v_sz_4592_);
v_i_boxed_4600_ = lean_unbox_usize(v_i_4593_);
lean_dec(v_i_4593_);
v_res_4601_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__3(v_p_4590_, v___x_4591_, v_sz_boxed_4599_, v_i_boxed_4600_, v_bs_4594_, v___y_4595_, v___y_4596_, v___y_4597_);
lean_dec(v___y_4597_);
lean_dec_ref(v___y_4596_);
lean_dec(v___y_4595_);
lean_dec(v___x_4591_);
return v_res_4601_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0___redArg(lean_object* v_level_4602_, lean_object* v_part_4603_, lean_object* v_a_4604_, lean_object* v_a_4605_, lean_object* v_a_4606_){
_start:
{
lean_object* v_title_4608_; lean_object* v_content_4609_; lean_object* v_subParts_4610_; size_t v_sz_4611_; lean_object* v___x_4612_; lean_object* v___x_4613_; lean_object* v___x_4614_; lean_object* v___x_4615_; lean_object* v___x_4000__overap_4616_; lean_object* v___x_4617_; 
v_title_4608_ = lean_ctor_get(v_part_4603_, 0);
v_content_4609_ = lean_ctor_get(v_part_4603_, 3);
v_subParts_4610_ = lean_ctor_get(v_part_4603_, 4);
v_sz_4611_ = lean_array_size(v_title_4608_);
v___x_4612_ = l_unsafeCast___redArg(v_title_4608_);
v___x_4613_ = lean_box_usize(v_sz_4611_);
v___x_4614_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0___boxed__const__1));
v___x_4615_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__1___boxed), 7, 3);
lean_closure_set(v___x_4615_, 0, v___x_4613_);
lean_closure_set(v___x_4615_, 1, v___x_4614_);
lean_closure_set(v___x_4615_, 2, v___x_4612_);
v___x_4000__overap_4616_ = l_unsafeCast___redArg(v___x_4615_);
lean_dec_ref(v___x_4615_);
lean_inc(v_a_4606_);
lean_inc_ref(v_a_4605_);
lean_inc(v_a_4604_);
v___x_4617_ = lean_apply_4(v___x_4000__overap_4616_, v_a_4604_, v_a_4605_, v_a_4606_, lean_box(0));
if (lean_obj_tag(v___x_4617_) == 0)
{
lean_object* v_a_4618_; lean_object* v___x_4619_; lean_object* v___x_4620_; lean_object* v___x_4621_; lean_object* v___x_4622_; lean_object* v___x_4623_; lean_object* v___x_4624_; lean_object* v___x_4625_; lean_object* v___x_4626_; lean_object* v___x_4627_; lean_object* v___x_4628_; lean_object* v___x_4629_; size_t v_sz_4630_; lean_object* v___x_4631_; lean_object* v___x_4632_; lean_object* v___x_4633_; lean_object* v___x_4634_; lean_object* v___x_4004__overap_4635_; lean_object* v___x_4636_; 
v_a_4618_ = lean_ctor_get(v___x_4617_, 0);
lean_inc(v_a_4618_);
lean_dec_ref_known(v___x_4617_, 1);
v___x_4619_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinBlocks_spec__0___closed__0));
v___x_4620_ = lean_unsigned_to_nat(1u);
v___x_4621_ = lean_nat_add(v_level_4602_, v___x_4620_);
lean_inc(v___x_4621_);
v___x_4622_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__2(v___x_4621_, v___x_4619_);
v___x_4623_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_quoteCode___closed__0));
v___x_4624_ = lean_string_append(v___x_4622_, v___x_4623_);
v___x_4625_ = lean_mk_empty_array_with_capacity(v___x_4620_);
lean_inc_ref_n(v___x_4625_, 2);
v___x_4626_ = lean_array_push(v___x_4625_, v___x_4624_);
v___x_4627_ = lean_array_push(v___x_4625_, v___x_4626_);
v___x_4628_ = l_Array_append___redArg(v___x_4627_, v_a_4618_);
lean_dec(v_a_4618_);
v___x_4629_ = l_Lean_Doc_joinInlines(v___x_4628_);
lean_dec_ref(v___x_4628_);
v_sz_4630_ = lean_array_size(v_content_4609_);
v___x_4631_ = l_unsafeCast___redArg(v_content_4609_);
v___x_4632_ = lean_box_usize(v_sz_4630_);
v___x_4633_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0___boxed__const__1));
v___x_4634_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_findSimpleDocString_x3f_spec__2___boxed), 7, 3);
lean_closure_set(v___x_4634_, 0, v___x_4632_);
lean_closure_set(v___x_4634_, 1, v___x_4633_);
lean_closure_set(v___x_4634_, 2, v___x_4631_);
v___x_4004__overap_4635_ = l_unsafeCast___redArg(v___x_4634_);
lean_dec_ref(v___x_4634_);
lean_inc(v_a_4606_);
lean_inc_ref(v_a_4605_);
lean_inc(v_a_4604_);
v___x_4636_ = lean_apply_4(v___x_4004__overap_4635_, v_a_4604_, v_a_4605_, v_a_4606_, lean_box(0));
if (lean_obj_tag(v___x_4636_) == 0)
{
lean_object* v_a_4637_; size_t v_sz_4638_; lean_object* v___x_4639_; lean_object* v___x_4640_; lean_object* v___x_4641_; lean_object* v___x_4642_; lean_object* v___x_4007__overap_4643_; lean_object* v___x_4644_; 
v_a_4637_ = lean_ctor_get(v___x_4636_, 0);
lean_inc(v_a_4637_);
lean_dec_ref_known(v___x_4636_, 1);
v_sz_4638_ = lean_array_size(v_subParts_4610_);
v___x_4639_ = l_unsafeCast___redArg(v_subParts_4610_);
v___x_4640_ = lean_box_usize(v_sz_4638_);
v___x_4641_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0___boxed__const__1));
v___x_4642_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__3___boxed), 9, 5);
lean_closure_set(v___x_4642_, 0, lean_box(0));
lean_closure_set(v___x_4642_, 1, v___x_4621_);
lean_closure_set(v___x_4642_, 2, v___x_4640_);
lean_closure_set(v___x_4642_, 3, v___x_4641_);
lean_closure_set(v___x_4642_, 4, v___x_4639_);
v___x_4007__overap_4643_ = l_unsafeCast___redArg(v___x_4642_);
lean_dec_ref(v___x_4642_);
lean_inc(v_a_4606_);
lean_inc_ref(v_a_4605_);
lean_inc(v_a_4604_);
v___x_4644_ = lean_apply_4(v___x_4007__overap_4643_, v_a_4604_, v_a_4605_, v_a_4606_, lean_box(0));
if (lean_obj_tag(v___x_4644_) == 0)
{
lean_object* v_a_4645_; lean_object* v___x_4647_; uint8_t v_isShared_4648_; uint8_t v_isSharedCheck_4656_; 
v_a_4645_ = lean_ctor_get(v___x_4644_, 0);
v_isSharedCheck_4656_ = !lean_is_exclusive(v___x_4644_);
if (v_isSharedCheck_4656_ == 0)
{
v___x_4647_ = v___x_4644_;
v_isShared_4648_ = v_isSharedCheck_4656_;
goto v_resetjp_4646_;
}
else
{
lean_inc(v_a_4645_);
lean_dec(v___x_4644_);
v___x_4647_ = lean_box(0);
v_isShared_4648_ = v_isSharedCheck_4656_;
goto v_resetjp_4646_;
}
v_resetjp_4646_:
{
lean_object* v___x_4649_; lean_object* v___x_4650_; lean_object* v___x_4651_; lean_object* v___x_4652_; lean_object* v___x_4654_; 
v___x_4649_ = lean_array_push(v___x_4625_, v___x_4629_);
v___x_4650_ = l_Array_append___redArg(v___x_4649_, v_a_4637_);
lean_dec(v_a_4637_);
v___x_4651_ = l_Array_append___redArg(v___x_4650_, v_a_4645_);
lean_dec(v_a_4645_);
v___x_4652_ = l_Lean_Doc_joinBlocks(v___x_4651_);
lean_dec_ref(v___x_4651_);
if (v_isShared_4648_ == 0)
{
lean_ctor_set(v___x_4647_, 0, v___x_4652_);
v___x_4654_ = v___x_4647_;
goto v_reusejp_4653_;
}
else
{
lean_object* v_reuseFailAlloc_4655_; 
v_reuseFailAlloc_4655_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4655_, 0, v___x_4652_);
v___x_4654_ = v_reuseFailAlloc_4655_;
goto v_reusejp_4653_;
}
v_reusejp_4653_:
{
return v___x_4654_;
}
}
}
else
{
lean_object* v_a_4657_; lean_object* v___x_4659_; uint8_t v_isShared_4660_; uint8_t v_isSharedCheck_4664_; 
lean_dec(v_a_4637_);
lean_dec_ref(v___x_4629_);
lean_dec_ref(v___x_4625_);
v_a_4657_ = lean_ctor_get(v___x_4644_, 0);
v_isSharedCheck_4664_ = !lean_is_exclusive(v___x_4644_);
if (v_isSharedCheck_4664_ == 0)
{
v___x_4659_ = v___x_4644_;
v_isShared_4660_ = v_isSharedCheck_4664_;
goto v_resetjp_4658_;
}
else
{
lean_inc(v_a_4657_);
lean_dec(v___x_4644_);
v___x_4659_ = lean_box(0);
v_isShared_4660_ = v_isSharedCheck_4664_;
goto v_resetjp_4658_;
}
v_resetjp_4658_:
{
lean_object* v___x_4662_; 
if (v_isShared_4660_ == 0)
{
v___x_4662_ = v___x_4659_;
goto v_reusejp_4661_;
}
else
{
lean_object* v_reuseFailAlloc_4663_; 
v_reuseFailAlloc_4663_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4663_, 0, v_a_4657_);
v___x_4662_ = v_reuseFailAlloc_4663_;
goto v_reusejp_4661_;
}
v_reusejp_4661_:
{
return v___x_4662_;
}
}
}
}
else
{
lean_object* v_a_4665_; lean_object* v___x_4667_; uint8_t v_isShared_4668_; uint8_t v_isSharedCheck_4672_; 
lean_dec_ref(v___x_4629_);
lean_dec_ref(v___x_4625_);
lean_dec(v___x_4621_);
v_a_4665_ = lean_ctor_get(v___x_4636_, 0);
v_isSharedCheck_4672_ = !lean_is_exclusive(v___x_4636_);
if (v_isSharedCheck_4672_ == 0)
{
v___x_4667_ = v___x_4636_;
v_isShared_4668_ = v_isSharedCheck_4672_;
goto v_resetjp_4666_;
}
else
{
lean_inc(v_a_4665_);
lean_dec(v___x_4636_);
v___x_4667_ = lean_box(0);
v_isShared_4668_ = v_isSharedCheck_4672_;
goto v_resetjp_4666_;
}
v_resetjp_4666_:
{
lean_object* v___x_4670_; 
if (v_isShared_4668_ == 0)
{
v___x_4670_ = v___x_4667_;
goto v_reusejp_4669_;
}
else
{
lean_object* v_reuseFailAlloc_4671_; 
v_reuseFailAlloc_4671_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4671_, 0, v_a_4665_);
v___x_4670_ = v_reuseFailAlloc_4671_;
goto v_reusejp_4669_;
}
v_reusejp_4669_:
{
return v___x_4670_;
}
}
}
}
else
{
lean_object* v_a_4673_; lean_object* v___x_4675_; uint8_t v_isShared_4676_; uint8_t v_isSharedCheck_4680_; 
v_a_4673_ = lean_ctor_get(v___x_4617_, 0);
v_isSharedCheck_4680_ = !lean_is_exclusive(v___x_4617_);
if (v_isSharedCheck_4680_ == 0)
{
v___x_4675_ = v___x_4617_;
v_isShared_4676_ = v_isSharedCheck_4680_;
goto v_resetjp_4674_;
}
else
{
lean_inc(v_a_4673_);
lean_dec(v___x_4617_);
v___x_4675_ = lean_box(0);
v_isShared_4676_ = v_isSharedCheck_4680_;
goto v_resetjp_4674_;
}
v_resetjp_4674_:
{
lean_object* v___x_4678_; 
if (v_isShared_4676_ == 0)
{
v___x_4678_ = v___x_4675_;
goto v_reusejp_4677_;
}
else
{
lean_object* v_reuseFailAlloc_4679_; 
v_reuseFailAlloc_4679_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4679_, 0, v_a_4673_);
v___x_4678_ = v_reuseFailAlloc_4679_;
goto v_reusejp_4677_;
}
v_reusejp_4677_:
{
return v___x_4678_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__3___redArg(lean_object* v___x_4681_, size_t v_sz_4682_, size_t v_i_4683_, lean_object* v_bs_4684_, lean_object* v___y_4685_, lean_object* v___y_4686_, lean_object* v___y_4687_){
_start:
{
uint8_t v___x_4689_; 
v___x_4689_ = lean_usize_dec_lt(v_i_4683_, v_sz_4682_);
if (v___x_4689_ == 0)
{
lean_object* v___x_4690_; lean_object* v___x_4691_; 
v___x_4690_ = l_unsafeCast___redArg(v_bs_4684_);
lean_dec_ref(v_bs_4684_);
v___x_4691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4691_, 0, v___x_4690_);
return v___x_4691_;
}
else
{
lean_object* v_v_4692_; lean_object* v___x_4693_; lean_object* v_bs_x27_4694_; lean_object* v___x_4695_; lean_object* v___x_4696_; 
v_v_4692_ = lean_array_uget(v_bs_4684_, v_i_4683_);
v___x_4693_ = lean_unsigned_to_nat(0u);
v_bs_x27_4694_ = lean_array_uset(v_bs_4684_, v_i_4683_, v___x_4693_);
v___x_4695_ = l_unsafeCast___redArg(v_v_4692_);
lean_dec(v_v_4692_);
v___x_4696_ = l_Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0___redArg(v___x_4681_, v___x_4695_, v___y_4685_, v___y_4686_, v___y_4687_);
lean_dec(v___x_4695_);
if (lean_obj_tag(v___x_4696_) == 0)
{
lean_object* v_a_4697_; size_t v___x_4698_; size_t v___x_4699_; lean_object* v___x_4700_; lean_object* v___x_4701_; 
v_a_4697_ = lean_ctor_get(v___x_4696_, 0);
lean_inc(v_a_4697_);
lean_dec_ref_known(v___x_4696_, 1);
v___x_4698_ = ((size_t)1ULL);
v___x_4699_ = lean_usize_add(v_i_4683_, v___x_4698_);
v___x_4700_ = l_unsafeCast___redArg(v_a_4697_);
lean_dec(v_a_4697_);
v___x_4701_ = lean_array_uset(v_bs_x27_4694_, v_i_4683_, v___x_4700_);
v_i_4683_ = v___x_4699_;
v_bs_4684_ = v___x_4701_;
goto _start;
}
else
{
lean_object* v_a_4703_; lean_object* v___x_4705_; uint8_t v_isShared_4706_; uint8_t v_isSharedCheck_4710_; 
lean_dec_ref(v_bs_x27_4694_);
v_a_4703_ = lean_ctor_get(v___x_4696_, 0);
v_isSharedCheck_4710_ = !lean_is_exclusive(v___x_4696_);
if (v_isSharedCheck_4710_ == 0)
{
v___x_4705_ = v___x_4696_;
v_isShared_4706_ = v_isSharedCheck_4710_;
goto v_resetjp_4704_;
}
else
{
lean_inc(v_a_4703_);
lean_dec(v___x_4696_);
v___x_4705_ = lean_box(0);
v_isShared_4706_ = v_isSharedCheck_4710_;
goto v_resetjp_4704_;
}
v_resetjp_4704_:
{
lean_object* v___x_4708_; 
if (v_isShared_4706_ == 0)
{
v___x_4708_ = v___x_4705_;
goto v_reusejp_4707_;
}
else
{
lean_object* v_reuseFailAlloc_4709_; 
v_reuseFailAlloc_4709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4709_, 0, v_a_4703_);
v___x_4708_ = v_reuseFailAlloc_4709_;
goto v_reusejp_4707_;
}
v_reusejp_4707_:
{
return v___x_4708_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__3(lean_object* v_p_4711_, lean_object* v___x_4712_, size_t v_sz_4713_, size_t v_i_4714_, lean_object* v_bs_4715_, lean_object* v___y_4716_, lean_object* v___y_4717_, lean_object* v___y_4718_){
_start:
{
lean_object* v___x_4720_; 
v___x_4720_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__3___redArg(v___x_4712_, v_sz_4713_, v_i_4714_, v_bs_4715_, v___y_4716_, v___y_4717_, v___y_4718_);
return v___x_4720_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__3___redArg___boxed(lean_object* v___x_4721_, lean_object* v_sz_4722_, lean_object* v_i_4723_, lean_object* v_bs_4724_, lean_object* v___y_4725_, lean_object* v___y_4726_, lean_object* v___y_4727_, lean_object* v___y_4728_){
_start:
{
size_t v_sz_boxed_4729_; size_t v_i_boxed_4730_; lean_object* v_res_4731_; 
v_sz_boxed_4729_ = lean_unbox_usize(v_sz_4722_);
lean_dec(v_sz_4722_);
v_i_boxed_4730_ = lean_unbox_usize(v_i_4723_);
lean_dec(v_i_4723_);
v_res_4731_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__3___redArg(v___x_4721_, v_sz_boxed_4729_, v_i_boxed_4730_, v_bs_4724_, v___y_4725_, v___y_4726_, v___y_4727_);
lean_dec(v___y_4727_);
lean_dec_ref(v___y_4726_);
lean_dec(v___y_4725_);
lean_dec(v___x_4721_);
return v_res_4731_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0___redArg___boxed(lean_object* v_level_4732_, lean_object* v_part_4733_, lean_object* v_a_4734_, lean_object* v_a_4735_, lean_object* v_a_4736_, lean_object* v_a_4737_){
_start:
{
lean_object* v_res_4738_; 
v_res_4738_ = l_Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0___redArg(v_level_4732_, v_part_4733_, v_a_4734_, v_a_4735_, v_a_4736_);
lean_dec(v_a_4736_);
lean_dec_ref(v_a_4735_);
lean_dec(v_a_4734_);
lean_dec_ref(v_part_4733_);
lean_dec(v_level_4732_);
return v_res_4738_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_findSimpleDocString_x3f_spec__3(size_t v_sz_4739_, size_t v_i_4740_, lean_object* v_bs_4741_, lean_object* v___y_4742_, lean_object* v___y_4743_, lean_object* v___y_4744_){
_start:
{
uint8_t v___x_4746_; 
v___x_4746_ = lean_usize_dec_lt(v_i_4740_, v_sz_4739_);
if (v___x_4746_ == 0)
{
lean_object* v___x_4747_; lean_object* v___x_4748_; 
v___x_4747_ = l_unsafeCast___redArg(v_bs_4741_);
lean_dec_ref(v_bs_4741_);
v___x_4748_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4748_, 0, v___x_4747_);
return v___x_4748_;
}
else
{
lean_object* v_v_4749_; lean_object* v___x_4750_; lean_object* v_bs_x27_4751_; lean_object* v___x_4752_; lean_object* v___x_4753_; 
v_v_4749_ = lean_array_uget(v_bs_4741_, v_i_4740_);
v___x_4750_ = lean_unsigned_to_nat(0u);
v_bs_x27_4751_ = lean_array_uset(v_bs_4741_, v_i_4740_, v___x_4750_);
v___x_4752_ = l_unsafeCast___redArg(v_v_4749_);
lean_dec(v_v_4749_);
v___x_4753_ = l_Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0___redArg(v___x_4750_, v___x_4752_, v___y_4742_, v___y_4743_, v___y_4744_);
lean_dec(v___x_4752_);
if (lean_obj_tag(v___x_4753_) == 0)
{
lean_object* v_a_4754_; size_t v___x_4755_; size_t v___x_4756_; lean_object* v___x_4757_; lean_object* v___x_4758_; 
v_a_4754_ = lean_ctor_get(v___x_4753_, 0);
lean_inc(v_a_4754_);
lean_dec_ref_known(v___x_4753_, 1);
v___x_4755_ = ((size_t)1ULL);
v___x_4756_ = lean_usize_add(v_i_4740_, v___x_4755_);
v___x_4757_ = l_unsafeCast___redArg(v_a_4754_);
lean_dec(v_a_4754_);
v___x_4758_ = lean_array_uset(v_bs_x27_4751_, v_i_4740_, v___x_4757_);
v_i_4740_ = v___x_4756_;
v_bs_4741_ = v___x_4758_;
goto _start;
}
else
{
lean_object* v_a_4760_; lean_object* v___x_4762_; uint8_t v_isShared_4763_; uint8_t v_isSharedCheck_4767_; 
lean_dec_ref(v_bs_x27_4751_);
v_a_4760_ = lean_ctor_get(v___x_4753_, 0);
v_isSharedCheck_4767_ = !lean_is_exclusive(v___x_4753_);
if (v_isSharedCheck_4767_ == 0)
{
v___x_4762_ = v___x_4753_;
v_isShared_4763_ = v_isSharedCheck_4767_;
goto v_resetjp_4761_;
}
else
{
lean_inc(v_a_4760_);
lean_dec(v___x_4753_);
v___x_4762_ = lean_box(0);
v_isShared_4763_ = v_isSharedCheck_4767_;
goto v_resetjp_4761_;
}
v_resetjp_4761_:
{
lean_object* v___x_4765_; 
if (v_isShared_4763_ == 0)
{
v___x_4765_ = v___x_4762_;
goto v_reusejp_4764_;
}
else
{
lean_object* v_reuseFailAlloc_4766_; 
v_reuseFailAlloc_4766_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4766_, 0, v_a_4760_);
v___x_4765_ = v_reuseFailAlloc_4766_;
goto v_reusejp_4764_;
}
v_reusejp_4764_:
{
return v___x_4765_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_findSimpleDocString_x3f_spec__3___boxed(lean_object* v_sz_4768_, lean_object* v_i_4769_, lean_object* v_bs_4770_, lean_object* v___y_4771_, lean_object* v___y_4772_, lean_object* v___y_4773_, lean_object* v___y_4774_){
_start:
{
size_t v_sz_boxed_4775_; size_t v_i_boxed_4776_; lean_object* v_res_4777_; 
v_sz_boxed_4775_ = lean_unbox_usize(v_sz_4768_);
lean_dec(v_sz_4768_);
v_i_boxed_4776_ = lean_unbox_usize(v_i_4769_);
lean_dec(v_i_4769_);
v_res_4777_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_findSimpleDocString_x3f_spec__3(v_sz_boxed_4775_, v_i_boxed_4776_, v_bs_4770_, v___y_4771_, v___y_4772_, v___y_4773_);
lean_dec(v___y_4773_);
lean_dec_ref(v___y_4772_);
lean_dec(v___y_4771_);
return v_res_4777_;
}
}
LEAN_EXPORT lean_object* l_Lean_findSimpleDocString_x3f___lam__0(lean_object* v_val_4778_, lean_object* v___y_4779_, lean_object* v___y_4780_, lean_object* v___y_4781_){
_start:
{
lean_object* v_text_4783_; lean_object* v_subsections_4784_; size_t v_sz_4785_; lean_object* v___x_4786_; lean_object* v___x_4787_; lean_object* v___x_4788_; lean_object* v___x_4789_; lean_object* v___x_4113__overap_4790_; lean_object* v___x_4791_; 
v_text_4783_ = lean_ctor_get(v_val_4778_, 0);
v_subsections_4784_ = lean_ctor_get(v_val_4778_, 1);
v_sz_4785_ = lean_array_size(v_text_4783_);
v___x_4786_ = l_unsafeCast___redArg(v_text_4783_);
v___x_4787_ = lean_box_usize(v_sz_4785_);
v___x_4788_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0___boxed__const__1));
v___x_4789_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_findSimpleDocString_x3f_spec__2___boxed), 7, 3);
lean_closure_set(v___x_4789_, 0, v___x_4787_);
lean_closure_set(v___x_4789_, 1, v___x_4788_);
lean_closure_set(v___x_4789_, 2, v___x_4786_);
v___x_4113__overap_4790_ = l_unsafeCast___redArg(v___x_4789_);
lean_dec_ref(v___x_4789_);
lean_inc(v___y_4781_);
lean_inc_ref(v___y_4780_);
lean_inc(v___y_4779_);
v___x_4791_ = lean_apply_4(v___x_4113__overap_4790_, v___y_4779_, v___y_4780_, v___y_4781_, lean_box(0));
if (lean_obj_tag(v___x_4791_) == 0)
{
lean_object* v_a_4792_; size_t v_sz_4793_; lean_object* v___x_4794_; lean_object* v___x_4795_; lean_object* v___x_4796_; lean_object* v___x_4797_; lean_object* v___x_4118__overap_4798_; lean_object* v___x_4799_; 
v_a_4792_ = lean_ctor_get(v___x_4791_, 0);
lean_inc(v_a_4792_);
lean_dec_ref_known(v___x_4791_, 1);
v_sz_4793_ = lean_array_size(v_subsections_4784_);
v___x_4794_ = l_unsafeCast___redArg(v_subsections_4784_);
v___x_4795_ = lean_box_usize(v_sz_4793_);
v___x_4796_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0___boxed__const__1));
v___x_4797_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_findSimpleDocString_x3f_spec__3___boxed), 7, 3);
lean_closure_set(v___x_4797_, 0, v___x_4795_);
lean_closure_set(v___x_4797_, 1, v___x_4796_);
lean_closure_set(v___x_4797_, 2, v___x_4794_);
v___x_4118__overap_4798_ = l_unsafeCast___redArg(v___x_4797_);
lean_dec_ref(v___x_4797_);
v___x_4799_ = lean_apply_4(v___x_4118__overap_4798_, v___y_4779_, v___y_4780_, v___y_4781_, lean_box(0));
if (lean_obj_tag(v___x_4799_) == 0)
{
lean_object* v_a_4800_; lean_object* v___x_4802_; uint8_t v_isShared_4803_; uint8_t v_isSharedCheck_4809_; 
v_a_4800_ = lean_ctor_get(v___x_4799_, 0);
v_isSharedCheck_4809_ = !lean_is_exclusive(v___x_4799_);
if (v_isSharedCheck_4809_ == 0)
{
v___x_4802_ = v___x_4799_;
v_isShared_4803_ = v_isSharedCheck_4809_;
goto v_resetjp_4801_;
}
else
{
lean_inc(v_a_4800_);
lean_dec(v___x_4799_);
v___x_4802_ = lean_box(0);
v_isShared_4803_ = v_isSharedCheck_4809_;
goto v_resetjp_4801_;
}
v_resetjp_4801_:
{
lean_object* v___x_4804_; lean_object* v___x_4805_; lean_object* v___x_4807_; 
v___x_4804_ = l_Array_append___redArg(v_a_4792_, v_a_4800_);
lean_dec(v_a_4800_);
v___x_4805_ = l_Lean_Doc_joinBlocks(v___x_4804_);
lean_dec_ref(v___x_4804_);
if (v_isShared_4803_ == 0)
{
lean_ctor_set(v___x_4802_, 0, v___x_4805_);
v___x_4807_ = v___x_4802_;
goto v_reusejp_4806_;
}
else
{
lean_object* v_reuseFailAlloc_4808_; 
v_reuseFailAlloc_4808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4808_, 0, v___x_4805_);
v___x_4807_ = v_reuseFailAlloc_4808_;
goto v_reusejp_4806_;
}
v_reusejp_4806_:
{
return v___x_4807_;
}
}
}
else
{
lean_object* v_a_4810_; lean_object* v___x_4812_; uint8_t v_isShared_4813_; uint8_t v_isSharedCheck_4817_; 
lean_dec(v_a_4792_);
v_a_4810_ = lean_ctor_get(v___x_4799_, 0);
v_isSharedCheck_4817_ = !lean_is_exclusive(v___x_4799_);
if (v_isSharedCheck_4817_ == 0)
{
v___x_4812_ = v___x_4799_;
v_isShared_4813_ = v_isSharedCheck_4817_;
goto v_resetjp_4811_;
}
else
{
lean_inc(v_a_4810_);
lean_dec(v___x_4799_);
v___x_4812_ = lean_box(0);
v_isShared_4813_ = v_isSharedCheck_4817_;
goto v_resetjp_4811_;
}
v_resetjp_4811_:
{
lean_object* v___x_4815_; 
if (v_isShared_4813_ == 0)
{
v___x_4815_ = v___x_4812_;
goto v_reusejp_4814_;
}
else
{
lean_object* v_reuseFailAlloc_4816_; 
v_reuseFailAlloc_4816_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4816_, 0, v_a_4810_);
v___x_4815_ = v_reuseFailAlloc_4816_;
goto v_reusejp_4814_;
}
v_reusejp_4814_:
{
return v___x_4815_;
}
}
}
}
else
{
lean_object* v_a_4818_; lean_object* v___x_4820_; uint8_t v_isShared_4821_; uint8_t v_isSharedCheck_4825_; 
lean_dec(v___y_4781_);
lean_dec_ref(v___y_4780_);
lean_dec(v___y_4779_);
v_a_4818_ = lean_ctor_get(v___x_4791_, 0);
v_isSharedCheck_4825_ = !lean_is_exclusive(v___x_4791_);
if (v_isSharedCheck_4825_ == 0)
{
v___x_4820_ = v___x_4791_;
v_isShared_4821_ = v_isSharedCheck_4825_;
goto v_resetjp_4819_;
}
else
{
lean_inc(v_a_4818_);
lean_dec(v___x_4791_);
v___x_4820_ = lean_box(0);
v_isShared_4821_ = v_isSharedCheck_4825_;
goto v_resetjp_4819_;
}
v_resetjp_4819_:
{
lean_object* v___x_4823_; 
if (v_isShared_4821_ == 0)
{
v___x_4823_ = v___x_4820_;
goto v_reusejp_4822_;
}
else
{
lean_object* v_reuseFailAlloc_4824_; 
v_reuseFailAlloc_4824_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4824_, 0, v_a_4818_);
v___x_4823_ = v_reuseFailAlloc_4824_;
goto v_reusejp_4822_;
}
v_reusejp_4822_:
{
return v___x_4823_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_findSimpleDocString_x3f___lam__0___boxed(lean_object* v_val_4826_, lean_object* v___y_4827_, lean_object* v___y_4828_, lean_object* v___y_4829_, lean_object* v___y_4830_){
_start:
{
lean_object* v_res_4831_; 
v_res_4831_ = l_Lean_findSimpleDocString_x3f___lam__0(v_val_4826_, v___y_4827_, v___y_4828_, v___y_4829_);
lean_dec_ref(v_val_4826_);
return v_res_4831_;
}
}
LEAN_EXPORT lean_object* l_Lean_findSimpleDocString_x3f(lean_object* v_env_4832_, lean_object* v_declName_4833_, uint8_t v_includeBuiltin_4834_, lean_object* v_options_4835_, lean_object* v_currNamespace_4836_, lean_object* v_openDecls_4837_, lean_object* v_cancelTk_x3f_4838_){
_start:
{
lean_object* v___x_4840_; 
lean_inc_ref(v_env_4832_);
v___x_4840_ = l_Lean_findInternalDocString_x3f(v_env_4832_, v_declName_4833_, v_includeBuiltin_4834_);
if (lean_obj_tag(v___x_4840_) == 0)
{
lean_object* v_a_4841_; lean_object* v___x_4843_; uint8_t v_isShared_4844_; uint8_t v_isSharedCheck_4884_; 
v_a_4841_ = lean_ctor_get(v___x_4840_, 0);
v_isSharedCheck_4884_ = !lean_is_exclusive(v___x_4840_);
if (v_isSharedCheck_4884_ == 0)
{
v___x_4843_ = v___x_4840_;
v_isShared_4844_ = v_isSharedCheck_4884_;
goto v_resetjp_4842_;
}
else
{
lean_inc(v_a_4841_);
lean_dec(v___x_4840_);
v___x_4843_ = lean_box(0);
v_isShared_4844_ = v_isSharedCheck_4884_;
goto v_resetjp_4842_;
}
v_resetjp_4842_:
{
if (lean_obj_tag(v_a_4841_) == 0)
{
lean_object* v___x_4845_; lean_object* v___x_4847_; 
lean_dec(v_cancelTk_x3f_4838_);
lean_dec(v_openDecls_4837_);
lean_dec(v_currNamespace_4836_);
lean_dec_ref(v_options_4835_);
lean_dec_ref(v_env_4832_);
v___x_4845_ = lean_box(0);
if (v_isShared_4844_ == 0)
{
lean_ctor_set(v___x_4843_, 0, v___x_4845_);
v___x_4847_ = v___x_4843_;
goto v_reusejp_4846_;
}
else
{
lean_object* v_reuseFailAlloc_4848_; 
v_reuseFailAlloc_4848_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4848_, 0, v___x_4845_);
v___x_4847_ = v_reuseFailAlloc_4848_;
goto v_reusejp_4846_;
}
v_reusejp_4846_:
{
return v___x_4847_;
}
}
else
{
lean_object* v_val_4849_; lean_object* v___x_4851_; uint8_t v_isShared_4852_; uint8_t v_isSharedCheck_4883_; 
v_val_4849_ = lean_ctor_get(v_a_4841_, 0);
v_isSharedCheck_4883_ = !lean_is_exclusive(v_a_4841_);
if (v_isSharedCheck_4883_ == 0)
{
v___x_4851_ = v_a_4841_;
v_isShared_4852_ = v_isSharedCheck_4883_;
goto v_resetjp_4850_;
}
else
{
lean_inc(v_val_4849_);
lean_dec(v_a_4841_);
v___x_4851_ = lean_box(0);
v_isShared_4852_ = v_isSharedCheck_4883_;
goto v_resetjp_4850_;
}
v_resetjp_4850_:
{
if (lean_obj_tag(v_val_4849_) == 0)
{
lean_object* v_val_4853_; lean_object* v___x_4855_; 
lean_dec(v_cancelTk_x3f_4838_);
lean_dec(v_openDecls_4837_);
lean_dec(v_currNamespace_4836_);
lean_dec_ref(v_options_4835_);
lean_dec_ref(v_env_4832_);
v_val_4853_ = lean_ctor_get(v_val_4849_, 0);
lean_inc(v_val_4853_);
lean_dec_ref_known(v_val_4849_, 1);
if (v_isShared_4852_ == 0)
{
lean_ctor_set(v___x_4851_, 0, v_val_4853_);
v___x_4855_ = v___x_4851_;
goto v_reusejp_4854_;
}
else
{
lean_object* v_reuseFailAlloc_4859_; 
v_reuseFailAlloc_4859_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4859_, 0, v_val_4853_);
v___x_4855_ = v_reuseFailAlloc_4859_;
goto v_reusejp_4854_;
}
v_reusejp_4854_:
{
lean_object* v___x_4857_; 
if (v_isShared_4844_ == 0)
{
lean_ctor_set(v___x_4843_, 0, v___x_4855_);
v___x_4857_ = v___x_4843_;
goto v_reusejp_4856_;
}
else
{
lean_object* v_reuseFailAlloc_4858_; 
v_reuseFailAlloc_4858_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4858_, 0, v___x_4855_);
v___x_4857_ = v_reuseFailAlloc_4858_;
goto v_reusejp_4856_;
}
v_reusejp_4856_:
{
return v___x_4857_;
}
}
}
else
{
lean_object* v_val_4860_; lean_object* v___f_4861_; lean_object* v___x_4862_; lean_object* v___x_4863_; 
lean_del_object(v___x_4843_);
v_val_4860_ = lean_ctor_get(v_val_4849_, 0);
lean_inc(v_val_4860_);
lean_dec_ref_known(v_val_4849_, 1);
v___f_4861_ = lean_alloc_closure((void*)(l_Lean_findSimpleDocString_x3f___lam__0___boxed), 5, 1);
lean_closure_set(v___f_4861_, 0, v_val_4860_);
v___x_4862_ = lean_alloc_closure((void*)(l_Lean_Doc_MarkdownM_run_x27___boxed), 4, 1);
lean_closure_set(v___x_4862_, 0, v___f_4861_);
v___x_4863_ = l_Lean_Doc_runMarkdown___redArg(v_env_4832_, v___x_4862_, v_options_4835_, v_currNamespace_4836_, v_openDecls_4837_, v_cancelTk_x3f_4838_);
if (lean_obj_tag(v___x_4863_) == 0)
{
lean_object* v_a_4864_; lean_object* v___x_4866_; uint8_t v_isShared_4867_; uint8_t v_isSharedCheck_4874_; 
v_a_4864_ = lean_ctor_get(v___x_4863_, 0);
v_isSharedCheck_4874_ = !lean_is_exclusive(v___x_4863_);
if (v_isSharedCheck_4874_ == 0)
{
v___x_4866_ = v___x_4863_;
v_isShared_4867_ = v_isSharedCheck_4874_;
goto v_resetjp_4865_;
}
else
{
lean_inc(v_a_4864_);
lean_dec(v___x_4863_);
v___x_4866_ = lean_box(0);
v_isShared_4867_ = v_isSharedCheck_4874_;
goto v_resetjp_4865_;
}
v_resetjp_4865_:
{
lean_object* v___x_4869_; 
if (v_isShared_4852_ == 0)
{
lean_ctor_set(v___x_4851_, 0, v_a_4864_);
v___x_4869_ = v___x_4851_;
goto v_reusejp_4868_;
}
else
{
lean_object* v_reuseFailAlloc_4873_; 
v_reuseFailAlloc_4873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4873_, 0, v_a_4864_);
v___x_4869_ = v_reuseFailAlloc_4873_;
goto v_reusejp_4868_;
}
v_reusejp_4868_:
{
lean_object* v___x_4871_; 
if (v_isShared_4867_ == 0)
{
lean_ctor_set(v___x_4866_, 0, v___x_4869_);
v___x_4871_ = v___x_4866_;
goto v_reusejp_4870_;
}
else
{
lean_object* v_reuseFailAlloc_4872_; 
v_reuseFailAlloc_4872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4872_, 0, v___x_4869_);
v___x_4871_ = v_reuseFailAlloc_4872_;
goto v_reusejp_4870_;
}
v_reusejp_4870_:
{
return v___x_4871_;
}
}
}
}
else
{
lean_object* v_a_4875_; lean_object* v___x_4877_; uint8_t v_isShared_4878_; uint8_t v_isSharedCheck_4882_; 
lean_del_object(v___x_4851_);
v_a_4875_ = lean_ctor_get(v___x_4863_, 0);
v_isSharedCheck_4882_ = !lean_is_exclusive(v___x_4863_);
if (v_isSharedCheck_4882_ == 0)
{
v___x_4877_ = v___x_4863_;
v_isShared_4878_ = v_isSharedCheck_4882_;
goto v_resetjp_4876_;
}
else
{
lean_inc(v_a_4875_);
lean_dec(v___x_4863_);
v___x_4877_ = lean_box(0);
v_isShared_4878_ = v_isSharedCheck_4882_;
goto v_resetjp_4876_;
}
v_resetjp_4876_:
{
lean_object* v___x_4880_; 
if (v_isShared_4878_ == 0)
{
v___x_4880_ = v___x_4877_;
goto v_reusejp_4879_;
}
else
{
lean_object* v_reuseFailAlloc_4881_; 
v_reuseFailAlloc_4881_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4881_, 0, v_a_4875_);
v___x_4880_ = v_reuseFailAlloc_4881_;
goto v_reusejp_4879_;
}
v_reusejp_4879_:
{
return v___x_4880_;
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
lean_object* v_a_4885_; lean_object* v___x_4887_; uint8_t v_isShared_4888_; uint8_t v_isSharedCheck_4892_; 
lean_dec(v_cancelTk_x3f_4838_);
lean_dec(v_openDecls_4837_);
lean_dec(v_currNamespace_4836_);
lean_dec_ref(v_options_4835_);
lean_dec_ref(v_env_4832_);
v_a_4885_ = lean_ctor_get(v___x_4840_, 0);
v_isSharedCheck_4892_ = !lean_is_exclusive(v___x_4840_);
if (v_isSharedCheck_4892_ == 0)
{
v___x_4887_ = v___x_4840_;
v_isShared_4888_ = v_isSharedCheck_4892_;
goto v_resetjp_4886_;
}
else
{
lean_inc(v_a_4885_);
lean_dec(v___x_4840_);
v___x_4887_ = lean_box(0);
v_isShared_4888_ = v_isSharedCheck_4892_;
goto v_resetjp_4886_;
}
v_resetjp_4886_:
{
lean_object* v___x_4890_; 
if (v_isShared_4888_ == 0)
{
v___x_4890_ = v___x_4887_;
goto v_reusejp_4889_;
}
else
{
lean_object* v_reuseFailAlloc_4891_; 
v_reuseFailAlloc_4891_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4891_, 0, v_a_4885_);
v___x_4890_ = v_reuseFailAlloc_4891_;
goto v_reusejp_4889_;
}
v_reusejp_4889_:
{
return v___x_4890_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_findSimpleDocString_x3f___boxed(lean_object* v_env_4893_, lean_object* v_declName_4894_, lean_object* v_includeBuiltin_4895_, lean_object* v_options_4896_, lean_object* v_currNamespace_4897_, lean_object* v_openDecls_4898_, lean_object* v_cancelTk_x3f_4899_, lean_object* v_a_4900_){
_start:
{
uint8_t v_includeBuiltin_boxed_4901_; lean_object* v_res_4902_; 
v_includeBuiltin_boxed_4901_ = lean_unbox(v_includeBuiltin_4895_);
v_res_4902_ = l_Lean_findSimpleDocString_x3f(v_env_4893_, v_declName_4894_, v_includeBuiltin_boxed_4901_, v_options_4896_, v_currNamespace_4897_, v_openDecls_4898_, v_cancelTk_x3f_4899_);
return v_res_4902_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0(lean_object* v_p_4903_, lean_object* v_level_4904_, lean_object* v_part_4905_, lean_object* v_a_4906_, lean_object* v_a_4907_, lean_object* v_a_4908_){
_start:
{
lean_object* v___x_4910_; 
v___x_4910_ = l_Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0___redArg(v_level_4904_, v_part_4905_, v_a_4906_, v_a_4907_, v_a_4908_);
return v___x_4910_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0___boxed(lean_object* v_p_4911_, lean_object* v_level_4912_, lean_object* v_part_4913_, lean_object* v_a_4914_, lean_object* v_a_4915_, lean_object* v_a_4916_, lean_object* v_a_4917_){
_start:
{
lean_object* v_res_4918_; 
v_res_4918_ = l_Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0(v_p_4911_, v_level_4912_, v_part_4913_, v_a_4914_, v_a_4915_, v_a_4916_);
lean_dec(v_a_4916_);
lean_dec_ref(v_a_4915_);
lean_dec(v_a_4914_);
lean_dec_ref(v_part_4913_);
lean_dec(v_level_4912_);
return v_res_4918_;
}
}
lean_object* runtime_initialize_Lean_DocString_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_DocString_Extension(uint8_t builtin);
lean_object* runtime_initialize_Lean_CoreM(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_TakeDrop(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Search(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Length(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_ToString_Macro(uint8_t builtin);
lean_object* runtime_initialize_Init_While(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_DocString_Markdown(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_DocString_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DocString_Extension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_CoreM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Length(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___closed__3___boxed__const__1 = _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___closed__3___boxed__const__1();
lean_mark_persistent(l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___closed__3___boxed__const__1);
l___private_Lean_DocString_Markdown_0__Lean_Doc_markerPrefixSpecial___closed__0___boxed__const__1 = _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_markerPrefixSpecial___closed__0___boxed__const__1();
lean_mark_persistent(l___private_Lean_DocString_Markdown_0__Lean_Doc_markerPrefixSpecial___closed__0___boxed__const__1);
l_Lean_Doc_partMarkdown___redArg___closed__0___boxed__const__1 = _init_l_Lean_Doc_partMarkdown___redArg___closed__0___boxed__const__1();
lean_mark_persistent(l_Lean_Doc_partMarkdown___redArg___closed__0___boxed__const__1);
res = l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Doc_docInlineMdExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Doc_docInlineMdExt);
lean_dec_ref(res);
res = l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_1277071390____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Doc_docBlockMdExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Doc_docBlockMdExt);
lean_dec_ref(res);
res = l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_2917630591____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_DocString_Markdown_0__Lean_Doc_builtinInlineMdRenderers = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_DocString_Markdown_0__Lean_Doc_builtinInlineMdRenderers);
lean_dec_ref(res);
res = l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_2639420957____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_DocString_Markdown_0__Lean_Doc_builtinBlockMdRenderers = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_DocString_Markdown_0__Lean_Doc_builtinBlockMdRenderers);
lean_dec_ref(res);
l_Lean_Doc_mdRendererHeartbeats = _init_l_Lean_Doc_mdRendererHeartbeats();
lean_mark_persistent(l_Lean_Doc_mdRendererHeartbeats);
l_Lean_Doc_instMarkdownInlineElabInline = _init_l_Lean_Doc_instMarkdownInlineElabInline();
lean_mark_persistent(l_Lean_Doc_instMarkdownInlineElabInline);
l_Lean_Doc_instMarkdownBlockElabInlineElabBlock = _init_l_Lean_Doc_instMarkdownBlockElabInlineElabBlock();
lean_mark_persistent(l_Lean_Doc_instMarkdownBlockElabInlineElabBlock);
l_Lean_Doc_instToMarkdownVersoDocString = _init_l_Lean_Doc_instToMarkdownVersoDocString();
lean_mark_persistent(l_Lean_Doc_instToMarkdownVersoDocString);
l_Lean_Doc_instToMarkdownSnippet = _init_l_Lean_Doc_instToMarkdownSnippet();
lean_mark_persistent(l_Lean_Doc_instToMarkdownSnippet);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_DocString_Markdown(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_DocString_Types(uint8_t builtin);
lean_object* initialize_Lean_DocString_Extension(uint8_t builtin);
lean_object* initialize_Lean_CoreM(uint8_t builtin);
lean_object* initialize_Init_Data_String_TakeDrop(uint8_t builtin);
lean_object* initialize_Init_Data_String_Search(uint8_t builtin);
lean_object* initialize_Init_Data_String_Length(uint8_t builtin);
lean_object* initialize_Init_Data_ToString_Macro(uint8_t builtin);
lean_object* initialize_Init_While(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_DocString_Markdown(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_DocString_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_DocString_Extension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_CoreM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Length(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DocString_Markdown(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_DocString_Markdown(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_DocString_Markdown(builtin);
}
#ifdef __cplusplus
}
#endif

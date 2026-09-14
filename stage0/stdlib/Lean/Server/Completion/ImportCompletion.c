// Lean compiler output
// Module: Lean.Server.Completion.ImportCompletion
// Imports: public import Lean.Util.LakePath public import Lean.Data.Lsp public import Lean.Parser.Module meta import Lean.Parser.Module
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
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Name_replacePrefix(lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_Name_quickLt(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lean_NameTrie_matchingToArray___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_System_FilePath_isDir(lean_object*);
lean_object* lean_io_read_dir(lean_object*);
lean_object* l_IO_FS_DirEntry_path(lean_object*);
lean_object* l_System_FilePath_extension(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_System_FilePath_withExtension(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_PrefixTreeNode_empty___redArg();
lean_object* l_Lean_NameTrie_insert___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
lean_object* l_Char_utf8Size(uint32_t);
lean_object* l_Lean_Syntax_getOptional_x3f(lean_object*);
uint8_t l_Lean_Syntax_isMissing(lean_object*);
lean_object* l_Lean_determineLakePath();
lean_object* lean_io_process_spawn(lean_object*);
lean_object* l_IO_FS_Handle_readToEnd(lean_object*);
lean_object* l_String_Slice_trimAscii(lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_process_child_wait(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* l_Lean_Json_parse(lean_object*);
lean_object* l_Lean_Name_fromJson_x3f(lean_object*);
lean_object* l_Lean_Json_pretty(lean_object*, lean_object*);
lean_object* l_Lean_getSrcSearchPath();
lean_object* l_Lean_FileMap_lspPosToUtf8Pos(lean_object*, lean_object*);
lean_object* l_Lean_JsonNumber_fromNat(lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* l_Lean_NameTrie_toArray___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_AvailableImports_toImportTrie_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_AvailableImports_toImportTrie_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Lsp_ImportCompletion_AvailableImports_toImportTrie___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_ImportCompletion_AvailableImports_toImportTrie___closed__0;
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_AvailableImports_toImportTrie(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_AvailableImports_toImportTrie___boxed(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Lsp_ImportCompletion_isImportNameCompletionRequest_spec__0(lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportNameCompletionRequest_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportNameCompletionRequest_spec__1___closed__0;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportNameCompletionRequest_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Init.Data.Option.BasicAux"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportNameCompletionRequest_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportNameCompletionRequest_spec__1___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportNameCompletionRequest_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Option.get!"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportNameCompletionRequest_spec__1___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportNameCompletionRequest_spec__1___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportNameCompletionRequest_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "value is none"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportNameCompletionRequest_spec__1___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportNameCompletionRequest_spec__1___closed__3_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportNameCompletionRequest_spec__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportNameCompletionRequest_spec__1___closed__4;
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportNameCompletionRequest_spec__1(lean_object*, uint8_t, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportNameCompletionRequest_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__0 = (const lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__0_value;
static const lean_string_object l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__1 = (const lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__1_value;
static const lean_string_object l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Module"};
static const lean_object* l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__2 = (const lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__2_value;
static const lean_string_object l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "header"};
static const lean_object* l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__3 = (const lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__3_value;
static const lean_ctor_object l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__4_value_aux_0),((lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__4_value_aux_1),((lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__2_value),LEAN_SCALAR_PTR_LITERAL(239, 68, 245, 129, 233, 83, 45, 77)}};
static const lean_ctor_object l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__4_value_aux_2),((lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__3_value),LEAN_SCALAR_PTR_LITERAL(40, 173, 92, 3, 94, 219, 131, 202)}};
static const lean_object* l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__4 = (const lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__4_value;
static const lean_string_object l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "prelude"};
static const lean_object* l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__5 = (const lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__5_value;
static const lean_ctor_object l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__6_value_aux_0),((lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__6_value_aux_1),((lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__2_value),LEAN_SCALAR_PTR_LITERAL(239, 68, 245, 129, 233, 83, 45, 77)}};
static const lean_ctor_object l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__6_value_aux_2),((lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__5_value),LEAN_SCALAR_PTR_LITERAL(182, 6, 18, 235, 50, 88, 101, 248)}};
static const lean_object* l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__6 = (const lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__6_value;
static const lean_string_object l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "moduleTk"};
static const lean_object* l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__7 = (const lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__7_value;
static const lean_ctor_object l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__8_value_aux_0),((lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__8_value_aux_1),((lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__2_value),LEAN_SCALAR_PTR_LITERAL(239, 68, 245, 129, 233, 83, 45, 77)}};
static const lean_ctor_object l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__8_value_aux_2),((lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__7_value),LEAN_SCALAR_PTR_LITERAL(198, 239, 28, 252, 21, 233, 71, 221)}};
static const lean_object* l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__8 = (const lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__8_value;
LEAN_EXPORT uint8_t l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest_spec__0_spec__0(lean_object*, uint8_t, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest_spec__0(lean_object*, uint8_t, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest_spec__1(lean_object*, uint8_t, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__2(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__5(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lean.Server.Completion.ImportCompletion"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "Lean.Lsp.ImportCompletion.computePartialImportCompletions"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__3;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "all"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__6_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "import"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__2_value_aux_0),((lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__2_value_aux_1),((lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__2_value),LEAN_SCALAR_PTR_LITERAL(239, 68, 245, 129, 233, 83, 45, 77)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__2_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(177, 219, 158, 40, 50, 143, 61, 44)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__4_value_aux_0),((lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__4_value_aux_1),((lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__2_value),LEAN_SCALAR_PTR_LITERAL(239, 68, 245, 129, 233, 83, 45, 77)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__4_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__3_value),LEAN_SCALAR_PTR_LITERAL(198, 166, 14, 39, 152, 190, 236, 172)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__4_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__4___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__4(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__1(uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Lsp_ImportCompletion_computePartialImportCompletions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Lsp_ImportCompletion_computePartialImportCompletions___closed__0 = (const lean_object*)&l_Lean_Lsp_ImportCompletion_computePartialImportCompletions___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_computePartialImportCompletions(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_computePartialImportCompletions___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Lsp_ImportCompletion_isImportCompletionRequest(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_isImportCompletionRequest___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake_spec__0_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Array_fromJson_x3f___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "expected JSON array, got '"};
static const lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake_spec__0___closed__0 = (const lean_object*)&l_Lean_Array_fromJson_x3f___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake_spec__0___closed__0_value;
static const lean_string_object l_Lean_Array_fromJson_x3f___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake_spec__0___closed__1 = (const lean_object*)&l_Lean_Array_fromJson_x3f___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake_spec__0(lean_object*);
static const lean_ctor_object l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(2, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake___closed__0 = (const lean_object*)&l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake___closed__0_value;
static const lean_string_object l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "available-imports"};
static const lean_object* l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake___closed__1 = (const lean_object*)&l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake___closed__1_value;
static const lean_array_object l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake___closed__1_value)}};
static const lean_object* l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake___closed__2 = (const lean_object*)&l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake___closed__2_value;
static const lean_array_object l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake___closed__3 = (const lean_object*)&l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake___closed__3_value;
static const lean_string_object l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "invalid output from `lake available-imports`:\n"};
static const lean_object* l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake___closed__4 = (const lean_object*)&l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake();
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0_spec__1___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0_spec__1___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_List_forIn_x27_loop___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_List_forIn_x27_loop___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__1___redArg___lam__0___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__1___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath();
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_collectAvailableImports();
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_collectAvailableImports___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_addCompletionItemData_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_addCompletionItemData_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_addCompletionItemData(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_find_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_find_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_find_spec__2(uint8_t, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_find_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_find_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "import "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_find_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_find_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_find_spec__1(uint8_t, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_find_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_find(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_find___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_computeCompletions(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_computeCompletions___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_AvailableImports_toImportTrie_spec__0(lean_object* v_as_1_, size_t v_sz_2_, size_t v_i_3_, lean_object* v_b_4_){
_start:
{
uint8_t v___x_5_; 
v___x_5_ = lean_usize_dec_lt(v_i_3_, v_sz_2_);
if (v___x_5_ == 0)
{
return v_b_4_;
}
else
{
lean_object* v_a_6_; lean_object* v___x_7_; size_t v___x_8_; size_t v___x_9_; 
v_a_6_ = lean_array_uget_borrowed(v_as_1_, v_i_3_);
lean_inc(v_a_6_);
v___x_7_ = l_Lean_NameTrie_insert___redArg(v_b_4_, v_a_6_, v_a_6_);
v___x_8_ = ((size_t)1ULL);
v___x_9_ = lean_usize_add(v_i_3_, v___x_8_);
v_i_3_ = v___x_9_;
v_b_4_ = v___x_7_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_AvailableImports_toImportTrie_spec__0___boxed(lean_object* v_as_11_, lean_object* v_sz_12_, lean_object* v_i_13_, lean_object* v_b_14_){
_start:
{
size_t v_sz_boxed_15_; size_t v_i_boxed_16_; lean_object* v_res_17_; 
v_sz_boxed_15_ = lean_unbox_usize(v_sz_12_);
lean_dec(v_sz_12_);
v_i_boxed_16_ = lean_unbox_usize(v_i_13_);
lean_dec(v_i_13_);
v_res_17_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_AvailableImports_toImportTrie_spec__0(v_as_11_, v_sz_boxed_15_, v_i_boxed_16_, v_b_14_);
lean_dec_ref(v_as_11_);
return v_res_17_;
}
}
static lean_object* _init_l_Lean_Lsp_ImportCompletion_AvailableImports_toImportTrie___closed__0(void){
_start:
{
lean_object* v_importTrie_18_; 
v_importTrie_18_ = l_Lean_PrefixTreeNode_empty___redArg();
return v_importTrie_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_AvailableImports_toImportTrie(lean_object* v_imports_19_){
_start:
{
lean_object* v_importTrie_20_; size_t v_sz_21_; size_t v___x_22_; lean_object* v___x_23_; 
v_importTrie_20_ = lean_obj_once(&l_Lean_Lsp_ImportCompletion_AvailableImports_toImportTrie___closed__0, &l_Lean_Lsp_ImportCompletion_AvailableImports_toImportTrie___closed__0_once, _init_l_Lean_Lsp_ImportCompletion_AvailableImports_toImportTrie___closed__0);
v_sz_21_ = lean_array_size(v_imports_19_);
v___x_22_ = ((size_t)0ULL);
v___x_23_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_AvailableImports_toImportTrie_spec__0(v_imports_19_, v_sz_21_, v___x_22_, v_importTrie_20_);
return v___x_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_AvailableImports_toImportTrie___boxed(lean_object* v_imports_24_){
_start:
{
lean_object* v_res_25_; 
v_res_25_ = l_Lean_Lsp_ImportCompletion_AvailableImports_toImportTrie(v_imports_24_);
lean_dec_ref(v_imports_24_);
return v_res_25_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Lsp_ImportCompletion_isImportNameCompletionRequest_spec__0(lean_object* v_msg_26_){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; 
v___x_27_ = lean_unsigned_to_nat(0u);
v___x_28_ = lean_panic_fn_borrowed(v___x_27_, v_msg_26_);
return v___x_28_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportNameCompletionRequest_spec__1___closed__0(void){
_start:
{
uint32_t v___x_29_; lean_object* v___x_30_; 
v___x_29_ = 32;
v___x_30_ = l_Char_utf8Size(v___x_29_);
return v___x_30_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportNameCompletionRequest_spec__1___closed__4(void){
_start:
{
lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; 
v___x_34_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportNameCompletionRequest_spec__1___closed__3));
v___x_35_ = lean_unsigned_to_nat(14u);
v___x_36_ = lean_unsigned_to_nat(22u);
v___x_37_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportNameCompletionRequest_spec__1___closed__2));
v___x_38_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportNameCompletionRequest_spec__1___closed__1));
v___x_39_ = l_mkPanicMessageWithDecl(v___x_38_, v___x_37_, v___x_36_, v___x_35_, v___x_34_);
return v___x_39_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportNameCompletionRequest_spec__1(lean_object* v_completionPos_40_, uint8_t v___x_41_, lean_object* v_as_42_, size_t v_i_43_, size_t v_stop_44_){
_start:
{
uint8_t v___x_49_; 
v___x_49_ = lean_usize_dec_eq(v_i_43_, v_stop_44_);
if (v___x_49_ == 0)
{
lean_object* v___x_50_; uint8_t v___x_51_; lean_object* v___y_53_; lean_object* v___y_58_; uint8_t v___y_59_; lean_object* v_importStx_63_; lean_object* v_importCmd_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v_allTk_x3f_67_; lean_object* v___x_68_; lean_object* v_importId_69_; lean_object* v___y_71_; 
v___x_50_ = lean_unsigned_to_nat(2u);
v___x_51_ = 1;
v_importStx_63_ = lean_array_uget_borrowed(v_as_42_, v_i_43_);
v_importCmd_64_ = l_Lean_Syntax_getArg(v_importStx_63_, v___x_50_);
v___x_65_ = lean_unsigned_to_nat(3u);
v___x_66_ = l_Lean_Syntax_getArg(v_importStx_63_, v___x_65_);
v_allTk_x3f_67_ = l_Lean_Syntax_getOptional_x3f(v___x_66_);
lean_dec(v___x_66_);
v___x_68_ = lean_unsigned_to_nat(4u);
v_importId_69_ = l_Lean_Syntax_getArg(v_importStx_63_, v___x_68_);
if (lean_obj_tag(v_allTk_x3f_67_) == 0)
{
goto v___jp_73_;
}
else
{
lean_object* v_val_75_; lean_object* v___x_76_; 
v_val_75_ = lean_ctor_get(v_allTk_x3f_67_, 0);
lean_inc(v_val_75_);
lean_dec_ref_known(v_allTk_x3f_67_, 1);
v___x_76_ = l_Lean_Syntax_getTailPos_x3f(v_val_75_, v___x_49_);
lean_dec(v_val_75_);
if (lean_obj_tag(v___x_76_) == 0)
{
goto v___jp_73_;
}
else
{
lean_dec(v_importCmd_64_);
v___y_71_ = v___x_76_;
goto v___jp_70_;
}
}
v___jp_52_:
{
lean_object* v___x_54_; lean_object* v___x_55_; uint8_t v_decide_56_; 
v___x_54_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportNameCompletionRequest_spec__1___closed__0, &l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportNameCompletionRequest_spec__1___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportNameCompletionRequest_spec__1___closed__0);
v___x_55_ = lean_nat_add(v___y_53_, v___x_54_);
lean_dec(v___y_53_);
v_decide_56_ = lean_nat_dec_eq(v_completionPos_40_, v___x_55_);
lean_dec(v___x_55_);
if (v_decide_56_ == 0)
{
goto v___jp_45_;
}
else
{
return v___x_51_;
}
}
v___jp_57_:
{
if (v___y_59_ == 0)
{
lean_dec(v___y_58_);
goto v___jp_45_;
}
else
{
if (lean_obj_tag(v___y_58_) == 0)
{
lean_object* v___x_60_; lean_object* v___x_61_; 
v___x_60_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportNameCompletionRequest_spec__1___closed__4, &l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportNameCompletionRequest_spec__1___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportNameCompletionRequest_spec__1___closed__4);
v___x_61_ = l_panic___at___00Lean_Lsp_ImportCompletion_isImportNameCompletionRequest_spec__0(v___x_60_);
v___y_53_ = v___x_61_;
goto v___jp_52_;
}
else
{
lean_object* v_val_62_; 
v_val_62_ = lean_ctor_get(v___y_58_, 0);
lean_inc(v_val_62_);
lean_dec_ref_known(v___y_58_, 1);
v___y_53_ = v_val_62_;
goto v___jp_52_;
}
}
}
v___jp_70_:
{
uint8_t v___x_72_; 
v___x_72_ = l_Lean_Syntax_isMissing(v_importId_69_);
lean_dec(v_importId_69_);
if (v___x_72_ == 0)
{
v___y_58_ = v___y_71_;
v___y_59_ = v___x_72_;
goto v___jp_57_;
}
else
{
if (lean_obj_tag(v___y_71_) == 0)
{
goto v___jp_45_;
}
else
{
v___y_58_ = v___y_71_;
v___y_59_ = v___x_41_;
goto v___jp_57_;
}
}
}
v___jp_73_:
{
lean_object* v___x_74_; 
v___x_74_ = l_Lean_Syntax_getTailPos_x3f(v_importCmd_64_, v___x_49_);
lean_dec(v_importCmd_64_);
v___y_71_ = v___x_74_;
goto v___jp_70_;
}
}
else
{
uint8_t v___x_77_; 
v___x_77_ = 0;
return v___x_77_;
}
v___jp_45_:
{
size_t v___x_46_; size_t v___x_47_; 
v___x_46_ = ((size_t)1ULL);
v___x_47_ = lean_usize_add(v_i_43_, v___x_46_);
v_i_43_ = v___x_47_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportNameCompletionRequest_spec__1___boxed(lean_object* v_completionPos_78_, lean_object* v___x_79_, lean_object* v_as_80_, lean_object* v_i_81_, lean_object* v_stop_82_){
_start:
{
uint8_t v___x_1044__boxed_83_; size_t v_i_boxed_84_; size_t v_stop_boxed_85_; uint8_t v_res_86_; lean_object* v_r_87_; 
v___x_1044__boxed_83_ = lean_unbox(v___x_79_);
v_i_boxed_84_ = lean_unbox_usize(v_i_81_);
lean_dec(v_i_81_);
v_stop_boxed_85_ = lean_unbox_usize(v_stop_82_);
lean_dec(v_stop_82_);
v_res_86_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportNameCompletionRequest_spec__1(v_completionPos_78_, v___x_1044__boxed_83_, v_as_80_, v_i_boxed_84_, v_stop_boxed_85_);
lean_dec_ref(v_as_80_);
lean_dec(v_completionPos_78_);
v_r_87_ = lean_box(v_res_86_);
return v_r_87_;
}
}
LEAN_EXPORT uint8_t l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest(lean_object* v_headerStx_109_, lean_object* v_completionPos_110_){
_start:
{
lean_object* v___x_111_; uint8_t v___x_112_; 
v___x_111_ = ((lean_object*)(l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__4));
lean_inc(v_headerStx_109_);
v___x_112_ = l_Lean_Syntax_isOfKind(v_headerStx_109_, v___x_111_);
if (v___x_112_ == 0)
{
lean_dec(v_headerStx_109_);
return v___x_112_;
}
else
{
lean_object* v___x_113_; lean_object* v___x_132_; uint8_t v___x_133_; 
v___x_113_ = lean_unsigned_to_nat(0u);
v___x_132_ = l_Lean_Syntax_getArg(v_headerStx_109_, v___x_113_);
v___x_133_ = l_Lean_Syntax_isNone(v___x_132_);
if (v___x_133_ == 0)
{
lean_object* v___x_134_; uint8_t v___x_135_; 
v___x_134_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_132_);
v___x_135_ = l_Lean_Syntax_matchesNull(v___x_132_, v___x_134_);
if (v___x_135_ == 0)
{
lean_dec(v___x_132_);
lean_dec(v_headerStx_109_);
return v___x_135_;
}
else
{
lean_object* v___x_136_; lean_object* v___x_137_; uint8_t v___x_138_; 
v___x_136_ = l_Lean_Syntax_getArg(v___x_132_, v___x_113_);
lean_dec(v___x_132_);
v___x_137_ = ((lean_object*)(l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__8));
v___x_138_ = l_Lean_Syntax_isOfKind(v___x_136_, v___x_137_);
if (v___x_138_ == 0)
{
lean_dec(v_headerStx_109_);
return v___x_138_;
}
else
{
goto v___jp_124_;
}
}
}
else
{
lean_dec(v___x_132_);
goto v___jp_124_;
}
v___jp_114_:
{
lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v_importsStx_118_; lean_object* v___x_119_; uint8_t v___x_120_; 
v___x_115_ = lean_unsigned_to_nat(2u);
v___x_116_ = l_Lean_Syntax_getArg(v_headerStx_109_, v___x_115_);
lean_dec(v_headerStx_109_);
v___x_117_ = l_Lean_Syntax_getArgs(v___x_116_);
lean_dec(v___x_116_);
v_importsStx_118_ = l_unsafeCast___redArg(v___x_117_);
lean_dec_ref(v___x_117_);
v___x_119_ = lean_array_get_size(v_importsStx_118_);
v___x_120_ = lean_nat_dec_lt(v___x_113_, v___x_119_);
if (v___x_120_ == 0)
{
lean_dec(v_importsStx_118_);
return v___x_120_;
}
else
{
if (v___x_120_ == 0)
{
lean_dec(v_importsStx_118_);
return v___x_120_;
}
else
{
size_t v___x_121_; size_t v___x_122_; uint8_t v___x_123_; 
v___x_121_ = ((size_t)0ULL);
v___x_122_ = lean_usize_of_nat(v___x_119_);
v___x_123_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportNameCompletionRequest_spec__1(v_completionPos_110_, v___x_112_, v_importsStx_118_, v___x_121_, v___x_122_);
lean_dec(v_importsStx_118_);
return v___x_123_;
}
}
}
v___jp_124_:
{
lean_object* v___x_125_; lean_object* v___x_126_; uint8_t v___x_127_; 
v___x_125_ = lean_unsigned_to_nat(1u);
v___x_126_ = l_Lean_Syntax_getArg(v_headerStx_109_, v___x_125_);
v___x_127_ = l_Lean_Syntax_isNone(v___x_126_);
if (v___x_127_ == 0)
{
uint8_t v___x_128_; 
lean_inc(v___x_126_);
v___x_128_ = l_Lean_Syntax_matchesNull(v___x_126_, v___x_125_);
if (v___x_128_ == 0)
{
lean_dec(v___x_126_);
lean_dec(v_headerStx_109_);
return v___x_128_;
}
else
{
lean_object* v___x_129_; lean_object* v___x_130_; uint8_t v___x_131_; 
v___x_129_ = l_Lean_Syntax_getArg(v___x_126_, v___x_113_);
lean_dec(v___x_126_);
v___x_130_ = ((lean_object*)(l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__6));
v___x_131_ = l_Lean_Syntax_isOfKind(v___x_129_, v___x_130_);
if (v___x_131_ == 0)
{
lean_dec(v_headerStx_109_);
return v___x_131_;
}
else
{
goto v___jp_114_;
}
}
}
else
{
lean_dec(v___x_126_);
goto v___jp_114_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___boxed(lean_object* v_headerStx_139_, lean_object* v_completionPos_140_){
_start:
{
uint8_t v_res_141_; lean_object* v_r_142_; 
v_res_141_ = l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest(v_headerStx_139_, v_completionPos_140_);
lean_dec(v_completionPos_140_);
v_r_142_ = lean_box(v_res_141_);
return v_r_142_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest_spec__0_spec__0(lean_object* v_completionPos_143_, uint8_t v___x_144_, lean_object* v_as_145_, size_t v_i_146_, size_t v_stop_147_){
_start:
{
uint8_t v___y_153_; lean_object* v___y_155_; uint8_t v___x_157_; 
v___x_157_ = lean_usize_dec_eq(v_i_146_, v_stop_147_);
if (v___x_157_ == 0)
{
lean_object* v___x_158_; lean_object* v___y_160_; lean_object* v___x_166_; 
v___x_158_ = lean_array_uget_borrowed(v_as_145_, v_i_146_);
v___x_166_ = l_Lean_Syntax_getPos_x3f(v___x_158_, v___x_157_);
if (lean_obj_tag(v___x_166_) == 0)
{
goto v___jp_148_;
}
else
{
if (v___x_144_ == 0)
{
lean_dec_ref_known(v___x_166_, 1);
goto v___jp_148_;
}
else
{
lean_object* v___x_167_; 
v___x_167_ = l_Lean_Syntax_getTailPos_x3f(v___x_158_, v___x_157_);
if (lean_obj_tag(v___x_167_) == 0)
{
lean_dec_ref_known(v___x_166_, 1);
goto v___jp_148_;
}
else
{
lean_dec_ref_known(v___x_167_, 1);
if (lean_obj_tag(v___x_166_) == 0)
{
lean_object* v___x_168_; lean_object* v___x_169_; 
v___x_168_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportNameCompletionRequest_spec__1___closed__4, &l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportNameCompletionRequest_spec__1___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportNameCompletionRequest_spec__1___closed__4);
v___x_169_ = l_panic___at___00Lean_Lsp_ImportCompletion_isImportNameCompletionRequest_spec__0(v___x_168_);
v___y_160_ = v___x_169_;
goto v___jp_159_;
}
else
{
lean_object* v_val_170_; 
v_val_170_ = lean_ctor_get(v___x_166_, 0);
lean_inc(v_val_170_);
lean_dec_ref_known(v___x_166_, 1);
v___y_160_ = v_val_170_;
goto v___jp_159_;
}
}
}
}
v___jp_159_:
{
uint8_t v___x_161_; 
v___x_161_ = lean_nat_dec_le(v___y_160_, v_completionPos_143_);
lean_dec(v___y_160_);
if (v___x_161_ == 0)
{
v___y_153_ = v___x_161_;
goto v___jp_152_;
}
else
{
lean_object* v___x_162_; 
v___x_162_ = l_Lean_Syntax_getTailPos_x3f(v___x_158_, v___x_157_);
if (lean_obj_tag(v___x_162_) == 0)
{
lean_object* v___x_163_; lean_object* v___x_164_; 
v___x_163_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportNameCompletionRequest_spec__1___closed__4, &l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportNameCompletionRequest_spec__1___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportNameCompletionRequest_spec__1___closed__4);
v___x_164_ = l_panic___at___00Lean_Lsp_ImportCompletion_isImportNameCompletionRequest_spec__0(v___x_163_);
v___y_155_ = v___x_164_;
goto v___jp_154_;
}
else
{
lean_object* v_val_165_; 
v_val_165_ = lean_ctor_get(v___x_162_, 0);
lean_inc(v_val_165_);
lean_dec_ref_known(v___x_162_, 1);
v___y_155_ = v_val_165_;
goto v___jp_154_;
}
}
}
}
else
{
uint8_t v___x_171_; 
v___x_171_ = 0;
return v___x_171_;
}
v___jp_148_:
{
size_t v___x_149_; size_t v___x_150_; 
v___x_149_ = ((size_t)1ULL);
v___x_150_ = lean_usize_add(v_i_146_, v___x_149_);
v_i_146_ = v___x_150_;
goto _start;
}
v___jp_152_:
{
if (v___y_153_ == 0)
{
goto v___jp_148_;
}
else
{
return v___x_144_;
}
}
v___jp_154_:
{
uint8_t v___x_156_; 
v___x_156_ = lean_nat_dec_le(v_completionPos_143_, v___y_155_);
lean_dec(v___y_155_);
v___y_153_ = v___x_156_;
goto v___jp_152_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest_spec__0_spec__0___boxed(lean_object* v_completionPos_172_, lean_object* v___x_173_, lean_object* v_as_174_, lean_object* v_i_175_, lean_object* v_stop_176_){
_start:
{
uint8_t v___x_1560__boxed_177_; size_t v_i_boxed_178_; size_t v_stop_boxed_179_; uint8_t v_res_180_; lean_object* v_r_181_; 
v___x_1560__boxed_177_ = lean_unbox(v___x_173_);
v_i_boxed_178_ = lean_unbox_usize(v_i_175_);
lean_dec(v_i_175_);
v_stop_boxed_179_ = lean_unbox_usize(v_stop_176_);
lean_dec(v_stop_176_);
v_res_180_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest_spec__0_spec__0(v_completionPos_172_, v___x_1560__boxed_177_, v_as_174_, v_i_boxed_178_, v_stop_boxed_179_);
lean_dec_ref(v_as_174_);
lean_dec(v_completionPos_172_);
v_r_181_ = lean_box(v_res_180_);
return v_r_181_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest_spec__0(lean_object* v_completionPos_182_, uint8_t v___x_183_, lean_object* v_as_184_, size_t v_i_185_, size_t v_stop_186_){
_start:
{
uint8_t v___y_192_; lean_object* v___y_194_; uint8_t v___x_196_; 
v___x_196_ = lean_usize_dec_eq(v_i_185_, v_stop_186_);
if (v___x_196_ == 0)
{
lean_object* v___x_197_; lean_object* v___y_199_; lean_object* v___x_205_; 
v___x_197_ = lean_array_uget_borrowed(v_as_184_, v_i_185_);
v___x_205_ = l_Lean_Syntax_getPos_x3f(v___x_197_, v___x_196_);
if (lean_obj_tag(v___x_205_) == 0)
{
goto v___jp_187_;
}
else
{
if (v___x_183_ == 0)
{
lean_dec_ref_known(v___x_205_, 1);
goto v___jp_187_;
}
else
{
lean_object* v___x_206_; 
v___x_206_ = l_Lean_Syntax_getTailPos_x3f(v___x_197_, v___x_196_);
if (lean_obj_tag(v___x_206_) == 0)
{
lean_dec_ref_known(v___x_205_, 1);
goto v___jp_187_;
}
else
{
lean_dec_ref_known(v___x_206_, 1);
if (lean_obj_tag(v___x_205_) == 0)
{
lean_object* v___x_207_; lean_object* v___x_208_; 
v___x_207_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportNameCompletionRequest_spec__1___closed__4, &l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportNameCompletionRequest_spec__1___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportNameCompletionRequest_spec__1___closed__4);
v___x_208_ = l_panic___at___00Lean_Lsp_ImportCompletion_isImportNameCompletionRequest_spec__0(v___x_207_);
v___y_199_ = v___x_208_;
goto v___jp_198_;
}
else
{
lean_object* v_val_209_; 
v_val_209_ = lean_ctor_get(v___x_205_, 0);
lean_inc(v_val_209_);
lean_dec_ref_known(v___x_205_, 1);
v___y_199_ = v_val_209_;
goto v___jp_198_;
}
}
}
}
v___jp_198_:
{
uint8_t v___x_200_; 
v___x_200_ = lean_nat_dec_le(v___y_199_, v_completionPos_182_);
lean_dec(v___y_199_);
if (v___x_200_ == 0)
{
v___y_192_ = v___x_200_;
goto v___jp_191_;
}
else
{
lean_object* v___x_201_; 
v___x_201_ = l_Lean_Syntax_getTailPos_x3f(v___x_197_, v___x_196_);
if (lean_obj_tag(v___x_201_) == 0)
{
lean_object* v___x_202_; lean_object* v___x_203_; 
v___x_202_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportNameCompletionRequest_spec__1___closed__4, &l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportNameCompletionRequest_spec__1___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportNameCompletionRequest_spec__1___closed__4);
v___x_203_ = l_panic___at___00Lean_Lsp_ImportCompletion_isImportNameCompletionRequest_spec__0(v___x_202_);
v___y_194_ = v___x_203_;
goto v___jp_193_;
}
else
{
lean_object* v_val_204_; 
v_val_204_ = lean_ctor_get(v___x_201_, 0);
lean_inc(v_val_204_);
lean_dec_ref_known(v___x_201_, 1);
v___y_194_ = v_val_204_;
goto v___jp_193_;
}
}
}
}
else
{
uint8_t v___x_210_; 
v___x_210_ = 0;
return v___x_210_;
}
v___jp_187_:
{
size_t v___x_188_; size_t v___x_189_; uint8_t v___x_190_; 
v___x_188_ = ((size_t)1ULL);
v___x_189_ = lean_usize_add(v_i_185_, v___x_188_);
v___x_190_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest_spec__0_spec__0(v_completionPos_182_, v___x_183_, v_as_184_, v___x_189_, v_stop_186_);
return v___x_190_;
}
v___jp_191_:
{
if (v___y_192_ == 0)
{
goto v___jp_187_;
}
else
{
return v___x_183_;
}
}
v___jp_193_:
{
uint8_t v___x_195_; 
v___x_195_ = lean_nat_dec_le(v_completionPos_182_, v___y_194_);
lean_dec(v___y_194_);
v___y_192_ = v___x_195_;
goto v___jp_191_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest_spec__0___boxed(lean_object* v_completionPos_211_, lean_object* v___x_212_, lean_object* v_as_213_, lean_object* v_i_214_, lean_object* v_stop_215_){
_start:
{
uint8_t v___x_1639__boxed_216_; size_t v_i_boxed_217_; size_t v_stop_boxed_218_; uint8_t v_res_219_; lean_object* v_r_220_; 
v___x_1639__boxed_216_ = lean_unbox(v___x_212_);
v_i_boxed_217_ = lean_unbox_usize(v_i_214_);
lean_dec(v_i_214_);
v_stop_boxed_218_ = lean_unbox_usize(v_stop_215_);
lean_dec(v_stop_215_);
v_res_219_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest_spec__0(v_completionPos_211_, v___x_1639__boxed_216_, v_as_213_, v_i_boxed_217_, v_stop_boxed_218_);
lean_dec_ref(v_as_213_);
lean_dec(v_completionPos_211_);
v_r_220_ = lean_box(v_res_219_);
return v_r_220_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest_spec__1(lean_object* v_completionPos_221_, uint8_t v___x_222_, lean_object* v_as_223_, size_t v_i_224_, size_t v_stop_225_){
_start:
{
uint8_t v___x_230_; 
v___x_230_ = lean_usize_dec_eq(v_i_224_, v_stop_225_);
if (v___x_230_ == 0)
{
lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; uint8_t v___x_235_; 
v___x_231_ = lean_unsigned_to_nat(0u);
v___x_232_ = lean_array_uget_borrowed(v_as_223_, v_i_224_);
v___x_233_ = l_Lean_Syntax_getArgs(v___x_232_);
v___x_234_ = lean_array_get_size(v___x_233_);
v___x_235_ = lean_nat_dec_lt(v___x_231_, v___x_234_);
if (v___x_235_ == 0)
{
lean_dec_ref(v___x_233_);
goto v___jp_226_;
}
else
{
if (v___x_235_ == 0)
{
lean_dec_ref(v___x_233_);
goto v___jp_226_;
}
else
{
size_t v___x_236_; size_t v___x_237_; uint8_t v___x_238_; 
v___x_236_ = ((size_t)0ULL);
v___x_237_ = lean_usize_of_nat(v___x_234_);
v___x_238_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest_spec__0(v_completionPos_221_, v___x_222_, v___x_233_, v___x_236_, v___x_237_);
lean_dec_ref(v___x_233_);
if (v___x_238_ == 0)
{
goto v___jp_226_;
}
else
{
return v___x_238_;
}
}
}
}
else
{
uint8_t v___x_239_; 
v___x_239_ = 0;
return v___x_239_;
}
v___jp_226_:
{
size_t v___x_227_; size_t v___x_228_; 
v___x_227_ = ((size_t)1ULL);
v___x_228_ = lean_usize_add(v_i_224_, v___x_227_);
v_i_224_ = v___x_228_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest_spec__1___boxed(lean_object* v_completionPos_240_, lean_object* v___x_241_, lean_object* v_as_242_, lean_object* v_i_243_, lean_object* v_stop_244_){
_start:
{
uint8_t v___x_1700__boxed_245_; size_t v_i_boxed_246_; size_t v_stop_boxed_247_; uint8_t v_res_248_; lean_object* v_r_249_; 
v___x_1700__boxed_245_ = lean_unbox(v___x_241_);
v_i_boxed_246_ = lean_unbox_usize(v_i_243_);
lean_dec(v_i_243_);
v_stop_boxed_247_ = lean_unbox_usize(v_stop_244_);
lean_dec(v_stop_244_);
v_res_248_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest_spec__1(v_completionPos_240_, v___x_1700__boxed_245_, v_as_242_, v_i_boxed_246_, v_stop_boxed_247_);
lean_dec_ref(v_as_242_);
lean_dec(v_completionPos_240_);
v_r_249_ = lean_box(v_res_248_);
return v_r_249_;
}
}
LEAN_EXPORT uint8_t l_Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest(lean_object* v_headerStx_250_, lean_object* v_completionPos_251_){
_start:
{
lean_object* v___x_252_; uint8_t v___x_253_; 
v___x_252_ = ((lean_object*)(l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__4));
lean_inc(v_headerStx_250_);
v___x_253_ = l_Lean_Syntax_isOfKind(v_headerStx_250_, v___x_252_);
if (v___x_253_ == 0)
{
lean_dec(v_headerStx_250_);
return v___x_253_;
}
else
{
lean_object* v___x_254_; lean_object* v___x_274_; uint8_t v___x_275_; 
v___x_254_ = lean_unsigned_to_nat(0u);
v___x_274_ = l_Lean_Syntax_getArg(v_headerStx_250_, v___x_254_);
v___x_275_ = l_Lean_Syntax_isNone(v___x_274_);
if (v___x_275_ == 0)
{
lean_object* v___x_276_; uint8_t v___x_277_; 
v___x_276_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_274_);
v___x_277_ = l_Lean_Syntax_matchesNull(v___x_274_, v___x_276_);
if (v___x_277_ == 0)
{
lean_dec(v___x_274_);
lean_dec(v_headerStx_250_);
return v___x_277_;
}
else
{
lean_object* v___x_278_; lean_object* v___x_279_; uint8_t v___x_280_; 
v___x_278_ = l_Lean_Syntax_getArg(v___x_274_, v___x_254_);
lean_dec(v___x_274_);
v___x_279_ = ((lean_object*)(l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__8));
v___x_280_ = l_Lean_Syntax_isOfKind(v___x_278_, v___x_279_);
if (v___x_280_ == 0)
{
lean_dec(v_headerStx_250_);
return v___x_280_;
}
else
{
goto v___jp_266_;
}
}
}
else
{
lean_dec(v___x_274_);
goto v___jp_266_;
}
v___jp_255_:
{
lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v_importsStx_259_; lean_object* v___x_260_; uint8_t v___x_261_; 
v___x_256_ = lean_unsigned_to_nat(2u);
v___x_257_ = l_Lean_Syntax_getArg(v_headerStx_250_, v___x_256_);
lean_dec(v_headerStx_250_);
v___x_258_ = l_Lean_Syntax_getArgs(v___x_257_);
lean_dec(v___x_257_);
v_importsStx_259_ = l_unsafeCast___redArg(v___x_258_);
lean_dec_ref(v___x_258_);
v___x_260_ = lean_array_get_size(v_importsStx_259_);
v___x_261_ = lean_nat_dec_lt(v___x_254_, v___x_260_);
if (v___x_261_ == 0)
{
lean_dec(v_importsStx_259_);
return v___x_253_;
}
else
{
if (v___x_261_ == 0)
{
lean_dec(v_importsStx_259_);
return v___x_253_;
}
else
{
size_t v___x_262_; size_t v___x_263_; uint8_t v___x_264_; 
v___x_262_ = ((size_t)0ULL);
v___x_263_ = lean_usize_of_nat(v___x_260_);
v___x_264_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest_spec__1(v_completionPos_251_, v___x_253_, v_importsStx_259_, v___x_262_, v___x_263_);
lean_dec(v_importsStx_259_);
if (v___x_264_ == 0)
{
return v___x_253_;
}
else
{
uint8_t v___x_265_; 
v___x_265_ = 0;
return v___x_265_;
}
}
}
}
v___jp_266_:
{
lean_object* v___x_267_; lean_object* v___x_268_; uint8_t v___x_269_; 
v___x_267_ = lean_unsigned_to_nat(1u);
v___x_268_ = l_Lean_Syntax_getArg(v_headerStx_250_, v___x_267_);
v___x_269_ = l_Lean_Syntax_isNone(v___x_268_);
if (v___x_269_ == 0)
{
uint8_t v___x_270_; 
lean_inc(v___x_268_);
v___x_270_ = l_Lean_Syntax_matchesNull(v___x_268_, v___x_267_);
if (v___x_270_ == 0)
{
lean_dec(v___x_268_);
lean_dec(v_headerStx_250_);
return v___x_270_;
}
else
{
lean_object* v___x_271_; lean_object* v___x_272_; uint8_t v___x_273_; 
v___x_271_ = l_Lean_Syntax_getArg(v___x_268_, v___x_254_);
lean_dec(v___x_268_);
v___x_272_ = ((lean_object*)(l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__6));
v___x_273_ = l_Lean_Syntax_isOfKind(v___x_271_, v___x_272_);
if (v___x_273_ == 0)
{
lean_dec(v_headerStx_250_);
return v___x_273_;
}
else
{
goto v___jp_255_;
}
}
}
else
{
lean_dec(v___x_268_);
goto v___jp_255_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest___boxed(lean_object* v_headerStx_281_, lean_object* v_completionPos_282_){
_start:
{
uint8_t v_res_283_; lean_object* v_r_284_; 
v_res_283_ = l_Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest(v_headerStx_281_, v_completionPos_282_);
lean_dec(v_completionPos_282_);
v_r_284_ = lean_box(v_res_283_);
return v_r_284_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__2(lean_object* v_msg_285_){
_start:
{
lean_object* v___x_286_; lean_object* v___x_287_; 
v___x_286_ = lean_box(0);
v___x_287_ = lean_panic_fn_borrowed(v___x_286_, v_msg_285_);
return v___x_287_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__0_spec__0___redArg(lean_object* v_hi_288_, lean_object* v_pivot_289_, lean_object* v_as_290_, lean_object* v_i_291_, lean_object* v_k_292_){
_start:
{
uint8_t v___x_293_; 
v___x_293_ = lean_nat_dec_lt(v_k_292_, v_hi_288_);
if (v___x_293_ == 0)
{
lean_object* v___x_294_; lean_object* v___x_295_; 
lean_dec(v_k_292_);
v___x_294_ = lean_array_fswap(v_as_290_, v_i_291_, v_hi_288_);
v___x_295_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_295_, 0, v_i_291_);
lean_ctor_set(v___x_295_, 1, v___x_294_);
return v___x_295_;
}
else
{
lean_object* v___x_296_; uint8_t v___x_297_; 
v___x_296_ = lean_array_fget_borrowed(v_as_290_, v_k_292_);
v___x_297_ = l_Lean_Name_quickLt(v___x_296_, v_pivot_289_);
if (v___x_297_ == 0)
{
lean_object* v___x_298_; lean_object* v___x_299_; 
v___x_298_ = lean_unsigned_to_nat(1u);
v___x_299_ = lean_nat_add(v_k_292_, v___x_298_);
lean_dec(v_k_292_);
v_k_292_ = v___x_299_;
goto _start;
}
else
{
lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; 
v___x_301_ = lean_array_fswap(v_as_290_, v_i_291_, v_k_292_);
v___x_302_ = lean_unsigned_to_nat(1u);
v___x_303_ = lean_nat_add(v_i_291_, v___x_302_);
lean_dec(v_i_291_);
v___x_304_ = lean_nat_add(v_k_292_, v___x_302_);
lean_dec(v_k_292_);
v_as_290_ = v___x_301_;
v_i_291_ = v___x_303_;
v_k_292_ = v___x_304_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__0_spec__0___redArg___boxed(lean_object* v_hi_306_, lean_object* v_pivot_307_, lean_object* v_as_308_, lean_object* v_i_309_, lean_object* v_k_310_){
_start:
{
lean_object* v_res_311_; 
v_res_311_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__0_spec__0___redArg(v_hi_306_, v_pivot_307_, v_as_308_, v_i_309_, v_k_310_);
lean_dec(v_pivot_307_);
lean_dec(v_hi_306_);
return v_res_311_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__0___redArg(lean_object* v_n_312_, lean_object* v_as_313_, lean_object* v_lo_314_, lean_object* v_hi_315_){
_start:
{
lean_object* v___y_317_; uint8_t v___x_327_; 
v___x_327_ = lean_nat_dec_lt(v_lo_314_, v_hi_315_);
if (v___x_327_ == 0)
{
lean_dec(v_lo_314_);
return v_as_313_;
}
else
{
lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v_mid_330_; lean_object* v___y_332_; lean_object* v___y_338_; lean_object* v___x_343_; lean_object* v___x_344_; uint8_t v___x_345_; 
v___x_328_ = lean_nat_add(v_lo_314_, v_hi_315_);
v___x_329_ = lean_unsigned_to_nat(1u);
v_mid_330_ = lean_nat_shiftr(v___x_328_, v___x_329_);
lean_dec(v___x_328_);
v___x_343_ = lean_array_fget_borrowed(v_as_313_, v_mid_330_);
v___x_344_ = lean_array_fget_borrowed(v_as_313_, v_lo_314_);
v___x_345_ = l_Lean_Name_quickLt(v___x_343_, v___x_344_);
if (v___x_345_ == 0)
{
v___y_338_ = v_as_313_;
goto v___jp_337_;
}
else
{
lean_object* v___x_346_; 
v___x_346_ = lean_array_fswap(v_as_313_, v_lo_314_, v_mid_330_);
v___y_338_ = v___x_346_;
goto v___jp_337_;
}
v___jp_331_:
{
lean_object* v___x_333_; lean_object* v___x_334_; uint8_t v___x_335_; 
v___x_333_ = lean_array_fget_borrowed(v___y_332_, v_mid_330_);
v___x_334_ = lean_array_fget_borrowed(v___y_332_, v_hi_315_);
v___x_335_ = l_Lean_Name_quickLt(v___x_333_, v___x_334_);
if (v___x_335_ == 0)
{
lean_dec(v_mid_330_);
v___y_317_ = v___y_332_;
goto v___jp_316_;
}
else
{
lean_object* v___x_336_; 
v___x_336_ = lean_array_fswap(v___y_332_, v_mid_330_, v_hi_315_);
lean_dec(v_mid_330_);
v___y_317_ = v___x_336_;
goto v___jp_316_;
}
}
v___jp_337_:
{
lean_object* v___x_339_; lean_object* v___x_340_; uint8_t v___x_341_; 
v___x_339_ = lean_array_fget_borrowed(v___y_338_, v_hi_315_);
v___x_340_ = lean_array_fget_borrowed(v___y_338_, v_lo_314_);
v___x_341_ = l_Lean_Name_quickLt(v___x_339_, v___x_340_);
if (v___x_341_ == 0)
{
v___y_332_ = v___y_338_;
goto v___jp_331_;
}
else
{
lean_object* v___x_342_; 
v___x_342_ = lean_array_fswap(v___y_338_, v_lo_314_, v_hi_315_);
v___y_332_ = v___x_342_;
goto v___jp_331_;
}
}
}
v___jp_316_:
{
lean_object* v_pivot_318_; lean_object* v___x_319_; lean_object* v_fst_320_; lean_object* v_snd_321_; uint8_t v___x_322_; 
v_pivot_318_ = lean_array_fget(v___y_317_, v_hi_315_);
lean_inc_n(v_lo_314_, 2);
v___x_319_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__0_spec__0___redArg(v_hi_315_, v_pivot_318_, v___y_317_, v_lo_314_, v_lo_314_);
lean_dec(v_pivot_318_);
v_fst_320_ = lean_ctor_get(v___x_319_, 0);
lean_inc(v_fst_320_);
v_snd_321_ = lean_ctor_get(v___x_319_, 1);
lean_inc(v_snd_321_);
lean_dec_ref(v___x_319_);
v___x_322_ = lean_nat_dec_le(v_hi_315_, v_fst_320_);
if (v___x_322_ == 0)
{
lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; 
v___x_323_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__0___redArg(v_n_312_, v_snd_321_, v_lo_314_, v_fst_320_);
v___x_324_ = lean_unsigned_to_nat(1u);
v___x_325_ = lean_nat_add(v_fst_320_, v___x_324_);
lean_dec(v_fst_320_);
v_as_313_ = v___x_323_;
v_lo_314_ = v___x_325_;
goto _start;
}
else
{
lean_dec(v_fst_320_);
lean_dec(v_lo_314_);
return v_snd_321_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__0___redArg___boxed(lean_object* v_n_347_, lean_object* v_as_348_, lean_object* v_lo_349_, lean_object* v_hi_350_){
_start:
{
lean_object* v_res_351_; 
v_res_351_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__0___redArg(v_n_347_, v_as_348_, v_lo_349_, v_hi_350_);
lean_dec(v_hi_350_);
lean_dec(v_n_347_);
return v_res_351_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__5(uint8_t v___x_352_, lean_object* v_snd_353_, lean_object* v_as_354_, size_t v_i_355_, size_t v_stop_356_, lean_object* v_b_357_){
_start:
{
lean_object* v___y_359_; uint8_t v___x_363_; 
v___x_363_ = lean_usize_dec_eq(v_i_355_, v_stop_356_);
if (v___x_363_ == 0)
{
lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; uint8_t v___x_368_; 
v___x_364_ = lean_array_uget_borrowed(v_as_354_, v_i_355_);
lean_inc(v___x_364_);
v___x_365_ = l_Lean_Name_toString(v___x_364_, v___x_352_);
v___x_366_ = lean_string_utf8_byte_size(v___x_365_);
v___x_367_ = lean_string_utf8_byte_size(v_snd_353_);
v___x_368_ = lean_nat_dec_le(v___x_367_, v___x_366_);
if (v___x_368_ == 0)
{
lean_dec_ref(v___x_365_);
v___y_359_ = v_b_357_;
goto v___jp_358_;
}
else
{
lean_object* v___x_369_; uint8_t v___x_370_; 
v___x_369_ = lean_unsigned_to_nat(0u);
v___x_370_ = lean_string_memcmp(v___x_365_, v_snd_353_, v___x_369_, v___x_369_, v___x_367_);
lean_dec_ref(v___x_365_);
if (v___x_370_ == 0)
{
v___y_359_ = v_b_357_;
goto v___jp_358_;
}
else
{
lean_object* v___x_371_; 
lean_inc(v___x_364_);
v___x_371_ = lean_array_push(v_b_357_, v___x_364_);
v___y_359_ = v___x_371_;
goto v___jp_358_;
}
}
}
else
{
return v_b_357_;
}
v___jp_358_:
{
size_t v___x_360_; size_t v___x_361_; 
v___x_360_ = ((size_t)1ULL);
v___x_361_ = lean_usize_add(v_i_355_, v___x_360_);
v_i_355_ = v___x_361_;
v_b_357_ = v___y_359_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__5___boxed(lean_object* v___x_372_, lean_object* v_snd_373_, lean_object* v_as_374_, lean_object* v_i_375_, lean_object* v_stop_376_, lean_object* v_b_377_){
_start:
{
uint8_t v___x_3440__boxed_378_; size_t v_i_boxed_379_; size_t v_stop_boxed_380_; lean_object* v_res_381_; 
v___x_3440__boxed_378_ = lean_unbox(v___x_372_);
v_i_boxed_379_ = lean_unbox_usize(v_i_375_);
lean_dec(v_i_375_);
v_stop_boxed_380_ = lean_unbox_usize(v_stop_376_);
lean_dec(v_stop_376_);
v_res_381_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__5(v___x_3440__boxed_378_, v_snd_373_, v_as_374_, v_i_boxed_379_, v_stop_boxed_380_, v_b_377_);
lean_dec_ref(v_as_374_);
lean_dec_ref(v_snd_373_);
return v_res_381_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__3(void){
_start:
{
lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; 
v___x_385_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__2));
v___x_386_ = lean_unsigned_to_nat(10u);
v___x_387_ = lean_unsigned_to_nat(60u);
v___x_388_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__1));
v___x_389_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__0));
v___x_390_ = l_mkPanicMessageWithDecl(v___x_389_, v___x_388_, v___x_387_, v___x_386_, v___x_385_);
return v___x_390_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0(lean_object* v_a_394_, lean_object* v___x_395_, lean_object* v___x_396_, lean_object* v_completionPos_397_, lean_object* v___x_398_, lean_object* v___x_399_, lean_object* v___x_400_, lean_object* v___x_401_, lean_object* v_x_402_){
_start:
{
lean_object* v___x_459_; uint8_t v___x_460_; 
v___x_459_ = l_Lean_Syntax_getArg(v_a_394_, v___x_398_);
v___x_460_ = l_Lean_Syntax_isNone(v___x_459_);
if (v___x_460_ == 0)
{
uint8_t v___x_461_; 
lean_inc(v___x_459_);
v___x_461_ = l_Lean_Syntax_matchesNull(v___x_459_, v___x_398_);
if (v___x_461_ == 0)
{
lean_object* v___x_462_; lean_object* v___x_463_; 
lean_dec(v___x_459_);
lean_dec_ref(v___x_401_);
lean_dec_ref(v___x_400_);
lean_dec_ref(v___x_399_);
v___x_462_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__3);
v___x_463_ = l_panic___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__2(v___x_462_);
return v___x_463_;
}
else
{
lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; uint8_t v___x_467_; 
v___x_464_ = l_Lean_Syntax_getArg(v___x_459_, v___x_396_);
lean_dec(v___x_459_);
v___x_465_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__6));
lean_inc_ref(v___x_401_);
lean_inc_ref(v___x_400_);
lean_inc_ref(v___x_399_);
v___x_466_ = l_Lean_Name_mkStr4(v___x_399_, v___x_400_, v___x_401_, v___x_465_);
v___x_467_ = l_Lean_Syntax_isOfKind(v___x_464_, v___x_466_);
lean_dec(v___x_466_);
if (v___x_467_ == 0)
{
lean_object* v___x_468_; lean_object* v___x_469_; 
lean_dec_ref(v___x_401_);
lean_dec_ref(v___x_400_);
lean_dec_ref(v___x_399_);
v___x_468_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__3);
v___x_469_ = l_panic___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__2(v___x_468_);
return v___x_469_;
}
else
{
goto v___jp_446_;
}
}
}
else
{
lean_dec(v___x_459_);
goto v___jp_446_;
}
v___jp_403_:
{
lean_object* v___x_404_; lean_object* v_importId_405_; lean_object* v___x_406_; lean_object* v___x_407_; uint8_t v___x_408_; 
v___x_404_ = lean_unsigned_to_nat(4u);
v_importId_405_ = l_Lean_Syntax_getArg(v_a_394_, v___x_404_);
v___x_406_ = lean_unsigned_to_nat(5u);
v___x_407_ = l_Lean_Syntax_getArg(v_a_394_, v___x_406_);
v___x_408_ = l_Lean_Syntax_isNone(v___x_407_);
if (v___x_408_ == 0)
{
uint8_t v___x_409_; 
lean_inc(v___x_407_);
v___x_409_ = l_Lean_Syntax_matchesNull(v___x_407_, v___x_395_);
if (v___x_409_ == 0)
{
lean_object* v___x_410_; lean_object* v___x_411_; 
lean_dec(v___x_407_);
lean_dec(v_importId_405_);
v___x_410_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__3);
v___x_411_ = l_panic___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__2(v___x_410_);
return v___x_411_;
}
else
{
lean_object* v_trailingDotTk_x3f_412_; lean_object* v___x_413_; 
v_trailingDotTk_x3f_412_ = l_Lean_Syntax_getArg(v___x_407_, v___x_396_);
lean_dec(v___x_407_);
v___x_413_ = l_Lean_Syntax_getTailPos_x3f(v_trailingDotTk_x3f_412_, v___x_408_);
lean_dec(v_trailingDotTk_x3f_412_);
if (lean_obj_tag(v___x_413_) == 0)
{
lean_object* v___x_414_; 
lean_dec(v_importId_405_);
v___x_414_ = lean_box(0);
return v___x_414_;
}
else
{
lean_object* v_val_415_; lean_object* v___x_417_; uint8_t v_isShared_418_; uint8_t v_isSharedCheck_427_; 
v_val_415_ = lean_ctor_get(v___x_413_, 0);
v_isSharedCheck_427_ = !lean_is_exclusive(v___x_413_);
if (v_isSharedCheck_427_ == 0)
{
v___x_417_ = v___x_413_;
v_isShared_418_ = v_isSharedCheck_427_;
goto v_resetjp_416_;
}
else
{
lean_inc(v_val_415_);
lean_dec(v___x_413_);
v___x_417_ = lean_box(0);
v_isShared_418_ = v_isSharedCheck_427_;
goto v_resetjp_416_;
}
v_resetjp_416_:
{
uint8_t v_decide_419_; 
v_decide_419_ = lean_nat_dec_eq(v_val_415_, v_completionPos_397_);
lean_dec(v_val_415_);
if (v_decide_419_ == 0)
{
lean_object* v___x_420_; 
lean_del_object(v___x_417_);
lean_dec(v_importId_405_);
v___x_420_ = lean_box(0);
return v___x_420_;
}
else
{
lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_425_; 
v___x_421_ = l_Lean_TSyntax_getId(v_importId_405_);
lean_dec(v_importId_405_);
v___x_422_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__4));
v___x_423_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_423_, 0, v___x_421_);
lean_ctor_set(v___x_423_, 1, v___x_422_);
if (v_isShared_418_ == 0)
{
lean_ctor_set(v___x_417_, 0, v___x_423_);
v___x_425_ = v___x_417_;
goto v_reusejp_424_;
}
else
{
lean_object* v_reuseFailAlloc_426_; 
v_reuseFailAlloc_426_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_426_, 0, v___x_423_);
v___x_425_ = v_reuseFailAlloc_426_;
goto v_reusejp_424_;
}
v_reusejp_424_:
{
return v___x_425_;
}
}
}
}
}
}
else
{
uint8_t v___x_428_; lean_object* v___x_429_; 
lean_dec(v___x_407_);
v___x_428_ = 0;
v___x_429_ = l_Lean_Syntax_getTailPos_x3f(v_importId_405_, v___x_428_);
if (lean_obj_tag(v___x_429_) == 0)
{
lean_object* v___x_430_; 
lean_dec(v_importId_405_);
v___x_430_ = lean_box(0);
return v___x_430_;
}
else
{
lean_object* v_val_431_; lean_object* v___x_433_; uint8_t v_isShared_434_; uint8_t v_isSharedCheck_445_; 
v_val_431_ = lean_ctor_get(v___x_429_, 0);
v_isSharedCheck_445_ = !lean_is_exclusive(v___x_429_);
if (v_isSharedCheck_445_ == 0)
{
v___x_433_ = v___x_429_;
v_isShared_434_ = v_isSharedCheck_445_;
goto v_resetjp_432_;
}
else
{
lean_inc(v_val_431_);
lean_dec(v___x_429_);
v___x_433_ = lean_box(0);
v_isShared_434_ = v_isSharedCheck_445_;
goto v_resetjp_432_;
}
v_resetjp_432_:
{
uint8_t v_decide_435_; 
v_decide_435_ = lean_nat_dec_eq(v_val_431_, v_completionPos_397_);
lean_dec(v_val_431_);
if (v_decide_435_ == 0)
{
lean_object* v___x_436_; 
lean_del_object(v___x_433_);
lean_dec(v_importId_405_);
v___x_436_ = lean_box(0);
return v___x_436_;
}
else
{
lean_object* v___x_437_; 
v___x_437_ = l_Lean_TSyntax_getId(v_importId_405_);
lean_dec(v_importId_405_);
if (lean_obj_tag(v___x_437_) == 1)
{
lean_object* v_pre_438_; lean_object* v_str_439_; lean_object* v___x_440_; lean_object* v___x_442_; 
v_pre_438_ = lean_ctor_get(v___x_437_, 0);
lean_inc(v_pre_438_);
v_str_439_ = lean_ctor_get(v___x_437_, 1);
lean_inc_ref(v_str_439_);
lean_dec_ref_known(v___x_437_, 2);
v___x_440_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_440_, 0, v_pre_438_);
lean_ctor_set(v___x_440_, 1, v_str_439_);
if (v_isShared_434_ == 0)
{
lean_ctor_set(v___x_433_, 0, v___x_440_);
v___x_442_ = v___x_433_;
goto v_reusejp_441_;
}
else
{
lean_object* v_reuseFailAlloc_443_; 
v_reuseFailAlloc_443_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_443_, 0, v___x_440_);
v___x_442_ = v_reuseFailAlloc_443_;
goto v_reusejp_441_;
}
v_reusejp_441_:
{
return v___x_442_;
}
}
else
{
lean_object* v___x_444_; 
lean_dec(v___x_437_);
lean_del_object(v___x_433_);
v___x_444_ = lean_box(0);
return v___x_444_;
}
}
}
}
}
}
v___jp_446_:
{
lean_object* v___x_447_; lean_object* v___x_448_; uint8_t v___x_449_; 
v___x_447_ = lean_unsigned_to_nat(3u);
v___x_448_ = l_Lean_Syntax_getArg(v_a_394_, v___x_447_);
v___x_449_ = l_Lean_Syntax_isNone(v___x_448_);
if (v___x_449_ == 0)
{
uint8_t v___x_450_; 
lean_inc(v___x_448_);
v___x_450_ = l_Lean_Syntax_matchesNull(v___x_448_, v___x_398_);
if (v___x_450_ == 0)
{
lean_object* v___x_451_; lean_object* v___x_452_; 
lean_dec(v___x_448_);
lean_dec_ref(v___x_401_);
lean_dec_ref(v___x_400_);
lean_dec_ref(v___x_399_);
v___x_451_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__3);
v___x_452_ = l_panic___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__2(v___x_451_);
return v___x_452_;
}
else
{
lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; uint8_t v___x_456_; 
v___x_453_ = l_Lean_Syntax_getArg(v___x_448_, v___x_396_);
lean_dec(v___x_448_);
v___x_454_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__5));
v___x_455_ = l_Lean_Name_mkStr4(v___x_399_, v___x_400_, v___x_401_, v___x_454_);
v___x_456_ = l_Lean_Syntax_isOfKind(v___x_453_, v___x_455_);
lean_dec(v___x_455_);
if (v___x_456_ == 0)
{
lean_object* v___x_457_; lean_object* v___x_458_; 
v___x_457_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__3);
v___x_458_ = l_panic___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__2(v___x_457_);
return v___x_458_;
}
else
{
goto v___jp_403_;
}
}
}
else
{
lean_dec(v___x_448_);
lean_dec_ref(v___x_401_);
lean_dec_ref(v___x_400_);
lean_dec_ref(v___x_399_);
goto v___jp_403_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___boxed(lean_object* v_a_470_, lean_object* v___x_471_, lean_object* v___x_472_, lean_object* v_completionPos_473_, lean_object* v___x_474_, lean_object* v___x_475_, lean_object* v___x_476_, lean_object* v___x_477_, lean_object* v_x_478_){
_start:
{
lean_object* v_res_479_; 
v_res_479_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0(v_a_470_, v___x_471_, v___x_472_, v_completionPos_473_, v___x_474_, v___x_475_, v___x_476_, v___x_477_, v_x_478_);
lean_dec(v___x_474_);
lean_dec(v_completionPos_473_);
lean_dec(v___x_472_);
lean_dec(v___x_471_);
lean_dec(v_a_470_);
return v_res_479_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3(lean_object* v_completionPos_495_, lean_object* v_as_496_, size_t v_sz_497_, size_t v_i_498_, lean_object* v_b_499_){
_start:
{
uint8_t v___x_500_; 
v___x_500_ = lean_usize_dec_lt(v_i_498_, v_sz_497_);
if (v___x_500_ == 0)
{
lean_inc_ref(v_b_499_);
return v_b_499_;
}
else
{
lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___y_504_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v_a_514_; uint8_t v___x_515_; 
v___x_501_ = lean_box(0);
v___x_502_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__0));
v___x_510_ = ((lean_object*)(l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__0));
v___x_511_ = ((lean_object*)(l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__1));
v___x_512_ = ((lean_object*)(l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__2));
v___x_513_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__2));
v_a_514_ = lean_array_uget_borrowed(v_as_496_, v_i_498_);
lean_inc(v_a_514_);
v___x_515_ = l_Lean_Syntax_isOfKind(v_a_514_, v___x_513_);
if (v___x_515_ == 0)
{
lean_object* v___x_516_; lean_object* v___x_517_; 
v___x_516_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__3);
v___x_517_ = l_panic___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__2(v___x_516_);
v___y_504_ = v___x_517_;
goto v___jp_503_;
}
else
{
lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; uint8_t v___x_522_; 
v___x_518_ = lean_unsigned_to_nat(2u);
v___x_519_ = lean_unsigned_to_nat(0u);
v___x_520_ = lean_unsigned_to_nat(1u);
v___x_521_ = l_Lean_Syntax_getArg(v_a_514_, v___x_519_);
v___x_522_ = l_Lean_Syntax_isNone(v___x_521_);
if (v___x_522_ == 0)
{
uint8_t v___x_523_; 
lean_inc(v___x_521_);
v___x_523_ = l_Lean_Syntax_matchesNull(v___x_521_, v___x_520_);
if (v___x_523_ == 0)
{
lean_object* v___x_524_; lean_object* v___x_525_; 
lean_dec(v___x_521_);
v___x_524_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__3);
v___x_525_ = l_panic___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__2(v___x_524_);
v___y_504_ = v___x_525_;
goto v___jp_503_;
}
else
{
lean_object* v___x_526_; lean_object* v___x_527_; uint8_t v___x_528_; 
v___x_526_ = l_Lean_Syntax_getArg(v___x_521_, v___x_519_);
lean_dec(v___x_521_);
v___x_527_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__4));
v___x_528_ = l_Lean_Syntax_isOfKind(v___x_526_, v___x_527_);
if (v___x_528_ == 0)
{
lean_object* v___x_529_; lean_object* v___x_530_; 
v___x_529_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__3);
v___x_530_ = l_panic___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__2(v___x_529_);
v___y_504_ = v___x_530_;
goto v___jp_503_;
}
else
{
lean_object* v___x_531_; 
v___x_531_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0(v_a_514_, v___x_518_, v___x_519_, v_completionPos_495_, v___x_520_, v___x_510_, v___x_511_, v___x_512_, v___x_501_);
v___y_504_ = v___x_531_;
goto v___jp_503_;
}
}
}
else
{
lean_object* v___x_532_; 
lean_dec(v___x_521_);
v___x_532_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0(v_a_514_, v___x_518_, v___x_519_, v_completionPos_495_, v___x_520_, v___x_510_, v___x_511_, v___x_512_, v___x_501_);
v___y_504_ = v___x_532_;
goto v___jp_503_;
}
}
v___jp_503_:
{
if (lean_obj_tag(v___y_504_) == 1)
{
lean_object* v___x_505_; lean_object* v___x_506_; 
v___x_505_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_505_, 0, v___y_504_);
v___x_506_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_506_, 0, v___x_505_);
lean_ctor_set(v___x_506_, 1, v___x_501_);
return v___x_506_;
}
else
{
size_t v___x_507_; size_t v___x_508_; 
lean_dec(v___y_504_);
v___x_507_ = ((size_t)1ULL);
v___x_508_ = lean_usize_add(v_i_498_, v___x_507_);
v_i_498_ = v___x_508_;
v_b_499_ = v___x_502_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___boxed(lean_object* v_completionPos_533_, lean_object* v_as_534_, lean_object* v_sz_535_, lean_object* v_i_536_, lean_object* v_b_537_){
_start:
{
size_t v_sz_boxed_538_; size_t v_i_boxed_539_; lean_object* v_res_540_; 
v_sz_boxed_538_ = lean_unbox_usize(v_sz_535_);
lean_dec(v_sz_535_);
v_i_boxed_539_ = lean_unbox_usize(v_i_536_);
lean_dec(v_i_536_);
v_res_540_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3(v_completionPos_533_, v_as_534_, v_sz_boxed_538_, v_i_boxed_539_, v_b_537_);
lean_dec_ref(v_b_537_);
lean_dec_ref(v_as_534_);
lean_dec(v_completionPos_533_);
return v_res_540_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__4___closed__0(void){
_start:
{
lean_object* v___x_541_; lean_object* v___x_542_; 
v___x_541_ = lean_box(0);
v___x_542_ = l_unsafeCast___redArg(v___x_541_);
return v___x_542_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__4(lean_object* v_fst_543_, size_t v_sz_544_, size_t v_i_545_, lean_object* v_bs_546_){
_start:
{
uint8_t v___x_547_; 
v___x_547_ = lean_usize_dec_lt(v_i_545_, v_sz_544_);
if (v___x_547_ == 0)
{
lean_object* v___x_548_; 
v___x_548_ = l_unsafeCast___redArg(v_bs_546_);
lean_dec_ref(v_bs_546_);
return v___x_548_;
}
else
{
lean_object* v_v_549_; lean_object* v___x_550_; lean_object* v_bs_x27_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; size_t v___x_555_; size_t v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; 
v_v_549_ = lean_array_uget(v_bs_546_, v_i_545_);
v___x_550_ = lean_unsigned_to_nat(0u);
v_bs_x27_551_ = lean_array_uset(v_bs_546_, v_i_545_, v___x_550_);
v___x_552_ = l_unsafeCast___redArg(v_v_549_);
lean_dec(v_v_549_);
v___x_553_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__4___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__4___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__4___closed__0);
v___x_554_ = l_Lean_Name_replacePrefix(v___x_552_, v_fst_543_, v___x_553_);
v___x_555_ = ((size_t)1ULL);
v___x_556_ = lean_usize_add(v_i_545_, v___x_555_);
v___x_557_ = l_unsafeCast___redArg(v___x_554_);
lean_dec(v___x_554_);
v___x_558_ = lean_array_uset(v_bs_x27_551_, v_i_545_, v___x_557_);
v_i_545_ = v___x_556_;
v_bs_546_ = v___x_558_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__4___boxed(lean_object* v_fst_560_, lean_object* v_sz_561_, lean_object* v_i_562_, lean_object* v_bs_563_){
_start:
{
size_t v_sz_boxed_564_; size_t v_i_boxed_565_; lean_object* v_res_566_; 
v_sz_boxed_564_ = lean_unbox_usize(v_sz_561_);
lean_dec(v_sz_561_);
v_i_boxed_565_ = lean_unbox_usize(v_i_562_);
lean_dec(v_i_562_);
v_res_566_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__4(v_fst_560_, v_sz_boxed_564_, v_i_boxed_565_, v_bs_563_);
lean_dec(v_fst_560_);
return v_res_566_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__1(uint8_t v___x_567_, lean_object* v_as_568_, size_t v_i_569_, size_t v_stop_570_, lean_object* v_b_571_){
_start:
{
lean_object* v___y_573_; uint8_t v___x_577_; 
v___x_577_ = lean_usize_dec_eq(v_i_569_, v_stop_570_);
if (v___x_577_ == 0)
{
lean_object* v___x_578_; uint8_t v___x_579_; 
v___x_578_ = lean_array_uget_borrowed(v_as_568_, v_i_569_);
v___x_579_ = l_Lean_Name_isAnonymous(v___x_578_);
if (v___x_579_ == 0)
{
if (v___x_567_ == 0)
{
v___y_573_ = v_b_571_;
goto v___jp_572_;
}
else
{
lean_object* v___x_580_; 
lean_inc(v___x_578_);
v___x_580_ = lean_array_push(v_b_571_, v___x_578_);
v___y_573_ = v___x_580_;
goto v___jp_572_;
}
}
else
{
v___y_573_ = v_b_571_;
goto v___jp_572_;
}
}
else
{
return v_b_571_;
}
v___jp_572_:
{
size_t v___x_574_; size_t v___x_575_; 
v___x_574_ = ((size_t)1ULL);
v___x_575_ = lean_usize_add(v_i_569_, v___x_574_);
v_i_569_ = v___x_575_;
v_b_571_ = v___y_573_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__1___boxed(lean_object* v___x_581_, lean_object* v_as_582_, lean_object* v_i_583_, lean_object* v_stop_584_, lean_object* v_b_585_){
_start:
{
uint8_t v___x_3868__boxed_586_; size_t v_i_boxed_587_; size_t v_stop_boxed_588_; lean_object* v_res_589_; 
v___x_3868__boxed_586_ = lean_unbox(v___x_581_);
v_i_boxed_587_ = lean_unbox_usize(v_i_583_);
lean_dec(v_i_583_);
v_stop_boxed_588_ = lean_unbox_usize(v_stop_584_);
lean_dec(v_stop_584_);
v_res_589_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__1(v___x_3868__boxed_586_, v_as_582_, v_i_boxed_587_, v_stop_boxed_588_, v_b_585_);
lean_dec_ref(v_as_582_);
return v_res_589_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_computePartialImportCompletions(lean_object* v_headerStx_592_, lean_object* v_completionPos_593_, lean_object* v_availableImports_594_){
_start:
{
lean_object* v___y_598_; lean_object* v___y_599_; lean_object* v___y_600_; lean_object* v___y_601_; lean_object* v___x_605_; uint8_t v___x_606_; 
v___x_605_ = ((lean_object*)(l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__4));
lean_inc(v_headerStx_592_);
v___x_606_ = l_Lean_Syntax_isOfKind(v_headerStx_592_, v___x_605_);
if (v___x_606_ == 0)
{
lean_object* v___x_607_; 
lean_dec_ref(v_availableImports_594_);
lean_dec(v_headerStx_592_);
v___x_607_ = ((lean_object*)(l_Lean_Lsp_ImportCompletion_computePartialImportCompletions___closed__0));
return v___x_607_;
}
else
{
lean_object* v___x_608_; lean_object* v___y_610_; lean_object* v___y_611_; lean_object* v___y_617_; lean_object* v___y_618_; lean_object* v___y_630_; lean_object* v___x_668_; uint8_t v___x_669_; 
v___x_608_ = lean_unsigned_to_nat(0u);
v___x_668_ = l_Lean_Syntax_getArg(v_headerStx_592_, v___x_608_);
v___x_669_ = l_Lean_Syntax_isNone(v___x_668_);
if (v___x_669_ == 0)
{
lean_object* v___x_670_; uint8_t v___x_671_; 
v___x_670_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_668_);
v___x_671_ = l_Lean_Syntax_matchesNull(v___x_668_, v___x_670_);
if (v___x_671_ == 0)
{
lean_object* v___x_672_; 
lean_dec(v___x_668_);
lean_dec_ref(v_availableImports_594_);
lean_dec(v_headerStx_592_);
v___x_672_ = ((lean_object*)(l_Lean_Lsp_ImportCompletion_computePartialImportCompletions___closed__0));
return v___x_672_;
}
else
{
lean_object* v___x_673_; lean_object* v___x_674_; uint8_t v___x_675_; 
v___x_673_ = l_Lean_Syntax_getArg(v___x_668_, v___x_608_);
lean_dec(v___x_668_);
v___x_674_ = ((lean_object*)(l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__8));
v___x_675_ = l_Lean_Syntax_isOfKind(v___x_673_, v___x_674_);
if (v___x_675_ == 0)
{
lean_object* v___x_676_; 
lean_dec_ref(v_availableImports_594_);
lean_dec(v_headerStx_592_);
v___x_676_ = ((lean_object*)(l_Lean_Lsp_ImportCompletion_computePartialImportCompletions___closed__0));
return v___x_676_;
}
else
{
goto v___jp_658_;
}
}
}
else
{
lean_dec(v___x_668_);
goto v___jp_658_;
}
v___jp_609_:
{
lean_object* v___x_612_; uint8_t v___x_613_; 
v___x_612_ = lean_array_get_size(v___y_611_);
v___x_613_ = lean_nat_dec_eq(v___x_612_, v___x_608_);
if (v___x_613_ == 0)
{
lean_object* v___x_614_; uint8_t v___x_615_; 
v___x_614_ = lean_nat_sub(v___x_612_, v___y_610_);
v___x_615_ = lean_nat_dec_le(v___x_608_, v___x_614_);
if (v___x_615_ == 0)
{
lean_inc(v___x_614_);
v___y_598_ = v___x_612_;
v___y_599_ = v___x_614_;
v___y_600_ = v___y_611_;
v___y_601_ = v___x_614_;
goto v___jp_597_;
}
else
{
v___y_598_ = v___x_612_;
v___y_599_ = v___x_614_;
v___y_600_ = v___y_611_;
v___y_601_ = v___x_608_;
goto v___jp_597_;
}
}
else
{
return v___y_611_;
}
}
v___jp_616_:
{
lean_object* v___x_619_; lean_object* v___x_620_; uint8_t v___x_621_; 
v___x_619_ = lean_array_get_size(v___y_618_);
v___x_620_ = ((lean_object*)(l_Lean_Lsp_ImportCompletion_computePartialImportCompletions___closed__0));
v___x_621_ = lean_nat_dec_lt(v___x_608_, v___x_619_);
if (v___x_621_ == 0)
{
lean_dec_ref(v___y_618_);
v___y_610_ = v___y_617_;
v___y_611_ = v___x_620_;
goto v___jp_609_;
}
else
{
uint8_t v___x_622_; 
v___x_622_ = lean_nat_dec_le(v___x_619_, v___x_619_);
if (v___x_622_ == 0)
{
if (v___x_621_ == 0)
{
lean_dec_ref(v___y_618_);
v___y_610_ = v___y_617_;
v___y_611_ = v___x_620_;
goto v___jp_609_;
}
else
{
size_t v___x_623_; size_t v___x_624_; lean_object* v___x_625_; 
v___x_623_ = ((size_t)0ULL);
v___x_624_ = lean_usize_of_nat(v___x_619_);
v___x_625_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__1(v___x_606_, v___y_618_, v___x_623_, v___x_624_, v___x_620_);
lean_dec_ref(v___y_618_);
v___y_610_ = v___y_617_;
v___y_611_ = v___x_625_;
goto v___jp_609_;
}
}
else
{
size_t v___x_626_; size_t v___x_627_; lean_object* v___x_628_; 
v___x_626_ = ((size_t)0ULL);
v___x_627_ = lean_usize_of_nat(v___x_619_);
v___x_628_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__1(v___x_606_, v___y_618_, v___x_626_, v___x_627_, v___x_620_);
lean_dec_ref(v___y_618_);
v___y_610_ = v___y_617_;
v___y_611_ = v___x_628_;
goto v___jp_609_;
}
}
}
v___jp_629_:
{
lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v_importsStx_634_; lean_object* v___x_635_; lean_object* v___x_636_; size_t v_sz_637_; size_t v___x_638_; lean_object* v___x_639_; lean_object* v_fst_640_; 
v___x_631_ = lean_unsigned_to_nat(2u);
v___x_632_ = l_Lean_Syntax_getArg(v_headerStx_592_, v___x_631_);
lean_dec(v_headerStx_592_);
v___x_633_ = l_Lean_Syntax_getArgs(v___x_632_);
lean_dec(v___x_632_);
v_importsStx_634_ = l_unsafeCast___redArg(v___x_633_);
lean_dec_ref(v___x_633_);
v___x_635_ = l_unsafeCast___redArg(v_importsStx_634_);
lean_dec(v_importsStx_634_);
v___x_636_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__0));
v_sz_637_ = lean_array_size(v___x_635_);
v___x_638_ = ((size_t)0ULL);
v___x_639_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3(v_completionPos_593_, v___x_635_, v_sz_637_, v___x_638_, v___x_636_);
lean_dec(v___x_635_);
v_fst_640_ = lean_ctor_get(v___x_639_, 0);
lean_inc(v_fst_640_);
lean_dec_ref(v___x_639_);
if (lean_obj_tag(v_fst_640_) == 0)
{
lean_dec_ref(v_availableImports_594_);
goto v___jp_595_;
}
else
{
lean_object* v_val_641_; 
v_val_641_ = lean_ctor_get(v_fst_640_, 0);
lean_inc(v_val_641_);
lean_dec_ref_known(v_fst_640_, 1);
if (lean_obj_tag(v_val_641_) == 1)
{
lean_object* v_val_642_; lean_object* v_fst_643_; lean_object* v_snd_644_; lean_object* v___x_645_; size_t v_sz_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; uint8_t v___x_652_; 
v_val_642_ = lean_ctor_get(v_val_641_, 0);
lean_inc(v_val_642_);
lean_dec_ref_known(v_val_641_, 1);
v_fst_643_ = lean_ctor_get(v_val_642_, 0);
lean_inc(v_fst_643_);
v_snd_644_ = lean_ctor_get(v_val_642_, 1);
lean_inc(v_snd_644_);
lean_dec(v_val_642_);
v___x_645_ = l_Lean_NameTrie_matchingToArray___redArg(v_availableImports_594_, v_fst_643_);
v_sz_646_ = lean_array_size(v___x_645_);
v___x_647_ = l_unsafeCast___redArg(v___x_645_);
lean_dec_ref(v___x_645_);
v___x_648_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__4(v_fst_643_, v_sz_646_, v___x_638_, v___x_647_);
lean_dec(v_fst_643_);
v___x_649_ = l_unsafeCast___redArg(v___x_648_);
lean_dec_ref(v___x_648_);
v___x_650_ = lean_array_get_size(v___x_649_);
v___x_651_ = ((lean_object*)(l_Lean_Lsp_ImportCompletion_computePartialImportCompletions___closed__0));
v___x_652_ = lean_nat_dec_lt(v___x_608_, v___x_650_);
if (v___x_652_ == 0)
{
lean_dec(v___x_649_);
lean_dec(v_snd_644_);
v___y_617_ = v___y_630_;
v___y_618_ = v___x_651_;
goto v___jp_616_;
}
else
{
uint8_t v___x_653_; 
v___x_653_ = lean_nat_dec_le(v___x_650_, v___x_650_);
if (v___x_653_ == 0)
{
if (v___x_652_ == 0)
{
lean_dec(v___x_649_);
lean_dec(v_snd_644_);
v___y_617_ = v___y_630_;
v___y_618_ = v___x_651_;
goto v___jp_616_;
}
else
{
size_t v___x_654_; lean_object* v___x_655_; 
v___x_654_ = lean_usize_of_nat(v___x_650_);
v___x_655_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__5(v___x_606_, v_snd_644_, v___x_649_, v___x_638_, v___x_654_, v___x_651_);
lean_dec(v___x_649_);
lean_dec(v_snd_644_);
v___y_617_ = v___y_630_;
v___y_618_ = v___x_655_;
goto v___jp_616_;
}
}
else
{
size_t v___x_656_; lean_object* v___x_657_; 
v___x_656_ = lean_usize_of_nat(v___x_650_);
v___x_657_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__5(v___x_606_, v_snd_644_, v___x_649_, v___x_638_, v___x_656_, v___x_651_);
lean_dec(v___x_649_);
lean_dec(v_snd_644_);
v___y_617_ = v___y_630_;
v___y_618_ = v___x_657_;
goto v___jp_616_;
}
}
}
else
{
lean_dec(v_val_641_);
lean_dec_ref(v_availableImports_594_);
goto v___jp_595_;
}
}
}
v___jp_658_:
{
lean_object* v___x_659_; lean_object* v___x_660_; uint8_t v___x_661_; 
v___x_659_ = lean_unsigned_to_nat(1u);
v___x_660_ = l_Lean_Syntax_getArg(v_headerStx_592_, v___x_659_);
v___x_661_ = l_Lean_Syntax_isNone(v___x_660_);
if (v___x_661_ == 0)
{
uint8_t v___x_662_; 
lean_inc(v___x_660_);
v___x_662_ = l_Lean_Syntax_matchesNull(v___x_660_, v___x_659_);
if (v___x_662_ == 0)
{
lean_object* v___x_663_; 
lean_dec(v___x_660_);
lean_dec_ref(v_availableImports_594_);
lean_dec(v_headerStx_592_);
v___x_663_ = ((lean_object*)(l_Lean_Lsp_ImportCompletion_computePartialImportCompletions___closed__0));
return v___x_663_;
}
else
{
lean_object* v___x_664_; lean_object* v___x_665_; uint8_t v___x_666_; 
v___x_664_ = l_Lean_Syntax_getArg(v___x_660_, v___x_608_);
lean_dec(v___x_660_);
v___x_665_ = ((lean_object*)(l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__6));
v___x_666_ = l_Lean_Syntax_isOfKind(v___x_664_, v___x_665_);
if (v___x_666_ == 0)
{
lean_object* v___x_667_; 
lean_dec_ref(v_availableImports_594_);
lean_dec(v_headerStx_592_);
v___x_667_ = ((lean_object*)(l_Lean_Lsp_ImportCompletion_computePartialImportCompletions___closed__0));
return v___x_667_;
}
else
{
v___y_630_ = v___x_659_;
goto v___jp_629_;
}
}
}
else
{
lean_dec(v___x_660_);
v___y_630_ = v___x_659_;
goto v___jp_629_;
}
}
}
v___jp_595_:
{
lean_object* v___x_596_; 
v___x_596_ = ((lean_object*)(l_Lean_Lsp_ImportCompletion_computePartialImportCompletions___closed__0));
return v___x_596_;
}
v___jp_597_:
{
uint8_t v___x_602_; 
v___x_602_ = lean_nat_dec_le(v___y_601_, v___y_599_);
if (v___x_602_ == 0)
{
lean_object* v___x_603_; 
lean_dec(v___y_599_);
lean_inc(v___y_601_);
v___x_603_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__0___redArg(v___y_598_, v___y_600_, v___y_601_, v___y_601_);
lean_dec(v___y_601_);
lean_dec(v___y_598_);
return v___x_603_;
}
else
{
lean_object* v___x_604_; 
v___x_604_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__0___redArg(v___y_598_, v___y_600_, v___y_601_, v___y_599_);
lean_dec(v___y_599_);
lean_dec(v___y_598_);
return v___x_604_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_computePartialImportCompletions___boxed(lean_object* v_headerStx_677_, lean_object* v_completionPos_678_, lean_object* v_availableImports_679_){
_start:
{
lean_object* v_res_680_; 
v_res_680_ = l_Lean_Lsp_ImportCompletion_computePartialImportCompletions(v_headerStx_677_, v_completionPos_678_, v_availableImports_679_);
lean_dec(v_completionPos_678_);
return v_res_680_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__0(lean_object* v_n_681_, lean_object* v_as_682_, lean_object* v_lo_683_, lean_object* v_hi_684_, lean_object* v_w_685_, lean_object* v_hlo_686_, lean_object* v_hhi_687_){
_start:
{
lean_object* v___x_688_; 
v___x_688_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__0___redArg(v_n_681_, v_as_682_, v_lo_683_, v_hi_684_);
return v___x_688_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__0___boxed(lean_object* v_n_689_, lean_object* v_as_690_, lean_object* v_lo_691_, lean_object* v_hi_692_, lean_object* v_w_693_, lean_object* v_hlo_694_, lean_object* v_hhi_695_){
_start:
{
lean_object* v_res_696_; 
v_res_696_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__0(v_n_689_, v_as_690_, v_lo_691_, v_hi_692_, v_w_693_, v_hlo_694_, v_hhi_695_);
lean_dec(v_hi_692_);
lean_dec(v_n_689_);
return v_res_696_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__0_spec__0(lean_object* v_n_697_, lean_object* v_lo_698_, lean_object* v_hi_699_, lean_object* v_hhi_700_, lean_object* v_pivot_701_, lean_object* v_as_702_, lean_object* v_i_703_, lean_object* v_k_704_, lean_object* v_ilo_705_, lean_object* v_ik_706_, lean_object* v_w_707_){
_start:
{
lean_object* v___x_708_; 
v___x_708_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__0_spec__0___redArg(v_hi_699_, v_pivot_701_, v_as_702_, v_i_703_, v_k_704_);
return v___x_708_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__0_spec__0___boxed(lean_object* v_n_709_, lean_object* v_lo_710_, lean_object* v_hi_711_, lean_object* v_hhi_712_, lean_object* v_pivot_713_, lean_object* v_as_714_, lean_object* v_i_715_, lean_object* v_k_716_, lean_object* v_ilo_717_, lean_object* v_ik_718_, lean_object* v_w_719_){
_start:
{
lean_object* v_res_720_; 
v_res_720_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__0_spec__0(v_n_709_, v_lo_710_, v_hi_711_, v_hhi_712_, v_pivot_713_, v_as_714_, v_i_715_, v_k_716_, v_ilo_717_, v_ik_718_, v_w_719_);
lean_dec(v_pivot_713_);
lean_dec(v_hi_711_);
lean_dec(v_lo_710_);
lean_dec(v_n_709_);
return v_res_720_;
}
}
LEAN_EXPORT uint8_t l_Lean_Lsp_ImportCompletion_isImportCompletionRequest(lean_object* v_text_721_, lean_object* v_headerStx_722_, lean_object* v_params_723_){
_start:
{
lean_object* v_position_724_; lean_object* v_completionPos_725_; lean_object* v___y_727_; uint8_t v___x_732_; lean_object* v___y_734_; lean_object* v___x_737_; 
v_position_724_ = lean_ctor_get(v_params_723_, 1);
lean_inc_ref(v_position_724_);
lean_dec_ref(v_params_723_);
v_completionPos_725_ = l_Lean_FileMap_lspPosToUtf8Pos(v_text_721_, v_position_724_);
v___x_732_ = 0;
v___x_737_ = l_Lean_Syntax_getPos_x3f(v_headerStx_722_, v___x_732_);
if (lean_obj_tag(v___x_737_) == 0)
{
lean_object* v___x_738_; 
v___x_738_ = lean_unsigned_to_nat(0u);
v___y_734_ = v___x_738_;
goto v___jp_733_;
}
else
{
lean_object* v_val_739_; 
v_val_739_ = lean_ctor_get(v___x_737_, 0);
lean_inc(v_val_739_);
lean_dec_ref_known(v___x_737_, 1);
v___y_734_ = v_val_739_;
goto v___jp_733_;
}
v___jp_726_:
{
lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; uint8_t v___x_731_; 
v___x_728_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportNameCompletionRequest_spec__1___closed__0, &l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportNameCompletionRequest_spec__1___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportNameCompletionRequest_spec__1___closed__0);
v___x_729_ = lean_nat_add(v___y_727_, v___x_728_);
lean_dec(v___y_727_);
v___x_730_ = lean_nat_add(v___x_729_, v___x_728_);
lean_dec(v___x_729_);
v___x_731_ = lean_nat_dec_le(v_completionPos_725_, v___x_730_);
lean_dec(v___x_730_);
lean_dec(v_completionPos_725_);
return v___x_731_;
}
v___jp_733_:
{
lean_object* v___x_735_; 
v___x_735_ = l_Lean_Syntax_getTailPos_x3f(v_headerStx_722_, v___x_732_);
if (lean_obj_tag(v___x_735_) == 0)
{
v___y_727_ = v___y_734_;
goto v___jp_726_;
}
else
{
lean_object* v_val_736_; 
lean_dec(v___y_734_);
v_val_736_ = lean_ctor_get(v___x_735_, 0);
lean_inc(v_val_736_);
lean_dec_ref_known(v___x_735_, 1);
v___y_727_ = v_val_736_;
goto v___jp_726_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_isImportCompletionRequest___boxed(lean_object* v_text_740_, lean_object* v_headerStx_741_, lean_object* v_params_742_){
_start:
{
uint8_t v_res_743_; lean_object* v_r_744_; 
v_res_743_ = l_Lean_Lsp_ImportCompletion_isImportCompletionRequest(v_text_740_, v_headerStx_741_, v_params_742_);
lean_dec(v_headerStx_741_);
lean_dec_ref(v_text_740_);
v_r_744_ = lean_box(v_res_743_);
return v_r_744_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake_spec__0_spec__0(size_t v_sz_745_, size_t v_i_746_, lean_object* v_bs_747_){
_start:
{
uint8_t v___x_748_; 
v___x_748_ = lean_usize_dec_lt(v_i_746_, v_sz_745_);
if (v___x_748_ == 0)
{
lean_object* v___x_749_; lean_object* v___x_750_; 
v___x_749_ = l_unsafeCast___redArg(v_bs_747_);
lean_dec_ref(v_bs_747_);
v___x_750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_750_, 0, v___x_749_);
return v___x_750_;
}
else
{
lean_object* v_v_751_; lean_object* v___x_752_; lean_object* v___x_753_; 
v_v_751_ = lean_array_uget_borrowed(v_bs_747_, v_i_746_);
v___x_752_ = l_unsafeCast___redArg(v_v_751_);
v___x_753_ = l_Lean_Name_fromJson_x3f(v___x_752_);
if (lean_obj_tag(v___x_753_) == 0)
{
lean_object* v_a_754_; lean_object* v___x_756_; uint8_t v_isShared_757_; uint8_t v_isSharedCheck_761_; 
lean_dec_ref(v_bs_747_);
v_a_754_ = lean_ctor_get(v___x_753_, 0);
v_isSharedCheck_761_ = !lean_is_exclusive(v___x_753_);
if (v_isSharedCheck_761_ == 0)
{
v___x_756_ = v___x_753_;
v_isShared_757_ = v_isSharedCheck_761_;
goto v_resetjp_755_;
}
else
{
lean_inc(v_a_754_);
lean_dec(v___x_753_);
v___x_756_ = lean_box(0);
v_isShared_757_ = v_isSharedCheck_761_;
goto v_resetjp_755_;
}
v_resetjp_755_:
{
lean_object* v___x_759_; 
if (v_isShared_757_ == 0)
{
v___x_759_ = v___x_756_;
goto v_reusejp_758_;
}
else
{
lean_object* v_reuseFailAlloc_760_; 
v_reuseFailAlloc_760_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_760_, 0, v_a_754_);
v___x_759_ = v_reuseFailAlloc_760_;
goto v_reusejp_758_;
}
v_reusejp_758_:
{
return v___x_759_;
}
}
}
else
{
lean_object* v_a_762_; lean_object* v___x_763_; lean_object* v_bs_x27_764_; size_t v___x_765_; size_t v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; 
v_a_762_ = lean_ctor_get(v___x_753_, 0);
lean_inc(v_a_762_);
lean_dec_ref_known(v___x_753_, 1);
v___x_763_ = lean_unsigned_to_nat(0u);
v_bs_x27_764_ = lean_array_uset(v_bs_747_, v_i_746_, v___x_763_);
v___x_765_ = ((size_t)1ULL);
v___x_766_ = lean_usize_add(v_i_746_, v___x_765_);
v___x_767_ = l_unsafeCast___redArg(v_a_762_);
lean_dec(v_a_762_);
v___x_768_ = lean_array_uset(v_bs_x27_764_, v_i_746_, v___x_767_);
v_i_746_ = v___x_766_;
v_bs_747_ = v___x_768_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake_spec__0_spec__0___boxed(lean_object* v_sz_770_, lean_object* v_i_771_, lean_object* v_bs_772_){
_start:
{
size_t v_sz_boxed_773_; size_t v_i_boxed_774_; lean_object* v_res_775_; 
v_sz_boxed_773_ = lean_unbox_usize(v_sz_770_);
lean_dec(v_sz_770_);
v_i_boxed_774_ = lean_unbox_usize(v_i_771_);
lean_dec(v_i_771_);
v_res_775_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake_spec__0_spec__0(v_sz_boxed_773_, v_i_boxed_774_, v_bs_772_);
return v_res_775_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake_spec__0(lean_object* v_x_778_){
_start:
{
if (lean_obj_tag(v_x_778_) == 4)
{
lean_object* v_elems_779_; size_t v_sz_780_; size_t v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; 
v_elems_779_ = lean_ctor_get(v_x_778_, 0);
lean_inc_ref(v_elems_779_);
lean_dec_ref_known(v_x_778_, 1);
v_sz_780_ = lean_array_size(v_elems_779_);
v___x_781_ = ((size_t)0ULL);
v___x_782_ = l_unsafeCast___redArg(v_elems_779_);
lean_dec_ref(v_elems_779_);
v___x_783_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake_spec__0_spec__0(v_sz_780_, v___x_781_, v___x_782_);
v___x_784_ = l_unsafeCast___redArg(v___x_783_);
lean_dec_ref(v___x_783_);
return v___x_784_;
}
else
{
lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; 
v___x_785_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake_spec__0___closed__0));
v___x_786_ = lean_unsigned_to_nat(80u);
v___x_787_ = l_Lean_Json_pretty(v_x_778_, v___x_786_);
v___x_788_ = lean_string_append(v___x_785_, v___x_787_);
lean_dec_ref(v___x_787_);
v___x_789_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake_spec__0___closed__1));
v___x_790_ = lean_string_append(v___x_788_, v___x_789_);
v___x_791_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_791_, 0, v___x_790_);
return v___x_791_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake(){
_start:
{
lean_object* v___x_804_; 
v___x_804_ = l_Lean_determineLakePath();
if (lean_obj_tag(v___x_804_) == 0)
{
lean_object* v_a_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; uint8_t v___x_811_; uint8_t v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; 
v_a_805_ = lean_ctor_get(v___x_804_, 0);
lean_inc(v_a_805_);
lean_dec_ref_known(v___x_804_, 1);
v___x_806_ = ((lean_object*)(l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake___closed__0));
v___x_807_ = ((lean_object*)(l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake___closed__2));
v___x_808_ = lean_box(0);
v___x_809_ = lean_unsigned_to_nat(0u);
v___x_810_ = ((lean_object*)(l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake___closed__3));
v___x_811_ = 1;
v___x_812_ = 0;
v___x_813_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_813_, 0, v___x_806_);
lean_ctor_set(v___x_813_, 1, v_a_805_);
lean_ctor_set(v___x_813_, 2, v___x_807_);
lean_ctor_set(v___x_813_, 3, v___x_808_);
lean_ctor_set(v___x_813_, 4, v___x_810_);
lean_ctor_set_uint8(v___x_813_, sizeof(void*)*5, v___x_811_);
lean_ctor_set_uint8(v___x_813_, sizeof(void*)*5 + 1, v___x_812_);
v___x_814_ = lean_io_process_spawn(v___x_813_);
if (lean_obj_tag(v___x_814_) == 0)
{
lean_object* v_a_815_; lean_object* v_stdout_816_; lean_object* v___x_817_; 
v_a_815_ = lean_ctor_get(v___x_814_, 0);
lean_inc(v_a_815_);
lean_dec_ref_known(v___x_814_, 1);
v_stdout_816_ = lean_ctor_get(v_a_815_, 1);
v___x_817_ = l_IO_FS_Handle_readToEnd(v_stdout_816_);
if (lean_obj_tag(v___x_817_) == 0)
{
lean_object* v_a_818_; lean_object* v___x_820_; uint8_t v_isShared_821_; uint8_t v_isSharedCheck_870_; 
v_a_818_ = lean_ctor_get(v___x_817_, 0);
v_isSharedCheck_870_ = !lean_is_exclusive(v___x_817_);
if (v_isSharedCheck_870_ == 0)
{
v___x_820_ = v___x_817_;
v_isShared_821_ = v_isSharedCheck_870_;
goto v_resetjp_819_;
}
else
{
lean_inc(v_a_818_);
lean_dec(v___x_817_);
v___x_820_ = lean_box(0);
v_isShared_821_ = v_isSharedCheck_870_;
goto v_resetjp_819_;
}
v_resetjp_819_:
{
lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v_str_825_; lean_object* v_startInclusive_826_; lean_object* v_endExclusive_827_; lean_object* v___x_828_; lean_object* v___x_829_; 
v___x_822_ = lean_string_utf8_byte_size(v_a_818_);
v___x_823_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_823_, 0, v_a_818_);
lean_ctor_set(v___x_823_, 1, v___x_809_);
lean_ctor_set(v___x_823_, 2, v___x_822_);
v___x_824_ = l_String_Slice_trimAscii(v___x_823_);
v_str_825_ = lean_ctor_get(v___x_824_, 0);
lean_inc_ref(v_str_825_);
v_startInclusive_826_ = lean_ctor_get(v___x_824_, 1);
lean_inc(v_startInclusive_826_);
v_endExclusive_827_ = lean_ctor_get(v___x_824_, 2);
lean_inc(v_endExclusive_827_);
lean_dec_ref(v___x_824_);
v___x_828_ = lean_string_utf8_extract_fast(v_str_825_, v_startInclusive_826_, v_endExclusive_827_);
lean_dec(v_endExclusive_827_);
lean_dec(v_startInclusive_826_);
lean_dec_ref(v_str_825_);
v___x_829_ = lean_io_process_child_wait(v___x_806_, v_a_815_);
lean_dec(v_a_815_);
if (lean_obj_tag(v___x_829_) == 0)
{
lean_object* v_a_830_; lean_object* v___x_832_; uint8_t v_isShared_833_; uint8_t v_isSharedCheck_861_; 
v_a_830_ = lean_ctor_get(v___x_829_, 0);
v_isSharedCheck_861_ = !lean_is_exclusive(v___x_829_);
if (v_isSharedCheck_861_ == 0)
{
v___x_832_ = v___x_829_;
v_isShared_833_ = v_isSharedCheck_861_;
goto v_resetjp_831_;
}
else
{
lean_inc(v_a_830_);
lean_dec(v___x_829_);
v___x_832_ = lean_box(0);
v_isShared_833_ = v_isSharedCheck_861_;
goto v_resetjp_831_;
}
v_resetjp_831_:
{
uint32_t v___x_841_; uint32_t v___x_842_; uint8_t v___x_843_; 
v___x_841_ = 0;
v___x_842_ = lean_unbox_uint32(v_a_830_);
lean_dec(v_a_830_);
v___x_843_ = lean_uint32_dec_eq(v___x_842_, v___x_841_);
if (v___x_843_ == 0)
{
lean_object* v___x_845_; 
lean_del_object(v___x_832_);
lean_dec_ref(v___x_828_);
if (v_isShared_821_ == 0)
{
lean_ctor_set(v___x_820_, 0, v___x_808_);
v___x_845_ = v___x_820_;
goto v_reusejp_844_;
}
else
{
lean_object* v_reuseFailAlloc_846_; 
v_reuseFailAlloc_846_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_846_, 0, v___x_808_);
v___x_845_ = v_reuseFailAlloc_846_;
goto v_reusejp_844_;
}
v_reusejp_844_:
{
return v___x_845_;
}
}
else
{
lean_object* v___x_847_; 
lean_inc_ref(v___x_828_);
v___x_847_ = l_Lean_Json_parse(v___x_828_);
if (lean_obj_tag(v___x_847_) == 0)
{
lean_dec_ref_known(v___x_847_, 1);
lean_del_object(v___x_820_);
goto v___jp_834_;
}
else
{
lean_object* v_a_848_; lean_object* v___x_849_; 
v_a_848_ = lean_ctor_get(v___x_847_, 0);
lean_inc(v_a_848_);
lean_dec_ref_known(v___x_847_, 1);
v___x_849_ = l_Lean_Array_fromJson_x3f___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake_spec__0(v_a_848_);
if (lean_obj_tag(v___x_849_) == 1)
{
lean_object* v_a_850_; lean_object* v___x_852_; uint8_t v_isShared_853_; uint8_t v_isSharedCheck_860_; 
lean_del_object(v___x_832_);
lean_dec_ref(v___x_828_);
v_a_850_ = lean_ctor_get(v___x_849_, 0);
v_isSharedCheck_860_ = !lean_is_exclusive(v___x_849_);
if (v_isSharedCheck_860_ == 0)
{
v___x_852_ = v___x_849_;
v_isShared_853_ = v_isSharedCheck_860_;
goto v_resetjp_851_;
}
else
{
lean_inc(v_a_850_);
lean_dec(v___x_849_);
v___x_852_ = lean_box(0);
v_isShared_853_ = v_isSharedCheck_860_;
goto v_resetjp_851_;
}
v_resetjp_851_:
{
lean_object* v___x_855_; 
if (v_isShared_853_ == 0)
{
v___x_855_ = v___x_852_;
goto v_reusejp_854_;
}
else
{
lean_object* v_reuseFailAlloc_859_; 
v_reuseFailAlloc_859_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_859_, 0, v_a_850_);
v___x_855_ = v_reuseFailAlloc_859_;
goto v_reusejp_854_;
}
v_reusejp_854_:
{
lean_object* v___x_857_; 
if (v_isShared_821_ == 0)
{
lean_ctor_set(v___x_820_, 0, v___x_855_);
v___x_857_ = v___x_820_;
goto v_reusejp_856_;
}
else
{
lean_object* v_reuseFailAlloc_858_; 
v_reuseFailAlloc_858_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_858_, 0, v___x_855_);
v___x_857_ = v_reuseFailAlloc_858_;
goto v_reusejp_856_;
}
v_reusejp_856_:
{
return v___x_857_;
}
}
}
}
else
{
lean_dec_ref(v___x_849_);
lean_del_object(v___x_820_);
goto v___jp_834_;
}
}
}
v___jp_834_:
{
lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_839_; 
v___x_835_ = ((lean_object*)(l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake___closed__4));
v___x_836_ = lean_string_append(v___x_835_, v___x_828_);
lean_dec_ref(v___x_828_);
v___x_837_ = lean_mk_io_user_error(v___x_836_);
if (v_isShared_833_ == 0)
{
lean_ctor_set_tag(v___x_832_, 1);
lean_ctor_set(v___x_832_, 0, v___x_837_);
v___x_839_ = v___x_832_;
goto v_reusejp_838_;
}
else
{
lean_object* v_reuseFailAlloc_840_; 
v_reuseFailAlloc_840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_840_, 0, v___x_837_);
v___x_839_ = v_reuseFailAlloc_840_;
goto v_reusejp_838_;
}
v_reusejp_838_:
{
return v___x_839_;
}
}
}
}
else
{
lean_object* v_a_862_; lean_object* v___x_864_; uint8_t v_isShared_865_; uint8_t v_isSharedCheck_869_; 
lean_dec_ref(v___x_828_);
lean_del_object(v___x_820_);
v_a_862_ = lean_ctor_get(v___x_829_, 0);
v_isSharedCheck_869_ = !lean_is_exclusive(v___x_829_);
if (v_isSharedCheck_869_ == 0)
{
v___x_864_ = v___x_829_;
v_isShared_865_ = v_isSharedCheck_869_;
goto v_resetjp_863_;
}
else
{
lean_inc(v_a_862_);
lean_dec(v___x_829_);
v___x_864_ = lean_box(0);
v_isShared_865_ = v_isSharedCheck_869_;
goto v_resetjp_863_;
}
v_resetjp_863_:
{
lean_object* v___x_867_; 
if (v_isShared_865_ == 0)
{
v___x_867_ = v___x_864_;
goto v_reusejp_866_;
}
else
{
lean_object* v_reuseFailAlloc_868_; 
v_reuseFailAlloc_868_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_868_, 0, v_a_862_);
v___x_867_ = v_reuseFailAlloc_868_;
goto v_reusejp_866_;
}
v_reusejp_866_:
{
return v___x_867_;
}
}
}
}
}
else
{
lean_object* v_a_871_; lean_object* v___x_873_; uint8_t v_isShared_874_; uint8_t v_isSharedCheck_878_; 
lean_dec(v_a_815_);
v_a_871_ = lean_ctor_get(v___x_817_, 0);
v_isSharedCheck_878_ = !lean_is_exclusive(v___x_817_);
if (v_isSharedCheck_878_ == 0)
{
v___x_873_ = v___x_817_;
v_isShared_874_ = v_isSharedCheck_878_;
goto v_resetjp_872_;
}
else
{
lean_inc(v_a_871_);
lean_dec(v___x_817_);
v___x_873_ = lean_box(0);
v_isShared_874_ = v_isSharedCheck_878_;
goto v_resetjp_872_;
}
v_resetjp_872_:
{
lean_object* v___x_876_; 
if (v_isShared_874_ == 0)
{
v___x_876_ = v___x_873_;
goto v_reusejp_875_;
}
else
{
lean_object* v_reuseFailAlloc_877_; 
v_reuseFailAlloc_877_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_877_, 0, v_a_871_);
v___x_876_ = v_reuseFailAlloc_877_;
goto v_reusejp_875_;
}
v_reusejp_875_:
{
return v___x_876_;
}
}
}
}
else
{
lean_object* v_a_879_; lean_object* v___x_881_; uint8_t v_isShared_882_; uint8_t v_isSharedCheck_886_; 
v_a_879_ = lean_ctor_get(v___x_814_, 0);
v_isSharedCheck_886_ = !lean_is_exclusive(v___x_814_);
if (v_isSharedCheck_886_ == 0)
{
v___x_881_ = v___x_814_;
v_isShared_882_ = v_isSharedCheck_886_;
goto v_resetjp_880_;
}
else
{
lean_inc(v_a_879_);
lean_dec(v___x_814_);
v___x_881_ = lean_box(0);
v_isShared_882_ = v_isSharedCheck_886_;
goto v_resetjp_880_;
}
v_resetjp_880_:
{
lean_object* v___x_884_; 
if (v_isShared_882_ == 0)
{
v___x_884_ = v___x_881_;
goto v_reusejp_883_;
}
else
{
lean_object* v_reuseFailAlloc_885_; 
v_reuseFailAlloc_885_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_885_, 0, v_a_879_);
v___x_884_ = v_reuseFailAlloc_885_;
goto v_reusejp_883_;
}
v_reusejp_883_:
{
return v___x_884_;
}
}
}
}
else
{
lean_object* v_a_887_; lean_object* v___x_889_; uint8_t v_isShared_890_; uint8_t v_isSharedCheck_894_; 
v_a_887_ = lean_ctor_get(v___x_804_, 0);
v_isSharedCheck_894_ = !lean_is_exclusive(v___x_804_);
if (v_isSharedCheck_894_ == 0)
{
v___x_889_ = v___x_804_;
v_isShared_890_ = v_isSharedCheck_894_;
goto v_resetjp_888_;
}
else
{
lean_inc(v_a_887_);
lean_dec(v___x_804_);
v___x_889_ = lean_box(0);
v_isShared_890_ = v_isSharedCheck_894_;
goto v_resetjp_888_;
}
v_resetjp_888_:
{
lean_object* v___x_892_; 
if (v_isShared_890_ == 0)
{
v___x_892_ = v___x_889_;
goto v_reusejp_891_;
}
else
{
lean_object* v_reuseFailAlloc_893_; 
v_reuseFailAlloc_893_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_893_, 0, v_a_887_);
v___x_892_ = v_reuseFailAlloc_893_;
goto v_reusejp_891_;
}
v_reusejp_891_:
{
return v___x_892_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake___boxed(lean_object* v_a_895_){
_start:
{
lean_object* v_res_896_; 
v_res_896_ = l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake();
return v_res_896_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0_spec__1___lam__0(lean_object* v___x_897_, lean_object* v_f_898_, lean_object* v_x_899_, lean_object* v___y_900_){
_start:
{
lean_object* v___x_902_; lean_object* v___x_903_; 
v___x_902_ = l_Lean_Name_append(v___x_897_, v_x_899_);
v___x_903_ = lean_apply_3(v_f_898_, v___x_902_, v___y_900_, lean_box(0));
return v___x_903_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0_spec__1___lam__0___boxed(lean_object* v___x_904_, lean_object* v_f_905_, lean_object* v_x_906_, lean_object* v___y_907_, lean_object* v___y_908_){
_start:
{
lean_object* v_res_909_; 
v_res_909_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0_spec__1___lam__0(v___x_904_, v_f_905_, v_x_906_, v___y_907_);
return v_res_909_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0_spec__0(lean_object* v_x_910_, lean_object* v_x_911_){
_start:
{
if (lean_obj_tag(v_x_910_) == 0)
{
if (lean_obj_tag(v_x_911_) == 0)
{
uint8_t v___x_912_; 
v___x_912_ = 1;
return v___x_912_;
}
else
{
uint8_t v___x_913_; 
v___x_913_ = 0;
return v___x_913_;
}
}
else
{
if (lean_obj_tag(v_x_911_) == 0)
{
uint8_t v___x_914_; 
v___x_914_ = 0;
return v___x_914_;
}
else
{
lean_object* v_val_915_; lean_object* v_val_916_; uint8_t v___x_917_; 
v_val_915_ = lean_ctor_get(v_x_910_, 0);
v_val_916_ = lean_ctor_get(v_x_911_, 0);
v___x_917_ = lean_string_dec_eq(v_val_915_, v_val_916_);
return v___x_917_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0_spec__0___boxed(lean_object* v_x_918_, lean_object* v_x_919_){
_start:
{
uint8_t v_res_920_; lean_object* v_r_921_; 
v_res_920_ = l_Option_instBEq_beq___at___00Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0_spec__0(v_x_918_, v_x_919_);
lean_dec(v_x_919_);
lean_dec(v_x_918_);
v_r_921_ = lean_box(v_res_920_);
return v_r_921_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0_spec__1(lean_object* v_f_925_, lean_object* v_as_926_, size_t v_sz_927_, size_t v_i_928_, lean_object* v_b_929_, lean_object* v___y_930_){
_start:
{
lean_object* v_a_933_; lean_object* v_snd_934_; uint8_t v___x_938_; 
v___x_938_ = lean_usize_dec_lt(v_i_928_, v_sz_927_);
if (v___x_938_ == 0)
{
lean_object* v___x_939_; lean_object* v___x_940_; 
lean_dec_ref(v_f_925_);
v___x_939_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_939_, 0, v_b_929_);
lean_ctor_set(v___x_939_, 1, v___y_930_);
v___x_940_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_940_, 0, v___x_939_);
return v___x_940_;
}
else
{
lean_object* v___x_941_; lean_object* v_a_942_; lean_object* v___x_943_; uint8_t v___x_944_; 
v___x_941_ = lean_box(0);
v_a_942_ = lean_array_uget_borrowed(v_as_926_, v_i_928_);
lean_inc(v_a_942_);
v___x_943_ = l_IO_FS_DirEntry_path(v_a_942_);
v___x_944_ = l_System_FilePath_isDir(v___x_943_);
if (v___x_944_ == 0)
{
lean_object* v___x_945_; lean_object* v___x_946_; uint8_t v___x_947_; 
v___x_945_ = l_System_FilePath_extension(v___x_943_);
v___x_946_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0_spec__1___closed__1));
v___x_947_ = l_Option_instBEq_beq___at___00Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0_spec__0(v___x_945_, v___x_946_);
lean_dec(v___x_945_);
if (v___x_947_ == 0)
{
v_a_933_ = v___x_941_;
v_snd_934_ = v___y_930_;
goto v___jp_932_;
}
else
{
lean_object* v_fileName_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; 
v_fileName_948_ = lean_ctor_get(v_a_942_, 1);
v___x_949_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__4));
lean_inc_ref(v_fileName_948_);
v___x_950_ = l_System_FilePath_withExtension(v_fileName_948_, v___x_949_);
v___x_951_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__4___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__4___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__4___closed__0);
v___x_952_ = l_Lean_Name_str___override(v___x_951_, v___x_950_);
lean_inc_ref(v_f_925_);
v___x_953_ = lean_apply_3(v_f_925_, v___x_952_, v___y_930_, lean_box(0));
if (lean_obj_tag(v___x_953_) == 0)
{
lean_object* v_a_954_; lean_object* v_snd_955_; 
v_a_954_ = lean_ctor_get(v___x_953_, 0);
lean_inc(v_a_954_);
lean_dec_ref_known(v___x_953_, 1);
v_snd_955_ = lean_ctor_get(v_a_954_, 1);
lean_inc(v_snd_955_);
lean_dec(v_a_954_);
v_a_933_ = v___x_941_;
v_snd_934_ = v_snd_955_;
goto v___jp_932_;
}
else
{
lean_dec_ref(v_f_925_);
return v___x_953_;
}
}
}
else
{
lean_object* v_fileName_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___f_959_; lean_object* v___x_960_; 
v_fileName_956_ = lean_ctor_get(v_a_942_, 1);
v___x_957_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__4___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__4___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__4___closed__0);
lean_inc_ref(v_fileName_956_);
v___x_958_ = l_Lean_Name_str___override(v___x_957_, v_fileName_956_);
lean_inc_ref(v_f_925_);
v___f_959_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0_spec__1___lam__0___boxed), 5, 2);
lean_closure_set(v___f_959_, 0, v___x_958_);
lean_closure_set(v___f_959_, 1, v_f_925_);
v___x_960_ = l_Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0(v___x_943_, v___f_959_, v___y_930_);
lean_dec_ref(v___x_943_);
if (lean_obj_tag(v___x_960_) == 0)
{
lean_object* v_a_961_; lean_object* v_snd_962_; 
v_a_961_ = lean_ctor_get(v___x_960_, 0);
lean_inc(v_a_961_);
lean_dec_ref_known(v___x_960_, 1);
v_snd_962_ = lean_ctor_get(v_a_961_, 1);
lean_inc(v_snd_962_);
lean_dec(v_a_961_);
v_a_933_ = v___x_941_;
v_snd_934_ = v_snd_962_;
goto v___jp_932_;
}
else
{
lean_dec_ref(v_f_925_);
return v___x_960_;
}
}
}
v___jp_932_:
{
size_t v___x_935_; size_t v___x_936_; 
v___x_935_ = ((size_t)1ULL);
v___x_936_ = lean_usize_add(v_i_928_, v___x_935_);
v_i_928_ = v___x_936_;
v_b_929_ = v_a_933_;
v___y_930_ = v_snd_934_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0(lean_object* v_dir_963_, lean_object* v_f_964_, lean_object* v___y_965_){
_start:
{
lean_object* v___x_967_; 
v___x_967_ = lean_io_read_dir(v_dir_963_);
if (lean_obj_tag(v___x_967_) == 0)
{
lean_object* v_a_968_; lean_object* v___x_969_; size_t v_sz_970_; size_t v___x_971_; lean_object* v___x_972_; 
v_a_968_ = lean_ctor_get(v___x_967_, 0);
lean_inc(v_a_968_);
lean_dec_ref_known(v___x_967_, 1);
v___x_969_ = lean_box(0);
v_sz_970_ = lean_array_size(v_a_968_);
v___x_971_ = ((size_t)0ULL);
v___x_972_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0_spec__1(v_f_964_, v_a_968_, v_sz_970_, v___x_971_, v___x_969_, v___y_965_);
lean_dec(v_a_968_);
if (lean_obj_tag(v___x_972_) == 0)
{
lean_object* v_a_973_; lean_object* v___x_975_; uint8_t v_isShared_976_; uint8_t v_isSharedCheck_989_; 
v_a_973_ = lean_ctor_get(v___x_972_, 0);
v_isSharedCheck_989_ = !lean_is_exclusive(v___x_972_);
if (v_isSharedCheck_989_ == 0)
{
v___x_975_ = v___x_972_;
v_isShared_976_ = v_isSharedCheck_989_;
goto v_resetjp_974_;
}
else
{
lean_inc(v_a_973_);
lean_dec(v___x_972_);
v___x_975_ = lean_box(0);
v_isShared_976_ = v_isSharedCheck_989_;
goto v_resetjp_974_;
}
v_resetjp_974_:
{
lean_object* v_snd_977_; lean_object* v___x_979_; uint8_t v_isShared_980_; uint8_t v_isSharedCheck_987_; 
v_snd_977_ = lean_ctor_get(v_a_973_, 1);
v_isSharedCheck_987_ = !lean_is_exclusive(v_a_973_);
if (v_isSharedCheck_987_ == 0)
{
lean_object* v_unused_988_; 
v_unused_988_ = lean_ctor_get(v_a_973_, 0);
lean_dec(v_unused_988_);
v___x_979_ = v_a_973_;
v_isShared_980_ = v_isSharedCheck_987_;
goto v_resetjp_978_;
}
else
{
lean_inc(v_snd_977_);
lean_dec(v_a_973_);
v___x_979_ = lean_box(0);
v_isShared_980_ = v_isSharedCheck_987_;
goto v_resetjp_978_;
}
v_resetjp_978_:
{
lean_object* v___x_982_; 
if (v_isShared_980_ == 0)
{
lean_ctor_set(v___x_979_, 0, v___x_969_);
v___x_982_ = v___x_979_;
goto v_reusejp_981_;
}
else
{
lean_object* v_reuseFailAlloc_986_; 
v_reuseFailAlloc_986_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_986_, 0, v___x_969_);
lean_ctor_set(v_reuseFailAlloc_986_, 1, v_snd_977_);
v___x_982_ = v_reuseFailAlloc_986_;
goto v_reusejp_981_;
}
v_reusejp_981_:
{
lean_object* v___x_984_; 
if (v_isShared_976_ == 0)
{
lean_ctor_set(v___x_975_, 0, v___x_982_);
v___x_984_ = v___x_975_;
goto v_reusejp_983_;
}
else
{
lean_object* v_reuseFailAlloc_985_; 
v_reuseFailAlloc_985_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_985_, 0, v___x_982_);
v___x_984_ = v_reuseFailAlloc_985_;
goto v_reusejp_983_;
}
v_reusejp_983_:
{
return v___x_984_;
}
}
}
}
}
else
{
return v___x_972_;
}
}
else
{
lean_object* v_a_990_; lean_object* v___x_992_; uint8_t v_isShared_993_; uint8_t v_isSharedCheck_997_; 
lean_dec_ref(v___y_965_);
lean_dec_ref(v_f_964_);
v_a_990_ = lean_ctor_get(v___x_967_, 0);
v_isSharedCheck_997_ = !lean_is_exclusive(v___x_967_);
if (v_isSharedCheck_997_ == 0)
{
v___x_992_ = v___x_967_;
v_isShared_993_ = v_isSharedCheck_997_;
goto v_resetjp_991_;
}
else
{
lean_inc(v_a_990_);
lean_dec(v___x_967_);
v___x_992_ = lean_box(0);
v_isShared_993_ = v_isSharedCheck_997_;
goto v_resetjp_991_;
}
v_resetjp_991_:
{
lean_object* v___x_995_; 
if (v_isShared_993_ == 0)
{
v___x_995_ = v___x_992_;
goto v_reusejp_994_;
}
else
{
lean_object* v_reuseFailAlloc_996_; 
v_reuseFailAlloc_996_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_996_, 0, v_a_990_);
v___x_995_ = v_reuseFailAlloc_996_;
goto v_reusejp_994_;
}
v_reusejp_994_:
{
return v___x_995_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0___boxed(lean_object* v_dir_998_, lean_object* v_f_999_, lean_object* v___y_1000_, lean_object* v___y_1001_){
_start:
{
lean_object* v_res_1002_; 
v_res_1002_ = l_Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0(v_dir_998_, v_f_999_, v___y_1000_);
lean_dec_ref(v_dir_998_);
return v_res_1002_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0_spec__1___boxed(lean_object* v_f_1003_, lean_object* v_as_1004_, lean_object* v_sz_1005_, lean_object* v_i_1006_, lean_object* v_b_1007_, lean_object* v___y_1008_, lean_object* v___y_1009_){
_start:
{
size_t v_sz_boxed_1010_; size_t v_i_boxed_1011_; lean_object* v_res_1012_; 
v_sz_boxed_1010_ = lean_unbox_usize(v_sz_1005_);
lean_dec(v_sz_1005_);
v_i_boxed_1011_ = lean_unbox_usize(v_i_1006_);
lean_dec(v_i_1006_);
v_res_1012_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0_spec__1(v_f_1003_, v_as_1004_, v_sz_boxed_1010_, v_i_boxed_1011_, v_b_1007_, v___y_1008_);
lean_dec_ref(v_as_1004_);
return v_res_1012_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__1___redArg___lam__0(lean_object* v___x_1013_, lean_object* v_mod_1014_, lean_object* v___y_1015_){
_start:
{
lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; 
v___x_1017_ = lean_array_push(v___y_1015_, v_mod_1014_);
v___x_1018_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1018_, 0, v___x_1013_);
lean_ctor_set(v___x_1018_, 1, v___x_1017_);
v___x_1019_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1019_, 0, v___x_1018_);
return v___x_1019_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__1___redArg___lam__0___boxed(lean_object* v___x_1020_, lean_object* v_mod_1021_, lean_object* v___y_1022_, lean_object* v___y_1023_){
_start:
{
lean_object* v_res_1024_; 
v_res_1024_ = l_List_forIn_x27_loop___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__1___redArg___lam__0(v___x_1020_, v_mod_1021_, v___y_1022_);
return v_res_1024_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__1___redArg(lean_object* v_as_x27_1027_, lean_object* v_b_1028_, lean_object* v___y_1029_){
_start:
{
if (lean_obj_tag(v_as_x27_1027_) == 0)
{
lean_object* v___x_1031_; lean_object* v___x_1032_; 
v___x_1031_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1031_, 0, v_b_1028_);
lean_ctor_set(v___x_1031_, 1, v___y_1029_);
v___x_1032_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1032_, 0, v___x_1031_);
return v___x_1032_;
}
else
{
lean_object* v_head_1033_; lean_object* v_tail_1034_; lean_object* v___x_1035_; lean_object* v___f_1036_; uint8_t v___x_1037_; 
v_head_1033_ = lean_ctor_get(v_as_x27_1027_, 0);
v_tail_1034_ = lean_ctor_get(v_as_x27_1027_, 1);
v___x_1035_ = lean_box(0);
v___f_1036_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__1___redArg___closed__0));
v___x_1037_ = l_System_FilePath_isDir(v_head_1033_);
if (v___x_1037_ == 0)
{
v_as_x27_1027_ = v_tail_1034_;
v_b_1028_ = v___x_1035_;
goto _start;
}
else
{
lean_object* v___x_1039_; 
v___x_1039_ = l_Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0(v_head_1033_, v___f_1036_, v___y_1029_);
if (lean_obj_tag(v___x_1039_) == 0)
{
lean_object* v_a_1040_; lean_object* v_snd_1041_; 
v_a_1040_ = lean_ctor_get(v___x_1039_, 0);
lean_inc(v_a_1040_);
lean_dec_ref_known(v___x_1039_, 1);
v_snd_1041_ = lean_ctor_get(v_a_1040_, 1);
lean_inc(v_snd_1041_);
lean_dec(v_a_1040_);
v_as_x27_1027_ = v_tail_1034_;
v_b_1028_ = v___x_1035_;
v___y_1029_ = v_snd_1041_;
goto _start;
}
else
{
return v___x_1039_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__1___redArg___boxed(lean_object* v_as_x27_1043_, lean_object* v_b_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_){
_start:
{
lean_object* v_res_1047_; 
v_res_1047_ = l_List_forIn_x27_loop___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__1___redArg(v_as_x27_1043_, v_b_1044_, v___y_1045_);
lean_dec(v_as_x27_1043_);
return v_res_1047_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath(){
_start:
{
lean_object* v___x_1049_; lean_object* v___x_1050_; 
v___x_1049_ = ((lean_object*)(l_Lean_Lsp_ImportCompletion_computePartialImportCompletions___closed__0));
v___x_1050_ = l_Lean_getSrcSearchPath();
if (lean_obj_tag(v___x_1050_) == 0)
{
lean_object* v_a_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; 
v_a_1051_ = lean_ctor_get(v___x_1050_, 0);
lean_inc(v_a_1051_);
lean_dec_ref_known(v___x_1050_, 1);
v___x_1052_ = lean_box(0);
v___x_1053_ = l_List_forIn_x27_loop___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__1___redArg(v_a_1051_, v___x_1052_, v___x_1049_);
lean_dec(v_a_1051_);
if (lean_obj_tag(v___x_1053_) == 0)
{
lean_object* v_a_1054_; lean_object* v___x_1056_; uint8_t v_isShared_1057_; uint8_t v_isSharedCheck_1062_; 
v_a_1054_ = lean_ctor_get(v___x_1053_, 0);
v_isSharedCheck_1062_ = !lean_is_exclusive(v___x_1053_);
if (v_isSharedCheck_1062_ == 0)
{
v___x_1056_ = v___x_1053_;
v_isShared_1057_ = v_isSharedCheck_1062_;
goto v_resetjp_1055_;
}
else
{
lean_inc(v_a_1054_);
lean_dec(v___x_1053_);
v___x_1056_ = lean_box(0);
v_isShared_1057_ = v_isSharedCheck_1062_;
goto v_resetjp_1055_;
}
v_resetjp_1055_:
{
lean_object* v_snd_1058_; lean_object* v___x_1060_; 
v_snd_1058_ = lean_ctor_get(v_a_1054_, 1);
lean_inc(v_snd_1058_);
lean_dec(v_a_1054_);
if (v_isShared_1057_ == 0)
{
lean_ctor_set(v___x_1056_, 0, v_snd_1058_);
v___x_1060_ = v___x_1056_;
goto v_reusejp_1059_;
}
else
{
lean_object* v_reuseFailAlloc_1061_; 
v_reuseFailAlloc_1061_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1061_, 0, v_snd_1058_);
v___x_1060_ = v_reuseFailAlloc_1061_;
goto v_reusejp_1059_;
}
v_reusejp_1059_:
{
return v___x_1060_;
}
}
}
else
{
if (lean_obj_tag(v___x_1053_) == 0)
{
lean_object* v_a_1063_; lean_object* v___x_1065_; uint8_t v_isShared_1066_; uint8_t v_isSharedCheck_1071_; 
v_a_1063_ = lean_ctor_get(v___x_1053_, 0);
v_isSharedCheck_1071_ = !lean_is_exclusive(v___x_1053_);
if (v_isSharedCheck_1071_ == 0)
{
v___x_1065_ = v___x_1053_;
v_isShared_1066_ = v_isSharedCheck_1071_;
goto v_resetjp_1064_;
}
else
{
lean_inc(v_a_1063_);
lean_dec(v___x_1053_);
v___x_1065_ = lean_box(0);
v_isShared_1066_ = v_isSharedCheck_1071_;
goto v_resetjp_1064_;
}
v_resetjp_1064_:
{
lean_object* v_snd_1067_; lean_object* v___x_1069_; 
v_snd_1067_ = lean_ctor_get(v_a_1063_, 1);
lean_inc(v_snd_1067_);
lean_dec(v_a_1063_);
if (v_isShared_1066_ == 0)
{
lean_ctor_set_tag(v___x_1065_, 0);
lean_ctor_set(v___x_1065_, 0, v_snd_1067_);
v___x_1069_ = v___x_1065_;
goto v_reusejp_1068_;
}
else
{
lean_object* v_reuseFailAlloc_1070_; 
v_reuseFailAlloc_1070_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1070_, 0, v_snd_1067_);
v___x_1069_ = v_reuseFailAlloc_1070_;
goto v_reusejp_1068_;
}
v_reusejp_1068_:
{
return v___x_1069_;
}
}
}
else
{
lean_object* v_a_1072_; lean_object* v___x_1074_; uint8_t v_isShared_1075_; uint8_t v_isSharedCheck_1079_; 
v_a_1072_ = lean_ctor_get(v___x_1053_, 0);
v_isSharedCheck_1079_ = !lean_is_exclusive(v___x_1053_);
if (v_isSharedCheck_1079_ == 0)
{
v___x_1074_ = v___x_1053_;
v_isShared_1075_ = v_isSharedCheck_1079_;
goto v_resetjp_1073_;
}
else
{
lean_inc(v_a_1072_);
lean_dec(v___x_1053_);
v___x_1074_ = lean_box(0);
v_isShared_1075_ = v_isSharedCheck_1079_;
goto v_resetjp_1073_;
}
v_resetjp_1073_:
{
lean_object* v___x_1077_; 
if (v_isShared_1075_ == 0)
{
v___x_1077_ = v___x_1074_;
goto v_reusejp_1076_;
}
else
{
lean_object* v_reuseFailAlloc_1078_; 
v_reuseFailAlloc_1078_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1078_, 0, v_a_1072_);
v___x_1077_ = v_reuseFailAlloc_1078_;
goto v_reusejp_1076_;
}
v_reusejp_1076_:
{
return v___x_1077_;
}
}
}
}
}
else
{
lean_object* v_a_1080_; lean_object* v___x_1082_; uint8_t v_isShared_1083_; uint8_t v_isSharedCheck_1087_; 
v_a_1080_ = lean_ctor_get(v___x_1050_, 0);
v_isSharedCheck_1087_ = !lean_is_exclusive(v___x_1050_);
if (v_isSharedCheck_1087_ == 0)
{
v___x_1082_ = v___x_1050_;
v_isShared_1083_ = v_isSharedCheck_1087_;
goto v_resetjp_1081_;
}
else
{
lean_inc(v_a_1080_);
lean_dec(v___x_1050_);
v___x_1082_ = lean_box(0);
v_isShared_1083_ = v_isSharedCheck_1087_;
goto v_resetjp_1081_;
}
v_resetjp_1081_:
{
lean_object* v___x_1085_; 
if (v_isShared_1083_ == 0)
{
v___x_1085_ = v___x_1082_;
goto v_reusejp_1084_;
}
else
{
lean_object* v_reuseFailAlloc_1086_; 
v_reuseFailAlloc_1086_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1086_, 0, v_a_1080_);
v___x_1085_ = v_reuseFailAlloc_1086_;
goto v_reusejp_1084_;
}
v_reusejp_1084_:
{
return v___x_1085_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath___boxed(lean_object* v_a_1088_){
_start:
{
lean_object* v_res_1089_; 
v_res_1089_ = l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath();
return v_res_1089_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__1(lean_object* v_as_1090_, lean_object* v_as_x27_1091_, lean_object* v_b_1092_, lean_object* v_a_1093_, lean_object* v___y_1094_){
_start:
{
lean_object* v___x_1096_; 
v___x_1096_ = l_List_forIn_x27_loop___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__1___redArg(v_as_x27_1091_, v_b_1092_, v___y_1094_);
return v___x_1096_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__1___boxed(lean_object* v_as_1097_, lean_object* v_as_x27_1098_, lean_object* v_b_1099_, lean_object* v_a_1100_, lean_object* v___y_1101_, lean_object* v___y_1102_){
_start:
{
lean_object* v_res_1103_; 
v_res_1103_ = l_List_forIn_x27_loop___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__1(v_as_1097_, v_as_x27_1098_, v_b_1099_, v_a_1100_, v___y_1101_);
lean_dec(v_as_x27_1098_);
lean_dec(v_as_1097_);
return v_res_1103_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_collectAvailableImports(){
_start:
{
lean_object* v___x_1105_; 
v___x_1105_ = l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake();
if (lean_obj_tag(v___x_1105_) == 0)
{
lean_object* v_a_1106_; lean_object* v___x_1108_; uint8_t v_isShared_1109_; uint8_t v_isSharedCheck_1115_; 
v_a_1106_ = lean_ctor_get(v___x_1105_, 0);
v_isSharedCheck_1115_ = !lean_is_exclusive(v___x_1105_);
if (v_isSharedCheck_1115_ == 0)
{
v___x_1108_ = v___x_1105_;
v_isShared_1109_ = v_isSharedCheck_1115_;
goto v_resetjp_1107_;
}
else
{
lean_inc(v_a_1106_);
lean_dec(v___x_1105_);
v___x_1108_ = lean_box(0);
v_isShared_1109_ = v_isSharedCheck_1115_;
goto v_resetjp_1107_;
}
v_resetjp_1107_:
{
if (lean_obj_tag(v_a_1106_) == 0)
{
lean_object* v___x_1110_; 
lean_del_object(v___x_1108_);
v___x_1110_ = l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath();
return v___x_1110_;
}
else
{
lean_object* v_val_1111_; lean_object* v___x_1113_; 
v_val_1111_ = lean_ctor_get(v_a_1106_, 0);
lean_inc(v_val_1111_);
lean_dec_ref_known(v_a_1106_, 1);
if (v_isShared_1109_ == 0)
{
lean_ctor_set(v___x_1108_, 0, v_val_1111_);
v___x_1113_ = v___x_1108_;
goto v_reusejp_1112_;
}
else
{
lean_object* v_reuseFailAlloc_1114_; 
v_reuseFailAlloc_1114_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1114_, 0, v_val_1111_);
v___x_1113_ = v_reuseFailAlloc_1114_;
goto v_reusejp_1112_;
}
v_reusejp_1112_:
{
return v___x_1113_;
}
}
}
}
else
{
lean_object* v_a_1116_; lean_object* v___x_1118_; uint8_t v_isShared_1119_; uint8_t v_isSharedCheck_1123_; 
v_a_1116_ = lean_ctor_get(v___x_1105_, 0);
v_isSharedCheck_1123_ = !lean_is_exclusive(v___x_1105_);
if (v_isSharedCheck_1123_ == 0)
{
v___x_1118_ = v___x_1105_;
v_isShared_1119_ = v_isSharedCheck_1123_;
goto v_resetjp_1117_;
}
else
{
lean_inc(v_a_1116_);
lean_dec(v___x_1105_);
v___x_1118_ = lean_box(0);
v_isShared_1119_ = v_isSharedCheck_1123_;
goto v_resetjp_1117_;
}
v_resetjp_1117_:
{
lean_object* v___x_1121_; 
if (v_isShared_1119_ == 0)
{
v___x_1121_ = v___x_1118_;
goto v_reusejp_1120_;
}
else
{
lean_object* v_reuseFailAlloc_1122_; 
v_reuseFailAlloc_1122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1122_, 0, v_a_1116_);
v___x_1121_ = v_reuseFailAlloc_1122_;
goto v_reusejp_1120_;
}
v_reusejp_1120_:
{
return v___x_1121_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_collectAvailableImports___boxed(lean_object* v_a_1124_){
_start:
{
lean_object* v_res_1125_; 
v_res_1125_ = l_Lean_Lsp_ImportCompletion_collectAvailableImports();
return v_res_1125_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_addCompletionItemData_spec__0(lean_object* v_uri_1126_, lean_object* v_pos_1127_, size_t v_sz_1128_, size_t v_i_1129_, lean_object* v_bs_1130_){
_start:
{
uint8_t v___x_1131_; 
v___x_1131_ = lean_usize_dec_lt(v_i_1129_, v_sz_1128_);
if (v___x_1131_ == 0)
{
lean_object* v___x_1132_; 
lean_dec_ref(v_pos_1127_);
lean_dec_ref(v_uri_1126_);
v___x_1132_ = l_unsafeCast___redArg(v_bs_1130_);
lean_dec_ref(v_bs_1130_);
return v___x_1132_;
}
else
{
lean_object* v_v_1133_; lean_object* v___x_1134_; lean_object* v_label_1135_; lean_object* v_detail_x3f_1136_; lean_object* v_documentation_x3f_1137_; lean_object* v_kind_x3f_1138_; lean_object* v_textEdit_x3f_1139_; lean_object* v_sortText_x3f_1140_; lean_object* v_tags_x3f_1141_; lean_object* v___x_1143_; uint8_t v_isShared_1144_; uint8_t v_isSharedCheck_1169_; 
v_v_1133_ = lean_array_uget_borrowed(v_bs_1130_, v_i_1129_);
v___x_1134_ = l_unsafeCast___redArg(v_v_1133_);
v_label_1135_ = lean_ctor_get(v___x_1134_, 0);
v_detail_x3f_1136_ = lean_ctor_get(v___x_1134_, 1);
v_documentation_x3f_1137_ = lean_ctor_get(v___x_1134_, 2);
v_kind_x3f_1138_ = lean_ctor_get(v___x_1134_, 3);
v_textEdit_x3f_1139_ = lean_ctor_get(v___x_1134_, 4);
v_sortText_x3f_1140_ = lean_ctor_get(v___x_1134_, 5);
v_tags_x3f_1141_ = lean_ctor_get(v___x_1134_, 7);
v_isSharedCheck_1169_ = !lean_is_exclusive(v___x_1134_);
if (v_isSharedCheck_1169_ == 0)
{
lean_object* v_unused_1170_; 
v_unused_1170_ = lean_ctor_get(v___x_1134_, 6);
lean_dec(v_unused_1170_);
v___x_1143_ = v___x_1134_;
v_isShared_1144_ = v_isSharedCheck_1169_;
goto v_resetjp_1142_;
}
else
{
lean_inc(v_tags_x3f_1141_);
lean_inc(v_sortText_x3f_1140_);
lean_inc(v_textEdit_x3f_1139_);
lean_inc(v_kind_x3f_1138_);
lean_inc(v_documentation_x3f_1137_);
lean_inc(v_detail_x3f_1136_);
lean_inc(v_label_1135_);
lean_dec(v___x_1134_);
v___x_1143_ = lean_box(0);
v_isShared_1144_ = v_isSharedCheck_1169_;
goto v_resetjp_1142_;
}
v_resetjp_1142_:
{
lean_object* v_line_1145_; lean_object* v_character_1146_; lean_object* v___x_1147_; lean_object* v_bs_x27_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v_arr_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1162_; 
v_line_1145_ = lean_ctor_get(v_pos_1127_, 0);
v_character_1146_ = lean_ctor_get(v_pos_1127_, 1);
v___x_1147_ = lean_unsigned_to_nat(0u);
v_bs_x27_1148_ = lean_array_uset(v_bs_1130_, v_i_1129_, v___x_1147_);
lean_inc_ref(v_uri_1126_);
v___x_1149_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1149_, 0, v_uri_1126_);
lean_inc(v_line_1145_);
v___x_1150_ = l_Lean_JsonNumber_fromNat(v_line_1145_);
v___x_1151_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1151_, 0, v___x_1150_);
lean_inc(v_character_1146_);
v___x_1152_ = l_Lean_JsonNumber_fromNat(v_character_1146_);
v___x_1153_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1153_, 0, v___x_1152_);
v___x_1154_ = lean_unsigned_to_nat(3u);
v___x_1155_ = lean_mk_empty_array_with_capacity(v___x_1154_);
v___x_1156_ = lean_array_push(v___x_1155_, v___x_1149_);
v___x_1157_ = lean_array_push(v___x_1156_, v___x_1151_);
v_arr_1158_ = lean_array_push(v___x_1157_, v___x_1153_);
v___x_1159_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1159_, 0, v_arr_1158_);
v___x_1160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1160_, 0, v___x_1159_);
if (v_isShared_1144_ == 0)
{
lean_ctor_set(v___x_1143_, 6, v___x_1160_);
v___x_1162_ = v___x_1143_;
goto v_reusejp_1161_;
}
else
{
lean_object* v_reuseFailAlloc_1168_; 
v_reuseFailAlloc_1168_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_1168_, 0, v_label_1135_);
lean_ctor_set(v_reuseFailAlloc_1168_, 1, v_detail_x3f_1136_);
lean_ctor_set(v_reuseFailAlloc_1168_, 2, v_documentation_x3f_1137_);
lean_ctor_set(v_reuseFailAlloc_1168_, 3, v_kind_x3f_1138_);
lean_ctor_set(v_reuseFailAlloc_1168_, 4, v_textEdit_x3f_1139_);
lean_ctor_set(v_reuseFailAlloc_1168_, 5, v_sortText_x3f_1140_);
lean_ctor_set(v_reuseFailAlloc_1168_, 6, v___x_1160_);
lean_ctor_set(v_reuseFailAlloc_1168_, 7, v_tags_x3f_1141_);
v___x_1162_ = v_reuseFailAlloc_1168_;
goto v_reusejp_1161_;
}
v_reusejp_1161_:
{
size_t v___x_1163_; size_t v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; 
v___x_1163_ = ((size_t)1ULL);
v___x_1164_ = lean_usize_add(v_i_1129_, v___x_1163_);
v___x_1165_ = l_unsafeCast___redArg(v___x_1162_);
lean_dec_ref(v___x_1162_);
v___x_1166_ = lean_array_uset(v_bs_x27_1148_, v_i_1129_, v___x_1165_);
v_i_1129_ = v___x_1164_;
v_bs_1130_ = v___x_1166_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_addCompletionItemData_spec__0___boxed(lean_object* v_uri_1171_, lean_object* v_pos_1172_, lean_object* v_sz_1173_, lean_object* v_i_1174_, lean_object* v_bs_1175_){
_start:
{
size_t v_sz_boxed_1176_; size_t v_i_boxed_1177_; lean_object* v_res_1178_; 
v_sz_boxed_1176_ = lean_unbox_usize(v_sz_1173_);
lean_dec(v_sz_1173_);
v_i_boxed_1177_ = lean_unbox_usize(v_i_1174_);
lean_dec(v_i_1174_);
v_res_1178_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_addCompletionItemData_spec__0(v_uri_1171_, v_pos_1172_, v_sz_boxed_1176_, v_i_boxed_1177_, v_bs_1175_);
return v_res_1178_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_addCompletionItemData(lean_object* v_uri_1179_, lean_object* v_pos_1180_, lean_object* v_completionList_1181_){
_start:
{
uint8_t v_isIncomplete_1182_; lean_object* v_items_1183_; lean_object* v___x_1185_; uint8_t v_isShared_1186_; uint8_t v_isSharedCheck_1195_; 
v_isIncomplete_1182_ = lean_ctor_get_uint8(v_completionList_1181_, sizeof(void*)*1);
v_items_1183_ = lean_ctor_get(v_completionList_1181_, 0);
v_isSharedCheck_1195_ = !lean_is_exclusive(v_completionList_1181_);
if (v_isSharedCheck_1195_ == 0)
{
v___x_1185_ = v_completionList_1181_;
v_isShared_1186_ = v_isSharedCheck_1195_;
goto v_resetjp_1184_;
}
else
{
lean_inc(v_items_1183_);
lean_dec(v_completionList_1181_);
v___x_1185_ = lean_box(0);
v_isShared_1186_ = v_isSharedCheck_1195_;
goto v_resetjp_1184_;
}
v_resetjp_1184_:
{
size_t v_sz_1187_; size_t v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1193_; 
v_sz_1187_ = lean_array_size(v_items_1183_);
v___x_1188_ = ((size_t)0ULL);
v___x_1189_ = l_unsafeCast___redArg(v_items_1183_);
lean_dec_ref(v_items_1183_);
v___x_1190_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_addCompletionItemData_spec__0(v_uri_1179_, v_pos_1180_, v_sz_1187_, v___x_1188_, v___x_1189_);
v___x_1191_ = l_unsafeCast___redArg(v___x_1190_);
lean_dec_ref(v___x_1190_);
if (v_isShared_1186_ == 0)
{
lean_ctor_set(v___x_1185_, 0, v___x_1191_);
v___x_1193_ = v___x_1185_;
goto v_reusejp_1192_;
}
else
{
lean_object* v_reuseFailAlloc_1194_; 
v_reuseFailAlloc_1194_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1194_, 0, v___x_1191_);
lean_ctor_set_uint8(v_reuseFailAlloc_1194_, sizeof(void*)*1, v_isIncomplete_1182_);
v___x_1193_ = v_reuseFailAlloc_1194_;
goto v_reusejp_1192_;
}
v_reusejp_1192_:
{
return v___x_1193_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_find_spec__0(size_t v_sz_1196_, size_t v_i_1197_, lean_object* v_bs_1198_){
_start:
{
uint8_t v___x_1199_; 
v___x_1199_ = lean_usize_dec_lt(v_i_1197_, v_sz_1196_);
if (v___x_1199_ == 0)
{
lean_object* v___x_1200_; 
v___x_1200_ = l_unsafeCast___redArg(v_bs_1198_);
lean_dec_ref(v_bs_1198_);
return v___x_1200_;
}
else
{
lean_object* v_v_1201_; lean_object* v___x_1202_; lean_object* v_bs_x27_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; size_t v___x_1208_; size_t v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; 
v_v_1201_ = lean_array_uget(v_bs_1198_, v_i_1197_);
v___x_1202_ = lean_unsigned_to_nat(0u);
v_bs_x27_1203_ = lean_array_uset(v_bs_1198_, v_i_1197_, v___x_1202_);
v___x_1204_ = l_unsafeCast___redArg(v_v_1201_);
lean_dec(v_v_1201_);
v___x_1205_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1204_, v___x_1199_);
v___x_1206_ = lean_box(0);
v___x_1207_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_1207_, 0, v___x_1205_);
lean_ctor_set(v___x_1207_, 1, v___x_1206_);
lean_ctor_set(v___x_1207_, 2, v___x_1206_);
lean_ctor_set(v___x_1207_, 3, v___x_1206_);
lean_ctor_set(v___x_1207_, 4, v___x_1206_);
lean_ctor_set(v___x_1207_, 5, v___x_1206_);
lean_ctor_set(v___x_1207_, 6, v___x_1206_);
lean_ctor_set(v___x_1207_, 7, v___x_1206_);
v___x_1208_ = ((size_t)1ULL);
v___x_1209_ = lean_usize_add(v_i_1197_, v___x_1208_);
v___x_1210_ = l_unsafeCast___redArg(v___x_1207_);
lean_dec_ref_known(v___x_1207_, 8);
v___x_1211_ = lean_array_uset(v_bs_x27_1203_, v_i_1197_, v___x_1210_);
v_i_1197_ = v___x_1209_;
v_bs_1198_ = v___x_1211_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_find_spec__0___boxed(lean_object* v_sz_1213_, lean_object* v_i_1214_, lean_object* v_bs_1215_){
_start:
{
size_t v_sz_boxed_1216_; size_t v_i_boxed_1217_; lean_object* v_res_1218_; 
v_sz_boxed_1216_ = lean_unbox_usize(v_sz_1213_);
lean_dec(v_sz_1213_);
v_i_boxed_1217_ = lean_unbox_usize(v_i_1214_);
lean_dec(v_i_1214_);
v_res_1218_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_find_spec__0(v_sz_boxed_1216_, v_i_boxed_1217_, v_bs_1215_);
return v_res_1218_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_find_spec__2(uint8_t v___x_1219_, size_t v_sz_1220_, size_t v_i_1221_, lean_object* v_bs_1222_){
_start:
{
uint8_t v___x_1223_; 
v___x_1223_ = lean_usize_dec_lt(v_i_1221_, v_sz_1220_);
if (v___x_1223_ == 0)
{
lean_object* v___x_1224_; 
v___x_1224_ = l_unsafeCast___redArg(v_bs_1222_);
lean_dec_ref(v_bs_1222_);
return v___x_1224_;
}
else
{
lean_object* v_v_1225_; lean_object* v___x_1226_; lean_object* v_bs_x27_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; size_t v___x_1232_; size_t v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; 
v_v_1225_ = lean_array_uget(v_bs_1222_, v_i_1221_);
v___x_1226_ = lean_unsigned_to_nat(0u);
v_bs_x27_1227_ = lean_array_uset(v_bs_1222_, v_i_1221_, v___x_1226_);
v___x_1228_ = l_unsafeCast___redArg(v_v_1225_);
lean_dec(v_v_1225_);
v___x_1229_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1228_, v___x_1219_);
v___x_1230_ = lean_box(0);
v___x_1231_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_1231_, 0, v___x_1229_);
lean_ctor_set(v___x_1231_, 1, v___x_1230_);
lean_ctor_set(v___x_1231_, 2, v___x_1230_);
lean_ctor_set(v___x_1231_, 3, v___x_1230_);
lean_ctor_set(v___x_1231_, 4, v___x_1230_);
lean_ctor_set(v___x_1231_, 5, v___x_1230_);
lean_ctor_set(v___x_1231_, 6, v___x_1230_);
lean_ctor_set(v___x_1231_, 7, v___x_1230_);
v___x_1232_ = ((size_t)1ULL);
v___x_1233_ = lean_usize_add(v_i_1221_, v___x_1232_);
v___x_1234_ = l_unsafeCast___redArg(v___x_1231_);
lean_dec_ref_known(v___x_1231_, 8);
v___x_1235_ = lean_array_uset(v_bs_x27_1227_, v_i_1221_, v___x_1234_);
v_i_1221_ = v___x_1233_;
v_bs_1222_ = v___x_1235_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_find_spec__2___boxed(lean_object* v___x_1237_, lean_object* v_sz_1238_, lean_object* v_i_1239_, lean_object* v_bs_1240_){
_start:
{
uint8_t v___x_627__boxed_1241_; size_t v_sz_boxed_1242_; size_t v_i_boxed_1243_; lean_object* v_res_1244_; 
v___x_627__boxed_1241_ = lean_unbox(v___x_1237_);
v_sz_boxed_1242_ = lean_unbox_usize(v_sz_1238_);
lean_dec(v_sz_1238_);
v_i_boxed_1243_ = lean_unbox_usize(v_i_1239_);
lean_dec(v_i_1239_);
v_res_1244_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_find_spec__2(v___x_627__boxed_1241_, v_sz_boxed_1242_, v_i_boxed_1243_, v_bs_1240_);
return v_res_1244_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_find_spec__1(uint8_t v___x_1246_, size_t v_sz_1247_, size_t v_i_1248_, lean_object* v_bs_1249_){
_start:
{
uint8_t v___x_1250_; 
v___x_1250_ = lean_usize_dec_lt(v_i_1248_, v_sz_1247_);
if (v___x_1250_ == 0)
{
lean_object* v___x_1251_; 
v___x_1251_ = l_unsafeCast___redArg(v_bs_1249_);
lean_dec_ref(v_bs_1249_);
return v___x_1251_;
}
else
{
lean_object* v_v_1252_; lean_object* v___x_1253_; lean_object* v_bs_x27_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; size_t v___x_1261_; size_t v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; 
v_v_1252_ = lean_array_uget(v_bs_1249_, v_i_1248_);
v___x_1253_ = lean_unsigned_to_nat(0u);
v_bs_x27_1254_ = lean_array_uset(v_bs_1249_, v_i_1248_, v___x_1253_);
v___x_1255_ = l_unsafeCast___redArg(v_v_1252_);
lean_dec(v_v_1252_);
v___x_1256_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_find_spec__1___closed__0));
v___x_1257_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1255_, v___x_1246_);
v___x_1258_ = lean_string_append(v___x_1256_, v___x_1257_);
lean_dec_ref(v___x_1257_);
v___x_1259_ = lean_box(0);
v___x_1260_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_1260_, 0, v___x_1258_);
lean_ctor_set(v___x_1260_, 1, v___x_1259_);
lean_ctor_set(v___x_1260_, 2, v___x_1259_);
lean_ctor_set(v___x_1260_, 3, v___x_1259_);
lean_ctor_set(v___x_1260_, 4, v___x_1259_);
lean_ctor_set(v___x_1260_, 5, v___x_1259_);
lean_ctor_set(v___x_1260_, 6, v___x_1259_);
lean_ctor_set(v___x_1260_, 7, v___x_1259_);
v___x_1261_ = ((size_t)1ULL);
v___x_1262_ = lean_usize_add(v_i_1248_, v___x_1261_);
v___x_1263_ = l_unsafeCast___redArg(v___x_1260_);
lean_dec_ref_known(v___x_1260_, 8);
v___x_1264_ = lean_array_uset(v_bs_x27_1254_, v_i_1248_, v___x_1263_);
v_i_1248_ = v___x_1262_;
v_bs_1249_ = v___x_1264_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_find_spec__1___boxed(lean_object* v___x_1266_, lean_object* v_sz_1267_, lean_object* v_i_1268_, lean_object* v_bs_1269_){
_start:
{
uint8_t v___x_656__boxed_1270_; size_t v_sz_boxed_1271_; size_t v_i_boxed_1272_; lean_object* v_res_1273_; 
v___x_656__boxed_1270_ = lean_unbox(v___x_1266_);
v_sz_boxed_1271_ = lean_unbox_usize(v_sz_1267_);
lean_dec(v_sz_1267_);
v_i_boxed_1272_ = lean_unbox_usize(v_i_1268_);
lean_dec(v_i_1268_);
v_res_1273_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_find_spec__1(v___x_656__boxed_1270_, v_sz_boxed_1271_, v_i_boxed_1272_, v_bs_1269_);
return v_res_1273_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_find(lean_object* v_uri_1274_, lean_object* v_pos_1275_, lean_object* v_text_1276_, lean_object* v_headerStx_1277_, lean_object* v_availableImports_1278_){
_start:
{
lean_object* v_availableImports_1279_; lean_object* v_completionPos_1280_; uint8_t v___x_1281_; 
v_availableImports_1279_ = l_Lean_Lsp_ImportCompletion_AvailableImports_toImportTrie(v_availableImports_1278_);
lean_inc_ref(v_pos_1275_);
v_completionPos_1280_ = l_Lean_FileMap_lspPosToUtf8Pos(v_text_1276_, v_pos_1275_);
lean_inc(v_headerStx_1277_);
v___x_1281_ = l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest(v_headerStx_1277_, v_completionPos_1280_);
if (v___x_1281_ == 0)
{
uint8_t v___x_1282_; 
lean_inc(v_headerStx_1277_);
v___x_1282_ = l_Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest(v_headerStx_1277_, v_completionPos_1280_);
if (v___x_1282_ == 0)
{
lean_object* v_completionNames_1283_; size_t v_sz_1284_; size_t v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v_completions_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; 
v_completionNames_1283_ = l_Lean_Lsp_ImportCompletion_computePartialImportCompletions(v_headerStx_1277_, v_completionPos_1280_, v_availableImports_1279_);
lean_dec(v_completionPos_1280_);
v_sz_1284_ = lean_array_size(v_completionNames_1283_);
v___x_1285_ = ((size_t)0ULL);
v___x_1286_ = l_unsafeCast___redArg(v_completionNames_1283_);
lean_dec_ref(v_completionNames_1283_);
v___x_1287_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_find_spec__0(v_sz_1284_, v___x_1285_, v___x_1286_);
v_completions_1288_ = l_unsafeCast___redArg(v___x_1287_);
lean_dec_ref(v___x_1287_);
v___x_1289_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1289_, 0, v_completions_1288_);
lean_ctor_set_uint8(v___x_1289_, sizeof(void*)*1, v___x_1282_);
v___x_1290_ = l_Lean_Lsp_ImportCompletion_addCompletionItemData(v_uri_1274_, v_pos_1275_, v___x_1289_);
return v___x_1290_;
}
else
{
lean_object* v___x_1291_; size_t v_sz_1292_; size_t v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v_allAvailableFullImportCompletions_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; 
lean_dec(v_completionPos_1280_);
lean_dec(v_headerStx_1277_);
v___x_1291_ = l_Lean_NameTrie_toArray___redArg(v_availableImports_1279_);
v_sz_1292_ = lean_array_size(v___x_1291_);
v___x_1293_ = ((size_t)0ULL);
v___x_1294_ = l_unsafeCast___redArg(v___x_1291_);
lean_dec_ref(v___x_1291_);
v___x_1295_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_find_spec__1(v___x_1282_, v_sz_1292_, v___x_1293_, v___x_1294_);
v_allAvailableFullImportCompletions_1296_ = l_unsafeCast___redArg(v___x_1295_);
lean_dec_ref(v___x_1295_);
v___x_1297_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1297_, 0, v_allAvailableFullImportCompletions_1296_);
lean_ctor_set_uint8(v___x_1297_, sizeof(void*)*1, v___x_1281_);
v___x_1298_ = l_Lean_Lsp_ImportCompletion_addCompletionItemData(v_uri_1274_, v_pos_1275_, v___x_1297_);
return v___x_1298_;
}
}
else
{
lean_object* v___x_1299_; size_t v_sz_1300_; size_t v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v_allAvailableImportNameCompletions_1304_; uint8_t v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; 
lean_dec(v_completionPos_1280_);
lean_dec(v_headerStx_1277_);
v___x_1299_ = l_Lean_NameTrie_toArray___redArg(v_availableImports_1279_);
v_sz_1300_ = lean_array_size(v___x_1299_);
v___x_1301_ = ((size_t)0ULL);
v___x_1302_ = l_unsafeCast___redArg(v___x_1299_);
lean_dec_ref(v___x_1299_);
v___x_1303_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_find_spec__2(v___x_1281_, v_sz_1300_, v___x_1301_, v___x_1302_);
v_allAvailableImportNameCompletions_1304_ = l_unsafeCast___redArg(v___x_1303_);
lean_dec_ref(v___x_1303_);
v___x_1305_ = 0;
v___x_1306_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1306_, 0, v_allAvailableImportNameCompletions_1304_);
lean_ctor_set_uint8(v___x_1306_, sizeof(void*)*1, v___x_1305_);
v___x_1307_ = l_Lean_Lsp_ImportCompletion_addCompletionItemData(v_uri_1274_, v_pos_1275_, v___x_1306_);
return v___x_1307_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_find___boxed(lean_object* v_uri_1308_, lean_object* v_pos_1309_, lean_object* v_text_1310_, lean_object* v_headerStx_1311_, lean_object* v_availableImports_1312_){
_start:
{
lean_object* v_res_1313_; 
v_res_1313_ = l_Lean_Lsp_ImportCompletion_find(v_uri_1308_, v_pos_1309_, v_text_1310_, v_headerStx_1311_, v_availableImports_1312_);
lean_dec_ref(v_availableImports_1312_);
lean_dec_ref(v_text_1310_);
return v_res_1313_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_computeCompletions(lean_object* v_uri_1314_, lean_object* v_pos_1315_, lean_object* v_text_1316_, lean_object* v_headerStx_1317_){
_start:
{
lean_object* v___x_1319_; 
v___x_1319_ = l_Lean_Lsp_ImportCompletion_collectAvailableImports();
if (lean_obj_tag(v___x_1319_) == 0)
{
lean_object* v_a_1320_; lean_object* v___x_1322_; uint8_t v_isShared_1323_; uint8_t v_isSharedCheck_1329_; 
v_a_1320_ = lean_ctor_get(v___x_1319_, 0);
v_isSharedCheck_1329_ = !lean_is_exclusive(v___x_1319_);
if (v_isSharedCheck_1329_ == 0)
{
v___x_1322_ = v___x_1319_;
v_isShared_1323_ = v_isSharedCheck_1329_;
goto v_resetjp_1321_;
}
else
{
lean_inc(v_a_1320_);
lean_dec(v___x_1319_);
v___x_1322_ = lean_box(0);
v_isShared_1323_ = v_isSharedCheck_1329_;
goto v_resetjp_1321_;
}
v_resetjp_1321_:
{
lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1327_; 
lean_inc_ref(v_pos_1315_);
lean_inc_ref(v_uri_1314_);
v___x_1324_ = l_Lean_Lsp_ImportCompletion_find(v_uri_1314_, v_pos_1315_, v_text_1316_, v_headerStx_1317_, v_a_1320_);
lean_dec(v_a_1320_);
v___x_1325_ = l_Lean_Lsp_ImportCompletion_addCompletionItemData(v_uri_1314_, v_pos_1315_, v___x_1324_);
if (v_isShared_1323_ == 0)
{
lean_ctor_set(v___x_1322_, 0, v___x_1325_);
v___x_1327_ = v___x_1322_;
goto v_reusejp_1326_;
}
else
{
lean_object* v_reuseFailAlloc_1328_; 
v_reuseFailAlloc_1328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1328_, 0, v___x_1325_);
v___x_1327_ = v_reuseFailAlloc_1328_;
goto v_reusejp_1326_;
}
v_reusejp_1326_:
{
return v___x_1327_;
}
}
}
else
{
lean_object* v_a_1330_; lean_object* v___x_1332_; uint8_t v_isShared_1333_; uint8_t v_isSharedCheck_1337_; 
lean_dec(v_headerStx_1317_);
lean_dec_ref(v_pos_1315_);
lean_dec_ref(v_uri_1314_);
v_a_1330_ = lean_ctor_get(v___x_1319_, 0);
v_isSharedCheck_1337_ = !lean_is_exclusive(v___x_1319_);
if (v_isSharedCheck_1337_ == 0)
{
v___x_1332_ = v___x_1319_;
v_isShared_1333_ = v_isSharedCheck_1337_;
goto v_resetjp_1331_;
}
else
{
lean_inc(v_a_1330_);
lean_dec(v___x_1319_);
v___x_1332_ = lean_box(0);
v_isShared_1333_ = v_isSharedCheck_1337_;
goto v_resetjp_1331_;
}
v_resetjp_1331_:
{
lean_object* v___x_1335_; 
if (v_isShared_1333_ == 0)
{
v___x_1335_ = v___x_1332_;
goto v_reusejp_1334_;
}
else
{
lean_object* v_reuseFailAlloc_1336_; 
v_reuseFailAlloc_1336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1336_, 0, v_a_1330_);
v___x_1335_ = v_reuseFailAlloc_1336_;
goto v_reusejp_1334_;
}
v_reusejp_1334_:
{
return v___x_1335_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_computeCompletions___boxed(lean_object* v_uri_1338_, lean_object* v_pos_1339_, lean_object* v_text_1340_, lean_object* v_headerStx_1341_, lean_object* v_a_1342_){
_start:
{
lean_object* v_res_1343_; 
v_res_1343_ = l_Lean_Lsp_ImportCompletion_computeCompletions(v_uri_1338_, v_pos_1339_, v_text_1340_, v_headerStx_1341_);
lean_dec_ref(v_text_1340_);
return v_res_1343_;
}
}
lean_object* runtime_initialize_Lean_Util_LakePath(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_Lsp(uint8_t builtin);
lean_object* runtime_initialize_Lean_Parser_Module(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Server_Completion_ImportCompletion(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Util_LakePath(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Lsp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser_Module(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lean_Parser_Module(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Server_Completion_ImportCompletion(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lean_Parser_Module(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Util_LakePath(uint8_t builtin);
lean_object* initialize_Lean_Data_Lsp(uint8_t builtin);
lean_object* initialize_Lean_Parser_Module(uint8_t builtin);
lean_object* initialize_Lean_Parser_Module(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Server_Completion_ImportCompletion(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Util_LakePath(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Lsp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Module(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Module(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_Completion_ImportCompletion(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Server_Completion_ImportCompletion(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Server_Completion_ImportCompletion(builtin);
}
#ifdef __cplusplus
}
#endif

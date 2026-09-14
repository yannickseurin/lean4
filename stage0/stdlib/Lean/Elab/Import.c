// Lean compiler output
// Module: Lean.Elab.Import
// Imports: public import Lean.Parser.Module meta import Lean.Parser.Module import Lean.Compiler.ModPkgExt public import Lean.DeprecatedModule import Init.Data.String.Modify
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
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Lean_Parser_mkInputContext___redArg(lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Parser_parseHeader(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
extern lean_object* l_Lean_instInhabitedImport_default;
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Array_instInhabited___redArg();
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
extern lean_object* l_Lean_linter_deprecated_module;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* l_Lean_Environment_getModuleIdx_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Environment_getDeprecatedModuleByIdx_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_formatDeprecatedModuleWarning(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTrailing_x3f(lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_string_get_byte_fast(lean_object*, lean_object*);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_String_Slice_posGE___redArg(lean_object*, lean_object*);
lean_object* l_String_Slice_Pattern_ForwardSliceSearcher_buildTable(lean_object*);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_get_stdout();
lean_object* l_Lean_findOLean(lean_object*);
lean_object* l_Lean_Environment_setMainModule(lean_object*, lean_object*);
extern lean_object* l___private_Lean_Compiler_ModPkgExt_0__Lean_modPkgExt;
lean_object* l_Lean_PersistentEnvExtension_setState___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_set(lean_object*, lean_object*, uint32_t);
lean_object* l_Char_utf8Size(uint32_t);
uint32_t lean_uint32_add(uint32_t, uint32_t);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* l_Lean_importModules(lean_object*, lean_object*, uint32_t, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*);
lean_object* l_Lean_mkEmptyEnvironment(uint32_t);
lean_object* lean_io_error_to_string(lean_object*);
extern lean_object* l_Lean_Elab_inServer;
lean_object* l_Lean_getSrcSearchPath();
lean_object* l_Lean_findLean(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_HeaderSyntax_startPos(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_HeaderSyntax_startPos___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_HeaderSyntax_isModule(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_HeaderSyntax_isModule___boxed(lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Elab_HeaderSyntax_imports_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Elab_HeaderSyntax_imports_spec__0___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_HeaderSyntax_imports_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_HeaderSyntax_imports_spec__1(lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Module"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "import"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__4_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__4_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(239, 68, 245, 129, 233, 83, 45, 77)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__4_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__3_value),LEAN_SCALAR_PTR_LITERAL(177, 219, 158, 40, 50, 143, 61, 44)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Lean.Elab.Import"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lean.Elab.HeaderSyntax.imports"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__6_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__7_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__8;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "all"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__9_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__10_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__10_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(239, 68, 245, 129, 233, 83, 45, 77)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__10_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__9_value),LEAN_SCALAR_PTR_LITERAL(107, 73, 92, 3, 207, 252, 164, 131)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__10_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__11 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__11_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__12_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__12_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(239, 68, 245, 129, 233, 83, 45, 77)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__12_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__11_value),LEAN_SCALAR_PTR_LITERAL(89, 228, 64, 55, 26, 167, 248, 235)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__12 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__12_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__13 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__13_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__14_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__14_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__14_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__14_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(239, 68, 245, 129, 233, 83, 45, 77)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__14_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__13_value),LEAN_SCALAR_PTR_LITERAL(198, 166, 14, 39, 152, 190, 236, 172)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__14 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__14_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2(lean_object*, uint8_t, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_HeaderSyntax_imports___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "header"};
static const lean_object* l_Lean_Elab_HeaderSyntax_imports___closed__0 = (const lean_object*)&l_Lean_Elab_HeaderSyntax_imports___closed__0_value;
static const lean_ctor_object l_Lean_Elab_HeaderSyntax_imports___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_HeaderSyntax_imports___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_HeaderSyntax_imports___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_HeaderSyntax_imports___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_HeaderSyntax_imports___closed__1_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(239, 68, 245, 129, 233, 83, 45, 77)}};
static const lean_ctor_object l_Lean_Elab_HeaderSyntax_imports___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_HeaderSyntax_imports___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_HeaderSyntax_imports___closed__0_value),LEAN_SCALAR_PTR_LITERAL(40, 173, 92, 3, 94, 219, 131, 202)}};
static const lean_object* l_Lean_Elab_HeaderSyntax_imports___closed__1 = (const lean_object*)&l_Lean_Elab_HeaderSyntax_imports___closed__1_value;
static lean_once_cell_t l_Lean_Elab_HeaderSyntax_imports___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_HeaderSyntax_imports___closed__2;
static const lean_array_object l_Lean_Elab_HeaderSyntax_imports___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_HeaderSyntax_imports___closed__3 = (const lean_object*)&l_Lean_Elab_HeaderSyntax_imports___closed__3_value;
static const lean_string_object l_Lean_Elab_HeaderSyntax_imports___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Init"};
static const lean_object* l_Lean_Elab_HeaderSyntax_imports___closed__4 = (const lean_object*)&l_Lean_Elab_HeaderSyntax_imports___closed__4_value;
static const lean_ctor_object l_Lean_Elab_HeaderSyntax_imports___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_HeaderSyntax_imports___closed__4_value),LEAN_SCALAR_PTR_LITERAL(152, 102, 12, 179, 200, 220, 30, 26)}};
static const lean_object* l_Lean_Elab_HeaderSyntax_imports___closed__5 = (const lean_object*)&l_Lean_Elab_HeaderSyntax_imports___closed__5_value;
static const lean_string_object l_Lean_Elab_HeaderSyntax_imports___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "prelude"};
static const lean_object* l_Lean_Elab_HeaderSyntax_imports___closed__6 = (const lean_object*)&l_Lean_Elab_HeaderSyntax_imports___closed__6_value;
static const lean_ctor_object l_Lean_Elab_HeaderSyntax_imports___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_HeaderSyntax_imports___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_HeaderSyntax_imports___closed__7_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_HeaderSyntax_imports___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_HeaderSyntax_imports___closed__7_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(239, 68, 245, 129, 233, 83, 45, 77)}};
static const lean_ctor_object l_Lean_Elab_HeaderSyntax_imports___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_HeaderSyntax_imports___closed__7_value_aux_2),((lean_object*)&l_Lean_Elab_HeaderSyntax_imports___closed__6_value),LEAN_SCALAR_PTR_LITERAL(182, 6, 18, 235, 50, 88, 101, 248)}};
static const lean_object* l_Lean_Elab_HeaderSyntax_imports___closed__7 = (const lean_object*)&l_Lean_Elab_HeaderSyntax_imports___closed__7_value;
static const lean_string_object l_Lean_Elab_HeaderSyntax_imports___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "moduleTk"};
static const lean_object* l_Lean_Elab_HeaderSyntax_imports___closed__8 = (const lean_object*)&l_Lean_Elab_HeaderSyntax_imports___closed__8_value;
static const lean_ctor_object l_Lean_Elab_HeaderSyntax_imports___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_HeaderSyntax_imports___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_HeaderSyntax_imports___closed__9_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_HeaderSyntax_imports___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_HeaderSyntax_imports___closed__9_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(239, 68, 245, 129, 233, 83, 45, 77)}};
static const lean_ctor_object l_Lean_Elab_HeaderSyntax_imports___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_HeaderSyntax_imports___closed__9_value_aux_2),((lean_object*)&l_Lean_Elab_HeaderSyntax_imports___closed__8_value),LEAN_SCALAR_PTR_LITERAL(198, 239, 28, 252, 21, 233, 71, 221)}};
static const lean_object* l_Lean_Elab_HeaderSyntax_imports___closed__9 = (const lean_object*)&l_Lean_Elab_HeaderSyntax_imports___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Elab_HeaderSyntax_imports(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_HeaderSyntax_imports___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_HeaderSyntax_toModuleHeader(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_headerToImports(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_headerToImports___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_checkDeprecatedImports_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_checkDeprecatedImports_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2_spec__2___redArg(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "deprecated_module: ignore"};
static const lean_object* l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__0 = (const lean_object*)&l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__0_value;
static lean_once_cell_t l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__1;
static lean_once_cell_t l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__2;
static lean_once_cell_t l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__3;
static lean_once_cell_t l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__4;
static lean_once_cell_t l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__5;
static const lean_ctor_object l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__6 = (const lean_object*)&l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__6_value;
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_checkDeprecatedImports_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_checkDeprecatedImports_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_checkDeprecatedImports_spec__4_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_checkDeprecatedImports_spec__4_spec__5___closed__0 = (const lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_checkDeprecatedImports_spec__4_spec__5___closed__0_value;
static const lean_ctor_object l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_checkDeprecatedImports_spec__4_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_checkDeprecatedImports_spec__4_spec__5___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_checkDeprecatedImports_spec__4_spec__5___closed__1 = (const lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_checkDeprecatedImports_spec__4_spec__5___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_checkDeprecatedImports_spec__4_spec__5(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_checkDeprecatedImports_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Elab_checkDeprecatedImports_spec__4(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Elab_checkDeprecatedImports_spec__4___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_checkDeprecatedImports_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_checkDeprecatedImports_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_checkDeprecatedImports_spec__1___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_checkDeprecatedImports_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "deprecatedModuleExt"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_checkDeprecatedImports_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_checkDeprecatedImports_spec__1___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_checkDeprecatedImports_spec__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_checkDeprecatedImports_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_checkDeprecatedImports_spec__1___closed__2_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_checkDeprecatedImports_spec__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(112, 167, 11, 228, 166, 253, 145, 197)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_checkDeprecatedImports_spec__1___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_checkDeprecatedImports_spec__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_checkDeprecatedImports_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_checkDeprecatedImports_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_checkDeprecatedImports___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_checkDeprecatedImports___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_checkDeprecatedImports(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkDeprecatedImports___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__4;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__5;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__6;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__7;
static lean_once_cell_t l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "CON"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__0 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "PRN"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__1 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "AUX"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__2 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "NUL"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__3 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__3_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "COM1"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__4 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__4_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "COM2"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__5 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__5_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "COM3"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__6 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__6_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "COM4"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__7 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__7_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "COM5"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__8 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__8_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "COM6"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__9 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__9_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "COM7"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__10 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__10_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "COM8"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__11 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__11_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "COM9"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__12 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__12_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 4, .m_data = "COM¹"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__13 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__13_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 4, .m_data = "COM²"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__14 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__14_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 4, .m_data = "COM³"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__15 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__15_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LPT1"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__16 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__16_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LPT2"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__17 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__17_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LPT3"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__18 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__18_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LPT4"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__19 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__19_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LPT5"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__20 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__20_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LPT6"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__21 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__21_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LPT7"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__22 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__22_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LPT8"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__23 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__23_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LPT9"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__24 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__24_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 4, .m_data = "LPT¹"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__25 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__25_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 4, .m_data = "LPT²"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__26 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__26_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 4, .m_data = "LPT³"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__27 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__27_value;
static const lean_array_object l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*28, .m_other = 0, .m_tag = 246}, .m_size = 28, .m_capacity = 28, .m_data = {((lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__0_value),((lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__1_value),((lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__2_value),((lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__3_value),((lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__4_value),((lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__5_value),((lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__6_value),((lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__7_value),((lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__8_value),((lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__9_value),((lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__10_value),((lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__11_value),((lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__12_value),((lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__13_value),((lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__14_value),((lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__15_value),((lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__16_value),((lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__17_value),((lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__18_value),((lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__19_value),((lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__20_value),((lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__21_value),((lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__22_value),((lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__23_value),((lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__24_value),((lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__25_value),((lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__26_value),((lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__27_value)}};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__28 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__28_value;
LEAN_EXPORT const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__28_value;
LEAN_EXPORT lean_object* l_String_mapAux___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__0(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__2_spec__3___redArg(lean_object*, uint32_t, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__2(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__2___boxed(lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__1_spec__1(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__1___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l___private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability___closed__0;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "contains character '"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability___closed__1 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "' which is forbidden on some operating systems"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability___closed__2 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability___closed__3 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability___closed__3_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "' is a reserved file name on some operating systems"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability___closed__4 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability(lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__2_spec__3(lean_object*, uint32_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_checkModuleNamePortability_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "module name '"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_checkModuleNamePortability_go___closed__0 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_checkModuleNamePortability_go___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_checkModuleNamePortability_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "' is not portable: "};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_checkModuleNamePortability_go___closed__1 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_checkModuleNamePortability_go___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_checkModuleNamePortability_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_checkModuleNamePortability_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkModuleNamePortability(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkModuleNamePortability___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_processHeaderCore(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint32_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_processHeaderCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_processHeader(lean_object*, lean_object*, lean_object*, lean_object*, uint32_t, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_processHeader___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_parseImports___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "<input>"};
static const lean_object* l_Lean_Elab_parseImports___closed__0 = (const lean_object*)&l_Lean_Elab_parseImports___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_parseImports(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_parseImports___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00Lean_Elab_printImports_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00Lean_Elab_printImports_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00Lean_Elab_printImports_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00Lean_Elab_printImports_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_printImports_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_printImports_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_printImports(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_printImports___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_printImportSrcs_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_printImportSrcs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_printImportSrcs(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_printImportSrcs___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_HeaderSyntax_startPos(lean_object* v_header_1_){
_start:
{
uint8_t v___x_2_; lean_object* v___x_3_; 
v___x_2_ = 0;
v___x_3_ = l_Lean_Syntax_getPos_x3f(v_header_1_, v___x_2_);
if (lean_obj_tag(v___x_3_) == 0)
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(0u);
return v___x_4_;
}
else
{
lean_object* v_val_5_; 
v_val_5_ = lean_ctor_get(v___x_3_, 0);
lean_inc(v_val_5_);
lean_dec_ref_known(v___x_3_, 1);
return v_val_5_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_HeaderSyntax_startPos___boxed(lean_object* v_header_6_){
_start:
{
lean_object* v_res_7_; 
v_res_7_ = l_Lean_Elab_HeaderSyntax_startPos(v_header_6_);
lean_dec(v_header_6_);
return v_res_7_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_HeaderSyntax_isModule(lean_object* v_header_8_){
_start:
{
lean_object* v___x_9_; lean_object* v___x_10_; uint8_t v___x_11_; 
v___x_9_ = lean_unsigned_to_nat(0u);
v___x_10_ = l_Lean_Syntax_getArg(v_header_8_, v___x_9_);
v___x_11_ = l_Lean_Syntax_isNone(v___x_10_);
lean_dec(v___x_10_);
if (v___x_11_ == 0)
{
uint8_t v___x_12_; 
v___x_12_ = 1;
return v___x_12_;
}
else
{
uint8_t v___x_13_; 
v___x_13_ = 0;
return v___x_13_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_HeaderSyntax_isModule___boxed(lean_object* v_header_14_){
_start:
{
uint8_t v_res_15_; lean_object* v_r_16_; 
v_res_15_ = l_Lean_Elab_HeaderSyntax_isModule(v_header_14_);
lean_dec(v_header_14_);
v_r_16_ = lean_box(v_res_15_);
return v_r_16_;
}
}
static lean_object* _init_l_panic___at___00Lean_Elab_HeaderSyntax_imports_spec__0___closed__0(void){
_start:
{
lean_object* v___x_17_; 
v___x_17_ = l_Array_instInhabited___redArg();
return v___x_17_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_HeaderSyntax_imports_spec__0(lean_object* v_msg_18_){
_start:
{
lean_object* v___x_19_; lean_object* v___x_20_; 
v___x_19_ = lean_obj_once(&l_panic___at___00Lean_Elab_HeaderSyntax_imports_spec__0___closed__0, &l_panic___at___00Lean_Elab_HeaderSyntax_imports_spec__0___closed__0_once, _init_l_panic___at___00Lean_Elab_HeaderSyntax_imports_spec__0___closed__0);
v___x_20_ = lean_panic_fn_borrowed(v___x_19_, v_msg_18_);
return v___x_20_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_HeaderSyntax_imports_spec__1(lean_object* v_msg_21_){
_start:
{
lean_object* v___x_22_; lean_object* v___x_23_; 
v___x_22_ = l_Lean_instInhabitedImport_default;
v___x_23_ = lean_panic_fn_borrowed(v___x_22_, v_msg_21_);
return v___x_23_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__8(void){
_start:
{
lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_36_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__7));
v___x_37_ = lean_unsigned_to_nat(13u);
v___x_38_ = lean_unsigned_to_nat(40u);
v___x_39_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__6));
v___x_40_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__5));
v___x_41_ = l_mkPanicMessageWithDecl(v___x_40_, v___x_39_, v___x_38_, v___x_37_, v___x_36_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2(lean_object* v_moduleTk_60_, uint8_t v___x_61_, size_t v_sz_62_, size_t v_i_63_, lean_object* v_bs_64_){
_start:
{
uint8_t v___x_65_; 
v___x_65_ = lean_usize_dec_lt(v_i_63_, v_sz_62_);
if (v___x_65_ == 0)
{
lean_object* v___x_66_; 
v___x_66_ = l_unsafeCast___redArg(v_bs_64_);
lean_dec_ref(v_bs_64_);
return v___x_66_;
}
else
{
lean_object* v___x_67_; lean_object* v_v_68_; lean_object* v___x_69_; lean_object* v_bs_x27_70_; lean_object* v___y_72_; uint8_t v___y_79_; lean_object* v___y_80_; uint8_t v___y_81_; lean_object* v___y_82_; uint8_t v___y_83_; uint8_t v___y_88_; lean_object* v___y_89_; lean_object* v___y_90_; uint8_t v___y_91_; uint8_t v___y_92_; uint8_t v___y_94_; lean_object* v___y_95_; lean_object* v___y_96_; lean_object* v___y_97_; uint8_t v___y_98_; lean_object* v___x_100_; uint8_t v___x_101_; 
v___x_67_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__4));
v_v_68_ = lean_array_uget(v_bs_64_, v_i_63_);
v___x_69_ = lean_unsigned_to_nat(0u);
v_bs_x27_70_ = lean_array_uset(v_bs_64_, v_i_63_, v___x_69_);
v___x_100_ = l_unsafeCast___redArg(v_v_68_);
lean_dec(v_v_68_);
lean_inc(v___x_100_);
v___x_101_ = l_Lean_Syntax_isOfKind(v___x_100_, v___x_67_);
if (v___x_101_ == 0)
{
lean_object* v___x_102_; lean_object* v___x_103_; 
lean_dec(v___x_100_);
v___x_102_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__8, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__8_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__8);
v___x_103_ = l_panic___at___00Lean_Elab_HeaderSyntax_imports_spec__1(v___x_102_);
v___y_72_ = v___x_103_;
goto v___jp_71_;
}
else
{
lean_object* v___y_105_; lean_object* v___y_106_; lean_object* v_allTk_107_; lean_object* v___x_117_; lean_object* v___y_119_; lean_object* v_metaTk_120_; lean_object* v_publicTk_136_; lean_object* v___x_150_; uint8_t v___x_151_; 
v___x_117_ = lean_unsigned_to_nat(1u);
v___x_150_ = l_Lean_Syntax_getArg(v___x_100_, v___x_69_);
v___x_151_ = l_Lean_Syntax_isNone(v___x_150_);
if (v___x_151_ == 0)
{
uint8_t v___x_152_; 
lean_inc(v___x_150_);
v___x_152_ = l_Lean_Syntax_matchesNull(v___x_150_, v___x_117_);
if (v___x_152_ == 0)
{
lean_object* v___x_153_; lean_object* v___x_154_; 
lean_dec(v___x_150_);
lean_dec(v___x_100_);
v___x_153_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__8, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__8_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__8);
v___x_154_ = l_panic___at___00Lean_Elab_HeaderSyntax_imports_spec__1(v___x_153_);
v___y_72_ = v___x_154_;
goto v___jp_71_;
}
else
{
lean_object* v___x_155_; lean_object* v___x_156_; uint8_t v___x_157_; 
v___x_155_ = l_Lean_Syntax_getArg(v___x_150_, v___x_69_);
lean_dec(v___x_150_);
v___x_156_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__14));
lean_inc(v___x_155_);
v___x_157_ = l_Lean_Syntax_isOfKind(v___x_155_, v___x_156_);
if (v___x_157_ == 0)
{
lean_object* v___x_158_; lean_object* v___x_159_; 
lean_dec(v___x_155_);
lean_dec(v___x_100_);
v___x_158_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__8, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__8_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__8);
v___x_159_ = l_panic___at___00Lean_Elab_HeaderSyntax_imports_spec__1(v___x_158_);
v___y_72_ = v___x_159_;
goto v___jp_71_;
}
else
{
lean_object* v_publicTk_160_; lean_object* v___x_161_; 
v_publicTk_160_ = l_Lean_Syntax_getArg(v___x_155_, v___x_69_);
lean_dec(v___x_155_);
v___x_161_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_161_, 0, v_publicTk_160_);
v_publicTk_136_ = v___x_161_;
goto v___jp_135_;
}
}
}
else
{
lean_object* v___x_162_; 
lean_dec(v___x_150_);
v___x_162_ = lean_box(0);
v_publicTk_136_ = v___x_162_;
goto v___jp_135_;
}
v___jp_104_:
{
lean_object* v___x_108_; lean_object* v___x_109_; uint8_t v___x_110_; 
v___x_108_ = lean_unsigned_to_nat(5u);
v___x_109_ = l_Lean_Syntax_getArg(v___x_100_, v___x_108_);
v___x_110_ = l_Lean_Syntax_matchesNull(v___x_109_, v___x_69_);
if (v___x_110_ == 0)
{
lean_object* v___x_111_; lean_object* v___x_112_; 
lean_dec(v_allTk_107_);
lean_dec(v___y_106_);
lean_dec(v___y_105_);
lean_dec(v___x_100_);
v___x_111_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__8, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__8_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__8);
v___x_112_ = l_panic___at___00Lean_Elab_HeaderSyntax_imports_spec__1(v___x_111_);
v___y_72_ = v___x_112_;
goto v___jp_71_;
}
else
{
lean_object* v___x_113_; lean_object* v_n_114_; lean_object* v___x_115_; 
v___x_113_ = lean_unsigned_to_nat(4u);
v_n_114_ = l_Lean_Syntax_getArg(v___x_100_, v___x_113_);
lean_dec(v___x_100_);
v___x_115_ = l_Lean_TSyntax_getId(v_n_114_);
lean_dec(v_n_114_);
if (lean_obj_tag(v_allTk_107_) == 0)
{
uint8_t v___x_116_; 
v___x_116_ = 0;
v___y_94_ = v___x_110_;
v___y_95_ = v___x_115_;
v___y_96_ = v___y_106_;
v___y_97_ = v___y_105_;
v___y_98_ = v___x_116_;
goto v___jp_93_;
}
else
{
lean_dec_ref_known(v_allTk_107_, 1);
v___y_94_ = v___x_110_;
v___y_95_ = v___x_115_;
v___y_96_ = v___y_106_;
v___y_97_ = v___y_105_;
v___y_98_ = v___x_110_;
goto v___jp_93_;
}
}
}
v___jp_118_:
{
lean_object* v___x_121_; lean_object* v___x_122_; uint8_t v___x_123_; 
v___x_121_ = lean_unsigned_to_nat(3u);
v___x_122_ = l_Lean_Syntax_getArg(v___x_100_, v___x_121_);
v___x_123_ = l_Lean_Syntax_isNone(v___x_122_);
if (v___x_123_ == 0)
{
uint8_t v___x_124_; 
lean_inc(v___x_122_);
v___x_124_ = l_Lean_Syntax_matchesNull(v___x_122_, v___x_117_);
if (v___x_124_ == 0)
{
lean_object* v___x_125_; lean_object* v___x_126_; 
lean_dec(v___x_122_);
lean_dec(v_metaTk_120_);
lean_dec(v___y_119_);
lean_dec(v___x_100_);
v___x_125_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__8, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__8_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__8);
v___x_126_ = l_panic___at___00Lean_Elab_HeaderSyntax_imports_spec__1(v___x_125_);
v___y_72_ = v___x_126_;
goto v___jp_71_;
}
else
{
lean_object* v___x_127_; lean_object* v___x_128_; uint8_t v___x_129_; 
v___x_127_ = l_Lean_Syntax_getArg(v___x_122_, v___x_69_);
lean_dec(v___x_122_);
v___x_128_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__10));
lean_inc(v___x_127_);
v___x_129_ = l_Lean_Syntax_isOfKind(v___x_127_, v___x_128_);
if (v___x_129_ == 0)
{
lean_object* v___x_130_; lean_object* v___x_131_; 
lean_dec(v___x_127_);
lean_dec(v_metaTk_120_);
lean_dec(v___y_119_);
lean_dec(v___x_100_);
v___x_130_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__8, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__8_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__8);
v___x_131_ = l_panic___at___00Lean_Elab_HeaderSyntax_imports_spec__1(v___x_130_);
v___y_72_ = v___x_131_;
goto v___jp_71_;
}
else
{
lean_object* v_allTk_132_; lean_object* v___x_133_; 
v_allTk_132_ = l_Lean_Syntax_getArg(v___x_127_, v___x_69_);
lean_dec(v___x_127_);
v___x_133_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_133_, 0, v_allTk_132_);
v___y_105_ = v_metaTk_120_;
v___y_106_ = v___y_119_;
v_allTk_107_ = v___x_133_;
goto v___jp_104_;
}
}
}
else
{
lean_object* v___x_134_; 
lean_dec(v___x_122_);
v___x_134_ = lean_box(0);
v___y_105_ = v_metaTk_120_;
v___y_106_ = v___y_119_;
v_allTk_107_ = v___x_134_;
goto v___jp_104_;
}
}
v___jp_135_:
{
lean_object* v___x_137_; uint8_t v___x_138_; 
v___x_137_ = l_Lean_Syntax_getArg(v___x_100_, v___x_117_);
v___x_138_ = l_Lean_Syntax_isNone(v___x_137_);
if (v___x_138_ == 0)
{
uint8_t v___x_139_; 
lean_inc(v___x_137_);
v___x_139_ = l_Lean_Syntax_matchesNull(v___x_137_, v___x_117_);
if (v___x_139_ == 0)
{
lean_object* v___x_140_; lean_object* v___x_141_; 
lean_dec(v___x_137_);
lean_dec(v_publicTk_136_);
lean_dec(v___x_100_);
v___x_140_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__8, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__8_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__8);
v___x_141_ = l_panic___at___00Lean_Elab_HeaderSyntax_imports_spec__1(v___x_140_);
v___y_72_ = v___x_141_;
goto v___jp_71_;
}
else
{
lean_object* v___x_142_; lean_object* v___x_143_; uint8_t v___x_144_; 
v___x_142_ = l_Lean_Syntax_getArg(v___x_137_, v___x_69_);
lean_dec(v___x_137_);
v___x_143_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__12));
lean_inc(v___x_142_);
v___x_144_ = l_Lean_Syntax_isOfKind(v___x_142_, v___x_143_);
if (v___x_144_ == 0)
{
lean_object* v___x_145_; lean_object* v___x_146_; 
lean_dec(v___x_142_);
lean_dec(v_publicTk_136_);
lean_dec(v___x_100_);
v___x_145_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__8, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__8_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__8);
v___x_146_ = l_panic___at___00Lean_Elab_HeaderSyntax_imports_spec__1(v___x_145_);
v___y_72_ = v___x_146_;
goto v___jp_71_;
}
else
{
lean_object* v_metaTk_147_; lean_object* v___x_148_; 
v_metaTk_147_ = l_Lean_Syntax_getArg(v___x_142_, v___x_69_);
lean_dec(v___x_142_);
v___x_148_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_148_, 0, v_metaTk_147_);
v___y_119_ = v_publicTk_136_;
v_metaTk_120_ = v___x_148_;
goto v___jp_118_;
}
}
}
else
{
lean_object* v___x_149_; 
lean_dec(v___x_137_);
v___x_149_ = lean_box(0);
v___y_119_ = v_publicTk_136_;
v_metaTk_120_ = v___x_149_;
goto v___jp_118_;
}
}
}
v___jp_71_:
{
size_t v___x_73_; size_t v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; 
v___x_73_ = ((size_t)1ULL);
v___x_74_ = lean_usize_add(v_i_63_, v___x_73_);
v___x_75_ = l_unsafeCast___redArg(v___y_72_);
lean_dec_ref(v___y_72_);
v___x_76_ = lean_array_uset(v_bs_x27_70_, v_i_63_, v___x_75_);
v_i_63_ = v___x_74_;
v_bs_64_ = v___x_76_;
goto _start;
}
v___jp_78_:
{
if (lean_obj_tag(v___y_82_) == 0)
{
uint8_t v___x_84_; lean_object* v___x_85_; 
v___x_84_ = 0;
v___x_85_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v___x_85_, 0, v___y_80_);
lean_ctor_set_uint8(v___x_85_, sizeof(void*)*1, v___y_81_);
lean_ctor_set_uint8(v___x_85_, sizeof(void*)*1 + 1, v___y_83_);
lean_ctor_set_uint8(v___x_85_, sizeof(void*)*1 + 2, v___x_84_);
v___y_72_ = v___x_85_;
goto v___jp_71_;
}
else
{
lean_object* v___x_86_; 
lean_dec_ref_known(v___y_82_, 1);
v___x_86_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v___x_86_, 0, v___y_80_);
lean_ctor_set_uint8(v___x_86_, sizeof(void*)*1, v___y_81_);
lean_ctor_set_uint8(v___x_86_, sizeof(void*)*1 + 1, v___y_83_);
lean_ctor_set_uint8(v___x_86_, sizeof(void*)*1 + 2, v___y_79_);
v___y_72_ = v___x_86_;
goto v___jp_71_;
}
}
v___jp_87_:
{
if (lean_obj_tag(v_moduleTk_60_) == 0)
{
v___y_79_ = v___y_88_;
v___y_80_ = v___y_89_;
v___y_81_ = v___y_91_;
v___y_82_ = v___y_90_;
v___y_83_ = v___y_88_;
goto v___jp_78_;
}
else
{
v___y_79_ = v___y_88_;
v___y_80_ = v___y_89_;
v___y_81_ = v___y_91_;
v___y_82_ = v___y_90_;
v___y_83_ = v___y_92_;
goto v___jp_78_;
}
}
v___jp_93_:
{
if (lean_obj_tag(v___y_96_) == 0)
{
uint8_t v___x_99_; 
v___x_99_ = 0;
v___y_88_ = v___y_94_;
v___y_89_ = v___y_95_;
v___y_90_ = v___y_97_;
v___y_91_ = v___y_98_;
v___y_92_ = v___x_99_;
goto v___jp_87_;
}
else
{
lean_dec_ref_known(v___y_96_, 1);
if (v___y_94_ == 0)
{
v___y_88_ = v___y_94_;
v___y_89_ = v___y_95_;
v___y_90_ = v___y_97_;
v___y_91_ = v___y_98_;
v___y_92_ = v___y_94_;
goto v___jp_87_;
}
else
{
v___y_79_ = v___y_94_;
v___y_80_ = v___y_95_;
v___y_81_ = v___y_98_;
v___y_82_ = v___y_97_;
v___y_83_ = v___x_61_;
goto v___jp_78_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___boxed(lean_object* v_moduleTk_163_, lean_object* v___x_164_, lean_object* v_sz_165_, lean_object* v_i_166_, lean_object* v_bs_167_){
_start:
{
uint8_t v___x_1491__boxed_168_; size_t v_sz_boxed_169_; size_t v_i_boxed_170_; lean_object* v_res_171_; 
v___x_1491__boxed_168_ = lean_unbox(v___x_164_);
v_sz_boxed_169_ = lean_unbox_usize(v_sz_165_);
lean_dec(v_sz_165_);
v_i_boxed_170_ = lean_unbox_usize(v_i_166_);
lean_dec(v_i_166_);
v_res_171_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2(v_moduleTk_163_, v___x_1491__boxed_168_, v_sz_boxed_169_, v_i_boxed_170_, v_bs_167_);
lean_dec(v_moduleTk_163_);
return v_res_171_;
}
}
static lean_object* _init_l_Lean_Elab_HeaderSyntax_imports___closed__2(void){
_start:
{
lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; 
v___x_178_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__7));
v___x_179_ = lean_unsigned_to_nat(9u);
v___x_180_ = lean_unsigned_to_nat(41u);
v___x_181_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__6));
v___x_182_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__5));
v___x_183_ = l_mkPanicMessageWithDecl(v___x_182_, v___x_181_, v___x_180_, v___x_179_, v___x_178_);
return v___x_183_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_HeaderSyntax_imports(lean_object* v_stx_201_, uint8_t v_includeInit_202_){
_start:
{
lean_object* v___x_203_; uint8_t v___x_204_; lean_object* v___y_206_; lean_object* v___y_207_; lean_object* v___y_208_; 
v___x_203_ = ((lean_object*)(l_Lean_Elab_HeaderSyntax_imports___closed__1));
lean_inc(v_stx_201_);
v___x_204_ = l_Lean_Syntax_isOfKind(v_stx_201_, v___x_203_);
if (v___x_204_ == 0)
{
lean_object* v___x_216_; lean_object* v___x_217_; 
lean_dec(v_stx_201_);
v___x_216_ = lean_obj_once(&l_Lean_Elab_HeaderSyntax_imports___closed__2, &l_Lean_Elab_HeaderSyntax_imports___closed__2_once, _init_l_Lean_Elab_HeaderSyntax_imports___closed__2);
v___x_217_ = l_panic___at___00Lean_Elab_HeaderSyntax_imports_spec__0(v___x_216_);
return v___x_217_;
}
else
{
lean_object* v___x_218_; lean_object* v___y_220_; lean_object* v___y_221_; lean_object* v___y_224_; lean_object* v_preludeTk_225_; lean_object* v_moduleTk_238_; lean_object* v___x_253_; uint8_t v___x_254_; 
v___x_218_ = lean_unsigned_to_nat(0u);
v___x_253_ = l_Lean_Syntax_getArg(v_stx_201_, v___x_218_);
v___x_254_ = l_Lean_Syntax_isNone(v___x_253_);
if (v___x_254_ == 0)
{
lean_object* v___x_255_; uint8_t v___x_256_; 
v___x_255_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_253_);
v___x_256_ = l_Lean_Syntax_matchesNull(v___x_253_, v___x_255_);
if (v___x_256_ == 0)
{
lean_object* v___x_257_; lean_object* v___x_258_; 
lean_dec(v___x_253_);
lean_dec(v_stx_201_);
v___x_257_ = lean_obj_once(&l_Lean_Elab_HeaderSyntax_imports___closed__2, &l_Lean_Elab_HeaderSyntax_imports___closed__2_once, _init_l_Lean_Elab_HeaderSyntax_imports___closed__2);
v___x_258_ = l_panic___at___00Lean_Elab_HeaderSyntax_imports_spec__0(v___x_257_);
return v___x_258_;
}
else
{
lean_object* v___x_259_; lean_object* v___x_260_; uint8_t v___x_261_; 
v___x_259_ = l_Lean_Syntax_getArg(v___x_253_, v___x_218_);
lean_dec(v___x_253_);
v___x_260_ = ((lean_object*)(l_Lean_Elab_HeaderSyntax_imports___closed__9));
lean_inc(v___x_259_);
v___x_261_ = l_Lean_Syntax_isOfKind(v___x_259_, v___x_260_);
if (v___x_261_ == 0)
{
lean_object* v___x_262_; lean_object* v___x_263_; 
lean_dec(v___x_259_);
lean_dec(v_stx_201_);
v___x_262_ = lean_obj_once(&l_Lean_Elab_HeaderSyntax_imports___closed__2, &l_Lean_Elab_HeaderSyntax_imports___closed__2_once, _init_l_Lean_Elab_HeaderSyntax_imports___closed__2);
v___x_263_ = l_panic___at___00Lean_Elab_HeaderSyntax_imports_spec__0(v___x_262_);
return v___x_263_;
}
else
{
lean_object* v_moduleTk_264_; lean_object* v___x_265_; 
v_moduleTk_264_ = l_Lean_Syntax_getArg(v___x_259_, v___x_218_);
lean_dec(v___x_259_);
v___x_265_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_265_, 0, v_moduleTk_264_);
v_moduleTk_238_ = v___x_265_;
goto v___jp_237_;
}
}
}
else
{
lean_object* v___x_266_; 
lean_dec(v___x_253_);
v___x_266_ = lean_box(0);
v_moduleTk_238_ = v___x_266_;
goto v___jp_237_;
}
v___jp_219_:
{
lean_object* v___x_222_; 
v___x_222_ = ((lean_object*)(l_Lean_Elab_HeaderSyntax_imports___closed__3));
v___y_206_ = v___y_220_;
v___y_207_ = v___y_221_;
v___y_208_ = v___x_222_;
goto v___jp_205_;
}
v___jp_223_:
{
lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v_importsStx_229_; 
v___x_226_ = lean_unsigned_to_nat(2u);
v___x_227_ = l_Lean_Syntax_getArg(v_stx_201_, v___x_226_);
lean_dec(v_stx_201_);
v___x_228_ = l_Lean_Syntax_getArgs(v___x_227_);
lean_dec(v___x_227_);
v_importsStx_229_ = l_unsafeCast___redArg(v___x_228_);
lean_dec_ref(v___x_228_);
if (lean_obj_tag(v_preludeTk_225_) == 0)
{
if (v___x_204_ == 0)
{
v___y_220_ = v___y_224_;
v___y_221_ = v_importsStx_229_;
goto v___jp_219_;
}
else
{
if (v_includeInit_202_ == 0)
{
v___y_220_ = v___y_224_;
v___y_221_ = v_importsStx_229_;
goto v___jp_219_;
}
else
{
lean_object* v___x_230_; uint8_t v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; 
v___x_230_ = ((lean_object*)(l_Lean_Elab_HeaderSyntax_imports___closed__5));
v___x_231_ = 0;
v___x_232_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v___x_232_, 0, v___x_230_);
lean_ctor_set_uint8(v___x_232_, sizeof(void*)*1, v___x_231_);
lean_ctor_set_uint8(v___x_232_, sizeof(void*)*1 + 1, v___x_204_);
lean_ctor_set_uint8(v___x_232_, sizeof(void*)*1 + 2, v___x_231_);
v___x_233_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v___x_233_, 0, v___x_230_);
lean_ctor_set_uint8(v___x_233_, sizeof(void*)*1, v___x_231_);
lean_ctor_set_uint8(v___x_233_, sizeof(void*)*1 + 1, v___x_204_);
lean_ctor_set_uint8(v___x_233_, sizeof(void*)*1 + 2, v___x_204_);
v___x_234_ = lean_mk_empty_array_with_capacity(v___x_226_);
v___x_235_ = lean_array_push(v___x_234_, v___x_232_);
v___x_236_ = lean_array_push(v___x_235_, v___x_233_);
v___y_206_ = v___y_224_;
v___y_207_ = v_importsStx_229_;
v___y_208_ = v___x_236_;
goto v___jp_205_;
}
}
}
else
{
lean_dec_ref_known(v_preludeTk_225_, 1);
v___y_220_ = v___y_224_;
v___y_221_ = v_importsStx_229_;
goto v___jp_219_;
}
}
v___jp_237_:
{
lean_object* v___x_239_; lean_object* v___x_240_; uint8_t v___x_241_; 
v___x_239_ = lean_unsigned_to_nat(1u);
v___x_240_ = l_Lean_Syntax_getArg(v_stx_201_, v___x_239_);
v___x_241_ = l_Lean_Syntax_isNone(v___x_240_);
if (v___x_241_ == 0)
{
uint8_t v___x_242_; 
lean_inc(v___x_240_);
v___x_242_ = l_Lean_Syntax_matchesNull(v___x_240_, v___x_239_);
if (v___x_242_ == 0)
{
lean_object* v___x_243_; lean_object* v___x_244_; 
lean_dec(v___x_240_);
lean_dec(v_moduleTk_238_);
lean_dec(v_stx_201_);
v___x_243_ = lean_obj_once(&l_Lean_Elab_HeaderSyntax_imports___closed__2, &l_Lean_Elab_HeaderSyntax_imports___closed__2_once, _init_l_Lean_Elab_HeaderSyntax_imports___closed__2);
v___x_244_ = l_panic___at___00Lean_Elab_HeaderSyntax_imports_spec__0(v___x_243_);
return v___x_244_;
}
else
{
lean_object* v___x_245_; lean_object* v___x_246_; uint8_t v___x_247_; 
v___x_245_ = l_Lean_Syntax_getArg(v___x_240_, v___x_218_);
lean_dec(v___x_240_);
v___x_246_ = ((lean_object*)(l_Lean_Elab_HeaderSyntax_imports___closed__7));
lean_inc(v___x_245_);
v___x_247_ = l_Lean_Syntax_isOfKind(v___x_245_, v___x_246_);
if (v___x_247_ == 0)
{
lean_object* v___x_248_; lean_object* v___x_249_; 
lean_dec(v___x_245_);
lean_dec(v_moduleTk_238_);
lean_dec(v_stx_201_);
v___x_248_ = lean_obj_once(&l_Lean_Elab_HeaderSyntax_imports___closed__2, &l_Lean_Elab_HeaderSyntax_imports___closed__2_once, _init_l_Lean_Elab_HeaderSyntax_imports___closed__2);
v___x_249_ = l_panic___at___00Lean_Elab_HeaderSyntax_imports_spec__0(v___x_248_);
return v___x_249_;
}
else
{
lean_object* v_preludeTk_250_; lean_object* v___x_251_; 
v_preludeTk_250_ = l_Lean_Syntax_getArg(v___x_245_, v___x_218_);
lean_dec(v___x_245_);
v___x_251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_251_, 0, v_preludeTk_250_);
v___y_224_ = v_moduleTk_238_;
v_preludeTk_225_ = v___x_251_;
goto v___jp_223_;
}
}
}
else
{
lean_object* v___x_252_; 
lean_dec(v___x_240_);
v___x_252_ = lean_box(0);
v___y_224_ = v_moduleTk_238_;
v_preludeTk_225_ = v___x_252_;
goto v___jp_223_;
}
}
}
v___jp_205_:
{
lean_object* v___x_209_; size_t v_sz_210_; size_t v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; 
v___x_209_ = l_unsafeCast___redArg(v___y_207_);
lean_dec(v___y_207_);
v_sz_210_ = lean_array_size(v___x_209_);
v___x_211_ = ((size_t)0ULL);
v___x_212_ = l_unsafeCast___redArg(v___x_209_);
lean_dec(v___x_209_);
v___x_213_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2(v___y_206_, v___x_204_, v_sz_210_, v___x_211_, v___x_212_);
lean_dec(v___y_206_);
v___x_214_ = l_unsafeCast___redArg(v___x_213_);
lean_dec_ref(v___x_213_);
v___x_215_ = l_Array_append___redArg(v___y_208_, v___x_214_);
lean_dec(v___x_214_);
return v___x_215_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_HeaderSyntax_imports___boxed(lean_object* v_stx_267_, lean_object* v_includeInit_268_){
_start:
{
uint8_t v_includeInit_boxed_269_; lean_object* v_res_270_; 
v_includeInit_boxed_269_ = lean_unbox(v_includeInit_268_);
v_res_270_ = l_Lean_Elab_HeaderSyntax_imports(v_stx_267_, v_includeInit_boxed_269_);
return v_res_270_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_HeaderSyntax_toModuleHeader(lean_object* v_stx_271_){
_start:
{
uint8_t v___x_272_; lean_object* v___x_273_; uint8_t v___x_274_; lean_object* v___x_275_; 
v___x_272_ = 1;
lean_inc(v_stx_271_);
v___x_273_ = l_Lean_Elab_HeaderSyntax_imports(v_stx_271_, v___x_272_);
v___x_274_ = l_Lean_Elab_HeaderSyntax_isModule(v_stx_271_);
lean_dec(v_stx_271_);
v___x_275_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_275_, 0, v___x_273_);
lean_ctor_set_uint8(v___x_275_, sizeof(void*)*1, v___x_274_);
return v___x_275_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_headerToImports(lean_object* v_stx_276_, uint8_t v_includeInit_277_){
_start:
{
lean_object* v___x_278_; 
v___x_278_ = l_Lean_Elab_HeaderSyntax_imports(v_stx_276_, v_includeInit_277_);
return v___x_278_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_headerToImports___boxed(lean_object* v_stx_279_, lean_object* v_includeInit_280_){
_start:
{
uint8_t v_includeInit_boxed_281_; lean_object* v_res_282_; 
v_includeInit_boxed_281_ = lean_unbox(v_includeInit_280_);
v_res_282_ = l_Lean_Elab_headerToImports(v_stx_279_, v_includeInit_boxed_281_);
return v_res_282_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_checkDeprecatedImports_spec__0(lean_object* v_opts_283_, lean_object* v_opt_284_){
_start:
{
lean_object* v_name_285_; lean_object* v_defValue_286_; lean_object* v_map_287_; lean_object* v___x_288_; 
v_name_285_ = lean_ctor_get(v_opt_284_, 0);
v_defValue_286_ = lean_ctor_get(v_opt_284_, 1);
v_map_287_ = lean_ctor_get(v_opts_283_, 0);
v___x_288_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_287_, v_name_285_);
if (lean_obj_tag(v___x_288_) == 0)
{
uint8_t v___x_289_; 
v___x_289_ = lean_unbox(v_defValue_286_);
return v___x_289_;
}
else
{
lean_object* v_val_290_; 
v_val_290_ = lean_ctor_get(v___x_288_, 0);
lean_inc(v_val_290_);
lean_dec_ref_known(v___x_288_, 1);
if (lean_obj_tag(v_val_290_) == 1)
{
uint8_t v_v_291_; 
v_v_291_ = lean_ctor_get_uint8(v_val_290_, 0);
lean_dec_ref_known(v_val_290_, 0);
return v_v_291_;
}
else
{
uint8_t v___x_292_; 
lean_dec(v_val_290_);
v___x_292_ = lean_unbox(v_defValue_286_);
return v___x_292_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_checkDeprecatedImports_spec__0___boxed(lean_object* v_opts_293_, lean_object* v_opt_294_){
_start:
{
uint8_t v_res_295_; lean_object* v_r_296_; 
v_res_295_ = l_Lean_Option_get___at___00Lean_Elab_checkDeprecatedImports_spec__0(v_opts_293_, v_opt_294_);
lean_dec_ref(v_opt_294_);
lean_dec_ref(v_opts_293_);
v_r_296_ = lean_box(v_res_295_);
return v_r_296_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2_spec__2___redArg(lean_object* v_s_297_, lean_object* v_a_298_, uint8_t v_b_299_){
_start:
{
uint8_t v___x_300_; 
v___x_300_ = 0;
switch(lean_obj_tag(v_a_298_))
{
case 0:
{
lean_object* v_pos_301_; lean_object* v_startInclusive_302_; lean_object* v_endExclusive_303_; lean_object* v___x_304_; uint8_t v_decide_305_; 
v_pos_301_ = lean_ctor_get(v_a_298_, 0);
lean_inc(v_pos_301_);
lean_dec_ref_known(v_a_298_, 1);
v_startInclusive_302_ = lean_ctor_get(v_s_297_, 1);
v_endExclusive_303_ = lean_ctor_get(v_s_297_, 2);
v___x_304_ = lean_nat_sub(v_endExclusive_303_, v_startInclusive_302_);
v_decide_305_ = lean_nat_dec_eq(v_pos_301_, v___x_304_);
lean_dec(v___x_304_);
lean_dec(v_pos_301_);
if (v_decide_305_ == 0)
{
uint8_t v___x_306_; 
v___x_306_ = 1;
return v___x_306_;
}
else
{
return v_decide_305_;
}
}
case 1:
{
lean_object* v_pos_307_; lean_object* v___x_309_; uint8_t v_isShared_310_; uint8_t v_isSharedCheck_320_; 
v_pos_307_ = lean_ctor_get(v_a_298_, 0);
v_isSharedCheck_320_ = !lean_is_exclusive(v_a_298_);
if (v_isSharedCheck_320_ == 0)
{
v___x_309_ = v_a_298_;
v_isShared_310_ = v_isSharedCheck_320_;
goto v_resetjp_308_;
}
else
{
lean_inc(v_pos_307_);
lean_dec(v_a_298_);
v___x_309_ = lean_box(0);
v_isShared_310_ = v_isSharedCheck_320_;
goto v_resetjp_308_;
}
v_resetjp_308_:
{
lean_object* v_str_311_; lean_object* v_startInclusive_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_317_; 
v_str_311_ = lean_ctor_get(v_s_297_, 0);
v_startInclusive_312_ = lean_ctor_get(v_s_297_, 1);
v___x_313_ = lean_nat_add(v_startInclusive_312_, v_pos_307_);
lean_dec(v_pos_307_);
v___x_314_ = lean_string_utf8_next_fast(v_str_311_, v___x_313_);
lean_dec(v___x_313_);
v___x_315_ = lean_nat_sub(v___x_314_, v_startInclusive_312_);
if (v_isShared_310_ == 0)
{
lean_ctor_set_tag(v___x_309_, 0);
lean_ctor_set(v___x_309_, 0, v___x_315_);
v___x_317_ = v___x_309_;
goto v_reusejp_316_;
}
else
{
lean_object* v_reuseFailAlloc_319_; 
v_reuseFailAlloc_319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_319_, 0, v___x_315_);
v___x_317_ = v_reuseFailAlloc_319_;
goto v_reusejp_316_;
}
v_reusejp_316_:
{
v_a_298_ = v___x_317_;
v_b_299_ = v___x_300_;
goto _start;
}
}
}
case 2:
{
lean_object* v_needle_321_; lean_object* v_table_322_; lean_object* v_stackPos_323_; lean_object* v_needlePos_324_; lean_object* v___x_326_; uint8_t v_isShared_327_; uint8_t v_isSharedCheck_379_; 
v_needle_321_ = lean_ctor_get(v_a_298_, 0);
v_table_322_ = lean_ctor_get(v_a_298_, 1);
v_stackPos_323_ = lean_ctor_get(v_a_298_, 2);
v_needlePos_324_ = lean_ctor_get(v_a_298_, 3);
v_isSharedCheck_379_ = !lean_is_exclusive(v_a_298_);
if (v_isSharedCheck_379_ == 0)
{
v___x_326_ = v_a_298_;
v_isShared_327_ = v_isSharedCheck_379_;
goto v_resetjp_325_;
}
else
{
lean_inc(v_needlePos_324_);
lean_inc(v_stackPos_323_);
lean_inc(v_table_322_);
lean_inc(v_needle_321_);
lean_dec(v_a_298_);
v___x_326_ = lean_box(0);
v_isShared_327_ = v_isSharedCheck_379_;
goto v_resetjp_325_;
}
v_resetjp_325_:
{
lean_object* v_str_328_; lean_object* v_startInclusive_329_; lean_object* v_endExclusive_330_; lean_object* v_str_331_; lean_object* v_startInclusive_332_; lean_object* v_endExclusive_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; uint8_t v___x_338_; 
v_str_328_ = lean_ctor_get(v_needle_321_, 0);
v_startInclusive_329_ = lean_ctor_get(v_needle_321_, 1);
v_endExclusive_330_ = lean_ctor_get(v_needle_321_, 2);
v_str_331_ = lean_ctor_get(v_s_297_, 0);
v_startInclusive_332_ = lean_ctor_get(v_s_297_, 1);
v_endExclusive_333_ = lean_ctor_get(v_s_297_, 2);
v___x_334_ = lean_nat_sub(v_stackPos_323_, v_needlePos_324_);
v___x_335_ = lean_nat_sub(v_endExclusive_330_, v_startInclusive_329_);
v___x_336_ = lean_nat_add(v___x_334_, v___x_335_);
v___x_337_ = lean_nat_sub(v_endExclusive_333_, v_startInclusive_332_);
v___x_338_ = lean_nat_dec_le(v___x_336_, v___x_337_);
lean_dec(v___x_336_);
if (v___x_338_ == 0)
{
lean_object* v___x_339_; lean_object* v___x_340_; uint8_t v___x_341_; 
lean_dec(v___x_335_);
lean_del_object(v___x_326_);
lean_dec(v_needlePos_324_);
lean_dec(v_stackPos_323_);
lean_dec_ref(v_table_322_);
lean_dec_ref(v_needle_321_);
v___x_339_ = lean_unsigned_to_nat(1u);
v___x_340_ = lean_nat_add(v___x_334_, v___x_339_);
lean_dec(v___x_334_);
v___x_341_ = lean_nat_dec_le(v___x_340_, v___x_337_);
lean_dec(v___x_337_);
lean_dec(v___x_340_);
if (v___x_341_ == 0)
{
return v_b_299_;
}
else
{
lean_object* v___x_342_; 
v___x_342_ = lean_box(3);
v_a_298_ = v___x_342_;
v_b_299_ = v___x_300_;
goto _start;
}
}
else
{
lean_object* v___x_344_; uint8_t v_stackByte_345_; lean_object* v___x_346_; uint8_t v_patByte_347_; uint8_t v___x_348_; 
lean_dec(v___x_337_);
lean_dec(v___x_334_);
v___x_344_ = lean_nat_add(v_startInclusive_332_, v_stackPos_323_);
v_stackByte_345_ = lean_string_get_byte_fast(v_str_331_, v___x_344_);
v___x_346_ = lean_nat_add(v_startInclusive_329_, v_needlePos_324_);
v_patByte_347_ = lean_string_get_byte_fast(v_str_328_, v___x_346_);
v___x_348_ = lean_uint8_dec_eq(v_stackByte_345_, v_patByte_347_);
if (v___x_348_ == 0)
{
lean_object* v___x_349_; uint8_t v_decide_350_; 
lean_dec(v___x_335_);
v___x_349_ = lean_unsigned_to_nat(0u);
v_decide_350_ = lean_nat_dec_eq(v_needlePos_324_, v___x_349_);
if (v_decide_350_ == 0)
{
lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v_newNeedlePos_353_; uint8_t v___x_354_; 
v___x_351_ = lean_unsigned_to_nat(1u);
v___x_352_ = lean_nat_sub(v_needlePos_324_, v___x_351_);
lean_dec(v_needlePos_324_);
v_newNeedlePos_353_ = lean_array_fget_borrowed(v_table_322_, v___x_352_);
lean_dec(v___x_352_);
v___x_354_ = lean_nat_dec_eq(v_newNeedlePos_353_, v___x_349_);
if (v___x_354_ == 0)
{
lean_object* v___x_356_; 
lean_inc(v_newNeedlePos_353_);
if (v_isShared_327_ == 0)
{
lean_ctor_set(v___x_326_, 3, v_newNeedlePos_353_);
v___x_356_ = v___x_326_;
goto v_reusejp_355_;
}
else
{
lean_object* v_reuseFailAlloc_358_; 
v_reuseFailAlloc_358_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_358_, 0, v_needle_321_);
lean_ctor_set(v_reuseFailAlloc_358_, 1, v_table_322_);
lean_ctor_set(v_reuseFailAlloc_358_, 2, v_stackPos_323_);
lean_ctor_set(v_reuseFailAlloc_358_, 3, v_newNeedlePos_353_);
v___x_356_ = v_reuseFailAlloc_358_;
goto v_reusejp_355_;
}
v_reusejp_355_:
{
v_a_298_ = v___x_356_;
v_b_299_ = v___x_300_;
goto _start;
}
}
else
{
lean_object* v_nextStackPos_359_; lean_object* v___x_361_; 
v_nextStackPos_359_ = l_String_Slice_posGE___redArg(v_s_297_, v_stackPos_323_);
if (v_isShared_327_ == 0)
{
lean_ctor_set(v___x_326_, 3, v___x_349_);
lean_ctor_set(v___x_326_, 2, v_nextStackPos_359_);
v___x_361_ = v___x_326_;
goto v_reusejp_360_;
}
else
{
lean_object* v_reuseFailAlloc_363_; 
v_reuseFailAlloc_363_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_363_, 0, v_needle_321_);
lean_ctor_set(v_reuseFailAlloc_363_, 1, v_table_322_);
lean_ctor_set(v_reuseFailAlloc_363_, 2, v_nextStackPos_359_);
lean_ctor_set(v_reuseFailAlloc_363_, 3, v___x_349_);
v___x_361_ = v_reuseFailAlloc_363_;
goto v_reusejp_360_;
}
v_reusejp_360_:
{
v_a_298_ = v___x_361_;
v_b_299_ = v___x_300_;
goto _start;
}
}
}
else
{
lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v_nextStackPos_366_; lean_object* v___x_368_; 
lean_dec(v_needlePos_324_);
v___x_364_ = lean_unsigned_to_nat(1u);
v___x_365_ = lean_nat_add(v_stackPos_323_, v___x_364_);
lean_dec(v_stackPos_323_);
v_nextStackPos_366_ = l_String_Slice_posGE___redArg(v_s_297_, v___x_365_);
if (v_isShared_327_ == 0)
{
lean_ctor_set(v___x_326_, 3, v___x_349_);
lean_ctor_set(v___x_326_, 2, v_nextStackPos_366_);
v___x_368_ = v___x_326_;
goto v_reusejp_367_;
}
else
{
lean_object* v_reuseFailAlloc_370_; 
v_reuseFailAlloc_370_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_370_, 0, v_needle_321_);
lean_ctor_set(v_reuseFailAlloc_370_, 1, v_table_322_);
lean_ctor_set(v_reuseFailAlloc_370_, 2, v_nextStackPos_366_);
lean_ctor_set(v_reuseFailAlloc_370_, 3, v___x_349_);
v___x_368_ = v_reuseFailAlloc_370_;
goto v_reusejp_367_;
}
v_reusejp_367_:
{
v_a_298_ = v___x_368_;
v_b_299_ = v___x_300_;
goto _start;
}
}
}
else
{
lean_object* v___x_371_; lean_object* v_nextNeedlePos_372_; uint8_t v_decide_373_; 
v___x_371_ = lean_unsigned_to_nat(1u);
v_nextNeedlePos_372_ = lean_nat_add(v_needlePos_324_, v___x_371_);
lean_dec(v_needlePos_324_);
v_decide_373_ = lean_nat_dec_eq(v_nextNeedlePos_372_, v___x_335_);
lean_dec(v___x_335_);
if (v_decide_373_ == 0)
{
lean_object* v_nextStackPos_374_; lean_object* v___x_376_; 
v_nextStackPos_374_ = lean_nat_add(v_stackPos_323_, v___x_371_);
lean_dec(v_stackPos_323_);
if (v_isShared_327_ == 0)
{
lean_ctor_set(v___x_326_, 3, v_nextNeedlePos_372_);
lean_ctor_set(v___x_326_, 2, v_nextStackPos_374_);
v___x_376_ = v___x_326_;
goto v_reusejp_375_;
}
else
{
lean_object* v_reuseFailAlloc_378_; 
v_reuseFailAlloc_378_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_378_, 0, v_needle_321_);
lean_ctor_set(v_reuseFailAlloc_378_, 1, v_table_322_);
lean_ctor_set(v_reuseFailAlloc_378_, 2, v_nextStackPos_374_);
lean_ctor_set(v_reuseFailAlloc_378_, 3, v_nextNeedlePos_372_);
v___x_376_ = v_reuseFailAlloc_378_;
goto v_reusejp_375_;
}
v_reusejp_375_:
{
v_a_298_ = v___x_376_;
goto _start;
}
}
else
{
lean_dec(v_nextNeedlePos_372_);
lean_del_object(v___x_326_);
lean_dec(v_stackPos_323_);
lean_dec_ref(v_table_322_);
lean_dec_ref(v_needle_321_);
return v_decide_373_;
}
}
}
}
}
default: 
{
return v_b_299_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2_spec__2___redArg___boxed(lean_object* v_s_380_, lean_object* v_a_381_, lean_object* v_b_382_){
_start:
{
uint8_t v_b_boxed_383_; uint8_t v_res_384_; lean_object* v_r_385_; 
v_b_boxed_383_ = lean_unbox(v_b_382_);
v_res_384_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2_spec__2___redArg(v_s_380_, v_a_381_, v_b_boxed_383_);
lean_dec_ref(v_s_380_);
v_r_385_ = lean_box(v_res_384_);
return v_r_385_;
}
}
static lean_object* _init_l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__1(void){
_start:
{
lean_object* v___x_387_; lean_object* v___x_388_; 
v___x_387_ = ((lean_object*)(l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__0));
v___x_388_ = lean_string_utf8_byte_size(v___x_387_);
return v___x_388_;
}
}
static uint8_t _init_l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__2(void){
_start:
{
lean_object* v___x_389_; lean_object* v___x_390_; uint8_t v___x_391_; 
v___x_389_ = lean_unsigned_to_nat(0u);
v___x_390_ = lean_obj_once(&l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__1, &l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__1_once, _init_l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__1);
v___x_391_ = lean_nat_dec_eq(v___x_390_, v___x_389_);
return v___x_391_;
}
}
static lean_object* _init_l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__3(void){
_start:
{
lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; 
v___x_392_ = lean_obj_once(&l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__1, &l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__1_once, _init_l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__1);
v___x_393_ = lean_unsigned_to_nat(0u);
v___x_394_ = ((lean_object*)(l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__0));
v___x_395_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_395_, 0, v___x_394_);
lean_ctor_set(v___x_395_, 1, v___x_393_);
lean_ctor_set(v___x_395_, 2, v___x_392_);
return v___x_395_;
}
}
static lean_object* _init_l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__4(void){
_start:
{
lean_object* v___x_396_; lean_object* v___x_397_; 
v___x_396_ = lean_obj_once(&l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__3, &l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__3_once, _init_l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__3);
v___x_397_ = l_String_Slice_Pattern_ForwardSliceSearcher_buildTable(v___x_396_);
return v___x_397_;
}
}
static lean_object* _init_l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__5(void){
_start:
{
lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; 
v___x_398_ = lean_unsigned_to_nat(0u);
v___x_399_ = lean_obj_once(&l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__4, &l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__4_once, _init_l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__4);
v___x_400_ = lean_obj_once(&l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__3, &l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__3_once, _init_l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__3);
v___x_401_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v___x_401_, 0, v___x_400_);
lean_ctor_set(v___x_401_, 1, v___x_399_);
lean_ctor_set(v___x_401_, 2, v___x_398_);
lean_ctor_set(v___x_401_, 3, v___x_398_);
return v___x_401_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2(lean_object* v_s_404_){
_start:
{
lean_object* v___y_406_; uint8_t v___x_409_; 
v___x_409_ = lean_uint8_once(&l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__2, &l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__2_once, _init_l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__2);
if (v___x_409_ == 0)
{
lean_object* v___x_410_; 
v___x_410_ = lean_obj_once(&l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__5, &l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__5_once, _init_l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__5);
v___y_406_ = v___x_410_;
goto v___jp_405_;
}
else
{
lean_object* v___x_411_; 
v___x_411_ = ((lean_object*)(l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__6));
v___y_406_ = v___x_411_;
goto v___jp_405_;
}
v___jp_405_:
{
uint8_t v___x_407_; uint8_t v___x_408_; 
v___x_407_ = 0;
lean_inc(v___y_406_);
v___x_408_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2_spec__2___redArg(v_s_404_, v___y_406_, v___x_407_);
return v___x_408_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___boxed(lean_object* v_s_412_){
_start:
{
uint8_t v_res_413_; lean_object* v_r_414_; 
v_res_413_ = l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2(v_s_412_);
lean_dec_ref(v_s_412_);
v_r_414_ = lean_box(v_res_413_);
return v_r_414_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_checkDeprecatedImports_spec__3(lean_object* v_as_415_, size_t v_sz_416_, size_t v_i_417_, lean_object* v_b_418_){
_start:
{
lean_object* v_a_420_; uint8_t v___x_424_; 
v___x_424_ = lean_usize_dec_lt(v_i_417_, v_sz_416_);
if (v___x_424_ == 0)
{
return v_b_418_;
}
else
{
lean_object* v_fst_425_; lean_object* v_snd_426_; lean_object* v___x_428_; uint8_t v_isShared_429_; uint8_t v_isSharedCheck_501_; 
v_fst_425_ = lean_ctor_get(v_b_418_, 0);
v_snd_426_ = lean_ctor_get(v_b_418_, 1);
v_isSharedCheck_501_ = !lean_is_exclusive(v_b_418_);
if (v_isSharedCheck_501_ == 0)
{
v___x_428_ = v_b_418_;
v_isShared_429_ = v_isSharedCheck_501_;
goto v_resetjp_427_;
}
else
{
lean_inc(v_snd_426_);
lean_inc(v_fst_425_);
lean_dec(v_b_418_);
v___x_428_ = lean_box(0);
v_isShared_429_ = v_isSharedCheck_501_;
goto v_resetjp_427_;
}
v_resetjp_427_:
{
lean_object* v___x_430_; lean_object* v_a_431_; lean_object* v___y_433_; lean_object* v_ignoreDeprecatedImports_434_; uint8_t v___x_446_; 
v___x_430_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__4));
v_a_431_ = lean_array_uget_borrowed(v_as_415_, v_i_417_);
lean_inc(v_a_431_);
v___x_446_ = l_Lean_Syntax_isOfKind(v_a_431_, v___x_430_);
if (v___x_446_ == 0)
{
lean_object* v___x_447_; 
lean_del_object(v___x_428_);
v___x_447_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_447_, 0, v_fst_425_);
lean_ctor_set(v___x_447_, 1, v_snd_426_);
v_a_420_ = v___x_447_;
goto v___jp_419_;
}
else
{
lean_object* v___x_448_; lean_object* v___x_473_; lean_object* v___x_493_; uint8_t v___x_494_; 
v___x_448_ = lean_unsigned_to_nat(0u);
v___x_473_ = lean_unsigned_to_nat(1u);
v___x_493_ = l_Lean_Syntax_getArg(v_a_431_, v___x_448_);
v___x_494_ = l_Lean_Syntax_isNone(v___x_493_);
if (v___x_494_ == 0)
{
uint8_t v___x_495_; 
lean_inc(v___x_493_);
v___x_495_ = l_Lean_Syntax_matchesNull(v___x_493_, v___x_473_);
if (v___x_495_ == 0)
{
lean_object* v___x_496_; 
lean_dec(v___x_493_);
lean_del_object(v___x_428_);
v___x_496_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_496_, 0, v_fst_425_);
lean_ctor_set(v___x_496_, 1, v_snd_426_);
v_a_420_ = v___x_496_;
goto v___jp_419_;
}
else
{
lean_object* v___x_497_; lean_object* v___x_498_; uint8_t v___x_499_; 
v___x_497_ = l_Lean_Syntax_getArg(v___x_493_, v___x_448_);
lean_dec(v___x_493_);
v___x_498_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__14));
v___x_499_ = l_Lean_Syntax_isOfKind(v___x_497_, v___x_498_);
if (v___x_499_ == 0)
{
lean_object* v___x_500_; 
lean_del_object(v___x_428_);
v___x_500_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_500_, 0, v_fst_425_);
lean_ctor_set(v___x_500_, 1, v_snd_426_);
v_a_420_ = v___x_500_;
goto v___jp_419_;
}
else
{
goto v___jp_484_;
}
}
}
else
{
lean_dec(v___x_493_);
goto v___jp_484_;
}
v___jp_449_:
{
lean_object* v___x_450_; lean_object* v___x_451_; uint8_t v___x_452_; 
v___x_450_ = lean_unsigned_to_nat(5u);
v___x_451_ = l_Lean_Syntax_getArg(v_a_431_, v___x_450_);
v___x_452_ = l_Lean_Syntax_matchesNull(v___x_451_, v___x_448_);
if (v___x_452_ == 0)
{
lean_object* v___x_453_; 
lean_del_object(v___x_428_);
v___x_453_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_453_, 0, v_fst_425_);
lean_ctor_set(v___x_453_, 1, v_snd_426_);
v_a_420_ = v___x_453_;
goto v___jp_419_;
}
else
{
lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; 
v___x_454_ = lean_unsigned_to_nat(4u);
v___x_455_ = l_Lean_Syntax_getArg(v_a_431_, v___x_454_);
v___x_456_ = l_Lean_Syntax_getTrailing_x3f(v_a_431_);
if (lean_obj_tag(v___x_456_) == 0)
{
v___y_433_ = v___x_455_;
v_ignoreDeprecatedImports_434_ = v_fst_425_;
goto v___jp_432_;
}
else
{
lean_object* v_val_457_; lean_object* v_str_458_; lean_object* v_startPos_459_; lean_object* v_stopPos_460_; lean_object* v___x_462_; uint8_t v_isShared_463_; uint8_t v_isSharedCheck_472_; 
v_val_457_ = lean_ctor_get(v___x_456_, 0);
lean_inc(v_val_457_);
lean_dec_ref_known(v___x_456_, 1);
v_str_458_ = lean_ctor_get(v_val_457_, 0);
v_startPos_459_ = lean_ctor_get(v_val_457_, 1);
v_stopPos_460_ = lean_ctor_get(v_val_457_, 2);
v_isSharedCheck_472_ = !lean_is_exclusive(v_val_457_);
if (v_isSharedCheck_472_ == 0)
{
v___x_462_ = v_val_457_;
v_isShared_463_ = v_isSharedCheck_472_;
goto v_resetjp_461_;
}
else
{
lean_inc(v_stopPos_460_);
lean_inc(v_startPos_459_);
lean_inc(v_str_458_);
lean_dec(v_val_457_);
v___x_462_ = lean_box(0);
v_isShared_463_ = v_isSharedCheck_472_;
goto v_resetjp_461_;
}
v_resetjp_461_:
{
lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_467_; 
v___x_464_ = lean_string_utf8_extract(v_str_458_, v_startPos_459_, v_stopPos_460_);
lean_dec(v_stopPos_460_);
lean_dec(v_startPos_459_);
lean_dec_ref(v_str_458_);
v___x_465_ = lean_string_utf8_byte_size(v___x_464_);
if (v_isShared_463_ == 0)
{
lean_ctor_set(v___x_462_, 2, v___x_465_);
lean_ctor_set(v___x_462_, 1, v___x_448_);
lean_ctor_set(v___x_462_, 0, v___x_464_);
v___x_467_ = v___x_462_;
goto v_reusejp_466_;
}
else
{
lean_object* v_reuseFailAlloc_471_; 
v_reuseFailAlloc_471_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_471_, 0, v___x_464_);
lean_ctor_set(v_reuseFailAlloc_471_, 1, v___x_448_);
lean_ctor_set(v_reuseFailAlloc_471_, 2, v___x_465_);
v___x_467_ = v_reuseFailAlloc_471_;
goto v_reusejp_466_;
}
v_reusejp_466_:
{
uint8_t v___x_468_; 
v___x_468_ = l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2(v___x_467_);
lean_dec_ref(v___x_467_);
if (v___x_468_ == 0)
{
v___y_433_ = v___x_455_;
v_ignoreDeprecatedImports_434_ = v_fst_425_;
goto v___jp_432_;
}
else
{
lean_object* v___x_469_; lean_object* v___x_470_; 
v___x_469_ = l_Lean_TSyntax_getId(v___x_455_);
v___x_470_ = l_Lean_NameSet_insert(v_fst_425_, v___x_469_);
v___y_433_ = v___x_455_;
v_ignoreDeprecatedImports_434_ = v___x_470_;
goto v___jp_432_;
}
}
}
}
}
}
v___jp_474_:
{
lean_object* v___x_475_; lean_object* v___x_476_; uint8_t v___x_477_; 
v___x_475_ = lean_unsigned_to_nat(3u);
v___x_476_ = l_Lean_Syntax_getArg(v_a_431_, v___x_475_);
v___x_477_ = l_Lean_Syntax_isNone(v___x_476_);
if (v___x_477_ == 0)
{
uint8_t v___x_478_; 
lean_inc(v___x_476_);
v___x_478_ = l_Lean_Syntax_matchesNull(v___x_476_, v___x_473_);
if (v___x_478_ == 0)
{
lean_object* v___x_479_; 
lean_dec(v___x_476_);
lean_del_object(v___x_428_);
v___x_479_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_479_, 0, v_fst_425_);
lean_ctor_set(v___x_479_, 1, v_snd_426_);
v_a_420_ = v___x_479_;
goto v___jp_419_;
}
else
{
lean_object* v___x_480_; lean_object* v___x_481_; uint8_t v___x_482_; 
v___x_480_ = l_Lean_Syntax_getArg(v___x_476_, v___x_448_);
lean_dec(v___x_476_);
v___x_481_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__10));
v___x_482_ = l_Lean_Syntax_isOfKind(v___x_480_, v___x_481_);
if (v___x_482_ == 0)
{
lean_object* v___x_483_; 
lean_del_object(v___x_428_);
v___x_483_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_483_, 0, v_fst_425_);
lean_ctor_set(v___x_483_, 1, v_snd_426_);
v_a_420_ = v___x_483_;
goto v___jp_419_;
}
else
{
goto v___jp_449_;
}
}
}
else
{
lean_dec(v___x_476_);
goto v___jp_449_;
}
}
v___jp_484_:
{
lean_object* v___x_485_; uint8_t v___x_486_; 
v___x_485_ = l_Lean_Syntax_getArg(v_a_431_, v___x_473_);
v___x_486_ = l_Lean_Syntax_isNone(v___x_485_);
if (v___x_486_ == 0)
{
uint8_t v___x_487_; 
lean_inc(v___x_485_);
v___x_487_ = l_Lean_Syntax_matchesNull(v___x_485_, v___x_473_);
if (v___x_487_ == 0)
{
lean_object* v___x_488_; 
lean_dec(v___x_485_);
lean_del_object(v___x_428_);
v___x_488_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_488_, 0, v_fst_425_);
lean_ctor_set(v___x_488_, 1, v_snd_426_);
v_a_420_ = v___x_488_;
goto v___jp_419_;
}
else
{
lean_object* v___x_489_; lean_object* v___x_490_; uint8_t v___x_491_; 
v___x_489_ = l_Lean_Syntax_getArg(v___x_485_, v___x_448_);
lean_dec(v___x_485_);
v___x_490_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__12));
v___x_491_ = l_Lean_Syntax_isOfKind(v___x_489_, v___x_490_);
if (v___x_491_ == 0)
{
lean_object* v___x_492_; 
lean_del_object(v___x_428_);
v___x_492_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_492_, 0, v_fst_425_);
lean_ctor_set(v___x_492_, 1, v_snd_426_);
v_a_420_ = v___x_492_;
goto v___jp_419_;
}
else
{
goto v___jp_474_;
}
}
}
else
{
lean_dec(v___x_485_);
goto v___jp_474_;
}
}
}
v___jp_432_:
{
uint8_t v___x_435_; lean_object* v___x_436_; 
v___x_435_ = 0;
v___x_436_ = l_Lean_Syntax_getPos_x3f(v_a_431_, v___x_435_);
if (lean_obj_tag(v___x_436_) == 1)
{
lean_object* v_val_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_441_; 
v_val_437_ = lean_ctor_get(v___x_436_, 0);
lean_inc(v_val_437_);
lean_dec_ref_known(v___x_436_, 1);
v___x_438_ = l_Lean_TSyntax_getId(v___y_433_);
lean_dec(v___y_433_);
v___x_439_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v___x_438_, v_val_437_, v_snd_426_);
if (v_isShared_429_ == 0)
{
lean_ctor_set(v___x_428_, 1, v___x_439_);
lean_ctor_set(v___x_428_, 0, v_ignoreDeprecatedImports_434_);
v___x_441_ = v___x_428_;
goto v_reusejp_440_;
}
else
{
lean_object* v_reuseFailAlloc_442_; 
v_reuseFailAlloc_442_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_442_, 0, v_ignoreDeprecatedImports_434_);
lean_ctor_set(v_reuseFailAlloc_442_, 1, v___x_439_);
v___x_441_ = v_reuseFailAlloc_442_;
goto v_reusejp_440_;
}
v_reusejp_440_:
{
v_a_420_ = v___x_441_;
goto v___jp_419_;
}
}
else
{
lean_object* v___x_444_; 
lean_dec(v___x_436_);
lean_dec(v___y_433_);
if (v_isShared_429_ == 0)
{
lean_ctor_set(v___x_428_, 0, v_ignoreDeprecatedImports_434_);
v___x_444_ = v___x_428_;
goto v_reusejp_443_;
}
else
{
lean_object* v_reuseFailAlloc_445_; 
v_reuseFailAlloc_445_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_445_, 0, v_ignoreDeprecatedImports_434_);
lean_ctor_set(v_reuseFailAlloc_445_, 1, v_snd_426_);
v___x_444_ = v_reuseFailAlloc_445_;
goto v_reusejp_443_;
}
v_reusejp_443_:
{
v_a_420_ = v___x_444_;
goto v___jp_419_;
}
}
}
}
}
v___jp_419_:
{
size_t v___x_421_; size_t v___x_422_; 
v___x_421_ = ((size_t)1ULL);
v___x_422_ = lean_usize_add(v_i_417_, v___x_421_);
v_i_417_ = v___x_422_;
v_b_418_ = v_a_420_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_checkDeprecatedImports_spec__3___boxed(lean_object* v_as_502_, lean_object* v_sz_503_, lean_object* v_i_504_, lean_object* v_b_505_){
_start:
{
size_t v_sz_boxed_506_; size_t v_i_boxed_507_; lean_object* v_res_508_; 
v_sz_boxed_506_ = lean_unbox_usize(v_sz_503_);
lean_dec(v_sz_503_);
v_i_boxed_507_ = lean_unbox_usize(v_i_504_);
lean_dec(v_i_504_);
v_res_508_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_checkDeprecatedImports_spec__3(v_as_502_, v_sz_boxed_506_, v_i_boxed_507_, v_b_505_);
lean_dec_ref(v_as_502_);
return v_res_508_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_checkDeprecatedImports_spec__4_spec__5(lean_object* v_o_512_, lean_object* v_k_513_, uint8_t v_v_514_){
_start:
{
lean_object* v_map_515_; uint8_t v_hasTrace_516_; lean_object* v___x_518_; uint8_t v_isShared_519_; uint8_t v_isSharedCheck_530_; 
v_map_515_ = lean_ctor_get(v_o_512_, 0);
v_hasTrace_516_ = lean_ctor_get_uint8(v_o_512_, sizeof(void*)*1);
v_isSharedCheck_530_ = !lean_is_exclusive(v_o_512_);
if (v_isSharedCheck_530_ == 0)
{
v___x_518_ = v_o_512_;
v_isShared_519_ = v_isSharedCheck_530_;
goto v_resetjp_517_;
}
else
{
lean_inc(v_map_515_);
lean_dec(v_o_512_);
v___x_518_ = lean_box(0);
v_isShared_519_ = v_isSharedCheck_530_;
goto v_resetjp_517_;
}
v_resetjp_517_:
{
lean_object* v___x_520_; lean_object* v___x_521_; 
v___x_520_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_520_, 0, v_v_514_);
lean_inc(v_k_513_);
v___x_521_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_513_, v___x_520_, v_map_515_);
if (v_hasTrace_516_ == 0)
{
lean_object* v___x_522_; uint8_t v___x_523_; lean_object* v___x_525_; 
v___x_522_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_checkDeprecatedImports_spec__4_spec__5___closed__1));
v___x_523_ = l_Lean_Name_isPrefixOf(v___x_522_, v_k_513_);
lean_dec(v_k_513_);
if (v_isShared_519_ == 0)
{
lean_ctor_set(v___x_518_, 0, v___x_521_);
v___x_525_ = v___x_518_;
goto v_reusejp_524_;
}
else
{
lean_object* v_reuseFailAlloc_526_; 
v_reuseFailAlloc_526_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_526_, 0, v___x_521_);
v___x_525_ = v_reuseFailAlloc_526_;
goto v_reusejp_524_;
}
v_reusejp_524_:
{
lean_ctor_set_uint8(v___x_525_, sizeof(void*)*1, v___x_523_);
return v___x_525_;
}
}
else
{
lean_object* v___x_528_; 
lean_dec(v_k_513_);
if (v_isShared_519_ == 0)
{
lean_ctor_set(v___x_518_, 0, v___x_521_);
v___x_528_ = v___x_518_;
goto v_reusejp_527_;
}
else
{
lean_object* v_reuseFailAlloc_529_; 
v_reuseFailAlloc_529_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_529_, 0, v___x_521_);
lean_ctor_set_uint8(v_reuseFailAlloc_529_, sizeof(void*)*1, v_hasTrace_516_);
v___x_528_ = v_reuseFailAlloc_529_;
goto v_reusejp_527_;
}
v_reusejp_527_:
{
return v___x_528_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_checkDeprecatedImports_spec__4_spec__5___boxed(lean_object* v_o_531_, lean_object* v_k_532_, lean_object* v_v_533_){
_start:
{
uint8_t v_v_boxed_534_; lean_object* v_res_535_; 
v_v_boxed_534_ = lean_unbox(v_v_533_);
v_res_535_ = l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_checkDeprecatedImports_spec__4_spec__5(v_o_531_, v_k_532_, v_v_boxed_534_);
return v_res_535_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Elab_checkDeprecatedImports_spec__4(lean_object* v_opts_536_, lean_object* v_opt_537_, uint8_t v_val_538_){
_start:
{
lean_object* v_name_539_; lean_object* v___x_540_; 
v_name_539_ = lean_ctor_get(v_opt_537_, 0);
lean_inc(v_name_539_);
lean_dec_ref(v_opt_537_);
v___x_540_ = l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_checkDeprecatedImports_spec__4_spec__5(v_opts_536_, v_name_539_, v_val_538_);
return v___x_540_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Elab_checkDeprecatedImports_spec__4___boxed(lean_object* v_opts_541_, lean_object* v_opt_542_, lean_object* v_val_543_){
_start:
{
uint8_t v_val_boxed_544_; lean_object* v_res_545_; 
v_val_boxed_544_ = lean_unbox(v_val_543_);
v_res_545_ = l_Lean_Option_set___at___00Lean_Elab_checkDeprecatedImports_spec__4(v_opts_541_, v_opt_542_, v_val_boxed_544_);
return v_res_545_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_checkDeprecatedImports_spec__1(lean_object* v_ignoreDeprecatedImports_551_, lean_object* v_env_552_, lean_object* v_inputCtx_553_, lean_object* v_importPositions_554_, lean_object* v_startPos_555_, lean_object* v_as_556_, size_t v_i_557_, size_t v_stop_558_, lean_object* v_b_559_){
_start:
{
lean_object* v___y_561_; uint8_t v___x_565_; 
v___x_565_ = lean_usize_dec_eq(v_i_557_, v_stop_558_);
if (v___x_565_ == 0)
{
lean_object* v___x_566_; lean_object* v_module_567_; uint8_t v___x_568_; 
v___x_566_ = lean_array_uget_borrowed(v_as_556_, v_i_557_);
v_module_567_ = lean_ctor_get(v___x_566_, 0);
v___x_568_ = l_Lean_NameSet_contains(v_ignoreDeprecatedImports_551_, v_module_567_);
if (v___x_568_ == 0)
{
lean_object* v___x_569_; 
v___x_569_ = l_Lean_Environment_getModuleIdx_x3f(v_env_552_, v_module_567_);
if (lean_obj_tag(v___x_569_) == 0)
{
v___y_561_ = v_b_559_;
goto v___jp_560_;
}
else
{
lean_object* v_val_570_; lean_object* v___x_571_; 
v_val_570_ = lean_ctor_get(v___x_569_, 0);
lean_inc(v_val_570_);
lean_dec_ref_known(v___x_569_, 1);
v___x_571_ = l_Lean_Environment_getDeprecatedModuleByIdx_x3f(v_env_552_, v_val_570_);
if (lean_obj_tag(v___x_571_) == 0)
{
lean_dec(v_val_570_);
v___y_561_ = v_b_559_;
goto v___jp_560_;
}
else
{
lean_object* v_val_572_; lean_object* v___x_574_; uint8_t v_isShared_575_; uint8_t v_isSharedCheck_595_; 
v_val_572_ = lean_ctor_get(v___x_571_, 0);
v_isSharedCheck_595_ = !lean_is_exclusive(v___x_571_);
if (v_isSharedCheck_595_ == 0)
{
v___x_574_ = v___x_571_;
v_isShared_575_ = v_isSharedCheck_595_;
goto v_resetjp_573_;
}
else
{
lean_inc(v_val_572_);
lean_dec(v___x_571_);
v___x_574_ = lean_box(0);
v_isShared_575_ = v_isSharedCheck_595_;
goto v_resetjp_573_;
}
v_resetjp_573_:
{
lean_object* v___y_577_; lean_object* v___x_593_; 
v___x_593_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_importPositions_554_, v_module_567_);
if (lean_obj_tag(v___x_593_) == 0)
{
lean_inc(v_startPos_555_);
v___y_577_ = v_startPos_555_;
goto v___jp_576_;
}
else
{
lean_object* v_val_594_; 
v_val_594_ = lean_ctor_get(v___x_593_, 0);
lean_inc(v_val_594_);
lean_dec_ref_known(v___x_593_, 1);
v___y_577_ = v_val_594_;
goto v___jp_576_;
}
v___jp_576_:
{
lean_object* v_fileName_578_; lean_object* v_fileMap_579_; lean_object* v___x_580_; lean_object* v___x_581_; uint8_t v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_587_; 
v_fileName_578_ = lean_ctor_get(v_inputCtx_553_, 1);
v_fileMap_579_ = lean_ctor_get(v_inputCtx_553_, 2);
lean_inc_ref(v_fileMap_579_);
v___x_580_ = l_Lean_FileMap_toPosition(v_fileMap_579_, v___y_577_);
lean_dec(v___y_577_);
v___x_581_ = lean_box(0);
v___x_582_ = 1;
v___x_583_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_checkDeprecatedImports_spec__1___closed__0));
v___x_584_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_checkDeprecatedImports_spec__1___closed__2));
lean_inc(v_module_567_);
v___x_585_ = l_Lean_formatDeprecatedModuleWarning(v_env_552_, v_val_570_, v_module_567_, v_val_572_);
lean_dec(v_val_570_);
if (v_isShared_575_ == 0)
{
lean_ctor_set_tag(v___x_574_, 3);
lean_ctor_set(v___x_574_, 0, v___x_585_);
v___x_587_ = v___x_574_;
goto v_reusejp_586_;
}
else
{
lean_object* v_reuseFailAlloc_592_; 
v_reuseFailAlloc_592_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_592_, 0, v___x_585_);
v___x_587_ = v_reuseFailAlloc_592_;
goto v_reusejp_586_;
}
v_reusejp_586_:
{
lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; 
v___x_588_ = l_Lean_MessageData_ofFormat(v___x_587_);
v___x_589_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_589_, 0, v___x_584_);
lean_ctor_set(v___x_589_, 1, v___x_588_);
lean_inc_ref(v_fileName_578_);
v___x_590_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_590_, 0, v_fileName_578_);
lean_ctor_set(v___x_590_, 1, v___x_580_);
lean_ctor_set(v___x_590_, 2, v___x_581_);
lean_ctor_set(v___x_590_, 3, v___x_583_);
lean_ctor_set(v___x_590_, 4, v___x_589_);
lean_ctor_set_uint8(v___x_590_, sizeof(void*)*5, v___x_568_);
lean_ctor_set_uint8(v___x_590_, sizeof(void*)*5 + 1, v___x_582_);
lean_ctor_set_uint8(v___x_590_, sizeof(void*)*5 + 2, v___x_568_);
v___x_591_ = l_Lean_MessageLog_add(v___x_590_, v_b_559_);
v___y_561_ = v___x_591_;
goto v___jp_560_;
}
}
}
}
}
}
else
{
v___y_561_ = v_b_559_;
goto v___jp_560_;
}
}
else
{
lean_dec(v_startPos_555_);
lean_dec_ref(v_inputCtx_553_);
return v_b_559_;
}
v___jp_560_:
{
size_t v___x_562_; size_t v___x_563_; 
v___x_562_ = ((size_t)1ULL);
v___x_563_ = lean_usize_add(v_i_557_, v___x_562_);
v_i_557_ = v___x_563_;
v_b_559_ = v___y_561_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_checkDeprecatedImports_spec__1___boxed(lean_object* v_ignoreDeprecatedImports_596_, lean_object* v_env_597_, lean_object* v_inputCtx_598_, lean_object* v_importPositions_599_, lean_object* v_startPos_600_, lean_object* v_as_601_, lean_object* v_i_602_, lean_object* v_stop_603_, lean_object* v_b_604_){
_start:
{
size_t v_i_boxed_605_; size_t v_stop_boxed_606_; lean_object* v_res_607_; 
v_i_boxed_605_ = lean_unbox_usize(v_i_602_);
lean_dec(v_i_602_);
v_stop_boxed_606_ = lean_unbox_usize(v_stop_603_);
lean_dec(v_stop_603_);
v_res_607_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_checkDeprecatedImports_spec__1(v_ignoreDeprecatedImports_596_, v_env_597_, v_inputCtx_598_, v_importPositions_599_, v_startPos_600_, v_as_601_, v_i_boxed_605_, v_stop_boxed_606_, v_b_604_);
lean_dec_ref(v_as_601_);
lean_dec(v_importPositions_599_);
lean_dec_ref(v_env_597_);
lean_dec(v_ignoreDeprecatedImports_596_);
return v_res_607_;
}
}
static lean_object* _init_l_Lean_Elab_checkDeprecatedImports___closed__0(void){
_start:
{
lean_object* v_importPositions_608_; lean_object* v_ignoreDeprecatedImports_609_; lean_object* v___x_610_; 
v_importPositions_608_ = lean_box(1);
v_ignoreDeprecatedImports_609_ = l_Lean_NameSet_empty;
v___x_610_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_610_, 0, v_ignoreDeprecatedImports_609_);
lean_ctor_set(v___x_610_, 1, v_importPositions_608_);
return v___x_610_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkDeprecatedImports(lean_object* v_env_611_, lean_object* v_imports_612_, lean_object* v_opts_613_, lean_object* v_inputCtx_614_, lean_object* v_startPos_615_, lean_object* v_messages_616_, lean_object* v_headerStx_x3f_617_, lean_object* v_origHeaderStx_x3f_618_){
_start:
{
lean_object* v_opts_620_; lean_object* v_ignoreDeprecatedImports_621_; lean_object* v_importPositions_622_; lean_object* v_ignoreDeprecatedImports_635_; lean_object* v_importPositions_636_; lean_object* v___y_638_; lean_object* v_opts_639_; lean_object* v___y_647_; lean_object* v___y_648_; lean_object* v___y_649_; lean_object* v___y_674_; lean_object* v___y_675_; lean_object* v___y_676_; lean_object* v___y_677_; lean_object* v___y_678_; lean_object* v_moduleTk_679_; lean_object* v_val_689_; 
v_ignoreDeprecatedImports_635_ = l_Lean_NameSet_empty;
v_importPositions_636_ = lean_box(1);
if (lean_obj_tag(v_origHeaderStx_x3f_618_) == 0)
{
if (lean_obj_tag(v_headerStx_x3f_617_) == 1)
{
lean_object* v_val_706_; 
v_val_706_ = lean_ctor_get(v_headerStx_x3f_617_, 0);
lean_inc(v_val_706_);
lean_dec_ref_known(v_headerStx_x3f_617_, 1);
v_val_689_ = v_val_706_;
goto v___jp_688_;
}
else
{
lean_dec(v_headerStx_x3f_617_);
v_opts_620_ = v_opts_613_;
v_ignoreDeprecatedImports_621_ = v_ignoreDeprecatedImports_635_;
v_importPositions_622_ = v_importPositions_636_;
goto v___jp_619_;
}
}
else
{
lean_object* v_val_707_; 
lean_dec(v_headerStx_x3f_617_);
v_val_707_ = lean_ctor_get(v_origHeaderStx_x3f_618_, 0);
lean_inc(v_val_707_);
lean_dec_ref_known(v_origHeaderStx_x3f_618_, 1);
v_val_689_ = v_val_707_;
goto v___jp_688_;
}
v___jp_619_:
{
lean_object* v___x_623_; uint8_t v___x_624_; 
v___x_623_ = l_Lean_linter_deprecated_module;
v___x_624_ = l_Lean_Option_get___at___00Lean_Elab_checkDeprecatedImports_spec__0(v_opts_620_, v___x_623_);
lean_dec_ref(v_opts_620_);
if (v___x_624_ == 0)
{
lean_dec(v_importPositions_622_);
lean_dec(v_ignoreDeprecatedImports_621_);
lean_dec(v_startPos_615_);
lean_dec_ref(v_inputCtx_614_);
return v_messages_616_;
}
else
{
lean_object* v___x_625_; lean_object* v___x_626_; uint8_t v___x_627_; 
v___x_625_ = lean_unsigned_to_nat(0u);
v___x_626_ = lean_array_get_size(v_imports_612_);
v___x_627_ = lean_nat_dec_lt(v___x_625_, v___x_626_);
if (v___x_627_ == 0)
{
lean_dec(v_importPositions_622_);
lean_dec(v_ignoreDeprecatedImports_621_);
lean_dec(v_startPos_615_);
lean_dec_ref(v_inputCtx_614_);
return v_messages_616_;
}
else
{
uint8_t v___x_628_; 
v___x_628_ = lean_nat_dec_le(v___x_626_, v___x_626_);
if (v___x_628_ == 0)
{
if (v___x_627_ == 0)
{
lean_dec(v_importPositions_622_);
lean_dec(v_ignoreDeprecatedImports_621_);
lean_dec(v_startPos_615_);
lean_dec_ref(v_inputCtx_614_);
return v_messages_616_;
}
else
{
size_t v___x_629_; size_t v___x_630_; lean_object* v___x_631_; 
v___x_629_ = ((size_t)0ULL);
v___x_630_ = lean_usize_of_nat(v___x_626_);
v___x_631_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_checkDeprecatedImports_spec__1(v_ignoreDeprecatedImports_621_, v_env_611_, v_inputCtx_614_, v_importPositions_622_, v_startPos_615_, v_imports_612_, v___x_629_, v___x_630_, v_messages_616_);
lean_dec(v_importPositions_622_);
lean_dec(v_ignoreDeprecatedImports_621_);
return v___x_631_;
}
}
else
{
size_t v___x_632_; size_t v___x_633_; lean_object* v___x_634_; 
v___x_632_ = ((size_t)0ULL);
v___x_633_ = lean_usize_of_nat(v___x_626_);
v___x_634_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_checkDeprecatedImports_spec__1(v_ignoreDeprecatedImports_621_, v_env_611_, v_inputCtx_614_, v_importPositions_622_, v_startPos_615_, v_imports_612_, v___x_632_, v___x_633_, v_messages_616_);
lean_dec(v_importPositions_622_);
lean_dec(v_ignoreDeprecatedImports_621_);
return v___x_634_;
}
}
}
}
v___jp_637_:
{
lean_object* v___x_640_; size_t v_sz_641_; size_t v___x_642_; lean_object* v___x_643_; lean_object* v_fst_644_; lean_object* v_snd_645_; 
v___x_640_ = lean_obj_once(&l_Lean_Elab_checkDeprecatedImports___closed__0, &l_Lean_Elab_checkDeprecatedImports___closed__0_once, _init_l_Lean_Elab_checkDeprecatedImports___closed__0);
v_sz_641_ = lean_array_size(v___y_638_);
v___x_642_ = ((size_t)0ULL);
v___x_643_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_checkDeprecatedImports_spec__3(v___y_638_, v_sz_641_, v___x_642_, v___x_640_);
lean_dec(v___y_638_);
v_fst_644_ = lean_ctor_get(v___x_643_, 0);
lean_inc(v_fst_644_);
v_snd_645_ = lean_ctor_get(v___x_643_, 1);
lean_inc(v_snd_645_);
lean_dec_ref(v___x_643_);
v_opts_620_ = v_opts_639_;
v_ignoreDeprecatedImports_621_ = v_fst_644_;
v_importPositions_622_ = v_snd_645_;
goto v___jp_619_;
}
v___jp_646_:
{
lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v_importsStx_653_; 
v___x_650_ = lean_unsigned_to_nat(2u);
v___x_651_ = l_Lean_Syntax_getArg(v___y_647_, v___x_650_);
lean_dec(v___y_647_);
v___x_652_ = l_Lean_Syntax_getArgs(v___x_651_);
lean_dec(v___x_651_);
v_importsStx_653_ = l_unsafeCast___redArg(v___x_652_);
lean_dec_ref(v___x_652_);
if (lean_obj_tag(v___y_648_) == 0)
{
lean_dec(v___y_649_);
v___y_638_ = v_importsStx_653_;
v_opts_639_ = v_opts_613_;
goto v___jp_637_;
}
else
{
lean_object* v_val_654_; lean_object* v___x_655_; 
v_val_654_ = lean_ctor_get(v___y_648_, 0);
lean_inc(v_val_654_);
lean_dec_ref_known(v___y_648_, 1);
v___x_655_ = l_Lean_Syntax_getTrailing_x3f(v_val_654_);
lean_dec(v_val_654_);
if (lean_obj_tag(v___x_655_) == 0)
{
lean_dec(v___y_649_);
v___y_638_ = v_importsStx_653_;
v_opts_639_ = v_opts_613_;
goto v___jp_637_;
}
else
{
lean_object* v_val_656_; lean_object* v_str_657_; lean_object* v_startPos_658_; lean_object* v_stopPos_659_; lean_object* v___x_661_; uint8_t v_isShared_662_; uint8_t v_isSharedCheck_672_; 
v_val_656_ = lean_ctor_get(v___x_655_, 0);
lean_inc(v_val_656_);
lean_dec_ref_known(v___x_655_, 1);
v_str_657_ = lean_ctor_get(v_val_656_, 0);
v_startPos_658_ = lean_ctor_get(v_val_656_, 1);
v_stopPos_659_ = lean_ctor_get(v_val_656_, 2);
v_isSharedCheck_672_ = !lean_is_exclusive(v_val_656_);
if (v_isSharedCheck_672_ == 0)
{
v___x_661_ = v_val_656_;
v_isShared_662_ = v_isSharedCheck_672_;
goto v_resetjp_660_;
}
else
{
lean_inc(v_stopPos_659_);
lean_inc(v_startPos_658_);
lean_inc(v_str_657_);
lean_dec(v_val_656_);
v___x_661_ = lean_box(0);
v_isShared_662_ = v_isSharedCheck_672_;
goto v_resetjp_660_;
}
v_resetjp_660_:
{
lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_666_; 
v___x_663_ = lean_string_utf8_extract(v_str_657_, v_startPos_658_, v_stopPos_659_);
lean_dec(v_stopPos_659_);
lean_dec(v_startPos_658_);
lean_dec_ref(v_str_657_);
v___x_664_ = lean_string_utf8_byte_size(v___x_663_);
if (v_isShared_662_ == 0)
{
lean_ctor_set(v___x_661_, 2, v___x_664_);
lean_ctor_set(v___x_661_, 1, v___y_649_);
lean_ctor_set(v___x_661_, 0, v___x_663_);
v___x_666_ = v___x_661_;
goto v_reusejp_665_;
}
else
{
lean_object* v_reuseFailAlloc_671_; 
v_reuseFailAlloc_671_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_671_, 0, v___x_663_);
lean_ctor_set(v_reuseFailAlloc_671_, 1, v___y_649_);
lean_ctor_set(v_reuseFailAlloc_671_, 2, v___x_664_);
v___x_666_ = v_reuseFailAlloc_671_;
goto v_reusejp_665_;
}
v_reusejp_665_:
{
uint8_t v___x_667_; 
v___x_667_ = l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2(v___x_666_);
lean_dec_ref(v___x_666_);
if (v___x_667_ == 0)
{
v___y_638_ = v_importsStx_653_;
v_opts_639_ = v_opts_613_;
goto v___jp_637_;
}
else
{
lean_object* v___x_668_; uint8_t v___x_669_; lean_object* v_opts_670_; 
v___x_668_ = l_Lean_linter_deprecated_module;
v___x_669_ = 0;
v_opts_670_ = l_Lean_Option_set___at___00Lean_Elab_checkDeprecatedImports_spec__4(v_opts_613_, v___x_668_, v___x_669_);
v___y_638_ = v_importsStx_653_;
v_opts_639_ = v_opts_670_;
goto v___jp_637_;
}
}
}
}
}
}
v___jp_673_:
{
lean_object* v___x_680_; lean_object* v___x_681_; uint8_t v___x_682_; 
v___x_680_ = lean_unsigned_to_nat(1u);
v___x_681_ = l_Lean_Syntax_getArg(v___y_676_, v___x_680_);
v___x_682_ = l_Lean_Syntax_isNone(v___x_681_);
if (v___x_682_ == 0)
{
uint8_t v___x_683_; 
lean_inc(v___x_681_);
v___x_683_ = l_Lean_Syntax_matchesNull(v___x_681_, v___x_680_);
if (v___x_683_ == 0)
{
lean_dec(v___x_681_);
lean_dec(v_moduleTk_679_);
lean_dec(v___y_678_);
lean_dec(v___y_676_);
v_opts_620_ = v_opts_613_;
v_ignoreDeprecatedImports_621_ = v_ignoreDeprecatedImports_635_;
v_importPositions_622_ = v_importPositions_636_;
goto v___jp_619_;
}
else
{
lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; uint8_t v___x_687_; 
v___x_684_ = l_Lean_Syntax_getArg(v___x_681_, v___y_678_);
lean_dec(v___x_681_);
v___x_685_ = ((lean_object*)(l_Lean_Elab_HeaderSyntax_imports___closed__6));
lean_inc_ref(v___y_674_);
lean_inc_ref(v___y_675_);
lean_inc_ref(v___y_677_);
v___x_686_ = l_Lean_Name_mkStr4(v___y_677_, v___y_675_, v___y_674_, v___x_685_);
v___x_687_ = l_Lean_Syntax_isOfKind(v___x_684_, v___x_686_);
lean_dec(v___x_686_);
if (v___x_687_ == 0)
{
lean_dec(v_moduleTk_679_);
lean_dec(v___y_678_);
lean_dec(v___y_676_);
v_opts_620_ = v_opts_613_;
v_ignoreDeprecatedImports_621_ = v_ignoreDeprecatedImports_635_;
v_importPositions_622_ = v_importPositions_636_;
goto v___jp_619_;
}
else
{
v___y_647_ = v___y_676_;
v___y_648_ = v_moduleTk_679_;
v___y_649_ = v___y_678_;
goto v___jp_646_;
}
}
}
else
{
lean_dec(v___x_681_);
v___y_647_ = v___y_676_;
v___y_648_ = v_moduleTk_679_;
v___y_649_ = v___y_678_;
goto v___jp_646_;
}
}
v___jp_688_:
{
lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; uint8_t v___x_694_; 
v___x_690_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__0));
v___x_691_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__1));
v___x_692_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__2));
v___x_693_ = ((lean_object*)(l_Lean_Elab_HeaderSyntax_imports___closed__1));
lean_inc(v_val_689_);
v___x_694_ = l_Lean_Syntax_isOfKind(v_val_689_, v___x_693_);
if (v___x_694_ == 0)
{
lean_dec(v_val_689_);
v_opts_620_ = v_opts_613_;
v_ignoreDeprecatedImports_621_ = v_ignoreDeprecatedImports_635_;
v_importPositions_622_ = v_importPositions_636_;
goto v___jp_619_;
}
else
{
lean_object* v___x_695_; lean_object* v___x_696_; uint8_t v___x_697_; 
v___x_695_ = lean_unsigned_to_nat(0u);
v___x_696_ = l_Lean_Syntax_getArg(v_val_689_, v___x_695_);
v___x_697_ = l_Lean_Syntax_isNone(v___x_696_);
if (v___x_697_ == 0)
{
lean_object* v___x_698_; uint8_t v___x_699_; 
v___x_698_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_696_);
v___x_699_ = l_Lean_Syntax_matchesNull(v___x_696_, v___x_698_);
if (v___x_699_ == 0)
{
lean_dec(v___x_696_);
lean_dec(v_val_689_);
v_opts_620_ = v_opts_613_;
v_ignoreDeprecatedImports_621_ = v_ignoreDeprecatedImports_635_;
v_importPositions_622_ = v_importPositions_636_;
goto v___jp_619_;
}
else
{
lean_object* v___x_700_; lean_object* v___x_701_; uint8_t v___x_702_; 
v___x_700_ = l_Lean_Syntax_getArg(v___x_696_, v___x_695_);
lean_dec(v___x_696_);
v___x_701_ = ((lean_object*)(l_Lean_Elab_HeaderSyntax_imports___closed__9));
lean_inc(v___x_700_);
v___x_702_ = l_Lean_Syntax_isOfKind(v___x_700_, v___x_701_);
if (v___x_702_ == 0)
{
lean_dec(v___x_700_);
lean_dec(v_val_689_);
v_opts_620_ = v_opts_613_;
v_ignoreDeprecatedImports_621_ = v_ignoreDeprecatedImports_635_;
v_importPositions_622_ = v_importPositions_636_;
goto v___jp_619_;
}
else
{
lean_object* v_moduleTk_703_; lean_object* v___x_704_; 
v_moduleTk_703_ = l_Lean_Syntax_getArg(v___x_700_, v___x_695_);
lean_dec(v___x_700_);
v___x_704_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_704_, 0, v_moduleTk_703_);
v___y_674_ = v___x_692_;
v___y_675_ = v___x_691_;
v___y_676_ = v_val_689_;
v___y_677_ = v___x_690_;
v___y_678_ = v___x_695_;
v_moduleTk_679_ = v___x_704_;
goto v___jp_673_;
}
}
}
else
{
lean_object* v___x_705_; 
lean_dec(v___x_696_);
v___x_705_ = lean_box(0);
v___y_674_ = v___x_692_;
v___y_675_ = v___x_691_;
v___y_676_ = v_val_689_;
v___y_677_ = v___x_690_;
v___y_678_ = v___x_695_;
v_moduleTk_679_ = v___x_705_;
goto v___jp_673_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkDeprecatedImports___boxed(lean_object* v_env_708_, lean_object* v_imports_709_, lean_object* v_opts_710_, lean_object* v_inputCtx_711_, lean_object* v_startPos_712_, lean_object* v_messages_713_, lean_object* v_headerStx_x3f_714_, lean_object* v_origHeaderStx_x3f_715_){
_start:
{
lean_object* v_res_716_; 
v_res_716_ = l_Lean_Elab_checkDeprecatedImports(v_env_708_, v_imports_709_, v_opts_710_, v_inputCtx_711_, v_startPos_712_, v_messages_713_, v_headerStx_x3f_714_, v_origHeaderStx_x3f_715_);
lean_dec_ref(v_imports_709_);
lean_dec_ref(v_env_708_);
return v_res_716_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2_spec__2(lean_object* v_s_717_, lean_object* v_inst_718_, lean_object* v_R_719_, lean_object* v_a_720_, uint8_t v_b_721_, lean_object* v_c_722_){
_start:
{
uint8_t v___x_723_; 
v___x_723_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2_spec__2___redArg(v_s_717_, v_a_720_, v_b_721_);
return v___x_723_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2_spec__2___boxed(lean_object* v_s_724_, lean_object* v_inst_725_, lean_object* v_R_726_, lean_object* v_a_727_, lean_object* v_b_728_, lean_object* v_c_729_){
_start:
{
uint8_t v_b_boxed_730_; uint8_t v_res_731_; lean_object* v_r_732_; 
v_b_boxed_730_ = lean_unbox(v_b_728_);
v_res_731_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2_spec__2(v_s_724_, v_inst_725_, v_R_726_, v_a_727_, v_b_boxed_730_, v_c_729_);
lean_dec_ref(v_s_724_);
v_r_732_ = lean_box(v_res_731_);
return v_r_732_;
}
}
static lean_object* _init_l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__1(void){
_start:
{
uint32_t v___x_733_; lean_object* v___x_734_; 
v___x_733_ = 33;
v___x_734_ = lean_box_uint32(v___x_733_);
return v___x_734_;
}
}
static lean_object* _init_l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__2(void){
_start:
{
uint32_t v___x_735_; lean_object* v___x_736_; 
v___x_735_ = 42;
v___x_736_ = lean_box_uint32(v___x_735_);
return v___x_736_;
}
}
static lean_object* _init_l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__3(void){
_start:
{
uint32_t v___x_737_; lean_object* v___x_738_; 
v___x_737_ = 63;
v___x_738_ = lean_box_uint32(v___x_737_);
return v___x_738_;
}
}
static lean_object* _init_l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__4(void){
_start:
{
uint32_t v___x_739_; lean_object* v___x_740_; 
v___x_739_ = 124;
v___x_740_ = lean_box_uint32(v___x_739_);
return v___x_740_;
}
}
static lean_object* _init_l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__5(void){
_start:
{
uint32_t v___x_741_; lean_object* v___x_742_; 
v___x_741_ = 34;
v___x_742_ = lean_box_uint32(v___x_741_);
return v___x_742_;
}
}
static lean_object* _init_l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__6(void){
_start:
{
uint32_t v___x_743_; lean_object* v___x_744_; 
v___x_743_ = 62;
v___x_744_ = lean_box_uint32(v___x_743_);
return v___x_744_;
}
}
static lean_object* _init_l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__7(void){
_start:
{
uint32_t v___x_745_; lean_object* v___x_746_; 
v___x_745_ = 60;
v___x_746_ = lean_box_uint32(v___x_745_);
return v___x_746_;
}
}
static lean_object* _init_l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0(void){
_start:
{
lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; 
v___x_747_ = lean_unsigned_to_nat(7u);
v___x_748_ = lean_mk_empty_array_with_capacity(v___x_747_);
v___x_749_ = l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__7;
v___x_750_ = lean_array_push(v___x_748_, v___x_749_);
v___x_751_ = l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__6;
v___x_752_ = lean_array_push(v___x_750_, v___x_751_);
v___x_753_ = l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__5;
v___x_754_ = lean_array_push(v___x_752_, v___x_753_);
v___x_755_ = l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__4;
v___x_756_ = lean_array_push(v___x_754_, v___x_755_);
v___x_757_ = l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__3;
v___x_758_ = lean_array_push(v___x_756_, v___x_757_);
v___x_759_ = l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__2;
v___x_760_ = lean_array_push(v___x_758_, v___x_759_);
v___x_761_ = l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__1;
v___x_762_ = lean_array_push(v___x_760_, v___x_761_);
return v___x_762_;
}
}
static lean_object* _init_l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars(void){
_start:
{
lean_object* v___x_763_; 
v___x_763_ = lean_obj_once(&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0, &l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0_once, _init_l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0);
return v___x_763_;
}
}
LEAN_EXPORT lean_object* l_String_mapAux___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__0(lean_object* v_s_851_, lean_object* v_p_852_){
_start:
{
uint32_t v___y_854_; lean_object* v___x_859_; uint8_t v_decide_860_; 
v___x_859_ = lean_string_utf8_byte_size(v_s_851_);
v_decide_860_ = lean_nat_dec_eq(v_p_852_, v___x_859_);
if (v_decide_860_ == 0)
{
uint32_t v___x_861_; uint8_t v___y_863_; uint32_t v___x_866_; uint8_t v___x_867_; 
v___x_861_ = lean_string_utf8_get_fast(v_s_851_, v_p_852_);
v___x_866_ = 97;
v___x_867_ = lean_uint32_dec_le(v___x_866_, v___x_861_);
if (v___x_867_ == 0)
{
v___y_863_ = v___x_867_;
goto v___jp_862_;
}
else
{
uint32_t v___x_868_; uint8_t v___x_869_; 
v___x_868_ = 122;
v___x_869_ = lean_uint32_dec_le(v___x_861_, v___x_868_);
v___y_863_ = v___x_869_;
goto v___jp_862_;
}
v___jp_862_:
{
if (v___y_863_ == 0)
{
v___y_854_ = v___x_861_;
goto v___jp_853_;
}
else
{
uint32_t v___x_864_; uint32_t v___x_865_; 
v___x_864_ = 4294967264;
v___x_865_ = lean_uint32_add(v___x_861_, v___x_864_);
v___y_854_ = v___x_865_;
goto v___jp_853_;
}
}
}
else
{
lean_dec(v_p_852_);
return v_s_851_;
}
v___jp_853_:
{
lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; 
lean_inc(v_p_852_);
v___x_855_ = lean_string_utf8_set(v_s_851_, v_p_852_, v___y_854_);
v___x_856_ = l_Char_utf8Size(v___y_854_);
v___x_857_ = lean_nat_add(v_p_852_, v___x_856_);
lean_dec(v___x_856_);
lean_dec(v_p_852_);
v_s_851_ = v___x_855_;
v_p_852_ = v___x_857_;
goto _start;
}
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__2_spec__3___redArg(lean_object* v_s_870_, uint32_t v_a_871_, lean_object* v_a_872_, uint8_t v_b_873_){
_start:
{
lean_object* v_str_874_; lean_object* v_startInclusive_875_; lean_object* v_endExclusive_876_; lean_object* v___x_877_; uint8_t v_decide_878_; 
v_str_874_ = lean_ctor_get(v_s_870_, 0);
v_startInclusive_875_ = lean_ctor_get(v_s_870_, 1);
v_endExclusive_876_ = lean_ctor_get(v_s_870_, 2);
v___x_877_ = lean_nat_sub(v_endExclusive_876_, v_startInclusive_875_);
v_decide_878_ = lean_nat_dec_eq(v_a_872_, v___x_877_);
lean_dec(v___x_877_);
if (v_decide_878_ == 0)
{
lean_object* v___x_879_; uint32_t v___x_880_; uint8_t v___x_881_; 
v___x_879_ = lean_nat_add(v_startInclusive_875_, v_a_872_);
lean_dec(v_a_872_);
v___x_880_ = lean_string_utf8_get_fast(v_str_874_, v___x_879_);
v___x_881_ = lean_uint32_dec_eq(v___x_880_, v_a_871_);
if (v___x_881_ == 0)
{
lean_object* v___x_882_; lean_object* v___x_883_; 
v___x_882_ = lean_string_utf8_next_fast(v_str_874_, v___x_879_);
lean_dec(v___x_879_);
v___x_883_ = lean_nat_sub(v___x_882_, v_startInclusive_875_);
v_a_872_ = v___x_883_;
v_b_873_ = v___x_881_;
goto _start;
}
else
{
lean_dec(v___x_879_);
return v___x_881_;
}
}
else
{
lean_dec(v_a_872_);
return v_b_873_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__2_spec__3___redArg___boxed(lean_object* v_s_885_, lean_object* v_a_886_, lean_object* v_a_887_, lean_object* v_b_888_){
_start:
{
uint32_t v_a_boxed_889_; uint8_t v_b_boxed_890_; uint8_t v_res_891_; lean_object* v_r_892_; 
v_a_boxed_889_ = lean_unbox_uint32(v_a_886_);
lean_dec(v_a_886_);
v_b_boxed_890_ = lean_unbox(v_b_888_);
v_res_891_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__2_spec__3___redArg(v_s_885_, v_a_boxed_889_, v_a_887_, v_b_boxed_890_);
lean_dec_ref(v_s_885_);
v_r_892_ = lean_box(v_res_891_);
return v_r_892_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__2(uint32_t v_a_893_, lean_object* v_s_894_){
_start:
{
lean_object* v_searcher_895_; uint8_t v___x_896_; uint8_t v___x_897_; 
v_searcher_895_ = lean_unsigned_to_nat(0u);
v___x_896_ = 0;
v___x_897_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__2_spec__3___redArg(v_s_894_, v_a_893_, v_searcher_895_, v___x_896_);
return v___x_897_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__2___boxed(lean_object* v_a_898_, lean_object* v_s_899_){
_start:
{
uint32_t v_a_boxed_900_; uint8_t v_res_901_; lean_object* v_r_902_; 
v_a_boxed_900_ = lean_unbox_uint32(v_a_898_);
lean_dec(v_a_898_);
v_res_901_ = l_String_Slice_contains___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__2(v_a_boxed_900_, v_s_899_);
lean_dec_ref(v_s_899_);
v_r_902_ = lean_box(v_res_901_);
return v_r_902_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__3(lean_object* v_comp_906_, lean_object* v_as_907_, size_t v_sz_908_, size_t v_i_909_, lean_object* v_b_910_){
_start:
{
uint8_t v___x_911_; 
v___x_911_ = lean_usize_dec_lt(v_i_909_, v_sz_908_);
if (v___x_911_ == 0)
{
lean_dec_ref(v_comp_906_);
lean_inc_ref(v_b_910_);
return v_b_910_;
}
else
{
lean_object* v___x_912_; lean_object* v_a_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; uint32_t v___x_917_; uint8_t v___x_918_; 
v___x_912_ = lean_box(0);
v_a_913_ = lean_array_uget_borrowed(v_as_907_, v_i_909_);
v___x_914_ = lean_unsigned_to_nat(0u);
v___x_915_ = lean_string_utf8_byte_size(v_comp_906_);
lean_inc_ref(v_comp_906_);
v___x_916_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_916_, 0, v_comp_906_);
lean_ctor_set(v___x_916_, 1, v___x_914_);
lean_ctor_set(v___x_916_, 2, v___x_915_);
v___x_917_ = lean_unbox_uint32(v_a_913_);
v___x_918_ = l_String_Slice_contains___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__2(v___x_917_, v___x_916_);
lean_dec_ref_known(v___x_916_, 3);
if (v___x_918_ == 0)
{
lean_object* v___x_919_; size_t v___x_920_; size_t v___x_921_; 
v___x_919_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__3___closed__0));
v___x_920_ = ((size_t)1ULL);
v___x_921_ = lean_usize_add(v_i_909_, v___x_920_);
v_i_909_ = v___x_921_;
v_b_910_ = v___x_919_;
goto _start;
}
else
{
lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; 
lean_dec_ref(v_comp_906_);
lean_inc(v_a_913_);
v___x_923_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_923_, 0, v_a_913_);
v___x_924_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_924_, 0, v___x_923_);
v___x_925_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_925_, 0, v___x_924_);
lean_ctor_set(v___x_925_, 1, v___x_912_);
return v___x_925_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__3___boxed(lean_object* v_comp_926_, lean_object* v_as_927_, lean_object* v_sz_928_, lean_object* v_i_929_, lean_object* v_b_930_){
_start:
{
size_t v_sz_boxed_931_; size_t v_i_boxed_932_; lean_object* v_res_933_; 
v_sz_boxed_931_ = lean_unbox_usize(v_sz_928_);
lean_dec(v_sz_928_);
v_i_boxed_932_ = lean_unbox_usize(v_i_929_);
lean_dec(v_i_929_);
v_res_933_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__3(v_comp_926_, v_as_927_, v_sz_boxed_931_, v_i_boxed_932_, v_b_930_);
lean_dec_ref(v_b_930_);
lean_dec_ref(v_as_927_);
return v_res_933_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__1_spec__1(lean_object* v_a_934_, lean_object* v_as_935_, size_t v_i_936_, size_t v_stop_937_){
_start:
{
uint8_t v___x_938_; 
v___x_938_ = lean_usize_dec_eq(v_i_936_, v_stop_937_);
if (v___x_938_ == 0)
{
lean_object* v___x_939_; uint8_t v___x_940_; 
v___x_939_ = lean_array_uget_borrowed(v_as_935_, v_i_936_);
v___x_940_ = lean_string_dec_eq(v_a_934_, v___x_939_);
if (v___x_940_ == 0)
{
size_t v___x_941_; size_t v___x_942_; 
v___x_941_ = ((size_t)1ULL);
v___x_942_ = lean_usize_add(v_i_936_, v___x_941_);
v_i_936_ = v___x_942_;
goto _start;
}
else
{
return v___x_940_;
}
}
else
{
uint8_t v___x_944_; 
v___x_944_ = 0;
return v___x_944_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__1_spec__1___boxed(lean_object* v_a_945_, lean_object* v_as_946_, lean_object* v_i_947_, lean_object* v_stop_948_){
_start:
{
size_t v_i_boxed_949_; size_t v_stop_boxed_950_; uint8_t v_res_951_; lean_object* v_r_952_; 
v_i_boxed_949_ = lean_unbox_usize(v_i_947_);
lean_dec(v_i_947_);
v_stop_boxed_950_ = lean_unbox_usize(v_stop_948_);
lean_dec(v_stop_948_);
v_res_951_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__1_spec__1(v_a_945_, v_as_946_, v_i_boxed_949_, v_stop_boxed_950_);
lean_dec_ref(v_as_946_);
lean_dec_ref(v_a_945_);
v_r_952_ = lean_box(v_res_951_);
return v_r_952_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__1(lean_object* v_as_953_, lean_object* v_a_954_){
_start:
{
lean_object* v___x_955_; lean_object* v___x_956_; uint8_t v___x_957_; 
v___x_955_ = lean_unsigned_to_nat(0u);
v___x_956_ = lean_array_get_size(v_as_953_);
v___x_957_ = lean_nat_dec_lt(v___x_955_, v___x_956_);
if (v___x_957_ == 0)
{
return v___x_957_;
}
else
{
if (v___x_957_ == 0)
{
return v___x_957_;
}
else
{
size_t v___x_958_; size_t v___x_959_; uint8_t v___x_960_; 
v___x_958_ = ((size_t)0ULL);
v___x_959_ = lean_usize_of_nat(v___x_956_);
v___x_960_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__1_spec__1(v_a_954_, v_as_953_, v___x_958_, v___x_959_);
return v___x_960_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__1___boxed(lean_object* v_as_961_, lean_object* v_a_962_){
_start:
{
uint8_t v_res_963_; lean_object* v_r_964_; 
v_res_963_ = l_Array_contains___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__1(v_as_961_, v_a_962_);
lean_dec_ref(v_a_962_);
lean_dec_ref(v_as_961_);
v_r_964_ = lean_box(v_res_963_);
return v_r_964_;
}
}
static size_t _init_l___private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability___closed__0(void){
_start:
{
lean_object* v___x_965_; size_t v_sz_966_; 
v___x_965_ = l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars;
v_sz_966_ = lean_array_size(v___x_965_);
return v_sz_966_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability(lean_object* v_comp_971_){
_start:
{
lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; uint8_t v___x_975_; 
v___x_972_ = ((lean_object*)(l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames));
v___x_973_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_comp_971_);
v___x_974_ = l_String_mapAux___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__0(v_comp_971_, v___x_973_);
v___x_975_ = l_Array_contains___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__1(v___x_972_, v___x_974_);
lean_dec_ref(v___x_974_);
if (v___x_975_ == 0)
{
lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; size_t v_sz_979_; size_t v___x_980_; lean_object* v___x_981_; lean_object* v_fst_982_; 
v___x_976_ = l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars;
v___x_977_ = lean_box(0);
v___x_978_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__3___closed__0));
v_sz_979_ = lean_usize_once(&l___private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability___closed__0, &l___private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability___closed__0_once, _init_l___private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability___closed__0);
v___x_980_ = ((size_t)0ULL);
v___x_981_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__3(v_comp_971_, v___x_976_, v_sz_979_, v___x_980_, v___x_978_);
v_fst_982_ = lean_ctor_get(v___x_981_, 0);
lean_inc(v_fst_982_);
lean_dec_ref(v___x_981_);
if (lean_obj_tag(v_fst_982_) == 0)
{
return v___x_977_;
}
else
{
lean_object* v_val_983_; 
v_val_983_ = lean_ctor_get(v_fst_982_, 0);
lean_inc(v_val_983_);
lean_dec_ref_known(v_fst_982_, 1);
if (lean_obj_tag(v_val_983_) == 1)
{
lean_object* v_val_984_; lean_object* v___x_986_; uint8_t v_isShared_987_; uint8_t v_isSharedCheck_998_; 
v_val_984_ = lean_ctor_get(v_val_983_, 0);
v_isSharedCheck_998_ = !lean_is_exclusive(v_val_983_);
if (v_isSharedCheck_998_ == 0)
{
v___x_986_ = v_val_983_;
v_isShared_987_ = v_isSharedCheck_998_;
goto v_resetjp_985_;
}
else
{
lean_inc(v_val_984_);
lean_dec(v_val_983_);
v___x_986_ = lean_box(0);
v_isShared_987_ = v_isSharedCheck_998_;
goto v_resetjp_985_;
}
v_resetjp_985_:
{
lean_object* v___x_988_; lean_object* v___x_989_; uint32_t v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_996_; 
v___x_988_ = ((lean_object*)(l___private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability___closed__1));
v___x_989_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_checkDeprecatedImports_spec__1___closed__0));
v___x_990_ = lean_unbox_uint32(v_val_984_);
lean_dec(v_val_984_);
v___x_991_ = lean_string_push(v___x_989_, v___x_990_);
v___x_992_ = lean_string_append(v___x_988_, v___x_991_);
lean_dec_ref(v___x_991_);
v___x_993_ = ((lean_object*)(l___private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability___closed__2));
v___x_994_ = lean_string_append(v___x_992_, v___x_993_);
if (v_isShared_987_ == 0)
{
lean_ctor_set(v___x_986_, 0, v___x_994_);
v___x_996_ = v___x_986_;
goto v_reusejp_995_;
}
else
{
lean_object* v_reuseFailAlloc_997_; 
v_reuseFailAlloc_997_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_997_, 0, v___x_994_);
v___x_996_ = v_reuseFailAlloc_997_;
goto v_reusejp_995_;
}
v_reusejp_995_:
{
return v___x_996_;
}
}
}
else
{
lean_dec(v_val_983_);
return v___x_977_;
}
}
}
else
{
lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; 
v___x_999_ = ((lean_object*)(l___private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability___closed__3));
v___x_1000_ = lean_string_append(v___x_999_, v_comp_971_);
lean_dec_ref(v_comp_971_);
v___x_1001_ = ((lean_object*)(l___private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability___closed__4));
v___x_1002_ = lean_string_append(v___x_1000_, v___x_1001_);
v___x_1003_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1003_, 0, v___x_1002_);
return v___x_1003_;
}
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__2_spec__3(lean_object* v_s_1004_, uint32_t v_a_1005_, lean_object* v_inst_1006_, lean_object* v_R_1007_, lean_object* v_a_1008_, uint8_t v_b_1009_, lean_object* v_c_1010_){
_start:
{
uint8_t v___x_1011_; 
v___x_1011_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__2_spec__3___redArg(v_s_1004_, v_a_1005_, v_a_1008_, v_b_1009_);
return v___x_1011_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__2_spec__3___boxed(lean_object* v_s_1012_, lean_object* v_a_1013_, lean_object* v_inst_1014_, lean_object* v_R_1015_, lean_object* v_a_1016_, lean_object* v_b_1017_, lean_object* v_c_1018_){
_start:
{
uint32_t v_a_boxed_1019_; uint8_t v_b_boxed_1020_; uint8_t v_res_1021_; lean_object* v_r_1022_; 
v_a_boxed_1019_ = lean_unbox_uint32(v_a_1013_);
lean_dec(v_a_1013_);
v_b_boxed_1020_ = lean_unbox(v_b_1017_);
v_res_1021_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__2_spec__3(v_s_1012_, v_a_boxed_1019_, v_inst_1014_, v_R_1015_, v_a_1016_, v_b_boxed_1020_, v_c_1018_);
lean_dec_ref(v_s_1012_);
v_r_1022_ = lean_box(v_res_1021_);
return v_r_1022_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_checkModuleNamePortability_go(lean_object* v_mainModule_1025_, lean_object* v_inputCtx_1026_, lean_object* v_startPos_1027_, lean_object* v_a_1028_, lean_object* v_a_1029_){
_start:
{
switch(lean_obj_tag(v_a_1028_))
{
case 0:
{
lean_dec_ref(v_inputCtx_1026_);
lean_dec(v_mainModule_1025_);
return v_a_1029_;
}
case 1:
{
lean_object* v_pre_1030_; lean_object* v_str_1031_; lean_object* v___x_1032_; 
v_pre_1030_ = lean_ctor_get(v_a_1028_, 0);
lean_inc(v_pre_1030_);
v_str_1031_ = lean_ctor_get(v_a_1028_, 1);
lean_inc_ref(v_str_1031_);
lean_dec_ref_known(v_a_1028_, 2);
v___x_1032_ = l___private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability(v_str_1031_);
if (lean_obj_tag(v___x_1032_) == 0)
{
v_a_1028_ = v_pre_1030_;
goto _start;
}
else
{
lean_object* v_val_1034_; lean_object* v___x_1036_; uint8_t v_isShared_1037_; uint8_t v_isSharedCheck_1059_; 
v_val_1034_ = lean_ctor_get(v___x_1032_, 0);
v_isSharedCheck_1059_ = !lean_is_exclusive(v___x_1032_);
if (v_isSharedCheck_1059_ == 0)
{
v___x_1036_ = v___x_1032_;
v_isShared_1037_ = v_isSharedCheck_1059_;
goto v_resetjp_1035_;
}
else
{
lean_inc(v_val_1034_);
lean_dec(v___x_1032_);
v___x_1036_ = lean_box(0);
v_isShared_1037_ = v_isSharedCheck_1059_;
goto v_resetjp_1035_;
}
v_resetjp_1035_:
{
lean_object* v_fileName_1038_; lean_object* v_fileMap_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; uint8_t v___x_1042_; uint8_t v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; uint8_t v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1053_; 
v_fileName_1038_ = lean_ctor_get(v_inputCtx_1026_, 1);
v_fileMap_1039_ = lean_ctor_get(v_inputCtx_1026_, 2);
lean_inc_ref(v_fileMap_1039_);
v___x_1040_ = l_Lean_FileMap_toPosition(v_fileMap_1039_, v_startPos_1027_);
v___x_1041_ = lean_box(0);
v___x_1042_ = 0;
v___x_1043_ = 2;
v___x_1044_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_checkDeprecatedImports_spec__1___closed__0));
v___x_1045_ = ((lean_object*)(l___private_Lean_Elab_Import_0__Lean_Elab_checkModuleNamePortability_go___closed__0));
v___x_1046_ = 1;
lean_inc(v_mainModule_1025_);
v___x_1047_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_mainModule_1025_, v___x_1046_);
v___x_1048_ = lean_string_append(v___x_1045_, v___x_1047_);
lean_dec_ref(v___x_1047_);
v___x_1049_ = ((lean_object*)(l___private_Lean_Elab_Import_0__Lean_Elab_checkModuleNamePortability_go___closed__1));
v___x_1050_ = lean_string_append(v___x_1048_, v___x_1049_);
v___x_1051_ = lean_string_append(v___x_1050_, v_val_1034_);
lean_dec(v_val_1034_);
if (v_isShared_1037_ == 0)
{
lean_ctor_set_tag(v___x_1036_, 3);
lean_ctor_set(v___x_1036_, 0, v___x_1051_);
v___x_1053_ = v___x_1036_;
goto v_reusejp_1052_;
}
else
{
lean_object* v_reuseFailAlloc_1058_; 
v_reuseFailAlloc_1058_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1058_, 0, v___x_1051_);
v___x_1053_ = v_reuseFailAlloc_1058_;
goto v_reusejp_1052_;
}
v_reusejp_1052_:
{
lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; 
v___x_1054_ = l_Lean_MessageData_ofFormat(v___x_1053_);
lean_inc_ref(v_fileName_1038_);
v___x_1055_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1055_, 0, v_fileName_1038_);
lean_ctor_set(v___x_1055_, 1, v___x_1040_);
lean_ctor_set(v___x_1055_, 2, v___x_1041_);
lean_ctor_set(v___x_1055_, 3, v___x_1044_);
lean_ctor_set(v___x_1055_, 4, v___x_1054_);
lean_ctor_set_uint8(v___x_1055_, sizeof(void*)*5, v___x_1042_);
lean_ctor_set_uint8(v___x_1055_, sizeof(void*)*5 + 1, v___x_1043_);
lean_ctor_set_uint8(v___x_1055_, sizeof(void*)*5 + 2, v___x_1042_);
v___x_1056_ = l_Lean_MessageLog_add(v___x_1055_, v_a_1029_);
v_a_1028_ = v_pre_1030_;
v_a_1029_ = v___x_1056_;
goto _start;
}
}
}
}
default: 
{
lean_object* v_pre_1060_; 
v_pre_1060_ = lean_ctor_get(v_a_1028_, 0);
lean_inc(v_pre_1060_);
lean_dec_ref_known(v_a_1028_, 2);
v_a_1028_ = v_pre_1060_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_checkModuleNamePortability_go___boxed(lean_object* v_mainModule_1062_, lean_object* v_inputCtx_1063_, lean_object* v_startPos_1064_, lean_object* v_a_1065_, lean_object* v_a_1066_){
_start:
{
lean_object* v_res_1067_; 
v_res_1067_ = l___private_Lean_Elab_Import_0__Lean_Elab_checkModuleNamePortability_go(v_mainModule_1062_, v_inputCtx_1063_, v_startPos_1064_, v_a_1065_, v_a_1066_);
lean_dec(v_startPos_1064_);
return v_res_1067_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkModuleNamePortability(lean_object* v_mainModule_1068_, lean_object* v_inputCtx_1069_, lean_object* v_startPos_1070_, lean_object* v_messages_1071_){
_start:
{
lean_object* v___x_1072_; 
lean_inc(v_mainModule_1068_);
v___x_1072_ = l___private_Lean_Elab_Import_0__Lean_Elab_checkModuleNamePortability_go(v_mainModule_1068_, v_inputCtx_1069_, v_startPos_1070_, v_mainModule_1068_, v_messages_1071_);
return v___x_1072_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkModuleNamePortability___boxed(lean_object* v_mainModule_1073_, lean_object* v_inputCtx_1074_, lean_object* v_startPos_1075_, lean_object* v_messages_1076_){
_start:
{
lean_object* v_res_1077_; 
v_res_1077_ = l_Lean_Elab_checkModuleNamePortability(v_mainModule_1073_, v_inputCtx_1074_, v_startPos_1075_, v_messages_1076_);
lean_dec(v_startPos_1075_);
return v_res_1077_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_processHeaderCore(lean_object* v_startPos_1078_, lean_object* v_imports_1079_, uint8_t v_isModule_1080_, lean_object* v_opts_1081_, lean_object* v_messages_1082_, lean_object* v_inputCtx_1083_, uint32_t v_trustLevel_1084_, lean_object* v_plugins_1085_, uint8_t v_leakEnv_1086_, lean_object* v_mainModule_1087_, lean_object* v_package_x3f_1088_, lean_object* v_arts_1089_, lean_object* v_headerStx_x3f_1090_, lean_object* v_origHeaderStx_x3f_1091_){
_start:
{
lean_object* v_fst_1094_; lean_object* v_snd_1095_; uint8_t v___x_1103_; uint8_t v___y_1105_; 
v___x_1103_ = 1;
if (v_isModule_1080_ == 0)
{
uint8_t v___x_1138_; 
v___x_1138_ = 2;
v___y_1105_ = v___x_1138_;
goto v___jp_1104_;
}
else
{
lean_object* v___x_1139_; uint8_t v___x_1140_; 
v___x_1139_ = l_Lean_Elab_inServer;
v___x_1140_ = l_Lean_Option_get___at___00Lean_Elab_checkDeprecatedImports_spec__0(v_opts_1081_, v___x_1139_);
if (v___x_1140_ == 0)
{
uint8_t v___x_1141_; 
v___x_1141_ = 0;
v___y_1105_ = v___x_1141_;
goto v___jp_1104_;
}
else
{
uint8_t v___x_1142_; 
v___x_1142_ = 1;
v___y_1105_ = v___x_1142_;
goto v___jp_1104_;
}
}
v___jp_1093_:
{
lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; 
lean_inc_n(v_mainModule_1087_, 2);
v___x_1096_ = l_Lean_Environment_setMainModule(v_fst_1094_, v_mainModule_1087_);
v___x_1097_ = l___private_Lean_Compiler_ModPkgExt_0__Lean_modPkgExt;
v___x_1098_ = l_Lean_PersistentEnvExtension_setState___redArg(v___x_1097_, v___x_1096_, v_package_x3f_1088_);
lean_inc(v_startPos_1078_);
lean_inc_ref(v_inputCtx_1083_);
v___x_1099_ = l_Lean_Elab_checkDeprecatedImports(v___x_1098_, v_imports_1079_, v_opts_1081_, v_inputCtx_1083_, v_startPos_1078_, v_snd_1095_, v_headerStx_x3f_1090_, v_origHeaderStx_x3f_1091_);
lean_dec_ref(v_imports_1079_);
v___x_1100_ = l___private_Lean_Elab_Import_0__Lean_Elab_checkModuleNamePortability_go(v_mainModule_1087_, v_inputCtx_1083_, v_startPos_1078_, v_mainModule_1087_, v___x_1099_);
lean_dec(v_startPos_1078_);
v___x_1101_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1101_, 0, v___x_1098_);
lean_ctor_set(v___x_1101_, 1, v___x_1100_);
v___x_1102_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1102_, 0, v___x_1101_);
return v___x_1102_;
}
v___jp_1104_:
{
lean_object* v___x_1106_; 
lean_inc_ref(v_opts_1081_);
lean_inc_ref(v_imports_1079_);
v___x_1106_ = l_Lean_importModules(v_imports_1079_, v_opts_1081_, v_trustLevel_1084_, v_plugins_1085_, v_leakEnv_1086_, v___x_1103_, v___y_1105_, v_arts_1089_);
if (lean_obj_tag(v___x_1106_) == 0)
{
lean_object* v_a_1107_; 
v_a_1107_ = lean_ctor_get(v___x_1106_, 0);
lean_inc(v_a_1107_);
lean_dec_ref_known(v___x_1106_, 1);
v_fst_1094_ = v_a_1107_;
v_snd_1095_ = v_messages_1082_;
goto v___jp_1093_;
}
else
{
lean_object* v_a_1108_; lean_object* v___x_1110_; uint8_t v_isShared_1111_; uint8_t v_isSharedCheck_1137_; 
v_a_1108_ = lean_ctor_get(v___x_1106_, 0);
v_isSharedCheck_1137_ = !lean_is_exclusive(v___x_1106_);
if (v_isSharedCheck_1137_ == 0)
{
v___x_1110_ = v___x_1106_;
v_isShared_1111_ = v_isSharedCheck_1137_;
goto v_resetjp_1109_;
}
else
{
lean_inc(v_a_1108_);
lean_dec(v___x_1106_);
v___x_1110_ = lean_box(0);
v_isShared_1111_ = v_isSharedCheck_1137_;
goto v_resetjp_1109_;
}
v_resetjp_1109_:
{
uint32_t v___x_1112_; lean_object* v___x_1113_; 
v___x_1112_ = 0;
v___x_1113_ = l_Lean_mkEmptyEnvironment(v___x_1112_);
if (lean_obj_tag(v___x_1113_) == 0)
{
lean_object* v_a_1114_; lean_object* v_fileName_1115_; lean_object* v_fileMap_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; uint8_t v___x_1119_; uint8_t v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1124_; 
v_a_1114_ = lean_ctor_get(v___x_1113_, 0);
lean_inc(v_a_1114_);
lean_dec_ref_known(v___x_1113_, 1);
v_fileName_1115_ = lean_ctor_get(v_inputCtx_1083_, 1);
v_fileMap_1116_ = lean_ctor_get(v_inputCtx_1083_, 2);
lean_inc_ref(v_fileMap_1116_);
v___x_1117_ = l_Lean_FileMap_toPosition(v_fileMap_1116_, v_startPos_1078_);
v___x_1118_ = lean_box(0);
v___x_1119_ = 0;
v___x_1120_ = 2;
v___x_1121_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_checkDeprecatedImports_spec__1___closed__0));
v___x_1122_ = lean_io_error_to_string(v_a_1108_);
if (v_isShared_1111_ == 0)
{
lean_ctor_set_tag(v___x_1110_, 3);
lean_ctor_set(v___x_1110_, 0, v___x_1122_);
v___x_1124_ = v___x_1110_;
goto v_reusejp_1123_;
}
else
{
lean_object* v_reuseFailAlloc_1128_; 
v_reuseFailAlloc_1128_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1128_, 0, v___x_1122_);
v___x_1124_ = v_reuseFailAlloc_1128_;
goto v_reusejp_1123_;
}
v_reusejp_1123_:
{
lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; 
v___x_1125_ = l_Lean_MessageData_ofFormat(v___x_1124_);
lean_inc_ref(v_fileName_1115_);
v___x_1126_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1126_, 0, v_fileName_1115_);
lean_ctor_set(v___x_1126_, 1, v___x_1117_);
lean_ctor_set(v___x_1126_, 2, v___x_1118_);
lean_ctor_set(v___x_1126_, 3, v___x_1121_);
lean_ctor_set(v___x_1126_, 4, v___x_1125_);
lean_ctor_set_uint8(v___x_1126_, sizeof(void*)*5, v___x_1119_);
lean_ctor_set_uint8(v___x_1126_, sizeof(void*)*5 + 1, v___x_1120_);
lean_ctor_set_uint8(v___x_1126_, sizeof(void*)*5 + 2, v___x_1119_);
v___x_1127_ = l_Lean_MessageLog_add(v___x_1126_, v_messages_1082_);
v_fst_1094_ = v_a_1114_;
v_snd_1095_ = v___x_1127_;
goto v___jp_1093_;
}
}
else
{
lean_object* v_a_1129_; lean_object* v___x_1131_; uint8_t v_isShared_1132_; uint8_t v_isSharedCheck_1136_; 
lean_del_object(v___x_1110_);
lean_dec(v_a_1108_);
lean_dec(v_origHeaderStx_x3f_1091_);
lean_dec(v_headerStx_x3f_1090_);
lean_dec(v_package_x3f_1088_);
lean_dec(v_mainModule_1087_);
lean_dec_ref(v_inputCtx_1083_);
lean_dec_ref(v_messages_1082_);
lean_dec_ref(v_opts_1081_);
lean_dec_ref(v_imports_1079_);
lean_dec(v_startPos_1078_);
v_a_1129_ = lean_ctor_get(v___x_1113_, 0);
v_isSharedCheck_1136_ = !lean_is_exclusive(v___x_1113_);
if (v_isSharedCheck_1136_ == 0)
{
v___x_1131_ = v___x_1113_;
v_isShared_1132_ = v_isSharedCheck_1136_;
goto v_resetjp_1130_;
}
else
{
lean_inc(v_a_1129_);
lean_dec(v___x_1113_);
v___x_1131_ = lean_box(0);
v_isShared_1132_ = v_isSharedCheck_1136_;
goto v_resetjp_1130_;
}
v_resetjp_1130_:
{
lean_object* v___x_1134_; 
if (v_isShared_1132_ == 0)
{
v___x_1134_ = v___x_1131_;
goto v_reusejp_1133_;
}
else
{
lean_object* v_reuseFailAlloc_1135_; 
v_reuseFailAlloc_1135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1135_, 0, v_a_1129_);
v___x_1134_ = v_reuseFailAlloc_1135_;
goto v_reusejp_1133_;
}
v_reusejp_1133_:
{
return v___x_1134_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_processHeaderCore___boxed(lean_object* v_startPos_1143_, lean_object* v_imports_1144_, lean_object* v_isModule_1145_, lean_object* v_opts_1146_, lean_object* v_messages_1147_, lean_object* v_inputCtx_1148_, lean_object* v_trustLevel_1149_, lean_object* v_plugins_1150_, lean_object* v_leakEnv_1151_, lean_object* v_mainModule_1152_, lean_object* v_package_x3f_1153_, lean_object* v_arts_1154_, lean_object* v_headerStx_x3f_1155_, lean_object* v_origHeaderStx_x3f_1156_, lean_object* v_a_1157_){
_start:
{
uint8_t v_isModule_boxed_1158_; uint32_t v_trustLevel_boxed_1159_; uint8_t v_leakEnv_boxed_1160_; lean_object* v_res_1161_; 
v_isModule_boxed_1158_ = lean_unbox(v_isModule_1145_);
v_trustLevel_boxed_1159_ = lean_unbox_uint32(v_trustLevel_1149_);
lean_dec(v_trustLevel_1149_);
v_leakEnv_boxed_1160_ = lean_unbox(v_leakEnv_1151_);
v_res_1161_ = l_Lean_Elab_processHeaderCore(v_startPos_1143_, v_imports_1144_, v_isModule_boxed_1158_, v_opts_1146_, v_messages_1147_, v_inputCtx_1148_, v_trustLevel_boxed_1159_, v_plugins_1150_, v_leakEnv_boxed_1160_, v_mainModule_1152_, v_package_x3f_1153_, v_arts_1154_, v_headerStx_x3f_1155_, v_origHeaderStx_x3f_1156_);
return v_res_1161_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_processHeader(lean_object* v_header_1162_, lean_object* v_opts_1163_, lean_object* v_messages_1164_, lean_object* v_inputCtx_1165_, uint32_t v_trustLevel_1166_, lean_object* v_plugins_1167_, uint8_t v_leakEnv_1168_, lean_object* v_mainModule_1169_){
_start:
{
lean_object* v___x_1171_; uint8_t v___x_1172_; lean_object* v___x_1173_; uint8_t v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; 
v___x_1171_ = l_Lean_Elab_HeaderSyntax_startPos(v_header_1162_);
v___x_1172_ = 1;
lean_inc(v_header_1162_);
v___x_1173_ = l_Lean_Elab_HeaderSyntax_imports(v_header_1162_, v___x_1172_);
v___x_1174_ = l_Lean_Elab_HeaderSyntax_isModule(v_header_1162_);
v___x_1175_ = lean_box(0);
v___x_1176_ = lean_box(1);
v___x_1177_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1177_, 0, v_header_1162_);
v___x_1178_ = l_Lean_Elab_processHeaderCore(v___x_1171_, v___x_1173_, v___x_1174_, v_opts_1163_, v_messages_1164_, v_inputCtx_1165_, v_trustLevel_1166_, v_plugins_1167_, v_leakEnv_1168_, v_mainModule_1169_, v___x_1175_, v___x_1176_, v___x_1177_, v___x_1175_);
return v___x_1178_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_processHeader___boxed(lean_object* v_header_1179_, lean_object* v_opts_1180_, lean_object* v_messages_1181_, lean_object* v_inputCtx_1182_, lean_object* v_trustLevel_1183_, lean_object* v_plugins_1184_, lean_object* v_leakEnv_1185_, lean_object* v_mainModule_1186_, lean_object* v_a_1187_){
_start:
{
uint32_t v_trustLevel_boxed_1188_; uint8_t v_leakEnv_boxed_1189_; lean_object* v_res_1190_; 
v_trustLevel_boxed_1188_ = lean_unbox_uint32(v_trustLevel_1183_);
lean_dec(v_trustLevel_1183_);
v_leakEnv_boxed_1189_ = lean_unbox(v_leakEnv_1185_);
v_res_1190_ = l_Lean_Elab_processHeader(v_header_1179_, v_opts_1180_, v_messages_1181_, v_inputCtx_1182_, v_trustLevel_boxed_1188_, v_plugins_1184_, v_leakEnv_boxed_1189_, v_mainModule_1186_);
return v_res_1190_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_parseImports(lean_object* v_input_1192_, lean_object* v_fileName_1193_){
_start:
{
lean_object* v___y_1196_; 
if (lean_obj_tag(v_fileName_1193_) == 0)
{
lean_object* v___x_1241_; 
v___x_1241_ = ((lean_object*)(l_Lean_Elab_parseImports___closed__0));
v___y_1196_ = v___x_1241_;
goto v___jp_1195_;
}
else
{
lean_object* v_val_1242_; 
v_val_1242_ = lean_ctor_get(v_fileName_1193_, 0);
lean_inc(v_val_1242_);
lean_dec_ref_known(v_fileName_1193_, 1);
v___y_1196_ = v_val_1242_;
goto v___jp_1195_;
}
v___jp_1195_:
{
uint8_t v___x_1197_; lean_object* v___x_1198_; lean_object* v_inputCtx_1199_; lean_object* v___x_1200_; 
v___x_1197_ = 1;
v___x_1198_ = lean_string_utf8_byte_size(v_input_1192_);
v_inputCtx_1199_ = l_Lean_Parser_mkInputContext___redArg(v_input_1192_, v___y_1196_, v___x_1197_, v___x_1198_);
lean_inc_ref(v_inputCtx_1199_);
v___x_1200_ = l_Lean_Parser_parseHeader(v_inputCtx_1199_);
if (lean_obj_tag(v___x_1200_) == 0)
{
lean_object* v_a_1201_; lean_object* v___x_1203_; uint8_t v_isShared_1204_; uint8_t v_isSharedCheck_1232_; 
v_a_1201_ = lean_ctor_get(v___x_1200_, 0);
v_isSharedCheck_1232_ = !lean_is_exclusive(v___x_1200_);
if (v_isSharedCheck_1232_ == 0)
{
v___x_1203_ = v___x_1200_;
v_isShared_1204_ = v_isSharedCheck_1232_;
goto v_resetjp_1202_;
}
else
{
lean_inc(v_a_1201_);
lean_dec(v___x_1200_);
v___x_1203_ = lean_box(0);
v_isShared_1204_ = v_isSharedCheck_1232_;
goto v_resetjp_1202_;
}
v_resetjp_1202_:
{
lean_object* v_snd_1205_; lean_object* v_fst_1206_; lean_object* v_fst_1207_; lean_object* v___x_1209_; uint8_t v_isShared_1210_; uint8_t v_isSharedCheck_1230_; 
v_snd_1205_ = lean_ctor_get(v_a_1201_, 1);
lean_inc(v_snd_1205_);
v_fst_1206_ = lean_ctor_get(v_snd_1205_, 0);
lean_inc(v_fst_1206_);
v_fst_1207_ = lean_ctor_get(v_a_1201_, 0);
v_isSharedCheck_1230_ = !lean_is_exclusive(v_a_1201_);
if (v_isSharedCheck_1230_ == 0)
{
lean_object* v_unused_1231_; 
v_unused_1231_ = lean_ctor_get(v_a_1201_, 1);
lean_dec(v_unused_1231_);
v___x_1209_ = v_a_1201_;
v_isShared_1210_ = v_isSharedCheck_1230_;
goto v_resetjp_1208_;
}
else
{
lean_inc(v_fst_1207_);
lean_dec(v_a_1201_);
v___x_1209_ = lean_box(0);
v_isShared_1210_ = v_isSharedCheck_1230_;
goto v_resetjp_1208_;
}
v_resetjp_1208_:
{
lean_object* v_snd_1211_; lean_object* v___x_1213_; uint8_t v_isShared_1214_; uint8_t v_isSharedCheck_1228_; 
v_snd_1211_ = lean_ctor_get(v_snd_1205_, 1);
v_isSharedCheck_1228_ = !lean_is_exclusive(v_snd_1205_);
if (v_isSharedCheck_1228_ == 0)
{
lean_object* v_unused_1229_; 
v_unused_1229_ = lean_ctor_get(v_snd_1205_, 0);
lean_dec(v_unused_1229_);
v___x_1213_ = v_snd_1205_;
v_isShared_1214_ = v_isSharedCheck_1228_;
goto v_resetjp_1212_;
}
else
{
lean_inc(v_snd_1211_);
lean_dec(v_snd_1205_);
v___x_1213_ = lean_box(0);
v_isShared_1214_ = v_isSharedCheck_1228_;
goto v_resetjp_1212_;
}
v_resetjp_1212_:
{
lean_object* v_fileMap_1215_; lean_object* v_pos_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1220_; 
v_fileMap_1215_ = lean_ctor_get(v_inputCtx_1199_, 2);
lean_inc_ref(v_fileMap_1215_);
lean_dec_ref(v_inputCtx_1199_);
v_pos_1216_ = lean_ctor_get(v_fst_1206_, 0);
lean_inc(v_pos_1216_);
lean_dec(v_fst_1206_);
v___x_1217_ = l_Lean_Elab_HeaderSyntax_imports(v_fst_1207_, v___x_1197_);
v___x_1218_ = l_Lean_FileMap_toPosition(v_fileMap_1215_, v_pos_1216_);
lean_dec(v_pos_1216_);
if (v_isShared_1214_ == 0)
{
lean_ctor_set(v___x_1213_, 0, v___x_1218_);
v___x_1220_ = v___x_1213_;
goto v_reusejp_1219_;
}
else
{
lean_object* v_reuseFailAlloc_1227_; 
v_reuseFailAlloc_1227_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1227_, 0, v___x_1218_);
lean_ctor_set(v_reuseFailAlloc_1227_, 1, v_snd_1211_);
v___x_1220_ = v_reuseFailAlloc_1227_;
goto v_reusejp_1219_;
}
v_reusejp_1219_:
{
lean_object* v___x_1222_; 
if (v_isShared_1210_ == 0)
{
lean_ctor_set(v___x_1209_, 1, v___x_1220_);
lean_ctor_set(v___x_1209_, 0, v___x_1217_);
v___x_1222_ = v___x_1209_;
goto v_reusejp_1221_;
}
else
{
lean_object* v_reuseFailAlloc_1226_; 
v_reuseFailAlloc_1226_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1226_, 0, v___x_1217_);
lean_ctor_set(v_reuseFailAlloc_1226_, 1, v___x_1220_);
v___x_1222_ = v_reuseFailAlloc_1226_;
goto v_reusejp_1221_;
}
v_reusejp_1221_:
{
lean_object* v___x_1224_; 
if (v_isShared_1204_ == 0)
{
lean_ctor_set(v___x_1203_, 0, v___x_1222_);
v___x_1224_ = v___x_1203_;
goto v_reusejp_1223_;
}
else
{
lean_object* v_reuseFailAlloc_1225_; 
v_reuseFailAlloc_1225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1225_, 0, v___x_1222_);
v___x_1224_ = v_reuseFailAlloc_1225_;
goto v_reusejp_1223_;
}
v_reusejp_1223_:
{
return v___x_1224_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1233_; lean_object* v___x_1235_; uint8_t v_isShared_1236_; uint8_t v_isSharedCheck_1240_; 
lean_dec_ref(v_inputCtx_1199_);
v_a_1233_ = lean_ctor_get(v___x_1200_, 0);
v_isSharedCheck_1240_ = !lean_is_exclusive(v___x_1200_);
if (v_isSharedCheck_1240_ == 0)
{
v___x_1235_ = v___x_1200_;
v_isShared_1236_ = v_isSharedCheck_1240_;
goto v_resetjp_1234_;
}
else
{
lean_inc(v_a_1233_);
lean_dec(v___x_1200_);
v___x_1235_ = lean_box(0);
v_isShared_1236_ = v_isSharedCheck_1240_;
goto v_resetjp_1234_;
}
v_resetjp_1234_:
{
lean_object* v___x_1238_; 
if (v_isShared_1236_ == 0)
{
v___x_1238_ = v___x_1235_;
goto v_reusejp_1237_;
}
else
{
lean_object* v_reuseFailAlloc_1239_; 
v_reuseFailAlloc_1239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1239_, 0, v_a_1233_);
v___x_1238_ = v_reuseFailAlloc_1239_;
goto v_reusejp_1237_;
}
v_reusejp_1237_:
{
return v___x_1238_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_parseImports___boxed(lean_object* v_input_1243_, lean_object* v_fileName_1244_, lean_object* v_a_1245_){
_start:
{
lean_object* v_res_1246_; 
v_res_1246_ = l_Lean_Elab_parseImports(v_input_1243_, v_fileName_1244_);
return v_res_1246_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00Lean_Elab_printImports_spec__0_spec__0(lean_object* v_s_1247_){
_start:
{
lean_object* v___x_1249_; lean_object* v_putStr_1250_; lean_object* v___x_1251_; 
v___x_1249_ = lean_get_stdout();
v_putStr_1250_ = lean_ctor_get(v___x_1249_, 4);
lean_inc_ref(v_putStr_1250_);
lean_dec_ref(v___x_1249_);
v___x_1251_ = lean_apply_2(v_putStr_1250_, v_s_1247_, lean_box(0));
return v___x_1251_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00Lean_Elab_printImports_spec__0_spec__0___boxed(lean_object* v_s_1252_, lean_object* v_a_1253_){
_start:
{
lean_object* v_res_1254_; 
v_res_1254_ = l_IO_print___at___00IO_println___at___00Lean_Elab_printImports_spec__0_spec__0(v_s_1252_);
return v_res_1254_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00Lean_Elab_printImports_spec__0(lean_object* v_s_1255_){
_start:
{
uint32_t v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; 
v___x_1257_ = 10;
v___x_1258_ = lean_string_push(v_s_1255_, v___x_1257_);
v___x_1259_ = l_IO_print___at___00IO_println___at___00Lean_Elab_printImports_spec__0_spec__0(v___x_1258_);
return v___x_1259_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00Lean_Elab_printImports_spec__0___boxed(lean_object* v_s_1260_, lean_object* v_a_1261_){
_start:
{
lean_object* v_res_1262_; 
v_res_1262_ = l_IO_println___at___00Lean_Elab_printImports_spec__0(v_s_1260_);
return v_res_1262_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_printImports_spec__1(lean_object* v_as_1263_, size_t v_sz_1264_, size_t v_i_1265_, lean_object* v_b_1266_){
_start:
{
uint8_t v___x_1268_; 
v___x_1268_ = lean_usize_dec_lt(v_i_1265_, v_sz_1264_);
if (v___x_1268_ == 0)
{
lean_object* v___x_1269_; 
v___x_1269_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1269_, 0, v_b_1266_);
return v___x_1269_;
}
else
{
lean_object* v_a_1270_; lean_object* v_module_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; 
v_a_1270_ = lean_array_uget_borrowed(v_as_1263_, v_i_1265_);
v_module_1271_ = lean_ctor_get(v_a_1270_, 0);
v___x_1272_ = lean_box(0);
lean_inc(v_module_1271_);
v___x_1273_ = l_Lean_findOLean(v_module_1271_);
if (lean_obj_tag(v___x_1273_) == 0)
{
lean_object* v_a_1274_; lean_object* v___x_1275_; 
v_a_1274_ = lean_ctor_get(v___x_1273_, 0);
lean_inc(v_a_1274_);
lean_dec_ref_known(v___x_1273_, 1);
v___x_1275_ = l_IO_println___at___00Lean_Elab_printImports_spec__0(v_a_1274_);
if (lean_obj_tag(v___x_1275_) == 0)
{
size_t v___x_1276_; size_t v___x_1277_; 
lean_dec_ref_known(v___x_1275_, 1);
v___x_1276_ = ((size_t)1ULL);
v___x_1277_ = lean_usize_add(v_i_1265_, v___x_1276_);
v_i_1265_ = v___x_1277_;
v_b_1266_ = v___x_1272_;
goto _start;
}
else
{
return v___x_1275_;
}
}
else
{
lean_object* v_a_1279_; lean_object* v___x_1281_; uint8_t v_isShared_1282_; uint8_t v_isSharedCheck_1286_; 
v_a_1279_ = lean_ctor_get(v___x_1273_, 0);
v_isSharedCheck_1286_ = !lean_is_exclusive(v___x_1273_);
if (v_isSharedCheck_1286_ == 0)
{
v___x_1281_ = v___x_1273_;
v_isShared_1282_ = v_isSharedCheck_1286_;
goto v_resetjp_1280_;
}
else
{
lean_inc(v_a_1279_);
lean_dec(v___x_1273_);
v___x_1281_ = lean_box(0);
v_isShared_1282_ = v_isSharedCheck_1286_;
goto v_resetjp_1280_;
}
v_resetjp_1280_:
{
lean_object* v___x_1284_; 
if (v_isShared_1282_ == 0)
{
v___x_1284_ = v___x_1281_;
goto v_reusejp_1283_;
}
else
{
lean_object* v_reuseFailAlloc_1285_; 
v_reuseFailAlloc_1285_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1285_, 0, v_a_1279_);
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
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_printImports_spec__1___boxed(lean_object* v_as_1287_, lean_object* v_sz_1288_, lean_object* v_i_1289_, lean_object* v_b_1290_, lean_object* v___y_1291_){
_start:
{
size_t v_sz_boxed_1292_; size_t v_i_boxed_1293_; lean_object* v_res_1294_; 
v_sz_boxed_1292_ = lean_unbox_usize(v_sz_1288_);
lean_dec(v_sz_1288_);
v_i_boxed_1293_ = lean_unbox_usize(v_i_1289_);
lean_dec(v_i_1289_);
v_res_1294_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_printImports_spec__1(v_as_1287_, v_sz_boxed_1292_, v_i_boxed_1293_, v_b_1290_);
lean_dec_ref(v_as_1287_);
return v_res_1294_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_printImports(lean_object* v_input_1295_, lean_object* v_fileName_1296_){
_start:
{
lean_object* v___x_1298_; 
v___x_1298_ = l_Lean_Elab_parseImports(v_input_1295_, v_fileName_1296_);
if (lean_obj_tag(v___x_1298_) == 0)
{
lean_object* v_a_1299_; lean_object* v_fst_1300_; lean_object* v___x_1301_; size_t v_sz_1302_; size_t v___x_1303_; lean_object* v___x_1304_; 
v_a_1299_ = lean_ctor_get(v___x_1298_, 0);
lean_inc(v_a_1299_);
lean_dec_ref_known(v___x_1298_, 1);
v_fst_1300_ = lean_ctor_get(v_a_1299_, 0);
lean_inc(v_fst_1300_);
lean_dec(v_a_1299_);
v___x_1301_ = lean_box(0);
v_sz_1302_ = lean_array_size(v_fst_1300_);
v___x_1303_ = ((size_t)0ULL);
v___x_1304_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_printImports_spec__1(v_fst_1300_, v_sz_1302_, v___x_1303_, v___x_1301_);
lean_dec(v_fst_1300_);
if (lean_obj_tag(v___x_1304_) == 0)
{
lean_object* v___x_1306_; uint8_t v_isShared_1307_; uint8_t v_isSharedCheck_1311_; 
v_isSharedCheck_1311_ = !lean_is_exclusive(v___x_1304_);
if (v_isSharedCheck_1311_ == 0)
{
lean_object* v_unused_1312_; 
v_unused_1312_ = lean_ctor_get(v___x_1304_, 0);
lean_dec(v_unused_1312_);
v___x_1306_ = v___x_1304_;
v_isShared_1307_ = v_isSharedCheck_1311_;
goto v_resetjp_1305_;
}
else
{
lean_dec(v___x_1304_);
v___x_1306_ = lean_box(0);
v_isShared_1307_ = v_isSharedCheck_1311_;
goto v_resetjp_1305_;
}
v_resetjp_1305_:
{
lean_object* v___x_1309_; 
if (v_isShared_1307_ == 0)
{
lean_ctor_set(v___x_1306_, 0, v___x_1301_);
v___x_1309_ = v___x_1306_;
goto v_reusejp_1308_;
}
else
{
lean_object* v_reuseFailAlloc_1310_; 
v_reuseFailAlloc_1310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1310_, 0, v___x_1301_);
v___x_1309_ = v_reuseFailAlloc_1310_;
goto v_reusejp_1308_;
}
v_reusejp_1308_:
{
return v___x_1309_;
}
}
}
else
{
return v___x_1304_;
}
}
else
{
lean_object* v_a_1313_; lean_object* v___x_1315_; uint8_t v_isShared_1316_; uint8_t v_isSharedCheck_1320_; 
v_a_1313_ = lean_ctor_get(v___x_1298_, 0);
v_isSharedCheck_1320_ = !lean_is_exclusive(v___x_1298_);
if (v_isSharedCheck_1320_ == 0)
{
v___x_1315_ = v___x_1298_;
v_isShared_1316_ = v_isSharedCheck_1320_;
goto v_resetjp_1314_;
}
else
{
lean_inc(v_a_1313_);
lean_dec(v___x_1298_);
v___x_1315_ = lean_box(0);
v_isShared_1316_ = v_isSharedCheck_1320_;
goto v_resetjp_1314_;
}
v_resetjp_1314_:
{
lean_object* v___x_1318_; 
if (v_isShared_1316_ == 0)
{
v___x_1318_ = v___x_1315_;
goto v_reusejp_1317_;
}
else
{
lean_object* v_reuseFailAlloc_1319_; 
v_reuseFailAlloc_1319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1319_, 0, v_a_1313_);
v___x_1318_ = v_reuseFailAlloc_1319_;
goto v_reusejp_1317_;
}
v_reusejp_1317_:
{
return v___x_1318_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_printImports___boxed(lean_object* v_input_1321_, lean_object* v_fileName_1322_, lean_object* v_a_1323_){
_start:
{
lean_object* v_res_1324_; 
v_res_1324_ = l_Lean_Elab_printImports(v_input_1321_, v_fileName_1322_);
return v_res_1324_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_printImportSrcs_spec__0(lean_object* v_a_1325_, lean_object* v_as_1326_, size_t v_sz_1327_, size_t v_i_1328_, lean_object* v_b_1329_){
_start:
{
uint8_t v___x_1331_; 
v___x_1331_ = lean_usize_dec_lt(v_i_1328_, v_sz_1327_);
if (v___x_1331_ == 0)
{
lean_object* v___x_1332_; 
lean_dec(v_a_1325_);
v___x_1332_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1332_, 0, v_b_1329_);
return v___x_1332_;
}
else
{
lean_object* v_a_1333_; lean_object* v_module_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; 
v_a_1333_ = lean_array_uget_borrowed(v_as_1326_, v_i_1328_);
v_module_1334_ = lean_ctor_get(v_a_1333_, 0);
v___x_1335_ = lean_box(0);
lean_inc(v_module_1334_);
lean_inc(v_a_1325_);
v___x_1336_ = l_Lean_findLean(v_a_1325_, v_module_1334_);
if (lean_obj_tag(v___x_1336_) == 0)
{
lean_object* v_a_1337_; lean_object* v___x_1338_; 
v_a_1337_ = lean_ctor_get(v___x_1336_, 0);
lean_inc(v_a_1337_);
lean_dec_ref_known(v___x_1336_, 1);
v___x_1338_ = l_IO_println___at___00Lean_Elab_printImports_spec__0(v_a_1337_);
if (lean_obj_tag(v___x_1338_) == 0)
{
size_t v___x_1339_; size_t v___x_1340_; 
lean_dec_ref_known(v___x_1338_, 1);
v___x_1339_ = ((size_t)1ULL);
v___x_1340_ = lean_usize_add(v_i_1328_, v___x_1339_);
v_i_1328_ = v___x_1340_;
v_b_1329_ = v___x_1335_;
goto _start;
}
else
{
lean_dec(v_a_1325_);
return v___x_1338_;
}
}
else
{
lean_object* v_a_1342_; lean_object* v___x_1344_; uint8_t v_isShared_1345_; uint8_t v_isSharedCheck_1349_; 
lean_dec(v_a_1325_);
v_a_1342_ = lean_ctor_get(v___x_1336_, 0);
v_isSharedCheck_1349_ = !lean_is_exclusive(v___x_1336_);
if (v_isSharedCheck_1349_ == 0)
{
v___x_1344_ = v___x_1336_;
v_isShared_1345_ = v_isSharedCheck_1349_;
goto v_resetjp_1343_;
}
else
{
lean_inc(v_a_1342_);
lean_dec(v___x_1336_);
v___x_1344_ = lean_box(0);
v_isShared_1345_ = v_isSharedCheck_1349_;
goto v_resetjp_1343_;
}
v_resetjp_1343_:
{
lean_object* v___x_1347_; 
if (v_isShared_1345_ == 0)
{
v___x_1347_ = v___x_1344_;
goto v_reusejp_1346_;
}
else
{
lean_object* v_reuseFailAlloc_1348_; 
v_reuseFailAlloc_1348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1348_, 0, v_a_1342_);
v___x_1347_ = v_reuseFailAlloc_1348_;
goto v_reusejp_1346_;
}
v_reusejp_1346_:
{
return v___x_1347_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_printImportSrcs_spec__0___boxed(lean_object* v_a_1350_, lean_object* v_as_1351_, lean_object* v_sz_1352_, lean_object* v_i_1353_, lean_object* v_b_1354_, lean_object* v___y_1355_){
_start:
{
size_t v_sz_boxed_1356_; size_t v_i_boxed_1357_; lean_object* v_res_1358_; 
v_sz_boxed_1356_ = lean_unbox_usize(v_sz_1352_);
lean_dec(v_sz_1352_);
v_i_boxed_1357_ = lean_unbox_usize(v_i_1353_);
lean_dec(v_i_1353_);
v_res_1358_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_printImportSrcs_spec__0(v_a_1350_, v_as_1351_, v_sz_boxed_1356_, v_i_boxed_1357_, v_b_1354_);
lean_dec_ref(v_as_1351_);
return v_res_1358_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_printImportSrcs(lean_object* v_input_1359_, lean_object* v_fileName_1360_){
_start:
{
lean_object* v___x_1362_; 
v___x_1362_ = l_Lean_getSrcSearchPath();
if (lean_obj_tag(v___x_1362_) == 0)
{
lean_object* v_a_1363_; lean_object* v___x_1364_; 
v_a_1363_ = lean_ctor_get(v___x_1362_, 0);
lean_inc(v_a_1363_);
lean_dec_ref_known(v___x_1362_, 1);
v___x_1364_ = l_Lean_Elab_parseImports(v_input_1359_, v_fileName_1360_);
if (lean_obj_tag(v___x_1364_) == 0)
{
lean_object* v_a_1365_; lean_object* v_fst_1366_; lean_object* v___x_1367_; size_t v_sz_1368_; size_t v___x_1369_; lean_object* v___x_1370_; 
v_a_1365_ = lean_ctor_get(v___x_1364_, 0);
lean_inc(v_a_1365_);
lean_dec_ref_known(v___x_1364_, 1);
v_fst_1366_ = lean_ctor_get(v_a_1365_, 0);
lean_inc(v_fst_1366_);
lean_dec(v_a_1365_);
v___x_1367_ = lean_box(0);
v_sz_1368_ = lean_array_size(v_fst_1366_);
v___x_1369_ = ((size_t)0ULL);
v___x_1370_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_printImportSrcs_spec__0(v_a_1363_, v_fst_1366_, v_sz_1368_, v___x_1369_, v___x_1367_);
lean_dec(v_fst_1366_);
if (lean_obj_tag(v___x_1370_) == 0)
{
lean_object* v___x_1372_; uint8_t v_isShared_1373_; uint8_t v_isSharedCheck_1377_; 
v_isSharedCheck_1377_ = !lean_is_exclusive(v___x_1370_);
if (v_isSharedCheck_1377_ == 0)
{
lean_object* v_unused_1378_; 
v_unused_1378_ = lean_ctor_get(v___x_1370_, 0);
lean_dec(v_unused_1378_);
v___x_1372_ = v___x_1370_;
v_isShared_1373_ = v_isSharedCheck_1377_;
goto v_resetjp_1371_;
}
else
{
lean_dec(v___x_1370_);
v___x_1372_ = lean_box(0);
v_isShared_1373_ = v_isSharedCheck_1377_;
goto v_resetjp_1371_;
}
v_resetjp_1371_:
{
lean_object* v___x_1375_; 
if (v_isShared_1373_ == 0)
{
lean_ctor_set(v___x_1372_, 0, v___x_1367_);
v___x_1375_ = v___x_1372_;
goto v_reusejp_1374_;
}
else
{
lean_object* v_reuseFailAlloc_1376_; 
v_reuseFailAlloc_1376_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1376_, 0, v___x_1367_);
v___x_1375_ = v_reuseFailAlloc_1376_;
goto v_reusejp_1374_;
}
v_reusejp_1374_:
{
return v___x_1375_;
}
}
}
else
{
return v___x_1370_;
}
}
else
{
lean_object* v_a_1379_; lean_object* v___x_1381_; uint8_t v_isShared_1382_; uint8_t v_isSharedCheck_1386_; 
lean_dec(v_a_1363_);
v_a_1379_ = lean_ctor_get(v___x_1364_, 0);
v_isSharedCheck_1386_ = !lean_is_exclusive(v___x_1364_);
if (v_isSharedCheck_1386_ == 0)
{
v___x_1381_ = v___x_1364_;
v_isShared_1382_ = v_isSharedCheck_1386_;
goto v_resetjp_1380_;
}
else
{
lean_inc(v_a_1379_);
lean_dec(v___x_1364_);
v___x_1381_ = lean_box(0);
v_isShared_1382_ = v_isSharedCheck_1386_;
goto v_resetjp_1380_;
}
v_resetjp_1380_:
{
lean_object* v___x_1384_; 
if (v_isShared_1382_ == 0)
{
v___x_1384_ = v___x_1381_;
goto v_reusejp_1383_;
}
else
{
lean_object* v_reuseFailAlloc_1385_; 
v_reuseFailAlloc_1385_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1385_, 0, v_a_1379_);
v___x_1384_ = v_reuseFailAlloc_1385_;
goto v_reusejp_1383_;
}
v_reusejp_1383_:
{
return v___x_1384_;
}
}
}
}
else
{
lean_object* v_a_1387_; lean_object* v___x_1389_; uint8_t v_isShared_1390_; uint8_t v_isSharedCheck_1394_; 
lean_dec(v_fileName_1360_);
lean_dec_ref(v_input_1359_);
v_a_1387_ = lean_ctor_get(v___x_1362_, 0);
v_isSharedCheck_1394_ = !lean_is_exclusive(v___x_1362_);
if (v_isSharedCheck_1394_ == 0)
{
v___x_1389_ = v___x_1362_;
v_isShared_1390_ = v_isSharedCheck_1394_;
goto v_resetjp_1388_;
}
else
{
lean_inc(v_a_1387_);
lean_dec(v___x_1362_);
v___x_1389_ = lean_box(0);
v_isShared_1390_ = v_isSharedCheck_1394_;
goto v_resetjp_1388_;
}
v_resetjp_1388_:
{
lean_object* v___x_1392_; 
if (v_isShared_1390_ == 0)
{
v___x_1392_ = v___x_1389_;
goto v_reusejp_1391_;
}
else
{
lean_object* v_reuseFailAlloc_1393_; 
v_reuseFailAlloc_1393_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1393_, 0, v_a_1387_);
v___x_1392_ = v_reuseFailAlloc_1393_;
goto v_reusejp_1391_;
}
v_reusejp_1391_:
{
return v___x_1392_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_printImportSrcs___boxed(lean_object* v_input_1395_, lean_object* v_fileName_1396_, lean_object* v_a_1397_){
_start:
{
lean_object* v_res_1398_; 
v_res_1398_ = l_Lean_Elab_printImportSrcs(v_input_1395_, v_fileName_1396_);
return v_res_1398_;
}
}
lean_object* runtime_initialize_Lean_Parser_Module(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_ModPkgExt(uint8_t builtin);
lean_object* runtime_initialize_Lean_DeprecatedModule(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Modify(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Import(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Parser_Module(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_ModPkgExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DeprecatedModule(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Modify(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__1 = _init_l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__1();
lean_mark_persistent(l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__1);
l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__2 = _init_l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__2();
lean_mark_persistent(l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__2);
l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__3 = _init_l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__3();
lean_mark_persistent(l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__3);
l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__4 = _init_l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__4();
lean_mark_persistent(l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__4);
l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__5 = _init_l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__5();
lean_mark_persistent(l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__5);
l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__6 = _init_l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__6();
lean_mark_persistent(l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__6);
l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__7 = _init_l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__7();
lean_mark_persistent(l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__7);
l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars = _init_l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars();
lean_mark_persistent(l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lean_Parser_Module(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Import(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lean_Parser_Module(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Parser_Module(uint8_t builtin);
lean_object* initialize_Lean_Parser_Module(uint8_t builtin);
lean_object* initialize_Lean_Compiler_ModPkgExt(uint8_t builtin);
lean_object* initialize_Lean_DeprecatedModule(uint8_t builtin);
lean_object* initialize_Init_Data_String_Modify(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Import(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Parser_Module(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Module(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_ModPkgExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_DeprecatedModule(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Modify(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Import(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Import(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Import(builtin);
}
#ifdef __cplusplus
}
#endif

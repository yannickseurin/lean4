// Lean compiler output
// Module: Lake.Load.Lean.Elab
// Imports: public import Lake.Load.Config import Lean.Compiler.IR.CompilerM import Lean.Elab.Frontend import Lake.DSL.Extensions import Lake.Util.JsonObject import Init.System.Platform import Lake.DSL.AttributesCore
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
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_instBEqImport_beq(lean_object*, lean_object*);
lean_object* l_Lean_Json_getObjValD(lean_object*, lean_object*);
lean_object* l_Lean_Json_getNat_x3f(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_instInhabitedPersistentEnvExtension___redArg();
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lake_LogEntry_ofMessage(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedPersistentArrayNode_default___redArg();
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
size_t lean_usize_shift_left(size_t, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_String_toName(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Json_getStr_x3f(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_JsonNumber_fromNat(lean_object*);
lean_object* l_Lake_lowerHexUInt64(uint64_t);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
uint8_t lean_string_compare(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Json_mkObj(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
lean_object* l_Lean_readModuleData(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint64_t l_Lean_instHashableImport_hash(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
lean_object* lean_enable_initializer_execution();
lean_object* l_Lean_importModules(lean_object*, lean_object*, uint32_t, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
extern lean_object* l_Lean_persistentEnvExtensionsRef;
lean_object* l_Lean_mkExtNameMap(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* l_Lean_Name_fromJson_x3f(lean_object*);
lean_object* l_Lake_Hash_fromJson_x3f(lean_object*);
lean_object* l_Lean_Json_pretty(lean_object*, lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* l_IO_FS_readFile(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Lean_Parser_mkInputContext___redArg(lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Parser_parseHeader(lean_object*);
lean_object* l_Lean_Elab_HeaderSyntax_imports(lean_object*, uint8_t);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* l_Lean_mkEmptyEnvironment(uint32_t);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
extern lean_object* l_Lake_nameExt;
extern lean_object* l_Lake_dirExt;
extern lean_object* l_Lake_optsExt;
lean_object* l_Lean_Environment_setMainModule(lean_object*, lean_object*);
lean_object* l_Lean_EnvExtension_setState___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_mkState(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_IO_processCommands(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_MessageLog_hasErrors(lean_object*);
lean_object* lean_io_prim_handle_mk(lean_object*, uint8_t);
lean_object* lean_io_prim_handle_try_lock(lean_object*, uint8_t);
lean_object* lean_io_prim_handle_unlock(lean_object*);
lean_object* lean_io_prim_handle_lock(lean_object*, uint8_t);
lean_object* l_System_FilePath_fileName(lean_object*);
extern lean_object* l_Lake_defaultLakeDir;
lean_object* l_Lake_joinRelative(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_IO_FS_createDirAll(lean_object*);
lean_object* l_System_FilePath_withExtension(lean_object*, lean_object*);
lean_object* l_Lake_computeTextFileHash(lean_object*);
lean_object* lean_io_remove_file(lean_object*);
extern lean_object* l_System_Platform_target;
lean_object* l_Lake_Env_leanGithash(lean_object*);
lean_object* l_IO_FS_Handle_putStrLn(lean_object*, lean_object*);
lean_object* lean_io_prim_handle_flush(lean_object*);
lean_object* lean_io_prim_handle_truncate(lean_object*);
lean_object* l_Lean_writeModule(lean_object*, lean_object*, uint8_t);
lean_object* l_IO_FS_Handle_readToEnd(lean_object*);
lean_object* l_Lean_Json_parse(lean_object*);
lean_object* l_Lean_Json_getObj_x3f(lean_object*);
lean_object* l_Lake_JsonObject_getJson_x3f(lean_object*, lean_object*);
uint8_t l_System_FilePath_pathExists(lean_object*);
uint8_t lean_uint64_dec_eq(uint64_t, uint64_t);
static lean_once_cell_t l___private_Lake_Load_Lean_Elab_0__Lake_initFn___closed__0_00___x40_Lake_Load_Lean_Elab_4183325717____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_initFn___closed__0_00___x40_Lake_Load_Lean_Elab_4183325717____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lake_Load_Lean_Elab_0__Lake_initFn___closed__1_00___x40_Lake_Load_Lean_Elab_4183325717____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_initFn___closed__1_00___x40_Lake_Load_Lean_Elab_4183325717____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_initFn_00___x40_Lake_Load_Lean_Elab_4183325717____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_initFn_00___x40_Lake_Load_Lean_Elab_4183325717____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importEnvCache;
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importModulesUsingCache_unsafe__4();
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importModulesUsingCache_unsafe__4___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_importModulesUsingCache_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_importModulesUsingCache_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_importModulesUsingCache_spec__1_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_importModulesUsingCache_spec__1_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_importModulesUsingCache_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_importModulesUsingCache_spec__0_spec__1(lean_object*, size_t, size_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_importModulesUsingCache_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_importModulesUsingCache_spec__1_spec__4_spec__6_spec__7___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_importModulesUsingCache_spec__1_spec__4_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_importModulesUsingCache_spec__1_spec__4___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_importModulesUsingCache_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_importModulesUsingCache_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_importModulesUsingCache_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_importModulesUsingCache_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_importModulesUsingCache_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_array_object l_Lake_importModulesUsingCache___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_importModulesUsingCache___closed__0 = (const lean_object*)&l_Lake_importModulesUsingCache___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_importModulesUsingCache(lean_object*, lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_Lake_importModulesUsingCache___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_importModulesUsingCache_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_importModulesUsingCache_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_importModulesUsingCache_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_importModulesUsingCache_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_importModulesUsingCache_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_importModulesUsingCache_spec__1_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_importModulesUsingCache_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_importModulesUsingCache_spec__1_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_importModulesUsingCache_spec__1_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_importModulesUsingCache_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_importModulesUsingCache_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_importModulesUsingCache_spec__1_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_importModulesUsingCache_spec__1_spec__4_spec__6_spec__7(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Load_Lean_Elab_0__Lake_processHeader___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_processHeader___closed__0 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_processHeader___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_processHeader(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_processHeader___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_configModuleName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "lakefile"};
static const lean_object* l_Lake_configModuleName___closed__0 = (const lean_object*)&l_Lake_configModuleName___closed__0_value;
static const lean_ctor_object l_Lake_configModuleName___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_configModuleName___closed__0_value),LEAN_SCALAR_PTR_LITERAL(249, 28, 93, 140, 254, 254, 56, 70)}};
static const lean_object* l_Lake_configModuleName___closed__1 = (const lean_object*)&l_Lake_configModuleName___closed__1_value;
LEAN_EXPORT const lean_object* l_Lake_configModuleName = (const lean_object*)&l_Lake_configModuleName___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile_spec__0_spec__0_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile_spec__0_spec__0_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile_spec__0_spec__0_spec__1___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageLog_forM___at___00__private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageLog_forM___at___00__private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile___closed__0 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile___closed__0_value;
static const lean_string_object l___private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = ": package configuration has errors"};
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile___closed__1 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lake_environment_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_addToEnv___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lake"};
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__0 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__0_value;
static const lean_string_object l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "packageAttr"};
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__1 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__1_value;
static const lean_ctor_object l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__2_value_aux_0),((lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__1_value),LEAN_SCALAR_PTR_LITERAL(246, 216, 234, 151, 184, 29, 39, 9)}};
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__2 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__2_value;
static lean_once_cell_t l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__3;
static const lean_string_object l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "packageDepAttr"};
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__4 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__4_value;
static const lean_ctor_object l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__5_value_aux_0),((lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__4_value),LEAN_SCALAR_PTR_LITERAL(45, 68, 99, 181, 205, 9, 187, 35)}};
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__5 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__5_value;
static lean_once_cell_t l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__6;
static const lean_string_object l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "postUpdateAttr"};
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__7 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__7_value;
static const lean_ctor_object l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__8_value_aux_0),((lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__7_value),LEAN_SCALAR_PTR_LITERAL(85, 79, 83, 54, 241, 232, 152, 172)}};
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__8 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__8_value;
static lean_once_cell_t l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__9;
static const lean_string_object l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "scriptAttr"};
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__10 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__10_value;
static const lean_ctor_object l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__11_value_aux_0),((lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__10_value),LEAN_SCALAR_PTR_LITERAL(26, 29, 82, 124, 109, 105, 242, 204)}};
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__11 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__11_value;
static lean_once_cell_t l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__12;
static const lean_string_object l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "defaultScriptAttr"};
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__13 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__13_value;
static const lean_ctor_object l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__14_value_aux_0),((lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__13_value),LEAN_SCALAR_PTR_LITERAL(102, 220, 227, 87, 142, 243, 134, 10)}};
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__14 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__14_value;
static lean_once_cell_t l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__15;
static const lean_string_object l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "leanLibAttr"};
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__16 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__16_value;
static const lean_ctor_object l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__17_value_aux_0),((lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__16_value),LEAN_SCALAR_PTR_LITERAL(32, 216, 106, 32, 231, 39, 130, 108)}};
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__17 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__17_value;
static lean_once_cell_t l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__18;
static const lean_string_object l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "leanExeAttr"};
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__19 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__19_value;
static const lean_ctor_object l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__20_value_aux_0),((lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__19_value),LEAN_SCALAR_PTR_LITERAL(188, 182, 7, 15, 47, 104, 138, 158)}};
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__20 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__20_value;
static lean_once_cell_t l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__21;
static const lean_string_object l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "externLibAttr"};
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__22 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__22_value;
static const lean_ctor_object l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__23_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__23_value_aux_0),((lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__22_value),LEAN_SCALAR_PTR_LITERAL(101, 0, 33, 72, 82, 211, 54, 104)}};
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__23 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__23_value;
static lean_once_cell_t l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__24;
static const lean_string_object l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "targetAttr"};
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__25 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__25_value;
static const lean_ctor_object l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__26_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__26_value_aux_0),((lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__25_value),LEAN_SCALAR_PTR_LITERAL(230, 170, 78, 40, 161, 217, 169, 127)}};
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__26 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__26_value;
static lean_once_cell_t l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__27;
static const lean_string_object l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "defaultTargetAttr"};
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__28 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__28_value;
static const lean_ctor_object l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__29_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__29_value_aux_0),((lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__28_value),LEAN_SCALAR_PTR_LITERAL(136, 50, 195, 92, 10, 179, 138, 115)}};
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__29 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__29_value;
static lean_once_cell_t l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__30;
static const lean_string_object l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "testDriverAttr"};
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__31 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__31_value;
static const lean_ctor_object l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__32_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__32_value_aux_0),((lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__31_value),LEAN_SCALAR_PTR_LITERAL(145, 171, 145, 31, 167, 29, 89, 20)}};
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__32 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__32_value;
static lean_once_cell_t l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__33;
static const lean_string_object l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "lintDriverAttr"};
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__34 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__34_value;
static const lean_ctor_object l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__35_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__35_value_aux_0),((lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__34_value),LEAN_SCALAR_PTR_LITERAL(162, 200, 112, 121, 111, 252, 78, 167)}};
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__35 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__35_value;
static lean_once_cell_t l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__36;
static const lean_string_object l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "moduleFacetAttr"};
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__37 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__37_value;
static const lean_ctor_object l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__38_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__38_value_aux_0),((lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__37_value),LEAN_SCALAR_PTR_LITERAL(184, 177, 55, 179, 152, 236, 7, 155)}};
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__38 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__38_value;
static lean_once_cell_t l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__39;
static const lean_string_object l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "packageFacetAttr"};
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__40 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__40_value;
static const lean_ctor_object l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__41_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__41_value_aux_0),((lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__40_value),LEAN_SCALAR_PTR_LITERAL(30, 214, 121, 146, 170, 223, 202, 251)}};
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__41 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__41_value;
static lean_once_cell_t l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__42_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__42;
static const lean_string_object l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "libraryFacetAttr"};
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__43 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__43_value;
static const lean_ctor_object l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__44_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__44_value_aux_0),((lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__43_value),LEAN_SCALAR_PTR_LITERAL(68, 159, 200, 109, 254, 124, 216, 54)}};
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__44 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__44_value;
static lean_once_cell_t l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__45_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__45;
static const lean_string_object l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__46 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__46_value;
static const lean_string_object l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "docStringExt"};
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__47 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__47_value;
static const lean_ctor_object l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__48_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__46_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__48_value_aux_0),((lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__47_value),LEAN_SCALAR_PTR_LITERAL(220, 176, 252, 112, 223, 70, 141, 135)}};
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__48 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__48_value;
static lean_once_cell_t l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__49_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__49;
static const lean_string_object l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "IR"};
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__50 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__50_value;
static const lean_string_object l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "declMapExt"};
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__51 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__51_value;
static const lean_ctor_object l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__52_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__46_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__52_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__52_value_aux_0),((lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__50_value),LEAN_SCALAR_PTR_LITERAL(225, 220, 115, 150, 240, 139, 111, 12)}};
static const lean_ctor_object l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__52_value_aux_1),((lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__51_value),LEAN_SCALAR_PTR_LITERAL(176, 236, 150, 45, 29, 146, 124, 106)}};
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__52 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__52_value;
static lean_once_cell_t l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__53_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__53;
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__1___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__1___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0_spec__1___redArg(lean_object*);
static const lean_string_object l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Std.Data.DTreeMap.Internal.Balancing"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0___redArg___closed__0 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0___redArg___closed__0_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Std.DTreeMap.Internal.Impl.balanceL!"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0___redArg___closed__1 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0___redArg___closed__1_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "balanceL! input was not balanced"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0___redArg___closed__2 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0___redArg___closed__2_value;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0___redArg___closed__3;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0___redArg___closed__4;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Std.DTreeMap.Internal.Impl.balanceR!"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0___redArg___closed__5 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0___redArg___closed__5_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "balanceR! input was not balanced"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0___redArg___closed__6 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0___redArg___closed__6_value;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0___redArg___closed__7;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0___redArg___closed__8;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__1(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "idx"};
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson___closed__0 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson___closed__0_value;
static const lean_string_object l___private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson___closed__1 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson___closed__1_value;
static const lean_string_object l___private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "platform"};
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson___closed__2 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson___closed__2_value;
static const lean_string_object l___private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "leanHash"};
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson___closed__3 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson___closed__3_value;
static const lean_string_object l___private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "configHash"};
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson___closed__4 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson___closed__4_value;
static const lean_string_object l___private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "options"};
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson___closed__5 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson___closed__5_value;
static const lean_array_object l___private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson___closed__6 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__1(lean_object*, lean_object*);
static const lean_closure_object l___private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace___closed__0 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson_spec__3___boxed(lean_object*, lean_object*);
static const lean_string_object l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson_spec__4_spec__4_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "[anonymous]"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson_spec__4_spec__4_spec__5___closed__0 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson_spec__4_spec__4_spec__5___closed__0_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson_spec__4_spec__4_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "expected a `Name`, got '"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson_spec__4_spec__4_spec__5___closed__1 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson_spec__4_spec__4_spec__5___closed__1_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson_spec__4_spec__4_spec__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson_spec__4_spec__4_spec__5___closed__2 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson_spec__4_spec__4_spec__5___closed__2_value;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson_spec__4_spec__4_spec__5(lean_object*, lean_object*);
static const lean_string_object l_Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson_spec__4_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "expected a `NameMap`, got '"};
static const lean_object* l_Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson_spec__4_spec__4___closed__0 = (const lean_object*)&l_Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson_spec__4_spec__4___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson_spec__4_spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson_spec__4___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__0 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__0_value;
static lean_once_cell_t l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__1;
static lean_once_cell_t l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__2;
static const lean_string_object l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Load"};
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__3 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__3_value;
static lean_once_cell_t l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__4;
static lean_once_cell_t l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__5;
static const lean_string_object l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__6 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__6_value;
static lean_once_cell_t l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__7;
static lean_once_cell_t l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__8;
static lean_once_cell_t l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__9;
static const lean_string_object l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "ConfigTrace"};
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__10 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__10_value;
static lean_once_cell_t l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__11;
static lean_once_cell_t l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__12;
static const lean_string_object l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__13 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__13_value;
static lean_once_cell_t l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__14;
static const lean_ctor_object l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(84, 246, 160, 71, 192, 5, 128, 186)}};
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__15 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__15_value;
static lean_once_cell_t l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__16;
static lean_once_cell_t l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__17;
static const lean_string_object l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__18 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__18_value;
static lean_once_cell_t l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__19;
static const lean_ctor_object l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(84, 246, 234, 130, 97, 205, 144, 82)}};
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__20 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__20_value;
static lean_once_cell_t l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__21;
static lean_once_cell_t l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__22;
static lean_once_cell_t l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__23;
static const lean_ctor_object l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson___closed__2_value),LEAN_SCALAR_PTR_LITERAL(227, 42, 147, 74, 160, 173, 203, 244)}};
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__24 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__24_value;
static lean_once_cell_t l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__25;
static lean_once_cell_t l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__26;
static lean_once_cell_t l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__27;
static const lean_ctor_object l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson___closed__3_value),LEAN_SCALAR_PTR_LITERAL(240, 241, 210, 157, 244, 84, 172, 19)}};
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__28 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__28_value;
static lean_once_cell_t l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__29;
static lean_once_cell_t l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__30;
static lean_once_cell_t l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__31;
static const lean_ctor_object l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson___closed__4_value),LEAN_SCALAR_PTR_LITERAL(226, 162, 205, 82, 193, 115, 8, 28)}};
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__32 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__32_value;
static lean_once_cell_t l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__33;
static lean_once_cell_t l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__34;
static lean_once_cell_t l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__35;
static const lean_ctor_object l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson___closed__5_value),LEAN_SCALAR_PTR_LITERAL(15, 45, 121, 141, 112, 165, 100, 9)}};
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__36 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__36_value;
static lean_once_cell_t l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__37;
static lean_once_cell_t l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__38;
static lean_once_cell_t l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__39;
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson(lean_object*);
static const lean_closure_object l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace___closed__0 = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace = (const lean_object*)&l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace___closed__0_value;
static const lean_string_object l_Lake_importConfigFile___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 108, .m_capacity = 108, .m_length = 107, .m_data = "could not acquire an exclusive configuration lock; another process may already be reconfiguring the package"};
static const lean_object* l_Lake_importConfigFile___lam__0___closed__0 = (const lean_object*)&l_Lake_importConfigFile___lam__0___closed__0_value;
static lean_once_cell_t l_Lake_importConfigFile___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_importConfigFile___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lake_importConfigFile___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_importConfigFile___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_importConfigFile___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "invalid configuration file name"};
static const lean_object* l_Lake_importConfigFile___closed__0 = (const lean_object*)&l_Lake_importConfigFile___closed__0_value;
static const lean_ctor_object l_Lake_importConfigFile___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_importConfigFile___closed__0_value),LEAN_SCALAR_PTR_LITERAL(3, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_importConfigFile___closed__1 = (const lean_object*)&l_Lake_importConfigFile___closed__1_value;
static const lean_string_object l_Lake_importConfigFile___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "config"};
static const lean_object* l_Lake_importConfigFile___closed__2 = (const lean_object*)&l_Lake_importConfigFile___closed__2_value;
static const lean_string_object l_Lake_importConfigFile___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "olean"};
static const lean_object* l_Lake_importConfigFile___closed__3 = (const lean_object*)&l_Lake_importConfigFile___closed__3_value;
static const lean_string_object l_Lake_importConfigFile___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "olean.trace"};
static const lean_object* l_Lake_importConfigFile___closed__4 = (const lean_object*)&l_Lake_importConfigFile___closed__4_value;
static const lean_string_object l_Lake_importConfigFile___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "olean.lock"};
static const lean_object* l_Lake_importConfigFile___closed__5 = (const lean_object*)&l_Lake_importConfigFile___closed__5_value;
LEAN_EXPORT lean_object* l_Lake_importConfigFile(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_importConfigFile___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* _init_l___private_Lake_Load_Lean_Elab_0__Lake_initFn___closed__0_00___x40_Lake_Load_Lean_Elab_4183325717____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_1_ = lean_box(0);
v___x_2_ = lean_unsigned_to_nat(16u);
v___x_3_ = lean_mk_array(v___x_2_, v___x_1_);
return v___x_3_;
}
}
static lean_object* _init_l___private_Lake_Load_Lean_Elab_0__Lake_initFn___closed__1_00___x40_Lake_Load_Lean_Elab_4183325717____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_4_ = lean_obj_once(&l___private_Lake_Load_Lean_Elab_0__Lake_initFn___closed__0_00___x40_Lake_Load_Lean_Elab_4183325717____hygCtx___hyg_2_, &l___private_Lake_Load_Lean_Elab_0__Lake_initFn___closed__0_00___x40_Lake_Load_Lean_Elab_4183325717____hygCtx___hyg_2__once, _init_l___private_Lake_Load_Lean_Elab_0__Lake_initFn___closed__0_00___x40_Lake_Load_Lean_Elab_4183325717____hygCtx___hyg_2_);
v___x_5_ = lean_unsigned_to_nat(0u);
v___x_6_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
lean_ctor_set(v___x_6_, 1, v___x_4_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_initFn_00___x40_Lake_Load_Lean_Elab_4183325717____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; 
v___x_8_ = lean_obj_once(&l___private_Lake_Load_Lean_Elab_0__Lake_initFn___closed__1_00___x40_Lake_Load_Lean_Elab_4183325717____hygCtx___hyg_2_, &l___private_Lake_Load_Lean_Elab_0__Lake_initFn___closed__1_00___x40_Lake_Load_Lean_Elab_4183325717____hygCtx___hyg_2__once, _init_l___private_Lake_Load_Lean_Elab_0__Lake_initFn___closed__1_00___x40_Lake_Load_Lean_Elab_4183325717____hygCtx___hyg_2_);
v___x_9_ = lean_st_mk_ref(v___x_8_);
v___x_10_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_10_, 0, v___x_9_);
return v___x_10_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_initFn_00___x40_Lake_Load_Lean_Elab_4183325717____hygCtx___hyg_2____boxed(lean_object* v_a_11_){
_start:
{
lean_object* v_res_12_; 
v_res_12_ = l___private_Lake_Load_Lean_Elab_0__Lake_initFn_00___x40_Lake_Load_Lean_Elab_4183325717____hygCtx___hyg_2_();
return v_res_12_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importModulesUsingCache_unsafe__4(){
_start:
{
lean_object* v___x_14_; 
v___x_14_ = lean_enable_initializer_execution();
return v___x_14_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importModulesUsingCache_unsafe__4___boxed(lean_object* v_a_15_){
_start:
{
lean_object* v_res_16_; 
v_res_16_ = l___private_Lake_Load_Lean_Elab_0__Lake_importModulesUsingCache_unsafe__4();
return v_res_16_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_importModulesUsingCache_spec__0_spec__0_spec__1___redArg(lean_object* v_xs_17_, lean_object* v_ys_18_, lean_object* v_x_19_){
_start:
{
lean_object* v_zero_20_; uint8_t v_isZero_21_; 
v_zero_20_ = lean_unsigned_to_nat(0u);
v_isZero_21_ = lean_nat_dec_eq(v_x_19_, v_zero_20_);
if (v_isZero_21_ == 1)
{
lean_dec(v_x_19_);
return v_isZero_21_;
}
else
{
lean_object* v_one_22_; lean_object* v_n_23_; lean_object* v___x_24_; lean_object* v___x_25_; uint8_t v___x_26_; 
v_one_22_ = lean_unsigned_to_nat(1u);
v_n_23_ = lean_nat_sub(v_x_19_, v_one_22_);
lean_dec(v_x_19_);
v___x_24_ = lean_array_fget_borrowed(v_xs_17_, v_n_23_);
v___x_25_ = lean_array_fget_borrowed(v_ys_18_, v_n_23_);
v___x_26_ = l_Lean_instBEqImport_beq(v___x_24_, v___x_25_);
if (v___x_26_ == 0)
{
lean_dec(v_n_23_);
return v___x_26_;
}
else
{
v_x_19_ = v_n_23_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_importModulesUsingCache_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_xs_28_, lean_object* v_ys_29_, lean_object* v_x_30_){
_start:
{
uint8_t v_res_31_; lean_object* v_r_32_; 
v_res_31_ = l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_importModulesUsingCache_spec__0_spec__0_spec__1___redArg(v_xs_28_, v_ys_29_, v_x_30_);
lean_dec_ref(v_ys_29_);
lean_dec_ref(v_xs_28_);
v_r_32_ = lean_box(v_res_31_);
return v_r_32_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_importModulesUsingCache_spec__1_spec__5___redArg(lean_object* v_a_33_, lean_object* v_b_34_, lean_object* v_x_35_){
_start:
{
if (lean_obj_tag(v_x_35_) == 0)
{
lean_dec(v_b_34_);
lean_dec_ref(v_a_33_);
return v_x_35_;
}
else
{
lean_object* v_key_36_; lean_object* v_value_37_; lean_object* v_tail_38_; lean_object* v___x_40_; uint8_t v_isShared_41_; uint8_t v_isSharedCheck_52_; 
v_key_36_ = lean_ctor_get(v_x_35_, 0);
v_value_37_ = lean_ctor_get(v_x_35_, 1);
v_tail_38_ = lean_ctor_get(v_x_35_, 2);
v_isSharedCheck_52_ = !lean_is_exclusive(v_x_35_);
if (v_isSharedCheck_52_ == 0)
{
v___x_40_ = v_x_35_;
v_isShared_41_ = v_isSharedCheck_52_;
goto v_resetjp_39_;
}
else
{
lean_inc(v_tail_38_);
lean_inc(v_value_37_);
lean_inc(v_key_36_);
lean_dec(v_x_35_);
v___x_40_ = lean_box(0);
v_isShared_41_ = v_isSharedCheck_52_;
goto v_resetjp_39_;
}
v_resetjp_39_:
{
lean_object* v___x_47_; lean_object* v___x_48_; uint8_t v___x_49_; 
v___x_47_ = lean_array_get_size(v_key_36_);
v___x_48_ = lean_array_get_size(v_a_33_);
v___x_49_ = lean_nat_dec_eq(v___x_47_, v___x_48_);
if (v___x_49_ == 0)
{
goto v___jp_42_;
}
else
{
uint8_t v___x_50_; 
v___x_50_ = l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_importModulesUsingCache_spec__0_spec__0_spec__1___redArg(v_key_36_, v_a_33_, v___x_47_);
if (v___x_50_ == 0)
{
goto v___jp_42_;
}
else
{
lean_object* v___x_51_; 
lean_del_object(v___x_40_);
lean_dec(v_value_37_);
lean_dec(v_key_36_);
v___x_51_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_51_, 0, v_a_33_);
lean_ctor_set(v___x_51_, 1, v_b_34_);
lean_ctor_set(v___x_51_, 2, v_tail_38_);
return v___x_51_;
}
}
v___jp_42_:
{
lean_object* v___x_43_; lean_object* v___x_45_; 
v___x_43_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_importModulesUsingCache_spec__1_spec__5___redArg(v_a_33_, v_b_34_, v_tail_38_);
if (v_isShared_41_ == 0)
{
lean_ctor_set(v___x_40_, 2, v___x_43_);
v___x_45_ = v___x_40_;
goto v_reusejp_44_;
}
else
{
lean_object* v_reuseFailAlloc_46_; 
v_reuseFailAlloc_46_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_46_, 0, v_key_36_);
lean_ctor_set(v_reuseFailAlloc_46_, 1, v_value_37_);
lean_ctor_set(v_reuseFailAlloc_46_, 2, v___x_43_);
v___x_45_ = v_reuseFailAlloc_46_;
goto v_reusejp_44_;
}
v_reusejp_44_:
{
return v___x_45_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_importModulesUsingCache_spec__1_spec__3___redArg(lean_object* v_a_53_, lean_object* v_x_54_){
_start:
{
if (lean_obj_tag(v_x_54_) == 0)
{
uint8_t v___x_55_; 
v___x_55_ = 0;
return v___x_55_;
}
else
{
lean_object* v_key_56_; lean_object* v_tail_57_; lean_object* v___x_58_; lean_object* v___x_59_; uint8_t v___x_60_; 
v_key_56_ = lean_ctor_get(v_x_54_, 0);
v_tail_57_ = lean_ctor_get(v_x_54_, 2);
v___x_58_ = lean_array_get_size(v_key_56_);
v___x_59_ = lean_array_get_size(v_a_53_);
v___x_60_ = lean_nat_dec_eq(v___x_58_, v___x_59_);
if (v___x_60_ == 0)
{
v_x_54_ = v_tail_57_;
goto _start;
}
else
{
uint8_t v___x_62_; 
v___x_62_ = l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_importModulesUsingCache_spec__0_spec__0_spec__1___redArg(v_key_56_, v_a_53_, v___x_58_);
if (v___x_62_ == 0)
{
v_x_54_ = v_tail_57_;
goto _start;
}
else
{
return v___x_62_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_importModulesUsingCache_spec__1_spec__3___redArg___boxed(lean_object* v_a_64_, lean_object* v_x_65_){
_start:
{
uint8_t v_res_66_; lean_object* v_r_67_; 
v_res_66_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_importModulesUsingCache_spec__1_spec__3___redArg(v_a_64_, v_x_65_);
lean_dec(v_x_65_);
lean_dec_ref(v_a_64_);
v_r_67_ = lean_box(v_res_66_);
return v_r_67_;
}
}
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_importModulesUsingCache_spec__0_spec__1(lean_object* v_as_68_, size_t v_i_69_, size_t v_stop_70_, uint64_t v_b_71_){
_start:
{
uint8_t v___x_72_; 
v___x_72_ = lean_usize_dec_eq(v_i_69_, v_stop_70_);
if (v___x_72_ == 0)
{
lean_object* v___x_73_; uint64_t v___x_74_; uint64_t v___x_75_; size_t v___x_76_; size_t v___x_77_; 
v___x_73_ = lean_array_uget_borrowed(v_as_68_, v_i_69_);
v___x_74_ = l_Lean_instHashableImport_hash(v___x_73_);
v___x_75_ = lean_uint64_mix_hash(v_b_71_, v___x_74_);
v___x_76_ = ((size_t)1ULL);
v___x_77_ = lean_usize_add(v_i_69_, v___x_76_);
v_i_69_ = v___x_77_;
v_b_71_ = v___x_75_;
goto _start;
}
else
{
return v_b_71_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_importModulesUsingCache_spec__0_spec__1___boxed(lean_object* v_as_79_, lean_object* v_i_80_, lean_object* v_stop_81_, lean_object* v_b_82_){
_start:
{
size_t v_i_boxed_83_; size_t v_stop_boxed_84_; uint64_t v_b_boxed_85_; uint64_t v_res_86_; lean_object* v_r_87_; 
v_i_boxed_83_ = lean_unbox_usize(v_i_80_);
lean_dec(v_i_80_);
v_stop_boxed_84_ = lean_unbox_usize(v_stop_81_);
lean_dec(v_stop_81_);
v_b_boxed_85_ = lean_unbox_uint64(v_b_82_);
lean_dec_ref(v_b_82_);
v_res_86_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_importModulesUsingCache_spec__0_spec__1(v_as_79_, v_i_boxed_83_, v_stop_boxed_84_, v_b_boxed_85_);
lean_dec_ref(v_as_79_);
v_r_87_ = lean_box_uint64(v_res_86_);
return v_r_87_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_importModulesUsingCache_spec__1_spec__4_spec__6_spec__7___redArg(lean_object* v_x_88_, lean_object* v_x_89_){
_start:
{
if (lean_obj_tag(v_x_89_) == 0)
{
return v_x_88_;
}
else
{
lean_object* v_key_90_; lean_object* v_value_91_; lean_object* v_tail_92_; lean_object* v___x_94_; uint8_t v_isShared_95_; uint8_t v_isSharedCheck_123_; 
v_key_90_ = lean_ctor_get(v_x_89_, 0);
v_value_91_ = lean_ctor_get(v_x_89_, 1);
v_tail_92_ = lean_ctor_get(v_x_89_, 2);
v_isSharedCheck_123_ = !lean_is_exclusive(v_x_89_);
if (v_isSharedCheck_123_ == 0)
{
v___x_94_ = v_x_89_;
v_isShared_95_ = v_isSharedCheck_123_;
goto v_resetjp_93_;
}
else
{
lean_inc(v_tail_92_);
lean_inc(v_value_91_);
lean_inc(v_key_90_);
lean_dec(v_x_89_);
v___x_94_ = lean_box(0);
v_isShared_95_ = v_isSharedCheck_123_;
goto v_resetjp_93_;
}
v_resetjp_93_:
{
lean_object* v___x_96_; uint64_t v___y_98_; uint64_t v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; uint8_t v___x_119_; 
v___x_96_ = lean_array_get_size(v_x_88_);
v___x_116_ = 7ULL;
v___x_117_ = lean_unsigned_to_nat(0u);
v___x_118_ = lean_array_get_size(v_key_90_);
v___x_119_ = lean_nat_dec_lt(v___x_117_, v___x_118_);
if (v___x_119_ == 0)
{
v___y_98_ = v___x_116_;
goto v___jp_97_;
}
else
{
size_t v___x_120_; size_t v___x_121_; uint64_t v___x_122_; 
v___x_120_ = ((size_t)0ULL);
v___x_121_ = lean_usize_of_nat(v___x_118_);
v___x_122_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_importModulesUsingCache_spec__0_spec__1(v_key_90_, v___x_120_, v___x_121_, v___x_116_);
v___y_98_ = v___x_122_;
goto v___jp_97_;
}
v___jp_97_:
{
uint64_t v___x_99_; uint64_t v___x_100_; uint64_t v_fold_101_; uint64_t v___x_102_; uint64_t v___x_103_; uint64_t v___x_104_; size_t v___x_105_; size_t v___x_106_; size_t v___x_107_; size_t v___x_108_; size_t v___x_109_; lean_object* v___x_110_; lean_object* v___x_112_; 
v___x_99_ = 32ULL;
v___x_100_ = lean_uint64_shift_right(v___y_98_, v___x_99_);
v_fold_101_ = lean_uint64_xor(v___y_98_, v___x_100_);
v___x_102_ = 16ULL;
v___x_103_ = lean_uint64_shift_right(v_fold_101_, v___x_102_);
v___x_104_ = lean_uint64_xor(v_fold_101_, v___x_103_);
v___x_105_ = lean_uint64_to_usize(v___x_104_);
v___x_106_ = lean_usize_of_nat(v___x_96_);
v___x_107_ = ((size_t)1ULL);
v___x_108_ = lean_usize_sub(v___x_106_, v___x_107_);
v___x_109_ = lean_usize_land(v___x_105_, v___x_108_);
v___x_110_ = lean_array_uget_borrowed(v_x_88_, v___x_109_);
lean_inc(v___x_110_);
if (v_isShared_95_ == 0)
{
lean_ctor_set(v___x_94_, 2, v___x_110_);
v___x_112_ = v___x_94_;
goto v_reusejp_111_;
}
else
{
lean_object* v_reuseFailAlloc_115_; 
v_reuseFailAlloc_115_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_115_, 0, v_key_90_);
lean_ctor_set(v_reuseFailAlloc_115_, 1, v_value_91_);
lean_ctor_set(v_reuseFailAlloc_115_, 2, v___x_110_);
v___x_112_ = v_reuseFailAlloc_115_;
goto v_reusejp_111_;
}
v_reusejp_111_:
{
lean_object* v___x_113_; 
v___x_113_ = lean_array_uset(v_x_88_, v___x_109_, v___x_112_);
v_x_88_ = v___x_113_;
v_x_89_ = v_tail_92_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_importModulesUsingCache_spec__1_spec__4_spec__6___redArg(lean_object* v_i_124_, lean_object* v_source_125_, lean_object* v_target_126_){
_start:
{
lean_object* v___x_127_; uint8_t v___x_128_; 
v___x_127_ = lean_array_get_size(v_source_125_);
v___x_128_ = lean_nat_dec_lt(v_i_124_, v___x_127_);
if (v___x_128_ == 0)
{
lean_dec_ref(v_source_125_);
lean_dec(v_i_124_);
return v_target_126_;
}
else
{
lean_object* v_es_129_; lean_object* v___x_130_; lean_object* v_source_131_; lean_object* v_target_132_; lean_object* v___x_133_; lean_object* v___x_134_; 
v_es_129_ = lean_array_fget(v_source_125_, v_i_124_);
v___x_130_ = lean_box(0);
v_source_131_ = lean_array_fset(v_source_125_, v_i_124_, v___x_130_);
v_target_132_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_importModulesUsingCache_spec__1_spec__4_spec__6_spec__7___redArg(v_target_126_, v_es_129_);
v___x_133_ = lean_unsigned_to_nat(1u);
v___x_134_ = lean_nat_add(v_i_124_, v___x_133_);
lean_dec(v_i_124_);
v_i_124_ = v___x_134_;
v_source_125_ = v_source_131_;
v_target_126_ = v_target_132_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_importModulesUsingCache_spec__1_spec__4___redArg(lean_object* v_data_136_){
_start:
{
lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v_nbuckets_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; 
v___x_137_ = lean_array_get_size(v_data_136_);
v___x_138_ = lean_unsigned_to_nat(2u);
v_nbuckets_139_ = lean_nat_mul(v___x_137_, v___x_138_);
v___x_140_ = lean_unsigned_to_nat(0u);
v___x_141_ = lean_box(0);
v___x_142_ = lean_mk_array(v_nbuckets_139_, v___x_141_);
v___x_143_ = lean_array_propagate_mark(v_data_136_, v___x_142_);
v___x_144_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_importModulesUsingCache_spec__1_spec__4_spec__6___redArg(v___x_140_, v_data_136_, v___x_143_);
return v___x_144_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_importModulesUsingCache_spec__1___redArg(lean_object* v_m_145_, lean_object* v_a_146_, lean_object* v_b_147_){
_start:
{
lean_object* v_size_148_; lean_object* v_buckets_149_; lean_object* v___x_151_; uint8_t v_isShared_152_; uint8_t v_isSharedCheck_200_; 
v_size_148_ = lean_ctor_get(v_m_145_, 0);
v_buckets_149_ = lean_ctor_get(v_m_145_, 1);
v_isSharedCheck_200_ = !lean_is_exclusive(v_m_145_);
if (v_isSharedCheck_200_ == 0)
{
v___x_151_ = v_m_145_;
v_isShared_152_ = v_isSharedCheck_200_;
goto v_resetjp_150_;
}
else
{
lean_inc(v_buckets_149_);
lean_inc(v_size_148_);
lean_dec(v_m_145_);
v___x_151_ = lean_box(0);
v_isShared_152_ = v_isSharedCheck_200_;
goto v_resetjp_150_;
}
v_resetjp_150_:
{
lean_object* v___x_153_; uint64_t v___y_155_; uint64_t v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; uint8_t v___x_196_; 
v___x_153_ = lean_array_get_size(v_buckets_149_);
v___x_193_ = 7ULL;
v___x_194_ = lean_unsigned_to_nat(0u);
v___x_195_ = lean_array_get_size(v_a_146_);
v___x_196_ = lean_nat_dec_lt(v___x_194_, v___x_195_);
if (v___x_196_ == 0)
{
v___y_155_ = v___x_193_;
goto v___jp_154_;
}
else
{
size_t v___x_197_; size_t v___x_198_; uint64_t v___x_199_; 
v___x_197_ = ((size_t)0ULL);
v___x_198_ = lean_usize_of_nat(v___x_195_);
v___x_199_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_importModulesUsingCache_spec__0_spec__1(v_a_146_, v___x_197_, v___x_198_, v___x_193_);
v___y_155_ = v___x_199_;
goto v___jp_154_;
}
v___jp_154_:
{
uint64_t v___x_156_; uint64_t v___x_157_; uint64_t v_fold_158_; uint64_t v___x_159_; uint64_t v___x_160_; uint64_t v___x_161_; size_t v___x_162_; size_t v___x_163_; size_t v___x_164_; size_t v___x_165_; size_t v___x_166_; lean_object* v_bkt_167_; uint8_t v___x_168_; 
v___x_156_ = 32ULL;
v___x_157_ = lean_uint64_shift_right(v___y_155_, v___x_156_);
v_fold_158_ = lean_uint64_xor(v___y_155_, v___x_157_);
v___x_159_ = 16ULL;
v___x_160_ = lean_uint64_shift_right(v_fold_158_, v___x_159_);
v___x_161_ = lean_uint64_xor(v_fold_158_, v___x_160_);
v___x_162_ = lean_uint64_to_usize(v___x_161_);
v___x_163_ = lean_usize_of_nat(v___x_153_);
v___x_164_ = ((size_t)1ULL);
v___x_165_ = lean_usize_sub(v___x_163_, v___x_164_);
v___x_166_ = lean_usize_land(v___x_162_, v___x_165_);
v_bkt_167_ = lean_array_uget_borrowed(v_buckets_149_, v___x_166_);
v___x_168_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_importModulesUsingCache_spec__1_spec__3___redArg(v_a_146_, v_bkt_167_);
if (v___x_168_ == 0)
{
lean_object* v___x_169_; lean_object* v_size_x27_170_; lean_object* v___x_171_; lean_object* v_buckets_x27_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; uint8_t v___x_178_; 
v___x_169_ = lean_unsigned_to_nat(1u);
v_size_x27_170_ = lean_nat_add(v_size_148_, v___x_169_);
lean_dec(v_size_148_);
lean_inc(v_bkt_167_);
v___x_171_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_171_, 0, v_a_146_);
lean_ctor_set(v___x_171_, 1, v_b_147_);
lean_ctor_set(v___x_171_, 2, v_bkt_167_);
v_buckets_x27_172_ = lean_array_uset(v_buckets_149_, v___x_166_, v___x_171_);
v___x_173_ = lean_unsigned_to_nat(4u);
v___x_174_ = lean_nat_mul(v_size_x27_170_, v___x_173_);
v___x_175_ = lean_unsigned_to_nat(3u);
v___x_176_ = lean_nat_div(v___x_174_, v___x_175_);
lean_dec(v___x_174_);
v___x_177_ = lean_array_get_size(v_buckets_x27_172_);
v___x_178_ = lean_nat_dec_le(v___x_176_, v___x_177_);
lean_dec(v___x_176_);
if (v___x_178_ == 0)
{
lean_object* v_val_179_; lean_object* v___x_181_; 
v_val_179_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_importModulesUsingCache_spec__1_spec__4___redArg(v_buckets_x27_172_);
if (v_isShared_152_ == 0)
{
lean_ctor_set(v___x_151_, 1, v_val_179_);
lean_ctor_set(v___x_151_, 0, v_size_x27_170_);
v___x_181_ = v___x_151_;
goto v_reusejp_180_;
}
else
{
lean_object* v_reuseFailAlloc_182_; 
v_reuseFailAlloc_182_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_182_, 0, v_size_x27_170_);
lean_ctor_set(v_reuseFailAlloc_182_, 1, v_val_179_);
v___x_181_ = v_reuseFailAlloc_182_;
goto v_reusejp_180_;
}
v_reusejp_180_:
{
return v___x_181_;
}
}
else
{
lean_object* v___x_184_; 
if (v_isShared_152_ == 0)
{
lean_ctor_set(v___x_151_, 1, v_buckets_x27_172_);
lean_ctor_set(v___x_151_, 0, v_size_x27_170_);
v___x_184_ = v___x_151_;
goto v_reusejp_183_;
}
else
{
lean_object* v_reuseFailAlloc_185_; 
v_reuseFailAlloc_185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_185_, 0, v_size_x27_170_);
lean_ctor_set(v_reuseFailAlloc_185_, 1, v_buckets_x27_172_);
v___x_184_ = v_reuseFailAlloc_185_;
goto v_reusejp_183_;
}
v_reusejp_183_:
{
return v___x_184_;
}
}
}
else
{
lean_object* v___x_186_; lean_object* v_buckets_x27_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_191_; 
lean_inc(v_bkt_167_);
v___x_186_ = lean_box(0);
v_buckets_x27_187_ = lean_array_uset(v_buckets_149_, v___x_166_, v___x_186_);
v___x_188_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_importModulesUsingCache_spec__1_spec__5___redArg(v_a_146_, v_b_147_, v_bkt_167_);
v___x_189_ = lean_array_uset(v_buckets_x27_187_, v___x_166_, v___x_188_);
if (v_isShared_152_ == 0)
{
lean_ctor_set(v___x_151_, 1, v___x_189_);
v___x_191_ = v___x_151_;
goto v_reusejp_190_;
}
else
{
lean_object* v_reuseFailAlloc_192_; 
v_reuseFailAlloc_192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_192_, 0, v_size_148_);
lean_ctor_set(v_reuseFailAlloc_192_, 1, v___x_189_);
v___x_191_ = v_reuseFailAlloc_192_;
goto v_reusejp_190_;
}
v_reusejp_190_:
{
return v___x_191_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_importModulesUsingCache_spec__0_spec__0___redArg(lean_object* v_a_201_, lean_object* v_x_202_){
_start:
{
if (lean_obj_tag(v_x_202_) == 0)
{
lean_object* v___x_203_; 
v___x_203_ = lean_box(0);
return v___x_203_;
}
else
{
lean_object* v_key_204_; lean_object* v_value_205_; lean_object* v_tail_206_; lean_object* v___x_207_; lean_object* v___x_208_; uint8_t v___x_209_; 
v_key_204_ = lean_ctor_get(v_x_202_, 0);
v_value_205_ = lean_ctor_get(v_x_202_, 1);
v_tail_206_ = lean_ctor_get(v_x_202_, 2);
v___x_207_ = lean_array_get_size(v_key_204_);
v___x_208_ = lean_array_get_size(v_a_201_);
v___x_209_ = lean_nat_dec_eq(v___x_207_, v___x_208_);
if (v___x_209_ == 0)
{
v_x_202_ = v_tail_206_;
goto _start;
}
else
{
uint8_t v___x_211_; 
v___x_211_ = l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_importModulesUsingCache_spec__0_spec__0_spec__1___redArg(v_key_204_, v_a_201_, v___x_207_);
if (v___x_211_ == 0)
{
v_x_202_ = v_tail_206_;
goto _start;
}
else
{
lean_object* v___x_213_; 
lean_inc(v_value_205_);
v___x_213_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_213_, 0, v_value_205_);
return v___x_213_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_importModulesUsingCache_spec__0_spec__0___redArg___boxed(lean_object* v_a_214_, lean_object* v_x_215_){
_start:
{
lean_object* v_res_216_; 
v_res_216_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_importModulesUsingCache_spec__0_spec__0___redArg(v_a_214_, v_x_215_);
lean_dec(v_x_215_);
lean_dec_ref(v_a_214_);
return v_res_216_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_importModulesUsingCache_spec__0___redArg(lean_object* v_m_217_, lean_object* v_a_218_){
_start:
{
lean_object* v_buckets_219_; lean_object* v___x_220_; uint64_t v___y_222_; uint64_t v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; uint8_t v___x_239_; 
v_buckets_219_ = lean_ctor_get(v_m_217_, 1);
v___x_220_ = lean_array_get_size(v_buckets_219_);
v___x_236_ = 7ULL;
v___x_237_ = lean_unsigned_to_nat(0u);
v___x_238_ = lean_array_get_size(v_a_218_);
v___x_239_ = lean_nat_dec_lt(v___x_237_, v___x_238_);
if (v___x_239_ == 0)
{
v___y_222_ = v___x_236_;
goto v___jp_221_;
}
else
{
size_t v___x_240_; size_t v___x_241_; uint64_t v___x_242_; 
v___x_240_ = ((size_t)0ULL);
v___x_241_ = lean_usize_of_nat(v___x_238_);
v___x_242_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_importModulesUsingCache_spec__0_spec__1(v_a_218_, v___x_240_, v___x_241_, v___x_236_);
v___y_222_ = v___x_242_;
goto v___jp_221_;
}
v___jp_221_:
{
uint64_t v___x_223_; uint64_t v___x_224_; uint64_t v_fold_225_; uint64_t v___x_226_; uint64_t v___x_227_; uint64_t v___x_228_; size_t v___x_229_; size_t v___x_230_; size_t v___x_231_; size_t v___x_232_; size_t v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; 
v___x_223_ = 32ULL;
v___x_224_ = lean_uint64_shift_right(v___y_222_, v___x_223_);
v_fold_225_ = lean_uint64_xor(v___y_222_, v___x_224_);
v___x_226_ = 16ULL;
v___x_227_ = lean_uint64_shift_right(v_fold_225_, v___x_226_);
v___x_228_ = lean_uint64_xor(v_fold_225_, v___x_227_);
v___x_229_ = lean_uint64_to_usize(v___x_228_);
v___x_230_ = lean_usize_of_nat(v___x_220_);
v___x_231_ = ((size_t)1ULL);
v___x_232_ = lean_usize_sub(v___x_230_, v___x_231_);
v___x_233_ = lean_usize_land(v___x_229_, v___x_232_);
v___x_234_ = lean_array_uget_borrowed(v_buckets_219_, v___x_233_);
v___x_235_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_importModulesUsingCache_spec__0_spec__0___redArg(v_a_218_, v___x_234_);
return v___x_235_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_importModulesUsingCache_spec__0___redArg___boxed(lean_object* v_m_243_, lean_object* v_a_244_){
_start:
{
lean_object* v_res_245_; 
v_res_245_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_importModulesUsingCache_spec__0___redArg(v_m_243_, v_a_244_);
lean_dec_ref(v_a_244_);
lean_dec_ref(v_m_243_);
return v_res_245_;
}
}
LEAN_EXPORT lean_object* l_Lake_importModulesUsingCache(lean_object* v_imports_248_, lean_object* v_opts_249_, uint32_t v_trustLevel_250_){
_start:
{
lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; 
v___x_252_ = l___private_Lake_Load_Lean_Elab_0__Lake_importEnvCache;
v___x_253_ = lean_st_ref_get(v___x_252_);
v___x_254_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_importModulesUsingCache_spec__0___redArg(v___x_253_, v_imports_248_);
lean_dec(v___x_253_);
if (lean_obj_tag(v___x_254_) == 1)
{
lean_object* v_val_255_; lean_object* v___x_257_; uint8_t v_isShared_258_; uint8_t v_isSharedCheck_262_; 
lean_dec_ref(v_opts_249_);
lean_dec_ref(v_imports_248_);
v_val_255_ = lean_ctor_get(v___x_254_, 0);
v_isSharedCheck_262_ = !lean_is_exclusive(v___x_254_);
if (v_isSharedCheck_262_ == 0)
{
v___x_257_ = v___x_254_;
v_isShared_258_ = v_isSharedCheck_262_;
goto v_resetjp_256_;
}
else
{
lean_inc(v_val_255_);
lean_dec(v___x_254_);
v___x_257_ = lean_box(0);
v_isShared_258_ = v_isSharedCheck_262_;
goto v_resetjp_256_;
}
v_resetjp_256_:
{
lean_object* v___x_260_; 
if (v_isShared_258_ == 0)
{
lean_ctor_set_tag(v___x_257_, 0);
v___x_260_ = v___x_257_;
goto v_reusejp_259_;
}
else
{
lean_object* v_reuseFailAlloc_261_; 
v_reuseFailAlloc_261_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_261_, 0, v_val_255_);
v___x_260_ = v_reuseFailAlloc_261_;
goto v_reusejp_259_;
}
v_reusejp_259_:
{
return v___x_260_;
}
}
}
else
{
lean_object* v___x_263_; lean_object* v___x_264_; uint8_t v___x_265_; uint8_t v___x_266_; uint8_t v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; 
lean_dec(v___x_254_);
v___x_263_ = lean_enable_initializer_execution();
v___x_264_ = ((lean_object*)(l_Lake_importModulesUsingCache___closed__0));
v___x_265_ = 0;
v___x_266_ = 1;
v___x_267_ = 2;
v___x_268_ = lean_box(1);
lean_inc_ref(v_imports_248_);
v___x_269_ = l_Lean_importModules(v_imports_248_, v_opts_249_, v_trustLevel_250_, v___x_264_, v___x_265_, v___x_266_, v___x_267_, v___x_268_);
if (lean_obj_tag(v___x_269_) == 0)
{
lean_object* v_a_270_; lean_object* v___x_272_; uint8_t v_isShared_273_; uint8_t v_isSharedCheck_280_; 
v_a_270_ = lean_ctor_get(v___x_269_, 0);
v_isSharedCheck_280_ = !lean_is_exclusive(v___x_269_);
if (v_isSharedCheck_280_ == 0)
{
v___x_272_ = v___x_269_;
v_isShared_273_ = v_isSharedCheck_280_;
goto v_resetjp_271_;
}
else
{
lean_inc(v_a_270_);
lean_dec(v___x_269_);
v___x_272_ = lean_box(0);
v_isShared_273_ = v_isSharedCheck_280_;
goto v_resetjp_271_;
}
v_resetjp_271_:
{
lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_278_; 
v___x_274_ = lean_st_ref_take(v___x_252_);
lean_inc(v_a_270_);
v___x_275_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_importModulesUsingCache_spec__1___redArg(v___x_274_, v_imports_248_, v_a_270_);
v___x_276_ = lean_st_ref_put(v___x_252_, v___x_275_);
if (v_isShared_273_ == 0)
{
v___x_278_ = v___x_272_;
goto v_reusejp_277_;
}
else
{
lean_object* v_reuseFailAlloc_279_; 
v_reuseFailAlloc_279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_279_, 0, v_a_270_);
v___x_278_ = v_reuseFailAlloc_279_;
goto v_reusejp_277_;
}
v_reusejp_277_:
{
return v___x_278_;
}
}
}
else
{
lean_dec_ref(v_imports_248_);
return v___x_269_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_importModulesUsingCache___boxed(lean_object* v_imports_281_, lean_object* v_opts_282_, lean_object* v_trustLevel_283_, lean_object* v_a_284_){
_start:
{
uint32_t v_trustLevel_boxed_285_; lean_object* v_res_286_; 
v_trustLevel_boxed_285_ = lean_unbox_uint32(v_trustLevel_283_);
lean_dec(v_trustLevel_283_);
v_res_286_ = l_Lake_importModulesUsingCache(v_imports_281_, v_opts_282_, v_trustLevel_boxed_285_);
return v_res_286_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_importModulesUsingCache_spec__0(lean_object* v_00_u03b2_287_, lean_object* v_m_288_, lean_object* v_a_289_){
_start:
{
lean_object* v___x_290_; 
v___x_290_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_importModulesUsingCache_spec__0___redArg(v_m_288_, v_a_289_);
return v___x_290_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_importModulesUsingCache_spec__0___boxed(lean_object* v_00_u03b2_291_, lean_object* v_m_292_, lean_object* v_a_293_){
_start:
{
lean_object* v_res_294_; 
v_res_294_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_importModulesUsingCache_spec__0(v_00_u03b2_291_, v_m_292_, v_a_293_);
lean_dec_ref(v_a_293_);
lean_dec_ref(v_m_292_);
return v_res_294_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_importModulesUsingCache_spec__1(lean_object* v_00_u03b2_295_, lean_object* v_m_296_, lean_object* v_a_297_, lean_object* v_b_298_){
_start:
{
lean_object* v___x_299_; 
v___x_299_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_importModulesUsingCache_spec__1___redArg(v_m_296_, v_a_297_, v_b_298_);
return v___x_299_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_importModulesUsingCache_spec__0_spec__0(lean_object* v_00_u03b2_300_, lean_object* v_a_301_, lean_object* v_x_302_){
_start:
{
lean_object* v___x_303_; 
v___x_303_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_importModulesUsingCache_spec__0_spec__0___redArg(v_a_301_, v_x_302_);
return v___x_303_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_importModulesUsingCache_spec__0_spec__0___boxed(lean_object* v_00_u03b2_304_, lean_object* v_a_305_, lean_object* v_x_306_){
_start:
{
lean_object* v_res_307_; 
v_res_307_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_importModulesUsingCache_spec__0_spec__0(v_00_u03b2_304_, v_a_305_, v_x_306_);
lean_dec(v_x_306_);
lean_dec_ref(v_a_305_);
return v_res_307_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_importModulesUsingCache_spec__1_spec__3(lean_object* v_00_u03b2_308_, lean_object* v_a_309_, lean_object* v_x_310_){
_start:
{
uint8_t v___x_311_; 
v___x_311_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_importModulesUsingCache_spec__1_spec__3___redArg(v_a_309_, v_x_310_);
return v___x_311_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_importModulesUsingCache_spec__1_spec__3___boxed(lean_object* v_00_u03b2_312_, lean_object* v_a_313_, lean_object* v_x_314_){
_start:
{
uint8_t v_res_315_; lean_object* v_r_316_; 
v_res_315_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_importModulesUsingCache_spec__1_spec__3(v_00_u03b2_312_, v_a_313_, v_x_314_);
lean_dec(v_x_314_);
lean_dec_ref(v_a_313_);
v_r_316_ = lean_box(v_res_315_);
return v_r_316_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_importModulesUsingCache_spec__1_spec__4(lean_object* v_00_u03b2_317_, lean_object* v_data_318_){
_start:
{
lean_object* v___x_319_; 
v___x_319_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_importModulesUsingCache_spec__1_spec__4___redArg(v_data_318_);
return v___x_319_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_importModulesUsingCache_spec__1_spec__5(lean_object* v_00_u03b2_320_, lean_object* v_a_321_, lean_object* v_b_322_, lean_object* v_x_323_){
_start:
{
lean_object* v___x_324_; 
v___x_324_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_importModulesUsingCache_spec__1_spec__5___redArg(v_a_321_, v_b_322_, v_x_323_);
return v___x_324_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_importModulesUsingCache_spec__0_spec__0_spec__1(lean_object* v_xs_325_, lean_object* v_ys_326_, lean_object* v_hsz_327_, lean_object* v_x_328_, lean_object* v_x_329_){
_start:
{
uint8_t v___x_330_; 
v___x_330_ = l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_importModulesUsingCache_spec__0_spec__0_spec__1___redArg(v_xs_325_, v_ys_326_, v_x_328_);
return v___x_330_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_importModulesUsingCache_spec__0_spec__0_spec__1___boxed(lean_object* v_xs_331_, lean_object* v_ys_332_, lean_object* v_hsz_333_, lean_object* v_x_334_, lean_object* v_x_335_){
_start:
{
uint8_t v_res_336_; lean_object* v_r_337_; 
v_res_336_ = l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_importModulesUsingCache_spec__0_spec__0_spec__1(v_xs_331_, v_ys_332_, v_hsz_333_, v_x_334_, v_x_335_);
lean_dec_ref(v_ys_332_);
lean_dec_ref(v_xs_331_);
v_r_337_ = lean_box(v_res_336_);
return v_r_337_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_importModulesUsingCache_spec__1_spec__4_spec__6(lean_object* v_00_u03b2_338_, lean_object* v_i_339_, lean_object* v_source_340_, lean_object* v_target_341_){
_start:
{
lean_object* v___x_342_; 
v___x_342_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_importModulesUsingCache_spec__1_spec__4_spec__6___redArg(v_i_339_, v_source_340_, v_target_341_);
return v___x_342_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_importModulesUsingCache_spec__1_spec__4_spec__6_spec__7(lean_object* v_00_u03b2_343_, lean_object* v_x_344_, lean_object* v_x_345_){
_start:
{
lean_object* v___x_346_; 
v___x_346_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_importModulesUsingCache_spec__1_spec__4_spec__6_spec__7___redArg(v_x_344_, v_x_345_);
return v___x_346_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_processHeader(lean_object* v_header_348_, lean_object* v_opts_349_, lean_object* v_inputCtx_350_, lean_object* v_a_351_){
_start:
{
uint8_t v___x_353_; lean_object* v_imports_354_; uint32_t v___x_355_; lean_object* v___x_356_; 
v___x_353_ = 1;
lean_inc(v_header_348_);
v_imports_354_ = l_Lean_Elab_HeaderSyntax_imports(v_header_348_, v___x_353_);
v___x_355_ = 1024;
v___x_356_ = l_Lake_importModulesUsingCache(v_imports_354_, v_opts_349_, v___x_355_);
if (lean_obj_tag(v___x_356_) == 0)
{
lean_object* v_a_357_; lean_object* v___x_359_; uint8_t v_isShared_360_; uint8_t v_isSharedCheck_365_; 
lean_dec_ref(v_inputCtx_350_);
lean_dec(v_header_348_);
v_a_357_ = lean_ctor_get(v___x_356_, 0);
v_isSharedCheck_365_ = !lean_is_exclusive(v___x_356_);
if (v_isSharedCheck_365_ == 0)
{
v___x_359_ = v___x_356_;
v_isShared_360_ = v_isSharedCheck_365_;
goto v_resetjp_358_;
}
else
{
lean_inc(v_a_357_);
lean_dec(v___x_356_);
v___x_359_ = lean_box(0);
v_isShared_360_ = v_isSharedCheck_365_;
goto v_resetjp_358_;
}
v_resetjp_358_:
{
lean_object* v___x_361_; lean_object* v___x_363_; 
v___x_361_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_361_, 0, v_a_357_);
lean_ctor_set(v___x_361_, 1, v_a_351_);
if (v_isShared_360_ == 0)
{
lean_ctor_set(v___x_359_, 0, v___x_361_);
v___x_363_ = v___x_359_;
goto v_reusejp_362_;
}
else
{
lean_object* v_reuseFailAlloc_364_; 
v_reuseFailAlloc_364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_364_, 0, v___x_361_);
v___x_363_ = v_reuseFailAlloc_364_;
goto v_reusejp_362_;
}
v_reusejp_362_:
{
return v___x_363_;
}
}
}
else
{
lean_object* v_a_366_; lean_object* v_fileName_367_; lean_object* v_fileMap_368_; uint8_t v___x_369_; lean_object* v___y_371_; lean_object* v___x_400_; 
v_a_366_ = lean_ctor_get(v___x_356_, 0);
lean_inc(v_a_366_);
lean_dec_ref_known(v___x_356_, 1);
v_fileName_367_ = lean_ctor_get(v_inputCtx_350_, 1);
lean_inc_ref(v_fileName_367_);
v_fileMap_368_ = lean_ctor_get(v_inputCtx_350_, 2);
lean_inc_ref(v_fileMap_368_);
lean_dec_ref(v_inputCtx_350_);
v___x_369_ = 0;
v___x_400_ = l_Lean_Syntax_getPos_x3f(v_header_348_, v___x_369_);
lean_dec(v_header_348_);
if (lean_obj_tag(v___x_400_) == 0)
{
lean_object* v___x_401_; 
v___x_401_ = lean_unsigned_to_nat(0u);
v___y_371_ = v___x_401_;
goto v___jp_370_;
}
else
{
lean_object* v_val_402_; 
v_val_402_ = lean_ctor_get(v___x_400_, 0);
lean_inc(v_val_402_);
lean_dec_ref_known(v___x_400_, 1);
v___y_371_ = v_val_402_;
goto v___jp_370_;
}
v___jp_370_:
{
lean_object* v___x_372_; lean_object* v___x_373_; uint8_t v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; uint32_t v___x_381_; lean_object* v___x_382_; 
v___x_372_ = l_Lean_FileMap_toPosition(v_fileMap_368_, v___y_371_);
lean_dec(v___y_371_);
v___x_373_ = lean_box(0);
v___x_374_ = 2;
v___x_375_ = ((lean_object*)(l___private_Lake_Load_Lean_Elab_0__Lake_processHeader___closed__0));
v___x_376_ = lean_io_error_to_string(v_a_366_);
v___x_377_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_377_, 0, v___x_376_);
v___x_378_ = l_Lean_MessageData_ofFormat(v___x_377_);
v___x_379_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_379_, 0, v_fileName_367_);
lean_ctor_set(v___x_379_, 1, v___x_372_);
lean_ctor_set(v___x_379_, 2, v___x_373_);
lean_ctor_set(v___x_379_, 3, v___x_375_);
lean_ctor_set(v___x_379_, 4, v___x_378_);
lean_ctor_set_uint8(v___x_379_, sizeof(void*)*5, v___x_369_);
lean_ctor_set_uint8(v___x_379_, sizeof(void*)*5 + 1, v___x_374_);
lean_ctor_set_uint8(v___x_379_, sizeof(void*)*5 + 2, v___x_369_);
v___x_380_ = l_Lean_MessageLog_add(v___x_379_, v_a_351_);
v___x_381_ = 0;
v___x_382_ = l_Lean_mkEmptyEnvironment(v___x_381_);
if (lean_obj_tag(v___x_382_) == 0)
{
lean_object* v_a_383_; lean_object* v___x_385_; uint8_t v_isShared_386_; uint8_t v_isSharedCheck_391_; 
v_a_383_ = lean_ctor_get(v___x_382_, 0);
v_isSharedCheck_391_ = !lean_is_exclusive(v___x_382_);
if (v_isSharedCheck_391_ == 0)
{
v___x_385_ = v___x_382_;
v_isShared_386_ = v_isSharedCheck_391_;
goto v_resetjp_384_;
}
else
{
lean_inc(v_a_383_);
lean_dec(v___x_382_);
v___x_385_ = lean_box(0);
v_isShared_386_ = v_isSharedCheck_391_;
goto v_resetjp_384_;
}
v_resetjp_384_:
{
lean_object* v___x_387_; lean_object* v___x_389_; 
v___x_387_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_387_, 0, v_a_383_);
lean_ctor_set(v___x_387_, 1, v___x_380_);
if (v_isShared_386_ == 0)
{
lean_ctor_set(v___x_385_, 0, v___x_387_);
v___x_389_ = v___x_385_;
goto v_reusejp_388_;
}
else
{
lean_object* v_reuseFailAlloc_390_; 
v_reuseFailAlloc_390_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_390_, 0, v___x_387_);
v___x_389_ = v_reuseFailAlloc_390_;
goto v_reusejp_388_;
}
v_reusejp_388_:
{
return v___x_389_;
}
}
}
else
{
lean_object* v_a_392_; lean_object* v___x_394_; uint8_t v_isShared_395_; uint8_t v_isSharedCheck_399_; 
lean_dec_ref(v___x_380_);
v_a_392_ = lean_ctor_get(v___x_382_, 0);
v_isSharedCheck_399_ = !lean_is_exclusive(v___x_382_);
if (v_isSharedCheck_399_ == 0)
{
v___x_394_ = v___x_382_;
v_isShared_395_ = v_isSharedCheck_399_;
goto v_resetjp_393_;
}
else
{
lean_inc(v_a_392_);
lean_dec(v___x_382_);
v___x_394_ = lean_box(0);
v_isShared_395_ = v_isSharedCheck_399_;
goto v_resetjp_393_;
}
v_resetjp_393_:
{
lean_object* v___x_397_; 
if (v_isShared_395_ == 0)
{
v___x_397_ = v___x_394_;
goto v_reusejp_396_;
}
else
{
lean_object* v_reuseFailAlloc_398_; 
v_reuseFailAlloc_398_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_398_, 0, v_a_392_);
v___x_397_ = v_reuseFailAlloc_398_;
goto v_reusejp_396_;
}
v_reusejp_396_:
{
return v___x_397_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_processHeader___boxed(lean_object* v_header_403_, lean_object* v_opts_404_, lean_object* v_inputCtx_405_, lean_object* v_a_406_, lean_object* v_a_407_){
_start:
{
lean_object* v_res_408_; 
v_res_408_ = l___private_Lake_Load_Lean_Elab_0__Lake_processHeader(v_header_403_, v_opts_404_, v_inputCtx_405_, v_a_406_);
return v_res_408_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile___lam__0(lean_object* v_x_413_, lean_object* v___y_414_){
_start:
{
uint8_t v_isSilent_416_; 
v_isSilent_416_ = lean_ctor_get_uint8(v_x_413_, sizeof(void*)*5 + 2);
if (v_isSilent_416_ == 0)
{
lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; 
v___x_417_ = l_Lake_LogEntry_ofMessage(v_x_413_);
v___x_418_ = lean_box(0);
v___x_419_ = lean_array_push(v___y_414_, v___x_417_);
v___x_420_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_420_, 0, v___x_418_);
lean_ctor_set(v___x_420_, 1, v___x_419_);
return v___x_420_;
}
else
{
lean_object* v___x_421_; lean_object* v___x_422_; 
lean_dec_ref(v_x_413_);
v___x_421_ = lean_box(0);
v___x_422_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_422_, 0, v___x_421_);
lean_ctor_set(v___x_422_, 1, v___y_414_);
return v___x_422_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile___lam__0___boxed(lean_object* v_x_423_, lean_object* v___y_424_, lean_object* v___y_425_){
_start:
{
lean_object* v_res_426_; 
v_res_426_ = l___private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile___lam__0(v_x_423_, v___y_424_);
return v_res_426_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile_spec__0_spec__0_spec__2(lean_object* v_f_427_, lean_object* v_as_428_, size_t v_i_429_, size_t v_stop_430_, lean_object* v_b_431_, lean_object* v___y_432_){
_start:
{
uint8_t v___x_434_; 
v___x_434_ = lean_usize_dec_eq(v_i_429_, v_stop_430_);
if (v___x_434_ == 0)
{
lean_object* v___x_435_; lean_object* v___x_436_; 
v___x_435_ = lean_array_uget_borrowed(v_as_428_, v_i_429_);
lean_inc_ref(v_f_427_);
lean_inc(v___x_435_);
v___x_436_ = lean_apply_3(v_f_427_, v___x_435_, v___y_432_, lean_box(0));
if (lean_obj_tag(v___x_436_) == 0)
{
lean_object* v_a_437_; lean_object* v_a_438_; size_t v___x_439_; size_t v___x_440_; 
v_a_437_ = lean_ctor_get(v___x_436_, 0);
lean_inc(v_a_437_);
v_a_438_ = lean_ctor_get(v___x_436_, 1);
lean_inc(v_a_438_);
lean_dec_ref_known(v___x_436_, 2);
v___x_439_ = ((size_t)1ULL);
v___x_440_ = lean_usize_add(v_i_429_, v___x_439_);
v_i_429_ = v___x_440_;
v_b_431_ = v_a_437_;
v___y_432_ = v_a_438_;
goto _start;
}
else
{
lean_dec_ref(v_f_427_);
return v___x_436_;
}
}
else
{
lean_object* v___x_442_; 
lean_dec_ref(v_f_427_);
v___x_442_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_442_, 0, v_b_431_);
lean_ctor_set(v___x_442_, 1, v___y_432_);
return v___x_442_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile_spec__0_spec__0_spec__2___boxed(lean_object* v_f_443_, lean_object* v_as_444_, lean_object* v_i_445_, lean_object* v_stop_446_, lean_object* v_b_447_, lean_object* v___y_448_, lean_object* v___y_449_){
_start:
{
size_t v_i_boxed_450_; size_t v_stop_boxed_451_; lean_object* v_res_452_; 
v_i_boxed_450_ = lean_unbox_usize(v_i_445_);
lean_dec(v_i_445_);
v_stop_boxed_451_ = lean_unbox_usize(v_stop_446_);
lean_dec(v_stop_446_);
v_res_452_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile_spec__0_spec__0_spec__2(v_f_443_, v_as_444_, v_i_boxed_450_, v_stop_boxed_451_, v_b_447_, v___y_448_);
lean_dec_ref(v_as_444_);
return v_res_452_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile_spec__0_spec__0_spec__1_spec__2(lean_object* v_f_453_, lean_object* v_x_454_, lean_object* v___y_455_){
_start:
{
if (lean_obj_tag(v_x_454_) == 0)
{
lean_object* v_cs_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; uint8_t v___x_461_; 
v_cs_457_ = lean_ctor_get(v_x_454_, 0);
v___x_458_ = lean_unsigned_to_nat(0u);
v___x_459_ = lean_array_get_size(v_cs_457_);
v___x_460_ = lean_box(0);
v___x_461_ = lean_nat_dec_lt(v___x_458_, v___x_459_);
if (v___x_461_ == 0)
{
lean_object* v___x_462_; 
lean_dec_ref(v_f_453_);
v___x_462_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_462_, 0, v___x_460_);
lean_ctor_set(v___x_462_, 1, v___y_455_);
return v___x_462_;
}
else
{
size_t v___x_463_; size_t v___x_464_; lean_object* v___x_465_; 
v___x_463_ = ((size_t)0ULL);
v___x_464_ = lean_usize_of_nat(v___x_459_);
v___x_465_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile_spec__0_spec__0_spec__1_spec__3(v_f_453_, v_cs_457_, v___x_463_, v___x_464_, v___x_460_, v___y_455_);
return v___x_465_;
}
}
else
{
lean_object* v_vs_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; uint8_t v___x_470_; 
v_vs_466_ = lean_ctor_get(v_x_454_, 0);
v___x_467_ = lean_unsigned_to_nat(0u);
v___x_468_ = lean_array_get_size(v_vs_466_);
v___x_469_ = lean_box(0);
v___x_470_ = lean_nat_dec_lt(v___x_467_, v___x_468_);
if (v___x_470_ == 0)
{
lean_object* v___x_471_; 
lean_dec_ref(v_f_453_);
v___x_471_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_471_, 0, v___x_469_);
lean_ctor_set(v___x_471_, 1, v___y_455_);
return v___x_471_;
}
else
{
size_t v___x_472_; size_t v___x_473_; lean_object* v___x_474_; 
v___x_472_ = ((size_t)0ULL);
v___x_473_ = lean_usize_of_nat(v___x_468_);
v___x_474_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile_spec__0_spec__0_spec__2(v_f_453_, v_vs_466_, v___x_472_, v___x_473_, v___x_469_, v___y_455_);
return v___x_474_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile_spec__0_spec__0_spec__1_spec__3(lean_object* v_f_475_, lean_object* v_as_476_, size_t v_i_477_, size_t v_stop_478_, lean_object* v_b_479_, lean_object* v___y_480_){
_start:
{
uint8_t v___x_482_; 
v___x_482_ = lean_usize_dec_eq(v_i_477_, v_stop_478_);
if (v___x_482_ == 0)
{
lean_object* v___x_483_; lean_object* v___x_484_; 
v___x_483_ = lean_array_uget_borrowed(v_as_476_, v_i_477_);
lean_inc_ref(v_f_475_);
v___x_484_ = l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile_spec__0_spec__0_spec__1_spec__2(v_f_475_, v___x_483_, v___y_480_);
if (lean_obj_tag(v___x_484_) == 0)
{
lean_object* v_a_485_; lean_object* v_a_486_; size_t v___x_487_; size_t v___x_488_; 
v_a_485_ = lean_ctor_get(v___x_484_, 0);
lean_inc(v_a_485_);
v_a_486_ = lean_ctor_get(v___x_484_, 1);
lean_inc(v_a_486_);
lean_dec_ref_known(v___x_484_, 2);
v___x_487_ = ((size_t)1ULL);
v___x_488_ = lean_usize_add(v_i_477_, v___x_487_);
v_i_477_ = v___x_488_;
v_b_479_ = v_a_485_;
v___y_480_ = v_a_486_;
goto _start;
}
else
{
lean_dec_ref(v_f_475_);
return v___x_484_;
}
}
else
{
lean_object* v___x_490_; 
lean_dec_ref(v_f_475_);
v___x_490_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_490_, 0, v_b_479_);
lean_ctor_set(v___x_490_, 1, v___y_480_);
return v___x_490_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_f_491_, lean_object* v_as_492_, lean_object* v_i_493_, lean_object* v_stop_494_, lean_object* v_b_495_, lean_object* v___y_496_, lean_object* v___y_497_){
_start:
{
size_t v_i_boxed_498_; size_t v_stop_boxed_499_; lean_object* v_res_500_; 
v_i_boxed_498_ = lean_unbox_usize(v_i_493_);
lean_dec(v_i_493_);
v_stop_boxed_499_ = lean_unbox_usize(v_stop_494_);
lean_dec(v_stop_494_);
v_res_500_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile_spec__0_spec__0_spec__1_spec__3(v_f_491_, v_as_492_, v_i_boxed_498_, v_stop_boxed_499_, v_b_495_, v___y_496_);
lean_dec_ref(v_as_492_);
return v_res_500_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_f_501_, lean_object* v_x_502_, lean_object* v___y_503_, lean_object* v___y_504_){
_start:
{
lean_object* v_res_505_; 
v_res_505_ = l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile_spec__0_spec__0_spec__1_spec__2(v_f_501_, v_x_502_, v___y_503_);
lean_dec_ref(v_x_502_);
return v_res_505_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile_spec__0_spec__0_spec__3(lean_object* v_f_506_, lean_object* v_t_507_, lean_object* v___y_508_){
_start:
{
lean_object* v_root_510_; lean_object* v_tail_511_; lean_object* v___x_512_; 
v_root_510_ = lean_ctor_get(v_t_507_, 0);
v_tail_511_ = lean_ctor_get(v_t_507_, 1);
lean_inc_ref(v_f_506_);
v___x_512_ = l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile_spec__0_spec__0_spec__1_spec__2(v_f_506_, v_root_510_, v___y_508_);
if (lean_obj_tag(v___x_512_) == 0)
{
lean_object* v_a_513_; lean_object* v___x_515_; uint8_t v_isShared_516_; uint8_t v_isSharedCheck_527_; 
v_a_513_ = lean_ctor_get(v___x_512_, 1);
v_isSharedCheck_527_ = !lean_is_exclusive(v___x_512_);
if (v_isSharedCheck_527_ == 0)
{
lean_object* v_unused_528_; 
v_unused_528_ = lean_ctor_get(v___x_512_, 0);
lean_dec(v_unused_528_);
v___x_515_ = v___x_512_;
v_isShared_516_ = v_isSharedCheck_527_;
goto v_resetjp_514_;
}
else
{
lean_inc(v_a_513_);
lean_dec(v___x_512_);
v___x_515_ = lean_box(0);
v_isShared_516_ = v_isSharedCheck_527_;
goto v_resetjp_514_;
}
v_resetjp_514_:
{
lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; uint8_t v___x_520_; 
v___x_517_ = lean_unsigned_to_nat(0u);
v___x_518_ = lean_array_get_size(v_tail_511_);
v___x_519_ = lean_box(0);
v___x_520_ = lean_nat_dec_lt(v___x_517_, v___x_518_);
if (v___x_520_ == 0)
{
lean_object* v___x_522_; 
lean_dec_ref(v_f_506_);
if (v_isShared_516_ == 0)
{
lean_ctor_set(v___x_515_, 0, v___x_519_);
v___x_522_ = v___x_515_;
goto v_reusejp_521_;
}
else
{
lean_object* v_reuseFailAlloc_523_; 
v_reuseFailAlloc_523_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_523_, 0, v___x_519_);
lean_ctor_set(v_reuseFailAlloc_523_, 1, v_a_513_);
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
size_t v___x_524_; size_t v___x_525_; lean_object* v___x_526_; 
lean_del_object(v___x_515_);
v___x_524_ = ((size_t)0ULL);
v___x_525_ = lean_usize_of_nat(v___x_518_);
v___x_526_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile_spec__0_spec__0_spec__2(v_f_506_, v_tail_511_, v___x_524_, v___x_525_, v___x_519_, v_a_513_);
return v___x_526_;
}
}
}
else
{
lean_dec_ref(v_f_506_);
return v___x_512_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile_spec__0_spec__0_spec__3___boxed(lean_object* v_f_529_, lean_object* v_t_530_, lean_object* v___y_531_, lean_object* v___y_532_){
_start:
{
lean_object* v_res_533_; 
v_res_533_ = l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile_spec__0_spec__0_spec__3(v_f_529_, v_t_530_, v___y_531_);
lean_dec_ref(v_t_530_);
return v_res_533_;
}
}
static lean_object* _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile_spec__0_spec__0_spec__1___closed__0(void){
_start:
{
lean_object* v___x_534_; 
v___x_534_ = l_Lean_instInhabitedPersistentArrayNode_default___redArg();
return v___x_534_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile_spec__0_spec__0_spec__1(lean_object* v_f_535_, lean_object* v_x_536_, size_t v_x_537_, size_t v_x_538_, lean_object* v___y_539_){
_start:
{
if (lean_obj_tag(v_x_536_) == 0)
{
lean_object* v_cs_541_; lean_object* v___x_542_; size_t v___x_543_; lean_object* v_j_544_; lean_object* v___x_545_; size_t v___x_546_; size_t v___x_547_; size_t v___x_548_; size_t v___x_549_; size_t v___x_550_; size_t v___x_551_; lean_object* v___x_552_; 
v_cs_541_ = lean_ctor_get(v_x_536_, 0);
v___x_542_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile_spec__0_spec__0_spec__1___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile_spec__0_spec__0_spec__1___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile_spec__0_spec__0_spec__1___closed__0);
v___x_543_ = lean_usize_shift_right(v_x_537_, v_x_538_);
v_j_544_ = lean_usize_to_nat(v___x_543_);
v___x_545_ = lean_array_get_borrowed(v___x_542_, v_cs_541_, v_j_544_);
v___x_546_ = ((size_t)1ULL);
v___x_547_ = lean_usize_shift_left(v___x_546_, v_x_538_);
v___x_548_ = lean_usize_sub(v___x_547_, v___x_546_);
v___x_549_ = lean_usize_land(v_x_537_, v___x_548_);
v___x_550_ = ((size_t)5ULL);
v___x_551_ = lean_usize_sub(v_x_538_, v___x_550_);
lean_inc_ref(v_f_535_);
v___x_552_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile_spec__0_spec__0_spec__1(v_f_535_, v___x_545_, v___x_549_, v___x_551_, v___y_539_);
if (lean_obj_tag(v___x_552_) == 0)
{
lean_object* v_a_553_; lean_object* v___x_555_; uint8_t v_isShared_556_; uint8_t v_isSharedCheck_568_; 
v_a_553_ = lean_ctor_get(v___x_552_, 1);
v_isSharedCheck_568_ = !lean_is_exclusive(v___x_552_);
if (v_isSharedCheck_568_ == 0)
{
lean_object* v_unused_569_; 
v_unused_569_ = lean_ctor_get(v___x_552_, 0);
lean_dec(v_unused_569_);
v___x_555_ = v___x_552_;
v_isShared_556_ = v_isSharedCheck_568_;
goto v_resetjp_554_;
}
else
{
lean_inc(v_a_553_);
lean_dec(v___x_552_);
v___x_555_ = lean_box(0);
v_isShared_556_ = v_isSharedCheck_568_;
goto v_resetjp_554_;
}
v_resetjp_554_:
{
lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; uint8_t v___x_561_; 
v___x_557_ = lean_unsigned_to_nat(1u);
v___x_558_ = lean_nat_add(v_j_544_, v___x_557_);
lean_dec(v_j_544_);
v___x_559_ = lean_array_get_size(v_cs_541_);
v___x_560_ = lean_box(0);
v___x_561_ = lean_nat_dec_lt(v___x_558_, v___x_559_);
if (v___x_561_ == 0)
{
lean_object* v___x_563_; 
lean_dec(v___x_558_);
lean_dec_ref(v_f_535_);
if (v_isShared_556_ == 0)
{
lean_ctor_set(v___x_555_, 0, v___x_560_);
v___x_563_ = v___x_555_;
goto v_reusejp_562_;
}
else
{
lean_object* v_reuseFailAlloc_564_; 
v_reuseFailAlloc_564_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_564_, 0, v___x_560_);
lean_ctor_set(v_reuseFailAlloc_564_, 1, v_a_553_);
v___x_563_ = v_reuseFailAlloc_564_;
goto v_reusejp_562_;
}
v_reusejp_562_:
{
return v___x_563_;
}
}
else
{
size_t v___x_565_; size_t v___x_566_; lean_object* v___x_567_; 
lean_del_object(v___x_555_);
v___x_565_ = lean_usize_of_nat(v___x_558_);
lean_dec(v___x_558_);
v___x_566_ = lean_usize_of_nat(v___x_559_);
v___x_567_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile_spec__0_spec__0_spec__1_spec__3(v_f_535_, v_cs_541_, v___x_565_, v___x_566_, v___x_560_, v_a_553_);
return v___x_567_;
}
}
}
else
{
lean_dec(v_j_544_);
lean_dec_ref(v_f_535_);
return v___x_552_;
}
}
else
{
lean_object* v_vs_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; uint8_t v___x_574_; 
v_vs_570_ = lean_ctor_get(v_x_536_, 0);
v___x_571_ = lean_usize_to_nat(v_x_537_);
v___x_572_ = lean_array_get_size(v_vs_570_);
v___x_573_ = lean_box(0);
v___x_574_ = lean_nat_dec_lt(v___x_571_, v___x_572_);
if (v___x_574_ == 0)
{
lean_object* v___x_575_; 
lean_dec(v___x_571_);
lean_dec_ref(v_f_535_);
v___x_575_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_575_, 0, v___x_573_);
lean_ctor_set(v___x_575_, 1, v___y_539_);
return v___x_575_;
}
else
{
size_t v___x_576_; size_t v___x_577_; lean_object* v___x_578_; 
v___x_576_ = lean_usize_of_nat(v___x_571_);
lean_dec(v___x_571_);
v___x_577_ = lean_usize_of_nat(v___x_572_);
v___x_578_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile_spec__0_spec__0_spec__2(v_f_535_, v_vs_570_, v___x_576_, v___x_577_, v___x_573_, v___y_539_);
return v___x_578_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile_spec__0_spec__0_spec__1___boxed(lean_object* v_f_579_, lean_object* v_x_580_, lean_object* v_x_581_, lean_object* v_x_582_, lean_object* v___y_583_, lean_object* v___y_584_){
_start:
{
size_t v_x_12363__boxed_585_; size_t v_x_12364__boxed_586_; lean_object* v_res_587_; 
v_x_12363__boxed_585_ = lean_unbox_usize(v_x_581_);
lean_dec(v_x_581_);
v_x_12364__boxed_586_ = lean_unbox_usize(v_x_582_);
lean_dec(v_x_582_);
v_res_587_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile_spec__0_spec__0_spec__1(v_f_579_, v_x_580_, v_x_12363__boxed_585_, v_x_12364__boxed_586_, v___y_583_);
lean_dec_ref(v_x_580_);
return v_res_587_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile_spec__0_spec__0(lean_object* v_f_588_, lean_object* v_t_589_, lean_object* v_start_590_, lean_object* v___y_591_){
_start:
{
lean_object* v___x_593_; uint8_t v___x_594_; 
v___x_593_ = lean_unsigned_to_nat(0u);
v___x_594_ = lean_nat_dec_eq(v_start_590_, v___x_593_);
if (v___x_594_ == 0)
{
lean_object* v_root_595_; lean_object* v_tail_596_; size_t v_shift_597_; lean_object* v_tailOff_598_; uint8_t v___x_599_; 
v_root_595_ = lean_ctor_get(v_t_589_, 0);
v_tail_596_ = lean_ctor_get(v_t_589_, 1);
v_shift_597_ = lean_ctor_get_usize(v_t_589_, 4);
v_tailOff_598_ = lean_ctor_get(v_t_589_, 3);
v___x_599_ = lean_nat_dec_le(v_tailOff_598_, v_start_590_);
if (v___x_599_ == 0)
{
size_t v___x_600_; lean_object* v___x_601_; 
v___x_600_ = lean_usize_of_nat(v_start_590_);
lean_inc_ref(v_f_588_);
v___x_601_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile_spec__0_spec__0_spec__1(v_f_588_, v_root_595_, v___x_600_, v_shift_597_, v___y_591_);
if (lean_obj_tag(v___x_601_) == 0)
{
lean_object* v_a_602_; lean_object* v___x_604_; uint8_t v_isShared_605_; uint8_t v_isSharedCheck_615_; 
v_a_602_ = lean_ctor_get(v___x_601_, 1);
v_isSharedCheck_615_ = !lean_is_exclusive(v___x_601_);
if (v_isSharedCheck_615_ == 0)
{
lean_object* v_unused_616_; 
v_unused_616_ = lean_ctor_get(v___x_601_, 0);
lean_dec(v_unused_616_);
v___x_604_ = v___x_601_;
v_isShared_605_ = v_isSharedCheck_615_;
goto v_resetjp_603_;
}
else
{
lean_inc(v_a_602_);
lean_dec(v___x_601_);
v___x_604_ = lean_box(0);
v_isShared_605_ = v_isSharedCheck_615_;
goto v_resetjp_603_;
}
v_resetjp_603_:
{
lean_object* v___x_606_; lean_object* v___x_607_; uint8_t v___x_608_; 
v___x_606_ = lean_array_get_size(v_tail_596_);
v___x_607_ = lean_box(0);
v___x_608_ = lean_nat_dec_lt(v___x_593_, v___x_606_);
if (v___x_608_ == 0)
{
lean_object* v___x_610_; 
lean_dec_ref(v_f_588_);
if (v_isShared_605_ == 0)
{
lean_ctor_set(v___x_604_, 0, v___x_607_);
v___x_610_ = v___x_604_;
goto v_reusejp_609_;
}
else
{
lean_object* v_reuseFailAlloc_611_; 
v_reuseFailAlloc_611_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_611_, 0, v___x_607_);
lean_ctor_set(v_reuseFailAlloc_611_, 1, v_a_602_);
v___x_610_ = v_reuseFailAlloc_611_;
goto v_reusejp_609_;
}
v_reusejp_609_:
{
return v___x_610_;
}
}
else
{
size_t v___x_612_; size_t v___x_613_; lean_object* v___x_614_; 
lean_del_object(v___x_604_);
v___x_612_ = ((size_t)0ULL);
v___x_613_ = lean_usize_of_nat(v___x_606_);
v___x_614_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile_spec__0_spec__0_spec__2(v_f_588_, v_tail_596_, v___x_612_, v___x_613_, v___x_607_, v_a_602_);
return v___x_614_;
}
}
}
else
{
lean_dec_ref(v_f_588_);
return v___x_601_;
}
}
else
{
lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; uint8_t v___x_620_; 
v___x_617_ = lean_nat_sub(v_start_590_, v_tailOff_598_);
v___x_618_ = lean_array_get_size(v_tail_596_);
v___x_619_ = lean_box(0);
v___x_620_ = lean_nat_dec_lt(v___x_617_, v___x_618_);
if (v___x_620_ == 0)
{
lean_object* v___x_621_; 
lean_dec(v___x_617_);
lean_dec_ref(v_f_588_);
v___x_621_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_621_, 0, v___x_619_);
lean_ctor_set(v___x_621_, 1, v___y_591_);
return v___x_621_;
}
else
{
size_t v___x_622_; size_t v___x_623_; lean_object* v___x_624_; 
v___x_622_ = lean_usize_of_nat(v___x_617_);
lean_dec(v___x_617_);
v___x_623_ = lean_usize_of_nat(v___x_618_);
v___x_624_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile_spec__0_spec__0_spec__2(v_f_588_, v_tail_596_, v___x_622_, v___x_623_, v___x_619_, v___y_591_);
return v___x_624_;
}
}
}
else
{
lean_object* v___x_625_; 
v___x_625_ = l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile_spec__0_spec__0_spec__3(v_f_588_, v_t_589_, v___y_591_);
return v___x_625_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile_spec__0_spec__0___boxed(lean_object* v_f_626_, lean_object* v_t_627_, lean_object* v_start_628_, lean_object* v___y_629_, lean_object* v___y_630_){
_start:
{
lean_object* v_res_631_; 
v_res_631_ = l_Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile_spec__0_spec__0(v_f_626_, v_t_627_, v_start_628_, v___y_629_);
lean_dec(v_start_628_);
lean_dec_ref(v_t_627_);
return v_res_631_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_forM___at___00__private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile_spec__0(lean_object* v_log_632_, lean_object* v_f_633_, lean_object* v___y_634_){
_start:
{
lean_object* v_unreported_636_; lean_object* v___x_637_; lean_object* v___x_638_; 
v_unreported_636_ = lean_ctor_get(v_log_632_, 1);
v___x_637_ = lean_unsigned_to_nat(0u);
v___x_638_ = l_Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile_spec__0_spec__0(v_f_633_, v_unreported_636_, v___x_637_, v___y_634_);
return v___x_638_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_forM___at___00__private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile_spec__0___boxed(lean_object* v_log_639_, lean_object* v_f_640_, lean_object* v___y_641_, lean_object* v___y_642_){
_start:
{
lean_object* v_res_643_; 
v_res_643_ = l_Lean_MessageLog_forM___at___00__private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile_spec__0(v_log_639_, v_f_640_, v___y_641_);
lean_dec_ref(v_log_639_);
return v_res_643_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile(lean_object* v_pkgIdx_646_, lean_object* v_pkgName_647_, lean_object* v_pkgDir_648_, lean_object* v_lakeOpts_649_, lean_object* v_leanOpts_650_, lean_object* v_configFile_651_, lean_object* v_a_652_){
_start:
{
lean_object* v___f_654_; lean_object* v___x_655_; 
v___f_654_ = ((lean_object*)(l___private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile___closed__0));
v___x_655_ = l_IO_FS_readFile(v_configFile_651_);
if (lean_obj_tag(v___x_655_) == 0)
{
lean_object* v_a_656_; uint8_t v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; 
v_a_656_ = lean_ctor_get(v___x_655_, 0);
lean_inc(v_a_656_);
lean_dec_ref_known(v___x_655_, 1);
v___x_657_ = 1;
v___x_658_ = lean_string_utf8_byte_size(v_a_656_);
lean_inc_ref(v_configFile_651_);
v___x_659_ = l_Lean_Parser_mkInputContext___redArg(v_a_656_, v_configFile_651_, v___x_657_, v___x_658_);
lean_inc_ref(v___x_659_);
v___x_660_ = l_Lean_Parser_parseHeader(v___x_659_);
if (lean_obj_tag(v___x_660_) == 0)
{
lean_object* v_a_661_; lean_object* v___x_663_; uint8_t v_isShared_664_; uint8_t v_isSharedCheck_758_; 
v_a_661_ = lean_ctor_get(v___x_660_, 0);
v_isSharedCheck_758_ = !lean_is_exclusive(v___x_660_);
if (v_isSharedCheck_758_ == 0)
{
v___x_663_ = v___x_660_;
v_isShared_664_ = v_isSharedCheck_758_;
goto v_resetjp_662_;
}
else
{
lean_inc(v_a_661_);
lean_dec(v___x_660_);
v___x_663_ = lean_box(0);
v_isShared_664_ = v_isSharedCheck_758_;
goto v_resetjp_662_;
}
v_resetjp_662_:
{
lean_object* v_snd_665_; lean_object* v_fst_666_; lean_object* v_fst_667_; lean_object* v_snd_668_; lean_object* v___x_670_; uint8_t v_isShared_671_; uint8_t v_isSharedCheck_757_; 
v_snd_665_ = lean_ctor_get(v_a_661_, 1);
lean_inc(v_snd_665_);
v_fst_666_ = lean_ctor_get(v_a_661_, 0);
lean_inc(v_fst_666_);
lean_dec(v_a_661_);
v_fst_667_ = lean_ctor_get(v_snd_665_, 0);
v_snd_668_ = lean_ctor_get(v_snd_665_, 1);
v_isSharedCheck_757_ = !lean_is_exclusive(v_snd_665_);
if (v_isSharedCheck_757_ == 0)
{
v___x_670_ = v_snd_665_;
v_isShared_671_ = v_isSharedCheck_757_;
goto v_resetjp_669_;
}
else
{
lean_inc(v_snd_668_);
lean_inc(v_fst_667_);
lean_dec(v_snd_665_);
v___x_670_ = lean_box(0);
v_isShared_671_ = v_isSharedCheck_757_;
goto v_resetjp_669_;
}
v_resetjp_669_:
{
lean_object* v___x_672_; 
lean_inc_ref(v___x_659_);
lean_inc_ref(v_leanOpts_650_);
v___x_672_ = l___private_Lake_Load_Lean_Elab_0__Lake_processHeader(v_fst_666_, v_leanOpts_650_, v___x_659_, v_snd_668_);
if (lean_obj_tag(v___x_672_) == 0)
{
lean_object* v_a_673_; lean_object* v___x_675_; uint8_t v_isShared_676_; uint8_t v_isSharedCheck_747_; 
v_a_673_ = lean_ctor_get(v___x_672_, 0);
v_isSharedCheck_747_ = !lean_is_exclusive(v___x_672_);
if (v_isSharedCheck_747_ == 0)
{
v___x_675_ = v___x_672_;
v_isShared_676_ = v_isSharedCheck_747_;
goto v_resetjp_674_;
}
else
{
lean_inc(v_a_673_);
lean_dec(v___x_672_);
v___x_675_ = lean_box(0);
v_isShared_676_ = v_isSharedCheck_747_;
goto v_resetjp_674_;
}
v_resetjp_674_:
{
lean_object* v_fst_677_; lean_object* v_snd_678_; lean_object* v___x_680_; uint8_t v_isShared_681_; uint8_t v_isSharedCheck_746_; 
v_fst_677_ = lean_ctor_get(v_a_673_, 0);
v_snd_678_ = lean_ctor_get(v_a_673_, 1);
v_isSharedCheck_746_ = !lean_is_exclusive(v_a_673_);
if (v_isSharedCheck_746_ == 0)
{
v___x_680_ = v_a_673_;
v_isShared_681_ = v_isSharedCheck_746_;
goto v_resetjp_679_;
}
else
{
lean_inc(v_snd_678_);
lean_inc(v_fst_677_);
lean_dec(v_a_673_);
v___x_680_ = lean_box(0);
v_isShared_681_ = v_isSharedCheck_746_;
goto v_resetjp_679_;
}
v_resetjp_679_:
{
lean_object* v___x_682_; lean_object* v_asyncMode_683_; lean_object* v___x_684_; lean_object* v_asyncMode_685_; lean_object* v___x_686_; lean_object* v_asyncMode_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_691_; 
v___x_682_ = l_Lake_nameExt;
v_asyncMode_683_ = lean_ctor_get(v___x_682_, 2);
v___x_684_ = l_Lake_dirExt;
v_asyncMode_685_ = lean_ctor_get(v___x_684_, 2);
v___x_686_ = l_Lake_optsExt;
v_asyncMode_687_ = lean_ctor_get(v___x_686_, 2);
v___x_688_ = ((lean_object*)(l_Lake_configModuleName));
v___x_689_ = l_Lean_Environment_setMainModule(v_fst_677_, v___x_688_);
if (v_isShared_681_ == 0)
{
lean_ctor_set(v___x_680_, 1, v_pkgName_647_);
lean_ctor_set(v___x_680_, 0, v_pkgIdx_646_);
v___x_691_ = v___x_680_;
goto v_reusejp_690_;
}
else
{
lean_object* v_reuseFailAlloc_745_; 
v_reuseFailAlloc_745_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_745_, 0, v_pkgIdx_646_);
lean_ctor_set(v_reuseFailAlloc_745_, 1, v_pkgName_647_);
v___x_691_ = v_reuseFailAlloc_745_;
goto v_reusejp_690_;
}
v_reusejp_690_:
{
lean_object* v___x_692_; lean_object* v___x_694_; 
v___x_692_ = l_Lean_EnvExtension_setState___redArg(v___x_682_, v___x_689_, v___x_691_, v_asyncMode_683_);
if (v_isShared_676_ == 0)
{
lean_ctor_set_tag(v___x_675_, 1);
lean_ctor_set(v___x_675_, 0, v_pkgDir_648_);
v___x_694_ = v___x_675_;
goto v_reusejp_693_;
}
else
{
lean_object* v_reuseFailAlloc_744_; 
v_reuseFailAlloc_744_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_744_, 0, v_pkgDir_648_);
v___x_694_ = v_reuseFailAlloc_744_;
goto v_reusejp_693_;
}
v_reusejp_693_:
{
lean_object* v___x_695_; lean_object* v___x_697_; 
v___x_695_ = l_Lean_EnvExtension_setState___redArg(v___x_684_, v___x_692_, v___x_694_, v_asyncMode_685_);
if (v_isShared_664_ == 0)
{
lean_ctor_set_tag(v___x_663_, 1);
lean_ctor_set(v___x_663_, 0, v_lakeOpts_649_);
v___x_697_ = v___x_663_;
goto v_reusejp_696_;
}
else
{
lean_object* v_reuseFailAlloc_743_; 
v_reuseFailAlloc_743_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_743_, 0, v_lakeOpts_649_);
v___x_697_ = v_reuseFailAlloc_743_;
goto v_reusejp_696_;
}
v_reusejp_696_:
{
lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; 
v___x_698_ = l_Lean_EnvExtension_setState___redArg(v___x_686_, v___x_695_, v___x_697_, v_asyncMode_687_);
v___x_699_ = l_Lean_Elab_Command_mkState(v___x_698_, v_snd_678_, v_leanOpts_650_);
v___x_700_ = l_Lean_Elab_IO_processCommands(v___x_659_, v_fst_667_, v___x_699_);
if (lean_obj_tag(v___x_700_) == 0)
{
lean_object* v_a_701_; lean_object* v_commandState_702_; lean_object* v_env_703_; lean_object* v_messages_704_; lean_object* v___x_705_; 
lean_del_object(v___x_670_);
v_a_701_ = lean_ctor_get(v___x_700_, 0);
lean_inc(v_a_701_);
lean_dec_ref_known(v___x_700_, 1);
v_commandState_702_ = lean_ctor_get(v_a_701_, 0);
lean_inc_ref(v_commandState_702_);
lean_dec(v_a_701_);
v_env_703_ = lean_ctor_get(v_commandState_702_, 0);
lean_inc_ref(v_env_703_);
v_messages_704_ = lean_ctor_get(v_commandState_702_, 1);
lean_inc_ref(v_messages_704_);
lean_dec_ref(v_commandState_702_);
v___x_705_ = l_Lean_MessageLog_forM___at___00__private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile_spec__0(v_messages_704_, v___f_654_, v_a_652_);
if (lean_obj_tag(v___x_705_) == 0)
{
lean_object* v_a_706_; lean_object* v___x_708_; uint8_t v_isShared_709_; uint8_t v_isSharedCheck_723_; 
v_a_706_ = lean_ctor_get(v___x_705_, 1);
v_isSharedCheck_723_ = !lean_is_exclusive(v___x_705_);
if (v_isSharedCheck_723_ == 0)
{
lean_object* v_unused_724_; 
v_unused_724_ = lean_ctor_get(v___x_705_, 0);
lean_dec(v_unused_724_);
v___x_708_ = v___x_705_;
v_isShared_709_ = v_isSharedCheck_723_;
goto v_resetjp_707_;
}
else
{
lean_inc(v_a_706_);
lean_dec(v___x_705_);
v___x_708_ = lean_box(0);
v_isShared_709_ = v_isSharedCheck_723_;
goto v_resetjp_707_;
}
v_resetjp_707_:
{
uint8_t v___x_710_; 
v___x_710_ = l_Lean_MessageLog_hasErrors(v_messages_704_);
lean_dec_ref(v_messages_704_);
if (v___x_710_ == 0)
{
lean_object* v___x_712_; 
lean_dec_ref(v_configFile_651_);
if (v_isShared_709_ == 0)
{
lean_ctor_set(v___x_708_, 0, v_env_703_);
v___x_712_ = v___x_708_;
goto v_reusejp_711_;
}
else
{
lean_object* v_reuseFailAlloc_713_; 
v_reuseFailAlloc_713_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_713_, 0, v_env_703_);
lean_ctor_set(v_reuseFailAlloc_713_, 1, v_a_706_);
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
lean_object* v___x_714_; lean_object* v___x_715_; uint8_t v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_721_; 
lean_dec_ref(v_env_703_);
v___x_714_ = ((lean_object*)(l___private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile___closed__1));
v___x_715_ = lean_string_append(v_configFile_651_, v___x_714_);
v___x_716_ = 3;
v___x_717_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_717_, 0, v___x_715_);
lean_ctor_set_uint8(v___x_717_, sizeof(void*)*1, v___x_716_);
v___x_718_ = lean_array_get_size(v_a_706_);
v___x_719_ = lean_array_push(v_a_706_, v___x_717_);
if (v_isShared_709_ == 0)
{
lean_ctor_set_tag(v___x_708_, 1);
lean_ctor_set(v___x_708_, 1, v___x_719_);
lean_ctor_set(v___x_708_, 0, v___x_718_);
v___x_721_ = v___x_708_;
goto v_reusejp_720_;
}
else
{
lean_object* v_reuseFailAlloc_722_; 
v_reuseFailAlloc_722_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_722_, 0, v___x_718_);
lean_ctor_set(v_reuseFailAlloc_722_, 1, v___x_719_);
v___x_721_ = v_reuseFailAlloc_722_;
goto v_reusejp_720_;
}
v_reusejp_720_:
{
return v___x_721_;
}
}
}
}
else
{
lean_object* v_a_725_; lean_object* v_a_726_; lean_object* v___x_728_; uint8_t v_isShared_729_; uint8_t v_isSharedCheck_733_; 
lean_dec_ref(v_messages_704_);
lean_dec_ref(v_env_703_);
lean_dec_ref(v_configFile_651_);
v_a_725_ = lean_ctor_get(v___x_705_, 0);
v_a_726_ = lean_ctor_get(v___x_705_, 1);
v_isSharedCheck_733_ = !lean_is_exclusive(v___x_705_);
if (v_isSharedCheck_733_ == 0)
{
v___x_728_ = v___x_705_;
v_isShared_729_ = v_isSharedCheck_733_;
goto v_resetjp_727_;
}
else
{
lean_inc(v_a_726_);
lean_inc(v_a_725_);
lean_dec(v___x_705_);
v___x_728_ = lean_box(0);
v_isShared_729_ = v_isSharedCheck_733_;
goto v_resetjp_727_;
}
v_resetjp_727_:
{
lean_object* v___x_731_; 
if (v_isShared_729_ == 0)
{
v___x_731_ = v___x_728_;
goto v_reusejp_730_;
}
else
{
lean_object* v_reuseFailAlloc_732_; 
v_reuseFailAlloc_732_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_732_, 0, v_a_725_);
lean_ctor_set(v_reuseFailAlloc_732_, 1, v_a_726_);
v___x_731_ = v_reuseFailAlloc_732_;
goto v_reusejp_730_;
}
v_reusejp_730_:
{
return v___x_731_;
}
}
}
}
else
{
lean_object* v_a_734_; lean_object* v___x_735_; uint8_t v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_741_; 
lean_dec_ref(v_configFile_651_);
v_a_734_ = lean_ctor_get(v___x_700_, 0);
lean_inc(v_a_734_);
lean_dec_ref_known(v___x_700_, 1);
v___x_735_ = lean_io_error_to_string(v_a_734_);
v___x_736_ = 3;
v___x_737_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_737_, 0, v___x_735_);
lean_ctor_set_uint8(v___x_737_, sizeof(void*)*1, v___x_736_);
v___x_738_ = lean_array_get_size(v_a_652_);
v___x_739_ = lean_array_push(v_a_652_, v___x_737_);
if (v_isShared_671_ == 0)
{
lean_ctor_set_tag(v___x_670_, 1);
lean_ctor_set(v___x_670_, 1, v___x_739_);
lean_ctor_set(v___x_670_, 0, v___x_738_);
v___x_741_ = v___x_670_;
goto v_reusejp_740_;
}
else
{
lean_object* v_reuseFailAlloc_742_; 
v_reuseFailAlloc_742_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_742_, 0, v___x_738_);
lean_ctor_set(v_reuseFailAlloc_742_, 1, v___x_739_);
v___x_741_ = v_reuseFailAlloc_742_;
goto v_reusejp_740_;
}
v_reusejp_740_:
{
return v___x_741_;
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
lean_object* v_a_748_; lean_object* v___x_749_; uint8_t v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_755_; 
lean_dec(v_fst_667_);
lean_del_object(v___x_663_);
lean_dec_ref(v___x_659_);
lean_dec_ref(v_configFile_651_);
lean_dec_ref(v_leanOpts_650_);
lean_dec(v_lakeOpts_649_);
lean_dec_ref(v_pkgDir_648_);
lean_dec(v_pkgName_647_);
lean_dec(v_pkgIdx_646_);
v_a_748_ = lean_ctor_get(v___x_672_, 0);
lean_inc(v_a_748_);
lean_dec_ref_known(v___x_672_, 1);
v___x_749_ = lean_io_error_to_string(v_a_748_);
v___x_750_ = 3;
v___x_751_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_751_, 0, v___x_749_);
lean_ctor_set_uint8(v___x_751_, sizeof(void*)*1, v___x_750_);
v___x_752_ = lean_array_get_size(v_a_652_);
v___x_753_ = lean_array_push(v_a_652_, v___x_751_);
if (v_isShared_671_ == 0)
{
lean_ctor_set_tag(v___x_670_, 1);
lean_ctor_set(v___x_670_, 1, v___x_753_);
lean_ctor_set(v___x_670_, 0, v___x_752_);
v___x_755_ = v___x_670_;
goto v_reusejp_754_;
}
else
{
lean_object* v_reuseFailAlloc_756_; 
v_reuseFailAlloc_756_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_756_, 0, v___x_752_);
lean_ctor_set(v_reuseFailAlloc_756_, 1, v___x_753_);
v___x_755_ = v_reuseFailAlloc_756_;
goto v_reusejp_754_;
}
v_reusejp_754_:
{
return v___x_755_;
}
}
}
}
}
else
{
lean_object* v_a_759_; lean_object* v___x_760_; uint8_t v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; 
lean_dec_ref(v___x_659_);
lean_dec_ref(v_configFile_651_);
lean_dec_ref(v_leanOpts_650_);
lean_dec(v_lakeOpts_649_);
lean_dec_ref(v_pkgDir_648_);
lean_dec(v_pkgName_647_);
lean_dec(v_pkgIdx_646_);
v_a_759_ = lean_ctor_get(v___x_660_, 0);
lean_inc(v_a_759_);
lean_dec_ref_known(v___x_660_, 1);
v___x_760_ = lean_io_error_to_string(v_a_759_);
v___x_761_ = 3;
v___x_762_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_762_, 0, v___x_760_);
lean_ctor_set_uint8(v___x_762_, sizeof(void*)*1, v___x_761_);
v___x_763_ = lean_array_get_size(v_a_652_);
v___x_764_ = lean_array_push(v_a_652_, v___x_762_);
v___x_765_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_765_, 0, v___x_763_);
lean_ctor_set(v___x_765_, 1, v___x_764_);
return v___x_765_;
}
}
else
{
lean_object* v_a_766_; lean_object* v___x_767_; uint8_t v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; 
lean_dec_ref(v_configFile_651_);
lean_dec_ref(v_leanOpts_650_);
lean_dec(v_lakeOpts_649_);
lean_dec_ref(v_pkgDir_648_);
lean_dec(v_pkgName_647_);
lean_dec(v_pkgIdx_646_);
v_a_766_ = lean_ctor_get(v___x_655_, 0);
lean_inc(v_a_766_);
lean_dec_ref_known(v___x_655_, 1);
v___x_767_ = lean_io_error_to_string(v_a_766_);
v___x_768_ = 3;
v___x_769_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_769_, 0, v___x_767_);
lean_ctor_set_uint8(v___x_769_, sizeof(void*)*1, v___x_768_);
v___x_770_ = lean_array_get_size(v_a_652_);
v___x_771_ = lean_array_push(v_a_652_, v___x_769_);
v___x_772_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_772_, 0, v___x_770_);
lean_ctor_set(v___x_772_, 1, v___x_771_);
return v___x_772_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile___boxed(lean_object* v_pkgIdx_773_, lean_object* v_pkgName_774_, lean_object* v_pkgDir_775_, lean_object* v_lakeOpts_776_, lean_object* v_leanOpts_777_, lean_object* v_configFile_778_, lean_object* v_a_779_, lean_object* v_a_780_){
_start:
{
lean_object* v_res_781_; 
v_res_781_ = l___private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile(v_pkgIdx_773_, v_pkgName_774_, v_pkgDir_775_, v_lakeOpts_776_, v_leanOpts_777_, v_configFile_778_, v_a_779_);
return v_res_781_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_addToEnv___boxed(lean_object* v_env_784_, lean_object* v_x_00___x40_Lake_Load_Lean_Elab_1076801777____hygCtx___hyg_785_){
_start:
{
lean_object* v_res_786_; 
v_res_786_ = lake_environment_add(v_env_784_, v_x_00___x40_Lake_Load_Lean_Elab_1076801777____hygCtx___hyg_785_);
return v_res_786_;
}
}
static lean_object* _init_l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__3(void){
_start:
{
lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; 
v___x_792_ = ((lean_object*)(l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__2));
v___x_793_ = l_Lean_NameSet_empty;
v___x_794_ = l_Lean_NameSet_insert(v___x_793_, v___x_792_);
return v___x_794_;
}
}
static lean_object* _init_l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__6(void){
_start:
{
lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; 
v___x_799_ = ((lean_object*)(l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__5));
v___x_800_ = lean_obj_once(&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__3, &l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__3_once, _init_l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__3);
v___x_801_ = l_Lean_NameSet_insert(v___x_800_, v___x_799_);
return v___x_801_;
}
}
static lean_object* _init_l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__9(void){
_start:
{
lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; 
v___x_806_ = ((lean_object*)(l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__8));
v___x_807_ = lean_obj_once(&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__6, &l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__6_once, _init_l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__6);
v___x_808_ = l_Lean_NameSet_insert(v___x_807_, v___x_806_);
return v___x_808_;
}
}
static lean_object* _init_l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__12(void){
_start:
{
lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; 
v___x_813_ = ((lean_object*)(l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__11));
v___x_814_ = lean_obj_once(&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__9, &l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__9_once, _init_l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__9);
v___x_815_ = l_Lean_NameSet_insert(v___x_814_, v___x_813_);
return v___x_815_;
}
}
static lean_object* _init_l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__15(void){
_start:
{
lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; 
v___x_820_ = ((lean_object*)(l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__14));
v___x_821_ = lean_obj_once(&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__12, &l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__12_once, _init_l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__12);
v___x_822_ = l_Lean_NameSet_insert(v___x_821_, v___x_820_);
return v___x_822_;
}
}
static lean_object* _init_l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__18(void){
_start:
{
lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; 
v___x_827_ = ((lean_object*)(l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__17));
v___x_828_ = lean_obj_once(&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__15, &l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__15_once, _init_l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__15);
v___x_829_ = l_Lean_NameSet_insert(v___x_828_, v___x_827_);
return v___x_829_;
}
}
static lean_object* _init_l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__21(void){
_start:
{
lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; 
v___x_834_ = ((lean_object*)(l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__20));
v___x_835_ = lean_obj_once(&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__18, &l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__18_once, _init_l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__18);
v___x_836_ = l_Lean_NameSet_insert(v___x_835_, v___x_834_);
return v___x_836_;
}
}
static lean_object* _init_l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__24(void){
_start:
{
lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; 
v___x_841_ = ((lean_object*)(l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__23));
v___x_842_ = lean_obj_once(&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__21, &l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__21_once, _init_l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__21);
v___x_843_ = l_Lean_NameSet_insert(v___x_842_, v___x_841_);
return v___x_843_;
}
}
static lean_object* _init_l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__27(void){
_start:
{
lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; 
v___x_848_ = ((lean_object*)(l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__26));
v___x_849_ = lean_obj_once(&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__24, &l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__24_once, _init_l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__24);
v___x_850_ = l_Lean_NameSet_insert(v___x_849_, v___x_848_);
return v___x_850_;
}
}
static lean_object* _init_l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__30(void){
_start:
{
lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; 
v___x_855_ = ((lean_object*)(l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__29));
v___x_856_ = lean_obj_once(&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__27, &l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__27_once, _init_l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__27);
v___x_857_ = l_Lean_NameSet_insert(v___x_856_, v___x_855_);
return v___x_857_;
}
}
static lean_object* _init_l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__33(void){
_start:
{
lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; 
v___x_862_ = ((lean_object*)(l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__32));
v___x_863_ = lean_obj_once(&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__30, &l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__30_once, _init_l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__30);
v___x_864_ = l_Lean_NameSet_insert(v___x_863_, v___x_862_);
return v___x_864_;
}
}
static lean_object* _init_l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__36(void){
_start:
{
lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; 
v___x_869_ = ((lean_object*)(l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__35));
v___x_870_ = lean_obj_once(&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__33, &l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__33_once, _init_l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__33);
v___x_871_ = l_Lean_NameSet_insert(v___x_870_, v___x_869_);
return v___x_871_;
}
}
static lean_object* _init_l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__39(void){
_start:
{
lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; 
v___x_876_ = ((lean_object*)(l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__38));
v___x_877_ = lean_obj_once(&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__36, &l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__36_once, _init_l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__36);
v___x_878_ = l_Lean_NameSet_insert(v___x_877_, v___x_876_);
return v___x_878_;
}
}
static lean_object* _init_l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__42(void){
_start:
{
lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; 
v___x_883_ = ((lean_object*)(l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__41));
v___x_884_ = lean_obj_once(&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__39, &l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__39_once, _init_l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__39);
v___x_885_ = l_Lean_NameSet_insert(v___x_884_, v___x_883_);
return v___x_885_;
}
}
static lean_object* _init_l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__45(void){
_start:
{
lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; 
v___x_890_ = ((lean_object*)(l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__44));
v___x_891_ = lean_obj_once(&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__42, &l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__42_once, _init_l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__42);
v___x_892_ = l_Lean_NameSet_insert(v___x_891_, v___x_890_);
return v___x_892_;
}
}
static lean_object* _init_l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__49(void){
_start:
{
lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; 
v___x_898_ = ((lean_object*)(l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__48));
v___x_899_ = lean_obj_once(&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__45, &l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__45_once, _init_l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__45);
v___x_900_ = l_Lean_NameSet_insert(v___x_899_, v___x_898_);
return v___x_900_;
}
}
static lean_object* _init_l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__53(void){
_start:
{
lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; 
v___x_907_ = ((lean_object*)(l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__52));
v___x_908_ = lean_obj_once(&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__49, &l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__49_once, _init_l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__49);
v___x_909_ = l_Lean_NameSet_insert(v___x_908_, v___x_907_);
return v___x_909_;
}
}
static lean_object* _init_l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts(void){
_start:
{
lean_object* v___x_910_; 
v___x_910_ = lean_obj_once(&l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__53, &l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__53_once, _init_l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__53);
return v___x_910_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__1___closed__0(void){
_start:
{
lean_object* v___x_911_; 
v___x_911_ = l_Lean_instInhabitedPersistentEnvExtension___redArg();
return v___x_911_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__1___closed__1(void){
_start:
{
lean_object* v___x_912_; lean_object* v___x_913_; 
v___x_912_ = lean_box(0);
v___x_913_ = l_unsafeCast___redArg(v___x_912_);
return v___x_913_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__1(lean_object* v_val_914_, lean_object* v_val_915_, lean_object* v_as_916_, size_t v_i_917_, size_t v_stop_918_, lean_object* v_b_919_){
_start:
{
uint8_t v___x_920_; 
v___x_920_ = lean_usize_dec_eq(v_i_917_, v_stop_918_);
if (v___x_920_ == 0)
{
lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; size_t v___x_927_; size_t v___x_928_; 
v___x_921_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__1___closed__0, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__1___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__1___closed__0);
v___x_922_ = lean_array_uget_borrowed(v_as_916_, v_i_917_);
v___x_923_ = lean_array_get_borrowed(v___x_921_, v_val_914_, v_val_915_);
v___x_924_ = lean_box(0);
v___x_925_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__1___closed__1);
lean_inc(v___x_922_);
lean_inc(v___x_923_);
v___x_926_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_923_, v_b_919_, v___x_922_, v___x_924_, v___x_925_);
v___x_927_ = ((size_t)1ULL);
v___x_928_ = lean_usize_add(v_i_917_, v___x_927_);
v_i_917_ = v___x_928_;
v_b_919_ = v___x_926_;
goto _start;
}
else
{
return v_b_919_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__1___boxed(lean_object* v_val_930_, lean_object* v_val_931_, lean_object* v_as_932_, lean_object* v_i_933_, lean_object* v_stop_934_, lean_object* v_b_935_){
_start:
{
size_t v_i_boxed_936_; size_t v_stop_boxed_937_; lean_object* v_res_938_; 
v_i_boxed_936_ = lean_unbox_usize(v_i_933_);
lean_dec(v_i_933_);
v_stop_boxed_937_ = lean_unbox_usize(v_stop_934_);
lean_dec(v_stop_934_);
v_res_938_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__1(v_val_930_, v_val_931_, v_as_932_, v_i_boxed_936_, v_stop_boxed_937_, v_b_935_);
lean_dec_ref(v_as_932_);
lean_dec(v_val_931_);
lean_dec_ref(v_val_930_);
return v_res_938_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__0_spec__0___redArg(lean_object* v_a_939_, lean_object* v_x_940_){
_start:
{
if (lean_obj_tag(v_x_940_) == 0)
{
lean_object* v___x_941_; 
v___x_941_ = lean_box(0);
return v___x_941_;
}
else
{
lean_object* v_key_942_; lean_object* v_value_943_; lean_object* v_tail_944_; uint8_t v___x_945_; 
v_key_942_ = lean_ctor_get(v_x_940_, 0);
v_value_943_ = lean_ctor_get(v_x_940_, 1);
v_tail_944_ = lean_ctor_get(v_x_940_, 2);
v___x_945_ = lean_name_eq(v_key_942_, v_a_939_);
if (v___x_945_ == 0)
{
v_x_940_ = v_tail_944_;
goto _start;
}
else
{
lean_object* v___x_947_; 
lean_inc(v_value_943_);
v___x_947_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_947_, 0, v_value_943_);
return v___x_947_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__0_spec__0___redArg___boxed(lean_object* v_a_948_, lean_object* v_x_949_){
_start:
{
lean_object* v_res_950_; 
v_res_950_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__0_spec__0___redArg(v_a_948_, v_x_949_);
lean_dec(v_x_949_);
lean_dec(v_a_948_);
return v_res_950_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__0___redArg(lean_object* v_m_951_, lean_object* v_a_952_){
_start:
{
lean_object* v_buckets_953_; lean_object* v___x_954_; uint64_t v___y_956_; lean_object* v___x_970_; 
v_buckets_953_ = lean_ctor_get(v_m_951_, 1);
v___x_954_ = lean_array_get_size(v_buckets_953_);
v___x_970_ = l_unsafeCast___redArg(v_a_952_);
if (lean_obj_tag(v___x_970_) == 0)
{
uint64_t v___x_971_; 
v___x_971_ = 1723ULL;
v___y_956_ = v___x_971_;
goto v___jp_955_;
}
else
{
uint64_t v_hash_972_; 
v_hash_972_ = lean_ctor_get_uint64(v___x_970_, sizeof(void*)*2);
lean_dec(v___x_970_);
v___y_956_ = v_hash_972_;
goto v___jp_955_;
}
v___jp_955_:
{
uint64_t v___x_957_; uint64_t v___x_958_; uint64_t v_fold_959_; uint64_t v___x_960_; uint64_t v___x_961_; uint64_t v___x_962_; size_t v___x_963_; size_t v___x_964_; size_t v___x_965_; size_t v___x_966_; size_t v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; 
v___x_957_ = 32ULL;
v___x_958_ = lean_uint64_shift_right(v___y_956_, v___x_957_);
v_fold_959_ = lean_uint64_xor(v___y_956_, v___x_958_);
v___x_960_ = 16ULL;
v___x_961_ = lean_uint64_shift_right(v_fold_959_, v___x_960_);
v___x_962_ = lean_uint64_xor(v_fold_959_, v___x_961_);
v___x_963_ = lean_uint64_to_usize(v___x_962_);
v___x_964_ = lean_usize_of_nat(v___x_954_);
v___x_965_ = ((size_t)1ULL);
v___x_966_ = lean_usize_sub(v___x_964_, v___x_965_);
v___x_967_ = lean_usize_land(v___x_963_, v___x_966_);
v___x_968_ = lean_array_uget_borrowed(v_buckets_953_, v___x_967_);
v___x_969_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__0_spec__0___redArg(v_a_952_, v___x_968_);
return v___x_969_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__0___redArg___boxed(lean_object* v_m_973_, lean_object* v_a_974_){
_start:
{
lean_object* v_res_975_; 
v_res_975_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__0___redArg(v_m_973_, v_a_974_);
lean_dec(v_a_974_);
lean_dec_ref(v_m_973_);
return v_res_975_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__2(lean_object* v_a_976_, lean_object* v_val_977_, lean_object* v_as_978_, size_t v_i_979_, size_t v_stop_980_, lean_object* v_b_981_){
_start:
{
lean_object* v___y_983_; uint8_t v___x_987_; 
v___x_987_ = lean_usize_dec_eq(v_i_979_, v_stop_980_);
if (v___x_987_ == 0)
{
lean_object* v___x_988_; lean_object* v_fst_989_; lean_object* v_snd_990_; lean_object* v___x_991_; uint8_t v___x_992_; 
v___x_988_ = lean_array_uget_borrowed(v_as_978_, v_i_979_);
v_fst_989_ = lean_ctor_get(v___x_988_, 0);
v_snd_990_ = lean_ctor_get(v___x_988_, 1);
v___x_991_ = l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts;
v___x_992_ = l_Lean_NameSet_contains(v___x_991_, v_fst_989_);
if (v___x_992_ == 0)
{
v___y_983_ = v_b_981_;
goto v___jp_982_;
}
else
{
lean_object* v___x_993_; 
v___x_993_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__0___redArg(v_a_976_, v_fst_989_);
if (lean_obj_tag(v___x_993_) == 0)
{
v___y_983_ = v_b_981_;
goto v___jp_982_;
}
else
{
lean_object* v_val_994_; lean_object* v___x_995_; lean_object* v___x_996_; uint8_t v___x_997_; 
v_val_994_ = lean_ctor_get(v___x_993_, 0);
lean_inc(v_val_994_);
lean_dec_ref_known(v___x_993_, 1);
v___x_995_ = lean_unsigned_to_nat(0u);
v___x_996_ = lean_array_get_size(v_snd_990_);
v___x_997_ = lean_nat_dec_lt(v___x_995_, v___x_996_);
if (v___x_997_ == 0)
{
lean_dec(v_val_994_);
v___y_983_ = v_b_981_;
goto v___jp_982_;
}
else
{
uint8_t v___x_998_; 
v___x_998_ = lean_nat_dec_le(v___x_996_, v___x_996_);
if (v___x_998_ == 0)
{
if (v___x_997_ == 0)
{
lean_dec(v_val_994_);
v___y_983_ = v_b_981_;
goto v___jp_982_;
}
else
{
size_t v___x_999_; size_t v___x_1000_; lean_object* v___x_1001_; 
v___x_999_ = ((size_t)0ULL);
v___x_1000_ = lean_usize_of_nat(v___x_996_);
v___x_1001_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__1(v_val_977_, v_val_994_, v_snd_990_, v___x_999_, v___x_1000_, v_b_981_);
lean_dec(v_val_994_);
v___y_983_ = v___x_1001_;
goto v___jp_982_;
}
}
else
{
size_t v___x_1002_; size_t v___x_1003_; lean_object* v___x_1004_; 
v___x_1002_ = ((size_t)0ULL);
v___x_1003_ = lean_usize_of_nat(v___x_996_);
v___x_1004_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__1(v_val_977_, v_val_994_, v_snd_990_, v___x_1002_, v___x_1003_, v_b_981_);
lean_dec(v_val_994_);
v___y_983_ = v___x_1004_;
goto v___jp_982_;
}
}
}
}
}
else
{
return v_b_981_;
}
v___jp_982_:
{
size_t v___x_984_; size_t v___x_985_; 
v___x_984_ = ((size_t)1ULL);
v___x_985_ = lean_usize_add(v_i_979_, v___x_984_);
v_i_979_ = v___x_985_;
v_b_981_ = v___y_983_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__2___boxed(lean_object* v_a_1005_, lean_object* v_val_1006_, lean_object* v_as_1007_, lean_object* v_i_1008_, lean_object* v_stop_1009_, lean_object* v_b_1010_){
_start:
{
size_t v_i_boxed_1011_; size_t v_stop_boxed_1012_; lean_object* v_res_1013_; 
v_i_boxed_1011_ = lean_unbox_usize(v_i_1008_);
lean_dec(v_i_1008_);
v_stop_boxed_1012_ = lean_unbox_usize(v_stop_1009_);
lean_dec(v_stop_1009_);
v_res_1013_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__2(v_a_1005_, v_val_1006_, v_as_1007_, v_i_boxed_1011_, v_stop_boxed_1012_, v_b_1010_);
lean_dec_ref(v_as_1007_);
lean_dec_ref(v_val_1006_);
lean_dec_ref(v_a_1005_);
return v_res_1013_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__3(lean_object* v_as_1014_, size_t v_i_1015_, size_t v_stop_1016_, lean_object* v_b_1017_){
_start:
{
uint8_t v___x_1018_; 
v___x_1018_ = lean_usize_dec_eq(v_i_1015_, v_stop_1016_);
if (v___x_1018_ == 0)
{
lean_object* v___x_1019_; lean_object* v___x_1020_; size_t v___x_1021_; size_t v___x_1022_; 
v___x_1019_ = lean_array_uget_borrowed(v_as_1014_, v_i_1015_);
lean_inc(v___x_1019_);
v___x_1020_ = lake_environment_add(v_b_1017_, v___x_1019_);
v___x_1021_ = ((size_t)1ULL);
v___x_1022_ = lean_usize_add(v_i_1015_, v___x_1021_);
v_i_1015_ = v___x_1022_;
v_b_1017_ = v___x_1020_;
goto _start;
}
else
{
return v_b_1017_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__3___boxed(lean_object* v_as_1024_, lean_object* v_i_1025_, lean_object* v_stop_1026_, lean_object* v_b_1027_){
_start:
{
size_t v_i_boxed_1028_; size_t v_stop_boxed_1029_; lean_object* v_res_1030_; 
v_i_boxed_1028_ = lean_unbox_usize(v_i_1025_);
lean_dec(v_i_1025_);
v_stop_boxed_1029_ = lean_unbox_usize(v_stop_1026_);
lean_dec(v_stop_1026_);
v_res_1030_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__3(v_as_1024_, v_i_boxed_1028_, v_stop_boxed_1029_, v_b_1027_);
lean_dec_ref(v_as_1024_);
return v_res_1030_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore(lean_object* v_olean_1031_, lean_object* v_leanOpts_1032_){
_start:
{
lean_object* v___x_1034_; 
v___x_1034_ = l_Lean_readModuleData(v_olean_1031_);
if (lean_obj_tag(v___x_1034_) == 0)
{
lean_object* v_a_1035_; lean_object* v_fst_1036_; lean_object* v_imports_1037_; lean_object* v_constants_1038_; lean_object* v_entries_1039_; uint32_t v___x_1040_; lean_object* v___x_1041_; 
v_a_1035_ = lean_ctor_get(v___x_1034_, 0);
lean_inc(v_a_1035_);
lean_dec_ref_known(v___x_1034_, 1);
v_fst_1036_ = lean_ctor_get(v_a_1035_, 0);
lean_inc(v_fst_1036_);
lean_dec(v_a_1035_);
v_imports_1037_ = lean_ctor_get(v_fst_1036_, 0);
lean_inc_ref(v_imports_1037_);
v_constants_1038_ = lean_ctor_get(v_fst_1036_, 2);
lean_inc_ref(v_constants_1038_);
v_entries_1039_ = lean_ctor_get(v_fst_1036_, 4);
lean_inc_ref(v_entries_1039_);
lean_dec(v_fst_1036_);
v___x_1040_ = 1024;
v___x_1041_ = l_Lake_importModulesUsingCache(v_imports_1037_, v_leanOpts_1032_, v___x_1040_);
if (lean_obj_tag(v___x_1041_) == 0)
{
lean_object* v_a_1042_; lean_object* v___x_1043_; lean_object* v___y_1045_; lean_object* v___x_1083_; uint8_t v___x_1084_; 
v_a_1042_ = lean_ctor_get(v___x_1041_, 0);
lean_inc(v_a_1042_);
lean_dec_ref_known(v___x_1041_, 1);
v___x_1043_ = lean_unsigned_to_nat(0u);
v___x_1083_ = lean_array_get_size(v_constants_1038_);
v___x_1084_ = lean_nat_dec_lt(v___x_1043_, v___x_1083_);
if (v___x_1084_ == 0)
{
lean_dec_ref(v_constants_1038_);
v___y_1045_ = v_a_1042_;
goto v___jp_1044_;
}
else
{
uint8_t v___x_1085_; 
v___x_1085_ = lean_nat_dec_le(v___x_1083_, v___x_1083_);
if (v___x_1085_ == 0)
{
if (v___x_1084_ == 0)
{
lean_dec_ref(v_constants_1038_);
v___y_1045_ = v_a_1042_;
goto v___jp_1044_;
}
else
{
size_t v___x_1086_; size_t v___x_1087_; lean_object* v___x_1088_; 
v___x_1086_ = ((size_t)0ULL);
v___x_1087_ = lean_usize_of_nat(v___x_1083_);
v___x_1088_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__3(v_constants_1038_, v___x_1086_, v___x_1087_, v_a_1042_);
lean_dec_ref(v_constants_1038_);
v___y_1045_ = v___x_1088_;
goto v___jp_1044_;
}
}
else
{
size_t v___x_1089_; size_t v___x_1090_; lean_object* v___x_1091_; 
v___x_1089_ = ((size_t)0ULL);
v___x_1090_ = lean_usize_of_nat(v___x_1083_);
v___x_1091_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__3(v_constants_1038_, v___x_1089_, v___x_1090_, v_a_1042_);
lean_dec_ref(v_constants_1038_);
v___y_1045_ = v___x_1091_;
goto v___jp_1044_;
}
}
v___jp_1044_:
{
lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; 
v___x_1046_ = l_Lean_persistentEnvExtensionsRef;
v___x_1047_ = lean_st_ref_get(v___x_1046_);
v___x_1048_ = l_Lean_mkExtNameMap(v___x_1043_);
if (lean_obj_tag(v___x_1048_) == 0)
{
lean_object* v_a_1049_; lean_object* v___x_1051_; uint8_t v_isShared_1052_; uint8_t v_isSharedCheck_1074_; 
v_a_1049_ = lean_ctor_get(v___x_1048_, 0);
v_isSharedCheck_1074_ = !lean_is_exclusive(v___x_1048_);
if (v_isSharedCheck_1074_ == 0)
{
v___x_1051_ = v___x_1048_;
v_isShared_1052_ = v_isSharedCheck_1074_;
goto v_resetjp_1050_;
}
else
{
lean_inc(v_a_1049_);
lean_dec(v___x_1048_);
v___x_1051_ = lean_box(0);
v_isShared_1052_ = v_isSharedCheck_1074_;
goto v_resetjp_1050_;
}
v_resetjp_1050_:
{
lean_object* v___x_1053_; uint8_t v___x_1054_; 
v___x_1053_ = lean_array_get_size(v_entries_1039_);
v___x_1054_ = lean_nat_dec_lt(v___x_1043_, v___x_1053_);
if (v___x_1054_ == 0)
{
lean_object* v___x_1056_; 
lean_dec(v_a_1049_);
lean_dec(v___x_1047_);
lean_dec_ref(v_entries_1039_);
if (v_isShared_1052_ == 0)
{
lean_ctor_set(v___x_1051_, 0, v___y_1045_);
v___x_1056_ = v___x_1051_;
goto v_reusejp_1055_;
}
else
{
lean_object* v_reuseFailAlloc_1057_; 
v_reuseFailAlloc_1057_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1057_, 0, v___y_1045_);
v___x_1056_ = v_reuseFailAlloc_1057_;
goto v_reusejp_1055_;
}
v_reusejp_1055_:
{
return v___x_1056_;
}
}
else
{
uint8_t v___x_1058_; 
v___x_1058_ = lean_nat_dec_le(v___x_1053_, v___x_1053_);
if (v___x_1058_ == 0)
{
if (v___x_1054_ == 0)
{
lean_object* v___x_1060_; 
lean_dec(v_a_1049_);
lean_dec(v___x_1047_);
lean_dec_ref(v_entries_1039_);
if (v_isShared_1052_ == 0)
{
lean_ctor_set(v___x_1051_, 0, v___y_1045_);
v___x_1060_ = v___x_1051_;
goto v_reusejp_1059_;
}
else
{
lean_object* v_reuseFailAlloc_1061_; 
v_reuseFailAlloc_1061_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1061_, 0, v___y_1045_);
v___x_1060_ = v_reuseFailAlloc_1061_;
goto v_reusejp_1059_;
}
v_reusejp_1059_:
{
return v___x_1060_;
}
}
else
{
size_t v___x_1062_; size_t v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1066_; 
v___x_1062_ = ((size_t)0ULL);
v___x_1063_ = lean_usize_of_nat(v___x_1053_);
v___x_1064_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__2(v_a_1049_, v___x_1047_, v_entries_1039_, v___x_1062_, v___x_1063_, v___y_1045_);
lean_dec_ref(v_entries_1039_);
lean_dec(v___x_1047_);
lean_dec(v_a_1049_);
if (v_isShared_1052_ == 0)
{
lean_ctor_set(v___x_1051_, 0, v___x_1064_);
v___x_1066_ = v___x_1051_;
goto v_reusejp_1065_;
}
else
{
lean_object* v_reuseFailAlloc_1067_; 
v_reuseFailAlloc_1067_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1067_, 0, v___x_1064_);
v___x_1066_ = v_reuseFailAlloc_1067_;
goto v_reusejp_1065_;
}
v_reusejp_1065_:
{
return v___x_1066_;
}
}
}
else
{
size_t v___x_1068_; size_t v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1072_; 
v___x_1068_ = ((size_t)0ULL);
v___x_1069_ = lean_usize_of_nat(v___x_1053_);
v___x_1070_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__2(v_a_1049_, v___x_1047_, v_entries_1039_, v___x_1068_, v___x_1069_, v___y_1045_);
lean_dec_ref(v_entries_1039_);
lean_dec(v___x_1047_);
lean_dec(v_a_1049_);
if (v_isShared_1052_ == 0)
{
lean_ctor_set(v___x_1051_, 0, v___x_1070_);
v___x_1072_ = v___x_1051_;
goto v_reusejp_1071_;
}
else
{
lean_object* v_reuseFailAlloc_1073_; 
v_reuseFailAlloc_1073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1073_, 0, v___x_1070_);
v___x_1072_ = v_reuseFailAlloc_1073_;
goto v_reusejp_1071_;
}
v_reusejp_1071_:
{
return v___x_1072_;
}
}
}
}
}
else
{
lean_object* v_a_1075_; lean_object* v___x_1077_; uint8_t v_isShared_1078_; uint8_t v_isSharedCheck_1082_; 
lean_dec(v___x_1047_);
lean_dec_ref(v___y_1045_);
lean_dec_ref(v_entries_1039_);
v_a_1075_ = lean_ctor_get(v___x_1048_, 0);
v_isSharedCheck_1082_ = !lean_is_exclusive(v___x_1048_);
if (v_isSharedCheck_1082_ == 0)
{
v___x_1077_ = v___x_1048_;
v_isShared_1078_ = v_isSharedCheck_1082_;
goto v_resetjp_1076_;
}
else
{
lean_inc(v_a_1075_);
lean_dec(v___x_1048_);
v___x_1077_ = lean_box(0);
v_isShared_1078_ = v_isSharedCheck_1082_;
goto v_resetjp_1076_;
}
v_resetjp_1076_:
{
lean_object* v___x_1080_; 
if (v_isShared_1078_ == 0)
{
v___x_1080_ = v___x_1077_;
goto v_reusejp_1079_;
}
else
{
lean_object* v_reuseFailAlloc_1081_; 
v_reuseFailAlloc_1081_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1081_, 0, v_a_1075_);
v___x_1080_ = v_reuseFailAlloc_1081_;
goto v_reusejp_1079_;
}
v_reusejp_1079_:
{
return v___x_1080_;
}
}
}
}
}
else
{
lean_dec_ref(v_entries_1039_);
lean_dec_ref(v_constants_1038_);
return v___x_1041_;
}
}
else
{
lean_object* v_a_1092_; lean_object* v___x_1094_; uint8_t v_isShared_1095_; uint8_t v_isSharedCheck_1099_; 
lean_dec_ref(v_leanOpts_1032_);
v_a_1092_ = lean_ctor_get(v___x_1034_, 0);
v_isSharedCheck_1099_ = !lean_is_exclusive(v___x_1034_);
if (v_isSharedCheck_1099_ == 0)
{
v___x_1094_ = v___x_1034_;
v_isShared_1095_ = v_isSharedCheck_1099_;
goto v_resetjp_1093_;
}
else
{
lean_inc(v_a_1092_);
lean_dec(v___x_1034_);
v___x_1094_ = lean_box(0);
v_isShared_1095_ = v_isSharedCheck_1099_;
goto v_resetjp_1093_;
}
v_resetjp_1093_:
{
lean_object* v___x_1097_; 
if (v_isShared_1095_ == 0)
{
v___x_1097_ = v___x_1094_;
goto v_reusejp_1096_;
}
else
{
lean_object* v_reuseFailAlloc_1098_; 
v_reuseFailAlloc_1098_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1098_, 0, v_a_1092_);
v___x_1097_ = v_reuseFailAlloc_1098_;
goto v_reusejp_1096_;
}
v_reusejp_1096_:
{
return v___x_1097_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore___boxed(lean_object* v_olean_1100_, lean_object* v_leanOpts_1101_, lean_object* v_a_1102_){
_start:
{
lean_object* v_res_1103_; 
v_res_1103_ = l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore(v_olean_1100_, v_leanOpts_1101_);
lean_dec_ref(v_olean_1100_);
return v_res_1103_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__0(lean_object* v_00_u03b2_1104_, lean_object* v_m_1105_, lean_object* v_a_1106_){
_start:
{
lean_object* v___x_1107_; 
v___x_1107_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__0___redArg(v_m_1105_, v_a_1106_);
return v___x_1107_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__0___boxed(lean_object* v_00_u03b2_1108_, lean_object* v_m_1109_, lean_object* v_a_1110_){
_start:
{
lean_object* v_res_1111_; 
v_res_1111_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__0(v_00_u03b2_1108_, v_m_1109_, v_a_1110_);
lean_dec(v_a_1110_);
lean_dec_ref(v_m_1109_);
return v_res_1111_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__0_spec__0(lean_object* v_00_u03b2_1112_, lean_object* v_a_1113_, lean_object* v_x_1114_){
_start:
{
lean_object* v___x_1115_; 
v___x_1115_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__0_spec__0___redArg(v_a_1113_, v_x_1114_);
return v___x_1115_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1116_, lean_object* v_a_1117_, lean_object* v_x_1118_){
_start:
{
lean_object* v_res_1119_; 
v_res_1119_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__0_spec__0(v_00_u03b2_1116_, v_a_1117_, v_x_1118_);
lean_dec(v_x_1118_);
lean_dec(v_a_1117_);
return v_res_1119_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0_spec__1___redArg(lean_object* v_msg_1120_){
_start:
{
lean_object* v___x_1121_; lean_object* v___x_1122_; 
v___x_1121_ = lean_box(1);
v___x_1122_ = lean_panic_fn_borrowed(v___x_1121_, v_msg_1120_);
return v___x_1122_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; 
v___x_1126_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0___redArg___closed__2));
v___x_1127_ = lean_unsigned_to_nat(35u);
v___x_1128_ = lean_unsigned_to_nat(182u);
v___x_1129_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0___redArg___closed__1));
v___x_1130_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0___redArg___closed__0));
v___x_1131_ = l_mkPanicMessageWithDecl(v___x_1130_, v___x_1129_, v___x_1128_, v___x_1127_, v___x_1126_);
return v___x_1131_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0___redArg___closed__4(void){
_start:
{
lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; 
v___x_1132_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0___redArg___closed__2));
v___x_1133_ = lean_unsigned_to_nat(21u);
v___x_1134_ = lean_unsigned_to_nat(183u);
v___x_1135_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0___redArg___closed__1));
v___x_1136_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0___redArg___closed__0));
v___x_1137_ = l_mkPanicMessageWithDecl(v___x_1136_, v___x_1135_, v___x_1134_, v___x_1133_, v___x_1132_);
return v___x_1137_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0___redArg___closed__7(void){
_start:
{
lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; 
v___x_1140_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0___redArg___closed__6));
v___x_1141_ = lean_unsigned_to_nat(35u);
v___x_1142_ = lean_unsigned_to_nat(276u);
v___x_1143_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0___redArg___closed__5));
v___x_1144_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0___redArg___closed__0));
v___x_1145_ = l_mkPanicMessageWithDecl(v___x_1144_, v___x_1143_, v___x_1142_, v___x_1141_, v___x_1140_);
return v___x_1145_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0___redArg___closed__8(void){
_start:
{
lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; 
v___x_1146_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0___redArg___closed__6));
v___x_1147_ = lean_unsigned_to_nat(21u);
v___x_1148_ = lean_unsigned_to_nat(277u);
v___x_1149_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0___redArg___closed__5));
v___x_1150_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0___redArg___closed__0));
v___x_1151_ = l_mkPanicMessageWithDecl(v___x_1150_, v___x_1149_, v___x_1148_, v___x_1147_, v___x_1146_);
return v___x_1151_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0___redArg(lean_object* v_k_1152_, lean_object* v_v_1153_, lean_object* v_t_1154_){
_start:
{
if (lean_obj_tag(v_t_1154_) == 0)
{
lean_object* v_size_1155_; lean_object* v_k_1156_; lean_object* v_v_1157_; lean_object* v_l_1158_; lean_object* v_r_1159_; lean_object* v___x_1161_; uint8_t v_isShared_1162_; uint8_t v_isSharedCheck_1515_; 
v_size_1155_ = lean_ctor_get(v_t_1154_, 0);
v_k_1156_ = lean_ctor_get(v_t_1154_, 1);
v_v_1157_ = lean_ctor_get(v_t_1154_, 2);
v_l_1158_ = lean_ctor_get(v_t_1154_, 3);
v_r_1159_ = lean_ctor_get(v_t_1154_, 4);
v_isSharedCheck_1515_ = !lean_is_exclusive(v_t_1154_);
if (v_isSharedCheck_1515_ == 0)
{
v___x_1161_ = v_t_1154_;
v_isShared_1162_ = v_isSharedCheck_1515_;
goto v_resetjp_1160_;
}
else
{
lean_inc(v_r_1159_);
lean_inc(v_l_1158_);
lean_inc(v_v_1157_);
lean_inc(v_k_1156_);
lean_inc(v_size_1155_);
lean_dec(v_t_1154_);
v___x_1161_ = lean_box(0);
v_isShared_1162_ = v_isSharedCheck_1515_;
goto v_resetjp_1160_;
}
v_resetjp_1160_:
{
uint8_t v___x_1163_; 
v___x_1163_ = lean_string_compare(v_k_1152_, v_k_1156_);
switch(v___x_1163_)
{
case 0:
{
lean_object* v___x_1164_; 
lean_dec(v_size_1155_);
v___x_1164_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0___redArg(v_k_1152_, v_v_1153_, v_l_1158_);
if (lean_obj_tag(v_r_1159_) == 0)
{
if (lean_obj_tag(v___x_1164_) == 0)
{
lean_object* v_size_1165_; lean_object* v_size_1166_; lean_object* v_k_1167_; lean_object* v_v_1168_; lean_object* v_l_1169_; lean_object* v_r_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; uint8_t v___x_1173_; 
v_size_1165_ = lean_ctor_get(v_r_1159_, 0);
v_size_1166_ = lean_ctor_get(v___x_1164_, 0);
lean_inc(v_size_1166_);
v_k_1167_ = lean_ctor_get(v___x_1164_, 1);
lean_inc(v_k_1167_);
v_v_1168_ = lean_ctor_get(v___x_1164_, 2);
lean_inc(v_v_1168_);
v_l_1169_ = lean_ctor_get(v___x_1164_, 3);
lean_inc(v_l_1169_);
v_r_1170_ = lean_ctor_get(v___x_1164_, 4);
lean_inc(v_r_1170_);
v___x_1171_ = lean_unsigned_to_nat(3u);
v___x_1172_ = lean_nat_mul(v___x_1171_, v_size_1165_);
v___x_1173_ = lean_nat_dec_lt(v___x_1172_, v_size_1166_);
lean_dec(v___x_1172_);
if (v___x_1173_ == 0)
{
lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1178_; 
lean_dec(v_r_1170_);
lean_dec(v_l_1169_);
lean_dec(v_v_1168_);
lean_dec(v_k_1167_);
v___x_1174_ = lean_unsigned_to_nat(1u);
v___x_1175_ = lean_nat_add(v___x_1174_, v_size_1166_);
lean_dec(v_size_1166_);
v___x_1176_ = lean_nat_add(v___x_1175_, v_size_1165_);
lean_dec(v___x_1175_);
if (v_isShared_1162_ == 0)
{
lean_ctor_set(v___x_1161_, 3, v___x_1164_);
lean_ctor_set(v___x_1161_, 0, v___x_1176_);
v___x_1178_ = v___x_1161_;
goto v_reusejp_1177_;
}
else
{
lean_object* v_reuseFailAlloc_1179_; 
v_reuseFailAlloc_1179_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1179_, 0, v___x_1176_);
lean_ctor_set(v_reuseFailAlloc_1179_, 1, v_k_1156_);
lean_ctor_set(v_reuseFailAlloc_1179_, 2, v_v_1157_);
lean_ctor_set(v_reuseFailAlloc_1179_, 3, v___x_1164_);
lean_ctor_set(v_reuseFailAlloc_1179_, 4, v_r_1159_);
v___x_1178_ = v_reuseFailAlloc_1179_;
goto v_reusejp_1177_;
}
v_reusejp_1177_:
{
return v___x_1178_;
}
}
else
{
lean_object* v___x_1181_; uint8_t v_isShared_1182_; uint8_t v_isSharedCheck_1251_; 
v_isSharedCheck_1251_ = !lean_is_exclusive(v___x_1164_);
if (v_isSharedCheck_1251_ == 0)
{
lean_object* v_unused_1252_; lean_object* v_unused_1253_; lean_object* v_unused_1254_; lean_object* v_unused_1255_; lean_object* v_unused_1256_; 
v_unused_1252_ = lean_ctor_get(v___x_1164_, 4);
lean_dec(v_unused_1252_);
v_unused_1253_ = lean_ctor_get(v___x_1164_, 3);
lean_dec(v_unused_1253_);
v_unused_1254_ = lean_ctor_get(v___x_1164_, 2);
lean_dec(v_unused_1254_);
v_unused_1255_ = lean_ctor_get(v___x_1164_, 1);
lean_dec(v_unused_1255_);
v_unused_1256_ = lean_ctor_get(v___x_1164_, 0);
lean_dec(v_unused_1256_);
v___x_1181_ = v___x_1164_;
v_isShared_1182_ = v_isSharedCheck_1251_;
goto v_resetjp_1180_;
}
else
{
lean_dec(v___x_1164_);
v___x_1181_ = lean_box(0);
v_isShared_1182_ = v_isSharedCheck_1251_;
goto v_resetjp_1180_;
}
v_resetjp_1180_:
{
if (lean_obj_tag(v_l_1169_) == 0)
{
if (lean_obj_tag(v_r_1170_) == 0)
{
lean_object* v_size_1183_; lean_object* v_size_1184_; lean_object* v_k_1185_; lean_object* v_v_1186_; lean_object* v_l_1187_; lean_object* v_r_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; uint8_t v___x_1191_; 
v_size_1183_ = lean_ctor_get(v_l_1169_, 0);
v_size_1184_ = lean_ctor_get(v_r_1170_, 0);
v_k_1185_ = lean_ctor_get(v_r_1170_, 1);
v_v_1186_ = lean_ctor_get(v_r_1170_, 2);
v_l_1187_ = lean_ctor_get(v_r_1170_, 3);
v_r_1188_ = lean_ctor_get(v_r_1170_, 4);
v___x_1189_ = lean_unsigned_to_nat(2u);
v___x_1190_ = lean_nat_mul(v___x_1189_, v_size_1183_);
v___x_1191_ = lean_nat_dec_lt(v_size_1184_, v___x_1190_);
lean_dec(v___x_1190_);
if (v___x_1191_ == 0)
{
lean_object* v___x_1193_; uint8_t v_isShared_1194_; uint8_t v_isSharedCheck_1221_; 
lean_inc(v_r_1188_);
lean_inc(v_l_1187_);
lean_inc(v_v_1186_);
lean_inc(v_k_1185_);
v_isSharedCheck_1221_ = !lean_is_exclusive(v_r_1170_);
if (v_isSharedCheck_1221_ == 0)
{
lean_object* v_unused_1222_; lean_object* v_unused_1223_; lean_object* v_unused_1224_; lean_object* v_unused_1225_; lean_object* v_unused_1226_; 
v_unused_1222_ = lean_ctor_get(v_r_1170_, 4);
lean_dec(v_unused_1222_);
v_unused_1223_ = lean_ctor_get(v_r_1170_, 3);
lean_dec(v_unused_1223_);
v_unused_1224_ = lean_ctor_get(v_r_1170_, 2);
lean_dec(v_unused_1224_);
v_unused_1225_ = lean_ctor_get(v_r_1170_, 1);
lean_dec(v_unused_1225_);
v_unused_1226_ = lean_ctor_get(v_r_1170_, 0);
lean_dec(v_unused_1226_);
v___x_1193_ = v_r_1170_;
v_isShared_1194_ = v_isSharedCheck_1221_;
goto v_resetjp_1192_;
}
else
{
lean_dec(v_r_1170_);
v___x_1193_ = lean_box(0);
v_isShared_1194_ = v_isSharedCheck_1221_;
goto v_resetjp_1192_;
}
v_resetjp_1192_:
{
lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___y_1199_; lean_object* v___y_1200_; lean_object* v___y_1201_; lean_object* v___x_1209_; lean_object* v___y_1211_; 
v___x_1195_ = lean_unsigned_to_nat(1u);
v___x_1196_ = lean_nat_add(v___x_1195_, v_size_1166_);
lean_dec(v_size_1166_);
v___x_1197_ = lean_nat_add(v___x_1196_, v_size_1165_);
lean_dec(v___x_1196_);
v___x_1209_ = lean_nat_add(v___x_1195_, v_size_1183_);
if (lean_obj_tag(v_l_1187_) == 0)
{
lean_object* v_size_1219_; 
v_size_1219_ = lean_ctor_get(v_l_1187_, 0);
lean_inc(v_size_1219_);
v___y_1211_ = v_size_1219_;
goto v___jp_1210_;
}
else
{
lean_object* v___x_1220_; 
v___x_1220_ = lean_unsigned_to_nat(0u);
v___y_1211_ = v___x_1220_;
goto v___jp_1210_;
}
v___jp_1198_:
{
lean_object* v___x_1202_; lean_object* v___x_1204_; 
v___x_1202_ = lean_nat_add(v___y_1200_, v___y_1201_);
lean_dec(v___y_1201_);
lean_dec(v___y_1200_);
if (v_isShared_1194_ == 0)
{
lean_ctor_set(v___x_1193_, 4, v_r_1159_);
lean_ctor_set(v___x_1193_, 3, v_r_1188_);
lean_ctor_set(v___x_1193_, 2, v_v_1157_);
lean_ctor_set(v___x_1193_, 1, v_k_1156_);
lean_ctor_set(v___x_1193_, 0, v___x_1202_);
v___x_1204_ = v___x_1193_;
goto v_reusejp_1203_;
}
else
{
lean_object* v_reuseFailAlloc_1208_; 
v_reuseFailAlloc_1208_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1208_, 0, v___x_1202_);
lean_ctor_set(v_reuseFailAlloc_1208_, 1, v_k_1156_);
lean_ctor_set(v_reuseFailAlloc_1208_, 2, v_v_1157_);
lean_ctor_set(v_reuseFailAlloc_1208_, 3, v_r_1188_);
lean_ctor_set(v_reuseFailAlloc_1208_, 4, v_r_1159_);
v___x_1204_ = v_reuseFailAlloc_1208_;
goto v_reusejp_1203_;
}
v_reusejp_1203_:
{
lean_object* v___x_1206_; 
if (v_isShared_1182_ == 0)
{
lean_ctor_set(v___x_1181_, 4, v___x_1204_);
lean_ctor_set(v___x_1181_, 3, v___y_1199_);
lean_ctor_set(v___x_1181_, 2, v_v_1186_);
lean_ctor_set(v___x_1181_, 1, v_k_1185_);
lean_ctor_set(v___x_1181_, 0, v___x_1197_);
v___x_1206_ = v___x_1181_;
goto v_reusejp_1205_;
}
else
{
lean_object* v_reuseFailAlloc_1207_; 
v_reuseFailAlloc_1207_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1207_, 0, v___x_1197_);
lean_ctor_set(v_reuseFailAlloc_1207_, 1, v_k_1185_);
lean_ctor_set(v_reuseFailAlloc_1207_, 2, v_v_1186_);
lean_ctor_set(v_reuseFailAlloc_1207_, 3, v___y_1199_);
lean_ctor_set(v_reuseFailAlloc_1207_, 4, v___x_1204_);
v___x_1206_ = v_reuseFailAlloc_1207_;
goto v_reusejp_1205_;
}
v_reusejp_1205_:
{
return v___x_1206_;
}
}
}
v___jp_1210_:
{
lean_object* v___x_1212_; lean_object* v___x_1214_; 
v___x_1212_ = lean_nat_add(v___x_1209_, v___y_1211_);
lean_dec(v___y_1211_);
lean_dec(v___x_1209_);
if (v_isShared_1162_ == 0)
{
lean_ctor_set(v___x_1161_, 4, v_l_1187_);
lean_ctor_set(v___x_1161_, 3, v_l_1169_);
lean_ctor_set(v___x_1161_, 2, v_v_1168_);
lean_ctor_set(v___x_1161_, 1, v_k_1167_);
lean_ctor_set(v___x_1161_, 0, v___x_1212_);
v___x_1214_ = v___x_1161_;
goto v_reusejp_1213_;
}
else
{
lean_object* v_reuseFailAlloc_1218_; 
v_reuseFailAlloc_1218_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1218_, 0, v___x_1212_);
lean_ctor_set(v_reuseFailAlloc_1218_, 1, v_k_1167_);
lean_ctor_set(v_reuseFailAlloc_1218_, 2, v_v_1168_);
lean_ctor_set(v_reuseFailAlloc_1218_, 3, v_l_1169_);
lean_ctor_set(v_reuseFailAlloc_1218_, 4, v_l_1187_);
v___x_1214_ = v_reuseFailAlloc_1218_;
goto v_reusejp_1213_;
}
v_reusejp_1213_:
{
lean_object* v___x_1215_; 
v___x_1215_ = lean_nat_add(v___x_1195_, v_size_1165_);
if (lean_obj_tag(v_r_1188_) == 0)
{
lean_object* v_size_1216_; 
v_size_1216_ = lean_ctor_get(v_r_1188_, 0);
lean_inc(v_size_1216_);
v___y_1199_ = v___x_1214_;
v___y_1200_ = v___x_1215_;
v___y_1201_ = v_size_1216_;
goto v___jp_1198_;
}
else
{
lean_object* v___x_1217_; 
v___x_1217_ = lean_unsigned_to_nat(0u);
v___y_1199_ = v___x_1214_;
v___y_1200_ = v___x_1215_;
v___y_1201_ = v___x_1217_;
goto v___jp_1198_;
}
}
}
}
}
else
{
lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1233_; 
lean_del_object(v___x_1161_);
v___x_1227_ = lean_unsigned_to_nat(1u);
v___x_1228_ = lean_nat_add(v___x_1227_, v_size_1166_);
lean_dec(v_size_1166_);
v___x_1229_ = lean_nat_add(v___x_1228_, v_size_1165_);
lean_dec(v___x_1228_);
v___x_1230_ = lean_nat_add(v___x_1227_, v_size_1165_);
v___x_1231_ = lean_nat_add(v___x_1230_, v_size_1184_);
lean_dec(v___x_1230_);
lean_inc_ref(v_r_1159_);
if (v_isShared_1182_ == 0)
{
lean_ctor_set(v___x_1181_, 4, v_r_1159_);
lean_ctor_set(v___x_1181_, 3, v_r_1170_);
lean_ctor_set(v___x_1181_, 2, v_v_1157_);
lean_ctor_set(v___x_1181_, 1, v_k_1156_);
lean_ctor_set(v___x_1181_, 0, v___x_1231_);
v___x_1233_ = v___x_1181_;
goto v_reusejp_1232_;
}
else
{
lean_object* v_reuseFailAlloc_1246_; 
v_reuseFailAlloc_1246_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1246_, 0, v___x_1231_);
lean_ctor_set(v_reuseFailAlloc_1246_, 1, v_k_1156_);
lean_ctor_set(v_reuseFailAlloc_1246_, 2, v_v_1157_);
lean_ctor_set(v_reuseFailAlloc_1246_, 3, v_r_1170_);
lean_ctor_set(v_reuseFailAlloc_1246_, 4, v_r_1159_);
v___x_1233_ = v_reuseFailAlloc_1246_;
goto v_reusejp_1232_;
}
v_reusejp_1232_:
{
lean_object* v___x_1235_; uint8_t v_isShared_1236_; uint8_t v_isSharedCheck_1240_; 
v_isSharedCheck_1240_ = !lean_is_exclusive(v_r_1159_);
if (v_isSharedCheck_1240_ == 0)
{
lean_object* v_unused_1241_; lean_object* v_unused_1242_; lean_object* v_unused_1243_; lean_object* v_unused_1244_; lean_object* v_unused_1245_; 
v_unused_1241_ = lean_ctor_get(v_r_1159_, 4);
lean_dec(v_unused_1241_);
v_unused_1242_ = lean_ctor_get(v_r_1159_, 3);
lean_dec(v_unused_1242_);
v_unused_1243_ = lean_ctor_get(v_r_1159_, 2);
lean_dec(v_unused_1243_);
v_unused_1244_ = lean_ctor_get(v_r_1159_, 1);
lean_dec(v_unused_1244_);
v_unused_1245_ = lean_ctor_get(v_r_1159_, 0);
lean_dec(v_unused_1245_);
v___x_1235_ = v_r_1159_;
v_isShared_1236_ = v_isSharedCheck_1240_;
goto v_resetjp_1234_;
}
else
{
lean_dec(v_r_1159_);
v___x_1235_ = lean_box(0);
v_isShared_1236_ = v_isSharedCheck_1240_;
goto v_resetjp_1234_;
}
v_resetjp_1234_:
{
lean_object* v___x_1238_; 
if (v_isShared_1236_ == 0)
{
lean_ctor_set(v___x_1235_, 4, v___x_1233_);
lean_ctor_set(v___x_1235_, 3, v_l_1169_);
lean_ctor_set(v___x_1235_, 2, v_v_1168_);
lean_ctor_set(v___x_1235_, 1, v_k_1167_);
lean_ctor_set(v___x_1235_, 0, v___x_1229_);
v___x_1238_ = v___x_1235_;
goto v_reusejp_1237_;
}
else
{
lean_object* v_reuseFailAlloc_1239_; 
v_reuseFailAlloc_1239_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1239_, 0, v___x_1229_);
lean_ctor_set(v_reuseFailAlloc_1239_, 1, v_k_1167_);
lean_ctor_set(v_reuseFailAlloc_1239_, 2, v_v_1168_);
lean_ctor_set(v_reuseFailAlloc_1239_, 3, v_l_1169_);
lean_ctor_set(v_reuseFailAlloc_1239_, 4, v___x_1233_);
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
else
{
lean_object* v___x_1247_; lean_object* v___x_1248_; 
lean_dec_ref_known(v_l_1169_, 5);
lean_del_object(v___x_1181_);
lean_dec(v_v_1168_);
lean_dec(v_k_1167_);
lean_dec(v_size_1166_);
lean_dec_ref_known(v_r_1159_, 5);
lean_del_object(v___x_1161_);
lean_dec(v_v_1157_);
lean_dec(v_k_1156_);
v___x_1247_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0___redArg___closed__3, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0___redArg___closed__3_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0___redArg___closed__3);
v___x_1248_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0_spec__1___redArg(v___x_1247_);
return v___x_1248_;
}
}
else
{
lean_object* v___x_1249_; lean_object* v___x_1250_; 
lean_del_object(v___x_1181_);
lean_dec(v_r_1170_);
lean_dec(v_v_1168_);
lean_dec(v_k_1167_);
lean_dec(v_size_1166_);
lean_dec_ref_known(v_r_1159_, 5);
lean_del_object(v___x_1161_);
lean_dec(v_v_1157_);
lean_dec(v_k_1156_);
v___x_1249_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0___redArg___closed__4, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0___redArg___closed__4_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0___redArg___closed__4);
v___x_1250_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0_spec__1___redArg(v___x_1249_);
return v___x_1250_;
}
}
}
}
else
{
lean_object* v_size_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1261_; 
v_size_1257_ = lean_ctor_get(v_r_1159_, 0);
v___x_1258_ = lean_unsigned_to_nat(1u);
v___x_1259_ = lean_nat_add(v___x_1258_, v_size_1257_);
if (v_isShared_1162_ == 0)
{
lean_ctor_set(v___x_1161_, 3, v___x_1164_);
lean_ctor_set(v___x_1161_, 0, v___x_1259_);
v___x_1261_ = v___x_1161_;
goto v_reusejp_1260_;
}
else
{
lean_object* v_reuseFailAlloc_1262_; 
v_reuseFailAlloc_1262_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1262_, 0, v___x_1259_);
lean_ctor_set(v_reuseFailAlloc_1262_, 1, v_k_1156_);
lean_ctor_set(v_reuseFailAlloc_1262_, 2, v_v_1157_);
lean_ctor_set(v_reuseFailAlloc_1262_, 3, v___x_1164_);
lean_ctor_set(v_reuseFailAlloc_1262_, 4, v_r_1159_);
v___x_1261_ = v_reuseFailAlloc_1262_;
goto v_reusejp_1260_;
}
v_reusejp_1260_:
{
return v___x_1261_;
}
}
}
else
{
if (lean_obj_tag(v___x_1164_) == 0)
{
lean_object* v_l_1263_; 
v_l_1263_ = lean_ctor_get(v___x_1164_, 3);
lean_inc(v_l_1263_);
if (lean_obj_tag(v_l_1263_) == 0)
{
lean_object* v_r_1264_; 
v_r_1264_ = lean_ctor_get(v___x_1164_, 4);
lean_inc(v_r_1264_);
if (lean_obj_tag(v_r_1264_) == 0)
{
lean_object* v_size_1265_; lean_object* v_k_1266_; lean_object* v_v_1267_; lean_object* v___x_1269_; uint8_t v_isShared_1270_; uint8_t v_isSharedCheck_1281_; 
v_size_1265_ = lean_ctor_get(v___x_1164_, 0);
v_k_1266_ = lean_ctor_get(v___x_1164_, 1);
v_v_1267_ = lean_ctor_get(v___x_1164_, 2);
v_isSharedCheck_1281_ = !lean_is_exclusive(v___x_1164_);
if (v_isSharedCheck_1281_ == 0)
{
lean_object* v_unused_1282_; lean_object* v_unused_1283_; 
v_unused_1282_ = lean_ctor_get(v___x_1164_, 4);
lean_dec(v_unused_1282_);
v_unused_1283_ = lean_ctor_get(v___x_1164_, 3);
lean_dec(v_unused_1283_);
v___x_1269_ = v___x_1164_;
v_isShared_1270_ = v_isSharedCheck_1281_;
goto v_resetjp_1268_;
}
else
{
lean_inc(v_v_1267_);
lean_inc(v_k_1266_);
lean_inc(v_size_1265_);
lean_dec(v___x_1164_);
v___x_1269_ = lean_box(0);
v_isShared_1270_ = v_isSharedCheck_1281_;
goto v_resetjp_1268_;
}
v_resetjp_1268_:
{
lean_object* v_size_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1276_; 
v_size_1271_ = lean_ctor_get(v_r_1264_, 0);
v___x_1272_ = lean_unsigned_to_nat(1u);
v___x_1273_ = lean_nat_add(v___x_1272_, v_size_1265_);
lean_dec(v_size_1265_);
v___x_1274_ = lean_nat_add(v___x_1272_, v_size_1271_);
if (v_isShared_1270_ == 0)
{
lean_ctor_set(v___x_1269_, 4, v_r_1159_);
lean_ctor_set(v___x_1269_, 3, v_r_1264_);
lean_ctor_set(v___x_1269_, 2, v_v_1157_);
lean_ctor_set(v___x_1269_, 1, v_k_1156_);
lean_ctor_set(v___x_1269_, 0, v___x_1274_);
v___x_1276_ = v___x_1269_;
goto v_reusejp_1275_;
}
else
{
lean_object* v_reuseFailAlloc_1280_; 
v_reuseFailAlloc_1280_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1280_, 0, v___x_1274_);
lean_ctor_set(v_reuseFailAlloc_1280_, 1, v_k_1156_);
lean_ctor_set(v_reuseFailAlloc_1280_, 2, v_v_1157_);
lean_ctor_set(v_reuseFailAlloc_1280_, 3, v_r_1264_);
lean_ctor_set(v_reuseFailAlloc_1280_, 4, v_r_1159_);
v___x_1276_ = v_reuseFailAlloc_1280_;
goto v_reusejp_1275_;
}
v_reusejp_1275_:
{
lean_object* v___x_1278_; 
if (v_isShared_1162_ == 0)
{
lean_ctor_set(v___x_1161_, 4, v___x_1276_);
lean_ctor_set(v___x_1161_, 3, v_l_1263_);
lean_ctor_set(v___x_1161_, 2, v_v_1267_);
lean_ctor_set(v___x_1161_, 1, v_k_1266_);
lean_ctor_set(v___x_1161_, 0, v___x_1273_);
v___x_1278_ = v___x_1161_;
goto v_reusejp_1277_;
}
else
{
lean_object* v_reuseFailAlloc_1279_; 
v_reuseFailAlloc_1279_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1279_, 0, v___x_1273_);
lean_ctor_set(v_reuseFailAlloc_1279_, 1, v_k_1266_);
lean_ctor_set(v_reuseFailAlloc_1279_, 2, v_v_1267_);
lean_ctor_set(v_reuseFailAlloc_1279_, 3, v_l_1263_);
lean_ctor_set(v_reuseFailAlloc_1279_, 4, v___x_1276_);
v___x_1278_ = v_reuseFailAlloc_1279_;
goto v_reusejp_1277_;
}
v_reusejp_1277_:
{
return v___x_1278_;
}
}
}
}
else
{
lean_object* v_k_1284_; lean_object* v_v_1285_; lean_object* v___x_1287_; uint8_t v_isShared_1288_; uint8_t v_isSharedCheck_1297_; 
v_k_1284_ = lean_ctor_get(v___x_1164_, 1);
v_v_1285_ = lean_ctor_get(v___x_1164_, 2);
v_isSharedCheck_1297_ = !lean_is_exclusive(v___x_1164_);
if (v_isSharedCheck_1297_ == 0)
{
lean_object* v_unused_1298_; lean_object* v_unused_1299_; lean_object* v_unused_1300_; 
v_unused_1298_ = lean_ctor_get(v___x_1164_, 4);
lean_dec(v_unused_1298_);
v_unused_1299_ = lean_ctor_get(v___x_1164_, 3);
lean_dec(v_unused_1299_);
v_unused_1300_ = lean_ctor_get(v___x_1164_, 0);
lean_dec(v_unused_1300_);
v___x_1287_ = v___x_1164_;
v_isShared_1288_ = v_isSharedCheck_1297_;
goto v_resetjp_1286_;
}
else
{
lean_inc(v_v_1285_);
lean_inc(v_k_1284_);
lean_dec(v___x_1164_);
v___x_1287_ = lean_box(0);
v_isShared_1288_ = v_isSharedCheck_1297_;
goto v_resetjp_1286_;
}
v_resetjp_1286_:
{
lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1292_; 
v___x_1289_ = lean_unsigned_to_nat(3u);
v___x_1290_ = lean_unsigned_to_nat(1u);
if (v_isShared_1288_ == 0)
{
lean_ctor_set(v___x_1287_, 3, v_r_1264_);
lean_ctor_set(v___x_1287_, 2, v_v_1157_);
lean_ctor_set(v___x_1287_, 1, v_k_1156_);
lean_ctor_set(v___x_1287_, 0, v___x_1290_);
v___x_1292_ = v___x_1287_;
goto v_reusejp_1291_;
}
else
{
lean_object* v_reuseFailAlloc_1296_; 
v_reuseFailAlloc_1296_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1296_, 0, v___x_1290_);
lean_ctor_set(v_reuseFailAlloc_1296_, 1, v_k_1156_);
lean_ctor_set(v_reuseFailAlloc_1296_, 2, v_v_1157_);
lean_ctor_set(v_reuseFailAlloc_1296_, 3, v_r_1264_);
lean_ctor_set(v_reuseFailAlloc_1296_, 4, v_r_1264_);
v___x_1292_ = v_reuseFailAlloc_1296_;
goto v_reusejp_1291_;
}
v_reusejp_1291_:
{
lean_object* v___x_1294_; 
if (v_isShared_1162_ == 0)
{
lean_ctor_set(v___x_1161_, 4, v___x_1292_);
lean_ctor_set(v___x_1161_, 3, v_l_1263_);
lean_ctor_set(v___x_1161_, 2, v_v_1285_);
lean_ctor_set(v___x_1161_, 1, v_k_1284_);
lean_ctor_set(v___x_1161_, 0, v___x_1289_);
v___x_1294_ = v___x_1161_;
goto v_reusejp_1293_;
}
else
{
lean_object* v_reuseFailAlloc_1295_; 
v_reuseFailAlloc_1295_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1295_, 0, v___x_1289_);
lean_ctor_set(v_reuseFailAlloc_1295_, 1, v_k_1284_);
lean_ctor_set(v_reuseFailAlloc_1295_, 2, v_v_1285_);
lean_ctor_set(v_reuseFailAlloc_1295_, 3, v_l_1263_);
lean_ctor_set(v_reuseFailAlloc_1295_, 4, v___x_1292_);
v___x_1294_ = v_reuseFailAlloc_1295_;
goto v_reusejp_1293_;
}
v_reusejp_1293_:
{
return v___x_1294_;
}
}
}
}
}
else
{
lean_object* v_r_1301_; 
v_r_1301_ = lean_ctor_get(v___x_1164_, 4);
lean_inc(v_r_1301_);
if (lean_obj_tag(v_r_1301_) == 0)
{
lean_object* v_k_1302_; lean_object* v_v_1303_; lean_object* v___x_1305_; uint8_t v_isShared_1306_; uint8_t v_isSharedCheck_1327_; 
v_k_1302_ = lean_ctor_get(v___x_1164_, 1);
v_v_1303_ = lean_ctor_get(v___x_1164_, 2);
v_isSharedCheck_1327_ = !lean_is_exclusive(v___x_1164_);
if (v_isSharedCheck_1327_ == 0)
{
lean_object* v_unused_1328_; lean_object* v_unused_1329_; lean_object* v_unused_1330_; 
v_unused_1328_ = lean_ctor_get(v___x_1164_, 4);
lean_dec(v_unused_1328_);
v_unused_1329_ = lean_ctor_get(v___x_1164_, 3);
lean_dec(v_unused_1329_);
v_unused_1330_ = lean_ctor_get(v___x_1164_, 0);
lean_dec(v_unused_1330_);
v___x_1305_ = v___x_1164_;
v_isShared_1306_ = v_isSharedCheck_1327_;
goto v_resetjp_1304_;
}
else
{
lean_inc(v_v_1303_);
lean_inc(v_k_1302_);
lean_dec(v___x_1164_);
v___x_1305_ = lean_box(0);
v_isShared_1306_ = v_isSharedCheck_1327_;
goto v_resetjp_1304_;
}
v_resetjp_1304_:
{
lean_object* v_k_1307_; lean_object* v_v_1308_; lean_object* v___x_1310_; uint8_t v_isShared_1311_; uint8_t v_isSharedCheck_1323_; 
v_k_1307_ = lean_ctor_get(v_r_1301_, 1);
v_v_1308_ = lean_ctor_get(v_r_1301_, 2);
v_isSharedCheck_1323_ = !lean_is_exclusive(v_r_1301_);
if (v_isSharedCheck_1323_ == 0)
{
lean_object* v_unused_1324_; lean_object* v_unused_1325_; lean_object* v_unused_1326_; 
v_unused_1324_ = lean_ctor_get(v_r_1301_, 4);
lean_dec(v_unused_1324_);
v_unused_1325_ = lean_ctor_get(v_r_1301_, 3);
lean_dec(v_unused_1325_);
v_unused_1326_ = lean_ctor_get(v_r_1301_, 0);
lean_dec(v_unused_1326_);
v___x_1310_ = v_r_1301_;
v_isShared_1311_ = v_isSharedCheck_1323_;
goto v_resetjp_1309_;
}
else
{
lean_inc(v_v_1308_);
lean_inc(v_k_1307_);
lean_dec(v_r_1301_);
v___x_1310_ = lean_box(0);
v_isShared_1311_ = v_isSharedCheck_1323_;
goto v_resetjp_1309_;
}
v_resetjp_1309_:
{
lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1315_; 
v___x_1312_ = lean_unsigned_to_nat(3u);
v___x_1313_ = lean_unsigned_to_nat(1u);
if (v_isShared_1311_ == 0)
{
lean_ctor_set(v___x_1310_, 4, v_l_1263_);
lean_ctor_set(v___x_1310_, 3, v_l_1263_);
lean_ctor_set(v___x_1310_, 2, v_v_1303_);
lean_ctor_set(v___x_1310_, 1, v_k_1302_);
lean_ctor_set(v___x_1310_, 0, v___x_1313_);
v___x_1315_ = v___x_1310_;
goto v_reusejp_1314_;
}
else
{
lean_object* v_reuseFailAlloc_1322_; 
v_reuseFailAlloc_1322_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1322_, 0, v___x_1313_);
lean_ctor_set(v_reuseFailAlloc_1322_, 1, v_k_1302_);
lean_ctor_set(v_reuseFailAlloc_1322_, 2, v_v_1303_);
lean_ctor_set(v_reuseFailAlloc_1322_, 3, v_l_1263_);
lean_ctor_set(v_reuseFailAlloc_1322_, 4, v_l_1263_);
v___x_1315_ = v_reuseFailAlloc_1322_;
goto v_reusejp_1314_;
}
v_reusejp_1314_:
{
lean_object* v___x_1317_; 
if (v_isShared_1306_ == 0)
{
lean_ctor_set(v___x_1305_, 4, v_l_1263_);
lean_ctor_set(v___x_1305_, 2, v_v_1157_);
lean_ctor_set(v___x_1305_, 1, v_k_1156_);
lean_ctor_set(v___x_1305_, 0, v___x_1313_);
v___x_1317_ = v___x_1305_;
goto v_reusejp_1316_;
}
else
{
lean_object* v_reuseFailAlloc_1321_; 
v_reuseFailAlloc_1321_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1321_, 0, v___x_1313_);
lean_ctor_set(v_reuseFailAlloc_1321_, 1, v_k_1156_);
lean_ctor_set(v_reuseFailAlloc_1321_, 2, v_v_1157_);
lean_ctor_set(v_reuseFailAlloc_1321_, 3, v_l_1263_);
lean_ctor_set(v_reuseFailAlloc_1321_, 4, v_l_1263_);
v___x_1317_ = v_reuseFailAlloc_1321_;
goto v_reusejp_1316_;
}
v_reusejp_1316_:
{
lean_object* v___x_1319_; 
if (v_isShared_1162_ == 0)
{
lean_ctor_set(v___x_1161_, 4, v___x_1317_);
lean_ctor_set(v___x_1161_, 3, v___x_1315_);
lean_ctor_set(v___x_1161_, 2, v_v_1308_);
lean_ctor_set(v___x_1161_, 1, v_k_1307_);
lean_ctor_set(v___x_1161_, 0, v___x_1312_);
v___x_1319_ = v___x_1161_;
goto v_reusejp_1318_;
}
else
{
lean_object* v_reuseFailAlloc_1320_; 
v_reuseFailAlloc_1320_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1320_, 0, v___x_1312_);
lean_ctor_set(v_reuseFailAlloc_1320_, 1, v_k_1307_);
lean_ctor_set(v_reuseFailAlloc_1320_, 2, v_v_1308_);
lean_ctor_set(v_reuseFailAlloc_1320_, 3, v___x_1315_);
lean_ctor_set(v_reuseFailAlloc_1320_, 4, v___x_1317_);
v___x_1319_ = v_reuseFailAlloc_1320_;
goto v_reusejp_1318_;
}
v_reusejp_1318_:
{
return v___x_1319_;
}
}
}
}
}
}
else
{
lean_object* v___x_1331_; lean_object* v___x_1333_; 
v___x_1331_ = lean_unsigned_to_nat(2u);
if (v_isShared_1162_ == 0)
{
lean_ctor_set(v___x_1161_, 4, v_r_1301_);
lean_ctor_set(v___x_1161_, 3, v___x_1164_);
lean_ctor_set(v___x_1161_, 0, v___x_1331_);
v___x_1333_ = v___x_1161_;
goto v_reusejp_1332_;
}
else
{
lean_object* v_reuseFailAlloc_1334_; 
v_reuseFailAlloc_1334_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1334_, 0, v___x_1331_);
lean_ctor_set(v_reuseFailAlloc_1334_, 1, v_k_1156_);
lean_ctor_set(v_reuseFailAlloc_1334_, 2, v_v_1157_);
lean_ctor_set(v_reuseFailAlloc_1334_, 3, v___x_1164_);
lean_ctor_set(v_reuseFailAlloc_1334_, 4, v_r_1301_);
v___x_1333_ = v_reuseFailAlloc_1334_;
goto v_reusejp_1332_;
}
v_reusejp_1332_:
{
return v___x_1333_;
}
}
}
}
else
{
lean_object* v___x_1335_; lean_object* v___x_1337_; 
v___x_1335_ = lean_unsigned_to_nat(1u);
if (v_isShared_1162_ == 0)
{
lean_ctor_set(v___x_1161_, 4, v___x_1164_);
lean_ctor_set(v___x_1161_, 3, v___x_1164_);
lean_ctor_set(v___x_1161_, 0, v___x_1335_);
v___x_1337_ = v___x_1161_;
goto v_reusejp_1336_;
}
else
{
lean_object* v_reuseFailAlloc_1338_; 
v_reuseFailAlloc_1338_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1338_, 0, v___x_1335_);
lean_ctor_set(v_reuseFailAlloc_1338_, 1, v_k_1156_);
lean_ctor_set(v_reuseFailAlloc_1338_, 2, v_v_1157_);
lean_ctor_set(v_reuseFailAlloc_1338_, 3, v___x_1164_);
lean_ctor_set(v_reuseFailAlloc_1338_, 4, v___x_1164_);
v___x_1337_ = v_reuseFailAlloc_1338_;
goto v_reusejp_1336_;
}
v_reusejp_1336_:
{
return v___x_1337_;
}
}
}
}
case 1:
{
lean_object* v___x_1340_; 
lean_dec(v_v_1157_);
lean_dec(v_k_1156_);
if (v_isShared_1162_ == 0)
{
lean_ctor_set(v___x_1161_, 2, v_v_1153_);
lean_ctor_set(v___x_1161_, 1, v_k_1152_);
v___x_1340_ = v___x_1161_;
goto v_reusejp_1339_;
}
else
{
lean_object* v_reuseFailAlloc_1341_; 
v_reuseFailAlloc_1341_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1341_, 0, v_size_1155_);
lean_ctor_set(v_reuseFailAlloc_1341_, 1, v_k_1152_);
lean_ctor_set(v_reuseFailAlloc_1341_, 2, v_v_1153_);
lean_ctor_set(v_reuseFailAlloc_1341_, 3, v_l_1158_);
lean_ctor_set(v_reuseFailAlloc_1341_, 4, v_r_1159_);
v___x_1340_ = v_reuseFailAlloc_1341_;
goto v_reusejp_1339_;
}
v_reusejp_1339_:
{
return v___x_1340_;
}
}
default: 
{
lean_object* v___x_1342_; 
lean_dec(v_size_1155_);
v___x_1342_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0___redArg(v_k_1152_, v_v_1153_, v_r_1159_);
if (lean_obj_tag(v_l_1158_) == 0)
{
if (lean_obj_tag(v___x_1342_) == 0)
{
lean_object* v_size_1343_; lean_object* v_size_1344_; lean_object* v_k_1345_; lean_object* v_v_1346_; lean_object* v_l_1347_; lean_object* v_r_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; uint8_t v___x_1351_; 
v_size_1343_ = lean_ctor_get(v_l_1158_, 0);
v_size_1344_ = lean_ctor_get(v___x_1342_, 0);
lean_inc(v_size_1344_);
v_k_1345_ = lean_ctor_get(v___x_1342_, 1);
lean_inc(v_k_1345_);
v_v_1346_ = lean_ctor_get(v___x_1342_, 2);
lean_inc(v_v_1346_);
v_l_1347_ = lean_ctor_get(v___x_1342_, 3);
lean_inc(v_l_1347_);
v_r_1348_ = lean_ctor_get(v___x_1342_, 4);
lean_inc(v_r_1348_);
v___x_1349_ = lean_unsigned_to_nat(3u);
v___x_1350_ = lean_nat_mul(v___x_1349_, v_size_1343_);
v___x_1351_ = lean_nat_dec_lt(v___x_1350_, v_size_1344_);
lean_dec(v___x_1350_);
if (v___x_1351_ == 0)
{
lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1356_; 
lean_dec(v_r_1348_);
lean_dec(v_l_1347_);
lean_dec(v_v_1346_);
lean_dec(v_k_1345_);
v___x_1352_ = lean_unsigned_to_nat(1u);
v___x_1353_ = lean_nat_add(v___x_1352_, v_size_1343_);
v___x_1354_ = lean_nat_add(v___x_1353_, v_size_1344_);
lean_dec(v_size_1344_);
lean_dec(v___x_1353_);
if (v_isShared_1162_ == 0)
{
lean_ctor_set(v___x_1161_, 4, v___x_1342_);
lean_ctor_set(v___x_1161_, 0, v___x_1354_);
v___x_1356_ = v___x_1161_;
goto v_reusejp_1355_;
}
else
{
lean_object* v_reuseFailAlloc_1357_; 
v_reuseFailAlloc_1357_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1357_, 0, v___x_1354_);
lean_ctor_set(v_reuseFailAlloc_1357_, 1, v_k_1156_);
lean_ctor_set(v_reuseFailAlloc_1357_, 2, v_v_1157_);
lean_ctor_set(v_reuseFailAlloc_1357_, 3, v_l_1158_);
lean_ctor_set(v_reuseFailAlloc_1357_, 4, v___x_1342_);
v___x_1356_ = v_reuseFailAlloc_1357_;
goto v_reusejp_1355_;
}
v_reusejp_1355_:
{
return v___x_1356_;
}
}
else
{
lean_object* v___x_1359_; uint8_t v_isShared_1360_; uint8_t v_isSharedCheck_1427_; 
v_isSharedCheck_1427_ = !lean_is_exclusive(v___x_1342_);
if (v_isSharedCheck_1427_ == 0)
{
lean_object* v_unused_1428_; lean_object* v_unused_1429_; lean_object* v_unused_1430_; lean_object* v_unused_1431_; lean_object* v_unused_1432_; 
v_unused_1428_ = lean_ctor_get(v___x_1342_, 4);
lean_dec(v_unused_1428_);
v_unused_1429_ = lean_ctor_get(v___x_1342_, 3);
lean_dec(v_unused_1429_);
v_unused_1430_ = lean_ctor_get(v___x_1342_, 2);
lean_dec(v_unused_1430_);
v_unused_1431_ = lean_ctor_get(v___x_1342_, 1);
lean_dec(v_unused_1431_);
v_unused_1432_ = lean_ctor_get(v___x_1342_, 0);
lean_dec(v_unused_1432_);
v___x_1359_ = v___x_1342_;
v_isShared_1360_ = v_isSharedCheck_1427_;
goto v_resetjp_1358_;
}
else
{
lean_dec(v___x_1342_);
v___x_1359_ = lean_box(0);
v_isShared_1360_ = v_isSharedCheck_1427_;
goto v_resetjp_1358_;
}
v_resetjp_1358_:
{
if (lean_obj_tag(v_l_1347_) == 0)
{
if (lean_obj_tag(v_r_1348_) == 0)
{
lean_object* v_size_1361_; lean_object* v_k_1362_; lean_object* v_v_1363_; lean_object* v_l_1364_; lean_object* v_r_1365_; lean_object* v_size_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; uint8_t v___x_1369_; 
v_size_1361_ = lean_ctor_get(v_l_1347_, 0);
v_k_1362_ = lean_ctor_get(v_l_1347_, 1);
v_v_1363_ = lean_ctor_get(v_l_1347_, 2);
v_l_1364_ = lean_ctor_get(v_l_1347_, 3);
v_r_1365_ = lean_ctor_get(v_l_1347_, 4);
v_size_1366_ = lean_ctor_get(v_r_1348_, 0);
v___x_1367_ = lean_unsigned_to_nat(2u);
v___x_1368_ = lean_nat_mul(v___x_1367_, v_size_1366_);
v___x_1369_ = lean_nat_dec_lt(v_size_1361_, v___x_1368_);
lean_dec(v___x_1368_);
if (v___x_1369_ == 0)
{
lean_object* v___x_1371_; uint8_t v_isShared_1372_; uint8_t v_isSharedCheck_1398_; 
lean_inc(v_r_1365_);
lean_inc(v_l_1364_);
lean_inc(v_v_1363_);
lean_inc(v_k_1362_);
v_isSharedCheck_1398_ = !lean_is_exclusive(v_l_1347_);
if (v_isSharedCheck_1398_ == 0)
{
lean_object* v_unused_1399_; lean_object* v_unused_1400_; lean_object* v_unused_1401_; lean_object* v_unused_1402_; lean_object* v_unused_1403_; 
v_unused_1399_ = lean_ctor_get(v_l_1347_, 4);
lean_dec(v_unused_1399_);
v_unused_1400_ = lean_ctor_get(v_l_1347_, 3);
lean_dec(v_unused_1400_);
v_unused_1401_ = lean_ctor_get(v_l_1347_, 2);
lean_dec(v_unused_1401_);
v_unused_1402_ = lean_ctor_get(v_l_1347_, 1);
lean_dec(v_unused_1402_);
v_unused_1403_ = lean_ctor_get(v_l_1347_, 0);
lean_dec(v_unused_1403_);
v___x_1371_ = v_l_1347_;
v_isShared_1372_ = v_isSharedCheck_1398_;
goto v_resetjp_1370_;
}
else
{
lean_dec(v_l_1347_);
v___x_1371_ = lean_box(0);
v_isShared_1372_ = v_isSharedCheck_1398_;
goto v_resetjp_1370_;
}
v_resetjp_1370_:
{
lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___y_1377_; lean_object* v___y_1378_; lean_object* v___y_1379_; lean_object* v___y_1388_; 
v___x_1373_ = lean_unsigned_to_nat(1u);
v___x_1374_ = lean_nat_add(v___x_1373_, v_size_1343_);
v___x_1375_ = lean_nat_add(v___x_1374_, v_size_1344_);
lean_dec(v_size_1344_);
if (lean_obj_tag(v_l_1364_) == 0)
{
lean_object* v_size_1396_; 
v_size_1396_ = lean_ctor_get(v_l_1364_, 0);
lean_inc(v_size_1396_);
v___y_1388_ = v_size_1396_;
goto v___jp_1387_;
}
else
{
lean_object* v___x_1397_; 
v___x_1397_ = lean_unsigned_to_nat(0u);
v___y_1388_ = v___x_1397_;
goto v___jp_1387_;
}
v___jp_1376_:
{
lean_object* v___x_1380_; lean_object* v___x_1382_; 
v___x_1380_ = lean_nat_add(v___y_1378_, v___y_1379_);
lean_dec(v___y_1379_);
lean_dec(v___y_1378_);
if (v_isShared_1372_ == 0)
{
lean_ctor_set(v___x_1371_, 4, v_r_1348_);
lean_ctor_set(v___x_1371_, 3, v_r_1365_);
lean_ctor_set(v___x_1371_, 2, v_v_1346_);
lean_ctor_set(v___x_1371_, 1, v_k_1345_);
lean_ctor_set(v___x_1371_, 0, v___x_1380_);
v___x_1382_ = v___x_1371_;
goto v_reusejp_1381_;
}
else
{
lean_object* v_reuseFailAlloc_1386_; 
v_reuseFailAlloc_1386_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1386_, 0, v___x_1380_);
lean_ctor_set(v_reuseFailAlloc_1386_, 1, v_k_1345_);
lean_ctor_set(v_reuseFailAlloc_1386_, 2, v_v_1346_);
lean_ctor_set(v_reuseFailAlloc_1386_, 3, v_r_1365_);
lean_ctor_set(v_reuseFailAlloc_1386_, 4, v_r_1348_);
v___x_1382_ = v_reuseFailAlloc_1386_;
goto v_reusejp_1381_;
}
v_reusejp_1381_:
{
lean_object* v___x_1384_; 
if (v_isShared_1360_ == 0)
{
lean_ctor_set(v___x_1359_, 4, v___x_1382_);
lean_ctor_set(v___x_1359_, 3, v___y_1377_);
lean_ctor_set(v___x_1359_, 2, v_v_1363_);
lean_ctor_set(v___x_1359_, 1, v_k_1362_);
lean_ctor_set(v___x_1359_, 0, v___x_1375_);
v___x_1384_ = v___x_1359_;
goto v_reusejp_1383_;
}
else
{
lean_object* v_reuseFailAlloc_1385_; 
v_reuseFailAlloc_1385_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1385_, 0, v___x_1375_);
lean_ctor_set(v_reuseFailAlloc_1385_, 1, v_k_1362_);
lean_ctor_set(v_reuseFailAlloc_1385_, 2, v_v_1363_);
lean_ctor_set(v_reuseFailAlloc_1385_, 3, v___y_1377_);
lean_ctor_set(v_reuseFailAlloc_1385_, 4, v___x_1382_);
v___x_1384_ = v_reuseFailAlloc_1385_;
goto v_reusejp_1383_;
}
v_reusejp_1383_:
{
return v___x_1384_;
}
}
}
v___jp_1387_:
{
lean_object* v___x_1389_; lean_object* v___x_1391_; 
v___x_1389_ = lean_nat_add(v___x_1374_, v___y_1388_);
lean_dec(v___y_1388_);
lean_dec(v___x_1374_);
if (v_isShared_1162_ == 0)
{
lean_ctor_set(v___x_1161_, 4, v_l_1364_);
lean_ctor_set(v___x_1161_, 0, v___x_1389_);
v___x_1391_ = v___x_1161_;
goto v_reusejp_1390_;
}
else
{
lean_object* v_reuseFailAlloc_1395_; 
v_reuseFailAlloc_1395_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1395_, 0, v___x_1389_);
lean_ctor_set(v_reuseFailAlloc_1395_, 1, v_k_1156_);
lean_ctor_set(v_reuseFailAlloc_1395_, 2, v_v_1157_);
lean_ctor_set(v_reuseFailAlloc_1395_, 3, v_l_1158_);
lean_ctor_set(v_reuseFailAlloc_1395_, 4, v_l_1364_);
v___x_1391_ = v_reuseFailAlloc_1395_;
goto v_reusejp_1390_;
}
v_reusejp_1390_:
{
lean_object* v___x_1392_; 
v___x_1392_ = lean_nat_add(v___x_1373_, v_size_1366_);
if (lean_obj_tag(v_r_1365_) == 0)
{
lean_object* v_size_1393_; 
v_size_1393_ = lean_ctor_get(v_r_1365_, 0);
lean_inc(v_size_1393_);
v___y_1377_ = v___x_1391_;
v___y_1378_ = v___x_1392_;
v___y_1379_ = v_size_1393_;
goto v___jp_1376_;
}
else
{
lean_object* v___x_1394_; 
v___x_1394_ = lean_unsigned_to_nat(0u);
v___y_1377_ = v___x_1391_;
v___y_1378_ = v___x_1392_;
v___y_1379_ = v___x_1394_;
goto v___jp_1376_;
}
}
}
}
}
else
{
lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1409_; 
lean_del_object(v___x_1161_);
v___x_1404_ = lean_unsigned_to_nat(1u);
v___x_1405_ = lean_nat_add(v___x_1404_, v_size_1343_);
v___x_1406_ = lean_nat_add(v___x_1405_, v_size_1344_);
lean_dec(v_size_1344_);
v___x_1407_ = lean_nat_add(v___x_1405_, v_size_1361_);
lean_dec(v___x_1405_);
lean_inc_ref(v_l_1158_);
if (v_isShared_1360_ == 0)
{
lean_ctor_set(v___x_1359_, 4, v_l_1347_);
lean_ctor_set(v___x_1359_, 3, v_l_1158_);
lean_ctor_set(v___x_1359_, 2, v_v_1157_);
lean_ctor_set(v___x_1359_, 1, v_k_1156_);
lean_ctor_set(v___x_1359_, 0, v___x_1407_);
v___x_1409_ = v___x_1359_;
goto v_reusejp_1408_;
}
else
{
lean_object* v_reuseFailAlloc_1422_; 
v_reuseFailAlloc_1422_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1422_, 0, v___x_1407_);
lean_ctor_set(v_reuseFailAlloc_1422_, 1, v_k_1156_);
lean_ctor_set(v_reuseFailAlloc_1422_, 2, v_v_1157_);
lean_ctor_set(v_reuseFailAlloc_1422_, 3, v_l_1158_);
lean_ctor_set(v_reuseFailAlloc_1422_, 4, v_l_1347_);
v___x_1409_ = v_reuseFailAlloc_1422_;
goto v_reusejp_1408_;
}
v_reusejp_1408_:
{
lean_object* v___x_1411_; uint8_t v_isShared_1412_; uint8_t v_isSharedCheck_1416_; 
v_isSharedCheck_1416_ = !lean_is_exclusive(v_l_1158_);
if (v_isSharedCheck_1416_ == 0)
{
lean_object* v_unused_1417_; lean_object* v_unused_1418_; lean_object* v_unused_1419_; lean_object* v_unused_1420_; lean_object* v_unused_1421_; 
v_unused_1417_ = lean_ctor_get(v_l_1158_, 4);
lean_dec(v_unused_1417_);
v_unused_1418_ = lean_ctor_get(v_l_1158_, 3);
lean_dec(v_unused_1418_);
v_unused_1419_ = lean_ctor_get(v_l_1158_, 2);
lean_dec(v_unused_1419_);
v_unused_1420_ = lean_ctor_get(v_l_1158_, 1);
lean_dec(v_unused_1420_);
v_unused_1421_ = lean_ctor_get(v_l_1158_, 0);
lean_dec(v_unused_1421_);
v___x_1411_ = v_l_1158_;
v_isShared_1412_ = v_isSharedCheck_1416_;
goto v_resetjp_1410_;
}
else
{
lean_dec(v_l_1158_);
v___x_1411_ = lean_box(0);
v_isShared_1412_ = v_isSharedCheck_1416_;
goto v_resetjp_1410_;
}
v_resetjp_1410_:
{
lean_object* v___x_1414_; 
if (v_isShared_1412_ == 0)
{
lean_ctor_set(v___x_1411_, 4, v_r_1348_);
lean_ctor_set(v___x_1411_, 3, v___x_1409_);
lean_ctor_set(v___x_1411_, 2, v_v_1346_);
lean_ctor_set(v___x_1411_, 1, v_k_1345_);
lean_ctor_set(v___x_1411_, 0, v___x_1406_);
v___x_1414_ = v___x_1411_;
goto v_reusejp_1413_;
}
else
{
lean_object* v_reuseFailAlloc_1415_; 
v_reuseFailAlloc_1415_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1415_, 0, v___x_1406_);
lean_ctor_set(v_reuseFailAlloc_1415_, 1, v_k_1345_);
lean_ctor_set(v_reuseFailAlloc_1415_, 2, v_v_1346_);
lean_ctor_set(v_reuseFailAlloc_1415_, 3, v___x_1409_);
lean_ctor_set(v_reuseFailAlloc_1415_, 4, v_r_1348_);
v___x_1414_ = v_reuseFailAlloc_1415_;
goto v_reusejp_1413_;
}
v_reusejp_1413_:
{
return v___x_1414_;
}
}
}
}
}
else
{
lean_object* v___x_1423_; lean_object* v___x_1424_; 
lean_dec_ref_known(v_l_1347_, 5);
lean_del_object(v___x_1359_);
lean_dec(v_v_1346_);
lean_dec(v_k_1345_);
lean_dec(v_size_1344_);
lean_dec_ref_known(v_l_1158_, 5);
lean_del_object(v___x_1161_);
lean_dec(v_v_1157_);
lean_dec(v_k_1156_);
v___x_1423_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0___redArg___closed__7, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0___redArg___closed__7_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0___redArg___closed__7);
v___x_1424_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0_spec__1___redArg(v___x_1423_);
return v___x_1424_;
}
}
else
{
lean_object* v___x_1425_; lean_object* v___x_1426_; 
lean_del_object(v___x_1359_);
lean_dec(v_r_1348_);
lean_dec(v_v_1346_);
lean_dec(v_k_1345_);
lean_dec(v_size_1344_);
lean_dec_ref_known(v_l_1158_, 5);
lean_del_object(v___x_1161_);
lean_dec(v_v_1157_);
lean_dec(v_k_1156_);
v___x_1425_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0___redArg___closed__8, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0___redArg___closed__8_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0___redArg___closed__8);
v___x_1426_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0_spec__1___redArg(v___x_1425_);
return v___x_1426_;
}
}
}
}
else
{
lean_object* v_size_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1437_; 
v_size_1433_ = lean_ctor_get(v_l_1158_, 0);
v___x_1434_ = lean_unsigned_to_nat(1u);
v___x_1435_ = lean_nat_add(v___x_1434_, v_size_1433_);
if (v_isShared_1162_ == 0)
{
lean_ctor_set(v___x_1161_, 4, v___x_1342_);
lean_ctor_set(v___x_1161_, 0, v___x_1435_);
v___x_1437_ = v___x_1161_;
goto v_reusejp_1436_;
}
else
{
lean_object* v_reuseFailAlloc_1438_; 
v_reuseFailAlloc_1438_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1438_, 0, v___x_1435_);
lean_ctor_set(v_reuseFailAlloc_1438_, 1, v_k_1156_);
lean_ctor_set(v_reuseFailAlloc_1438_, 2, v_v_1157_);
lean_ctor_set(v_reuseFailAlloc_1438_, 3, v_l_1158_);
lean_ctor_set(v_reuseFailAlloc_1438_, 4, v___x_1342_);
v___x_1437_ = v_reuseFailAlloc_1438_;
goto v_reusejp_1436_;
}
v_reusejp_1436_:
{
return v___x_1437_;
}
}
}
else
{
if (lean_obj_tag(v___x_1342_) == 0)
{
lean_object* v_l_1439_; 
v_l_1439_ = lean_ctor_get(v___x_1342_, 3);
lean_inc(v_l_1439_);
if (lean_obj_tag(v_l_1439_) == 0)
{
lean_object* v_r_1440_; 
v_r_1440_ = lean_ctor_get(v___x_1342_, 4);
lean_inc(v_r_1440_);
if (lean_obj_tag(v_r_1440_) == 0)
{
lean_object* v_size_1441_; lean_object* v_k_1442_; lean_object* v_v_1443_; lean_object* v___x_1445_; uint8_t v_isShared_1446_; uint8_t v_isSharedCheck_1457_; 
v_size_1441_ = lean_ctor_get(v___x_1342_, 0);
v_k_1442_ = lean_ctor_get(v___x_1342_, 1);
v_v_1443_ = lean_ctor_get(v___x_1342_, 2);
v_isSharedCheck_1457_ = !lean_is_exclusive(v___x_1342_);
if (v_isSharedCheck_1457_ == 0)
{
lean_object* v_unused_1458_; lean_object* v_unused_1459_; 
v_unused_1458_ = lean_ctor_get(v___x_1342_, 4);
lean_dec(v_unused_1458_);
v_unused_1459_ = lean_ctor_get(v___x_1342_, 3);
lean_dec(v_unused_1459_);
v___x_1445_ = v___x_1342_;
v_isShared_1446_ = v_isSharedCheck_1457_;
goto v_resetjp_1444_;
}
else
{
lean_inc(v_v_1443_);
lean_inc(v_k_1442_);
lean_inc(v_size_1441_);
lean_dec(v___x_1342_);
v___x_1445_ = lean_box(0);
v_isShared_1446_ = v_isSharedCheck_1457_;
goto v_resetjp_1444_;
}
v_resetjp_1444_:
{
lean_object* v_size_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1452_; 
v_size_1447_ = lean_ctor_get(v_l_1439_, 0);
v___x_1448_ = lean_unsigned_to_nat(1u);
v___x_1449_ = lean_nat_add(v___x_1448_, v_size_1441_);
lean_dec(v_size_1441_);
v___x_1450_ = lean_nat_add(v___x_1448_, v_size_1447_);
if (v_isShared_1446_ == 0)
{
lean_ctor_set(v___x_1445_, 4, v_l_1439_);
lean_ctor_set(v___x_1445_, 3, v_l_1158_);
lean_ctor_set(v___x_1445_, 2, v_v_1157_);
lean_ctor_set(v___x_1445_, 1, v_k_1156_);
lean_ctor_set(v___x_1445_, 0, v___x_1450_);
v___x_1452_ = v___x_1445_;
goto v_reusejp_1451_;
}
else
{
lean_object* v_reuseFailAlloc_1456_; 
v_reuseFailAlloc_1456_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1456_, 0, v___x_1450_);
lean_ctor_set(v_reuseFailAlloc_1456_, 1, v_k_1156_);
lean_ctor_set(v_reuseFailAlloc_1456_, 2, v_v_1157_);
lean_ctor_set(v_reuseFailAlloc_1456_, 3, v_l_1158_);
lean_ctor_set(v_reuseFailAlloc_1456_, 4, v_l_1439_);
v___x_1452_ = v_reuseFailAlloc_1456_;
goto v_reusejp_1451_;
}
v_reusejp_1451_:
{
lean_object* v___x_1454_; 
if (v_isShared_1162_ == 0)
{
lean_ctor_set(v___x_1161_, 4, v_r_1440_);
lean_ctor_set(v___x_1161_, 3, v___x_1452_);
lean_ctor_set(v___x_1161_, 2, v_v_1443_);
lean_ctor_set(v___x_1161_, 1, v_k_1442_);
lean_ctor_set(v___x_1161_, 0, v___x_1449_);
v___x_1454_ = v___x_1161_;
goto v_reusejp_1453_;
}
else
{
lean_object* v_reuseFailAlloc_1455_; 
v_reuseFailAlloc_1455_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1455_, 0, v___x_1449_);
lean_ctor_set(v_reuseFailAlloc_1455_, 1, v_k_1442_);
lean_ctor_set(v_reuseFailAlloc_1455_, 2, v_v_1443_);
lean_ctor_set(v_reuseFailAlloc_1455_, 3, v___x_1452_);
lean_ctor_set(v_reuseFailAlloc_1455_, 4, v_r_1440_);
v___x_1454_ = v_reuseFailAlloc_1455_;
goto v_reusejp_1453_;
}
v_reusejp_1453_:
{
return v___x_1454_;
}
}
}
}
else
{
lean_object* v_k_1460_; lean_object* v_v_1461_; lean_object* v___x_1463_; uint8_t v_isShared_1464_; uint8_t v_isSharedCheck_1485_; 
v_k_1460_ = lean_ctor_get(v___x_1342_, 1);
v_v_1461_ = lean_ctor_get(v___x_1342_, 2);
v_isSharedCheck_1485_ = !lean_is_exclusive(v___x_1342_);
if (v_isSharedCheck_1485_ == 0)
{
lean_object* v_unused_1486_; lean_object* v_unused_1487_; lean_object* v_unused_1488_; 
v_unused_1486_ = lean_ctor_get(v___x_1342_, 4);
lean_dec(v_unused_1486_);
v_unused_1487_ = lean_ctor_get(v___x_1342_, 3);
lean_dec(v_unused_1487_);
v_unused_1488_ = lean_ctor_get(v___x_1342_, 0);
lean_dec(v_unused_1488_);
v___x_1463_ = v___x_1342_;
v_isShared_1464_ = v_isSharedCheck_1485_;
goto v_resetjp_1462_;
}
else
{
lean_inc(v_v_1461_);
lean_inc(v_k_1460_);
lean_dec(v___x_1342_);
v___x_1463_ = lean_box(0);
v_isShared_1464_ = v_isSharedCheck_1485_;
goto v_resetjp_1462_;
}
v_resetjp_1462_:
{
lean_object* v_k_1465_; lean_object* v_v_1466_; lean_object* v___x_1468_; uint8_t v_isShared_1469_; uint8_t v_isSharedCheck_1481_; 
v_k_1465_ = lean_ctor_get(v_l_1439_, 1);
v_v_1466_ = lean_ctor_get(v_l_1439_, 2);
v_isSharedCheck_1481_ = !lean_is_exclusive(v_l_1439_);
if (v_isSharedCheck_1481_ == 0)
{
lean_object* v_unused_1482_; lean_object* v_unused_1483_; lean_object* v_unused_1484_; 
v_unused_1482_ = lean_ctor_get(v_l_1439_, 4);
lean_dec(v_unused_1482_);
v_unused_1483_ = lean_ctor_get(v_l_1439_, 3);
lean_dec(v_unused_1483_);
v_unused_1484_ = lean_ctor_get(v_l_1439_, 0);
lean_dec(v_unused_1484_);
v___x_1468_ = v_l_1439_;
v_isShared_1469_ = v_isSharedCheck_1481_;
goto v_resetjp_1467_;
}
else
{
lean_inc(v_v_1466_);
lean_inc(v_k_1465_);
lean_dec(v_l_1439_);
v___x_1468_ = lean_box(0);
v_isShared_1469_ = v_isSharedCheck_1481_;
goto v_resetjp_1467_;
}
v_resetjp_1467_:
{
lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1473_; 
v___x_1470_ = lean_unsigned_to_nat(3u);
v___x_1471_ = lean_unsigned_to_nat(1u);
if (v_isShared_1469_ == 0)
{
lean_ctor_set(v___x_1468_, 4, v_r_1440_);
lean_ctor_set(v___x_1468_, 3, v_r_1440_);
lean_ctor_set(v___x_1468_, 2, v_v_1157_);
lean_ctor_set(v___x_1468_, 1, v_k_1156_);
lean_ctor_set(v___x_1468_, 0, v___x_1471_);
v___x_1473_ = v___x_1468_;
goto v_reusejp_1472_;
}
else
{
lean_object* v_reuseFailAlloc_1480_; 
v_reuseFailAlloc_1480_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1480_, 0, v___x_1471_);
lean_ctor_set(v_reuseFailAlloc_1480_, 1, v_k_1156_);
lean_ctor_set(v_reuseFailAlloc_1480_, 2, v_v_1157_);
lean_ctor_set(v_reuseFailAlloc_1480_, 3, v_r_1440_);
lean_ctor_set(v_reuseFailAlloc_1480_, 4, v_r_1440_);
v___x_1473_ = v_reuseFailAlloc_1480_;
goto v_reusejp_1472_;
}
v_reusejp_1472_:
{
lean_object* v___x_1475_; 
if (v_isShared_1464_ == 0)
{
lean_ctor_set(v___x_1463_, 3, v_r_1440_);
lean_ctor_set(v___x_1463_, 0, v___x_1471_);
v___x_1475_ = v___x_1463_;
goto v_reusejp_1474_;
}
else
{
lean_object* v_reuseFailAlloc_1479_; 
v_reuseFailAlloc_1479_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1479_, 0, v___x_1471_);
lean_ctor_set(v_reuseFailAlloc_1479_, 1, v_k_1460_);
lean_ctor_set(v_reuseFailAlloc_1479_, 2, v_v_1461_);
lean_ctor_set(v_reuseFailAlloc_1479_, 3, v_r_1440_);
lean_ctor_set(v_reuseFailAlloc_1479_, 4, v_r_1440_);
v___x_1475_ = v_reuseFailAlloc_1479_;
goto v_reusejp_1474_;
}
v_reusejp_1474_:
{
lean_object* v___x_1477_; 
if (v_isShared_1162_ == 0)
{
lean_ctor_set(v___x_1161_, 4, v___x_1475_);
lean_ctor_set(v___x_1161_, 3, v___x_1473_);
lean_ctor_set(v___x_1161_, 2, v_v_1466_);
lean_ctor_set(v___x_1161_, 1, v_k_1465_);
lean_ctor_set(v___x_1161_, 0, v___x_1470_);
v___x_1477_ = v___x_1161_;
goto v_reusejp_1476_;
}
else
{
lean_object* v_reuseFailAlloc_1478_; 
v_reuseFailAlloc_1478_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1478_, 0, v___x_1470_);
lean_ctor_set(v_reuseFailAlloc_1478_, 1, v_k_1465_);
lean_ctor_set(v_reuseFailAlloc_1478_, 2, v_v_1466_);
lean_ctor_set(v_reuseFailAlloc_1478_, 3, v___x_1473_);
lean_ctor_set(v_reuseFailAlloc_1478_, 4, v___x_1475_);
v___x_1477_ = v_reuseFailAlloc_1478_;
goto v_reusejp_1476_;
}
v_reusejp_1476_:
{
return v___x_1477_;
}
}
}
}
}
}
}
else
{
lean_object* v_r_1489_; 
v_r_1489_ = lean_ctor_get(v___x_1342_, 4);
lean_inc(v_r_1489_);
if (lean_obj_tag(v_r_1489_) == 0)
{
lean_object* v_k_1490_; lean_object* v_v_1491_; lean_object* v___x_1493_; uint8_t v_isShared_1494_; uint8_t v_isSharedCheck_1503_; 
v_k_1490_ = lean_ctor_get(v___x_1342_, 1);
v_v_1491_ = lean_ctor_get(v___x_1342_, 2);
v_isSharedCheck_1503_ = !lean_is_exclusive(v___x_1342_);
if (v_isSharedCheck_1503_ == 0)
{
lean_object* v_unused_1504_; lean_object* v_unused_1505_; lean_object* v_unused_1506_; 
v_unused_1504_ = lean_ctor_get(v___x_1342_, 4);
lean_dec(v_unused_1504_);
v_unused_1505_ = lean_ctor_get(v___x_1342_, 3);
lean_dec(v_unused_1505_);
v_unused_1506_ = lean_ctor_get(v___x_1342_, 0);
lean_dec(v_unused_1506_);
v___x_1493_ = v___x_1342_;
v_isShared_1494_ = v_isSharedCheck_1503_;
goto v_resetjp_1492_;
}
else
{
lean_inc(v_v_1491_);
lean_inc(v_k_1490_);
lean_dec(v___x_1342_);
v___x_1493_ = lean_box(0);
v_isShared_1494_ = v_isSharedCheck_1503_;
goto v_resetjp_1492_;
}
v_resetjp_1492_:
{
lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1498_; 
v___x_1495_ = lean_unsigned_to_nat(3u);
v___x_1496_ = lean_unsigned_to_nat(1u);
if (v_isShared_1494_ == 0)
{
lean_ctor_set(v___x_1493_, 4, v_l_1439_);
lean_ctor_set(v___x_1493_, 2, v_v_1157_);
lean_ctor_set(v___x_1493_, 1, v_k_1156_);
lean_ctor_set(v___x_1493_, 0, v___x_1496_);
v___x_1498_ = v___x_1493_;
goto v_reusejp_1497_;
}
else
{
lean_object* v_reuseFailAlloc_1502_; 
v_reuseFailAlloc_1502_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1502_, 0, v___x_1496_);
lean_ctor_set(v_reuseFailAlloc_1502_, 1, v_k_1156_);
lean_ctor_set(v_reuseFailAlloc_1502_, 2, v_v_1157_);
lean_ctor_set(v_reuseFailAlloc_1502_, 3, v_l_1439_);
lean_ctor_set(v_reuseFailAlloc_1502_, 4, v_l_1439_);
v___x_1498_ = v_reuseFailAlloc_1502_;
goto v_reusejp_1497_;
}
v_reusejp_1497_:
{
lean_object* v___x_1500_; 
if (v_isShared_1162_ == 0)
{
lean_ctor_set(v___x_1161_, 4, v_r_1489_);
lean_ctor_set(v___x_1161_, 3, v___x_1498_);
lean_ctor_set(v___x_1161_, 2, v_v_1491_);
lean_ctor_set(v___x_1161_, 1, v_k_1490_);
lean_ctor_set(v___x_1161_, 0, v___x_1495_);
v___x_1500_ = v___x_1161_;
goto v_reusejp_1499_;
}
else
{
lean_object* v_reuseFailAlloc_1501_; 
v_reuseFailAlloc_1501_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1501_, 0, v___x_1495_);
lean_ctor_set(v_reuseFailAlloc_1501_, 1, v_k_1490_);
lean_ctor_set(v_reuseFailAlloc_1501_, 2, v_v_1491_);
lean_ctor_set(v_reuseFailAlloc_1501_, 3, v___x_1498_);
lean_ctor_set(v_reuseFailAlloc_1501_, 4, v_r_1489_);
v___x_1500_ = v_reuseFailAlloc_1501_;
goto v_reusejp_1499_;
}
v_reusejp_1499_:
{
return v___x_1500_;
}
}
}
}
else
{
lean_object* v___x_1507_; lean_object* v___x_1509_; 
v___x_1507_ = lean_unsigned_to_nat(2u);
if (v_isShared_1162_ == 0)
{
lean_ctor_set(v___x_1161_, 4, v___x_1342_);
lean_ctor_set(v___x_1161_, 3, v_r_1489_);
lean_ctor_set(v___x_1161_, 0, v___x_1507_);
v___x_1509_ = v___x_1161_;
goto v_reusejp_1508_;
}
else
{
lean_object* v_reuseFailAlloc_1510_; 
v_reuseFailAlloc_1510_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1510_, 0, v___x_1507_);
lean_ctor_set(v_reuseFailAlloc_1510_, 1, v_k_1156_);
lean_ctor_set(v_reuseFailAlloc_1510_, 2, v_v_1157_);
lean_ctor_set(v_reuseFailAlloc_1510_, 3, v_r_1489_);
lean_ctor_set(v_reuseFailAlloc_1510_, 4, v___x_1342_);
v___x_1509_ = v_reuseFailAlloc_1510_;
goto v_reusejp_1508_;
}
v_reusejp_1508_:
{
return v___x_1509_;
}
}
}
}
else
{
lean_object* v___x_1511_; lean_object* v___x_1513_; 
v___x_1511_ = lean_unsigned_to_nat(1u);
if (v_isShared_1162_ == 0)
{
lean_ctor_set(v___x_1161_, 4, v___x_1342_);
lean_ctor_set(v___x_1161_, 3, v___x_1342_);
lean_ctor_set(v___x_1161_, 0, v___x_1511_);
v___x_1513_ = v___x_1161_;
goto v_reusejp_1512_;
}
else
{
lean_object* v_reuseFailAlloc_1514_; 
v_reuseFailAlloc_1514_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1514_, 0, v___x_1511_);
lean_ctor_set(v_reuseFailAlloc_1514_, 1, v_k_1156_);
lean_ctor_set(v_reuseFailAlloc_1514_, 2, v_v_1157_);
lean_ctor_set(v_reuseFailAlloc_1514_, 3, v___x_1342_);
lean_ctor_set(v_reuseFailAlloc_1514_, 4, v___x_1342_);
v___x_1513_ = v_reuseFailAlloc_1514_;
goto v_reusejp_1512_;
}
v_reusejp_1512_:
{
return v___x_1513_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1516_; lean_object* v___x_1517_; 
v___x_1516_ = lean_unsigned_to_nat(1u);
v___x_1517_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1517_, 0, v___x_1516_);
lean_ctor_set(v___x_1517_, 1, v_k_1152_);
lean_ctor_set(v___x_1517_, 2, v_v_1153_);
lean_ctor_set(v___x_1517_, 3, v_t_1154_);
lean_ctor_set(v___x_1517_, 4, v_t_1154_);
return v___x_1517_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__1_spec__3(lean_object* v_init_1518_, lean_object* v_x_1519_){
_start:
{
if (lean_obj_tag(v_x_1519_) == 0)
{
lean_object* v_k_1520_; lean_object* v_v_1521_; lean_object* v_l_1522_; lean_object* v_r_1523_; lean_object* v___x_1524_; uint8_t v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; 
v_k_1520_ = lean_ctor_get(v_x_1519_, 1);
lean_inc(v_k_1520_);
v_v_1521_ = lean_ctor_get(v_x_1519_, 2);
lean_inc(v_v_1521_);
v_l_1522_ = lean_ctor_get(v_x_1519_, 3);
lean_inc(v_l_1522_);
v_r_1523_ = lean_ctor_get(v_x_1519_, 4);
lean_inc(v_r_1523_);
lean_dec_ref_known(v_x_1519_, 5);
v___x_1524_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__1_spec__3(v_init_1518_, v_l_1522_);
v___x_1525_ = 1;
v___x_1526_ = l_Lean_Name_toString(v_k_1520_, v___x_1525_);
v___x_1527_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1527_, 0, v_v_1521_);
v___x_1528_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0___redArg(v___x_1526_, v___x_1527_, v___x_1524_);
v_init_1518_ = v___x_1528_;
v_x_1519_ = v_r_1523_;
goto _start;
}
else
{
return v_init_1518_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0(lean_object* v_m_1530_){
_start:
{
lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; 
v___x_1531_ = lean_box(1);
v___x_1532_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__1_spec__3(v___x_1531_, v_m_1530_);
v___x_1533_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1533_, 0, v___x_1532_);
return v___x_1533_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__1(lean_object* v_a_1534_, lean_object* v_a_1535_){
_start:
{
if (lean_obj_tag(v_a_1534_) == 0)
{
lean_object* v___x_1536_; 
v___x_1536_ = lean_array_to_list(v_a_1535_);
return v___x_1536_;
}
else
{
lean_object* v_head_1537_; lean_object* v_tail_1538_; lean_object* v___x_1539_; 
v_head_1537_ = lean_ctor_get(v_a_1534_, 0);
lean_inc(v_head_1537_);
v_tail_1538_ = lean_ctor_get(v_a_1534_, 1);
lean_inc(v_tail_1538_);
lean_dec_ref_known(v_a_1534_, 2);
v___x_1539_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_1535_, v_head_1537_);
v_a_1534_ = v_tail_1538_;
v_a_1535_ = v___x_1539_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson(lean_object* v_x_1549_){
_start:
{
lean_object* v_idx_1550_; lean_object* v_name_1551_; lean_object* v_platform_1552_; lean_object* v_leanHash_1553_; uint64_t v_configHash_1554_; lean_object* v_options_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; uint8_t v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; 
v_idx_1550_ = lean_ctor_get(v_x_1549_, 0);
lean_inc(v_idx_1550_);
v_name_1551_ = lean_ctor_get(v_x_1549_, 1);
lean_inc(v_name_1551_);
v_platform_1552_ = lean_ctor_get(v_x_1549_, 2);
lean_inc_ref(v_platform_1552_);
v_leanHash_1553_ = lean_ctor_get(v_x_1549_, 3);
lean_inc_ref(v_leanHash_1553_);
v_configHash_1554_ = lean_ctor_get_uint64(v_x_1549_, sizeof(void*)*5);
v_options_1555_ = lean_ctor_get(v_x_1549_, 4);
lean_inc(v_options_1555_);
lean_dec_ref(v_x_1549_);
v___x_1556_ = ((lean_object*)(l___private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson___closed__0));
v___x_1557_ = l_Lean_JsonNumber_fromNat(v_idx_1550_);
v___x_1558_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1558_, 0, v___x_1557_);
v___x_1559_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1559_, 0, v___x_1556_);
lean_ctor_set(v___x_1559_, 1, v___x_1558_);
v___x_1560_ = lean_box(0);
v___x_1561_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1561_, 0, v___x_1559_);
lean_ctor_set(v___x_1561_, 1, v___x_1560_);
v___x_1562_ = ((lean_object*)(l___private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson___closed__1));
v___x_1563_ = 1;
v___x_1564_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_1551_, v___x_1563_);
v___x_1565_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1565_, 0, v___x_1564_);
v___x_1566_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1566_, 0, v___x_1562_);
lean_ctor_set(v___x_1566_, 1, v___x_1565_);
v___x_1567_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1567_, 0, v___x_1566_);
lean_ctor_set(v___x_1567_, 1, v___x_1560_);
v___x_1568_ = ((lean_object*)(l___private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson___closed__2));
v___x_1569_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1569_, 0, v_platform_1552_);
v___x_1570_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1570_, 0, v___x_1568_);
lean_ctor_set(v___x_1570_, 1, v___x_1569_);
v___x_1571_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1571_, 0, v___x_1570_);
lean_ctor_set(v___x_1571_, 1, v___x_1560_);
v___x_1572_ = ((lean_object*)(l___private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson___closed__3));
v___x_1573_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1573_, 0, v_leanHash_1553_);
v___x_1574_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1574_, 0, v___x_1572_);
lean_ctor_set(v___x_1574_, 1, v___x_1573_);
v___x_1575_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1575_, 0, v___x_1574_);
lean_ctor_set(v___x_1575_, 1, v___x_1560_);
v___x_1576_ = ((lean_object*)(l___private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson___closed__4));
v___x_1577_ = l_Lake_lowerHexUInt64(v_configHash_1554_);
v___x_1578_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1578_, 0, v___x_1577_);
v___x_1579_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1579_, 0, v___x_1576_);
lean_ctor_set(v___x_1579_, 1, v___x_1578_);
v___x_1580_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1580_, 0, v___x_1579_);
lean_ctor_set(v___x_1580_, 1, v___x_1560_);
v___x_1581_ = ((lean_object*)(l___private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson___closed__5));
v___x_1582_ = l_Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0(v_options_1555_);
v___x_1583_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1583_, 0, v___x_1581_);
lean_ctor_set(v___x_1583_, 1, v___x_1582_);
v___x_1584_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1584_, 0, v___x_1583_);
lean_ctor_set(v___x_1584_, 1, v___x_1560_);
v___x_1585_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1585_, 0, v___x_1584_);
lean_ctor_set(v___x_1585_, 1, v___x_1560_);
v___x_1586_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1586_, 0, v___x_1580_);
lean_ctor_set(v___x_1586_, 1, v___x_1585_);
v___x_1587_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1587_, 0, v___x_1575_);
lean_ctor_set(v___x_1587_, 1, v___x_1586_);
v___x_1588_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1588_, 0, v___x_1571_);
lean_ctor_set(v___x_1588_, 1, v___x_1587_);
v___x_1589_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1589_, 0, v___x_1567_);
lean_ctor_set(v___x_1589_, 1, v___x_1588_);
v___x_1590_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1590_, 0, v___x_1561_);
lean_ctor_set(v___x_1590_, 1, v___x_1589_);
v___x_1591_ = ((lean_object*)(l___private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson___closed__6));
v___x_1592_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__1(v___x_1590_, v___x_1591_);
v___x_1593_ = l_Lean_Json_mkObj(v___x_1592_);
lean_dec(v___x_1592_);
return v___x_1593_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1594_, lean_object* v_msg_1595_){
_start:
{
lean_object* v___x_1596_; 
v___x_1596_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0_spec__1___redArg(v_msg_1595_);
return v___x_1596_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0(lean_object* v_00_u03b2_1597_, lean_object* v_k_1598_, lean_object* v_v_1599_, lean_object* v_t_1600_){
_start:
{
lean_object* v___x_1601_; 
v___x_1601_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__0___redArg(v_k_1598_, v_v_1599_, v_t_1600_);
return v___x_1601_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__1(lean_object* v_init_1602_, lean_object* v_t_1603_){
_start:
{
lean_object* v___x_1604_; 
v___x_1604_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson_spec__0_spec__1_spec__3(v_init_1602_, v_t_1603_);
return v___x_1604_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson_spec__0(lean_object* v_j_1607_, lean_object* v_k_1608_){
_start:
{
lean_object* v___x_1609_; lean_object* v___x_1610_; 
v___x_1609_ = l_Lean_Json_getObjValD(v_j_1607_, v_k_1608_);
v___x_1610_ = l_Lean_Json_getNat_x3f(v___x_1609_);
return v___x_1610_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson_spec__0___boxed(lean_object* v_j_1611_, lean_object* v_k_1612_){
_start:
{
lean_object* v_res_1613_; 
v_res_1613_ = l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson_spec__0(v_j_1611_, v_k_1612_);
lean_dec_ref(v_k_1612_);
return v_res_1613_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson_spec__1(lean_object* v_j_1614_, lean_object* v_k_1615_){
_start:
{
lean_object* v___x_1616_; lean_object* v___x_1617_; 
v___x_1616_ = l_Lean_Json_getObjValD(v_j_1614_, v_k_1615_);
v___x_1617_ = l_Lean_Name_fromJson_x3f(v___x_1616_);
return v___x_1617_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson_spec__1___boxed(lean_object* v_j_1618_, lean_object* v_k_1619_){
_start:
{
lean_object* v_res_1620_; 
v_res_1620_ = l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson_spec__1(v_j_1618_, v_k_1619_);
lean_dec_ref(v_k_1619_);
return v_res_1620_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson_spec__2(lean_object* v_j_1621_, lean_object* v_k_1622_){
_start:
{
lean_object* v___x_1623_; lean_object* v___x_1624_; 
v___x_1623_ = l_Lean_Json_getObjValD(v_j_1621_, v_k_1622_);
v___x_1624_ = l_Lean_Json_getStr_x3f(v___x_1623_);
return v___x_1624_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson_spec__2___boxed(lean_object* v_j_1625_, lean_object* v_k_1626_){
_start:
{
lean_object* v_res_1627_; 
v_res_1627_ = l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson_spec__2(v_j_1625_, v_k_1626_);
lean_dec_ref(v_k_1626_);
return v_res_1627_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson_spec__3(lean_object* v_j_1628_, lean_object* v_k_1629_){
_start:
{
lean_object* v___x_1630_; lean_object* v___x_1631_; 
v___x_1630_ = l_Lean_Json_getObjValD(v_j_1628_, v_k_1629_);
v___x_1631_ = l_Lake_Hash_fromJson_x3f(v___x_1630_);
return v___x_1631_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson_spec__3___boxed(lean_object* v_j_1632_, lean_object* v_k_1633_){
_start:
{
lean_object* v_res_1634_; 
v_res_1634_ = l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson_spec__3(v_j_1632_, v_k_1633_);
lean_dec_ref(v_k_1633_);
return v_res_1634_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson_spec__4_spec__4_spec__5(lean_object* v_init_1638_, lean_object* v_x_1639_){
_start:
{
if (lean_obj_tag(v_x_1639_) == 0)
{
lean_object* v_k_1640_; lean_object* v_v_1641_; lean_object* v_l_1642_; lean_object* v_r_1643_; lean_object* v___x_1644_; 
v_k_1640_ = lean_ctor_get(v_x_1639_, 1);
lean_inc(v_k_1640_);
v_v_1641_ = lean_ctor_get(v_x_1639_, 2);
lean_inc(v_v_1641_);
v_l_1642_ = lean_ctor_get(v_x_1639_, 3);
lean_inc(v_l_1642_);
v_r_1643_ = lean_ctor_get(v_x_1639_, 4);
lean_inc(v_r_1643_);
lean_dec_ref_known(v_x_1639_, 5);
v___x_1644_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson_spec__4_spec__4_spec__5(v_init_1638_, v_l_1642_);
if (lean_obj_tag(v___x_1644_) == 0)
{
lean_dec(v_r_1643_);
lean_dec(v_v_1641_);
lean_dec(v_k_1640_);
return v___x_1644_;
}
else
{
lean_object* v_a_1645_; lean_object* v___x_1647_; uint8_t v_isShared_1648_; uint8_t v_isSharedCheck_1685_; 
v_a_1645_ = lean_ctor_get(v___x_1644_, 0);
v_isSharedCheck_1685_ = !lean_is_exclusive(v___x_1644_);
if (v_isSharedCheck_1685_ == 0)
{
v___x_1647_ = v___x_1644_;
v_isShared_1648_ = v_isSharedCheck_1685_;
goto v_resetjp_1646_;
}
else
{
lean_inc(v_a_1645_);
lean_dec(v___x_1644_);
v___x_1647_ = lean_box(0);
v_isShared_1648_ = v_isSharedCheck_1685_;
goto v_resetjp_1646_;
}
v_resetjp_1646_:
{
lean_object* v___x_1649_; uint8_t v___x_1650_; 
v___x_1649_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson_spec__4_spec__4_spec__5___closed__0));
v___x_1650_ = lean_string_dec_eq(v_k_1640_, v___x_1649_);
if (v___x_1650_ == 0)
{
lean_object* v_n_1651_; uint8_t v___x_1652_; 
lean_inc(v_k_1640_);
v_n_1651_ = l_String_toName(v_k_1640_);
v___x_1652_ = l_Lean_Name_isAnonymous(v_n_1651_);
if (v___x_1652_ == 0)
{
lean_object* v___x_1653_; 
lean_del_object(v___x_1647_);
lean_dec(v_k_1640_);
v___x_1653_ = l_Lean_Json_getStr_x3f(v_v_1641_);
if (lean_obj_tag(v___x_1653_) == 0)
{
lean_object* v_a_1654_; lean_object* v___x_1656_; uint8_t v_isShared_1657_; uint8_t v_isSharedCheck_1661_; 
lean_dec(v_n_1651_);
lean_dec(v_a_1645_);
lean_dec(v_r_1643_);
v_a_1654_ = lean_ctor_get(v___x_1653_, 0);
v_isSharedCheck_1661_ = !lean_is_exclusive(v___x_1653_);
if (v_isSharedCheck_1661_ == 0)
{
v___x_1656_ = v___x_1653_;
v_isShared_1657_ = v_isSharedCheck_1661_;
goto v_resetjp_1655_;
}
else
{
lean_inc(v_a_1654_);
lean_dec(v___x_1653_);
v___x_1656_ = lean_box(0);
v_isShared_1657_ = v_isSharedCheck_1661_;
goto v_resetjp_1655_;
}
v_resetjp_1655_:
{
lean_object* v___x_1659_; 
if (v_isShared_1657_ == 0)
{
v___x_1659_ = v___x_1656_;
goto v_reusejp_1658_;
}
else
{
lean_object* v_reuseFailAlloc_1660_; 
v_reuseFailAlloc_1660_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1660_, 0, v_a_1654_);
v___x_1659_ = v_reuseFailAlloc_1660_;
goto v_reusejp_1658_;
}
v_reusejp_1658_:
{
return v___x_1659_;
}
}
}
else
{
lean_object* v_a_1662_; lean_object* v___x_1663_; 
v_a_1662_ = lean_ctor_get(v___x_1653_, 0);
lean_inc(v_a_1662_);
lean_dec_ref_known(v___x_1653_, 1);
v___x_1663_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_n_1651_, v_a_1662_, v_a_1645_);
v_init_1638_ = v___x_1663_;
v_x_1639_ = v_r_1643_;
goto _start;
}
}
else
{
lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1670_; 
lean_dec(v_n_1651_);
lean_dec(v_a_1645_);
lean_dec(v_r_1643_);
lean_dec(v_v_1641_);
v___x_1665_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson_spec__4_spec__4_spec__5___closed__1));
v___x_1666_ = lean_string_append(v___x_1665_, v_k_1640_);
lean_dec(v_k_1640_);
v___x_1667_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson_spec__4_spec__4_spec__5___closed__2));
v___x_1668_ = lean_string_append(v___x_1666_, v___x_1667_);
if (v_isShared_1648_ == 0)
{
lean_ctor_set_tag(v___x_1647_, 0);
lean_ctor_set(v___x_1647_, 0, v___x_1668_);
v___x_1670_ = v___x_1647_;
goto v_reusejp_1669_;
}
else
{
lean_object* v_reuseFailAlloc_1671_; 
v_reuseFailAlloc_1671_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1671_, 0, v___x_1668_);
v___x_1670_ = v_reuseFailAlloc_1671_;
goto v_reusejp_1669_;
}
v_reusejp_1669_:
{
return v___x_1670_;
}
}
}
else
{
lean_object* v___x_1672_; 
lean_del_object(v___x_1647_);
lean_dec(v_k_1640_);
v___x_1672_ = l_Lean_Json_getStr_x3f(v_v_1641_);
if (lean_obj_tag(v___x_1672_) == 0)
{
lean_object* v_a_1673_; lean_object* v___x_1675_; uint8_t v_isShared_1676_; uint8_t v_isSharedCheck_1680_; 
lean_dec(v_a_1645_);
lean_dec(v_r_1643_);
v_a_1673_ = lean_ctor_get(v___x_1672_, 0);
v_isSharedCheck_1680_ = !lean_is_exclusive(v___x_1672_);
if (v_isSharedCheck_1680_ == 0)
{
v___x_1675_ = v___x_1672_;
v_isShared_1676_ = v_isSharedCheck_1680_;
goto v_resetjp_1674_;
}
else
{
lean_inc(v_a_1673_);
lean_dec(v___x_1672_);
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
v_reuseFailAlloc_1679_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; 
v_a_1681_ = lean_ctor_get(v___x_1672_, 0);
lean_inc(v_a_1681_);
lean_dec_ref_known(v___x_1672_, 1);
v___x_1682_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__1___closed__1);
v___x_1683_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v___x_1682_, v_a_1681_, v_a_1645_);
v_init_1638_ = v___x_1683_;
v_x_1639_ = v_r_1643_;
goto _start;
}
}
}
}
}
else
{
lean_object* v___x_1686_; 
v___x_1686_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1686_, 0, v_init_1638_);
return v___x_1686_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson_spec__4_spec__4(lean_object* v_x_1688_){
_start:
{
if (lean_obj_tag(v_x_1688_) == 5)
{
lean_object* v_kvPairs_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; 
v_kvPairs_1689_ = lean_ctor_get(v_x_1688_, 0);
lean_inc(v_kvPairs_1689_);
lean_dec_ref_known(v_x_1688_, 1);
v___x_1690_ = lean_box(1);
v___x_1691_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson_spec__4_spec__4_spec__5(v___x_1690_, v_kvPairs_1689_);
return v___x_1691_;
}
else
{
lean_object* v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; 
v___x_1692_ = ((lean_object*)(l_Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson_spec__4_spec__4___closed__0));
v___x_1693_ = lean_unsigned_to_nat(80u);
v___x_1694_ = l_Lean_Json_pretty(v_x_1688_, v___x_1693_);
v___x_1695_ = lean_string_append(v___x_1692_, v___x_1694_);
lean_dec_ref(v___x_1694_);
v___x_1696_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson_spec__4_spec__4_spec__5___closed__2));
v___x_1697_ = lean_string_append(v___x_1695_, v___x_1696_);
v___x_1698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1698_, 0, v___x_1697_);
return v___x_1698_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson_spec__4(lean_object* v_j_1699_, lean_object* v_k_1700_){
_start:
{
lean_object* v___x_1701_; lean_object* v___x_1702_; 
v___x_1701_ = l_Lean_Json_getObjValD(v_j_1699_, v_k_1700_);
v___x_1702_ = l_Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson_spec__4_spec__4(v___x_1701_);
return v___x_1702_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson_spec__4___boxed(lean_object* v_j_1703_, lean_object* v_k_1704_){
_start:
{
lean_object* v_res_1705_; 
v_res_1705_ = l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson_spec__4(v_j_1703_, v_k_1704_);
lean_dec_ref(v_k_1704_);
return v_res_1705_;
}
}
static lean_object* _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__1(void){
_start:
{
lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; 
v___x_1707_ = ((lean_object*)(l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__0));
v___x_1708_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_spec__1___closed__1);
v___x_1709_ = l_Lean_Name_str___override(v___x_1708_, v___x_1707_);
return v___x_1709_;
}
}
static lean_object* _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__2(void){
_start:
{
lean_object* v___x_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; 
v___x_1710_ = ((lean_object*)(l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__0));
v___x_1711_ = lean_obj_once(&l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__1, &l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__1_once, _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__1);
v___x_1712_ = l_Lean_Name_str___override(v___x_1711_, v___x_1710_);
return v___x_1712_;
}
}
static lean_object* _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__4(void){
_start:
{
lean_object* v___x_1714_; lean_object* v___x_1715_; lean_object* v___x_1716_; 
v___x_1714_ = ((lean_object*)(l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__3));
v___x_1715_ = lean_obj_once(&l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__2, &l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__2_once, _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__2);
v___x_1716_ = l_Lean_Name_str___override(v___x_1715_, v___x_1714_);
return v___x_1716_;
}
}
static lean_object* _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__5(void){
_start:
{
lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; 
v___x_1717_ = ((lean_object*)(l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__46));
v___x_1718_ = lean_obj_once(&l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__4, &l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__4_once, _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__4);
v___x_1719_ = l_Lean_Name_str___override(v___x_1718_, v___x_1717_);
return v___x_1719_;
}
}
static lean_object* _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__7(void){
_start:
{
lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; 
v___x_1721_ = ((lean_object*)(l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__6));
v___x_1722_ = lean_obj_once(&l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__5, &l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__5_once, _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__5);
v___x_1723_ = l_Lean_Name_str___override(v___x_1722_, v___x_1721_);
return v___x_1723_;
}
}
static lean_object* _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__8(void){
_start:
{
lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; 
v___x_1724_ = lean_unsigned_to_nat(0u);
v___x_1725_ = lean_obj_once(&l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__7, &l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__7_once, _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__7);
v___x_1726_ = l_Lean_Name_num___override(v___x_1725_, v___x_1724_);
return v___x_1726_;
}
}
static lean_object* _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__9(void){
_start:
{
lean_object* v___x_1727_; lean_object* v___x_1728_; lean_object* v___x_1729_; 
v___x_1727_ = ((lean_object*)(l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts___closed__0));
v___x_1728_ = lean_obj_once(&l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__8, &l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__8_once, _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__8);
v___x_1729_ = l_Lean_Name_str___override(v___x_1728_, v___x_1727_);
return v___x_1729_;
}
}
static lean_object* _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__11(void){
_start:
{
lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; 
v___x_1731_ = ((lean_object*)(l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__10));
v___x_1732_ = lean_obj_once(&l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__9, &l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__9_once, _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__9);
v___x_1733_ = l_Lean_Name_str___override(v___x_1732_, v___x_1731_);
return v___x_1733_;
}
}
static lean_object* _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__12(void){
_start:
{
uint8_t v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; 
v___x_1734_ = 1;
v___x_1735_ = lean_obj_once(&l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__11, &l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__11_once, _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__11);
v___x_1736_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1735_, v___x_1734_);
return v___x_1736_;
}
}
static lean_object* _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__14(void){
_start:
{
lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; 
v___x_1738_ = ((lean_object*)(l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__13));
v___x_1739_ = lean_obj_once(&l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__12, &l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__12_once, _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__12);
v___x_1740_ = lean_string_append(v___x_1739_, v___x_1738_);
return v___x_1740_;
}
}
static lean_object* _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__16(void){
_start:
{
uint8_t v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; 
v___x_1743_ = 1;
v___x_1744_ = ((lean_object*)(l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__15));
v___x_1745_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1744_, v___x_1743_);
return v___x_1745_;
}
}
static lean_object* _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__17(void){
_start:
{
lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; 
v___x_1746_ = lean_obj_once(&l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__16, &l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__16_once, _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__16);
v___x_1747_ = lean_obj_once(&l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__14, &l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__14_once, _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__14);
v___x_1748_ = lean_string_append(v___x_1747_, v___x_1746_);
return v___x_1748_;
}
}
static lean_object* _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__19(void){
_start:
{
lean_object* v___x_1750_; lean_object* v___x_1751_; lean_object* v___x_1752_; 
v___x_1750_ = ((lean_object*)(l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__18));
v___x_1751_ = lean_obj_once(&l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__17, &l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__17_once, _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__17);
v___x_1752_ = lean_string_append(v___x_1751_, v___x_1750_);
return v___x_1752_;
}
}
static lean_object* _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__21(void){
_start:
{
uint8_t v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; 
v___x_1755_ = 1;
v___x_1756_ = ((lean_object*)(l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__20));
v___x_1757_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1756_, v___x_1755_);
return v___x_1757_;
}
}
static lean_object* _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__22(void){
_start:
{
lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; 
v___x_1758_ = lean_obj_once(&l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__21, &l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__21_once, _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__21);
v___x_1759_ = lean_obj_once(&l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__14, &l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__14_once, _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__14);
v___x_1760_ = lean_string_append(v___x_1759_, v___x_1758_);
return v___x_1760_;
}
}
static lean_object* _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__23(void){
_start:
{
lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; 
v___x_1761_ = ((lean_object*)(l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__18));
v___x_1762_ = lean_obj_once(&l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__22, &l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__22_once, _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__22);
v___x_1763_ = lean_string_append(v___x_1762_, v___x_1761_);
return v___x_1763_;
}
}
static lean_object* _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__25(void){
_start:
{
uint8_t v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; 
v___x_1766_ = 1;
v___x_1767_ = ((lean_object*)(l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__24));
v___x_1768_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1767_, v___x_1766_);
return v___x_1768_;
}
}
static lean_object* _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__26(void){
_start:
{
lean_object* v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; 
v___x_1769_ = lean_obj_once(&l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__25, &l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__25_once, _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__25);
v___x_1770_ = lean_obj_once(&l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__14, &l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__14_once, _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__14);
v___x_1771_ = lean_string_append(v___x_1770_, v___x_1769_);
return v___x_1771_;
}
}
static lean_object* _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__27(void){
_start:
{
lean_object* v___x_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; 
v___x_1772_ = ((lean_object*)(l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__18));
v___x_1773_ = lean_obj_once(&l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__26, &l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__26_once, _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__26);
v___x_1774_ = lean_string_append(v___x_1773_, v___x_1772_);
return v___x_1774_;
}
}
static lean_object* _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__29(void){
_start:
{
uint8_t v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; 
v___x_1777_ = 1;
v___x_1778_ = ((lean_object*)(l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__28));
v___x_1779_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1778_, v___x_1777_);
return v___x_1779_;
}
}
static lean_object* _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__30(void){
_start:
{
lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; 
v___x_1780_ = lean_obj_once(&l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__29, &l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__29_once, _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__29);
v___x_1781_ = lean_obj_once(&l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__14, &l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__14_once, _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__14);
v___x_1782_ = lean_string_append(v___x_1781_, v___x_1780_);
return v___x_1782_;
}
}
static lean_object* _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__31(void){
_start:
{
lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; 
v___x_1783_ = ((lean_object*)(l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__18));
v___x_1784_ = lean_obj_once(&l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__30, &l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__30_once, _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__30);
v___x_1785_ = lean_string_append(v___x_1784_, v___x_1783_);
return v___x_1785_;
}
}
static lean_object* _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__33(void){
_start:
{
uint8_t v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; 
v___x_1788_ = 1;
v___x_1789_ = ((lean_object*)(l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__32));
v___x_1790_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1789_, v___x_1788_);
return v___x_1790_;
}
}
static lean_object* _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__34(void){
_start:
{
lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; 
v___x_1791_ = lean_obj_once(&l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__33, &l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__33_once, _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__33);
v___x_1792_ = lean_obj_once(&l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__14, &l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__14_once, _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__14);
v___x_1793_ = lean_string_append(v___x_1792_, v___x_1791_);
return v___x_1793_;
}
}
static lean_object* _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__35(void){
_start:
{
lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; 
v___x_1794_ = ((lean_object*)(l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__18));
v___x_1795_ = lean_obj_once(&l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__34, &l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__34_once, _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__34);
v___x_1796_ = lean_string_append(v___x_1795_, v___x_1794_);
return v___x_1796_;
}
}
static lean_object* _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__37(void){
_start:
{
uint8_t v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; 
v___x_1799_ = 1;
v___x_1800_ = ((lean_object*)(l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__36));
v___x_1801_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1800_, v___x_1799_);
return v___x_1801_;
}
}
static lean_object* _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__38(void){
_start:
{
lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; 
v___x_1802_ = lean_obj_once(&l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__37, &l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__37_once, _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__37);
v___x_1803_ = lean_obj_once(&l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__14, &l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__14_once, _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__14);
v___x_1804_ = lean_string_append(v___x_1803_, v___x_1802_);
return v___x_1804_;
}
}
static lean_object* _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__39(void){
_start:
{
lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; 
v___x_1805_ = ((lean_object*)(l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__18));
v___x_1806_ = lean_obj_once(&l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__38, &l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__38_once, _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__38);
v___x_1807_ = lean_string_append(v___x_1806_, v___x_1805_);
return v___x_1807_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson(lean_object* v_json_1808_){
_start:
{
lean_object* v___x_1809_; lean_object* v___x_1810_; 
v___x_1809_ = ((lean_object*)(l___private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson___closed__0));
lean_inc(v_json_1808_);
v___x_1810_ = l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson_spec__0(v_json_1808_, v___x_1809_);
if (lean_obj_tag(v___x_1810_) == 0)
{
lean_object* v_a_1811_; lean_object* v___x_1813_; uint8_t v_isShared_1814_; uint8_t v_isSharedCheck_1820_; 
lean_dec(v_json_1808_);
v_a_1811_ = lean_ctor_get(v___x_1810_, 0);
v_isSharedCheck_1820_ = !lean_is_exclusive(v___x_1810_);
if (v_isSharedCheck_1820_ == 0)
{
v___x_1813_ = v___x_1810_;
v_isShared_1814_ = v_isSharedCheck_1820_;
goto v_resetjp_1812_;
}
else
{
lean_inc(v_a_1811_);
lean_dec(v___x_1810_);
v___x_1813_ = lean_box(0);
v_isShared_1814_ = v_isSharedCheck_1820_;
goto v_resetjp_1812_;
}
v_resetjp_1812_:
{
lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1818_; 
v___x_1815_ = lean_obj_once(&l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__19, &l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__19_once, _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__19);
v___x_1816_ = lean_string_append(v___x_1815_, v_a_1811_);
lean_dec(v_a_1811_);
if (v_isShared_1814_ == 0)
{
lean_ctor_set(v___x_1813_, 0, v___x_1816_);
v___x_1818_ = v___x_1813_;
goto v_reusejp_1817_;
}
else
{
lean_object* v_reuseFailAlloc_1819_; 
v_reuseFailAlloc_1819_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1819_, 0, v___x_1816_);
v___x_1818_ = v_reuseFailAlloc_1819_;
goto v_reusejp_1817_;
}
v_reusejp_1817_:
{
return v___x_1818_;
}
}
}
else
{
if (lean_obj_tag(v___x_1810_) == 0)
{
lean_object* v_a_1821_; lean_object* v___x_1823_; uint8_t v_isShared_1824_; uint8_t v_isSharedCheck_1828_; 
lean_dec(v_json_1808_);
v_a_1821_ = lean_ctor_get(v___x_1810_, 0);
v_isSharedCheck_1828_ = !lean_is_exclusive(v___x_1810_);
if (v_isSharedCheck_1828_ == 0)
{
v___x_1823_ = v___x_1810_;
v_isShared_1824_ = v_isSharedCheck_1828_;
goto v_resetjp_1822_;
}
else
{
lean_inc(v_a_1821_);
lean_dec(v___x_1810_);
v___x_1823_ = lean_box(0);
v_isShared_1824_ = v_isSharedCheck_1828_;
goto v_resetjp_1822_;
}
v_resetjp_1822_:
{
lean_object* v___x_1826_; 
if (v_isShared_1824_ == 0)
{
lean_ctor_set_tag(v___x_1823_, 0);
v___x_1826_ = v___x_1823_;
goto v_reusejp_1825_;
}
else
{
lean_object* v_reuseFailAlloc_1827_; 
v_reuseFailAlloc_1827_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1827_, 0, v_a_1821_);
v___x_1826_ = v_reuseFailAlloc_1827_;
goto v_reusejp_1825_;
}
v_reusejp_1825_:
{
return v___x_1826_;
}
}
}
else
{
lean_object* v_a_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; 
v_a_1829_ = lean_ctor_get(v___x_1810_, 0);
lean_inc(v_a_1829_);
lean_dec_ref_known(v___x_1810_, 1);
v___x_1830_ = ((lean_object*)(l___private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson___closed__1));
lean_inc(v_json_1808_);
v___x_1831_ = l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson_spec__1(v_json_1808_, v___x_1830_);
if (lean_obj_tag(v___x_1831_) == 0)
{
lean_object* v_a_1832_; lean_object* v___x_1834_; uint8_t v_isShared_1835_; uint8_t v_isSharedCheck_1841_; 
lean_dec(v_a_1829_);
lean_dec(v_json_1808_);
v_a_1832_ = lean_ctor_get(v___x_1831_, 0);
v_isSharedCheck_1841_ = !lean_is_exclusive(v___x_1831_);
if (v_isSharedCheck_1841_ == 0)
{
v___x_1834_ = v___x_1831_;
v_isShared_1835_ = v_isSharedCheck_1841_;
goto v_resetjp_1833_;
}
else
{
lean_inc(v_a_1832_);
lean_dec(v___x_1831_);
v___x_1834_ = lean_box(0);
v_isShared_1835_ = v_isSharedCheck_1841_;
goto v_resetjp_1833_;
}
v_resetjp_1833_:
{
lean_object* v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1839_; 
v___x_1836_ = lean_obj_once(&l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__23, &l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__23_once, _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__23);
v___x_1837_ = lean_string_append(v___x_1836_, v_a_1832_);
lean_dec(v_a_1832_);
if (v_isShared_1835_ == 0)
{
lean_ctor_set(v___x_1834_, 0, v___x_1837_);
v___x_1839_ = v___x_1834_;
goto v_reusejp_1838_;
}
else
{
lean_object* v_reuseFailAlloc_1840_; 
v_reuseFailAlloc_1840_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1840_, 0, v___x_1837_);
v___x_1839_ = v_reuseFailAlloc_1840_;
goto v_reusejp_1838_;
}
v_reusejp_1838_:
{
return v___x_1839_;
}
}
}
else
{
if (lean_obj_tag(v___x_1831_) == 0)
{
lean_object* v_a_1842_; lean_object* v___x_1844_; uint8_t v_isShared_1845_; uint8_t v_isSharedCheck_1849_; 
lean_dec(v_a_1829_);
lean_dec(v_json_1808_);
v_a_1842_ = lean_ctor_get(v___x_1831_, 0);
v_isSharedCheck_1849_ = !lean_is_exclusive(v___x_1831_);
if (v_isSharedCheck_1849_ == 0)
{
v___x_1844_ = v___x_1831_;
v_isShared_1845_ = v_isSharedCheck_1849_;
goto v_resetjp_1843_;
}
else
{
lean_inc(v_a_1842_);
lean_dec(v___x_1831_);
v___x_1844_ = lean_box(0);
v_isShared_1845_ = v_isSharedCheck_1849_;
goto v_resetjp_1843_;
}
v_resetjp_1843_:
{
lean_object* v___x_1847_; 
if (v_isShared_1845_ == 0)
{
lean_ctor_set_tag(v___x_1844_, 0);
v___x_1847_ = v___x_1844_;
goto v_reusejp_1846_;
}
else
{
lean_object* v_reuseFailAlloc_1848_; 
v_reuseFailAlloc_1848_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1848_, 0, v_a_1842_);
v___x_1847_ = v_reuseFailAlloc_1848_;
goto v_reusejp_1846_;
}
v_reusejp_1846_:
{
return v___x_1847_;
}
}
}
else
{
lean_object* v_a_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; 
v_a_1850_ = lean_ctor_get(v___x_1831_, 0);
lean_inc(v_a_1850_);
lean_dec_ref_known(v___x_1831_, 1);
v___x_1851_ = ((lean_object*)(l___private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson___closed__2));
lean_inc(v_json_1808_);
v___x_1852_ = l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson_spec__2(v_json_1808_, v___x_1851_);
if (lean_obj_tag(v___x_1852_) == 0)
{
lean_object* v_a_1853_; lean_object* v___x_1855_; uint8_t v_isShared_1856_; uint8_t v_isSharedCheck_1862_; 
lean_dec(v_a_1850_);
lean_dec(v_a_1829_);
lean_dec(v_json_1808_);
v_a_1853_ = lean_ctor_get(v___x_1852_, 0);
v_isSharedCheck_1862_ = !lean_is_exclusive(v___x_1852_);
if (v_isSharedCheck_1862_ == 0)
{
v___x_1855_ = v___x_1852_;
v_isShared_1856_ = v_isSharedCheck_1862_;
goto v_resetjp_1854_;
}
else
{
lean_inc(v_a_1853_);
lean_dec(v___x_1852_);
v___x_1855_ = lean_box(0);
v_isShared_1856_ = v_isSharedCheck_1862_;
goto v_resetjp_1854_;
}
v_resetjp_1854_:
{
lean_object* v___x_1857_; lean_object* v___x_1858_; lean_object* v___x_1860_; 
v___x_1857_ = lean_obj_once(&l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__27, &l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__27_once, _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__27);
v___x_1858_ = lean_string_append(v___x_1857_, v_a_1853_);
lean_dec(v_a_1853_);
if (v_isShared_1856_ == 0)
{
lean_ctor_set(v___x_1855_, 0, v___x_1858_);
v___x_1860_ = v___x_1855_;
goto v_reusejp_1859_;
}
else
{
lean_object* v_reuseFailAlloc_1861_; 
v_reuseFailAlloc_1861_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1861_, 0, v___x_1858_);
v___x_1860_ = v_reuseFailAlloc_1861_;
goto v_reusejp_1859_;
}
v_reusejp_1859_:
{
return v___x_1860_;
}
}
}
else
{
if (lean_obj_tag(v___x_1852_) == 0)
{
lean_object* v_a_1863_; lean_object* v___x_1865_; uint8_t v_isShared_1866_; uint8_t v_isSharedCheck_1870_; 
lean_dec(v_a_1850_);
lean_dec(v_a_1829_);
lean_dec(v_json_1808_);
v_a_1863_ = lean_ctor_get(v___x_1852_, 0);
v_isSharedCheck_1870_ = !lean_is_exclusive(v___x_1852_);
if (v_isSharedCheck_1870_ == 0)
{
v___x_1865_ = v___x_1852_;
v_isShared_1866_ = v_isSharedCheck_1870_;
goto v_resetjp_1864_;
}
else
{
lean_inc(v_a_1863_);
lean_dec(v___x_1852_);
v___x_1865_ = lean_box(0);
v_isShared_1866_ = v_isSharedCheck_1870_;
goto v_resetjp_1864_;
}
v_resetjp_1864_:
{
lean_object* v___x_1868_; 
if (v_isShared_1866_ == 0)
{
lean_ctor_set_tag(v___x_1865_, 0);
v___x_1868_ = v___x_1865_;
goto v_reusejp_1867_;
}
else
{
lean_object* v_reuseFailAlloc_1869_; 
v_reuseFailAlloc_1869_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1869_, 0, v_a_1863_);
v___x_1868_ = v_reuseFailAlloc_1869_;
goto v_reusejp_1867_;
}
v_reusejp_1867_:
{
return v___x_1868_;
}
}
}
else
{
lean_object* v_a_1871_; lean_object* v___x_1872_; lean_object* v___x_1873_; 
v_a_1871_ = lean_ctor_get(v___x_1852_, 0);
lean_inc(v_a_1871_);
lean_dec_ref_known(v___x_1852_, 1);
v___x_1872_ = ((lean_object*)(l___private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson___closed__3));
lean_inc(v_json_1808_);
v___x_1873_ = l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson_spec__2(v_json_1808_, v___x_1872_);
if (lean_obj_tag(v___x_1873_) == 0)
{
lean_object* v_a_1874_; lean_object* v___x_1876_; uint8_t v_isShared_1877_; uint8_t v_isSharedCheck_1883_; 
lean_dec(v_a_1871_);
lean_dec(v_a_1850_);
lean_dec(v_a_1829_);
lean_dec(v_json_1808_);
v_a_1874_ = lean_ctor_get(v___x_1873_, 0);
v_isSharedCheck_1883_ = !lean_is_exclusive(v___x_1873_);
if (v_isSharedCheck_1883_ == 0)
{
v___x_1876_ = v___x_1873_;
v_isShared_1877_ = v_isSharedCheck_1883_;
goto v_resetjp_1875_;
}
else
{
lean_inc(v_a_1874_);
lean_dec(v___x_1873_);
v___x_1876_ = lean_box(0);
v_isShared_1877_ = v_isSharedCheck_1883_;
goto v_resetjp_1875_;
}
v_resetjp_1875_:
{
lean_object* v___x_1878_; lean_object* v___x_1879_; lean_object* v___x_1881_; 
v___x_1878_ = lean_obj_once(&l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__31, &l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__31_once, _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__31);
v___x_1879_ = lean_string_append(v___x_1878_, v_a_1874_);
lean_dec(v_a_1874_);
if (v_isShared_1877_ == 0)
{
lean_ctor_set(v___x_1876_, 0, v___x_1879_);
v___x_1881_ = v___x_1876_;
goto v_reusejp_1880_;
}
else
{
lean_object* v_reuseFailAlloc_1882_; 
v_reuseFailAlloc_1882_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1882_, 0, v___x_1879_);
v___x_1881_ = v_reuseFailAlloc_1882_;
goto v_reusejp_1880_;
}
v_reusejp_1880_:
{
return v___x_1881_;
}
}
}
else
{
if (lean_obj_tag(v___x_1873_) == 0)
{
lean_object* v_a_1884_; lean_object* v___x_1886_; uint8_t v_isShared_1887_; uint8_t v_isSharedCheck_1891_; 
lean_dec(v_a_1871_);
lean_dec(v_a_1850_);
lean_dec(v_a_1829_);
lean_dec(v_json_1808_);
v_a_1884_ = lean_ctor_get(v___x_1873_, 0);
v_isSharedCheck_1891_ = !lean_is_exclusive(v___x_1873_);
if (v_isSharedCheck_1891_ == 0)
{
v___x_1886_ = v___x_1873_;
v_isShared_1887_ = v_isSharedCheck_1891_;
goto v_resetjp_1885_;
}
else
{
lean_inc(v_a_1884_);
lean_dec(v___x_1873_);
v___x_1886_ = lean_box(0);
v_isShared_1887_ = v_isSharedCheck_1891_;
goto v_resetjp_1885_;
}
v_resetjp_1885_:
{
lean_object* v___x_1889_; 
if (v_isShared_1887_ == 0)
{
lean_ctor_set_tag(v___x_1886_, 0);
v___x_1889_ = v___x_1886_;
goto v_reusejp_1888_;
}
else
{
lean_object* v_reuseFailAlloc_1890_; 
v_reuseFailAlloc_1890_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1890_, 0, v_a_1884_);
v___x_1889_ = v_reuseFailAlloc_1890_;
goto v_reusejp_1888_;
}
v_reusejp_1888_:
{
return v___x_1889_;
}
}
}
else
{
lean_object* v_a_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; 
v_a_1892_ = lean_ctor_get(v___x_1873_, 0);
lean_inc(v_a_1892_);
lean_dec_ref_known(v___x_1873_, 1);
v___x_1893_ = ((lean_object*)(l___private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson___closed__4));
lean_inc(v_json_1808_);
v___x_1894_ = l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson_spec__3(v_json_1808_, v___x_1893_);
if (lean_obj_tag(v___x_1894_) == 0)
{
lean_object* v_a_1895_; lean_object* v___x_1897_; uint8_t v_isShared_1898_; uint8_t v_isSharedCheck_1904_; 
lean_dec(v_a_1892_);
lean_dec(v_a_1871_);
lean_dec(v_a_1850_);
lean_dec(v_a_1829_);
lean_dec(v_json_1808_);
v_a_1895_ = lean_ctor_get(v___x_1894_, 0);
v_isSharedCheck_1904_ = !lean_is_exclusive(v___x_1894_);
if (v_isSharedCheck_1904_ == 0)
{
v___x_1897_ = v___x_1894_;
v_isShared_1898_ = v_isSharedCheck_1904_;
goto v_resetjp_1896_;
}
else
{
lean_inc(v_a_1895_);
lean_dec(v___x_1894_);
v___x_1897_ = lean_box(0);
v_isShared_1898_ = v_isSharedCheck_1904_;
goto v_resetjp_1896_;
}
v_resetjp_1896_:
{
lean_object* v___x_1899_; lean_object* v___x_1900_; lean_object* v___x_1902_; 
v___x_1899_ = lean_obj_once(&l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__35, &l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__35_once, _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__35);
v___x_1900_ = lean_string_append(v___x_1899_, v_a_1895_);
lean_dec(v_a_1895_);
if (v_isShared_1898_ == 0)
{
lean_ctor_set(v___x_1897_, 0, v___x_1900_);
v___x_1902_ = v___x_1897_;
goto v_reusejp_1901_;
}
else
{
lean_object* v_reuseFailAlloc_1903_; 
v_reuseFailAlloc_1903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1903_, 0, v___x_1900_);
v___x_1902_ = v_reuseFailAlloc_1903_;
goto v_reusejp_1901_;
}
v_reusejp_1901_:
{
return v___x_1902_;
}
}
}
else
{
if (lean_obj_tag(v___x_1894_) == 0)
{
lean_object* v_a_1905_; lean_object* v___x_1907_; uint8_t v_isShared_1908_; uint8_t v_isSharedCheck_1912_; 
lean_dec(v_a_1892_);
lean_dec(v_a_1871_);
lean_dec(v_a_1850_);
lean_dec(v_a_1829_);
lean_dec(v_json_1808_);
v_a_1905_ = lean_ctor_get(v___x_1894_, 0);
v_isSharedCheck_1912_ = !lean_is_exclusive(v___x_1894_);
if (v_isSharedCheck_1912_ == 0)
{
v___x_1907_ = v___x_1894_;
v_isShared_1908_ = v_isSharedCheck_1912_;
goto v_resetjp_1906_;
}
else
{
lean_inc(v_a_1905_);
lean_dec(v___x_1894_);
v___x_1907_ = lean_box(0);
v_isShared_1908_ = v_isSharedCheck_1912_;
goto v_resetjp_1906_;
}
v_resetjp_1906_:
{
lean_object* v___x_1910_; 
if (v_isShared_1908_ == 0)
{
lean_ctor_set_tag(v___x_1907_, 0);
v___x_1910_ = v___x_1907_;
goto v_reusejp_1909_;
}
else
{
lean_object* v_reuseFailAlloc_1911_; 
v_reuseFailAlloc_1911_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1911_, 0, v_a_1905_);
v___x_1910_ = v_reuseFailAlloc_1911_;
goto v_reusejp_1909_;
}
v_reusejp_1909_:
{
return v___x_1910_;
}
}
}
else
{
lean_object* v_a_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; 
v_a_1913_ = lean_ctor_get(v___x_1894_, 0);
lean_inc(v_a_1913_);
lean_dec_ref_known(v___x_1894_, 1);
v___x_1914_ = ((lean_object*)(l___private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson___closed__5));
v___x_1915_ = l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson_spec__4(v_json_1808_, v___x_1914_);
if (lean_obj_tag(v___x_1915_) == 0)
{
lean_object* v_a_1916_; lean_object* v___x_1918_; uint8_t v_isShared_1919_; uint8_t v_isSharedCheck_1925_; 
lean_dec(v_a_1913_);
lean_dec(v_a_1892_);
lean_dec(v_a_1871_);
lean_dec(v_a_1850_);
lean_dec(v_a_1829_);
v_a_1916_ = lean_ctor_get(v___x_1915_, 0);
v_isSharedCheck_1925_ = !lean_is_exclusive(v___x_1915_);
if (v_isSharedCheck_1925_ == 0)
{
v___x_1918_ = v___x_1915_;
v_isShared_1919_ = v_isSharedCheck_1925_;
goto v_resetjp_1917_;
}
else
{
lean_inc(v_a_1916_);
lean_dec(v___x_1915_);
v___x_1918_ = lean_box(0);
v_isShared_1919_ = v_isSharedCheck_1925_;
goto v_resetjp_1917_;
}
v_resetjp_1917_:
{
lean_object* v___x_1920_; lean_object* v___x_1921_; lean_object* v___x_1923_; 
v___x_1920_ = lean_obj_once(&l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__39, &l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__39_once, _init_l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson___closed__39);
v___x_1921_ = lean_string_append(v___x_1920_, v_a_1916_);
lean_dec(v_a_1916_);
if (v_isShared_1919_ == 0)
{
lean_ctor_set(v___x_1918_, 0, v___x_1921_);
v___x_1923_ = v___x_1918_;
goto v_reusejp_1922_;
}
else
{
lean_object* v_reuseFailAlloc_1924_; 
v_reuseFailAlloc_1924_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1924_, 0, v___x_1921_);
v___x_1923_ = v_reuseFailAlloc_1924_;
goto v_reusejp_1922_;
}
v_reusejp_1922_:
{
return v___x_1923_;
}
}
}
else
{
if (lean_obj_tag(v___x_1915_) == 0)
{
lean_object* v_a_1926_; lean_object* v___x_1928_; uint8_t v_isShared_1929_; uint8_t v_isSharedCheck_1933_; 
lean_dec(v_a_1913_);
lean_dec(v_a_1892_);
lean_dec(v_a_1871_);
lean_dec(v_a_1850_);
lean_dec(v_a_1829_);
v_a_1926_ = lean_ctor_get(v___x_1915_, 0);
v_isSharedCheck_1933_ = !lean_is_exclusive(v___x_1915_);
if (v_isSharedCheck_1933_ == 0)
{
v___x_1928_ = v___x_1915_;
v_isShared_1929_ = v_isSharedCheck_1933_;
goto v_resetjp_1927_;
}
else
{
lean_inc(v_a_1926_);
lean_dec(v___x_1915_);
v___x_1928_ = lean_box(0);
v_isShared_1929_ = v_isSharedCheck_1933_;
goto v_resetjp_1927_;
}
v_resetjp_1927_:
{
lean_object* v___x_1931_; 
if (v_isShared_1929_ == 0)
{
lean_ctor_set_tag(v___x_1928_, 0);
v___x_1931_ = v___x_1928_;
goto v_reusejp_1930_;
}
else
{
lean_object* v_reuseFailAlloc_1932_; 
v_reuseFailAlloc_1932_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1932_, 0, v_a_1926_);
v___x_1931_ = v_reuseFailAlloc_1932_;
goto v_reusejp_1930_;
}
v_reusejp_1930_:
{
return v___x_1931_;
}
}
}
else
{
lean_object* v_a_1934_; lean_object* v___x_1936_; uint8_t v_isShared_1937_; uint8_t v_isSharedCheck_1943_; 
v_a_1934_ = lean_ctor_get(v___x_1915_, 0);
v_isSharedCheck_1943_ = !lean_is_exclusive(v___x_1915_);
if (v_isSharedCheck_1943_ == 0)
{
v___x_1936_ = v___x_1915_;
v_isShared_1937_ = v_isSharedCheck_1943_;
goto v_resetjp_1935_;
}
else
{
lean_inc(v_a_1934_);
lean_dec(v___x_1915_);
v___x_1936_ = lean_box(0);
v_isShared_1937_ = v_isSharedCheck_1943_;
goto v_resetjp_1935_;
}
v_resetjp_1935_:
{
lean_object* v___x_1938_; uint64_t v___x_1939_; lean_object* v___x_1941_; 
v___x_1938_ = lean_alloc_ctor(0, 5, 8);
lean_ctor_set(v___x_1938_, 0, v_a_1829_);
lean_ctor_set(v___x_1938_, 1, v_a_1850_);
lean_ctor_set(v___x_1938_, 2, v_a_1871_);
lean_ctor_set(v___x_1938_, 3, v_a_1892_);
lean_ctor_set(v___x_1938_, 4, v_a_1934_);
v___x_1939_ = lean_unbox_uint64(v_a_1913_);
lean_dec(v_a_1913_);
lean_ctor_set_uint64(v___x_1938_, sizeof(void*)*5, v___x_1939_);
if (v_isShared_1937_ == 0)
{
lean_ctor_set(v___x_1936_, 0, v___x_1938_);
v___x_1941_ = v___x_1936_;
goto v_reusejp_1940_;
}
else
{
lean_object* v_reuseFailAlloc_1942_; 
v_reuseFailAlloc_1942_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1942_, 0, v___x_1938_);
v___x_1941_ = v_reuseFailAlloc_1942_;
goto v_reusejp_1940_;
}
v_reusejp_1940_:
{
return v___x_1941_;
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
}
}
}
}
}
static lean_object* _init_l_Lake_importConfigFile___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1947_; lean_object* v___x_1948_; 
v___x_1947_ = ((lean_object*)(l_Lake_importConfigFile___lam__0___closed__0));
v___x_1948_ = lean_mk_io_user_error(v___x_1947_);
return v___x_1948_;
}
}
LEAN_EXPORT lean_object* l_Lake_importConfigFile___lam__0(lean_object* v___x_1949_, lean_object* v___x_1950_, lean_object* v_h_1951_){
_start:
{
uint8_t v___x_1953_; lean_object* v___x_1954_; 
v___x_1953_ = 1;
v___x_1954_ = lean_io_prim_handle_mk(v___x_1949_, v___x_1953_);
if (lean_obj_tag(v___x_1954_) == 0)
{
lean_object* v_a_1955_; uint8_t v___x_1956_; lean_object* v___x_1957_; 
v_a_1955_ = lean_ctor_get(v___x_1954_, 0);
lean_inc(v_a_1955_);
lean_dec_ref_known(v___x_1954_, 1);
v___x_1956_ = 1;
v___x_1957_ = lean_io_prim_handle_try_lock(v_a_1955_, v___x_1956_);
if (lean_obj_tag(v___x_1957_) == 0)
{
lean_object* v_a_1958_; uint8_t v___x_1959_; 
v_a_1958_ = lean_ctor_get(v___x_1957_, 0);
lean_inc(v_a_1958_);
lean_dec_ref_known(v___x_1957_, 1);
v___x_1959_ = lean_unbox(v_a_1958_);
lean_dec(v_a_1958_);
if (v___x_1959_ == 0)
{
lean_object* v___x_1960_; 
lean_dec(v_a_1955_);
v___x_1960_ = lean_io_prim_handle_unlock(v_h_1951_);
if (lean_obj_tag(v___x_1960_) == 0)
{
lean_object* v___x_1962_; uint8_t v_isShared_1963_; uint8_t v_isSharedCheck_1968_; 
v_isSharedCheck_1968_ = !lean_is_exclusive(v___x_1960_);
if (v_isSharedCheck_1968_ == 0)
{
lean_object* v_unused_1969_; 
v_unused_1969_ = lean_ctor_get(v___x_1960_, 0);
lean_dec(v_unused_1969_);
v___x_1962_ = v___x_1960_;
v_isShared_1963_ = v_isSharedCheck_1968_;
goto v_resetjp_1961_;
}
else
{
lean_dec(v___x_1960_);
v___x_1962_ = lean_box(0);
v_isShared_1963_ = v_isSharedCheck_1968_;
goto v_resetjp_1961_;
}
v_resetjp_1961_:
{
lean_object* v___x_1964_; lean_object* v___x_1966_; 
v___x_1964_ = lean_obj_once(&l_Lake_importConfigFile___lam__0___closed__1, &l_Lake_importConfigFile___lam__0___closed__1_once, _init_l_Lake_importConfigFile___lam__0___closed__1);
if (v_isShared_1963_ == 0)
{
lean_ctor_set_tag(v___x_1962_, 1);
lean_ctor_set(v___x_1962_, 0, v___x_1964_);
v___x_1966_ = v___x_1962_;
goto v_reusejp_1965_;
}
else
{
lean_object* v_reuseFailAlloc_1967_; 
v_reuseFailAlloc_1967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1967_, 0, v___x_1964_);
v___x_1966_ = v_reuseFailAlloc_1967_;
goto v_reusejp_1965_;
}
v_reusejp_1965_:
{
return v___x_1966_;
}
}
}
else
{
lean_object* v_a_1970_; lean_object* v___x_1972_; uint8_t v_isShared_1973_; uint8_t v_isSharedCheck_1977_; 
v_a_1970_ = lean_ctor_get(v___x_1960_, 0);
v_isSharedCheck_1977_ = !lean_is_exclusive(v___x_1960_);
if (v_isSharedCheck_1977_ == 0)
{
v___x_1972_ = v___x_1960_;
v_isShared_1973_ = v_isSharedCheck_1977_;
goto v_resetjp_1971_;
}
else
{
lean_inc(v_a_1970_);
lean_dec(v___x_1960_);
v___x_1972_ = lean_box(0);
v_isShared_1973_ = v_isSharedCheck_1977_;
goto v_resetjp_1971_;
}
v_resetjp_1971_:
{
lean_object* v___x_1975_; 
if (v_isShared_1973_ == 0)
{
v___x_1975_ = v___x_1972_;
goto v_reusejp_1974_;
}
else
{
lean_object* v_reuseFailAlloc_1976_; 
v_reuseFailAlloc_1976_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1976_, 0, v_a_1970_);
v___x_1975_ = v_reuseFailAlloc_1976_;
goto v_reusejp_1974_;
}
v_reusejp_1974_:
{
return v___x_1975_;
}
}
}
}
else
{
lean_object* v___x_1978_; 
v___x_1978_ = lean_io_prim_handle_unlock(v_h_1951_);
if (lean_obj_tag(v___x_1978_) == 0)
{
uint8_t v___x_1979_; lean_object* v___x_1980_; 
lean_dec_ref_known(v___x_1978_, 1);
v___x_1979_ = 3;
v___x_1980_ = lean_io_prim_handle_mk(v___x_1950_, v___x_1979_);
if (lean_obj_tag(v___x_1980_) == 0)
{
lean_object* v_a_1981_; lean_object* v___x_1982_; 
v_a_1981_ = lean_ctor_get(v___x_1980_, 0);
lean_inc(v_a_1981_);
lean_dec_ref_known(v___x_1980_, 1);
v___x_1982_ = lean_io_prim_handle_lock(v_a_1981_, v___x_1956_);
if (lean_obj_tag(v___x_1982_) == 0)
{
lean_object* v___x_1983_; 
lean_dec_ref_known(v___x_1982_, 1);
v___x_1983_ = lean_io_prim_handle_unlock(v_a_1955_);
lean_dec(v_a_1955_);
if (lean_obj_tag(v___x_1983_) == 0)
{
lean_object* v___x_1985_; uint8_t v_isShared_1986_; uint8_t v_isSharedCheck_1990_; 
v_isSharedCheck_1990_ = !lean_is_exclusive(v___x_1983_);
if (v_isSharedCheck_1990_ == 0)
{
lean_object* v_unused_1991_; 
v_unused_1991_ = lean_ctor_get(v___x_1983_, 0);
lean_dec(v_unused_1991_);
v___x_1985_ = v___x_1983_;
v_isShared_1986_ = v_isSharedCheck_1990_;
goto v_resetjp_1984_;
}
else
{
lean_dec(v___x_1983_);
v___x_1985_ = lean_box(0);
v_isShared_1986_ = v_isSharedCheck_1990_;
goto v_resetjp_1984_;
}
v_resetjp_1984_:
{
lean_object* v___x_1988_; 
if (v_isShared_1986_ == 0)
{
lean_ctor_set(v___x_1985_, 0, v_a_1981_);
v___x_1988_ = v___x_1985_;
goto v_reusejp_1987_;
}
else
{
lean_object* v_reuseFailAlloc_1989_; 
v_reuseFailAlloc_1989_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1989_, 0, v_a_1981_);
v___x_1988_ = v_reuseFailAlloc_1989_;
goto v_reusejp_1987_;
}
v_reusejp_1987_:
{
return v___x_1988_;
}
}
}
else
{
lean_object* v_a_1992_; lean_object* v___x_1994_; uint8_t v_isShared_1995_; uint8_t v_isSharedCheck_1999_; 
lean_dec(v_a_1981_);
v_a_1992_ = lean_ctor_get(v___x_1983_, 0);
v_isSharedCheck_1999_ = !lean_is_exclusive(v___x_1983_);
if (v_isSharedCheck_1999_ == 0)
{
v___x_1994_ = v___x_1983_;
v_isShared_1995_ = v_isSharedCheck_1999_;
goto v_resetjp_1993_;
}
else
{
lean_inc(v_a_1992_);
lean_dec(v___x_1983_);
v___x_1994_ = lean_box(0);
v_isShared_1995_ = v_isSharedCheck_1999_;
goto v_resetjp_1993_;
}
v_resetjp_1993_:
{
lean_object* v___x_1997_; 
if (v_isShared_1995_ == 0)
{
v___x_1997_ = v___x_1994_;
goto v_reusejp_1996_;
}
else
{
lean_object* v_reuseFailAlloc_1998_; 
v_reuseFailAlloc_1998_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1998_, 0, v_a_1992_);
v___x_1997_ = v_reuseFailAlloc_1998_;
goto v_reusejp_1996_;
}
v_reusejp_1996_:
{
return v___x_1997_;
}
}
}
}
else
{
lean_object* v_a_2000_; lean_object* v___x_2002_; uint8_t v_isShared_2003_; uint8_t v_isSharedCheck_2007_; 
lean_dec(v_a_1981_);
lean_dec(v_a_1955_);
v_a_2000_ = lean_ctor_get(v___x_1982_, 0);
v_isSharedCheck_2007_ = !lean_is_exclusive(v___x_1982_);
if (v_isSharedCheck_2007_ == 0)
{
v___x_2002_ = v___x_1982_;
v_isShared_2003_ = v_isSharedCheck_2007_;
goto v_resetjp_2001_;
}
else
{
lean_inc(v_a_2000_);
lean_dec(v___x_1982_);
v___x_2002_ = lean_box(0);
v_isShared_2003_ = v_isSharedCheck_2007_;
goto v_resetjp_2001_;
}
v_resetjp_2001_:
{
lean_object* v___x_2005_; 
if (v_isShared_2003_ == 0)
{
v___x_2005_ = v___x_2002_;
goto v_reusejp_2004_;
}
else
{
lean_object* v_reuseFailAlloc_2006_; 
v_reuseFailAlloc_2006_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2006_, 0, v_a_2000_);
v___x_2005_ = v_reuseFailAlloc_2006_;
goto v_reusejp_2004_;
}
v_reusejp_2004_:
{
return v___x_2005_;
}
}
}
}
else
{
lean_dec(v_a_1955_);
return v___x_1980_;
}
}
else
{
lean_object* v_a_2008_; lean_object* v___x_2010_; uint8_t v_isShared_2011_; uint8_t v_isSharedCheck_2015_; 
lean_dec(v_a_1955_);
v_a_2008_ = lean_ctor_get(v___x_1978_, 0);
v_isSharedCheck_2015_ = !lean_is_exclusive(v___x_1978_);
if (v_isSharedCheck_2015_ == 0)
{
v___x_2010_ = v___x_1978_;
v_isShared_2011_ = v_isSharedCheck_2015_;
goto v_resetjp_2009_;
}
else
{
lean_inc(v_a_2008_);
lean_dec(v___x_1978_);
v___x_2010_ = lean_box(0);
v_isShared_2011_ = v_isSharedCheck_2015_;
goto v_resetjp_2009_;
}
v_resetjp_2009_:
{
lean_object* v___x_2013_; 
if (v_isShared_2011_ == 0)
{
v___x_2013_ = v___x_2010_;
goto v_reusejp_2012_;
}
else
{
lean_object* v_reuseFailAlloc_2014_; 
v_reuseFailAlloc_2014_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2014_, 0, v_a_2008_);
v___x_2013_ = v_reuseFailAlloc_2014_;
goto v_reusejp_2012_;
}
v_reusejp_2012_:
{
return v___x_2013_;
}
}
}
}
}
else
{
lean_object* v_a_2016_; lean_object* v___x_2018_; uint8_t v_isShared_2019_; uint8_t v_isSharedCheck_2023_; 
lean_dec(v_a_1955_);
v_a_2016_ = lean_ctor_get(v___x_1957_, 0);
v_isSharedCheck_2023_ = !lean_is_exclusive(v___x_1957_);
if (v_isSharedCheck_2023_ == 0)
{
v___x_2018_ = v___x_1957_;
v_isShared_2019_ = v_isSharedCheck_2023_;
goto v_resetjp_2017_;
}
else
{
lean_inc(v_a_2016_);
lean_dec(v___x_1957_);
v___x_2018_ = lean_box(0);
v_isShared_2019_ = v_isSharedCheck_2023_;
goto v_resetjp_2017_;
}
v_resetjp_2017_:
{
lean_object* v___x_2021_; 
if (v_isShared_2019_ == 0)
{
v___x_2021_ = v___x_2018_;
goto v_reusejp_2020_;
}
else
{
lean_object* v_reuseFailAlloc_2022_; 
v_reuseFailAlloc_2022_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2022_, 0, v_a_2016_);
v___x_2021_ = v_reuseFailAlloc_2022_;
goto v_reusejp_2020_;
}
v_reusejp_2020_:
{
return v___x_2021_;
}
}
}
}
else
{
return v___x_1954_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_importConfigFile___lam__0___boxed(lean_object* v___x_2024_, lean_object* v___x_2025_, lean_object* v_h_2026_, lean_object* v___y_2027_){
_start:
{
lean_object* v_res_2028_; 
v_res_2028_ = l_Lake_importConfigFile___lam__0(v___x_2024_, v___x_2025_, v_h_2026_);
lean_dec(v_h_2026_);
lean_dec_ref(v___x_2025_);
lean_dec_ref(v___x_2024_);
return v_res_2028_;
}
}
LEAN_EXPORT lean_object* l_Lake_importConfigFile(lean_object* v_cfg_2037_, lean_object* v_a_2038_){
_start:
{
lean_object* v___y_2041_; lean_object* v_a_2042_; lean_object* v_lakeEnv_2044_; lean_object* v_wsDir_2045_; lean_object* v_pkgIdx_2046_; lean_object* v_pkgName_2047_; lean_object* v_pkgDir_2048_; lean_object* v_configFile_2049_; lean_object* v_lakeOpts_2050_; lean_object* v_leanOpts_2051_; uint8_t v_reconfigure_2052_; lean_object* v___x_2053_; 
v_lakeEnv_2044_ = lean_ctor_get(v_cfg_2037_, 0);
lean_inc_ref(v_lakeEnv_2044_);
v_wsDir_2045_ = lean_ctor_get(v_cfg_2037_, 2);
lean_inc_ref(v_wsDir_2045_);
v_pkgIdx_2046_ = lean_ctor_get(v_cfg_2037_, 3);
lean_inc(v_pkgIdx_2046_);
v_pkgName_2047_ = lean_ctor_get(v_cfg_2037_, 4);
lean_inc(v_pkgName_2047_);
v_pkgDir_2048_ = lean_ctor_get(v_cfg_2037_, 6);
lean_inc_ref(v_pkgDir_2048_);
v_configFile_2049_ = lean_ctor_get(v_cfg_2037_, 8);
lean_inc_ref_n(v_configFile_2049_, 2);
v_lakeOpts_2050_ = lean_ctor_get(v_cfg_2037_, 12);
lean_inc(v_lakeOpts_2050_);
v_leanOpts_2051_ = lean_ctor_get(v_cfg_2037_, 13);
lean_inc_ref(v_leanOpts_2051_);
v_reconfigure_2052_ = lean_ctor_get_uint8(v_cfg_2037_, sizeof(void*)*16);
lean_dec_ref(v_cfg_2037_);
v___x_2053_ = l_System_FilePath_fileName(v_configFile_2049_);
if (lean_obj_tag(v___x_2053_) == 0)
{
lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; 
lean_dec_ref(v_leanOpts_2051_);
lean_dec(v_lakeOpts_2050_);
lean_dec_ref(v_configFile_2049_);
lean_dec_ref(v_pkgDir_2048_);
lean_dec(v_pkgName_2047_);
lean_dec(v_pkgIdx_2046_);
lean_dec_ref(v_wsDir_2045_);
lean_dec_ref(v_lakeEnv_2044_);
v___x_2054_ = ((lean_object*)(l_Lake_importConfigFile___closed__1));
v___x_2055_ = lean_array_get_size(v_a_2038_);
v___x_2056_ = lean_array_push(v_a_2038_, v___x_2054_);
v___x_2057_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2057_, 0, v___x_2055_);
lean_ctor_set(v___x_2057_, 1, v___x_2056_);
return v___x_2057_;
}
else
{
lean_object* v_val_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v_configDir_2064_; lean_object* v___x_2065_; 
v_val_2058_ = lean_ctor_get(v___x_2053_, 0);
lean_inc(v_val_2058_);
lean_dec_ref_known(v___x_2053_, 1);
v___x_2059_ = l_Lake_defaultLakeDir;
v___x_2060_ = l_Lake_joinRelative(v_wsDir_2045_, v___x_2059_);
v___x_2061_ = ((lean_object*)(l_Lake_importConfigFile___closed__2));
v___x_2062_ = l_Lake_joinRelative(v___x_2060_, v___x_2061_);
lean_inc(v_pkgIdx_2046_);
v___x_2063_ = l_Nat_reprFast(v_pkgIdx_2046_);
v_configDir_2064_ = l_Lake_joinRelative(v___x_2062_, v___x_2063_);
lean_inc_ref(v_configDir_2064_);
v___x_2065_ = l_IO_FS_createDirAll(v_configDir_2064_);
if (lean_obj_tag(v___x_2065_) == 0)
{
lean_object* v___x_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; lean_object* v___x_2074_; lean_object* v___x_2075_; 
lean_dec_ref_known(v___x_2065_, 1);
v___x_2066_ = ((lean_object*)(l_Lake_importConfigFile___closed__3));
lean_inc_n(v_val_2058_, 2);
v___x_2067_ = l_System_FilePath_withExtension(v_val_2058_, v___x_2066_);
lean_inc_ref_n(v_configDir_2064_, 2);
v___x_2068_ = l_Lake_joinRelative(v_configDir_2064_, v___x_2067_);
v___x_2069_ = ((lean_object*)(l_Lake_importConfigFile___closed__4));
v___x_2070_ = l_System_FilePath_withExtension(v_val_2058_, v___x_2069_);
v___x_2071_ = l_Lake_joinRelative(v_configDir_2064_, v___x_2070_);
v___x_2072_ = ((lean_object*)(l_Lake_importConfigFile___closed__5));
v___x_2073_ = l_System_FilePath_withExtension(v_val_2058_, v___x_2072_);
v___x_2074_ = l_Lake_joinRelative(v_configDir_2064_, v___x_2073_);
v___x_2075_ = l_Lake_computeTextFileHash(v_configFile_2049_);
if (lean_obj_tag(v___x_2075_) == 0)
{
lean_object* v_a_2076_; lean_object* v_h_2078_; lean_object* v_lakeOpts_2079_; lean_object* v___y_2080_; lean_object* v___y_2233_; lean_object* v___y_2234_; lean_object* v___y_2245_; lean_object* v___y_2246_; lean_object* v___y_2247_; lean_object* v___y_2258_; uint8_t v___y_2259_; lean_object* v___y_2260_; lean_object* v___y_2261_; uint8_t v___y_2262_; uint8_t v___y_2282_; lean_object* v___y_2283_; uint8_t v___y_2284_; lean_object* v___y_2285_; lean_object* v___y_2286_; uint8_t v___y_2287_; lean_object* v___y_2289_; uint8_t v___y_2290_; uint8_t v___y_2291_; uint8_t v___y_2292_; lean_object* v___y_2293_; lean_object* v___y_2294_; uint8_t v___y_2295_; uint8_t v___y_2297_; uint8_t v___y_2298_; lean_object* v___y_2299_; uint8_t v___y_2300_; uint8_t v___y_2301_; lean_object* v___y_2302_; lean_object* v___y_2303_; uint8_t v___y_2304_; lean_object* v_h_2306_; lean_object* v___y_2307_; uint8_t v___x_2378_; 
v_a_2076_ = lean_ctor_get(v___x_2075_, 0);
lean_inc(v_a_2076_);
lean_dec_ref_known(v___x_2075_, 1);
v___x_2378_ = l_System_FilePath_pathExists(v___x_2071_);
if (v___x_2378_ == 0)
{
uint8_t v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; 
v___x_2379_ = 1;
lean_inc_ref(v_pkgDir_2048_);
v___x_2380_ = l_Lake_joinRelative(v_pkgDir_2048_, v___x_2059_);
v___x_2381_ = l_IO_FS_createDirAll(v___x_2380_);
if (lean_obj_tag(v___x_2381_) == 0)
{
uint8_t v___x_2382_; lean_object* v___x_2383_; 
lean_dec_ref_known(v___x_2381_, 1);
v___x_2382_ = 2;
v___x_2383_ = lean_io_prim_handle_mk(v___x_2071_, v___x_2382_);
if (lean_obj_tag(v___x_2383_) == 0)
{
lean_object* v_a_2384_; lean_object* v___x_2385_; 
lean_dec_ref(v___x_2074_);
v_a_2384_ = lean_ctor_get(v___x_2383_, 0);
lean_inc(v_a_2384_);
lean_dec_ref_known(v___x_2383_, 1);
v___x_2385_ = lean_io_prim_handle_lock(v_a_2384_, v___x_2379_);
if (lean_obj_tag(v___x_2385_) == 0)
{
lean_dec_ref_known(v___x_2385_, 1);
v_h_2078_ = v_a_2384_;
v_lakeOpts_2079_ = v_lakeOpts_2050_;
v___y_2080_ = v_a_2038_;
goto v___jp_2077_;
}
else
{
lean_object* v_a_2386_; lean_object* v___x_2387_; uint8_t v___x_2388_; lean_object* v___x_2389_; lean_object* v___x_2390_; lean_object* v___x_2391_; lean_object* v___x_2392_; 
lean_dec(v_a_2384_);
lean_dec(v_a_2076_);
lean_dec_ref(v___x_2071_);
lean_dec_ref(v___x_2068_);
lean_dec_ref(v_leanOpts_2051_);
lean_dec(v_lakeOpts_2050_);
lean_dec_ref(v_configFile_2049_);
lean_dec_ref(v_pkgDir_2048_);
lean_dec(v_pkgName_2047_);
lean_dec(v_pkgIdx_2046_);
lean_dec_ref(v_lakeEnv_2044_);
v_a_2386_ = lean_ctor_get(v___x_2385_, 0);
lean_inc(v_a_2386_);
lean_dec_ref_known(v___x_2385_, 1);
v___x_2387_ = lean_io_error_to_string(v_a_2386_);
v___x_2388_ = 3;
v___x_2389_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2389_, 0, v___x_2387_);
lean_ctor_set_uint8(v___x_2389_, sizeof(void*)*1, v___x_2388_);
v___x_2390_ = lean_array_get_size(v_a_2038_);
v___x_2391_ = lean_array_push(v_a_2038_, v___x_2389_);
v___x_2392_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2392_, 0, v___x_2390_);
lean_ctor_set(v___x_2392_, 1, v___x_2391_);
return v___x_2392_;
}
}
else
{
lean_object* v_a_2393_; 
v_a_2393_ = lean_ctor_get(v___x_2383_, 0);
lean_inc(v_a_2393_);
lean_dec_ref_known(v___x_2383_, 1);
if (lean_obj_tag(v_a_2393_) == 0)
{
uint8_t v___x_2394_; lean_object* v___x_2395_; 
lean_dec_ref_known(v_a_2393_, 2);
v___x_2394_ = 0;
v___x_2395_ = lean_io_prim_handle_mk(v___x_2071_, v___x_2394_);
if (lean_obj_tag(v___x_2395_) == 0)
{
lean_object* v_a_2396_; 
v_a_2396_ = lean_ctor_get(v___x_2395_, 0);
lean_inc(v_a_2396_);
lean_dec_ref_known(v___x_2395_, 1);
v_h_2306_ = v_a_2396_;
v___y_2307_ = v_a_2038_;
goto v___jp_2305_;
}
else
{
lean_object* v_a_2397_; lean_object* v___x_2398_; uint8_t v___x_2399_; lean_object* v___x_2400_; lean_object* v___x_2401_; lean_object* v___x_2402_; lean_object* v___x_2403_; 
lean_dec(v_a_2076_);
lean_dec_ref(v___x_2074_);
lean_dec_ref(v___x_2071_);
lean_dec_ref(v___x_2068_);
lean_dec_ref(v_leanOpts_2051_);
lean_dec(v_lakeOpts_2050_);
lean_dec_ref(v_configFile_2049_);
lean_dec_ref(v_pkgDir_2048_);
lean_dec(v_pkgName_2047_);
lean_dec(v_pkgIdx_2046_);
lean_dec_ref(v_lakeEnv_2044_);
v_a_2397_ = lean_ctor_get(v___x_2395_, 0);
lean_inc(v_a_2397_);
lean_dec_ref_known(v___x_2395_, 1);
v___x_2398_ = lean_io_error_to_string(v_a_2397_);
v___x_2399_ = 3;
v___x_2400_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2400_, 0, v___x_2398_);
lean_ctor_set_uint8(v___x_2400_, sizeof(void*)*1, v___x_2399_);
v___x_2401_ = lean_array_get_size(v_a_2038_);
v___x_2402_ = lean_array_push(v_a_2038_, v___x_2400_);
v___x_2403_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2403_, 0, v___x_2401_);
lean_ctor_set(v___x_2403_, 1, v___x_2402_);
return v___x_2403_;
}
}
else
{
lean_object* v___x_2404_; uint8_t v___x_2405_; lean_object* v___x_2406_; lean_object* v___x_2407_; lean_object* v___x_2408_; lean_object* v___x_2409_; 
lean_dec(v_a_2076_);
lean_dec_ref(v___x_2074_);
lean_dec_ref(v___x_2071_);
lean_dec_ref(v___x_2068_);
lean_dec_ref(v_leanOpts_2051_);
lean_dec(v_lakeOpts_2050_);
lean_dec_ref(v_configFile_2049_);
lean_dec_ref(v_pkgDir_2048_);
lean_dec(v_pkgName_2047_);
lean_dec(v_pkgIdx_2046_);
lean_dec_ref(v_lakeEnv_2044_);
v___x_2404_ = lean_io_error_to_string(v_a_2393_);
v___x_2405_ = 3;
v___x_2406_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2406_, 0, v___x_2404_);
lean_ctor_set_uint8(v___x_2406_, sizeof(void*)*1, v___x_2405_);
v___x_2407_ = lean_array_get_size(v_a_2038_);
v___x_2408_ = lean_array_push(v_a_2038_, v___x_2406_);
v___x_2409_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2409_, 0, v___x_2407_);
lean_ctor_set(v___x_2409_, 1, v___x_2408_);
return v___x_2409_;
}
}
}
else
{
lean_object* v_a_2410_; lean_object* v___x_2411_; uint8_t v___x_2412_; lean_object* v___x_2413_; lean_object* v___x_2414_; lean_object* v___x_2415_; lean_object* v___x_2416_; 
lean_dec(v_a_2076_);
lean_dec_ref(v___x_2074_);
lean_dec_ref(v___x_2071_);
lean_dec_ref(v___x_2068_);
lean_dec_ref(v_leanOpts_2051_);
lean_dec(v_lakeOpts_2050_);
lean_dec_ref(v_configFile_2049_);
lean_dec_ref(v_pkgDir_2048_);
lean_dec(v_pkgName_2047_);
lean_dec(v_pkgIdx_2046_);
lean_dec_ref(v_lakeEnv_2044_);
v_a_2410_ = lean_ctor_get(v___x_2381_, 0);
lean_inc(v_a_2410_);
lean_dec_ref_known(v___x_2381_, 1);
v___x_2411_ = lean_io_error_to_string(v_a_2410_);
v___x_2412_ = 3;
v___x_2413_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2413_, 0, v___x_2411_);
lean_ctor_set_uint8(v___x_2413_, sizeof(void*)*1, v___x_2412_);
v___x_2414_ = lean_array_get_size(v_a_2038_);
v___x_2415_ = lean_array_push(v_a_2038_, v___x_2413_);
v___x_2416_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2416_, 0, v___x_2414_);
lean_ctor_set(v___x_2416_, 1, v___x_2415_);
return v___x_2416_;
}
}
else
{
uint8_t v___x_2417_; lean_object* v___x_2418_; 
v___x_2417_ = 0;
v___x_2418_ = lean_io_prim_handle_mk(v___x_2071_, v___x_2417_);
if (lean_obj_tag(v___x_2418_) == 0)
{
lean_object* v_a_2419_; 
v_a_2419_ = lean_ctor_get(v___x_2418_, 0);
lean_inc(v_a_2419_);
lean_dec_ref_known(v___x_2418_, 1);
v_h_2306_ = v_a_2419_;
v___y_2307_ = v_a_2038_;
goto v___jp_2305_;
}
else
{
lean_object* v_a_2420_; lean_object* v___x_2421_; uint8_t v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; lean_object* v___x_2425_; lean_object* v___x_2426_; 
lean_dec(v_a_2076_);
lean_dec_ref(v___x_2074_);
lean_dec_ref(v___x_2071_);
lean_dec_ref(v___x_2068_);
lean_dec_ref(v_leanOpts_2051_);
lean_dec(v_lakeOpts_2050_);
lean_dec_ref(v_configFile_2049_);
lean_dec_ref(v_pkgDir_2048_);
lean_dec(v_pkgName_2047_);
lean_dec(v_pkgIdx_2046_);
lean_dec_ref(v_lakeEnv_2044_);
v_a_2420_ = lean_ctor_get(v___x_2418_, 0);
lean_inc(v_a_2420_);
lean_dec_ref_known(v___x_2418_, 1);
v___x_2421_ = lean_io_error_to_string(v_a_2420_);
v___x_2422_ = 3;
v___x_2423_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2423_, 0, v___x_2421_);
lean_ctor_set_uint8(v___x_2423_, sizeof(void*)*1, v___x_2422_);
v___x_2424_ = lean_array_get_size(v_a_2038_);
v___x_2425_ = lean_array_push(v_a_2038_, v___x_2423_);
v___x_2426_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2426_, 0, v___x_2424_);
lean_ctor_set(v___x_2426_, 1, v___x_2425_);
return v___x_2426_;
}
}
v___jp_2077_:
{
lean_object* v___x_2081_; 
v___x_2081_ = lean_io_remove_file(v___x_2068_);
if (lean_obj_tag(v___x_2081_) == 0)
{
lean_object* v___x_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; uint64_t v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; 
lean_dec_ref_known(v___x_2081_, 1);
lean_dec_ref(v___x_2071_);
v___x_2082_ = l_System_Platform_target;
v___x_2083_ = l_Lake_Env_leanGithash(v_lakeEnv_2044_);
lean_dec_ref(v_lakeEnv_2044_);
lean_inc(v_lakeOpts_2079_);
lean_inc(v_pkgName_2047_);
lean_inc(v_pkgIdx_2046_);
v___x_2084_ = lean_alloc_ctor(0, 5, 8);
lean_ctor_set(v___x_2084_, 0, v_pkgIdx_2046_);
lean_ctor_set(v___x_2084_, 1, v_pkgName_2047_);
lean_ctor_set(v___x_2084_, 2, v___x_2082_);
lean_ctor_set(v___x_2084_, 3, v___x_2083_);
lean_ctor_set(v___x_2084_, 4, v_lakeOpts_2079_);
v___x_2085_ = lean_unbox_uint64(v_a_2076_);
lean_dec(v_a_2076_);
lean_ctor_set_uint64(v___x_2084_, sizeof(void*)*5, v___x_2085_);
v___x_2086_ = l___private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson(v___x_2084_);
v___x_2087_ = lean_unsigned_to_nat(80u);
v___x_2088_ = l_Lean_Json_pretty(v___x_2086_, v___x_2087_);
v___x_2089_ = l_IO_FS_Handle_putStrLn(v_h_2078_, v___x_2088_);
if (lean_obj_tag(v___x_2089_) == 0)
{
lean_object* v___x_2090_; 
lean_dec_ref_known(v___x_2089_, 1);
v___x_2090_ = lean_io_prim_handle_flush(v_h_2078_);
if (lean_obj_tag(v___x_2090_) == 0)
{
lean_object* v___x_2091_; 
lean_dec_ref_known(v___x_2090_, 1);
v___x_2091_ = lean_io_prim_handle_truncate(v_h_2078_);
if (lean_obj_tag(v___x_2091_) == 0)
{
lean_object* v___x_2092_; 
lean_dec_ref_known(v___x_2091_, 1);
v___x_2092_ = l___private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile(v_pkgIdx_2046_, v_pkgName_2047_, v_pkgDir_2048_, v_lakeOpts_2079_, v_leanOpts_2051_, v_configFile_2049_, v___y_2080_);
if (lean_obj_tag(v___x_2092_) == 0)
{
lean_object* v_a_2093_; lean_object* v_a_2094_; uint8_t v___x_2095_; lean_object* v___x_2096_; 
v_a_2093_ = lean_ctor_get(v___x_2092_, 0);
lean_inc(v_a_2093_);
v_a_2094_ = lean_ctor_get(v___x_2092_, 1);
lean_inc(v_a_2094_);
v___x_2095_ = 1;
v___x_2096_ = l_Lean_writeModule(v_a_2093_, v___x_2068_, v___x_2095_);
if (lean_obj_tag(v___x_2096_) == 0)
{
lean_object* v___x_2097_; 
lean_dec_ref_known(v___x_2096_, 1);
v___x_2097_ = lean_io_prim_handle_unlock(v_h_2078_);
lean_dec(v_h_2078_);
if (lean_obj_tag(v___x_2097_) == 0)
{
lean_dec_ref_known(v___x_2097_, 1);
lean_dec(v_a_2094_);
return v___x_2092_;
}
else
{
lean_object* v___x_2099_; uint8_t v_isShared_2100_; uint8_t v_isSharedCheck_2110_; 
v_isSharedCheck_2110_ = !lean_is_exclusive(v___x_2092_);
if (v_isSharedCheck_2110_ == 0)
{
lean_object* v_unused_2111_; lean_object* v_unused_2112_; 
v_unused_2111_ = lean_ctor_get(v___x_2092_, 1);
lean_dec(v_unused_2111_);
v_unused_2112_ = lean_ctor_get(v___x_2092_, 0);
lean_dec(v_unused_2112_);
v___x_2099_ = v___x_2092_;
v_isShared_2100_ = v_isSharedCheck_2110_;
goto v_resetjp_2098_;
}
else
{
lean_dec(v___x_2092_);
v___x_2099_ = lean_box(0);
v_isShared_2100_ = v_isSharedCheck_2110_;
goto v_resetjp_2098_;
}
v_resetjp_2098_:
{
lean_object* v_a_2101_; lean_object* v___x_2102_; uint8_t v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2108_; 
v_a_2101_ = lean_ctor_get(v___x_2097_, 0);
lean_inc(v_a_2101_);
lean_dec_ref_known(v___x_2097_, 1);
v___x_2102_ = lean_io_error_to_string(v_a_2101_);
v___x_2103_ = 3;
v___x_2104_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2104_, 0, v___x_2102_);
lean_ctor_set_uint8(v___x_2104_, sizeof(void*)*1, v___x_2103_);
v___x_2105_ = lean_array_get_size(v_a_2094_);
v___x_2106_ = lean_array_push(v_a_2094_, v___x_2104_);
if (v_isShared_2100_ == 0)
{
lean_ctor_set_tag(v___x_2099_, 1);
lean_ctor_set(v___x_2099_, 1, v___x_2106_);
lean_ctor_set(v___x_2099_, 0, v___x_2105_);
v___x_2108_ = v___x_2099_;
goto v_reusejp_2107_;
}
else
{
lean_object* v_reuseFailAlloc_2109_; 
v_reuseFailAlloc_2109_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2109_, 0, v___x_2105_);
lean_ctor_set(v_reuseFailAlloc_2109_, 1, v___x_2106_);
v___x_2108_ = v_reuseFailAlloc_2109_;
goto v_reusejp_2107_;
}
v_reusejp_2107_:
{
return v___x_2108_;
}
}
}
}
else
{
lean_object* v___x_2114_; uint8_t v_isShared_2115_; uint8_t v_isSharedCheck_2125_; 
lean_dec(v_h_2078_);
v_isSharedCheck_2125_ = !lean_is_exclusive(v___x_2092_);
if (v_isSharedCheck_2125_ == 0)
{
lean_object* v_unused_2126_; lean_object* v_unused_2127_; 
v_unused_2126_ = lean_ctor_get(v___x_2092_, 1);
lean_dec(v_unused_2126_);
v_unused_2127_ = lean_ctor_get(v___x_2092_, 0);
lean_dec(v_unused_2127_);
v___x_2114_ = v___x_2092_;
v_isShared_2115_ = v_isSharedCheck_2125_;
goto v_resetjp_2113_;
}
else
{
lean_dec(v___x_2092_);
v___x_2114_ = lean_box(0);
v_isShared_2115_ = v_isSharedCheck_2125_;
goto v_resetjp_2113_;
}
v_resetjp_2113_:
{
lean_object* v_a_2116_; lean_object* v___x_2117_; uint8_t v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2123_; 
v_a_2116_ = lean_ctor_get(v___x_2096_, 0);
lean_inc(v_a_2116_);
lean_dec_ref_known(v___x_2096_, 1);
v___x_2117_ = lean_io_error_to_string(v_a_2116_);
v___x_2118_ = 3;
v___x_2119_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2119_, 0, v___x_2117_);
lean_ctor_set_uint8(v___x_2119_, sizeof(void*)*1, v___x_2118_);
v___x_2120_ = lean_array_get_size(v_a_2094_);
v___x_2121_ = lean_array_push(v_a_2094_, v___x_2119_);
if (v_isShared_2115_ == 0)
{
lean_ctor_set_tag(v___x_2114_, 1);
lean_ctor_set(v___x_2114_, 1, v___x_2121_);
lean_ctor_set(v___x_2114_, 0, v___x_2120_);
v___x_2123_ = v___x_2114_;
goto v_reusejp_2122_;
}
else
{
lean_object* v_reuseFailAlloc_2124_; 
v_reuseFailAlloc_2124_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2124_, 0, v___x_2120_);
lean_ctor_set(v_reuseFailAlloc_2124_, 1, v___x_2121_);
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
lean_dec(v_h_2078_);
lean_dec_ref(v___x_2068_);
return v___x_2092_;
}
}
else
{
lean_object* v_a_2128_; lean_object* v___x_2129_; uint8_t v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; 
lean_dec(v_lakeOpts_2079_);
lean_dec(v_h_2078_);
lean_dec_ref(v___x_2068_);
lean_dec_ref(v_leanOpts_2051_);
lean_dec_ref(v_configFile_2049_);
lean_dec_ref(v_pkgDir_2048_);
lean_dec(v_pkgName_2047_);
lean_dec(v_pkgIdx_2046_);
v_a_2128_ = lean_ctor_get(v___x_2091_, 0);
lean_inc(v_a_2128_);
lean_dec_ref_known(v___x_2091_, 1);
v___x_2129_ = lean_io_error_to_string(v_a_2128_);
v___x_2130_ = 3;
v___x_2131_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2131_, 0, v___x_2129_);
lean_ctor_set_uint8(v___x_2131_, sizeof(void*)*1, v___x_2130_);
v___x_2132_ = lean_array_get_size(v___y_2080_);
v___x_2133_ = lean_array_push(v___y_2080_, v___x_2131_);
v___x_2134_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2134_, 0, v___x_2132_);
lean_ctor_set(v___x_2134_, 1, v___x_2133_);
return v___x_2134_;
}
}
else
{
lean_object* v_a_2135_; lean_object* v___x_2136_; uint8_t v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; 
lean_dec(v_lakeOpts_2079_);
lean_dec(v_h_2078_);
lean_dec_ref(v___x_2068_);
lean_dec_ref(v_leanOpts_2051_);
lean_dec_ref(v_configFile_2049_);
lean_dec_ref(v_pkgDir_2048_);
lean_dec(v_pkgName_2047_);
lean_dec(v_pkgIdx_2046_);
v_a_2135_ = lean_ctor_get(v___x_2090_, 0);
lean_inc(v_a_2135_);
lean_dec_ref_known(v___x_2090_, 1);
v___x_2136_ = lean_io_error_to_string(v_a_2135_);
v___x_2137_ = 3;
v___x_2138_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2138_, 0, v___x_2136_);
lean_ctor_set_uint8(v___x_2138_, sizeof(void*)*1, v___x_2137_);
v___x_2139_ = lean_array_get_size(v___y_2080_);
v___x_2140_ = lean_array_push(v___y_2080_, v___x_2138_);
v___x_2141_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2141_, 0, v___x_2139_);
lean_ctor_set(v___x_2141_, 1, v___x_2140_);
return v___x_2141_;
}
}
else
{
lean_object* v_a_2142_; lean_object* v___x_2143_; uint8_t v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; 
lean_dec(v_lakeOpts_2079_);
lean_dec(v_h_2078_);
lean_dec_ref(v___x_2068_);
lean_dec_ref(v_leanOpts_2051_);
lean_dec_ref(v_configFile_2049_);
lean_dec_ref(v_pkgDir_2048_);
lean_dec(v_pkgName_2047_);
lean_dec(v_pkgIdx_2046_);
v_a_2142_ = lean_ctor_get(v___x_2089_, 0);
lean_inc(v_a_2142_);
lean_dec_ref_known(v___x_2089_, 1);
v___x_2143_ = lean_io_error_to_string(v_a_2142_);
v___x_2144_ = 3;
v___x_2145_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2145_, 0, v___x_2143_);
lean_ctor_set_uint8(v___x_2145_, sizeof(void*)*1, v___x_2144_);
v___x_2146_ = lean_array_get_size(v___y_2080_);
v___x_2147_ = lean_array_push(v___y_2080_, v___x_2145_);
v___x_2148_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2148_, 0, v___x_2146_);
lean_ctor_set(v___x_2148_, 1, v___x_2147_);
return v___x_2148_;
}
}
else
{
lean_object* v_a_2149_; 
v_a_2149_ = lean_ctor_get(v___x_2081_, 0);
lean_inc(v_a_2149_);
lean_dec_ref_known(v___x_2081_, 1);
if (lean_obj_tag(v_a_2149_) == 11)
{
lean_object* v___x_2150_; lean_object* v___x_2151_; lean_object* v___x_2152_; uint64_t v___x_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; 
lean_dec_ref_known(v_a_2149_, 2);
lean_dec_ref(v___x_2071_);
v___x_2150_ = l_System_Platform_target;
v___x_2151_ = l_Lake_Env_leanGithash(v_lakeEnv_2044_);
lean_dec_ref(v_lakeEnv_2044_);
lean_inc(v_lakeOpts_2079_);
lean_inc(v_pkgName_2047_);
lean_inc(v_pkgIdx_2046_);
v___x_2152_ = lean_alloc_ctor(0, 5, 8);
lean_ctor_set(v___x_2152_, 0, v_pkgIdx_2046_);
lean_ctor_set(v___x_2152_, 1, v_pkgName_2047_);
lean_ctor_set(v___x_2152_, 2, v___x_2150_);
lean_ctor_set(v___x_2152_, 3, v___x_2151_);
lean_ctor_set(v___x_2152_, 4, v_lakeOpts_2079_);
v___x_2153_ = lean_unbox_uint64(v_a_2076_);
lean_dec(v_a_2076_);
lean_ctor_set_uint64(v___x_2152_, sizeof(void*)*5, v___x_2153_);
v___x_2154_ = l___private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson(v___x_2152_);
v___x_2155_ = lean_unsigned_to_nat(80u);
v___x_2156_ = l_Lean_Json_pretty(v___x_2154_, v___x_2155_);
v___x_2157_ = l_IO_FS_Handle_putStrLn(v_h_2078_, v___x_2156_);
if (lean_obj_tag(v___x_2157_) == 0)
{
lean_object* v___x_2158_; 
lean_dec_ref_known(v___x_2157_, 1);
v___x_2158_ = lean_io_prim_handle_flush(v_h_2078_);
if (lean_obj_tag(v___x_2158_) == 0)
{
lean_object* v___x_2159_; 
lean_dec_ref_known(v___x_2158_, 1);
v___x_2159_ = lean_io_prim_handle_truncate(v_h_2078_);
if (lean_obj_tag(v___x_2159_) == 0)
{
lean_object* v___x_2160_; 
lean_dec_ref_known(v___x_2159_, 1);
v___x_2160_ = l___private_Lake_Load_Lean_Elab_0__Lake_elabConfigFile(v_pkgIdx_2046_, v_pkgName_2047_, v_pkgDir_2048_, v_lakeOpts_2079_, v_leanOpts_2051_, v_configFile_2049_, v___y_2080_);
if (lean_obj_tag(v___x_2160_) == 0)
{
lean_object* v_a_2161_; lean_object* v_a_2162_; uint8_t v___x_2163_; lean_object* v___x_2164_; 
v_a_2161_ = lean_ctor_get(v___x_2160_, 0);
lean_inc(v_a_2161_);
v_a_2162_ = lean_ctor_get(v___x_2160_, 1);
lean_inc(v_a_2162_);
v___x_2163_ = 1;
v___x_2164_ = l_Lean_writeModule(v_a_2161_, v___x_2068_, v___x_2163_);
if (lean_obj_tag(v___x_2164_) == 0)
{
lean_object* v___x_2165_; 
lean_dec_ref_known(v___x_2164_, 1);
v___x_2165_ = lean_io_prim_handle_unlock(v_h_2078_);
lean_dec(v_h_2078_);
if (lean_obj_tag(v___x_2165_) == 0)
{
lean_dec_ref_known(v___x_2165_, 1);
lean_dec(v_a_2162_);
return v___x_2160_;
}
else
{
lean_object* v___x_2167_; uint8_t v_isShared_2168_; uint8_t v_isSharedCheck_2178_; 
v_isSharedCheck_2178_ = !lean_is_exclusive(v___x_2160_);
if (v_isSharedCheck_2178_ == 0)
{
lean_object* v_unused_2179_; lean_object* v_unused_2180_; 
v_unused_2179_ = lean_ctor_get(v___x_2160_, 1);
lean_dec(v_unused_2179_);
v_unused_2180_ = lean_ctor_get(v___x_2160_, 0);
lean_dec(v_unused_2180_);
v___x_2167_ = v___x_2160_;
v_isShared_2168_ = v_isSharedCheck_2178_;
goto v_resetjp_2166_;
}
else
{
lean_dec(v___x_2160_);
v___x_2167_ = lean_box(0);
v_isShared_2168_ = v_isSharedCheck_2178_;
goto v_resetjp_2166_;
}
v_resetjp_2166_:
{
lean_object* v_a_2169_; lean_object* v___x_2170_; uint8_t v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2176_; 
v_a_2169_ = lean_ctor_get(v___x_2165_, 0);
lean_inc(v_a_2169_);
lean_dec_ref_known(v___x_2165_, 1);
v___x_2170_ = lean_io_error_to_string(v_a_2169_);
v___x_2171_ = 3;
v___x_2172_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2172_, 0, v___x_2170_);
lean_ctor_set_uint8(v___x_2172_, sizeof(void*)*1, v___x_2171_);
v___x_2173_ = lean_array_get_size(v_a_2162_);
v___x_2174_ = lean_array_push(v_a_2162_, v___x_2172_);
if (v_isShared_2168_ == 0)
{
lean_ctor_set_tag(v___x_2167_, 1);
lean_ctor_set(v___x_2167_, 1, v___x_2174_);
lean_ctor_set(v___x_2167_, 0, v___x_2173_);
v___x_2176_ = v___x_2167_;
goto v_reusejp_2175_;
}
else
{
lean_object* v_reuseFailAlloc_2177_; 
v_reuseFailAlloc_2177_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2177_, 0, v___x_2173_);
lean_ctor_set(v_reuseFailAlloc_2177_, 1, v___x_2174_);
v___x_2176_ = v_reuseFailAlloc_2177_;
goto v_reusejp_2175_;
}
v_reusejp_2175_:
{
return v___x_2176_;
}
}
}
}
else
{
lean_object* v___x_2182_; uint8_t v_isShared_2183_; uint8_t v_isSharedCheck_2193_; 
lean_dec(v_h_2078_);
v_isSharedCheck_2193_ = !lean_is_exclusive(v___x_2160_);
if (v_isSharedCheck_2193_ == 0)
{
lean_object* v_unused_2194_; lean_object* v_unused_2195_; 
v_unused_2194_ = lean_ctor_get(v___x_2160_, 1);
lean_dec(v_unused_2194_);
v_unused_2195_ = lean_ctor_get(v___x_2160_, 0);
lean_dec(v_unused_2195_);
v___x_2182_ = v___x_2160_;
v_isShared_2183_ = v_isSharedCheck_2193_;
goto v_resetjp_2181_;
}
else
{
lean_dec(v___x_2160_);
v___x_2182_ = lean_box(0);
v_isShared_2183_ = v_isSharedCheck_2193_;
goto v_resetjp_2181_;
}
v_resetjp_2181_:
{
lean_object* v_a_2184_; lean_object* v___x_2185_; uint8_t v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_2191_; 
v_a_2184_ = lean_ctor_get(v___x_2164_, 0);
lean_inc(v_a_2184_);
lean_dec_ref_known(v___x_2164_, 1);
v___x_2185_ = lean_io_error_to_string(v_a_2184_);
v___x_2186_ = 3;
v___x_2187_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2187_, 0, v___x_2185_);
lean_ctor_set_uint8(v___x_2187_, sizeof(void*)*1, v___x_2186_);
v___x_2188_ = lean_array_get_size(v_a_2162_);
v___x_2189_ = lean_array_push(v_a_2162_, v___x_2187_);
if (v_isShared_2183_ == 0)
{
lean_ctor_set_tag(v___x_2182_, 1);
lean_ctor_set(v___x_2182_, 1, v___x_2189_);
lean_ctor_set(v___x_2182_, 0, v___x_2188_);
v___x_2191_ = v___x_2182_;
goto v_reusejp_2190_;
}
else
{
lean_object* v_reuseFailAlloc_2192_; 
v_reuseFailAlloc_2192_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2192_, 0, v___x_2188_);
lean_ctor_set(v_reuseFailAlloc_2192_, 1, v___x_2189_);
v___x_2191_ = v_reuseFailAlloc_2192_;
goto v_reusejp_2190_;
}
v_reusejp_2190_:
{
return v___x_2191_;
}
}
}
}
else
{
lean_dec(v_h_2078_);
lean_dec_ref(v___x_2068_);
return v___x_2160_;
}
}
else
{
lean_object* v_a_2196_; lean_object* v___x_2197_; uint8_t v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; 
lean_dec(v_lakeOpts_2079_);
lean_dec(v_h_2078_);
lean_dec_ref(v___x_2068_);
lean_dec_ref(v_leanOpts_2051_);
lean_dec_ref(v_configFile_2049_);
lean_dec_ref(v_pkgDir_2048_);
lean_dec(v_pkgName_2047_);
lean_dec(v_pkgIdx_2046_);
v_a_2196_ = lean_ctor_get(v___x_2159_, 0);
lean_inc(v_a_2196_);
lean_dec_ref_known(v___x_2159_, 1);
v___x_2197_ = lean_io_error_to_string(v_a_2196_);
v___x_2198_ = 3;
v___x_2199_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2199_, 0, v___x_2197_);
lean_ctor_set_uint8(v___x_2199_, sizeof(void*)*1, v___x_2198_);
v___x_2200_ = lean_array_get_size(v___y_2080_);
v___x_2201_ = lean_array_push(v___y_2080_, v___x_2199_);
v___x_2202_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2202_, 0, v___x_2200_);
lean_ctor_set(v___x_2202_, 1, v___x_2201_);
return v___x_2202_;
}
}
else
{
lean_object* v_a_2203_; lean_object* v___x_2204_; uint8_t v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; 
lean_dec(v_lakeOpts_2079_);
lean_dec(v_h_2078_);
lean_dec_ref(v___x_2068_);
lean_dec_ref(v_leanOpts_2051_);
lean_dec_ref(v_configFile_2049_);
lean_dec_ref(v_pkgDir_2048_);
lean_dec(v_pkgName_2047_);
lean_dec(v_pkgIdx_2046_);
v_a_2203_ = lean_ctor_get(v___x_2158_, 0);
lean_inc(v_a_2203_);
lean_dec_ref_known(v___x_2158_, 1);
v___x_2204_ = lean_io_error_to_string(v_a_2203_);
v___x_2205_ = 3;
v___x_2206_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2206_, 0, v___x_2204_);
lean_ctor_set_uint8(v___x_2206_, sizeof(void*)*1, v___x_2205_);
v___x_2207_ = lean_array_get_size(v___y_2080_);
v___x_2208_ = lean_array_push(v___y_2080_, v___x_2206_);
v___x_2209_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2209_, 0, v___x_2207_);
lean_ctor_set(v___x_2209_, 1, v___x_2208_);
return v___x_2209_;
}
}
else
{
lean_object* v_a_2210_; lean_object* v___x_2211_; uint8_t v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; 
lean_dec(v_lakeOpts_2079_);
lean_dec(v_h_2078_);
lean_dec_ref(v___x_2068_);
lean_dec_ref(v_leanOpts_2051_);
lean_dec_ref(v_configFile_2049_);
lean_dec_ref(v_pkgDir_2048_);
lean_dec(v_pkgName_2047_);
lean_dec(v_pkgIdx_2046_);
v_a_2210_ = lean_ctor_get(v___x_2157_, 0);
lean_inc(v_a_2210_);
lean_dec_ref_known(v___x_2157_, 1);
v___x_2211_ = lean_io_error_to_string(v_a_2210_);
v___x_2212_ = 3;
v___x_2213_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2213_, 0, v___x_2211_);
lean_ctor_set_uint8(v___x_2213_, sizeof(void*)*1, v___x_2212_);
v___x_2214_ = lean_array_get_size(v___y_2080_);
v___x_2215_ = lean_array_push(v___y_2080_, v___x_2213_);
v___x_2216_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2216_, 0, v___x_2214_);
lean_ctor_set(v___x_2216_, 1, v___x_2215_);
return v___x_2216_;
}
}
else
{
lean_object* v___x_2217_; uint8_t v___x_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; 
lean_dec(v_lakeOpts_2079_);
lean_dec(v_a_2076_);
lean_dec_ref(v___x_2068_);
lean_dec_ref(v_leanOpts_2051_);
lean_dec_ref(v_configFile_2049_);
lean_dec_ref(v_pkgDir_2048_);
lean_dec(v_pkgName_2047_);
lean_dec(v_pkgIdx_2046_);
lean_dec_ref(v_lakeEnv_2044_);
v___x_2217_ = lean_io_error_to_string(v_a_2149_);
v___x_2218_ = 3;
v___x_2219_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2219_, 0, v___x_2217_);
lean_ctor_set_uint8(v___x_2219_, sizeof(void*)*1, v___x_2218_);
v___x_2220_ = lean_array_get_size(v___y_2080_);
v___x_2221_ = lean_array_push(v___y_2080_, v___x_2219_);
v___x_2222_ = lean_io_prim_handle_unlock(v_h_2078_);
lean_dec(v_h_2078_);
if (lean_obj_tag(v___x_2222_) == 0)
{
lean_object* v___x_2223_; 
lean_dec_ref_known(v___x_2222_, 1);
v___x_2223_ = lean_io_remove_file(v___x_2071_);
lean_dec_ref(v___x_2071_);
if (lean_obj_tag(v___x_2223_) == 0)
{
lean_dec_ref_known(v___x_2223_, 1);
v___y_2041_ = v___x_2220_;
v_a_2042_ = v___x_2221_;
goto v___jp_2040_;
}
else
{
lean_object* v_a_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; 
v_a_2224_ = lean_ctor_get(v___x_2223_, 0);
lean_inc(v_a_2224_);
lean_dec_ref_known(v___x_2223_, 1);
v___x_2225_ = lean_io_error_to_string(v_a_2224_);
v___x_2226_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2226_, 0, v___x_2225_);
lean_ctor_set_uint8(v___x_2226_, sizeof(void*)*1, v___x_2218_);
v___x_2227_ = lean_array_push(v___x_2221_, v___x_2226_);
v___y_2041_ = v___x_2220_;
v_a_2042_ = v___x_2227_;
goto v___jp_2040_;
}
}
else
{
lean_object* v_a_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; 
lean_dec_ref(v___x_2071_);
v_a_2228_ = lean_ctor_get(v___x_2222_, 0);
lean_inc(v_a_2228_);
lean_dec_ref_known(v___x_2222_, 1);
v___x_2229_ = lean_io_error_to_string(v_a_2228_);
v___x_2230_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2230_, 0, v___x_2229_);
lean_ctor_set_uint8(v___x_2230_, sizeof(void*)*1, v___x_2218_);
v___x_2231_ = lean_array_push(v___x_2221_, v___x_2230_);
v___y_2041_ = v___x_2220_;
v_a_2042_ = v___x_2231_;
goto v___jp_2040_;
}
}
}
}
v___jp_2232_:
{
lean_object* v___x_2235_; 
v___x_2235_ = l_Lake_importConfigFile___lam__0(v___x_2074_, v___x_2071_, v___y_2234_);
lean_dec(v___y_2234_);
lean_dec_ref(v___x_2074_);
if (lean_obj_tag(v___x_2235_) == 0)
{
lean_object* v_a_2236_; 
v_a_2236_ = lean_ctor_get(v___x_2235_, 0);
lean_inc(v_a_2236_);
lean_dec_ref_known(v___x_2235_, 1);
v_h_2078_ = v_a_2236_;
v_lakeOpts_2079_ = v_lakeOpts_2050_;
v___y_2080_ = v___y_2233_;
goto v___jp_2077_;
}
else
{
lean_object* v_a_2237_; lean_object* v___x_2238_; uint8_t v___x_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; 
lean_dec(v_a_2076_);
lean_dec_ref(v___x_2071_);
lean_dec_ref(v___x_2068_);
lean_dec_ref(v_leanOpts_2051_);
lean_dec(v_lakeOpts_2050_);
lean_dec_ref(v_configFile_2049_);
lean_dec_ref(v_pkgDir_2048_);
lean_dec(v_pkgName_2047_);
lean_dec(v_pkgIdx_2046_);
lean_dec_ref(v_lakeEnv_2044_);
v_a_2237_ = lean_ctor_get(v___x_2235_, 0);
lean_inc(v_a_2237_);
lean_dec_ref_known(v___x_2235_, 1);
v___x_2238_ = lean_io_error_to_string(v_a_2237_);
v___x_2239_ = 3;
v___x_2240_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2240_, 0, v___x_2238_);
lean_ctor_set_uint8(v___x_2240_, sizeof(void*)*1, v___x_2239_);
v___x_2241_ = lean_array_get_size(v___y_2233_);
v___x_2242_ = lean_array_push(v___y_2233_, v___x_2240_);
v___x_2243_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2243_, 0, v___x_2241_);
lean_ctor_set(v___x_2243_, 1, v___x_2242_);
return v___x_2243_;
}
}
v___jp_2244_:
{
lean_object* v___x_2248_; 
v___x_2248_ = l_Lake_importConfigFile___lam__0(v___x_2074_, v___x_2071_, v___y_2247_);
lean_dec(v___y_2247_);
lean_dec_ref(v___x_2074_);
if (lean_obj_tag(v___x_2248_) == 0)
{
lean_object* v_a_2249_; 
v_a_2249_ = lean_ctor_get(v___x_2248_, 0);
lean_inc(v_a_2249_);
lean_dec_ref_known(v___x_2248_, 1);
v_h_2078_ = v_a_2249_;
v_lakeOpts_2079_ = v___y_2246_;
v___y_2080_ = v___y_2245_;
goto v___jp_2077_;
}
else
{
lean_object* v_a_2250_; lean_object* v___x_2251_; uint8_t v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; lean_object* v___x_2255_; lean_object* v___x_2256_; 
lean_dec(v___y_2246_);
lean_dec(v_a_2076_);
lean_dec_ref(v___x_2071_);
lean_dec_ref(v___x_2068_);
lean_dec_ref(v_leanOpts_2051_);
lean_dec_ref(v_configFile_2049_);
lean_dec_ref(v_pkgDir_2048_);
lean_dec(v_pkgName_2047_);
lean_dec(v_pkgIdx_2046_);
lean_dec_ref(v_lakeEnv_2044_);
v_a_2250_ = lean_ctor_get(v___x_2248_, 0);
lean_inc(v_a_2250_);
lean_dec_ref_known(v___x_2248_, 1);
v___x_2251_ = lean_io_error_to_string(v_a_2250_);
v___x_2252_ = 3;
v___x_2253_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2253_, 0, v___x_2251_);
lean_ctor_set_uint8(v___x_2253_, sizeof(void*)*1, v___x_2252_);
v___x_2254_ = lean_array_get_size(v___y_2245_);
v___x_2255_ = lean_array_push(v___y_2245_, v___x_2253_);
v___x_2256_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2256_, 0, v___x_2254_);
lean_ctor_set(v___x_2256_, 1, v___x_2255_);
return v___x_2256_;
}
}
v___jp_2257_:
{
if (v___y_2259_ == 0)
{
v___y_2245_ = v___y_2258_;
v___y_2246_ = v___y_2261_;
v___y_2247_ = v___y_2260_;
goto v___jp_2244_;
}
else
{
if (v___y_2262_ == 0)
{
v___y_2245_ = v___y_2258_;
v___y_2246_ = v___y_2261_;
v___y_2247_ = v___y_2260_;
goto v___jp_2244_;
}
else
{
lean_object* v___x_2263_; 
lean_dec(v___y_2261_);
lean_dec(v_a_2076_);
lean_dec_ref(v___x_2074_);
lean_dec_ref(v___x_2071_);
lean_dec_ref(v_configFile_2049_);
lean_dec_ref(v_pkgDir_2048_);
lean_dec(v_pkgName_2047_);
lean_dec(v_pkgIdx_2046_);
lean_dec_ref(v_lakeEnv_2044_);
v___x_2263_ = l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore(v___x_2068_, v_leanOpts_2051_);
lean_dec_ref(v___x_2068_);
if (lean_obj_tag(v___x_2263_) == 0)
{
lean_object* v_a_2264_; lean_object* v___x_2265_; 
v_a_2264_ = lean_ctor_get(v___x_2263_, 0);
lean_inc(v_a_2264_);
lean_dec_ref_known(v___x_2263_, 1);
v___x_2265_ = lean_io_prim_handle_unlock(v___y_2260_);
lean_dec(v___y_2260_);
if (lean_obj_tag(v___x_2265_) == 0)
{
lean_object* v___x_2266_; 
lean_dec_ref_known(v___x_2265_, 1);
v___x_2266_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2266_, 0, v_a_2264_);
lean_ctor_set(v___x_2266_, 1, v___y_2258_);
return v___x_2266_;
}
else
{
lean_object* v_a_2267_; lean_object* v___x_2268_; uint8_t v___x_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; 
lean_dec(v_a_2264_);
v_a_2267_ = lean_ctor_get(v___x_2265_, 0);
lean_inc(v_a_2267_);
lean_dec_ref_known(v___x_2265_, 1);
v___x_2268_ = lean_io_error_to_string(v_a_2267_);
v___x_2269_ = 3;
v___x_2270_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2270_, 0, v___x_2268_);
lean_ctor_set_uint8(v___x_2270_, sizeof(void*)*1, v___x_2269_);
v___x_2271_ = lean_array_get_size(v___y_2258_);
v___x_2272_ = lean_array_push(v___y_2258_, v___x_2270_);
v___x_2273_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2273_, 0, v___x_2271_);
lean_ctor_set(v___x_2273_, 1, v___x_2272_);
return v___x_2273_;
}
}
else
{
lean_object* v_a_2274_; lean_object* v___x_2275_; uint8_t v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; 
lean_dec(v___y_2260_);
v_a_2274_ = lean_ctor_get(v___x_2263_, 0);
lean_inc(v_a_2274_);
lean_dec_ref_known(v___x_2263_, 1);
v___x_2275_ = lean_io_error_to_string(v_a_2274_);
v___x_2276_ = 3;
v___x_2277_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2277_, 0, v___x_2275_);
lean_ctor_set_uint8(v___x_2277_, sizeof(void*)*1, v___x_2276_);
v___x_2278_ = lean_array_get_size(v___y_2258_);
v___x_2279_ = lean_array_push(v___y_2258_, v___x_2277_);
v___x_2280_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2280_, 0, v___x_2278_);
lean_ctor_set(v___x_2280_, 1, v___x_2279_);
return v___x_2280_;
}
}
}
}
v___jp_2281_:
{
if (v___y_2282_ == 0)
{
v___y_2258_ = v___y_2283_;
v___y_2259_ = v___y_2284_;
v___y_2260_ = v___y_2286_;
v___y_2261_ = v___y_2285_;
v___y_2262_ = v___y_2282_;
goto v___jp_2257_;
}
else
{
v___y_2258_ = v___y_2283_;
v___y_2259_ = v___y_2284_;
v___y_2260_ = v___y_2286_;
v___y_2261_ = v___y_2285_;
v___y_2262_ = v___y_2287_;
goto v___jp_2257_;
}
}
v___jp_2288_:
{
if (v___y_2291_ == 0)
{
v___y_2282_ = v___y_2290_;
v___y_2283_ = v___y_2289_;
v___y_2284_ = v___y_2292_;
v___y_2285_ = v___y_2294_;
v___y_2286_ = v___y_2293_;
v___y_2287_ = v___y_2291_;
goto v___jp_2281_;
}
else
{
v___y_2282_ = v___y_2290_;
v___y_2283_ = v___y_2289_;
v___y_2284_ = v___y_2292_;
v___y_2285_ = v___y_2294_;
v___y_2286_ = v___y_2293_;
v___y_2287_ = v___y_2295_;
goto v___jp_2281_;
}
}
v___jp_2296_:
{
if (v___y_2297_ == 0)
{
v___y_2289_ = v___y_2299_;
v___y_2290_ = v___y_2298_;
v___y_2291_ = v___y_2300_;
v___y_2292_ = v___y_2301_;
v___y_2293_ = v___y_2303_;
v___y_2294_ = v___y_2302_;
v___y_2295_ = v___y_2297_;
goto v___jp_2288_;
}
else
{
v___y_2289_ = v___y_2299_;
v___y_2290_ = v___y_2298_;
v___y_2291_ = v___y_2300_;
v___y_2292_ = v___y_2301_;
v___y_2293_ = v___y_2303_;
v___y_2294_ = v___y_2302_;
v___y_2295_ = v___y_2304_;
goto v___jp_2288_;
}
}
v___jp_2305_:
{
if (v_reconfigure_2052_ == 0)
{
lean_object* v___x_2308_; 
v___x_2308_ = lean_io_prim_handle_lock(v_h_2306_, v_reconfigure_2052_);
if (lean_obj_tag(v___x_2308_) == 0)
{
lean_object* v___x_2309_; 
lean_dec_ref_known(v___x_2308_, 1);
v___x_2309_ = l_IO_FS_Handle_readToEnd(v_h_2306_);
if (lean_obj_tag(v___x_2309_) == 0)
{
lean_object* v_a_2310_; lean_object* v___x_2311_; 
v_a_2310_ = lean_ctor_get(v___x_2309_, 0);
lean_inc(v_a_2310_);
lean_dec_ref_known(v___x_2309_, 1);
v___x_2311_ = l_Lean_Json_parse(v_a_2310_);
if (lean_obj_tag(v___x_2311_) == 0)
{
lean_object* v___x_2312_; 
lean_dec_ref_known(v___x_2311_, 1);
v___x_2312_ = l_Lake_importConfigFile___lam__0(v___x_2074_, v___x_2071_, v_h_2306_);
lean_dec(v_h_2306_);
lean_dec_ref(v___x_2074_);
if (lean_obj_tag(v___x_2312_) == 0)
{
lean_object* v_a_2313_; 
v_a_2313_ = lean_ctor_get(v___x_2312_, 0);
lean_inc(v_a_2313_);
lean_dec_ref_known(v___x_2312_, 1);
v_h_2078_ = v_a_2313_;
v_lakeOpts_2079_ = v_lakeOpts_2050_;
v___y_2080_ = v___y_2307_;
goto v___jp_2077_;
}
else
{
lean_object* v_a_2314_; lean_object* v___x_2315_; uint8_t v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; 
lean_dec(v_a_2076_);
lean_dec_ref(v___x_2071_);
lean_dec_ref(v___x_2068_);
lean_dec_ref(v_leanOpts_2051_);
lean_dec(v_lakeOpts_2050_);
lean_dec_ref(v_configFile_2049_);
lean_dec_ref(v_pkgDir_2048_);
lean_dec(v_pkgName_2047_);
lean_dec(v_pkgIdx_2046_);
lean_dec_ref(v_lakeEnv_2044_);
v_a_2314_ = lean_ctor_get(v___x_2312_, 0);
lean_inc(v_a_2314_);
lean_dec_ref_known(v___x_2312_, 1);
v___x_2315_ = lean_io_error_to_string(v_a_2314_);
v___x_2316_ = 3;
v___x_2317_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2317_, 0, v___x_2315_);
lean_ctor_set_uint8(v___x_2317_, sizeof(void*)*1, v___x_2316_);
v___x_2318_ = lean_array_get_size(v___y_2307_);
v___x_2319_ = lean_array_push(v___y_2307_, v___x_2317_);
v___x_2320_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2320_, 0, v___x_2318_);
lean_ctor_set(v___x_2320_, 1, v___x_2319_);
return v___x_2320_;
}
}
else
{
lean_object* v_a_2321_; lean_object* v___x_2322_; 
v_a_2321_ = lean_ctor_get(v___x_2311_, 0);
lean_inc_n(v_a_2321_, 2);
lean_dec_ref_known(v___x_2311_, 1);
v___x_2322_ = l___private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson(v_a_2321_);
if (lean_obj_tag(v___x_2322_) == 0)
{
lean_object* v___x_2323_; 
lean_dec_ref_known(v___x_2322_, 1);
v___x_2323_ = l_Lean_Json_getObj_x3f(v_a_2321_);
if (lean_obj_tag(v___x_2323_) == 0)
{
lean_dec_ref_known(v___x_2323_, 1);
v___y_2233_ = v___y_2307_;
v___y_2234_ = v_h_2306_;
goto v___jp_2232_;
}
else
{
lean_object* v_a_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; 
v_a_2324_ = lean_ctor_get(v___x_2323_, 0);
lean_inc(v_a_2324_);
lean_dec_ref_known(v___x_2323_, 1);
v___x_2325_ = ((lean_object*)(l___private_Lake_Load_Lean_Elab_0__Lake_instToJsonConfigTrace_toJson___closed__5));
v___x_2326_ = l_Lake_JsonObject_getJson_x3f(v_a_2324_, v___x_2325_);
lean_dec(v_a_2324_);
if (lean_obj_tag(v___x_2326_) == 0)
{
v___y_2233_ = v___y_2307_;
v___y_2234_ = v_h_2306_;
goto v___jp_2232_;
}
else
{
lean_object* v_val_2327_; lean_object* v___x_2328_; 
v_val_2327_ = lean_ctor_get(v___x_2326_, 0);
lean_inc(v_val_2327_);
lean_dec_ref_known(v___x_2326_, 1);
v___x_2328_ = l_Lean_NameMap_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Load_Lean_Elab_0__Lake_instFromJsonConfigTrace_fromJson_spec__4_spec__4(v_val_2327_);
if (lean_obj_tag(v___x_2328_) == 0)
{
lean_dec_ref_known(v___x_2328_, 1);
v___y_2233_ = v___y_2307_;
v___y_2234_ = v_h_2306_;
goto v___jp_2232_;
}
else
{
if (lean_obj_tag(v___x_2328_) == 0)
{
lean_dec_ref_known(v___x_2328_, 1);
v___y_2233_ = v___y_2307_;
v___y_2234_ = v_h_2306_;
goto v___jp_2232_;
}
else
{
lean_object* v_a_2329_; lean_object* v___x_2330_; 
lean_dec(v_lakeOpts_2050_);
v_a_2329_ = lean_ctor_get(v___x_2328_, 0);
lean_inc(v_a_2329_);
lean_dec_ref_known(v___x_2328_, 1);
v___x_2330_ = l_Lake_importConfigFile___lam__0(v___x_2074_, v___x_2071_, v_h_2306_);
lean_dec(v_h_2306_);
lean_dec_ref(v___x_2074_);
if (lean_obj_tag(v___x_2330_) == 0)
{
lean_object* v_a_2331_; 
v_a_2331_ = lean_ctor_get(v___x_2330_, 0);
lean_inc(v_a_2331_);
lean_dec_ref_known(v___x_2330_, 1);
v_h_2078_ = v_a_2331_;
v_lakeOpts_2079_ = v_a_2329_;
v___y_2080_ = v___y_2307_;
goto v___jp_2077_;
}
else
{
lean_object* v_a_2332_; lean_object* v___x_2333_; uint8_t v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; 
lean_dec(v_a_2329_);
lean_dec(v_a_2076_);
lean_dec_ref(v___x_2071_);
lean_dec_ref(v___x_2068_);
lean_dec_ref(v_leanOpts_2051_);
lean_dec_ref(v_configFile_2049_);
lean_dec_ref(v_pkgDir_2048_);
lean_dec(v_pkgName_2047_);
lean_dec(v_pkgIdx_2046_);
lean_dec_ref(v_lakeEnv_2044_);
v_a_2332_ = lean_ctor_get(v___x_2330_, 0);
lean_inc(v_a_2332_);
lean_dec_ref_known(v___x_2330_, 1);
v___x_2333_ = lean_io_error_to_string(v_a_2332_);
v___x_2334_ = 3;
v___x_2335_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2335_, 0, v___x_2333_);
lean_ctor_set_uint8(v___x_2335_, sizeof(void*)*1, v___x_2334_);
v___x_2336_ = lean_array_get_size(v___y_2307_);
v___x_2337_ = lean_array_push(v___y_2307_, v___x_2335_);
v___x_2338_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2338_, 0, v___x_2336_);
lean_ctor_set(v___x_2338_, 1, v___x_2337_);
return v___x_2338_;
}
}
}
}
}
}
else
{
lean_object* v_a_2339_; uint8_t v___x_2340_; lean_object* v_idx_2341_; lean_object* v_name_2342_; lean_object* v_platform_2343_; lean_object* v_leanHash_2344_; uint64_t v_configHash_2345_; lean_object* v_options_2346_; uint8_t v___x_2347_; uint8_t v___x_2348_; uint64_t v___x_2349_; uint8_t v___x_2350_; lean_object* v___x_2351_; uint8_t v___x_2352_; 
lean_dec(v_a_2321_);
lean_dec(v_lakeOpts_2050_);
v_a_2339_ = lean_ctor_get(v___x_2322_, 0);
lean_inc(v_a_2339_);
lean_dec_ref_known(v___x_2322_, 1);
v___x_2340_ = l_System_FilePath_pathExists(v___x_2068_);
v_idx_2341_ = lean_ctor_get(v_a_2339_, 0);
lean_inc(v_idx_2341_);
v_name_2342_ = lean_ctor_get(v_a_2339_, 1);
lean_inc(v_name_2342_);
v_platform_2343_ = lean_ctor_get(v_a_2339_, 2);
lean_inc_ref(v_platform_2343_);
v_leanHash_2344_ = lean_ctor_get(v_a_2339_, 3);
lean_inc_ref(v_leanHash_2344_);
v_configHash_2345_ = lean_ctor_get_uint64(v_a_2339_, sizeof(void*)*5);
v_options_2346_ = lean_ctor_get(v_a_2339_, 4);
lean_inc(v_options_2346_);
lean_dec(v_a_2339_);
v___x_2347_ = lean_nat_dec_eq(v_idx_2341_, v_pkgIdx_2046_);
lean_dec(v_idx_2341_);
v___x_2348_ = lean_name_eq(v_name_2342_, v_pkgName_2047_);
lean_dec(v_name_2342_);
v___x_2349_ = lean_unbox_uint64(v_a_2076_);
v___x_2350_ = lean_uint64_dec_eq(v_configHash_2345_, v___x_2349_);
v___x_2351_ = l_System_Platform_target;
v___x_2352_ = lean_string_dec_eq(v_platform_2343_, v___x_2351_);
lean_dec_ref(v_platform_2343_);
if (v___x_2352_ == 0)
{
lean_dec_ref(v_leanHash_2344_);
v___y_2297_ = v___x_2350_;
v___y_2298_ = v___x_2347_;
v___y_2299_ = v___y_2307_;
v___y_2300_ = v___x_2348_;
v___y_2301_ = v___x_2340_;
v___y_2302_ = v_options_2346_;
v___y_2303_ = v_h_2306_;
v___y_2304_ = v___x_2352_;
goto v___jp_2296_;
}
else
{
lean_object* v___x_2353_; uint8_t v___x_2354_; 
v___x_2353_ = l_Lake_Env_leanGithash(v_lakeEnv_2044_);
v___x_2354_ = lean_string_dec_eq(v_leanHash_2344_, v___x_2353_);
lean_dec_ref(v___x_2353_);
lean_dec_ref(v_leanHash_2344_);
v___y_2297_ = v___x_2350_;
v___y_2298_ = v___x_2347_;
v___y_2299_ = v___y_2307_;
v___y_2300_ = v___x_2348_;
v___y_2301_ = v___x_2340_;
v___y_2302_ = v_options_2346_;
v___y_2303_ = v_h_2306_;
v___y_2304_ = v___x_2354_;
goto v___jp_2296_;
}
}
}
}
else
{
lean_object* v_a_2355_; lean_object* v___x_2356_; uint8_t v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; lean_object* v___x_2361_; 
lean_dec(v_h_2306_);
lean_dec(v_a_2076_);
lean_dec_ref(v___x_2074_);
lean_dec_ref(v___x_2071_);
lean_dec_ref(v___x_2068_);
lean_dec_ref(v_leanOpts_2051_);
lean_dec(v_lakeOpts_2050_);
lean_dec_ref(v_configFile_2049_);
lean_dec_ref(v_pkgDir_2048_);
lean_dec(v_pkgName_2047_);
lean_dec(v_pkgIdx_2046_);
lean_dec_ref(v_lakeEnv_2044_);
v_a_2355_ = lean_ctor_get(v___x_2309_, 0);
lean_inc(v_a_2355_);
lean_dec_ref_known(v___x_2309_, 1);
v___x_2356_ = lean_io_error_to_string(v_a_2355_);
v___x_2357_ = 3;
v___x_2358_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2358_, 0, v___x_2356_);
lean_ctor_set_uint8(v___x_2358_, sizeof(void*)*1, v___x_2357_);
v___x_2359_ = lean_array_get_size(v___y_2307_);
v___x_2360_ = lean_array_push(v___y_2307_, v___x_2358_);
v___x_2361_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2361_, 0, v___x_2359_);
lean_ctor_set(v___x_2361_, 1, v___x_2360_);
return v___x_2361_;
}
}
else
{
lean_object* v_a_2362_; lean_object* v___x_2363_; uint8_t v___x_2364_; lean_object* v___x_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; 
lean_dec(v_h_2306_);
lean_dec(v_a_2076_);
lean_dec_ref(v___x_2074_);
lean_dec_ref(v___x_2071_);
lean_dec_ref(v___x_2068_);
lean_dec_ref(v_leanOpts_2051_);
lean_dec(v_lakeOpts_2050_);
lean_dec_ref(v_configFile_2049_);
lean_dec_ref(v_pkgDir_2048_);
lean_dec(v_pkgName_2047_);
lean_dec(v_pkgIdx_2046_);
lean_dec_ref(v_lakeEnv_2044_);
v_a_2362_ = lean_ctor_get(v___x_2308_, 0);
lean_inc(v_a_2362_);
lean_dec_ref_known(v___x_2308_, 1);
v___x_2363_ = lean_io_error_to_string(v_a_2362_);
v___x_2364_ = 3;
v___x_2365_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2365_, 0, v___x_2363_);
lean_ctor_set_uint8(v___x_2365_, sizeof(void*)*1, v___x_2364_);
v___x_2366_ = lean_array_get_size(v___y_2307_);
v___x_2367_ = lean_array_push(v___y_2307_, v___x_2365_);
v___x_2368_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2368_, 0, v___x_2366_);
lean_ctor_set(v___x_2368_, 1, v___x_2367_);
return v___x_2368_;
}
}
else
{
lean_object* v___x_2369_; 
v___x_2369_ = l_Lake_importConfigFile___lam__0(v___x_2074_, v___x_2071_, v_h_2306_);
lean_dec(v_h_2306_);
lean_dec_ref(v___x_2074_);
if (lean_obj_tag(v___x_2369_) == 0)
{
lean_object* v_a_2370_; 
v_a_2370_ = lean_ctor_get(v___x_2369_, 0);
lean_inc(v_a_2370_);
lean_dec_ref_known(v___x_2369_, 1);
v_h_2078_ = v_a_2370_;
v_lakeOpts_2079_ = v_lakeOpts_2050_;
v___y_2080_ = v___y_2307_;
goto v___jp_2077_;
}
else
{
lean_object* v_a_2371_; lean_object* v___x_2372_; uint8_t v___x_2373_; lean_object* v___x_2374_; lean_object* v___x_2375_; lean_object* v___x_2376_; lean_object* v___x_2377_; 
lean_dec(v_a_2076_);
lean_dec_ref(v___x_2071_);
lean_dec_ref(v___x_2068_);
lean_dec_ref(v_leanOpts_2051_);
lean_dec(v_lakeOpts_2050_);
lean_dec_ref(v_configFile_2049_);
lean_dec_ref(v_pkgDir_2048_);
lean_dec(v_pkgName_2047_);
lean_dec(v_pkgIdx_2046_);
lean_dec_ref(v_lakeEnv_2044_);
v_a_2371_ = lean_ctor_get(v___x_2369_, 0);
lean_inc(v_a_2371_);
lean_dec_ref_known(v___x_2369_, 1);
v___x_2372_ = lean_io_error_to_string(v_a_2371_);
v___x_2373_ = 3;
v___x_2374_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2374_, 0, v___x_2372_);
lean_ctor_set_uint8(v___x_2374_, sizeof(void*)*1, v___x_2373_);
v___x_2375_ = lean_array_get_size(v___y_2307_);
v___x_2376_ = lean_array_push(v___y_2307_, v___x_2374_);
v___x_2377_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2377_, 0, v___x_2375_);
lean_ctor_set(v___x_2377_, 1, v___x_2376_);
return v___x_2377_;
}
}
}
}
else
{
lean_object* v_a_2427_; lean_object* v___x_2428_; uint8_t v___x_2429_; lean_object* v___x_2430_; lean_object* v___x_2431_; lean_object* v___x_2432_; lean_object* v___x_2433_; 
lean_dec_ref(v___x_2074_);
lean_dec_ref(v___x_2071_);
lean_dec_ref(v___x_2068_);
lean_dec_ref(v_leanOpts_2051_);
lean_dec(v_lakeOpts_2050_);
lean_dec_ref(v_configFile_2049_);
lean_dec_ref(v_pkgDir_2048_);
lean_dec(v_pkgName_2047_);
lean_dec(v_pkgIdx_2046_);
lean_dec_ref(v_lakeEnv_2044_);
v_a_2427_ = lean_ctor_get(v___x_2075_, 0);
lean_inc(v_a_2427_);
lean_dec_ref_known(v___x_2075_, 1);
v___x_2428_ = lean_io_error_to_string(v_a_2427_);
v___x_2429_ = 3;
v___x_2430_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2430_, 0, v___x_2428_);
lean_ctor_set_uint8(v___x_2430_, sizeof(void*)*1, v___x_2429_);
v___x_2431_ = lean_array_get_size(v_a_2038_);
v___x_2432_ = lean_array_push(v_a_2038_, v___x_2430_);
v___x_2433_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2433_, 0, v___x_2431_);
lean_ctor_set(v___x_2433_, 1, v___x_2432_);
return v___x_2433_;
}
}
else
{
lean_object* v_a_2434_; lean_object* v___x_2435_; uint8_t v___x_2436_; lean_object* v___x_2437_; lean_object* v___x_2438_; lean_object* v___x_2439_; lean_object* v___x_2440_; 
lean_dec_ref(v_configDir_2064_);
lean_dec(v_val_2058_);
lean_dec_ref(v_leanOpts_2051_);
lean_dec(v_lakeOpts_2050_);
lean_dec_ref(v_configFile_2049_);
lean_dec_ref(v_pkgDir_2048_);
lean_dec(v_pkgName_2047_);
lean_dec(v_pkgIdx_2046_);
lean_dec_ref(v_lakeEnv_2044_);
v_a_2434_ = lean_ctor_get(v___x_2065_, 0);
lean_inc(v_a_2434_);
lean_dec_ref_known(v___x_2065_, 1);
v___x_2435_ = lean_io_error_to_string(v_a_2434_);
v___x_2436_ = 3;
v___x_2437_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2437_, 0, v___x_2435_);
lean_ctor_set_uint8(v___x_2437_, sizeof(void*)*1, v___x_2436_);
v___x_2438_ = lean_array_get_size(v_a_2038_);
v___x_2439_ = lean_array_push(v_a_2038_, v___x_2437_);
v___x_2440_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2440_, 0, v___x_2438_);
lean_ctor_set(v___x_2440_, 1, v___x_2439_);
return v___x_2440_;
}
}
v___jp_2040_:
{
lean_object* v___x_2043_; 
v___x_2043_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2043_, 0, v___y_2041_);
lean_ctor_set(v___x_2043_, 1, v_a_2042_);
return v___x_2043_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_importConfigFile___boxed(lean_object* v_cfg_2441_, lean_object* v_a_2442_, lean_object* v_a_2443_){
_start:
{
lean_object* v_res_2444_; 
v_res_2444_ = l_Lake_importConfigFile(v_cfg_2441_, v_a_2442_);
return v_res_2444_;
}
}
lean_object* runtime_initialize_Lake_Load_Config(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_IR_CompilerM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Frontend(uint8_t builtin);
lean_object* runtime_initialize_Lake_DSL_Extensions(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_JsonObject(uint8_t builtin);
lean_object* runtime_initialize_Init_System_Platform(uint8_t builtin);
lean_object* runtime_initialize_Lake_DSL_AttributesCore(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Load_Lean_Elab(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lake_Load_Config(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_IR_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Frontend(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_DSL_Extensions(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_JsonObject(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_System_Platform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_DSL_AttributesCore(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lake_Load_Lean_Elab_0__Lake_initFn_00___x40_Lake_Load_Lean_Elab_4183325717____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lake_Load_Lean_Elab_0__Lake_importEnvCache = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lake_Load_Lean_Elab_0__Lake_importEnvCache);
lean_dec_ref(res);
l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts = _init_l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts();
lean_mark_persistent(l___private_Lake_Load_Lean_Elab_0__Lake_importConfigFileCore_lakeExts);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Load_Lean_Elab(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Load_Config(uint8_t builtin);
lean_object* initialize_Lean_Compiler_IR_CompilerM(uint8_t builtin);
lean_object* initialize_Lean_Elab_Frontend(uint8_t builtin);
lean_object* initialize_Lake_DSL_Extensions(uint8_t builtin);
lean_object* initialize_Lake_Util_JsonObject(uint8_t builtin);
lean_object* initialize_Init_System_Platform(uint8_t builtin);
lean_object* initialize_Lake_DSL_AttributesCore(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Load_Lean_Elab(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Load_Config(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_IR_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Frontend(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_DSL_Extensions(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_JsonObject(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_System_Platform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_DSL_AttributesCore(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Load_Lean_Elab(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Load_Lean_Elab(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Load_Lean_Elab(builtin);
}
#ifdef __cplusplus
}
#endif

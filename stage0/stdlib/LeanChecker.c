// Lean compiler output
// Module: LeanChecker
// Imports: public import Init public meta import Init public import Lean.CoreM public import Lean.Replay public import Lake.Load.Manifest public import LeanExport.Parse
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
uint8_t l_Lean_instOrdOLeanLevel_ord(uint8_t, uint8_t);
lean_object* l_List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_IO_println___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__3(lean_object*);
lean_object* lean_io_prim_handle_mk(lean_object*, uint8_t);
lean_object* lean_stream_of_handle(lean_object*);
lean_object* l_LeanExport_parseStream(lean_object*);
lean_object* l_Lean_mkEmptyEnvironment(uint32_t);
lean_object* lean_elab_environment_to_kernel_env(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Kernel_Environment_replay(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Std_DTreeMap_Internal_Impl___aux__Std__Data__DTreeMap__Internal__Lemmas______macroRules__Std__DTreeMap__Internal__Impl__tacticSimp__to__model_x5b___x5dUsing____1_spec__1___redArg(lean_object*, lean_object*);
lean_object* lean_environment_find(lean_object*, lean_object*);
uint8_t l_Lean_instBEqConstantInfo_beq(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* l_Lake_Manifest_load_x3f(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Name_capitalize(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_task_get_own(lean_object*);
lean_object* l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_findOLean(lean_object*);
uint8_t l_System_FilePath_pathExists(lean_object*);
extern lean_object* l_Lean_instInhabitedImportState_default;
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_importModulesCore(lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_finalizeImport(lean_object*, lean_object*, lean_object*, uint32_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lean_environment_free_regions(lean_object*);
lean_object* l_Lean_readModuleDataParts(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_OLeanLevel_adjustFileName(lean_object*, uint8_t);
lean_object* l_Lean_Environment_constants(lean_object*);
lean_object* l_Lean_withImportModules___redArg(lean_object*, lean_object*, lean_object*, uint32_t);
lean_object* lean_io_as_task(lean_object*, lean_object*);
extern lean_object* l_Lean_searchPathRef;
lean_object* l_Lean_SearchPath_findAllWithExt(lean_object*, lean_object*);
lean_object* l_Lean_searchModuleNameOfFileName(lean_object*, lean_object*);
uint8_t l_List_elem___at___00__private_Lean_Class_0__Lean_initFn_00___x40_Lean_Class_1274053790____hygCtx___hyg_2__spec__1(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_List_toString___at___00Lean_Environment_AddConstAsyncResult_commitConst_spec__1(lean_object*);
lean_object* l_Lean_findSysroot(lean_object*);
lean_object* l_Lean_initSearchPath(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_String_toName(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_elem___at___00Lean_isAutoDeclOrPrivate__Internal_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_println(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_println___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00replayFromImports_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00replayFromImports_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_replayFromImports___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_replayFromImports___closed__0;
static lean_once_cell_t l_replayFromImports___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_replayFromImports___closed__1;
static const lean_string_object l_replayFromImports___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "failed to read module data"};
static const lean_object* l_replayFromImports___closed__2 = (const lean_object*)&l_replayFromImports___closed__2_value;
static const lean_ctor_object l_replayFromImports___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_replayFromImports___closed__2_value)}};
static const lean_object* l_replayFromImports___closed__3 = (const lean_object*)&l_replayFromImports___closed__3_value;
static const lean_string_object l_replayFromImports___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "object file '"};
static const lean_object* l_replayFromImports___closed__4 = (const lean_object*)&l_replayFromImports___closed__4_value;
static const lean_string_object l_replayFromImports___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "' of module "};
static const lean_object* l_replayFromImports___closed__5 = (const lean_object*)&l_replayFromImports___closed__5_value;
static const lean_string_object l_replayFromImports___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " does not exist"};
static const lean_object* l_replayFromImports___closed__6 = (const lean_object*)&l_replayFromImports___closed__6_value;
LEAN_EXPORT lean_object* l_replayFromImports(lean_object*);
LEAN_EXPORT lean_object* l_replayFromImports___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_replayFromFresh___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_replayFromFresh___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_replayFromFresh___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_replayFromFresh___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_replayFromFresh___closed__0 = (const lean_object*)&l_replayFromFresh___closed__0_value;
LEAN_EXPORT lean_object* l_replayFromFresh(lean_object*);
LEAN_EXPORT lean_object* l_replayFromFresh___boxed(lean_object*, lean_object*);
static const lean_string_object l_getCurrentModule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "lake-manifest.json"};
static const lean_object* l_getCurrentModule___closed__0 = (const lean_object*)&l_getCurrentModule___closed__0_value;
static lean_once_cell_t l_getCurrentModule___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_getCurrentModule___closed__1;
LEAN_EXPORT lean_object* l_getCurrentModule();
LEAN_EXPORT lean_object* l_getCurrentModule___boxed(lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00checkExport_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Quotient constant mismatch on: "};
static const lean_object* l_List_forIn_x27_loop___at___00checkExport_spec__1___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00checkExport_spec__1___redArg___closed__0_value;
static const lean_string_object l_List_forIn_x27_loop___at___00checkExport_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "Could not find quotient constant in final kernel env: "};
static const lean_object* l_List_forIn_x27_loop___at___00checkExport_spec__1___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00checkExport_spec__1___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkExport_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkExport_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00checkExport_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00checkExport_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_checkExport___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Exactly one export file expected but got: "};
static const lean_object* l_checkExport___closed__0 = (const lean_object*)&l_checkExport___closed__0_value;
static const lean_string_object l_checkExport___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Lean default kernel rejects the solution: "};
static const lean_object* l_checkExport___closed__1 = (const lean_object*)&l_checkExport___closed__1_value;
static const lean_string_object l_checkExport___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Quot"};
static const lean_object* l_checkExport___closed__2 = (const lean_object*)&l_checkExport___closed__2_value;
static const lean_string_object l_checkExport___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l_checkExport___closed__3 = (const lean_object*)&l_checkExport___closed__3_value;
static const lean_ctor_object l_checkExport___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_checkExport___closed__2_value),LEAN_SCALAR_PTR_LITERAL(91, 127, 250, 116, 111, 99, 160, 200)}};
static const lean_ctor_object l_checkExport___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_checkExport___closed__4_value_aux_0),((lean_object*)&l_checkExport___closed__3_value),LEAN_SCALAR_PTR_LITERAL(255, 113, 137, 82, 82, 132, 58, 248)}};
static const lean_object* l_checkExport___closed__4 = (const lean_object*)&l_checkExport___closed__4_value;
static const lean_string_object l_checkExport___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lift"};
static const lean_object* l_checkExport___closed__5 = (const lean_object*)&l_checkExport___closed__5_value;
static const lean_ctor_object l_checkExport___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_checkExport___closed__2_value),LEAN_SCALAR_PTR_LITERAL(91, 127, 250, 116, 111, 99, 160, 200)}};
static const lean_ctor_object l_checkExport___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_checkExport___closed__6_value_aux_0),((lean_object*)&l_checkExport___closed__5_value),LEAN_SCALAR_PTR_LITERAL(91, 125, 38, 34, 222, 200, 201, 80)}};
static const lean_object* l_checkExport___closed__6 = (const lean_object*)&l_checkExport___closed__6_value;
static const lean_string_object l_checkExport___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ind"};
static const lean_object* l_checkExport___closed__7 = (const lean_object*)&l_checkExport___closed__7_value;
static const lean_ctor_object l_checkExport___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_checkExport___closed__2_value),LEAN_SCALAR_PTR_LITERAL(91, 127, 250, 116, 111, 99, 160, 200)}};
static const lean_ctor_object l_checkExport___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_checkExport___closed__8_value_aux_0),((lean_object*)&l_checkExport___closed__7_value),LEAN_SCALAR_PTR_LITERAL(150, 213, 121, 152, 109, 27, 137, 60)}};
static const lean_object* l_checkExport___closed__8 = (const lean_object*)&l_checkExport___closed__8_value;
static const lean_ctor_object l_checkExport___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_checkExport___closed__8_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_checkExport___closed__9 = (const lean_object*)&l_checkExport___closed__9_value;
static const lean_ctor_object l_checkExport___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_checkExport___closed__6_value),((lean_object*)&l_checkExport___closed__9_value)}};
static const lean_object* l_checkExport___closed__10 = (const lean_object*)&l_checkExport___closed__10_value;
static const lean_ctor_object l_checkExport___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_checkExport___closed__4_value),((lean_object*)&l_checkExport___closed__10_value)}};
static const lean_object* l_checkExport___closed__11 = (const lean_object*)&l_checkExport___closed__11_value;
static const lean_string_object l_checkExport___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Lean default kernel accepts the solution"};
static const lean_object* l_checkExport___closed__12 = (const lean_object*)&l_checkExport___closed__12_value;
static const lean_ctor_object l_checkExport___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_checkExport___closed__2_value),LEAN_SCALAR_PTR_LITERAL(91, 127, 250, 116, 111, 99, 160, 200)}};
static const lean_object* l_checkExport___closed__13 = (const lean_object*)&l_checkExport___closed__13_value;
static const lean_ctor_object l_checkExport___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_checkExport___closed__13_value),((lean_object*)&l_checkExport___closed__11_value)}};
static const lean_object* l_checkExport___closed__14 = (const lean_object*)&l_checkExport___closed__14_value;
static const lean_string_object l_checkExport___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Quotient post-check rejects the solution: "};
static const lean_object* l_checkExport___closed__15 = (const lean_object*)&l_checkExport___closed__15_value;
LEAN_EXPORT lean_object* l_checkExport___boxed__const__1;
LEAN_EXPORT lean_object* l_checkExport___boxed__const__2;
LEAN_EXPORT lean_object* l_checkExport(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_checkExport___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkExport_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkExport_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00checkOlean_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "leanchecker found a problem in "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00checkOlean_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00checkOlean_spec__3___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00checkOlean_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "replaying "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00checkOlean_spec__3___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00checkOlean_spec__3___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00checkOlean_spec__3(uint8_t, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00checkOlean_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__2___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_mapM_loop___at___00checkOlean_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Could not resolve module: "};
static const lean_object* l_List_mapM_loop___at___00checkOlean_spec__5___closed__0 = (const lean_object*)&l_List_mapM_loop___at___00checkOlean_spec__5___closed__0_value;
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00checkOlean_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00checkOlean_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00checkOlean_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00checkOlean_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00checkOlean_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "olean"};
static const lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__1___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00checkOlean_spec__1___redArg___closed__0_value;
static const lean_string_object l_List_forIn_x27_loop___at___00checkOlean_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Could not find any oleans for: "};
static const lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__1___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00checkOlean_spec__1___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00checkOlean_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = " with --fresh"};
static const lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__4___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00checkOlean_spec__4___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__4___redArg(uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_checkOlean___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_checkOlean___closed__0 = (const lean_object*)&l_checkOlean___closed__0_value;
static const lean_string_object l_checkOlean___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 60, .m_data = "--fresh flag is only valid when specifying a single module:\n"};
static const lean_object* l_checkOlean___closed__1 = (const lean_object*)&l_checkOlean___closed__1_value;
static const lean_string_object l_checkOlean___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_checkOlean___closed__2 = (const lean_object*)&l_checkOlean___closed__2_value;
LEAN_EXPORT lean_object* l_checkOlean(lean_object*, uint8_t, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_checkOlean___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__4(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_partition_loop___at___00main_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* l_List_partition_loop___at___00main_spec__0___closed__0 = (const lean_object*)&l_List_partition_loop___at___00main_spec__0___closed__0_value;
static lean_once_cell_t l_List_partition_loop___at___00main_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_partition_loop___at___00main_spec__0___closed__1;
LEAN_EXPORT lean_object* l_List_partition_loop___at___00main_spec__0(lean_object*, lean_object*);
static const lean_ctor_object l_main___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_main___closed__0 = (const lean_object*)&l_main___closed__0_value;
static const lean_string_object l_main___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "--fresh"};
static const lean_object* l_main___closed__1 = (const lean_object*)&l_main___closed__1_value;
static const lean_string_object l_main___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "--silent"};
static const lean_object* l_main___closed__2 = (const lean_object*)&l_main___closed__2_value;
static const lean_string_object l_main___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "--from-export"};
static const lean_object* l_main___closed__3 = (const lean_object*)&l_main___closed__3_value;
static const lean_string_object l_main___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-v"};
static const lean_object* l_main___closed__4 = (const lean_object*)&l_main___closed__4_value;
static const lean_string_object l_main___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "--verbose"};
static const lean_object* l_main___closed__5 = (const lean_object*)&l_main___closed__5_value;
LEAN_EXPORT lean_object* _lean_main(lean_object*);
LEAN_EXPORT lean_object* l_main___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_println(lean_object* v_msg_1_, uint8_t v_silent_2_){
_start:
{
if (v_silent_2_ == 0)
{
lean_object* v___x_4_; 
v___x_4_ = l_IO_println___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__3(v_msg_1_);
return v___x_4_;
}
else
{
lean_object* v___x_5_; lean_object* v___x_6_; 
lean_dec_ref(v_msg_1_);
v___x_5_ = lean_box(0);
v___x_6_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
return v___x_6_;
}
}
}
LEAN_EXPORT lean_object* l_println___boxed(lean_object* v_msg_7_, lean_object* v_silent_8_, lean_object* v_a_9_){
_start:
{
uint8_t v_silent_boxed_10_; lean_object* v_res_11_; 
v_silent_boxed_10_ = lean_unbox(v_silent_8_);
v_res_11_ = l_println(v_msg_7_, v_silent_boxed_10_);
return v_res_11_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00replayFromImports_spec__0(lean_object* v_as_12_, size_t v_sz_13_, size_t v_i_14_, lean_object* v_b_15_){
_start:
{
uint8_t v___x_17_; 
v___x_17_ = lean_usize_dec_lt(v_i_14_, v_sz_13_);
if (v___x_17_ == 0)
{
lean_object* v___x_18_; 
v___x_18_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_18_, 0, v_b_15_);
return v___x_18_;
}
else
{
lean_object* v_snd_19_; lean_object* v_fst_20_; lean_object* v___x_22_; uint8_t v_isShared_23_; uint8_t v_isSharedCheck_53_; 
v_snd_19_ = lean_ctor_get(v_b_15_, 1);
v_fst_20_ = lean_ctor_get(v_b_15_, 0);
v_isSharedCheck_53_ = !lean_is_exclusive(v_b_15_);
if (v_isSharedCheck_53_ == 0)
{
v___x_22_ = v_b_15_;
v_isShared_23_ = v_isSharedCheck_53_;
goto v_resetjp_21_;
}
else
{
lean_inc(v_snd_19_);
lean_inc(v_fst_20_);
lean_dec(v_b_15_);
v___x_22_ = lean_box(0);
v_isShared_23_ = v_isSharedCheck_53_;
goto v_resetjp_21_;
}
v_resetjp_21_:
{
lean_object* v_array_24_; lean_object* v_start_25_; lean_object* v_stop_26_; uint8_t v___x_27_; 
v_array_24_ = lean_ctor_get(v_snd_19_, 0);
v_start_25_ = lean_ctor_get(v_snd_19_, 1);
v_stop_26_ = lean_ctor_get(v_snd_19_, 2);
v___x_27_ = lean_nat_dec_lt(v_start_25_, v_stop_26_);
if (v___x_27_ == 0)
{
lean_object* v___x_29_; 
if (v_isShared_23_ == 0)
{
v___x_29_ = v___x_22_;
goto v_reusejp_28_;
}
else
{
lean_object* v_reuseFailAlloc_31_; 
v_reuseFailAlloc_31_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_31_, 0, v_fst_20_);
lean_ctor_set(v_reuseFailAlloc_31_, 1, v_snd_19_);
v___x_29_ = v_reuseFailAlloc_31_;
goto v_reusejp_28_;
}
v_reusejp_28_:
{
lean_object* v___x_30_; 
v___x_30_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_30_, 0, v___x_29_);
return v___x_30_;
}
}
else
{
lean_object* v___x_33_; uint8_t v_isShared_34_; uint8_t v_isSharedCheck_49_; 
lean_inc(v_stop_26_);
lean_inc(v_start_25_);
lean_inc_ref(v_array_24_);
v_isSharedCheck_49_ = !lean_is_exclusive(v_snd_19_);
if (v_isSharedCheck_49_ == 0)
{
lean_object* v_unused_50_; lean_object* v_unused_51_; lean_object* v_unused_52_; 
v_unused_50_ = lean_ctor_get(v_snd_19_, 2);
lean_dec(v_unused_50_);
v_unused_51_ = lean_ctor_get(v_snd_19_, 1);
lean_dec(v_unused_51_);
v_unused_52_ = lean_ctor_get(v_snd_19_, 0);
lean_dec(v_unused_52_);
v___x_33_ = v_snd_19_;
v_isShared_34_ = v_isSharedCheck_49_;
goto v_resetjp_32_;
}
else
{
lean_dec(v_snd_19_);
v___x_33_ = lean_box(0);
v_isShared_34_ = v_isSharedCheck_49_;
goto v_resetjp_32_;
}
v_resetjp_32_:
{
lean_object* v_a_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_40_; 
v_a_35_ = lean_array_uget_borrowed(v_as_12_, v_i_14_);
v___x_36_ = lean_array_fget(v_array_24_, v_start_25_);
v___x_37_ = lean_unsigned_to_nat(1u);
v___x_38_ = lean_nat_add(v_start_25_, v___x_37_);
lean_dec(v_start_25_);
if (v_isShared_34_ == 0)
{
lean_ctor_set(v___x_33_, 1, v___x_38_);
v___x_40_ = v___x_33_;
goto v_reusejp_39_;
}
else
{
lean_object* v_reuseFailAlloc_48_; 
v_reuseFailAlloc_48_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_48_, 0, v_array_24_);
lean_ctor_set(v_reuseFailAlloc_48_, 1, v___x_38_);
lean_ctor_set(v_reuseFailAlloc_48_, 2, v_stop_26_);
v___x_40_ = v_reuseFailAlloc_48_;
goto v_reusejp_39_;
}
v_reusejp_39_:
{
lean_object* v___x_41_; lean_object* v___x_43_; 
lean_inc(v_a_35_);
v___x_41_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1___redArg(v_fst_20_, v_a_35_, v___x_36_);
if (v_isShared_23_ == 0)
{
lean_ctor_set(v___x_22_, 1, v___x_40_);
lean_ctor_set(v___x_22_, 0, v___x_41_);
v___x_43_ = v___x_22_;
goto v_reusejp_42_;
}
else
{
lean_object* v_reuseFailAlloc_47_; 
v_reuseFailAlloc_47_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_47_, 0, v___x_41_);
lean_ctor_set(v_reuseFailAlloc_47_, 1, v___x_40_);
v___x_43_ = v_reuseFailAlloc_47_;
goto v_reusejp_42_;
}
v_reusejp_42_:
{
size_t v___x_44_; size_t v___x_45_; 
v___x_44_ = ((size_t)1ULL);
v___x_45_ = lean_usize_add(v_i_14_, v___x_44_);
v_i_14_ = v___x_45_;
v_b_15_ = v___x_43_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00replayFromImports_spec__0___boxed(lean_object* v_as_54_, lean_object* v_sz_55_, lean_object* v_i_56_, lean_object* v_b_57_, lean_object* v___y_58_){
_start:
{
size_t v_sz_boxed_59_; size_t v_i_boxed_60_; lean_object* v_res_61_; 
v_sz_boxed_59_ = lean_unbox_usize(v_sz_55_);
lean_dec(v_sz_55_);
v_i_boxed_60_ = lean_unbox_usize(v_i_56_);
lean_dec(v_i_56_);
v_res_61_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00replayFromImports_spec__0(v_as_54_, v_sz_boxed_59_, v_i_boxed_60_, v_b_57_);
lean_dec_ref(v_as_54_);
return v_res_61_;
}
}
static lean_object* _init_l_replayFromImports___closed__0(void){
_start:
{
lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; 
v___x_62_ = lean_box(0);
v___x_63_ = lean_unsigned_to_nat(16u);
v___x_64_ = lean_mk_array(v___x_63_, v___x_62_);
return v___x_64_;
}
}
static uint8_t _init_l_replayFromImports___closed__1(void){
_start:
{
uint8_t v___x_65_; uint8_t v___x_66_; 
v___x_65_ = 2;
v___x_66_ = l_Lean_instOrdOLeanLevel_ord(v___x_65_, v___x_65_);
return v___x_66_;
}
}
LEAN_EXPORT lean_object* l_replayFromImports(lean_object* v_module_73_){
_start:
{
lean_object* v___x_75_; 
lean_inc(v_module_73_);
v___x_75_ = l_Lean_findOLean(v_module_73_);
if (lean_obj_tag(v___x_75_) == 0)
{
lean_object* v_a_76_; lean_object* v___x_78_; uint8_t v_isShared_79_; uint8_t v_isSharedCheck_201_; 
v_a_76_ = lean_ctor_get(v___x_75_, 0);
v_isSharedCheck_201_ = !lean_is_exclusive(v___x_75_);
if (v_isSharedCheck_201_ == 0)
{
v___x_78_ = v___x_75_;
v_isShared_79_ = v_isSharedCheck_201_;
goto v_resetjp_77_;
}
else
{
lean_inc(v_a_76_);
lean_dec(v___x_75_);
v___x_78_ = lean_box(0);
v_isShared_79_ = v_isSharedCheck_201_;
goto v_resetjp_77_;
}
v_resetjp_77_:
{
uint8_t v___x_80_; lean_object* v___y_82_; uint8_t v___y_83_; lean_object* v___y_84_; lean_object* v___y_85_; lean_object* v___y_86_; lean_object* v___y_87_; uint8_t v___y_88_; uint8_t v___y_89_; lean_object* v_fnames_149_; 
v___x_80_ = l_System_FilePath_pathExists(v_a_76_);
if (v___x_80_ == 0)
{
lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; uint8_t v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_188_; 
v___x_177_ = ((lean_object*)(l_replayFromImports___closed__4));
v___x_178_ = lean_string_append(v___x_177_, v_a_76_);
lean_dec(v_a_76_);
v___x_179_ = ((lean_object*)(l_replayFromImports___closed__5));
v___x_180_ = lean_string_append(v___x_178_, v___x_179_);
v___x_181_ = 1;
v___x_182_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_module_73_, v___x_181_);
v___x_183_ = lean_string_append(v___x_180_, v___x_182_);
lean_dec_ref(v___x_182_);
v___x_184_ = ((lean_object*)(l_replayFromImports___closed__6));
v___x_185_ = lean_string_append(v___x_183_, v___x_184_);
v___x_186_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_186_, 0, v___x_185_);
if (v_isShared_79_ == 0)
{
lean_ctor_set_tag(v___x_78_, 1);
lean_ctor_set(v___x_78_, 0, v___x_186_);
v___x_188_ = v___x_78_;
goto v_reusejp_187_;
}
else
{
lean_object* v_reuseFailAlloc_189_; 
v_reuseFailAlloc_189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_189_, 0, v___x_186_);
v___x_188_ = v_reuseFailAlloc_189_;
goto v_reusejp_187_;
}
v_reusejp_187_:
{
return v___x_188_;
}
}
else
{
lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; uint8_t v___x_193_; lean_object* v___x_194_; uint8_t v___x_195_; 
lean_del_object(v___x_78_);
lean_dec(v_module_73_);
v___x_190_ = lean_unsigned_to_nat(1u);
v___x_191_ = lean_mk_empty_array_with_capacity(v___x_190_);
lean_inc_n(v_a_76_, 2);
v___x_192_ = lean_array_push(v___x_191_, v_a_76_);
v___x_193_ = 1;
v___x_194_ = l_Lean_OLeanLevel_adjustFileName(v_a_76_, v___x_193_);
v___x_195_ = l_System_FilePath_pathExists(v___x_194_);
if (v___x_195_ == 0)
{
lean_dec_ref(v___x_194_);
lean_dec(v_a_76_);
v_fnames_149_ = v___x_192_;
goto v___jp_148_;
}
else
{
lean_object* v___x_196_; uint8_t v___x_197_; lean_object* v___x_198_; uint8_t v___x_199_; 
v___x_196_ = lean_array_push(v___x_192_, v___x_194_);
v___x_197_ = 2;
v___x_198_ = l_Lean_OLeanLevel_adjustFileName(v_a_76_, v___x_197_);
v___x_199_ = l_System_FilePath_pathExists(v___x_198_);
if (v___x_199_ == 0)
{
lean_dec_ref(v___x_198_);
v_fnames_149_ = v___x_196_;
goto v___jp_148_;
}
else
{
lean_object* v___x_200_; 
v___x_200_ = lean_array_push(v___x_196_, v___x_198_);
v_fnames_149_ = v___x_200_;
goto v___jp_148_;
}
}
}
v___jp_81_:
{
lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; 
v___x_90_ = l_Lean_instInhabitedImportState_default;
v___x_91_ = lean_st_mk_ref(v___x_90_);
lean_inc(v___y_85_);
v___x_92_ = l_Lean_importModulesCore(v___y_86_, v___y_88_, v___y_85_, v___y_89_, v___y_83_, v___x_91_);
if (lean_obj_tag(v___x_92_) == 0)
{
lean_object* v___x_93_; lean_object* v___x_94_; uint32_t v___x_95_; lean_object* v___x_96_; 
lean_dec_ref_known(v___x_92_, 1);
v___x_93_ = lean_st_ref_get(v___x_91_);
lean_dec(v___x_91_);
v___x_94_ = l_Lean_Options_empty;
v___x_95_ = 0;
v___x_96_ = l_Lean_finalizeImport(v___x_93_, v___y_86_, v___x_94_, v___x_95_, v___y_83_, v___y_83_, v___y_88_, v___x_80_, v___y_83_);
lean_dec(v___x_93_);
if (lean_obj_tag(v___x_96_) == 0)
{
lean_object* v_a_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v_fst_101_; lean_object* v___x_103_; uint8_t v_isShared_104_; uint8_t v_isSharedCheck_138_; 
v_a_97_ = lean_ctor_get(v___x_96_, 0);
lean_inc(v_a_97_);
lean_dec_ref_known(v___x_96_, 1);
v___x_98_ = lean_unsigned_to_nat(1u);
v___x_99_ = lean_nat_sub(v___y_82_, v___x_98_);
lean_dec(v___y_82_);
v___x_100_ = lean_array_fget(v___y_87_, v___x_99_);
lean_dec(v___x_99_);
lean_dec_ref(v___y_87_);
v_fst_101_ = lean_ctor_get(v___x_100_, 0);
v_isSharedCheck_138_ = !lean_is_exclusive(v___x_100_);
if (v_isSharedCheck_138_ == 0)
{
lean_object* v_unused_139_; 
v_unused_139_ = lean_ctor_get(v___x_100_, 1);
lean_dec(v_unused_139_);
v___x_103_ = v___x_100_;
v_isShared_104_ = v_isSharedCheck_138_;
goto v_resetjp_102_;
}
else
{
lean_inc(v_fst_101_);
lean_dec(v___x_100_);
v___x_103_ = lean_box(0);
v_isShared_104_ = v_isSharedCheck_138_;
goto v_resetjp_102_;
}
v_resetjp_102_:
{
lean_object* v_constNames_105_; lean_object* v_constants_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_112_; 
v_constNames_105_ = lean_ctor_get(v_fst_101_, 1);
lean_inc_ref(v_constNames_105_);
v_constants_106_ = lean_ctor_get(v_fst_101_, 2);
lean_inc_ref(v_constants_106_);
lean_dec(v_fst_101_);
v___x_107_ = lean_obj_once(&l_replayFromImports___closed__0, &l_replayFromImports___closed__0_once, _init_l_replayFromImports___closed__0);
lean_inc(v___y_84_);
v___x_108_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_108_, 0, v___y_84_);
lean_ctor_set(v___x_108_, 1, v___x_107_);
v___x_109_ = lean_array_get_size(v_constants_106_);
v___x_110_ = l_Array_toSubarray___redArg(v_constants_106_, v___y_84_, v___x_109_);
if (v_isShared_104_ == 0)
{
lean_ctor_set(v___x_103_, 1, v___x_110_);
lean_ctor_set(v___x_103_, 0, v___x_108_);
v___x_112_ = v___x_103_;
goto v_reusejp_111_;
}
else
{
lean_object* v_reuseFailAlloc_137_; 
v_reuseFailAlloc_137_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_137_, 0, v___x_108_);
lean_ctor_set(v_reuseFailAlloc_137_, 1, v___x_110_);
v___x_112_ = v_reuseFailAlloc_137_;
goto v_reusejp_111_;
}
v_reusejp_111_:
{
size_t v_sz_113_; size_t v___x_114_; lean_object* v___x_115_; 
v_sz_113_ = lean_array_size(v_constNames_105_);
v___x_114_ = ((size_t)0ULL);
v___x_115_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00replayFromImports_spec__0(v_constNames_105_, v_sz_113_, v___x_114_, v___x_112_);
lean_dec_ref(v_constNames_105_);
if (lean_obj_tag(v___x_115_) == 0)
{
lean_object* v_a_116_; lean_object* v_fst_117_; lean_object* v___x_118_; lean_object* v___x_119_; 
v_a_116_ = lean_ctor_get(v___x_115_, 0);
lean_inc(v_a_116_);
lean_dec_ref_known(v___x_115_, 1);
v_fst_117_ = lean_ctor_get(v_a_116_, 0);
lean_inc(v_fst_117_);
lean_dec(v_a_116_);
lean_inc(v_a_97_);
v___x_118_ = lean_elab_environment_to_kernel_env(v_a_97_);
v___x_119_ = l_Lean_Kernel_Environment_replay(v_fst_117_, v___x_118_);
lean_dec(v_fst_117_);
if (lean_obj_tag(v___x_119_) == 0)
{
lean_object* v___x_120_; 
lean_dec_ref_known(v___x_119_, 1);
v___x_120_ = lean_environment_free_regions(v_a_97_);
return v___x_120_;
}
else
{
lean_object* v_a_121_; lean_object* v___x_123_; uint8_t v_isShared_124_; uint8_t v_isSharedCheck_128_; 
lean_dec(v_a_97_);
v_a_121_ = lean_ctor_get(v___x_119_, 0);
v_isSharedCheck_128_ = !lean_is_exclusive(v___x_119_);
if (v_isSharedCheck_128_ == 0)
{
v___x_123_ = v___x_119_;
v_isShared_124_ = v_isSharedCheck_128_;
goto v_resetjp_122_;
}
else
{
lean_inc(v_a_121_);
lean_dec(v___x_119_);
v___x_123_ = lean_box(0);
v_isShared_124_ = v_isSharedCheck_128_;
goto v_resetjp_122_;
}
v_resetjp_122_:
{
lean_object* v___x_126_; 
if (v_isShared_124_ == 0)
{
v___x_126_ = v___x_123_;
goto v_reusejp_125_;
}
else
{
lean_object* v_reuseFailAlloc_127_; 
v_reuseFailAlloc_127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_127_, 0, v_a_121_);
v___x_126_ = v_reuseFailAlloc_127_;
goto v_reusejp_125_;
}
v_reusejp_125_:
{
return v___x_126_;
}
}
}
}
else
{
lean_object* v_a_129_; lean_object* v___x_131_; uint8_t v_isShared_132_; uint8_t v_isSharedCheck_136_; 
lean_dec(v_a_97_);
v_a_129_ = lean_ctor_get(v___x_115_, 0);
v_isSharedCheck_136_ = !lean_is_exclusive(v___x_115_);
if (v_isSharedCheck_136_ == 0)
{
v___x_131_ = v___x_115_;
v_isShared_132_ = v_isSharedCheck_136_;
goto v_resetjp_130_;
}
else
{
lean_inc(v_a_129_);
lean_dec(v___x_115_);
v___x_131_ = lean_box(0);
v_isShared_132_ = v_isSharedCheck_136_;
goto v_resetjp_130_;
}
v_resetjp_130_:
{
lean_object* v___x_134_; 
if (v_isShared_132_ == 0)
{
v___x_134_ = v___x_131_;
goto v_reusejp_133_;
}
else
{
lean_object* v_reuseFailAlloc_135_; 
v_reuseFailAlloc_135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_135_, 0, v_a_129_);
v___x_134_ = v_reuseFailAlloc_135_;
goto v_reusejp_133_;
}
v_reusejp_133_:
{
return v___x_134_;
}
}
}
}
}
}
else
{
lean_object* v_a_140_; lean_object* v___x_142_; uint8_t v_isShared_143_; uint8_t v_isSharedCheck_147_; 
lean_dec_ref(v___y_87_);
lean_dec(v___y_84_);
lean_dec(v___y_82_);
v_a_140_ = lean_ctor_get(v___x_96_, 0);
v_isSharedCheck_147_ = !lean_is_exclusive(v___x_96_);
if (v_isSharedCheck_147_ == 0)
{
v___x_142_ = v___x_96_;
v_isShared_143_ = v_isSharedCheck_147_;
goto v_resetjp_141_;
}
else
{
lean_inc(v_a_140_);
lean_dec(v___x_96_);
v___x_142_ = lean_box(0);
v_isShared_143_ = v_isSharedCheck_147_;
goto v_resetjp_141_;
}
v_resetjp_141_:
{
lean_object* v___x_145_; 
if (v_isShared_143_ == 0)
{
v___x_145_ = v___x_142_;
goto v_reusejp_144_;
}
else
{
lean_object* v_reuseFailAlloc_146_; 
v_reuseFailAlloc_146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_146_, 0, v_a_140_);
v___x_145_ = v_reuseFailAlloc_146_;
goto v_reusejp_144_;
}
v_reusejp_144_:
{
return v___x_145_;
}
}
}
}
else
{
lean_dec(v___x_91_);
lean_dec_ref(v___y_87_);
lean_dec_ref(v___y_86_);
lean_dec(v___y_84_);
lean_dec(v___y_82_);
return v___x_92_;
}
}
v___jp_148_:
{
lean_object* v___x_150_; 
v___x_150_ = l_Lean_readModuleDataParts(v_fnames_149_);
lean_dec_ref(v_fnames_149_);
if (lean_obj_tag(v___x_150_) == 0)
{
lean_object* v_a_151_; lean_object* v___x_153_; uint8_t v_isShared_154_; uint8_t v_isSharedCheck_168_; 
v_a_151_ = lean_ctor_get(v___x_150_, 0);
v_isSharedCheck_168_ = !lean_is_exclusive(v___x_150_);
if (v_isSharedCheck_168_ == 0)
{
v___x_153_ = v___x_150_;
v_isShared_154_ = v_isSharedCheck_168_;
goto v_resetjp_152_;
}
else
{
lean_inc(v_a_151_);
lean_dec(v___x_150_);
v___x_153_ = lean_box(0);
v_isShared_154_ = v_isSharedCheck_168_;
goto v_resetjp_152_;
}
v_resetjp_152_:
{
lean_object* v___x_155_; lean_object* v___x_156_; uint8_t v___x_157_; 
v___x_155_ = lean_array_get_size(v_a_151_);
v___x_156_ = lean_unsigned_to_nat(0u);
v___x_157_ = lean_nat_dec_eq(v___x_155_, v___x_156_);
if (v___x_157_ == 0)
{
lean_object* v___x_158_; lean_object* v_fst_159_; lean_object* v_imports_160_; uint8_t v___x_161_; lean_object* v___x_162_; uint8_t v___x_163_; 
lean_del_object(v___x_153_);
v___x_158_ = lean_array_fget_borrowed(v_a_151_, v___x_156_);
v_fst_159_ = lean_ctor_get(v___x_158_, 0);
v_imports_160_ = lean_ctor_get(v_fst_159_, 0);
lean_inc_ref(v_imports_160_);
v___x_161_ = 2;
v___x_162_ = lean_box(1);
v___x_163_ = lean_uint8_once(&l_replayFromImports___closed__1, &l_replayFromImports___closed__1_once, _init_l_replayFromImports___closed__1);
if (v___x_163_ == 0)
{
v___y_82_ = v___x_155_;
v___y_83_ = v___x_157_;
v___y_84_ = v___x_156_;
v___y_85_ = v___x_162_;
v___y_86_ = v_imports_160_;
v___y_87_ = v_a_151_;
v___y_88_ = v___x_161_;
v___y_89_ = v___x_80_;
goto v___jp_81_;
}
else
{
v___y_82_ = v___x_155_;
v___y_83_ = v___x_157_;
v___y_84_ = v___x_156_;
v___y_85_ = v___x_162_;
v___y_86_ = v_imports_160_;
v___y_87_ = v_a_151_;
v___y_88_ = v___x_161_;
v___y_89_ = v___x_157_;
goto v___jp_81_;
}
}
else
{
lean_object* v___x_164_; lean_object* v___x_166_; 
lean_dec(v_a_151_);
v___x_164_ = ((lean_object*)(l_replayFromImports___closed__3));
if (v_isShared_154_ == 0)
{
lean_ctor_set_tag(v___x_153_, 1);
lean_ctor_set(v___x_153_, 0, v___x_164_);
v___x_166_ = v___x_153_;
goto v_reusejp_165_;
}
else
{
lean_object* v_reuseFailAlloc_167_; 
v_reuseFailAlloc_167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_167_, 0, v___x_164_);
v___x_166_ = v_reuseFailAlloc_167_;
goto v_reusejp_165_;
}
v_reusejp_165_:
{
return v___x_166_;
}
}
}
}
else
{
lean_object* v_a_169_; lean_object* v___x_171_; uint8_t v_isShared_172_; uint8_t v_isSharedCheck_176_; 
v_a_169_ = lean_ctor_get(v___x_150_, 0);
v_isSharedCheck_176_ = !lean_is_exclusive(v___x_150_);
if (v_isSharedCheck_176_ == 0)
{
v___x_171_ = v___x_150_;
v_isShared_172_ = v_isSharedCheck_176_;
goto v_resetjp_170_;
}
else
{
lean_inc(v_a_169_);
lean_dec(v___x_150_);
v___x_171_ = lean_box(0);
v_isShared_172_ = v_isSharedCheck_176_;
goto v_resetjp_170_;
}
v_resetjp_170_:
{
lean_object* v___x_174_; 
if (v_isShared_172_ == 0)
{
v___x_174_ = v___x_171_;
goto v_reusejp_173_;
}
else
{
lean_object* v_reuseFailAlloc_175_; 
v_reuseFailAlloc_175_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_175_, 0, v_a_169_);
v___x_174_ = v_reuseFailAlloc_175_;
goto v_reusejp_173_;
}
v_reusejp_173_:
{
return v___x_174_;
}
}
}
}
}
}
else
{
lean_object* v_a_202_; lean_object* v___x_204_; uint8_t v_isShared_205_; uint8_t v_isSharedCheck_209_; 
lean_dec(v_module_73_);
v_a_202_ = lean_ctor_get(v___x_75_, 0);
v_isSharedCheck_209_ = !lean_is_exclusive(v___x_75_);
if (v_isSharedCheck_209_ == 0)
{
v___x_204_ = v___x_75_;
v_isShared_205_ = v_isSharedCheck_209_;
goto v_resetjp_203_;
}
else
{
lean_inc(v_a_202_);
lean_dec(v___x_75_);
v___x_204_ = lean_box(0);
v_isShared_205_ = v_isSharedCheck_209_;
goto v_resetjp_203_;
}
v_resetjp_203_:
{
lean_object* v___x_207_; 
if (v_isShared_205_ == 0)
{
v___x_207_ = v___x_204_;
goto v_reusejp_206_;
}
else
{
lean_object* v_reuseFailAlloc_208_; 
v_reuseFailAlloc_208_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_208_, 0, v_a_202_);
v___x_207_ = v_reuseFailAlloc_208_;
goto v_reusejp_206_;
}
v_reusejp_206_:
{
return v___x_207_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_replayFromImports___boxed(lean_object* v_module_210_, lean_object* v_a_211_){
_start:
{
lean_object* v_res_212_; 
v_res_212_ = l_replayFromImports(v_module_210_);
return v_res_212_;
}
}
LEAN_EXPORT lean_object* l_replayFromFresh___lam__0(lean_object* v_env_213_){
_start:
{
uint32_t v___x_215_; lean_object* v___x_216_; 
v___x_215_ = 0;
v___x_216_ = l_Lean_mkEmptyEnvironment(v___x_215_);
if (lean_obj_tag(v___x_216_) == 0)
{
lean_object* v_a_217_; lean_object* v___x_218_; lean_object* v_map_u2081_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; 
v_a_217_ = lean_ctor_get(v___x_216_, 0);
lean_inc(v_a_217_);
lean_dec_ref_known(v___x_216_, 1);
v___x_218_ = l_Lean_Environment_constants(v_env_213_);
v_map_u2081_219_ = lean_ctor_get(v___x_218_, 0);
lean_inc_ref(v_map_u2081_219_);
lean_dec_ref(v___x_218_);
v___x_220_ = lean_elab_environment_to_kernel_env(v_a_217_);
v___x_221_ = lean_box(0);
v___x_222_ = l_Lean_Kernel_Environment_replay(v_map_u2081_219_, v___x_220_);
lean_dec_ref(v_map_u2081_219_);
if (lean_obj_tag(v___x_222_) == 0)
{
lean_object* v___x_224_; uint8_t v_isShared_225_; uint8_t v_isSharedCheck_229_; 
v_isSharedCheck_229_ = !lean_is_exclusive(v___x_222_);
if (v_isSharedCheck_229_ == 0)
{
lean_object* v_unused_230_; 
v_unused_230_ = lean_ctor_get(v___x_222_, 0);
lean_dec(v_unused_230_);
v___x_224_ = v___x_222_;
v_isShared_225_ = v_isSharedCheck_229_;
goto v_resetjp_223_;
}
else
{
lean_dec(v___x_222_);
v___x_224_ = lean_box(0);
v_isShared_225_ = v_isSharedCheck_229_;
goto v_resetjp_223_;
}
v_resetjp_223_:
{
lean_object* v___x_227_; 
if (v_isShared_225_ == 0)
{
lean_ctor_set(v___x_224_, 0, v___x_221_);
v___x_227_ = v___x_224_;
goto v_reusejp_226_;
}
else
{
lean_object* v_reuseFailAlloc_228_; 
v_reuseFailAlloc_228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_228_, 0, v___x_221_);
v___x_227_ = v_reuseFailAlloc_228_;
goto v_reusejp_226_;
}
v_reusejp_226_:
{
return v___x_227_;
}
}
}
else
{
lean_object* v_a_231_; lean_object* v___x_233_; uint8_t v_isShared_234_; uint8_t v_isSharedCheck_238_; 
v_a_231_ = lean_ctor_get(v___x_222_, 0);
v_isSharedCheck_238_ = !lean_is_exclusive(v___x_222_);
if (v_isSharedCheck_238_ == 0)
{
v___x_233_ = v___x_222_;
v_isShared_234_ = v_isSharedCheck_238_;
goto v_resetjp_232_;
}
else
{
lean_inc(v_a_231_);
lean_dec(v___x_222_);
v___x_233_ = lean_box(0);
v_isShared_234_ = v_isSharedCheck_238_;
goto v_resetjp_232_;
}
v_resetjp_232_:
{
lean_object* v___x_236_; 
if (v_isShared_234_ == 0)
{
v___x_236_ = v___x_233_;
goto v_reusejp_235_;
}
else
{
lean_object* v_reuseFailAlloc_237_; 
v_reuseFailAlloc_237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_237_, 0, v_a_231_);
v___x_236_ = v_reuseFailAlloc_237_;
goto v_reusejp_235_;
}
v_reusejp_235_:
{
return v___x_236_;
}
}
}
}
else
{
lean_object* v_a_239_; lean_object* v___x_241_; uint8_t v_isShared_242_; uint8_t v_isSharedCheck_246_; 
lean_dec_ref(v_env_213_);
v_a_239_ = lean_ctor_get(v___x_216_, 0);
v_isSharedCheck_246_ = !lean_is_exclusive(v___x_216_);
if (v_isSharedCheck_246_ == 0)
{
v___x_241_ = v___x_216_;
v_isShared_242_ = v_isSharedCheck_246_;
goto v_resetjp_240_;
}
else
{
lean_inc(v_a_239_);
lean_dec(v___x_216_);
v___x_241_ = lean_box(0);
v_isShared_242_ = v_isSharedCheck_246_;
goto v_resetjp_240_;
}
v_resetjp_240_:
{
lean_object* v___x_244_; 
if (v_isShared_242_ == 0)
{
v___x_244_ = v___x_241_;
goto v_reusejp_243_;
}
else
{
lean_object* v_reuseFailAlloc_245_; 
v_reuseFailAlloc_245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_245_, 0, v_a_239_);
v___x_244_ = v_reuseFailAlloc_245_;
goto v_reusejp_243_;
}
v_reusejp_243_:
{
return v___x_244_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_replayFromFresh___lam__0___boxed(lean_object* v_env_247_, lean_object* v___y_248_){
_start:
{
lean_object* v_res_249_; 
v_res_249_ = l_replayFromFresh___lam__0(v_env_247_);
return v_res_249_;
}
}
LEAN_EXPORT lean_object* l_replayFromFresh(lean_object* v_module_251_){
_start:
{
lean_object* v___f_253_; uint8_t v___x_254_; uint8_t v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; uint32_t v___x_261_; lean_object* v___x_262_; 
v___f_253_ = ((lean_object*)(l_replayFromFresh___closed__0));
v___x_254_ = 0;
v___x_255_ = 1;
v___x_256_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v___x_256_, 0, v_module_251_);
lean_ctor_set_uint8(v___x_256_, sizeof(void*)*1, v___x_254_);
lean_ctor_set_uint8(v___x_256_, sizeof(void*)*1 + 1, v___x_255_);
lean_ctor_set_uint8(v___x_256_, sizeof(void*)*1 + 2, v___x_254_);
v___x_257_ = lean_unsigned_to_nat(1u);
v___x_258_ = lean_mk_empty_array_with_capacity(v___x_257_);
v___x_259_ = lean_array_push(v___x_258_, v___x_256_);
v___x_260_ = l_Lean_Options_empty;
v___x_261_ = 0;
v___x_262_ = l_Lean_withImportModules___redArg(v___x_259_, v___x_260_, v___f_253_, v___x_261_);
return v___x_262_;
}
}
LEAN_EXPORT lean_object* l_replayFromFresh___boxed(lean_object* v_module_263_, lean_object* v_a_264_){
_start:
{
lean_object* v_res_265_; 
v_res_265_ = l_replayFromFresh(v_module_263_);
return v_res_265_;
}
}
static lean_object* _init_l_getCurrentModule___closed__1(void){
_start:
{
lean_object* v___x_267_; lean_object* v___x_268_; 
v___x_267_ = lean_box(0);
v___x_268_ = l_unsafeCast___redArg(v___x_267_);
return v___x_268_;
}
}
LEAN_EXPORT lean_object* l_getCurrentModule(){
_start:
{
lean_object* v___x_270_; lean_object* v___x_271_; 
v___x_270_ = ((lean_object*)(l_getCurrentModule___closed__0));
v___x_271_ = l_Lake_Manifest_load_x3f(v___x_270_);
if (lean_obj_tag(v___x_271_) == 0)
{
lean_object* v_a_272_; lean_object* v___x_274_; uint8_t v_isShared_275_; uint8_t v_isSharedCheck_286_; 
v_a_272_ = lean_ctor_get(v___x_271_, 0);
v_isSharedCheck_286_ = !lean_is_exclusive(v___x_271_);
if (v_isSharedCheck_286_ == 0)
{
v___x_274_ = v___x_271_;
v_isShared_275_ = v_isSharedCheck_286_;
goto v_resetjp_273_;
}
else
{
lean_inc(v_a_272_);
lean_dec(v___x_271_);
v___x_274_ = lean_box(0);
v_isShared_275_ = v_isSharedCheck_286_;
goto v_resetjp_273_;
}
v_resetjp_273_:
{
if (lean_obj_tag(v_a_272_) == 0)
{
lean_object* v___x_276_; lean_object* v___x_278_; 
v___x_276_ = lean_obj_once(&l_getCurrentModule___closed__1, &l_getCurrentModule___closed__1_once, _init_l_getCurrentModule___closed__1);
if (v_isShared_275_ == 0)
{
lean_ctor_set(v___x_274_, 0, v___x_276_);
v___x_278_ = v___x_274_;
goto v_reusejp_277_;
}
else
{
lean_object* v_reuseFailAlloc_279_; 
v_reuseFailAlloc_279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_279_, 0, v___x_276_);
v___x_278_ = v_reuseFailAlloc_279_;
goto v_reusejp_277_;
}
v_reusejp_277_:
{
return v___x_278_;
}
}
else
{
lean_object* v_val_280_; lean_object* v_name_281_; lean_object* v___x_282_; lean_object* v___x_284_; 
v_val_280_ = lean_ctor_get(v_a_272_, 0);
lean_inc(v_val_280_);
lean_dec_ref_known(v_a_272_, 1);
v_name_281_ = lean_ctor_get(v_val_280_, 0);
lean_inc(v_name_281_);
lean_dec(v_val_280_);
v___x_282_ = l_Lean_Name_capitalize(v_name_281_);
if (v_isShared_275_ == 0)
{
lean_ctor_set(v___x_274_, 0, v___x_282_);
v___x_284_ = v___x_274_;
goto v_reusejp_283_;
}
else
{
lean_object* v_reuseFailAlloc_285_; 
v_reuseFailAlloc_285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_285_, 0, v___x_282_);
v___x_284_ = v_reuseFailAlloc_285_;
goto v_reusejp_283_;
}
v_reusejp_283_:
{
return v___x_284_;
}
}
}
}
else
{
lean_object* v_a_287_; lean_object* v___x_289_; uint8_t v_isShared_290_; uint8_t v_isSharedCheck_294_; 
v_a_287_ = lean_ctor_get(v___x_271_, 0);
v_isSharedCheck_294_ = !lean_is_exclusive(v___x_271_);
if (v_isSharedCheck_294_ == 0)
{
v___x_289_ = v___x_271_;
v_isShared_290_ = v_isSharedCheck_294_;
goto v_resetjp_288_;
}
else
{
lean_inc(v_a_287_);
lean_dec(v___x_271_);
v___x_289_ = lean_box(0);
v_isShared_290_ = v_isSharedCheck_294_;
goto v_resetjp_288_;
}
v_resetjp_288_:
{
lean_object* v___x_292_; 
if (v_isShared_290_ == 0)
{
v___x_292_ = v___x_289_;
goto v_reusejp_291_;
}
else
{
lean_object* v_reuseFailAlloc_293_; 
v_reuseFailAlloc_293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_293_, 0, v_a_287_);
v___x_292_ = v_reuseFailAlloc_293_;
goto v_reusejp_291_;
}
v_reusejp_291_:
{
return v___x_292_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_getCurrentModule___boxed(lean_object* v_a_295_){
_start:
{
lean_object* v_res_296_; 
v_res_296_ = l_getCurrentModule();
return v_res_296_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkExport_spec__1___redArg(lean_object* v___x_299_, lean_object* v_a_300_, lean_object* v_as_x27_301_, lean_object* v_b_302_){
_start:
{
if (lean_obj_tag(v_as_x27_301_) == 0)
{
lean_object* v___x_304_; 
lean_dec_ref(v_a_300_);
v___x_304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_304_, 0, v_b_302_);
return v___x_304_;
}
else
{
lean_object* v_head_305_; lean_object* v_tail_306_; lean_object* v___x_307_; lean_object* v___x_308_; 
v_head_305_ = lean_ctor_get(v_as_x27_301_, 0);
v_tail_306_ = lean_ctor_get(v_as_x27_301_, 1);
v___x_307_ = lean_box(0);
v___x_308_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Std_DTreeMap_Internal_Impl___aux__Std__Data__DTreeMap__Internal__Lemmas______macroRules__Std__DTreeMap__Internal__Impl__tacticSimp__to__model_x5b___x5dUsing____1_spec__1___redArg(v___x_299_, v_head_305_);
if (lean_obj_tag(v___x_308_) == 1)
{
lean_object* v_val_309_; lean_object* v___x_311_; uint8_t v_isShared_312_; uint8_t v_isSharedCheck_339_; 
v_val_309_ = lean_ctor_get(v___x_308_, 0);
v_isSharedCheck_339_ = !lean_is_exclusive(v___x_308_);
if (v_isSharedCheck_339_ == 0)
{
v___x_311_ = v___x_308_;
v_isShared_312_ = v_isSharedCheck_339_;
goto v_resetjp_310_;
}
else
{
lean_inc(v_val_309_);
lean_dec(v___x_308_);
v___x_311_ = lean_box(0);
v_isShared_312_ = v_isSharedCheck_339_;
goto v_resetjp_310_;
}
v_resetjp_310_:
{
lean_object* v___x_313_; 
lean_inc(v_head_305_);
lean_inc_ref(v_a_300_);
v___x_313_ = lean_environment_find(v_a_300_, v_head_305_);
if (lean_obj_tag(v___x_313_) == 1)
{
lean_object* v_val_314_; lean_object* v___x_316_; uint8_t v_isShared_317_; uint8_t v_isSharedCheck_330_; 
v_val_314_ = lean_ctor_get(v___x_313_, 0);
v_isSharedCheck_330_ = !lean_is_exclusive(v___x_313_);
if (v_isSharedCheck_330_ == 0)
{
v___x_316_ = v___x_313_;
v_isShared_317_ = v_isSharedCheck_330_;
goto v_resetjp_315_;
}
else
{
lean_inc(v_val_314_);
lean_dec(v___x_313_);
v___x_316_ = lean_box(0);
v_isShared_317_ = v_isSharedCheck_330_;
goto v_resetjp_315_;
}
v_resetjp_315_:
{
uint8_t v___x_318_; 
v___x_318_ = l_Lean_instBEqConstantInfo_beq(v_val_309_, v_val_314_);
lean_dec(v_val_314_);
lean_dec(v_val_309_);
if (v___x_318_ == 0)
{
uint8_t v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_324_; 
lean_dec_ref(v_a_300_);
v___x_319_ = 1;
v___x_320_ = ((lean_object*)(l_List_forIn_x27_loop___at___00checkExport_spec__1___redArg___closed__0));
lean_inc(v_head_305_);
v___x_321_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_head_305_, v___x_319_);
v___x_322_ = lean_string_append(v___x_320_, v___x_321_);
lean_dec_ref(v___x_321_);
if (v_isShared_317_ == 0)
{
lean_ctor_set_tag(v___x_316_, 18);
lean_ctor_set(v___x_316_, 0, v___x_322_);
v___x_324_ = v___x_316_;
goto v_reusejp_323_;
}
else
{
lean_object* v_reuseFailAlloc_328_; 
v_reuseFailAlloc_328_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_328_, 0, v___x_322_);
v___x_324_ = v_reuseFailAlloc_328_;
goto v_reusejp_323_;
}
v_reusejp_323_:
{
lean_object* v___x_326_; 
if (v_isShared_312_ == 0)
{
lean_ctor_set(v___x_311_, 0, v___x_324_);
v___x_326_ = v___x_311_;
goto v_reusejp_325_;
}
else
{
lean_object* v_reuseFailAlloc_327_; 
v_reuseFailAlloc_327_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_327_, 0, v___x_324_);
v___x_326_ = v_reuseFailAlloc_327_;
goto v_reusejp_325_;
}
v_reusejp_325_:
{
return v___x_326_;
}
}
}
else
{
lean_del_object(v___x_316_);
lean_del_object(v___x_311_);
v_as_x27_301_ = v_tail_306_;
v_b_302_ = v___x_307_;
goto _start;
}
}
}
else
{
lean_object* v___x_331_; uint8_t v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_336_; 
lean_dec(v___x_313_);
lean_dec(v_val_309_);
lean_dec_ref(v_a_300_);
v___x_331_ = ((lean_object*)(l_List_forIn_x27_loop___at___00checkExport_spec__1___redArg___closed__1));
v___x_332_ = 1;
lean_inc(v_head_305_);
v___x_333_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_head_305_, v___x_332_);
v___x_334_ = lean_string_append(v___x_331_, v___x_333_);
lean_dec_ref(v___x_333_);
if (v_isShared_312_ == 0)
{
lean_ctor_set_tag(v___x_311_, 18);
lean_ctor_set(v___x_311_, 0, v___x_334_);
v___x_336_ = v___x_311_;
goto v_reusejp_335_;
}
else
{
lean_object* v_reuseFailAlloc_338_; 
v_reuseFailAlloc_338_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_338_, 0, v___x_334_);
v___x_336_ = v_reuseFailAlloc_338_;
goto v_reusejp_335_;
}
v_reusejp_335_:
{
lean_object* v___x_337_; 
v___x_337_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_337_, 0, v___x_336_);
return v___x_337_;
}
}
}
}
else
{
lean_dec(v___x_308_);
v_as_x27_301_ = v_tail_306_;
v_b_302_ = v___x_307_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkExport_spec__1___redArg___boxed(lean_object* v___x_341_, lean_object* v_a_342_, lean_object* v_as_x27_343_, lean_object* v_b_344_, lean_object* v___y_345_){
_start:
{
lean_object* v_res_346_; 
v_res_346_ = l_List_forIn_x27_loop___at___00checkExport_spec__1___redArg(v___x_341_, v_a_342_, v_as_x27_343_, v_b_344_);
lean_dec(v_as_x27_343_);
lean_dec_ref(v___x_341_);
return v_res_346_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00checkExport_spec__0(lean_object* v_x_347_, lean_object* v_x_348_){
_start:
{
if (lean_obj_tag(v_x_348_) == 0)
{
return v_x_347_;
}
else
{
lean_object* v_head_349_; lean_object* v_tail_350_; lean_object* v___x_351_; 
v_head_349_ = lean_ctor_get(v_x_348_, 0);
v_tail_350_ = lean_ctor_get(v_x_348_, 1);
v___x_351_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1___redArg(v_x_347_, v_head_349_);
v_x_347_ = v___x_351_;
v_x_348_ = v_tail_350_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00checkExport_spec__0___boxed(lean_object* v_x_353_, lean_object* v_x_354_){
_start:
{
lean_object* v_res_355_; 
v_res_355_ = l_List_foldl___at___00checkExport_spec__0(v_x_353_, v_x_354_);
lean_dec(v_x_354_);
return v_res_355_;
}
}
static lean_object* _init_l_checkExport___boxed__const__1(void){
_start:
{
uint32_t v___x_387_; lean_object* v___x_388_; 
v___x_387_ = 1;
v___x_388_ = lean_box_uint32(v___x_387_);
return v___x_388_;
}
}
static lean_object* _init_l_checkExport___boxed__const__2(void){
_start:
{
uint32_t v___x_389_; lean_object* v___x_390_; 
v___x_389_ = 0;
v___x_390_ = lean_box_uint32(v___x_389_);
return v___x_390_;
}
}
LEAN_EXPORT lean_object* l_checkExport(lean_object* v_args_391_, uint8_t v_silent_392_){
_start:
{
lean_object* v_a_401_; 
if (lean_obj_tag(v_args_391_) == 1)
{
lean_object* v_tail_423_; 
v_tail_423_ = lean_ctor_get(v_args_391_, 1);
if (lean_obj_tag(v_tail_423_) == 0)
{
lean_object* v_head_424_; uint8_t v___x_425_; lean_object* v___x_426_; 
v_head_424_ = lean_ctor_get(v_args_391_, 0);
v___x_425_ = 0;
v___x_426_ = lean_io_prim_handle_mk(v_head_424_, v___x_425_);
if (lean_obj_tag(v___x_426_) == 0)
{
lean_object* v_a_427_; lean_object* v___x_428_; lean_object* v___x_429_; 
v_a_427_ = lean_ctor_get(v___x_426_, 0);
lean_inc(v_a_427_);
lean_dec_ref_known(v___x_426_, 1);
v___x_428_ = lean_stream_of_handle(v_a_427_);
v___x_429_ = l_LeanExport_parseStream(v___x_428_);
if (lean_obj_tag(v___x_429_) == 0)
{
lean_object* v_a_430_; uint32_t v___x_431_; lean_object* v___x_432_; 
v_a_430_ = lean_ctor_get(v___x_429_, 0);
lean_inc(v_a_430_);
lean_dec_ref_known(v___x_429_, 1);
v___x_431_ = 0;
v___x_432_ = l_Lean_mkEmptyEnvironment(v___x_431_);
if (lean_obj_tag(v___x_432_) == 0)
{
lean_object* v_a_433_; lean_object* v_constMap_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; 
v_a_433_ = lean_ctor_get(v___x_432_, 0);
lean_inc(v_a_433_);
lean_dec_ref_known(v___x_432_, 1);
v_constMap_434_ = lean_ctor_get(v_a_430_, 0);
lean_inc_ref_n(v_constMap_434_, 2);
lean_dec(v_a_430_);
v___x_435_ = lean_elab_environment_to_kernel_env(v_a_433_);
v___x_436_ = ((lean_object*)(l_checkExport___closed__11));
v___x_437_ = l_List_foldl___at___00checkExport_spec__0(v_constMap_434_, v___x_436_);
v___x_438_ = l_Lean_Kernel_Environment_replay(v___x_437_, v___x_435_);
lean_dec_ref(v___x_437_);
if (lean_obj_tag(v___x_438_) == 0)
{
lean_object* v_a_439_; lean_object* v___x_440_; lean_object* v___x_441_; 
v_a_439_ = lean_ctor_get(v___x_438_, 0);
lean_inc(v_a_439_);
lean_dec_ref_known(v___x_438_, 1);
v___x_440_ = ((lean_object*)(l_checkExport___closed__12));
v___x_441_ = l_println(v___x_440_, v_silent_392_);
if (lean_obj_tag(v___x_441_) == 0)
{
lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; 
lean_dec_ref_known(v___x_441_, 1);
v___x_442_ = ((lean_object*)(l_checkExport___closed__14));
v___x_443_ = lean_box(0);
v___x_444_ = l_List_forIn_x27_loop___at___00checkExport_spec__1___redArg(v_constMap_434_, v_a_439_, v___x_442_, v___x_443_);
lean_dec_ref(v_constMap_434_);
if (lean_obj_tag(v___x_444_) == 0)
{
lean_object* v___x_446_; uint8_t v_isShared_447_; uint8_t v_isSharedCheck_452_; 
v_isSharedCheck_452_ = !lean_is_exclusive(v___x_444_);
if (v_isSharedCheck_452_ == 0)
{
lean_object* v_unused_453_; 
v_unused_453_ = lean_ctor_get(v___x_444_, 0);
lean_dec(v_unused_453_);
v___x_446_ = v___x_444_;
v_isShared_447_ = v_isSharedCheck_452_;
goto v_resetjp_445_;
}
else
{
lean_dec(v___x_444_);
v___x_446_ = lean_box(0);
v_isShared_447_ = v_isSharedCheck_452_;
goto v_resetjp_445_;
}
v_resetjp_445_:
{
lean_object* v___x_448_; lean_object* v___x_450_; 
v___x_448_ = l_checkExport___boxed__const__2;
if (v_isShared_447_ == 0)
{
lean_ctor_set(v___x_446_, 0, v___x_448_);
v___x_450_ = v___x_446_;
goto v_reusejp_449_;
}
else
{
lean_object* v_reuseFailAlloc_451_; 
v_reuseFailAlloc_451_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_451_, 0, v___x_448_);
v___x_450_ = v_reuseFailAlloc_451_;
goto v_reusejp_449_;
}
v_reusejp_449_:
{
return v___x_450_;
}
}
}
else
{
lean_object* v_a_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; 
v_a_454_ = lean_ctor_get(v___x_444_, 0);
lean_inc(v_a_454_);
lean_dec_ref_known(v___x_444_, 1);
v___x_455_ = ((lean_object*)(l_checkExport___closed__15));
v___x_456_ = lean_io_error_to_string(v_a_454_);
v___x_457_ = lean_string_append(v___x_455_, v___x_456_);
lean_dec_ref(v___x_456_);
v___x_458_ = l_println(v___x_457_, v_silent_392_);
if (lean_obj_tag(v___x_458_) == 0)
{
lean_object* v___x_460_; uint8_t v_isShared_461_; uint8_t v_isSharedCheck_466_; 
v_isSharedCheck_466_ = !lean_is_exclusive(v___x_458_);
if (v_isSharedCheck_466_ == 0)
{
lean_object* v_unused_467_; 
v_unused_467_ = lean_ctor_get(v___x_458_, 0);
lean_dec(v_unused_467_);
v___x_460_ = v___x_458_;
v_isShared_461_ = v_isSharedCheck_466_;
goto v_resetjp_459_;
}
else
{
lean_dec(v___x_458_);
v___x_460_ = lean_box(0);
v_isShared_461_ = v_isSharedCheck_466_;
goto v_resetjp_459_;
}
v_resetjp_459_:
{
lean_object* v___x_462_; lean_object* v___x_464_; 
v___x_462_ = l_checkExport___boxed__const__1;
if (v_isShared_461_ == 0)
{
lean_ctor_set(v___x_460_, 0, v___x_462_);
v___x_464_ = v___x_460_;
goto v_reusejp_463_;
}
else
{
lean_object* v_reuseFailAlloc_465_; 
v_reuseFailAlloc_465_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_465_, 0, v___x_462_);
v___x_464_ = v_reuseFailAlloc_465_;
goto v_reusejp_463_;
}
v_reusejp_463_:
{
return v___x_464_;
}
}
}
else
{
lean_object* v_a_468_; lean_object* v___x_470_; uint8_t v_isShared_471_; uint8_t v_isSharedCheck_475_; 
v_a_468_ = lean_ctor_get(v___x_458_, 0);
v_isSharedCheck_475_ = !lean_is_exclusive(v___x_458_);
if (v_isSharedCheck_475_ == 0)
{
v___x_470_ = v___x_458_;
v_isShared_471_ = v_isSharedCheck_475_;
goto v_resetjp_469_;
}
else
{
lean_inc(v_a_468_);
lean_dec(v___x_458_);
v___x_470_ = lean_box(0);
v_isShared_471_ = v_isSharedCheck_475_;
goto v_resetjp_469_;
}
v_resetjp_469_:
{
lean_object* v___x_473_; 
if (v_isShared_471_ == 0)
{
v___x_473_ = v___x_470_;
goto v_reusejp_472_;
}
else
{
lean_object* v_reuseFailAlloc_474_; 
v_reuseFailAlloc_474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_474_, 0, v_a_468_);
v___x_473_ = v_reuseFailAlloc_474_;
goto v_reusejp_472_;
}
v_reusejp_472_:
{
return v___x_473_;
}
}
}
}
}
else
{
lean_object* v_a_476_; 
lean_dec(v_a_439_);
lean_dec_ref(v_constMap_434_);
v_a_476_ = lean_ctor_get(v___x_441_, 0);
lean_inc(v_a_476_);
lean_dec_ref_known(v___x_441_, 1);
v_a_401_ = v_a_476_;
goto v___jp_400_;
}
}
else
{
lean_object* v_a_477_; 
lean_dec_ref(v_constMap_434_);
v_a_477_ = lean_ctor_get(v___x_438_, 0);
lean_inc(v_a_477_);
lean_dec_ref_known(v___x_438_, 1);
v_a_401_ = v_a_477_;
goto v___jp_400_;
}
}
else
{
lean_object* v_a_478_; lean_object* v___x_480_; uint8_t v_isShared_481_; uint8_t v_isSharedCheck_485_; 
lean_dec(v_a_430_);
v_a_478_ = lean_ctor_get(v___x_432_, 0);
v_isSharedCheck_485_ = !lean_is_exclusive(v___x_432_);
if (v_isSharedCheck_485_ == 0)
{
v___x_480_ = v___x_432_;
v_isShared_481_ = v_isSharedCheck_485_;
goto v_resetjp_479_;
}
else
{
lean_inc(v_a_478_);
lean_dec(v___x_432_);
v___x_480_ = lean_box(0);
v_isShared_481_ = v_isSharedCheck_485_;
goto v_resetjp_479_;
}
v_resetjp_479_:
{
lean_object* v___x_483_; 
if (v_isShared_481_ == 0)
{
v___x_483_ = v___x_480_;
goto v_reusejp_482_;
}
else
{
lean_object* v_reuseFailAlloc_484_; 
v_reuseFailAlloc_484_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_484_, 0, v_a_478_);
v___x_483_ = v_reuseFailAlloc_484_;
goto v_reusejp_482_;
}
v_reusejp_482_:
{
return v___x_483_;
}
}
}
}
else
{
lean_object* v_a_486_; lean_object* v___x_488_; uint8_t v_isShared_489_; uint8_t v_isSharedCheck_493_; 
v_a_486_ = lean_ctor_get(v___x_429_, 0);
v_isSharedCheck_493_ = !lean_is_exclusive(v___x_429_);
if (v_isSharedCheck_493_ == 0)
{
v___x_488_ = v___x_429_;
v_isShared_489_ = v_isSharedCheck_493_;
goto v_resetjp_487_;
}
else
{
lean_inc(v_a_486_);
lean_dec(v___x_429_);
v___x_488_ = lean_box(0);
v_isShared_489_ = v_isSharedCheck_493_;
goto v_resetjp_487_;
}
v_resetjp_487_:
{
lean_object* v___x_491_; 
if (v_isShared_489_ == 0)
{
v___x_491_ = v___x_488_;
goto v_reusejp_490_;
}
else
{
lean_object* v_reuseFailAlloc_492_; 
v_reuseFailAlloc_492_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_492_, 0, v_a_486_);
v___x_491_ = v_reuseFailAlloc_492_;
goto v_reusejp_490_;
}
v_reusejp_490_:
{
return v___x_491_;
}
}
}
}
else
{
lean_object* v_a_494_; lean_object* v___x_496_; uint8_t v_isShared_497_; uint8_t v_isSharedCheck_501_; 
v_a_494_ = lean_ctor_get(v___x_426_, 0);
v_isSharedCheck_501_ = !lean_is_exclusive(v___x_426_);
if (v_isSharedCheck_501_ == 0)
{
v___x_496_ = v___x_426_;
v_isShared_497_ = v_isSharedCheck_501_;
goto v_resetjp_495_;
}
else
{
lean_inc(v_a_494_);
lean_dec(v___x_426_);
v___x_496_ = lean_box(0);
v_isShared_497_ = v_isSharedCheck_501_;
goto v_resetjp_495_;
}
v_resetjp_495_:
{
lean_object* v___x_499_; 
if (v_isShared_497_ == 0)
{
v___x_499_ = v___x_496_;
goto v_reusejp_498_;
}
else
{
lean_object* v_reuseFailAlloc_500_; 
v_reuseFailAlloc_500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_500_, 0, v_a_494_);
v___x_499_ = v_reuseFailAlloc_500_;
goto v_reusejp_498_;
}
v_reusejp_498_:
{
return v___x_499_;
}
}
}
}
else
{
goto v___jp_394_;
}
}
else
{
goto v___jp_394_;
}
v___jp_394_:
{
lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; 
v___x_395_ = ((lean_object*)(l_checkExport___closed__0));
v___x_396_ = l_List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1(v_args_391_);
v___x_397_ = lean_string_append(v___x_395_, v___x_396_);
lean_dec_ref(v___x_396_);
v___x_398_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_398_, 0, v___x_397_);
v___x_399_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_399_, 0, v___x_398_);
return v___x_399_;
}
v___jp_400_:
{
lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; 
v___x_402_ = ((lean_object*)(l_checkExport___closed__1));
v___x_403_ = lean_io_error_to_string(v_a_401_);
v___x_404_ = lean_string_append(v___x_402_, v___x_403_);
lean_dec_ref(v___x_403_);
v___x_405_ = l_println(v___x_404_, v_silent_392_);
if (lean_obj_tag(v___x_405_) == 0)
{
lean_object* v___x_407_; uint8_t v_isShared_408_; uint8_t v_isSharedCheck_413_; 
v_isSharedCheck_413_ = !lean_is_exclusive(v___x_405_);
if (v_isSharedCheck_413_ == 0)
{
lean_object* v_unused_414_; 
v_unused_414_ = lean_ctor_get(v___x_405_, 0);
lean_dec(v_unused_414_);
v___x_407_ = v___x_405_;
v_isShared_408_ = v_isSharedCheck_413_;
goto v_resetjp_406_;
}
else
{
lean_dec(v___x_405_);
v___x_407_ = lean_box(0);
v_isShared_408_ = v_isSharedCheck_413_;
goto v_resetjp_406_;
}
v_resetjp_406_:
{
lean_object* v___x_409_; lean_object* v___x_411_; 
v___x_409_ = l_checkExport___boxed__const__1;
if (v_isShared_408_ == 0)
{
lean_ctor_set(v___x_407_, 0, v___x_409_);
v___x_411_ = v___x_407_;
goto v_reusejp_410_;
}
else
{
lean_object* v_reuseFailAlloc_412_; 
v_reuseFailAlloc_412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_412_, 0, v___x_409_);
v___x_411_ = v_reuseFailAlloc_412_;
goto v_reusejp_410_;
}
v_reusejp_410_:
{
return v___x_411_;
}
}
}
else
{
lean_object* v_a_415_; lean_object* v___x_417_; uint8_t v_isShared_418_; uint8_t v_isSharedCheck_422_; 
v_a_415_ = lean_ctor_get(v___x_405_, 0);
v_isSharedCheck_422_ = !lean_is_exclusive(v___x_405_);
if (v_isSharedCheck_422_ == 0)
{
v___x_417_ = v___x_405_;
v_isShared_418_ = v_isSharedCheck_422_;
goto v_resetjp_416_;
}
else
{
lean_inc(v_a_415_);
lean_dec(v___x_405_);
v___x_417_ = lean_box(0);
v_isShared_418_ = v_isSharedCheck_422_;
goto v_resetjp_416_;
}
v_resetjp_416_:
{
lean_object* v___x_420_; 
if (v_isShared_418_ == 0)
{
v___x_420_ = v___x_417_;
goto v_reusejp_419_;
}
else
{
lean_object* v_reuseFailAlloc_421_; 
v_reuseFailAlloc_421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_421_, 0, v_a_415_);
v___x_420_ = v_reuseFailAlloc_421_;
goto v_reusejp_419_;
}
v_reusejp_419_:
{
return v___x_420_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_checkExport___boxed(lean_object* v_args_502_, lean_object* v_silent_503_, lean_object* v_a_504_){
_start:
{
uint8_t v_silent_boxed_505_; lean_object* v_res_506_; 
v_silent_boxed_505_ = lean_unbox(v_silent_503_);
v_res_506_ = l_checkExport(v_args_502_, v_silent_boxed_505_);
lean_dec(v_args_502_);
return v_res_506_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkExport_spec__1(lean_object* v___x_507_, lean_object* v_a_508_, lean_object* v_as_509_, lean_object* v_as_x27_510_, lean_object* v_b_511_, lean_object* v_a_512_){
_start:
{
lean_object* v___x_514_; 
v___x_514_ = l_List_forIn_x27_loop___at___00checkExport_spec__1___redArg(v___x_507_, v_a_508_, v_as_x27_510_, v_b_511_);
return v___x_514_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkExport_spec__1___boxed(lean_object* v___x_515_, lean_object* v_a_516_, lean_object* v_as_517_, lean_object* v_as_x27_518_, lean_object* v_b_519_, lean_object* v_a_520_, lean_object* v___y_521_){
_start:
{
lean_object* v_res_522_; 
v_res_522_ = l_List_forIn_x27_loop___at___00checkExport_spec__1(v___x_515_, v_a_516_, v_as_517_, v_as_x27_518_, v_b_519_, v_a_520_);
lean_dec(v_as_x27_518_);
lean_dec(v_as_517_);
lean_dec_ref(v___x_515_);
return v_res_522_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00checkOlean_spec__3(uint8_t v_verbose_525_, uint8_t v_silent_526_, lean_object* v_as_527_, size_t v_sz_528_, size_t v_i_529_, lean_object* v_b_530_){
_start:
{
uint8_t v___x_532_; 
v___x_532_ = lean_usize_dec_lt(v_i_529_, v_sz_528_);
if (v___x_532_ == 0)
{
lean_object* v___x_533_; 
v___x_533_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_533_, 0, v_b_530_);
return v___x_533_;
}
else
{
lean_object* v_a_534_; lean_object* v_fst_535_; lean_object* v_snd_536_; lean_object* v___x_537_; 
v_a_534_ = lean_array_uget_borrowed(v_as_527_, v_i_529_);
v_fst_535_ = lean_ctor_get(v_a_534_, 0);
v_snd_536_ = lean_ctor_get(v_a_534_, 1);
v___x_537_ = lean_box(0);
if (v_verbose_525_ == 0)
{
goto v___jp_538_;
}
else
{
lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; 
v___x_556_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00checkOlean_spec__3___closed__1));
lean_inc(v_fst_535_);
v___x_557_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_fst_535_, v_verbose_525_);
v___x_558_ = lean_string_append(v___x_556_, v___x_557_);
lean_dec_ref(v___x_557_);
v___x_559_ = l_println(v___x_558_, v_silent_526_);
if (lean_obj_tag(v___x_559_) == 0)
{
lean_dec_ref_known(v___x_559_, 1);
goto v___jp_538_;
}
else
{
return v___x_559_;
}
}
v___jp_538_:
{
lean_object* v___x_539_; 
lean_inc(v_snd_536_);
v___x_539_ = lean_task_get_own(v_snd_536_);
if (lean_obj_tag(v___x_539_) == 0)
{
lean_object* v_a_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; 
v_a_540_ = lean_ctor_get(v___x_539_, 0);
lean_inc(v_a_540_);
lean_dec_ref_known(v___x_539_, 1);
v___x_541_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00checkOlean_spec__3___closed__0));
lean_inc(v_fst_535_);
v___x_542_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_fst_535_, v___x_532_);
v___x_543_ = lean_string_append(v___x_541_, v___x_542_);
lean_dec_ref(v___x_542_);
v___x_544_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_543_);
if (lean_obj_tag(v___x_544_) == 0)
{
lean_object* v___x_546_; uint8_t v_isShared_547_; uint8_t v_isSharedCheck_551_; 
v_isSharedCheck_551_ = !lean_is_exclusive(v___x_544_);
if (v_isSharedCheck_551_ == 0)
{
lean_object* v_unused_552_; 
v_unused_552_ = lean_ctor_get(v___x_544_, 0);
lean_dec(v_unused_552_);
v___x_546_ = v___x_544_;
v_isShared_547_ = v_isSharedCheck_551_;
goto v_resetjp_545_;
}
else
{
lean_dec(v___x_544_);
v___x_546_ = lean_box(0);
v_isShared_547_ = v_isSharedCheck_551_;
goto v_resetjp_545_;
}
v_resetjp_545_:
{
lean_object* v___x_549_; 
if (v_isShared_547_ == 0)
{
lean_ctor_set_tag(v___x_546_, 1);
lean_ctor_set(v___x_546_, 0, v_a_540_);
v___x_549_ = v___x_546_;
goto v_reusejp_548_;
}
else
{
lean_object* v_reuseFailAlloc_550_; 
v_reuseFailAlloc_550_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_550_, 0, v_a_540_);
v___x_549_ = v_reuseFailAlloc_550_;
goto v_reusejp_548_;
}
v_reusejp_548_:
{
return v___x_549_;
}
}
}
else
{
lean_dec(v_a_540_);
return v___x_544_;
}
}
else
{
size_t v___x_553_; size_t v___x_554_; 
lean_dec(v___x_539_);
v___x_553_ = ((size_t)1ULL);
v___x_554_ = lean_usize_add(v_i_529_, v___x_553_);
v_i_529_ = v___x_554_;
v_b_530_ = v___x_537_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00checkOlean_spec__3___boxed(lean_object* v_verbose_560_, lean_object* v_silent_561_, lean_object* v_as_562_, lean_object* v_sz_563_, lean_object* v_i_564_, lean_object* v_b_565_, lean_object* v___y_566_){
_start:
{
uint8_t v_verbose_boxed_567_; uint8_t v_silent_boxed_568_; size_t v_sz_boxed_569_; size_t v_i_boxed_570_; lean_object* v_res_571_; 
v_verbose_boxed_567_ = lean_unbox(v_verbose_560_);
v_silent_boxed_568_ = lean_unbox(v_silent_561_);
v_sz_boxed_569_ = lean_unbox_usize(v_sz_563_);
lean_dec(v_sz_563_);
v_i_boxed_570_ = lean_unbox_usize(v_i_564_);
lean_dec(v_i_564_);
v_res_571_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00checkOlean_spec__3(v_verbose_boxed_567_, v_silent_boxed_568_, v_as_562_, v_sz_boxed_569_, v_i_boxed_570_, v_b_565_);
lean_dec_ref(v_as_562_);
return v_res_571_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__2___redArg___lam__0(lean_object* v_head_572_){
_start:
{
lean_object* v___x_574_; 
v___x_574_ = l_replayFromImports(v_head_572_);
if (lean_obj_tag(v___x_574_) == 0)
{
lean_object* v_a_575_; lean_object* v___x_577_; uint8_t v_isShared_578_; uint8_t v_isSharedCheck_582_; 
v_a_575_ = lean_ctor_get(v___x_574_, 0);
v_isSharedCheck_582_ = !lean_is_exclusive(v___x_574_);
if (v_isSharedCheck_582_ == 0)
{
v___x_577_ = v___x_574_;
v_isShared_578_ = v_isSharedCheck_582_;
goto v_resetjp_576_;
}
else
{
lean_inc(v_a_575_);
lean_dec(v___x_574_);
v___x_577_ = lean_box(0);
v_isShared_578_ = v_isSharedCheck_582_;
goto v_resetjp_576_;
}
v_resetjp_576_:
{
lean_object* v___x_580_; 
if (v_isShared_578_ == 0)
{
lean_ctor_set_tag(v___x_577_, 1);
v___x_580_ = v___x_577_;
goto v_reusejp_579_;
}
else
{
lean_object* v_reuseFailAlloc_581_; 
v_reuseFailAlloc_581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_581_, 0, v_a_575_);
v___x_580_ = v_reuseFailAlloc_581_;
goto v_reusejp_579_;
}
v_reusejp_579_:
{
return v___x_580_;
}
}
}
else
{
lean_object* v_a_583_; lean_object* v___x_585_; uint8_t v_isShared_586_; uint8_t v_isSharedCheck_590_; 
v_a_583_ = lean_ctor_get(v___x_574_, 0);
v_isSharedCheck_590_ = !lean_is_exclusive(v___x_574_);
if (v_isSharedCheck_590_ == 0)
{
v___x_585_ = v___x_574_;
v_isShared_586_ = v_isSharedCheck_590_;
goto v_resetjp_584_;
}
else
{
lean_inc(v_a_583_);
lean_dec(v___x_574_);
v___x_585_ = lean_box(0);
v_isShared_586_ = v_isSharedCheck_590_;
goto v_resetjp_584_;
}
v_resetjp_584_:
{
lean_object* v___x_588_; 
if (v_isShared_586_ == 0)
{
lean_ctor_set_tag(v___x_585_, 0);
v___x_588_ = v___x_585_;
goto v_reusejp_587_;
}
else
{
lean_object* v_reuseFailAlloc_589_; 
v_reuseFailAlloc_589_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_589_, 0, v_a_583_);
v___x_588_ = v_reuseFailAlloc_589_;
goto v_reusejp_587_;
}
v_reusejp_587_:
{
return v___x_588_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__2___redArg___lam__0___boxed(lean_object* v_head_591_, lean_object* v___y_592_){
_start:
{
lean_object* v_res_593_; 
v_res_593_ = l_List_forIn_x27_loop___at___00checkOlean_spec__2___redArg___lam__0(v_head_591_);
return v_res_593_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__2___redArg(lean_object* v_as_x27_594_, lean_object* v_b_595_){
_start:
{
if (lean_obj_tag(v_as_x27_594_) == 0)
{
lean_object* v___x_597_; 
v___x_597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_597_, 0, v_b_595_);
return v___x_597_;
}
else
{
lean_object* v_head_598_; lean_object* v_tail_599_; lean_object* v___f_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; 
v_head_598_ = lean_ctor_get(v_as_x27_594_, 0);
v_tail_599_ = lean_ctor_get(v_as_x27_594_, 1);
lean_inc_n(v_head_598_, 2);
v___f_600_ = lean_alloc_closure((void*)(l_List_forIn_x27_loop___at___00checkOlean_spec__2___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_600_, 0, v_head_598_);
v___x_601_ = lean_unsigned_to_nat(0u);
v___x_602_ = lean_io_as_task(v___f_600_, v___x_601_);
v___x_603_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_603_, 0, v_head_598_);
lean_ctor_set(v___x_603_, 1, v___x_602_);
v___x_604_ = lean_array_push(v_b_595_, v___x_603_);
v_as_x27_594_ = v_tail_599_;
v_b_595_ = v___x_604_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__2___redArg___boxed(lean_object* v_as_x27_606_, lean_object* v_b_607_, lean_object* v___y_608_){
_start:
{
lean_object* v_res_609_; 
v_res_609_ = l_List_forIn_x27_loop___at___00checkOlean_spec__2___redArg(v_as_x27_606_, v_b_607_);
lean_dec(v_as_x27_606_);
return v_res_609_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00checkOlean_spec__5(lean_object* v_x_611_, lean_object* v_x_612_){
_start:
{
if (lean_obj_tag(v_x_611_) == 0)
{
lean_object* v___x_614_; lean_object* v___x_615_; 
v___x_614_ = l_List_reverse___redArg(v_x_612_);
v___x_615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_615_, 0, v___x_614_);
return v___x_615_;
}
else
{
lean_object* v_head_616_; lean_object* v_tail_617_; lean_object* v___x_619_; uint8_t v_isShared_620_; uint8_t v_isSharedCheck_631_; 
v_head_616_ = lean_ctor_get(v_x_611_, 0);
v_tail_617_ = lean_ctor_get(v_x_611_, 1);
v_isSharedCheck_631_ = !lean_is_exclusive(v_x_611_);
if (v_isSharedCheck_631_ == 0)
{
v___x_619_ = v_x_611_;
v_isShared_620_ = v_isSharedCheck_631_;
goto v_resetjp_618_;
}
else
{
lean_inc(v_tail_617_);
lean_inc(v_head_616_);
lean_dec(v_x_611_);
v___x_619_ = lean_box(0);
v_isShared_620_ = v_isSharedCheck_631_;
goto v_resetjp_618_;
}
v_resetjp_618_:
{
lean_object* v___x_621_; uint8_t v___x_622_; 
lean_inc(v_head_616_);
v___x_621_ = l_String_toName(v_head_616_);
v___x_622_ = l_Lean_Name_isAnonymous(v___x_621_);
if (v___x_622_ == 0)
{
lean_object* v___x_624_; 
lean_dec(v_head_616_);
if (v_isShared_620_ == 0)
{
lean_ctor_set(v___x_619_, 1, v_x_612_);
lean_ctor_set(v___x_619_, 0, v___x_621_);
v___x_624_ = v___x_619_;
goto v_reusejp_623_;
}
else
{
lean_object* v_reuseFailAlloc_626_; 
v_reuseFailAlloc_626_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_626_, 0, v___x_621_);
lean_ctor_set(v_reuseFailAlloc_626_, 1, v_x_612_);
v___x_624_ = v_reuseFailAlloc_626_;
goto v_reusejp_623_;
}
v_reusejp_623_:
{
v_x_611_ = v_tail_617_;
v_x_612_ = v___x_624_;
goto _start;
}
}
else
{
lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; 
lean_dec(v___x_621_);
lean_del_object(v___x_619_);
lean_dec(v_tail_617_);
lean_dec(v_x_612_);
v___x_627_ = ((lean_object*)(l_List_mapM_loop___at___00checkOlean_spec__5___closed__0));
v___x_628_ = lean_string_append(v___x_627_, v_head_616_);
lean_dec(v_head_616_);
v___x_629_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_629_, 0, v___x_628_);
v___x_630_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_630_, 0, v___x_629_);
return v___x_630_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00checkOlean_spec__5___boxed(lean_object* v_x_632_, lean_object* v_x_633_, lean_object* v___y_634_){
_start:
{
lean_object* v_res_635_; 
v_res_635_ = l_List_mapM_loop___at___00checkOlean_spec__5(v_x_632_, v_x_633_);
return v_res_635_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00checkOlean_spec__0(lean_object* v_val_636_, lean_object* v_a_637_, uint8_t v_fresh_638_, lean_object* v_as_639_, size_t v_sz_640_, size_t v_i_641_, lean_object* v_b_642_){
_start:
{
lean_object* v_a_645_; uint8_t v___x_649_; 
v___x_649_ = lean_usize_dec_lt(v_i_641_, v_sz_640_);
if (v___x_649_ == 0)
{
lean_object* v___x_650_; 
v___x_650_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_650_, 0, v_b_642_);
return v___x_650_;
}
else
{
lean_object* v_fst_651_; lean_object* v_snd_652_; lean_object* v___x_654_; uint8_t v_isShared_655_; uint8_t v_isSharedCheck_682_; 
v_fst_651_ = lean_ctor_get(v_b_642_, 0);
v_snd_652_ = lean_ctor_get(v_b_642_, 1);
v_isSharedCheck_682_ = !lean_is_exclusive(v_b_642_);
if (v_isSharedCheck_682_ == 0)
{
v___x_654_ = v_b_642_;
v_isShared_655_ = v_isSharedCheck_682_;
goto v_resetjp_653_;
}
else
{
lean_inc(v_snd_652_);
lean_inc(v_fst_651_);
lean_dec(v_b_642_);
v___x_654_ = lean_box(0);
v_isShared_655_ = v_isSharedCheck_682_;
goto v_resetjp_653_;
}
v_resetjp_653_:
{
lean_object* v_a_656_; lean_object* v___x_657_; 
v_a_656_ = lean_array_uget_borrowed(v_as_639_, v_i_641_);
lean_inc(v_a_656_);
v___x_657_ = l_Lean_searchModuleNameOfFileName(v_a_656_, v_val_636_);
if (lean_obj_tag(v___x_657_) == 0)
{
lean_object* v_a_658_; lean_object* v___y_660_; 
v_a_658_ = lean_ctor_get(v___x_657_, 0);
lean_inc(v_a_658_);
lean_dec_ref_known(v___x_657_, 1);
if (lean_obj_tag(v_a_658_) == 1)
{
lean_object* v_val_665_; 
v_val_665_ = lean_ctor_get(v_a_658_, 0);
lean_inc(v_val_665_);
lean_dec_ref_known(v_a_658_, 1);
if (v_fresh_638_ == 0)
{
uint8_t v___x_672_; 
v___x_672_ = l_Lean_Name_isPrefixOf(v_a_637_, v_val_665_);
if (v___x_672_ == 0)
{
goto v___jp_669_;
}
else
{
lean_dec(v_snd_652_);
goto v___jp_666_;
}
}
else
{
goto v___jp_669_;
}
v___jp_666_:
{
uint8_t v___x_667_; 
v___x_667_ = l_List_elem___at___00__private_Lean_Class_0__Lean_initFn_00___x40_Lean_Class_1274053790____hygCtx___hyg_2__spec__1(v_val_665_, v_fst_651_);
if (v___x_667_ == 0)
{
lean_object* v___x_668_; 
v___x_668_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_668_, 0, v_val_665_);
lean_ctor_set(v___x_668_, 1, v_fst_651_);
v___y_660_ = v___x_668_;
goto v___jp_659_;
}
else
{
lean_dec(v_val_665_);
v___y_660_ = v_fst_651_;
goto v___jp_659_;
}
}
v___jp_669_:
{
uint8_t v___x_670_; 
v___x_670_ = lean_name_eq(v_a_637_, v_val_665_);
if (v___x_670_ == 0)
{
lean_object* v___x_671_; 
lean_dec(v_val_665_);
lean_del_object(v___x_654_);
v___x_671_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_671_, 0, v_fst_651_);
lean_ctor_set(v___x_671_, 1, v_snd_652_);
v_a_645_ = v___x_671_;
goto v___jp_644_;
}
else
{
lean_dec(v_snd_652_);
goto v___jp_666_;
}
}
}
else
{
lean_object* v___x_673_; 
lean_dec(v_a_658_);
lean_del_object(v___x_654_);
v___x_673_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_673_, 0, v_fst_651_);
lean_ctor_set(v___x_673_, 1, v_snd_652_);
v_a_645_ = v___x_673_;
goto v___jp_644_;
}
v___jp_659_:
{
lean_object* v___x_661_; lean_object* v___x_663_; 
v___x_661_ = lean_box(v___x_649_);
if (v_isShared_655_ == 0)
{
lean_ctor_set(v___x_654_, 1, v___x_661_);
lean_ctor_set(v___x_654_, 0, v___y_660_);
v___x_663_ = v___x_654_;
goto v_reusejp_662_;
}
else
{
lean_object* v_reuseFailAlloc_664_; 
v_reuseFailAlloc_664_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_664_, 0, v___y_660_);
lean_ctor_set(v_reuseFailAlloc_664_, 1, v___x_661_);
v___x_663_ = v_reuseFailAlloc_664_;
goto v_reusejp_662_;
}
v_reusejp_662_:
{
v_a_645_ = v___x_663_;
goto v___jp_644_;
}
}
}
else
{
lean_object* v_a_674_; lean_object* v___x_676_; uint8_t v_isShared_677_; uint8_t v_isSharedCheck_681_; 
lean_del_object(v___x_654_);
lean_dec(v_snd_652_);
lean_dec(v_fst_651_);
v_a_674_ = lean_ctor_get(v___x_657_, 0);
v_isSharedCheck_681_ = !lean_is_exclusive(v___x_657_);
if (v_isSharedCheck_681_ == 0)
{
v___x_676_ = v___x_657_;
v_isShared_677_ = v_isSharedCheck_681_;
goto v_resetjp_675_;
}
else
{
lean_inc(v_a_674_);
lean_dec(v___x_657_);
v___x_676_ = lean_box(0);
v_isShared_677_ = v_isSharedCheck_681_;
goto v_resetjp_675_;
}
v_resetjp_675_:
{
lean_object* v___x_679_; 
if (v_isShared_677_ == 0)
{
v___x_679_ = v___x_676_;
goto v_reusejp_678_;
}
else
{
lean_object* v_reuseFailAlloc_680_; 
v_reuseFailAlloc_680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_680_, 0, v_a_674_);
v___x_679_ = v_reuseFailAlloc_680_;
goto v_reusejp_678_;
}
v_reusejp_678_:
{
return v___x_679_;
}
}
}
}
}
v___jp_644_:
{
size_t v___x_646_; size_t v___x_647_; 
v___x_646_ = ((size_t)1ULL);
v___x_647_ = lean_usize_add(v_i_641_, v___x_646_);
v_i_641_ = v___x_647_;
v_b_642_ = v_a_645_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00checkOlean_spec__0___boxed(lean_object* v_val_683_, lean_object* v_a_684_, lean_object* v_fresh_685_, lean_object* v_as_686_, lean_object* v_sz_687_, lean_object* v_i_688_, lean_object* v_b_689_, lean_object* v___y_690_){
_start:
{
uint8_t v_fresh_boxed_691_; size_t v_sz_boxed_692_; size_t v_i_boxed_693_; lean_object* v_res_694_; 
v_fresh_boxed_691_ = lean_unbox(v_fresh_685_);
v_sz_boxed_692_ = lean_unbox_usize(v_sz_687_);
lean_dec(v_sz_687_);
v_i_boxed_693_ = lean_unbox_usize(v_i_688_);
lean_dec(v_i_688_);
v_res_694_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00checkOlean_spec__0(v_val_683_, v_a_684_, v_fresh_boxed_691_, v_as_686_, v_sz_boxed_692_, v_i_boxed_693_, v_b_689_);
lean_dec_ref(v_as_686_);
lean_dec(v_a_684_);
lean_dec(v_val_683_);
return v_res_694_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__1___redArg(lean_object* v_val_697_, uint8_t v_fresh_698_, lean_object* v_as_x27_699_, lean_object* v_b_700_){
_start:
{
if (lean_obj_tag(v_as_x27_699_) == 0)
{
lean_object* v___x_702_; 
v___x_702_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_702_, 0, v_b_700_);
return v___x_702_;
}
else
{
lean_object* v_head_703_; lean_object* v_tail_704_; uint8_t v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; 
v_head_703_ = lean_ctor_get(v_as_x27_699_, 0);
v_tail_704_ = lean_ctor_get(v_as_x27_699_, 1);
v___x_705_ = 0;
v___x_706_ = ((lean_object*)(l_List_forIn_x27_loop___at___00checkOlean_spec__1___redArg___closed__0));
v___x_707_ = l_Lean_SearchPath_findAllWithExt(v_val_697_, v___x_706_);
if (lean_obj_tag(v___x_707_) == 0)
{
lean_object* v_a_708_; lean_object* v___x_709_; lean_object* v___x_710_; size_t v_sz_711_; size_t v___x_712_; lean_object* v___x_713_; 
v_a_708_ = lean_ctor_get(v___x_707_, 0);
lean_inc(v_a_708_);
lean_dec_ref_known(v___x_707_, 1);
v___x_709_ = lean_box(v___x_705_);
v___x_710_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_710_, 0, v_b_700_);
lean_ctor_set(v___x_710_, 1, v___x_709_);
v_sz_711_ = lean_array_size(v_a_708_);
v___x_712_ = ((size_t)0ULL);
v___x_713_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00checkOlean_spec__0(v_val_697_, v_head_703_, v_fresh_698_, v_a_708_, v_sz_711_, v___x_712_, v___x_710_);
lean_dec(v_a_708_);
if (lean_obj_tag(v___x_713_) == 0)
{
lean_object* v_a_714_; lean_object* v___x_716_; uint8_t v_isShared_717_; uint8_t v_isSharedCheck_730_; 
v_a_714_ = lean_ctor_get(v___x_713_, 0);
v_isSharedCheck_730_ = !lean_is_exclusive(v___x_713_);
if (v_isSharedCheck_730_ == 0)
{
v___x_716_ = v___x_713_;
v_isShared_717_ = v_isSharedCheck_730_;
goto v_resetjp_715_;
}
else
{
lean_inc(v_a_714_);
lean_dec(v___x_713_);
v___x_716_ = lean_box(0);
v_isShared_717_ = v_isSharedCheck_730_;
goto v_resetjp_715_;
}
v_resetjp_715_:
{
lean_object* v_snd_718_; uint8_t v___x_719_; 
v_snd_718_ = lean_ctor_get(v_a_714_, 1);
v___x_719_ = lean_unbox(v_snd_718_);
if (v___x_719_ == 0)
{
uint8_t v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_726_; 
lean_dec(v_a_714_);
v___x_720_ = 1;
v___x_721_ = ((lean_object*)(l_List_forIn_x27_loop___at___00checkOlean_spec__1___redArg___closed__1));
lean_inc(v_head_703_);
v___x_722_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_head_703_, v___x_720_);
v___x_723_ = lean_string_append(v___x_721_, v___x_722_);
lean_dec_ref(v___x_722_);
v___x_724_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_724_, 0, v___x_723_);
if (v_isShared_717_ == 0)
{
lean_ctor_set_tag(v___x_716_, 1);
lean_ctor_set(v___x_716_, 0, v___x_724_);
v___x_726_ = v___x_716_;
goto v_reusejp_725_;
}
else
{
lean_object* v_reuseFailAlloc_727_; 
v_reuseFailAlloc_727_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_727_, 0, v___x_724_);
v___x_726_ = v_reuseFailAlloc_727_;
goto v_reusejp_725_;
}
v_reusejp_725_:
{
return v___x_726_;
}
}
else
{
lean_object* v_fst_728_; 
lean_del_object(v___x_716_);
v_fst_728_ = lean_ctor_get(v_a_714_, 0);
lean_inc(v_fst_728_);
lean_dec(v_a_714_);
v_as_x27_699_ = v_tail_704_;
v_b_700_ = v_fst_728_;
goto _start;
}
}
}
else
{
lean_object* v_a_731_; lean_object* v___x_733_; uint8_t v_isShared_734_; uint8_t v_isSharedCheck_738_; 
v_a_731_ = lean_ctor_get(v___x_713_, 0);
v_isSharedCheck_738_ = !lean_is_exclusive(v___x_713_);
if (v_isSharedCheck_738_ == 0)
{
v___x_733_ = v___x_713_;
v_isShared_734_ = v_isSharedCheck_738_;
goto v_resetjp_732_;
}
else
{
lean_inc(v_a_731_);
lean_dec(v___x_713_);
v___x_733_ = lean_box(0);
v_isShared_734_ = v_isSharedCheck_738_;
goto v_resetjp_732_;
}
v_resetjp_732_:
{
lean_object* v___x_736_; 
if (v_isShared_734_ == 0)
{
v___x_736_ = v___x_733_;
goto v_reusejp_735_;
}
else
{
lean_object* v_reuseFailAlloc_737_; 
v_reuseFailAlloc_737_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_737_, 0, v_a_731_);
v___x_736_ = v_reuseFailAlloc_737_;
goto v_reusejp_735_;
}
v_reusejp_735_:
{
return v___x_736_;
}
}
}
}
else
{
lean_object* v_a_739_; lean_object* v___x_741_; uint8_t v_isShared_742_; uint8_t v_isSharedCheck_746_; 
lean_dec(v_b_700_);
v_a_739_ = lean_ctor_get(v___x_707_, 0);
v_isSharedCheck_746_ = !lean_is_exclusive(v___x_707_);
if (v_isSharedCheck_746_ == 0)
{
v___x_741_ = v___x_707_;
v_isShared_742_ = v_isSharedCheck_746_;
goto v_resetjp_740_;
}
else
{
lean_inc(v_a_739_);
lean_dec(v___x_707_);
v___x_741_ = lean_box(0);
v_isShared_742_ = v_isSharedCheck_746_;
goto v_resetjp_740_;
}
v_resetjp_740_:
{
lean_object* v___x_744_; 
if (v_isShared_742_ == 0)
{
v___x_744_ = v___x_741_;
goto v_reusejp_743_;
}
else
{
lean_object* v_reuseFailAlloc_745_; 
v_reuseFailAlloc_745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_745_, 0, v_a_739_);
v___x_744_ = v_reuseFailAlloc_745_;
goto v_reusejp_743_;
}
v_reusejp_743_:
{
return v___x_744_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__1___redArg___boxed(lean_object* v_val_747_, lean_object* v_fresh_748_, lean_object* v_as_x27_749_, lean_object* v_b_750_, lean_object* v___y_751_){
_start:
{
uint8_t v_fresh_boxed_752_; lean_object* v_res_753_; 
v_fresh_boxed_752_ = lean_unbox(v_fresh_748_);
v_res_753_ = l_List_forIn_x27_loop___at___00checkOlean_spec__1___redArg(v_val_747_, v_fresh_boxed_752_, v_as_x27_749_, v_b_750_);
lean_dec(v_as_x27_749_);
lean_dec(v_val_747_);
return v_res_753_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__4___redArg(uint8_t v_verbose_755_, uint8_t v_silent_756_, lean_object* v_as_x27_757_, lean_object* v_b_758_){
_start:
{
if (lean_obj_tag(v_as_x27_757_) == 0)
{
lean_object* v___x_760_; 
v___x_760_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_760_, 0, v_b_758_);
return v___x_760_;
}
else
{
lean_object* v_head_761_; lean_object* v_tail_762_; lean_object* v___x_763_; 
v_head_761_ = lean_ctor_get(v_as_x27_757_, 0);
v_tail_762_ = lean_ctor_get(v_as_x27_757_, 1);
v___x_763_ = lean_box(0);
if (v_verbose_755_ == 0)
{
goto v___jp_764_;
}
else
{
lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; 
v___x_767_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00checkOlean_spec__3___closed__1));
lean_inc(v_head_761_);
v___x_768_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_head_761_, v_verbose_755_);
v___x_769_ = lean_string_append(v___x_767_, v___x_768_);
lean_dec_ref(v___x_768_);
v___x_770_ = ((lean_object*)(l_List_forIn_x27_loop___at___00checkOlean_spec__4___redArg___closed__0));
v___x_771_ = lean_string_append(v___x_769_, v___x_770_);
v___x_772_ = l_println(v___x_771_, v_silent_756_);
if (lean_obj_tag(v___x_772_) == 0)
{
lean_dec_ref_known(v___x_772_, 1);
goto v___jp_764_;
}
else
{
return v___x_772_;
}
}
v___jp_764_:
{
lean_object* v___x_765_; 
lean_inc(v_head_761_);
v___x_765_ = l_replayFromFresh(v_head_761_);
if (lean_obj_tag(v___x_765_) == 0)
{
lean_dec_ref_known(v___x_765_, 1);
v_as_x27_757_ = v_tail_762_;
v_b_758_ = v___x_763_;
goto _start;
}
else
{
return v___x_765_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__4___redArg___boxed(lean_object* v_verbose_773_, lean_object* v_silent_774_, lean_object* v_as_x27_775_, lean_object* v_b_776_, lean_object* v___y_777_){
_start:
{
uint8_t v_verbose_boxed_778_; uint8_t v_silent_boxed_779_; lean_object* v_res_780_; 
v_verbose_boxed_778_ = lean_unbox(v_verbose_773_);
v_silent_boxed_779_ = lean_unbox(v_silent_774_);
v_res_780_ = l_List_forIn_x27_loop___at___00checkOlean_spec__4___redArg(v_verbose_boxed_778_, v_silent_boxed_779_, v_as_x27_775_, v_b_776_);
lean_dec(v_as_x27_775_);
return v_res_780_;
}
}
LEAN_EXPORT lean_object* l_checkOlean(lean_object* v_args_785_, uint8_t v_fresh_786_, uint8_t v_verbose_787_, uint8_t v_silent_788_){
_start:
{
lean_object* v_targets_794_; lean_object* v___x_856_; lean_object* v___x_857_; 
v___x_856_ = ((lean_object*)(l_checkOlean___closed__2));
v___x_857_ = l_Lean_findSysroot(v___x_856_);
if (lean_obj_tag(v___x_857_) == 0)
{
lean_object* v_a_858_; lean_object* v___x_859_; lean_object* v___x_860_; 
v_a_858_ = lean_ctor_get(v___x_857_, 0);
lean_inc(v_a_858_);
lean_dec_ref_known(v___x_857_, 1);
v___x_859_ = lean_box(0);
v___x_860_ = l_Lean_initSearchPath(v_a_858_, v___x_859_);
if (lean_obj_tag(v___x_860_) == 0)
{
lean_dec_ref_known(v___x_860_, 1);
if (lean_obj_tag(v_args_785_) == 0)
{
lean_object* v___x_861_; 
v___x_861_ = l_getCurrentModule();
if (lean_obj_tag(v___x_861_) == 0)
{
lean_object* v_a_862_; lean_object* v___x_863_; 
v_a_862_ = lean_ctor_get(v___x_861_, 0);
lean_inc(v_a_862_);
lean_dec_ref_known(v___x_861_, 1);
v___x_863_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_863_, 0, v_a_862_);
lean_ctor_set(v___x_863_, 1, v___x_859_);
v_targets_794_ = v___x_863_;
goto v___jp_793_;
}
else
{
lean_object* v_a_864_; lean_object* v___x_866_; uint8_t v_isShared_867_; uint8_t v_isSharedCheck_871_; 
v_a_864_ = lean_ctor_get(v___x_861_, 0);
v_isSharedCheck_871_ = !lean_is_exclusive(v___x_861_);
if (v_isSharedCheck_871_ == 0)
{
v___x_866_ = v___x_861_;
v_isShared_867_ = v_isSharedCheck_871_;
goto v_resetjp_865_;
}
else
{
lean_inc(v_a_864_);
lean_dec(v___x_861_);
v___x_866_ = lean_box(0);
v_isShared_867_ = v_isSharedCheck_871_;
goto v_resetjp_865_;
}
v_resetjp_865_:
{
lean_object* v___x_869_; 
if (v_isShared_867_ == 0)
{
v___x_869_ = v___x_866_;
goto v_reusejp_868_;
}
else
{
lean_object* v_reuseFailAlloc_870_; 
v_reuseFailAlloc_870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_870_, 0, v_a_864_);
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
else
{
lean_object* v___x_872_; 
v___x_872_ = l_List_mapM_loop___at___00checkOlean_spec__5(v_args_785_, v___x_859_);
if (lean_obj_tag(v___x_872_) == 0)
{
lean_object* v_a_873_; 
v_a_873_ = lean_ctor_get(v___x_872_, 0);
lean_inc(v_a_873_);
lean_dec_ref_known(v___x_872_, 1);
v_targets_794_ = v_a_873_;
goto v___jp_793_;
}
else
{
lean_object* v_a_874_; lean_object* v___x_876_; uint8_t v_isShared_877_; uint8_t v_isSharedCheck_881_; 
v_a_874_ = lean_ctor_get(v___x_872_, 0);
v_isSharedCheck_881_ = !lean_is_exclusive(v___x_872_);
if (v_isSharedCheck_881_ == 0)
{
v___x_876_ = v___x_872_;
v_isShared_877_ = v_isSharedCheck_881_;
goto v_resetjp_875_;
}
else
{
lean_inc(v_a_874_);
lean_dec(v___x_872_);
v___x_876_ = lean_box(0);
v_isShared_877_ = v_isSharedCheck_881_;
goto v_resetjp_875_;
}
v_resetjp_875_:
{
lean_object* v___x_879_; 
if (v_isShared_877_ == 0)
{
v___x_879_ = v___x_876_;
goto v_reusejp_878_;
}
else
{
lean_object* v_reuseFailAlloc_880_; 
v_reuseFailAlloc_880_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_880_, 0, v_a_874_);
v___x_879_ = v_reuseFailAlloc_880_;
goto v_reusejp_878_;
}
v_reusejp_878_:
{
return v___x_879_;
}
}
}
}
}
else
{
lean_object* v_a_882_; lean_object* v___x_884_; uint8_t v_isShared_885_; uint8_t v_isSharedCheck_889_; 
lean_dec(v_args_785_);
v_a_882_ = lean_ctor_get(v___x_860_, 0);
v_isSharedCheck_889_ = !lean_is_exclusive(v___x_860_);
if (v_isSharedCheck_889_ == 0)
{
v___x_884_ = v___x_860_;
v_isShared_885_ = v_isSharedCheck_889_;
goto v_resetjp_883_;
}
else
{
lean_inc(v_a_882_);
lean_dec(v___x_860_);
v___x_884_ = lean_box(0);
v_isShared_885_ = v_isSharedCheck_889_;
goto v_resetjp_883_;
}
v_resetjp_883_:
{
lean_object* v___x_887_; 
if (v_isShared_885_ == 0)
{
v___x_887_ = v___x_884_;
goto v_reusejp_886_;
}
else
{
lean_object* v_reuseFailAlloc_888_; 
v_reuseFailAlloc_888_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_888_, 0, v_a_882_);
v___x_887_ = v_reuseFailAlloc_888_;
goto v_reusejp_886_;
}
v_reusejp_886_:
{
return v___x_887_;
}
}
}
}
else
{
lean_object* v_a_890_; lean_object* v___x_892_; uint8_t v_isShared_893_; uint8_t v_isSharedCheck_897_; 
lean_dec(v_args_785_);
v_a_890_ = lean_ctor_get(v___x_857_, 0);
v_isSharedCheck_897_ = !lean_is_exclusive(v___x_857_);
if (v_isSharedCheck_897_ == 0)
{
v___x_892_ = v___x_857_;
v_isShared_893_ = v_isSharedCheck_897_;
goto v_resetjp_891_;
}
else
{
lean_inc(v_a_890_);
lean_dec(v___x_857_);
v___x_892_ = lean_box(0);
v_isShared_893_ = v_isSharedCheck_897_;
goto v_resetjp_891_;
}
v_resetjp_891_:
{
lean_object* v___x_895_; 
if (v_isShared_893_ == 0)
{
v___x_895_ = v___x_892_;
goto v_reusejp_894_;
}
else
{
lean_object* v_reuseFailAlloc_896_; 
v_reuseFailAlloc_896_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_896_, 0, v_a_890_);
v___x_895_ = v_reuseFailAlloc_896_;
goto v_reusejp_894_;
}
v_reusejp_894_:
{
return v___x_895_;
}
}
}
v___jp_790_:
{
lean_object* v___x_791_; lean_object* v___x_792_; 
v___x_791_ = l_checkExport___boxed__const__2;
v___x_792_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_792_, 0, v___x_791_);
return v___x_792_;
}
v___jp_793_:
{
lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; 
v___x_795_ = lean_box(0);
v___x_796_ = l_Lean_searchPathRef;
v___x_797_ = lean_st_ref_get(v___x_796_);
v___x_798_ = l_List_forIn_x27_loop___at___00checkOlean_spec__1___redArg(v___x_797_, v_fresh_786_, v_targets_794_, v___x_795_);
lean_dec(v_targets_794_);
lean_dec(v___x_797_);
if (lean_obj_tag(v___x_798_) == 0)
{
if (v_fresh_786_ == 0)
{
lean_object* v_a_799_; lean_object* v___x_800_; lean_object* v___x_801_; 
v_a_799_ = lean_ctor_get(v___x_798_, 0);
lean_inc(v_a_799_);
lean_dec_ref_known(v___x_798_, 1);
v___x_800_ = ((lean_object*)(l_checkOlean___closed__0));
v___x_801_ = l_List_forIn_x27_loop___at___00checkOlean_spec__2___redArg(v_a_799_, v___x_800_);
lean_dec(v_a_799_);
if (lean_obj_tag(v___x_801_) == 0)
{
lean_object* v_a_802_; lean_object* v___x_803_; size_t v_sz_804_; size_t v___x_805_; lean_object* v___x_806_; 
v_a_802_ = lean_ctor_get(v___x_801_, 0);
lean_inc(v_a_802_);
lean_dec_ref_known(v___x_801_, 1);
v___x_803_ = lean_box(0);
v_sz_804_ = lean_array_size(v_a_802_);
v___x_805_ = ((size_t)0ULL);
v___x_806_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00checkOlean_spec__3(v_verbose_787_, v_silent_788_, v_a_802_, v_sz_804_, v___x_805_, v___x_803_);
lean_dec(v_a_802_);
if (lean_obj_tag(v___x_806_) == 0)
{
lean_dec_ref_known(v___x_806_, 1);
goto v___jp_790_;
}
else
{
lean_object* v_a_807_; lean_object* v___x_809_; uint8_t v_isShared_810_; uint8_t v_isSharedCheck_814_; 
v_a_807_ = lean_ctor_get(v___x_806_, 0);
v_isSharedCheck_814_ = !lean_is_exclusive(v___x_806_);
if (v_isSharedCheck_814_ == 0)
{
v___x_809_ = v___x_806_;
v_isShared_810_ = v_isSharedCheck_814_;
goto v_resetjp_808_;
}
else
{
lean_inc(v_a_807_);
lean_dec(v___x_806_);
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
v_reuseFailAlloc_813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_813_, 0, v_a_807_);
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
else
{
lean_object* v_a_815_; lean_object* v___x_817_; uint8_t v_isShared_818_; uint8_t v_isSharedCheck_822_; 
v_a_815_ = lean_ctor_get(v___x_801_, 0);
v_isSharedCheck_822_ = !lean_is_exclusive(v___x_801_);
if (v_isSharedCheck_822_ == 0)
{
v___x_817_ = v___x_801_;
v_isShared_818_ = v_isSharedCheck_822_;
goto v_resetjp_816_;
}
else
{
lean_inc(v_a_815_);
lean_dec(v___x_801_);
v___x_817_ = lean_box(0);
v_isShared_818_ = v_isSharedCheck_822_;
goto v_resetjp_816_;
}
v_resetjp_816_:
{
lean_object* v___x_820_; 
if (v_isShared_818_ == 0)
{
v___x_820_ = v___x_817_;
goto v_reusejp_819_;
}
else
{
lean_object* v_reuseFailAlloc_821_; 
v_reuseFailAlloc_821_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_821_, 0, v_a_815_);
v___x_820_ = v_reuseFailAlloc_821_;
goto v_reusejp_819_;
}
v_reusejp_819_:
{
return v___x_820_;
}
}
}
}
else
{
lean_object* v_a_823_; lean_object* v___x_825_; uint8_t v_isShared_826_; uint8_t v_isSharedCheck_847_; 
v_a_823_ = lean_ctor_get(v___x_798_, 0);
v_isSharedCheck_847_ = !lean_is_exclusive(v___x_798_);
if (v_isSharedCheck_847_ == 0)
{
v___x_825_ = v___x_798_;
v_isShared_826_ = v_isSharedCheck_847_;
goto v_resetjp_824_;
}
else
{
lean_inc(v_a_823_);
lean_dec(v___x_798_);
v___x_825_ = lean_box(0);
v_isShared_826_ = v_isSharedCheck_847_;
goto v_resetjp_824_;
}
v_resetjp_824_:
{
lean_object* v___x_827_; lean_object* v___x_828_; uint8_t v___x_829_; 
v___x_827_ = l_List_lengthTR___redArg(v_a_823_);
v___x_828_ = lean_unsigned_to_nat(1u);
v___x_829_ = lean_nat_dec_eq(v___x_827_, v___x_828_);
lean_dec(v___x_827_);
if (v___x_829_ == 0)
{
lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_835_; 
v___x_830_ = ((lean_object*)(l_checkOlean___closed__1));
v___x_831_ = l_List_toString___at___00Lean_Environment_AddConstAsyncResult_commitConst_spec__1(v_a_823_);
v___x_832_ = lean_string_append(v___x_830_, v___x_831_);
lean_dec_ref(v___x_831_);
v___x_833_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_833_, 0, v___x_832_);
if (v_isShared_826_ == 0)
{
lean_ctor_set_tag(v___x_825_, 1);
lean_ctor_set(v___x_825_, 0, v___x_833_);
v___x_835_ = v___x_825_;
goto v_reusejp_834_;
}
else
{
lean_object* v_reuseFailAlloc_836_; 
v_reuseFailAlloc_836_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_836_, 0, v___x_833_);
v___x_835_ = v_reuseFailAlloc_836_;
goto v_reusejp_834_;
}
v_reusejp_834_:
{
return v___x_835_;
}
}
else
{
lean_object* v___x_837_; lean_object* v___x_838_; 
lean_del_object(v___x_825_);
v___x_837_ = lean_box(0);
v___x_838_ = l_List_forIn_x27_loop___at___00checkOlean_spec__4___redArg(v_verbose_787_, v_silent_788_, v_a_823_, v___x_837_);
lean_dec(v_a_823_);
if (lean_obj_tag(v___x_838_) == 0)
{
lean_dec_ref_known(v___x_838_, 1);
goto v___jp_790_;
}
else
{
lean_object* v_a_839_; lean_object* v___x_841_; uint8_t v_isShared_842_; uint8_t v_isSharedCheck_846_; 
v_a_839_ = lean_ctor_get(v___x_838_, 0);
v_isSharedCheck_846_ = !lean_is_exclusive(v___x_838_);
if (v_isSharedCheck_846_ == 0)
{
v___x_841_ = v___x_838_;
v_isShared_842_ = v_isSharedCheck_846_;
goto v_resetjp_840_;
}
else
{
lean_inc(v_a_839_);
lean_dec(v___x_838_);
v___x_841_ = lean_box(0);
v_isShared_842_ = v_isSharedCheck_846_;
goto v_resetjp_840_;
}
v_resetjp_840_:
{
lean_object* v___x_844_; 
if (v_isShared_842_ == 0)
{
v___x_844_ = v___x_841_;
goto v_reusejp_843_;
}
else
{
lean_object* v_reuseFailAlloc_845_; 
v_reuseFailAlloc_845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_845_, 0, v_a_839_);
v___x_844_ = v_reuseFailAlloc_845_;
goto v_reusejp_843_;
}
v_reusejp_843_:
{
return v___x_844_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_848_; lean_object* v___x_850_; uint8_t v_isShared_851_; uint8_t v_isSharedCheck_855_; 
v_a_848_ = lean_ctor_get(v___x_798_, 0);
v_isSharedCheck_855_ = !lean_is_exclusive(v___x_798_);
if (v_isSharedCheck_855_ == 0)
{
v___x_850_ = v___x_798_;
v_isShared_851_ = v_isSharedCheck_855_;
goto v_resetjp_849_;
}
else
{
lean_inc(v_a_848_);
lean_dec(v___x_798_);
v___x_850_ = lean_box(0);
v_isShared_851_ = v_isSharedCheck_855_;
goto v_resetjp_849_;
}
v_resetjp_849_:
{
lean_object* v___x_853_; 
if (v_isShared_851_ == 0)
{
v___x_853_ = v___x_850_;
goto v_reusejp_852_;
}
else
{
lean_object* v_reuseFailAlloc_854_; 
v_reuseFailAlloc_854_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_854_, 0, v_a_848_);
v___x_853_ = v_reuseFailAlloc_854_;
goto v_reusejp_852_;
}
v_reusejp_852_:
{
return v___x_853_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_checkOlean___boxed(lean_object* v_args_898_, lean_object* v_fresh_899_, lean_object* v_verbose_900_, lean_object* v_silent_901_, lean_object* v_a_902_){
_start:
{
uint8_t v_fresh_boxed_903_; uint8_t v_verbose_boxed_904_; uint8_t v_silent_boxed_905_; lean_object* v_res_906_; 
v_fresh_boxed_903_ = lean_unbox(v_fresh_899_);
v_verbose_boxed_904_ = lean_unbox(v_verbose_900_);
v_silent_boxed_905_ = lean_unbox(v_silent_901_);
v_res_906_ = l_checkOlean(v_args_898_, v_fresh_boxed_903_, v_verbose_boxed_904_, v_silent_boxed_905_);
return v_res_906_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__1(lean_object* v_val_907_, uint8_t v_fresh_908_, lean_object* v_as_909_, lean_object* v_as_x27_910_, lean_object* v_b_911_, lean_object* v_a_912_){
_start:
{
lean_object* v___x_914_; 
v___x_914_ = l_List_forIn_x27_loop___at___00checkOlean_spec__1___redArg(v_val_907_, v_fresh_908_, v_as_x27_910_, v_b_911_);
return v___x_914_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__1___boxed(lean_object* v_val_915_, lean_object* v_fresh_916_, lean_object* v_as_917_, lean_object* v_as_x27_918_, lean_object* v_b_919_, lean_object* v_a_920_, lean_object* v___y_921_){
_start:
{
uint8_t v_fresh_boxed_922_; lean_object* v_res_923_; 
v_fresh_boxed_922_ = lean_unbox(v_fresh_916_);
v_res_923_ = l_List_forIn_x27_loop___at___00checkOlean_spec__1(v_val_915_, v_fresh_boxed_922_, v_as_917_, v_as_x27_918_, v_b_919_, v_a_920_);
lean_dec(v_as_x27_918_);
lean_dec(v_as_917_);
lean_dec(v_val_915_);
return v_res_923_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__2(lean_object* v_as_924_, lean_object* v_as_x27_925_, lean_object* v_b_926_, lean_object* v_a_927_){
_start:
{
lean_object* v___x_929_; 
v___x_929_ = l_List_forIn_x27_loop___at___00checkOlean_spec__2___redArg(v_as_x27_925_, v_b_926_);
return v___x_929_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__2___boxed(lean_object* v_as_930_, lean_object* v_as_x27_931_, lean_object* v_b_932_, lean_object* v_a_933_, lean_object* v___y_934_){
_start:
{
lean_object* v_res_935_; 
v_res_935_ = l_List_forIn_x27_loop___at___00checkOlean_spec__2(v_as_930_, v_as_x27_931_, v_b_932_, v_a_933_);
lean_dec(v_as_x27_931_);
lean_dec(v_as_930_);
return v_res_935_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__4(uint8_t v_verbose_936_, uint8_t v_silent_937_, lean_object* v_as_938_, lean_object* v_as_x27_939_, lean_object* v_b_940_, lean_object* v_a_941_){
_start:
{
lean_object* v___x_943_; 
v___x_943_ = l_List_forIn_x27_loop___at___00checkOlean_spec__4___redArg(v_verbose_936_, v_silent_937_, v_as_x27_939_, v_b_940_);
return v___x_943_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__4___boxed(lean_object* v_verbose_944_, lean_object* v_silent_945_, lean_object* v_as_946_, lean_object* v_as_x27_947_, lean_object* v_b_948_, lean_object* v_a_949_, lean_object* v___y_950_){
_start:
{
uint8_t v_verbose_boxed_951_; uint8_t v_silent_boxed_952_; lean_object* v_res_953_; 
v_verbose_boxed_951_ = lean_unbox(v_verbose_944_);
v_silent_boxed_952_ = lean_unbox(v_silent_945_);
v_res_953_ = l_List_forIn_x27_loop___at___00checkOlean_spec__4(v_verbose_boxed_951_, v_silent_boxed_952_, v_as_946_, v_as_x27_947_, v_b_948_, v_a_949_);
lean_dec(v_as_x27_947_);
lean_dec(v_as_946_);
return v_res_953_;
}
}
static lean_object* _init_l_List_partition_loop___at___00main_spec__0___closed__1(void){
_start:
{
lean_object* v___x_955_; lean_object* v___x_956_; 
v___x_955_ = ((lean_object*)(l_List_partition_loop___at___00main_spec__0___closed__0));
v___x_956_ = lean_string_utf8_byte_size(v___x_955_);
return v___x_956_;
}
}
LEAN_EXPORT lean_object* l_List_partition_loop___at___00main_spec__0(lean_object* v_a_957_, lean_object* v_a_958_){
_start:
{
if (lean_obj_tag(v_a_957_) == 0)
{
lean_object* v_fst_959_; lean_object* v_snd_960_; lean_object* v___x_962_; uint8_t v_isShared_963_; uint8_t v_isSharedCheck_969_; 
v_fst_959_ = lean_ctor_get(v_a_958_, 0);
v_snd_960_ = lean_ctor_get(v_a_958_, 1);
v_isSharedCheck_969_ = !lean_is_exclusive(v_a_958_);
if (v_isSharedCheck_969_ == 0)
{
v___x_962_ = v_a_958_;
v_isShared_963_ = v_isSharedCheck_969_;
goto v_resetjp_961_;
}
else
{
lean_inc(v_snd_960_);
lean_inc(v_fst_959_);
lean_dec(v_a_958_);
v___x_962_ = lean_box(0);
v_isShared_963_ = v_isSharedCheck_969_;
goto v_resetjp_961_;
}
v_resetjp_961_:
{
lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_967_; 
v___x_964_ = l_List_reverse___redArg(v_fst_959_);
v___x_965_ = l_List_reverse___redArg(v_snd_960_);
if (v_isShared_963_ == 0)
{
lean_ctor_set(v___x_962_, 1, v___x_965_);
lean_ctor_set(v___x_962_, 0, v___x_964_);
v___x_967_ = v___x_962_;
goto v_reusejp_966_;
}
else
{
lean_object* v_reuseFailAlloc_968_; 
v_reuseFailAlloc_968_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_968_, 0, v___x_964_);
lean_ctor_set(v_reuseFailAlloc_968_, 1, v___x_965_);
v___x_967_ = v_reuseFailAlloc_968_;
goto v_reusejp_966_;
}
v_reusejp_966_:
{
return v___x_967_;
}
}
}
else
{
lean_object* v_head_970_; lean_object* v_tail_971_; lean_object* v___x_973_; uint8_t v_isShared_974_; uint8_t v_isSharedCheck_998_; 
v_head_970_ = lean_ctor_get(v_a_957_, 0);
v_tail_971_ = lean_ctor_get(v_a_957_, 1);
v_isSharedCheck_998_ = !lean_is_exclusive(v_a_957_);
if (v_isSharedCheck_998_ == 0)
{
v___x_973_ = v_a_957_;
v_isShared_974_ = v_isSharedCheck_998_;
goto v_resetjp_972_;
}
else
{
lean_inc(v_tail_971_);
lean_inc(v_head_970_);
lean_dec(v_a_957_);
v___x_973_ = lean_box(0);
v_isShared_974_ = v_isSharedCheck_998_;
goto v_resetjp_972_;
}
v_resetjp_972_:
{
lean_object* v_fst_975_; lean_object* v_snd_976_; lean_object* v___x_978_; uint8_t v_isShared_979_; uint8_t v_isSharedCheck_997_; 
v_fst_975_ = lean_ctor_get(v_a_958_, 0);
v_snd_976_ = lean_ctor_get(v_a_958_, 1);
v_isSharedCheck_997_ = !lean_is_exclusive(v_a_958_);
if (v_isSharedCheck_997_ == 0)
{
v___x_978_ = v_a_958_;
v_isShared_979_ = v_isSharedCheck_997_;
goto v_resetjp_977_;
}
else
{
lean_inc(v_snd_976_);
lean_inc(v_fst_975_);
lean_dec(v_a_958_);
v___x_978_ = lean_box(0);
v_isShared_979_ = v_isSharedCheck_997_;
goto v_resetjp_977_;
}
v_resetjp_977_:
{
lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; uint8_t v___x_991_; 
v___x_988_ = ((lean_object*)(l_List_partition_loop___at___00main_spec__0___closed__0));
v___x_989_ = lean_string_utf8_byte_size(v_head_970_);
v___x_990_ = lean_obj_once(&l_List_partition_loop___at___00main_spec__0___closed__1, &l_List_partition_loop___at___00main_spec__0___closed__1_once, _init_l_List_partition_loop___at___00main_spec__0___closed__1);
v___x_991_ = lean_nat_dec_le(v___x_990_, v___x_989_);
if (v___x_991_ == 0)
{
goto v___jp_980_;
}
else
{
lean_object* v___x_992_; uint8_t v___x_993_; 
v___x_992_ = lean_unsigned_to_nat(0u);
v___x_993_ = lean_string_memcmp(v_head_970_, v___x_988_, v___x_992_, v___x_992_, v___x_990_);
if (v___x_993_ == 0)
{
goto v___jp_980_;
}
else
{
lean_object* v___x_994_; lean_object* v___x_995_; 
lean_del_object(v___x_978_);
lean_del_object(v___x_973_);
v___x_994_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_994_, 0, v_head_970_);
lean_ctor_set(v___x_994_, 1, v_fst_975_);
v___x_995_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_995_, 0, v___x_994_);
lean_ctor_set(v___x_995_, 1, v_snd_976_);
v_a_957_ = v_tail_971_;
v_a_958_ = v___x_995_;
goto _start;
}
}
v___jp_980_:
{
lean_object* v___x_982_; 
if (v_isShared_974_ == 0)
{
lean_ctor_set(v___x_973_, 1, v_snd_976_);
v___x_982_ = v___x_973_;
goto v_reusejp_981_;
}
else
{
lean_object* v_reuseFailAlloc_987_; 
v_reuseFailAlloc_987_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_987_, 0, v_head_970_);
lean_ctor_set(v_reuseFailAlloc_987_, 1, v_snd_976_);
v___x_982_ = v_reuseFailAlloc_987_;
goto v_reusejp_981_;
}
v_reusejp_981_:
{
lean_object* v___x_984_; 
if (v_isShared_979_ == 0)
{
lean_ctor_set(v___x_978_, 1, v___x_982_);
v___x_984_ = v___x_978_;
goto v_reusejp_983_;
}
else
{
lean_object* v_reuseFailAlloc_986_; 
v_reuseFailAlloc_986_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_986_, 0, v_fst_975_);
lean_ctor_set(v_reuseFailAlloc_986_, 1, v___x_982_);
v___x_984_ = v_reuseFailAlloc_986_;
goto v_reusejp_983_;
}
v_reusejp_983_:
{
v_a_957_ = v_tail_971_;
v_a_958_ = v___x_984_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* _lean_main(lean_object* v_args_1006_){
_start:
{
lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v_fst_1010_; lean_object* v_snd_1011_; uint8_t v___y_1013_; lean_object* v___x_1019_; uint8_t v___x_1020_; 
v___x_1008_ = ((lean_object*)(l_main___closed__0));
v___x_1009_ = l_List_partition_loop___at___00main_spec__0(v_args_1006_, v___x_1008_);
v_fst_1010_ = lean_ctor_get(v___x_1009_, 0);
lean_inc(v_fst_1010_);
v_snd_1011_ = lean_ctor_get(v___x_1009_, 1);
lean_inc(v_snd_1011_);
lean_dec_ref(v___x_1009_);
v___x_1019_ = ((lean_object*)(l_main___closed__3));
v___x_1020_ = l_List_elem___at___00Lean_isAutoDeclOrPrivate__Internal_spec__0(v___x_1019_, v_fst_1010_);
if (v___x_1020_ == 0)
{
lean_object* v___x_1021_; uint8_t v___x_1022_; 
v___x_1021_ = ((lean_object*)(l_main___closed__4));
v___x_1022_ = l_List_elem___at___00Lean_isAutoDeclOrPrivate__Internal_spec__0(v___x_1021_, v_fst_1010_);
if (v___x_1022_ == 0)
{
lean_object* v___x_1023_; uint8_t v___x_1024_; 
v___x_1023_ = ((lean_object*)(l_main___closed__5));
v___x_1024_ = l_List_elem___at___00Lean_isAutoDeclOrPrivate__Internal_spec__0(v___x_1023_, v_fst_1010_);
v___y_1013_ = v___x_1024_;
goto v___jp_1012_;
}
else
{
v___y_1013_ = v___x_1022_;
goto v___jp_1012_;
}
}
else
{
lean_object* v___x_1025_; uint8_t v___x_1026_; lean_object* v___x_1027_; 
v___x_1025_ = ((lean_object*)(l_main___closed__2));
v___x_1026_ = l_List_elem___at___00Lean_isAutoDeclOrPrivate__Internal_spec__0(v___x_1025_, v_fst_1010_);
lean_dec(v_fst_1010_);
v___x_1027_ = l_checkExport(v_snd_1011_, v___x_1026_);
lean_dec(v_snd_1011_);
return v___x_1027_;
}
v___jp_1012_:
{
lean_object* v___x_1014_; uint8_t v___x_1015_; lean_object* v___x_1016_; uint8_t v___x_1017_; lean_object* v___x_1018_; 
v___x_1014_ = ((lean_object*)(l_main___closed__1));
v___x_1015_ = l_List_elem___at___00Lean_isAutoDeclOrPrivate__Internal_spec__0(v___x_1014_, v_fst_1010_);
v___x_1016_ = ((lean_object*)(l_main___closed__2));
v___x_1017_ = l_List_elem___at___00Lean_isAutoDeclOrPrivate__Internal_spec__0(v___x_1016_, v_fst_1010_);
lean_dec(v_fst_1010_);
v___x_1018_ = l_checkOlean(v_snd_1011_, v___x_1015_, v___y_1013_, v___x_1017_);
return v___x_1018_;
}
}
}
LEAN_EXPORT lean_object* l_main___boxed(lean_object* v_args_1028_, lean_object* v_a_1029_){
_start:
{
lean_object* v_res_1030_; 
v_res_1030_ = _lean_main(v_args_1028_);
return v_res_1030_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lean_CoreM(uint8_t builtin);
lean_object* initialize_Lean_Replay(uint8_t builtin);
lean_object* initialize_Lake_Load_Manifest(uint8_t builtin);
lean_object* initialize_LeanExport_Parse(uint8_t builtin);
void lean_initialize();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_LeanChecker(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
lean_initialize();
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_CoreM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Replay(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Load_Manifest(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanExport_Parse(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_checkExport___boxed__const__1 = _init_l_checkExport___boxed__const__1();
lean_mark_persistent(l_checkExport___boxed__const__1);
l_checkExport___boxed__const__2 = _init_l_checkExport___boxed__const__2();
lean_mark_persistent(l_checkExport___boxed__const__2);
return lean_io_result_mk_ok(lean_box(0));
}
char ** lean_setup_args(int argc, char ** argv);
#if defined(WIN32) || defined(_WIN32)
#include <windows.h>
#endif
lean_object* run_main(int argc, char ** argv) {
    lean_object* in = lean_box(0);
    int i = argc;
    while (i > 1) {
      lean_object* n;
      i--;
      n = lean_alloc_ctor(1,2,0); lean_ctor_set(n, 0, lean_mk_string(argv[i])); lean_ctor_set(n, 1, in);
      in = n;
    }
    return _lean_main(in);
}
int main(int argc, char ** argv) {
#if defined(WIN32) || defined(_WIN32)
  SetErrorMode(SEM_FAILCRITICALERRORS);
  SetConsoleOutputCP(CP_UTF8);
#endif
  lean_object* res;
  argv = lean_setup_args(argc, argv);
  res = initialize_LeanChecker(1 /* builtin */);
  lean_io_mark_end_initialization();
  if (lean_io_result_is_ok(res)) {
    lean_dec_ref(res);
    lean_init_task_manager();
    res = lean_run_main(&run_main, argc, argv);
  }
  lean_finalize_task_manager();
  if (lean_io_result_is_ok(res)) {
    int ret = lean_unbox_uint32(lean_io_result_get_value(res));
    lean_dec_ref(res);
    return ret;
  } else {
    lean_io_result_show_error(res);
    lean_dec_ref(res);
    return 1;
  }
}
#ifdef __cplusplus
}
#endif
